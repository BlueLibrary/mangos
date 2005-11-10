/* QueryHandler.cpp
 *
 * Copyright (C) 2004 Wow Daemon
 * Copyright (C) 2005 MaNGOS <https://opensvn.csie.org/traccgi/MaNGOS/trac.cgi/>
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

#include "Common.h"
#include "Database/DatabaseEnv.h"
#include "WorldPacket.h"
#include "WorldSession.h"
#include "Opcodes.h"
#include "Log.h"
#include "World.h"
#include "ObjectMgr.h"
#include "Player.h"
#include "UpdateMask.h"

#ifdef ENABLE_GRID_SYSTEM
#include "ObjectAccessor.h"
#endif

//////////////////////////////////////////////////////////////
/// This function handles CMSG_NAME_QUERY:
//////////////////////////////////////////////////////////////
void WorldSession::HandleNameQueryOpcode( WorldPacket & recv_data )
{
    WorldPacket data;
    uint64 guid;

    recv_data >> guid;

    uint32 race = 0, gender = 0, cl = 0;
    std::string name = "ERROR_NO_NAME_FOR_GUID";

#ifndef ENABLE_GRID_SYSTEM
    Player *pChar = objmgr.GetObject<Player>(guid);
#else
    Player *pChar = ObjectAccessor::Instance().FindPlayer(guid);
#endif
    if (pChar == NULL)
    {
        if (!objmgr.GetPlayerNameByGUID(guid, name))
            Log::getSingleton( ).outError( "No player name found for this guid" );

        // TODO: load race, class, sex, etc from db
    }
    else
    {
        race = pChar->getRace();
        gender = pChar->getGender();
        cl = pChar->getClass();
        name = pChar->GetName();
    }

    Log::getSingleton( ).outDebug( "Recieved CMSG_NAME_QUERY for: %s", name.c_str() );

    data.Initialize( SMSG_NAME_QUERY_RESPONSE );

    data << guid;
    data << name;
    data << race << gender << cl;

    SendPacket( &data );
}


//////////////////////////////////////////////////////////////
/// This function handles CMSG_QUERY_TIME:
//////////////////////////////////////////////////////////////
void WorldSession::HandleQueryTimeOpcode( WorldPacket & recv_data )
{
    WorldPacket data;
    data.Initialize( SMSG_QUERY_TIME_RESPONSE );

    data << (uint32)time(NULL);
    SendPacket( &data );
}


//////////////////////////////////////////////////////////////
/// This function handles CMSG_CREATURE_QUERY:
//////////////////////////////////////////////////////////////
// UQ1: Defaults...
extern uint32 default_trainer_guids[12];

void WorldSession::HandleCreatureQueryOpcode( WorldPacket & recv_data )
{// UQ1: Think I have this correct now.. :)
    WorldPacket data;
    uint32 entry;
    uint64 guid;
    CreatureInfo *ci;

    recv_data >> entry;
    recv_data >> guid;

    //ci = objmgr.GetCreatureName(entry);
    Creature *unit = ObjectAccessor::Instance().GetCreature(*_player, guid);

	if (unit == NULL)
	{
		Log::getSingleton( ).outDebug( "WORLD: HandleCreatureQueryOpcode - (%u) NO SUCH UNIT! (GUID: %u)", uint32(GUID_LOPART(guid)), guid );
		return;
	}

	ci = objmgr.GetCreatureName(unit->GetNameID());

	if (!ci)
	{
		Log::getSingleton( ).outDebug( "WORLD: HandleCreatureQueryOpcode - (%u) NO CREATUREINFO! (GUID: %u)", uint32(GUID_LOPART(guid)), guid );
		return;
	}

	Log::getSingleton( ).outDetail("WORLD: CMSG_CREATURE_QUERY '%s' - Entry: %u - GUID: %u.", ci->Name.c_str(), entry, guid);

	Trainerspell *strainer = objmgr.GetTrainerspell(unit->GetNameID());

	uint32 npcflags = unit->GetUInt32Value(UNIT_NPC_FLAGS);

	if ((npcflags & UNIT_NPC_FLAG_VENDOR) > 0)
    {
		Log::getSingleton( ).outDetail("WORLD: CMSG_CREATURE_QUERY %s is a vendor.", ci->Name.c_str());
        //data << uint32(UNIT_NPC_FLAG_VENDOR);       // Flags1
		unit->SetUInt32Value(UNIT_NPC_FLAGS, npcflags);
    }
	else if ((npcflags & UNIT_NPC_FLAG_TRAINER) > 0)
    {
		Log::getSingleton( ).outDetail("WORLD: CMSG_CREATURE_QUERY %s is a trainer.", ci->Name.c_str());
        //data << uint32(UNIT_NPC_FLAG_TRAINER);       // Flags1
		unit->SetUInt32Value(UNIT_NPC_FLAGS, npcflags);
    }
    else
    {
        //data << (uint32)npcflags;//ci->flags1;        // Flags1
    }

    data.Initialize( SMSG_CREATURE_QUERY_RESPONSE );
    data << (uint32)entry;
    data << ci->Name.c_str();
    data << uint8(0) << uint8(0) << uint8(0);
    data << ci->SubName.c_str();    // Subname (Guild Name)
    
	data << (uint32)ci->flags1;        // Flags1

    if ((ci->Type & 2) > 0)
    {
        data << uint32(7);
    }
	else
    {
        data << uint32(0);
    }

    data << ci->Type;            // Creature Type

	// UQ1: Set these values for elite field for:
	// 1 + 2	= Elite
	// 3		= Boss
	// 5		= %d mana
	// 6		= %d rage
	// 7		= %d focus
	// 8		= %d energy
	// 10		= 100% mana
	// 11		= 100% rage
	// 12		= 100% focus
	// 13		= 100% energy
	//data << (uint32)0; // Elite
	if (ci->level >= 16 && ci->level < 32)
		data << (uint32)1; // Elite
	else if (ci->level >= 32 && ci->level < 48)
		data << (uint32)2; // Elite
	else if (ci->level >= 48 && ci->level < 64)
		data << (uint32)3; // Boss
	else
		data << (uint32)0; // Standard

	data << (uint32)ci->family;    // Family

    data << (uint32)0;            // Unknown (move before or after unknowns 3 and 4) don't know where exactly
    data << ci->DisplayID;        // DisplayID

	// UQ1: Add some padding data... I'm positive we can send more here!
	data << (uint32)0;
	data << (uint32)0;
	data << (uint32)0;
	data << (uint32)0;

    SendPacket( &data );
}

void WorldSession::SendTestCreatureQueryOpcode( uint32 entry, uint64 guid, uint32 testvalue )
{// UQ1: For testing values... use testvalue and ".npcinfoset <value>" ingame
    WorldPacket data;
    CreatureInfo *ci;

    ci = objmgr.GetCreatureName(entry);
	Log::getSingleton( ).outDetail("WORLD: CMSG_CREATURE_QUERY '%s' - Entry: %u - GUID: %u.", ci->Name.c_str(), entry, guid);

    Creature *unit = ObjectAccessor::Instance().GetCreature(*_player, guid);

    Trainerspell *strainer = objmgr.GetTrainerspell(entry/*unit->GetNameID()*/);

	if ((ci->flags1 & UNIT_NPC_FLAG_TRAINER) && !strainer)
	{// Use Defaults...
		strainer = objmgr.GetTrainerspell(default_trainer_guids[ci->classNum]);
	}

    data.Initialize( SMSG_CREATURE_QUERY_RESPONSE );
    data << (uint32)entry;
    data << ci->Name.c_str();
    data << uint8(0) << uint8(0) << uint8(0);
    data << ci->SubName.c_str();    // Subname (Guild Name)
    data << (uint32)ci->flags1;        // Flags1

    if ((ci->Type & 2) > 0)
    {
        data << uint32(7);
    }
    else
    {
        data << uint32(0);
    }

    //data << ci->Type;            // Creature Type
	data << (uint32)testvalue;

	// UQ1: Set these values for elite field for:
	// 1 + 2	= Elite
	// 3		= Boss
	// 5		= %d mana
	// 6		= %d rage
	// 7		= %d focus
	// 8		= %d energy
	// 10		= uses 100% mana
	// 11		= uses 100% rage
	// 12		= uses 100% focus
	// 13		= uses 100% energy
	if (ci->level >= 16 && ci->level < 32)
		data << (uint32)1; // Elite
	else if (ci->level >= 32 && ci->level < 48)
		data << (uint32)2; // Elite
	else if (ci->level >= 48 && ci->level < 64)
		data << (uint32)3; // Boss
	else
		data << (uint32)0; // Standard

	data << (uint32)ci->family;    // Family

    data << (uint32)0;            // Unknown (move before or after unknowns 3 and 4) don't know where exactly
    data << ci->DisplayID;        // DisplayID

	data << (uint32)0;
	data << (uint32)0;
	data << (uint32)0;
	data << (uint32)0;

    SendPacket( &data );
}

