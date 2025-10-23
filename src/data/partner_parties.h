static const struct TrainerMon sParty_StevenPartner[] = {
    {
        .species = SPECIES_METAGROSS,
        .lvl = 54,
        .nature = NATURE_BRAVE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 6, 0),
        .moves = {MOVE_LIGHT_SCREEN, MOVE_PSYCHIC_FANGS, MOVE_REFLECT, MOVE_IRON_HEAD},
    },
    {
        .species = SPECIES_SKARMORY,
        .lvl = 53,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 6, 252),
        .moves = {MOVE_TOXIC, MOVE_DRILL_PECK, MOVE_ROOST, MOVE_STEEL_WING},
    },
    {
        .species = SPECIES_AGGRON,
        .lvl = 53,
        .nature = NATURE_ADAMANT,
        .ability = ABILITY_FILTER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 6),
        .moves = {MOVE_BODY_PRESS, MOVE_PROTECT, MOVE_HEAD_SMASH, MOVE_DRAGON_CLAW},
    }
};
