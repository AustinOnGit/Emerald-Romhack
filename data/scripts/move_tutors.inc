# 1 "data/scripts/move_tutors.pory"

# 2 "data/scripts/move_tutors.pory"
SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
# 3 "data/scripts/move_tutors.pory"
	lock
# 4 "data/scripts/move_tutors.pory"
	faceplayer
# 5 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, MoveTutor_EventScript_SwaggerTaught
# 6 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
# 7 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
# 8 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 9 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
# 10 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
# 11 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 12 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 13 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SwaggerDeclined
# 14 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
# 15 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SwaggerTaught
# 16 "data/scripts/move_tutors.pory"
	end
# 17 "data/scripts/move_tutors.pory"

# 18 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SwaggerDeclined::
# 19 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
# 20 "data/scripts/move_tutors.pory"
	release
# 21 "data/scripts/move_tutors.pory"
	end
# 22 "data/scripts/move_tutors.pory"

# 23 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SwaggerTaught::
# 24 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
# 25 "data/scripts/move_tutors.pory"
	release
# 26 "data/scripts/move_tutors.pory"
	end
# 27 "data/scripts/move_tutors.pory"

# 28 "data/scripts/move_tutors.pory"
MauvilleCity_EventScript_RolloutTutor::
# 29 "data/scripts/move_tutors.pory"
	lock
# 30 "data/scripts/move_tutors.pory"
	faceplayer
# 31 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT, MoveTutor_EventScript_RolloutTaught
# 32 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RolloutTeach, MSGBOX_YESNO
# 33 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
# 34 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 35 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
# 36 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RolloutWhichMon, MSGBOX_DEFAULT
# 37 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROLLOUT
# 38 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 39 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RolloutDeclined
# 40 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT
# 41 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_RolloutTaught
# 42 "data/scripts/move_tutors.pory"
	end
# 43 "data/scripts/move_tutors.pory"

# 44 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_RolloutDeclined::
# 45 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RolloutDeclined, MSGBOX_DEFAULT
# 46 "data/scripts/move_tutors.pory"
	release
# 47 "data/scripts/move_tutors.pory"
	end
# 48 "data/scripts/move_tutors.pory"

# 49 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_RolloutTaught::
# 50 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_RolloutTaught, MSGBOX_DEFAULT
# 51 "data/scripts/move_tutors.pory"
	release
# 52 "data/scripts/move_tutors.pory"
	end
# 53 "data/scripts/move_tutors.pory"

# 54 "data/scripts/move_tutors.pory"
VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor::
# 55 "data/scripts/move_tutors.pory"
	lock
# 56 "data/scripts/move_tutors.pory"
	faceplayer
# 57 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER, MoveTutor_EventScript_FuryCutterTaught
# 58 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_FuryCutterTeach, MSGBOX_YESNO
# 59 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
# 60 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 61 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
# 62 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_FuryCutterWhichMon, MSGBOX_DEFAULT
# 63 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FURY_CUTTER
# 64 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 65 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_FuryCutterDeclined
# 66 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER
# 67 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_FuryCutterTaught
# 68 "data/scripts/move_tutors.pory"
	end
# 69 "data/scripts/move_tutors.pory"

# 70 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_FuryCutterDeclined::
# 71 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
# 72 "data/scripts/move_tutors.pory"
	release
# 73 "data/scripts/move_tutors.pory"
	end
# 74 "data/scripts/move_tutors.pory"

# 75 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_FuryCutterTaught::
# 76 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
# 77 "data/scripts/move_tutors.pory"
	release
# 78 "data/scripts/move_tutors.pory"
	end
# 79 "data/scripts/move_tutors.pory"

# 80 "data/scripts/move_tutors.pory"
LavaridgeTown_House_EventScript_MimicTutor::
# 81 "data/scripts/move_tutors.pory"
	lock
# 82 "data/scripts/move_tutors.pory"
	faceplayer
# 83 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_MIMIC, MoveTutor_EventScript_MimicTaught
# 84 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_MimicTeach, MSGBOX_YESNO
# 85 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
# 86 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 87 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
# 88 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MimicWhichMon, MSGBOX_DEFAULT
# 89 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MIMIC
# 90 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 91 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MimicDeclined
# 92 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_MIMIC
# 93 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_MimicTaught
# 94 "data/scripts/move_tutors.pory"
	end
# 95 "data/scripts/move_tutors.pory"

# 96 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_MimicDeclined::
# 97 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
# 98 "data/scripts/move_tutors.pory"
	release
# 99 "data/scripts/move_tutors.pory"
	end
# 100 "data/scripts/move_tutors.pory"

# 101 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_MimicTaught::
# 102 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
# 103 "data/scripts/move_tutors.pory"
	release
# 104 "data/scripts/move_tutors.pory"
	end
# 105 "data/scripts/move_tutors.pory"

# 106 "data/scripts/move_tutors.pory"
FallarborTown_Mart_EventScript_MetronomeTutor::
# 107 "data/scripts/move_tutors.pory"
	lock
# 108 "data/scripts/move_tutors.pory"
	faceplayer
