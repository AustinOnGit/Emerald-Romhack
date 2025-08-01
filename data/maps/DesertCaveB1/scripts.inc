DesertCaveB1_MapScripts::
	.byte 0


DesertCaveB1_Slash_Tutor::
# 6 "data/maps/DesertCaveB1/scripts.pory"
	faceplayer
# 7 "data/maps/DesertCaveB1/scripts.pory"
	lock
# 8 "data/maps/DesertCaveB1/scripts.pory"
	msgbox MoveTutor_Text_Slash_Tutor_Intro, MSGBOX_DEFAULT
# 9 "data/maps/DesertCaveB1/scripts.pory"
	waitmessage
# 10 "data/maps/DesertCaveB1/scripts.pory"
	call MoveTutor_EventScript_Slash_Tutor
# 11 "data/maps/DesertCaveB1/scripts.pory"
	msgbox MoveTutor_Text_Slash_Tutor_Outro2
# 12 "data/maps/DesertCaveB1/scripts.pory"
	release
	return


MoveTutor_EventScript_Slash_Tutor_Exit::
# 16 "data/maps/DesertCaveB1/scripts.pory"
	msgbox MoveTutor_Text_Slash_Tutor_Outro, MSGBOX_DEFAULT
# 17 "data/maps/DesertCaveB1/scripts.pory"
	release
	end


MoveTutor_Text_Slash_Tutor_Intro::
# 21 "data/maps/DesertCaveB1/scripts.pory"
	.string "Hiyah! I'm who they call the Slash Tutor!\p"
	.string "My fists cut through my opponents, and I\n"
	.string "can teach your POKéMON to do this as well!$"

MoveTutor_Text_Slash_Tutor_Select::
# 27 "data/maps/DesertCaveB1/scripts.pory"
	.string "What move would you like to learn?$"

MoveTutor_Text_Slash_Tutor_Outro::
# 31 "data/maps/DesertCaveB1/scripts.pory"
	.string "Perhaps next time, then...$"

MoveTutor_Text_Slash_Tutor_Outro2::
# 35 "data/maps/DesertCaveB1/scripts.pory"
	.string "Make sure to come back for another\n"
	.string "lesson, my student.$"
