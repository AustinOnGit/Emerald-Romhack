GiantsCove_MapScripts::
# 2 "data/maps/GiantsCove/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GiantsCove_OnLoad
	.byte 0


GiantsCove_OnLoad::
# 6 "data/maps/GiantsCove/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, HideEntrance
	return


HideEntrance::
# 10 "data/maps/GiantsCove/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
# 11 "data/maps/GiantsCove/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
# 12 "data/maps/GiantsCove/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
# 13 "data/maps/GiantsCove/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 14 "data/maps/GiantsCove/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
# 15 "data/maps/GiantsCove/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return


CaveEntrance_Middle::
# 19 "data/maps/GiantsCove/scripts.pory"
	lockall
# 20 "data/maps/GiantsCove/scripts.pory"
	goto_if_set FLAG_REGI_DOORS_OPENED, CaveEntrance_Open
# 21 "data/maps/GiantsCove/scripts.pory"
	msgbox CaveSign, MSGBOX_DEFAULT
# 22 "data/maps/GiantsCove/scripts.pory"
	releaseall
	end


CaveEntrance_Sides::
# 27 "data/maps/GiantsCove/scripts.pory"
	lockall
# 28 "data/maps/GiantsCove/scripts.pory"
	msgbox CaveSign, MSGBOX_DEFAULT
# 29 "data/maps/GiantsCove/scripts.pory"
	releaseall
	end


CaveEntrance_Open::
# 34 "data/maps/GiantsCove/scripts.pory"
	msgbox CaveEntrance_Open_Text_0, MSGBOX_DEFAULT
# 35 "data/maps/GiantsCove/scripts.pory"
	releaseall
	end


RegigigasExamine::
# 41 "data/maps/GiantsCove/scripts.pory"
	lock
# 42 "data/maps/GiantsCove/scripts.pory"
	faceplayer
# 43 "data/maps/GiantsCove/scripts.pory"
	goto_if_set FLAG_DEFEATED_REGIROCK, RegigigasExamine_4
RegigigasExamine_2:
# 75 "data/maps/GiantsCove/scripts.pory"
	msgbox RegigigasSleep, MSGBOX_DEFAULT
# 76 "data/maps/GiantsCove/scripts.pory"
	release
	end

RegigigasExamine_1:
# 44 "data/maps/GiantsCove/scripts.pory"
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
# 45 "data/maps/GiantsCove/scripts.pory"
	delay 30
# 46 "data/maps/GiantsCove/scripts.pory"
	waitmoncry
# 47 "data/maps/GiantsCove/scripts.pory"
	msgbox RegigigasAwakens, MSGBOX_DEFAULT
# 48 "data/maps/GiantsCove/scripts.pory"
	waitmessage
# 49 "data/maps/GiantsCove/scripts.pory"
	setwildbattle SPECIES_REGIGIGAS, 70, ITEM_COMET_SHARD
# 50 "data/maps/GiantsCove/scripts.pory"
	special StartRegiBattle
# 51 "data/maps/GiantsCove/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 52 "data/maps/GiantsCove/scripts.pory"
	waitstate
# 53 "data/maps/GiantsCove/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq RegigigasExamine_9
RegigigasExamine_8:
# 56 "data/maps/GiantsCove/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RegigigasExamine_12
RegigigasExamine_11:
# 62 "data/maps/GiantsCove/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq RegigigasExamine_15
RegigigasExamine_14:
# 66 "data/maps/GiantsCove/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq RegigigasExamine_18
RegigigasExamine_17:
# 70 "data/maps/GiantsCove/scripts.pory"
	setflag FLAG_REGIGIGAS_BATTLED
# 71 "data/maps/GiantsCove/scripts.pory"
	release
	end

RegigigasExamine_3:
# 43 "data/maps/GiantsCove/scripts.pory"
	goto_if_set FLAG_DEFEATED_REGISTEEL, RegigigasExamine_1
	goto RegigigasExamine_2

RegigigasExamine_4:
# 43 "data/maps/GiantsCove/scripts.pory"
	goto_if_set FLAG_DEFEATED_REGICE, RegigigasExamine_3
	goto RegigigasExamine_2

RegigigasExamine_9:
# 54 "data/maps/GiantsCove/scripts.pory"
	call RegigigasWin
	goto RegigigasExamine_8

RegigigasExamine_12:
# 57 "data/maps/GiantsCove/scripts.pory"
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
# 58 "data/maps/GiantsCove/scripts.pory"
	call RegigigasWin
# 59 "data/maps/GiantsCove/scripts.pory"
	msgbox RegigigasDefeated, MSGBOX_DEFAULT
# 60 "data/maps/GiantsCove/scripts.pory"
	waitmessage
	goto RegigigasExamine_11

RegigigasExamine_15:
# 63 "data/maps/GiantsCove/scripts.pory"
	call RegigigasFlee
# 64 "data/maps/GiantsCove/scripts.pory"
	waitmessage
	goto RegigigasExamine_14

RegigigasExamine_18:
# 67 "data/maps/GiantsCove/scripts.pory"
	call RegigigasFlee
# 68 "data/maps/GiantsCove/scripts.pory"
	waitmessage
	goto RegigigasExamine_17


RegigigasWin::
# 82 "data/maps/GiantsCove/scripts.pory"
	fadescreen FADE_TO_BLACK
# 83 "data/maps/GiantsCove/scripts.pory"
	removeobject 1
# 84 "data/maps/GiantsCove/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


RegigigasFlee::
# 89 "data/maps/GiantsCove/scripts.pory"
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
# 90 "data/maps/GiantsCove/scripts.pory"
	delay 30
# 91 "data/maps/GiantsCove/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/GiantsCove/scripts.pory"
	removeobject 1
# 93 "data/maps/GiantsCove/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 94 "data/maps/GiantsCove/scripts.pory"
	msgbox RegigigasDefeated
	return


CaveEntrance_Open_Text_0:
# 34 "data/maps/GiantsCove/scripts.pory"
	.string "There's a hole in the wall.$"

RegigigasAwakens::
# 98 "data/maps/GiantsCove/scripts.pory"
	.string "REGIGIGAS has awakened!$"

RegigigasSleep::
# 102 "data/maps/GiantsCove/scripts.pory"
	.string "The giant does not wake.$"

RegigigasDefeated::
# 106 "data/maps/GiantsCove/scripts.pory"
	.string "Regigigas has fled.$"

CaveSign::
# 110 "data/maps/GiantsCove/scripts.pory"
	.string "UNDER THE WAVES LIES THE SECRET\n"
	.string "SEEK THE GOLEMS TO AWAKEN THE GIANT$"
