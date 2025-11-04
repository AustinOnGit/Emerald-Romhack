DeepPetalburgWoods_MapScripts::
	.byte 0


DeepPetalburgWoods_EventScript_Jimmy_Battle::
# 5 "data/maps/DeepPetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JIMMY, JimmyIntro, JimmyOutro
# 6 "data/maps/DeepPetalburgWoods/scripts.pory"
	msgbox JimmyBeaten, MSGBOX_AUTOCLOSE
# 7 "data/maps/DeepPetalburgWoods/scripts.pory"
	waitmessage
	end


DeepPetalburgWoods_EventScript_Eustace_Battle::
# 28 "data/maps/DeepPetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_EUSTACE, EustaceIntro, EustaceOutro
# 29 "data/maps/DeepPetalburgWoods/scripts.pory"
	msgbox EustaceBeaten, MSGBOX_AUTOCLOSE
# 30 "data/maps/DeepPetalburgWoods/scripts.pory"
	setflag FLAG_EUSTACE_BEATEN
# 31 "data/maps/DeepPetalburgWoods/scripts.pory"
	waitmessage
	end


JimmyIntro::
# 12 "data/maps/DeepPetalburgWoods/scripts.pory"
	.string "Gah! You found my secret bug catching\n"
	.string "spot!$"

JimmyOutro::
# 17 "data/maps/DeepPetalburgWoods/scripts.pory"
	.string "I thought my secret rare bug POKéMON\n"
	.string "would be stronger...$"

JimmyBeaten::
# 22 "data/maps/DeepPetalburgWoods/scripts.pory"
	.string "Let me know if you find any rare bug\n"
	.string "POKéMON!$"

EustaceIntro::
# 36 "data/maps/DeepPetalburgWoods/scripts.pory"
	.string "Haha! Behold the the power of my\n"
	.string "rainstorm team!$"

EustaceOutro::
# 41 "data/maps/DeepPetalburgWoods/scripts.pory"
	.string "My storm petered out.$"

EustaceBeaten::
# 45 "data/maps/DeepPetalburgWoods/scripts.pory"
	.string "My goal is to be as amazing as the\n"
	.string "great GYM LEADER WALLACE.\p"
	.string "Guess I still have a lot of\n"
	.string "training to do before I get there.$"
