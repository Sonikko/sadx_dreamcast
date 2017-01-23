#include "stdafx.h"
#include "SADXModLoader.h"

enum OBJ_SSTexName
{
	OBJ_SSTexName_ast_kabe52,
	OBJ_SSTexName_ast_kabe55,
	OBJ_SSTexName_bst_enta,
	OBJ_SSTexName_cst_kaidan07,
	OBJ_SSTexName_gele_dis,
	OBJ_SSTexName_gele_yuka0,
	OBJ_SSTexName_gele_yuka1,
	OBJ_SSTexName_hotelelemado,
	OBJ_SSTexName_tra_yane1,
	OBJ_SSTexName_moji12,
	OBJ_SSTexName_box12,
	OBJ_SSTexName_box11,
	OBJ_SSTexName_containerF19,
	OBJ_SSTexName_containerF18,
	OBJ_SSTexName_tra_mado2,
	OBJ_SSTexName_tra_yane3,
	OBJ_SSTexName_gele_yuka2,
	OBJ_SSTexName_gele_kabe0,
	OBJ_SSTexName_gele_tenjyo0,
	OBJ_SSTexName_jyabara,
	OBJ_SSTexName_mojiban,
	OBJ_SSTexName_tokeihari,
	OBJ_SSTexName_alumb_t,
	OBJ_SSTexName_uradoor2,
	OBJ_SSTexName_uradoornobu,
	OBJ_SSTexName_uradoorwaku,
	OBJ_SSTexName_s2dnobu1,
	OBJ_SSTexName_shop2door,
	OBJ_SSTexName_s2dwaku,
	OBJ_SSTexName_eledai01,
	OBJ_SSTexName_elehasirahaji02,
	OBJ_SSTexName_shop1door2,
	OBJ_SSTexName_shop1doorwaku,
	OBJ_SSTexName_shop1dr01,
	OBJ_SSTexName_shop1nobu,
	OBJ_SSTexName_sakutop,
	OBJ_SSTexName_sakuunder,
	OBJ_SSTexName_eggdai,
	OBJ_SSTexName_card02,
	OBJ_SSTexName_card_front,
	OBJ_SSTexName_card_back,
	OBJ_SSTexName_twindoor,
	OBJ_SSTexName_elehasirahaji03,
	OBJ_SSTexName_kartdoor002,
	OBJ_SSTexName_kartdoor003,
	OBJ_SSTexName_kartdoor004,
	OBJ_SSTexName_m32_tp15,
	OBJ_SSTexName_twkabe04,
	OBJ_SSTexName_twbdoor01,
	OBJ_SSTexName_twkabe03,
	OBJ_SSTexName_doorhaji001,
	OBJ_SSTexName_twbwaku,
	OBJ_SSTexName_twcwaku,
	OBJ_SSTexName_kaiganmato,
	OBJ_SSTexName_ss_ref_hotelsea,
	OBJ_SSTexName_off_saku,
	OBJ_SSTexName_hwbshutter_blkn,
	OBJ_SSTexName_m32_tp2_009,
	OBJ_SSTexName_ref_red01,
	OBJ_SSTexName_ref_star,
	OBJ_SSTexName_st_slight01,
	OBJ_SSTexName_bst_entg,
	OBJ_SSTexName_bst_yane,
	OBJ_SSTexName_duw40,
	OBJ_SSTexName_duw78,
	OBJ_SSTexName_duw81,
	OBJ_SSTexName_duw82,
	OBJ_SSTexName_wshadow,
	OBJ_SSTexName_bst_shsd,
	OBJ_SSTexName_bst_shsdc,
	OBJ_SSTexName_cst_hari02,
	OBJ_SSTexName_ssoffmadox,
	OBJ_SSTexName_ssoffmadox_d,
	OBJ_SSTexName_uradoor,
	OBJ_SSTexName_benchkage,
	OBJ_SSTexName_offbarri,
	OBJ_SSTexName_ref_crome,
	OBJ_SSTexName_hoteldoor_ref,
	OBJ_SSTexName_ss_hoteldoor,
	OBJ_SSTexName_sshotelpink0,
	OBJ_SSTexName_st3_100,
	OBJ_SSTexName_tokeiyoko,
	OBJ_SSTexName_chaopass,
	OBJ_SSTexName_exit6,
	OBJ_SSTexName_exitF,
	OBJ_SSTexName_ss_light1,
	OBJ_SSTexName_light1,
	OBJ_SSTexName_ss_light2,
	OBJ_SSTexName_ss_light3,
	OBJ_SSTexName_ss_light5,
	OBJ_SSTexName_bin3,
	OBJ_SSTexName_bin_huta,
	OBJ_SSTexName_isu6,
	OBJ_SSTexName_isu8,
	OBJ_SSTexName_isu3_5,
	OBJ_SSTexName_pool_chair2,
	OBJ_SSTexName_parasolT5,
	OBJ_SSTexName_parasolT6,
	OBJ_SSTexName_pool_glass,
	OBJ_SSTexName_pool_hana,
	OBJ_SSTexName_pool_isu5,
	OBJ_SSTexName_pool_isuF,
	OBJ_SSTexName_parasolF5,
	OBJ_SSTexName_pool_orange,
	OBJ_SSTexName_pool_parasol12,
	OBJ_SSTexName_chair2,
	OBJ_SSTexName_chairseet,
	OBJ_SSTexName_ss_sig03,
	OBJ_SSTexName_shop_radio11,
	OBJ_SSTexName_shop_radio12,
	OBJ_SSTexName_shop_radio7,
	OBJ_SSTexName_kaseki5,
	OBJ_SSTexName_kaseki_hako,
	OBJ_SSTexName_kaseki_hako2,
	OBJ_SSTexName_moji,
	OBJ_SSTexName_egg_isi,
	OBJ_SSTexName_m64_tp118,
	OBJ_SSTexName_tw_w01,
	OBJ_SSTexName_circuit02,
	OBJ_SSTexName_twskabe09,
	OBJ_SSTexName_twkanbanmoji04,
	OBJ_SSTexName_twkanbanmoji01,
	OBJ_SSTexName_twkanbanmoji03,
	OBJ_SSTexName_s2af,
	OBJ_SSTexName_s2bf,
	OBJ_SSTexName_s2fc,
	OBJ_SSTexName_s2roboab,
	OBJ_SSTexName_s2roboaf,
	OBJ_SSTexName_s2roboah,
	OBJ_SSTexName_s2roboal,
	OBJ_SSTexName_s2robobb,
	OBJ_SSTexName_s2robobf,
	OBJ_SSTexName_s2robobh,
	OBJ_SSTexName_s2robobl,
	OBJ_SSTexName_s1rtable_04,
	OBJ_SSTexName_syou3,
	OBJ_SSTexName_syou6,
	OBJ_SSTexName_paper,
	OBJ_SSTexName_s1rpos1,
	OBJ_SSTexName_s1rsolta,
	OBJ_SSTexName_steel32pla,
	OBJ_SSTexName_steel32pla2,
	OBJ_SSTexName_du32tw006,
	OBJ_SSTexName_kanbandaigreen,
	OBJ_SSTexName_tenjixyou,
	OBJ_SSTexName_tenjixyou02,
	OBJ_SSTexName_s2tboxfuta,
	OBJ_SSTexName_s2tboxmi,
	OBJ_SSTexName_ast_hasi30,
	OBJ_SSTexName_ss_light18,
	OBJ_SSTexName_ast_hasi31,
	OBJ_SSTexName_ss_lightG4,
	OBJ_SSTexName_bst_shg,
	OBJ_SSTexName_keyblockhead,
	OBJ_SSTexName_bst_shgc,
	OBJ_SSTexName_ss_hotel_loads,
	OBJ_SSTexName_ssef_block,
	OBJ_SSTexName_ss_sig05,
	OBJ_SSTexName_ss_sig02,
	OBJ_SSTexName_hyousiki02,
	OBJ_SSTexName_ss_sigbu,
	OBJ_SSTexName_ss_sigye,
	OBJ_SSTexName_ss_sigre,
	OBJ_SSTexName_hyousiki01,
	OBJ_SSTexName_st_l02,
	OBJ_SSTexName_st_l03,
	OBJ_SSTexName_st_lamp2,
	OBJ_SSTexName_st_l104,
	OBJ_SSTexName_mr_016f_key,
	OBJ_SSTexName_mr_016f_keyb,
	OBJ_SSTexName_mr_016f_wakiso,
	OBJ_SSTexName_mr_032f_kannb,
	OBJ_SSTexName_mr_064f_kesshou,
	OBJ_SSTexName_powerbox_sita10,
	OBJ_SSTexName_cg_gold,
	OBJ_SSTexName_min_passura2,
	OBJ_SSTexName_min_pass9
};

