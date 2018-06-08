#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

enum EGM1TexName
{
	EGM1TexName_eg_neji,
	EGM1TexName_egm_m1,
	EGM1TexName_eg_b201,
	EGM1TexName_egm_r02,
	EGM1TexName_sno_k01,
	EGM1TexName_eg_jyoin,
	EGM1TexName_sky_ref,
	EGM1TexName_egm1_mark,
	EGM1TexName_blackm2,
	EGM1TexName_whit_s,
	EGM1TexName_eg_rbrack,
	EGM1TexName_eg_seet01,
	EGM1TexName_eg_b03,
	EGM1TexName_eg_b033,
	EGM1TexName_eg_waku01,
	EGM1TexName_console2,
	EGM1TexName_sno_ref11,
	EGM1TexName_egm_r01,
	EGM1TexName_sor_whit,
	EGM1TexName_snolight,
	EGM1TexName_egm_b02,
	EGM1TexName_egm_m01,
	EGM1TexName_eg_b02,
	EGM1TexName_orenge,
	EGM1TexName_eg_b01
};

NJS_MATERIAL matlist_00008ED0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm1_mark, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00008EE4[] = {
	0, 1, 2, 3
};

NJS_TEX uv_00008EEC[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_00008EFC[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_00008EE4, NULL, NULL, NULL, uv_00008EEC, NULL }
};

NJS_VECTOR vertex_00008F14[] = {
	{ -1.375f, 0.618042f, -0.955411f },
	{ -1.375f, -1.720647f, 1.049457f },
	{ 1.375f, 0.618042f, -0.955411f },
	{ 1.375f, -1.720647f, 1.049457f }
};

NJS_VECTOR normal_00008F44[] = {
	{ 0, 0.650843f, 0.759212f },
	{ 0, 0.650843f, 0.759212f },
	{ 0, 0.650843f, 0.759212f },
	{ 0, 0.650843f, 0.759212f }
};

NJS_MODEL_SADX attach_00008F74 = { vertex_00008F14, normal_00008F44, LengthOfArray(vertex_00008F14), meshlist_00008EFC, matlist_00008ED0, LengthOfArray(meshlist_00008EFC), LengthOfArray(matlist_00008ED0),{ 0, -0.551302f, 0.047023f }, 1.701616f, NULL };

NJS_OBJECT object_00008F9C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00008F74, 0, 8.897608f, 11.223f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00008FD0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_jyoin, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_b201, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000905C[] = {
	27, 28, 8,
	8, 4, 27,
	28, 22, 17,
	28, 27, 22
};

Sint16 poly_00009074[] = {
	1, 5, 0, 29,
	5, 10, 29, 9,
	10, 14, 9, 13
};

Sint16 poly_0000908C[] = {
	2, 6, 1, 5,
	6, 11, 5, 10,
	11, 15, 10, 14
};

Sint16 poly_000090A4[] = {
	3, 7, 2, 6,
	7, 12, 6, 11,
	12, 16, 11, 15
};

Sint16 poly_000090BC[] = {
	4, 8, 3, 7,
	8, 28, 7, 12,
	28, 17, 12, 16
};

Sint16 poly_000090D4[] = {
	26, 3, 25, 2,
	27, 4, 26, 3,
	14, 19, 13, 18,
	15, 20, 14, 19,
	16, 21, 15, 20,
	17, 22, 16, 21,
	19, 24, 18, 23,
	20, 25, 19, 24,
	21, 26, 20, 25,
	22, 27, 21, 26,
	24, 1, 23, 0,
	25, 2, 24, 1
};

Sint16 poly_00009134[] = {
	9, 13, 18,
	23, 0, 29
};

Sint16 poly_00009140[] = {
	29, 9, 23, 18
};

NJS_TEX uv_00009148[] = {
	{ 378, 96 },
	{ 127, 275 },
	{ 382, 275 },
	{ 382, 275 },
	{ 509, 0 },
	{ 378, 96 },
	{ 127, 275 },
	{ 127, 94 },
	{ 0 },
	{ 127, 275 },
	{ 378, 96 },
	{ 127, 94 }
};

NJS_TEX uv_00009178[] = {
	{ 255, 254 },
	{ 191, 254 },
	{ 214, 0 },
	{ 170, 0 },
	{ 191, 254 },
	{ 63, 254 },
	{ 170, 0 },
	{ 84, 0 },
	{ 63, 254 },
	{ 0, 254 },
	{ 84, 0 },
	{ 40, 0 }
};

NJS_TEX uv_000091A8[] = {
	{ 255, 141 },
	{ 191, 141 },
	{ 253, 211 },
	{ 190, 211 },
	{ 191, 141 },
	{ 63, 141 },
	{ 190, 211 },
	{ 64, 211 },
	{ 63, 141 },
	{ 0, 141 },
	{ 64, 211 },
	{ 1, 211 }
};

NJS_TEX uv_000091D8[] = {
	{ 508, 254 },
	{ 509, 97 },
	{ 0, 255 },
	{ -2, 99 },
	{ 509, 97 },
	{ 509, -97 },
	{ -2, 97 },
	{ 1, -95 },
	{ 509, -97 },
	{ 508, -254 },
	{ 0, -96 },
	{ 0, -255 }
};

NJS_TEX uv_00009208[] = {
	{ 209, 233 },
	{ 168, 252 },
	{ 254, 0 },
	{ 191, 0 },
	{ 168, 252 },
	{ 86, 252 },
	{ 191, 0 },
	{ 63, 0 },
	{ 86, 252 },
	{ 45, 233 },
	{ 63, 0 },
	{ 0 }
};

NJS_TEX uv_00009238[] = {
	{ 176, 213 },
	{ 224, 213 },
	{ 191, 113 },
	{ 255, 113 },
	{ 157, 255 },
	{ 190, 251 },
	{ 176, 213 },
	{ 224, 213 },
	{ 1, 43 },
	{ 64, 43 },
	{ 42, 0 },
	{ 84, 0 },
	{ 0, 113 },
	{ 63, 113 },
	{ 1, 43 },
	{ 64, 43 },
	{ 30, 213 },
	{ 78, 213 },
	{ 0, 113 },
	{ 63, 113 },
	{ 64, 251 },
	{ 96, 254 },
	{ 30, 213 },
	{ 78, 213 },
	{ 64, 43 },
	{ 190, 43 },
	{ 84, 0 },
	{ 170, 0 },
	{ 63, 113 },
	{ 191, 113 },
	{ 64, 43 },
	{ 190, 43 },
	{ 78, 213 },
	{ 176, 213 },
	{ 63, 113 },
	{ 191, 113 },
	{ 96, 254 },
	{ 157, 255 },
	{ 78, 213 },
	{ 176, 213 },
	{ 190, 43 },
	{ 253, 43 },
	{ 170, 0 },
	{ 212, 0 },
	{ 191, 113 },
	{ 255, 113 },
	{ 190, 43 },
	{ 253, 43 }
};

NJS_TEX uv_000092F8[] = {
	{ 256, 255 },
	{ 0 },
	{ -1, 255 },
	{ -1, 255 },
	{ 0 },
	{ 256, 255 }
};

NJS_TEX uv_00009310[] = {
	{ 255, 256 },
	{ 254, 0 },
	{ 0, 255 },
	{ -1, 1 }
};

NJS_MESHSET_SADX meshlist_00009320[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_0000905C, NULL, NULL, NULL, uv_00009148, NULL },
	{ NJD_MESHSET_4 | 1, 3, poly_00009074, NULL, NULL, NULL, uv_00009178, NULL },
	{ NJD_MESHSET_4 | 2, 3, poly_0000908C, NULL, NULL, NULL, uv_000091A8, NULL },
	{ NJD_MESHSET_4 | 3, 3, poly_000090A4, NULL, NULL, NULL, uv_000091D8, NULL },
	{ NJD_MESHSET_4 | 4, 3, poly_000090BC, NULL, NULL, NULL, uv_00009208, NULL },
	{ NJD_MESHSET_4 | 5, 12, poly_000090D4, NULL, NULL, NULL, uv_00009238, NULL },
	{ NJD_MESHSET_3 | 6, 2, poly_00009134, NULL, NULL, NULL, uv_000092F8, NULL },
	{ NJD_MESHSET_4 | 6, 1, poly_00009140, NULL, NULL, NULL, uv_00009310, NULL }
};

NJS_VECTOR vertex_000093E0[] = {
	{ 4.628494f, -0.641295f, 36.43233f },
	{ 6.820256f, -0.641295f, 30.24256f },
	{ 6.908206f, -0.641296f, 20.3453f },
	{ 5.282109f, -0.641295f, 6.274348f },
	{ 3.388473f, -0.744716f, 0.925874f },
	{ 3.410125f, 5.038046f, 30.24256f },
	{ 3.454101f, 5.111283f, 20.3453f },
	{ 2.641052f, 3.757203f, 6.274348f },
	{ 1.694236f, 2.180343f, 0.484177f },
	{ -2.31425f, 3.21293f, 36.43233f },
	{ -3.410132f, 5.038045f, 30.24256f },
	{ -3.454104f, 5.111283f, 20.3453f },
	{ -2.641058f, 3.757204f, 6.274348f },
	{ -4.628495f, -0.641295f, 36.43233f },
	{ -6.820257f, -0.641295f, 30.24256f },
	{ -6.908204f, -0.641296f, 20.3453f },
	{ -5.28211f, -0.641295f, 6.274348f },
	{ -3.388478f, -0.744715f, 0.925874f },
	{ -2.31425f, 0.172442f, 36.43233f },
	{ -3.410129f, 1.176662f, 30.24256f },
	{ -3.454102f, 1.200105f, 20.3453f },
	{ -2.641056f, 0.766664f, 6.274348f },
	{ -1.694239f, 0.261912f, 0.484178f },
	{ 2.314246f, 0.172442f, 36.43233f },
	{ 3.410128f, 1.176661f, 30.24256f },
	{ 3.454103f, 1.200104f, 20.3453f },
	{ 2.641054f, 0.766664f, 6.274349f },
	{ 1.641822f, 0.274047f, 0.433071f },
	{ -1.694239f, 2.180345f, 0.484178f },
	{ 2.314244f, 3.21293f, 36.43233f }
};

NJS_VECTOR normal_00009548[] = {
	{ 0.461377f, -0.597991f, 0.655392f },
	{ 0.757113f, -0.638359f, 0.138843f },
	{ 0.740581f, -0.670822f, -0.039197f },
	{ 0.7346269f, -0.666041f, -0.129278f },
	{ 0.530144f, -0.7026539f, -0.474579f },
	{ 0.486984f, 0.8583969f, 0.161249f },
	{ 0.492321f, 0.868942f, -0.050591f },
	{ 0.48694f, 0.849788f, -0.201865f },
	{ 0.359798f, 0.597931f, -0.716257f },
	{ -0.333643f, 0.59377f, 0.732202f },
	{ -0.486984f, 0.8583969f, 0.161249f },
	{ -0.492322f, 0.868942f, -0.050591f },
	{ -0.485091f, 0.8485039f, -0.211491f },
	{ -0.501273f, -0.622851f, 0.600652f },
	{ -0.768041f, -0.634748f, 0.08490299f },
	{ -0.740581f, -0.670823f, -0.039197f },
	{ -0.718344f, -0.6699859f, -0.187352f },
	{ -0.482929f, -0.67964f, -0.55215f },
	{ 0.141265f, -0.715509f, 0.684172f },
	{ 0.235031f, -0.966992f, -0.098421f },
	{ 0.24626f, -0.96899f, 0.020348f },
	{ 0.256201f, -0.962914f, 0.084601f },
	{ 0.016619f, -0.65508f, -0.755377f },
	{ -0.140347f, -0.7055809f, 0.694593f },
	{ -0.236094f, -0.968506f, -0.079097f },
	{ -0.24626f, -0.96899f, 0.020348f },
	{ -0.255871f, -0.9620709f, 0.094597f },
	{ -0.008078f, -0.646166f, -0.763154f },
	{ -0.354206f, 0.585634f, -0.729089f },
	{ 0.333642f, 0.59377f, 0.732202f }
};

NJS_MODEL_SADX attach_000096B0 = { vertex_000093E0, normal_00009548, LengthOfArray(vertex_000093E0), meshlist_00009320, matlist_00008FD0, LengthOfArray(meshlist_00009320), LengthOfArray(matlist_00008FD0),{ 0.000001f, 2.183284f, 18.4327f }, 19.29085f, NULL };

NJS_OBJECT object_000096D8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000096B0, 0, 5.249493f, 2.28337f, 0xFFFFFAFF, 0xFFFF8001, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0000970C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_waku01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_b02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sky_ref, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00009770[] = {
	0, 1, 6,
	0, 6, 11,
	0, 11, 16,
	0, 16, 21,
	0, 21, 26,
	0, 26, 1
};

Sint16 poly_00009794[] = {
	2, 7, 1, 6,
	7, 12, 6, 11,
	12, 17, 11, 16,
	17, 22, 16, 21,
	27, 2, 26, 1,
	22, 27, 21, 26
};

Sint16 poly_000097C4[] = {
	3, 8, 2, 7,
	8, 13, 7, 12,
	13, 18, 12, 17,
	28, 3, 27, 2,
	18, 23, 17, 22,
	23, 28, 22, 27
};

Sint16 poly_000097F4[] = {
	4, 9, 3, 8,
	9, 14, 8, 13,
	29, 4, 28, 3,
	14, 19, 13, 18,
	19, 24, 18, 23,
	24, 29, 23, 28
};

Sint16 poly_00009824[] = {
	5, 10, 4, 9,
	30, 5, 29, 4,
	10, 15, 9, 14,
	15, 20, 14, 19,
	20, 25, 19, 24,
	25, 30, 24, 29
};

NJS_TEX uv_00009854[] = {
	{ 127, 330 },
	{ 37, 84 },
	{ 73, 84 },
	{ 127, 330 },
	{ 73, 84 },
	{ 181, 84 },
	{ 127, 330 },
	{ 181, 84 },
	{ 217, 84 },
	{ 127, 330 },
	{ 217, 84 },
	{ 181, 84 },
	{ 127, 330 },
	{ 181, 84 },
	{ 73, 84 },
	{ 127, 330 },
	{ 73, 84 },
	{ 37, 84 }
};

NJS_TEX uv_0000989C[] = {
	{ 127, 254 },
	{ -2, 254 },
	{ 118, 89 },
	{ 28, 89 },
	{ -2, 254 },
	{ -2, 255 },
	{ 28, 89 },
	{ 28, 89 },
	{ -2, 255 },
	{ 127, 255 },
	{ 28, 89 },
	{ 118, 89 },
	{ 127, 255 },
	{ 257, 255 },
	{ 118, 89 },
	{ 207, 89 },
	{ 257, 255 },
	{ 127, 254 },
	{ 207, 89 },
	{ 118, 89 },
	{ 257, 255 },
	{ 257, 255 },
	{ 207, 89 },
	{ 207, 89 }
};

NJS_TEX uv_000098FC[] = {
	{ 197, 253 },
	{ 48, 251 },
	{ 188, 2 },
	{ 74, 0 },
	{ 197, 253 },
	{ 48, 251 },
	{ 188, 2 },
	{ 74, 0 },
	{ 197, 253 },
	{ 48, 251 },
	{ 188, 2 },
	{ 74, 0 },
	{ 197, 253 },
	{ 48, 251 },
	{ 188, 2 },
	{ 74, 0 },
	{ 197, 253 },
	{ 48, 251 },
	{ 188, 2 },
	{ 74, 0 },
	{ 197, 253 },
	{ 48, 251 },
	{ 188, 2 },
	{ 74, 0 }
};

NJS_TEX uv_0000995C[] = {
	{ 254, 129 },
	{ 254, 44 },
	{ 0, 127 },
	{ 0 },
	{ 254, 44 },
	{ 254, 44 },
	{ 0 },
	{ 0 },
	{ 254, 209 },
	{ 254, 129 },
	{ 0, 254 },
	{ 0, 127 },
	{ 254, 44 },
	{ 254, 129 },
	{ 0 },
	{ 0, 127 },
	{ 254, 129 },
	{ 254, 209 },
	{ 0, 127 },
	{ 0, 255 },
	{ 254, 209 },
	{ 254, 209 },
	{ 0, 255 },
	{ 0, 254 }
};

NJS_TEX uv_000099BC[] = {
	{ 78, 0 },
	{ 86, 0 },
	{ 15, 167 },
	{ 65, 167 },
	{ 86, 0 },
	{ 78, 0 },
	{ 60, 167 },
	{ 15, 167 },
	{ 86, 0 },
	{ 168, 0 },
	{ 65, 167 },
	{ 189, 167 },
	{ 168, 0 },
	{ 176, 0 },
	{ 189, 167 },
	{ 239, 167 },
	{ 176, 0 },
	{ 168, 0 },
	{ 239, 167 },
	{ 194, 167 },
	{ 168, 0 },
	{ 86, 0 },
	{ 194, 167 },
	{ 60, 167 }
};

NJS_MESHSET_SADX meshlist_00009A1C[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00009770, NULL, NULL, NULL, uv_00009854, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_00009794, NULL, NULL, NULL, uv_0000989C, NULL },
	{ NJD_MESHSET_4 | 2, 6, poly_000097C4, NULL, NULL, NULL, uv_000098FC, NULL },
	{ NJD_MESHSET_4 | 3, 6, poly_000097F4, NULL, NULL, NULL, uv_0000995C, NULL },
	{ NJD_MESHSET_4 | 4, 6, poly_00009824, NULL, NULL, NULL, uv_000099BC, NULL }
};

NJS_VECTOR vertex_00009A94[] = {
	{ 0.000037f, 1.205942f, -17.65668f },
	{ -4.016481f, 1.254256f, -22.77809f },
	{ -7.045971f, 0.844157f, -29.82457f },
	{ -9.143219f, 0.656456f, -21.44655f },
	{ -4.890339f, 0.484008f, -5.06133f },
	{ -2.152803f, 0.350544f, -0.136537f },
	{ -2.394127f, 5.357801f, -22.77809f },
	{ -4.199944f, 6.788363f, -29.82457f },
	{ -5.450066f, 9.536515f, -21.44656f },
	{ -2.68182f, 6.446874f, -5.061331f },
	{ -1.784869f, 4.02765f, -0.136537f },
	{ 2.394178f, 5.357801f, -22.77809f },
	{ 4.199989f, 6.78836f, -29.82457f },
	{ 5.450111f, 9.536515f, -21.44655f },
	{ 2.681835f, 6.446875f, -5.061329f },
	{ 1.784872f, 4.027649f, -0.136536f },
	{ 4.01653f, 1.254256f, -22.77808f },
	{ 7.046016f, 0.844156f, -29.82456f },
	{ 9.143258f, 0.656454f, -21.44655f },
	{ 4.890354f, 0.484007f, -5.061327f },
	{ 2.152806f, 0.350544f, -0.136535f },
	{ 2.394178f, -2.849291f, -22.77808f },
	{ 4.199986f, -5.100053f, -29.82456f },
	{ 5.450108f, -8.223609f, -21.44655f },
	{ 2.915035f, -5.021376f, -5.061326f },
	{ 1.784872f, -2.57827f, -0.136534f },
	{ -2.394129f, -2.849289f, -22.77809f },
	{ -4.199945f, -5.100047f, -29.82457f },
	{ -5.45007f, -8.223605f, -21.44655f },
	{ -2.915026f, -5.021376f, -5.061328f },
	{ -1.78487f, -2.578269f, -0.136535f }
};

NJS_VECTOR normal_00009C08[] = {
	{ -0.00001f, 0.005412f, -0.999985f },
	{ 0.874151f, -0.010968f, -0.48553f },
	{ -0.305606f, 0.016346f, -0.952018f },
	{ -0.999937f, -0.001482f, -0.01109f },
	{ -0.949905f, 0.004229f, 0.312509f },
	{ -0.919264f, 0.000833f, 0.393642f },
	{ 0.465463f, -0.7520379f, -0.466673f },
	{ -0.152556f, 0.247682f, -0.956755f },
	{ -0.551492f, 0.832918f, -0.045868f },
	{ -0.5314839f, 0.778217f, 0.334518f },
	{ -0.602451f, 0.6674899f, 0.437618f },
	{ -0.459234f, -0.747445f, -0.480031f },
	{ 0.174434f, 0.257592f, -0.9503779f },
	{ 0.552705f, 0.8329329f, -0.027195f },
	{ 0.509697f, 0.769682f, 0.384446f },
	{ 0.540235f, 0.639228f, 0.547296f },
	{ -0.8736269f, -0.00706f, -0.486546f },
	{ 0.304318f, 0.034183f, -0.951957f },
	{ 0.999926f, 0.000177f, -0.012166f },
	{ 0.945357f, -0.005428f, 0.325993f },
	{ 0.908312f, -0.017714f, 0.417918f },
	{ -0.465687f, 0.725341f, -0.506966f },
	{ 0.190852f, -0.241917f, -0.951342f },
	{ 0.547252f, -0.834649f, -0.062262f },
	{ 0.534897f, -0.7720439f, 0.343267f },
	{ 0.5789f, -0.669745f, 0.465098f },
	{ 0.45888f, 0.720538f, -0.519859f },
	{ -0.211072f, -0.251433f, -0.9445789f },
	{ -0.548615f, -0.8349749f, -0.042867f },
	{ -0.518007f, -0.76534f, 0.382f },
	{ -0.534272f, -0.6491989f, 0.541382f }
};