# 109 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_METRONOME, MoveTutor_EventScript_MetronomeTaught
# 110 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MetronomeTeach, MSGBOX_YESNO
# 111 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
# 112 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 113 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
# 114 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MetronomeWhichMon, MSGBOX_DEFAULT
# 115 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_METRONOME
# 116 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 117 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MetronomeDeclined
# 118 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_METRONOME
# 119 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_MetronomeTaught
# 120 "data/scripts/move_tutors.pory"
	end
# 121 "data/scripts/move_tutors.pory"

# 122 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_MetronomeDeclined::
# 123 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MetronomeDeclined, MSGBOX_DEFAULT
# 124 "data/scripts/move_tutors.pory"
	release
# 125 "data/scripts/move_tutors.pory"
	end
# 126 "data/scripts/move_tutors.pory"

# 127 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_MetronomeTaught::
# 128 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_MetronomeTaught, MSGBOX_DEFAULT
# 129 "data/scripts/move_tutors.pory"
	release
# 130 "data/scripts/move_tutors.pory"
	end
# 131 "data/scripts/move_tutors.pory"

# 132 "data/scripts/move_tutors.pory"
FortreeCity_House2_EventScript_SleepTalkTutor::
# 133 "data/scripts/move_tutors.pory"
	lock
# 134 "data/scripts/move_tutors.pory"
	faceplayer
# 135 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK, MoveTutor_EventScript_SleepTalkTaught
# 136 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkTeach, MSGBOX_YESNO
# 137 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
# 138 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 139 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
# 140 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
# 141 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLEEP_TALK
# 142 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 143 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SleepTalkDeclined
# 144 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK
# 145 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SleepTalkTaught
# 146 "data/scripts/move_tutors.pory"
	end
# 147 "data/scripts/move_tutors.pory"

# 148 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SleepTalkDeclined::
# 149 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
# 150 "data/scripts/move_tutors.pory"
	release
# 151 "data/scripts/move_tutors.pory"
	end
# 152 "data/scripts/move_tutors.pory"

# 153 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SleepTalkTaught::
# 154 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
# 155 "data/scripts/move_tutors.pory"
	release
# 156 "data/scripts/move_tutors.pory"
	end
# 157 "data/scripts/move_tutors.pory"

# 158 "data/scripts/move_tutors.pory"
LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor::
# 159 "data/scripts/move_tutors.pory"
	lock
# 160 "data/scripts/move_tutors.pory"
	faceplayer
# 161 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE, MoveTutor_EventScript_SubstituteTaught
# 162 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SubstituteTeach, MSGBOX_YESNO
# 163 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
# 164 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 165 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
# 166 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SubstituteWhichMon, MSGBOX_DEFAULT
# 167 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SUBSTITUTE
# 168 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 169 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SubstituteDeclined
# 170 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE
# 171 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_SubstituteTaught
# 172 "data/scripts/move_tutors.pory"
	end
# 173 "data/scripts/move_tutors.pory"

# 174 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SubstituteDeclined::
# 175 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SubstituteDeclined, MSGBOX_DEFAULT
# 176 "data/scripts/move_tutors.pory"
	release
# 177 "data/scripts/move_tutors.pory"
	end
# 178 "data/scripts/move_tutors.pory"

# 179 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_SubstituteTaught::
# 180 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_SubstituteTaught, MSGBOX_DEFAULT
# 181 "data/scripts/move_tutors.pory"
	release
# 182 "data/scripts/move_tutors.pory"
	end
# 183 "data/scripts/move_tutors.pory"

# 184 "data/scripts/move_tutors.pory"
MossdeepCity_EventScript_DynamicPunchTutor::
# 185 "data/scripts/move_tutors.pory"
	lock
# 186 "data/scripts/move_tutors.pory"
	faceplayer
# 187 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH, MoveTutor_EventScript_DynamicPunchTaught
# 188 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
# 189 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
# 190 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 191 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
# 192 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
# 193 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
# 194 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 195 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DynamicPunchDeclined
# 196 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH
# 197 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DynamicPunchTaught
# 198 "data/scripts/move_tutors.pory"
	end
# 199 "data/scripts/move_tutors.pory"

# 200 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DynamicPunchDeclined::
# 201 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
# 202 "data/scripts/move_tutors.pory"
	release
# 203 "data/scripts/move_tutors.pory"
	end
# 204 "data/scripts/move_tutors.pory"

# 205 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DynamicPunchTaught::
# 206 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
# 207 "data/scripts/move_tutors.pory"
	release
# 208 "data/scripts/move_tutors.pory"
	end
# 209 "data/scripts/move_tutors.pory"

# 210 "data/scripts/move_tutors.pory"
SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
# 211 "data/scripts/move_tutors.pory"
	lock
# 212 "data/scripts/move_tutors.pory"
	faceplayer
# 213 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE, MoveTutor_EventScript_DoubleEdgeTaught
# 214 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeTeach, MSGBOX_YESNO
# 215 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
# 216 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 217 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
# 218 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeWhichMon, MSGBOX_DEFAULT
# 219 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
# 220 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 221 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DoubleEdgeDeclined
# 222 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE
# 223 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_DoubleEdgeTaught
# 224 "data/scripts/move_tutors.pory"
	end
# 225 "data/scripts/move_tutors.pory"

# 226 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DoubleEdgeDeclined::
# 227 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
# 228 "data/scripts/move_tutors.pory"
	release
