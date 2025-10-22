CaveOfWishes_B2F_MapScripts::
	.byte 0


CaveOfWishes_B2F_Rock::
# 6 "data/maps/CaveOfWishes_B2F/scripts.pory"
	lock
# 7 "data/maps/CaveOfWishes_B2F/scripts.pory"
	msgbox CaveOfWishes_B2F_Examine_Rock, MSGBOX_DEFAULT
# 8 "data/maps/CaveOfWishes_B2F/scripts.pory"
	waitmessage
# 9 "data/maps/CaveOfWishes_B2F/scripts.pory"
	goto_if_set FLAG_JIRACHI_BATTLED, CaveOfWishes_B2F_Rock_2
# 13 "data/maps/CaveOfWishes_B2F/scripts.pory"
	msgbox CaveOfWishes_B2F_Wish_Rock, MSGBOX_YESNO
# 14 "data/maps/CaveOfWishes_B2F/scripts.pory"
	waitmessage
# 15 "data/maps/CaveOfWishes_B2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CaveOfWishes_B2F_Rock_4
# 43 "data/maps/CaveOfWishes_B2F/scripts.pory"
	msgbox CaveOfWishes_B2F_Left_Rock, MSGBOX_DEFAULT
# 44 "data/maps/CaveOfWishes_B2F/scripts.pory"
	release
	end

CaveOfWishes_B2F_Rock_2:
# 10 "data/maps/CaveOfWishes_B2F/scripts.pory"
	release
	end

CaveOfWishes_B2F_Rock_4:
# 17 "data/maps/CaveOfWishes_B2F/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 18 "data/maps/CaveOfWishes_B2F/scripts.pory"
	delay 30
# 19 "data/maps/CaveOfWishes_B2F/scripts.pory"
	waitmoncry
# 20 "data/maps/CaveOfWishes_B2F/scripts.pory"
	msgbox CaveOfWishes_Jirachi_Appears, MSGBOX_DEFAULT
# 21 "data/maps/CaveOfWishes_B2F/scripts.pory"
	waitmessage
# 22 "data/maps/CaveOfWishes_B2F/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 50, ITEM_COMET_SHARD
# 23 "data/maps/CaveOfWishes_B2F/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 24 "data/maps/CaveOfWishes_B2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 25 "data/maps/CaveOfWishes_B2F/scripts.pory"
	waitstate
# 26 "data/maps/CaveOfWishes_B2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CaveOfWishes_B2F_Rock_8
CaveOfWishes_B2F_Rock_7:
# 30 "data/maps/CaveOfWishes_B2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CaveOfWishes_B2F_Rock_11
CaveOfWishes_B2F_Rock_10:
# 34 "data/maps/CaveOfWishes_B2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq CaveOfWishes_B2F_Rock_14
CaveOfWishes_B2F_Rock_13:
# 38 "data/maps/CaveOfWishes_B2F/scripts.pory"
	setflag FLAG_JIRACHI_BATTLED
# 39 "data/maps/CaveOfWishes_B2F/scripts.pory"
	release
	end

CaveOfWishes_B2F_Rock_8:
# 27 "data/maps/CaveOfWishes_B2F/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 28 "data/maps/CaveOfWishes_B2F/scripts.pory"
	msgbox CaveOfWishes_Jirachi_Fled, MSGBOX_DEFAULT
	goto CaveOfWishes_B2F_Rock_7

CaveOfWishes_B2F_Rock_11:
# 31 "data/maps/CaveOfWishes_B2F/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 32 "data/maps/CaveOfWishes_B2F/scripts.pory"
	msgbox CaveOfWishes_Jirachi_Fled, MSGBOX_DEFAULT
	goto CaveOfWishes_B2F_Rock_10

CaveOfWishes_B2F_Rock_14:
# 35 "data/maps/CaveOfWishes_B2F/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 36 "data/maps/CaveOfWishes_B2F/scripts.pory"
	msgbox CaveOfWishes_Jirachi_Fled, MSGBOX_DEFAULT
	goto CaveOfWishes_B2F_Rock_13


CaveOfWishes_B2F_Rock_Jirachi_Battle::
	return


CaveOfWishes_B2F_Examine_Rock::
# 52 "data/maps/CaveOfWishes_B2F/scripts.pory"
	.string "A strange looking rock.$"

CaveOfWishes_B2F_Wish_Rock::
# 56 "data/maps/CaveOfWishes_B2F/scripts.pory"
	.string "Make a wish on the rock?$"

CaveOfWishes_B2F_Left_Rock::
# 60 "data/maps/CaveOfWishes_B2F/scripts.pory"
	.string "You left the rock alone.$"

CaveOfWishes_Jirachi_Appears::
# 64 "data/maps/CaveOfWishes_B2F/scripts.pory"
	.string "Your wish summoned JIRACHI!$"

CaveOfWishes_Jirachi_Fled::
# 68 "data/maps/CaveOfWishes_B2F/scripts.pory"
	.string "JIRACHI has fled.\p"
	.string "Maybe you'll see it again someday...\n$"