NJS_MODEL_SADX attach_00009D7C = { vertex_00009A94, normal_00009C08, LengthOfArray(vertex_00009A94), meshlist_00009A1C, matlist_0000970C, LengthOfArray(meshlist_00009A1C), LengthOfArray(matlist_0000970C),{ 0.00002f, 0.656454f, -14.98055f }, 17.43398f, NULL };

NJS_OBJECT object_00009DA4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00009D7C, -0.00002f, -0.967041f, -2.711411f, 0, 0, 0, 1, 1, 1, NULL, &object_000096D8 };

NJS_MATERIAL matlist_00009DD8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_b02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_jyoin, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_m1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_blackm2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_b02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00009E3C[] = {
	1, 5, 0, 18,
	5, 10, 18, 9,
	10, 14, 9, 13
};

Sint16 poly_00009E54[] = {
	2, 6, 1, 5,
	6, 11, 5, 10,
	11, 15, 10, 14
};

Sint16 poly_00009E6C[] = {
	3, 7, 2, 6,
	7, 12, 6, 11,
	12, 16, 11, 15
};

Sint16 poly_00009E84[] = {
	4, 8, 3, 7,
	8, 19, 7, 12,
	19, 17, 12, 16
};

Sint16 poly_00009E9C[] = {
	18, 9, 0, 13,
	8, 4, 19, 17
};

NJS_TEX uv_00009EAC[] = {
	{ 253, 1 },
	{ 0 },
	{ 254, 253 },
	{ 0, 254 },
	{ 254, 2 },
	{ 217, 1 },
	{ 85, 255 },
	{ 85, 254 },
	{ 0, 2 },
	{ 253, 2 },
	{ 0, 255 },
	{ 254, 255 }
};

NJS_TEX uv_00009EDC[] = {
	{ 25, 190 },
	{ 25, 2 },
	{ 187, 247 },
	{ 248, 3 },
	{ 25, 2 },
	{ 25, 2 },
	{ 248, 3 },
	{ 248, 3 },
	{ 25, 2 },
	{ 25, 190 },
	{ 248, 3 },
	{ 187, 247 }
};

NJS_TEX uv_00009F0C[] = {
	{ 0, 1 },
	{ 254, 0 },
	{ 0, 253 },
	{ 254, 255 },
	{ 254, 255 },
	{ 254, 104 },
	{ 0, 255 },
	{ 0, 104 },
	{ 254, 0 },
	{ 0, 1 },
	{ 254, 255 },
	{ 0, 253 }
};

NJS_TEX uv_00009F3C[] = {
	{ 200, 0 },
	{ 200, 0 },
	{ 7, 0 },
	{ 7, 0 },
	{ 177, 0 },
	{ 39, 0 },
	{ 177, 0 },
	{ 39, 0 }
};

NJS_MESHSET_SADX meshlist_00009F5C[] = {
	{ NJD_MESHSET_4 | 0, 3, poly_00009E3C, NULL, NULL, NULL, uv_00009EAC, NULL },
	{ NJD_MESHSET_4 | 1, 3, poly_00009E54, NULL, NULL, NULL, uv_00009EDC, NULL },
	{ NJD_MESHSET_4 | 2, 3, poly_00009E6C, NULL, NULL, NULL, uv_00009F0C, NULL },
	{ NJD_MESHSET_4 | 3, 3, poly_00009E84, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_4 | 4, 2, poly_00009E9C, NULL, NULL, NULL, uv_00009F3C, NULL }
};

NJS_VECTOR vertex_00009FD4[] = {
	{ -2.052054f, -5.682053f, 1.716453f },
	{ -2.436301f, -3.512838f, 0.784057f },
	{ -3.202779f, -1.318328f, -0.077075f },
	{ -3.1396f, 3.57923f, -0.114244f },
	{ -1.650864f, 4.891927f, 1.060956f },
	{ -1.179603f, -4.334272f, -2.907419f },
	{ -1.682836f, -1.314967f, -2.921867f },
	{ -1.582664f, 3.561584f, -2.96048f },
	{ -0.82543f, 4.929515f, -1.759973f },
	{ 1.127503f, -6.511699f, -2.226937f },
	{ 1.179607f, -4.334272f, -2.907411f },
	{ 1.682841f, -1.314968f, -2.92186f },
	{ 1.582672f, 3.561584f, -2.960474f },
	{ 2.05205f, -5.682055f, 1.716463f },
	{ 2.436297f, -3.512836f, 0.784071f },
	{ 3.202776f, -1.318329f, -0.07705399f },
	{ 3.139599f, 3.579229f, -0.114229f },
	{ 1.650866f, 4.891927f, 1.060963f },
	{ -1.127499f, -6.511699f, -2.226942f },
	{ 0.825435f, 4.929515f, -1.759971f }
};

NJS_VECTOR normal_0000A0C4[] = {
	{ -0.6815169f, -0.7306769f, -0.040557f },
	{ -0.942504f, -0.127196f, -0.309042f },
	{ -0.903467f, -0.074985f, -0.422047f },
	{ -0.838115f, 0.365363f, -0.40506f },
	{ -0.385028f, 0.9101f, -0.153204f },
	{ -0.536838f, -0.167509f, -0.826889f },
	{ -0.5571409f, -0.048006f, -0.829029f },
	{ -0.495f, 0.349289f, -0.7955959f },
	{ -0.281658f, 0.8721499f, -0.400028f },
	{ 0.455068f, -0.775156f, -0.438231f },
	{ 0.518108f, -0.288148f, -0.805317f },
	{ 0.547565f, -0.136182f, -0.8256069f },
	{ 0.46008f, 0.3995f, -0.792923f },
	{ 0.6213199f, -0.78347f, -0.011674f },
	{ 0.904837f, -0.336757f, -0.260507f },
	{ 0.88937f, -0.223314f, -0.398938f },
	{ 0.788474f, 0.478251f, -0.386761f },
	{ 0.281215f, 0.953358f, -0.109666f },
	{ -0.485949f, -0.731532f, -0.478241f },
	{ 0.209138f, 0.908983f, -0.360571f }
};

NJS_MODEL_SADX attach_0000A1B4 = { vertex_00009FD4, normal_0000A0C4, LengthOfArray(vertex_00009FD4), meshlist_00009F5C, matlist_00009DD8, LengthOfArray(meshlist_00009F5C), LengthOfArray(matlist_00009DD8),{ -0.00001f, -0.791092f, -0.622009f }, 6.180113f, NULL };

NJS_OBJECT object_0000A1DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0000A1B4, 0, 8.759976f, -12.77681f, 0, 0, 0, 1, 1, 1, &object_00009DA4, &object_00008F9C };

