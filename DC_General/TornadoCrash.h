#include <SADXModLoader.h>

enum TR2CRASHTexName
{
	TR2CRASHTexName_s_t2_bodyd_tit,
	TR2CRASHTexName_s_t2_bodye_tit,
	TR2CRASHTexName_s_t2_bodyf_tit,
	TR2CRASHTexName_s_t2_bodyg_tit,
	TR2CRASHTexName_s_t2_cano_tit,
	TR2CRASHTexName_s_t2_canob_tit,
	TR2CRASHTexName_s_t2_eme2_tit,
	TR2CRASHTexName_s_t2_eme_tit,
	TR2CRASHTexName_s_t2_heade_tit,
	TR2CRASHTexName_s_t2_headf_tit,
	TR2CRASHTexName_s_t2_jetc_tit,
	TR2CRASHTexName_s_t2_bodyb_tit,
	TR2CRASHTexName_s_t2_bodya_tit,
	TR2CRASHTexName_s_t2_bodyc_tit,
	TR2CRASHTexName_s_t2_heada_tit,
	TR2CRASHTexName_s_t2_headb_tit,
	TR2CRASHTexName_s_t2_headc_tit,
	TR2CRASHTexName_s_t2_headd_tit,
	TR2CRASHTexName_s_t2_jeta_tit,
	TR2CRASHTexName_s_t2_jetb_tit,
	TR2CRASHTexName_s_t2_jetd_tit,
	TR2CRASHTexName_s_t2_mks_tit,
	TR2CRASHTexName_s_t2_mkt_tit,
	TR2CRASHTexName_s_t2_winga_tita1,
	TR2CRASHTexName_s_t2_winga_tita2,
	TR2CRASHTexName_s_t2_wingb_tit,
	TR2CRASHTexName_s_t2_wingc_tita,
	TR2CRASHTexName_s_t2_wingc_titb
};

NJS_MATERIAL matlist_00216024[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_mks_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_mkt_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0021604C[] = {
	6, 5, 9,
	8, 1, 2,
	2, 10, 8,
	9, 11, 6
};

Sint16 poly_00216064[] = {
	23, 9, 13, 5,
	12, 1, 22, 8
};

Sint16 poly_00216074[] = {
	0, 7, 21,
	20, 3, 4,
	3, 18, 24,
	0, 15, 25,
	24, 14, 4,
	25, 19, 7,
	21, 17, 0,
	4, 16, 20,
	7, 0, 25,
	24, 4, 3
};

NJS_TEX uv_002160B0[] = {
	{ 250, 254 },
	{ 251, 104 },
	{ 0, 109 },
	{ 251, 109 },
	{ 0, 106 },
	{ 0, 254 },
	{ 0, 254 },
	{ 251, 243 },
	{ 251, 109 },
	{ 0, 109 },
	{ 0, 243 },
	{ 250, 254 }
};

NJS_TEX uv_002160E0[] = {
	{ 19, 3 },
	{ 0, 109 },
	{ 250, 5 },
	{ 251, 104 },
	{ 0, 5 },
	{ 0, 106 },
	{ 231, 3 },
	{ 251, 109 }
};

NJS_TEX uv_00216100[] = {
	{ 92, 253 },
	{ 92, 4 },
	{ 5, 4 },
	{ 245, 4 },
	{ 158, 4 },
	{ 159, 253 },
	{ 158, 4 },
	{ 3, 3 },
	{ 0, 192 },
	{ 92, 253 },
	{ 249, 255 },
	{ 250, 192 },
	{ 0, 192 },
	{ 3, 255 },
	{ 159, 253 },
	{ 250, 192 },
	{ 250, 3 },
	{ 92, 4 },
	{ 5, 4 },
	{ 0, 252 },
	{ 92, 253 },
	{ 159, 253 },
	{ 251, 252 },
	{ 245, 4 },
	{ 92, 4 },
	{ 92, 253 },
	{ 250, 192 },
	{ 0, 192 },
	{ 159, 253 },
	{ 158, 4 }
};

NJS_MESHSET_SADX meshlist_00216178[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_0021604C, NULL, NULL, NULL, uv_002160B0, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_00216064, NULL, NULL, NULL, uv_002160E0, NULL },
	{ NJD_MESHSET_3 | 1, 10, poly_00216074, NULL, NULL, NULL, uv_00216100, NULL }
};

NJS_VECTOR vertex_002161C0[] = {
	{ -0.489055f, 1.599916f, -5.249023f },
	{ 1.245217f, -0.09897599f, 4.576384f },
	{ 1.583649f, -1.343884f, 4.574612f },
	{ 0.204341f, 7.024779f, -5.222866f },
	{ 0.37756f, 1.599916f, -5.249023f },
	{ -1.347694f, -0.08448499f, 4.576384f },
	{ -1.64308f, -1.343884f, 4.57461f },
	{ -0.299104f, 7.024779f, -5.237256f },
	{ 0.839622f, -0.127959f, -0.034945f },
	{ -0.8986419f, -0.127959f, -0.034945f },
	{ 0.998963f, -1.243776f, -0.034945f },
	{ -1.10144f, -1.243776f, -0.034945f },
	{ 0.955924f, 0.7458f, 4.574613f },
	{ -1.007831f, 0.7458f, 4.574613f },
	{ 0.469132f, 1.573689f, -2.227186f },
	{ -0.544439f, 1.573689f, -2.227186f },
	{ 0.058505f, 1.62565f, -7.01701f },
	{ -0.088002f, 1.62565f, -7.01701f },
	{ 0.043122f, 7.026458f, -2.216647f },
	{ -0.09922799f, 7.026175f, -2.219428f },
	{ 0.043524f, 7.025097f, -6.906802f },
	{ -0.09882499f, 7.024814f, -6.909667f },
	{ 0.668394f, 0.760605f, 0.320552f },
	{ -0.635496f, 0.760605f, 0.320552f },
	{ 0.207805f, 2.928932f, -2.158718f },
	{ -0.366715f, 2.928932f, -2.207022f }
};

NJS_VECTOR normal_002162F8[] = {
	{ -0.994992f, 0.035111f, -0.093586f },
	{ 0.9599079f, 0.266762f, -0.08610699f },
	{ 0.965686f, 0.242954f, -0.09178399f },
	{ 0.999128f, 0.034757f, -0.023141f },
	{ 0.996669f, 0.043296f, -0.069114f },
	{ -0.953201f, 0.286851f, -0.09552699f },
	{ -0.970548f, 0.219725f, -0.098782f },
	{ -0.998419f, 0.044139f, -0.034806f },
	{ 0.972264f, 0.210043f, -0.102884f },
	{ -0.960757f, 0.257734f, -0.102564f },
	{ 0.982612f, 0.140319f, -0.121589f },
	{ -0.977798f, 0.177713f, -0.111035f },
	{ 0.958394f, 0.272182f, -0.086007f },
	{ -0.933215f, 0.346767f, -0.094146f },
	{ 0.9812599f, 0.190632f, -0.028081f },
	{ -0.991334f, 0.130255f, -0.017039f },
	{ 0.9841f, 0.006353f, -0.177501f },
	{ -0.975228f, 0.002443f, -0.221187f },
	{ 0.997733f, 0.040856f, 0.053484f },
	{ -0.995693f, 0.065203f, 0.06591599f },
	{ 0.993369f, 0.027015f, -0.111751f },
	{ -0.98977f, 0.028396f, -0.13982f },
	{ 0.958394f, 0.272182f, -0.086007f },
	{ -0.933215f, 0.346767f, -0.094146f },
	{ 0.995641f, 0.091371f, 0.018731f },
	{ -0.996942f, 0.07605799f, 0.017936f }
};

NJS_MODEL_SADX attach_00216430 = { vertex_002161C0, normal_002162F8, LengthOfArray<Sint32>(vertex_002161C0), meshlist_00216178, matlist_00216024, LengthOfArray<Uint16>(meshlist_00216178), LengthOfArray<Uint16>(matlist_00216024),{ -0.029716f, 2.841287f, -1.220313f }, 7.14964f, NULL };

NJS_OBJECT object_00216458 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_HIDE | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00216430, 0.055399f, 7.06876f, -17.06426f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0021648C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002164A0[] = {
	5, 1, 4, 3,
	4, 2, 5, 0
};

NJS_TEX uv_002164B0[] = {
	{ 148, 1 },
	{ 101, 3 },
	{ 151, 29 },
	{ 101, 28 },
	{ 151, 29 },
	{ 250, 33 },
	{ 148, 1 },
	{ 253, 14 }
};

NJS_MESHSET_SADX meshlist_002164D0[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_002164A0, NULL, NULL, NULL, uv_002164B0, NULL }
};

NJS_VECTOR vertex_002164E8[] = {
	{ -0.260732f, -0.279475f, -2.711803f },
	{ -1.703813f, -0.5705619f, 2.551398f },
	{ 2.209847f, -0.770039f, -2.627582f },
	{ 1.569118f, -0.334169f, 2.538948f },
	{ 1.58908f, -0.224038f, 0.804494f },
	{ -1.860955f, -0.25454f, 0.906562f }
};

NJS_VECTOR normal_00216530[] = {
	{ 0.195315f, 0.9805779f, -0.017879f },
	{ -0.070967f, 0.989279f, 0.127636f },
	{ 0.195315f, 0.980577f, -0.017879f },
	{ -0.070967f, 0.989279f, 0.127636f },
	{ 0.072931f, 0.996081f, 0.050036f },
	{ 0.043295f, 0.996866f, 0.06621499f }
};

NJS_MODEL_SADX attach_00216578 = { vertex_002164E8, normal_00216530, LengthOfArray<Sint32>(vertex_002164E8), meshlist_002164D0, matlist_0021648C, LengthOfArray<Uint16>(meshlist_002164D0), LengthOfArray<Uint16>(matlist_0021648C),{ 0.174446f, -0.497039f, -0.080203f }, 5.30836f, NULL };

NJS_OBJECT object_002165A0 = { NJD_EVAL_BREAK, &attach_00216578, 5.508544f, -4.933717f, 0.538355f, 0xFFFFFFEC, 0, 0xFFFF9DBA, 0.387816f, 1, 1.996001f, NULL, &object_00216458 };

NJS_MATERIAL matlist_002165D4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002165E8[] = {
	3, 5, 4, 0,
	1, 3, 2, 4,
	5, 1, 0, 2
};

NJS_TEX uv_00216600[] = {
	{ 233, 79 },
	{ 233, 105 },
	{ 211, 79 },
	{ 211, 105 },
	{ 233, 79 },
	{ 233, 105 },
	{ 211, 79 },
	{ 211, 105 },
	{ 239, 79 },
	{ 239, 105 },
	{ 217, 79 },
	{ 217, 105 }
};

NJS_MESHSET_SADX meshlist_00216630[] = {
	{ NJD_MESHSET_4 | 0, 3, poly_002165E8, NULL, NULL, NULL, uv_00216600, NULL }
};

NJS_VECTOR vertex_00216648[] = {
	{ 4.571391f, 4.467114f, 4.73f },
	{ 0.62951f, 0.246734f, -0.126941f },
	{ 4.971225f, 4.415046f, 4.415178f },
	{ 0.5726669f, -0.027467f, 0.282191f },
	{ 4.914382f, 4.140846f, 4.82431f },
	{ 0.229677f, 0.298801f, 0.18788f }
};

NJS_VECTOR normal_00216690[] = {
	{ 0.813265f, -0.462942f, -0.35254f },
	{ -0.486359f, -0.36064f, 0.79586f },
	{ -0.5934139f, -0.224251f, 0.7730269f },
	{ -0.2496f, 0.820456f, -0.514347f },
	{ -0.272106f, 0.824344f, -0.496402f },
	{ 0.792473f, -0.55858f, -0.244898f }
};

NJS_MODEL_SADX attach_002166D8 = { vertex_00216648, normal_00216690, LengthOfArray<Sint32>(vertex_00216648), meshlist_00216630, matlist_002165D4, LengthOfArray<Uint16>(meshlist_00216630), LengthOfArray<Uint16>(matlist_002165D4),{ 2.600451f, 2.219824f, 2.348685f }, 2.387347f, NULL };

NJS_OBJECT object_00216700 = { NJD_EVAL_BREAK, &attach_002166D8, -0.792899f, 2.635458f, 4.447355f, 0xFFFFD90D, 0x2732, 0x2552, 0.66f, 0.783698f, 0.66f, NULL, &object_002165A0 };

NJS_MATERIAL matlist_00216734[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00216748[] = {
	1, 3, 2, 7,
	1, 5, 3, 4,
	5, 0, 4, 6,
	5, 1, 0, 2,
	7, 3, 6, 4,
	6, 0, 7, 2
};

NJS_TEX uv_00216778[] = {
	{ 253, 79 },
	{ 253, 105 },
	{ 197, 79 },
	{ 197, 105 },
	{ 253, 79 },
	{ 253, 105 },
	{ 197, 79 },
	{ 197, 105 },
	{ 253, 79 },
	{ 197, 79 },
	{ 253, 105 },
	{ 197, 105 },
	{ 253, 79 },
	{ 253, 105 },
	{ 197, 79 },
	{ 197, 105 },
	{ 253, 79 },
	{ 197, 79 },
	{ 253, 105 },
	{ 197, 105 },
	{ 253, 79 },
	{ 197, 79 },
	{ 253, 105 },
	{ 197, 105 }
};

NJS_MESHSET_SADX meshlist_002167D8[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_00216748, NULL, NULL, NULL, uv_00216778, NULL }
};

NJS_VECTOR vertex_002167F0[] = {
	{ 1.315495f, -1.582593f, -2.275366f },
	{ 1.142663f, -0.844598f, 1.419726f },
	{ 1.142663f, -1.582594f, -2.275366f },
	{ 1.137394f, -0.31406f, 1.209626f },
	{ 1.310226f, -0.31406f, 1.209626f },
	{ 1.315496f, -0.844598f, 1.419727f },
	{ 1.310226f, -1.005298f, -2.029489f },
	{ 1.137393f, -1.005299f, -2.029489f }
};

NJS_VECTOR normal_00216850[] = {
	{ 0.554419f, -0.524402f, -0.646237f },
	{ -0.565642f, -0.395291f, 0.723736f },
	{ -0.550036f, -0.527303f, -0.64762f },
	{ -0.589842f, 0.7110299f, 0.382782f },
	{ 0.5833049f, 0.716867f, 0.381913f },
	{ 0.571351f, -0.390882f, 0.721643f },
	{ 0.61287f, 0.610995f, -0.501074f },
	{ -0.620221f, 0.604302f, -0.500145f }
};

NJS_MODEL_SADX attach_002168B0 = { vertex_002167F0, normal_00216850, LengthOfArray<Sint32>(vertex_002167F0), meshlist_002167D8, matlist_00216734, LengthOfArray<Uint16>(meshlist_002167D8), LengthOfArray<Uint16>(matlist_00216734),{ 1.226445f, -0.9483269f, -0.427819f }, 1.960718f, NULL };

NJS_OBJECT object_002168D8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002168B0, -11.12419f, 15.58185f, -9.793722f, 0x175F, 0xFFFFE3B1, 0xFFFFDDFC, 1, 1, 1, NULL, &object_00216700 };

NJS_MATERIAL matlist_0021690C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_jetd_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_jetc_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_jetb_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_jeta_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0021695C[] = {
	2, 11, 35,
	35, 3, 2,
	15, 13, 35,
	35, 13, 7,
	9, 3, 35,
	35, 6, 9,
	35, 11, 15,
	7, 6, 35
};

Sint16 poly_0021698C[] = {
	0, 1, 3, 2,
	4, 5, 7, 6,
	5, 8, 6, 9,
	1, 10, 2, 11,
	12, 4, 13, 7,
	10, 14, 11, 15,
	8, 0, 9, 3,
	14, 12, 15, 13
};

Sint16 poly_002169CC[] = {
	16, 17, 0, 1,
	18, 19, 4, 5,
	19, 20, 5, 8,
	17, 21, 1, 10,
	22, 18, 12, 4,
	21, 23, 10, 14,
	20, 16, 8, 0,
	23, 22, 14, 12
};

Sint16 poly_00216A0C[] = {
	18, 28, 19,
	21, 32, 23
};

Sint16 poly_00216A18[] = {
	24, 25, 27, 26,
	25, 24, 16, 17,
	30, 28, 31, 29,
	28, 30, 19, 20,
	32, 24, 33, 27,
	24, 32, 17, 21,
	25, 30, 26, 31,
	30, 25, 20, 16
};

Sint16 poly_00216A58[] = {
	27, 26, 34,
	31, 29, 34,
	34, 26, 31,
	34, 33, 27
};

NJS_TEX uv_00216A70[] = {
	{ 251, 205 },
	{ 251, 129 },
	{ 0, 129 },
	{ 0, 129 },
	{ 251, 236 },
	{ 251, 205 },
	{ 251, 53 },
	{ 251, 22 },
	{ 0, 129 },
	{ 0, 129 },
	{ 251, 22 },
	{ 251, 53 },
	{ 251, 205 },
	{ 251, 236 },
	{ 0, 129 },
	{ 0, 129 },
	{ 251, 129 },
	{ 251, 205 },
	{ 0, 129 },
	{ 251, 129 },
	{ 251, 53 },
	{ 251, 53 },
	{ 251, 129 },
	{ 0, 129 }
};

