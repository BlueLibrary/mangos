/* 
 * Copyright (C) 2005-2008 MaNGOS <http://www.mangosproject.org/>
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

#ifndef MANGOSSERVER_CORPSE_H
#define MANGOSSERVER_CORPSE_H

#include "Object.h"
#include "Database/DatabaseEnv.h"
#include "GridDefines.h"
#include "LootMgr.h"

enum CorpseType
{
    CORPSE_RESURRECTABLE = 0,
    CORPSE_BONES         = 1
};

// Value equal client resurrection dialog show radius.
#define CORPSE_RECLAIM_RADIUS 39
#define CORPSE_RECLAIM_DELAY  30

class Corpse : public WorldObject
{
    public:
        explicit Corpse( WorldObject *instantiator, CorpseType type = CORPSE_BONES );
        ~Corpse( );

        void AddToWorld();
        void RemoveFromWorld();

        bool Create( uint32 guidlow );
        bool Create( uint32 guidlow, Player *owner, uint32 mapid, float x, float y, float z, float ang );

        void SaveToDB();
        bool LoadFromDB(uint32 guid, QueryResult *result, uint32 InstanceId);
        bool LoadFromDB(uint32 guid, Field *fields);

        void DeleteBonesFromWorld();
        void DeleteFromDB();

        uint64 const& GetOwnerGUID() const { return GetUInt64Value(CORPSE_FIELD_OWNER); }

        time_t const& GetGhostTime() const { return m_time; }
        void ResetGhostTime() { m_time = time(NULL); }
        CorpseType GetType() const { return m_type; }

        GridPair const& GetGrid() const { return m_grid; }
        void SetGrid(GridPair const& grid) { m_grid = grid; }

        bool isVisibleForInState(Player const* u, bool inVisibleList) const;

        Loot loot;                                          // remove insignia ONLY at BG
        Player* lootRecipient;
        bool lootForBody;

        void Say(const char* text, const uint32 language, const uint64 TargetGuid) { MonsterSay(text,language,TargetGuid); }
        void Yell(const char* text, const uint32 language, const uint64 TargetGuid) { MonsterYell(text,language,TargetGuid); }
        void TextEmote(const char* text, const uint64 TargetGuid) { MonsterTextEmote(text,TargetGuid); }
        void Whisper(const uint64 receiver, const char* text) { MonsterWhisper(receiver,text); }

        GridReference<Corpse> &GetGridRef() { return m_gridRef; }
    private:
        GridReference<Corpse> m_gridRef;

        CorpseType m_type;
        time_t m_time;
        GridPair m_grid;                                    // gride for corpse position for fast search
};
#endif