# 229 "data/scripts/move_tutors.pory"
	end
# 230 "data/scripts/move_tutors.pory"

# 231 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_DoubleEdgeTaught::
# 232 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
# 233 "data/scripts/move_tutors.pory"
	release
# 234 "data/scripts/move_tutors.pory"
	end
# 235 "data/scripts/move_tutors.pory"

# 236 "data/scripts/move_tutors.pory"
PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
# 237 "data/scripts/move_tutors.pory"
	lock
# 238 "data/scripts/move_tutors.pory"
	faceplayer
# 239 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION, MoveTutor_EventScript_ExplosionTaught
# 240 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_YESNO
# 241 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
# 242 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
# 243 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
# 244 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionWhichMon, MSGBOX_DEFAULT
# 245 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_EXPLOSION
# 246 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
# 247 "data/scripts/move_tutors.pory"
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
# 248 "data/scripts/move_tutors.pory"
	setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
# 249 "data/scripts/move_tutors.pory"
	goto MoveTutor_EventScript_ExplosionTaught
# 250 "data/scripts/move_tutors.pory"
	end
# 251 "data/scripts/move_tutors.pory"

# 252 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_ExplosionDeclined::
# 253 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
# 254 "data/scripts/move_tutors.pory"
	release
# 255 "data/scripts/move_tutors.pory"
	end
# 256 "data/scripts/move_tutors.pory"

# 257 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_ExplosionTaught::
# 258 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
# 259 "data/scripts/move_tutors.pory"
	release
# 260 "data/scripts/move_tutors.pory"
	end
# 261 "data/scripts/move_tutors.pory"

# 262 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_OpenPartyMenu::
# 263 "data/scripts/move_tutors.pory"
	special ChooseMonForMoveTutor
# 264 "data/scripts/move_tutors.pory"
	waitstate
# 265 "data/scripts/move_tutors.pory"
	lock
# 266 "data/scripts/move_tutors.pory"
	faceplayer
# 267 "data/scripts/move_tutors.pory"
	return
# 268 "data/scripts/move_tutors.pory"

# 269 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_CanOnlyBeLearnedOnce::
# 270 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
# 271 "data/scripts/move_tutors.pory"
	return
# 272 "data/scripts/move_tutors.pory"

# 273 "data/scripts/move_tutors.pory"
MoveTutor_EventScript_Exit::
# 274 "data/scripts/move_tutors.pory"
	release
# 275 "data/scripts/move_tutors.pory"
	end

MoveTutor_EventScript_Slateport_Tutor::
# 279 "data/scripts/move_tutors.pory"
	lock
# 280 "data/scripts/move_tutors.pory"
	faceplayer
# 281 "data/scripts/move_tutors.pory"
	msgbox SlateportCity_PokemonFanClub_Tutor_Select, MSGBOX_DEFAULT
# 282 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slateport_Tutor_Text_0, 0
# 283 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slateport_Tutor_Text_1, 1
# 284 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slateport_Tutor_Text_2, 2
# 285 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slateport_Tutor_Text_3, 3
# 286 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 287 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 288 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Slateport_Tutor_2
# 291 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Slateport_Tutor_3
# 294 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Slateport_Tutor_4
# 297 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Slateport_Tutor_5
# 300 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Slateport_Tutor_6
	return

MoveTutor_EventScript_Slateport_Tutor_2:
# 289 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SWAGGER
# 290 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slateport_Tutor_3:
# 292 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FLATTER
# 293 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slateport_Tutor_4:
# 295 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ENCORE
# 296 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slateport_Tutor_5:
# 298 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HELPING_HAND
# 299 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slateport_Tutor_6:
# 301 "data/scripts/move_tutors.pory"
	call SlateportCity_PokemonFanClub_Tutor_Exit
	return


MoveTutor_EventScript_Mauville_Tutor::
# 306 "data/scripts/move_tutors.pory"
	lock
# 307 "data/scripts/move_tutors.pory"
	faceplayer
# 308 "data/scripts/move_tutors.pory"
	msgbox SlateportCity_PokemonFanClub_Tutor_Select, MSGBOX_DEFAULT
# 309 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mauville_Tutor_Text_0, 0
# 310 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mauville_Tutor_Text_1, 1
# 311 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mauville_Tutor_Text_2, 2
# 312 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mauville_Tutor_Text_3, 3
# 313 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mauville_Tutor_Text_4, 4
# 314 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 315 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 316 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Mauville_Tutor_2
# 319 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Mauville_Tutor_3
# 322 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Mauville_Tutor_4
# 325 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Mauville_Tutor_5
# 328 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_Mauville_Tutor_6
# 331 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Mauville_Tutor_7
	return

MoveTutor_EventScript_Mauville_Tutor_2:
# 317 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROLLOUT
# 318 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mauville_Tutor_3:
# 320 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ELECTRO_BALL
# 321 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mauville_Tutor_4:
# 323 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
# 324 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mauville_Tutor_5:
# 326 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_BALL
# 327 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mauville_Tutor_6:
# 329 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_GYRO_BALL
# 330 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mauville_Tutor_7:
# 332 "data/scripts/move_tutors.pory"
	call SlateportCity_PokemonFanClub_Tutor_Exit
	return