NJS_TEX uv_00216AD0[] = {
	{ 0, 254 },
	{ 0, 190 },
	{ 251, 253 },
	{ 251, 190 },
	{ 0, 65 },
	{ 0, 129 },
	{ 251, 66 },
	{ 251, 129 },
	{ 0, 129 },
	{ 0, 190 },
	{ 251, 129 },
	{ 251, 190 },
	{ 0, 190 },
	{ 0, 129 },
	{ 251, 190 },
	{ 251, 129 },
	{ 0, 4 },
	{ 0, 65 },
	{ 251, 4 },
	{ 251, 66 },
	{ 0, 129 },
	{ 0, 65 },
	{ 251, 129 },
	{ 251, 66 },
	{ 0, 190 },
	{ 0, 254 },
	{ 251, 190 },
	{ 251, 253 },
	{ 0, 65 },
	{ 0, 4 },
	{ 251, 66 },
	{ 251, 4 }
};

NJS_TEX uv_00216B50[] = {
	{ -1, 8 },
	{ 247, 7 },
	{ -1, 254 },
	{ 247, 254 },
	{ -1, 8 },
	{ 247, 7 },
	{ -1, 254 },
	{ 247, 254 },
	{ -1, 8 },
	{ 247, 7 },
	{ -1, 254 },
	{ 247, 254 },
	{ -1, 8 },
	{ 247, 7 },
	{ -1, 254 },
	{ 247, 254 },
	{ -1, 8 },
	{ 247, 7 },
	{ -1, 254 },
	{ 247, 254 },
	{ -1, 8 },
	{ 247, 7 },
	{ -1, 254 },
	{ 247, 254 },
	{ -1, 8 },
	{ 247, 7 },
	{ -1, 254 },
	{ 247, 254 },
	{ -1, 8 },
	{ 247, 7 },
	{ -1, 254 },
	{ 247, 254 }
};

NJS_TEX uv_00216BD0[] = {
	{ 253, 1 },
	{ 69, 43 },
	{ 253, 43 },
	{ 253, 43 },
	{ 69, 43 },
	{ 253, 1 }
};

NJS_TEX uv_00216BE8[] = {
	{ 69, 163 },
	{ 69, 255 },
	{ 0, 163 },
	{ 0, 253 },
	{ 69, 255 },
	{ 69, 163 },
	{ 253, 254 },
	{ 253, 163 },
	{ 69, 163 },
	{ 69, 43 },
	{ 0, 163 },
	{ 0, 43 },
	{ 69, 43 },
	{ 69, 163 },
	{ 253, 43 },
	{ 253, 163 },
	{ 69, 43 },
	{ 69, 163 },
	{ 0, 43 },
	{ 0, 163 },
	{ 69, 163 },
	{ 69, 43 },
	{ 253, 163 },
	{ 253, 43 },
	{ 69, 255 },
	{ 69, 163 },
	{ 0, 253 },
	{ 0, 163 },
	{ 69, 163 },
	{ 69, 255 },
	{ 253, 163 },
	{ 253, 254 }
};

NJS_TEX uv_00216C68[] = {
	{ 36, 194 },
	{ 125, 255 },
	{ 127, 4 },
	{ 214, 194 },
	{ 251, 3 },
	{ 127, 4 },
	{ 127, 4 },
	{ 125, 255 },
	{ 214, 194 },
	{ 127, 4 },
	{ 0, 3 },
	{ 36, 194 }
};

NJS_MESHSET_SADX meshlist_00216C98[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0021695C, NULL, NULL, NULL, uv_00216A70, NULL },
	{ NJD_MESHSET_4 | 0, 8, poly_0021698C, NULL, NULL, NULL, uv_00216AD0, NULL },
	{ NJD_MESHSET_4 | 1, 8, poly_002169CC, NULL, NULL, NULL, uv_00216B50, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00216A0C, NULL, NULL, NULL, uv_00216BD0, NULL },
	{ NJD_MESHSET_4 | 2, 8, poly_00216A18, NULL, NULL, NULL, uv_00216BE8, NULL },
	{ NJD_MESHSET_3 | 3, 4, poly_00216A58, NULL, NULL, NULL, uv_00216C68, NULL }
};

NJS_VECTOR vertex_00216D28[] = {
	{ 0, -2.473452f, -1.840933f },
	{ -1.699959f, -1.748995f, -1.840933f },
	{ -1.405298f, -1.492476f, -4.60967f },
	{ 0, -2.110679f, -4.60967f },
	{ 1.699959f, 1.748995f, -1.840933f },
	{ 2.404104f, 0, -1.840933f },
	{ 1.987392f, 0, -4.60967f },
	{ 1.405298f, 1.492477f, -4.60967f },
	{ 1.699959f, -1.748995f, -1.840933f },
	{ 1.405298f, -1.492476f, -4.60967f },
	{ -2.404104f, 0, -1.840933f },
	{ -1.987392f, 0, -4.60967f },
	{ 0, 2.473452f, -1.840933f },
	{ 0, 2.110679f, -4.60967f },
	{ -1.699959f, 1.748995f, -1.840933f },
	{ -1.405298f, 1.492477f, -4.60967f },
	{ 0, -3.297937f, -0.927804f },
	{ -2.266609f, -2.331994f, -0.927804f },
	{ 2.266609f, 2.331994f, -0.927804f },
	{ 3.205471f, 0, -0.927804f },
	{ 2.266609f, -2.331994f, -0.927804f },
	{ -3.20547f, 0, -0.927804f },
	{ 0, 3.297937f, -0.927804f },
	{ -2.266609f, 2.331994f, -0.927804f },
	{ -2.274453f, -2.340063f, 7.201575f },
	{ 0, -3.309348f, 7.201575f },
	{ 0, -2.548199f, 10.27958f },
	{ -1.751328f, -1.801848f, 10.27958f },
	{ 3.216563f, 0, 7.201575f },
	{ 2.476753f, 0.572957f, 10.27958f },
	{ 2.274453f, -2.340063f, 7.201575f },
	{ 1.751328f, -1.801848f, 10.27958f },
	{ -3.216562f, 0, 7.201575f },
	{ -2.476753f, 0.572957f, 10.27958f },
	{ 0.031367f, 0.572743f, 9.300749f },
	{ 0, 0, 0.50239f }
};

NJS_VECTOR normal_00216ED8[] = {
	{ 0.000085f, -0.892002f, -0.452031f },
	{ -0.641135f, -0.620818f, -0.451144f },
	{ -0.233064f, -0.235932f, -0.943407f },
	{ 0.000365f, -0.354767f, -0.9349549f },
	{ 0.641135f, 0.620818f, -0.451144f },
	{ 0.894226f, -0.00083f, -0.447615f },
	{ 0.315742f, -0.000362f, -0.948845f },
	{ 0.233064f, 0.235932f, -0.943407f },
	{ 0.642175f, -0.6218179f, -0.448279f },
	{ 0.23744f, -0.24028f, -0.941216f },
	{ -0.894226f, 0.000083f, -0.447615f },
	{ -0.315742f, 0.000362f, -0.948845f },
	{ -0.00085f, 0.892002f, -0.452031f },
	{ -0.000365f, 0.354767f, -0.9349549f },
	{ -0.642175f, 0.6218179f, -0.448279f },
	{ -0.23744f, 0.24028f, -0.941216f },
	{ 0, -0.9430259f, -0.332719f },
	{ -0.673245f, -0.6614839f, -0.330423f },
	{ 0.7161919f, 0.51037f, -0.476016f },
	{ 0.944644f, 0, -0.328097f },
	{ 0.673245f, -0.6614839f, -0.330423f },
	{ -0.944644f, 0, -0.328097f },
	{ 0, 0.742215f, -0.670162f },
	{ -0.7161919f, 0.5103689f, -0.476016f },
	{ -0.716142f, -0.688468f, 0.114688f },
	{ 0, -0.993162f, 0.116747f },
	{ 0.000334f, -0.607195f, 0.794553f },
	{ -0.452184f, -0.415937f, 0.789003f },
	{ 0.9464549f, -0.293973f, 0.133431f },
	{ 0.461552f, -0.175758f, 0.869528f },
	{ 0.713385f, -0.688269f, 0.131787f },
	{ 0.436276f, -0.404259f, 0.803889f },
	{ -0.949911f, -0.295362f, 0.102133f },
	{ -0.495477f, -0.187889f, 0.848057f },
	{ -0.004594f, 0.196623f, 0.980468f },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_00217088 = { vertex_00216D28, normal_00216ED8, LengthOfArray<Sint32>(vertex_00216D28), meshlist_00216C98, matlist_0021690C, LengthOfArray<Uint16>(meshlist_00216C98), LengthOfArray<Uint16>(matlist_0021690C),{ 0, -0.005706f, 2.834956f }, 8.144724f, NULL };

NJS_OBJECT object_002170B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00217088, 0, -4.882803f, -2.814724f, 0, 0, 0, 1, 1, 1, NULL, &object_002168D8 };

NJS_MATERIAL matlist_002170E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_bodya_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0021710C[] = {
	5, 1, 0, 2,
	1, 3, 2, 4
};

Sint16 poly_0021711C[] = {
	3, 5, 4, 0
};

NJS_TEX uv_00217124[] = {
	{ 237, 79 },
	{ 237, 105 },
	{ 215, 79 },
	{ 215, 105 },
	{ 233, 79 },
	{ 233, 105 },
	{ 213, 79 },
	{ 213, 105 }
};

NJS_MESHSET_SADX meshlist_00217144[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_0021710C, NULL, NULL, NULL, uv_00217124, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_0021711C, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_00217174[] = {
	{ -0.134722f, 0.715145f, -0.289842f },
	{ 0.281386f, -0.197365f, -0.173128f },
	{ 0.168395f, 0.715143f, -0.459013f },
	{ -0.021732f, -0.166645f, -0.342299f },
	{ -0.134722f, 0.715143f, -0.628185f },
	{ -0.021733f, -0.189137f, -0.003956f }
};

NJS_VECTOR normal_002171BC[] = {
	{ -0.633602f, 0.157636f, 0.75743f },
	{ 0.96693f, 0.17206f, 0.188261f },
	{ 0.980968f, 0.05471f, -0.186304f },
	{ -0.504482f, -0.321427f, -0.801363f },
	{ -0.464071f, -0.323834f, -0.824482f },
	{ -0.334891f, 0.242802f, 0.910437f }
};

NJS_MODEL_SADX attach_00217204 = { vertex_00217174, normal_002171BC, LengthOfArray<Sint32>(vertex_00217174), meshlist_00217144, matlist_002170E4, LengthOfArray<Uint16>(meshlist_00217144), LengthOfArray<Uint16>(matlist_002170E4),{ 0.073332f, 0.25889f, -0.316071f }, 0.616843f, NULL };

NJS_OBJECT object_0021722C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00217204, 0.7345729f, 6.981052f, -18.7316f, 0x15AB, 0xFFFFF9C0, 0x3C0D, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00217260[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_bodya_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00217288[] = {
	5, 1, 0, 2,
	1, 3, 2, 4
};

Sint16 poly_00217298[] = {
	3, 5, 4, 0
};

NJS_TEX uv_002172A0[] = {
	{ 237, 79 },
	{ 237, 105 },
	{ 215, 79 },
	{ 215, 105 },
	{ 233, 79 },
	{ 233, 105 },
	{ 213, 79 },
	{ 213, 105 }
};

NJS_MESHSET_SADX meshlist_002172C0[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_00217288, NULL, NULL, NULL, uv_002172A0, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_00217298, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_002172F0[] = {
	{ -0.10104f, 0.888074f, 0.169171f },
	{ 0.202078f, -0.006639f, -0.00001f },
	{ 0.202078f, 0.888074f, -0.00001f },
	{ -0.10104f, -0.006639f, -0.169173f },
	{ -0.10104f, 0.888074f, -0.169173f },
	{ -0.10104f, -0.006639f, 0.169171f }
};

NJS_VECTOR normal_00217338[] = {
	{ -0.5062889f, 0, 0.862364f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.5062889f, 0, -0.862364f },
	{ -0.5062889f, 0, -0.862364f },
	{ -0.5062889f, 0, 0.862364f }
};

NJS_MODEL_SADX attach_00217380 = { vertex_002172F0, normal_00217338, LengthOfArray<Sint32>(vertex_002172F0), meshlist_002172C0, matlist_00217260, LengthOfArray<Uint16>(meshlist_002172C0), LengthOfArray<Uint16>(matlist_00217260),{ 0.050519f, 0.440718f, -0.00001f }, 0.579375f, NULL };

NJS_OBJECT object_002173A8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00217380, 0.875304f, 6.898808f, -18.48437f, 0x15AB, 0xFFFFF9C0, 0x3C0D, 1, 1, 1, NULL, &object_0021722C };

NJS_MATERIAL matlist_002173DC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_wingc_titb, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002173F0[] = {
	12, 7, 11,
	10, 7, 12
};

Sint16 poly_002173FC[] = {
	12, 5, 10, 8,
	6, 10, 0, 8,
	7, 2, 11, 3,
	10, 1, 7, 2,
	11, 9, 12, 5,
	11, 3, 6, 4,
	6, 4, 10, 1,
	11, 6, 9, 0,
	2, 1, 3, 4
};

NJS_TEX uv_00217444[] = {
	{ 37, 141 },
	{ 59, 241 },
	{ 59, 96 },
	{ 59, 97 },
	{ 59, 241 },
	{ 37, 141 }
};

NJS_TEX uv_0021745C[] = {
	{ 37, 141 },
	{ 0, 99 },
	{ 59, 97 },
	{ 2, 60 },
	{ 59, 41 },
	{ 59, 97 },
	{ 6, 3 },
	{ 2, 60 },
	{ 59, 241 },
	{ 250, 255 },
	{ 59, 96 },
	{ 251, 196 },
	{ 59, 97 },
	{ 250, 197 },
	{ 59, 241 },
	{ 250, 255 },
	{ 59, 96 },
	{ 1, 58 },
	{ 37, 141 },
	{ 0, 99 },
	{ 59, 96 },
	{ 251, 196 },
	{ 59, 41 },
	{ 250, 168 },
	{ 59, 41 },
	{ 250, 168 },
	{ 59, 97 },
	{ 250, 197 },
	{ 59, 96 },
	{ 59, 41 },
	{ 1, 58 },
	{ 6, 3 },
	{ 250, 255 },
	{ 250, 197 },
	{ 251, 196 },
	{ 250, 168 }
};

NJS_MESHSET_SADX meshlist_002174EC[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_002173F0, NULL, NULL, NULL, uv_00217444, NULL },
	{ NJD_MESHSET_4 | 0, 9, poly_002173FC, NULL, NULL, NULL, uv_0021745C, NULL }
};

NJS_VECTOR vertex_0021751C[] = {
	{ 0.730337f, 6.97571f, -17.22096f },
	{ 10.83919f, 7.504452f, -24.17641f },
	{ 10.85376f, 7.334262f, -26.26438f },
	{ 10.86162f, 7.242548f, -24.15421f },
	{ 10.84942f, 7.38501f, -23.16367f },
	{ 0.45384f, 6.890081f, -20.67986f },
	{ 2.918328f, 7.074228f, -18.57692f },
	{ 2.922465f, 6.923226f, -25.7645f },
	{ 0.563705f, 7.426566f, -19.24645f },
	{ 0.524786f, 6.444066f, -19.20206f },
	{ 2.908504f, 7.439323f, -20.60241f },
	{ 2.929999f, 6.643716f, -20.55803f },
	{ 1.990319f, 6.993837f, -22.17794f }
};

NJS_VECTOR normal_002175B8[] = {
	{ 0.56977f, -0.041642f, 0.820749f },
	{ 0.646233f, 0.763115f, -0.006208f },
	{ 0.559382f, 0.013917f, -0.828793f },
	{ 0.744573f, -0.667299f, 0.017968f },
	{ 0.745793f, 0.044031f, 0.664722f },
	{ -0.542307f, -0.104241f, -0.833689f },
	{ 0.561718f, 0.037656f, 0.826471f },
	{ -0.518043f, -0.044844f, -0.854178f },
	{ -0.030605f, 0.9995199f, 0.004764f },
	{ 0.07173999f, -0.996509f, 0.042696f },
	{ -0.07309099f, 0.996718f, -0.034805f },
	{ 0.026744f, -0.999642f, 0.000897f },
	{ -0.849998f, -0.027126f, -0.526087f }
};

NJS_MODEL_SADX attach_00217654 = { vertex_0021751C, normal_002175B8, LengthOfArray<Sint32>(vertex_0021751C), meshlist_002174EC, matlist_002173DC, LengthOfArray<Uint16>(meshlist_002174EC), LengthOfArray<Uint16>(matlist_002173DC),{ 5.657731f, 6.974259f, -21.74267f }, 7.508941f, NULL };

NJS_OBJECT object_0021767C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00217654, -0.504594f, -7.032907f, 20.77608f, 0, 0, 0, 1, 1, 1, &object_002173A8, NULL };

NJS_OBJECT object_002176B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.628721f, 7.032905f, -20.77608f, 0xFFFFFBEC, 0x14E0, 0xFFFFEFBF, 1, 1, 1, &object_0021767C, &object_002170B0 };

