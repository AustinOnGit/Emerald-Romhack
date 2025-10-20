DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

DewfordTown_House1_Eventscript_MareepTrade::
	lock
	faceplayer
	goto_if_set FLAG_DEWFORD_NPC1_TRADE_COMPLETED, DewfordTown_House1_EventScript_MareepTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_MAREEP
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox DewfordTown_House1_Text_YouWillTradeWontYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, DewfordTown_House1_EventScript_MareepDeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_House1_EventScript_MareepDeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, DewfordTown_House1_EventScript_MareepNotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	lock
	faceplayer
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox DewfordTown_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
	setflag FLAG_DEWFORD_NPC1_TRADE_COMPLETED
	release
	end

DewfordTown_House1_EventScript_MareepTradeCompleted::
	lock
	faceplayer
	msgbox DewfordTown_House1_Text_SquishyPyukumuku, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_EventScript_MareepDeclineTrade::
	lock
	faceplayer
	msgbox DewfordTown_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_EventScript_MareepNotRequestedMon::
	lock
	faceplayer
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox DewfordTown_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_Eventscript_HoothootTrade::
	lock
	faceplayer
	goto_if_set FLAG_DEWFORD_NPC2_TRADE_COMPLETED, DewfordTown_House1_EventScript_HoothootTradeCompleted
	setvar VAR_0x8008, INGAME_TRADE_HOOTHOOT
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox DewfordTown_House1_Text_HoothootTrade, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, DewfordTown_House1_EventScript_HoothootDeclineTrade
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, DewfordTown_House1_EventScript_HoothootDeclineTrade
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	goto_if_ne VAR_RESULT, VAR_0x8009, DewfordTown_House1_EventScript_HoothootNotRequestedMon
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	lock
	faceplayer
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox DewfordTown_House1_Text_HoothootTradeMurkrow, MSGBOX_DEFAULT
	setflag FLAG_DEWFORD_NPC2_TRADE_COMPLETED
	release
	end

DewfordTown_House1_EventScript_HoothootTradeCompleted::
	lock
	faceplayer
	msgbox DewfordTown_House1_Text_CoolMurkrow, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_EventScript_HoothootDeclineTrade::
	lock
	faceplayer
	msgbox DewfordTown_House1_Text_YouWontTradeMurkrow, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_EventScript_HoothootNotRequestedMon::
	lock
	faceplayer
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox DewfordTown_House1_Text_ThisIsntMurkrow, MSGBOX_DEFAULT
	release
	end

DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
	.string "There's a lot to be said for living on\n"
	.string "a small island like this in harmony with\l"
	.string "POKéMON and the family.$"

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
	.string "I left the major port of SLATEPORT\n"
	.string "CITY when I married my husband here.\p"
	.string "Life goes by slowly on this little\n"
	.string "island. But being surrounded by the\l"
	.string "beautiful sea--that's happiness, too.$"

DewfordTown_House1_Text_Zigzagoon:
	.string "ZIGZAGOON: Guguuh!$"

DewfordTown_House1_Text_YouWillTradeWontYou:
	.string "Do you have a PYUKUMUKU?\p"
    .string "I want to catch one, but my parents\n"
    .string "won't let me get a fishing rod...\p"
    .string "Please trade your PYUKUMUKU for my\n"
    .string "MAREEP! Please!$"

DewfordTown_House1_Text_MonYouTakeCare:
	.string "Yay! A PYUKUMUKU!\p"
	.string "Make sure you take care of MAREEP, too!$"

DewfordTown_House1_Text_ThisIsntAMon:
	.string "That isn't a PYUKUMUKU!$"

DewfordTown_House1_Text_YouWontTradeMe:
	.string "Aww...\n"
	.string "I still really want a PYUKUMUKU...$"

DewfordTown_House1_Text_SquishyPyukumuku:
	.string "I love PYUKUMUKU! It's so squishy!$"


DewfordTown_House1_Text_HoothootTrade:
	.string "I really want a MURKROW!\p"
    .string "...But my parents won't let me\n"
    .string "go to the old manor to get one...\p"
    .string "If you have a MURKROW, will you\n"
    .string "trade it for my HOOTHOOT?$"

DewfordTown_House1_Text_HoothootTradeMurkrow:
	.string "Awesome!\p"
	.string "I'll make sure to take special\n"
	.string "care of MURKROW!$"

DewfordTown_House1_Text_ThisIsntMurkrow:
	.string "That isn't a MURKROW...$"

DewfordTown_House1_Text_YouWontTradeMurkrow:
	.string "Aww...\n"
	.string "I still really want a MURKROW...$"

DewfordTown_House1_Text_CoolMurkrow:
	.string "MURKROW's so cool!\p"
	.string "Apparently it can even evolve\n"
	.string "with a special stone\p"
	.string "I wonder how much cooler it\n"
	.string "will be then...$"