NJS_MATERIAL matlist_0000A210[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000A24C[] = {
	14, 2, 15, 12,
	13, 4, 14, 2,
	15, 12, 16, 10,
	17, 6, 13, 4,
	16, 10, 18, 8,
	18, 8, 17, 6
};

Sint16 poly_0000A27C[] = {
	12, 2, 11, 1,
	2, 4, 1, 3,
	10, 12, 9, 11,
	4, 6, 3, 5,
	8, 10, 7, 9,
	6, 8, 5, 7
};

Sint16 poly_0000A2AC[] = {
	14, 0, 13,
	13, 0, 17,
	17, 0, 18,
	18, 0, 16,
	16, 0, 15,
	15, 0, 14
};

NJS_TEX uv_0000A2D0[] = {
	{ 169, 0 },
	{ 170, 255 },
	{ 127, 0 },
	{ 127, 255 },
	{ 212, 0 },
	{ 212, 255 },
	{ 169, 0 },
	{ 170, 255 },
	{ 127, 0 },
	{ 127, 255 },
	{ 84, 0 },
	{ 85, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 212, 0 },
	{ 212, 255 },
	{ 84, 0 },
	{ 85, 255 },
	{ 42, 0 },
	{ 42, 255 },
	{ 42, 0 },
	{ 42, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_TEX uv_0000A330[] = {
	{ 191, 9 },
	{ 255, 9 },
	{ 139, 254 },
	{ 150, 255 },
	{ 255, 9 },
	{ 191, 9 },
	{ 150, 255 },
	{ 139, 254 },
	{ 63, 9 },
	{ 191, 9 },
	{ 115, 254 },
	{ 139, 254 },
	{ 191, 9 },
	{ 63, 9 },
	{ 139, 254 },
	{ 115, 254 },
	{ 0, 9 },
	{ 63, 9 },
	{ 104, 254 },
	{ 115, 254 },
	{ 63, 9 },
	{ 0, 9 },
	{ 115, 254 },
	{ 104, 254 }
};

NJS_TEX uv_0000A390[] = {
	{ 256, 127 },
	{ 0, 127 },
	{ 256, 0 },
	{ 256, 0 },
	{ 0, 127 },
	{ 256, 0 },
	{ 256, 0 },
	{ 0, 127 },
	{ 256, 127 },
	{ 256, 127 },
	{ 0, 127 },
	{ 256, 255 },
	{ 256, 255 },
	{ 0, 127 },
	{ 256, 255 },
	{ 256, 255 },
	{ 0, 127 },
	{ 256, 127 }
};

NJS_MESHSET_SADX meshlist_0000A3D8[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_0000A24C, NULL, NULL, NULL, uv_0000A2D0, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_0000A27C, NULL, NULL, NULL, uv_0000A330, NULL },
	{ NJD_MESHSET_3 | 2, 6, poly_0000A2AC, NULL, NULL, NULL, uv_0000A390, NULL }
};

NJS_VECTOR vertex_0000A420[] = {
	{ -0.00002f, 0, 15.48286f },
	{ -0.6041909f, 0, -0.020337f },
	{ -3.380495f, -0.00001f, 1.359613f },
	{ -0.324834f, 0.596602f, -0.020336f },
	{ -1.690251f, 2.960397f, 1.359613f },
	{ 0.324833f, 0.596602f, -0.020336f },
	{ 1.690242f, 2.960394f, 1.359613f },
	{ 0.60419f, 0, -0.020336f },
	{ 3.380488f, -0.00002f, 1.359613f },
	{ 0.324833f, -0.596602f, -0.020336f },
	{ 1.690241f, -2.960397f, 1.359613f },
	{ -0.324834f, -0.596602f, -0.020336f },
	{ -1.690251f, -2.960397f, 1.359613f },
	{ -1.024105f, 1.766452f, 2.415872f },
	{ -2.048205f, -0.00001f, 2.415872f },
	{ -1.024106f, -1.766452f, 2.415872f },
	{ 1.024095f, -1.766452f, 2.415872f },
	{ 1.024095f, 1.76645f, 2.415872f },
	{ 2.048195f, -0.00001f, 2.415872f }
};

NJS_VECTOR normal_0000A504[] = {
	{ 0.000012f, 0, 1 },
	{ -0.451829f, 0.003507f, -0.8920979f },
	{ -0.996816f, 0.003217f, -0.079673f },
	{ -0.234005f, 0.385806f, -0.89241f },
	{ -0.502297f, 0.861305f, -0.076492f },
	{ 0.227319f, 0.381857f, -0.89583f },
	{ 0.499142f, 0.862743f, -0.080813f },
	{ 0.45183f, -0.003507f, -0.892097f },
	{ 0.996816f, -0.003217f, -0.07967199f },
	{ 0.234006f, -0.385806f, -0.89241f },
	{ 0.502297f, -0.861305f, -0.076492f },
	{ -0.227318f, -0.381857f, -0.89583f },
	{ -0.499143f, -0.862743f, -0.080814f },
	{ -0.414417f, 0.711065f, 0.568019f },
	{ -0.825544f, 0, 0.564338f },
	{ -0.414418f, -0.711065f, 0.568019f },
	{ 0.414417f, -0.711065f, 0.568019f },
	{ 0.414418f, 0.711065f, 0.568019f },
	{ 0.825544f, 0, 0.564338f }
};

NJS_MODEL_SADX attach_0000A5E8 = { vertex_0000A420, normal_0000A504, LengthOfArray(vertex_0000A420), meshlist_0000A3D8, matlist_0000A210, LengthOfArray(meshlist_0000A3D8), LengthOfArray(matlist_0000A210),{ -0.00003f, 0, 7.731263f }, 8.62579f, NULL };

NJS_OBJECT object_0000A610 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_0000A5E8, 0.082826f, -2.814152f, -6.609348f, 0, 0, 0, 1.02f, 1.02f, 1.02f, NULL, NULL };

NJS_MATERIAL matlist_0000A644[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_b201, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sno_k01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000A6BC[] = {
	21, 16, 11,
	15, 20, 26,
	26, 10, 15,
	26, 5, 10,
	6, 1, 27
};

Sint16 poly_0000A6DAE[] = {
	27, 21, 6, 11
};

Sint16 poly_0000A6E2[] = {
	1, 6, 2, 7,
	6, 11, 7, 12,
	11, 16, 12, 17,
	16, 21, 17, 22,
	21, 27, 22, 24,
	27, 1, 24, 2
};

Sint16 poly_0000A712E[] = {
	2, 7, 3, 8,
	7, 12, 8, 13,
	12, 17, 13, 18
};

Sint16 poly_0000A72A[] = {
	3, 8, 4, 9,
	8, 13, 9, 14,
	13, 18, 14, 19
};

Sint16 poly_0000A742[] = {
	4, 9, 5, 10,
	9, 14, 10, 15,
	14, 19, 15, 20,
	19, 0, 20, 26,
	0, 4, 26, 5
};

Sint16 poly_0000A76A[] = {
	23, 25, 0
};

Sint16 poly_0000A770E[] = {
	17, 22, 18, 23,
	18, 23, 19, 0,
	22, 24, 23, 25,
	24, 2, 25, 3,
	25, 3, 0, 4
};

NJS_TEX uv_0000A798[] = {
	{ 0, 254 },
	{ 62, 62 },
	{ 254, 254 },
	{ 254, 80 },
	{ 0 },
	{ 69, 127 },
	{ 69, 127 },
	{ 254, 207 },
	{ 254, 80 },
	{ 69, 127 },
	{ 0, 255 },
	{ 254, 207 },
	{ 256, 1 },
	{ 28, 182 },
	{ 0 }
};

NJS_TEX uv_0000A7D4[] = {
	{ 0, 254 },
	{ 0 },
	{ 255, 254 },
	{ 255, 0 }
};

NJS_TEX uv_0000A7E4[] = {
	{ 0, 173 },
	{ 70, 86 },
	{ 150, 255 },
	{ 255, 127 },
	{ 70, 86 },
	{ 70, -86 },
	{ 255, 127 },
	{ 255, -127 },
	{ 70, -86 },
	{ 0, -173 },
	{ 255, -127 },
	{ 150, -254 },
	{ 0, -173 },
	{ 22, -86 },
	{ 150, -254 },
	{ 184, -127 },
	{ 22, -86 },
	{ 22, 86 },
	{ 184, -127 },
	{ 184, 127 },
	{ 22, 86 },
	{ 0, 173 },
	{ 184, 127 },
	{ 150, 255 }
};

NJS_TEX uv_0000A844[] = {
	{ 0, 253 },
	{ 25, 190 },
	{ 228, 254 },
	{ 255, 191 },
	{ 25, 190 },
	{ 25, 64 },
	{ 255, 191 },
	{ 255, 63 },
	{ 25, 64 },
	{ 0, 1 },
	{ 255, 63 },
	{ 228, 0 }
};

NJS_TEX uv_0000A874[] = {
	{ 0, 252 },
	{ 0, 77 },
	{ 507, 252 },
	{ 505, 77 },
	{ 0, 77 },
	{ 0, -108 },
	{ 505, 77 },
	{ 507, -107 },
	{ 0, -108 },
	{ 1, -252 },
	{ 507, -107 },
	{ 508, -253 }
};

NJS_TEX uv_0000A8A4[] = {
	{ 0, 255 },
	{ 36, 191 },
	{ 252, 209 },
	{ 197, 168 },
	{ 36, 191 },
	{ 36, 63 },
	{ 197, 168 },
	{ 197, 86 },
	{ 36, 63 },
	{ 0 },
	{ 197, 86 },
	{ 252, 45 },
	{ 0 },
	{ 11, 127 },
	{ 252, 45 },
	{ 255, 127 },
	{ 11, 127 },
	{ 0, 255 },
	{ 255, 127 },
	{ 252, 209 }
};

NJS_TEX uv_0000A8F4[] = {
	{ 254, -124 },
	{ 254, 125 },
	{ 0, 13 }
};

NJS_TEX uv_0000A900[] = {
	{ 0, -251 },
	{ 8, -125 },
	{ 246, -255 },
	{ 254, -127 },
	{ 253, -251 },
	{ 254, -124 },
	{ 0, -253 },
	{ 0, 13 },
	{ 8, -125 },
	{ 8, 125 },
	{ 254, -127 },
	{ 254, 127 },
	{ 8, 125 },
	{ 0, 251 },
	{ 254, 127 },
	{ 246, 254 },
	{ 254, 125 },
	{ 253, 252 },
	{ 0, 13 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0000A950[] = {
	{ NJD_MESHSET_3 | 0, 5, poly_0000A6BC, NULL, NULL, NULL, uv_0000A798, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0000A6DAE, NULL, NULL, NULL, uv_0000A7D4, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_0000A6E2, NULL, NULL, NULL, uv_0000A7E4, NULL },
	{ NJD_MESHSET_4 | 2, 3, poly_0000A72A, NULL, NULL, NULL, uv_0000A874, NULL },
	{ NJD_MESHSET_4 | 3, 5, poly_0000A742, NULL, NULL, NULL, uv_0000A8A4, NULL },
	{ NJD_MESHSET_3 | 4, 1, poly_0000A76A, NULL, NULL, NULL, uv_0000A8F4, NULL },
	{ NJD_MESHSET_4 | 4, 5, poly_0000A770E, NULL, NULL, NULL, uv_0000A900, NULL },
	{ NJD_MESHSET_4 | 5, 3, poly_0000A712E, NULL, NULL, NULL, uv_0000A844, NULL }
};

NJS_VECTOR vertex_0000AA10[] = {
	{ 2.014085f, -0.011276f, -4.48523f },
	{ 6.865777f, -3.327638f, -32.41128f },
	{ 6.437422f, -4.897929f, -30.46636f },
	{ 3.802812f, -4.96094f, -18.50417f },
	{ 0.788604f, -3.644088f, -4.818453f },
	{ -1.02599f, -2.341661f, 2.43391f },
	{ 10.22048f, -1.669594f, -31.4991f },
	{ 11.38069f, -2.454739f, -29.12224f },
	{ 8.809832f, -2.486246f, -17.14272f },
	{ 4.617038f, -1.82759f, -3.777476f },
	{ 2.142099f, -1.176378f, 0.8548869f },
	{ 10.22048f, 1.646492f, -31.4991f },
	{ 11.38069f, 2.431637f, -29.12224f },
	{ 8.80983f, 2.463139f, -17.14271f },
	{ 4.617037f, 1.805404f, -3.777476f },
	{ 2.142098f, 1.154188f, 0.854886f },
	{ 6.865776f, 3.304535f, -32.41128f },
	{ 6.437419f, 4.874822f, -30.46636f },
	{ 3.80281f, 4.93783f, -18.50416f },
	{ 0.788602f, 3.621898f, -4.818453f },
	{ -1.025992f, 2.319471f, 2.433913f },
	{ 7.939615f, 1.646492f, -32.11929f },
	{ 8.019761f, 2.431635f, -30.03611f },
	{ 5.405556f, 2.463137f, -18.06836f },
	{ 8.019761f, -2.45474f, -30.03611f },
	{ 5.405558f, -2.486248f, -18.06836f },
	{ 0.121578f, -0.011212f, 2.491549f },
	{ 7.939615f, -1.669596f, -32.11929f }
};

NJS_VECTOR normal_0000AB60[] = {
	{ -0.958351f, -0.000366f, -0.285593f },
	{ -0.600374f, -0.222001f, -0.768288f },
	{ -0.604785f, -0.692719f, -0.392906f },
	{ -0.709041f, -0.693951f, -0.125268f },
	{ -0.693418f, -0.720418f, -0.013048f },
	{ -0.647639f, -0.489094f, 0.584252f },
	{ 0.622494f, -0.288366f, -0.727562f },
	{ 0.857539f, -0.496158f, -0.135848f },
	{ 0.814524f, -0.533987f, 0.226734f },
	{ 0.774758f, -0.513961f, 0.368232f },
	{ 0.677765f, -0.432292f, 0.594775f },
	{ 0.622494f, 0.288367f, -0.727562f },
	{ 0.857538f, 0.496159f, -0.135847f },
	{ 0.8141209f, 0.533928f, 0.228315f },
	{ 0.777669f, 0.521635f, 0.350897f },
	{ 0.688913f, 0.448695f, 0.5692739f },
	{ -0.600375f, 0.222003f, -0.7682869f },
	{ -0.604786f, 0.692719f, -0.392904f },
	{ -0.698157f, 0.695974f, -0.167919f },
	{ -0.680328f, 0.728973f, -0.07584599f },
	{ -0.650486f, 0.497922f, 0.573534f },
	{ -0.546797f, -0.183295f, -0.816956f },
	{ -0.95208f, -0.304022f, -0.03338f },
	{ -0.933159f, -0.266944f, -0.240737f },
	{ -0.95208f, 0.304021f, -0.03338f },
	{ -0.937368f, 0.266935f, -0.2238f },
	{ -0.375774f, -0.001411f, 0.9267099f },
	{ -0.5467989f, 0.183297f, -0.816954f }
};

NJS_MODEL_SADX attach_0000ACB0 = { vertex_0000AA10, normal_0000AB60, LengthOfArray(vertex_0000AA10), meshlist_0000A950, matlist_0000A644, LengthOfArray(meshlist_0000A950), LengthOfArray(matlist_0000A644),{ 5.177352f, -0.011555f, -14.95986f }, 18.53596f, NULL };

NJS_OBJECT object_0000ACD8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0000ACB0, 2.896564f, -2.781121f, 8.247771f, 0x68, 0, 0, 1, 1, 1, NULL, &object_0000A610 };

NJS_MATERIAL matlist_0000AD0C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_jyoin, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_jyoin, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000AD34[] = {
	2, 3, 6, 7,
	4, 5, 0, 1
};

Sint16 poly_0000AD44[] = {
	1, 5, 3, 7,
	5, 4, 7, 6
};

NJS_TEX uv_0000AD54[] = {
	{ 0, 127 },
	{ 127, 0 },
	{ 127, 255 },
	{ 255, 127 },
	{ 127, 255 },
	{ 255, 127 },
	{ 0, 127 },
	{ 127, 0 }
};

NJS_TEX uv_0000AD74[] = {
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

NJS_MESHSET_SADX meshlist_0000AD94[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_0000AD34, NULL, NULL, NULL, uv_0000AD54, NULL },
	{ NJD_MESHSET_4 | 1, 2, poly_0000AD44, NULL, NULL, NULL, uv_0000AD74, NULL }
};

NJS_VECTOR vertex_0000ADC4[] = {
	{ -0.7071069f, -1.535f, 0 },
	{ 0, -1.535f, 0.7071069f },
	{ -0.7071069f, 1.535f, 0 },
	{ 0, 1.535f, 0.7071069f },
	{ 0, -1.535f, -0.7071069f },
	{ 0.7071069f, -1.535f, 0 },
	{ 0, 1.535f, -0.7071069f },
	{ 0.7071069f, 1.535f, 0 }
};

NJS_VECTOR normal_0000AE24[] = {
	{ 0, -1, 0 },
	{ 0.5f, -0.7071069f, 0.5f },
	{ 0, 1, 0 },
	{ 0.5f, 0.7071069f, 0.5f },
	{ 0.5f, -0.7071069f, -0.5f },
	{ 0.816497f, -0.57735f, 0 },
	{ 0.5f, 0.7071069f, -0.5f },
	{ 0.816497f, 0.57735f, 0 }
};

NJS_MODEL_SADX attach_0000AE84 = { vertex_0000ADC4, normal_0000AE24, LengthOfArray(vertex_0000ADC4), meshlist_0000AD94, matlist_0000AD0C, LengthOfArray(meshlist_0000AD94), LengthOfArray(matlist_0000AD0C),{ 0 }, 1.690037f, NULL };

NJS_OBJECT object_0000AEAC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0000AE84, 2.897646f, -2.620754f, -1.902086f, 0, 0, 0, 1, 1, 1, NULL, &object_0000ACD8 };

NJS_MATERIAL matlist_0000AEE0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_waku01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_m1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sky_ref, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_seet01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sor_whit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000AF80[] = {
	16, 2, 0,
	10, 13, 0,
	2, 5, 0,
	5, 8, 0,
	13, 16, 0,
	8, 10, 0
};

Sint16 poly_0000AFA4[] = {
	15, 1, 16, 2,
	1, 4, 2, 5,
	9, 12, 10, 13,
	4, 7, 5, 8,
	12, 15, 13, 16,
	7, 9, 8, 10
};

Sint16 poly_0000AFD4[] = {
	46, 3, 1, 4,
	14, 46, 15, 1,
	47, 11, 9, 12,
	3, 6, 4, 7,
	11, 14, 12, 15,
	6, 47, 7, 9,
	31, 33, 46, 34,
	39, 41, 47, 42,
	44, 31, 45, 46,
	33, 36, 34, 37,
	36, 39, 37, 47,
	41, 44, 42, 45
};

Sint16 poly_0000B034[] = {
	20, 18, 17,
	28, 26, 17,
	22, 20, 17,
	18, 28, 17,
	24, 22, 17,
	26, 24, 17
};

Sint16 poly_0000B058[] = {
	18, 20, 19, 21,
	26, 28, 27, 29,
	20, 22, 21, 23,
	28, 18, 29, 19,
	22, 24, 23, 25,
	24, 26, 25, 27
};

Sint16 poly_0000B088[] = {
	19, 21, 48, 49,
	29, 19, 53, 48,
	21, 23, 49, 50,
	25, 27, 51, 52,
	23, 25, 50, 51,
	27, 29, 52, 53
};

Sint16 poly_0000B0B8[] = {
	47, 42, 40, 43,
	45, 46, 30, 32,
	46, 34, 32, 35,
	34, 37, 35, 38,
	42, 45, 43, 30,
	37, 47, 38, 40
};

Sint16 poly_0000B0E8[] = {
	48, 49, 31, 33,
	53, 48, 44, 31,
	49, 50, 33, 36,
	50, 51, 36, 39,
	52, 53, 41, 44,
	51, 52, 39, 41
};

NJS_TEX uv_0000B118[] = {
	{ 254, 1 },
	{ 0, 1 },
	{ 130, 255 },
	{ 254, 1 },
	{ 0, 1 },
	{ 130, 255 },
	{ 254, 1 },
	{ 0, 1 },
	{ 130, 255 },
	{ 254, 1 },
	{ 0, 1 },
	{ 130, 255 },
	{ 254, 1 },
	{ 0, 1 },
	{ 130, 255 },
	{ 254, 1 },
	{ 0, 1 },
	{ 130, 255 }
};

NJS_TEX uv_0000B160[] = {
	{ 191, 242 },
	{ 255, 242 },
	{ 154, 0 },
	{ 182, 0 },
	{ 255, 242 },
	{ 191, 242 },
	{ 182, 0 },
	{ 154, 0 },
	{ 0, 254 },
	{ 63, 242 },
	{ 72, 0 },
	{ 100, 0 },
	{ 191, 242 },
	{ 63, 242 },
	{ 154, 0 },
	{ 100, 0 },
	{ 63, 242 },
	{ 191, 242 },
	{ 100, 0 },
	{ 154, 0 },
	{ 63, 242 },
	{ 0, 254 },
	{ 100, 0 },
	{ 72, 0 }
};

NJS_TEX uv_0000B1C0[] = {
	{ 255, 127 },
	{ 195, 0 },
	{ 231, 127 },
	{ 179, 49 },
	{ 195, 255 },
	{ 255, 127 },
	{ 179, 205 },
	{ 231, 127 },
	{ 0, 127 },
	{ 59, 255 },
	{ 23, 127 },
	{ 75, 205 },
	{ 195, 0 },
	{ 59, 0 },
	{ 179, 49 },
	{ 75, 49 },
	{ 59, 255 },
	{ 195, 255 },
	{ 75, 205 },
	{ 179, 205 },
	{ 59, 0 },
	{ 0, 127 },
	{ 75, 49 },
	{ 23, 127 },
	{ 255, 143 },
	{ 192, 0 },
	{ 250, 147 },
	{ 177, 20 },
	{ 0, 143 },
	{ 62, 255 },
	{ 4, 147 },
	{ 77, 243 },
	{ 192, 254 },
	{ 255, 143 },
	{ 177, 243 },
	{ 250, 147 },
	{ 192, 0 },
	{ 62, 0 },
	{ 177, 20 },
	{ 77, 20 },
	{ 62, 0 },
	{ 0, 143 },
	{ 77, 20 },
	{ 4, 147 },
	{ 62, 255 },
	{ 192, 254 },
	{ 77, 243 },
	{ 177, 243 }
};

NJS_TEX uv_0000B280[] = {
	{ 1, 1 },
	{ 254, 1 },
	{ 126, 256 },
	{ 1, 1 },
	{ 254, 1 },
	{ 126, 256 },
	{ 1, 1 },
	{ 254, 1 },
	{ 126, 256 },
	{ 1, 1 },
	{ 254, 1 },
	{ 126, 256 },
	{ 1, 1 },
	{ 254, 1 },
	{ 126, 256 },
	{ 1, 1 },
	{ 254, 1 },
	{ 126, 256 }
};

NJS_TEX uv_0000B2C8[] = {
	{ 228, 120 },
	{ 178, 42 },
	{ 255, 127 },
	{ 191, 0 },
	{ 76, 197 },
	{ 178, 197 },
	{ 63, 255 },
	{ 191, 255 },
	{ 178, 42 },
	{ 76, 42 },
	{ 191, 0 },
	{ 63, 0 },
	{ 178, 197 },
	{ 228, 120 },
	{ 191, 255 },
	{ 255, 127 },
	{ 76, 42 },
	{ 26, 120 },
	{ 63, 0 },
	{ 0, 127 },
	{ 26, 120 },
	{ 76, 197 },
	{ 0, 127 },
	{ 63, 255 }
};

NJS_TEX uv_0000B328[] = {
	{ 254, 1 },
	{ 0, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 254, 1 },
	{ 0, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 188, 0 },
	{ 70, 0 },
	{ 200, 254 },
	{ 55, 254 },
	{ 254, 1 },
	{ 0, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 254, 1 },
	{ 0, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 188, 0 },
	{ 70, 0 },
	{ 200, 254 },
	{ 55, 254 }
};

NJS_TEX uv_0000B388[] = {
	{ 22, 145 },
	{ 0, 255 },
	{ 254, 127 },
	{ 255, 182 },
	{ 0, 255 },
	{ 14, 145 },
	{ 255, 182 },
	{ 255, 127 },
	{ 14, 145 },
	{ 0 },
	{ 255, 127 },
	{ 254, 72 },
	{ 0 },
	{ 0 },
	{ 254, 72 },
	{ 254, 72 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 182 },
	{ 255, 182 },
	{ 0 },
	{ 22, 145 },
	{ 254, 72 },
	{ 254, 127 }
};

NJS_TEX uv_0000B3E8[] = {
	{ 78, 140 },
	{ 78, 59 },
	{ 94, 143 },
	{ 94, 0 },
	{ 78, 213 },
	{ 78, 140 },
	{ 94, 254 },
	{ 94, 143 },
	{ 78, 59 },
	{ 78, 59 },
	{ 94, 0 },
	{ 94, 0 },
	{ 78, 59 },
	{ 78, 140 },
	{ 94, 0 },
	{ 95, 143 },
	{ 78, 213 },
	{ 78, 213 },
	{ 94, 255 },
	{ 94, 254 },
	{ 78, 140 },
	{ 78, 213 },
	{ 95, 143 },
	{ 94, 255 }
};

NJS_MESHSET_SADX meshlist_0000B448[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0000AF80, NULL, NULL, NULL, uv_0000B118, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_0000AFA4, NULL, NULL, NULL, uv_0000B160, NULL },
	{ NJD_MESHSET_4 | 2, 12, poly_0000AFD4, NULL, NULL, NULL, uv_0000B1C0, NULL },
	{ NJD_MESHSET_3 | 3, 6, poly_0000B034, NULL, NULL, NULL, uv_0000B280, NULL },
	{ NJD_MESHSET_4 | 4, 6, poly_0000B058, NULL, NULL, NULL, uv_0000B2C8, NULL },
	{ NJD_MESHSET_4 | 5, 6, poly_0000B088, NULL, NULL, NULL, uv_0000B328, NULL },
	{ NJD_MESHSET_4 | 6, 6, poly_0000B0B8, NULL, NULL, NULL, uv_0000B388, NULL },
	{ NJD_MESHSET_4 | 7, 6, poly_0000B0E8, NULL, NULL, NULL, uv_0000B3E8, NULL }
};

NJS_VECTOR vertex_0000B508[] = {
	{ 0.006447f, -2.798372f, 10.49545f },
	{ 3.221982f, -2.798376f, 7.649898f },
	{ 1.386025f, -2.798374f, 11.38414f },
	{ 2.109166f, 2.654213f, -5.759371f },
	{ 1.614213f, 0.536925f, 7.649897f },
	{ 0.696236f, -1.367411f, 11.38414f },
	{ -2.096274f, 2.654213f, -5.759371f },
	{ -1.601324f, 0.536925f, 7.649897f },
	{ -0.683343f, -1.367412f, 11.38414f },
	{ -3.209092f, -2.798377f, 7.461999f },
	{ -1.373134f, -2.798374f, 11.37075f },
	{ -2.096274f, -8.25097f, -5.759367f },
	{ -1.601324f, -6.133677f, 7.6499f },
	{ -0.683343f, -4.229337f, 11.38414f },
	{ 2.109166f, -8.250968f, -5.759367f },
	{ 1.614214f, -6.133677f, 7.649899f },
	{ 0.696236f, -4.229336f, 11.38414f },
	{ 0.175028f, -2.32555f, -11.35898f },
	{ 1.538344f, -2.325548f, -21.29702f },
	{ 1.892474f, -2.515638f, -17.74853f },
	{ 0.856684f, -0.272361f, -21.29702f },
	{ 1.033749f, 0.8627779f, -17.74853f },
	{ -0.506635f, -0.272361f, -21.29702f },
	{ -0.683698f, 0.8627779f, -17.74853f },
	{ -1.188295f, -2.325548f, -21.29702f },
	{ -1.542423f, -2.515639f, -17.74853f },
	{ -0.506635f, -4.378737f, -21.29702f },
	{ -0.683698f, -5.894054f, -17.74853f },
	{ 0.856684f, -4.378737f, -21.29702f },
	{ 1.033749f, -5.894053f, -17.74853f },
	{ 0.696232f, -5.400222f, -3.5186f },
	{ 4.11768f, -2.474443f, -9.128006f },
	{ 1.386021f, -1.49298f, -3.518602f },
	{ 2.109162f, 9.263265f, -9.12801f },
	{ 1.614209f, 7.614059f, -5.889568f },
	{ 0.696232f, 2.414266f, -3.518604f },
	{ -2.096276f, 9.263265f, -9.12801f },
	{ -1.601327f, 7.614059f, -5.889568f },
	{ -0.683347f, 2.414264f, -3.518604f },
	{ -4.104795f, -2.474446f, -9.095889f },
	{ -1.373138f, -1.49298f, -3.523956f },
	{ -2.096276f, -11.58036f, -9.128001f },
	{ -1.601327f, -10.60002f, -5.889561f },
	{ -0.683347f, -5.400224f, -3.5186f },
	{ 2.109164f, -11.58035f, -9.128001f },
	{ 1.614211f, -10.60002f, -5.889561f },
	{ 3.959557f, -2.798377f, -5.759369f },
	{ -3.946668f, -2.798378f, -5.679083f },
	{ 4.046631f, -2.214639f, -11.28094f },
	{ 2.341584f, 4.428003f, -11.28093f },
	{ -2.170392f, 4.428007f, -11.28094f },
	{ -3.894444f, -2.214632f, -11.27022f },
	{ -2.1704f, -8.194345f, -11.28094f },
	{ 2.341572f, -8.194349f, -11.28094f }
};

NJS_VECTOR normal_0000B790[] = {
	{ -0.002281f, -0.00001f, 0.999997f },
	{ 0.96853f, -0.000315f, 0.248897f },
	{ 0.439248f, 0, 0.898366f },
	{ 0.5399359f, 0.828108f, 0.150686f },
	{ 0.527352f, 0.791187f, 0.309714f },
	{ 0.268485f, 0.381984f, 0.8843099f },
	{ -0.5399629f, 0.831874f, 0.128165f },
	{ -0.532329f, 0.792513f, 0.297572f },
	{ -0.276771f, 0.377749f, 0.8835739f },
	{ -0.9711739f, 0.000889f, 0.238371f },
	{ -0.451366f, 0.000854f, 0.892338f },
	{ -0.5375969f, -0.829601f, 0.150835f },
	{ -0.529075f, -0.789138f, 0.311996f },
	{ -0.274488f, -0.37579f, 0.88512f },
	{ 0.542559f, -0.8303249f, 0.127238f },
	{ 0.530109f, -0.7942899f, 0.296796f },
	{ 0.268485f, -0.381983f, 0.8843099f },
	{ -0.00001f, 0.000003f, -1 },
	{ 0.22671f, 0.03228f, -0.973427f },
	{ 0.9743029f, -0.012786f, -0.22488f },
	{ 0.339508f, 0.100072f, -0.9352649f },
	{ 0.576296f, 0.7143289f, -0.397011f },
	{ -0.371959f, 0.109544f, -0.9217629f },
	{ -0.572837f, 0.7179f, -0.395573f },
	{ -0.226429f, 0.039553f, -0.973224f },
	{ -0.972019f, -0.012366f, -0.234576f },
	{ -0.341023f, -0.06427199f, -0.9378549f },
	{ -0.546024f, -0.748587f, -0.376132f },
	{ 0.371543f, -0.07091f, -0.9257039f },
	{ 0.5535229f, -0.749528f, -0.363072f },
	{ 0.380304f, -0.279315f, 0.881676f },
	{ 0.999274f, -0.030669f, -0.022586f },
	{ 0.699709f, 0.035387f, 0.713551f },
	{ 0.536738f, 0.806237f, -0.248787f },
	{ 0.5138029f, 0.569055f, 0.642015f },
	{ 0.489152f, 0.288894f, 0.822965f },
	{ -0.5490519f, 0.7916059f, -0.268144f },
	{ -0.54053f, 0.594305f, 0.595508f },
	{ -0.438645f, 0.277956f, 0.854594f },
	{ -0.999105f, -0.022473f, -0.035827f },
	{ -0.695893f, 0.018583f, 0.717905f },
	{ -0.538642f, -0.804371f, -0.250703f },
	{ -0.490364f, -0.638334f, 0.593357f },
	{ -0.450483f, -0.303338f, 0.839673f },
	{ 0.5395139f, -0.792752f, -0.283671f },
	{ 0.507947f, -0.664286f, 0.548374f },
	{ 0.9455f, -0.030372f, 0.324202f },
	{ -0.947315f, -0.035254f, 0.318359f },
	{ 0.9656129f, -0.00578f, -0.259919f },
	{ 0.643919f, 0.476076f, -0.598932f },
	{ -0.6977879f, 0.503269f, -0.509717f },
	{ -0.965211f, -0.000377f, -0.26147f },
	{ -0.639365f, -0.547011f, -0.5403619f },
	{ 0.693481f, -0.577144f, -0.431264f }
};

NJS_MODEL_SADX attach_0000BA18 = { vertex_0000B508, normal_0000B790, LengthOfArray(vertex_0000B508), meshlist_0000B448, matlist_0000AEE0, LengthOfArray(meshlist_0000B448), LengthOfArray(matlist_0000AEE0),{ 0.006443f, -1.158545f, -4.956443f }, 19.38114f, NULL };

NJS_OBJECT object_0000BA40 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0000BA18, 10.42089f, -0.003702f, -4.010867f, 0, 0, 0, 1, 1, 1, &object_0000AEAC, NULL };