NJS_MATERIAL matlist_00184944[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_SSTexName_ref_star, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00184958[] = {
	0x8000u | 5, 4, 8, 0, 5, 7,
	6, 10, 2, 0, 6, 7, 1,
	0x8000u | 5, 10, 3, 0, 9, 4
};

NJS_TEX uv_00184980[] = {
	{ 127, 0 },
	{ 159, 94 },
	{ 127, 140 },
	{ 255, 97 },
	{ 179, 158 },
	{ 75, 158 },
	{ 48, 255 },
	{ 127, 140 },
	{ 127, 197 },
	{ 179, 158 },
	{ 206, 255 },
	{ 75, 158 },
	{ 0, 97 },
	{ 127, 140 },
	{ 95, 94 },
	{ 127, 0 }
};

NJS_MESHSET_SADX meshlist_001849C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00184958, NULL, NULL, NULL, uv_00184980, NULL }
};

NJS_VECTOR vertex_001849D8[] = {
	{ 2.249695f, 0.000141f, 0 },
	{ 2.249695f, -6.067483f, 4.408389f },
	{ 2.249696f, -6.067483f, -4.40839f },
	{ 2.249695f, 2.317768f, -7.132924f },
	{ 2.249694f, 7.500139f, 0.000001f },
	{ 2.249694f, 2.317767f, 7.132924f },
	{ 2.249695f, -3.033671f, 0 },
	{ 2.249695f, -0.937359f, 2.885328f },
	{ 2.249694f, 2.454547f, 1.783231f },
	{ 2.249695f, 2.454547f, -1.783231f },
	{ 2.249696f, -0.937358f, -2.885328f }
};