MoveTutor_EventScript_Fang_Tutor::
# 337 "data/scripts/move_tutors.pory"
	lock
# 338 "data/scripts/move_tutors.pory"
	faceplayer
# 339 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Fang_Tutor_select, MSGBOX_DEFAULT
# 340 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_0, 0
# 341 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_1, 1
# 342 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_2, 2
# 343 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_3, 3
# 344 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 345 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 346 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Fang_Tutor_2
# 349 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Fang_Tutor_3
# 352 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Fang_Tutor_4
# 355 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Fang_Tutor_5
# 358 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Fang_Tutor_6
	return

MoveTutor_EventScript_Fang_Tutor_2:
# 347 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 348 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_3:
# 350 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 351 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_4:
# 353 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 354 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_5:
# 356 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_POISON_FANG
# 357 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_6:
# 359 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Fang_Tutor_Exit
	return


MoveTutor_EventScript_Fang_Tutor_Badge5::
# 364 "data/scripts/move_tutors.pory"
	lock
# 365 "data/scripts/move_tutors.pory"
	faceplayer
# 366 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Fang_Tutor_select, MSGBOX_DEFAULT
# 367 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_0, 0
# 368 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_1, 1
# 369 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_2, 2
# 370 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Text_3, 3
# 371 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Badge5_Text_0, 4
# 372 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Fang_Tutor_Badge5_Text_1, 5
# 373 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 374 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 375 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Fang_Tutor_Badge5_2
# 378 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Fang_Tutor_Badge5_3
# 381 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Fang_Tutor_Badge5_4
# 384 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Fang_Tutor_Badge5_5
# 387 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_Fang_Tutor_Badge5_6
# 390 "data/scripts/move_tutors.pory"
	case 5, MoveTutor_EventScript_Fang_Tutor_Badge5_7
# 393 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Fang_Tutor_Badge5_8
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_2:
# 376 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FIRE_FANG
# 377 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_3:
# 379 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICE_FANG
# 380 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_4:
# 382 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THUNDER_FANG
# 383 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_5:
# 385 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_POISON_FANG
# 386 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_6:
# 388 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_CRUNCH
# 389 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_7:
# 391 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_PSYCHIC_FANGS
# 392 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Fang_Tutor_Badge5_8:
# 394 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Fang_Tutor_Exit
	return


MoveTutor_EventScript_HotSpring_Tutor::
# 399 "data/scripts/move_tutors.pory"
	lock
# 400 "data/scripts/move_tutors.pory"
	faceplayer
# 401 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Fang_Tutor_select, MSGBOX_DEFAULT
# 402 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_0, 0
# 403 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_1, 1
# 404 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_2, 2
# 405 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_3, 3
# 406 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_4, 4
# 407 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_HotSpring_Tutor_Text_5, 5
# 408 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 409 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 410 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_HotSpring_Tutor_2
# 413 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_HotSpring_Tutor_3
# 416 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_HotSpring_Tutor_4
# 419 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_HotSpring_Tutor_5
# 422 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_HotSpring_Tutor_6
# 425 "data/scripts/move_tutors.pory"
	case 5, MoveTutor_EventScript_HotSpring_Tutor_7
# 428 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_HotSpring_Tutor_8
	return

MoveTutor_EventScript_HotSpring_Tutor_2:
# 411 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_TEMPER_FLARE
# 412 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_3:
# 414 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ICY_WIND
# 415 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_4:
# 417 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SCORCHING_SANDS
# 418 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_5:
# 420 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FLASH_CANNON
# 421 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_6:
# 423 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BURNING_JEALOUSY
# 424 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_7:
# 426 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_HEX
# 427 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_HotSpring_Tutor_8:
# 429 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_HotSpring_Tutor_Exit
	return


MoveTutor_EventScript_Slash_Tutor::
# 434 "data/scripts/move_tutors.pory"
	lock
# 435 "data/scripts/move_tutors.pory"
	faceplayer
# 436 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_Slash_Tutor_Select, MSGBOX_DEFAULT
# 437 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_0, 0
# 438 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_1, 1
# 439 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_2, 2
# 440 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_3, 3
# 441 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_4, 4
# 442 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_5, 5
# 443 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Slash_Tutor_Text_6, 6
# 444 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 445 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 446 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Slash_Tutor_2
# 449 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Slash_Tutor_3
# 452 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Slash_Tutor_4
# 455 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Slash_Tutor_5
# 458 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_Slash_Tutor_6
# 461 "data/scripts/move_tutors.pory"
	case 5, MoveTutor_EventScript_Slash_Tutor_7
# 464 "data/scripts/move_tutors.pory"
	case 6, MoveTutor_EventScript_Slash_Tutor_8
# 467 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Slash_Tutor_9
	return

MoveTutor_EventScript_Slash_Tutor_2:
# 447 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SLASH
# 448 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_3:
# 450 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_NIGHT_SLASH
# 451 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_4:
# 453 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_PSYCHO_CUT
# 454 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_5:
# 456 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_RAZOR_SHELL
# 457 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_6:
# 459 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_CROSS_POISON
# 460 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_7:
# 462 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_X_SCISSOR
# 463 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_8:
# 465 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_AQUA_CUTTER
# 466 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Slash_Tutor_9:
# 468 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Slash_Tutor_Exit
	return


