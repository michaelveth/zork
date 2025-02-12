// Generated at 08-14-19 12:00:14
#pragma once
const GObjectDefinition gobjects[] = {
{numbits, { "IT", "THAT", "THIS", "HIM" }, {  }, "random object", { ovison, ndescbit } },
{numbits, { "GBROC", "BROCH", "MAIL" }, { "FREE" }, "free brochure", { ovison } , obj_funcs::brochure},
{numbits, { "#####", "ME", "CRETI", "MYSEL", "SELF" }, {  }, "cretin", { ovison, villain } , obj_funcs::cretin, { }, { OP(ksl_oglobal, 0), OP(ksl_oactor, oa_player) }},
{numbits, { "WISH", "BLESS" }, {  }, "wish", { ovison, ndescbit } },
{numbits, { "EVERY", "ALL" }, {  }, "everything", { ovison, takebit, ndescbit, no_check_bit, bunchbit } , obj_funcs::valuables_c},
{numbits, { "POSSE" }, {  }, "possessions", { ovison, takebit, ndescbit, no_check_bit, bunchbit } , obj_funcs::valuables_c},
{numbits, { "VALUA", "TREAS" }, {  }, "valuables", { ovison, takebit, ndescbit, no_check_bit, bunchbit } , obj_funcs::valuables_c},
{numbits, { "SAILO" }, {  }, "sailor", { ovison, ndescbit } },
{numbits, { "TEETH" }, {  }, "set of teeth", { ovison, ndescbit } },
{numbits, { "WALL", "WALLS" }, {  }, "wall", { ovison } , obj_funcs::wall_function},
{numbits, { "GWALL", "WALL" }, { "GRANI" }, "granite wall", { ovison } , obj_funcs::granite},
{numbits, { "GROUN", "EARTH", "SAND" }, {  }, "ground", { ovison, digbit } , obj_funcs::ground_function},
{numbits, { "GRUE" }, {  }, "lurking grue", { ovison } , obj_funcs::grue_function},
{numbits, { "HANDS", "HAND" }, { "BARE" }, "pair of hands", { ovison, ndescbit, toolbit } },
{numbits, { "LUNGS", "AIR" }, {  }, "breath", { ovison, ndescbit, toolbit } },
{numbits, { "AVIAT", "FLYER" }, {  }, "flyer", { ovison, ndescbit } },
{numbits, { "EXCEP", "BUT" }, {  }, "moby lossage", { ovison, ndescbit } },
{wellbit, { "WELL" }, { "MAGIC" }, "well", { ovison, ndescbit } , obj_funcs::well_function},
{ropebit, { "SROPE", "ROPE", "PIECE" }, {  }, "piece of rope", { ovison, climbbit, no_check_bit } , obj_funcs::slide_rope},
{slidebit, { "SLIDE", "CHUTE" }, {  }, "chute", { ovison} , obj_funcs::slide_function},
{cpwall, { "CPEWL", "WALL" }, { "EAST", "EASTE" }, "eastern wall", { ovison} , obj_funcs::cpwall_object},
{cpwall, { "CPWWL", "WALL" }, { "WEST", "WESTE" }, "western wall", { ovison} , obj_funcs::cpwall_object},
{cpwall, { "CPSWL", "WALL" }, { "SOUTH" }, "southern wall", { ovison} , obj_funcs::cpwall_object},
{cpwall, { "CPNWL", "WALL" }, { "NORTH" }, "northern wall", { ovison} , obj_funcs::cpwall_object},
{cpladder, { "CPLAD", "LADDE" }, {  }, "ladder", { ovison} , obj_funcs::cpladder_object},
{birdbit, { "BIRD", "SONGB" }, { "SONG" }, "bird", { ovison, ndescbit } , obj_funcs::bird_object},
{housebit, { "HOUSE" }, { "WHITE" }, "white house", { ovison, ndescbit } , obj_funcs::house_function},
{treebit, { "TREE" }, {  }, "tree", { ovison, ndescbit } },
{guardbit, { "GUARD" }, {  }, "Guardian of Zork", { ovison, vicbit, villain } , obj_funcs::guardians},
{rosebit, { "ROSE", "COMPA" }, {  }, "compass rose", { ovison } },
{masterbit, { "MASTE", "KEEPE", "DUNGE" }, { "DUNGE" }, "dungeon master", { ovison, vicbit, actorbit } , obj_funcs::master_function, { }, { OP(ksl_odesc1, "The dungeon master is quietly leaning on his staff here."), OP(ksl_oactor, oa_master), OP(ksl_oglobal, 0) }},
{mirrorbit, { "MIRRO", "STRUC" }, {  }, "mirror", { ovison } , obj_funcs::mirror_function},
{panelbit, { "PANEL" }, {  }, "panel", { ovison } , obj_funcs::panel_function},
{chanbit, { "CHANN" }, {  }, "stone channel", { ovison } },
{wall_eswbit, { "WEAST", "WALL" }, { "EAST", "EASTE" }, "eastern wall", { ovison, ndescbit } , obj_funcs::scolwall},
{wall_eswbit, { "WSOUT", "WALL" }, { "SOUTH" }, "southern wall", { ovison, ndescbit } , obj_funcs::scolwall},
{wall_eswbit, { "WWEST", "WALL" }, { "WEST", "WESTE" }, "western wall", { ovison, ndescbit } , obj_funcs::scolwall},
{wall_nbit, { "WNORT", "WALL" }, { "NORTH" }, "northern wall", { ovison, ndescbit } , obj_funcs::scolwall},
{rgwater, { "GWATE", "WATER", "QUANT", "LIQUI", "H2O" }, {  }, "water", { drinkbit, ovison } , obj_funcs::water_function},
{dwindow, { "DWIND" }, {  }, "window", { ovison} , nullptr},
};
