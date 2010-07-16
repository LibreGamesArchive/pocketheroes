/*
 * This file is a part of Pocket Heroes Game project
 * 	http://www.pocketheroes.net
 *	https://code.google.com/p/pocketheroes/
 *
 * Copyright 2004-2010 by Robert Tarasov and Anton Stuk (iO UPG)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */ 

#include "stdafx.h"

bool TEXT_ENTRY_ML[TET_COUNT] = {true, false, true, true, false, true, true, true, true, true, false };
iStringT MakeTextEntryName(TextEntryType t, void* pObj)
{
	if (t == TET_DEFAULT) {
		return L"";
	} else if (t == TET_MAP_NAME) {
		return L"Map name";
	} else if (t == TET_MAP_DESC) {
		return L"Map Description";
	} else if (t == TET_TEVENT_TEXT) {
		iTimeEvent* pTE = (iTimeEvent*)pObj;
		return iFormat(L"Time Event (%s)", pTE->m_name.CStr());
	} else if (t == TET_HERO_CNAME) {
		iHero* pH = (iHero*)pObj;
		return iFormat(_T("Hero at (%d,%d) custom name"), pH->Pos().x, pH->Pos().y);
	} else if (t == TET_MAPITEM_MSG) {
		iMapItem* pMI = (iMapItem*)pObj;
		return iFormat(_T("Map item at (%d,%d) message"), pMI->Pos().x, pMI->Pos().y);
	} else if (t == TET_MAPGUARD_MSG) {
		iMapGuard* pMG = (iMapGuard*)pObj;
		return iFormat(_T("Map guard at (%d,%d) message"), pMG->Pos().x, pMG->Pos().y);
	} else if (t == TET_MEVENT_REWMSG) {
		iMapEvent* pME = (iMapEvent*)pObj;
		return iFormat(_T("Map event at (%d,%d) reward message"), pME->Pos().x, pME->Pos().y);
	} else if (t == TET_MEVENT_ATTMSG) {
		iMapEvent* pME = (iMapEvent*)pObj;
		return iFormat(_T("Map event at (%d,%d) attack message"), pME->Pos().x, pME->Pos().y);
	} else if (t == TET_VIS_MSG) {
		iVisCnst* pVC = (iVisCnst*)pObj;
		return iFormat(_T("Visitable at (%d,%d) custom message"), pVC->Pos().x, pVC->Pos().y);
	} else if (t == TET_CASTLE_CNAME) {
		iCastle* pC = (iCastle*)pObj;
		return iFormat(_T("Castle at (%d,%d) custom message"), pC->Pos().x, pC->Pos().y);
	}

	check(0);
	return L"";
}

LPCTSTR LANG_NAME[GLNG_COUNT] = {
	_T("English"),
	_T("Russian")/*,
	_T("Polish"),
	_T("Slovak"),
	_T("German"),
	_T("Czech"),
	_T("Italian"),
	_T("French"),
	_T("Spanish")*/
};

LPCTSTR SURF_ID[STYPE_COUNT] ={
	_T("WATER"),
	_T("SAND"),
	_T("DIRT"),
	_T("GRASS"),
	_T("SWAMP"),
	_T("LAVA"),
	_T("WASTELAND"),
	_T("DESERT"),
	_T("SNOW"),
	_T("NDESERT"),
	_T("PAVEMENT"),
	_T("NWASTELAND")
};

LPCTSTR SURF_NAMEKEY[STYPE_COUNT] = {
	_T("SURF_WATER"),
	_T("SURF_SAND"),
	_T("SURF_DIRT"),
	_T("SURF_GRASS"),
	_T("SURF_SWAMP"),
	_T("SURF_LAVA"),
	_T("SURF_WASTELAND"),
	_T("SURF_DESERT"),
	_T("SURF_SNOW"),
	_T("SURF_DESERT")
	_T("SURF_PAVEMENT"),
	_T("SURF_WASTELAND")
};

LPCTSTR MAP_SIZ_SNAME[MSIZ_COUNT] = {
	_T("S"),
	_T("M"),
	_T("L"),
	_T("XL")
};