MoveTutor_EventScript_Dewford_Tutor1::
# 473 "data/scripts/move_tutors.pory"
	lock
# 474 "data/scripts/move_tutors.pory"
	faceplayer
# 475 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Select, MSGBOX_DEFAULT
# 476 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_0, 0
# 477 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_1, 1
# 478 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_2, 2
# 479 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_3, 3
# 480 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 481 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 482 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Dewford_Tutor1_2
# 485 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Dewford_Tutor1_3
# 488 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Dewford_Tutor1_4
# 491 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Dewford_Tutor1_5
# 494 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Dewford_Tutor1_6
	return

MoveTutor_EventScript_Dewford_Tutor1_2:
# 483 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
# 484 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor1_3:
# 486 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 487 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor1_4:
# 489 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FOCUS_ENERGY
# 490 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor1_5:
# 492 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 493 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor1_6:
# 495 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Slash_Tutor_Exit
	return


MoveTutor_EventScript_Dewford_Tutor2::
# 500 "data/scripts/move_tutors.pory"
	lock
# 501 "data/scripts/move_tutors.pory"
	faceplayer
# 502 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Select, MSGBOX_DEFAULT
# 503 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_0, 0
# 504 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_1, 1
# 505 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_2, 2
# 506 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor1_Text_3, 3
# 507 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor2_Text_0, 4
# 508 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor2_Text_1, 5
# 509 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor2_Text_2, 6
# 510 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Dewford_Tutor2_Text_3, 7
# 511 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 512 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 513 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Dewford_Tutor2_2
# 516 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Dewford_Tutor2_3
# 519 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Dewford_Tutor2_4
# 522 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Dewford_Tutor2_5
# 525 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_Dewford_Tutor2_6
# 528 "data/scripts/move_tutors.pory"
	case 5, MoveTutor_EventScript_Dewford_Tutor2_7
# 531 "data/scripts/move_tutors.pory"
	case 6, MoveTutor_EventScript_Dewford_Tutor2_8
# 534 "data/scripts/move_tutors.pory"
	case 7, MoveTutor_EventScript_Dewford_Tutor2_9
# 537 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Dewford_Tutor2_10
	return

MoveTutor_EventScript_Dewford_Tutor2_2:
# 514 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_LOW_KICK
# 515 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_3:
# 517 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
# 518 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_4:
# 520 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FOCUS_ENERGY
# 521 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_5:
# 523 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
# 524 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_6:
# 526 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_AURA_SPHERE
# 527 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_7:
# 529 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SUBMISSION
# 530 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_8:
# 532 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_BODY_SLAM
# 533 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_9:
# 535 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_MEGA_KICK
# 536 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Dewford_Tutor2_10:
# 538 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Slash_Tutor_Exit
	return


MoveTutor_EventScript_Mossdeep_Fighting_Tutor::
# 543 "data/scripts/move_tutors.pory"
	lock
# 544 "data/scripts/move_tutors.pory"
	faceplayer
# 545 "data/scripts/move_tutors.pory"
	msgbox MoveTutor_Text_HotSpring_Tutor_Select, MSGBOX_DEFAULT
# 546 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_0, 0
# 547 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_1, 1
# 548 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_2, 2
# 549 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_3, 3
# 550 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_4, 4
# 551 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_5, 5
# 552 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_6, 6
# 553 "data/scripts/move_tutors.pory"
	dynmultipush MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_7, 7
# 554 "data/scripts/move_tutors.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 555 "data/scripts/move_tutors.pory"
	switch VAR_RESULT
# 556 "data/scripts/move_tutors.pory"
	case 0, MoveTutor_EventScript_Mossdeep_Fighting_Tutor_2
# 559 "data/scripts/move_tutors.pory"
	case 1, MoveTutor_EventScript_Mossdeep_Fighting_Tutor_3
# 562 "data/scripts/move_tutors.pory"
	case 2, MoveTutor_EventScript_Mossdeep_Fighting_Tutor_4
# 565 "data/scripts/move_tutors.pory"
	case 3, MoveTutor_EventScript_Mossdeep_Fighting_Tutor_5
# 568 "data/scripts/move_tutors.pory"
	case 4, MoveTutor_EventScript_Mossdeep_Fighting_Tutor_6
# 571 "data/scripts/move_tutors.pory"
	case 5, MoveTutor_EventScript_Mossdeep_Fighting_Tutor_7
# 574 "data/scripts/move_tutors.pory"
	case 6, MoveTutor_EventScript_Mossdeep_Fighting_Tutor_8
# 577 "data/scripts/move_tutors.pory"
	case 7, MoveTutor_EventScript_Mossdeep_Fighting_Tutor_9
# 580 "data/scripts/move_tutors.pory"
	case MULTI_B_PRESSED, MoveTutor_EventScript_Mossdeep_Fighting_Tutor_10
	return

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_2:
# 557 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
# 558 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_3:
# 560 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FOCUS_BLAST
# 561 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_4:
# 563 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_THROAT_CHOP
# 564 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_5:
# 566 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_COACHING
# 567 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_6:
# 569 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
# 570 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_7:
# 572 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_SUPERPOWER
# 573 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_8:
# 575 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_FAKE_OUT
# 576 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_9:
# 578 "data/scripts/move_tutors.pory"
	setvar VAR_0x8005, MOVE_ACROBATICS
