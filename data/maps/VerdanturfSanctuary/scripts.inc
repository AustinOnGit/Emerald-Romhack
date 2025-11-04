VerdanturfSanctuary_MapScripts::
	.byte 0


VerdanturfSanctuary_EventScript_Lacey_Battle::
# 6 "data/maps/VerdanturfSanctuary/scripts.pory"
	trainerbattle_single TRAINER_LACEY, LaceyIntro, LaceyOutro
# 7 "data/maps/VerdanturfSanctuary/scripts.pory"
	msgbox LaceyBeaten, MSGBOX_AUTOCLOSE
# 8 "data/maps/VerdanturfSanctuary/scripts.pory"
	setflag FLAG_LACEY_BEATEN
# 9 "data/maps/VerdanturfSanctuary/scripts.pory"
	waitmessage
	end


LaceyIntro::
# 14 "data/maps/VerdanturfSanctuary/scripts.pory"
	.string "I'll show you the power of the sun!\n$"

LaceyOutro::
# 18 "data/maps/VerdanturfSanctuary/scripts.pory"
	.string "I guess my sun has set...\n$"

LaceyBeaten::
# 22 "data/maps/VerdanturfSanctuary/scripts.pory"
	.string "I'm training to be as great as FLANNERY\n"
	.string "one day. Isn't her Torkoal the cutest?\n$"