NJS_MATERIAL matlist_0000BA74[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_neji, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000BA9C[] = {
	0, 5, 2,
	0, 1, 10,
	0, 8, 5,
	2, 1, 0,
	0, 11, 8,
	10, 11, 0
};

Sint16 poly_0000BAC0[] = {
	2, 5, 3, 6,
	1, 2, 7, 3,
	5, 8, 6, 9,
	11, 10, 12, 4,
	8, 11, 9, 12,
	10, 1, 4, 7
};

NJS_TEX uv_0000BAF0[] = {
	{ 135, 255 },
	{ 1, 0 },
	{ 253, 0 },
	{ 135, 255 },
	{ 1, 0 },
	{ 253, 0 },
	{ 135, 255 },
	{ 1, 0 },
	{ 253, 0 },
	{ 1, 0 },
	{ 253, 0 },
	{ 135, 255 },
	{ 135, 255 },
	{ 1, 0 },
	{ 253, 0 },
	{ 1, 0 },
	{ 253, 0 },
	{ 135, 255 }
};

NJS_TEX uv_0000BB38[] = {
	{ 254, 127 },
	{ 254, 33 },
	{ 0, 127 },
	{ 0 },
	{ 255, 221 },
	{ 254, 127 },
	{ 0, 254 },
	{ 0, 127 },
	{ 254, 33 },
	{ 254, 33 },
	{ 0 },
	{ 0 },
	{ 254, 127 },
	{ 255, 221 },
	{ 0, 127 },
	{ 0, 255 },
	{ 254, 33 },
	{ 254, 127 },
	{ 0 },
	{ 0, 127 },
	{ 255, 221 },
	{ 255, 221 },
	{ 0, 255 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_0000BB98[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0000BA9C, NULL, NULL, NULL, uv_0000BAF0, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_0000BAC0, NULL, NULL, NULL, uv_0000BB38, NULL }
};

NJS_VECTOR vertex_0000BBC8[] = {
	{ 9.205823f, -0.016105f, -0.022013f },
	{ 6.595194f, -2.220726f, 1.286119f },
	{ 6.595191f, -0.016104f, 2.594248f },
	{ 1.079732f, -0.016107f, 3.541326f },
	{ 1.079734f, -3.018798f, -1.803682f },
	{ 6.595189f, 2.18852f, 1.286117f },
	{ 1.079729f, 2.986584f, 1.759656f },
	{ 1.079737f, -3.018797f, 1.759658f },
	{ 6.595189f, 2.188519f, -1.330144f },
	{ 1.079727f, 2.986584f, -1.803683f },
	{ 6.595194f, -2.220726f, -1.330143f },
	{ 6.595191f, -0.016104f, -2.638275f },
	{ 1.079732f, -0.016107f, -3.585351f }
};

NJS_VECTOR normal_0000BC64[] = {
	{ 1, 0, 0 },
	{ 0.419604f, -0.7885939f, 0.449502f },
	{ 0.423958f, 0.000001f, 0.905682f },
	{ 0.169237f, 0.000001f, 0.985575f },
	{ 0.165896f, -0.8565249f, -0.488716f },
	{ 0.419603f, 0.788595f, 0.449502f },
	{ 0.165895f, 0.8565249f, 0.488716f },
	{ 0.165896f, -0.8565249f, 0.488716f },
	{ 0.419603f, 0.788595f, -0.449502f },
	{ 0.165895f, 0.8565249f, -0.488716f },
	{ 0.419604f, -0.7885939f, -0.449502f },
	{ 0.423958f, 0, -0.905682f },
	{ 0.169236f, 0, -0.985575f }
};

NJS_MODEL_SADX attach_0000BD00 = { vertex_0000BBC8, normal_0000BC64, LengthOfArray(vertex_0000BBC8), meshlist_0000BB98, matlist_0000BA74, LengthOfArray(meshlist_0000BB98), LengthOfArray(matlist_0000BA74),{ 5.142775f, -0.016107f, -0.022013f }, 5.404233f, NULL };

NJS_OBJECT object_0000BD28 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0000BD00, 3.820553f, 4.749502f, -7.328167f, 0, 0, 0, 1, 1, 1, &object_0000BA40, &object_0000A1DC };

NJS_MATERIAL matlist_0000BD5C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000BD98[] = {
	18, 0, 17,
	16, 0, 18,
	17, 0, 15,
	13, 0, 16,
	15, 0, 14,
	14, 0, 13
};

Sint16 poly_0000BDBC[] = {
	11, 1, 12, 2,
	1, 3, 2, 4,
	9, 11, 10, 12,
	3, 5, 4, 6,
	7, 9, 8, 10,
	5, 7, 6, 8
};

Sint16 poly_0000BDEC[] = {
	16, 4, 13, 6,
	18, 2, 16, 4,
	17, 12, 18, 2,
	15, 10, 17, 12,
	14, 8, 15, 10,
	13, 6, 14, 8
};

NJS_TEX uv_0000BE1C[] = {
	{ 0, 127 },
	{ 0, 127 },
	{ 0, 203 },
	{ 0, 51 },
	{ 0, 127 },
	{ 0, 127 },
	{ 0, 203 },
	{ 0, 127 },
	{ 0, 203 },
	{ 0, 51 },
	{ 0, 127 },
	{ 0, 51 },
	{ 0, 203 },
	{ 0, 127 },
	{ 0, 127 },
	{ 0, 127 },
	{ 0, 127 },
	{ 0, 51 }
};

NJS_TEX uv_0000BE64[] = {
	{ 139, 0 },
	{ 150, 0 },
	{ 191, 245 },
	{ 255, 245 },
	{ 150, 0 },
	{ 139, 0 },
	{ 255, 245 },
	{ 191, 245 },
	{ 115, 0 },
	{ 139, 0 },
	{ 63, 245 },
	{ 191, 245 },
	{ 139, 0 },
	{ 115, 0 },
	{ 191, 245 },
	{ 63, 245 },
	{ 104, 0 },
	{ 115, 0 },
	{ 0, 245 },
	{ 63, 245 },
	{ 115, 0 },
	{ 104, 0 },
	{ 63, 245 },
	{ 0, 245 }
};

NJS_TEX uv_0000BEC4[] = {
	{ 169, 0 },
	{ 170, 255 },
	{ 212, 0 },
	{ 212, 255 },
	{ 127, 0 },
	{ 127, 255 },
	{ 169, 0 },
	{ 170, 255 },
	{ 85, 0 },
	{ 84, 255 },
	{ 127, 0 },
	{ 127, 255 },
	{ 42, 0 },
	{ 42, 255 },
	{ 85, 0 },
	{ 84, 255 },
	{ 0 },
	{ 0, 255 },
	{ 42, 0 },
	{ 42, 255 },
	{ 212, 0 },
	{ 212, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0000BF24[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0000BD98, NULL, NULL, NULL, uv_0000BE1C, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_0000BDBC, NULL, NULL, NULL, uv_0000BE64, NULL },
	{ NJD_MESHSET_4 | 2, 6, poly_0000BDEC, NULL, NULL, NULL, uv_0000BEC4, NULL }
};

NJS_VECTOR vertex_0000BF6C[] = {
	{ -0.00002f, 0, -15.48286f },
	{ -0.6041909f, 0, 0.020337f },
	{ -3.380495f, -0.00001f, -1.359613f },
	{ -0.324834f, 0.596602f, 0.020336f },
	{ -1.690251f, 2.960397f, -1.359613f },
	{ 0.324833f, 0.596602f, 0.020336f },
	{ 1.690242f, 2.960394f, -1.359613f },
	{ 0.60419f, 0, 0.020336f },
	{ 3.380488f, -0.00002f, -1.359613f },
	{ 0.324833f, -0.596602f, 0.020336f },
	{ 1.690241f, -2.960397f, -1.359613f },
	{ -0.324834f, -0.596602f, 0.020336f },
	{ -1.690251f, -2.960397f, -1.359613f },
	{ 1.024095f, 1.76645f, -2.415872f },
	{ 2.048195f, -0.00001f, -2.415872f },
	{ 1.024095f, -1.766452f, -2.415872f },
	{ -1.024105f, 1.766452f, -2.415872f },
	{ -1.024106f, -1.766452f, -2.415872f },
	{ -2.048205f, -0.00001f, -2.415872f }
};

NJS_VECTOR normal_0000C050[] = {
	{ 0.000012f, 0, -1 },
	{ -0.451829f, 0.003507f, 0.8920979f },
	{ -0.996816f, 0.003217f, 0.079673f },
	{ -0.234005f, 0.385806f, 0.89241f },
	{ -0.502297f, 0.861305f, 0.076492f },
	{ 0.227319f, 0.381857f, 0.89583f },
	{ 0.499142f, 0.862743f, 0.080813f },
	{ 0.45183f, -0.003507f, 0.892097f },
	{ 0.996816f, -0.003217f, 0.07967199f },
	{ 0.234006f, -0.385806f, 0.89241f },
	{ 0.502297f, -0.861305f, 0.076492f },
	{ -0.227318f, -0.381857f, 0.89583f },
	{ -0.499143f, -0.862743f, 0.080814f },
	{ 0.414418f, 0.711065f, -0.568019f },
	{ 0.825544f, 0, -0.564338f },
	{ 0.414417f, -0.711065f, -0.568019f },
	{ -0.414417f, 0.711065f, -0.568019f },
	{ -0.414418f, -0.711065f, -0.568019f },
	{ -0.825544f, 0, -0.564338f }
};

NJS_MODEL_SADX attach_0000C134 = { vertex_0000BF6C, normal_0000C050, LengthOfArray(vertex_0000BF6C), meshlist_0000BF24, matlist_0000BD5C, LengthOfArray(meshlist_0000BF24), LengthOfArray(matlist_0000BD5C),{ -0.00003f, 0, -7.731263f }, 8.62579f, NULL };

NJS_OBJECT object_0000C15C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_0000C134, 0.064265f, -2.811321f, 6.614042f, 0, 0, 0, 1.02f, 1.02f, 1.02f, NULL, NULL };

NJS_MATERIAL matlist_0000C190[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_b201, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sno_k01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x2FB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000C208[] = {
	11, 16, 21,
	26, 20, 15,
	15, 10, 26,
	10, 5, 26,
	27, 1, 6
};

Sint16 poly_0000C226[] = {
	6, 11, 27, 21
};

Sint16 poly_0000C22E[] = {
	2, 7, 1, 6,
	7, 12, 6, 11,
	12, 17, 11, 16,
	17, 22, 16, 21,
	22, 24, 21, 27,
	24, 2, 27, 1
};

Sint16 poly_0000C25E[] = {
	3, 8, 2, 7,
	8, 13, 7, 12,
	13, 18, 12, 17
};

Sint16 poly_0000C276[] = {
	4, 9, 3, 8,
	9, 14, 8, 13,
	14, 19, 13, 18
};

Sint16 poly_0000C28E[] = {
	5, 10, 4, 9,
	10, 15, 9, 14,
	15, 20, 14, 19,
	20, 26, 19, 0,
	26, 5, 0, 4
};

Sint16 poly_0000C2B6[] = {
	0, 25, 23
};

Sint16 poly_0000C2BC[] = {
	18, 23, 17, 22,
	19, 0, 18, 23,
	23, 25, 22, 24,
	25, 3, 24, 2,
	0, 4, 25, 3
};

NJS_TEX uv_0000C2E4[] = {
	{ 254, 254 },
	{ 62, 62 },
	{ 0, 254 },
	{ 69, 127 },
	{ 0 },
	{ 254, 80 },
	{ 254, 80 },
	{ 254, 207 },
	{ 69, 127 },
	{ 254, 207 },
	{ 0, 255 },
	{ 69, 127 },
	{ 0 },
	{ 28, 182 },
	{ 256, 1 }
};

NJS_TEX uv_0000C320[] = {
	{ 0, 254 },
	{ 0 },
	{ 255, 254 },
	{ 255, 0 }
};

NJS_TEX uv_0000C330[] = {
	{ 150, 255 },
	{ 254, 127 },
	{ 0, 173 },
	{ 70, 86 },
	{ 254, 127 },
	{ 254, -127 },
	{ 70, 86 },
	{ 70, -86 },
	{ 254, -127 },
	{ 150, -254 },
	{ 70, -86 },
	{ 0, -173 },
	{ 150, -254 },
	{ 184, -127 },
	{ 0, -173 },
	{ 22, -86 },
	{ 184, -127 },
	{ 184, 127 },
	{ 22, -86 },
	{ 22, 86 },
	{ 184, 127 },
	{ 150, 255 },
	{ 22, 86 },
	{ 0, 173 }
};

NJS_TEX uv_0000C390[] = {
	{ 228, 254 },
	{ 255, 191 },
	{ 0, 253 },
	{ 25, 190 },
	{ 255, 191 },
	{ 255, 63 },
	{ 25, 190 },
	{ 25, 64 },
	{ 255, 63 },
	{ 228, 0 },
	{ 25, 64 },
	{ 0, 1 }
};

NJS_TEX uv_0000C3C0[] = {
	{ 507, 252 },
	{ 505, 77 },
	{ 0, 252 },
	{ 0, 77 },
	{ 505, 77 },
	{ 507, -107 },
	{ 0, 77 },
	{ 0, -108 },
	{ 507, -107 },
	{ 508, -253 },
	{ 0, -108 },
	{ 1, -252 }
};

NJS_TEX uv_0000C3F0[] = {
	{ 252, 209 },
	{ 197, 168 },
	{ 0, 255 },
	{ 36, 191 },
	{ 197, 168 },
	{ 197, 86 },
	{ 36, 191 },
	{ 36, 63 },
	{ 197, 86 },
	{ 252, 45 },
	{ 36, 63 },
	{ 0 },
	{ 252, 45 },
	{ 255, 127 },
	{ 0 },
	{ 11, 127 },
	{ 255, 127 },
	{ 252, 209 },
	{ 11, 127 },
	{ 0, 255 }
};

NJS_TEX uv_0000C440[] = {
	{ 0, 13 },
	{ 254, 125 },
	{ 254, -124 }
};

NJS_TEX uv_0000C44C[] = {
	{ 246, -255 },
	{ 254, -127 },
	{ 0, -251 },
	{ 8, -125 },
	{ 0, -253 },
	{ 0, 13 },
	{ 253, -251 },
	{ 254, -124 },
	{ 254, -127 },
	{ 254, 127 },
	{ 8, -125 },
	{ 8, 125 },
	{ 254, 127 },
	{ 246, 254 },
	{ 8, 125 },
	{ 0, 251 },
	{ 0, 13 },
	{ 0, 255 },
	{ 254, 125 },
	{ 253, 252 }
};

NJS_MESHSET_SADX meshlist_0000C49C[] = {
	{ NJD_MESHSET_3 | 0, 5, poly_0000C208, NULL, NULL, NULL, uv_0000C2E4, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0000C226, NULL, NULL, NULL, uv_0000C320, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_0000C22E, NULL, NULL, NULL, uv_0000C330, NULL },
	{ NJD_MESHSET_4 | 2, 3, poly_0000C276, NULL, NULL, NULL, uv_0000C3C0, NULL },
	{ NJD_MESHSET_4 | 3, 5, poly_0000C28E, NULL, NULL, NULL, uv_0000C3F0, NULL },
	{ NJD_MESHSET_3 | 4, 1, poly_0000C2B6, NULL, NULL, NULL, uv_0000C440, NULL },
	{ NJD_MESHSET_4 | 4, 5, poly_0000C2BC, NULL, NULL, NULL, uv_0000C44C, NULL },
	{ NJD_MESHSET_4 | 5, 3, poly_0000C25E, NULL, NULL, NULL, uv_0000C390, NULL }
};

NJS_VECTOR vertex_0000C55C[] = {
	{ 1.988738f, -0.011276f, 4.38092f },
	{ 6.840434f, -3.327638f, 32.30693f },
	{ 6.412078f, -4.897929f, 30.36204f },
	{ 3.777468f, -4.96094f, 18.39984f },
	{ 0.7632599f, -3.644088f, 4.714143f },
	{ -1.051335f, -2.341661f, -2.538207f },
	{ 10.19513f, -1.669594f, 31.39478f },
	{ 11.35534f, -2.454739f, 29.01791f },
	{ 8.784476f, -2.486246f, 17.03839f },
	{ 4.591687f, -1.82759f, 3.673168f },
	{ 2.116751f, -1.176378f, -0.9591849f },
	{ 10.19513f, 1.646492f, 31.39478f },
	{ 11.35534f, 2.431637f, 29.01791f },
	{ 8.784475f, 2.463139f, 17.03839f },
	{ 4.591686f, 1.805404f, 3.673168f },
	{ 2.11675f, 1.154188f, -0.9591849f },
	{ 6.840432f, 3.304535f, 32.30693f },
	{ 6.412075f, 4.874822f, 30.36203f },
	{ 3.777466f, 4.93783f, 18.39984f },
	{ 0.763258f, 3.621898f, 4.714143f },
	{ -1.051336f, 2.319471f, -2.538211f },
	{ 7.91427f, 1.646492f, 32.01496f },
	{ 7.994413f, 2.431635f, 29.93178f },
	{ 5.380209f, 2.463137f, 17.96403f },
	{ 7.994413f, -2.45474f, 29.93178f },
	{ 5.38021f, -2.486248f, 17.96404f },
	{ 0.096233f, -0.011212f, -2.595846f },
	{ 7.91427f, -1.669596f, 32.01496f }
};

NJS_VECTOR normal_0000C6AC[] = {
	{ -0.958351f, -0.000366f, 0.285593f },
	{ -0.600379f, -0.222007f, 0.768282f },
	{ -0.604784f, -0.692722f, 0.392903f },
	{ -0.709041f, -0.693952f, 0.125268f },
	{ -0.693417f, -0.720418f, 0.013048f },
	{ -0.647639f, -0.489094f, -0.584252f },
	{ 0.622493f, -0.288367f, 0.727562f },
	{ 0.857539f, -0.496158f, 0.135847f },
	{ 0.814524f, -0.533987f, -0.226734f },
	{ 0.774758f, -0.513961f, -0.368232f },
	{ 0.677765f, -0.432292f, -0.594775f },
	{ 0.622493f, 0.288366f, 0.727562f },
	{ 0.857539f, 0.496158f, 0.135847f },
	{ 0.8141209f, 0.533928f, -0.228316f },
	{ 0.777669f, 0.521634f, -0.350897f },
	{ 0.688913f, 0.448694f, -0.5692739f },
	{ -0.600375f, 0.222001f, 0.7682869f },
	{ -0.604785f, 0.692718f, 0.392908f },
	{ -0.698157f, 0.695974f, 0.167918f },
	{ -0.680327f, 0.728973f, 0.07584599f },
	{ -0.650486f, 0.497922f, -0.573535f },
	{ -0.546797f, -0.18329f, 0.816957f },
	{ -0.95208f, -0.304022f, 0.033381f },
	{ -0.9331599f, -0.266944f, 0.240737f },
	{ -0.95208f, 0.304021f, 0.03338f },
	{ -0.937368f, 0.266934f, 0.2238f },
	{ -0.375775f, -0.001411f, -0.9267099f },
	{ -0.546798f, 0.183289f, 0.816956f }
};

NJS_MODEL_SADX attach_0000C7FC = { vertex_0000C55C, normal_0000C6AC, LengthOfArray(vertex_0000C55C), meshlist_0000C49C, matlist_0000C190, LengthOfArray(meshlist_0000C49C), LengthOfArray(matlist_0000C190),{ 5.152003f, -0.011555f, 14.85554f }, 18.53593f, NULL };

NJS_OBJECT object_0000C824 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0000C7FC, 2.897352f, -2.68409f, -8.27365f, 0x68, 0, 0, 1, 1, 1, NULL, &object_0000C15C };

NJS_MATERIAL matlist_0000C858[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_jyoin, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_jyoin, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000C880[] = {
	6, 7, 2, 3,
	0, 1, 4, 5
};

Sint16 poly_0000C890[] = {
	3, 7, 1, 5,
	7, 6, 5, 4
};

NJS_TEX uv_0000C8A0[] = {
	{ 127, 0 },
	{ 255, 127 },
	{ 0, 127 },
	{ 127, 255 },
	{ 0, 127 },
	{ 127, 255 },
	{ 127, 0 },
	{ 255, 127 }
};

NJS_TEX uv_0000C8C0[] = {
	{ 1, -253 },
	{ 0, 255 },
	{ 254, -252 },
	{ 255, 255 },
	{ 0, 255 },
	{ 1, -253 },
	{ 255, 255 },
	{ 254, -252 }
};

NJS_MESHSET_SADX meshlist_0000C8E0[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_0000C880, NULL, NULL, NULL, uv_0000C8A0, NULL },
	{ NJD_MESHSET_4 | 1, 2, poly_0000C890, NULL, NULL, NULL, uv_0000C8C0, NULL }
};

NJS_VECTOR vertex_0000C910[] = {
	{ -0.7071069f, -1.535f, 0 },
	{ 0, -1.535f, -0.7071069f },
	{ -0.7071069f, 1.535f, 0 },
	{ 0, 1.535f, -0.7071069f },
	{ 0, -1.535f, 0.7071069f },
	{ 0.7071069f, -1.535f, 0 },
	{ 0, 1.535f, 0.7071069f },
	{ 0.7071069f, 1.535f, 0 }
};

NJS_VECTOR normal_0000C970[] = {
	{ 0, -1, 0 },
	{ 0.5f, -0.7071069f, -0.5f },
	{ 0, 1, 0 },
	{ 0.5f, 0.7071069f, -0.5f },
	{ 0.5f, -0.7071069f, 0.5f },
	{ 0.816497f, -0.57735f, 0 },
	{ 0.5f, 0.7071069f, 0.5f },
	{ 0.816497f, 0.57735f, 0 }
};

NJS_MODEL_SADX attach_0000C9D0 = { vertex_0000C910, normal_0000C970, LengthOfArray(vertex_0000C910), meshlist_0000C8E0, matlist_0000C858, LengthOfArray(meshlist_0000C8E0), LengthOfArray(matlist_0000C858),{ 0 }, 1.690037f, NULL };

NJS_OBJECT object_0000C9F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0000C9D0, 2.879122f, -2.617923f, -7.546708f, 0, 0, 0, 1, 1, 1, NULL, &object_0000C824 };

