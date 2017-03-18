# include <SADXModLoader.h>

enum GARDEN00SSOBJTexName
{
	GARDEN00SSOBJTexName_k32_bldoor3,
	GARDEN00SSOBJTexName_k32_bldoor1,
	GARDEN00SSOBJTexName_k32_bldoor2,
	GARDEN00SSOBJTexName_k32_bldoor4,
	GARDEN00SSOBJTexName_k32_eledoor3,
	GARDEN00SSOBJTexName_k32_pool01,
	GARDEN00SSOBJTexName_k32_racedoor1,
	GARDEN00SSOBJTexName_k32_racedoor3,
	GARDEN00SSOBJTexName_k64_racedoor1,
	GARDEN00SSOBJTexName_k128_racedoor1,
	GARDEN00SSOBJTexName_k128_bldoor1,
	GARDEN00SSOBJTexName_water_b00,
	GARDEN00SSOBJTexName_k64_bldoor2,
	GARDEN00SSOBJTexName_k64_bldoor1,
	GARDEN00SSOBJTexName_k64_eledoor3,
	GARDEN00SSOBJTexName_k64_eledoor1,
	GARDEN00SSOBJTexName_fountain01,
	GARDEN00SSOBJTexName_ast_hasi30,
	GARDEN00SSOBJTexName_ast_hasi31,
	GARDEN00SSOBJTexName_ast_kabe52,
	GARDEN00SSOBJTexName_ast_kabe55,
	GARDEN00SSOBJTexName_bst_enta,
	GARDEN00SSOBJTexName_cst_kaidan07,
	GARDEN00SSOBJTexName_gele_dis,
	GARDEN00SSOBJTexName_gele_yuka0,
	GARDEN00SSOBJTexName_gele_yuka1,
	GARDEN00SSOBJTexName_hotelelemado,
	GARDEN00SSOBJTexName_tra_yane1,
	GARDEN00SSOBJTexName_al_re30,
	GARDEN00SSOBJTexName_bst_shgc,
	GARDEN00SSOBJTexName_bst_shgd,
	GARDEN00SSOBJTexName_bst_shstf
};

//VMU Transporter

NJS_MATERIAL matlist_0018222C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182240[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_0018224C[] = {
	{ 254, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0018225C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00182240, NULL, NULL, NULL, uv_0018224C, NULL }
};

NJS_VECTOR vertex_00182274[] = {
	{ 4.571241f, -0.00013f, 3.889806f },
	{ 4.571241f, -0.00013f, -3.601878f },
	{ 0.000058f, -0.00013f, 3.889807f },
	{ 0.000058f, -0.00013f, -3.601878f }
};

NJS_VECTOR normal_001822A4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_001822D4 = { vertex_00182274, normal_001822A4, LengthOfArray(vertex_00182274), meshlist_0018225C, matlist_0018222C, LengthOfArray(meshlist_0018225C), LengthOfArray(matlist_0018222C),{ 2.285649f, -0.00013f, 0.143964f }, 4.388082f, NULL };

NJS_OBJECT object_001822FC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001822D4, -4.579999f, 4.579999f, -0.7600099f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00182330[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182344[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00182350[] = {
	{ 0 },
	{ 254, 0 },
	{ 0, 255 },
	{ 254, 255 }
};

NJS_MESHSET_SADX meshlist_00182360[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00182344, NULL, NULL, NULL, uv_00182350, NULL }
};

NJS_VECTOR vertex_00182378[] = {
	{ -4.431239f, -0.00015f, -3.601888f },
	{ -4.431239f, -0.00015f, 3.889796f },
	{ -0.002908f, -0.00015f, -3.601888f },
	{ -0.002908f, -0.00015f, 3.889796f }
};

NJS_VECTOR normal_001823A8[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_001823D8 = { vertex_00182378, normal_001823A8, LengthOfArray(vertex_00182378), meshlist_00182360, matlist_00182330, LengthOfArray(meshlist_00182360), LengthOfArray(matlist_00182330),{ -2.217073f, -0.00015f, 0.143954f }, 4.351306f, NULL };

NJS_OBJECT object_00182400 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001823D8, 4.420002f, 4.579999f, -0.7600099f, 0, 0, 0, 1, 1, 1, NULL, &object_001822FC };

NJS_MATERIAL matlist_00182434[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182448[] = {
	4, 3, 2, 0, 5,
	18, 7, 5, 4, 2, 1, 3, 6, 12, 15, 9, 16, 14, 13, 11, 10, 8, 7, 5,
	5, 14, 9, 0, 12, 3,
	0x8000u | 5, 14, 11, 0, 8, 5
};

NJS_TEX uv_00182490[] = {
	{ 216, 255 },
	{ 126, 255 },
	{ 127, 255 },
	{ 36, 255 },
	{ 0, 254 },
	{ 36, 0 },
	{ 36, 254 },
	{ 126, 0 },
	{ 126, 254 },
	{ 216, 0 },
	{ 216, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 218, 0 },
	{ 218, 254 },
	{ 128, 0 },
	{ 128, 254 },
	{ 38, 0 },
	{ 38, 254 },
	{ 0 },
	{ 0, 254 },
	{ 36, 0 },
	{ 128, 255 },
	{ 218, 255 },
	{ 127, 255 },
	{ 255, 255 },
	{ 216, 255 },
	{ 128, 255 },
	{ 38, 255 },
	{ 127, 255 },
	{ 0, 255 },
	{ 36, 255 }
};

NJS_MESHSET_SADX meshlist_00182510[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00182448, NULL, NULL, NULL, uv_00182490, NULL }
};

NJS_VECTOR vertex_00182528[] = {
	{ -0.022925f, 1.510836f, 0.005313f },
	{ -0.046877f, 0.042304f, -2.988351f },
	{ -0.046877f, 1.510836f, -2.988351f },
	{ 2.076976f, 1.510836f, -2.128464f },
	{ -2.156701f, 0.042304f, -2.094591f },
	{ -2.156701f, 1.510836f, -2.094591f },
	{ 2.076976f, 0.042304f, -2.128464f },
	{ -3.01659f, 0.042304f, 0.029266f },
	{ -3.01659f, 1.510836f, 0.029266f },
	{ 2.110853f, 1.510836f, 2.105216f },
	{ -2.122829f, 0.042304f, 2.13909f },
	{ -2.122829f, 1.510836f, 2.13909f },
	{ 2.970737f, 1.510836f, -0.01864f },
	{ 0.001026f, 0.042304f, 2.998977f },
	{ 0.001026f, 1.510836f, 2.998977f },
	{ 2.970737f, 0.042304f, -0.01864f },
	{ 2.110853f, 0.042304f, 2.105216f }
};

NJS_VECTOR normal_001825F4[] = {
	{ 0, 1, 0 },
	{ -0.007999999f, 0, -0.999968f },
	{ -0.006211f, 0.630262f, -0.776357f },
	{ 0.544575f, 0.630262f, -0.55336f },
	{ -0.712741f, 0, -0.701427f },
	{ -0.55336f, 0.630262f, -0.544575f },
	{ 0.701427f, 0, -0.712741f },
	{ -0.999968f, 0, 0.007999999f },
	{ -0.776357f, 0.630262f, 0.006211f },
	{ 0.55336f, 0.630262f, 0.544575f },
	{ -0.701427f, 0, 0.712741f },
	{ -0.544575f, 0.630262f, 0.55336f },
	{ 0.776357f, 0.630263f, -0.006212f },
	{ 0.007999999f, 0, 0.999968f },
	{ 0.006211f, 0.630263f, 0.776357f },
	{ 0.999968f, 0, -0.008002f },
	{ 0.712742f, 0, 0.701426f }
};

NJS_MODEL_SADX attach_001826C0 = { vertex_00182528, normal_001825F4, LengthOfArray(vertex_00182528), meshlist_00182510, matlist_00182434, LengthOfArray(meshlist_00182510), LengthOfArray(matlist_00182434),{ -0.022927f, 0.77657f, 0.005313f }, 4.233679f, NULL };

NJS_OBJECT object_001826E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001826C0, 0.003933f, 4.179999f, 5.605592f, 0, 0, 0, 1, 1, 1, NULL, &object_00182400 };

NJS_MATERIAL matlist_0018271C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018276C[] = {
	5, 2, 14, 15, 10, 11,
	0x8000u | 10, 14, 6, 2, 3, 15, 12, 11, 8, 0, 1,
	0x8000u | 7, 9, 8, 13, 12, 7, 3, 6
};

Sint16 poly_0018279E[] = {
	0x8000u | 8, 4, 5, 10, 9, 14, 13, 6, 7
};

Sint16 poly_001827B0[] = {
	4, 5, 9, 1, 8,
	4, 0, 11, 4, 10
};

Sint16 poly_001827C4[] = {
	4, 19, 18, 17, 16
};

NJS_TEX uv_001827D0[] = {
	{ 99, 0 },
	{ 31, 16 },
	{ 30, 15 },
	{ 0, 16 },
	{ 0, 16 },
	{ 31, 16 },
	{ 99, 0 },
	{ 99, 0 },
	{ 162, 0 },
	{ 30, 15 },
	{ 226, 15 },
	{ 0, 16 },
	{ 254, 16 },
	{ 0, 255 },
	{ 254, 255 },
	{ 255, 16 },
	{ 254, 16 },
	{ 226, 16 },
	{ 226, 15 },
	{ 162, 0 },
	{ 162, 0 },
	{ 99, 0 }
};

NJS_TEX uv_00182828[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 16 },
	{ 255, 16 },
	{ 30, 16 },
	{ 226, 16 },
	{ 99, 0 },
	{ 162, 0 }
};

NJS_TEX uv_00182848[] = {
	{ 242, 255 },
	{ 241, 15 },
	{ 255, 255 },
	{ 253, 16 },
	{ 255, 255 },
	{ 253, 16 },
	{ 236, 255 },
	{ 236, 16 }
};