NJS_VECTOR normal_00184A5C[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 }
};

NJS_MODEL_SADX attach_00184AE0 = { vertex_001849D8, normal_00184A5C, LengthOfArray(vertex_001849D8), meshlist_001849C0, matlist_00184944, LengthOfArray(meshlist_001849C0), LengthOfArray(matlist_00184944),{ 2.249695f, 0.716328f, 0 }, 9.59376f, NULL };

NJS_OBJECT object_00184B08 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00184AE0, -47.75018f, -21.50093f, -8.505248f, 0x7FFF, 0xFFFF8CCD, 0x7FFF, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00184B3C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_SSTexName_ref_red01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00184B50[] = {
	0x8000u | 6, 5, 8, 7, 0, 1, 6,
	7, 4, 8, 9, 0, 10, 6, 2,
	3, 10, 3, 9
};

NJS_TEX uv_00184B78[] = {
	{ 0, 97 },
	{ 153, 94 },
	{ 153, 158 },
	{ 153, 140 },
	{ 51, 254 },
	{ 153, 197 },
	{ 102, 0 },
	{ 153, 94 },
	{ 153, 94 },
	{ 153, 140 },
	{ 153, 158 },
	{ 153, 197 },
	{ 280, 254 },
	{ 153, 158 },
	{ 280, 97 },
	{ 153, 94 }
};

NJS_MESHSET_SADX meshlist_00184BB8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00184B50, NULL, NULL, NULL, uv_00184B78, NULL }
};

NJS_VECTOR vertex_00184BD0[] = {
	{ 0, 0.000015f, -3 },
	{ 5.877852f, -8.090155f, -3.000001f },
	{ -5.877853f, -8.090155f, -2.999999f },
	{ -9.510565f, 3.090186f, -2.999999f },
	{ 0.000001f, 10.00002f, -3 },
	{ 9.510567f, 3.090184f, -3.000001f },
	{ 0, -4.04507f, -3 },
	{ 3.847105f, -1.249985f, -3 },
	{ 2.377642f, 3.272557f, -3 },
	{ -2.377641f, 3.272558f, -3 },
	{ -3.847105f, -1.249985f, -3 }
};

NJS_VECTOR normal_00184C54[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_00184CD8 = { vertex_00184BD0, normal_00184C54, LengthOfArray(vertex_00184BD0), meshlist_00184BB8, matlist_00184B3C, LengthOfArray(meshlist_00184BB8), LengthOfArray(matlist_00184B3C),{ 0.000001f, 0.954931f, -3 }, 12.61646f, NULL };

NJS_OBJECT object_00184D00 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00184CD8, -36.99917f, 0.999603f, -24.50244f, 0x8048, 0x503B, 0x189A1, 1, 1, 1, NULL, &object_00184B08 };

