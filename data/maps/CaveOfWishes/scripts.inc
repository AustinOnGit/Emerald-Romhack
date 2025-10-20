# 1 "data/maps/CaveOfWishes/scripts.pory"

# 2 "data/maps/CaveOfWishes/scripts.pory"
CaveOfWishes_MapScripts::
# 3 "data/maps/CaveOfWishes/scripts.pory"
	.byte 0
# 4 "data/maps/CaveOfWishes/scripts.pory"

# 5 "data/maps/CaveOfWishes/scripts.pory"
 CaveofWishes_EventScript_Check::
# 6 "data/maps/CaveOfWishes/scripts.pory"
    msgbox CaveOfWishesExplain, MSGBOX_DEFAULT
# 7 "data/maps/CaveOfWishes/scripts.pory"
    waitmessage
# 8 "data/maps/CaveOfWishes/scripts.pory"
	specialvar VAR_RESULT, Has100Mons
# 9 "data/maps/CaveOfWishes/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CaveofWishes_EventScript_Accept
# 10 "data/maps/CaveOfWishes/scripts.pory"
    goto_if_eq VAR_RESULT, FALSE, CaveofWishes_EventScript_Decline

CaveOfWishes_EventScript_Greeting::
# 13 "data/maps/CaveOfWishes/scripts.pory"
	lock
# 14 "data/maps/CaveOfWishes/scripts.pory"
	faceplayer
# 15 "data/maps/CaveOfWishes/scripts.pory"
	msgbox CaveOfWishesGreet, MSGBOX_DEFAULT
# 16 "data/maps/CaveOfWishes/scripts.pory"
	waitmessage
# 17 "data/maps/CaveOfWishes/scripts.pory"
	call CaveofWishes_EventScript_Check
	end


CaveofWishes_EventScript_Accept::
# 22 "data/maps/CaveOfWishes/scripts.pory"
	lock
# 23 "data/maps/CaveOfWishes/scripts.pory"
	msgbox CaveOfWishesAllow, MSGBOX_DEFAULT
# 24 "data/maps/CaveOfWishes/scripts.pory"
	waitmessage
# 25 "data/maps/CaveOfWishes/scripts.pory"
	applymovement 1, LadyMove
# 26 "data/maps/CaveOfWishes/scripts.pory"
	delay 30
# 27 "data/maps/CaveOfWishes/scripts.pory"
	release
	end


CaveofWishes_EventScript_Decline::
# 32 "data/maps/CaveOfWishes/scripts.pory"
	lock
# 33 "data/maps/CaveOfWishes/scripts.pory"
	msgbox CaveOfWishesDeny, MSGBOX_DEFAULT
# 34 "data/maps/CaveOfWishes/scripts.pory"
	waitmessage
# 35 "data/maps/CaveOfWishes/scripts.pory"
	release
	end


# 69 "data/maps/CaveOfWishes/scripts.pory"
LadyMove:
# 70 "data/maps/CaveOfWishes/scripts.pory"
	walk_left
# 71 "data/maps/CaveOfWishes/scripts.pory"
	face_right
	step_end

testYes::
# 39 "data/maps/CaveOfWishes/scripts.pory"
	.string "yes$"

testNo::
# 43 "data/maps/CaveOfWishes/scripts.pory"
	.string "no$"

CaveOfWishesGreet::
# 47 "data/maps/CaveOfWishes/scripts.pory"
	.string "This is the Cave of Wishes, where the\n"
	.string "legendary wish-granter POKéMON rests.$"

CaveOfWishesExplain::
# 52 "data/maps/CaveOfWishes/scripts.pory"
	.string "Only those who have befriended many\n"
	.string "POKéMON on their journey are trusted\p"
	.string "to enter the lower levels.$"

CaveOfWishesAllow::
# 58 "data/maps/CaveOfWishes/scripts.pory"
	.string "Ah, I can see numerous bonds you have\n"
	.string "made on your journey. You may enter.$"

CaveOfWishesDeny::
# 63 "data/maps/CaveOfWishes/scripts.pory"
	.string "You are still a fledgling trainer.\p"
	.string "Come back when you've made more bonds\n"
	.string "with POKéMON around the HOENN region.$"