NJS_MATERIAL matlist_0000CA2C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_waku01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_m1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sky_ref, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_seet01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sor_whit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000CACC[] = {
	0, 2, 16,
	0, 13, 10,
	0, 5, 2,
	0, 8, 5,
	0, 16, 13,
	0, 10, 8
};

Sint16 poly_0000CAF0[] = {
	16, 2, 15, 1,
	2, 5, 1, 4,
	10, 13, 9, 12,
	5, 8, 4, 7,
	13, 16, 12, 15,
	8, 10, 7, 9
};

Sint16 poly_0000CB20[] = {
	1, 4, 46, 3,
	15, 1, 14, 46,
	9, 12, 47, 11,
	4, 7, 3, 6,
	12, 15, 11, 14,
	7, 9, 6, 47,
	46, 34, 31, 33,
	47, 42, 39, 41,
	45, 46, 44, 31,
	34, 37, 33, 36,
	37, 47, 36, 39,
	42, 45, 41, 44
};

Sint16 poly_0000CB80[] = {
	17, 18, 20,
	17, 26, 28,
	17, 20, 22,
	17, 28, 18,
	17, 22, 24,
	17, 24, 26
};

Sint16 poly_0000CBA4[] = {
	19, 21, 18, 20,
	27, 29, 26, 28,
	21, 23, 20, 22,
	29, 19, 28, 18,
	23, 25, 22, 24,
	25, 27, 24, 26
};

Sint16 poly_0000CBD4[] = {
	48, 49, 19, 21,
	53, 48, 29, 19,
	49, 50, 21, 23,
	51, 52, 25, 27,
	50, 51, 23, 25,
	52, 53, 27, 29
};

Sint16 poly_0000CC04[] = {
	40, 43, 47, 42,
	30, 32, 45, 46,
	32, 35, 46, 34,
	35, 38, 34, 37,
	43, 30, 42, 45,
	38, 40, 37, 47
};

Sint16 poly_0000CC34[] = {
	31, 33, 48, 49,
	44, 31, 53, 48,
	33, 36, 49, 50,
	36, 39, 50, 51,
	41, 44, 52, 53,
	39, 41, 51, 52
};

NJS_TEX uv_0000CC64[] = {
	{ 130, 255 },
	{ 0, 1 },
	{ 254, 1 },
	{ 130, 255 },
	{ 0, 1 },
	{ 254, 1 },
	{ 130, 255 },
	{ 0, 1 },
	{ 254, 1 },
	{ 130, 255 },
	{ 0, 1 },
	{ 254, 1 },
	{ 130, 255 },
	{ 0, 1 },
	{ 254, 1 },
	{ 130, 255 },
	{ 0, 1 },
	{ 254, 1 }
};

NJS_TEX uv_0000CCAC[] = {
	{ 154, 0 },
	{ 182, 0 },
	{ 191, 242 },
	{ 255, 242 },
	{ 182, 0 },
	{ 154, 0 },
	{ 255, 242 },
	{ 191, 242 },
	{ 72, 0 },
	{ 100, 0 },
	{ 0, 254 },
	{ 63, 242 },
	{ 154, 0 },
	{ 100, 0 },
	{ 191, 242 },
	{ 63, 242 },
	{ 100, 0 },
	{ 154, 0 },
	{ 63, 242 },
	{ 191, 242 },
	{ 100, 0 },
	{ 72, 0 },
	{ 63, 242 },
	{ 0, 254 }
};

NJS_TEX uv_0000CD0C[] = {
	{ 231, 127 },
	{ 179, 49 },
	{ 255, 127 },
	{ 195, 0 },
	{ 179, 205 },
	{ 231, 127 },
	{ 195, 255 },
	{ 255, 127 },
	{ 23, 127 },
	{ 75, 205 },
	{ 0, 127 },
	{ 59, 255 },
	{ 179, 49 },
	{ 75, 49 },
	{ 195, 0 },
	{ 59, 0 },
	{ 75, 205 },
	{ 179, 205 },
	{ 59, 255 },
	{ 195, 255 },
	{ 75, 49 },
	{ 23, 127 },
	{ 59, 0 },
	{ 0, 127 },
	{ 250, 147 },
	{ 177, 20 },
	{ 255, 143 },
	{ 192, 0 },
	{ 4, 147 },
	{ 77, 243 },
	{ 0, 143 },
	{ 62, 255 },
	{ 177, 243 },
	{ 250, 147 },
	{ 192, 254 },
	{ 255, 143 },
	{ 177, 20 },
	{ 77, 20 },
	{ 192, 0 },
	{ 62, 0 },
	{ 77, 20 },
	{ 4, 147 },
	{ 62, 0 },
	{ 0, 143 },
	{ 77, 243 },
	{ 177, 243 },
	{ 62, 255 },
	{ 192, 254 }
};

NJS_TEX uv_0000CDCC[] = {
	{ 126, 256 },
	{ 254, 1 },
	{ 1, 1 },
	{ 126, 256 },
	{ 254, 1 },
	{ 1, 1 },
	{ 126, 256 },
	{ 254, 1 },
	{ 1, 1 },
	{ 126, 256 },
	{ 254, 1 },
	{ 1, 1 },
	{ 126, 256 },
	{ 254, 1 },
	{ 1, 1 },
	{ 126, 256 },
	{ 254, 1 },
	{ 1, 1 }
};

NJS_TEX uv_0000CE14[] = {
	{ 254, 127 },
	{ 191, 0 },
	{ 228, 120 },
	{ 178, 42 },
	{ 63, 255 },
	{ 191, 255 },
	{ 76, 197 },
	{ 178, 197 },
	{ 191, 0 },
	{ 63, 0 },
	{ 178, 42 },
	{ 76, 42 },
	{ 191, 255 },
	{ 254, 127 },
	{ 178, 197 },
	{ 228, 120 },
	{ 63, 0 },
	{ 0, 127 },
	{ 76, 42 },
	{ 26, 120 },
	{ 0, 127 },
	{ 63, 255 },
	{ 26, 120 },
	{ 76, 197 }
};

NJS_TEX uv_0000CE74[] = {
	{ 255, 254 },
	{ 0, 254 },
	{ 254, 1 },
	{ 0, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 254, 1 },
	{ 0, 1 },
	{ 200, 254 },
	{ 55, 254 },
	{ 188, 0 },
	{ 70, 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 254, 1 },
	{ 0, 1 },
	{ 255, 254 },
	{ 0, 254 },
	{ 254, 1 },
	{ 0, 1 },
	{ 200, 254 },
	{ 55, 254 },
	{ 188, 0 },
	{ 70, 0 }
};

NJS_TEX uv_0000CED4[] = {
	{ -53, 127 },
	{ -54, 182 },
	{ 178, 145 },
	{ 200, 255 },
	{ -54, 182 },
	{ -54, 127 },
	{ 200, 255 },
	{ 186, 145 },
	{ -54, 127 },
	{ -54, 72 },
	{ 186, 145 },
	{ 200, 0 },
	{ -54, 72 },
	{ -54, 72 },
	{ 200, 0 },
	{ 200, 0 },
	{ -54, 182 },
	{ -54, 182 },
	{ 200, 255 },
	{ 200, 255 },
	{ -54, 72 },
	{ -53, 127 },
	{ 200, 0 },
	{ 178, 145 }
};

NJS_TEX uv_0000CF34[] = {
	{ 160, 143 },
	{ 160, 0 },
	{ 176, 140 },
	{ 176, 59 },
	{ 160, 254 },
	{ 160, 143 },
	{ 176, 213 },
	{ 176, 140 },
	{ 160, 0 },
	{ 160, 0 },
	{ 176, 59 },
	{ 176, 59 },
	{ 160, 0 },
	{ 159, 143 },
	{ 176, 59 },
	{ 176, 140 },
	{ 160, 255 },
	{ 160, 254 },
	{ 176, 213 },
	{ 176, 213 },
	{ 159, 143 },
	{ 160, 255 },
	{ 176, 140 },
	{ 176, 213 }
};

NJS_MESHSET_SADX meshlist_0000CF94[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0000CACC, NULL, NULL, NULL, uv_0000CC64, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_0000CAF0, NULL, NULL, NULL, uv_0000CCAC, NULL },
	{ NJD_MESHSET_4 | 2, 12, poly_0000CB20, NULL, NULL, NULL, uv_0000CD0C, NULL },
	{ NJD_MESHSET_3 | 3, 6, poly_0000CB80, NULL, NULL, NULL, uv_0000CDCC, NULL },
	{ NJD_MESHSET_4 | 4, 6, poly_0000CBA4, NULL, NULL, NULL, uv_0000CE14, NULL },
	{ NJD_MESHSET_4 | 5, 6, poly_0000CBD4, NULL, NULL, NULL, uv_0000CE74, NULL },
	{ NJD_MESHSET_4 | 6, 6, poly_0000CC04, NULL, NULL, NULL, uv_0000CED4, NULL },
	{ NJD_MESHSET_4 | 7, 6, poly_0000CC34, NULL, NULL, NULL, uv_0000CF34, NULL }
};

NJS_VECTOR vertex_0000D054[] = {
	{ -0.012097f, -2.795541f, -10.50966f },
	{ 3.203437f, -2.795545f, -7.664138f },
	{ 1.36748f, -2.795543f, -11.39834f },
	{ 2.090621f, 2.657043f, 5.745132f },
	{ 1.595668f, 0.5397559f, -7.664137f },
	{ 0.67769f, -1.36458f, -11.39834f },
	{ -2.114821f, 2.657043f, 5.745132f },
	{ -1.61987f, 0.5397559f, -7.664138f },
	{ -0.70189f, -1.364581f, -11.39834f },
	{ -3.227637f, -2.795546f, -7.47624f },
	{ -1.391679f, -2.795543f, -11.38496f },
	{ -2.11482f, -8.248139f, 5.745128f },
	{ -1.619868f, -6.130846f, -7.664141f },
	{ -0.70189f, -4.226506f, -11.39835f },
	{ 2.090621f, -8.248137f, 5.745128f },
	{ 1.595668f, -6.130846f, -7.66414f },
	{ 0.67769f, -4.226505f, -11.39835f },
	{ 0.156482f, -2.322719f, 11.34477f },
	{ 1.519797f, -2.322717f, 21.28281f },
	{ 1.873927f, -2.512807f, 17.73432f },
	{ 0.83814f, -0.26953f, 21.28281f },
	{ 1.015204f, 0.865609f, 17.73432f },
	{ -0.52518f, -0.26953f, 21.28281f },
	{ -0.702245f, 0.865609f, 17.73432f },
	{ -1.20684f, -2.322717f, 21.28281f },
	{ -1.560969f, -2.512808f, 17.73432f },
	{ -0.52518f, -4.375906f, 21.28281f },
	{ -0.702245f, -5.891224f, 17.73432f },
	{ 0.83814f, -4.375906f, 21.28281f },
	{ 1.015204f, -5.891223f, 17.73432f },
	{ 0.677686f, -5.397391f, 3.504361f },
	{ 4.099135f, -2.471612f, 9.113799f },
	{ 1.367476f, -1.490149f, 3.504363f },
	{ 2.090617f, 9.266097f, 9.113804f },
	{ 1.595664f, 7.616892f, 5.875329f },
	{ 0.677686f, 2.417096f, 3.504365f },
	{ -2.114823f, 9.266097f, 9.113804f },
	{ -1.619874f, 7.616892f, 5.875329f },
	{ -0.701894f, 2.417094f, 3.504365f },
	{ -4.123342f, -2.471615f, 9.081683f },
	{ -1.391683f, -1.490149f, 3.509717f },
	{ -2.114821f, -11.57752f, 9.113793f },
	{ -1.619872f, -10.59719f, 5.875322f },
	{ -0.701894f, -5.397393f, 3.504361f },
	{ 2.090617f, -11.57752f, 9.113793f },
	{ 1.595664f, -10.59719f, 5.875322f },
	{ 3.941012f, -2.795546f, 5.74513f },
	{ -3.965215f, -2.795547f, 5.664844f },
	{ 4.028087f, -2.211808f, 11.26674f },
	{ 2.323039f, 4.430833f, 11.26672f },
	{ -2.188939f, 4.430837f, 11.26673f },
	{ -3.912992f, -2.211801f, 11.25601f },
	{ -2.188947f, -8.191515f, 11.26674f },
	{ 2.323028f, -8.191521f, 11.26674f }
};

NJS_VECTOR normal_0000D2DC[] = {
	{ -0.002281f, 0, -0.999997f },
	{ 0.968529f, -0.000315f, -0.248899f },
	{ 0.439247f, 0.000001f, -0.898366f },
	{ 0.5399359f, 0.828108f, -0.150686f },
	{ 0.527352f, 0.791187f, -0.309715f },
	{ 0.268484f, 0.381982f, -0.884311f },
	{ -0.5399629f, 0.831873f, -0.128165f },
	{ -0.532329f, 0.792513f, -0.297573f },
	{ -0.27677f, 0.377747f, -0.883575f },
	{ -0.9711739f, 0.000889f, -0.238372f },
	{ -0.451364f, 0.000854f, -0.892339f },
	{ -0.5375969f, -0.829601f, -0.150835f },
	{ -0.529075f, -0.7891369f, -0.311997f },
	{ -0.274488f, -0.375788f, -0.885121f },
	{ 0.542559f, -0.8303249f, -0.127238f },
	{ 0.530109f, -0.794289f, -0.296798f },
	{ 0.268484f, -0.381981f, -0.884311f },
	{ 0.000001f, 0, 1 },
	{ 0.226709f, 0.03228f, 0.973427f },
	{ 0.9743029f, -0.012786f, 0.22488f },
	{ 0.339508f, 0.100072f, 0.9352649f },
	{ 0.576296f, 0.7143289f, 0.397011f },
	{ -0.371959f, 0.109544f, 0.9217629f },
	{ -0.572837f, 0.717899f, 0.395573f },
	{ -0.226429f, 0.039553f, 0.973224f },
	{ -0.972019f, -0.012366f, 0.234576f },
	{ -0.341022f, -0.06427199f, 0.9378549f },
	{ -0.546024f, -0.748587f, 0.376133f },
	{ 0.371543f, -0.07091f, 0.9257039f },
	{ 0.5535229f, -0.749527f, 0.363072f },
	{ 0.380304f, -0.279316f, -0.881676f },
	{ 0.999274f, -0.030669f, 0.022587f },
	{ 0.699708f, 0.035387f, -0.713552f },
	{ 0.536738f, 0.806236f, 0.248789f },
	{ 0.5138029f, 0.569056f, -0.642013f },
	{ 0.489151f, 0.288894f, -0.822965f },
	{ -0.5490519f, 0.7916059f, 0.268145f },
	{ -0.54053f, 0.594306f, -0.595507f },
	{ -0.438644f, 0.277955f, -0.8545949f },
	{ -0.999105f, -0.022473f, 0.035827f },
	{ -0.695893f, 0.018582f, -0.717905f },
	{ -0.538642f, -0.804371f, 0.250704f },
	{ -0.490364f, -0.638335f, -0.593356f },
	{ -0.450483f, -0.303338f, -0.839673f },
	{ 0.5395139f, -0.792752f, 0.283671f },
	{ 0.507946f, -0.664287f, -0.548373f },
	{ 0.9455f, -0.030372f, -0.324202f },
	{ -0.947315f, -0.035254f, -0.318358f },
	{ 0.9656129f, -0.00578f, 0.25992f },
	{ 0.643919f, 0.476075f, 0.598933f },
	{ -0.6977879f, 0.503269f, 0.509717f },
	{ -0.965212f, -0.000377f, 0.26147f },
	{ -0.639365f, -0.547011f, 0.540361f },
	{ 0.693481f, -0.577144f, 0.431264f }
};

NJS_MODEL_SADX attach_0000D564 = { vertex_0000D054, normal_0000D2DC, LengthOfArray(vertex_0000D054), meshlist_0000CF94, matlist_0000CA2C, LengthOfArray(meshlist_0000CF94), LengthOfArray(matlist_0000CA2C),{ -0.012103f, -1.155712f, 4.942232f }, 19.38114f, NULL };

NJS_OBJECT object_0000D58C = { NJD_EVAL_UNIT_SCL, &attach_0000D564, 10.43945f, -0.006533f, 4.000384f, 0, 0xFFFF, 0, 1, 1, 1, &object_0000C9F8, NULL };

NJS_MATERIAL matlist_0000D5C0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_neji, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000D5E8[] = {
	2, 5, 0,
	10, 1, 0,
	5, 8, 0,
	0, 1, 2,
	8, 11, 0,
	0, 11, 10
};

Sint16 poly_0000D60C[] = {
	3, 6, 2, 5,
	7, 3, 1, 2,
	6, 9, 5, 8,
	12, 4, 11, 10,
	9, 12, 8, 11,
	4, 7, 10, 1
};

NJS_TEX uv_0000D63C[] = {
	{ 253, 0 },
	{ 1, 0 },
	{ 135, 255 },
	{ 253, 0 },
	{ 1, 0 },
	{ 135, 255 },
	{ 253, 0 },
	{ 1, 0 },
	{ 135, 255 },
	{ 135, 255 },
	{ 253, 0 },
	{ 1, 0 },
	{ 253, 0 },
	{ 1, 0 },
	{ 135, 255 },
	{ 135, 255 },
	{ 253, 0 },
	{ 1, 0 }
};

NJS_TEX uv_0000D684[] = {
	{ 0, 127 },
	{ 0 },
	{ 254, 127 },
	{ 254, 33 },
	{ 0, 254 },
	{ 0, 127 },
	{ 255, 221 },
	{ 254, 127 },
	{ 0 },
	{ 0 },
	{ 254, 33 },
	{ 254, 33 },
	{ 0, 127 },
	{ 0, 255 },
	{ 254, 127 },
	{ 255, 221 },
	{ 0 },
	{ 0, 127 },
	{ 254, 33 },
	{ 254, 127 },
	{ 0, 255 },
	{ 0, 254 },
	{ 255, 221 },
	{ 255, 221 }
};

NJS_MESHSET_SADX meshlist_0000D6E4[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_0000D5E8, NULL, NULL, NULL, uv_0000D63C, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_0000D60C, NULL, NULL, NULL, uv_0000D684, NULL }
};

NJS_VECTOR vertex_0000D714[] = {
	{ 9.205823f, -0.016105f, 0.022013f },
	{ 6.595194f, -2.220726f, -1.286119f },
	{ 6.595191f, -0.016104f, -2.594248f },
	{ 1.079732f, -0.016107f, -3.541326f },
	{ 1.079734f, -3.018798f, 1.803682f },
	{ 6.595189f, 2.18852f, -1.286117f },
	{ 1.079729f, 2.986584f, -1.759656f },
	{ 1.079737f, -3.018797f, -1.759658f },
	{ 6.595189f, 2.188519f, 1.330144f },
	{ 1.079727f, 2.986584f, 1.803683f },
	{ 6.595194f, -2.220726f, 1.330143f },
	{ 6.595191f, -0.016104f, 2.638275f },
	{ 1.079732f, -0.016107f, 3.585351f }
};

NJS_VECTOR normal_0000D7B0[] = {
	{ 1, 0, 0 },
	{ 0.419604f, -0.7885939f, -0.449502f },
	{ 0.423958f, 0.000001f, -0.905682f },
	{ 0.169237f, 0.000001f, -0.985575f },
	{ 0.165896f, -0.8565249f, 0.488716f },
	{ 0.419603f, 0.788595f, -0.449502f },
	{ 0.165895f, 0.8565249f, -0.488716f },
	{ 0.165896f, -0.8565249f, -0.488716f },
	{ 0.419603f, 0.788595f, 0.449502f },
	{ 0.165895f, 0.8565249f, 0.488716f },
	{ 0.419604f, -0.7885939f, 0.449502f },
	{ 0.423958f, 0, 0.905682f },
	{ 0.169236f, 0, 0.985575f }
};

NJS_MODEL_SADX attach_0000D84C = { vertex_0000D714, normal_0000D7B0, LengthOfArray(vertex_0000D714), meshlist_0000D6E4, matlist_0000D5C0, LengthOfArray(meshlist_0000D6E4), LengthOfArray(matlist_0000D5C0),{ 5.142775f, -0.016107f, 0.022013f }, 5.404233f, NULL };