NJS_MATERIAL matlist_00184D34[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_SSTexName_ref_red01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00184D48[] = {
	0x8000u | 6, 5, 8, 7, 0, 1, 6,
	7, 4, 8, 9, 0, 10, 6, 2,
	3, 10, 3, 9
};

NJS_TEX uv_00184D70[] = {
	{ 14, 97 },
	{ 141, 94 },
	{ 70, 158 },
	{ 141, 140 },
	{ 70, 254 },
	{ 141, 197 },
	{ 113, 0 },
	{ 141, 94 },
	{ 141, 94 },
	{ 141, 140 },
	{ 212, 158 },
	{ 141, 197 },
	{ 226, 254 },
	{ 212, 158 },
	{ 255, 97 },
	{ 141, 94 }
};

NJS_MESHSET_SADX meshlist_00184DB0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00184D48, NULL, NULL, NULL, uv_00184D70, NULL }
};

NJS_VECTOR vertex_00184DC8[] = {
	{ 0, 0, -3.749809f },
	{ 7.347316f, -10.11271f, -3.74981f },
	{ -7.347317f, -10.11271f, -3.749808f },
	{ -11.88821f, 3.862712f, -3.749807f },
	{ 0.000002f, 12.49999f, -3.74981f },
	{ 11.88821f, 3.86271f, -3.749811f },
	{ 0, -5.056353f, -3.749809f },
	{ 4.808881f, -1.5625f, -3.74981f },
	{ 2.972053f, 4.090675f, -3.749809f },
	{ -2.972051f, 4.090676f, -3.749809f },
	{ -4.808881f, -1.562499f, -3.749808f }
};

NJS_VECTOR normal_00184E4C[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_00184ED0 = { vertex_00184DC8, normal_00184E4C, LengthOfArray(vertex_00184DC8), meshlist_00184DB0, matlist_00184D34, LengthOfArray(meshlist_00184DB0), LengthOfArray(matlist_00184D34),{ 0.000001f, 1.193644f, -3.749809f }, 15.96253f, NULL };

NJS_OBJECT object_00184EF8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00184ED0, -40.99688f, -9.501273f, 15.49158f, 0xFFFFEF62, 0x4CE4, 0xFFFFF776, 1, 1, 1, NULL, &object_00184D00 };

NJS_MATERIAL matlist_00184F2C[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, OBJ_SSTexName_st_slight01, NJD_D_375 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_00184F40[] = {
	14, 9, 13, 12, 16, 15, 2, 1, 3, 0, 7, 6, 10, 9, 13,
	14, 10, 14, 13, 17, 16, 5, 2, 4, 3, 8, 7, 11, 10, 14
};

NJS_TEX uv_00184F7C[] = {
	{ 17, 254 },
	{ 63, 127 },
	{ 72, 254 },
	{ 191, 127 },
	{ 182, 254 },
	{ 255, 127 },
	{ 237, 254 },
	{ 191, 127 },
	{ 182, 254 },
	{ 63, 127 },
	{ 72, 255 },
	{ 0, 127 },
	{ 17, 254 },
	{ 63, 127 },
	{ 0, 127 },
	{ 72, 0 },
	{ 63, 127 },
	{ 182, 0 },
	{ 191, 127 },
	{ 237, 0 },
	{ 255, 127 },
	{ 182, 0 },
	{ 191, 127 },
	{ 72, 0 },
	{ 63, 127 },
	{ 17, 0 },
	{ 0, 127 },
	{ 72, 0 }
};

NJS_MESHSET_SADX meshlist_00184FEC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00184F40, NULL, NULL, NULL, uv_00184F7C, NULL }
};

NJS_VECTOR vertex_00185004[] = {
	{ 19.99962f, -3.999954f, 34.64082f },
	{ 39.99963f, -3.999953f, -0.000183f },
	{ 46.39961f, 0.000047f, -0.000183f },
	{ 23.19962f, 0.000046f, 39.49056f },
	{ 19.99962f, 4.000046f, 34.64082f },
	{ 39.99963f, 4.000047f, -0.000183f },
	{ -20.00038f, -3.999955f, 34.64082f },
	{ -23.20037f, 0.000045f, 39.49056f },
	{ -20.00038f, 4.000045f, 34.64082f },
	{ -40.00036f, -3.999955f, -0.000193f },
	{ -46.40035f, 0.000045f, -0.000194f },
	{ -40.00036f, 4.000044f, -0.000193f },
	{ -20.00035f, -3.999954f, -34.64119f },
	{ -23.20034f, 0.000046f, -39.49093f },
	{ -20.00035f, 4.000046f, -34.64119f },
	{ 19.99965f, -3.999953f, -34.64118f },
	{ 23.19964f, 0.000047f, -39.49092f },
	{ 19.99965f, 4.000046f, -34.64118f }
};