LPCTSTR MAP_SIZ_NAMEKEY[MSIZ_COUNT] = {
	_T("MAPSIZ_SMALL"),
	_T("MAPSIZ_MEDIUM"),
	_T("MAPSIZ_LARGE"),
	_T("MAPSIZ_EXTRALARGE")
};

LPCTSTR DIFF_NAMEKEY[DFC_COUNT] = {
	_T("DIFF_EASY"),
	_T("DIFF_NORMAL"),
	_T("DIFF_HARD"),
	_T("DIFF_EXPERT"),
	_T("DIFF_IMPOSSIBLE")
};

LPCTSTR PLAYER_NAMEKEY[PID_COUNT] = {
	_T("PLAYER_RED"),
	_T("PLAYER_GREEN"),
	_T("PLAYER_BLUE"),
	_T("PLAYER_CYAN"),
	_T("PLAYER_MAGENTA"),
	_T("PLAYER_YELLOW")
};

LPCTSTR PLAYER_TYPE_NAMEKEY[PT_COUNT] = {
	_T("PT_UNDEFINED"),
	_T("PT_HUMAN"),
	_T("PT_COMPUTER")
};

LPCTSTR PLAYER_TYPE_MASK_NAMEKEY[PTM_COUNT] = {
	_T("PTM_HUMAN_ONLY"),
	_T("PTM_COMPUTER_ONLY"),
	_T("PTM_HUMAN_OR_COMPUTER")
};

LPCTSTR HERO_TYPE_ID[HERO_TYPE_COUNT] = {
	_T("KNIGHT"),
	_T("BARBARIAN"),
	_T("WIZARD"),
	_T("WARLOCK"),
	_T("SORCERESS"),
	_T("NECROMANCER")
};

LPCTSTR HERO_TYPE_NAMEKEY[HERO_TYPE_COUNT] = {
	_T("HERO_TYPE_KNIGHT"),
	_T("HERO_TYPE_BARBARIAN"),
	_T("HERO_TYPE_WIZARD"),
	_T("HERO_TYPE_WARLOCK"),
	_T("HERO_TYPE_SORCERESS"),
	_T("HERO_TYPE_NECROMANCER")
};

LPCTSTR VCNSTTYPE_ID[VCNST_COUNT] = {
	_T("BASIC"),
	_T("STABLES"),
	_T("GAZEBO"),
	_T("MANASOURCE"),
	_T("MLMODIFIER"),
	_T("PSMODIFIER"),
	_T("OBELISK"),
	_T("SIGN"),
	_T("DWELLING"),
	_T("WITCHHUT"),
	_T("SHRINE"),
	_T("TREASURY"),
	_T("TELEPORT"),
	_T("KEYMASTER"),
	_T("KNWLTREE"),
	_T("WINDMILL"),
	_T("WEEKLYMIN")
};

LPCTSTR OCNSTTYPE_ID[OCNST_COUNT] = {
	_T("BASIC"),
	_T("FURTSKILL")
};

LPCTSTR ARTTYPE_ID[ARTT_COUNT] = {
	_T("BASIC"),
	_T("FURTSKILL"),
	_T("NEGSPHERE"),
	_T("SHOFWAR"),
	_T("CURSWORD")
};

LPCTSTR ARTASSIGN_ID[ART_ASSIGN_COUNT] = {
	_T("HEAD"),
	_T("NECK"),
	_T("TORSO"),
	_T("SHOULDERS"),
	_T("HANDS"),
	_T("FINGERS"),
	_T("LEGS"),
	_T("FEET"),
	_T("MISC")
};

LPCTSTR CASTLE_PREFIXES[CTLT_COUNT] = {
	_T("citadel"),
	_T("stronghold"),
	_T("tower"),
	_T("dungeon"),
	_T("fortress"),
	_T("necropolis"),
	_T("randctl")
};

LPCTSTR CASTLE_NAMEKEY[CTLT_COUNT] = {
	_T("CASTLE_TYPE_CITADEL"),
	_T("CASTLE_TYPE_STRONGHOLD"),
	_T("CASTLE_TYPE_TOWER"),
	_T("CASTLE_TYPE_DUNGEON"),
	_T("CASTLE_TYPE_FORTRESS"),
	_T("CASTLE_TYPE_NECROPOLIS"),
	_T("CASTLE_TYPE_RANDOM")
};