NJS_OBJECT object_0000D874 = { NJD_EVAL_UNIT_SCL, &attach_0000D84C, -3.820553f, 4.749502f, -7.328167f, 0, 0xFFFF8001, 0, 1, 1, 1, &object_0000D58C, &object_0000BD28 };

NJS_MATERIAL matlist_0000D8A8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_blackm2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_whit_s, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_seet01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_b03, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_b033, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_waku01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_rbrack, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_console2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_waku01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 10, EGM1TexName_sno_ref11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sor_whit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_m01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_b01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_b02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_orenge, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sor_whit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_sor_whit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_snolight, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_egm_r01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, EGM1TexName_eg_seet01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000DA4C[] = {
	6, 1, 0,
	13, 6, 0,
	20, 13, 0,
	25, 20, 0,
	31, 25, 0,
	38, 31, 0,
	45, 38, 0,
	1, 45, 0
};

Sint16 poly_0000DA7C[] = {
	1, 6, 2, 7,
	6, 13, 7, 14,
	13, 20, 14, 21,
	20, 25, 21, 26,
	25, 31, 26, 32,
	31, 38, 32, 39,
	38, 45, 39, 46,
	45, 1, 46, 2,
	71, 39, 56, 46,
	56, 46, 55, 2,
	55, 2, 54, 7,
	54, 7, 53, 14,
	53, 14, 52, 21,
	52, 21, 51, 26,
	51, 26, 72, 32,
	63, 41, 64, 34,
	32, 39, 72, 71,
	64, 72, 63, 71
};

Sint16 poly_0000DB0C[] = {
	8, 9, 58,
	9, 10, 61,
	34, 59, 29,
	49, 60, 41,
	3, 8, 58,
	57, 15, 22,
	29, 28, 34,
	30, 29, 59,
	62, 17, 16,
	57, 16, 15,
	60, 49, 50,
	41, 48, 49,
	61, 58, 9,
	16, 57, 62,
	170, 167, 168,
	180, 178, 177,
	177, 179, 180,
	168, 169, 170
};

Sint16 poly_0000DB78[] = {
	54, 8, 55, 3,
	53, 15, 54, 8,
	52, 22, 53, 15,
	51, 27, 52, 22,
	22, 27, 23, 28,
	23, 28, 24, 29,
	24, 29, 62, 30,
	72, 33, 51, 27,
	28, 27, 34, 33,
	71, 40, 63, 41,
	56, 47, 71, 40,
	55, 3, 56, 47,
	47, 3, 48, 4,
	48, 4, 49, 5,
	49, 5, 50, 61,
	41, 40, 48, 47,
	34, 33, 64, 72,
	176, 181, 177, 179,
	182, 181, 173, 174,
	181, 182, 179, 180,
	181, 176, 174, 171,
	182, 175, 180, 178,
	172, 173, 169, 170,
	174, 171, 167, 168,
	173, 174, 170, 167,
	175, 182, 172, 173
};

Sint16 poly_0000DC48[] = {
	66, 62, 30,
	50, 61, 65,
	76, 11, 65,
	66, 18, 75
};

Sint16 poly_0000DC60[] = {
	65, 61, 76, 10,
	75, 18, 76, 11,
	75, 17, 66, 62
};

Sint16 poly_0000DC78[] = {
	12, 69, 65,
	66, 70, 73,
	66, 73, 68,
	65, 11, 67,
	68, 18, 66,
	67, 12, 65
};

Sint16 poly_0000DC9C[] = {
	68, 19, 67, 12,
	67, 11, 68, 18
};

Sint16 poly_0000DCAC[] = {
	8, 15, 9, 16
};

Sint16 poly_0000DCB4[] = {
	9, 16, 10, 17,
	76, 10, 75, 17
};

Sint16 poly_0000DCC4[] = {
	22, 23, 57,
	57, 23, 24,
	57, 24, 62,
	61, 5, 58,
	5, 4, 58,
	58, 4, 3
};

Sint16 poly_0000DCE8[] = {
	34, 35, 59,
	60, 42, 41
};

Sint16 poly_0000DCF4[] = {
	59, 35, 30, 36,
	34, 41, 35, 42,
	35, 42, 36, 43,
	50, 43, 60, 42
};

Sint16 poly_0000DD14[] = {
	30, 36, 74, 37,
	36, 43, 37, 44,
	43, 50, 44, 69
};

Sint16 poly_0000DD2C[] = {
	30, 74, 66,
	65, 69, 50
};

Sint16 poly_0000DD38[] = {
	80, 81, 79,
	83, 85, 86,
	82, 84, 85,
	85, 83, 82,
	79, 78, 80,
	77, 79, 81
};

Sint16 poly_0000DD5C[] = {
	80, 82, 81, 83,
	81, 83, 77, 86
};

Sint16 poly_0000DD6C[] = {
	159, 162, 166,
	157, 154, 164,
	155, 156, 165
};

Sint16 poly_0000DD7E[] = {
	227, 229, 219, 221,
	223, 225, 215, 217,
	229, 223, 221, 215,
	219, 221, 228, 230,
	222, 216, 229, 223,
	230, 224, 222, 216,
	228, 230, 220, 222,
	221, 215, 230, 224,
	215, 217, 224, 226,
	220, 222, 227, 229,
	224, 226, 216, 218,
	216, 218, 223, 225,
	146, 148, 138, 140,
	150, 152, 142, 144,
	139, 141, 146, 148,
	147, 149, 139, 141,
	143, 145, 150, 152,
	138, 140, 147, 149,
	144, 138, 153, 147,
	151, 153, 143, 145,
	153, 147, 145, 139,
	145, 139, 152, 146,
	142, 144, 151, 153,
	152, 146, 144, 138,
	158, 163, 155, 156,
	156, 157, 165, 164,
	163, 158, 161, 160,
	162, 159, 157, 154,
	163, 162, 156, 157,
	162, 163, 166, 161
};

Sint16 poly_0000DE6E[] = {
	235, 236, 237, 238,
	185, 186, 183, 184
};

Sint16 poly_0000DE7E[] = {
	231, 232, 233, 234,
	197, 198, 195, 196
};

Sint16 poly_0000DE8E[] = {
	211, 212, 213, 214,
	189, 190, 187, 188
};

Sint16 poly_0000DE9E[] = {
	206, 205, 208,
	208, 207, 206,
	202, 199, 200,
	200, 201, 202
};

Sint16 poly_0000DEB6[] = {
	210, 209, 206, 205,
	200, 199, 204, 203
};

Sint16 poly_0000DEC6[] = {
	87, 89, 95, 97,
	91, 93, 99, 101,
	95, 97, 88, 90,
	88, 90, 96, 98,
	99, 101, 92, 94,
	96, 98, 87, 89,
	102, 96, 93, 87,
	92, 94, 100, 102,
	94, 88, 102, 96,
	101, 95, 94, 88,
	100, 102, 91, 93,
	93, 87, 101, 95
};

Sint16 poly_0000DF26[] = {
	111, 113, 103, 105,
	115, 117, 107, 109,
	104, 106, 111, 113,
	112, 114, 104, 106,
	108, 110, 115, 117,
	103, 105, 112, 114,
	109, 103, 118, 112,
	116, 118, 108, 110,
	118, 112, 110, 104,
	110, 104, 117, 111,
	107, 109, 116, 118,
	117, 111, 109, 103
};

Sint16 poly_0000DF86[] = {
	119, 122, 137,
	119, 125, 122,
	119, 137, 134,
	119, 128, 125,
	119, 134, 131,
	119, 131, 128
};

Sint16 poly_0000DFAA[] = {
	137, 122, 136, 121,
	136, 121, 135, 120,
	121, 124, 120, 123,
	122, 125, 121, 124,
	134, 137, 133, 136,
	133, 136, 132, 135,
	124, 127, 123, 126,
	125, 128, 124, 127,
	131, 134, 130, 133,
	130, 133, 129, 132,
	127, 130, 126, 129,
	128, 131, 127, 130
};

Sint16 poly_0000E00A[] = {
	191, 192, 193, 194
};

NJS_TEX uv_0000E014[] = {
	{ 153, 217 },
	{ 187, 217 },
	{ 128, 254 },
	{ 103, 217 },
	{ 153, 217 },
	{ 128, 254 },
	{ 68, 217 },
	{ 103, 217 },
	{ 128, 254 },
	{ 68, 217 },
	{ 68, 217 },
	{ 128, 254 },
	{ 102, 217 },
	{ 68, 217 },
	{ 128, 254 },
	{ 152, 217 },
	{ 102, 217 },
	{ 128, 254 },
	{ 187, 217 },
	{ 152, 217 },
	{ 128, 254 },
	{ 187, 217 },
	{ 187, 217 },
	{ 128, 254 }
};

NJS_TEX uv_0000E074[] = {
	{ 187, 217 },
	{ 153, 217 },
	{ 238, 129 },
	{ 174, 129 },
	{ 153, 217 },
	{ 103, 217 },
	{ 174, 129 },
	{ 83, 129 },
	{ 103, 217 },
	{ 68, 217 },
	{ 83, 129 },
	{ 18, 129 },
	{ 68, 217 },
	{ 68, 217 },
	{ 18, 129 },
	{ 17, 129 },
	{ 68, 217 },
	{ 102, 217 },
	{ 17, 129 },
	{ 81, 129 },
	{ 102, 217 },
	{ 152, 217 },
	{ 81, 129 },
	{ 172, 129 },
	{ 152, 217 },
	{ 187, 217 },
	{ 172, 129 },
	{ 237, 129 },
	{ 187, 217 },
	{ 187, 217 },
	{ 237, 129 },
	{ 238, 129 },
	{ 179, 41 },
	{ 172, 129 },
	{ 254, 41 },
	{ 237, 129 },
	{ 254, 41 },
	{ 237, 129 },
	{ 255, 41 },
	{ 238, 129 },
	{ 255, 41 },
	{ 238, 129 },
	{ 181, 41 },
	{ 174, 129 },
	{ 181, 41 },
	{ 174, 129 },
	{ 76, 41 },
	{ 83, 129 },
	{ 76, 41 },
	{ 83, 129 },
	{ 1, 41 },
	{ 18, 129 },
	{ 1, 41 },
	{ 18, 129 },
	{ 0, 41 },
	{ 17, 129 },
	{ 0, 41 },
	{ 17, 129 },
	{ 74, 41 },
	{ 81, 129 },
	{ 182, 255 },
	{ 191, 255 },
	{ 71, 255 },
	{ 62, 255 },
	{ 81, 129 },
	{ 172, 129 },
	{ 74, 41 },
	{ 179, 41 },
	{ 71, -44 },
	{ 74, 41 },
	{ 182, -44 },
	{ 179, 41 }
};

NJS_TEX uv_0000E194E[] = {
	{ 174, 270 },
	{ 177, 167 },
	{ 203, 201 },
	{ 177, 167 },
	{ 174, 72 },
	{ 210, 129 },
	{ 77, 201 },
	{ 65, 160 },
	{ 16, 160 },
	{ 237, 160 },
	{ 188, 160 },
	{ 175, 201 },
	{ 238, 270 },
	{ 174, 270 },
	{ 203, 201 },
	{ 52, 201 },
	{ 82, 270 },
	{ 17, 270 },
	{ 16, 160 },
	{ 5, 201 },
	{ 77, 201 },
	{ 60, 143 },
	{ 16, 160 },
	{ 65, 160 },
	{ 45, 129 },
	{ 82, 72 },
	{ 78, 167 },
	{ 52, 201 },
	{ 78, 167 },
	{ 82, 270 },
	{ 188, 160 },
	{ 237, 160 },
	{ 193, 143 },
	{ 175, 201 },
	{ 248, 201 },
	{ 237, 160 },
	{ 210, 129 },
	{ 203, 201 },
	{ 177, 167 },
	{ 78, 167 },
	{ 52, 201 },
	{ 45, 129 },
	{ 230, 223 },
	{ 236, 258 },
	{ 245, 245 },
	{ 24, 223 },
	{ 4, 177 },
	{ 10, 245 },
	{ 10, 245 },
	{ 18, 258 },
	{ 24, 223 },
	{ 245, 245 },
	{ 251, 177 },
	{ 230, 223 }
};

NJS_TEX uv_0000E26C[] = {
	{ 168, 255 },
	{ 174, 255 },
	{ 225, 255 },
	{ 238, 255 },
	{ 87, 255 },
	{ 82, 255 },
	{ 168, 255 },
	{ 174, 255 },
	{ 30, 255 },
	{ 17, 255 },
	{ 87, 255 },
	{ 82, 255 },
	{ 29, 255 },
	{ 16, 255 },
	{ 30, 255 },
	{ 17, 255 },
	{ 17, 270 },
	{ 16, 270 },
	{ 2, 201 },
	{ 5, 201 },
	{ 2, 201 },
	{ 5, 201 },
	{ 17, 146 },
	{ 16, 160 },
	{ 17, 146 },
	{ 16, 160 },
	{ 45, 129 },
	{ 60, 143 },
	{ 86, 255 },
	{ 80, 255 },
	{ 29, 255 },
	{ 16, 255 },
	{ 5, 201 },
	{ 16, 270 },
	{ 77, 201 },
	{ 80, 270 },
	{ 167, 277 },
	{ 172, 270 },
	{ 168, 231 },
	{ 175, 201 },
	{ 224, 255 },
	{ 237, 255 },
	{ 167, 255 },
	{ 172, 255 },
	{ 225, 255 },
	{ 238, 255 },
	{ 224, 255 },
	{ 237, 255 },
	{ 237, 270 },
	{ 238, 270 },
	{ 248, 201 },
	{ 252, 201 },
	{ 248, 201 },
	{ 252, 201 },
	{ 237, 160 },
	{ 238, 146 },
	{ 237, 160 },
	{ 238, 146 },
	{ 193, 143 },
	{ 210, 129 },
	{ 175, 201 },
	{ 172, 270 },
	{ 248, 201 },
	{ 237, 270 },
	{ 77, 201 },
	{ 80, 270 },
	{ 84, 231 },
	{ 86, 277 },
	{ 19, 52 },
	{ 42, 91 },
	{ 10, 245 },
	{ 18, 258 },
	{ 38, 79 },
	{ 42, 91 },
	{ 216, 79 },
	{ 213, 91 },
	{ 42, 91 },
	{ 38, 79 },
	{ 18, 258 },
	{ 24, 223 },
	{ 42, 91 },
	{ 19, 52 },
	{ 213, 91 },
	{ 235, 52 },
	{ 38, 79 },
	{ 0, 5 },
	{ 24, 223 },
	{ 4, 177 },
	{ 254, 5 },
	{ 216, 79 },
	{ 251, 177 },
	{ 230, 223 },
	{ 213, 91 },
	{ 235, 52 },
	{ 236, 258 },
	{ 245, 245 },
	{ 216, 79 },
	{ 213, 91 },
	{ 230, 223 },
	{ 236, 258 },
	{ 0, 5 },
	{ 38, 79 },
	{ 254, 5 },
	{ 216, 79 }
};

NJS_TEX uv_0000E40C[] = {
	{ 45, 205 },
	{ 3, 245 },
	{ 26, 266 },
	{ 228, 266 },
	{ 253, 245 },
	{ 211, 205 },
	{ 189, 63 },
	{ 181, 56 },
	{ 211, 205 },
	{ 45, 205 },
	{ 75, 56 },
	{ 67, 63 }
};

NJS_TEX uv_0000E43C[] = {
	{ 211, 205 },
	{ 253, 245 },
	{ 189, 63 },
	{ 197, 161 },
	{ 67, 63 },
	{ 75, 56 },
	{ 189, 63 },
	{ 181, 56 },
	{ 67, 63 },
	{ 59, 161 },
	{ 45, 205 },
	{ 3, 245 }
};

NJS_TEX uv_0000E46C[] = {
	{ 254, 255 },
	{ 0, 255 },
	{ 0, 1 },
	{ 0, 1 },
	{ 0, 254 },
	{ 254, 255 },
	{ 253, 0 },
	{ 0, 254 },
	{ 254, 255 },
	{ 253, 0 },
	{ 0, 1 },
	{ 254, 255 },
	{ 254, 255 },
	{ 253, 0 },
	{ 0, 1 },
	{ 254, 255 },
	{ 0, 254 },
	{ 253, 0 }
};

NJS_TEX uv_0000E4B4[] = {
	{ 0, 1 },
	{ 0, 254 },
	{ 253, 0 },
	{ 254, 255 },
	{ 254, 255 },
	{ 253, 0 },
	{ 0, 254 },
	{ 0, 1 }
};

NJS_TEX uv_0000E4D4[] = {
	{ 509, 256 },
	{ -1, 255 },
	{ 510, 0 },
	{ 0 }
};

NJS_TEX uv_0000E4E4[] = {
	{ -1, 0 },
	{ 507, 1 },
	{ 1, 253 },
	{ 508, 254 },
	{ 507, 1 },
	{ 510, 255 },
	{ 0 },
	{ 0, 253 }
};

NJS_TEX uv_0000E504E[] = {
	{ 0, 1 },
	{ 253, 1 },
	{ 131, 254 },
	{ 131, 254 },
	{ 0, 1 },
	{ 253, 1 },
	{ 131, 254 },
	{ 0, 1 },
	{ 253, 1 },
	{ 0, 1 },
	{ 253, 1 },
	{ 131, 254 },
	{ 253, 1 },
	{ 253, 1 },
	{ 131, 254 },
	{ 131, 254 },
	{ 253, 1 },
	{ 0, 2 }
};

NJS_TEX uv_0000E54C[] = {
	{ 34, 273 },
	{ 41, 143 },
	{ 12, 143 },
	{ 243, 143 },
	{ 212, 143 },
	{ 219, 273 }
};

NJS_TEX uv_0000E564[] = {
	{ 12, 143 },
	{ 41, 143 },
	{ 3, 89 },
	{ 61, 25 },
	{ 34, 273 },
	{ 219, 273 },
	{ 41, 143 },
	{ 212, 143 },
	{ 41, 143 },
	{ 212, 143 },
	{ 61, 25 },
	{ 192, 25 },
	{ 253, 89 },
	{ 192, 25 },
	{ 243, 143 },
	{ 212, 143 }
};

NJS_TEX uv_0000E5A4[] = {
	{ -3, 1 },
	{ 73, 2 },
	{ 0, 255 },
	{ 106, 255 },
	{ 56, 1 },
	{ 200, 1 },
	{ 56, 255 },
	{ 198, 255 },
	{ 142, 0 },
	{ 253, 0 },
	{ 145, 255 },
	{ 253, 254 }
};

NJS_TEX uv_0000E5D4[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 1 },
	{ 254, 0 },
	{ 0, 256 },
	{ 0 }
};

NJS_TEX uv_0000E5EC[] = {
	{ 60, 204 },
	{ 76, 64 },
	{ 17, 124 },
	{ 178, 64 },
	{ 237, 124 },
	{ 169, 7 },
	{ 194, 204 },
	{ 255, 260 },
	{ 237, 124 },
	{ 237, 124 },
	{ 178, 64 },
	{ 194, 204 },
	{ 17, 124 },
	{ 0, 260 },
	{ 60, 204 },
	{ 85, 7 },
	{ 17, 124 },
	{ 76, 64 }
};

NJS_TEX uv_0000E634[] = {
	{ 60, 204 },
	{ 194, 204 },
	{ 76, 64 },
	{ 178, 64 },
	{ 76, 64 },
	{ 178, 64 },
	{ 85, 7 },
	{ 169, 7 }
};

NJS_TEX uv_0000E654[] = {
	{ 219, 54 },
	{ 212, 89 },
	{ 244, 264 },
	{ 37, 89 },
	{ 30, 54 },
	{ 7, 264 },
	{ 14, 11 },
	{ 30, 70 },
	{ 0, 264 }
};