NJS_MATERIAL matlist_002176E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002176F8[] = {
	3, 5, 4, 0,
	1, 3, 2, 4,
	5, 1, 0, 2
};

NJS_TEX uv_00217710[] = {
	{ 233, 79 },
	{ 233, 105 },
	{ 211, 79 },
	{ 211, 105 },
	{ 233, 79 },
	{ 233, 105 },
	{ 211, 79 },
	{ 211, 105 },
	{ 239, 79 },
	{ 239, 105 },
	{ 217, 79 },
	{ 217, 105 }
};

NJS_MESHSET_SADX meshlist_00217740[] = {
	{ NJD_MESHSET_4 | 0, 3, poly_002176F8, NULL, NULL, NULL, uv_00217710, NULL }
};

NJS_VECTOR vertex_00217758[] = {
	{ -0.15309f, 6.686202f, 0.256321f },
	{ 0.30618f, -0.05f, 0 },
	{ 0.30618f, 6.686202f, 0 },
	{ -0.15309f, -0.05f, -0.256321f },
	{ -0.15309f, 6.686202f, -0.256321f },
	{ -0.15309f, -0.05f, 0.256321f }
};

NJS_VECTOR normal_002177A0[] = {
	{ -0.5062889f, 0, 0.862364f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.5062889f, 0, -0.862364f },
	{ -0.5062889f, 0, -0.862364f },
	{ -0.5062889f, 0, 0.862364f }
};

NJS_MODEL_SADX attach_002177E8 = { vertex_00217758, normal_002177A0, LengthOfArray<Sint32>(vertex_00217758), meshlist_00217740, matlist_002176E4, LengthOfArray<Uint16>(meshlist_00217740), LengthOfArray<Uint16>(matlist_002176E4),{ 0.07654499f, 3.318101f, 0 }, 2.619473f, NULL };

NJS_OBJECT object_00217810 = { NJD_EVAL_BREAK, &attach_002177E8, -0.935052f, 2.635458f, 6.942938f, 0xFFFFD90D, 0xFFFFF858, 0x2552, 0.66f, 0.783698f, 0.66f, NULL, &object_002176B0 };

NJS_MATERIAL matlist_00217844[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00217858[] = {
	1, 0, 2
};

Sint16 poly_0021785E[] = {
	5, 1, 3, 2,
	4, 0, 5, 1,
	3, 2, 4, 0
};

NJS_TEX uv_00217878[] = {
	{ 121, 39 },
	{ 139, 28 },
	{ 121, 17 }
};

NJS_TEX uv_00217884[] = {
	{ 237, 79 },
	{ 221, 79 },
	{ 237, 105 },
	{ 221, 105 },
	{ 235, 79 },
	{ 215, 79 },
	{ 235, 105 },
	{ 215, 105 },
	{ 237, 79 },
	{ 221, 79 },
	{ 237, 105 },
	{ 221, 105 }
};

NJS_MESHSET_SADX meshlist_002178B4[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00217858, NULL, NULL, NULL, uv_00217878, NULL },
	{ NJD_MESHSET_4 | 0, 3, poly_0021785E, NULL, NULL, NULL, uv_00217884, NULL }
};

NJS_VECTOR vertex_002178E4[] = {
	{ 0.160508f, 0.019246f, 0.531222f },
	{ -0.298762f, 0.019246f, 0.274901f },
	{ -0.298762f, 0.019246f, 0.787543f },
	{ -0.209127f, 4.659808f, 0.095039f },
	{ 0.250143f, 4.659808f, -0.161282f },
	{ -0.209127f, 4.659808f, -0.417603f }
};

NJS_VECTOR normal_0021792C[] = {
	{ 0.828635f, -0.555506f, 0.069114f },
	{ -0.444102f, -0.596205f, -0.668815f },
	{ -0.415514f, -0.504487f, 0.756862f },
	{ -0.532039f, 0.135015f, 0.8358859f },
	{ 0.9962609f, -0.031262f, -0.08053999f },
	{ -0.462856f, -0.12208f, -0.877987f }
};

NJS_MODEL_SADX attach_00217974 = { vertex_002178E4, normal_0021792C, LengthOfArray<Sint32>(vertex_002178E4), meshlist_002178B4, matlist_00217844, LengthOfArray<Uint16>(meshlist_002178B4), LengthOfArray<Uint16>(matlist_00217844),{ -0.024309f, 2.339527f, 0.18497f }, 1.020824f, NULL };

NJS_OBJECT object_0021799C = { NJD_EVAL_BREAK, &attach_00217974, -2.594259f, 3.96479f, 5.7846f, 0xFFFFE73B, 0xFFFFF843, 0x2732, 0.66f, 0.384243f, 0.66f, NULL, &object_00217810 };

NJS_MATERIAL matlist_002179D0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002179E4[] = {
	6, 7, 8
};

Sint16 poly_002179EA[] = {
	6, 3, 7, 5,
	5, 2, 4, 1,
	8, 4, 6, 3,
	4, 1, 3, 0,
	3, 0, 5, 2,
	7, 5, 8, 4
};

NJS_TEX uv_00217A1C[] = {
	{ 121, 17 },
	{ 124, 39 },
	{ 139, 25 }
};

NJS_TEX uv_00217A28[] = {
	{ 231, 79 },
	{ 227, 79 },
	{ 231, 105 },
	{ 228, 105 },
	{ 235, 79 },
	{ 225, 79 },
	{ 234, 105 },
	{ 225, 105 },
	{ 241, 79 },
	{ 238, 79 },
	{ 241, 105 },
	{ 238, 105 },
	{ 238, 79 },
	{ 227, 79 },
	{ 238, 105 },
	{ 227, 105 },
	{ 227, 79 },
	{ 213, 79 },
	{ 228, 105 },
	{ 213, 105 },
	{ 237, 79 },
	{ 235, 79 },
	{ 237, 105 },
	{ 234, 105 }
};

NJS_MESHSET_SADX meshlist_00217A88[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_002179E4, NULL, NULL, NULL, uv_00217A1C, NULL },
	{ NJD_MESHSET_4 | 0, 6, poly_002179EA, NULL, NULL, NULL, uv_00217A28, NULL }
};

NJS_VECTOR vertex_00217AB8[] = {
	{ -0.15309f, 6.686202f, 0.256321f },
	{ 0.30618f, 6.686202f, 0 },
	{ -0.15309f, 6.686202f, -0.256321f },
	{ -0.019545f, 3.501782f, 0.748358f },
	{ 0.439725f, 3.501782f, 0.492037f },
	{ -0.019545f, 3.501782f, 0.235716f },
	{ -0.068795f, 2.805271f, 0.606998f },
	{ 0.015305f, 3.06537f, 0.149374f },
	{ 0.454389f, 2.787022f, 0.439426f }
};

NJS_VECTOR normal_00217B24[] = {
	{ -0.560726f, 0.103421f, 0.821517f },
	{ 0.995764f, 0.02824f, -0.08749899f },
	{ -0.482878f, -0.153462f, -0.8621359f },
	{ -0.442469f, -0.002516f, 0.89678f },
	{ 0.997955f, 0.020869f, 0.060415f },
	{ -0.5560229f, -0.011947f, -0.831081f },
	{ -0.444991f, -0.7423339f, 0.500922f },
	{ -0.427525f, -0.222449f, -0.876207f },
	{ 0.773181f, -0.623657f, -0.115076f }
};

NJS_MODEL_SADX attach_00217B90 = { vertex_00217AB8, normal_00217B24, LengthOfArray<Sint32>(vertex_00217AB8), meshlist_00217A88, matlist_002179D0, LengthOfArray<Uint16>(meshlist_00217A88), LengthOfArray<Uint16>(matlist_002179D0),{ 0.150649f, 4.736612f, 0.246019f }, 1.481425f, NULL };

NJS_OBJECT object_00217BB8 = { NJD_EVAL_BREAK, &attach_00217B90, -1.008561f, 2.370342f, 6.416966f, 0xFFFFE73B, 0xFFFFF41B, 0x2552, 0.66f, 0.783698f, 0.66f, NULL, &object_0021799C };

NJS_MATERIAL matlist_00217BEC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_eme_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_eme2_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_canob_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00217C28[] = {
	0, 1, 2,
	7, 5, 2,
	11, 9, 2,
	15, 13, 2,
	1, 15, 2
};

Sint16 poly_00217C46[] = {
	0, 5, 3, 6,
	7, 9, 8, 10,
	11, 13, 12, 14,
	15, 1, 16, 4
};

Sint16 poly_00217C66[] = {
	5, 0, 2,
	9, 7, 2,
	13, 11, 2
};

Sint16 poly_00217C78[] = {
	1, 0, 4, 3,
	5, 7, 6, 8,
	9, 11, 10, 12,
	13, 15, 14, 16
};

Sint16 poly_00217C98[] = {
	17, 18, 19,
	22, 17, 19,
	24, 22, 19,
	26, 24, 19,
	28, 26, 19,
	30, 28, 19,
	32, 30, 19,
	18, 32, 19
};

Sint16 poly_00217CC8[] = {
	18, 17, 21, 20,
	17, 22, 20, 23,
	22, 24, 23, 25,
	24, 26, 25, 27,
	26, 28, 27, 29,
	28, 30, 29, 31,
	30, 32, 31, 33,
	32, 18, 33, 21
};

NJS_TEX uv_00217D08[] = {
	{ 245, 254 },
	{ 245, 8 },
	{ 0, 8 },
	{ 245, 254 },
	{ 245, 8 },
	{ 0, 8 },
	{ 245, 254 },
	{ 245, 8 },
	{ 0, 8 },
	{ 245, 254 },
	{ 245, 8 },
	{ 0, 8 },
	{ 133, 151 },
	{ 142, 80 },
	{ 247, 131 }
};

NJS_TEX uv_00217D44[] = {
	{ 245, 254 },
	{ 245, 8 },
	{ 0, 254 },
	{ 0, 8 },
	{ 245, 254 },
	{ 245, 8 },
	{ 0, 254 },
	{ 0, 8 },
	{ 245, 254 },
	{ 245, 8 },
	{ 0, 254 },
	{ 0, 8 },
	{ 245, 254 },
	{ 245, 8 },
	{ 0, 254 },
	{ 0, 8 }
};

NJS_TEX uv_00217D84[] = {
	{ 246, 9 },
	{ 246, 254 },
	{ 0, 254 },
	{ 246, 9 },
	{ 246, 254 },
	{ 0, 254 },
	{ 246, 9 },
	{ 246, 254 },
	{ 0, 254 }
};

NJS_TEX uv_00217DA8[] = {
	{ 246, 9 },
	{ 246, 254 },
	{ 0, 8 },
	{ 0, 254 },
	{ 246, 9 },
	{ 246, 254 },
	{ 0, 8 },
	{ 0, 254 },
	{ 246, 9 },
	{ 246, 254 },
	{ 0, 8 },
	{ 0, 254 },
	{ 246, 9 },
	{ 246, 254 },
	{ 0, 8 },
	{ 0, 254 }
};

NJS_TEX uv_00217DE8[] = {
	{ 27, 135 },
	{ -6, 135 },
	{ -6, 255 },
	{ 61, 135 },
	{ 27, 135 },
	{ -6, 255 },
	{ 94, 135 },
	{ 61, 135 },
	{ -6, 255 },
	{ 128, 135 },
	{ 94, 135 },
	{ 262, 255 },
	{ 162, 135 },
	{ 128, 135 },
	{ 262, 255 },
	{ 196, 135 },
	{ 162, 135 },
	{ 262, 255 },
	{ 229, 135 },
	{ 196, 135 },
	{ 262, 255 },
	{ 262, 135 },
	{ 229, 135 },
	{ 262, 255 }
};

NJS_TEX uv_00217E48[] = {
	{ -6, 135 },
	{ 27, 135 },
	{ -6, 15 },
	{ 27, 15 },
	{ 27, 135 },
	{ 61, 135 },
	{ 27, 15 },
	{ 61, 15 },
	{ 61, 135 },
	{ 94, 135 },
	{ 61, 15 },
	{ 94, 15 },
	{ 94, 135 },
	{ 128, 135 },
	{ 94, 15 },
	{ 128, 15 },
	{ 128, 135 },
	{ 162, 135 },
	{ 128, 15 },
	{ 162, 15 },
	{ 162, 135 },
	{ 196, 135 },
	{ 162, 15 },
	{ 196, 15 },
	{ 196, 135 },
	{ 229, 135 },
	{ 196, 15 },
	{ 229, 15 },
	{ 229, 135 },
	{ 262, 135 },
	{ 229, 15 },
	{ 262, 15 }
};

NJS_MESHSET_SADX meshlist_00217EC8[] = {
	{ NJD_MESHSET_3 | 0, 5, poly_00217C28, NULL, NULL, NULL, uv_00217D08, NULL },
	{ NJD_MESHSET_4 | 0, 4, poly_00217C46, NULL, NULL, NULL, uv_00217D44, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly_00217C66, NULL, NULL, NULL, uv_00217D84, NULL },
	{ NJD_MESHSET_4 | 1, 4, poly_00217C78, NULL, NULL, NULL, uv_00217DA8, NULL },
	{ NJD_MESHSET_3 | 2, 8, poly_00217C98, NULL, NULL, NULL, uv_00217DE8, NULL },
	{ NJD_MESHSET_4 | 2, 8, poly_00217CC8, NULL, NULL, NULL, uv_00217E48, NULL }
};

NJS_VECTOR vertex_00217F58[] = {
	{ 0.771989f, -0.8256519f, 1.01947f },
	{ 1.041521f, -0.261979f, 1.61258f },
	{ -0.007311f, -0.0059f, 3.445233f },
	{ 1.13637f, -1.14958f, -0.526837f },
	{ 1.610097f, -0.0059f, -0.526837f },
	{ -0.054183f, -1.300323f, 0.6932589f },
	{ -0.00731f, -1.623308f, -0.526837f },
	{ -0.8393379f, -0.677317f, 1.701546f },
	{ -1.15099f, -1.14958f, -0.526837f },
	{ -1.10301f, 0.183025f, 1.523612f },
	{ -1.624718f, -0.0059f, -0.526837f },
	{ -0.856917f, 0.8950329f, 1.07878f },
	{ -1.15099f, 1.13778f, -0.526837f },
	{ -0.007308f, 1.251037f, 0.989814f },
	{ -0.00731f, 1.611508f, -0.526837f },
	{ 0.842302f, 0.657697f, 1.760856f },
	{ 1.13637f, 1.13778f, -0.526837f },
	{ 1.025789f, -1.045797f, 2.119858f },
	{ 1.453712f, -0.005901f, 2.119858f },
	{ -0.007312f, -0.0059f, 4.772149f },
	{ 1.52004f, -1.533251f, -0.532432f },
	{ 2.15269f, -0.0059f, -0.532432f },
	{ -0.007311f, -1.476536f, 2.119858f },
	{ -0.00731f, -2.1659f, -0.532433f },
	{ -1.04041f, -1.045797f, 2.119858f },
	{ -1.534661f, -1.533251f, -0.532433f },
	{ -1.468333f, -0.005901f, 2.119858f },
	{ -2.16731f, -0.0059f, -0.532433f },
	{ -1.04041f, 1.033996f, 2.119858f },
	{ -1.534661f, 1.521451f, -0.532433f },
	{ -0.007311f, 1.464735f, 2.119858f },
	{ -0.00731f, 2.1541f, -0.532433f },
	{ 1.025789f, 1.033996f, 2.119858f },
	{ 1.52004f, 1.521451f, -0.532432f }
};

NJS_VECTOR normal_002180F0[] = {
	{ 0.58988f, -0.7302949f, 0.344546f },
	{ 0.869159f, -0.260755f, 0.420201f },
	{ -0.00048f, -0.016016f, 0.999872f },
	{ 0.644434f, -0.70904f, 0.286301f },
	{ 0.948823f, -0.07100099f, 0.307725f },
	{ 0.008966f, -0.950649f, 0.310138f },
	{ 0.012649f, -0.963729f, 0.266581f },
	{ -0.645619f, -0.6353379f, 0.4237f },
	{ -0.694721f, -0.6652369f, 0.273538f },
	{ -0.909852f, 0.140095f, 0.390567f },
	{ -0.965221f, 0.024567f, 0.260278f },
	{ -0.6293589f, 0.704565f, 0.327864f },
	{ -0.678417f, 0.695972f, 0.235317f },
	{ 0.000001f, 0.947657f, 0.31929f },
	{ 0.010083f, 0.969757f, 0.243864f },
	{ 0.671024f, 0.6037059f, 0.430425f },
	{ 0.70372f, 0.652678f, 0.280694f },
	{ 0.660143f, -0.658726f, 0.360958f },
	{ 0.932448f, -0.00029f, 0.361303f },
	{ 0, 0, 1 },
	{ 0.685048f, -0.683293f, 0.252626f },
	{ 0.967135f, -0.00054f, 0.254265f },
	{ 0.000029f, -0.932484f, 0.361211f },
	{ 0.000053f, -0.967694f, 0.252129f },
	{ -0.659979f, -0.6585619f, 0.361556f },
	{ -0.684836f, -0.683081f, 0.253771f },
	{ -0.932449f, 0.000029f, 0.361303f },
	{ -0.967135f, 0.000054f, 0.254265f },
	{ -0.660143f, 0.658726f, 0.360958f },
	{ -0.685048f, 0.683293f, 0.252626f },
	{ -0.00029f, 0.932484f, 0.361211f },
	{ -0.00054f, 0.967694f, 0.252129f },
	{ 0.659979f, 0.6585619f, 0.361556f },
	{ 0.684836f, 0.683082f, 0.253771f }
};