# 579 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_OpenPartyMenu
	return

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_10:
# 581 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Slash_Tutor_Exit
	return


SlateportCity_PokemonFanClub_Tutor::
# 586 "data/scripts/move_tutors.pory"
	faceplayer
# 587 "data/scripts/move_tutors.pory"
	lock
# 588 "data/scripts/move_tutors.pory"
	msgbox SlateportCity_PokemonFanClub_Tutor_Intro, MSGBOX_DEFAULT
# 589 "data/scripts/move_tutors.pory"
	waitmessage
# 590 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Slateport_Tutor
# 591 "data/scripts/move_tutors.pory"
	msgbox SlateportCity_PokemonFanClub_Tutor_Outro2
# 592 "data/scripts/move_tutors.pory"
	release
	end


SlateportCity_PokemonFanClub_Tutor_Exit::
# 597 "data/scripts/move_tutors.pory"
	msgbox SlateportCity_PokemonFanClub_Tutor_Outro, MSGBOX_DEFAULT
# 598 "data/scripts/move_tutors.pory"
	release
	end


MauvilleCity_Rolling_Tutor::
# 603 "data/scripts/move_tutors.pory"
	faceplayer
# 604 "data/scripts/move_tutors.pory"
	lock
# 605 "data/scripts/move_tutors.pory"
	msgbox MauvilleCity_Rolling_Tutor_Intro, MSGBOX_DEFAULT
# 606 "data/scripts/move_tutors.pory"
	waitmessage
# 607 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Mauville_Tutor
# 608 "data/scripts/move_tutors.pory"
	msgbox MauvilleCity_Rolling_Tutor_Outro2
# 609 "data/scripts/move_tutors.pory"
	release
	end


MauvilleCity_Rolling_Tutor_Exit::
# 614 "data/scripts/move_tutors.pory"
	msgbox MauvilleCity_Rolling_Tutor_Outro, MSGBOX_DEFAULT
# 615 "data/scripts/move_tutors.pory"
	release
	end


MossdeepCity_Fighting_Tutor::
# 620 "data/scripts/move_tutors.pory"
	faceplayer
# 621 "data/scripts/move_tutors.pory"
	lock
# 622 "data/scripts/move_tutors.pory"
	goto_if_set FLAG_MOSSDEEP_TUTOR_BEATEN, MossdeepCity_Fighting_Tutor_2
# 628 "data/scripts/move_tutors.pory"
	msgbox MossdeepCity_Fighting_Tutor_Meeting, MSGBOX_DEFAULT
# 629 "data/scripts/move_tutors.pory"
	waitmessage
# 630 "data/scripts/move_tutors.pory"
	msgbox MossdeepCity_Fighting_Tutor_Propose_Battle, MSGBOX_YESNO
# 631 "data/scripts/move_tutors.pory"
	waitmessage
# 632 "data/scripts/move_tutors.pory"
	compare VAR_RESULT, YES
	goto_if_eq MossdeepCity_Fighting_Tutor_5
# 641 "data/scripts/move_tutors.pory"
	msgbox MossdeepCity_Fighting_Tutor_Decline_Battle, MSGBOX_DEFAULT
# 642 "data/scripts/move_tutors.pory"
	release
	end

MossdeepCity_Fighting_Tutor_1:
# 647 "data/scripts/move_tutors.pory"
	msgbox MossdeepCity_Fighting_Tutor_Outro2
# 648 "data/scripts/move_tutors.pory"
	release
	end

MossdeepCity_Fighting_Tutor_2:
# 623 "data/scripts/move_tutors.pory"
	msgbox MossdeepCity_Fighting_Tutor_Intro, MSGBOX_DEFAULT
# 624 "data/scripts/move_tutors.pory"
	waitmessage
# 625 "data/scripts/move_tutors.pory"
	call MoveTutor_EventScript_Mossdeep_Fighting_Tutor
	goto MossdeepCity_Fighting_Tutor_1

MossdeepCity_Fighting_Tutor_5:
# 633 "data/scripts/move_tutors.pory"
	msgbox MossdeepCity_Fighting_Tutor_Accept_Battle, MSGBOX_DEFAULT
# 634 "data/scripts/move_tutors.pory"
	trainerbattle_no_intro TRAINER_YOSHIDA, MossdeepCity_Fighting_Tutor_Battle_End
# 635 "data/scripts/move_tutors.pory"
	setflag FLAG_MOSSDEEP_TUTOR_BEATEN
# 636 "data/scripts/move_tutors.pory"
	msgbox MossdeepCity_Fighting_Tutor_After_Battle, MSGBOX_DEFAULT
# 637 "data/scripts/move_tutors.pory"
	release
	end


MossdeepCity_Fighting_Tutor_Exit::
# 653 "data/scripts/move_tutors.pory"
	msgbox MossdeepCity_Fighting_Tutor_Outro, MSGBOX_DEFAULT
# 654 "data/scripts/move_tutors.pory"
	release
	end


MoveTutor_EventScript_Slateport_Tutor_Text_0:
# 282 "data/scripts/move_tutors.pory"
	.string "SWAGGER$"

MoveTutor_EventScript_Slateport_Tutor_Text_1:
# 283 "data/scripts/move_tutors.pory"
	.string "FLATTER$"