NJS_TEX uv_00182868[] = {
	{ 254, 22 },
	{ 0, 22 },
	{ 254, 232 },
	{ 0, 232 }
};

NJS_MESHSET_SADX meshlist_00182878[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0018276C, NULL, NULL, NULL, uv_001827D0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0018279E, NULL, NULL, NULL, uv_00182828, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_001827B0, NULL, NULL, NULL, uv_00182848, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_001827C4, NULL, NULL, NULL, uv_00182868, NULL }
};

NJS_VECTOR vertex_001828D8[] = {
	{ -3.58036f, 0.103233f, 1.263858f },
	{ 3.450586f, 0.103233f, 1.296232f },
	{ -0.827839f, 10.52154f, 1.247598f },
	{ 0.897507f, 10.52154f, 1.283964f },
	{ -3.569649f, 0.103233f, -1.295031f },
	{ 3.461297f, 0.103233f, -1.262657f },
	{ -0.824573f, 10.51354f, -1.278827f },
	{ 0.9007739f, 10.51354f, -1.242454f },
	{ 3.450586f, 9.85397f, 1.296232f },
	{ 3.461297f, 9.85397f, -1.262657f },
	{ -3.569649f, 9.85397f, -1.295031f },
	{ -3.58036f, 9.85397f, 1.263858f },
	{ 2.665636f, 9.907307f, 1.283964f },
	{ 2.675844f, 9.852639f, -1.242454f },
	{ -2.715863f, 9.852639f, -1.278827f },
	{ -2.72607f, 9.907307f, 1.247598f },
	{ -2.348985f, 3.601702f, 1.242076f },
	{ 2.298824f, 3.601702f, 1.242076f },
	{ -2.348985f, 7.676956f, 1.242076f },
	{ 2.298824f, 7.676956f, 1.242076f }
};

NJS_VECTOR normal_001829C8[] = {
	{ -0.710208f, 0, 0.7039919f },
	{ 0.7039919f, 0, 0.710208f },
	{ -0.132962f, 0.732003f, 0.668201f },
	{ 0.113681f, 0.730369f, 0.673526f },
	{ -0.7039919f, 0, -0.710208f },
	{ 0.710208f, 0, -0.7039919f },
	{ -0.106118f, 0.7290429f, -0.676191f },
	{ 0.141197f, 0.731803f, -0.666729f },
	{ 0.582453f, 0.568622f, 0.580876f },
	{ 0.588434f, 0.567179f, -0.576242f },
	{ -0.58241f, 0.567383f, -0.5821289f },
	{ -0.5883999f, 0.566134f, 0.577302f },
	{ 0.11003f, 0.76037f, 0.640102f },
	{ 0.094701f, 0.9951479f, -0.026695f },
	{ -0.087297f, 0.995908f, -0.023356f },
	{ -0.113236f, 0.7634839f, 0.635822f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_00182AB8 = { vertex_001828D8, normal_001829C8, LengthOfArray(vertex_001828D8), meshlist_00182878, matlist_0018271C, LengthOfArray(meshlist_00182878), LengthOfArray(matlist_0018271C),{ -0.059532f, 5.312389f, 0.000601f }, 5.367865f, NULL };

NJS_OBJECT object_00182AE0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182AB8, 0.24f, 5.659997f, -6.539991f, 0, 0, 0, 1, 1, 1, NULL, &object_001826E8 };

NJS_OBJECT VMU_EC2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182AB8, 137.0f, 8.53f, -201.0f, 0xFFB0, 0xAFD6, 0xFFDE, 1, 1, 1, NULL, NULL };
NJS_OBJECT VMU_MR2 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182AB8, 246.0f, 21.03273f, -45.98477f, 0xFFDC, 0xC1A8, 0xFFF2, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00182B14[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 56, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00182BB4[] = {
	6, 0, 1, 25, 24, 3, 2
};

Sint16 poly_00182BC2[] = {
	18, 3, 4, 25, 23, 21, 9, 5, 10, 6, 13, 11, 17, 15, 20, 18, 14, 24, 2
};

Sint16 poly_00182BE8[] = {
	0x8000u | 12, 5, 8, 6, 7, 11, 12, 15, 16, 18, 19, 24, 1,
	0x8000u | 6, 25, 0, 21, 22, 5, 8
};

Sint16 poly_00182C10[] = {
	0x8000u | 8, 19, 16, 1, 12, 0, 7, 22, 8
};

Sint16 poly_00182C22[] = {
	4, 26, 29, 27, 33,
	0x8000u | 8, 32, 33, 31, 27, 30, 26, 28, 29,
	4, 31, 32, 30, 28
};

Sint16 poly_00182C48[] = {
	8, 34, 35, 36, 37, 40, 41, 38, 39,
	4, 41, 37, 39, 35,
	4, 36, 40, 34, 38,
	8, 42, 43, 44, 45, 48, 49, 46, 47,
	4, 49, 45, 47, 43,
	4, 44, 48, 42, 46
};

Sint16 poly_00182C94[] = {
	10, 52, 51, 53, 55, 57, 54, 56, 50, 52, 51
};

Sint16 poly_00182CAA[] = {
	4, 57, 56, 53, 52
};

NJS_TEX uv_00182CB4[] = {
	{ 522, -109 },
	{ -11, -109 },
	{ 509, 72 },
	{ 1, 72 },
	{ 509, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00182CCC[] = {
	{ 187, 255 },
	{ 187, 255 },
	{ 187, 72 },
	{ 254, 255 },
	{ 255, 72 },
	{ 254, 255 },
	{ 254, 72 },
	{ 200, 255 },
	{ 200, 72 },
	{ 57, 255 },
	{ 57, 72 },
	{ 0, 255 },
	{ 0, 72 },
	{ 0, 255 },
	{ 0, 72 },
	{ 71, 255 },
	{ 71, 72 },
	{ 71, 255 }
};

NJS_TEX uv_00182D14[] = {
	{ 368, 255 },
	{ 383, -254 },
	{ 703, 255 },
	{ 714, -254 },
	{ 1466, 255 },
	{ 1451, -254 },
	{ 1815, 255 },
	{ 1796, -254 },
	{ 2583, 255 },
	{ 2557, -254 },
	{ 3255, 255 },
	{ 3103, -254 },
	{ 4075, 255 },
	{ 4230, -254 },
	{ 4723, 255 },
	{ 4751, -254 },
	{ 5468, 255 },
	{ 5483, -254 }
};

NJS_TEX uv_00182D5C[] = {
	{ 0, 192 },
	{ 0, 42 },
	{ 58, 254 },
	{ 57, 0 },
	{ 200, 254 },
	{ 200, 0 },
	{ 255, 192 },
	{ 254, 42 }
};

NJS_TEX uv_00182D7C[] = {
	{ 23, 225 },
	{ 23, 29 },
	{ 23, 29 },
	{ 231, 29 },
	{ 231, 225 },
	{ 231, 29 },
	{ 231, 29 },
	{ 23, 29 },
	{ 231, 225 },
	{ 23, 225 },
	{ 23, 225 },
	{ 23, 29 },
	{ 231, 29 },
	{ 231, 225 },
	{ 231, 225 },
	{ 23, 225 }
};

NJS_TEX uv_00182DBC[] = {
	{ 32, 139 },
	{ 24, 139 },
	{ 31, 148 },
	{ 25, 148 },
	{ 31, 169 },
	{ 25, 169 },
	{ 32, 178 },
	{ 24, 178 },
	{ 25, 169 },
	{ 25, 148 },
	{ 24, 178 },
	{ 24, 139 },
	{ 31, 148 },
	{ 31, 169 },
	{ 32, 139 },
	{ 32, 178 },
	{ 228, 139 },
	{ 219, 139 },
	{ 226, 148 },
	{ 220, 148 },
	{ 226, 169 },
	{ 220, 169 },
	{ 228, 178 },
	{ 219, 178 },
	{ 220, 169 },
	{ 220, 148 },
	{ 219, 178 },
	{ 219, 139 },
	{ 226, 148 },
	{ 226, 169 },
	{ 228, 139 },
	{ 228, 178 }
};

NJS_TEX uv_00182E3C[] = {
	{ 165, 15 },
	{ 135, 71 },
	{ 165, 15 },
	{ 377, 71 },
	{ 354, 15 },
	{ 377, 71 },
	{ 354, 15 },
	{ 135, 71 },
	{ 165, 15 },
	{ 135, 71 }
};

NJS_TEX uv_00182E64[] = {
	{ 510, -250 },
	{ 510, 250 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_00182E74[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00182BB4, NULL, NULL, NULL, uv_00182CB4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00182BC2, NULL, NULL, NULL, uv_00182CCC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00182BE8, NULL, NULL, NULL, uv_00182D14, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00182C10, NULL, NULL, NULL, uv_00182D5C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00182C22, NULL, NULL, NULL, uv_00182D7C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 6, poly_00182C48, NULL, NULL, NULL, uv_00182DBC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_00182C94, NULL, NULL, NULL, uv_00182E3C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_00182CAA, NULL, NULL, NULL, uv_00182E64, NULL }
};

NJS_VECTOR vertex_00182F34[] = {
	{ 5.581468f, 4.897991f, 9.454219f },
	{ -5.520372f, 4.897991f, 9.486808f },
	{ -5.290025f, 0.019998f, 15.71851f },
	{ 5.315024f, 0.019998f, 15.67676f },
	{ 5.312943f, 0.019998f, 12.35245f },
	{ 11.50277f, 2.458995f, -6.718593f },
	{ 6.537178f, 2.458995f, -10.18581f },
	{ 5.557075f, 4.897991f, -8.673997f },
	{ 9.781916f, 4.897991f, -5.621979f },
	{ 11.48969f, 0.019998f, -6.718593f },
	{ 6.537178f, 0.019998f, -10.18581f },
	{ -6.545526f, 2.458995f, -10.15183f },
	{ -5.544765f, 4.897991f, -8.645158f },
	{ -6.545526f, 0.019998f, -10.15183f },
	{ -5.254424f, 0.019998f, 12.40403f },
	{ -11.79495f, 2.458995f, -6.718593f },
	{ -9.988307f, 4.897991f, -5.621979f },
	{ -11.80799f, 0.019998f, -6.718593f },
	{ -11.85066f, 2.458995f, 5.867009f },
	{ -10.04356f, 4.897991f, 5.048059f },
	{ -11.8543f, 0.019998f, 5.874115f },
	{ 11.53906f, 2.458995f, 5.831104f },
	{ 9.81463f, 4.897991f, 5.020354f },
	{ 11.52373f, 0.019998f, 5.834952f },
	{ -5.260424f, 2.458995f, 12.39467f },
	{ 5.321756f, 2.458995f, 12.34737f },
	{ -4.662725f, 0.55f, -5.302727f },
	{ -4.662725f, 0.55f, 3.822724f },
	{ -4.662725f, 4.85f, -5.302727f },
	{ -4.662725f, 4.85f, 3.822724f },
	{ 4.462726f, 0.55f, -5.302727f },
	{ 4.462726f, 0.55f, 3.822724f },
	{ 4.462726f, 4.85f, -5.302727f },
	{ 4.462726f, 4.85f, 3.822724f },
	{ 8.52959f, 4.878228f, 1.555988f },
	{ 9.310413f, 4.878228f, 1.555988f },
	{ 8.638906f, 6.846451f, 0.587074f },
	{ 9.201097f, 6.846451f, 0.587074f },
	{ 8.537047f, 4.878228f, -2.415192f },
	{ 9.302956f, 4.878228f, -2.415192f },
	{ 8.644276f, 6.846455f, -1.475477f },
	{ 9.195727f, 6.846455f, -1.475477f },
	{ -9.390406f, 4.878228f, 1.555988f },
	{ -8.609581f, 4.878228f, 1.555988f },
	{ -9.28109f, 6.846451f, 0.587074f },
	{ -8.718897f, 6.846451f, 0.587074f },
	{ -9.382947f, 4.878228f, -2.415192f },
	{ -8.61704f, 4.878228f, -2.415192f },
	{ -9.27572f, 6.846455f, -1.475477f },
	{ -8.724266f, 6.846455f, -1.475477f },
	{ -5.650205f, 4.919994f, -8.621586f },
	{ -5.650205f, 4.919994f, -4.418397f },
	{ -4.240005f, 6.440516f, -8.621586f },
	{ -4.240005f, 6.440516f, -4.418397f },
	{ 5.479925f, 4.919994f, -8.581435f },
	{ 5.479925f, 4.919994f, -4.458547f },
	{ 4.388003f, 6.44054f, -8.581435f },
	{ 4.388003f, 6.44054f, -4.458547f }
};

NJS_VECTOR normal_001831EC[] = {
	{ 0.237395f, 0.883458f, 0.403913f },
	{ -0.222217f, 0.887727f, 0.403187f },
	{ -0.375012f, 0.748981f, 0.546254f },
	{ 0.37482f, 0.7470829f, 0.548977f },
	{ 0.928765f, -0.002585f, 0.370659f },
	{ 0.841993f, 0.304336f, -0.445453f },
	{ 0.297967f, 0.289395f, -0.909652f },
	{ 0.141053f, 0.849877f, -0.507753f },
	{ 0.468858f, 0.8523009f, -0.23185f },
	{ 0.885851f, -0.005272f, -0.463941f },
	{ 0.299133f, -0.001611f, -0.95421f },
	{ -0.284771f, 0.297658f, -0.911211f },
	{ -0.130852f, 0.855168f, -0.501562f },
	{ -0.28654f, 0, -0.958068f },
	{ -0.925388f, 0.000328f, 0.379022f },
	{ -0.831695f, 0.319958f, -0.453773f },
	{ -0.452964f, 0.860019f, -0.234928f },
	{ -0.87885f, 0.00304f, -0.477088f },
	{ -0.876142f, 0.315559f, 0.364414f },
	{ -0.470549f, 0.861416f, 0.191169f },
	{ -0.9234779f, 0.004589f, 0.383624f },
	{ 0.884648f, 0.301916f, 0.35531f },
	{ 0.482076f, 0.856133f, 0.186116f },
	{ 0.928542f, -0.004019f, 0.371206f },
	{ -0.472075f, 0.573019f, 0.669921f },
	{ 0.485995f, 0.567848f, 0.664347f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.583825f, 0.384448f, 0.715086f },
	{ 0.5836729f, 0.384951f, 0.71494f },
	{ -0.586121f, 0.6930839f, 0.419639f },
	{ 0.585862f, 0.693401f, 0.419477f },
	{ -0.586886f, 0.374196f, -0.718013f },
	{ 0.586736f, 0.374706f, -0.717869f },
	{ -0.584162f, 0.6911229f, -0.425563f },
	{ 0.583906f, 0.69144f, -0.425399f },
	{ -0.583825f, 0.384448f, 0.715086f },
	{ 0.5836729f, 0.384951f, 0.71494f },
	{ -0.586121f, 0.6930839f, 0.419639f },
	{ 0.585862f, 0.693401f, 0.419477f },
	{ -0.586886f, 0.374196f, -0.718013f },
	{ 0.586736f, 0.374706f, -0.717869f },
	{ -0.584162f, 0.6911229f, -0.425563f },
	{ 0.583906f, 0.69144f, -0.425399f },
	{ -0.649052f, 0.601959f, -0.465164f },
	{ -0.647836f, 0.603937f, 0.464294f },
	{ -0.310046f, 0.7126369f, -0.629301f },
	{ -0.309117f, 0.714698f, 0.627418f },
	{ 0.697183f, 0.497201f, -0.516457f },
	{ 0.6959839f, 0.499794f, 0.51557f },
	{ 0.361528f, 0.698801f, -0.617231f },
	{ 0.360486f, 0.700904f, 0.615454f }
};

NJS_MODEL_SADX attach_001834A4 = { vertex_00182F34, normal_001831EC, LengthOfArray(vertex_00182F34), meshlist_00182E74, matlist_00182B14, LengthOfArray(meshlist_00182E74), LengthOfArray(matlist_00182B14),{ -0.157618f, 3.433227f, 2.766347f }, 17.45196f, NULL };

NJS_OBJECT object_001834CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001834A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00182AE0, NULL };

NJS_OBJECT VMU_SS = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001834A4, 178.03f, 8.56f, -128.44f, 0, 0xD7B8, 0, 1, 1, 1, NULL, NULL };
NJS_OBJECT VMU_EC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001834A4, 131.67f, 2.6f, -204.28f, 0xFFB0, 0xAFD6, 0xFFDE, 1, 1, 1, NULL, NULL };
NJS_OBJECT VMU_MR = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001834A4, 239.4137f, 15.10273f, -45.98477f, 0xFFDC, 0xC1A8, 0xFFF2, 1, 1, 1, NULL, NULL };