NJS_MODEL_SADX attach_00218288 = { vertex_00217F58, normal_002180F0, LengthOfArray<Sint32>(vertex_00217F58), meshlist_00217EC8, matlist_00217BEC, LengthOfArray<Uint16>(meshlist_00217EC8), LengthOfArray<Uint16>(matlist_00217BEC),{ -0.00731f, -0.0059f, 2.119858f }, 3.336052f, NULL };

NJS_OBJECT object_002182B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00218288, 0, -0.166616f, 11.9302f, 0, 0, 0xFFFFEE90, 1, 1, 1, NULL, &object_00217BB8 };

NJS_MATERIAL matlist_002182E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002182F8[] = {
	1, 3, 2, 7,
	1, 5, 3, 4,
	5, 0, 4, 6,
	5, 1, 0, 2,
	7, 3, 6, 4,
	6, 0, 7, 2
};

NJS_TEX uv_00218328[] = {
	{ 253, 79 },
	{ 253, 105 },
	{ 197, 79 },
	{ 197, 105 },
	{ 253, 79 },
	{ 253, 105 },
	{ 197, 79 },
	{ 197, 105 },
	{ 253, 79 },
	{ 197, 79 },
	{ 253, 105 },
	{ 197, 105 },
	{ 253, 79 },
	{ 253, 105 },
	{ 197, 79 },
	{ 197, 105 },
	{ 253, 79 },
	{ 197, 79 },
	{ 253, 105 },
	{ 197, 105 },
	{ 253, 79 },
	{ 197, 79 },
	{ 253, 105 },
	{ 197, 105 }
};

NJS_MESHSET_SADX meshlist_00218388[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_002182F8, NULL, NULL, NULL, uv_00218328, NULL }
};

NJS_VECTOR vertex_002183A0[] = {
	{ 0.086416f, -0.720654f, -2.984637f },
	{ -0.07178099f, 0.23939f, 2.053217f },
	{ -0.086416f, -0.720654f, -2.984637f },
	{ -0.091685f, 0.54788f, 0.5003549f },
	{ 0.08114699f, 0.54788f, 0.5003549f },
	{ 0.101051f, 0.23939f, 2.053217f },
	{ 0.08114699f, -0.14336f, -2.738761f },
	{ -0.091685f, -0.14336f, -2.73876f }
};

NJS_VECTOR normal_00218400[] = {
	{ 0.5541019f, -0.521974f, -0.648471f },
	{ -0.536386f, -0.001565f, 0.843971f },
	{ -0.5492f, -0.5284179f, -0.647422f },
	{ -0.672959f, 0.739674f, -0.002854f },
	{ 0.659301f, 0.751844f, -0.007241f },
	{ 0.542316f, -0.010882f, 0.840104f },
	{ 0.612334f, 0.610952f, -0.5017819f },
	{ -0.623444f, 0.600061f, -0.501243f }
};

NJS_MODEL_SADX attach_00218460 = { vertex_002183A0, normal_00218400, LengthOfArray<Sint32>(vertex_002183A0), meshlist_00218388, matlist_002182E4, LengthOfArray<Uint16>(meshlist_00218388), LengthOfArray<Uint16>(matlist_002182E4),{ 0.004683f, -0.08638699f, -0.46571f }, 2.602232f, NULL };

NJS_OBJECT object_00218488 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00218460, -16.74997f, 11.90211f, -7.594011f, 0x90B, 0xFFFFF156, 0xFFFFE55B, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_002184BC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002184D0[] = {
	2, 0, 1,
	1, 3, 2
};

NJS_TEX uv_002184DC[] = {
	{ 249, 255 },
	{ 195, 255 },
	{ 195, 187 },
	{ 195, 187 },
	{ 249, 187 },
	{ 249, 255 }
};

NJS_MESHSET_SADX meshlist_002184F4[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_002184D0, NULL, NULL, NULL, uv_002184DC, NULL }
};

NJS_VECTOR vertex_0021850C[] = {
	{ -0.730446f, 0.88f, -2.463843f },
	{ -0.88704f, 0.8249919f, 1.099803f },
	{ 1.324443f, 0.931778f, -1.326029f },
	{ 1.158246f, -0.044646f, 2.59736f }
};

NJS_VECTOR normal_0021853C[] = {
	{ -0.032922f, 0.99936f, 0.013979f },
	{ 0.142705f, 0.97453f, 0.172995f },
	{ 0.057283f, 0.993735f, 0.095966f },
	{ 0.222423f, 0.943841f, 0.244318f }
};

NJS_MODEL_SADX attach_0021856C = { vertex_0021850C, normal_0021853C, LengthOfArray<Sint32>(vertex_0021850C), meshlist_002184F4, matlist_002184BC, LengthOfArray<Uint16>(meshlist_002184F4), LengthOfArray<Uint16>(matlist_002184BC),{ 0.218701f, 0.443566f, 0.066758f }, 3.038745f, NULL };

NJS_OBJECT object_00218594 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0021856C, -15.56405f, 11.30866f, -8.344853f, 0, 0, 0xFFFFF734, 1, 1, 1, NULL, &object_00218488 };

NJS_MATERIAL matlist_002185C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002185DC[] = {
	3, 1, 5
};

Sint16 poly_002185E2[] = {
	0, 4, 1, 5,
	2, 6, 4, 8,
	4, 8, 5, 3,
	6, 7, 8, 0,
	8, 0, 3, 1,
	7, 2, 0, 4
};

NJS_TEX uv_00218614[] = {
	{ 121, 39 },
	{ 121, 17 },
	{ 139, 28 }
};

NJS_TEX uv_00218620[] = {
	{ 224, 79 },
	{ 224, 105 },
	{ 217, 79 },
	{ 217, 105 },
	{ 225, 79 },
	{ 225, 105 },
	{ 218, 79 },
	{ 218, 105 },
	{ 218, 79 },
	{ 218, 105 },
	{ 215, 79 },
	{ 215, 105 },
	{ 237, 79 },
	{ 237, 105 },
	{ 219, 79 },
	{ 219, 105 },
	{ 219, 79 },
	{ 219, 105 },
	{ 209, 79 },
	{ 209, 105 },
	{ 237, 79 },
	{ 237, 105 },
	{ 224, 79 },
	{ 224, 105 }
};

NJS_MESHSET_SADX meshlist_00218680[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_002185DC, NULL, NULL, NULL, uv_00218614, NULL },
	{ NJD_MESHSET_4 | 0, 6, poly_002185E2, NULL, NULL, NULL, uv_00218620, NULL }
};

NJS_VECTOR vertex_002186B0[] = {
	{ -0.15309f, 4.435401f, 0.256321f },
	{ -1.652678f, 6.479316f, 0.069694f },
	{ 0.30618f, -0.05f, 0 },
	{ -1.652678f, 6.479316f, -0.442948f },
	{ 0.30618f, 4.435401f, 0 },
	{ -1.193408f, 6.479316f, -0.186627f },
	{ -0.15309f, -0.05f, -0.256321f },
	{ -0.15309f, -0.05f, 0.256321f },
	{ -0.15309f, 4.435401f, -0.256321f }
};

NJS_VECTOR normal_0021871C[] = {
	{ -0.338033f, -0.017425f, 0.940973f },
	{ -0.646109f, 0.394968f, 0.653103f },
	{ 1, 0, 0 },
	{ -0.620367f, 0.367325f, -0.692977f },
	{ 0.962818f, 0.26996f, 0.010155f },
	{ 0.623252f, 0.780412f, -0.050144f },
	{ -0.5062889f, 0, -0.862364f },
	{ -0.5062889f, 0, 0.862364f },
	{ -0.329414f, -0.116529f, -0.936967f }
};

NJS_MODEL_SADX attach_00218788 = { vertex_002186B0, normal_0021871C, LengthOfArray<Sint32>(vertex_002186B0), meshlist_00218680, matlist_002185C8, LengthOfArray<Uint16>(meshlist_00218680), LengthOfArray<Uint16>(matlist_002185C8),{ -0.6732489f, 3.214658f, -0.093314f }, 3.131682f, NULL };

NJS_OBJECT object_002187B0 = { NJD_EVAL_BREAK, &attach_00218788, -13.03884f, 9.283358f, -8.804297f, 0xFFFFF3F1, 0x25C, 0x2496, 0.66f, 1, 0.66f, NULL, &object_00218594 };

NJS_MATERIAL matlist_002187E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002187F8[] = {
	1, 5, 3
};

Sint16 poly_002187FE[] = {
	0, 4, 1, 5,
	2, 6, 4, 8,
	4, 8, 5, 3,
	6, 7, 8, 0,
	8, 0, 3, 1,
	7, 2, 0, 4
};

NJS_TEX uv_00218830[] = {
	{ 121, 17 },
	{ 143, 30 },
	{ 121, 43 }
};

NJS_TEX uv_0021883C[] = {
	{ 220, 79 },
	{ 220, 105 },
	{ 213, 79 },
	{ 213, 105 },
	{ 235, 79 },
	{ 235, 105 },
	{ 218, 79 },
	{ 218, 105 },
	{ 218, 79 },
	{ 218, 105 },
	{ 213, 79 },
	{ 213, 105 },
	{ 233, 79 },
	{ 233, 105 },
	{ 215, 79 },
	{ 215, 105 },
	{ 215, 79 },
	{ 215, 105 },
	{ 209, 79 },
	{ 209, 105 },
	{ 241, 79 },
	{ 241, 105 },
	{ 220, 79 },
	{ 220, 105 }
};

NJS_MESHSET_SADX meshlist_0021889C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_002187F8, NULL, NULL, NULL, uv_00218830, NULL },
	{ NJD_MESHSET_4 | 0, 6, poly_002187FE, NULL, NULL, NULL, uv_0021883C, NULL }
};

NJS_VECTOR vertex_002188CC[] = {
	{ 0.106816f, 4.442711f, 0.275476f },
	{ -0.482125f, 5.868612f, -0.141428f },
	{ 0.30618f, -0.05f, 0 },
	{ -0.482125f, 5.868612f, -0.65407f },
	{ 0.566086f, 4.442711f, 0.019155f },
	{ -0.022855f, 5.868612f, -0.397749f },
	{ -0.15309f, -0.05f, -0.256321f },
	{ -0.15309f, -0.05f, 0.256321f },
	{ 0.106816f, 4.442711f, -0.237166f }
};

NJS_VECTOR normal_00218938[] = {
	{ -0.390383f, 0.08905599f, 0.916335f },
	{ -0.6032929f, 0.517836f, 0.606533f },
	{ 0.998328f, -0.057743f, -0.002479f },
	{ -0.524682f, 0.394058f, -0.754604f },
	{ 0.985931f, 0.159682f, 0.049424f },
	{ 0.72536f, 0.671335f, -0.15219f },
	{ -0.527788f, 0.034151f, -0.848689f },
	{ -0.529994f, 0.027047f, 0.8475699f },
	{ -0.41258f, -0.210683f, -0.8862219f }
};

NJS_MODEL_SADX attach_002189A4 = { vertex_002188CC, normal_00218938, LengthOfArray<Sint32>(vertex_002188CC), meshlist_0021889C, matlist_002187E4, LengthOfArray<Uint16>(meshlist_0021889C), LengthOfArray<Uint16>(matlist_002187E4),{ 0.041981f, 2.909306f, -0.189297f }, 2.678557f, NULL };

NJS_OBJECT object_002189CC = { NJD_EVAL_BREAK, &attach_002189A4, -13.42675f, 9.477314f, -8.045371f, 0xFFFFF3F1, 0x25C, 0x2496, 0.66f, 1, 0.66f, NULL, &object_002187B0 };

NJS_MATERIAL matlist_00218A00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00218A14[] = {
	1, 5, 7
};

Sint16 poly_00218A1A[] = {
	0, 4, 1, 5,
	2, 6, 4, 8,
	4, 8, 5, 7,
	6, 3, 8, 0,
	8, 0, 7, 1,
	3, 2, 0, 4
};

NJS_TEX uv_00218A4C[] = {
	{ 121, 19 },
	{ 139, 31 },
	{ 121, 43 }
};

NJS_TEX uv_00218A58[] = {
	{ 216, 79 },
	{ 216, 105 },
	{ 209, 79 },
	{ 209, 105 },
	{ 237, 79 },
	{ 237, 105 },
	{ 224, 79 },
	{ 224, 105 },
	{ 224, 79 },
	{ 224, 105 },
	{ 219, 79 },
	{ 219, 105 },
	{ 229, 79 },
	{ 229, 105 },
	{ 222, 79 },
	{ 222, 105 },
	{ 222, 79 },
	{ 222, 105 },
	{ 219, 79 },
	{ 219, 105 },
	{ 233, 79 },
	{ 233, 105 },
	{ 216, 79 },
	{ 216, 105 }
};

NJS_MESHSET_SADX meshlist_00218AB8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00218A14, NULL, NULL, NULL, uv_00218A4C, NULL },
	{ NJD_MESHSET_4 | 0, 6, poly_00218A1A, NULL, NULL, NULL, uv_00218A58, NULL }
};

NJS_VECTOR vertex_00218AE8[] = {
	{ -0.15309f, 4.435401f, 0.256321f },
	{ 1.082282f, 5.980629f, 0.005297f },
	{ 0.30618f, -0.05f, 0 },
	{ -0.15309f, -0.05f, 0.256321f },
	{ 0.30618f, 4.435401f, 0 },
	{ 1.541552f, 5.980629f, -0.251024f },
	{ -0.15309f, -0.05f, -0.256321f },
	{ 1.082282f, 5.980629f, -0.507345f },
	{ -0.15309f, 4.435401f, -0.256321f }
};

NJS_VECTOR normal_00218B54[] = {
	{ -0.5520779f, 0.250799f, 0.7951789f },
	{ -0.111745f, 0.641455f, 0.758979f },
	{ 1, 0, 0 },
	{ -0.5062889f, 0, 0.862364f },
	{ 0.914914f, -0.39673f, 0.074419f },
	{ 0.949641f, 0.310181f, -0.044391f },
	{ -0.5062889f, 0, -0.862364f },
	{ -0.125131f, 0.523491f, -0.842793f },
	{ -0.593157f, 0.19792f, -0.78038f }
};

NJS_MODEL_SADX attach_00218BC0 = { vertex_00218AE8, normal_00218B54, LengthOfArray<Sint32>(vertex_00218AE8), meshlist_00218AB8, matlist_00218A00, LengthOfArray<Uint16>(meshlist_00218AB8), LengthOfArray<Uint16>(matlist_00218A00),{ 0.694231f, 2.965314f, -0.125512f }, 2.89753f, NULL };

NJS_OBJECT object_00218BE8 = { NJD_EVAL_BREAK, &attach_00218BC0, -13.42675f, 9.477314f, -7.35766f, 0xFFFFF3F1, 0x25C, 0x2496, 0.66f, 1, 0.66f, NULL, &object_002189CC };

NJS_MATERIAL matlist_00218C1C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00218C30[] = {
	0, 3, 5
};

Sint16 poly_00218C36[] = {
	2, 1, 0, 3,
	1, 4, 3, 5,
	4, 2, 5, 0
};

NJS_TEX uv_00218C50[] = {
	{ 121, 17 },
	{ 143, 30 },
	{ 121, 43 }
};

NJS_TEX uv_00218C5C[] = {
	{ 239, 79 },
	{ 239, 105 },
	{ 213, 79 },
	{ 213, 105 },
	{ 231, 79 },
	{ 231, 105 },
	{ 213, 79 },
	{ 213, 105 },
	{ 237, 79 },
	{ 237, 105 },
	{ 215, 79 },
	{ 215, 105 }
};

NJS_MESHSET_SADX meshlist_00218C8C[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_00218C30, NULL, NULL, NULL, uv_00218C50, NULL },
	{ NJD_MESHSET_4 | 0, 3, poly_00218C36, NULL, NULL, NULL, uv_00218C5C, NULL }
};

NJS_VECTOR vertex_00218CBC[] = {
	{ -0.15309f, 4.435401f, 0.256321f },
	{ 0.30618f, -0.05f, 0 },
	{ -0.15309f, -0.05f, 0.256321f },
	{ 0.30618f, 4.435401f, 0 },
	{ -0.15309f, -0.05f, -0.256321f },
	{ -0.15309f, 4.435401f, -0.256321f }
};

NJS_VECTOR normal_00218D04[] = {
	{ -0.421089f, 0.555201f, 0.7172419f },
	{ 1, 0, 0 },
	{ -0.5062889f, 0, 0.862364f },
	{ 0.832702f, 0.553721f, 0 },
	{ -0.5062889f, 0, -0.862364f },
	{ -0.421089f, 0.555201f, -0.7172419f }
};