MoveTutor_EventScript_Slateport_Tutor_Text_2:
# 284 "data/scripts/move_tutors.pory"
	.string "ENCORE$"

MoveTutor_EventScript_Slateport_Tutor_Text_3:
# 285 "data/scripts/move_tutors.pory"
	.string "HELPING HAND$"

MoveTutor_EventScript_Mauville_Tutor_Text_0:
# 309 "data/scripts/move_tutors.pory"
	.string "ROLLOUT$"

MoveTutor_EventScript_Mauville_Tutor_Text_1:
# 310 "data/scripts/move_tutors.pory"
	.string "ELECTRO BALL$"

MoveTutor_EventScript_Mauville_Tutor_Text_2:
# 311 "data/scripts/move_tutors.pory"
	.string "DEFENSE CURL$"

MoveTutor_EventScript_Mauville_Tutor_Text_3:
# 312 "data/scripts/move_tutors.pory"
	.string "ICE BALL$"

MoveTutor_EventScript_Mauville_Tutor_Text_4:
# 313 "data/scripts/move_tutors.pory"
	.string "GYRO BALL$"

MoveTutor_EventScript_Fang_Tutor_Text_0:
# 340 "data/scripts/move_tutors.pory"
	.string "FIRE FANG$"

MoveTutor_EventScript_Fang_Tutor_Text_1:
# 341 "data/scripts/move_tutors.pory"
	.string "ICE FANG$"

MoveTutor_EventScript_Fang_Tutor_Text_2:
# 342 "data/scripts/move_tutors.pory"
	.string "THUNDER FANG$"

MoveTutor_EventScript_Fang_Tutor_Text_3:
# 343 "data/scripts/move_tutors.pory"
	.string "POISON FANG$"

MoveTutor_EventScript_Fang_Tutor_Badge5_Text_0:
# 371 "data/scripts/move_tutors.pory"
	.string "CRUNCH$"

MoveTutor_EventScript_Fang_Tutor_Badge5_Text_1:
# 372 "data/scripts/move_tutors.pory"
	.string "PSYCHIC FANGS$"

MoveTutor_EventScript_HotSpring_Tutor_Text_0:
# 402 "data/scripts/move_tutors.pory"
	.string "TEMPER FLARE$"

MoveTutor_EventScript_HotSpring_Tutor_Text_1:
# 403 "data/scripts/move_tutors.pory"
	.string "ICY WIND$"

MoveTutor_EventScript_HotSpring_Tutor_Text_2:
# 404 "data/scripts/move_tutors.pory"
	.string "SCORCHING SANDS$"

MoveTutor_EventScript_HotSpring_Tutor_Text_3:
# 405 "data/scripts/move_tutors.pory"
	.string "FLASH CANNON$"

MoveTutor_EventScript_HotSpring_Tutor_Text_4:
# 406 "data/scripts/move_tutors.pory"
	.string "BURNING JEALOUSY$"

MoveTutor_EventScript_HotSpring_Tutor_Text_5:
# 407 "data/scripts/move_tutors.pory"
	.string "HEX$"

MoveTutor_EventScript_Slash_Tutor_Text_0:
# 437 "data/scripts/move_tutors.pory"
	.string "SLASH$"

MoveTutor_EventScript_Slash_Tutor_Text_1:
# 438 "data/scripts/move_tutors.pory"
	.string "NIGHT SLASH$"

MoveTutor_EventScript_Slash_Tutor_Text_2:
# 439 "data/scripts/move_tutors.pory"
	.string "PSYCHO CUT$"

MoveTutor_EventScript_Slash_Tutor_Text_3:
# 440 "data/scripts/move_tutors.pory"
	.string "RAZOR SHELL$"

MoveTutor_EventScript_Slash_Tutor_Text_4:
# 441 "data/scripts/move_tutors.pory"
	.string "CROSS POISON$"

MoveTutor_EventScript_Slash_Tutor_Text_5:
# 442 "data/scripts/move_tutors.pory"
	.string "X-SCISSOR$"

MoveTutor_EventScript_Slash_Tutor_Text_6:
# 443 "data/scripts/move_tutors.pory"
	.string "AQUA CUTTER$"

MoveTutor_EventScript_Dewford_Tutor1_Text_0:
# 476 "data/scripts/move_tutors.pory"
	.string "LOW KICK$"

MoveTutor_EventScript_Dewford_Tutor1_Text_1:
# 477 "data/scripts/move_tutors.pory"
	.string "SEISMIC TOSS$"

MoveTutor_EventScript_Dewford_Tutor1_Text_2:
# 478 "data/scripts/move_tutors.pory"
	.string "FOCUS ENERGY$"

MoveTutor_EventScript_Dewford_Tutor1_Text_3:
# 479 "data/scripts/move_tutors.pory"
	.string "MEGA PUNCH$"

MoveTutor_EventScript_Dewford_Tutor2_Text_0:
# 507 "data/scripts/move_tutors.pory"
	.string "AURA SPHERE$"

MoveTutor_EventScript_Dewford_Tutor2_Text_1:
# 508 "data/scripts/move_tutors.pory"
	.string "SUBMISSION$"