NJS_VECTOR normal_001850DC[] = {
	{ 0.259718f, -0.8301679f, 0.493323f },
	{ 0.541533f, -0.840657f, -0.006103f },
	{ 1, 0, 0 },
	{ 0.5041659f, -0.008413999f, 0.863566f },
	{ 0.270402f, 0.822665f, 0.500105f },
	{ 0.541533f, 0.840657f, 0.006103f },
	{ -0.270402f, -0.822665f, 0.500105f },
	{ -0.5041659f, 0.008413999f, 0.863566f },
	{ -0.259719f, 0.8301679f, 0.493322f },
	{ -0.541533f, -0.840657f, 0.006103f },
	{ -1, 0, 0 },
	{ -0.541533f, 0.840657f, -0.006103f },
	{ -0.259718f, -0.8301679f, -0.493323f },
	{ -0.5041659f, -0.008413999f, -0.863566f },
	{ -0.270402f, 0.822665f, -0.500105f },
	{ 0.270402f, -0.822665f, -0.500105f },
	{ 0.5041659f, 0.008413999f, -0.863566f },
	{ 0.259719f, 0.8301679f, -0.493322f }
};

NJS_MODEL_SADX attach_001851B4 = { vertex_00185004, normal_001850DC, LengthOfArray(vertex_00185004), meshlist_00184FEC, matlist_00184F2C, LengthOfArray(meshlist_00184FEC), LengthOfArray(matlist_00184F2C),{ -0.000366f, 0.000046f, -0.000185f }, 60.8678f, NULL };

NJS_OBJECT object_001851DC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001851B4, -0.0009199999f, -16, 0, 0x82D8, 0x10000, 0x7FFF, 1, 1, 1, NULL, &object_00184EF8 };

NJS_MATERIAL matlist_00185210[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, OBJ_SSTexName_st_slight01, NJD_D_375 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_00185224[] = {
	14, 9, 13, 12, 16, 15, 2, 1, 3, 0, 7, 6, 10, 9, 13,
	14, 10, 14, 13, 17, 16, 5, 2, 4, 3, 8, 7, 11, 10, 14
};

NJS_TEX uv_00185260[] = {
	{ 17, 254 },
	{ 63, 127 },
	{ 72, 254 },
	{ 191, 127 },
	{ 182, 254 },
	{ 255, 127 },
	{ 237, 254 },
	{ 191, 127 },
	{ 182, 254 },
	{ 63, 127 },
	{ 72, 255 },
	{ 0, 127 },
	{ 17, 254 },
	{ 63, 127 },
	{ 0, 127 },
	{ 72, 0 },
	{ 63, 127 },
	{ 182, 0 },
	{ 191, 127 },
	{ 237, 0 },
	{ 255, 127 },
	{ 182, 0 },
	{ 191, 127 },
	{ 72, 0 },
	{ 63, 127 },
	{ 17, 0 },
	{ 0, 127 },
	{ 72, 0 }
};

NJS_MESHSET_SADX meshlist_001852D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00185224, NULL, NULL, NULL, uv_00185260, NULL }
};

NJS_VECTOR vertex_001852E8[] = {
	{ 19.99962f, -3.999954f, 34.64082f },
	{ 39.99963f, -3.999953f, -0.000183f },
	{ 46.39961f, 0.000047f, -0.000183f },
	{ 23.19962f, 0.000046f, 39.49056f },
	{ 19.99962f, 4.000046f, 34.64082f },
	{ 39.99963f, 4.000047f, -0.000183f },
	{ -20.00038f, -3.999955f, 34.64082f },
	{ -23.20037f, 0.000045f, 39.49056f },
	{ -20.00038f, 4.000045f, 34.64082f },
	{ -40.00036f, -3.999955f, -0.000193f },
	{ -46.40035f, 0.000045f, -0.000194f },
	{ -40.00036f, 4.000044f, -0.000193f },
	{ -20.00035f, -3.999954f, -34.64119f },
	{ -23.20034f, 0.000046f, -39.49093f },
	{ -20.00035f, 4.000046f, -34.64119f },
	{ 19.99965f, -3.999953f, -34.64118f },
	{ 23.19964f, 0.000047f, -39.49092f },
	{ 19.99965f, 4.000046f, -34.64118f }
};