NJS_MODEL_SADX attach_00218D4C = { vertex_00218CBC, normal_00218D04, LengthOfArray<Sint32>(vertex_00218CBC), meshlist_00218C8C, matlist_00218C1C, LengthOfArray<Uint16>(meshlist_00218C8C), LengthOfArray<Uint16>(matlist_00218C1C),{ 0.07654499f, 2.1927f, 0 }, 2.053352f, NULL };

NJS_OBJECT object_00218D74 = { NJD_EVAL_BREAK, &attach_00218D4C, -14.07983f, 10.03762f, -6.407f, 0xFFFFF3F1, 0x25C, 0x2496, 0.66f, 1, 0.66f, NULL, &object_00218BE8 };

NJS_MATERIAL matlist_00218DA8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00218DBC[] = {
	3, 0, 5, 1,
	2, 0, 4, 3
};

NJS_TEX uv_00218DCC[] = {
	{ 161, 53 },
	{ 235, 53 },
	{ 161, 1 },
	{ 235, 1 },
	{ 235, 1 },
	{ 235, 53 },
	{ 161, 1 },
	{ 161, 53 }
};

NJS_MESHSET_SADX meshlist_00218DEC[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_00218DBC, NULL, NULL, NULL, uv_00218DCC, NULL }
};

NJS_VECTOR vertex_00218E04[] = {
	{ 2.621752f, -1.884095f, -1.225522f },
	{ 2.547986f, -1.98741f, 0.807625f },
	{ 2.693944f, -1.835694f, 0.819107f },
	{ -2.104431f, 1.539155f, -2.128808f },
	{ -2.102825f, 1.624185f, -0.63586f },
	{ -2.106581f, 1.421716f, -0.61198f }
};

NJS_VECTOR normal_00218E4C[] = {
	{ 0.176519f, -0.019131f, -0.984111f },
	{ -0.577463f, -0.814035f, -0.062317f },
	{ 0.59141f, 0.805239f, -0.04271f },
	{ 0.382405f, 0.294057f, -0.875955f },
	{ 0.59141f, 0.805239f, -0.04271f },
	{ -0.577463f, -0.814035f, -0.062317f }
};

NJS_MODEL_SADX attach_00218E94 = { vertex_00218E04, normal_00218E4C, LengthOfArray<Sint32>(vertex_00218E04), meshlist_00218DEC, matlist_00218DA8, LengthOfArray<Uint16>(meshlist_00218DEC), LengthOfArray<Uint16>(matlist_00218DA8),{ 0.293682f, -0.181612f, -0.6548499f }, 3.659007f, NULL };

NJS_OBJECT object_00218EBC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00218E94, -15.73056f, 10.55018f, -10.86252f, 0xFFFFEEF2, 0xFFFFFB2F, 0x70E, 1, 1, 1, NULL, &object_00218D74 };

NJS_MATERIAL matlist_00218EF0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00218F04[] = {
	13, 18, 21,
	2, 4, 9,
	9, 4, 1,
	25, 23, 22,
	26, 24, 22,
	20, 16, 14
};

Sint16 poly_00218F28[] = {
	19, 0, 21, 15,
	14, 1, 20, 17,
	9, 5, 2, 8,
	17, 0, 20, 19,
	1, 6, 9, 5,
	4, 2, 0, 15,
	6, 1, 7, 3,
	7, 3, 8, 2,
	0, 17, 4, 1,
	22, 10, 26, 11,
	23, 12, 22, 10,
	21, 15, 13, 2
};

Sint16 poly_00218F88[] = {
	5, 22, 3, 25, 1, 14,
	5, 24, 13, 22, 2, 3
};

NJS_TEX uv_00218FA0[] = {
	{ 167, 151 },
	{ 162, 207 },
	{ 144, 200 },
	{ 88, 103 },
	{ 60, 154 },
	{ 32, 115 },
	{ 32, 115 },
	{ 60, 154 },
	{ 83, 103 },
	{ 175, 159 },
	{ 183, 163 },
	{ 183, 130 },
	{ 185, 162 },
	{ 175, 156 },
	{ 183, 130 },
	{ 144, 201 },
	{ 152, 205 },
	{ 167, 154 }
};

NJS_TEX uv_00218FE8[] = {
	{ 144, 231 },
	{ 85, 218 },
	{ 144, 200 },
	{ 86, 178 },
	{ 167, 154 },
	{ 83, 103 },
	{ 144, 201 },
	{ 84, 178 },
	{ 32, 115 },
	{ 3, 96 },
	{ 88, 103 },
	{ 9, 51 },
	{ 84, 178 },
	{ 85, 218 },
	{ 144, 201 },
	{ 144, 231 },
	{ 83, 103 },
	{ 1, 60 },
	{ 32, 115 },
	{ 3, 96 },
	{ 60, 154 },
	{ 88, 103 },
	{ 85, 218 },
	{ 86, 178 },
	{ 1, 60 },
	{ 83, 103 },
	{ 0, 1 },
	{ 85, 60 },
	{ 0, 1 },
	{ 85, 60 },
	{ 9, 51 },
	{ 88, 103 },
	{ 85, 218 },
	{ 84, 178 },
	{ 60, 154 },
	{ 83, 103 },
	{ 183, 130 },
	{ 194, 145 },
	{ 185, 162 },
	{ 193, 171 },
	{ 183, 163 },
	{ 189, 175 },
	{ 183, 130 },
	{ 194, 145 },
	{ 144, 200 },
	{ 86, 178 },
	{ 167, 151 },
	{ 88, 103 }
};

NJS_TEX uv_002190A8[] = {
	{ 183, 130 },
	{ 85, 60 },
	{ 175, 159 },
	{ 83, 103 },
	{ 167, 154 },
	{ 175, 156 },
	{ 167, 151 },
	{ 183, 130 },
	{ 88, 103 },
	{ 85, 60 }
};

NJS_MESHSET_SADX meshlist_002190D0[] = {
	{ NJD_MESHSET_3 | 0, 6, poly_00218F04, NULL, NULL, NULL, uv_00218FA0, NULL },
	{ NJD_MESHSET_4 | 0, 12, poly_00218F28, NULL, NULL, NULL, uv_00218FE8, NULL },
	{ NJD_MESHSET_N | 0, 2, poly_00218F88, NULL, NULL, NULL, uv_002190A8, NULL }
};

NJS_VECTOR vertex_00219118[] = {
	{ -7.952746f, 5.578736f, -9.838799f },
	{ -7.743987f, 5.858396f, -2.444874f },
	{ -8.167024f, 5.278629f, -2.444873f },
	{ -7.915752f, 5.594701f, 0.388023f },
	{ -5.953125f, 4.067362f, -5.717527f },
	{ -1.361918f, 0.711445f, -1.939489f },
	{ -1.154119f, 1.599089f, 0.385522f },
	{ -1.072065f, 0.711596f, 4.148797f },
	{ -1.823612f, 0.430314f, 0.960182f },
	{ -3.654286f, 2.414055f, -3.193249f },
	{ -16.665f, 12.8598f, -5.111887f },
	{ -16.59184f, 12.39635f, -6.830216f },
	{ -16.2788f, 12.99254f, -7.084347f },
	{ -14.4662f, 9.97766f, -5.543967f },
	{ -14.46621f, 10.6752f, -5.713655f },
	{ -8.026512f, 5.475421f, -7.293369f },
	{ -13.31873f, 10.76501f, -9.035119f },
	{ -7.880555f, 5.675446f, -7.281888f },
	{ -14.12418f, 9.392193f, -9.139412f },
	{ -12.67893f, 9.001987f, -10.74209f },
	{ -12.67732f, 9.135324f, -8.736855f },
	{ -12.68108f, 8.884545f, -8.712976f },
	{ -15.75147f, 11.30137f, -4.161674f },
	{ -15.74927f, 11.59458f, -6.33756f },
	{ -15.1198f, 10.46523f, -5.86553f },
	{ -15.10774f, 11.13489f, -6.025608f },
	{ -15.94526f, 11.081f, -6.27164f }
};

NJS_VECTOR normal_0021925C[] = {
	{ 0.364003f, -0.262501f, -0.8936419f },
	{ 0.584759f, 0.811178f, 0.006876f },
	{ -0.5992759f, -0.799814f, 0.034151f },
	{ -0.375729f, 0.286736f, 0.881255f },
	{ 0.62419f, -0.473799f, -0.621209f },
	{ 0.113063f, -0.304711f, -0.9457099f },
	{ 0.578762f, 0.8128099f, -0.06614099f },
	{ -0.428122f, 0.255828f, 0.8667549f },
	{ -0.607381f, -0.793942f, 0.027275f },
	{ 0.211286f, -0.248191f, -0.945389f },
	{ 0.09110799f, 0.406473f, 0.909109f },
	{ -0.8932059f, -0.442246f, 0.08125f },
	{ 0.831392f, 0.519317f, 0.197731f },
	{ -0.600998f, -0.794524f, 0.08679599f },
	{ 0.598542f, 0.7959999f, 0.09017199f },
	{ -0.557924f, -0.828397f, -0.049792f },
	{ 0.864244f, 0.396755f, 0.309303f },
	{ 0.628719f, 0.776166f, -0.047742f },
	{ -0.360037f, -0.925638f, 0.116478f },
	{ 0.369253f, 0.28156f, -0.88565f },
	{ 0.680147f, 0.732157f, 0.036681f },
	{ -0.529142f, -0.848497f, -0.00783f },
	{ -0.39532f, 0.230452f, 0.889165f },
	{ 0.748621f, 0.640186f, 0.17242f },
	{ -0.635105f, -0.7597139f, 0.139554f },
	{ 0.542263f, 0.83276f, 0.111633f },
	{ -0.809757f, -0.577244f, 0.105277f }
};

NJS_MODEL_SADX attach_002193A0 = { vertex_00219118, normal_0021925C, LengthOfArray<Sint32>(vertex_00219118), meshlist_002190D0, matlist_00218EF0, LengthOfArray<Uint16>(meshlist_002190D0), LengthOfArray<Uint16>(matlist_00218EF0),{ -8.868532f, 6.711426f, -3.296645f }, 11.16324f, NULL };

NJS_OBJECT object_002193C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_002193A0, 1.334918f, -0.8033839f, 1.945638f, 0, 0, 0, 1, 1, 1, &object_00218EBC, NULL };

NJS_OBJECT object_002193FC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -1.309257f, 4.483119f, 1.34119f, 0, 0xFFFFEDAB, 0, 1, 1, 1, &object_002193C8, &object_002182B0 };

NJS_MATERIAL matlist_00219430[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_winga_tita1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00219444[] = {
	2, 6, 13,
	13, 6, 1,
	0, 1, 6,
	6, 2, 0
};

Sint16 poly_0021945C[] = {
	12, 1, 10, 9,
	13, 4, 2, 11,
	1, 12, 13, 4,
	5, 3, 8, 7,
	9, 7, 2, 3,
	10, 9, 11, 2,
	1, 8, 9, 7,
	0, 5, 1, 8,
	2, 3, 0, 5
};

NJS_TEX uv_002194A4[] = {
	{ 81, 102 },
	{ 55, 152 },
	{ 27, 114 },
	{ 27, 114 },
	{ 55, 152 },
	{ 83, 102 },
	{ 83, 215 },
	{ 83, 102 },
	{ 55, 152 },
	{ 55, 152 },
	{ 81, 102 },
	{ 83, 215 }
};

NJS_TEX uv_002194D4[] = {
	{ 3, 50 },
	{ 83, 102 },
	{ 0, 1 },
	{ 82, 59 },
	{ 27, 114 },
	{ 1, 94 },
	{ 81, 102 },
	{ 5, 59 },
	{ 83, 102 },
	{ 3, 50 },
	{ 27, 114 },
	{ 1, 94 },
	{ 252, 255 },
	{ 252, 202 },
	{ 253, 202 },
	{ 252, 178 },
	{ 82, 59 },
	{ 252, 178 },
	{ 81, 102 },
	{ 252, 202 },
	{ 0, 1 },
	{ 82, 59 },
	{ 5, 59 },
	{ 81, 102 },
	{ 83, 102 },
	{ 253, 202 },
	{ 82, 59 },
	{ 252, 178 },
	{ 83, 215 },
	{ 252, 255 },
	{ 83, 102 },
	{ 253, 202 },
	{ 81, 102 },
	{ 252, 202 },
	{ 83, 215 },
	{ 252, 255 }
};

NJS_MESHSET_SADX meshlist_00219564[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_00219444, NULL, NULL, NULL, uv_002194A4, NULL },
	{ NJD_MESHSET_4 | 0, 9, poly_0021945C, NULL, NULL, NULL, uv_002194D4, NULL }
};

NJS_VECTOR vertex_00219594[] = {
	{ 7.693431f, 5.576565f, -9.838802f },
	{ 7.944058f, 5.189085f, -2.444877f },
	{ 7.351671f, 5.895667f, -2.444877f },
	{ 21.11608f, 15.46971f, -8.965437f },
	{ 1.332023f, 0.711965f, -1.913211f },
	{ 21.22285f, 15.33897f, -12.41422f },
	{ 5.482339f, 4.049628f, -5.718641f },
	{ 21.21916f, 15.3384f, -7.380188f },
	{ 21.33355f, 15.17697f, -8.965437f },
	{ 7.649354f, 5.597507f, 0.388024f },
	{ 1.166674f, 0.6578479f, 4.148798f },
	{ 1.186683f, 1.672504f, 0.385523f },
	{ 1.683401f, 0.393704f, 0.960182f },
	{ 3.218491f, 2.414383f, -3.234266f }
};

NJS_VECTOR normal_0021963C[] = {
	{ -0.372191f, -0.266547f, -0.88906f },
	{ 0.594768f, -0.8034f, 0.028283f },
	{ -0.585448f, 0.810661f, 0.008943999f },
	{ 0.128348f, 0.991708f, 0.006468f },
	{ -0.067866f, -0.429375f, -0.900573f },
	{ 0.403609f, 0.309746f, -0.860905f },
	{ -0.634895f, -0.433837f, -0.639291f },
	{ 0.564948f, 0.426682f, 0.70624f },
	{ 0.986594f, -0.162975f, 0.00845f },
	{ 0.351202f, 0.289407f, 0.8904499f },
	{ 0.475854f, 0.11227f, 0.872329f },
	{ -0.6033739f, 0.796113f, -0.046305f },
	{ 0.630293f, -0.774601f, 0.052189f },
	{ -0.263584f, -0.275047f, -0.924593f }
};

NJS_MODEL_SADX attach_002196E4 = { vertex_00219594, normal_0021963C, LengthOfArray<Sint32>(vertex_00219594), meshlist_00219564, matlist_00219430, LengthOfArray<Uint16>(meshlist_00219564), LengthOfArray<Uint16>(matlist_00219430),{ 11.25011f, 7.931708f, -4.132713f }, 13.04834f, NULL };

NJS_OBJECT object_0021970C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002196E4, 0.02566f, 3.679735f, 3.286829f, 0, 0, 0, 1, 1, 1, NULL, &object_002193FC };

