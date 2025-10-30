Route124_ExtraHouse_MapScripts::
	.byte 0


Route124_ExtraHouse_EventScript_MawileTrade::
	lock
	faceplayer
	goto_if_set FLAG_ROUTE124_HOUSE_TRADE_COMPLETED, Route124_ExtraHouse_EventScript_MawileTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_MAWILE
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox Route124_ExtraHouse_Text_MawileTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route124_ExtraHouse_EventScript_MawileTradeDecline
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route124_ExtraHouse_EventScript_MawileTradeDecline
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, Route124_ExtraHouse_EventScript_MawileTradeNotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	lock
	faceplayer
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Route124_ExtraHouse_Text_MawileTradeHawlucha, MSGBOX_DEFAULT
	setflag FLAG_ROUTE124_HOUSE_TRADE_COMPLETED
	release
	end

Route124_ExtraHouse_EventScript_MawileTradeCompleted::
	lock
	faceplayer
	msgbox Route124_ExtraHouse_Text_PostTrade, MSGBOX_DEFAULT
	release
	end

Route124_ExtraHouse_EventScript_MawileTradeDecline::
	lock
	faceplayer
	msgbox Route124_ExtraHouse_Text_TradeDecline, MSGBOX_DEFAULT
	release
	end

Route124_ExtraHouse_EventScript_MawileTradeNotRequestedMon::
	lock
	faceplayer
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Route124_ExtraHouse_Text_WrongMon, MSGBOX_DEFAULT
	release
	end

Route124_ExtraHouse_EventScript_StratusFamily::
	lock
	faceplayer
	msgbox Route124_ExtraHouse_Text_StratusFamily, MSGBOX_DEFAULT
	release
	end

Route124_ExtraHouse_Text_MawileTrade:
	.string "Hey! You look like a good trainer.\p"
	.string "You wouldn't happen to have a\n"
	.string "HAWLUCHA, would you?\p"
	.string "I'd be willing to trade you my MAWILE\n"
	.string "for it. They're really strong!$"

Route124_ExtraHouse_Text_MawileTradeHawlucha:
	.string "Thanks so much!\n"
	.string "I'll take good care of them!$"

Route124_ExtraHouse_Text_WrongMon:
	.string "I don't think that's the right one.$"

Route124_ExtraHouse_Text_TradeDecline:
	.string "Darn...$"

Route124_ExtraHouse_Text_PostTrade:
	.string "I heard there's stones that make\n"
	.string "HAWLUCHA and MAWILE even stronger.\p"
	.string "But I don't think you can find them\n"
	.string "anywhere in HOENN.\p"
	.string "Maybe it's time for me to go on an\n"
	.string "adventure of my own...$"

Route124_ExtraHouse_Text_StratusFamily:
	.string "Welcome to the STRATUS FAMILY HOME.\p"
	.string "If you've been traveling around HOENN,\n"
	.string "I'm sure you've come across my siblings!\p"
	.string "EUSTACE, LACEY, ANELACE, and HORACE\n"
	.string "are all masters of double battles.\p"
	.string "Come back here if you can beat them all!$"