//Chao Race door

NJS_MATERIAL matlist_00011EC0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, GARDEN00SSOBJTexName_ast_hasi31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, GARDEN00SSOBJTexName_al_re30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00011EE8[] = {
	3, 0, 1, 2,
	4, 15, 13, 14, 12,
	6, 4, 3, 13, 0, 12, 2,
	3, 13, 5, 4,
	6, 11, 15, 9, 14, 6, 8,
	3, 9, 10, 11,
	3, 14, 7, 8
};

Sint16 poly_00011F2E[] = {
	4, 4, 1, 3, 0,
	4, 8, 10, 6, 9
};

NJS_TEX uv_00011F44[] = {
	{ 2244, 0 },
	{ 3060, 0 },
	{ 3060, 255 },
	{ 0 },
	{ 0, 254 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 0 },
	{ 816, 0 },
	{ 816, 255 },
	{ 2244, 0 },
	{ 2244, 255 },
	{ 3060, 255 },
	{ 816, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 816, 255 },
	{ 816, 0 },
	{ 2244, 255 },
	{ 2244, 0 },
	{ 3060, 0 },
	{ 816, 0 },
	{ 0 },
	{ 0, 255 },
	{ 2244, 255 },
	{ 3060, 255 },
	{ 3060, 0 }
};

NJS_TEX uv_00011FB4[] = {
	{ 765, 254 },
	{ 765, -1020 },
	{ 0, 254 },
	{ 0, -1020 },
	{ 765, -1020 },
	{ 765, 254 },
	{ 0, -1020 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_00011FD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00011EE8, NULL, NULL, NULL, uv_00011F44, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00011F2E, NULL, NULL, NULL, uv_00011FB4, NULL }
};

NJS_VECTOR vertex_00012004[] = {
	{ -16, 31.5f, 1.5f },
	{ 0, 31.5f, 1.5f },
	{ 0, 35, 1.5f },
	{ -16, 3.5f, 1.5f },
	{ 0, 3.5f, 1.5f },
	{ 0, 0, 1.5f },
	{ -16, 31.5f, -1.5f },
	{ 0, 35, -1.5f },
	{ 0, 31.5f, -1.5f },
	{ -16, 3.5f, -1.5f },
	{ 0, 3.5f, -1.5f },
	{ 0, 0, -1.5f },
	{ -20, 35, 1.5f },
	{ -20, 0, 1.5f },
	{ -20, 35, -1.5f },
	{ -20, 0, -1.5f }
};