NJS_MATERIAL matlist_00219740[] = {
	{ { 0xB2B2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_cano_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_bodyc_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_bodyf_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_bodyb_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_wingb_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_bodya_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_heade_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_headf_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_bodye_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_jetd_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_headb_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_headd_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_jeta_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_heada_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_headc_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_bodyd_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_bodyg_tit, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, TR2CRASHTexName_s_t2_wingc_tita, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002198A8[] = {
	0, 1, 3,
	5, 7, 6,
	6, 4, 5,
	3, 2, 0
};

Sint16 poly_002198C0[] = {
	2, 3, 4, 5
};

Sint16 poly_002198C8[] = {
	12, 8, 9,
	9, 8, 10,
	10, 8, 11
};

Sint16 poly_002198DA[] = {
	10, 160, 9, 161,
	159, 12, 161, 9,
	11, 158, 10, 160
};

Sint16 poly_002198F2[] = {
	12, 159, 176,
	11, 8, 12,
	176, 158, 11,
	11, 12, 176
};

Sint16 poly_0021990A[] = {
	24, 84, 14,
	27, 68, 17,
	16, 167, 25,
	71, 34, 24,
	36, 26, 73,
	37, 47, 92,
	17, 99, 27,
	26, 166, 15,
	27, 37, 68,
	15, 17, 73,
	71, 70, 94,
	93, 46, 36,
	73, 93, 36,
	35, 95, 69,
	69, 14, 16,
	14, 71, 24,
	84, 169, 14,
	92, 72, 68,
	94, 44, 34,
	68, 37, 92,
	94, 34, 71,
	95, 94, 70,
	35, 45, 95,
	95, 70, 69,
	16, 25, 69,
	73, 26, 15,
	72, 92, 93,
	69, 25, 35,
	73, 72, 93,
	17, 168, 99
};

Sint16 poly_002199BE[] = {
	72, 73, 68, 17
};

Sint16 poly_002199C6[] = {
	71, 86, 85,
	71, 14, 86,
	85, 86, 69,
	86, 14, 69
};

Sint16 poly_002199DE[] = {
	69, 89, 85, 87,
	89, 79, 87, 78,
	90, 82, 91, 80,
	87, 78, 90, 82,
	91, 80, 89, 79,
	85, 87, 71, 90,
	89, 69, 91, 70,
	91, 70, 90, 71,
	82, 78, 80, 79
};

Sint16 poly_00219A26[] = {
	21, 31, 171,
	30, 20, 170,
	177, 21, 171,
	117, 118, 133,
	116, 138, 136,
	112, 132, 135,
	137, 139, 122,
	133, 112, 137,
	136, 119, 133,
	135, 117, 119,
	121, 125, 141,
	133, 118, 132,
	133, 144, 136,
	161, 160, 144,
	141, 139, 121,
	114, 125, 121,
	127, 125, 114,
	113, 127, 114,
	140, 127, 113,
	158, 115, 160,
	131, 134, 119,
	112, 134, 131,
	137, 144, 133,
	122, 120, 137,
	161, 120, 159,
	136, 115, 116,
	113, 138, 140,
	121, 131, 114,
	114, 131, 113,
	125, 143, 141,
	140, 142, 127,
	112, 131, 121,
	113, 131, 119,
	132, 112, 133,
	133, 119, 117,
	119, 134, 135,
	135, 134, 112,
	170, 20, 177,
	171, 170, 177
};

Sint16 poly_00219B10[] = {
	99, 168, 100, 163,
	81, 18, 100, 19,
	174, 171, 172, 31,
	84, 24, 83, 23,
	100, 163, 81, 162,
	88, 164, 83, 165,
	28, 29, 18, 19,
	30, 28, 20, 18,
	32, 31, 22, 21,
	33, 32, 23, 22,
	34, 33, 24, 23,
	29, 37, 19, 27,
	38, 39, 28, 29,
	40, 38, 30, 28,
	173, 170, 174, 171,
	42, 41, 32, 31,
	43, 42, 33, 32,
	44, 43, 34, 33,
	39, 47, 29, 37,
	83, 165, 84, 169,
	100, 19, 99, 27,
	83, 23, 88, 22,
	175, 30, 173, 170,
	119, 136, 113, 138,
	121, 139, 112, 137,
	143, 125, 142, 127,
	158, 123, 115, 116,
	75, 124, 76, 126,
	74, 130, 123, 116,
	129, 159, 122, 120,
	129, 122, 75, 124,
	76, 126, 77, 128,
	77, 128, 74, 130,
	140, 130, 142, 128,
	142, 128, 143, 126,
	143, 126, 141, 124,
	141, 124, 139, 122,
	137, 120, 144, 161,
	138, 116, 140, 130,
	144, 160, 136, 115,
	118, 117, 132, 135,
	74, 168, 77, 166,
	77, 166, 76, 167,
	76, 167, 75, 169,
	75, 169, 129, 165,
	129, 165, 159, 164,
	123, 163, 74, 168,
	158, 162, 123, 163
};

Sint16 poly_00219C90[] = {
	55, 53, 13, 98
};

Sint16 poly_00219C98[] = {
	53, 55, 111
};

Sint16 poly_00219C9E[] = {
	173, 98, 175, 53,
	174, 13, 173, 98,
	172, 55, 174, 13
};

Sint16 poly_00219CB6[] = {
	97, 22, 21,
	164, 88, 96,
	20, 18, 97,
	96, 81, 162,
	97, 177, 20,
	21, 177, 97,
	162, 178, 96,
	96, 178, 164
};

Sint16 poly_00219CE6[] = {
	97, 18, 96, 81,
	96, 88, 97, 22,
	176, 159, 178, 164,
	178, 162, 176, 158
};

Sint16 poly_00219D06[] = {
	166, 26, 167, 25,
	36, 35, 26, 25,
	46, 45, 36, 35
};

Sint16 poly_00219D1E[] = {
	48, 49, 51, 50,
	49, 48, 38, 39,
	56, 58, 57, 59,
	58, 56, 43, 42
};

Sint16 poly_00219D3E[] = {
	51, 50, 111,
	50, 53, 111,
	55, 57, 111,
	57, 59, 111,
	59, 61, 111,
	61, 63, 111,
	63, 65, 111,
	65, 67, 111,
	67, 51, 111
};

Sint16 poly_00219D74[] = {
	60, 62, 61, 63,
	62, 60, 45, 44,
	62, 64, 63, 65,
	64, 62, 46, 45,
	64, 66, 65, 67,
	66, 64, 47, 46
};

Sint16 poly_00219DA4[] = {
	101, 103, 105, 104,
	107, 108, 110, 109,
	102, 101, 106, 105,
	110, 102, 107, 106
};

Sint16 poly_00219DC4[] = {
	49, 52, 50, 53,
	52, 49, 40, 38,
	54, 56, 55, 57,
	56, 54, 42, 41
};

Sint16 poly_00219DE4[] = {
	58, 60, 59, 61,
	60, 58, 44, 43,
	66, 48, 67, 51,
	48, 66, 39, 47
};

Sint16 poly_00219E04[] = {
	92, 47, 93, 46,
	95, 45, 94, 44
};

Sint16 poly_00219E14[] = {
	16, 14, 167, 169,
	166, 168, 15, 17
};

Sint16 poly_00219E24[] = {
	156, 152, 157,
	157, 152, 155
};

Sint16 poly_00219E30[] = {
	155, 153, 157, 150,
	145, 153, 151, 155,
	156, 148, 152, 147,
	152, 147, 155, 146,
	157, 150, 156, 154,
	151, 149, 156, 148,
	155, 146, 151, 149,
	154, 145, 156, 151,
	148, 149, 147, 146
};

NJS_TEX uv_00219E78[] = {
	{ 48, 103 },
	{ 0, 254 },
	{ 69, 192 },
	{ 171, 192 },
	{ 239, 254 },
	{ 192, 107 },
	{ 192, 107 },
	{ 148, 15 },
	{ 171, 192 },
	{ 69, 192 },
	{ 92, 15 },
	{ 48, 103 }
};

NJS_TEX uv_00219EA8[] = {
	{ 92, 15 },
	{ 69, 192 },
	{ 148, 15 },
	{ 171, 192 }
};

NJS_TEX uv_00219EB8[] = {
	{ 9, 124 },
	{ 15, 7 },
	{ 139, 4 },
	{ 139, 4 },
	{ 15, 7 },
	{ 139, 4 },
	{ 139, 4 },
	{ 15, 7 },
	{ 10, 122 }
};

NJS_TEX uv_00219EDC[] = {
	{ 139, 4 },
	{ 251, 3 },
	{ 139, 4 },
	{ 251, 3 },
	{ 0, 254 },
	{ 9, 124 },
	{ 251, 3 },
	{ 139, 4 },
	{ 10, 122 },
	{ 0, 254 },
	{ 139, 4 },
	{ 251, 3 }
};

NJS_TEX uv_00219F0C[] = {
	{ 45, 75 },
	{ 0, 151 },
	{ 123, 151 },
	{ 201, 74 },
	{ 123, 7 },
	{ 45, 75 },
	{ 123, 151 },
	{ 247, 151 },
	{ 201, 74 },
	{ 201, 74 },
	{ 45, 75 },
	{ 123, 151 }
};

NJS_TEX uv_00219F3C[] = {
	{ 124, 1 },
	{ 187, 11 },
	{ 235, 208 },
	{ 124, 2 },
	{ 98, 179 },
	{ 236, 211 },
	{ 232, 238 },
	{ 252, 102 },
	{ 101, 241 },
	{ 99, 177 },
	{ 35, 14 },
	{ 124, 1 },
	{ 51, 248 },
	{ 101, 241 },
	{ 102, 255 },
	{ 35, 15 },
	{ 0, 107 },
	{ 36, 166 },
	{ 236, 211 },
	{ 187, 12 },
	{ 124, 2 },
	{ 101, 241 },
	{ 253, 103 },
	{ 232, 238 },
	{ 124, 2 },
	{ 35, 15 },
	{ 98, 179 },
	{ 232, 238 },
	{ 236, 211 },
	{ 102, 255 },
	{ 99, 177 },
	{ 50, 229 },
	{ 35, 165 },
	{ 36, 249 },
	{ 0, 220 },
	{ 51, 248 },
	{ 102, 255 },
	{ 36, 249 },
	{ 51, 248 },
	{ 51, 248 },
	{ 36, 248 },
	{ 101, 253 },
	{ 101, 253 },
	{ 235, 208 },
	{ 232, 238 },
	{ 235, 208 },
	{ 99, 177 },
	{ 124, 1 },
	{ 187, 11 },
	{ 250, 34 },
	{ 235, 208 },
	{ 36, 166 },
	{ 50, 228 },
	{ 98, 179 },
	{ 35, 165 },
	{ 0, 107 },
	{ 35, 14 },
	{ 98, 179 },
	{ 35, 15 },
	{ 36, 166 },
	{ 35, 165 },
	{ 35, 14 },
	{ 99, 177 },
	{ 36, 248 },
	{ 35, 165 },
	{ 50, 229 },
	{ 51, 248 },
	{ 0, 220 },
	{ 36, 248 },
	{ 36, 248 },
	{ 50, 229 },
	{ 101, 253 },
	{ 232, 238 },
	{ 101, 241 },
	{ 101, 253 },
	{ 102, 255 },
	{ 101, 241 },
	{ 232, 238 },
	{ 50, 228 },
	{ 36, 166 },
	{ 36, 249 },
	{ 101, 253 },
	{ 101, 241 },
	{ 51, 248 },
	{ 102, 255 },
	{ 50, 228 },
	{ 36, 249 },
	{ 236, 211 },
	{ 250, 35 },
	{ 187, 12 }
};

NJS_TEX uv_0021A0A4[] = {
	{ 50, 228 },
	{ 102, 255 },
	{ 98, 179 },
	{ 236, 211 }
};

NJS_TEX uv_0021A0B4[] = {
	{ 2, 46 },
	{ 24, 180 },
	{ 66, 241 },
	{ 2, 46 },
	{ 2, 172 },
	{ 24, 180 },
	{ 66, 241 },
	{ 24, 180 },
	{ 0, 49 },
	{ 24, 180 },
	{ 2, 172 },
	{ 0, 49 }
};

NJS_TEX uv_0021A0E4[] = {
	{ 0, 49 },
	{ 179, 157 },
	{ 66, 241 },
	{ 182, 248 },
	{ 179, 157 },
	{ 251, 210 },
	{ 182, 248 },
	{ 253, 254 },
	{ 178, 155 },
	{ 250, 208 },
	{ 177, 119 },
	{ 249, 173 },
	{ 182, 248 },
	{ 253, 254 },
	{ 178, 155 },
	{ 250, 208 },
	{ 177, 119 },
	{ 249, 173 },
	{ 179, 157 },
	{ 251, 210 },
	{ 66, 241 },
	{ 182, 248 },
	{ 2, 46 },
	{ 178, 155 },
	{ 179, 157 },
	{ 0, 49 },
	{ 177, 119 },
	{ 2, 1 },
	{ 177, 119 },
	{ 2, 1 },
	{ 178, 155 },
	{ 2, 46 },
	{ 250, 208 },
	{ 253, 254 },
	{ 249, 173 },
	{ 251, 210 }
};

NJS_TEX uv_0021A174[] = {
	{ 50, 156 },
	{ 25, 156 },
	{ 34, 142 },
	{ 25, 156 },
	{ 50, 156 },
	{ 34, 142 },
	{ 50, 156 },
	{ 50, 156 },
	{ 34, 142 },
	{ 234, 1 },
	{ 214, 0 },
	{ 201, 72 },
	{ 157, 142 },
	{ 193, 137 },
	{ 193, 122 },
	{ 234, 117 },
	{ 234, 1 },
	{ 246, 1 },
	{ 193, 122 },
	{ 193, 137 },
	{ 157, 142 },
	{ 201, 72 },
	{ 234, 117 },
	{ 193, 122 },
	{ 193, 122 },
	{ 234, 117 },
	{ 201, 72 },
	{ 246, 1 },
	{ 234, 1 },
	{ 234, 117 },
	{ 224, 134 },
	{ 224, 150 },
	{ 193, 147 },
	{ 201, 72 },
	{ 214, 0 },
	{ 234, 1 },
	{ 201, 72 },
	{ 187, 91 },
	{ 193, 122 },
	{ 157, 91 },
	{ 157, 91 },
	{ 187, 91 },
	{ 193, 147 },
	{ 193, 137 },
	{ 224, 134 },
	{ 234, 148 },
	{ 224, 150 },
	{ 224, 134 },
	{ 224, 150 },
	{ 224, 150 },
	{ 234, 148 },
	{ 224, 134 },
	{ 224, 150 },
	{ 234, 148 },
	{ 193, 147 },
	{ 224, 150 },
	{ 224, 134 },
	{ 116, 122 },
	{ 157, 121 },
	{ 157, 91 },
	{ 234, 131 },
	{ 254, 106 },
	{ 234, 117 },
	{ 234, 117 },
	{ 254, 106 },
	{ 234, 131 },
	{ 193, 122 },
	{ 187, 91 },
	{ 201, 72 },
	{ 157, 142 },
	{ 157, 121 },
	{ 193, 122 },
	{ 157, 91 },
	{ 157, 121 },
	{ 116, 122 },
	{ 193, 122 },
	{ 157, 121 },
	{ 157, 142 },
	{ 224, 134 },
	{ 193, 137 },
	{ 193, 147 },
	{ 224, 134 },
	{ 234, 131 },
	{ 234, 148 },
	{ 234, 148 },
	{ 234, 131 },
	{ 224, 134 },
	{ 224, 150 },
	{ 193, 154 },
	{ 193, 147 },
	{ 193, 147 },
	{ 193, 154 },
	{ 224, 150 },
	{ 234, 117 },
	{ 234, 131 },
	{ 224, 134 },
	{ 224, 134 },
	{ 234, 131 },
	{ 234, 117 },
	{ 234, 1 },
	{ 234, 117 },
	{ 201, 72 },
	{ 201, 72 },
	{ 234, 117 },
	{ 234, 1 },
	{ 234, 117 },
	{ 254, 106 },
	{ 246, 1 },
	{ 246, 1 },
	{ 254, 106 },
	{ 234, 117 },
	{ 34, 142 },
	{ 50, 156 },
	{ 50, 156 },
	{ 34, 142 },
	{ 34, 142 },
	{ 50, 156 }
};

NJS_TEX uv_0021A348[] = {
	{ 77, 237 },
	{ 103, 241 },
	{ 81, 214 },
	{ 103, 207 },
	{ 81, 162 },
	{ 64, 163 },
	{ 81, 214 },
	{ 56, 214 },
	{ 0, 153 },
	{ 34, 142 },
	{ 0, 166 },
	{ 25, 156 },
	{ 77, 236 },
	{ 51, 235 },
	{ 81, 214 },
	{ 56, 214 },
	{ 81, 214 },
	{ 103, 207 },
	{ 81, 162 },
	{ 103, 151 },
	{ 81, 162 },
	{ 103, 151 },
	{ 81, 214 },
	{ 103, 207 },
	{ 16, 175 },
	{ 15, 214 },
	{ 64, 163 },
	{ 56, 214 },
	{ 25, 156 },
	{ 16, 175 },
	{ 50, 156 },
	{ 64, 163 },
	{ 16, 175 },
	{ 25, 156 },
	{ 64, 163 },
	{ 50, 156 },
	{ 15, 214 },
	{ 16, 175 },
	{ 56, 214 },
	{ 64, 163 },
	{ 14, 237 },
	{ 15, 214 },
	{ 51, 235 },
	{ 56, 214 },
	{ 15, 214 },
	{ 14, 237 },
	{ 56, 214 },
	{ 51, 235 },
	{ 1, 180 },
	{ 1, 216 },
	{ 16, 175 },
	{ 15, 214 },
	{ 1, 156 },
	{ 1, 180 },
	{ 25, 156 },
	{ 16, 175 },
	{ 0, 153 },
	{ 34, 142 },
	{ 0, 153 },
	{ 34, 142 },
	{ 1, 180 },
	{ 1, 156 },
	{ 16, 175 },
	{ 25, 156 },
	{ 1, 216 },
	{ 1, 180 },
	{ 15, 214 },
	{ 16, 175 },
	{ 0, 254 },
	{ 1, 216 },
	{ 14, 237 },
	{ 15, 214 },
	{ 1, 216 },
	{ 0, 255 },
	{ 15, 214 },
	{ 14, 237 },
	{ 81, 214 },
	{ 103, 207 },
	{ 77, 236 },
	{ 103, 241 },
	{ 81, 214 },
	{ 56, 214 },
	{ 77, 237 },
	{ 51, 235 },
	{ 81, 214 },
	{ 56, 214 },
	{ 81, 162 },
	{ 64, 163 },
	{ 0, 166 },
	{ 25, 156 },
	{ 0, 153 },
	{ 34, 142 },
	{ 234, 117 },
	{ 193, 122 },
	{ 224, 134 },
	{ 193, 137 },
	{ 224, 134 },
	{ 193, 137 },
	{ 234, 117 },
	{ 193, 122 },
	{ 193, 154 },
	{ 224, 150 },
	{ 193, 154 },
	{ 224, 150 },
	{ 116, 122 },
	{ 123, 172 },
	{ 157, 121 },
	{ 157, 142 },
	{ 123, 187 },
	{ 157, 154 },
	{ 123, 198 },
	{ 157, 164 },
	{ 123, 187 },
	{ 157, 154 },
	{ 123, 172 },
	{ 157, 142 },
	{ 123, 172 },
	{ 116, 122 },
	{ 157, 142 },
	{ 157, 121 },
	{ 123, 172 },
	{ 157, 142 },
	{ 123, 187 },
	{ 157, 154 },
	{ 123, 198 },
	{ 157, 164 },
	{ 123, 198 },
	{ 157, 164 },
	{ 123, 198 },
	{ 157, 164 },
	{ 123, 187 },
	{ 157, 154 },
	{ 193, 147 },
	{ 157, 154 },
	{ 193, 154 },
	{ 157, 164 },
	{ 193, 154 },
	{ 157, 164 },
	{ 193, 154 },
	{ 157, 164 },
	{ 193, 154 },
	{ 157, 164 },
	{ 193, 147 },
	{ 157, 154 },
	{ 193, 147 },
	{ 157, 154 },
	{ 193, 137 },
	{ 157, 142 },
	{ 193, 122 },
	{ 157, 121 },
	{ 187, 91 },
	{ 157, 91 },
	{ 193, 137 },
	{ 157, 142 },
	{ 193, 147 },
	{ 157, 154 },
	{ 187, 91 },
	{ 157, 91 },
	{ 193, 122 },
	{ 157, 121 },
	{ 214, 0 },
	{ 234, 1 },
	{ 234, 1 },
	{ 246, 1 },
	{ 123, 187 },
	{ 103, 241 },
	{ 123, 198 },
	{ 104, 254 },
	{ 123, 198 },
	{ 104, 254 },
	{ 123, 198 },
	{ 104, 253 },
	{ 123, 198 },
	{ 104, 253 },
	{ 123, 187 },
	{ 103, 241 },
	{ 123, 187 },
	{ 103, 241 },
	{ 123, 172 },
	{ 103, 207 },
	{ 123, 172 },
	{ 103, 207 },
	{ 116, 122 },
	{ 103, 151 },
	{ 123, 172 },
	{ 103, 207 },
	{ 123, 187 },
	{ 103, 241 },
	{ 116, 122 },
	{ 103, 151 },
	{ 123, 172 },
	{ 103, 207 }
};

NJS_TEX uv_0021A648[] = {
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 247, 7 }
};

NJS_TEX uv_0021A658[] = {
	{ 0, 7 },
	{ 247, 7 },
	{ 125, 255 }
};

NJS_TEX uv_0021A664[] = {
	{ 181, 255 },
	{ 151, 7 },
	{ 247, 255 },
	{ 247, 7 },
	{ 65, 255 },
	{ 95, 7 },
	{ 181, 255 },
	{ 151, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 65, 255 },
	{ 95, 7 }
};

NJS_TEX uv_0021A694[] = {
	{ 115, 206 },
	{ 0, 194 },
	{ 0, 255 },
	{ 0, 75 },
	{ 0, 142 },
	{ 115, 159 },
	{ 247, 255 },
	{ 247, 195 },
	{ 115, 206 },
	{ 115, 159 },
	{ 247, 142 },
	{ 247, 76 },
	{ 115, 206 },
	{ 123, 255 },
	{ 247, 255 },
	{ 0, 255 },
	{ 123, 255 },
	{ 115, 206 },
	{ 247, 76 },
	{ 123, 70 },
	{ 115, 159 },
	{ 115, 159 },
	{ 123, 70 },
	{ 0, 75 }
};

NJS_TEX uv_0021A6F4[] = {
	{ 115, 206 },
	{ 247, 195 },
	{ 115, 159 },
	{ 247, 142 },
	{ 115, 159 },
	{ 0, 142 },
	{ 115, 206 },
	{ 0, 194 },
	{ 123, 7 },
	{ 0, 7 },
	{ 123, 70 },
	{ 0, 75 },
	{ 123, 70 },
	{ 247, 76 },
	{ 123, 7 },
	{ 247, 7 }
};

NJS_TEX uv_0021A734[] = {
	{ 251, 255 },
	{ 251, 103 },
	{ 0, 255 },
	{ 0, 102 },
	{ 251, 54 },
	{ 0, 54 },
	{ 251, 103 },
	{ 0, 102 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 54 },
	{ 0, 54 }
};

NJS_TEX uv_0021A764[] = {
	{ 45, 255 },
	{ 45, 3 },
	{ 0, 255 },
	{ 0, 3 },
	{ 45, 3 },
	{ 45, 255 },
	{ 251, 3 },
	{ 251, 255 },
	{ 45, 3 },
	{ 45, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 45, 255 },
	{ 45, 3 },
	{ 251, 255 },
	{ 251, 3 }
};

NJS_TEX uv_0021A7A4[] = {
	{ 251, 233 },
	{ 251, 219 },
	{ 0, 233 },
	{ 251, 219 },
	{ 251, 211 },
	{ 0, 233 },
	{ 251, 211 },
	{ 251, 219 },
	{ 0, 233 },
	{ 251, 219 },
	{ 251, 233 },
	{ 0, 233 },
	{ 251, 233 },
	{ 251, 246 },
	{ 0, 233 },
	{ 251, 246 },
	{ 251, 254 },
	{ 0, 233 },
	{ 251, 254 },
	{ 251, 254 },
	{ 0, 233 },
	{ 251, 254 },
	{ 251, 246 },
	{ 0, 233 },
	{ 251, 246 },
	{ 251, 233 },
	{ 0, 233 }
};

NJS_TEX uv_0021A810[] = {
	{ 44, 3 },
	{ 41, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 41, 255 },
	{ 44, 3 },
	{ 251, 255 },
	{ 251, 3 },
	{ 43, 224 },
	{ 43, 225 },
	{ 0, 224 },
	{ 0, 225 },
	{ 43, 225 },
	{ 43, 224 },
	{ 251, 227 },
	{ 250, 223 },
	{ 41, 255 },
	{ 43, 3 },
	{ 0, 255 },
	{ 0, 3 },
	{ 43, 3 },
	{ 41, 255 },
	{ 251, 3 },
	{ 251, 255 }
};

NJS_TEX uv_0021A870[] = {
	{ 227, -157 },
	{ 164, -255 },
	{ 23, -157 },
	{ 86, -255 },
	{ 23, 157 },
	{ 86, 254 },
	{ 227, 157 },
	{ 164, 254 },
	{ 251, 0 },
	{ 227, -157 },
	{ 0 },
	{ 23, -157 },
	{ 227, 157 },
	{ 251, 0 },
	{ 23, 157 },
	{ 0 }
};

NJS_TEX uv_0021A8B0[] = {
	{ 45, 255 },
	{ 48, 3 },
	{ 0, 255 },
	{ 0, 3 },
	{ 48, 3 },
	{ 45, 255 },
	{ 251, 3 },
	{ 251, 255 },
	{ 48, 3 },
	{ 45, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 45, 255 },
	{ 48, 3 },
	{ 251, 255 },
	{ 251, 3 }
};

NJS_TEX uv_0021A8F0[] = {
	{ 45, 3 },
	{ 44, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 44, 255 },
	{ 45, 3 },
	{ 251, 255 },
	{ 251, 3 },
	{ 43, 255 },
	{ 45, 3 },
	{ 0, 255 },
	{ 0, 3 },
	{ 45, 3 },
	{ 43, 255 },
	{ 251, 3 },
	{ 251, 255 }
};

NJS_TEX uv_0021A930[] = {
	{ 247, 7 },
	{ 247, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 247, 7 },
	{ 247, 255 },
	{ 0, 7 },
	{ 0, 255 }
};

NJS_TEX uv_0021A950[] = {
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 247, 7 }
};

NJS_TEX uv_0021A970[] = {
	{ 59, 96 },
	{ 59, 241 },
	{ 37, 141 },
	{ 37, 141 },
	{ 59, 241 },
	{ 59, 97 }
};

NJS_TEX uv_0021A988[] = {
	{ 59, 97 },
	{ 2, 60 },
	{ 37, 141 },
	{ 0, 99 },
	{ 6, 3 },
	{ 2, 60 },
	{ 59, 41 },
	{ 59, 97 },
	{ 59, 96 },
	{ 251, 196 },
	{ 59, 241 },
	{ 250, 255 },
	{ 59, 241 },
	{ 250, 255 },
	{ 59, 97 },
	{ 250, 197 },
	{ 37, 141 },
	{ 0, 99 },
	{ 59, 96 },
	{ 1, 58 },
	{ 59, 41 },
	{ 250, 168 },
	{ 59, 96 },
	{ 251, 196 },
	{ 59, 97 },
	{ 250, 197 },
	{ 59, 41 },
	{ 250, 168 },
	{ 1, 58 },
	{ 6, 3 },
	{ 59, 96 },
	{ 59, 41 },
	{ 251, 196 },
	{ 250, 168 },
	{ 250, 255 },
	{ 250, 197 }
};

NJS_MESHSET_SADX meshlist_0021AA18[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_002198A8, NULL, NULL, NULL, uv_00219E78, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_002198C0, NULL, NULL, NULL, uv_00219EA8, NULL },
	{ NJD_MESHSET_3 | 1, 3, poly_002198C8, NULL, NULL, NULL, uv_00219EB8, NULL },
	{ NJD_MESHSET_4 | 1, 3, poly_002198DA, NULL, NULL, NULL, uv_00219EDC, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_002198F2, NULL, NULL, NULL, uv_00219F0C, NULL },
	{ NJD_MESHSET_3 | 3, 30, poly_0021990A, NULL, NULL, NULL, uv_00219F3C, NULL },
	{ NJD_MESHSET_4 | 3, 1, poly_002199BE, NULL, NULL, NULL, uv_0021A0A4, NULL },
	{ NJD_MESHSET_3 | 4, 4, poly_002199C6, NULL, NULL, NULL, uv_0021A0B4, NULL },
	{ NJD_MESHSET_4 | 4, 9, poly_002199DE, NULL, NULL, NULL, uv_0021A0E4, NULL },
	{ NJD_MESHSET_3 | 5, 39, poly_00219A26, NULL, NULL, NULL, uv_0021A174, NULL },
	{ NJD_MESHSET_4 | 5, 48, poly_00219B10, NULL, NULL, NULL, uv_0021A348, NULL },
	{ NJD_MESHSET_4 | 6, 1, poly_00219C90, NULL, NULL, NULL, uv_0021A648, NULL },
	{ NJD_MESHSET_3 | 7, 1, poly_00219C98, NULL, NULL, NULL, uv_0021A658, NULL },
	{ NJD_MESHSET_4 | 7, 3, poly_00219C9E, NULL, NULL, NULL, uv_0021A664, NULL },
	{ NJD_MESHSET_3 | 8, 8, poly_00219CB6, NULL, NULL, NULL, uv_0021A694, NULL },
	{ NJD_MESHSET_4 | 8, 4, poly_00219CE6, NULL, NULL, NULL, uv_0021A6F4, NULL },
	{ NJD_MESHSET_4 | 9, 3, poly_00219D06, NULL, NULL, NULL, uv_0021A734, NULL },
	{ NJD_MESHSET_4 | 10, 4, poly_00219D1E, NULL, NULL, NULL, uv_0021A764, NULL },
	{ NJD_MESHSET_3 | 11, 9, poly_00219D3E, NULL, NULL, NULL, uv_0021A7A4, NULL },
	{ NJD_MESHSET_4 | 11, 6, poly_00219D74, NULL, NULL, NULL, uv_0021A810, NULL },
	{ NJD_MESHSET_4 | 12, 4, poly_00219DA4, NULL, NULL, NULL, uv_0021A870, NULL },
	{ NJD_MESHSET_4 | 13, 4, poly_00219DC4, NULL, NULL, NULL, uv_0021A8B0, NULL },
	{ NJD_MESHSET_4 | 14, 4, poly_00219DE4, NULL, NULL, NULL, uv_0021A8F0, NULL },
	{ NJD_MESHSET_4 | 15, 2, poly_00219E04, NULL, NULL, NULL, uv_0021A930, NULL },
	{ NJD_MESHSET_4 | 16, 2, poly_00219E14, NULL, NULL, NULL, uv_0021A950, NULL },
	{ NJD_MESHSET_3 | 17, 2, poly_00219E24, NULL, NULL, NULL, uv_0021A970, NULL },
	{ NJD_MESHSET_4 | 17, 9, poly_00219E30, NULL, NULL, NULL, uv_0021A988, NULL }
};