LPCTSTR CTLCNST_NAMEKEY[CTLCNST_COUNT] = {
	_T("DWEL_CITD_L1"), _T("DWEL_CITD_L2"), _T("DWEL_CITD_L3"), _T("DWEL_CITD_L4"), _T("DWEL_CITD_L5"), _T("DWEL_CITD_L6"),
	_T("DWEL_STRH_L1"), _T("DWEL_STRH_L2"), _T("DWEL_STRH_L3"), _T("DWEL_STRH_L4"), _T("DWEL_STRH_L5"), _T("DWEL_STRH_L6"),
	_T("DWEL_TOWR_L1"), _T("DWEL_TOWR_L2"), _T("DWEL_TOWR_L3"), _T("DWEL_TOWR_L4"), _T("DWEL_TOWR_L5"), _T("DWEL_TOWR_L6"),
	_T("DWEL_DUNG_L1"), _T("DWEL_DUNG_L2"), _T("DWEL_DUNG_L3"), _T("DWEL_DUNG_L4"), _T("DWEL_DUNG_L5"), _T("DWEL_DUNG_L6"),
	_T("DWEL_FORT_L1"), _T("DWEL_FORT_L2"), _T("DWEL_FORT_L3"), _T("DWEL_FORT_L4"), _T("DWEL_FORT_L5"), _T("DWEL_FORT_L6"),
	_T("DWEL_NECR_L1"), _T("DWEL_NECR_L2"), _T("DWEL_NECR_L3"), _T("DWEL_NECR_L4"), _T("DWEL_NECR_L5"), _T("DWEL_NECR_L6"),

	_T("CTLCNST_COMMON_MGUILD1"), _T("CTLCNST_COMMON_MGUILD2"), _T("CTLCNST_COMMON_MGUILD3"), _T("CTLCNST_COMMON_MGUILD4"), _T("CTLCNST_COMMON_MGUILD5"),
	_T("CTLCNST_COMMON_MNODE"), _T("CTLCNST_COMMON_TAVERN"), _T("CTLCNST_COMMON_MARKET"), _T("CTLCNST_COMMON_TOWNHALL"), _T("CTLCNST_COMMON_CITYHALL"),
	_T("CTLCNST_COMMON_OREMINE"), _T("CTLCNST_COMMON_SAWMILL"), _T("CTLCNST_COMMON_ALCHLAB"), _T("CTLCNST_COMMON_GEMSMINE"), _T("CTLCNST_COMMON_CRYSTALMINE"), _T("CTLCNST_COMMON_SULFURMINE"),
	_T("CTLCNST_COMMON_MOAT"), _T("CTLCNST_COMMON_MTURRET"), _T("CTLCNST_COMMON_LTURRET"), _T("CTLCNST_COMMON_RTURRET"),

	_T("CTLCNST_SHOOTINGRANGE"), _T("CTLCNST_MESSHALL"), _T("CTLCNST_OAKWOOD"), _T("CTLCNST_WATERFALL"), _T("CTLCNST_MINERSGUILD"), _T("CTLCNST_UNEARTHEDGRAVES"),

	_T("CTLCNST_OBSERVPOST"), _T("CTLCNST_FORTIFICATION"), _T("CTLCNST_HALLOFVALHALLA"), _T("CTLCNST_ADOBE"), _T("CTLCNST_WALLOFKNOWLEDGE"), _T("CTLCNST_LIBRARY"),
	_T("CTLCNST_ALTAR"), _T("CTLCNST_MANAVORTEX"), _T("CTLCNST_TREASURY"), _T("CTLCNST_MYSTICPOUND"), _T("CTLCNST_NECRAMPLIFIER"), _T("CTLCNST_COVEROFDARKNESS"),
};