NJS_TEX uv_0000E678[] = {
	{ 11, 244 },
	{ 33, 13 },
	{ 0, 256 },
	{ 25, 0 },
	{ 223, 13 },
	{ 243, 244 },
	{ 230, 0 },
	{ 255, 256 },
	{ 33, 13 },
	{ 223, 13 },
	{ 25, 0 },
	{ 230, 0 },
	{ 0, 256 },
	{ 25, 0 },
	{ 11, 268 },
	{ 32, 37 },
	{ 41, 55 },
	{ 214, 55 },
	{ 33, 13 },
	{ 223, 13 },
	{ 32, 37 },
	{ 223, 37 },
	{ 41, 55 },
	{ 214, 55 },
	{ 11, 268 },
	{ 32, 37 },
	{ 24, 256 },
	{ 41, 55 },
	{ 25, 0 },
	{ 230, 0 },
	{ 32, 37 },
	{ 223, 37 },
	{ 230, 0 },
	{ 255, 256 },
	{ 223, 37 },
	{ 243, 268 },
	{ 24, 256 },
	{ 41, 55 },
	{ 11, 244 },
	{ 33, 13 },
	{ 223, 37 },
	{ 243, 268 },
	{ 214, 55 },
	{ 230, 256 },
	{ 214, 55 },
	{ 230, 256 },
	{ 223, 13 },
	{ 243, 244 },
	{ 223, 20 },
	{ 243, 20 },
	{ 230, 146 },
	{ 255, 146 },
	{ 11, 20 },
	{ 33, 20 },
	{ 0, 146 },
	{ 25, 146 },
	{ 214, 146 },
	{ 230, 146 },
	{ 223, 20 },
	{ 243, 20 },
	{ 223, 273 },
	{ 243, 273 },
	{ 214, 146 },
	{ 230, 146 },
	{ 24, 146 },
	{ 41, 146 },
	{ 11, 20 },
	{ 33, 20 },
	{ 230, 146 },
	{ 255, 146 },
	{ 223, 273 },
	{ 243, 273 },
	{ 25, 146 },
	{ 230, 146 },
	{ 32, 273 },
	{ 223, 273 },
	{ 11, 273 },
	{ 32, 273 },
	{ 24, 146 },
	{ 41, 146 },
	{ 32, 273 },
	{ 223, 273 },
	{ 41, 146 },
	{ 214, 146 },
	{ 41, 146 },
	{ 214, 146 },
	{ 33, 20 },
	{ 223, 20 },
	{ 0, 146 },
	{ 25, 146 },
	{ 11, 273 },
	{ 32, 273 },
	{ 33, 20 },
	{ 223, 20 },
	{ 25, 146 },
	{ 230, 146 },
	{ 239, 11 },
	{ 219, 70 },
	{ 14, 11 },
	{ 30, 70 },
	{ 30, 70 },
	{ 37, 89 },
	{ 0, 264 },
	{ 7, 264 },
	{ 219, 70 },
	{ 239, 11 },
	{ 255, 264 },
	{ 254, 264 },
	{ 212, 89 },
	{ 219, 54 },
	{ 37, 89 },
	{ 30, 54 },
	{ 219, 70 },
	{ 212, 89 },
	{ 30, 70 },
	{ 37, 89 },
	{ 212, 89 },
	{ 219, 70 },
	{ 244, 264 },
	{ 255, 264 }
};

NJS_TEX uv_0000E858[] = {
	{ 0, 255 },
	{ 254, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 254, 254 }
};

NJS_TEX uv_0000E878[] = {
	{ 254, 1 },
	{ 254, 255 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 1 },
	{ 254, 255 }
};

NJS_TEX uv_0000E898[] = {
	{ 254, 1 },
	{ 253, 255 },
	{ 0, 1 },
	{ 0, 255 },
	{ 0, 1 },
	{ 0, 255 },
	{ 254, 1 },
	{ 253, 255 }
};

