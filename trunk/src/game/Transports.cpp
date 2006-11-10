/* 
 * Copyright (C) 2005,2006 MaNGOS <http://www.mangosproject.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "Transports.h"
#include "MapManager.h"
#include "ObjectMgr.h"
#include "Path.h"

#include "Common.h"

#include "WorldPacket.h"

#include "Database/DBCStores.h"

void MapManager::LoadTransports()
{
    QueryResult *result = sDatabase.Query("SELECT `entry`, `name`, `period` FROM transports");
    if(!result) 
        return;

    uint32 entry;
    string name;
    
    do {
        Transport *t = new Transport;

        Field *fields = result->Fetch();
        
        entry = fields[0].GetUInt32();
        name = fields[1].GetString();
        t->m_period = fields[2].GetUInt32();

        const GameObjectInfo *goinfo = objmgr.GetGameObjectInfo(entry);
        
        t->GenerateWaypoints(goinfo->sound0);

        sLog.outString("Loading transport between %s, %s", name.c_str(), goinfo->name);
        t->m_name = goinfo->name;

        float x, y, z, o;
        uint32 mapid;
        x = t->m_WayPoints[0].x; y = t->m_WayPoints[0].y; z = t->m_WayPoints[0].z; mapid = t->m_WayPoints[0].mapid; o = 1;
        
        t->Create(entry, goinfo->displayId, mapid, x, y, z, o, 100);
        m_Transports.push_back(t);
        //If we someday decide to use the grid to track transports, here:
        //MapManager::Instance().LoadGrid(mapid,x,y,true);
        //MapManager::Instance().GetMap(t->GetMapId())->Add<GameObject>((GameObject *)t);        
    } while(result->NextRow());
    delete result;

    return;
}

bool Transport::Create(uint32 guidlow, uint32 displayId, uint32 mapid, float x, float y, float z, float ang, uint32 animprogress)
{
    m_positionX = x;
    m_positionY = y;
    m_positionZ = z;
    m_orientation = ang;

    m_mapId = mapid;

    if(!IsPositionValid())
    {
        sLog.outError("ERROR: Transport (GUID: %u) not created. Suggested coordinates isn't valid (X: %d Y: ^%d)",guidlow,x,y);
        return false;
    }

    Object::_Create(guidlow, HIGHGUID_TRANSPORT);
    
    GameObjectInfo const* goinfo = objmgr.GetGameObjectInfo(guidlow);

    if (!goinfo)
    {
        sLog.outError("Transport: Create not exist entry. guidlow: %u map: %u  (X: %f Y: %f Z: %f) ang: %f",guidlow, mapid, x, y, z, ang);
        return false;
    }

    SetFloatValue(OBJECT_FIELD_SCALE_X, goinfo->size);

    SetUInt32Value(GAMEOBJECT_FACTION, goinfo->faction);
    SetUInt32Value(GAMEOBJECT_FLAGS, goinfo->flags);
    m_flags = goinfo->flags;

    SetUInt32Value (OBJECT_FIELD_ENTRY, goinfo->id);

    SetUInt32Value (GAMEOBJECT_DISPLAYID, goinfo->displayId);

    SetUInt32Value (GAMEOBJECT_STATE, 1);
    SetUInt32Value (GAMEOBJECT_TYPE_ID, goinfo->type);

    SetUInt32Value (GAMEOBJECT_ANIMPROGRESS, animprogress);

    return true;
}

struct keyFrame {
    keyFrame(float _x, float _y, float _z, int _mapid, int _actionflag, int _delay)
    { x = _x; y = _y; z = _z; mapid = _mapid; actionflag = _actionflag; delay = _delay; distFromPrev = -1; distSinceStop = -1; distUntilStop = -1; 
      tFrom = 0; tTo = 0;}

    float x;
    float y;
    float z;
    int mapid;
    int actionflag;
    int delay;
    float distSinceStop;
    float distUntilStop;
    float distFromPrev;
    float tFrom, tTo;
};

void Transport::GenerateWaypoints(uint32 pathid)
{
    Path path;   
    objmgr.GetTaxiPathNodes(pathid, path);

    vector<keyFrame> keyFrames;
    int mapChange = 0;
    for (int i = 1; i < path.Size() - 1; i++) {
        if (mapChange == 0) {
            if ((path[i].mapid == path[i+1].mapid)) {
                keyFrame k(path[i].x, path[i].y, path[i].z, path[i].mapid, path[i].actionFlag, path[i].delay);
                keyFrames.push_back(k);
                //if ((path[i].mapid != path[i+1].mapid)) {
            } else {
                mapChange = 1;
            }
        } else {
            mapChange--;
        }
    }

    int lastStop = -1;

    // first cell is arrived at by teleportation :S
    keyFrames[0].distFromPrev = 0;
    if (keyFrames[0].actionflag == 2) {
        lastStop = 0;
    }

    // find the rest of the distances between key points
    for (int i = 1; i < keyFrames.size(); i++) {
        if ((keyFrames[i].actionflag == 1) || (keyFrames[i].mapid != keyFrames[i-1].mapid)) {
            keyFrames[i].distFromPrev = 0;
        } else {
            keyFrames[i].distFromPrev =
                        sqrt(pow(keyFrames[i].x - keyFrames[i - 1].x, 2) + 
                             pow(keyFrames[i].y - keyFrames[i - 1].y, 2) + 
                             pow(keyFrames[i].z - keyFrames[i - 1].z, 2));
        }
        if (keyFrames[i].actionflag == 2)
            lastStop = i;
    }

    float tmpDist = 0;
    for (int i = 0; i < keyFrames.size(); i++) {
        int j = (i + lastStop) % keyFrames.size();
        if (keyFrames[j].actionflag == 2)
            tmpDist = 0;
        else
            tmpDist += keyFrames[j].distFromPrev;
        keyFrames[j].distSinceStop = tmpDist;
    }

    for (int i = keyFrames.size() - 1; i >= 0; i--) {
        int j = (i + (keyFrames.size() - lastStop)) % keyFrames.size();
        tmpDist += keyFrames[(j + 1) % keyFrames.size()].distFromPrev;
        keyFrames[j].distUntilStop = tmpDist;
        if (keyFrames[j].actionflag == 2)
            tmpDist = 0;
    }

    for (int i = 0; i < keyFrames.size(); i++) {
        if (keyFrames[i].distSinceStop < (30 * 30 * 0.5))
            keyFrames[i].tFrom = sqrt(2 * keyFrames[i].distSinceStop);
        else
            keyFrames[i].tFrom = ((keyFrames[i].distSinceStop - (30 * 30 * 0.5)) / 30) + 30;
        
        if (keyFrames[i].distUntilStop < (30 * 30 * 0.5))
            keyFrames[i].tTo = sqrt(2 * keyFrames[i].distUntilStop);
        else
            keyFrames[i].tTo = ((keyFrames[i].distUntilStop - (30 * 30 * 0.5)) / 30) + 30;

        keyFrames[i].tFrom *= 1000;
        keyFrames[i].tTo *= 1000;
    }

//    for (int i = 0; i < keyFrames.size(); i++) {
//        sLog.outString("%f, %f, %f, %f, %f, %f, %f", keyFrames[i].x, keyFrames[i].y, keyFrames[i].distUntilStop, keyFrames[i].distSinceStop, keyFrames[i].distFromPrev, keyFrames[i].tFrom, keyFrames[i].tTo);
//    }

    // Now we're completely set up; we can move along the length of each waypoint at 100 ms intervals
    // speed = max(30, t) (remember x = 0.5s^2, and when accelerating, a = 1 unit/s^2
    int t = 0;
    bool teleport = false;
    if (keyFrames[keyFrames.size() - 1].mapid != keyFrames[0].mapid)
        teleport = true;

    WayPoint pos(keyFrames[0].mapid, keyFrames[0].x, keyFrames[0].y, keyFrames[0].z, teleport);
    m_WayPoints[0] = pos;
    t += keyFrames[0].delay * 1000;

    int cM = keyFrames[0].mapid;
    for (int i = 0; i < keyFrames.size() - 1; i++) { //
        float d = 0;
        float tFrom = keyFrames[i].tFrom;
        float tTo = keyFrames[i].tTo;
        
        // keep the generation of all these points; we use only a few now, but may need the others later
        if (((d < keyFrames[i + 1].distFromPrev) && (tTo > 0))) {
            while ((d < keyFrames[i + 1].distFromPrev) && (tTo > 0)) {
                tFrom += 100;
                tTo -= 100;
                
                if (d > 0) {
                    float newX, newY, newZ;
                    newX = keyFrames[i].x + (keyFrames[i + 1].x - keyFrames[i].x) * d / keyFrames[i + 1].distFromPrev;
                    newY = keyFrames[i].y + (keyFrames[i + 1].y - keyFrames[i].y) * d / keyFrames[i + 1].distFromPrev;
                    newZ = keyFrames[i].z + (keyFrames[i + 1].z - keyFrames[i].z) * d / keyFrames[i + 1].distFromPrev;
        
                    bool teleport = false;
                    if (keyFrames[i].mapid != cM) {
                        teleport = true; 
                        cM = keyFrames[i].mapid;
                    }

//                    sLog.outString("T: %d, D: %f, x: %f, y: %f, z: %f", t, d, newX, newY, newZ);
                    WayPoint pos(keyFrames[i].mapid, newX, newY, newZ, teleport);
                    if (teleport)
                        m_WayPoints[t] = pos;
                }
                
                if (tFrom < tTo) {  // caught in tFrom dock's "gravitational pull"
                    if (tFrom <= 30000) {
                        d = 0.5 * (tFrom / 1000) * (tFrom / 1000);
                    } else {
                        d = 0.5 * 30 * 30 + 30 * ((tFrom - 30000) / 1000);
                    }
                    d = d - keyFrames[i].distSinceStop;
                } else {
                    if (tTo <= 30000) {
                        d = 0.5 * (tTo / 1000) * (tTo / 1000);
                    } else {
                        d = 0.5 * 30 * 30 + 30 * ((tTo - 30000) / 1000);
                    }
                    d = keyFrames[i].distUntilStop - d;
                }
                t += 100;
            }
            t -= 100;
        }

        if (keyFrames[i + 1].tFrom > keyFrames[i + 1].tTo)
            t += 100 - ((long)keyFrames[i + 1].tTo % 100);
        else
            t += (long)keyFrames[i + 1].tTo % 100;

    
        bool teleport = false;
        if ((keyFrames[i + 1].actionflag == 1) || (keyFrames[i + 1].mapid != keyFrames[i].mapid)) {
            teleport = true;
            cM = keyFrames[i + 1].mapid;
        }
        
        WayPoint pos(keyFrames[i + 1].mapid, keyFrames[i + 1].x, keyFrames[i + 1].y, keyFrames[i + 1].z, teleport);
        
//        sLog.outString("T: %d, x: %f, y: %f, z: %f, t:%d", t, pos.x, pos.y, pos.z, teleport);
        
        //if (teleport)
            m_WayPoints[t] = pos;
        
        t += keyFrames[i + 1].delay * 1000;
//        sLog.outString("------");
    }

    uint32 timer = t;

    m_timer = getMSTime() % m_pathTime;

    sLog.outDetail("    Generated %d waypoints, total time %u.", m_WayPoints.size(), timer);
    
    m_curr = m_WayPoints.begin();
    m_curr = GetNextWayPoint();
    m_next = GetNextWayPoint();
    m_pathTime = timer;
    
    m_lastMovement = getMSTime();
    m_nextNodeTime = m_curr->first;

    m_curMap = m_curr->second.mapid;
}

map<uint32, Transport::WayPoint>::iterator Transport::GetNextWayPoint() {
    map <uint32, WayPoint>::iterator iter = m_curr;
    iter++;
    if (iter == m_WayPoints.end())
        iter = m_WayPoints.begin();
    return iter;
}


void Transport::TeleportTransport(uint32 oldMapid, uint32 newMapid, float x, float y, float z) {
    //MapManager::Instance().GetMap(oldMapid)->Remove((GameObject *)this, false);
    SetMapId(newMapid);
    //MapManager::Instance().LoadGrid(newMapid,x,y,true);
    this->Relocate(x, y, z, GetOrientation()); //2.594172f);
    //MapManager::Instance().GetMap(newMapid)->Add<GameObject>((GameObject *)this);

    for(set<Player *>::iterator itr = m_passengers.begin(); itr != m_passengers.end();)
    {
        set<Player *>::iterator it2 = itr;
        ++itr;

        Player *plr = *it2;
        if(!plr)
        {
            m_passengers.erase(it2);
            continue;
        }
        
        plr->TeleportTo(newMapid, x, y, z, true);

        WorldPacket data;
        data.SetOpcode(0x32B);
        data << uint32(0);
        plr->GetSession()->SendPacket(&data);
    }

    return;
}

bool Transport::AddPassenger(Player* passenger) {
    if (m_passengers.find(passenger) == m_passengers.end()) {
        sLog.outString("Player %s boarded transport %s.", passenger->GetName(), this->m_name.c_str());
        m_passengers.insert(passenger);
    }
    return true;
}

bool Transport::RemovePassenger(Player* passenger) {
    if (m_passengers.find(passenger) != m_passengers.end()) {
        sLog.outString("Player %s removed from transport %s.", passenger->GetName(), this->m_name.c_str());
        m_passengers.erase(passenger);
    }
    return true;
}


void Transport::Update(uint32 p_time) {
    if (m_WayPoints.size() <= 1)
        return;

    m_timer = getMSTime() % m_period;
    while (((m_timer - m_curr->first) % m_pathTime) > ((m_next->first - m_curr->first) % m_pathTime)) {
        m_lastMovement = getMSTime();

        m_curr = GetNextWayPoint();
        m_next = GetNextWayPoint();

        if (m_curr->second.teleport == true) {
            map <uint32, WayPoint>::iterator iterPrev = m_curr;
            TeleportTransport(GetMapId(), m_curr->second.mapid, m_curr->second.x, m_curr->second.y, m_curr->second.z);
        } else {
            //MapManager::Instance().GetMap(m_curr->second.mapid)->GameobjectRelocation((GameObject *)this, m_curr->second.x, m_curr->second.y, m_curr->second.z, this->m_orientation);
            this->Relocate(m_curr->second.x, m_curr->second.y, m_curr->second.z, m_curr->second.o);
        }

         

        m_curMap = m_curr->second.mapid;

        for(set<Player *>::iterator itr = m_passengers.begin(); itr != m_passengers.end();)
        {
            set<Player *>::iterator it2 = itr;
            ++itr;
            //(*it2)->SetPosition( m_curr->second.x + (*it2)->m_transX, m_curr->second.y + (*it2)->m_transY, m_curr->second.z + (*it2)->m_transZ, (*it2)->GetOrientation() );
        }

        


        m_nextNodeTime = m_curr->first;
        
        if (m_curr == m_WayPoints.begin())
            sLog.outDetail(" >>>>>>>>>>>> BEGIN <<<<<<<<<<<<<< %s", this->m_name.c_str());

//        MapManager::Instance().GetMap(m_curr->second.mapid)->Add(&this); // -> // ->Add(t);        
        //MapManager::Instance().GetMap(m_curr->second.mapid)->Remove((GameObject *)this, false); // -> // ->Add(t);        
        //MapManager::Instance().GetMap(m_curr->second.mapid)->Add((GameObject *)this); // -> // ->Add(t);        

        sLog.outDetail("%s moved to %f %f %f", this->m_name.c_str(), m_curr->second.x, m_curr->second.y, m_curr->second.z);
    }
}