NJS_VECTOR normal_000120C4[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_00012184 = { vertex_00012004, normal_000120C4, LengthOfArray(vertex_00012004), meshlist_00011FD4, matlist_00011EC0, LengthOfArray(meshlist_00011FD4), LengthOfArray(matlist_00011EC0),{ -10, 17.5f, 0 }, 17.56417f, NULL };

NJS_OBJECT object_000121AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00012184, -37, 0, -0.400024f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_000121E0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, GARDEN00SSOBJTexName_ast_hasi31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, GARDEN00SSOBJTexName_al_re30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00012208[] = {
	3, 0, 1, 2,
	4, 15, 13, 14, 12,
	6, 4, 3, 13, 0, 12, 2,
	3, 13, 5, 4,
	6, 11, 15, 9, 14, 6, 8,
	3, 9, 10, 11,
	3, 14, 7, 8
};

Sint16 poly_0001224E[] = {
	4, 4, 1, 3, 0,
	4, 8, 10, 6, 9
};

NJS_TEX uv_00012264[] = {
	{ 2244, 0 },
	{ 3060, 0 },
	{ 3060, 255 },
	{ 0 },
	{ 0, 254 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 0 },
	{ 816, 0 },
	{ 816, 255 },
	{ 2244, 0 },
	{ 2244, 255 },
	{ 3060, 255 },
	{ 816, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 816, 255 },
	{ 816, 0 },
	{ 2244, 255 },
	{ 2244, 0 },
	{ 3060, 0 },
	{ 816, 0 },
	{ 0 },
	{ 0, 255 },
	{ 2244, 255 },
	{ 3060, 255 },
	{ 3060, 0 }
};

NJS_TEX uv_000122D4[] = {
	{ 765, 254 },
	{ 765, -1020 },
	{ 0, 254 },
	{ 0, -1020 },
	{ 765, -1020 },
	{ 765, 254 },
	{ 0, -1020 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_000122F4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00012208, NULL, NULL, NULL, uv_00012264, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0001224E, NULL, NULL, NULL, uv_000122D4, NULL }
};

NJS_VECTOR vertex_00012324[] = {
	{ -16, 31.5f, 1.5f },
	{ 0, 31.5f, 1.5f },
	{ 0, 35, 1.5f },
	{ -16, 3.5f, 1.5f },
	{ 0, 3.5f, 1.5f },
	{ 0, 0, 1.5f },
	{ -16, 31.5f, -1.5f },
	{ 0, 35, -1.5f },
	{ 0, 31.5f, -1.5f },
	{ -16, 3.5f, -1.5f },
	{ 0, 3.5f, -1.5f },
	{ 0, 0, -1.5f },
	{ -20, 35, 1.5f },
	{ -20, 0, 1.5f },
	{ -20, 35, -1.5f },
	{ -20, 0, -1.5f }
};

NJS_VECTOR normal_000123E4[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_000124A4 = { vertex_00012324, normal_000123E4, LengthOfArray(vertex_00012324), meshlist_000122F4, matlist_000121E0, LengthOfArray(meshlist_000122F4), LengthOfArray(matlist_000121E0),{ -10, 17.5f, 0 }, 17.56417f, NULL };

NJS_OBJECT object_000124CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000124A4, 36, 0, -0.400024f, 0, 0, 0, 1, 1, 1, NULL, &object_000121AC };

NJS_MATERIAL matlist_00012500[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, GARDEN00SSOBJTexName_bst_shgc, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, GARDEN00SSOBJTexName_bst_shgd, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, GARDEN00SSOBJTexName_bst_shstf, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0001253C[] = {
	0x8000u | 8, 11, 10, 2, 0, 3, 1, 7, 6,
	0x8000u | 8, 22, 23, 17, 19, 16, 18, 26, 27
};

Sint16 poly_00012560[] = {
	0x8000u | 8, 10, 8, 0, 28, 1, 29, 6, 4,
	0x8000u | 8, 26, 24, 16, 12, 17, 13, 22, 20
};

Sint16 poly_00012584[] = {
	3, 4, 5, 30,
	3, 8, 28, 9,
	0x8000u | 6, 9, 31, 28, 14, 13, 20,
	3, 20, 21, 14,
	3, 24, 12, 25,
	0x8000u | 6, 25, 15, 12, 30, 29, 4,
	4, 28, 29, 13, 12
};

NJS_TEX uv_000125CC[] = {
	{ 0, 255 },
	{ 0 },
	{ 204, 255 },
	{ 204, 0 },
	{ 306, 255 },
	{ 306, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 306, 0 },
	{ 306, 255 },
	{ 204, 0 },
	{ 204, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0001260C[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 102, 255 },
	{ 102, -255 },
	{ 153, 255 },
	{ 153, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 102, 255 },
	{ 102, -255 },
	{ 153, 255 },
	{ 153, -255 },
	{ 255, 255 },
	{ 255, -255 }
};

NJS_TEX uv_0001264C[] = {
	{ 1530, 255 },
	{ 1530, 0 },
	{ 1275, 0 },
	{ 1530, 255 },
	{ 1275, 255 },
	{ 1530, 0 },
	{ 1530, 0 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 1530, 255 },
	{ 1019, 255 },
	{ 1019, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_000126BC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0001253C, NULL, NULL, NULL, uv_000125CC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00012560, NULL, NULL, NULL, uv_0001260C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 7, poly_00012584, NULL, NULL, NULL, uv_0001264C, NULL }
};

NJS_VECTOR vertex_00012704[] = {
	{ 20, 10, -2.900024f },
	{ 20, 10, 2.099976f },
	{ 20, 0, -2.900024f },
	{ 20, 0, 2.099976f },
	{ 30, 35, 2.099976f },
	{ 30, 40, 2.099976f },
	{ 30, 10, 2.099976f },
	{ 30, 0, 2.099976f },
	{ 30, 35, -2.900024f },
	{ 30, 40, -2.900024f },
	{ 30, 10, -2.900024f },
	{ 30, 0, -2.900024f },
	{ -20, 35, 2.099976f },
	{ -20, 35, -2.900024f },
	{ -20, 40, -2.900024f },
	{ -20, 40, 2.099976f },
	{ -20, 10, 2.099976f },
	{ -20, 10, -2.900024f },
	{ -20, 0, 2.099976f },
	{ -20, 0, -2.900024f },
	{ -30, 35, -2.900024f },
	{ -30, 40, -2.900024f },
	{ -30, 10, -2.900024f },
	{ -30, 0, -2.900024f },
	{ -30, 35, 2.099976f },
	{ -30, 40, 2.099976f },
	{ -30, 10, 2.099976f },
	{ -30, 0, 2.099976f },
	{ 20, 35, -2.900024f },
	{ 20, 35, 2.099976f },
	{ 20, 40, 2.099976f },
	{ 20, 40, -2.900024f }
};

NJS_VECTOR normal_00012884[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.301511f, -0.301511f, 0.904534f },
	{ 0.301511f, -0.301511f, -0.904534f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.301511f, -0.301511f, -0.904534f },
	{ -0.301511f, -0.301511f, 0.904534f },
	{ 0, 0, 1 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_00012A04 = { vertex_00012704, normal_00012884, LengthOfArray(vertex_00012704), meshlist_000126BC, matlist_00012500, LengthOfArray(meshlist_000126BC), LengthOfArray(matlist_00012500),{ 0, 20, -0.400024f }, 30.10399f, NULL };

NJS_OBJECT object_00012A2C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00012A04, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_000124CC, NULL };

//Chao Transporter

NJS_MATERIAL matlist_0017F478[] = {
	{ { 0xB2B2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017F48C[] = {
	4, 1, 8, 0, 9,
	4, 6, 3, 5, 4,
	0x8000u | 6, 3, 2, 6, 1, 7, 8
};

NJS_TEX uv_0017F4B0[] = {
	{ 510, 0 },
	{ 176, -255 },
	{ 461, -157 },
	{ 333, -255 },
	{ 0 },
	{ 333, 255 },
	{ 48, 157 },
	{ 176, 255 },
	{ 333, 255 },
	{ 461, 157 },
	{ 0 },
	{ 510, 0 },
	{ 48, -157 },
	{ 176, -255 }
};

NJS_MESHSET_SADX meshlist_0017F4E8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0017F48C, NULL, NULL, NULL, uv_0017F4B0, NULL }
};

NJS_VECTOR vertex_0017F500[] = {
	{ 9.510563f, 0.000546f, 6.909829f },
	{ 11.7557f, 0.000546f, 0 },
	{ 9.510565f, 0.000546f, -6.909829f },
	{ 3.632713f, 0.000546f, -11.18034f },
	{ -3.632712f, 0.000546f, -11.18034f },
	{ -9.510564f, 0.000546f, -6.90983f },
	{ -11.7557f, 0.000546f, 0 },
	{ -9.510564f, 0.000546f, 6.909828f },
	{ -3.632713f, 0.000546f, 11.18034f },
	{ 3.632711f, 0.000546f, 11.18034f }
};

NJS_VECTOR normal_0017F578[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0017F5F0 = { vertex_0017F500, normal_0017F578, LengthOfArray(vertex_0017F500), meshlist_0017F4E8, matlist_0017F478, LengthOfArray(meshlist_0017F4E8), LengthOfArray(matlist_0017F478),{ 0, 0.000546f, 0 }, 16.22333f, NULL };

NJS_OBJECT object_0017F618 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017F5F0, -0.00001f, 1.989849f, -0.489133f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017F64C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

NJS_MATERIAL matlist_0017F64C_EC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017F700[] = {
	10, 5, 3, 1, 2, 0, 6, 4, 7, 5, 3
};

Sint16 poly_0017F716[] = {
	5, 58, 13, 8, 18, 23,
	4, 58, 8, 53, 48,
	22, 57, 53, 52, 48, 47, 43, 42, 38, 37, 33, 32, 28, 27, 23, 22, 18, 17, 13, 12, 58, 57, 53,
	4, 33, 8, 28, 23,
	5, 33, 38, 8, 43, 48
};

Sint16 poly_0017F770[] = {
	0x8000u | 22, 40, 12, 41, 17, 45, 22, 46, 27, 50, 32, 51, 37, 30, 42, 31, 47, 35, 52, 36, 57, 40, 12
};

Sint16 poly_0017F79E[] = {
	6, 20, 54, 16, 9, 15, 14,
	6, 15, 45, 16, 41, 20, 40,
	6, 26, 31, 55, 30, 56, 51,
	6, 56, 29, 55, 34, 26, 39
};

Sint16 poly_0017F7D6[] = {
	8, 20, 40, 21, 36, 25, 35, 26, 31,
	4, 21, 49, 20, 54,
	4, 15, 14, 11, 19,
	6, 10, 50, 11, 46, 15, 45,
	4, 26, 39, 25, 44,
	0x8000u | 6, 29, 24, 56, 10, 51, 50
};

Sint16 poly_0017F822[] = {
	6, 49, 21, 60, 25, 59, 44
};

Sint16 poly_0017F830[] = {
	6, 10, 61, 24, 62, 19, 11,
	4, 62, 61, 11, 10
};

Sint16 poly_0017F848[] = {
	5, 84, 82, 81, 83, 84
};

Sint16 poly_0017F854[] = {
	0x8000u | 5, 69, 70, 63, 71, 64,
	5, 67, 66, 63, 65, 64,
	4, 69, 68, 63, 67,
	5, 78, 79, 72, 80, 73,
	0x8000u | 5, 76, 75, 72, 74, 73,
	4, 78, 72, 77, 76
};

NJS_TEX uv_0017F898[] = {
	{ 254, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 }
};

NJS_TEX uv_0017F8C0[] = {
	{ 201, 71 },
	{ 218, 127 },
	{ 127, 127 },
	{ 201, 183 },
	{ 155, 218 },
	{ 201, 71 },
	{ 127, 127 },
	{ 155, 36 },
	{ 99, 36 },
	{ 230, 48 },
	{ 155, 36 },
	{ 166, 0 },
	{ 99, 36 },
	{ 88, 0 },
	{ 53, 71 },
	{ 24, 48 },
	{ 36, 127 },
	{ 0, 127 },
	{ 53, 183 },
	{ 24, 206 },
	{ 99, 218 },
	{ 88, 255 },
	{ 155, 218 },
	{ 166, 255 },
	{ 201, 183 },
	{ 230, 206 },
	{ 218, 127 },
	{ 255, 127 },
	{ 201, 71 },
	{ 230, 48 },
	{ 155, 36 },
	{ 53, 183 },
	{ 127, 127 },
	{ 99, 218 },
	{ 155, 218 },
	{ 53, 183 },
	{ 36, 127 },
	{ 127, 127 },
	{ 53, 71 },
	{ 99, 36 }
};

NJS_TEX uv_0017F960[] = {
	{ 461, -157 },
	{ 478, 0 },
	{ 509, 0 },
	{ 435, 137 },
	{ 461, 157 },
	{ 323, 223 },
	{ 333, 255 },
	{ 186, 223 },
	{ 176, 255 },
	{ 74, 137 },
	{ 48, 157 },
	{ 31, 0 },
	{ 0 },
	{ 74, -137 },
	{ 48, -157 },
	{ 186, -223 },
	{ 176, -254 },
	{ 323, -223 },
	{ 333, -254 },
	{ 435, -137 },
	{ 461, -157 },
	{ 478, 0 }
};

NJS_TEX uv_0017F9B8[] = {
	{ 487, 101 },
	{ 510, 255 },
	{ 255, 101 },
	{ 255, 255 },
	{ 22, 101 },
	{ 0, 255 },
	{ 22, 101 },
	{ 83, 0 },
	{ 255, 101 },
	{ 255, 0 },
	{ 487, 101 },
	{ 426, 0 },
	{ 487, 101 },
	{ 426, 0 },
	{ 255, 101 },
	{ 255, 0 },
	{ 22, 101 },
	{ 83, 0 },
	{ 22, 101 },
	{ 0, 255 },
	{ 255, 101 },
	{ 255, 255 },
	{ 487, 101 },
	{ 510, 255 }
};

NJS_TEX uv_0017FA18[] = {
	{ 487, 101 },
	{ 426, 0 },
	{ 343, 101 },
	{ 320, 0 },
	{ 166, 101 },
	{ 189, 0 },
	{ 22, 101 },
	{ 83, 0 },
	{ 343, 101 },
	{ 352, 255 },
	{ 487, 101 },
	{ 509, 255 },
	{ 487, 101 },
	{ 509, 255 },
	{ 343, 101 },
	{ 352, 255 },
	{ 166, 101 },
	{ 189, 0 },
	{ 343, 101 },
	{ 320, 0 },
	{ 487, 101 },
	{ 426, 0 },
	{ 22, 101 },
	{ 0, 255 },
	{ 166, 101 },
	{ 157, 255 },
	{ 0, 255 },
	{ 157, 255 },
	{ 22, 101 },
	{ 166, 101 },
	{ 83, 0 },
	{ 189, 0 }
};

NJS_TEX uv_0017FA98[] = {
	{ 418, 253 },
	{ 506, 1 },
	{ 506, 253 },
	{ 3, 1 },
	{ 3, 253 },
	{ 83, 253 }
};

NJS_TEX uv_0017FAB0[] = {
	{ 22, 0 },
	{ 22, 0 },
	{ 0, 255 },
	{ 487, 0 },
	{ 510, 255 },
	{ 487, 0 },
	{ 487, 255 },
	{ 22, 255 },
	{ 487, 255 },
	{ 22, 255 }
};

NJS_TEX uv_0017FAD8[] = {
	{ 0 },
	{ 127, 255 },
	{ 127, 83 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_0017FAEC[] = {
	{ 251, 123 },
	{ 211, 219 },
	{ 131, 123 },
	{ 131, 251 },
	{ 35, 219 },
	{ 131, 3 },
	{ 35, 27 },
	{ 131, 123 },
	{ 3, 123 },
	{ 35, 219 },
	{ 251, 123 },
	{ 227, 27 },
	{ 131, 123 },
	{ 131, 3 },
	{ 3, 123 },
	{ 35, 219 },
	{ 131, 123 },
	{ 131, 251 },
	{ 211, 219 },
	{ 131, 3 },
	{ 211, 27 },
	{ 131, 123 },
	{ 251, 123 },
	{ 211, 219 },
	{ 3, 123 },
	{ 131, 123 },
	{ 35, 27 },
	{ 131, 3 }
};

NJS_MESHSET_SADX meshlist_0017FB5C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0017F700, NULL, NULL, NULL, uv_0017F898, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0017F770, NULL, NULL, NULL, uv_0017F960, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0017F79E, NULL, NULL, NULL, uv_0017F9B8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_0017F7D6, NULL, NULL, NULL, uv_0017FA18, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0017F822, NULL, NULL, NULL, uv_0017FA98, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0017F830, NULL, NULL, NULL, uv_0017FAB0, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_0017F848, NULL, NULL, NULL, uv_0017FAD8, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 6, poly_0017F854, NULL, NULL, NULL, uv_0017FAEC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0017F716, NULL, NULL, NULL, uv_0017F8C0, NULL }
};

NJS_VECTOR vertex_0017FC34[] = {
	{ -5.400001f, 0.005427f, -19.30284f },
	{ -5.400001f, 0.005427f, -18.07178f },
	{ -5.400001f, 0.998898f, -19.30284f },
	{ -5.400001f, 0.998898f, -18.07178f },
	{ 5.399999f, 0.005427f, -19.30284f },
	{ 5.399999f, 0.005427f, -18.07178f },
	{ 5.399999f, 0.998898f, -19.30284f },
	{ 5.399999f, 0.998898f, -18.07178f },
	{ -0.00001f, -1.943187f, -0.489133f },
	{ 20, -3.000013f, -0.489133f },
	{ -5.629277f, 0.005405f, -17.81427f },
	{ 5.629277f, 0.005405f, -17.81426f },
	{ 11.7557f, 1.990395f, -0.489133f },
	{ 8.405252f, -0.124623f, -0.489133f },
	{ 16.18034f, -3.000013f, -12.24484f },
	{ 14.73764f, 0.005406f, -11.19665f },
	{ 18.21673f, 0.005405f, -0.489133f },
	{ 9.510564f, 1.990395f, -7.398962f },
	{ 6.799993f, -0.124623f, -5.429617f },
	{ 6.180339f, -3.000013f, -19.51026f },
	{ 14.73764f, 0.005405f, 10.21839f },
	{ 5.629273f, 0.005405f, 16.836f },
	{ 3.632712f, 1.990395f, -11.66947f },
	{ 2.597366f, -0.124623f, -8.483006f },
	{ -6.18034f, -3.000013f, -19.51026f },
	{ -5.629281f, 0.005405f, 16.836f },
	{ -14.73764f, 0.005405f, 10.21839f },
	{ -3.632713f, 1.990395f, -11.66947f },
	{ -2.597367f, -0.124623f, -8.483006f },
	{ -16.18034f, -3.000013f, -12.24484f },
	{ -13.43397f, 1.990354f, -0.489134f },
	{ -10.86831f, 1.990354f, 7.407156f },
	{ -9.510565f, 1.990395f, -7.398962f },
	{ -6.799994f, -0.124623f, -5.429618f },
	{ -20, -3.000013f, -0.489134f },
	{ -4.151327f, 1.990354f, 12.28733f },
	{ 4.151323f, 1.990354f, 12.28733f },
	{ -11.7557f, 1.990395f, -0.489133f },
	{ -8.405254f, -0.124623f, -0.489134f },
	{ -16.18034f, -3.000013f, 11.26657f },
	{ 10.86831f, 1.990354f, 7.407157f },
	{ 13.43397f, 1.990354f, -0.489133f },
	{ -9.510565f, 1.990395f, 6.420695f },
	{ -6.799994f, -0.124623f, 4.451351f },
	{ -6.18034f, -3.000013f, 18.53199f },
	{ 10.86831f, 1.990354f, -8.385422f },
	{ 4.151325f, 1.990354f, -13.2656f },
	{ -3.632714f, 1.990395f, 10.6912f },
	{ -2.597369f, -0.124623f, 7.504741f },
	{ 6.180337f, -3.000013f, 18.53199f },
	{ -4.151326f, 1.990354f, -13.2656f },
	{ -10.86831f, 1.990354f, -8.385424f },
	{ 3.63271f, 1.990395f, 10.6912f },
	{ 2.597364f, -0.124623f, 7.504742f },
	{ 16.18034f, -3.000013f, 11.26657f },
	{ -18.21673f, 0.005405f, -0.489134f },
	{ -14.73764f, 0.005405f, -11.19666f },
	{ 9.510562f, 1.990395f, 6.420696f },
	{ 6.799991f, -0.124623f, 4.451353f },
	{ -6.18034f, -3.000013f, 20.51084f },
	{ 6.180337f, -3.000013f, 20.51084f },
	{ -5.629277f, 0.005405f, -19.51028f },
	{ 5.629277f, 0.005405f, -19.51028f },
	{ -14.89327f, 0.756472f, 10.31019f },
	{ -16.13845f, -0.906538f, 9.464932f },
	{ -15.56342f, -0.048465f, 8.332362f },
	{ -14.30084f, 0.816615f, 8.153271f },
	{ -13.09031f, 1.181951f, 9.032563f },
	{ -12.64094f, 0.8335339f, 10.45517f },
	{ -13.21597f, -0.024538f, 11.58774f },
	{ -14.47855f, -0.889618f, 11.76683f },
	{ -15.68908f, -1.254954f, 10.88753f },
	{ 14.89327f, 0.756472f, 10.31019f },
	{ 16.13845f, -0.906538f, 9.464931f },
	{ 15.56342f, -0.048465f, 8.332362f },
	{ 14.30084f, 0.816615f, 8.153271f },
	{ 13.0903f, 1.181952f, 9.032564f },
	{ 12.64094f, 0.8335339f, 10.45517f },
	{ 13.21597f, -0.024538f, 11.58774f },
	{ 14.47855f, -0.889618f, 11.76683f },
	{ 15.68908f, -1.254954f, 10.88753f },
	{ 0, 1.974902f, 14.45435f },
	{ 0, 0.135546f, 16.50183f },
	{ 2.261282f, 1.69731f, 12.91003f },
	{ -2.261283f, 1.697309f, 12.91003f }
};

NJS_VECTOR normal_00180030[] = {
	{ -0.262998f, 0.02485f, -0.964476f },
	{ -0.2791f, 0.026372f, -0.9599f },
	{ -0.262376f, 0.073062f, -0.962196f },
	{ -0.278357f, 0.077512f, -0.9573449f },
	{ 0.262998f, 0.02485f, -0.964476f },
	{ 0.2791f, 0.026372f, -0.9599f },
	{ 0.262376f, 0.073062f, -0.962196f },
	{ 0.278357f, 0.077512f, -0.9573449f },
	{ 0, 1, 0 },
	{ 0.860005f, 0.510286f, 0 },
	{ -0.381816f, 0.8483199f, -0.366836f },
	{ 0.381816f, 0.848321f, -0.366836f },
	{ 0.9749089f, 0.206929f, -0.082053f },
	{ -0.407391f, 0.913254f, 0 },
	{ 0.695758f, 0.510286f, -0.505498f },
	{ 0.556693f, 0.725606f, -0.404461f },
	{ 0.6881109f, 0.725606f, 0 },
	{ 0.754059f, 0.197836f, -0.626303f },
	{ -0.329587f, 0.913254f, 0.239459f },
	{ 0.437477f, 0.28135f, -0.854082f },
	{ 0.556693f, 0.725606f, 0.404462f },
	{ 0.267448f, 0.7883f, 0.554126f },
	{ 0.280666f, 0.192782f, -0.940246f },
	{ -0.125891f, 0.913254f, 0.387452f },
	{ -0.437477f, 0.28135f, -0.854082f },
	{ -0.267448f, 0.788299f, 0.554126f },
	{ -0.556693f, 0.725606f, 0.404461f },
	{ -0.280667f, 0.192782f, -0.940246f },
	{ 0.125891f, 0.913254f, 0.387452f },
	{ -0.695758f, 0.510286f, -0.505498f },
	{ -0.980617f, 0.182135f, -0.07222299f },
	{ -0.828578f, 0.190226f, 0.526566f },
	{ -0.754059f, 0.197836f, -0.626303f },
	{ 0.329587f, 0.913254f, 0.239459f },
	{ -0.860005f, 0.510286f, 0 },
	{ -0.325763f, 0.195801f, 0.924954f },
	{ 0.325763f, 0.195801f, 0.924954f },
	{ -0.9749089f, 0.206929f, -0.082053f },
	{ 0.407391f, 0.913254f, 0 },
	{ -0.695759f, 0.510286f, 0.505498f },
	{ 0.828578f, 0.190226f, 0.526566f },
	{ 0.980617f, 0.182135f, -0.07222299f },
	{ -0.828642f, 0.217404f, 0.515837f },
	{ 0.329587f, 0.913254f, -0.239459f },
	{ -0.884343f, 0.341668f, 0.31812f },
	{ 0.76224f, 0.174996f, -0.623191f },
	{ 0.284472f, 0.170982f, -0.943314f },
	{ -0.327182f, 0.224732f, 0.91785f },
	{ 0.125891f, 0.913254f, -0.387452f },
	{ 0.884343f, 0.341669f, 0.31812f },
	{ -0.284472f, 0.170982f, -0.943314f },
	{ -0.76224f, 0.174996f, -0.623191f },
	{ 0.327182f, 0.224732f, 0.91785f },
	{ -0.125891f, 0.913254f, -0.387452f },
	{ 0.695759f, 0.510286f, 0.505498f },
	{ -0.6881109f, 0.725606f, 0 },
	{ -0.556693f, 0.725606f, -0.404461f },
	{ 0.828642f, 0.217404f, 0.515837f },
	{ -0.329587f, 0.913254f, -0.239459f },
	{ -0.40198f, 0.737412f, 0.542803f },
	{ 0.40198f, 0.737412f, 0.542803f },
	{ -0.51805f, 0.621672f, -0.587492f },
	{ 0.51805f, 0.621672f, -0.587492f },
	{ -0.496478f, 0.794081f, 0.350634f },
	{ -0.830568f, 0.518232f, 0.203941f },
	{ -0.702741f, 0.709637f, -0.050697f },
	{ -0.422457f, 0.901814f, -0.09088799f },
	{ -0.156073f, 0.981958f, 0.106767f },
	{ -0.058204f, 0.903883f, 0.423803f },
	{ -0.183555f, 0.712901f, 0.676816f },
	{ -0.46181f, 0.5197009f, 0.718778f },
	{ -0.730682f, 0.439136f, 0.522746f },
	{ 0.496478f, 0.794081f, 0.350634f },
	{ 0.830568f, 0.518232f, 0.203941f },
	{ 0.702741f, 0.709637f, -0.050697f },
	{ 0.422457f, 0.901814f, -0.09088799f },
	{ 0.156073f, 0.981958f, 0.106767f },
	{ 0.058204f, 0.903882f, 0.423803f },
	{ 0.183555f, 0.712901f, 0.676816f },
	{ 0.46181f, 0.5197009f, 0.718778f },
	{ 0.730682f, 0.439136f, 0.522746f },
	{ 0, 0.174964f, 0.984575f },
	{ 0, 0.039986f, 0.9992f },
	{ 0.176596f, 0.171975f, 0.969143f },
	{ -0.176596f, 0.171975f, 0.969143f }
};

NJS_MODEL_SADX attach_0018042C = { vertex_0017FC34, normal_00180030, LengthOfArray(vertex_0017FC34), meshlist_0017FB5C, matlist_0017F64C, LengthOfArray(meshlist_0017FB5C), LengthOfArray(matlist_0017F64C),{ 0, -0.504809f, 0.500281f }, 28.29174f, NULL };

NJS_MODEL_SADX attach_0018042C_EC = { vertex_0017FC34, normal_00180030, LengthOfArray(vertex_0017FC34), meshlist_0017FB5C, matlist_0017F64C_EC, LengthOfArray(meshlist_0017FB5C), LengthOfArray(matlist_0017F64C_EC),{ 0, -0.504809f, 0.500281f }, 28.29174f, NULL };

NJS_OBJECT object_00180454_EC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0018042C_EC, 0.000001f, 3.000014f, 0.489133f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00180454 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0018042C, 0.000001f, 3.000014f, 0.489133f, 0, 0, 0, 1, 1, 1, &object_0017F618, NULL };

//Palm tree

NJS_MATERIAL matlist_0017AAFC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017AB24[] = {
	0x8000u | 7, 35, 23, 34, 13, 33, 12, 11,
	0x8000u | 7, 17, 16, 25, 15, 26, 14, 27,
	3, 17, 24, 25,
	3, 29, 28, 4,
	3, 3, 28, 29,
	0x8000u | 7, 31, 22, 30, 6, 29, 5, 4,
	7, 31, 0, 30, 1, 29, 2, 3,
	0x8000u | 7, 10, 9, 33, 8, 34, 7, 35,
	3, 10, 32, 33,
	3, 33, 32, 11
};

Sint16 poly_0017AB9C[] = {
	3, 25, 24, 18,
	0x8000u | 7, 27, 21, 26, 20, 25, 19, 18
};

NJS_TEX uv_0017ABB4[] = {
	{ 255, -1020 },
	{ 0, -1020 },
	{ 255, -584 },
	{ 0, -691 },
	{ 255, -230 },
	{ 0, -224 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -161 },
	{ 255, -327 },
	{ 0, -603 },
	{ 255, -596 },
	{ 0, -1020 },
	{ 255, -1020 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -327 },
	{ 255, -332 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -214 },
	{ 255, -1020 },
	{ 0, -1020 },
	{ 255, -605 },
	{ 0, -620 },
	{ 255, -332 },
	{ 0, -204 },
	{ 0, 255 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, -433 },
	{ 0, -412 },
	{ 255, -214 },
	{ 0, -89 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -110 },
	{ 255, -133 },
	{ 0, -461 },
	{ 255, -416 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -133 },
	{ 255, -230 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0017AC7C[] = {
	{ 255, -211 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, -425 },
	{ 0, -399 },
	{ 255, -211 },
	{ 0, -62 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0017ACA4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_0017AB24, NULL, NULL, NULL, uv_0017ABB4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0017AB9C, NULL, NULL, NULL, uv_0017AC7C, NULL }
};

NJS_VECTOR vertex_0017ACD4[] = {
	{ 1.009862f, -1.799998f, -1.313162f },
	{ 2.375554f, 2.175308f, -6.255261f },
	{ 2.698402f, 2.753433f, -12.16774f },
	{ 0.357799f, -0.267811f, -18.28147f },
	{ -1.823562f, -0.267811f, -18.03982f },
	{ -4.002803f, 2.753433f, -12.0596f },
	{ -3.877275f, 2.175308f, -6.25108f },
	{ -0.552074f, -1.750473f, -1.934002f },
	{ -3.35429f, 1.77668f, -5.247224f },
	{ -9.203005f, -1.124865f, -10.02859f },
	{ -12.20727f, -5.711759f, -10.76636f },
	{ -14.18141f, -5.711759f, -8.299939f },
	{ -12.66358f, -1.124865f, -5.457894f },
	{ -6.314793f, 1.77668f, -1.251554f },
	{ 2.417383f, -1.504484f, 0.462668f },
	{ 8.231419f, 1.050778f, -1.299824f },
	{ 14.13765f, -1.36757f, -5.018456f },
	{ 16.18143f, -6.252474f, -8.842936f },
	{ 14.42863f, -6.325585f, -11.24757f },
	{ 10.65397f, -1.486989f, -10.82905f },
	{ 4.604602f, 0.924469f, -7.270138f },
	{ -0.132273f, -0.053253f, -3.424208f },
	{ -2.239205f, 0.187027f, -1.289428f },
	{ -2.603281f, -0.021011f, 0.751038f },
	{ 18.17366f, -7.177062f, -11.41052f },
	{ 11.94286f, 5.273566f, -7.60741f },
	{ 4.300544f, 6.162517f, -3.149935f },
	{ -1.007324f, -1.501788f, 0.395799f },
	{ -1.016865f, -0.695786f, -20.32654f },
	{ -0.351285f, 6.319839f, -10.09847f },
	{ -0.503682f, 5.741714f, -4.350752f },
	{ -0.467292f, -0.805161f, 1.068178f },
	{ -14.16506f, -6.426254f, -10.50239f },
	{ -10.03762f, 1.870958f, -7.249401f },
	{ -4.834542f, 4.772503f, -3.249389f },
	{ 0.050736f, -0.887192f, 0.9053169f }
};

NJS_VECTOR normal_0017AE84[] = {
	{ 0.836513f, 0.340722f, 0.429132f },
	{ 0.811005f, 0.5091529f, 0.288157f },
	{ 0.624015f, 0.7156529f, -0.313762f },
	{ 0.523854f, 0.6851169f, -0.5061539f },
	{ -0.6715699f, 0.6266609f, -0.395334f },
	{ -0.576557f, 0.758011f, -0.304961f },
	{ -0.757666f, 0.612826f, 0.224471f },
	{ 0.827076f, 0.48607f, -0.282278f },
	{ 0.5962369f, 0.639184f, -0.485741f },
	{ -0.333517f, 0.5895489f, -0.735662f },
	{ -0.331182f, 0.473347f, -0.816248f },
	{ -0.847488f, 0.491058f, -0.201557f },
	{ -0.782102f, 0.610324f, -0.125784f },
	{ -0.418105f, 0.656788f, 0.627549f },
	{ 0.020553f, 0.422016f, 0.906355f },
	{ 0.366969f, 0.498538f, 0.7853619f },
	{ 0.865595f, 0.402299f, 0.29816f },
	{ 0.849925f, 0.263648f, 0.456197f },
	{ 0.09293699f, 0.316212f, -0.944125f },
	{ 0.125665f, 0.407151f, -0.9046749f },
	{ -0.446583f, 0.5036989f, -0.739493f },
	{ -0.792776f, 0.5743729f, -0.203966f },
	{ -0.622654f, 0.51785f, 0.58663f },
	{ 0.111601f, 0.666841f, 0.736796f },
	{ 0.733679f, 0.505771f, -0.453774f },
	{ 0.43006f, 0.864996f, -0.258517f },
	{ -0.2719f, 0.947265f, 0.169589f },
	{ -0.453015f, 0.6131369f, 0.6471789f },
	{ -0.061797f, 0.824945f, -0.561824f },
	{ 0.049701f, 0.988289f, -0.144273f },
	{ 0.043786f, 0.886851f, 0.459975f },
	{ 0.479748f, 0.5610369f, 0.674595f },
	{ -0.648662f, 0.534927f, -0.541378f },
	{ -0.41894f, 0.841824f, -0.340325f },
	{ 0.106387f, 0.9927509f, 0.055928f },
	{ 0.727f, 0.6825359f, 0.074939f }
};

NJS_MODEL_SADX attach_0017B034 = { vertex_0017ACD4, normal_0017AE84, LengthOfArray(vertex_0017ACD4), meshlist_0017ACA4, matlist_0017AAFC, LengthOfArray(meshlist_0017ACA4), LengthOfArray(matlist_0017AAFC),{ 1.996127f, -0.428611f, -9.629182f }, 19.39449f, NULL };

NJS_OBJECT object_0017B05C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017B034, 0.663278f, 30.52f, -0.831655f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017B090[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017B0B8[] = {
	0x8000u | 7, 24, 23, 33, 22, 34, 21, 35,
	3, 24, 32, 33,
	3, 37, 36, 4,
	3, 3, 36, 37,
	0x8000u | 7, 39, 29, 38, 6, 37, 5, 4,
	7, 39, 0, 38, 1, 37, 2, 3,
	0x8000u | 7, 10, 9, 41, 8, 42, 7, 43,
	0x8000u | 7, 17, 16, 44, 15, 46, 14, 47,
	3, 41, 40, 11,
	3, 10, 40, 41,
	0x8000u | 7, 43, 30, 42, 13, 41, 12, 11,
	3, 44, 45, 18,
	3, 17, 45, 44,
	0x8000u | 7, 47, 31, 46, 20, 44, 19, 18
};

Sint16 poly_0017B160[] = {
	3, 33, 32, 25,
	0x8000u | 7, 35, 28, 34, 27, 33, 26, 25
};

NJS_TEX uv_0017B178[] = {
	{ 0, 255 },
	{ 0, -161 },
	{ 255, -327 },
	{ 0, -603 },
	{ 255, -596 },
	{ 0, -1020 },
	{ 255, -1020 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -327 },
	{ 255, -332 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -214 },
	{ 255, -1020 },
	{ 0, -1020 },
	{ 255, -605 },
	{ 0, -620 },
	{ 255, -332 },
	{ 0, -204 },
	{ 0, 255 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, -433 },
	{ 0, -412 },
	{ 255, -214 },
	{ 0, -89 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -110 },
	{ 255, -133 },
	{ 0, -461 },
	{ 255, -416 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, 255 },
	{ 0, -218 },
	{ 255, -236 },
	{ 0, -653 },
	{ 255, -684 },
	{ 0, -1020 },
	{ 255, -1020 },
	{ 255, -230 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -133 },
	{ 255, -1020 },
	{ 0, -1020 },
	{ 255, -584 },
	{ 0, -691 },
	{ 255, -230 },
	{ 0, -224 },
	{ 0, 255 },
	{ 255, -138 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -236 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, -496 },
	{ 0, -502 },
	{ 255, -138 },
	{ 0, -141 },
	{ 0, 255 }
};

NJS_TEX uv_0017B290[] = {
	{ 255, -211 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, -425 },
	{ 0, -399 },
	{ 255, -211 },
	{ 0, -62 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0017B2B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_0017B0B8, NULL, NULL, NULL, uv_0017B178, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0017B160, NULL, NULL, NULL, uv_0017B290, NULL }
};

NJS_VECTOR vertex_0017B2E8[] = {
	{ -1.638744f, -1.799998f, 0.242346f },
	{ -6.055412f, 2.175308f, 2.846674f },
	{ -10.39665f, 2.753433f, 6.873487f },
	{ -12.96269f, -0.267811f, 12.89608f },
	{ -11.22631f, -0.267811f, 14.23835f },
	{ -5.503201f, 2.753433f, 11.453f },
	{ -1.556596f, 2.175308f, 7.189317f },
	{ -0.947158f, -1.750473f, 1.774272f },
	{ -1.234962f, 1.77668f, 6.104055f },
	{ -0.352616f, -1.124865f, 13.60675f },
	{ 1.29477f, -5.711759f, 16.22516f },
	{ 4.428347f, -5.711759f, 15.82375f },
	{ 5.312188f, -1.124865f, 12.72539f },
	{ 3.670647f, 1.77668f, 5.288606f },
	{ 1.230341f, -0.984848f, 1.925579f },
	{ 3.468651f, 1.99708f, 4.588198f },
	{ 7.524436f, 1.654709f, 7.980843f },
	{ 13.10933f, -1.480942f, 10.50546f },
	{ 14.68786f, -1.480942f, 8.399932f },
	{ 10.64536f, 1.654709f, 2.980111f },
	{ 6.081446f, 1.99708f, 0.345045f },
	{ -2.08118f, -1.671571f, -1.093531f },
	{ -8.338992f, 0.390152f, -0.926756f },
	{ -14.80525f, -2.561762f, 1.081689f },
	{ -17.39018f, -7.681841f, 4.207225f },
	{ -16.33489f, -7.681841f, 6.990439f },
	{ -12.98247f, -2.561762f, 7.607847f },
	{ -6.420277f, 0.390152f, 5.791348f },
	{ -0.773269f, -0.128709f, 3.336318f },
	{ 0.7138939f, 0.187027f, 2.483348f },
	{ 2.393775f, -0.021011f, 1.26924f },
	{ 2.525756f, 0.5073389f, -0.39343f },
	{ -19.90958f, -8.818911f, 6.150429f },
	{ -13.90976f, 4.159943f, 4.186721f },
	{ -5.54673f, 5.737602f, 1.645311f },
	{ 1.192635f, -1.410629f, -0.120316f },
	{ -13.39559f, -0.695786f, 15.3219f },
	{ -6.765751f, 6.319839f, 7.505145f },
	{ -2.661568f, 5.741714f, 3.478331f },
	{ 1.078364f, -0.805161f, -0.443279f },
	{ 2.885915f, -6.426254f, 17.39599f },
	{ 2.178997f, 1.870958f, 12.1885f },
	{ 1.217842f, 4.772503f, 5.696331f },
	{ 0.592706f, -0.887192f, -0.686202f },
	{ 9.084895f, 5.791798f, 5.480476f },
	{ 14.92327f, -2.909319f, 10.33277f },
	{ 4.775048f, 4.564928f, 2.466621f },
	{ 0.781573f, -0.238754f, 0.042568f }
};

NJS_VECTOR normal_0017B528[] = {
	{ -0.303228f, 0.340722f, -0.889922f },
	{ -0.382863f, 0.5091529f, -0.770831f },
	{ -0.666741f, 0.715652f, -0.208083f },
	{ -0.728433f, 0.6851169f, -0.000139f },
	{ 0.208119f, 0.626662f, 0.750987f },
	{ 0.202611f, 0.758011f, 0.619974f },
	{ 0.7007819f, 0.612826f, 0.365171f },
	{ -0.7908649f, 0.48607f, -0.371845f },
	{ -0.766291f, 0.639184f, -0.065121f },
	{ -0.271473f, 0.5895489f, 0.7607459f },
	{ -0.329155f, 0.473348f, 0.817067f },
	{ 0.469281f, 0.491058f, 0.733919f },
	{ 0.474928f, 0.610324f, 0.633994f },
	{ 0.736766f, 0.656788f, -0.160642f },
	{ -0.814877f, 0.490338f, 0.309102f },
	{ -0.717255f, 0.603115f, 0.348995f },
	{ -0.26545f, 0.5700549f, 0.7775429f },
	{ 0.469852f, 0.662821f, 0.583016f },
	{ 0.700671f, 0.654152f, 0.284862f },
	{ 0.660351f, 0.55489f, -0.5059969f },
	{ 0.137109f, 0.640866f, -0.755309f },
	{ 0.186765f, 0.416292f, -0.889843f },
	{ -0.198198f, 0.466723f, -0.861909f },
	{ -0.785313f, 0.342775f, -0.515547f },
	{ -0.7174349f, 0.209711f, -0.664311f },
	{ -0.363995f, 0.284526f, 0.886878f },
	{ -0.392292f, 0.373678f, 0.840519f },
	{ 0.198175f, 0.538278f, 0.819136f },
	{ 0.651135f, 0.645093f, 0.399849f },
	{ 0.855402f, 0.51785f, 0.010939f },
	{ 0.431822f, 0.666841f, -0.6073329f },
	{ -0.354903f, 0.6620319f, -0.660119f },
	{ -0.8654349f, 0.437116f, 0.244848f },
	{ -0.550081f, 0.8230979f, 0.141142f },
	{ 0.218577f, 0.967563f, -0.12667f },
	{ 0.566251f, 0.656846f, -0.497909f },
	{ -0.346028f, 0.824945f, 0.446911f },
	{ -0.136005f, 0.988289f, 0.069193f },
	{ 0.288195f, 0.886851f, -0.361162f },
	{ 0.123888f, 0.5610369f, -0.818467f },
	{ 0.090151f, 0.534927f, 0.840075f },
	{ 0.06470399f, 0.841824f, 0.535859f },
	{ -0.037625f, 0.9927509f, -0.114151f },
	{ -0.470645f, 0.6825359f, -0.55914f },
	{ 0.210357f, 0.9681709f, 0.135631f },
	{ 0.602446f, 0.65699f, 0.453237f },
	{ -0.370746f, 0.8985209f, -0.234962f },
	{ -0.776675f, 0.629038f, 0.032974f }
};

NJS_MODEL_SADX attach_0017B768 = { vertex_0017B2E8, normal_0017B528, LengthOfArray(vertex_0017B2E8), meshlist_0017B2B8, matlist_0017B090, LengthOfArray(meshlist_0017B2B8), LengthOfArray(matlist_0017B090),{ -2.493154f, -1.249536f, 8.15123f }, 19.71795f, NULL };

NJS_OBJECT object_0017B790 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017B768, -0.600037f, 30.52f, -0.199998f, 0, 0, 0, 1, 1, 1, NULL, &object_0017B05C };

NJS_MATERIAL matlist_0017B7C4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017B800[] = {
	3, 2, 0, 1,
	3, 13, 1, 0,
	8, 1, 5, 2, 4, 3, 13, 12, 0
};

Sint16 poly_0017B822[] = {
	7, 8, 7, 4, 14, 13, 6, 1,
	0x8000u | 5, 4, 8, 5, 6, 1
};

Sint16 poly_0017B83E[] = {
	0x8000u | 9, 10, 16, 15, 11, 7, 9, 8, 10, 6,
	4, 11, 9, 16, 10,
	5, 7, 15, 14, 10, 6
};

NJS_TEX uv_0017B868[] = {
	{ -187, 254 },
	{ 77, 254 },
	{ 68, 49 },
	{ -700, 72 },
	{ -951, 49 },
	{ -942, 254 },
	{ 68, 49 },
	{ -214, 94 },
	{ -187, 254 },
	{ -444, 64 },
	{ -446, 254 },
	{ -700, 72 },
	{ -688, 254 },
	{ -942, 254 }
};

NJS_TEX uv_0017B8A0[] = {
	{ 761, -1383 },
	{ 499, -1383 },
	{ 509, 25 },
	{ 261, -1383 },
	{ 253, 34 },
	{ 17, -1383 },
	{ 2, 6 },
	{ 509, 25 },
	{ 761, -1383 },
	{ 739, 61 },
	{ 1037, -1383 },
	{ 1022, 6 }
};

NJS_TEX uv_0017B8D0[] = {
	{ -107, -78 },
	{ 180, -255 },
	{ 141, -78 },
	{ 385, -78 },
	{ 382, 254 },
	{ 648, -78 },
	{ 644, 254 },
	{ 912, -78 },
	{ 920, 254 },
	{ 385, -78 },
	{ 648, -78 },
	{ 180, -255 },
	{ 912, -78 },
	{ 382, 254 },
	{ 141, -78 },
	{ 144, 254 },
	{ -107, -78 },
	{ -99, 254 }
};

NJS_MESHSET_SADX meshlist_0017B918[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0017B800, NULL, NULL, NULL, uv_0017B868, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0017B822, NULL, NULL, NULL, uv_0017B8A0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0017B83E, NULL, NULL, NULL, uv_0017B8D0, NULL }
};

NJS_VECTOR vertex_0017B960[] = {
	{ 3.207907f, 0, -0.121979f },
	{ 1.593535f, 3.874086f, 0.069707f },
	{ 0, 0, 3.373181f },
	{ -3.155832f, 0, 0.002849f },
	{ -1.521397f, 3.588769f, 0.069707f },
	{ -0.231816f, 3.018134f, 1.530313f },
	{ 0.7552339f, 25.56924f, 0.017776f },
	{ -0.762027f, 25.56924f, 0.034184f },
	{ -0.002264f, 25.56924f, 0.829174f },
	{ -0.001618f, 29.66326f, 1.596233f },
	{ 1.464625f, 29.66326f, 0.011298f },
	{ -1.468542f, 29.66326f, 0.011298f },
	{ -0.161131f, 0, -3.180253f },
	{ 0.055117f, 3.44611f, -1.703769f },
	{ -0.002264f, 25.56924f, -0.8273f },
	{ -0.001619f, 29.66326f, -1.613781f },
	{ 0, 31.83699f, -0.004284f }
};

NJS_VECTOR normal_0017BA2C[] = {
	{ 0.927375f, 0.371568f, -0.043733f },
	{ 0.964932f, 0.248897f, 0.083399f },
	{ -0.002927f, 0.440312f, 0.89784f },
	{ -0.910782f, 0.412854f, -0.005304f },
	{ -0.970901f, 0.239026f, 0.014781f },
	{ -0.144488f, 0.36537f, 0.91958f },
	{ 0.996043f, -0.075087f, 0.047551f },
	{ -0.997368f, -0.071622f, 0.011283f },
	{ -0.03785f, -0.074612f, 0.996494f },
	{ 0.003315f, 0.190506f, 0.98168f },
	{ 0.983229f, 0.182221f, 0.007456f },
	{ -0.983104f, 0.182741f, 0.010582f },
	{ -0.049867f, 0.395977f, -0.916905f },
	{ -0.000804f, 0.273291f, -0.961931f },
	{ -0.000667f, -0.082099f, -0.996624f },
	{ -0.000661f, 0.187767f, -0.982213f },
	{ 0.000652f, 0.999999f, -0.000904f }
};

NJS_MODEL_SADX attach_0017BAF8 = { vertex_0017B960, normal_0017BA2C, LengthOfArray(vertex_0017B960), meshlist_0017B918, matlist_0017B7C4, LengthOfArray(meshlist_0017B918), LengthOfArray(matlist_0017B7C4),{ 0.026037f, 15.91849f, 0.09646399f }, 16.25224f, NULL };

NJS_OBJECT object_0017BB20 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0017BAF8, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0017B790, NULL };