MoveTutor_EventScript_Dewford_Tutor2_Text_2:
# 509 "data/scripts/move_tutors.pory"
	.string "BODY SLAM$"

MoveTutor_EventScript_Dewford_Tutor2_Text_3:
# 510 "data/scripts/move_tutors.pory"
	.string "MEGA KICK$"

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_0:
# 546 "data/scripts/move_tutors.pory"
	.string "DYNAMIC PUNCH$"

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_1:
# 547 "data/scripts/move_tutors.pory"
	.string "FOCUS BLAST$"

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_2:
# 548 "data/scripts/move_tutors.pory"
	.string "THROAT CHOP$"

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_3:
# 549 "data/scripts/move_tutors.pory"
	.string "COACHING$"

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_4:
# 550 "data/scripts/move_tutors.pory"
	.string "ROCK SLIDE$"

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_5:
# 551 "data/scripts/move_tutors.pory"
	.string "SUPERPOWER$"

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_6:
# 552 "data/scripts/move_tutors.pory"
	.string "FAKE OUT$"

MoveTutor_EventScript_Mossdeep_Fighting_Tutor_Text_7:
# 553 "data/scripts/move_tutors.pory"
	.string "ACROBATICS$"

exit_yes::
# 658 "data/scripts/move_tutors.pory"
	.string "yes$"

exit_no::
# 662 "data/scripts/move_tutors.pory"
	.string "no$"

SlateportCity_PokemonFanClub_Tutor_Intro::
# 666 "data/scripts/move_tutors.pory"
	.string "Heh! My POKéMON totally rules!\n"
	.string "It's cooler than any POKéMON!\p"
	.string "I can even teach your POKéMON\n"
	.string "to be almost as cool as mine.$"

SlateportCity_PokemonFanClub_Tutor_Select::
# 673 "data/scripts/move_tutors.pory"
	.string "What move would you like to learn?$"

SlateportCity_PokemonFanClub_Tutor_Outro::
# 677 "data/scripts/move_tutors.pory"
	.string "What, no? Can't you get into\n"
	.string "the spirit of things?$"

SlateportCity_PokemonFanClub_Tutor_Outro2::
# 682 "data/scripts/move_tutors.pory"
	.string "Now go out there and show off\n"
	.string "your cool moves!$"

MauvilleCity_Rolling_Tutor_Intro::
# 687 "data/scripts/move_tutors.pory"
	.string "Did you know that you can go from\n"
	.string "here a long way in that direction\l"
	.string "without changing direction?\p"
	.string "I might even be able to roll\n"
	.string "that way.\p"
	.string "Do you think your POKéMON will\n"
	.string "want to roll, too?\p"
	.string "I can teach them some rolling\n"
	.string "moves if you'd like.$"

MauvilleCity_Rolling_Tutor_Select::
# 699 "data/scripts/move_tutors.pory"
	.string "Ehehe, sure thing! It'd be great if\n"
	.string "the POKéMON looked like me.$"

MauvilleCity_Rolling_Tutor_Outro::
# 704 "data/scripts/move_tutors.pory"
	.string "You don't need to be shy about it.\n"
	.string "Let's roll!$"

MauvilleCity_Rolling_Tutor_Outro2::
# 709 "data/scripts/move_tutors.pory"
	.string "Rolling around in the grass makes me\n"
	.string "happy. Come on, let's roll!$"

MossdeepCity_Fighting_Tutor_Meeting::
# 714 "data/scripts/move_tutors.pory"
	.string "You there! You seem like a strong trainer!\p"
	.string "Defeat me in battle and I shall teach you\n"
	.string "my strongest techniques!$"

MossdeepCity_Fighting_Tutor_Propose_Battle::
# 720 "data/scripts/move_tutors.pory"
	.string "Do you accept my challenge?$"

MossdeepCity_Fighting_Tutor_Accept_Battle::
# 724 "data/scripts/move_tutors.pory"
	.string "Yes! Our battle shall be a great one!$"

MossdeepCity_Fighting_Tutor_Decline_Battle::
# 728 "data/scripts/move_tutors.pory"
	.string "I see. Come back if you can muster the\n"
	.string "the courage to do so.$"

MossdeepCity_Fighting_Tutor_Battle_End::
# 733 "data/scripts/move_tutors.pory"
	.string "Wahahaha! Very impressive!$"

MossdeepCity_Fighting_Tutor_After_Battle::
# 737 "data/scripts/move_tutors.pory"
	.string "That was a great battle! I would be\n"
	.string "honored to have you as my disciple!\p"
	.string "Come to me anytime to teach your\n"
	.string "POKéMON my powerful techniques!$"

MossdeepCity_Fighting_Tutor_Intro::
# 744 "data/scripts/move_tutors.pory"
	.string "My disciple, let me teach your POKéMON\n"
	.string "one of my powerful techniques!$"

MossdeepCity_Fighting_Tutor_Select::
# 749 "data/scripts/move_tutors.pory"
	.string "What move would you like to learn?$"

MossdeepCity_Fighting_Tutor_Outro::
# 753 "data/scripts/move_tutors.pory"
	.string "Grasp victory with the power I have\n"
	.string "given to you!$"

MossdeepCity_Fighting_Tutor_Outro2::
# 758 "data/scripts/move_tutors.pory"
	.string "Come back any time, my disciple.$"