LPCTSTR FURTSKILL_ID[FSK_COUNT] = {
	_T("ATTACK"),
	_T("DEFENCE"),
	_T("POWER"),
	_T("KNOWLEDGE"),
	
	_T("ACTPTS"),
	_T("LOGISTICS"),
	_T("PATHFINDING"),
	_T("SCOUTING"),
	_T("VISION"),
	
	_T("BALLISTICS"),
	_T("LEARNING"),
	_T("DIPLOMACY"),
	_T("NECROMANCY"),
	
	_T("SORCERY"),
	_T("MANAPTS"),
	_T("INTELLIGENCE"),
	_T("WISDOM"),
	
	_T("MAG_AIR"),
	_T("MAG_EARTH"),
	_T("MAG_FIRE"),
	_T("MAG_WATER"),

	_T("RES_AIR"),
	_T("RES_EARTH"),
	_T("RES_FIRE"),
	_T("RES_WATER"),
	
	_T("ARCHERY"),
	_T("OFFENCE"),
	_T("AIRSHIELD"),
	_T("SHIELD"),
	_T("ARMORER"),
	_T("RANGEATTACK"),
	_T("MELEEATTACK"),
	_T("RESIST"),

	_T("HITS"),
	_T("SPEED"),
	_T("MORALE"),
	_T("LUCK"),
	_T("COUNTERSTRIKE"),

	_T("MIN_GOLD"),
	_T("MIN_ORE"),
	_T("MIN_WOOD"),
	_T("MIN_MERCURY"),
	_T("MIN_GEMS"),
	_T("MIN_CRYSTAL"),
	_T("MIN_SULFUR")
};

LPCTSTR PRSKILL_ID[PRSKILL_COUNT] = {
	_T("ATTACK"),
	_T("DEFENCE"),
	_T("POWER"),
	_T("KNOWLEDGE")
};

LPCTSTR SECSKILL_ID[SECSK_COUNT] = {
	_T("ESTATES"),
	_T("LEADERSHIP"),
	_T("LUCK"),
	_T("DIPLOMACY"),
	_T("AIRMAGIC"),
	_T("EARTHMAGIC"),
	_T("FIREMAGIC"),
	_T("WATERMAGIC"),
	_T("WISDOM"),
	_T("NECROMANCY"),
	_T("MYSTICISM"),
	_T("INTELLIGENCE"),
	_T("RESISTANCE"),
	_T("SORCERY"),
	_T("LEARNING"),
	_T("SCOUTING"),
	_T("LOGISTICS"),
	_T("PATHFINDING"),
	_T("ARCHERY"),
	_T("BALLISTICS"),
	_T("OFFENCE"),
	_T("ARMORER")
};

LPCTSTR PRSKILL_NAMEKEY[PRSKILL_COUNT] = {
	_T("SKILL_ATTACK"),
	_T("SKILL_DEFENCE"),
	_T("SKILL_SPOWER"),
	_T("SKILL_KNOWLEDGE")
};

LPCTSTR SECSK_NAMEKEY[SECSK_COUNT] = {
	_T("HSKILL_ESTATES"),
	_T("HSKILL_LEADERSHIP"),
	_T("HSKILL_LUCK"),
	_T("HSKILL_DIPLOMACY"),
	_T("HSKILL_AIRMAGIC"),
	_T("HSKILL_EARTHMAGIC"),
	_T("HSKILL_FIREMAGIC"),
	_T("HSKILL_WATERMAGIC"),
	_T("HSKILL_WISDOM"),
	_T("HSKILL_NECROMANCY"),
	_T("HSKILL_MYSTICISM"),
	_T("HSKILL_INTELLIGENCE"),
	_T("HSKILL_RESISTANCE"),
	_T("HSKILL_SORCERY"),
	_T("HSKILL_LEARNING"),
	_T("HSKILL_SCOUTING"),
	_T("HSKILL_LOGISTICS"),
	_T("HSKILL_PATHFINDING"),
	_T("HSKILL_ARCHERY"),
	_T("HSKILL_BALLISTICS"),
	_T("HSKILL_OFFENCE"),
	_T("HSKILL_ARMORER")
};

LPCTSTR SSLVL_NAMEKEY[SSLVL_COUNT] = {
	_T("HSKILL_LEVEL_BASIC"),
	_T("HSKILL_LEVEL_ADVANCED"),
	_T("HSKILL_LEVEL_EXPERT"),
};