NJS_VECTOR normal_001853C0[] = {
	{ 0.259718f, -0.8301679f, 0.493323f },
	{ 0.541533f, -0.840657f, -0.006103f },
	{ 1, 0, 0 },
	{ 0.5041659f, -0.008413999f, 0.863566f },
	{ 0.270402f, 0.822665f, 0.500105f },
	{ 0.541533f, 0.840657f, 0.006103f },
	{ -0.270402f, -0.822665f, 0.500105f },
	{ -0.5041659f, 0.008413999f, 0.863566f },
	{ -0.259719f, 0.8301679f, 0.493322f },
	{ -0.541533f, -0.840657f, 0.006103f },
	{ -1, 0, 0 },
	{ -0.541533f, 0.840657f, -0.006103f },
	{ -0.259718f, -0.8301679f, -0.493323f },
	{ -0.5041659f, -0.008413999f, -0.863566f },
	{ -0.270402f, 0.822665f, -0.500105f },
	{ 0.270402f, -0.822665f, -0.500105f },
	{ 0.5041659f, 0.008413999f, -0.863566f },
	{ 0.259719f, 0.8301679f, -0.493322f }
};

NJS_MODEL_SADX attach_00185498 = { vertex_001852E8, normal_001853C0, LengthOfArray(vertex_001852E8), meshlist_001852D0, matlist_00185210, LengthOfArray(meshlist_001852D0), LengthOfArray(matlist_00185210),{ -0.000366f, 0.000046f, -0.000185f }, 60.68172f, NULL };

NJS_OBJECT object_001854C0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00185498, -0.0009199999f, 4.000008f, 0, 0x7A4F, 0xFFFF0000, 0x7FFF, 1, 1, 1, NULL, &object_001851DC };

NJS_MATERIAL matlist_001854F4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_SSTexName_m32_tp2_009, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00185508[] = {
	0x8000u | 8, 5, 9, 4, 8, 3, 7, 2, 0,
	30, 6, 5, 10, 9, 14, 13, 18, 17, 22, 0, 27, 2, 28, 3, 29, 4, 30, 5, 31, 6, 1, 11, 16, 15, 20, 19, 24, 23, 28, 27,
	0x8000u | 6, 9, 13, 8, 12, 7, 0,
	4, 13, 12, 17, 0,
	4, 20, 21, 16, 1,
	0x8000u | 6, 24, 20, 25, 21, 26, 1,
	0x8000u | 10, 27, 22, 23, 18, 19, 14, 15, 10, 11, 6,
	0x8000u | 8, 28, 24, 29, 25, 30, 26, 31, 1
};

NJS_TEX uv_001855B0[] = {
	{ 237, 63 },
	{ 191, 127 },
	{ 255, 127 },
	{ 182, 191 },
	{ 237, 191 },
	{ 159, 237 },
	{ 191, 237 },
	{ 127, 255 },
	{ 191, 17 },
	{ 237, 63 },
	{ 182, 63 },
	{ 191, 127 },
	{ 63, 127 },
	{ 72, 191 },
	{ 17, 191 },
	{ 63, 237 },
	{ 95, 237 },
	{ 127, 255 },
	{ 159, 237 },
	{ 191, 237 },
	{ 182, 191 },
	{ 237, 191 },
	{ 191, 127 },
	{ 255, 127 },
	{ 182, 63 },
	{ 237, 63 },
	{ 159, 17 },
	{ 191, 17 },
	{ 127, 0 },
	{ 159, 17 },
	{ 95, 17 },
	{ 72, 63 },
	{ 17, 63 },
	{ 0, 127 },
	{ 63, 127 },
	{ 72, 191 },
	{ 182, 191 },
	{ 159, 237 },
	{ 191, 127 },
	{ 72, 191 },
	{ 182, 191 },
	{ 95, 237 },
	{ 159, 237 },
	{ 127, 255 },
	{ 72, 191 },
	{ 95, 237 },
	{ 63, 237 },
	{ 127, 255 },
	{ 17, 63 },
	{ 63, 17 },
	{ 95, 17 },
	{ 127, 0 },
	{ 63, 127 },
	{ 17, 63 },
	{ 72, 63 },
	{ 63, 17 },
	{ 95, 17 },
	{ 127, 0 },
	{ 159, 237 },
	{ 95, 237 },
	{ 72, 191 },
	{ 17, 191 },
	{ 0, 127 },
	{ 63, 127 },
	{ 72, 63 },
	{ 182, 63 },
	{ 159, 17 },
	{ 191, 17 },
	{ 182, 191 },
	{ 63, 127 },
	{ 191, 127 },
	{ 72, 63 },
	{ 182, 63 },
	{ 95, 17 },
	{ 159, 17 },
	{ 127, 0 }
};