NJS_VECTOR vertex_0021ACA0[] = {
	{ -1.880466f, 5.148638f, -0.545926f },
	{ -3.176908f, 3.842886f, -0.6258889f },
	{ -0.7243389f, 5.902241f, -0.100214f },
	{ -1.320275f, 4.37946f, 1.130008f },
	{ 0.775661f, 5.902241f, -0.100214f },
	{ 1.371596f, 4.37946f, 1.130009f },
	{ 1.921486f, 5.111271f, -0.545926f },
	{ 3.165764f, 3.842885f, -0.625886f },
	{ 0.025663f, 9.234096f, -7.584733f },
	{ -0.323226f, 9.262038f, -10.1678f },
	{ 0.374554f, 9.262038f, -10.1678f },
	{ 1.269647f, 8.15976f, -7.488836f },
	{ -1.216526f, 8.145247f, -7.465695f },
	{ -0.538004f, 3.832983f, 12.22216f },
	{ -4.970024f, -4.384902f, -4.855515f },
	{ 3.952755f, -4.807728f, -4.704749f },
	{ -4.052591f, -4.809807f, -4.67344f },
	{ 5.111965f, -4.42881f, -4.873837f },
	{ 3.165764f, 3.842885f, -0.625886f },
	{ 4.381202f, 0.033036f, 0.344906f },
	{ 1.371596f, 4.37946f, 1.130009f },
	{ -1.320275f, 4.37946f, 1.130008f },
	{ -3.176908f, 3.842886f, -0.6258889f },
	{ -4.329879f, 0.033036f, 0.344904f },
	{ -4.746716f, -1.497548f, 1.005627f },
	{ -3.211822f, -4.842709f, 2.221196f },
	{ 3.239703f, -4.85163f, 2.190354f },
	{ 4.73754f, -1.500036f, 1.004928f },
	{ 3.58187f, 2.975056f, 5.482294f },
	{ 4.298735f, 0.046864f, 5.62089f },
	{ 1.194134f, 4.391435f, 4.347512f },
	{ -1.142814f, 4.391435f, 4.347511f },
	{ -3.530546f, 2.975057f, 5.48229f },
	{ -4.303632f, 0.046864f, 5.620887f },
	{ -4.473423f, -1.676992f, 5.661082f },
	{ -3.271633f, -4.94643f, 4.836314f },
	{ 3.264557f, -4.949735f, 4.804523f },
	{ 4.483381f, -1.680253f, 5.661383f },
	{ 3.165095f, 2.571506f, 7.394933f },
	{ 4.243657f, -0.091598f, 7.394935f },
	{ 1.057049f, 4.386613f, 7.394932f },
	{ -1.005731f, 4.386613f, 7.394933f },
	{ -3.113775f, 2.571506f, 7.394931f },
	{ -4.192334f, -0.091598f, 7.394931f },
	{ -4.103283f, -2.974962f, 7.526315f },
	{ -3.08495f, -4.556286f, 7.500411f },
	{ 3.090108f, -4.560032f, 7.498605f },
	{ 4.167115f, -2.979887f, 7.530919f },
	{ 2.698582f, -0.227722f, 11.3953f },
	{ 2.1881f, 1.400664f, 11.3953f },
	{ 1.814741f, 1.099676f, 12.22216f },
	{ 2.237086f, -0.23242f, 12.22216f },
	{ 0.604443f, 2.557596f, 11.3953f },
	{ 0.709026f, 1.922959f, 12.22216f },
	{ -0.55313f, 2.557596f, 11.3953f },
	{ -0.657712f, 1.922959f, 12.22216f },
	{ -2.136784f, 1.400664f, 11.3953f },
	{ -1.763425f, 1.099677f, 12.22216f },
	{ -2.647267f, -0.227721f, 11.3953f },
	{ -2.185771f, -0.23242f, 12.22216f },
	{ -2.136785f, -1.856106f, 11.39529f },
	{ -1.763425f, -1.564517f, 12.22216f },
	{ -0.676426f, -2.862504f, 11.3953f },
	{ -0.657712f, -2.3878f, 12.22216f },
	{ 0.727739f, -2.862505f, 11.3953f },
	{ 0.709026f, -2.3878f, 12.22216f },
	{ 2.1881f, -1.856106f, 11.3953f },
	{ 1.814741f, -1.564517f, 12.22216f },
	{ 5.677396f, -3.976037f, 2.34836f },
	{ -4.475433f, -5.012308f, 2.20651f },
	{ -5.085771f, -4.67871f, 4.880816f },
	{ -5.61076f, -3.951232f, 2.303031f },
	{ 4.979923f, -4.669987f, 4.886179f },
	{ 4.534995f, -5.037925f, 2.144571f },
	{ 2.40572f, 2.035628f, -8.189745f },
	{ -2.354396f, 2.035629f, -8.189749f },
	{ -0.925225f, 1.245397f, -8.138531f },
	{ 0.976548f, 1.245396f, -8.138532f },
	{ -21.47717f, -15.88797f, -10.16499f },
	{ -21.21658f, -16.07842f, -7.594679f },
	{ -21.29141f, -15.84098f, -5.47277f },
	{ 3.298904f, 3.95016f, -2.877646f },
	{ -21.49646f, -15.67423f, -7.5234f },
	{ -4.051771f, 0.029744f, -2.802279f },
	{ -4.133035f, -1.62991f, -2.312028f },
	{ -9.146161f, -7.269995f, -8.946406f },
	{ -6.439716f, -5.445498f, -5.401075f },
	{ -16.79824f, -12.63517f, -9.642632f },
	{ -3.247579f, 3.950161f, -2.877648f },
	{ -16.4274f, -12.8946f, -4.392077f },
	{ -16.82873f, -12.39299f, -4.317436f },
	{ -16.57832f, -12.6123f, -2.268013f },
	{ 5.418176f, -3.7927f, 5.632078f },
	{ 4.472927f, -4.954975f, 5.606756f },
	{ -5.375075f, -3.788104f, 5.640056f },
	{ -4.367594f, -4.94564f, 5.608822f },
	{ -0.236719f, 2.511075f, -2.377913f },
	{ -0.227084f, 2.847662f, -0.342192f },
	{ 0.589319f, 3.832983f, 12.22216f },
	{ 4.065808f, -1.644398f, -2.312446f },
	{ 4.108564f, 0.029744f, -2.802277f },
	{ 1.643218f, 0.939874f, 11.42055f },
	{ 2.025073f, -0.242872f, 11.42055f },
	{ 0.64351f, 1.670853f, 11.42055f },
	{ -0.592196f, 1.670853f, 11.42055f },
	{ -1.5919f, 0.9398749f, 11.42055f },
	{ -1.973754f, -0.242872f, 11.42054f },
	{ -1.591901f, -1.425619f, 11.42054f },
	{ -0.592196f, -2.156598f, 11.42055f },
	{ 0.643509f, -2.156598f, 11.42055f },
	{ 1.643218f, -1.425619f, 11.42055f },
	{ 0.014363f, -0.229974f, 7.412065f },
	{ -0.405995f, 7.329534f, -22.31329f },
	{ 0.569586f, 6.062506f, -21.02173f },
	{ 0.025666f, 4.984516f, -22.31533f },
	{ 1.256789f, 6.988522f, -12.48966f },
	{ 1.639029f, 5.434942f, -12.48965f },
	{ 0.172144f, 16.03077f, -22.28976f },
	{ 0.024856f, 16.03324f, -19.76795f },
	{ 0.411569f, 7.329534f, -22.31329f },
	{ -1.205462f, 6.988523f, -12.48965f },
	{ -0.518254f, 6.062507f, -21.02173f },
	{ -1.587701f, 5.434942f, -12.48965f },
	{ 2.8302f, 3.220544f, -8.160398f },
	{ -1.42536f, 4.572771f, -12.48966f },
	{ -0.248638f, 4.864951f, -21.02173f },
	{ -0.449333f, 3.792406f, -12.48966f },
	{ 0.299972f, 4.864951f, -21.02172f },
	{ 0.500662f, 3.792405f, -12.48965f },
	{ -2.717713f, 3.220544f, -8.160401f },
	{ 1.513384f, 4.57277f, -12.48965f },
	{ 0.025666f, 6.231172f, -22.31303f },
	{ -0.112552f, 16.0302f, -22.29533f },
	{ 0.020729f, 10.69409f, -18.12254f },
	{ 0.025667f, 8.101397f, -24.74331f },
	{ 0.025662f, 16.03052f, -23.8448f },
	{ 0.840307f, 6.963128f, -17.09996f },
	{ -0.788976f, 6.96313f, -17.09996f },
	{ 1.032616f, 5.814448f, -17.09996f },
	{ -0.9812869f, 5.814449f, -17.09996f },
	{ 0.880762f, 5.102055f, -17.09996f },
	{ -0.829432f, 5.102055f, -17.09996f },
	{ 0.33683f, 4.560104f, -17.09996f },
	{ -0.2855f, 4.560105f, -17.09996f },
	{ 0.025664f, 9.269026f, -16.24216f },
	{ -0.679014f, 6.975711f, -17.22096f },
	{ -10.78786f, 7.504453f, -24.17641f },
	{ -10.80244f, 7.334263f, -26.26438f },
	{ -10.8103f, 7.242549f, -24.15422f },
	{ -10.79809f, 7.385011f, -23.16367f },
	{ -0.402515f, 6.890082f, -20.67986f },
	{ -2.867004f, 7.074229f, -18.57692f },
	{ -2.871142f, 6.923227f, -25.76451f },
	{ -0.512382f, 7.426567f, -19.24645f },
	{ -0.473461f, 6.444067f, -19.20206f },
	{ -2.857183f, 7.439324f, -20.60241f },
	{ -2.878674f, 6.643717f, -20.55803f },
	{ -1.938997f, 6.993838f, -22.17795f },
	{ 2.0046f, 6.931721f, -7.267612f },
	{ -1.953274f, 6.931721f, -7.267612f },
	{ 0.500662f, 9.264236f, -12.48965f },
	{ -0.449334f, 9.264236f, -12.48965f },
	{ 3.04844f, 4.73176f, -5.624317f },
	{ 3.979115f, 0.545644f, -5.645089f },
	{ -2.997113f, 4.731761f, -5.624318f },
	{ -3.837794f, 0.545645f, -5.645091f },
	{ 2.663348f, -2.918201f, -5.758283f },
	{ -2.702074f, -2.897663f, -5.726972f },
	{ 3.928715f, -1.960503f, -5.640059f },
	{ -3.939185f, -1.945486f, -5.640785f },
	{ 1.142742f, 5.420767f, 3.204364f },
	{ -1.091423f, 5.420767f, 3.204364f },
	{ -0.900263f, 3.675513f, 7.407686f },
	{ 0.86603f, 4.626874f, 7.407592f },
	{ -0.814712f, 4.626875f, 7.40759f },
	{ 0.95158f, 3.675513f, 7.407687f },
	{ 0.025663f, 6.931721f, -7.267612f },
	{ 0.025661f, 4.37946f, 1.130008f },
	{ 0.025664f, 4.731761f, -5.624318f }
};