LPCTSTR SPELL_NAMEKEY[MSP_COUNT] = {
	_T("SPNAME_MAGICARROW"),
	_T("SPNAME_PROTEARTH"),
	_T("SPNAME_HASTE"),
	_T("SPNAME_SHIELD"),
	_T("SPNAME_DISRAY"),
	_T("SPNAME_LIGHTNINGBOLT"),
	_T("SPNAME_PRECISION"),
	_T("SPNAME_AIRSHIELD"),
	_T("SPNAME_HOLYWORD"),
	_T("SPNAME_COUNTERSTRIKE"),
	_T("SPNAME_RESURRECT"),
	_T("SPNAME_AIRELEMENTAL"),

	_T("SPNAME_PROTAIR"),
	_T("SPNAME_SLOW"),
	_T("SPNAME_STONESKIN"),
	_T("SPNAME_VISIONS"),
	_T("SPNAME_EARTHQUAKE"),
	_T("SPNAME_SORROW"),
	_T("SPNAME_METEORSHOWER"),
	_T("SPNAME_TOWNPORTAL"),
	_T("SPNAME_IMPLOSION"),
	_T("SPNAME_EARTHELEMENTAL"),

	_T("SPNAME_BLOODLUST"),
	_T("SPNAME_PROTWATER"),
	_T("SPNAME_CURSE"),
	_T("SPNAME_BLIND"),
	_T("SPNAME_WEAKNESS"),
	_T("SPNAME_DEATHRIPPLE"),
	_T("SPNAME_FIREBALL"),
	_T("SPNAME_MISFORTUNE"),
	_T("SPNAME_ANIMATEDEAD"),
	_T("SPNAME_FIREBLAST"),
	_T("SPNAME_ARMAGEDDON"),
	_T("SPNAME_FIREELEMENTAL"),

	_T("SPNAME_BLESS"),
	_T("SPNAME_PROTFIRE"),
	_T("SPNAME_DISPEL"),
	_T("SPNAME_CURE"),
	_T("SPNAME_COLDRAY"),
	_T("SPNAME_FORTUNE"),
	_T("SPNAME_MIRTH"),
	_T("SPNAME_COLDRING"),
	_T("SPNAME_ANTIMAGIC"),
	_T("SPNAME_PRAYER"),
	_T("SPNAME_WATERELEMENTAL"),

	_T("SPNAME_SUMMONSPRITES")
};

LPCTSTR MINERAL_ID[MINERAL_COUNT] = {
	_T("GOLD"),
	_T("ORE"),
	_T("WOOD"),
	_T("MERCURY"),
	_T("GEMS"),
	_T("CRYSTAL"),
	_T("SULFUR")
};

LPCTSTR MINERAL_NAMEKEY[MINERAL_COUNT] = {
	_T("MINERAL_GOLD"),
	_T("MINERAL_ORE"),
	_T("MINERAL_WOOD"),
	_T("MINERAL_MERCURY"),
	_T("MINERAL_GEM"),
	_T("MINERAL_CRYSTAL"),
	_T("MINERAL_SULFUR")
};

LPCTSTR RESOURCE_NAMEKEY[MINERAL_COUNT] = {
	_T("MAPRES_GOLD"),
	_T("MAPRES_ORE"),
	_T("MAPRES_WOOD"),
	_T("MAPRES_MERCURY"),
	_T("MAPRES_GEM"),
	_T("MAPRES_CRYSTAL"),
	_T("MAPRES_SULFUR")
};

LPCTSTR RAND_GUARDS_NAMEKEY[7] = {
	_T("RAND_GUARD"),
	_T("RAND_GUARD1"),
	_T("RAND_GUARD2"),
	_T("RAND_GUARD3"),
	_T("RAND_GUARD4"),
	_T("RAND_GUARD5"),
	_T("RAND_GUARD6")
};

LPCTSTR ART_LEVEL_ID[ART_LEVEL_COUNT] = {
	_T("NONE"),
	_T("TREASURE"),
	_T("MINOR"),
	_T("MAJOR"),
	_T("RELICT")
};

