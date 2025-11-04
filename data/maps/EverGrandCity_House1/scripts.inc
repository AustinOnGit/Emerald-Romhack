# 1 "data/maps/EverGrandCity_House1/scripts.pory"

# 2 "data/maps/EverGrandCity_House1/scripts.pory"
EverGrandCity_House1_MapScripts::
# 3 "data/maps/EverGrandCity_House1/scripts.pory"
	.byte 0

EverGrandCity_House1_EventScript_OldLady::
# 7 "data/maps/EverGrandCity_House1/scripts.pory"
	lock
# 8 "data/maps/EverGrandCity_House1/scripts.pory"
	faceplayer
# 9 "data/maps/EverGrandCity_House1/scripts.pory"
	goto_if_set FLAG_EVERGRANDECITY_TUTOR, EverGrandCity_House1_EventScript_OldLady_2
# 15 "data/maps/EverGrandCity_House1/scripts.pory"
	msgbox OldLadyIntroduction, MSGBOX_YESNO
# 16 "data/maps/EverGrandCity_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EverGrandCity_House1_EventScript_OldLady_5
# 23 "data/maps/EverGrandCity_House1/scripts.pory"
	msgbox OldLadyDecline, MSGBOX_DEFAULT
# 24 "data/maps/EverGrandCity_House1/scripts.pory"
	release
	end

EverGrandCity_House1_EventScript_OldLady_1:
# 28 "data/maps/EverGrandCity_House1/scripts.pory"
	msgbox OldLadySafeJourney
# 29 "data/maps/EverGrandCity_House1/scripts.pory"
	release
	end

EverGrandCity_House1_EventScript_OldLady_2:
# 10 "data/maps/EverGrandCity_House1/scripts.pory"
	msgbox OldLadyWelcomeBack, MSGBOX_DEFAULT
# 11 "data/maps/EverGrandCity_House1/scripts.pory"
	waitmessage
# 12 "data/maps/EverGrandCity_House1/scripts.pory"
	call MoveTutor_EventScript_EverGrandeCity_Tutor
	goto EverGrandCity_House1_EventScript_OldLady_1

EverGrandCity_House1_EventScript_OldLady_5:
# 17 "data/maps/EverGrandCity_House1/scripts.pory"
	setflag FLAG_EVERGRANDECITY_TUTOR
# 18 "data/maps/EverGrandCity_House1/scripts.pory"
	msgbox OldLadyAccept, MSGBOX_DEFAULT
# 19 "data/maps/EverGrandCity_House1/scripts.pory"
	waitmessage
# 20 "data/maps/EverGrandCity_House1/scripts.pory"
	call MoveTutor_EventScript_EverGrandeCity_Tutor
	goto EverGrandCity_House1_EventScript_OldLady_1


EverGrandCity_House1_EventScript_OldLady2::
# 34 "data/maps/EverGrandCity_House1/scripts.pory"
	lock
# 35 "data/maps/EverGrandCity_House1/scripts.pory"
	faceplayer
# 36 "data/maps/EverGrandCity_House1/scripts.pory"
	goto_if_set FLAG_EVER_GRANDE_CITY_ABILITY_PATCH_RECIEVED, EverGrandCity_House1_EventScript_OldLady2_1
# 42 "data/maps/EverGrandCity_House1/scripts.pory"
	msgbox OldLady2AbilityPatch, MSGBOX_DEFAULT
# 43 "data/maps/EverGrandCity_House1/scripts.pory"
	waitmessage
# 44 "data/maps/EverGrandCity_House1/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 45 "data/maps/EverGrandCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 46 "data/maps/EverGrandCity_House1/scripts.pory"
	setflag FLAG_EVER_GRANDE_CITY_ABILITY_PATCH_RECIEVED
# 47 "data/maps/EverGrandCity_House1/scripts.pory"
	msgbox OldLady2
# 48 "data/maps/EverGrandCity_House1/scripts.pory"
	release
	end

EverGrandCity_House1_EventScript_OldLady2_1:
# 37 "data/maps/EverGrandCity_House1/scripts.pory"
	msgbox OldLady2
# 38 "data/maps/EverGrandCity_House1/scripts.pory"
	release
	end


OldLadyIntroduction::
# 54 "data/maps/EverGrandCity_House1/scripts.pory"
	.string "Oh hello. We don't get too many\n"
	.string "visitors around here. Are you here\l"
	.string "to challenge the ELITE FOUR?$"

OldLadyWelcomeBack::
# 60 "data/maps/EverGrandCity_House1/scripts.pory"
	.string "Welcome back!$"

OldLadySafeJourney::
# 64 "data/maps/EverGrandCity_House1/scripts.pory"
	.string "Have a safe journey.$"

OldLadyAccept::
# 68 "data/maps/EverGrandCity_House1/scripts.pory"
	.string "Ah! I can teach you powerful moves\n"
	.string "to challenge them.$"

OldLadyDecline::
# 73 "data/maps/EverGrandCity_House1/scripts.pory"
	.string "I see. Well, have a safe journey.$"

OldLady2::
# 77 "data/maps/EverGrandCity_House1/scripts.pory"
	.string "There's a lot of strong trainers on\n"
	.string "VICTORY ROAD.\p"
	.string "Make sure you're prepared to face\n"
	.string "great challenges before you enter.$"

OldLady2AbilityPatch::
# 84 "data/maps/EverGrandCity_House1/scripts.pory"
	.string "You must have come a long way to get\n"
	.string "here. If you're going to challenge the\l"
	.string "ELITE FOUR, maybe this will help.$"