NJS_MESHSET_SADX meshlist_001856E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00185508, NULL, NULL, NULL, uv_001855B0, NULL }
};

NJS_VECTOR vertex_001856F8[] = {
	{ 0.000265f, -30.00078f, -0.000714f },
	{ 0.000284f, 29.99921f, -0.000751f },
	{ 15.00027f, -25.98154f, -0.0007109999f },
	{ 25.9811f, -15.00079f, -0.000715f },
	{ 30.00027f, -0.0007879999f, -0.000723f },
	{ 25.98111f, 14.99921f, -0.000733f },
	{ 15.00028f, 25.97998f, -0.000744f },
	{ 7.50027f, -25.98155f, -12.99113f },
	{ 12.99069f, -15.0008f, -22.50072f },
	{ 15.00028f, -0.000799f, -25.98147f },
	{ 12.9907f, 14.9992f, -22.50074f },
	{ 7.500288f, 25.97997f, -12.99116f },
	{ -7.49973f, -25.98154f, -12.99114f },
	{ -12.99005f, -15.00079f, -22.50073f },
	{ -14.99972f, -0.00079f, -25.98148f },
	{ -12.99004f, 14.99921f, -22.50075f },
	{ -7.499712f, 25.97998f, -12.99117f },
	{ -14.99973f, -25.98153f, -0.000721f },
	{ -25.98047f, -15.00077f, -0.000731f },
	{ -29.99972f, -0.000768f, -0.0007419999f },
	{ -25.98046f, 14.99923f, -0.0007499999f },
	{ -14.99972f, 25.97999f, -0.000754f },
	{ -7.499738f, -25.98153f, 12.9897f },
	{ -12.99006f, -15.00076f, 22.49927f },
	{ -14.99973f, -0.0007569999f, 25.98f },
	{ -12.99005f, 14.99924f, 22.49925f },
	{ -7.499721f, 25.97999f, 12.98967f },
	{ 7.500262f, -25.98153f, 12.9897f },
	{ 12.99068f, -15.00077f, 22.49928f },
	{ 15.00027f, -0.000767f, 25.98002f },
	{ 12.99069f, 14.99923f, 22.49926f },
	{ 7.500279f, 25.97999f, 12.98967f }
};

NJS_VECTOR normal_00185878[] = {
	{ 0, -1, 0.000001f },
	{ 0, 1, -0.00001f },
	{ 0.55854f, -0.829478f, 0 },
	{ 0.8842f, -0.467109f, 0 },
	{ 1, 0, 0 },
	{ 0.8842f, 0.467109f, 0 },
	{ 0.55854f, 0.829478f, -0.00001f },
	{ 0.27927f, -0.829477f, -0.483711f },
	{ 0.4421f, -0.467109f, -0.765739f },
	{ 0.5f, -0.00001f, -0.866026f },
	{ 0.442101f, 0.467108f, -0.76574f },
	{ 0.27927f, 0.829476f, -0.483712f },
	{ -0.279271f, -0.829476f, -0.483711f },
	{ -0.442099f, -0.46711f, -0.76574f },
	{ -0.5f, 0, -0.866025f },
	{ -0.442098f, 0.467109f, -0.76574f },
	{ -0.279271f, 0.829476f, -0.483712f },
	{ -0.558542f, -0.829476f, 0.000001f },
	{ -0.884199f, -0.46711f, 0 },
	{ -1, 0, 0 },
	{ -0.884199f, 0.46711f, 0 },
	{ -0.558542f, 0.829476f, 0 },
	{ -0.279272f, -0.829475f, 0.483712f },
	{ -0.442099f, -0.467109f, 0.76574f },
	{ -0.500001f, 0.000001f, 0.866025f },
	{ -0.442099f, 0.46711f, 0.76574f },
	{ -0.279271f, 0.829476f, 0.483711f },
	{ 0.279269f, -0.829477f, 0.483712f },
	{ 0.4421f, -0.467108f, 0.76574f },
	{ 0.499999f, 0, 0.866026f },
	{ 0.4421f, 0.467109f, 0.765739f },
	{ 0.27927f, 0.829477f, 0.48371f }
};