NJS_VECTOR normal_0021B504[] = {
	{ -0.619207f, 0.614411f, 0.488961f },
	{ -0.634371f, 0.599999f, 0.487415f },
	{ -0.238214f, 0.6650389f, 0.707797f },
	{ -0.358067f, 0.660671f, 0.6597739f },
	{ 0.243693f, 0.6654f, 0.70559f },
	{ 0.365724f, 0.661984f, 0.6542349f },
	{ 0.63173f, 0.61274f, 0.474834f },
	{ 0.6434309f, 0.601339f, 0.473696f },
	{ -0.000412f, 0.8110009f, 0.585044f },
	{ -0.438322f, 0.8988039f, 0.004981f },
	{ 0.455259f, 0.890166f, 0.018555f },
	{ 0.550135f, 0.5389929f, 0.637839f },
	{ -0.534724f, 0.555921f, 0.636414f },
	{ -0.545154f, 0.5424049f, 0.639221f },
	{ -0.690592f, -0.268402f, -0.6715969f },
	{ -0.223425f, -0.839491f, -0.495314f },
	{ 0.163816f, -0.860041f, -0.483212f },
	{ 0.764632f, -0.336814f, -0.549449f },
	{ 0.5252489f, 0.848075f, -0.06987999f },
	{ 0.972969f, 0.228281f, -0.034912f },
	{ 0.186398f, 0.927627f, -0.323672f },
	{ -0.177467f, 0.912618f, -0.368286f },
	{ -0.519411f, 0.848207f, -0.103715f },
	{ -0.970278f, 0.235803f, -0.054381f },
	{ -0.963607f, 0.262221f, -0.051986f },
	{ 0.100292f, -0.9912699f, -0.08559199f },
	{ -0.107134f, -0.990615f, -0.084875f },
	{ 0.962051f, 0.270514f, -0.03577f },
	{ 0.788322f, 0.601353f, 0.130084f },
	{ 0.976051f, 0.203221f, 0.077626f },
	{ 0.819978f, 0.553546f, 0.14568f },
	{ -0.828057f, 0.556718f, 0.06623799f },
	{ -0.7957399f, 0.601316f, 0.07223099f },
	{ -0.9759f, 0.201494f, 0.08378199f },
	{ -0.971437f, 0.209735f, 0.111004f },
	{ 0.028843f, -0.998309f, 0.050477f },
	{ -0.032292f, -0.998145f, 0.051615f },
	{ 0.961952f, 0.218119f, 0.164536f },
	{ 0.771529f, 0.576465f, 0.269129f },
	{ 0.952145f, 0.141184f, 0.271086f },
	{ 0.548055f, 0.773592f, 0.318105f },
	{ -0.588452f, 0.782463f, 0.203658f },
	{ -0.776489f, 0.573908f, 0.260182f },
	{ -0.958851f, 0.136247f, 0.249083f },
	{ -0.859751f, -0.238837f, 0.451427f },
	{ -0.33727f, -0.841768f, 0.421515f },
	{ 0.312652f, -0.837739f, 0.447708f },
	{ 0.82275f, -0.224533f, 0.522176f },
	{ 0.888194f, 0.061175f, 0.455377f },
	{ 0.738254f, 0.523752f, 0.425047f },
	{ 0.111031f, 0.072869f, 0.991142f },
	{ 0.132157f, -0.001467f, 0.991228f },
	{ 0.561814f, 0.7216f, 0.404547f },
	{ 0.363762f, -0.207335f, 0.908124f },
	{ -0.554212f, 0.71196f, 0.431233f },
	{ -0.360373f, -0.20952f, 0.908973f },
	{ -0.739355f, 0.521195f, 0.426274f },
	{ -0.108656f, 0.06868599f, 0.991704f },
	{ -0.90934f, 0.058938f, 0.411857f },
	{ -0.130461f, -0.000657f, 0.991453f },
	{ -0.766827f, -0.448114f, 0.459533f },
	{ -0.114013f, -0.090973f, 0.989305f },
	{ -0.2563f, -0.842011f, 0.474686f },
	{ -0.068242f, -0.134354f, 0.9885809f },
	{ 0.240776f, -0.827365f, 0.507439f },
	{ 0.056557f, -0.118181f, 0.99138f },
	{ 0.730329f, -0.427506f, 0.532783f },
	{ 0.104716f, -0.078059f, 0.991434f },
	{ 0.979162f, -0.203019f, 0.005093f },
	{ 0.28072f, -0.959101f, 0.036365f },
	{ -0.673028f, -0.688686f, 0.269712f },
	{ -0.8472289f, 0.522259f, 0.097206f },
	{ 0.708276f, -0.697293f, 0.110127f },
	{ 0.297092f, -0.954724f, -0.015438f },
	{ 0.748327f, -0.316388f, -0.583014f },
	{ -0.762252f, -0.302871f, -0.57205f },
	{ -0.222991f, -0.628042f, -0.745545f },
	{ 0.220147f, -0.6289679f, -0.74561f },
	{ -0.340039f, -0.218909f, -0.9145769f },
	{ -0.138034f, -0.990416f, -0.004762f },
	{ -0.594405f, -0.419129f, 0.686305f },
	{ 0.5199299f, 0.847469f, 0.107098f },
	{ -0.9803939f, 0.195852f, 0.021647f },
	{ -0.9832169f, 0.170407f, -0.065165f },
	{ -0.952056f, 0.275523f, -0.13295f },
	{ 0.210434f, 0.16819f, -0.963031f },
	{ 0.549786f, 0.371251f, -0.74827f },
	{ 0.121958f, 0.111819f, -0.9862159f },
	{ -0.503191f, 0.858135f, 0.101996f },
	{ 0.53846f, -0.8421f, 0.030456f },
	{ -0.613591f, 0.786046f, 0.075078f },
	{ -0.367334f, -0.323406f, 0.872052f },
	{ 0.935621f, -0.104678f, 0.337129f },
	{ 0.399398f, -0.863507f, 0.307957f },
	{ -0.9306509f, -0.084289f, 0.356066f },
	{ -0.365845f, -0.871686f, 0.32607f },
	{ 0.023175f, 0.975243f, 0.219917f },
	{ 0.025917f, 0.947876f, -0.317583f },
	{ 0.545155f, 0.5424049f, 0.63922f },
	{ 0.950179f, 0.281008f, -0.134888f },
	{ 0.986963f, 0.15201f, -0.052895f },
	{ 0, -0.00001f, 1 },
	{ 0, 0, 1 },
	{ -0.00001f, -0.00001f, 1 },
	{ -0.00001f, -0.00001f, 1 },
	{ 0, -0.00001f, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.000002f, 1 },
	{ 0, 0.000002f, 1 },
	{ 0, 0, 1 },
	{ 0.00196f, -0.000421f, 0.999998f },
	{ -0.978992f, -0.100044f, -0.177668f },
	{ 0.97997f, -0.052992f, -0.191968f },
	{ -0.00001f, -0.563305f, -0.8262489f },
	{ 0.9537629f, 0.277582f, -0.115256f },
	{ 0.983916f, 0.07183f, -0.163555f },
	{ 0.715632f, 0.698392f, -0.010914f },
	{ 0.000283f, 0.645062f, 0.76413f },
	{ 0.981647f, -0.08788899f, -0.16925f },
	{ -0.954652f, 0.274908f, -0.1143f },
	{ -0.979974f, -0.057294f, -0.190707f },
	{ -0.984868f, 0.050376f, -0.165826f },
	{ 0.954851f, 0.079748f, -0.28618f },
	{ -0.837274f, -0.458862f, -0.297351f },
	{ -0.622261f, -0.7656879f, -0.162829f },
	{ -0.313628f, -0.876914f, -0.364225f },
	{ 0.6222619f, -0.765687f, -0.162829f },
	{ 0.305326f, -0.879966f, -0.363918f },
	{ -0.955667f, 0.066879f, -0.286754f },
	{ 0.8451689f, -0.444586f, -0.296704f },
	{ 0.011891f, -0.49424f, -0.869244f },
	{ -0.711704f, 0.7024159f, -0.009451999f },
	{ 0.000792f, 0.9179209f, 0.396763f },
	{ 0.007959f, -0.245349f, -0.969402f },
	{ 0.001643f, 0.625982f, -0.779836f },
	{ 0.9745499f, 0.214843f, -0.06399f },
	{ -0.974793f, 0.214711f, -0.06064f },
	{ 0.992716f, -0.004785f, -0.120386f },
	{ -0.9927599f, -0.014701f, -0.119209f },
	{ 0.869951f, -0.474628f, -0.133844f },
	{ -0.867277f, -0.479968f, -0.132143f },
	{ 0.349078f, -0.928602f, -0.12587f },
	{ -0.353558f, -0.926983f, -0.125291f },
	{ 0.0008179999f, 0.989263f, 0.146142f },
	{ -0.56977f, -0.041644f, 0.820748f },
	{ -0.646228f, 0.763119f, -0.006206f },
	{ -0.559384f, 0.013918f, -0.828792f },
	{ -0.7445779f, -0.667294f, 0.017969f },
	{ -0.745792f, 0.04403f, 0.664722f },
	{ 0.542308f, -0.104242f, -0.833688f },
	{ -0.5617189f, 0.037656f, 0.826471f },
	{ 0.518043f, -0.044843f, -0.854178f },
	{ 0.030605f, 0.9995199f, 0.004765f },
	{ -0.07173999f, -0.996509f, 0.042696f },
	{ 0.07309099f, 0.996718f, -0.034805f },
	{ -0.026744f, -0.999642f, 0.000896f },
	{ 0.849999f, -0.027126f, -0.526086f },
	{ 0.707847f, 0.539453f, 0.456008f },
	{ -0.710328f, 0.541428f, 0.449767f },
	{ 0.587432f, 0.807143f, -0.058686f },
	{ -0.583609f, 0.809701f, -0.061528f },
	{ 0.724578f, 0.650528f, 0.227595f },
	{ 0.969254f, 0.07718299f, -0.233644f },
	{ -0.733963f, 0.641737f, 0.222424f },
	{ -0.96903f, 0.102706f, -0.224571f },
	{ -0.010069f, -0.652212f, -0.757969f },
	{ 0.005987f, -0.656854f, -0.753994f },
	{ 0.770494f, -0.09113199f, -0.6309f },
	{ -0.774731f, -0.08467299f, -0.626596f },
	{ 0.5999089f, 0.796599f, -0.07442199f },
	{ -0.59991f, 0.796599f, -0.07442199f },
	{ -0.990886f, 0.104942f, 0.084457f },
	{ 0.657914f, 0.732435f, 0.175182f },
	{ -0.657914f, 0.732435f, 0.175182f },
	{ 0.990885f, 0.104942f, 0.08445799f },
	{ 0.002109f, 0.394763f, 0.918781f },
	{ 0, 0.804931f, -0.593368f },
	{ 0, 0.721667f, 0.69224f }
};

NJS_MODEL_SADX attach_0021BD68 = { vertex_0021ACA0, normal_0021B504, LengthOfArray<Sint32>(vertex_0021ACA0), meshlist_0021AA18, matlist_00219740, LengthOfArray<Uint16>(meshlist_0021AA18), LengthOfArray<Uint16>(matlist_00219740),{ -7.909534f, -0.022591f, -7.021112f }, 25.06179f, NULL };

NJS_OBJECT object_0021BD90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0021BD68, 0, 0.000001f, 0, 0, 0, 0, 1, 1, 1, &object_0021970C, NULL };