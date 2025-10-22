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
	goto_if_eq VAR_RESULT, TRUE, CaveOfWishes_EventScript_Accept
# 10 "data/maps/CaveOfWishes/scripts.pory"
    goto_if_eq VAR_RESULT, FALSE, CaveOfWishes_EventScript_Decline

CaveOfWishes_EventScript_Greeting::
# 13 "data/maps/CaveOfWishes/scripts.pory"
	lock
# 14 "data/maps/CaveOfWishes/scripts.pory"
	faceplayer
# 15 "data/maps/CaveOfWishes/scripts.pory"
	goto_if_set FLAG_100_MONS_CHECK, CaveOfWishes_EventScript_Greeting_2
# 19 "data/maps/CaveOfWishes/scripts.pory"
	msgbox CaveOfWishesGreet, MSGBOX_DEFAULT
# 20 "data/maps/CaveOfWishes/scripts.pory"
	waitmessage
# 21 "data/maps/CaveOfWishes/scripts.pory"
	call CaveofWishes_EventScript_Check
CaveOfWishes_EventScript_Greeting_1:
	end

CaveOfWishes_EventScript_Greeting_2:
# 16 "data/maps/CaveOfWishes/scripts.pory"
	call CaveOfWishes_EventScript_Talk_After_Accept
	goto CaveOfWishes_EventScript_Greeting_1


CaveOfWishes_EventScript_Accept::
# 27 "data/maps/CaveOfWishes/scripts.pory"
	lock
# 28 "data/maps/CaveOfWishes/scripts.pory"
	msgbox CaveOfWishesAllow, MSGBOX_DEFAULT
# 29 "data/maps/CaveOfWishes/scripts.pory"
	waitmessage
# 30 "data/maps/CaveOfWishes/scripts.pory"
	setflag FLAG_100_MONS_CHECK
# 31 "data/maps/CaveOfWishes/scripts.pory"
	setflag FLAG_LADY_MOVED
# 32 "data/maps/CaveOfWishes/scripts.pory"
	applymovement 1, LadyMove
# 33 "data/maps/CaveOfWishes/scripts.pory"
	delay 30
# 34 "data/maps/CaveOfWishes/scripts.pory"
	release
	end


CaveOfWishes_EventScript_Decline::
# 39 "data/maps/CaveOfWishes/scripts.pory"
	lock
# 40 "data/maps/CaveOfWishes/scripts.pory"
	msgbox CaveOfWishesDeny, MSGBOX_DEFAULT
# 41 "data/maps/CaveOfWishes/scripts.pory"
	waitmessage
# 42 "data/maps/CaveOfWishes/scripts.pory"
	release
	end


CaveOfWishes_EventScript_Talk_After_Accept::
# 47 "data/maps/CaveOfWishes/scripts.pory"
	lock
# 48 "data/maps/CaveOfWishes/scripts.pory"
	goto_if_set FLAG_LADY_MOVED, CaveOfWishes_EventScript_Talk_After_Accept_2
# 53 "data/maps/CaveOfWishes/scripts.pory"
	msgbox CaveOfWishesAllowAgain, MSGBOX_DEFAULT
# 54 "data/maps/CaveOfWishes/scripts.pory"
	applymovement 1, LadyMove
# 55 "data/maps/CaveOfWishes/scripts.pory"
	setflag FLAG_LADY_MOVED
# 56 "data/maps/CaveOfWishes/scripts.pory"
	delay 30
# 57 "data/maps/CaveOfWishes/scripts.pory"
	release
	end

CaveOfWishes_EventScript_Talk_After_Accept_2:
# 49 "data/maps/CaveOfWishes/scripts.pory"
	msgbox CaveOfWishesYouMayPass, MSGBOX_DEFAULT
# 50 "data/maps/CaveOfWishes/scripts.pory"
	release
	end


# 91 "data/maps/CaveOfWishes/scripts.pory"
LadyMove:
# 92 "data/maps/CaveOfWishes/scripts.pory"
	walk_left
# 93 "data/maps/CaveOfWishes/scripts.pory"
	face_right
	step_end

CaveOfWishesGreet::
# 61 "data/maps/CaveOfWishes/scripts.pory"
	.string "This is the Cave of Wishes, where the\n"
	.string "legendary wish-granter POKéMON rests.$"

CaveOfWishesExplain::
# 66 "data/maps/CaveOfWishes/scripts.pory"
	.string "Only those who have befriended many\n"
	.string "POKéMON on their journey are trusted\p"
	.string "to enter the lower levels.$"

CaveOfWishesAllow::
# 72 "data/maps/CaveOfWishes/scripts.pory"
	.string "Ah, I can see numerous bonds you have\n"
	.string "made on your journey. You may enter.$"

CaveOfWishesDeny::
# 77 "data/maps/CaveOfWishes/scripts.pory"
	.string "You are still a fledgling trainer.\p"
	.string "Come back when you've made more bonds\n"
	.string "with POKéMON around the HOENN region.$"

CaveOfWishesAllowAgain::
# 83 "data/maps/CaveOfWishes/scripts.pory"
	.string "Oh, it's you! You may pass through.$"

CaveOfWishesYouMayPass::
# 87 "data/maps/CaveOfWishes/scripts.pory"
	.string "You may pass through.$"
