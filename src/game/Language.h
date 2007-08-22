/* 
 * Copyright (C) 2005,2006,2007 MaNGOS <http://www.mangosproject.org/>
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

// for chat commands
#define LANG_SELECT_CHAR_OR_CREATURE     "You should select a character or a creature."
#define LANG_SELECT_CREATURE             "You should select a creature."

// level 0 chat
#define LANG_SYSTEMMESSAGE               "|cffff0000[System Message]:|r"
#define LANG_NO_HELP_CMD                 "There is no help for that command"
#define LANG_NO_CMD                      "There is no such command"
#define LANG_NO_SUBCMD                   "There is no such subcommand"
#define LANG_AVIABLE_CMD                 "Commands available to you:"
#define LANG_CMD_SYNTAX                  "Incorrect syntax."
#define LANG_ACCOUNT_LEVEL               "Your account level is: %i"
#define LANG_CONNECTED_USERS             "Number of users connected: %u (max since last restart: %u)"
#define LANG_UPTIME                      "Server uptime: %s"
#define LANG_PLAYER_SAVED                "Player saved."
#define LANG_PLAYERS_SAVED               "All players saved."
#define LANG_GMS_ON_SRV                  "There are the following active GMs on this server:"
#define LANG_GMS_NOT_LOGGED              "There are no GMs currently logged in on this server."
#define LANG_YOU_IN_FLIGHT               "You are flying and can't do that."
#define LANG_TARGET_IN_FLIGHT            "Target is flying you can't do that."
#define LANG_CHAR_IN_FLIGHT              "%s are flying and your command failed."
#define LANG_CHAR_NON_MOUNTED            "You are not mounted and can't dismount."
#define LANG_YOU_IN_COMBAT               "You are fighting and can't do that."
#define LANG_YOU_USED_IT_RECENTLY        "You used it recently."
#define LANG_COMMAND_NOTCHANGEPASSWORD   "Your password can't be longer than 16 characters (client limit), password not changed!"
#define LANG_COMMAND_PASSWORD            "The password was changed"
#define LANG_COMMAND_WRONGOLDPASSWORD    "The new passwords do not match or the old password is wrong"
#define LANG_COMMAND_ACCLOCKPARAMETER    "You must send parameter"
#define LANG_COMMAND_ACCLOCKLOCKED       "Your account is now locked."
#define LANG_COMMAND_ACCLOCKUNLOCKED     "Your account is now unlocked."
#define LANG_SPELL_RANK                  ", rank "
#define LANG_KNOWN                       " [known]"
#define LANG_LEARN                       " [learn]"
#define LANG_PASSIVE                     " [passive]"
#define LANG_TALENT                      " [talent]"
#define LANG_ACTIVE                      " [active]"
#define LANG_COMPLETE                    " [complete]"
#define LANG_OFFLINE                     " (offline)"
#define LANG_ON                          "on"
#define LANG_OFF                         "off"
#define LANG_YOU_ARE                     "You are: %s"
#define LANG_VISIBLE                     "visible"
#define LANG_INVISIBLE                   "invisible"
#define LANG_DONE                        "done"
#define LANG_YOU                         "You"
#define LANG_UNKNOWN                     " <unknown> "
#define LANG_ERROR                       "<error>"
#define LANG_NON_EXIST_CHARACTER         "<non-existing character>"
#define LANG_FRIEND_IGNORE_UNKNOWN       "UNKNOWN"
#define LANG_LEVEL_MINREQUIRED           "You must be at least level "
#define LANG_LEVEL_MINREQUIRED_END       " to enter."
#define LANG_NPC_TAINER_HELO             "Hello! Ready for some training?"

// alliance ranks
#define LANG_ALI_PRIVATE                 "Private "
#define LANG_ALI_CORPORAL                "Corporal "
#define LANG_ALI_SERGEANT                "Sergeant "
#define LANG_ALI_MASTER_SERGEANT         "Master Sergeant "
#define LANG_ALI_SERGEANT_MAJOR          "Sergeant Major "
#define LANG_ALI_KNIGHT                  "Knight "
#define LANG_ALI_KNIGHT_LIEUTENANT       "Knight-Lieutenant "
#define LANG_ALI_KNIGHT_CAPTAIN          "Knight-Captain "
#define LANG_ALI_KNIGHT_CHAMPION         "Knight-Champion "
#define LANG_ALI_LIEUTENANT_COMMANDER    "Lieutenant Commander "
#define LANG_ALI_COMMANDER               "Commander "
#define LANG_ALI_MARSHAL                 "Marshal "
#define LANG_ALI_FIELD_MARSHAL           "Field Marshal "
#define LANG_ALI_GRAND_MARSHAL           "Grand Marshal "
#define LANG_ALI_GAME_MASTER             "Game Master "

// horde ranks
#define LANG_HRD_SCOUT                   "Scout "
#define LANG_HRD_GRUNT                   "Grunt "
#define LANG_HRD_SERGEANT                "Sergeant "
#define LANG_HRD_SENIOR_SERGEANT         "Senior Sergeant "
#define LANG_HRD_FIRST_SERGEANT          "First Sergeant "
#define LANG_HRD_STONE_GUARD             "Stone Guard "
#define LANG_HRD_BLOOD_GUARD             "Blood Guard "
#define LANG_HRD_LEGIONNARE              "Legionnaire "
#define LANG_HRD_CENTURION               "Centurion "
#define LANG_HRD_CHAMPION                "Champion "
#define LANG_HRD_LIEUTENANT_GENERAL      "Lieutenant General "
#define LANG_HRD_GENERAL                 "General "
#define LANG_HRD_WARLORD                 "Warlord "
#define LANG_HRD_HIGH_WARLORD            "High Warlord "
#define LANG_HRD_GAME_MASTER             "Game Master "

#define LANG_NO_RANK                     "No rank "
#define LANG_RANK                        "%s (Rank %u)"
#define LANG_HONOR_TODAY                 "Today: [Honorable kills: |c0000ff00%u|r] [Dishonorable kills: |c00ff0000%u|r]"
#define LANG_HONOR_YESTERDAY             "Yesterday: [Kills: |c0000ff00%u|r] [Honor: %u]"
#define LANG_HONOR_THIS_WEEK             "This week: [Kills: |c0000ff00%u|r] [Honor: %u]"
#define LANG_HONOR_LAST_WEEK             "Last week: [Kills: |c0000ff00%u|r] [Honor: %u] [Standing: %u]"
#define LANG_HONOR_LIFE                  "Lifetime: [Honorable kills: |c0000ff00%u|r] [Dishonorable kills: |c00ff0000%u|r] [Highest rank %u: %s]"

// level 1 chat
#define LANG_GLOBAL_NOTIFY               "Global notify:\n"
#define LANG_MAP_POSITION                "Map: %u Zone: %u Area: %u\nX: %f Y: %f Z: %f Orientation: %f grid[%u,%u]cell[%u,%u]\nInstanceID: %u"
#define LANG_IS_TELEPORTED               "%s is already being teleported."
#define LANG_CANNOT_SUMMON_TO_INST       "You can summon a player to your instance only if he is in your party with you as leader."
#define LANG_CANNOT_GO_TO_INST_PARTY     "You cannot go to the player's instance because you are in a party now."
#define LANG_CANNOT_GO_TO_INST_GM        "You can go to the player's instance while not being in his party only if your GM mode is on."
#define LANG_CANNOT_GO_INST_INST         "You can not go to player %s from instance to instance."
#define LANG_CANNOT_SUMMON_INST_INST     "You can not summon player %s from instance to instance."
#define LANG_SUMMONING                   "You are summoning %s%s."
#define LANG_SUMMONED_BY                 "You are being summoned by %s."
#define LANG_TELEPORTING_TO              "You are teleporting %s%s to %s."
#define LANG_TELEPORTED_TO_BY            "You are being teleported by %s."
#define LANG_NO_PLAYER                   "Player (%s) does not exist."
#define LANG_APPEARING_AT                "Appearing at %s's location."
#define LANG_APPEARING_TO                "%s is appearing to your location."

#define LANG_BAD_VALUE                   "Incorrect values."
#define LANG_NO_CHAR_SELECTED            "No character selected."
#define LANG_NOT_IN_GROUP                "%s are not in a group."

#define LANG_YOU_CHANGE_HP               "You change the HP to %i/%i of %s."
#define LANG_YOURS_HP_CHANGED            "%s changed your HP to %i/%i."
#define LANG_YOU_CHANGE_MANA             "You change the MANA to %i/%i of %s."
#define LANG_YOURS_MANA_CHANGED          "%s changed your MANA to %i/%i."
#define LANG_YOU_CHANGE_ENERGY           "You change the ENERGY to %i/%i of %s."
#define LANG_YOURS_ENERGY_CHANGED        "%s changed your ENERGY to %i/%i."
                                                            //log
#define LANG_CURRENT_ENERGY              "current energy: %u"
#define LANG_YOU_CHANGE_RAGE             "You change the RAGE to %i/%i of %s."
#define LANG_YOURS_RAGE_CHANGED          "%s changed your RAGE to %i/%i."
#define LANG_YOU_CHANGE_LVL              "You change the LVL to %i of %s."
#define LANG_YOURS_LVL_CHANGED           "%s changed your LVL to %i."
#define LANG_CURRENT_FACTION             "GUID %i, faction is %i, flags is %i, npcflag is %i, DY flag is %i"
#define LANG_WRONG_FACTION               "Wrong faction: %u (not found in factiontemplate.dbc)."
#define LANG_YOU_CHANGE_FACTION          "You change GUID=%i 's Faction to %i, flags to %i, npcflag to %i, dyflag to %i."
#define LANG_YOU_CHANGE_SPELLFLATID      "You change the spellflatid=%i, val= %i, mark =%i to %s."
#define LANG_YOURS_SPELLFLATID_CHANGED   "%s changed your spellflatid=%i, val= %i, mark =%i."
#define LANG_YOU_GIVE_TAXIS              "%s has access to all taxi nodes now (until logout)."
#define LANG_YOU_REMOVE_TAXIS            "%s has no more access to all taxi nodes now (only visited accessible)."
#define LANG_YOURS_TAXIS_ADDED           "%s has given you access to all taxi nodes (until logout)."
#define LANG_YOURS_TAXIS_REMOVED         "%s has removed access to all taxi nodes (only visited still accessible)."

#define LANG_YOU_CHANGE_ASPEED           "You set all speeds to %2.2f from normal of %s."
#define LANG_YOURS_ASPEED_CHANGED        "%s set all your speeds to %2.2f from normal."
#define LANG_YOU_CHANGE_SPEED            "You set the speed to %2.2f from normal of %s."
#define LANG_YOURS_SPEED_CHANGED         "%s set your speed to %2.2f from normal."
#define LANG_YOU_CHANGE_SWIM_SPEED       "You set the swim speed to %2.2f from normal of %s."
#define LANG_YOURS_SWIM_SPEED_CHANGED    "%s set your swim speed to %2.2f from normal."
#define LANG_YOU_CHANGE_BACK_SPEED       "You set the backwards run speed to %2.2f from normal of %s."
#define LANG_YOURS_BACK_SPEED_CHANGED    "%s set your backwards run speed to %2.2f from normal."
#define LANG_YOU_CHANGE_FLY_SPEED       "You set the fly speed to %2.2f from normal of %s."
#define LANG_YOURS_FLY_SPEED_CHANGED    "%s set your fly speed to %2.2f from normal."

#define LANG_YOU_CHANGE_SIZE             "You set the size %2.2f of %s."
#define LANG_YOURS_SIZE_CHANGED          "%s set your size to %2.2f."
#define LANG_NO_MOUNT                    "There is no such mount."
#define LANG_YOU_GIVE_MOUNT              "You give a mount to %s."
#define LANG_MOUNT_GIVED                 "%s gave you a mount."

                                                            //log
#define LANG_CURRENT_MONEY               "USER1: %i, ADD: %i, DIF: %i\n"
#define LANG_YOU_TAKE_ALL_MONEY          "You take all copper of %s."
#define LANG_YOURS_ALL_MONEY_GONE        "%s took you all of your copper."
#define LANG_YOU_TAKE_MONEY              "You take %i copper from %s."
#define LANG_YOURS_MONEY_TAKEN           "%s took %i copper from you."
#define LANG_YOU_GIVE_MONEY              "You give %i copper to %s."
#define LANG_YOURS_MONEY_GIVEN           "%s gave you %i copper."
#define LANG_YOU_HEAR_SOUND              "You hear sound %u."
                                                            //log
#define LANG_NEW_MONEY                   "USER2: %i, ADD: %i, RESULT: %i\n"

#define LANG_REMOVE_BIT                  "Removed bit %i in field %i."
#define LANG_SET_BIT                     "Set bit %i in field %i."
#define LANG_COMMAND_TELE_TABLEEMPTY     "Teleport location table is empty!"
#define LANG_COMMAND_TELE_NOTFOUND       "Teleport location not found!"
#define LANG_COMMAND_TELE_PARAMETER      "Requires search parameter."
#define LANG_COMMAND_TELE_NOREQUEST      "There are no teleport locations matching your request."
#define LANG_COMMAND_TELE_NOLOCATION     "No locations found."
#define LANG_COMMAND_TELE_LOCATION       "Locations found are:\n"

#define LANG_MAIL_SENT                   "Mail sent to %s"

// level 2 chat
#define LANG_NO_SELECTION                "No selection."
#define LANG_OBJECT_GUID                 "Object GUID is: lowpart %u highpart %X"
#define LANG_TOO_LONG_NAME               "The name was too long by %i characters."
#define LANG_CHARS_ONLY                  "Error, name can only contain characters A-Z and a-z."
#define LANG_TOO_LONG_SUBNAME            "The subname was too long by %i characters."
#define LANG_NOT_IMPLEMENTED             "Not yet implemented"
                                                            //log
#define LANG_ADD_OBJ                     "AddObject at Chat.cpp"
#define LANG_DEMORPHED                   "Demorphed %s"     //log

#define LANG_ITEM_ADDED_TO_LIST          "Item '%i' '%s' added to list with maxcount '%i' and incrtime '%i'"
#define LANG_ITEM_NOT_FOUND              "Item '%i' not found in database."
#define LANG_ITEM_DELETED_FROM_LIST      "Item '%i' '%s' deleted from vendor list"
#define LANG_ITEM_NOT_IN_LIST            "Item '%i' not found in vendor list."
#define LANG_ITEM_ALREADY_IN_LIST        "Item '%i' already in vendor list."

#define LANG_WAYPOINT_NOTFOUND           "Creature (GUID: %u) No waypoint found."
#define LANG_WAYPOINT_NOTFOUNDLAST       "Creature (GUID: %u) Last waypoint not found."
#define LANG_WAYPOINT_NOTFOUNDSEARCH     "Creature (GUID: %u) No waypoint found - used 'wpguid'. Now trying to find it by its position..."
#define LANG_WAYPOINT_NOTFOUNDDBPROBLEM  "Creature (GUID: %u) No waypoints found - This is a MaNGOS db problem (single float)."
#define LANG_WAYPOINT_CREATSELECTED      "Selected creature is ignored - provided GUID is used"
#define LANG_WAYPOINT_CREATNOTFOUND      "Creature (GUID: %u) not found"
#define LANG_WAYPOINT_VP_SELECT          "You must select a visual waypoint."
#define LANG_WAYPOINT_VP_NOTFOUND        "No visual waypoints found"
#define LANG_WAYPOINT_VP_NOTCREATED      "Could not create visual waypoint with creatureID: %d"
#define LANG_WAYPOINT_VP_ALLREMOVED      "All visual waypoints removed"
#define LANG_WAYPOINT_NOTCREATED         "Could not create waypoint-creature with ID: %d"
#define LANG_WAYPOINT_NOGUID             "No GUID provided."
#define LANG_WAYPOINT_NOWAYPOINTGIVEN    "No waypoint number provided."
#define LANG_WAYPOINT_ARGUMENTREQ        "Argument required for '%s'."
#define LANG_WAYPOINT_ADDED              "Waypoint %i added to GUID: %d"
#define LANG_WAYPOINT_ADDED_NO           "Waypoint %d added."
#define LANG_WAYPOINT_CHANGED            "Waypoint changed."
#define LANG_WAYPOINT_CHANGED_NO         "Waypoint %s modified."
#define LANG_WAYPOINT_EXPORTED           "WP export successfull."
#define LANG_WAYPOINT_NOTHINGTOEXPORT    "No waypoints found inside the database."
#define LANG_WAYPOINT_IMPORTED           "File imported."
#define LANG_WAYPOINT_REMOVED            "Waypoint removed."
#define LANG_WAYPOINT_NOTREMOVED         "Warning: Could not delete WP from the world with ID: %d"
#define LANG_WAYPOINT_TOOFAR1            "This happens if the waypoint is too far away from your char."
#define LANG_WAYPOINT_TOOFAR2            "The WP is deleted from the database, but not from the world here."
#define LANG_WAYPOINT_TOOFAR3            "They will disappear after a server restart."
#define LANG_WAYPOINT_INFO_TITLE         "Waypoint %d: Info for creature: %s, GUID: %d"
#define LANG_WAYPOINT_INFO_WAITTIME      "Waittime: %d"
#define LANG_WAYPOINT_INFO_MODEL         "Model %d: %d"
#define LANG_WAYPOINT_INFO_EMOTE         "Emote: %d"
#define LANG_WAYPOINT_INFO_SPELL         "Spell: %d"
#define LANG_WAYPOINT_INFO_TEXT          "Text %d: %s"
#define LANG_WAYPOINT_INFO_AISCRIPT      "AIScript: %s"

#define LANG_RENAME_PLAYER               "Force rename will be requested on next login for player %s."
#define LANG_RENAME_PLAYER_GUID          "Force rename will be requested on next login for player %s (GUID #%u)."

#define LANG_WAYPOINT_WPCREATNOTFOUND    "Waypoint-Creature (GUID: %u) Not found"
#define LANG_WAYPOINT_NPCNOTFOUND        "Could not find NPC..."

#define LANG_MOVE_TYPE_SET               "Creature movement type set to '%s', waypoints removed (if any)."
#define LANG_MOVE_TYPE_SET_NODEL         "Creature movement type set to '%s', waypoints were not removed."
#define LANG_USE_BOL                     "Incorrect value, use 0 or 1"
#define LANG_VALUE_SAVED                 "Value saved."
#define LANG_VALUE_SAVED_REJOIN          "Value saved, you may need to rejoin or clean your client cache."

#define LANG_INVALID_TARGET_COORD        "Target map or coordinates is invalid (X: %f Y: %f MapId: %u)"
#define LANG_COMMAND_TARGETOBJNOTFOUND   "Nothing found!"
#define LANG_COMMAND_GOOBJNOTFOUND       "Object not found!"
#define LANG_COMMAND_GOCREATNOTFOUND     "Creature not found!"
#define LANG_COMMAND_GOCREATMULTIPLE     "Warning: Mob found more than 1 time - you will be ported to the first one found inside DB."
#define LANG_COMMAND_DELCREATMESSAGE     "Creature Removed"
#define LANG_COMMAND_CREATUREMOVED       "Creature moved."
#define LANG_COMMAND_CREATUREATSAMEMAP   "Creature (GUID:%u) must be at same map with player!"
#define LANG_COMMAND_OBJNOTFOUND         "Game Object (GUID: %u) not found"
#define LANG_COMMAND_DELOBJREFERCREATURE "Game Object (GUID: %u) has references in not found creature %u GO list, can't be deleted."
#define LANG_COMMAND_DELOBJMESSAGE       "Game Object (GUID: %u) removed"
#define LANG_COMMAND_TURNOBJMESSAGE      "Game Object (GUID: %u) turned"
#define LANG_COMMAND_MOVEOBJMESSAGE      "Game Object (GUID: %u) moved"
#define LANG_COMMAND_VENDORSELECTION     "You must select a vendor"
#define LANG_COMMAND_ADDVENDORITEMSEND   "You must send id for item"
#define LANG_COMMAND_ADDVENDORITEMITEMS  "Vendor has too many items (max 128)"
#define LANG_COMMAND_KICKSELF            "You can't kick self, logout instead"
#define LANG_COMMAND_KICKMESSAGE         "Player %s kicked."
#define LANG_COMMAND_KICKNOTFOUNDPLAYER  "Player %s not found."
#define LANG_COMMAND_WHISPERACCEPTING    "Accepting Whisper: %s"
#define LANG_COMMAND_WHISPERON           "Accepting Whisper: ON"
#define LANG_COMMAND_WHISPEROFF          "Accepting Whisper: OFF"
#define LANG_COMMAND_CREATGUIDNOTFOUND   "Creature (GUID: %u) not found"
#define LANG_COMMAND_TICKETCOUNT         "Tickets count: %i show new tickets: %s\n"
#define LANG_COMMAND_TICKETNEW           "New ticket from %s"
#define LANG_COMMAND_TICKETVIEW          "Ticket of %s (Category: %i):\n%s\n"
#define LANG_COMMAND_TICKETON            "New ticket show: on"
#define LANG_COMMAND_TICKETOFF           "New ticket show: off"
#define LANG_COMMAND_TICKENOTEXIST       "Ticket %i doesn't exist"
#define LANG_COMMAND_ALLTICKETDELETED    "All tickets deleted."
#define LANG_COMMAND_TICKETPLAYERDEL     "Character %s ticket deleted."
#define LANG_COMMAND_TICKETDEL           "Ticket deleted."
#define LANG_COMMAND_SPAWNDIST           "Spawn distance changed to: %i"
#define LANG_COMMAND_SPAWNTIME           "Spawn time changed to: %i"

#define LANG_YOUR_CHAT_DISABLED          "Your chat has been disabled for %u minutes."
#define LANG_YOU_DISABLE_CHAT            "You have disabled %s's chat for %u minutes."
#define LANG_CHAT_ALREADY_ENABLED        "Player's chat is already enabled."
#define LANG_YOUR_CHAT_ENABLED           "Your chat has been enabled."
#define LANG_YOU_ENABLE_CHAT             "You have enabled %s's chat."

// level 3 chat
#define LANG_SCRIPTS_RELOADED            "|cffff0000[System Message]:|rScripts reloaded"
#define LANG_YOU_CHANGE_SECURITY         "You change security level of %s to %i."
#define LANG_YOURS_SECURITY_CHANGED      "%s changed your security level to %i."
#define LANG_YOURS_SECURITY_IS_LOW       "You have low security level for this."
#define LANG_CREATURE_MOVE_DISABLED      "Creature movement disabled."
#define LANG_CREATURE_MOVE_ENABLED       "Creature movement enabled."
#define LANG_NO_WEATHER                  "Weather can't be changed for this zone."
#define LANG_WEATHER_DISABLED            "Weather system disabled at server."

#define LANG_BAN_YOUBANNED               "%s is banned for %s. Reason: %s."
#define LANG_BAN_YOUPERMBANNED           "%s is banned permanently for %s."
#define LANG_BAN_NOTFOUND                "%s %s not found"

#define LANG_UNBAN_UNBANNED              "%s unbanned."
#define LANG_UNBAN_ERROR                 "There was an error removing the ban on %s."

#define LANG_BANINFO_NOACCOUNT           "There is no such account."
#define LANG_BANINFO_NOCHARACTER         "There is no such character."
#define LANG_BANINFO_NOIP                "There is no such IP in banlist."
#define LANG_BANINFO_NOACCOUNTBAN        "Account %s has never been banned"
#define LANG_BANINFO_BANHISTORY          "Ban history for account %s:"
#define LANG_BANINFO_HISTORYENTRY        "Ban Date: %s Bantime: %s Still active: %s  Reason: %s Set by: %s"
#define LANG_BANINFO_INFINITE            "Inf."
#define LANG_BANINFO_NEVER               "Never"
#define LANG_BANINFO_YES                 "Yes"
#define LANG_BANINFO_NO                  "No"
#define LANG_BANINFO_IPENTRY             "IP: %s\nBan Date: %s\nUnban Date: %s\nRemaining: %s\nReason: %s\nSet by: %s"

#define LANG_BANLIST_NOIP                "There is no matching IPban."
#define LANG_BANLIST_NOACCOUNT           "There is no matching account."
#define LANG_BANLIST_NOCHARACTER         "There is no banned account owning a character matching this part."
#define LANG_BANLIST_MATCHINGIP          "The following IPs match your pattern:"
#define LANG_BANLIST_MATCHINGACCOUNT     "The following accounts match your query:"

#define LANG_COMMAND_LEARN_MANY_SPELLS   "You learned many spells/skills."
#define LANG_COMMAND_LEARN_CLASS_SPELLS  "You learned all spells for class."
#define LANG_COMMAND_LEARN_CLASS_TALENTS "You learned all talents for class."
#define LANG_COMMAND_LEARN_ALL_LANG      "You learned all languages."
#define LANG_COMMAND_LEARN_ALL_CRAFT     "You learned all craft skills and recipes."
#define LANG_COMMAND_ADDITEMCOULDNOTFIND "Could not find '%s'"
#define LANG_COMMAND_ITEMIDINVALID       "Invalid item id: %u"
#define LANG_COMMAND_NOITEMFOUND         "No items found!"
#define LANG_COMMAND_LISTOBJINVALIDID    "Invalid gameobject id: %u"
#define LANG_COMMAND_LISTITEMMESSAGE     "Found items %u: %u ( inventory %u mail %u auction %u )"
#define LANG_COMMAND_LISTOBJMESSAGE      "Found gameobjects %u: %u "
#define LANG_COMMAND_INVALIDCREATUREID   "Invalid creature id: %u"
#define LANG_COMMAND_LISTCREATUREMESSAGE "Found creatures %u: %u "
#define LANG_COMMAND_NOITEMSETFOUND      "No item sets found!"
#define LANG_COMMAND_NOSKILLFOUND        "No skills found!"
#define LANG_COMMAND_NOSPELLFOUND        "No spells found!"
#define LANG_COMMAND_NOQUESTFOUND        "No quests found!"
#define LANG_COMMAND_NOCREATUREFOUND     "No creatures found!"
#define LANG_COMMAND_NOGAMEOBJECTFOUND   "No gameobjects found!"
#define LANG_COMMAND_GRAVEYARDNOEXIST    "Graveyard #%u doesn't exist."
#define LANG_COMMAND_GRAVEYARDALRLINKED  "Graveyard #%u already linked to zone #%u (current)."
#define LANG_COMMAND_GRAVEYARDLINKED     "Graveyard #%u linked to zone #%u (current)."
#define LANG_COMMAND_GRAVEYARDERROR      "No faction in Graveyard with id= #%u , fix your DB"
#define LANG_COMMAND_GRAVEYARD_NOTEAM    "invalid team, please fix database"
#define LANG_COMMAND_GRAVEYARD_ANY       "any"
#define LANG_COMMAND_GRAVEYARD_ALLIANCE  "alliance"
#define LANG_COMMAND_GRAVEYARD_HORDE     "horde"
#define LANG_COMMAND_GRAVEYARDNEAREST    "Graveyard #%u (faction: %s) is nearest from linked to zone #%u."
#define LANG_COMMAND_ZONENOGRAVEYARDS    "Zone #%u doesn't have linked graveyards."
#define LANG_COMMAND_ZONENOGRAFACTION    "Zone #%u doesn't have linked graveyards for faction: %s."
#define LANG_COMMAND_TP_ALREADYEXIST     "Teleport location already exists!"
#define LANG_COMMAND_TP_ADDED            "Teleport location added."
#define LANG_COMMAND_TP_ADDEDERR         "Teleport location NOT added: database error."
#define LANG_COMMAND_TP_DELETED          "Teleport location deleted."
#define LANG_COMMAND_TP_DELETEERR        "Teleport location NOT deleted: database error."

#define LANG_COMMAND_TARGET_LISTAURAS    "Target unit has %d auras:"
#define LANG_COMMAND_TARGET_AURADETAIL   "id: %d eff: %d type: %d duration: %d name: %s"
#define LANG_COMMAND_TARGET_LISTAURATYPE "Target unit has %d auras of type %d:"
#define LANG_COMMAND_TARGET_AURASIMPLE   "id: %d eff: %d name: %s"

#define LANG_COMMAND_QUEST_NOTFOUND      "Quest %u not found."
#define LANG_COMMAND_QUEST_STARTFROMITEM "Quest %u started from item. For correct work, please, add item to inventory and start quest in normal way: .additem %u"
#define LANG_COMMAND_QUEST_REMOVED       "Quest removed."
#define LANG_COMMAND_QUEST_REWARDED      " [rewarded]"
#define LANG_COMMAND_QUEST_COMPLETE      " [complete]"
#define LANG_COMMAND_QUEST_ACTIVE        " [active]"

#define LANG_COMMAND_FLYMODE_WRONGARG    "Incorrect arguments. Use .flymode on/off."
#define LANG_COMMAND_FLYMODE_STATUS      "%s's Fly Mode %s"

#define LANG_COMMAND_OPCODESENT          "Opcode %u sent to %s"

#define LANG_COMMAND_IMPORT_SUCCESS      "Character loaded successfully!"
#define LANG_COMMAND_IMPORT_FAILED       "Failed to load the character!"
#define LANG_COMMAND_EXPORT_SUCCESS      "Character dumped successfully!"
#define LANG_COMMAND_EXPORT_FAILED       "Character dump failed!"

//log
#define LANG_SPAWNING_SPIRIT_HEAL        "Spawning spirit healers\n"
#define LANG_NO_SPIRIT_HEAL_DB           "No spirit healers in database, exiting."

#define LANG_SET_SKILL                   "Skill %u (%s) for player %s set to %u and current maximum set to %u."
#define LANG_SET_SKILL_ERROR             "Player %s must have skill %u (%s) before using this command."

#define LANG_INVALID_SKILL_ID            "Invalid skill id (%u)"
#define LANG_LEARNING_GM_SKILLS          "You learned default GM spells/skills."
#define LANG_YOU_KNOWN_SPELL             "You already know that spell."
#define LANG_TARGET_KNOWN_SPELL          "Target(%s) already know that spell."
#define LANG_UNKNOWN_SPELL               "%s doesn't know that spell."
#define LANG_FORGET_SPELL                "You already forgot that spell."
#define LANG_REMOVEALL_COOLDOWN          "All spell cooldowns removed for %s."
#define LANG_REMOVE_COOLDOWN             "Spell %u cooldown removed for %s."
                                                            //log
#define LANG_ADDITEM                     "Command : Additem, itemId = %i, amount = %i"
#define LANG_ADDITEMSET                  "Command : Additemset, itemsetId = %i"
#define LANG_ITEM_CANNOT_CREATE          "Cannot create item '%i' (amount: %i)"
#define LANG_INSERT_GUILD_NAME           "You need to provide a guild name!"
#define LANG_PLAYER_NOT_FOUND            "Player not found!"
#define LANG_PLAYER_IN_GUILD             "Player already has a guild!"
#define LANG_GUILD_NOT_CREATED           "Guild not created! (already exists?)"
#define LANG_NO_ITEMS_FROM_ITEMSET_FOUND "No items from itemset '%u' found."

#define LANG_DISTANCE                    "The distance is: (3D) %f (2D) %f yards."
                                                            //log
#define LANG_ADD_OBJ_LV3                 "AddObject at Level3.cpp line 1176"

#define LANG_ITEM_SLOT                   "Item '%i' '%s' Item Slot %i"
#define LANG_ITEM_SLOT_NOT_EXIST         "Item '%i' doesn't exist."
#define LANG_ITEM_ADDED_TO_SLOT          "Item '%i' '%s' Added to Slot %i"
#define LANG_ITEM_SAVE_FAILED            "Item save failed!"
#define LANG_ITEMLIST_SLOT               "%d - owner: %s (guid: %u account: %u ) %s"
#define LANG_ITEMLIST_MAIL               "%d - sender: %s (guid: %u account: %u ) receiver: %s (guid: %u account: %u ) %s"
#define LANG_ITEMLIST_AUCTION            "%d - owner: %s (guid: %u account: %u ) %s"

#define LANG_WRONG_LINK_TYPE             "Wrong link type!"
#define LANG_ITEM_LIST                   "%d - |cffffffff|Hitem:%d:0:0:0|h[%s]|h|r "
#define LANG_QUEST_LIST                  "%d - |cffffffff|Hquest:%d|h[%s]|h|r "
#define LANG_CREATURE_ENTRY_LIST         "%d - |cffffffff|Hcreature_entry:%d|h[%s]|h|r "
#define LANG_CREATURE_LIST               "%d - |cffffffff|Hcreature:%d|h[%s X:%f Y:%f Z:%f MapId:%d]|h|r "
#define LANG_GO_ENTRY_LIST               "%d - |cffffffff|Hgameobject_entry:%d|h[%s]|h|r "
#define LANG_GO_LIST                     "%d - |cffffffff|Hgameobject:%d|h[%s X:%f Y:%f Z:%f MapId:%d]|h|r "
#define LANG_ITEMSET_LIST                "%d - |cffffffff|Hitemset:%d|h[%s]|h|r "
#define LANG_TELE_LIST                   "|cffffffff|Htele:%s|h[%s]|h|r "
#define LANG_SPELL_LIST                  "%d - |cffffffff|Hspell:%d|h[%s]|h|r "
#define LANG_SKILL_LIST                  "%d - |cffffffff|Hskill:%d|h[%s]|h|r "

#define LANG_GAMEOBJECT_NOT_EXIST        "Game Object (GUID: %u) not found"
                                                            //log
#define LANG_GAMEOBJECT_CURRENT          ">> Game Object %s (GUID: %u) at %f %f %f. Orientation %f."
#define LANG_GAMEOBJECT_DETAIL           "Selected object:\n%s\nGUID: %u ID: %u\nX: %f Y: %f Z: %f MapId: %u\nOrientation: %f"
#define LANG_GAMEOBJECT_ADD              ">> Add Game Object '%i' (%s) (GUID: %i) added at '%f %f %f'."

#define LANG_NPCINFO_CHAR                "Player selected NPC\nGUID: %u.\nFaction: %u.\nnpcFlags: %u.\nEntry: %u.\nDisplayID: %u (Native: %u)."
#define LANG_NPCINFO_LEVEL               "Level: %u."
#define LANG_NPCINFO_HEALTH              "Health (base): %u. (max): %u. (current): %u."
#define LANG_NPCINFO_FLAGS               "Field Flags: %u.\nDynamic Flags: %u.\nFaction Template: %u."
#define LANG_NPCINFO_LOOT                "Loot: %u Pickpocket: %u Skinning: %u"
#define LANG_NPCINFO_POSITION            "Position: %f %f %f."
#define LANG_NPCINFO_VENDOR              "*** Is a vendor!"
#define LANG_NPCINFO_TRAINER             "*** Is a trainer!"
#define LANG_NPCINFO_DUNGEON_ID          "InstanceID: %u"

#define LANG_PINFO_ACCOUNT               "Player%s %s (guid: %u) Account: %s (id: %u) GMLevel: %u Last IP: %s"
#define LANG_PINFO_LEVEL                 "Played time: %s Level: %u Money: %ug%us%uc"
#define LANG_PINFO_NO_REP                "Command .pinfo doesn't support 'rep' option for offline players."

#define LANG_YOU_SET_EXPLORE_ALL         "%s has explored all zones now."
#define LANG_YOU_SET_EXPLORE_NOTHING     "%s has no more explored zones."
#define LANG_YOURS_EXPLORE_SET_ALL       "%s has explored all zones for you."
#define LANG_YOURS_EXPLORE_SET_NOTHING   "%s has hidden all zones from you."

#define LANG_HOVER_ENABLED               "Hover enabled"
#define LANG_HOVER_DISABLED              "Hover disabled"
#define LANG_YOURS_LEVEL_UP              "You have been leveled up (%i)"
#define LANG_YOURS_LEVEL_DOWN            "You have been leveled down (%i)"
#define LANG_YOURS_LEVEL_PROGRESS_RESET  "Your level progress has been reset."
#define LANG_EXPLORE_AREA                "The area has been set as explored."
#define LANG_UNEXPLORE_AREA              "The area has been set as not explored."

#define LANG_UPDATE                      "GUID=%i 's updateIndex: %i, value:  %i."
#define LANG_UPDATE_CHANGE               "You change GUID=%i 's UpdateIndex: %i value to %i."
#define LANG_TOO_BIG_INDEX               "The value index %u is too big to %u(count: %u)."
                                                            //log
#define LANG_SET_UINT                    "Set %u uint32 Value:[OPCODE]:%u [VALUE]:%u"
#define LANG_SET_UINT_FIELD              "You Set %u Field:%u to uint32 Value: %u"
                                                            //log
#define LANG_SET_FLOAT                   "Set %u float Value:[OPCODE]:%u [VALUE]:%f"
#define LANG_SET_FLOAT_FIELD             "You Set %u Field:%i to float Value: %f"
                                                            //log
#define LANG_GET_UINT                    "Get %u uint32 Value:[OPCODE]:%u [VALUE]:%u"
#define LANG_GET_UINT_FIELD              "The uint32 value of %u in %u is: %u"
                                                            //log
#define LANG_GET_FLOAT                   "Get %u float Value:[OPCODE]:%u [VALUE]:%f"
#define LANG_GET_FLOAT_FIELD             "The float of %u value in %u is: %f"

                                                            //log
#define LANG_SET_32BIT                   ".Set32Bit:[OPCODE]:%u [VALUE]:%u"
#define LANG_SET_32BIT_FIELD             "You set Bit of Field:%u to Value: %u"

                                                            //log
#define LANG_CHANGE_32BIT                ".Mod32Value:[OPCODE]:%u [VALUE]:%i"
#define LANG_CHANGE_32BIT_FIELD          "You modified the value of Field:%u to Value: %u"

#define LANG_INVISIBLE_INVISIBLE         "You are now invisible."
#define LANG_INVISIBLE_VISIBLE           "You are now visible."

#define LANG_BG_CAPTURED_HF              "$n captured the Horde flag!"
#define LANG_BG_CAPTURED_AF              "$n captured the Alliance flag!"
#define LANG_BG_A_WINS                   "The Alliance wins!"
#define LANG_BG_H_WINS                   "The Horde wins!"
#define LANG_BG_DROPPED_HF               "The Horde flag was dropped by $n!"
#define LANG_BG_DROPPED_AF               "The Alliance Flag was dropped by $n!"
#define LANG_BG_RETURNED_AF              "The Alliance Flag was returned to its base by $n!"
#define LANG_BG_RETURNED_HF              "The Horde flag was returned to its base by $n!"
#define LANG_BG_PICKEDUP_HF              "The Horde flag was picked up by $n!"
#define LANG_BG_PICKEDUP_AF              "The Alliance Flag was picked up by $n!"
#define LANG_BG_F_PLACED                 "The flags are now placed at their bases."
#define LANG_BG_WSG_ONE_MINUTE           "The battle for Warsong Gulch begins in 1 minute."
#define LANG_BG_WSG_HALF_MINUTE          "The battle for Warsong Gulch begins in 30 seconds. Prepare yourselves!"
#define LANG_BG_WSG_BEGIN                "Let the battle for Warsong Gulch begin!"

#define LANG_ARENA_ONE_TOOLOW            "You must be level %u to form an arena team"
#define LANG_ARENA_ONE_MINUTE            "One minute until the Arena battle begins!"
#define LANG_ARENA_THIRTY_SECONDS        "Thirty seconds until the Arena battle begins!"
#define LANG_ARENA_FIFTEEN_SECONDS       "Fifteen seconds until the Arena battle begins!"
#define LANG_ARENA_BEGUN                 "The Arena battle has begun!"

#define LANG_WAIT_BEFORE_SPEAKING        "You must wait %s before speaking again."