LPCTSTR CREAT_ID[CREAT_COUNT] = {
	_T("PEASANT"), _T("ARCHER"), _T("PIKEMAN"), _T("MONK"), _T("CAVALRY"), _T("PALADIN"),
	_T("GOBLIN"), _T("ORC"), _T("WARGRIDER"), _T("OGRE"), _T("TROLL"), _T("CYCLOP"),
	_T("YOUNGMAGE"), _T("WHITEWOLF"), _T("LIVINGARMOR"), _T("PEGASUS"), _T("MAGE"), _T("THOR"),
	_T("CENTAUR"), _T("GARGOYLE"), _T("GRIFFIN"),_T("MINOTAUR"), _T("HYDRA"), _T("REDDRAGON"),
	_T("SPRITE"), _T("DWARF"), _T("ELF"), _T("DRUID"), _T("UNICORN"), _T("FIREBIRD"),
	_T("SKELETON"), _T("ZOMBIE"), _T("LICH"), _T("VAMPIRE"), _T("BLACKKNIGHT"), _T("PLAGUE"),
	_T("ROGUE"), _T("NOMAD"), _T("GHOST"), _T("GENIE"), _T("MEDUSA"), _T("EARTHELEMENTAL"), 
	_T("AIRELEMENTAL"), _T("FIREELEMENTAL"), _T("WATERELEMENTAL")
};

LPCTSTR CREAT_NAMEKEY[CREAT_COUNT] = {
	_T("CREATURE_PEASANT_F1"),
	_T("CREATURE_ARCHER_F1"),
	_T("CREATURE_PIKEMAN_F1"),
	_T("CREATURE_MONK_F1"),
	_T("CREATURE_CAVALRY_F1"),
	_T("CREATURE_PALADIN_F1"),
	
	_T("CREATURE_GOBLIN_F1"),
	_T("CREATURE_ORC_F1"),
	_T("CREATURE_WARG_RIDER_F1"),
	_T("CREATURE_OGRE_F1"),
	_T("CREATURE_TROLL_F1"),
	_T("CREATURE_CYCLOP_F1"),

	_T("CREATURE_YOUNG_MAGE_F1"),
	_T("CREATURE_WHITE_WOLF_F1"),
	_T("CREATURE_LIVING_ARMOR_F1"),
	_T("CREATURE_PEGASUS_F1"),
	_T("CREATURE_MAGE_F1"),
	_T("CREATURE_THOR_F1"),
	
	_T("CREATURE_CENTAUR_F1"),
	_T("CREATURE_GARGOYLE_F1"),
	_T("CREATURE_GRIFFIN_F1"),
	_T("CREATURE_MINOTAUR_F1"),
	_T("CREATURE_HYDRA_F1"),
	_T("CREATURE_REDDRAGON_F1"),
	
	_T("CREATURE_SPRITE_F1"),
	_T("CREATURE_DWARF_F1"),
	_T("CREATURE_ELF_F1"),
	_T("CREATURE_DRUID_F1"),
	_T("CREATURE_UNICORN_F1"),
	_T("CREATURE_FIREBIRD_F1"),

	_T("CREATURE_SKELETON_F1"),
	_T("CREATURE_ZOMBIE_F1"),
	_T("CREATURE_LICH_F1"),
	_T("CREATURE_VAMPIRE_F1"),
	_T("CREATURE_BLACK_KNIGHT_F1"),
	_T("CREATURE_PLAGUE_F1"),

	_T("CREATURE_ROGUE_F1"),
	_T("CREATURE_NOMAD_F1"),
	_T("CREATURE_GHOST_F1"),
	_T("CREATURE_GENIE_F1"),
	_T("CREATURE_MEDUSA_F1"),
	_T("CREATURE_EARTHELEMENTAL_F1"), 
	_T("CREATURE_AIRELEMENTAL_F1"), 
	_T("CREATURE_FIREELEMENTAL_F1"), 
	_T("CREATURE_WATERELEMENTAL_F1")
};

