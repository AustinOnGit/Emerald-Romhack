# 1 "data/maps/EverGrandeCity_House2/scripts.pory"

# 2 "data/maps/EverGrandeCity_House2/scripts.pory"
EverGrandeCity_House2_MapScripts::
# 3 "data/maps/EverGrandeCity_House2/scripts.pory"
	.byte 0

EverGrandCity_House2_EventScript_Maniac::
# 8 "data/maps/EverGrandeCity_House2/scripts.pory"
	lock
# 9 "data/maps/EverGrandeCity_House2/scripts.pory"
	faceplayer
# 10 "data/maps/EverGrandeCity_House2/scripts.pory"
	msgbox ManiacText, MSGBOX_DEFAULT
# 11 "data/maps/EverGrandeCity_House2/scripts.pory"
	release
	end


EverGrandCity_House2_EventScript_Girl::
# 16 "data/maps/EverGrandeCity_House2/scripts.pory"
	lock
# 17 "data/maps/EverGrandeCity_House2/scripts.pory"
	faceplayer
# 18 "data/maps/EverGrandeCity_House2/scripts.pory"
	msgbox GirlText, MSGBOX_DEFAULT
# 19 "data/maps/EverGrandeCity_House2/scripts.pory"
	release
	end


ManiacText::
# 23 "data/maps/EverGrandeCity_House2/scripts.pory"
	.string "You made it through VICTORY ROAD?\p"
	.string "Kehehehe... Good luck with beating\n"
	.string "the ELITE FOUR...$"

GirlText::
# 29 "data/maps/EverGrandeCity_House2/scripts.pory"
	.string "I heard there's a new member of the\n"
	.string "ELITE FOUR now. One of the previous\l"
	.string "members became a GYM LEADER somwhere.$"