//////////////////////////////////////////////////////////////
/// This function handles CMSG_GAMEOBJECT_QUERY:
//////////////////////////////////////////////////////////////
/*
void WorldSession::HandleGameObjectQueryOpcode( WorldPacket & recv_data )
{

    WorldPacket data;
    uint32 entryID;
    uint64 guid;

    recv_data >> entryID;
    recv_data >> guid;    

    Log::getSingleton( ).outDetail("WORLD: CMSG_GAMEOBJECT_QUERY '%u'", guid);
    const GameObjectInfo *info = objmgr.GetGameObjectInfo(entryID);
    if( info == NULL )
    {
    Log::getSingleton( ).outDebug( "Missing game object info for entry %d", entryID);    
    return; // no luck..
    }

    data << (uint32)(entryID);
    data << (uint32)info->type;
    data << (uint32)info->displayId;
    data << info->name.c_str();
    data << uint8(0) << uint8(0) << uint8(0);
    data << uint32(info->sound0);
    data << uint32(info->sound1);
    data << uint32(info->sound2);
    data << uint32(info->sound3);
    data << uint32(info->sound4);
    data << uint32(info->sound5);
    data << uint32(info->sound6);
    data << uint32(info->sound7);
    data << uint32(info->sound8);
    data << uint32(info->sound9);
    data << uint16(0);
    data << uint8(0);
    SendPacket( &data );
}
*/
void WorldSession::HandleGameObjectQueryOpcode( WorldPacket & recv_data )
{

    WorldPacket data;
    data.Initialize( SMSG_GAMEOBJECT_QUERY_RESPONSE );
    uint32 entryID;
    uint64 guid;

    recv_data >> entryID;
    recv_data >> guid;

    Log::getSingleton( ).outDetail("WORLD: CMSG_GAMEOBJECT_QUERY '%u'", guid);

    const GameObjectInfo *info = objmgr.GetGameObjectInfo(entryID);
    if( info == NULL )
    {
        Log::getSingleton( ).outDebug( "Missing game object info for entry %d", entryID);    
        return; // no luck..
    }

/*
    Converter.ToBytes(obj1.Id, this.tempBuff, ref num1);
    Converter.ToBytes(obj1.ObjectType, this.tempBuff, ref num1);
    Converter.ToBytes(obj1.Model, this.tempBuff, ref num1);
    Converter.ToBytes(obj1.Name, this.tempBuff, ref num1);
    Converter.ToBytes(0, this.tempBuff, ref num1);
    for (int num2 = 0; num2 < obj1.Sound.Length; num2++)
    {
        Converter.ToBytes(obj1.Sound[num2], this.tempBuff, ref num1);
    }
    for (int num3 = obj1.Sound.Length; num3 < 0x10; num3++)
    {
        Converter.ToBytes(0, this.tempBuff, ref num1);
    }
*/
   
    data << (uint32)(entryID);
    data << (uint32)info->type;
    data << (uint32)info->displayId;
    data << info->name.c_str();
    data << uint32(0);
    
    data << uint32(info->sound0);
    data << uint32(info->sound1);
    data << uint32(info->sound2);
    data << uint32(info->sound3);
    data << uint32(info->sound4);
    data << uint32(info->sound5);
    data << uint32(info->sound6);
    data << uint32(info->sound7);
    data << uint32(info->sound8);
    data << uint32(info->sound9);
    data << uint32(0);
    data << uint32(0);
    data << uint32(0);
    data << uint32(0);
    data << uint32(0);
    /*data << uint32(0);
    data << uint32(0);
    data << uint32(0);
    data << uint32(0);*/

    data << uint16(0);
    data << uint8(0);

    SendPacket( &data );
}



//////////////////////////////////////////////////////////////
/// This function handles MSG_CORPSE_QUERY:
//////////////////////////////////////////////////////////////
void WorldSession::HandleCorpseQueryOpcode(WorldPacket &recv_data)
{
    Log::getSingleton().outDetail("WORLD: Received MSG_CORPSE_QUERY");

    Corpse *pCorpse = NULL;
    WorldPacket data;
#ifndef ENABLE_GRID_SYSTEM
    pCorpse = objmgr.GetCorpseByOwner(GetPlayer());
#else
    pCorpse = ObjectAccessor::Instance().GetCorpse(*GetPlayer(), GetPlayer()->GetGUID());
#endif
    if(pCorpse)
    {
        data.Initialize(MSG_CORPSE_QUERY);
        data << uint8(0x01);
        data << uint32(0x00000001);
        data << pCorpse->GetPositionX();
        data << pCorpse->GetPositionY();
        data << pCorpse->GetPositionZ();
        data << uint32(0x00000001);
        SendPacket(&data);
    }
}
