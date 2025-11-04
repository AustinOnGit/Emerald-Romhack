# 1 "data/maps/Route124_ExtraHouse/scripts.pory"

# 2 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_MapScripts::
# 3 "data/maps/Route124_ExtraHouse/scripts.pory"
	.byte 0
# 4 "data/maps/Route124_ExtraHouse/scripts.pory"

# 5 "data/maps/Route124_ExtraHouse/scripts.pory"

# 6 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_EventScript_MawileTrade::
# 7 "data/maps/Route124_ExtraHouse/scripts.pory"
	lock
# 8 "data/maps/Route124_ExtraHouse/scripts.pory"
	faceplayer
# 9 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_set FLAG_ROUTE124_HOUSE_TRADE_COMPLETED, Route124_ExtraHouse_EventScript_MawileTradeCompleted
# 10 "data/maps/Route124_ExtraHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MAWILE
# 11 "data/maps/Route124_ExtraHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 12 "data/maps/Route124_ExtraHouse/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 13 "data/maps/Route124_ExtraHouse/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 14 "data/maps/Route124_ExtraHouse/scripts.pory"
	msgbox Route124_ExtraHouse_Text_MawileTrade, MSGBOX_YESNO
# 15 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route124_ExtraHouse_EventScript_MawileTradeDecline
# 16 "data/maps/Route124_ExtraHouse/scripts.pory"
	special ChoosePartyMon
# 17 "data/maps/Route124_ExtraHouse/scripts.pory"
	waitstate
# 18 "data/maps/Route124_ExtraHouse/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 19 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route124_ExtraHouse_EventScript_MawileTradeDecline
# 20 "data/maps/Route124_ExtraHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 21 "data/maps/Route124_ExtraHouse/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 22 "data/maps/Route124_ExtraHouse/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 23 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Route124_ExtraHouse_EventScript_MawileTradeNotRequestedMon
# 24 "data/maps/Route124_ExtraHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 25 "data/maps/Route124_ExtraHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 26 "data/maps/Route124_ExtraHouse/scripts.pory"
	special CreateInGameTradePokemon
# 27 "data/maps/Route124_ExtraHouse/scripts.pory"
	special DoInGameTradeScene
# 28 "data/maps/Route124_ExtraHouse/scripts.pory"
	waitstate
# 29 "data/maps/Route124_ExtraHouse/scripts.pory"
	lock
# 30 "data/maps/Route124_ExtraHouse/scripts.pory"
	faceplayer
# 31 "data/maps/Route124_ExtraHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 32 "data/maps/Route124_ExtraHouse/scripts.pory"
	msgbox Route124_ExtraHouse_Text_MawileTradeHawlucha, MSGBOX_DEFAULT
# 33 "data/maps/Route124_ExtraHouse/scripts.pory"
	setflag FLAG_ROUTE124_HOUSE_TRADE_COMPLETED
# 34 "data/maps/Route124_ExtraHouse/scripts.pory"
	release
# 35 "data/maps/Route124_ExtraHouse/scripts.pory"
	end
# 36 "data/maps/Route124_ExtraHouse/scripts.pory"

# 37 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_EventScript_MawileTradeCompleted::
# 38 "data/maps/Route124_ExtraHouse/scripts.pory"
	lock
# 39 "data/maps/Route124_ExtraHouse/scripts.pory"
	faceplayer
# 40 "data/maps/Route124_ExtraHouse/scripts.pory"
	msgbox Route124_ExtraHouse_Text_PostTrade, MSGBOX_DEFAULT
# 41 "data/maps/Route124_ExtraHouse/scripts.pory"
	release
# 42 "data/maps/Route124_ExtraHouse/scripts.pory"
	end
# 43 "data/maps/Route124_ExtraHouse/scripts.pory"

# 44 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_EventScript_MawileTradeDecline::
# 45 "data/maps/Route124_ExtraHouse/scripts.pory"
	lock
# 46 "data/maps/Route124_ExtraHouse/scripts.pory"
	faceplayer
# 47 "data/maps/Route124_ExtraHouse/scripts.pory"
	msgbox Route124_ExtraHouse_Text_TradeDecline, MSGBOX_DEFAULT
# 48 "data/maps/Route124_ExtraHouse/scripts.pory"
	release
# 49 "data/maps/Route124_ExtraHouse/scripts.pory"
	end
# 50 "data/maps/Route124_ExtraHouse/scripts.pory"

# 51 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_EventScript_MawileTradeNotRequestedMon::
# 52 "data/maps/Route124_ExtraHouse/scripts.pory"
	lock
# 53 "data/maps/Route124_ExtraHouse/scripts.pory"
	faceplayer
# 54 "data/maps/Route124_ExtraHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 55 "data/maps/Route124_ExtraHouse/scripts.pory"
	msgbox Route124_ExtraHouse_Text_WrongMon, MSGBOX_DEFAULT
# 56 "data/maps/Route124_ExtraHouse/scripts.pory"
	release
# 57 "data/maps/Route124_ExtraHouse/scripts.pory"
	end
# 58 "data/maps/Route124_ExtraHouse/scripts.pory"