NJS_MODEL_SADX attach_001859F8 = { vertex_001856F8, normal_00185878, LengthOfArray(vertex_001856F8), meshlist_001856E0, matlist_001854F4, LengthOfArray(meshlist_001856E0), LengthOfArray(matlist_001854F4),{ 0.000275f, -0.000784f, -0.000732f }, 39.68626f, NULL };

NJS_OBJECT object_00185A20 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001859F8, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_001854C0, NULL };

//elevator


NJS_MATERIAL matlist_0016C03C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_SSTexName_eledai01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_SSTexName_elehasirahaji02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0016C064[] = {
	5, 15, 18, 0, 16, 17,
	0x8000u | 5, 15, 14, 0, 13, 17
};

Sint16 poly_0016C07C[] = {
	4, 12, 7, 1, 6,
	4, 11, 12, 2, 1,
	4, 10, 11, 3, 2,
	4, 9, 10, 4, 3,
	4, 8, 9, 5, 4,
	4, 7, 8, 6, 5,
	4, 14, 13, 9, 10,
	4, 15, 14, 8, 9,
	4, 17, 16, 11, 12,
	4, 18, 15, 7, 8,
	4, 13, 17, 10, 11,
	4, 16, 18, 12, 7
};

NJS_TEX uv_0016C0F4[] = {
	{ 255, 127 },
	{ 191, 254 },
	{ 127, 127 },
	{ 63, 254 },
	{ 0, 127 },
	{ 255, 127 },
	{ 191, 0 },
	{ 127, 127 },
	{ 63, 0 },
	{ 0, 127 }
};

NJS_TEX uv_0016C11C[] = {
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 },
	{ 1267, 1 },
	{ 4, 0 },
	{ 1270, 254 },
	{ 4, 254 }
};

NJS_MESHSET_SADX meshlist_0016C1DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0016C064, NULL, NULL, NULL, uv_0016C0F4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_0016C07C, NULL, NULL, NULL, uv_0016C11C, NULL }
};

NJS_VECTOR vertex_0016C20C[] = {
	{ 0.000114f, 3, 0.00061f },
	{ 21.65081f, 0, -12.49924f },
	{ 0.000113f, 0, -24.99939f },
	{ -21.65052f, 0, -12.49939f },
	{ -21.65051f, 0, 12.50061f },
	{ 0.000122f, 0, 25.00061f },
	{ 21.65075f, 0, 12.5006f },
	{ 21.65081f, 3, 12.50076f },
	{ 0.000122f, 3, 25.00061f },
	{ -21.65051f, 3, 12.50061f },
	{ -21.6505f, 3, -12.49939f },
	{ 0.000113f, 3, -24.99939f },
	{ 21.65081f, 3, -12.49924f },
	{ -18.83594f, 3, -10.87447f },
	{ -18.83595f, 3, 10.87553f },
	{ 0.000106f, 3, 21.75053f },
	{ 18.8362f, 3, -10.87434f },
	{ 0.000099f, 3, -21.74947f },
	{ 18.8362f, 3, 10.87566f }
};

NJS_VECTOR normal_0016C2F0[] = {
	{ 0, 1, 0 },
	{ 0.866027f, 0, -0.499998f },
	{ 0.000002f, 0.000002f, -1 },
	{ -0.866026f, 0.000002f, -0.499999f },
	{ -0.866025f, 0, 0.5f },
	{ -0.00001f, -0.00032f, 1 },
	{ 0.86603f, -0.00032f, 0.499992f },
	{ 0.686246f, 0.609983f, 0.396217f },
	{ -0.00001f, 0.609979f, 0.7924179f },
	{ -0.686244f, 0.609994f, 0.396203f },
	{ -0.686243f, 0.6099949f, -0.396203f },
	{ 0.000002f, 0.6099949f, -0.7924049f },
	{ 0.686244f, 0.6099949f, -0.396201f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0016C3D4 = { vertex_0016C20C, normal_0016C2F0, LengthOfArray(vertex_0016C20C), meshlist_0016C1DC, matlist_0016C03C, LengthOfArray(meshlist_0016C1DC), LengthOfArray(matlist_0016C03C),{ 0.000143f, 1.5f, 0.00061f }, 33.07191f, NULL };

NJS_OBJECT object_0016C3FC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0016C3D4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