LPCTSTR MAGIC_SPELL_ID[MSP_COUNT] = {
	_T("MAGICARROW"),
	_T("PROTEARTH"),
	_T("HASTE"),
	_T("SHIELD"),
	_T("DISRAY"),
	_T("LIGHTNINGBOLT"),
	_T("PRECISION"),
	_T("AIRSHIELD"),
	_T("HOLYWORD"),
	_T("COUNTERSTRIKE"),
	_T("RESURRECT"),
	_T("AIRELEMENTAL"),
	_T("PROTAIR"),
	_T("SLOW"),
	_T("STONESKIN"),
	_T("VISIONS"),
	_T("EARTHQUAKE"),
	_T("SORROW"),
	_T("METEORSHOWER"),
	_T("TOWNPORTAL"),
	_T("IMPLOSION"),
	_T("EARTHELEMENTAL"),
	_T("BLOODLUST"),
	_T("PROTWATER"),
	_T("CURSE"),
	_T("BLIND"),
	_T("WEAKNESS"),
	_T("DEATHRIPPLE"),
	_T("FIREBALL"),
	_T("MISFORTUNE"),
	_T("ANIMATEDEAD"),
	_T("FIREBLAST"),
	_T("ARMAGEDDON"),
	_T("FIREELEMENTAL"),
	_T("BLESS"),
	_T("PROTFIRE"),
	_T("DISPEL"),
	_T("CURE"),
	_T("COLDRAY"),
	_T("FORTUNE"),
	_T("MIRTH"),
	_T("COLDRING"),
	_T("ANTIMAGIC"),
	_T("PRAYER"),
	_T("WATERELEMENTAL"),
	_T("SUMMONSPRITES")
};

LPCTSTR MAGIC_SPELL_NAMEKEY[MSP_COUNT] = {
	_T("SPNAME_MAGICARROW"),
	_T("SPNAME_PROTEARTH"),
	_T("SPNAME_HASTE"),
	_T("SPNAME_SHIELD"),
	_T("SPNAME_DISRAY"),
	_T("SPNAME_LIGHTNINGBOLT"),
	_T("SPNAME_PRECISION"),
	_T("SPNAME_AIRSHIELD"),
	_T("SPNAME_HOLYWORD"),
	_T("SPNAME_COUNTERSTRIKE"),
	_T("SPNAME_RESURRECT"),
	_T("SPNAME_AIRELEMENTAL"),
	_T("SPNAME_PROTAIR"),
	_T("SPNAME_SLOW"),
	_T("SPNAME_STONESKIN"),
	_T("SPNAME_VISIONS"),
	_T("SPNAME_EARTHQUAKE"),
	_T("SPNAME_SORROW"),
	_T("SPNAME_METEORSHOWER"),
	_T("SPNAME_TOWNPORTAL"),
	_T("SPNAME_IMPLOSION"),
	_T("SPNAME_EARTHELEMENTAL"),
	_T("SPNAME_BLOODLUST"),
	_T("SPNAME_PROTWATER"),
	_T("SPNAME_CURSE"),
	_T("SPNAME_BLIND"),
	_T("SPNAME_WEAKNESS"),
	_T("SPNAME_DEATHRIPPLE"),
	_T("SPNAME_FIREBALL"),
	_T("SPNAME_MISFORTUNE"),
	_T("SPNAME_ANIMATEDEAD"),
	_T("SPNAME_FIREBLAST"),
	_T("SPNAME_ARMAGEDDON"),
	_T("SPNAME_FIREELEMENTAL"),
	_T("SPNAME_BLESS"),
	_T("SPNAME_PROTFIRE"),
	_T("SPNAME_DISPEL"),
	_T("SPNAME_CURE"),
	_T("SPNAME_COLDRAY"),
	_T("SPNAME_FORTUNE"),
	_T("SPNAME_MIRTH"),
	_T("SPNAME_COLDRING"),
	_T("SPNAME_ANTIMAGIC"),
	_T("SPNAME_PRAYER"),
	_T("SPNAME_WATERELEMENTAL"),
	_T("SPNAME_SUMMONSPRITES")
};


LPCTSTR REWARD_TYPE_ID[RIT_COUNT] = {
	_T("MINERAL"),
	_T("EXPERIENCE"),
	_T("MANAPTS"),	
	_T("TRAVELPTS"),	
	_T("MORALE"),
	_T("LUCK"),	
	_T("FURTSKILL"),	
	_T("ARTIFACT"),	
	_T("MAGICSPELL"),	
	_T("CREATGROUP")
};