# 59 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_Text_MawileTrade:
# 60 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "Hey! You look like a good trainer.\p"
# 61 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "You wouldn't happen to have a\n"
# 62 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "HAWLUCHA, would you?\p"
# 63 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "I'd be willing to trade you my MAWILE\n"
# 64 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "for it. They're really strong!$"
# 65 "data/maps/Route124_ExtraHouse/scripts.pory"

# 66 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_Text_MawileTradeHawlucha:
# 67 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "Thanks so much!\n"
# 68 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "I'll take good care of them!$"
# 69 "data/maps/Route124_ExtraHouse/scripts.pory"

# 70 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_Text_WrongMon:
# 71 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "I don't think that's the right one.$"
# 72 "data/maps/Route124_ExtraHouse/scripts.pory"

# 73 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_Text_TradeDecline:
# 74 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "Darn...$"
# 75 "data/maps/Route124_ExtraHouse/scripts.pory"

# 76 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_Text_PostTrade:
# 77 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "I heard there's stones that make\n"
# 78 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "HAWLUCHA and MAWILE even stronger.\p"
# 79 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "But I don't think you can find them\n"
# 80 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "anywhere in HOENN.\p"
# 81 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "Maybe it's time for me to go on an\n"
# 82 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "adventure of my own...$"
# 83 "data/maps/Route124_ExtraHouse/scripts.pory"

# 84 "data/maps/Route124_ExtraHouse/scripts.pory"
Route124_ExtraHouse_Text_StratusFamily:
# 85 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "Welcome to the STRATUS FAMILY HOME.\p"
# 86 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "If you've been traveling around HOENN,\n"
# 87 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "I'm sure you've come across my siblings!\p"
# 88 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "EUSTACE, LACEY, ANELACE, and HORACE\n"
# 89 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "are all masters of double battles.\p"
# 90 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "Come back here if you can beat them all!$"

Route124_ExtraHouse_EventScript_StratusFamily::
# 94 "data/maps/Route124_ExtraHouse/scripts.pory"
	lock
# 95 "data/maps/Route124_ExtraHouse/scripts.pory"
	faceplayer
# 96 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_set FLAG_LIFE_ORB_RECIEVED, Route124_ExtraHouse_EventScript_StratusFamily_2
# 101 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_set FLAG_EUSTACE_BEATEN, Route124_ExtraHouse_EventScript_StratusFamily_6
Route124_ExtraHouse_EventScript_StratusFamily_4:
# 111 "data/maps/Route124_ExtraHouse/scripts.pory"
	msgbox Route124_ExtraHouse_Text_StratusFamily, MSGBOX_DEFAULT
# 114 "data/maps/Route124_ExtraHouse/scripts.pory"
	release
	end

Route124_ExtraHouse_EventScript_StratusFamily_2:
# 97 "data/maps/Route124_ExtraHouse/scripts.pory"
	msgbox StratusFamilyAfterLifeOrb, MSGBOX_DEFAULT
# 98 "data/maps/Route124_ExtraHouse/scripts.pory"
	release
	end

Route124_ExtraHouse_EventScript_StratusFamily_3:
# 102 "data/maps/Route124_ExtraHouse/scripts.pory"
	msgbox StratusFamilyImpressed, MSGBOX_DEFAULT
# 103 "data/maps/Route124_ExtraHouse/scripts.pory"
	waitmessage
# 104 "data/maps/Route124_ExtraHouse/scripts.pory"
	giveitem ITEM_LIFE_ORB
# 105 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 106 "data/maps/Route124_ExtraHouse/scripts.pory"
	setflag FLAG_LIFE_ORB_RECIEVED
# 107 "data/maps/Route124_ExtraHouse/scripts.pory"
	release
	end

Route124_ExtraHouse_EventScript_StratusFamily_5:
# 101 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_set FLAG_ANELACE_BEATEN, Route124_ExtraHouse_EventScript_StratusFamily_9
	goto Route124_ExtraHouse_EventScript_StratusFamily_4

Route124_ExtraHouse_EventScript_StratusFamily_6:
# 101 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_set FLAG_LACEY_BEATEN, Route124_ExtraHouse_EventScript_StratusFamily_5
	goto Route124_ExtraHouse_EventScript_StratusFamily_4

Route124_ExtraHouse_EventScript_StratusFamily_9:
# 101 "data/maps/Route124_ExtraHouse/scripts.pory"
	goto_if_set FLAG_HORACE_BEATEN, Route124_ExtraHouse_EventScript_StratusFamily_3
	goto Route124_ExtraHouse_EventScript_StratusFamily_4


StratusFamilyImpressed::
# 118 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "Welcome to the STRATUS FAMILY HOME.\p"
	.string "If you've been traveling around HOENN,\n"
	.string "I'm sure you've come across my siblings!\p"
	.string "EUSTACE, LACEY, ANELACE, and HORACE\n"
	.string "are all masters of double battles.\p"
	.string "... ... ... ... ... ... ... ... ...\n"
	.string "... ... ... ... ... ... ... ... ...\p"
	.string "Wow! You've actually managed to beat\n"
	.string "all of them? I think you deserve this\l"
	.string "as a reward for all the trouble they\l"
	.string "put you through.$"

StratusFamilyAfterLifeOrb::
# 132 "data/maps/Route124_ExtraHouse/scripts.pory"
	.string "I wonder what all my siblings are going\n"
	.string "to do now...$"