NJS_TEX uv_0000E8B8[] = {
	{ 253, 1 },
	{ 0, 1 },
	{ 0, 255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 253, 1 },
	{ 0, 255 },
	{ 0, 1 },
	{ 253, 1 },
	{ 253, 1 },
	{ 254, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0000E8E8[] = {
	{ 254, 1 },
	{ 0, 1 },
	{ 254, 60 },
	{ 0, 60 },
	{ 254, 60 },
	{ 0, 60 },
	{ 254, 1 },
	{ 0, 1 }
};

NJS_TEX uv_0000E908[] = {
	{ 255, 150 },
	{ 214, 150 },
	{ 241, 23 },
	{ 205, 23 },
	{ 0, 150 },
	{ 132, 150 },
	{ 9, 23 },
	{ 128, 23 },
	{ 241, 23 },
	{ 205, 23 },
	{ 225, 150 },
	{ 195, 150 },
	{ 225, 150 },
	{ 195, 150 },
	{ 241, 276 },
	{ 205, 276 },
	{ 9, 23 },
	{ 128, 23 },
	{ 21, 150 },
	{ 122, 150 },
	{ 241, 276 },
	{ 205, 276 },
	{ 255, 150 },
	{ 214, 150 },
	{ 127, 276 },
	{ 241, 276 },
	{ 132, 150 },
	{ 255, 150 },
	{ 21, 150 },
	{ 122, 150 },
	{ 9, 276 },
	{ 127, 276 },
	{ 122, 150 },
	{ 225, 150 },
	{ 127, 276 },
	{ 241, 276 },
	{ 128, 23 },
	{ 241, 23 },
	{ 122, 150 },
	{ 225, 150 },
	{ 9, 276 },
	{ 127, 276 },
	{ 0, 150 },
	{ 132, 150 },
	{ 132, 150 },
	{ 255, 150 },
	{ 128, 23 },
	{ 241, 23 }
};

NJS_TEX uv_0000E9C8[] = {
	{ 13, 23 },
	{ 49, 23 },
	{ 0, 150 },
	{ 40, 150 },
	{ 245, 23 },
	{ 126, 23 },
	{ 255, 150 },
	{ 122, 150 },
	{ 29, 150 },
	{ 59, 150 },
	{ 13, 23 },
	{ 49, 23 },
	{ 13, 276 },
	{ 49, 276 },
	{ 29, 150 },
	{ 59, 150 },
	{ 233, 150 },
	{ 132, 150 },
	{ 245, 23 },
	{ 126, 23 },
	{ 0, 150 },
	{ 40, 150 },
	{ 13, 276 },
	{ 49, 276 },
	{ 122, 150 },
	{ 0, 150 },
	{ 127, 276 },
	{ 13, 276 },
	{ 245, 276 },
	{ 127, 276 },
	{ 233, 150 },
	{ 132, 150 },
	{ 127, 276 },
	{ 13, 276 },
	{ 132, 150 },
	{ 29, 150 },
	{ 132, 150 },
	{ 29, 150 },
	{ 126, 23 },
	{ 13, 23 },
	{ 255, 150 },
	{ 122, 150 },
	{ 245, 276 },
	{ 127, 276 },
	{ 126, 23 },
	{ 13, 23 },
	{ 122, 150 },
	{ 0, 150 }
};

NJS_TEX uv_0000EA88[] = {
	{ 127, 127 },
	{ 127, 254 },
	{ 0, 191 },
	{ 127, 127 },
	{ 254, 191 },
	{ 127, 254 },
	{ 127, 127 },
	{ 0, 191 },
	{ 0, 63 },
	{ 127, 127 },
	{ 254, 63 },
	{ 254, 191 },
	{ 127, 127 },
	{ 0, 63 },
	{ 127, 0 },
	{ 127, 127 },
	{ 127, 0 },
	{ 254, 63 }
};

NJS_TEX uv_0000EAD0[] = {
	{ 172, 207 },
	{ 217, 207 },
	{ 176, 108 },
	{ 225, 108 },
	{ 176, 108 },
	{ 225, 108 },
	{ 191, 0 },
	{ 255, 0 },
	{ 225, 108 },
	{ 176, 108 },
	{ 255, 0 },
	{ 191, 0 },
	{ 217, 207 },
	{ 172, 207 },
	{ 225, 108 },
	{ 176, 108 },
	{ 82, 207 },
	{ 172, 207 },
	{ 78, 108 },
	{ 176, 108 },
	{ 78, 108 },
	{ 176, 108 },
	{ 63, 0 },
	{ 191, 0 },
	{ 176, 108 },
	{ 78, 108 },
	{ 191, 0 },
	{ 63, 0 },
	{ 172, 207 },
	{ 82, 207 },
	{ 176, 108 },
	{ 78, 108 },
	{ 37, 207 },
	{ 82, 207 },
	{ 29, 108 },
	{ 78, 108 },
	{ 29, 108 },
	{ 78, 108 },
	{ 0 },
	{ 63, 0 },
	{ 78, 108 },
	{ 29, 108 },
	{ 63, 0 },
	{ 0 },
	{ 82, 207 },
	{ 37, 207 },
	{ 78, 108 },
	{ 29, 108 }
};

NJS_TEX uv_0000EB90[] = {
	{ 59, 183 },
	{ 59, 65 },
	{ 195, 183 },
	{ 195, 65 }
};

NJS_MESHSET_SADX meshlist_0000EBA0[] = {
	{ NJD_MESHSET_3 | 2, 4, poly_0000DC48, NULL, NULL, NULL, uv_0000E40C, NULL },
	{ NJD_MESHSET_4 | 2, 3, poly_0000DC60, NULL, NULL, NULL, uv_0000E43C, NULL },
	{ NJD_MESHSET_3 | 3, 6, poly_0000DC78, NULL, NULL, NULL, uv_0000E46C, NULL },
	{ NJD_MESHSET_4 | 3, 2, poly_0000DC9C, NULL, NULL, NULL, uv_0000E4B4, NULL },
	{ NJD_MESHSET_4 | 4, 1, poly_0000DCAC, NULL, NULL, NULL, uv_0000E4D4, NULL },
	{ NJD_MESHSET_4 | 5, 2, poly_0000DCB4, NULL, NULL, NULL, uv_0000E4E4, NULL },
	{ NJD_MESHSET_3 | 6, 6, poly_0000DCC4, NULL, NULL, NULL, uv_0000E504E, NULL },
	{ NJD_MESHSET_3 | 7, 2, poly_0000DCE8, NULL, NULL, NULL, uv_0000E54C, NULL },
	{ NJD_MESHSET_4 | 7, 4, poly_0000DCF4, NULL, NULL, NULL, uv_0000E564, NULL },
	{ NJD_MESHSET_4 | 8, 3, poly_0000DD14, NULL, NULL, NULL, uv_0000E5A4, NULL },
	{ NJD_MESHSET_3 | 9, 2, poly_0000DD2C, NULL, NULL, NULL, uv_0000E5D4, NULL },
	{ NJD_MESHSET_3 | 11, 3, poly_0000DD6C, NULL, NULL, NULL, uv_0000E654, NULL },
	{ NJD_MESHSET_4 | 11, 30, poly_0000DD7E, NULL, NULL, NULL, uv_0000E678, NULL },
	{ NJD_MESHSET_3 | 15, 4, poly_0000DE9E, NULL, NULL, NULL, uv_0000E8B8, NULL },
	{ NJD_MESHSET_4 | 15, 2, poly_0000DEB6, NULL, NULL, NULL, uv_0000E8E8, NULL },
	{ NJD_MESHSET_4 | 16, 12, poly_0000DEC6, NULL, NULL, NULL, uv_0000E908, NULL },
	{ NJD_MESHSET_4 | 17, 12, poly_0000DF26, NULL, NULL, NULL, uv_0000E9C8, NULL },
	{ NJD_MESHSET_3 | 18, 6, poly_0000DF86, NULL, NULL, NULL, uv_0000EA88, NULL },
	{ NJD_MESHSET_4 | 19, 12, poly_0000DFAA, NULL, NULL, NULL, uv_0000EAD0, NULL },
	{ NJD_MESHSET_4 | 20, 1, poly_0000E00A, NULL, NULL, NULL, uv_0000EB90, NULL },
	{ NJD_MESHSET_3 | 0, 8, poly_0000DA4C, NULL, NULL, NULL, uv_0000E014, NULL },
	{ NJD_MESHSET_4 | 0, 18, poly_0000DA7C, NULL, NULL, NULL, uv_0000E074, NULL },
	{ NJD_MESHSET_3 | 1, 18, poly_0000DB0C, NULL, NULL, NULL, uv_0000E194E, NULL },
	{ NJD_MESHSET_4 | 1, 26, poly_0000DB78, NULL, NULL, NULL, uv_0000E26C, NULL },
	{ NJD_MESHSET_3 | 10, 6, poly_0000DD38, NULL, NULL, NULL, uv_0000E5EC, NULL },
	{ NJD_MESHSET_4 | 10, 2, poly_0000DD5C, NULL, NULL, NULL, uv_0000E634, NULL },
	{ NJD_MESHSET_4 | 12, 2, poly_0000DE6E, NULL, NULL, NULL, uv_0000E858, NULL },
	{ NJD_MESHSET_4 | 13, 2, poly_0000DE7E, NULL, NULL, NULL, uv_0000E878, NULL },
	{ NJD_MESHSET_4 | 14, 2, poly_0000DE8E, NULL, NULL, NULL, uv_0000E898, NULL },
};

NJS_VECTOR vertex_0000EE58[] = {
	{ -0.00004f, -5.309366f, -0.00004f },
	{ 4.323116f, -4.206884f, -1.752888f },
	{ 7.988082f, -1.637484f, -3.238912f },
	{ 10.43693f, 1.301703f, -4.231841f },
	{ 11.83034f, 5.122633f, -4.247826f },
	{ 10.43693f, 8.170041f, -4.231841f },
	{ 1.817694f, -4.206884f, -4.2132f },
	{ 3.358666f, -1.637484f, -7.784976f },
	{ 4.388309f, 1.301703f, -10.17156f },
	{ 4.749871f, 7.029091f, -12.67131f },
	{ 4.388308f, 12.25357f, -12.91326f },
	{ 3.358667f, 16.15026f, -5.065987f },
	{ 2.562953f, 2.25746f, -0.182466f },
	{ -1.75251f, -4.206884f, -4.205478f },
	{ -3.238214f, -1.637484f, -7.770709f },
	{ -4.230928f, 1.301703f, -10.15292f },
	{ -4.579524f, 7.029091f, -12.65114f },
	{ -4.230929f, 12.25357f, -12.89462f },
	{ -3.238213f, 16.15026f, -5.052006f },
	{ -2.471036f, 2.25746f, -0.171578f },
	{ -4.296121f, -4.206884f, -1.734247f },
	{ -7.938194f, -1.637484f, -3.204468f },
	{ -10.37175f, 1.301703f, -4.186837f },
	{ -11.75645f, 5.122633f, -4.199114f },
	{ -10.37175f, 8.170041f, -4.186837f },
	{ -4.323124f, -4.206884f, 1.75288f },
	{ -7.988091f, -1.637484f, 3.238905f },
	{ -10.43694f, 1.301703f, 4.231833f },
	{ -11.51708f, 5.122633f, 4.580504f },
	{ -10.43694f, 7.408882f, 4.231833f },
	{ -6.310592f, 8.348257f, 3.238904f },
	{ -1.817703f, -4.206884f, 4.213192f },
	{ -3.358674f, -1.637484f, 7.784968f },
	{ -4.388316f, 1.301703f, 10.55553f },
	{ -4.759011f, 5.122633f, 12.84273f },
	{ -4.397446f, 7.408882f, 12.00467f },
	{ -3.368779f, 9.484345f, 10.22247f },
	{ -2.562959f, 2.25746f, 5.940604f },
	{ 1.752502f, -4.206884f, 4.205471f },
	{ 3.238205f, -1.637484f, 7.770701f },
	{ 4.23092f, 1.301703f, 10.53689f },
	{ 4.570385f, 5.122633f, 12.82255f },
	{ 4.221789f, 7.408882f, 11.98603f },
	{ 3.228096f, 9.484345f, 10.2082f },
	{ 2.47103f, 2.25746f, 5.929716f },
	{ 4.296112f, -4.206884f, 1.734239f },
	{ 7.938185f, -1.637484f, 3.204461f },
	{ 10.37174f, 1.301703f, 4.18683f },
	{ 11.44513f, 5.122633f, 4.531793f },
	{ 10.37174f, 7.408882f, 4.18683f },
	{ 6.271165f, 8.348257f, 3.204461f },
	{ -9.212515f, 0.9496289f, 3.735369f },
	{ -9.154969f, 0.9496289f, -3.695652f },
	{ -3.734571f, 0.9496289f, -8.961813f },
	{ 3.873487f, 0.9496289f, -8.978268f },
	{ 9.212506f, 0.94963f, -3.735377f },
	{ 9.154962f, 0.9496289f, 3.695645f },
	{ -7.070403f, 5.122633f, -4.101072f },
	{ 7.178167f, 5.122633f, -4.135517f },
	{ -5.859582f, 7.408882f, 8.118253f },
	{ 5.764442f, 7.408882f, 8.086431f },
	{ 7.828319f, 9.109421f, -4.04221f },
	{ -7.77943f, 9.109421f, -4.011898f },
	{ 3.908275f, 3.465018f, 10.39825f },
	{ -4.066173f, 3.465018f, 10.4175f },
	{ 5.232453f, 10.59345f, -2.240462f },
	{ -5.110298f, 10.59334f, -2.240572f },
	{ 2.960809f, 8.338435f, -3.511042f },
	{ -2.854625f, 8.338435f, -3.498607f },
	{ 5.209467f, 2.25746f, 2.44528f },
	{ -5.24222f, 2.257459f, 2.471563f },
	{ 3.734562f, 0.9496289f, 8.961804f },
	{ -3.873496f, 0.9496289f, 8.978259f },
	{ -2.471036f, 2.25746f, -0.171578f },
	{ -5.24222f, 2.257459f, 2.471563f },
	{ -3.734571f, 15.90116f, -9.512724f },
	{ 3.873487f, 15.90116f, -9.529034f },
	{ -2.033068f, 13.49053f, 5.475826f },
	{ -6.223455f, 8.348226f, 3.194183f },
	{ -5.350176f, 11.09866f, 4.738522f },
	{ -3.280681f, 9.484302f, 10.18674f },
	{ -2.503443f, 12.31949f, 8.602315f },
	{ 3.2382f, 9.484302f, 10.20409f },
	{ 2.471025f, 12.31949f, 8.615557f },
	{ 6.209551f, 8.348226f, 3.23608f },
	{ 5.33822f, 11.09866f, 4.770493f },
	{ 2.028522f, 13.49053f, 5.491813f },
	{ 11.94771f, 3.719015f, 5.844472f },
	{ 11.11217f, 3.719015f, 5.776497f },
	{ 10.79096f, 3.719015f, 2.349484f },
	{ 10.23772f, 3.719015f, 3.062327f },
	{ 4.657358f, 3.719015f, 10.33708f },
	{ 5.271885f, 3.719015f, 9.545267f },
	{ 8.439923f, 3.719015f, 10.36421f },
	{ 8.166715f, 3.719015f, 9.571678f },
	{ 11.55467f, 4.106095f, 5.82403f },
	{ 11.56086f, 3.331934f, 5.81321f },
	{ 10.51954f, 4.106095f, 2.699205f },
	{ 10.51954f, 3.331934f, 2.699205f },
	{ 4.933541f, 4.106095f, 9.981218f },
	{ 4.933541f, 3.331934f, 9.981218f },
	{ 8.322578f, 4.106095f, 9.988542f },
	{ 8.313631f, 3.331934f, 9.997216f },
	{ -11.94771f, 3.719015f, 5.844476f },
	{ -11.11217f, 3.719015f, 5.7765f },
	{ -10.79096f, 3.719015f, 2.349487f },
	{ -10.23772f, 3.719015f, 3.06233f },
	{ -4.657358f, 3.719015f, 10.33708f },
	{ -5.271886f, 3.719015f, 9.545267f },
	{ -8.439923f, 3.719015f, 10.36421f },
	{ -8.166715f, 3.719015f, 9.57168f },
	{ -11.55467f, 4.106095f, 5.824034f },
	{ -11.56086f, 3.331934f, 5.813213f },
	{ -10.51954f, 4.106095f, 2.699208f },
	{ -10.51954f, 3.331934f, 2.699208f },
	{ -4.933541f, 4.106095f, 9.981218f },
	{ -4.933541f, 3.331934f, 9.981218f },
	{ -8.322579f, 4.106095f, 9.988544f },
	{ -8.313631f, 3.331934f, 9.997217f },
	{ -0.07140499f, 1.985164f, 12.58828f },
	{ -2.82899f, 2.977944f, 10.93207f },
	{ -2.184802f, 2.557265f, 11.63387f },
	{ -2.023677f, 2.170779f, 12.27862f },
	{ -1.450197f, 4.839658f, 12.04804f },
	{ -1.128103f, 3.984072f, 12.48914f },
	{ -1.04754f, 3.497045f, 13.07363f },
	{ 1.307387f, 4.839658f, 12.04804f },
	{ 0.985293f, 3.984072f, 12.48914f },
	{ 0.904731f, 3.497045f, 13.07363f },
	{ 2.686177f, 2.977944f, 10.93207f },
	{ 2.041991f, 2.557265f, 11.63387f },
	{ 1.880866f, 2.170779f, 12.27862f },
	{ 1.307384f, 1.11623f, 9.816101f },
	{ 0.9852909f, 1.130458f, 10.7786f },
	{ 0.90473f, 0.844514f, 11.48362f },
	{ -1.450199f, 1.11623f, 9.816104f },
	{ -1.128105f, 1.130458f, 10.7786f },
	{ -1.047542f, 0.844514f, 11.48362f },
	{ 3.166049f, 2.431105f, -12.97871f },
	{ 2.707467f, 2.431105f, -12.27696f },
	{ 3.868999f, 2.431105f, -9.92205f },
	{ 3.166581f, 2.431105f, -9.92205f },
	{ -3.526637f, 2.431105f, -9.92205f },
	{ -2.82422f, 2.431105f, -9.92205f },
	{ -2.783675f, 2.431105f, -12.97871f },
	{ -2.32509f, 2.431105f, -12.27696f },
	{ 2.94122f, 2.818185f, -12.65568f },
	{ 2.95356f, 2.044024f, -12.65393f },
	{ 3.526272f, 2.818185f, -9.92205f },
	{ 3.526272f, 2.044024f, -9.92205f },
	{ -3.2047f, 2.818185f, -9.92205f },
	{ -3.2047f, 2.044024f, -9.92205f },
	{ -2.558845f, 2.818185f, -12.65568f },
	{ -2.571185f, 2.044024f, -12.65393f },
	{ -3.202122f, 15.28557f, -10.04001f },
	{ -3.734571f, 15.90116f, -9.512724f },
	{ -3.202123f, 15.05148f, -12.39919f },
	{ -2.977976f, 14.76804f, -12.39919f },
	{ 3.873487f, 15.90116f, -9.529034f },
	{ 3.202106f, 15.28557f, -10.04001f },
	{ 4.388308f, 12.25357f, -12.91326f },
	{ 4.403218f, 12.25549f, -12.90209f },
	{ 2.977957f, 14.76804f, -12.39919f },
	{ 3.202104f, 15.05148f, -12.39919f },
	{ -3.969097f, 12.25761f, -12.90209f },
	{ -4.230929f, 12.25357f, -12.89462f },
	{ 4.050406f, 12.25761f, -12.90209f },
	{ 3.885072f, 1.082801f, 11.64746f },
	{ 4.228661f, 1.284559f, 10.53173f },
	{ 4.437092f, 2.368663f, 11.18515f },
	{ 3.680448f, 1.631111f, 12.49528f },
	{ 3.841548f, 4.358304f, 12.34243f },
	{ 4.578457f, 5.121615f, 12.81042f },
	{ 3.15727f, 3.940174f, 13.78379f },
	{ 3.030979f, 3.745482f, 13.44216f },
	{ -4.841628f, 5.121615f, 12.81042f },
	{ -4.104719f, 4.358304f, 12.34243f },
	{ -4.469906f, 1.284559f, 10.53173f },
	{ -4.68347f, 2.368663f, 11.18516f },
	{ -4.158669f, 1.082801f, 11.64747f },
	{ -3.949131f, 1.631111f, 12.49529f },
	{ -3.283621f, 3.745482f, 13.44216f },
	{ -3.420439f, 3.940174f, 13.78379f },
	{ 4.97205f, 10.86055f, -11.58171f },
	{ 5.243937f, 7.052071f, -11.66125f },
	{ 6.386001f, 10.88741f, -8.034209f },
	{ 6.657888f, 7.078929f, -8.113744f },
	{ 12.03023f, 5.122633f, -4.24649f },
	{ 10.63682f, 1.301703f, -4.234981f },
	{ 11.56252f, 5.122633f, 4.682585f },
	{ 10.48912f, 1.301703f, 4.337624f },
	{ -6.370006f, 2.467027f, -5.437945f },
	{ -6.370002f, 2.467027f, 6.882055f },
	{ 6.369994f, 2.467027f, -5.437949f },
	{ 6.369998f, 2.467027f, 6.882051f },
	{ 11.56251f, 5.122633f, 4.682586f },
	{ 10.48912f, 1.301703f, 4.337624f },
	{ 4.804645f, 5.121614f, 12.96121f },
	{ 4.457108f, 1.301706f, 10.68769f },
	{ 11.25036f, 5.764895f, 4.765571f },
	{ 10.41743f, 7.408882f, 4.269816f },
	{ 5.92413f, 6.993951f, 9.161873f },
	{ 5.009933f, 5.75334f, 11.77732f },
	{ 11.52514f, 5.871941f, -4.247826f },
	{ 10.87215f, 7.334775f, -4.231841f },
	{ -11.27037f, 5.764895f, 4.765578f },
	{ -10.43743f, 7.408882f, 4.269822f },
	{ -6.124133f, 6.993951f, 9.161877f },
	{ -5.209934f, 5.75334f, 11.77732f },
	{ -11.52515f, 5.871941f, -4.247819f },
	{ -10.87216f, 7.334775f, -4.231835f },
	{ -12.03024f, 5.122633f, -4.246485f },
	{ -10.63683f, 1.301703f, -4.234976f },
	{ -11.56252f, 5.122633f, 4.68259f },
	{ -10.48912f, 1.301703f, 4.337628f },
	{ 2.712062f, 18.26894f, -11.70241f },
	{ 2.323463f, 17.61489f, -11.44813f },
	{ 3.307736f, 15.24001f, -11.05481f },
	{ 2.712513f, 15.24001f, -11.05481f },
	{ -2.959267f, 15.24001f, -11.05481f },
	{ -2.364045f, 15.24001f, -11.05481f },
	{ -2.329688f, 18.26894f, -11.70241f },
	{ -1.941087f, 17.61489f, -11.44813f },
	{ 2.521544f, 18.10813f, -11.22459f },
	{ 2.532f, 17.82597f, -11.9455f },
	{ 3.017312f, 15.38028f, -10.69403f },
	{ 3.017312f, 15.09975f, -11.41558f },
	{ -2.68646f, 15.38027f, -10.69403f },
	{ -2.68646f, 15.09975f, -11.41558f },
	{ -2.139169f, 18.10813f, -11.22459f },
	{ -2.149625f, 17.82597f, -11.9455f },
	{ -11.56252f, 5.122633f, 4.682593f },
	{ -10.48912f, 1.301703f, 4.337631f },
	{ -4.804645f, 5.121614f, 12.96121f },
	{ -4.457108f, 1.301706f, 10.68769f },
	{ -4.972049f, 10.86055f, -11.58171f },
	{ -5.243935f, 7.052071f, -11.66125f },
	{ -6.386f, 10.88741f, -8.03421f },
	{ -6.657886f, 7.078929f, -8.113745f }
};

NJS_VECTOR normal_0000F98C[] = {
	{ 0, -1, 0 },
	{ 0.395727f, -0.9034269f, -0.164986f },
	{ 0.710546f, -0.638747f, -0.295174f },
	{ 0.672654f, -0.560876f, -0.482655f },
	{ 0.778704f, 0.030634f, -0.626644f },
	{ 0.519843f, 0.601721f, -0.606379f },
	{ 0.161987f, -0.901307f, -0.401754f },
	{ 0.291241f, -0.634349f, -0.716087f },
	{ 0.425143f, -0.641055f, -0.638985f },
	{ 0.5615039f, -0.182196f, -0.807166f },
	{ 0.494939f, 0.403477f, -0.769572f },
	{ 0.415757f, 0.748374f, 0.516801f },
	{ -0.379144f, 0.452184f, 0.807329f },
	{ -0.163391f, -0.9004239f, -0.403163f },
	{ -0.291792f, -0.632503f, -0.717494f },
	{ -0.424418f, -0.640768f, -0.639754f },
	{ -0.558984f, -0.183634f, -0.808589f },
	{ -0.492777f, 0.404116f, -0.770624f },
	{ -0.416589f, 0.747647f, 0.517182f },
	{ 0.001897f, 0.480062f, 0.877233f },
	{ -0.395328f, -0.90253f, -0.17075f },
	{ -0.708697f, -0.636892f, -0.303508f },
	{ -0.68311f, -0.538496f, -0.493338f },
	{ -0.775804f, 0.066254f, -0.627486f },
	{ -0.455694f, 0.6364729f, -0.62229f },
	{ -0.395727f, -0.9034269f, 0.164986f },
	{ -0.710546f, -0.638747f, 0.295174f },
	{ -0.674008f, -0.687483f, 0.270333f },
	{ -0.9319209f, 0.057378f, 0.358094f },
	{ -0.615788f, 0.740105f, 0.270276f },
	{ 0.396486f, 0.915763f, 0.064629f },
	{ -0.161987f, -0.901307f, 0.401754f },
	{ -0.291241f, -0.634349f, 0.716087f },
	{ 0.229589f, -0.653877f, 0.720925f },
	{ -0.375623f, -0.114466f, 0.9196759f },
	{ -0.506469f, 0.51123f, 0.694358f },
	{ -0.185066f, 0.981056f, 0.057262f },
	{ 0.479686f, 0.486238f, -0.730393f },
	{ 0.163391f, -0.9004239f, 0.403163f },
	{ 0.291792f, -0.632503f, 0.717494f },
	{ -0.230863f, -0.651746f, 0.722447f },
	{ 0.372972f, -0.117214f, 0.920409f },
	{ 0.503092f, 0.508438f, 0.6988479f },
	{ 0.180498f, 0.981972f, 0.056143f },
	{ -0.5201899f, 0.397789f, -0.7557549f },
	{ 0.395328f, -0.90253f, 0.17075f },
	{ 0.708697f, -0.636892f, 0.303508f },
	{ 0.656595f, -0.702405f, 0.274792f },
	{ 0.928687f, 0.03268f, 0.369423f },
	{ 0.644766f, 0.712537f, 0.276708f },
	{ -0.398546f, 0.915054f, 0.061939f },
	{ -0.511764f, -0.833969f, 0.206381f },
	{ -0.515268f, -0.828126f, -0.220693f },
	{ -0.213706f, -0.823497f, -0.52553f },
	{ 0.212642f, -0.825435f, -0.522916f },
	{ 0.514939f, -0.830106f, -0.213921f },
	{ 0.5120389f, -0.832137f, 0.21299f },
	{ -0.592798f, 0.08341499f, -0.801019f },
	{ 0.592764f, 0.086118f, -0.800759f },
	{ -0.597402f, 0.721827f, 0.349394f },
	{ 0.5972109f, 0.717492f, 0.358531f },
	{ 0.745984f, 0.589264f, -0.310283f },
	{ -0.7101319f, 0.621294f, -0.33122f },
	{ -0.52181f, -0.529207f, 0.6690699f },
	{ 0.5225869f, -0.528511f, 0.669013f },
	{ 0.033787f, 0.794479f, 0.6063499f },
	{ -0.022303f, 0.795905f, 0.605011f },
	{ -0.355786f, 0.352295f, 0.865624f },
	{ 0.357716f, 0.351537f, 0.865137f },
	{ -0.951557f, 0.300625f, 0.064532f },
	{ 0.641239f, 0.369894f, 0.672303f },
	{ 0.07987799f, -0.687771f, 0.7215199f },
	{ -0.07867599f, -0.688715f, 0.720751f },
	{ 0.654168f, 0.370747f, 0.65925f },
	{ 0.907481f, 0.320525f, -0.271556f },
	{ -0.44015f, 0.842447f, -0.310726f },
	{ 0.442448f, 0.841348f, -0.310442f },
	{ -0.289437f, 0.9097649f, 0.297579f },
	{ -0.923284f, 0.082503f, 0.375154f },
	{ -0.871f, 0.328957f, 0.364892f },
	{ -0.482144f, 0.475659f, 0.735721f },
	{ -0.361757f, 0.7283649f, 0.581907f },
	{ 0.478258f, 0.475166f, 0.738571f },
	{ 0.358506f, 0.728113f, 0.5842299f },
	{ 0.921549f, 0.079988f, 0.379932f },
	{ 0.869574f, 0.327037f, 0.369984f },
	{ 0.288736f, 0.909211f, 0.299946f },
	{ 0.988035f, -0.001344f, 0.154224f },
	{ -0.982316f, 0.000121f, -0.187231f },
	{ 0.949105f, -0.000223f, -0.314959f },
	{ -0.950228f, -0.000254f, 0.311555f },
	{ -0.005416f, 0.00598f, 0.999967f },
	{ 0.006059f, -0.005049f, -0.9999689f },
	{ 0.418605f, 0.002426f, 0.908165f },
	{ -0.466592f, -0.00218f, -0.88447f },
	{ 0.221485f, 0.972926f, 0.066019f },
	{ 0.220953f, -0.9731399f, 0.064641f },
	{ 0.270489f, 0.958419f, -0.090937f },
	{ 0.269092f, -0.958824f, -0.090809f },
	{ -0.001401f, 0.944767f, 0.327739f },
	{ -0.001809f, -0.941276f, 0.337634f },
	{ 0.124806f, 0.974362f, 0.187198f },
	{ 0.123442f, -0.973445f, 0.192789f },
	{ -0.988035f, -0.001344f, 0.154224f },
	{ 0.982316f, 0.000122f, -0.187232f },
	{ -0.949105f, -0.000223f, -0.314959f },
	{ 0.950228f, -0.000254f, 0.311555f },
	{ 0.005417f, 0.005979f, 0.999967f },
	{ -0.00606f, -0.005048f, -0.9999689f },
	{ -0.418604f, 0.002426f, 0.908166f },
	{ 0.466591f, -0.002179f, -0.88447f },
	{ -0.221484f, 0.972927f, 0.066019f },
	{ -0.220952f, -0.9731399f, 0.064641f },
	{ -0.270488f, 0.958419f, -0.090937f },
	{ -0.269092f, -0.958824f, -0.090808f },
	{ 0.001402f, 0.944767f, 0.327738f },
	{ 0.001809f, -0.941276f, 0.337633f },
	{ -0.124805f, 0.974362f, 0.187198f },
	{ -0.123441f, -0.973445f, 0.192788f },
	{ 0.000001f, -0.514136f, 0.857709f },
	{ -0.785713f, -0.31804f, 0.530571f },
	{ -0.8896469f, -0.234639f, 0.391756f },
	{ -0.7756349f, -0.324285f, 0.541506f },
	{ -0.394807f, 0.299221f, 0.868674f },
	{ -0.431724f, 0.463922f, 0.773558f },
	{ -0.373236f, 0.264587f, 0.8892069f },
	{ 0.394809f, 0.299221f, 0.868673f },
	{ 0.431251f, 0.46266f, 0.7745759f },
	{ 0.372341f, 0.262659f, 0.890153f },
	{ 0.785714f, -0.31804f, 0.53057f },
	{ 0.889648f, -0.23492f, 0.391586f },
	{ 0.775636f, -0.324741f, 0.541232f },
	{ 0.394808f, -0.907165f, 0.14553f },
	{ 0.431724f, -0.900904f, -0.044561f },
	{ 0.373237f, -0.90895f, 0.185753f },
	{ -0.394808f, -0.907164f, 0.145531f },
	{ -0.431251f, -0.901208f, -0.042967f },
	{ -0.372341f, -0.9088759f, 0.1879f },
	{ 0.593904f, -0.002886f, -0.804531f },
	{ -0.667168f, -0.000538f, 0.744907f },
	{ 0.976355f, -0.000108f, -0.216174f },
	{ -0.979816f, -0.000115f, 0.199904f },
	{ -0.972599f, 0.010071f, -0.232271f },
	{ 0.975815f, -0.008474999f, 0.218432f },
	{ -0.608532f, 0.003353f, -0.7935219f },
	{ 0.671562f, -0.006353f, 0.740921f },
	{ 0.189987f, 0.959614f, -0.207474f },
	{ 0.19135f, -0.959647f, -0.206063f },
	{ 0.109184f, 0.99348f, -0.032808f },
	{ 0.107258f, -0.993706f, -0.032321f },
	{ -0.133657f, 0.99021f, -0.040248f },
	{ -0.149822f, -0.987738f, -0.043901f },
	{ -0.200667f, 0.955001f, -0.218418f },
	{ -0.211215f, -0.952453f, -0.219594f },
	{ 0.32008f, -0.918566f, 0.231915f },
	{ -0.30577f, 0.8963929f, -0.320911f },
	{ -0.38537f, 0.607381f, -0.694679f },
	{ 0.417396f, -0.44586f, -0.791827f },
	{ 0.304046f, 0.892395f, -0.333446f },
	{ -0.316291f, -0.919895f, 0.231847f },
	{ 0.851572f, 0.416077f, -0.318912f },
	{ 0.541553f, 0.364086f, -0.7577339f },
	{ -0.406753f, -0.465237f, -0.786198f },
	{ 0.352846f, 0.6121939f, -0.707615f },
	{ 0.345202f, 0.051441f, -0.937117f },
	{ -0.29649f, 0.287129f, -0.910852f },
	{ -0.330809f, 0.02713f, -0.943308f },
	{ 0.707396f, -0.459896f, -0.536737f },
	{ 0.337131f, -0.820712f, -0.461275f },
	{ 0.8439749f, -0.261904f, 0.468095f },
	{ -0.039043f, -0.663738f, 0.746945f },
	{ -0.740248f, -0.325858f, -0.5880899f },
	{ 0.568557f, 0.178481f, 0.803049f },
	{ 0.183488f, -0.056403f, 0.981403f },
	{ -0.610947f, -0.790943f, -0.033971f },
	{ -0.635958f, 0.058974f, 0.769467f },
	{ 0.701537f, -0.405343f, -0.586126f },
	{ -0.243708f, -0.861577f, -0.445299f },
	{ -0.851683f, -0.344878f, 0.394582f },
	{ -0.406141f, -0.548987f, -0.730522f },
	{ 0.104712f, -0.734908f, 0.670034f },
	{ 0.6366889f, -0.767109f, -0.07856099f },
	{ -0.193104f, -0.111462f, 0.974827f },
	{ 0.926203f, 0.07384299f, -0.369722f },
	{ 0.926203f, 0.07384299f, -0.369722f },
	{ 0.926203f, 0.07384299f, -0.369722f },
	{ 0.926203f, 0.07384299f, -0.369722f },
	{ 0.95131f, -0.3078f, 0.01639f },
	{ 0.95131f, -0.3078f, 0.01639f },
	{ 0.95131f, -0.3078f, 0.01639f },
	{ 0.95131f, -0.3078f, 0.01639f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.67979f, -0.347711f, 0.645742f },
	{ 0.67979f, -0.347711f, 0.645742f },
	{ 0.67979f, -0.347711f, 0.645742f },
	{ 0.67979f, -0.347711f, 0.645742f },
	{ 0.802638f, 0.492961f, 0.335802f },
	{ 0.811164f, 0.5009339f, 0.301791f },
	{ 0.486793f, 0.711025f, 0.507421f },
	{ 0.5483029f, 0.641581f, 0.536411f },
	{ 0.89968f, 0.435331f, 0.032597f },
	{ 0.89968f, 0.435331f, 0.032597f },
	{ -0.805363f, 0.492689f, 0.329618f },
	{ -0.814864f, 0.499205f, 0.294604f },
	{ -0.508883f, 0.695222f, 0.507646f },
	{ -0.566269f, 0.628738f, 0.532943f },
	{ -0.899858f, 0.435108f, 0.030604f },
	{ -0.899858f, 0.435108f, 0.030604f },
	{ -0.95131f, -0.3078f, 0.016391f },
	{ -0.95131f, -0.3078f, 0.016391f },
	{ -0.95131f, -0.3078f, 0.016391f },
	{ -0.95131f, -0.3078f, 0.016391f },
	{ 0.59941f, 0.766289f, -0.231319f },
	{ -0.707696f, -0.645719f, 0.286729f },
	{ 0.979811f, 0.16045f, -0.119277f },
	{ -0.984392f, -0.17416f, -0.025316f },
	{ -0.97151f, 0.162421f, -0.172592f },
	{ 0.9824229f, -0.1729f, 0.070356f },
	{ -0.609313f, 0.746025f, -0.268674f },
	{ 0.69855f, -0.630071f, 0.339173f },
	{ 0.246753f, 0.468715f, 0.848186f },
	{ 0.209343f, -0.09478199f, -0.973238f },
	{ 0.113037f, 0.21755f, 0.9694819f },
	{ 0.085288f, -0.165105f, -0.982581f },
	{ -0.21266f, 0.233137f, 0.9489059f },
	{ -0.047263f, -0.172597f, -0.983858f },
	{ -0.289193f, 0.483607f, 0.826131f },
	{ -0.195863f, -0.093514f, -0.976162f },
	{ -0.67979f, -0.347711f, 0.645742f },
	{ -0.67979f, -0.347711f, 0.645742f },
	{ -0.67979f, -0.347711f, 0.645742f },
	{ -0.67979f, -0.347711f, 0.645742f },
	{ -0.926203f, 0.073842f, -0.369722f },
	{ -0.926203f, 0.073842f, -0.369722f },
	{ -0.926203f, 0.073842f, -0.369722f },
	{ -0.926203f, 0.073842f, -0.369722f }
};

NJS_MODEL_SADX attach_000104C0 = { vertex_0000EE58, normal_0000F98C, LengthOfArray(vertex_0000EE58), meshlist_0000EBA0, matlist_0000D8A8, LengthOfArray(meshlist_0000EBA0), LengthOfArray(matlist_0000D8A8),{ -0.00003f, 6.479789f, 0.40254f }, 17.99401f, NULL };

NJS_OBJECT object_000104E8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_000104C0, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0000D874, NULL };

#pragma warning(pop)
