#include <SADXModLoader.h>

//Fixed rope model lol

NJS_MATERIAL matlist_000C4BF0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000C4C04[] = {
	4, 3, 5, 0, 2,
	4, 4, 3, 1, 0,
	4, 5, 4, 2, 1
};

NJS_TEX uv_000C4C24[] = {
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1020, 255 },
	{ 1020, 0 }
};

NJS_MESHSET_SADX meshlist_000C4C54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000C4C04, NULL, NULL, NULL, uv_000C4C24, NULL }
};

NJS_VECTOR vertex_000C4C6C[] = {
	{ -0.000263f, 1.014209f, -0.44399f },
	{ 0.410936f, 1.014209f, 0.268228f },
	{ -0.411462f, 1.014209f, 0.268228f },
	{ -0.000263f, -0.000134f, -0.44399f },
	{ 0.410936f, -0.000134f, 0.268228f },
	{ -0.411462f, -0.000134f, 0.268228f }
};

NJS_VECTOR normal_000C4CB4[] = {
	{ 0, 0, -1 },
	{ 0.866025f, 0, 0.5f },
	{ -0.866025f, 0, 0.5f },
	{ 0, 0, -1 },
	{ 0.866025f, 0, 0.5f },
	{ -0.866025f, 0, 0.5f }
};

NJS_MODEL_SADX attach_000C4CFC = { vertex_000C4C6C, normal_000C4CB4, LengthOfArray<Sint32>(vertex_000C4C6C), meshlist_000C4C54, matlist_000C4BF0, LengthOfArray<Uint16>(meshlist_000C4C54), LengthOfArray<Uint16>(matlist_000C4BF0),{ -0.000263f, 0.507037f, -0.087881f }, 0.619706f, NULL };

NJS_OBJECT object_000C4D24 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C4CFC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

enum OBJ_WINDYTexName
{
	OBJ_WINDYTexName_am_win001_32b,
	OBJ_WINDYTexName_am_win002_16,
	OBJ_WINDYTexName_am_win003_32,
	OBJ_WINDYTexName_am_win004_64,
	OBJ_WINDYTexName_am_win007_128,
	OBJ_WINDYTexName_am_win008_32,
	OBJ_WINDYTexName_am_win010_32,
	OBJ_WINDYTexName_am_win011_32,
	OBJ_WINDYTexName_am_win012_32,
	OBJ_WINDYTexName_am_win013_64,
	OBJ_WINDYTexName_am_win014_8,
	OBJ_WINDYTexName_am_win016_64,
	OBJ_WINDYTexName_am_win017_32,
	OBJ_WINDYTexName_am_win021_16,
	OBJ_WINDYTexName_am_win022_32,
	OBJ_WINDYTexName_am_win024_32,
	OBJ_WINDYTexName_am_win026_32,
	OBJ_WINDYTexName_am_win027_32,
	OBJ_WINDYTexName_am_win028_32,
	OBJ_WINDYTexName_am_win029_64,
	OBJ_WINDYTexName_am_win030_32,
	OBJ_WINDYTexName_am_win033_32,
	OBJ_WINDYTexName_am_win034_64,
	OBJ_WINDYTexName_am_win039_32,
	OBJ_WINDYTexName_am_win040_32,
	OBJ_WINDYTexName_am_win041_32,
	OBJ_WINDYTexName_am_win042_32,
	OBJ_WINDYTexName_am_win044_32,
	OBJ_WINDYTexName_am_win045_128,
	OBJ_WINDYTexName_am_win046_32,
	OBJ_WINDYTexName_am_win047_32,
	OBJ_WINDYTexName_am_win048_64,
	OBJ_WINDYTexName_am_win049_32,
	OBJ_WINDYTexName_am_win050_32,
	OBJ_WINDYTexName_am_win052_32,
	OBJ_WINDYTexName_am_win054_16,
	OBJ_WINDYTexName_am_win055_8,
	OBJ_WINDYTexName_am_win056_32,
	OBJ_WINDYTexName_m128_wv1_003,
	OBJ_WINDYTexName_m32_wv1_001,
	OBJ_WINDYTexName_m32_wv1_002,
	OBJ_WINDYTexName_m32_wv1_003,
	OBJ_WINDYTexName_m32_wv1_004,
	OBJ_WINDYTexName_m32_wv1_005,
	OBJ_WINDYTexName_m32_wv1_006,
	OBJ_WINDYTexName_m32_wv1_007,
	OBJ_WINDYTexName_m32_wv1_008,
	OBJ_WINDYTexName_m32_wv1_009,
	OBJ_WINDYTexName_m32_wv1_010,
	OBJ_WINDYTexName_m32_wv1_012,
	OBJ_WINDYTexName_m32_wv1_013,
	OBJ_WINDYTexName_m32_wv1_014,
	OBJ_WINDYTexName_m32_wv1_015,
	OBJ_WINDYTexName_m64_wv1_001,
	OBJ_WINDYTexName_m64_wv1_002,
	OBJ_WINDYTexName_m64_wv1_003,
	OBJ_WINDYTexName_m64_wv1_004,
	OBJ_WINDYTexName_m64_wv1_005,
	OBJ_WINDYTexName_m64_wv1_006,
	OBJ_WINDYTexName_m64_wv1_007,
	OBJ_WINDYTexName_m64_wv1_008,
	OBJ_WINDYTexName_m64_wv1_009,
	OBJ_WINDYTexName_m64_wv1_010,
	OBJ_WINDYTexName_m64_wv1_011,
	OBJ_WINDYTexName_m64_wv1_012,
	OBJ_WINDYTexName_m64_wv1_013,
	OBJ_WINDYTexName_m8_wv1_001,
	OBJ_WINDYTexName_mtatu_center,
	OBJ_WINDYTexName_mtatu_in,
	OBJ_WINDYTexName_mtatu_noise,
	OBJ_WINDYTexName_mtatu_out,
	OBJ_WINDYTexName_windy1_1,
	OBJ_WINDYTexName_windy1_10,
	OBJ_WINDYTexName_windy1_11,
	OBJ_WINDYTexName_windy1_12,
	OBJ_WINDYTexName_windy1_13,
	OBJ_WINDYTexName_windy1_16,
	OBJ_WINDYTexName_windy1_6,
	OBJ_WINDYTexName_windy1_8,
	OBJ_WINDYTexName_windy2_5,
	OBJ_WINDYTexName_windy3_6
};

NJS_MATERIAL matlist_000D38DC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 73, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000D3918[] = {
	0x8000u | 5, 2, 21, 3, 7, 0,
	0x8000u | 5, 0, 12, 10, 18, 9,
	5, 16, 7, 15, 0, 12,
	5, 12, 17, 15, 14, 16,
	0x8000u | 5, 9, 19, 10, 5, 0,
	5, 2, 20, 3, 5, 0
};

Sint16 poly_000D3960[] = {
	8, 21, 7, 6, 16, 25, 14, 13, 26,
	0x8000u | 8, 19, 9, 8, 18, 27, 12, 11, 26,
	0x8000u | 6, 20, 5, 4, 19, 22, 8,
	4, 12, 26, 17, 14,
	0x8000u | 5, 4, 23, 20, 1, 2,
	0x8000u | 5, 6, 21, 24, 2, 1
};

Sint16 poly_000D39B4[] = {
	7, 51, 36, 37, 50, 41, 38, 39,
	8, 30, 46, 43, 34, 35, 51, 42, 37,
	12, 43, 31, 30, 44, 47, 29, 28, 45, 48, 33, 32, 49,
	0x8000u | 5, 38, 39, 49, 40, 33
};

NJS_TEX uv_000D39FC[] = {
	{ 269, 219 },
	{ 476, 126 },
	{ 233, -30 },
	{ 510, -91 },
	{ 233, -219 },
	{ 270, -208 },
	{ 13, -130 },
	{ 268, 30 },
	{ 62, 130 },
	{ 259, 208 },
	{ 70, 141 },
	{ 19, -77 },
	{ 262, -12 },
	{ 269, -235 },
	{ 490, -58 },
	{ 490, -58 },
	{ 419, 126 },
	{ 262, -12 },
	{ 281, 235 },
	{ 70, 141 },
	{ 259, 208 },
	{ 425, 126 },
	{ 268, 30 },
	{ 496, -75 },
	{ 270, -208 },
	{ 269, 219 },
	{ 86, 116 },
	{ 233, -30 },
	{ 0, -70 },
	{ 233, -219 }
};

NJS_TEX uv_000D3A74[] = {
	{ 2100, 123 },
	{ 1893, 123 },
	{ 1895, 255 },
	{ 1683, 123 },
	{ 1700, 255 },
	{ 1481, 123 },
	{ 1478, 255 },
	{ 1297, 255 },
	{ 550, 123 },
	{ 722, 123 },
	{ 731, 255 },
	{ 920, 123 },
	{ 933, 255 },
	{ 1141, 123 },
	{ 1148, 255 },
	{ 1297, 255 },
	{ 181, 123 },
	{ 371, 123 },
	{ 381, 255 },
	{ 550, 123 },
	{ 522, 255 },
	{ 731, 255 },
	{ 1141, 123 },
	{ 1297, 255 },
	{ 1323, 123 },
	{ 1481, 123 },
	{ 381, 255 },
	{ 204, 255 },
	{ 181, 123 },
	{ 0, 255 },
	{ 0, 123 },
	{ 1895, 255 },
	{ 2100, 123 },
	{ 2093, 254 },
	{ 2295, 123 },
	{ 2295, 255 }
};

NJS_TEX uv_000D3B04[] = {
	{ 1967, 255 },
	{ 2181, 255 },
	{ 2172, 0 },
	{ 2353, 255 },
	{ 2375, 0 },
	{ 2550, 255 },
	{ 2550, 0 },
	{ 1339, 255 },
	{ 1494, 255 },
	{ 1515, 0 },
	{ 1730, 255 },
	{ 1705, 0 },
	{ 1967, 255 },
	{ 1927, 0 },
	{ 2172, 0 },
	{ 1515, 0 },
	{ 1315, 0 },
	{ 1339, 255 },
	{ 1105, 0 },
	{ 1144, 255 },
	{ 903, 0 },
	{ 912, 255 },
	{ 687, 0 },
	{ 684, 255 },
	{ 458, 0 },
	{ 468, 255 },
	{ 260, 255 },
	{ 0, 255 },
	{ 0 },
	{ 260, 255 },
	{ 224, 0 },
	{ 458, 0 }
};

NJS_MESHSET_SADX meshlist_000D3B84[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000D39B4, NULL, NULL, NULL, uv_000D3B04, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000D3960, NULL, NULL, NULL, uv_000D3A74, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_000D3918, NULL, NULL, NULL, uv_000D39FC, NULL }
};

NJS_VECTOR vertex_000D3BCC[] = {
	{ -0.397924f, 3.317922f, -0.7545879f },
	{ 12.69004f, 1.304852f, 7.818695f },
	{ 10.77017f, 2.947915f, 6.742528f },
	{ 4.689705f, 4.811618f, 2.118f },
	{ 8.436237f, 1.139475f, -5.183758f },
	{ 6.794819f, 3.172009f, -4.112101f },
	{ -0.423853f, 1.479809f, 10.13221f },
	{ -0.709222f, 3.054481f, 7.632543f },
	{ -0.618575f, 1.211039f, -13.78408f },
	{ -0.355359f, 2.905876f, -12.05956f },
	{ -0.248674f, 3.911243f, -7.226575f },
	{ -10.1957f, 1.150171f, -3.497458f },
	{ -8.112288f, 2.668582f, -2.931042f },
	{ -14.62348f, 1.221999f, 7.710023f },
	{ -12.67833f, 3.023385f, 6.560122f },
	{ -6.10057f, 4.272399f, 3.090997f },
	{ -6.986539f, 3.026158f, 9.899295f },
	{ -11.70062f, 2.809808f, 1.782123f },
	{ -6.361082f, 2.909803f, -9.867357f },
	{ 4.623877f, 3.042018f, -9.504189f },
	{ 10.47656f, 3.217939f, 0.769814f },
	{ 5.512908f, 2.892463f, 10.05464f },
	{ 6.23278f, 1.364558f, -10.00548f },
	{ 12.37553f, 1.387764f, 0.154052f },
	{ 6.669745f, 1.098323f, 12.37073f },
	{ -7.47601f, 1.177622f, 12.02228f },
	{ -13.49873f, 1.176829f, 1.033847f },
	{ -7.763919f, 1.061708f, -11.16783f },
	{ 13.33322f, -0.075f, 8.186867f },
	{ 10.91451f, 2.548193f, 6.754457f },
	{ 9.024457f, -0.075f, -5.382761f },
	{ 6.794818f, 2.477223f, -4.1121f },
	{ -0.401443f, -0.075f, 10.2515f },
	{ -0.7141089f, 2.600549f, 7.824024f },
	{ -0.562313f, -0.075f, -14.26842f },
	{ -0.327453f, 2.356806f, -12.13723f },
	{ -10.46734f, -0.075f, -3.934211f },
	{ -8.356683f, 2.143915f, -3.128651f },
	{ -15.02538f, -0.075f, 7.742508f },
	{ -12.8472f, 2.662577f, 6.694764f },
	{ -7.206973f, 2.531537f, 10.21635f },
	{ -12.08411f, 2.227916f, 1.596671f },
	{ -6.581013f, 2.434438f, -10.15085f },
	{ 4.73291f, 2.655276f, -9.63331f },
	{ 10.62091f, 2.818217f, 0.781746f },
	{ 5.601264f, 2.380492f, 10.33259f },
	{ 6.608237f, -0.066107f, -10.21977f },
	{ 12.99537f, -0.075f, 0.09254999f },
	{ 6.760695f, -0.075f, 12.61888f },
	{ -7.282261f, -0.075f, 12.4737f },
	{ -13.84347f, -0.075f, 0.985317f },
	{ -8.149316f, -0.075f, -11.00793f }
};

NJS_VECTOR normal_000D3E3C[] = {
	{ -0.054597f, 0.997814f, -0.037221f },
	{ 0.531585f, 0.797358f, 0.285724f },
	{ 0.4153f, 0.8813829f, 0.225145f },
	{ -0.005284f, 0.999744f, -0.02202f },
	{ 0.6183659f, 0.698986f, -0.359225f },
	{ 0.352763f, 0.9026729f, -0.246455f },
	{ -0.016977f, 0.8239999f, 0.566335f },
	{ -0.005023f, 0.954075f, 0.299526f },
	{ 0.011544f, 0.702801f, -0.711292f },
	{ 0.045432f, 0.847555f, -0.5287589f },
	{ -0.009218f, 0.998499f, -0.053982f },
	{ -0.514661f, 0.810495f, -0.279681f },
	{ -0.321286f, 0.929107f, -0.183129f },
	{ -0.56243f, 0.780867f, 0.27188f },
	{ -0.444997f, 0.878863f, 0.171981f },
	{ -0.027901f, 0.99915f, -0.030351f },
	{ -0.058863f, 0.881517f, 0.468469f },
	{ -0.429902f, 0.874014f, -0.22646f },
	{ -0.393843f, 0.861199f, -0.321286f },
	{ 0.370328f, 0.84063f, -0.39522f },
	{ 0.48334f, 0.859144f, -0.168091f },
	{ 0.030154f, 0.884765f, 0.465061f },
	{ 0.569294f, 0.682849f, -0.457845f },
	{ 0.634603f, 0.736863f, -0.233048f },
	{ 0.128496f, 0.805959f, 0.577857f },
	{ -0.113516f, 0.761228f, 0.6384709f },
	{ -0.585727f, 0.761603f, -0.277282f },
	{ -0.506449f, 0.73699f, -0.447611f },
	{ 0.600939f, 0.730832f, 0.323661f },
	{ 0.614924f, 0.729942f, 0.298419f },
	{ 0.642317f, 0.682553f, -0.348641f },
	{ 0.642555f, 0.682471f, -0.348363f },
	{ -0.011099f, 0.662192f, 0.749252f },
	{ 0.021856f, 0.663027f, 0.748276f },
	{ 0.027423f, 0.657345f, -0.753091f },
	{ 0.07842f, 0.652768f, -0.7534879f },
	{ -0.666425f, 0.680463f, -0.304707f },
	{ -0.674697f, 0.677716f, -0.292376f },
	{ -0.6842189f, 0.661726f, 0.306535f },
	{ -0.684883f, 0.6617039f, 0.305096f },
	{ -0.094046f, 0.659706f, 0.745616f },
	{ -0.698769f, 0.6512319f, -0.296006f },
	{ -0.525169f, 0.693438f, -0.493296f },
	{ 0.5457219f, 0.6444989f, -0.535545f },
	{ 0.663628f, 0.707727f, -0.242322f },
	{ 0.031106f, 0.69881f, 0.714631f },
	{ 0.601729f, 0.652976f, -0.45994f },
	{ 0.668229f, 0.706902f, -0.231863f },
	{ 0.136329f, 0.707885f, 0.693047f },
	{ -0.07064299f, 0.661485f, 0.746624f },
	{ -0.701883f, 0.649577f, -0.292249f },
	{ -0.5709f, 0.692436f, -0.441141f }
};

NJS_MODEL_SADX attach_000D40AC = { vertex_000D3BCC, normal_000D3E3C, LengthOfArray(vertex_000D3BCC), meshlist_000D3B84, matlist_000D38DC, LengthOfArray(meshlist_000D3B84), LengthOfArray(matlist_000D38DC),{ -0.846082f, 2.368309f, -0.8247679f }, 19.5393f, NULL };

NJS_OBJECT object_000D40D4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000D40AC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Broken fan piece

NJS_MATERIAL matlist_0082B5B0[] = {
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, 58, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, 57, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, 60, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0082B614[] = {
	3, 5, 1, 0,
	3, 1, 2, 0,
	3, 1, 3, 2,
	3, 3, 4, 2
};

Sint16 poly_0082B634[] = {
	3, 0, 2, 4
};

Sint16 poly_0082B63C[] = {
	4, 3, 1, 6, 5
};

Sint16 poly_0082B648[] = {
	0x8000u | 5, 4, 0, 3, 5, 6
};

NJS_TEX uv_0082B6B4[] = {
	{ 255, 255 },
	{ 132, 254 },
	{ 255, 0 },
	{ 132, 254 },
	{ 132, 0 },
	{ 255, 0 },
	{ 132, 254 },
	{ 0, 254 },
	{ 132, 0 },
	{ 0, 254 },
	{ 0 },
	{ 132, 0 }
};

NJS_TEX uv_0082B6E4[] = {
	{ 121, 0 },
	{ 255, 127 },
	{ 0, 255 }
};

NJS_TEX uv_0082B6F0[] = {
	{ 0, 5 },
	{ 255, 0 },
	{ 255, 255 },
	{ 510, 5 }
};

NJS_TEX uv_0082B700[] = {
	{ 40, -255 },
	{ 469, -255 },
	{ 0, -28 },
	{ 510, -28 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_0082B718[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0082B634, NULL, NULL, NULL, uv_0082B6E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0082B63C, NULL, NULL, NULL, uv_0082B6F0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0082B648, NULL, NULL, NULL, uv_0082B700, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0082B614, NULL, NULL, NULL, uv_0082B6B4, NULL }
};

NJS_VECTOR vertex_0082B788[] = {
	{ -0.914801f, 4.085852f, 4.24558f },
	{ 1.528175f, 0.071852f, 0 },
	{ 0.228578f, 4.085852f, 0 },
	{ -1.040845f, -0.036148f, -5.05426f },
	{ -1.9598f, 4.085852f, -4.24558f },
	{ 0.004154f, -0.036148f, 5.05426f },
	{ -0.122921f, -5.180547f, 0 }
};

NJS_VECTOR normal_0082B7E0[] = {
	{ -0.214595f, 0.608475f, 0.764007f },
	{ 0.996172f, 0.007875f, -0.087063f },
	{ 0.660761f, 0.747356f, -0.069667f },
	{ -0.185218f, -0.22033f, -0.957679f },
	{ -0.373458f, 0.574629f, -0.728238f },
	{ -0.007615f, -0.209753f, 0.977725f },
	{ -0.062067f, -0.998072f, 0.000685f }
};

NJS_MODEL_SADX attach_0082B834 = { vertex_0082B788, normal_0082B7E0, LengthOfArray(vertex_0082B788), meshlist_0082B718, matlist_0082B5B0, LengthOfArray(meshlist_0082B718), LengthOfArray(matlist_0082B5B0),{ -0.215812f, -0.547348f, 0 }, 6.856535f, NULL };

NJS_OBJECT object_0082B860 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0082B834, 5.744321f, 4.025496f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Broken piece 2

NJS_MATERIAL matlist_0082B898[] = {
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_m64_wv1_008, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_m64_wv1_006, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win029_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win017_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win014_8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_m64_wv1_005, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0082B924[] = {
	3, 18, 17, 16,
	3, 14, 16, 15,
	3, 16, 17, 15,
	3, 20, 22, 21,
	3, 22, 12, 21,
	3, 20, 21, 19
};

Sint16 poly_0082B954[] = {
	3, 14, 24, 25,
	3, 25, 24, 13,
	3, 25, 16, 14,
	3, 23, 24, 14,
	3, 22, 20, 26,
	3, 13, 24, 23
};

Sint16 poly_0082B984[] = {
	3, 19, 21, 18,
	3, 21, 17, 18,
	4, 15, 17, 12, 21
};

Sint16 poly_0082B9A0[] = {
	3, 1, 3, 2,
	3, 3, 4, 2,
	3, 11, 1, 0,
	3, 1, 2, 0,
	3, 3, 5, 4,
	3, 5, 6, 4,
	3, 5, 7, 6,
	3, 7, 8, 6,
	3, 9, 11, 10,
	3, 11, 0, 10,
	3, 7, 9, 8,
	3, 9, 10, 8
};

Sint16 poly_0082BA00[] = {
	3, 0, 2, 10,
	5, 2, 4, 10, 6, 8
};

Sint16 poly_0082BA18[] = {
	3, 13, 23, 26,
	3, 14, 15, 22,
	3, 15, 12, 22,
	4, 26, 23, 22, 14,
	3, 19, 18, 20,
	3, 18, 16, 20,
	4, 20, 25, 26, 13,
	3, 20, 16, 25
};

NJS_TEX uv_0082BC30[] = {
	{ 590, 0 },
	{ 402, 0 },
	{ 397, 254 },
	{ 198, 254 },
	{ 397, 254 },
	{ 206, 0 },
	{ 397, 254 },
	{ 402, 0 },
	{ 206, 0 },
	{ 1124, 254 },
	{ 1337, 254 },
	{ 1122, 0 },
	{ 1337, 254 },
	{ 1335, 0 },
	{ 1122, 0 },
	{ 1124, 254 },
	{ 1122, 0 },
	{ 935, 0 }
};

NJS_TEX uv_0082BC78[] = {
	{ -1231, -255 },
	{ -1223, 59 },
	{ -1026, 16 },
	{ -1026, 16 },
	{ -1223, 59 },
	{ -1211, 255 },
	{ -1026, 16 },
	{ -1032, -255 },
	{ -1231, -255 },
	{ -1443, 56 },
	{ -1223, 59 },
	{ -1231, -255 },
	{ -92, -255 },
	{ -305, -255 },
	{ -310, -16 },
	{ -1211, 255 },
	{ -1223, 59 },
	{ -1443, 56 }
};

NJS_TEX uv_0082BCC0[] = {
	{ 44, -403 },
	{ 386, -510 },
	{ 0, 142 },
	{ 386, -510 },
	{ 356, 255 },
	{ 0, 142 },
	{ 682, 142 },
	{ 356, 255 },
	{ 765, -397 },
	{ 386, -510 }
};

NJS_TEX uv_0082BCE8[] = {
	{ 0, 254 },
	{ 253, 254 },
	{ 39, 128 },
	{ 253, 254 },
	{ 214, 128 },
	{ 39, 128 },
	{ 0, 254 },
	{ 253, 254 },
	{ 39, 128 },
	{ 253, 254 },
	{ 214, 128 },
	{ 39, 128 },
	{ 0, 254 },
	{ 253, 254 },
	{ 39, 128 },
	{ 253, 254 },
	{ 214, 128 },
	{ 39, 128 },
	{ 0, 254 },
	{ 253, 254 },
	{ 39, 128 },
	{ 253, 254 },
	{ 214, 128 },
	{ 39, 128 },
	{ 0, 254 },
	{ 253, 254 },
	{ 39, 128 },
	{ 253, 254 },
	{ 214, 128 },
	{ 39, 128 },
	{ 0, 254 },
	{ 253, 254 },
	{ 39, 128 },
	{ 253, 254 },
	{ 214, 128 },
	{ 39, 128 }
};

NJS_TEX uv_0082BD78[] = {
	{ 1274, -701 },
	{ 1274, -63 },
	{ 637, -1020 },
	{ 1274, -63 },
	{ 637, 254 },
	{ 637, -1020 },
	{ 0, -63 },
	{ 0, -701 }
};

NJS_TEX uv_0082BD98[] = {
	{ 131, 255 },
	{ 255, 55 },
	{ 462, -18 },
	{ 74, -258 },
	{ 103, -510 },
	{ 435, -258 },
	{ 103, -510 },
	{ 406, -510 },
	{ 435, -258 },
	{ 462, -18 },
	{ 255, 55 },
	{ 435, -258 },
	{ 74, -258 },
	{ 409, -510 },
	{ 103, -510 },
	{ 510, -258 },
	{ 103, -510 },
	{ 0, -258 },
	{ 510, -258 },
	{ 510, -258 },
	{ 48, 14 },
	{ 462, -18 },
	{ 131, 255 },
	{ 510, -258 },
	{ 0, -258 },
	{ 48, 14 }
};

NJS_MESHSET_SADX meshlist_0082BE00[] = {
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_0082B954, NULL, NULL, NULL, uv_0082BC78, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0082B984, NULL, NULL, NULL, uv_0082BCC0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 12, poly_0082B9A0, NULL, NULL, NULL, uv_0082BCE8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0082BA00, NULL, NULL, NULL, uv_0082BD78, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 8, poly_0082BA18, NULL, NULL, NULL, uv_0082BD98, NULL },
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0082B924, NULL, NULL, NULL, uv_0082BC30, NULL }
};

NJS_VECTOR vertex_0082BEA8[] = {
	{ 1.742634f, 5.969503f, 1.814399f },
	{ 3.10444f, 4.024504f, -2.600639f },
	{ 1.742633f, 5.969503f, -1.8144f },
	{ -1.4f, 4.024504f, -5.201278f },
	{ -1.4f, 5.969503f, -3.6288f },
	{ -5.904438f, 4.024504f, -2.600639f },
	{ -4.542633f, 5.969503f, -1.8144f },
	{ -5.904438f, 4.024504f, 2.60064f },
	{ -4.542632f, 5.969503f, 1.8144f },
	{ -1.399999f, 4.024504f, 5.201279f },
	{ -1.399999f, 5.969503f, 3.6288f },
	{ 3.104441f, 4.024504f, 2.600638f },
	{ 3.429523f, 4.085851f, 4.24558f },
	{ 1.50587f, -8.452951f, -3.472366f },
	{ 3.303478f, -0.036147f, -5.05426f },
	{ 2.384522f, 4.085851f, -4.24558f },
	{ -1.775f, -0.036147f, -7.1478f },
	{ -1.775f, 4.085851f, -6.004153f },
	{ -6.314519f, 4.085851f, -4.24558f },
	{ -5.74452f, 4.085851f, 4.329179f },
	{ -1.395f, -0.036147f, 7.1478f },
	{ -1.395f, 4.085851f, 6.004153f },
	{ 4.348477f, -0.036147f, 5.05426f },
	{ 4.221402f, -5.180547f, 0 },
	{ 2.404675f, -5.234548f, -4.263313f },
	{ -1.775f, -4.514547f, -5.778433f },
	{ -1.4425f, -3.974547f, 5.820234f }
};

NJS_VECTOR normal_0082BFF0[] = {
	{ 0.461217f, 0.846387f, 0.266284f },
	{ 0.67346f, 0.628704f, -0.388822f },
	{ 0.461217f, 0.846387f, -0.266284f },
	{ 0, 0.628704f, -0.777645f },
	{ 0, 0.846387f, -0.532568f },
	{ -0.67346f, 0.628704f, -0.388822f },
	{ -0.461218f, 0.846387f, -0.266284f },
	{ -0.67346f, 0.628704f, 0.388822f },
	{ -0.461218f, 0.846387f, 0.266284f },
	{ 0, 0.628704f, 0.777644f },
	{ 0, 0.846387f, 0.532568f },
	{ 0.67346f, 0.628704f, 0.388822f },
	{ 0.615801f, 0.701209f, 0.359298f },
	{ 0.110906f, -0.945148f, -0.307239f },
	{ 0.769465f, 0.04653f, -0.636991f },
	{ 0.566331f, 0.707898f, -0.422078f },
	{ -0.345951f, -0.192936f, -0.918201f },
	{ 0.009418f, 0.729709f, -0.683693f },
	{ -0.886904f, 0.331078f, -0.322162f },
	{ -0.863392f, 0.343422f, 0.369616f },
	{ -0.343886f, -0.189853f, 0.919619f },
	{ -0.00653f, 0.734037f, 0.679078f },
	{ 0.818861f, -0.055037f, 0.571347f },
	{ 0.854416f, -0.494813f, 0.158533f },
	{ 0.64584f, -0.284262f, -0.70858f },
	{ -0.606049f, -0.419881f, -0.675577f },
	{ -0.472902f, -0.581584f, 0.661909f }
};

NJS_MODEL_SADX attach_0082C134 = { vertex_0082BEA8, normal_0082BFF0, LengthOfArray(vertex_0082BEA8), meshlist_0082BE00, matlist_0082B898, LengthOfArray(meshlist_0082BE00), LengthOfArray(matlist_0082B898),{ -0.983021f, -1.241724f, 0 }, 10.15346f, NULL };

NJS_OBJECT object_0082C160 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0082C134, 1.4f, 4.025496f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Piece 3

NJS_MATERIAL matlist_0082C348[] = {
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win029_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_m64_wv1_006, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_m64_wv1_005, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_m64_wv1_008, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0082C3AC[] = {
	3, 2, 4, 6
};

Sint16 poly_0082C3B4[] = {
	3, 6, 5, 7,
	3, 3, 5, 4,
	3, 5, 6, 4,
	3, 1, 3, 2,
	3, 3, 4, 2,
	3, 0, 1, 2
};

Sint16 poly_0082C3E4[] = {
	3, 10, 7, 5,
	3, 3, 1, 9,
	3, 9, 1, 8,
	3, 1, 0, 8
};

Sint16 poly_0082C404[] = {
	3, 9, 10, 3,
	3, 10, 5, 3,
	3, 9, 8, 10,
	4, 7, 0, 6, 2,
	3, 0, 7, 8,
	3, 7, 10, 8
};

NJS_TEX uv_0082C50C[] = {
	{ 165, 255 },
	{ 0, 128 },
	{ 255, 0 }
};

NJS_TEX uv_0082C518[] = {
	{ 644, 0 },
	{ 597, 254 },
	{ 768, 235 },
	{ 379, 249 },
	{ 597, 254 },
	{ 379, 0 },
	{ 597, 254 },
	{ 644, 0 },
	{ 379, 0 },
	{ 148, 235 },
	{ 379, 249 },
	{ 139, 0 },
	{ 379, 249 },
	{ 379, 0 },
	{ 139, 0 },
	{ 0, 235 },
	{ 148, 235 },
	{ 139, 0 }
};

NJS_TEX uv_0082C560[] = {
	{ 1024, 224 },
	{ 1004, 0 },
	{ 785, 19 },
	{ 507, 14 },
	{ 211, 0 },
	{ 183, 198 },
	{ 183, 198 },
	{ 211, 0 },
	{ 0, 254 },
	{ 211, 0 },
	{ 20, 0 },
	{ 0, 254 }
};

NJS_TEX uv_0082C590[] = {
	{ 1, 254 },
	{ 505, 254 },
	{ 101, 1 },
	{ 505, 254 },
	{ 438, 1 },
	{ 101, 1 },
	{ 509, 104 },
	{ 0, 1 },
	{ 1, 253 },
	{ 0, 255 },
	{ 507, 254 },
	{ 0 },
	{ 505, 0 },
	{ 0, 68 },
	{ 510, 68 },
	{ -1, 254 },
	{ 510, 68 },
	{ 509, 254 },
	{ -1, 254 }
};

NJS_MESHSET_SADX meshlist_0082C5E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0082C3AC, NULL, NULL, NULL, uv_0082C50C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0082C3E4, NULL, NULL, NULL, uv_0082C560, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_0082C404, NULL, NULL, NULL, uv_0082C590, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_0082C3B4, NULL, NULL, NULL, uv_0082C518, NULL }
};

NJS_VECTOR vertex_0082C650[] = {
	{ 2.624999f, 0.163853f, -7.1478f },
	{ -2.453477f, 0.163853f, -5.05426f },
	{ -1.914522f, 4.285852f, -4.24558f },
	{ -4.0725f, -0.096147f, 0 },
	{ -2.962901f, 4.285851f, 0 },
	{ -2.643477f, -0.186147f, 4.55266f },
	{ -1.344523f, 4.285852f, 4.329179f },
	{ 3.004999f, 0.163853f, 7.1478f },
	{ 2.624999f, -4.314546f, -5.778433f },
	{ -1.554675f, -3.324547f, -4.012514f },
	{ 2.957499f, -3.774546f, 5.820234f }
};

NJS_VECTOR normal_0082C6D8[] = {
	{ 0.538483f, 0.217122f, -0.814183f },
	{ -0.728509f, -0.036171f, -0.684081f },
	{ -0.215386f, 0.844284f, -0.490707f },
	{ -0.966559f, -0.247495f, 0.067158f },
	{ -0.665979f, 0.745684f, 0.020667f },
	{ -0.761932f, -0.261757f, 0.592405f },
	{ -0.147742f, 0.849341f, 0.506746f },
	{ 0.534269f, 0.233778f, 0.812345f },
	{ 0.44527f, -0.702287f, -0.555453f },
	{ -0.576302f, -0.729024f, -0.369323f },
	{ 0.408454f, -0.730487f, 0.547315f }
};

NJS_MODEL_SADX attach_0082C75C = { vertex_0082C650, normal_0082C6D8, LengthOfArray(vertex_0082C650), meshlist_0082C5E0, matlist_0082C348, LengthOfArray(meshlist_0082C5E0), LengthOfArray(matlist_0082C348),{ -0.533751f, -0.014347f, 0 }, 8.341628f, NULL };

NJS_OBJECT object_0082C788 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0082C75C, -2.999999f, 3.825496f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Act 3 skybox bottom part


NJS_MATERIAL matlist_000B6B6C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000B6B80[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_000B6B8C[] = {
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_000B6B9C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_000B6B80, NULL, NULL, NULL, uv_000B6B8C, NULL }
};

NJS_VECTOR vertex_000B6BB4[] = {
	{ -1619.026f, -2834.533f, -1619.026f },
	{ -1619.026f, -2834.533f, 1619.026f },
	{ 1619.026f, -2834.533f, -1619.026f },
	{ 1619.026f, -2834.533f, 1619.026f }
};

NJS_VECTOR normal_000B6BE4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_000B6C14 = { vertex_000B6BB4, normal_000B6BE4, LengthOfArray(vertex_000B6BB4), meshlist_000B6B9C, matlist_000B6B6C, LengthOfArray(meshlist_000B6B9C), LengthOfArray(matlist_000B6B6C),{ 0, -2834.533f, 0 }, 2289.648f, NULL };

NJS_OBJECT object_000B6C3C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000B6C14, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//OYure


NJS_MATERIAL matlist_000C7404[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win008_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000C742C[] = {
	4, 1, 6, 0, 7,
	4, 2, 8, 1, 6,
	4, 0, 7, 2, 8,
	3, 2, 1, 0,
	4, 4, 8, 5, 7,
	4, 3, 6, 4, 8,
	4, 5, 7, 3, 6
};

Sint16 poly_000C7470[] = {
	3, 4, 5, 3
};

NJS_TEX uv_000C7478[] = {
	{ 0, 127 },
	{ 254, 127 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 127 },
	{ 254, 127 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 127 },
	{ 254, 127 },
	{ 0, 255 },
	{ 255, 255 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 74, 254 },
	{ 254, 254 },
	{ 134, 127 },
	{ 254, 127 },
	{ 74, 254 },
	{ 254, 254 },
	{ 134, 127 },
	{ 254, 127 },
	{ 74, 254 },
	{ 254, 254 },
	{ 134, 127 },
	{ 254, 127 }
};

NJS_TEX uv_000C74E4[] = {
	{ 253, 254 },
	{ 253, 1 },
	{ 0, 120 }
};

NJS_MESHSET_SADX meshlist_000C74F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_000C742C, NULL, NULL, NULL, uv_000C7478, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_000C7470, NULL, NULL, NULL, uv_000C74E4, NULL }
};

NJS_VECTOR vertex_000C7520[] = {
	{ -3.877361f, -3.121643f, 0.876692f },
	{ -1.953461f, -2.849663f, -3.75522f },
	{ -0.02956f, -0.034035f, -0.067286f },
	{ 22.14677f, -30.31618f, 4.64214f },
	{ 22.46398f, -25.66945f, 7.770254f },
	{ 15.40282f, -25.09487f, 7.594584f },
	{ 12.70918f, -19.25624f, 1.493129f },
	{ 9.982778f, -18.84157f, 5.915113f },
	{ 13.6289f, -15.29618f, 4.831176f }
};

NJS_VECTOR normal_000C758C[] = {
	{ -0.910175f, 0.082879f, 0.405848f },
	{ -0.357779f, 0.159253f, -0.920126f },
	{ 0.19178f, 0.972235f, 0.134084f },
	{ 0.494192f, -0.829267f, -0.260943f },
	{ 0.853057f, 0.09093899f, 0.513833f },
	{ -0.586002f, -0.48578f, 0.6485519f },
	{ 0.006329f, -0.28133f, -0.95959f },
	{ -0.661849f, -0.389543f, 0.640478f },
	{ 0.662581f, 0.675298f, 0.323973f }
};

NJS_MODEL_SADX attach_000C75F8 = { vertex_000C7520, normal_000C758C, LengthOfArray<Sint32>(vertex_000C7520), meshlist_000C74F0, matlist_000C7404, LengthOfArray<Uint16>(meshlist_000C74F0), LengthOfArray<Uint16>(matlist_000C7404),{ 9.293311f, -15.17511f, 2.007517f }, 15.763f, NULL };

NJS_OBJECT object_000C7620 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C75F8, -24.9f, -27.81f, 17.18f, 0x6F4, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_000C7654[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win008_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000C7690[] = {
	3, 46, 44, 42,
	3, 43, 45, 47,
	8, 1, 5, 2, 3, 0, 4, 1, 5,
	3, 0, 1, 2,
	4, 8, 9, 7, 11,
	6, 7, 11, 6, 10, 8, 9,
	3, 8, 7, 6,
	4, 12, 15, 14, 16,
	4, 14, 16, 13, 17,
	4, 13, 17, 12, 15,
	3, 14, 13, 12,
	4, 18, 21, 20, 22,
	4, 20, 22, 19, 23,
	4, 19, 23, 18, 21,
	3, 20, 19, 18,
	3, 25, 27, 29,
	3, 28, 26, 24,
	3, 31, 33, 35,
	3, 34, 32, 30,
	3, 37, 39, 41,
	3, 40, 38, 36
};

Sint16 poly_000C7756[] = {
	4, 43, 47, 42, 46,
	4, 45, 43, 44, 42,
	4, 47, 45, 46, 44,
	4, 29, 27, 28, 26,
	4, 27, 25, 26, 24,
	4, 25, 29, 24, 28,
	4, 35, 33, 34, 32,
	4, 33, 31, 32, 30,
	4, 31, 35, 30, 34,
	4, 41, 39, 40, 38,
	4, 39, 37, 38, 36,
	4, 37, 41, 36, 40
};

Sint16 poly_000C77CE[] = {
	3, 3, 5, 4,
	3, 10, 11, 9,
	3, 16, 15, 17,
	3, 22, 21, 23
};

NJS_TEX uv_000C77F0[] = {
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 126 },
	{ 255, 126 },
	{ 0 },
	{ 255, 0 },
	{ 0, 126 },
	{ 255, 126 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 0 },
	{ 141, 0 },
	{ 0, 126 },
	{ 188, 126 },
	{ 0, 126 },
	{ 207, 126 },
	{ 0 },
	{ 141, 0 },
	{ 0, 126 },
	{ 141, 126 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 0, 128 },
	{ 254, 128 },
	{ 0, 254 },
	{ 231, 255 },
	{ 0, 128 },
	{ 254, 128 },
	{ 0, 254 },
	{ 231, 255 },
	{ 0, 128 },
	{ 254, 128 },
	{ 0, 254 },
	{ 231, 255 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 126 },
	{ 255, 126 },
	{ 0 },
	{ 255, 0 },
	{ 0, 126 },
	{ 255, 126 },
	{ 0 },
	{ 255, 0 },
	{ 0, 126 },
	{ 255, 126 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 },
	{ 122, 131 },
	{ 218, 193 },
	{ 122, 254 }
};

NJS_TEX uv_000C7928[] = {
	{ 510, 0 },
	{ 510, 126 },
	{ 0 },
	{ 0, 126 },
	{ 510, 0 },
	{ 510, 126 },
	{ 0 },
	{ 0, 126 },
	{ 510, 0 },
	{ 510, 126 },
	{ 0 },
	{ 0, 126 },
	{ 510, 126 },
	{ 510, 254 },
	{ 0, 126 },
	{ 1, 255 },
	{ 510, 126 },
	{ 510, 254 },
	{ 0, 126 },
	{ 1, 255 },
	{ 510, 126 },
	{ 510, 254 },
	{ 0, 126 },
	{ 1, 255 },
	{ 510, 0 },
	{ 510, 126 },
	{ 0 },
	{ 0, 126 },
	{ 510, 0 },
	{ 510, 126 },
	{ 0 },
	{ 0, 126 },
	{ 510, 0 },
	{ 510, 126 },
	{ 0 },
	{ 0, 126 },
	{ 510, 126 },
	{ 510, 254 },
	{ 0, 126 },
	{ 1, 255 },
	{ 510, 126 },
	{ 510, 254 },
	{ 0, 126 },
	{ 1, 255 },
	{ 510, 126 },
	{ 510, 254 },
	{ 0, 126 },
	{ 1, 255 }
};

NJS_TEX uv_000C79E8[] = {
	{ 253, 254 },
	{ 253, 1 },
	{ 0, 120 },
	{ 253, 1 },
	{ 0, 120 },
	{ 253, 254 },
	{ 253, 254 },
	{ 253, 1 },
	{ 0, 120 },
	{ 253, 254 },
	{ 253, 1 },
	{ 0, 120 }
};

NJS_MESHSET_SADX meshlist_000C7A18[] = {
	{ NJD_MESHSET_TRIMESH | 0, 21, poly_000C7690, NULL, NULL, NULL, uv_000C77F0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_000C7756, NULL, NULL, NULL, uv_000C7928, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000C77CE, NULL, NULL, NULL, uv_000C79E8, NULL }
};

NJS_VECTOR vertex_000C7A60[] = {
	{ 21.87314f, -22.2607f, 14.76241f },
	{ 20.6174f, -21.45256f, 9.966576f },
	{ 19.36167f, -18.10077f, 13.49059f },
	{ 2.044263f, -27.66211f, 16.41379f },
	{ 5.155737f, -31.44202f, 17.6856f },
	{ 7.629353f, -28.62356f, 12.15897f },
	{ -24.98431f, -27.9026f, 17.29003f },
	{ -23.92291f, -27.84938f, 12.3808f },
	{ -22.86152f, -23.84644f, 15.22332f },
	{ -13.80006f, -27.61132f, 17.14162f },
	{ -15.92285f, -31.66748f, 19.20834f },
	{ -12.19926f, -32.64333f, 14.62981f },
	{ -22.84946f, -23.97412f, 15.27574f },
	{ -21.99049f, -22.98904f, 10.42582f },
	{ -21.13152f, -19.46033f, 13.89574f },
	{ -4.058973f, -30.51445f, 17.27533f },
	{ -4.041025f, -25.43068f, 15.89532f },
	{ -0.30384f, -30.94097f, 11.98869f },
	{ -21.12875f, -19.44436f, 13.90783f },
	{ -20.69263f, -18.35094f, 9.024776f },
	{ -20.25652f, -14.71388f, 12.46157f },
	{ -1.436112f, -22.76498f, 14.92304f },
	{ -1.463887f, -18.03449f, 13.47679f },
	{ 3.923158f, -22.50171f, 10.29379f },
	{ -20.43922f, -14.78085f, 12.5144f },
	{ 19.40143f, -18.11414f, 13.53349f },
	{ -20.22033f, -13.66007f, 7.622984f },
	{ 19.62032f, -16.99337f, 8.642076f },
	{ -20.00144f, -9.995659f, 11.05142f },
	{ 19.83921f, -13.32896f, 12.07051f },
	{ -20.07189f, -10.10474f, 11.03549f },
	{ 19.89658f, -11.21942f, 11.87546f },
	{ -19.98424f, -10.7181f, 6.050903f },
	{ 19.98424f, -11.83278f, 6.890872f },
	{ -19.89659f, -6.09568f, 8.014444f },
	{ 20.07188f, -7.210358f, 8.854416f },
	{ -19.99642f, -6.116514f, 8.131129f },
	{ 19.99641f, -6.116514f, 8.131128f },
	{ -19.99642f, -7.585083f, 3.327663f },
	{ 19.99641f, -7.585083f, 3.327662f },
	{ -19.99642f, -2.690871f, 4.45758f },
	{ 19.99641f, -2.690871f, 4.457578f },
	{ -19.99642f, -2.62829f, 4.388965f },
	{ 19.99641f, -2.62829f, 4.388963f },
	{ -19.99642f, -4.90866f, -0.086513f },
	{ 19.99641f, -4.90866f, -0.086514f },
	{ -19.99642f, 0.107402f, 0.176367f },
	{ 19.99641f, 0.107404f, 0.176365f }
};

NJS_VECTOR normal_000C7CA0[] = {
	{ 0.841291f, -0.211539f, 0.497475f },
	{ 0.479389f, 0.021192f, -0.877347f },
	{ 0.121975f, 0.983475f, 0.133785f },
	{ -0.966022f, 0.168938f, 0.195605f },
	{ -0.234179f, -0.809355f, 0.538613f },
	{ -0.152649f, -0.376193f, -0.91388f },
	{ -0.806412f, -0.185018f, 0.561666f },
	{ -0.506463f, -0.172378f, -0.844855f },
	{ -0.204651f, 0.978258f, -0.033606f },
	{ 0.6956069f, 0.690491f, 0.198376f },
	{ 0.041019f, -0.55633f, 0.8299479f },
	{ 0.708309f, -0.578155f, -0.405013f },
	{ -0.774928f, -0.337059f, 0.534676f },
	{ -0.521875f, -0.05809f, -0.851042f },
	{ -0.278695f, 0.950267f, 0.138998f },
	{ 0.247148f, -0.651545f, 0.717222f },
	{ 0.537685f, 0.79292f, 0.286659f },
	{ 0.702863f, -0.410092f, -0.581213f },
	{ -0.6714f, -0.464874f, 0.5771599f },
	{ -0.54453f, -0.151796f, -0.824891f },
	{ -0.420696f, 0.892903f, 0.160435f },
	{ 0.204307f, -0.639949f, 0.740759f },
	{ 0.393843f, 0.879508f, 0.26712f },
	{ 0.8761269f, -0.28205f, -0.390959f },
	{ -0.615392f, -0.518602f, 0.593587f },
	{ 0.489787f, -0.611067f, 0.621856f },
	{ -0.552589f, -0.197035f, -0.809829f },
	{ 0.552589f, -0.289501f, -0.781559f },
	{ -0.489787f, 0.854335f, 0.173838f },
	{ 0.615392f, 0.76187f, 0.202107f },
	{ -0.57951f, -0.309297f, 0.753992f },
	{ 0.529215f, -0.340218f, 0.777292f },
	{ -0.554362f, -0.48528f, -0.676155f },
	{ 0.554363f, -0.516201f, -0.652855f },
	{ -0.529214f, 0.840958f, -0.112788f },
	{ 0.57951f, 0.810037f, -0.08948699f },
	{ -0.5547f, -0.18717f, 0.810725f },
	{ 0.5547f, -0.18717f, 0.810725f },
	{ -0.5547f, -0.608523f, -0.567457f },
	{ 0.5547f, -0.608523f, -0.567457f },
	{ -0.5547f, 0.795694f, -0.243268f },
	{ 0.5547f, 0.795694f, -0.243268f },
	{ -0.5547f, -0.043546f, 0.83091f },
	{ 0.5547f, -0.043546f, 0.83091f },
	{ -0.5547f, -0.697816f, -0.453167f },
	{ 0.5547f, -0.697816f, -0.453167f },
	{ -0.5547f, 0.741362f, -0.377743f },
	{ 0.5547f, 0.741362f, -0.377743f }
};

NJS_MODEL_SADX attach_000C7EE0 = { vertex_000C7A60, normal_000C7CA0, LengthOfArray<Sint32>(vertex_000C7A60), meshlist_000C7A18, matlist_000C7654, LengthOfArray<Uint16>(meshlist_000C7A18), LengthOfArray<Uint16>(matlist_000C7654),{ -1.555584f, -16.26796f, 9.560911f }, 25.32433f, NULL };

NJS_OBJECT object_000C7F08 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_000C7EE0, 0, 0, 0, 0x1A, 0, 0, 1, 1, 1, &object_000C7620, NULL };

//OHaneA


NJS_MATERIAL matlist_000CCDFC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000CCE60[] = {
	6, 14, 11, 16, 13, 15, 10,
	6, 31, 28, 33, 30, 32, 27,
	6, 44, 49, 47, 50, 45, 48,
	6, 61, 66, 64, 67, 62, 65
};

Sint16 poly_000CCE98[] = {
	4, 3, 1, 2, 0,
	4, 5, 7, 4, 6,
	4, 20, 18, 19, 17,
	4, 22, 24, 21, 23,
	4, 37, 35, 36, 34,
	4, 39, 41, 38, 40,
	4, 54, 52, 53, 51,
	4, 56, 58, 55, 57
};

Sint16 poly_000CCEE8[] = {
	6, 9, 14, 12, 16, 8, 15,
	6, 32, 25, 33, 29, 31, 26,
	6, 43, 48, 46, 50, 42, 49,
	6, 60, 65, 63, 67, 59, 66
};

Sint16 poly_000CCF20[] = {
	8, 71, 70, 69, 68, 73, 72, 75, 74,
	4, 75, 74, 71, 70
};

Sint16 poly_000CCF3C[] = {
	4, 75, 71, 73, 69,
	4, 70, 74, 68, 72
};

NJS_TEX uv_000CCF50[] = {
	{ 510, -510 },
	{ 509, 255 },
	{ 255, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 510, -510 },
	{ 509, 255 },
	{ 255, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 509, 255 },
	{ 510, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 509, 255 },
	{ 510, -510 }
};

NJS_TEX uv_000CCFB0[] = {
	{ 0 },
	{ 38, 0 },
	{ 0, 159 },
	{ 38, 159 },
	{ 38, 159 },
	{ 0, 159 },
	{ 38, 0 },
	{ 0 },
	{ 0 },
	{ 38, 0 },
	{ 0, 159 },
	{ 38, 159 },
	{ 38, 159 },
	{ 0, 159 },
	{ 38, 0 },
	{ 0 },
	{ 0 },
	{ 38, 0 },
	{ 0, 159 },
	{ 38, 159 },
	{ 0 },
	{ 38, 0 },
	{ 0, 159 },
	{ 38, 159 },
	{ 0 },
	{ 38, 0 },
	{ 0, 159 },
	{ 38, 159 },
	{ 38, 159 },
	{ 0, 159 },
	{ 38, 0 },
	{ 0 }
};

NJS_TEX uv_000CD030[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 255 },
	{ 510, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_000CD090[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 255, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 764, 255 },
	{ 764, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 255, -255 }
};

NJS_TEX uv_000CD0C0[] = {
	{ 0, 255 },
	{ 0, 1 },
	{ 253, 255 },
	{ 253, 1 },
	{ 0, 255 },
	{ 0, 1 },
	{ 253, 255 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlist_000CD0E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000CCE60, NULL, NULL, NULL, uv_000CCF50, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_000CCE98, NULL, NULL, NULL, uv_000CCFB0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_000CCEE8, NULL, NULL, NULL, uv_000CD030, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000CCF20, NULL, NULL, NULL, uv_000CD090, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_000CCF3C, NULL, NULL, NULL, uv_000CD0C0, NULL }
};

NJS_VECTOR vertex_000CD158[] = {
	{ 0.968577f, 2.663996f, -4.332162f },
	{ 0.9094869f, 5.758996f, -4.340497f },
	{ 0.808936f, 2.663996f, -4.848541f },
	{ 0.749846f, 5.758996f, -4.856877f },
	{ -1.004064f, 2.663996f, 4.321771f },
	{ -1.063154f, 5.758996f, 4.313436f },
	{ -1.314092f, 2.663996f, 4.783686f },
	{ -1.373182f, 5.758996f, 4.775351f },
	{ 0.930412f, 35.72025f, -5.633602f },
	{ -1.197391f, 35.72025f, 5.633602f },
	{ 0.93093f, 5.759004f, -4.849194f },
	{ -1.206678f, 5.759003f, 4.849194f },
	{ 1.067909f, 35.72025f, 0.175037f },
	{ 0.9454139f, 5.759004f, 0.15281f },
	{ -1.29566f, 31.57822f, 6.153965f },
	{ 1.028682f, 31.57822f, -6.153965f },
	{ 1.201395f, 31.57822f, 0.194486f },
	{ 2.663989f, -0.968573f, -4.332162f },
	{ 5.75899f, -0.909484f, -4.340497f },
	{ 2.663989f, -0.80893f, -4.848541f },
	{ 5.75899f, -0.749841f, -4.856877f },
	{ 2.663989f, 1.00407f, 4.321771f },
	{ 5.75899f, 1.063159f, 4.313436f },
	{ 2.663989f, 1.314097f, 4.783686f },
	{ 5.75899f, 1.373186f, 4.775351f },
	{ 35.31897f, -0.940975f, -5.633602f },
	{ 35.31897f, 1.211004f, 5.633602f },
	{ 5.758997f, -0.930925f, -4.849194f },
	{ 5.758997f, 1.206684f, 4.849194f },
	{ 35.31897f, -1.080033f, 0.175037f },
	{ 5.758997f, -0.945409f, 0.15281f },
	{ 31.22347f, 1.31039f, 6.153965f },
	{ 31.22347f, -1.040362f, -6.153965f },
	{ 31.22347f, -1.215039f, 0.194486f },
	{ -0.9685799f, -2.663984f, -4.332162f },
	{ -0.90949f, -5.758984f, -4.340497f },
	{ -0.808938f, -2.663984f, -4.848541f },
	{ -0.749849f, -5.758984f, -4.856877f },
	{ 1.004061f, -2.663984f, 4.321771f },
	{ 1.063151f, -5.758984f, 4.313436f },
	{ 1.314089f, -2.663984f, 4.783686f },
	{ 1.373179f, -5.758984f, 4.775351f },
	{ -0.930414f, -35.72023f, -5.633602f },
	{ 1.197392f, -35.72023f, 5.633602f },
	{ -0.930932f, -5.758991f, -4.849194f },
	{ 1.206675f, -5.758991f, 4.849194f },
	{ -1.067908f, -35.72023f, 0.175037f },
	{ -0.945417f, -5.758991f, 0.15281f },
	{ 1.295662f, -31.57821f, 6.153965f },
	{ -1.028684f, -31.57821f, -6.153965f },
	{ -1.201398f, -31.57821f, 0.194486f },
	{ -2.663991f, 0.968585f, -4.332162f },
	{ -5.758993f, 0.9094959f, -4.340497f },
	{ -2.663991f, 0.808942f, -4.848541f },
	{ -5.758993f, 0.749853f, -4.856877f },
	{ -2.663991f, -1.004058f, 4.321771f },
	{ -5.758993f, -1.063147f, 4.313436f },
	{ -2.663991f, -1.314084f, 4.783686f },
	{ -5.758993f, -1.373174f, 4.775351f },
	{ -35.31897f, 0.940989f, -5.633602f },
	{ -35.31897f, -1.210989f, 5.633602f },
	{ -5.759f, 0.930937f, -4.849194f },
	{ -5.759f, -1.206672f, 4.849194f },
	{ -35.31897f, 1.080048f, 0.175037f },
	{ -5.759f, 0.945421f, 0.15281f },
	{ -31.22348f, -1.310375f, 6.153965f },
	{ -31.22348f, 1.040376f, -6.153965f },
	{ -31.22348f, 1.215054f, 0.194486f },
	{ -4.06718f, 0.000005f, -5.180551f },
	{ -4.06718f, 0.000005f, 5.219449f },
	{ 0.005756f, 4.072939f, -5.180551f },
	{ 0.005756f, 4.072939f, 5.219449f },
	{ 0.005756f, -4.072928f, -5.180551f },
	{ 0.005756f, -4.072928f, 5.219449f },
	{ 4.078688f, 0.000005f, -5.180551f },
	{ 4.078688f, 0.000005f, 5.219449f }
};

NJS_VECTOR normal_000CD4E8[] = {
	{ 0.95524f, 0.017442f, -0.295317f },
	{ 0.95524f, 0.017442f, -0.295317f },
	{ 0.95524f, 0.017442f, -0.295317f },
	{ 0.95524f, 0.017442f, -0.295317f },
	{ 0.830192f, 0.017351f, 0.5572079f },
	{ 0.830192f, 0.017351f, 0.5572079f },
	{ 0.830192f, 0.017351f, 0.5572079f },
	{ 0.830192f, 0.017351f, 0.5572079f },
	{ 0.999288f, 0.029387f, -0.023654f },
	{ 0.923237f, 0.028891f, 0.383143f },
	{ 0.999972f, -0.006921f, -0.002896f },
	{ 0.909009f, -0.013801f, 0.416548f },
	{ 0.982496f, 0.029783f, 0.183889f },
	{ 0.977249f, -0.010609f, 0.211831f },
	{ 0.916299f, 0.006998f, 0.400433f },
	{ 0.9998569f, 0.010783f, -0.013019f },
	{ 0.980214f, 0.009578f, 0.19771f },
	{ 0.017442f, -0.955239f, -0.29532f },
	{ 0.017442f, -0.955239f, -0.29532f },
	{ 0.017442f, -0.955239f, -0.29532f },
	{ 0.017442f, -0.955239f, -0.29532f },
	{ 0.017351f, -0.830193f, 0.557206f },
	{ 0.017351f, -0.830193f, 0.557206f },
	{ 0.017351f, -0.830193f, 0.557206f },
	{ 0.017351f, -0.830193f, 0.557206f },
	{ 0.030058f, -0.999262f, -0.023922f },
	{ 0.029502f, -0.921675f, 0.38684f },
	{ -0.007515f, -0.999968f, -0.002896f },
	{ -0.013974f, -0.909006f, 0.416548f },
	{ 0.030452f, -0.982126f, 0.185746f },
	{ -0.011002f, -0.977241f, 0.211846f },
	{ 0.007202f, -0.915512f, 0.402227f },
	{ 0.010802f, -0.999855f, -0.013148f },
	{ 0.009710999f, -0.9800299f, 0.198612f },
	{ -0.95524f, -0.017442f, -0.295317f },
	{ -0.95524f, -0.017442f, -0.295317f },
	{ -0.95524f, -0.017442f, -0.295317f },
	{ -0.95524f, -0.017442f, -0.295317f },
	{ -0.830192f, -0.017351f, 0.5572079f },
	{ -0.830192f, -0.017351f, 0.5572079f },
	{ -0.830192f, -0.017351f, 0.5572079f },
	{ -0.830192f, -0.017351f, 0.5572079f },
	{ -0.999288f, -0.029387f, -0.023654f },
	{ -0.923237f, -0.028892f, 0.383143f },
	{ -0.999972f, 0.006921f, -0.002896f },
	{ -0.909009f, 0.013801f, 0.416548f },
	{ -0.982496f, -0.029784f, 0.183889f },
	{ -0.977249f, 0.010609f, 0.211831f },
	{ -0.916299f, -0.006999f, 0.400433f },
	{ -0.9998569f, -0.010783f, -0.013019f },
	{ -0.980214f, -0.009578f, 0.19771f },
	{ -0.017442f, 0.955239f, -0.29532f },
	{ -0.017442f, 0.955239f, -0.29532f },
	{ -0.017442f, 0.955239f, -0.29532f },
	{ -0.017442f, 0.955239f, -0.29532f },
	{ -0.017351f, 0.830193f, 0.557206f },
	{ -0.017351f, 0.830193f, 0.557206f },
	{ -0.017351f, 0.830193f, 0.557206f },
	{ -0.017351f, 0.830193f, 0.557206f },
	{ -0.030058f, 0.999262f, -0.023922f },
	{ -0.029502f, 0.921675f, 0.38684f },
	{ 0.007515f, 0.999968f, -0.002896f },
	{ 0.013974f, 0.909006f, 0.416548f },
	{ -0.030452f, 0.982126f, 0.185746f },
	{ 0.011002f, 0.977241f, 0.211846f },
	{ -0.007202f, 0.915512f, 0.402227f },
	{ -0.010802f, 0.999855f, -0.013148f },
	{ -0.00971f, 0.9800299f, 0.198612f },
	{ -0.816497f, 0, -0.57735f },
	{ -0.816497f, 0, 0.57735f },
	{ 0, 0.816497f, -0.57735f },
	{ 0, 0.816497f, 0.57735f },
	{ 0, -0.816497f, -0.57735f },
	{ 0, -0.816497f, 0.57735f },
	{ 0.816497f, 0, -0.57735f },
	{ 0.816497f, 0, 0.57735f }
};

NJS_MODEL_SADX attach_000CD878 = { vertex_000CD158, normal_000CD4E8, LengthOfArray<Sint32>(vertex_000CD158), meshlist_000CD0E0, matlist_000CCDFC, LengthOfArray<Uint16>(meshlist_000CD0E0), LengthOfArray<Uint16>(matlist_000CCDFC),{ 0, 0.000008f, 0 }, 36.24647f, NULL };

NJS_OBJECT object_000CD8A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000CD878, 45.5f, 4.6f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_000CD8D4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000CD924[] = {
	4, 1, 0, 3, 2,
	4, 5, 1, 7, 3,
	4, 4, 5, 6, 7,
	4, 0, 4, 2, 6,
	4, 11, 10, 9, 8,
	4, 15, 11, 13, 9,
	4, 14, 15, 12, 13,
	4, 10, 14, 8, 12
};

Sint16 poly_000CD974[] = {
	4, 16, 18, 17, 19,
	4, 20, 22, 21, 23,
	4, 24, 26, 25, 27,
	4, 28, 30, 29, 31,
	4, 33, 35, 32, 34,
	4, 37, 39, 36, 38,
	4, 41, 43, 40, 42,
	4, 45, 47, 44, 46
};

Sint16 poly_000CD9C4[] = {
	4, 62, 60, 63, 61,
	4, 60, 64, 61, 65,
	4, 55, 59, 54, 58,
	4, 57, 55, 56, 54,
	0x8000u | 6, 53, 52, 49, 48, 51, 50,
	0x8000u | 6, 69, 68, 67, 66, 71, 70
};

Sint16 poly_000CDA08[] = {
	3, 70, 68, 66,
	3, 50, 52, 48,
	3, 58, 56, 54,
	3, 60, 62, 64
};

NJS_TEX uv_000CDA28[] = {
	{ 38, 255 },
	{ 0, 256 },
	{ 38, 1 },
	{ 0, 1 },
	{ 255, 174 },
	{ 0, 255 },
	{ 255, 19 },
	{ 0, 19 },
	{ 253, 255 },
	{ 140, 256 },
	{ 253, 2 },
	{ 140, 1 },
	{ 0, 255 },
	{ 255, 174 },
	{ 0, 19 },
	{ 255, 19 },
	{ 38, 255 },
	{ 0, 256 },
	{ 38, 1 },
	{ 0, 1 },
	{ 255, 19 },
	{ 0, 19 },
	{ 255, 174 },
	{ 0, 255 },
	{ 253, 255 },
	{ 140, 256 },
	{ 253, 2 },
	{ 140, 1 },
	{ 0, 19 },
	{ 255, 19 },
	{ 0, 255 },
	{ 255, 174 }
};

NJS_TEX uv_000CDAA8[] = {
	{ 1020, 0 },
	{ 1019, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1020, 0 },
	{ 1020, 0 },
	{ 1019, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1020, 0 },
	{ 1020, 0 },
	{ 1019, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1020, 0 },
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1019, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1019, 255 },
	{ 1020, 0 }
};

NJS_TEX uv_000CDB28[] = {
	{ 0, -254 },
	{ 0 },
	{ 1530, -255 },
	{ 1530, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 0, -254 },
	{ 0 },
	{ 1530, -255 },
	{ 1530, 0 },
	{ 1530, -255 },
	{ 0, -254 },
	{ 1530, 0 },
	{ 0 },
	{ 1530, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 1530, 255 },
	{ 0 },
	{ 1530, 0 },
	{ 0, -254 },
	{ 1530, -255 }
};

NJS_TEX uv_000CDB98[] = {
	{ 20, 216 },
	{ 231, 216 },
	{ 126, 33 },
	{ 20, 216 },
	{ 231, 216 },
	{ 126, 33 },
	{ 20, 216 },
	{ 231, 216 },
	{ 126, 33 },
	{ 126, 33 },
	{ 20, 216 },
	{ 231, 216 }
};

NJS_MESHSET_SADX meshlist_000CDBC8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_000CD924, NULL, NULL, NULL, uv_000CDA28, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_000CD974, NULL, NULL, NULL, uv_000CDAA8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_000CD9C4, NULL, NULL, NULL, uv_000CDB28, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_000CDA08, NULL, NULL, NULL, uv_000CDB98, NULL }
};

NJS_VECTOR vertex_000CDC28[] = {
	{ 42.57499f, 1.775002f, -5.969996f },
	{ 42.57499f, 1.775002f, -8.269999f },
	{ 42.57499f, 7.075003f, -5.969996f },
	{ 42.57499f, 7.075003f, -8.269999f },
	{ 48.57499f, 3.175002f, -5.609997f },
	{ 48.57499f, 3.175002f, -7.909999f },
	{ 48.57499f, 7.075003f, -5.609997f },
	{ 48.57499f, 7.075003f, -7.909999f },
	{ 42.57499f, 1.775002f, 6.059997f },
	{ 42.57499f, 1.775002f, 8.359998f },
	{ 42.57499f, 7.075003f, 6.059997f },
	{ 42.57499f, 7.075003f, 8.359998f },
	{ 48.57499f, 3.175002f, 5.599998f },
	{ 48.57499f, 3.175002f, 7.999998f },
	{ 48.57499f, 7.075003f, 5.599998f },
	{ 48.57499f, 7.075003f, 7.999998f },
	{ 42.985f, 1.055004f, -7.432445f },
	{ 38.37801f, 8.155005f, -8.028896f },
	{ 40.42398f, 0.535004f, -6.678492f },
	{ 35.44201f, 8.155005f, -7.34672f },
	{ 31.613f, -1.684995f, -7.657196f },
	{ 35.37201f, 8.155005f, -7.328897f },
	{ 28.803f, -2.404995f, -8.712014f },
	{ 32.89201f, 8.155005f, -8.286719f },
	{ 28.793f, -2.434995f, -8.617198f },
	{ 21.866f, 8.105003f, -9.299997f },
	{ 26.152f, -2.984995f, -7.752013f },
	{ 18.824f, 8.105003f, -8.592429f },
	{ 11.631f, -6.464997f, -9.219995f },
	{ 18.874f, 8.105003f, -8.427997f },
	{ 8.607008f, -7.084997f, -10.43243f },
	{ 16.22f, 8.105003f, -9.458567f },
	{ 42.985f, 1.055004f, 7.432445f },
	{ 38.37801f, 8.155005f, 8.028896f },
	{ 40.42398f, 0.535004f, 6.818491f },
	{ 35.44201f, 8.155005f, 7.486719f },
	{ 31.613f, -1.684995f, 7.657196f },
	{ 35.37201f, 8.155005f, 7.328897f },
	{ 28.803f, -2.404995f, 8.712014f },
	{ 32.89201f, 8.155005f, 8.286719f },
	{ 28.793f, -2.434995f, 8.747196f },
	{ 21.866f, 8.105003f, 9.429996f },
	{ 26.152f, -2.984995f, 7.752013f },
	{ 18.824f, 8.105003f, 8.592429f },
	{ 11.631f, -6.464997f, 9.079995f },
	{ 18.874f, 8.105003f, 8.427997f },
	{ 8.607008f, -7.084997f, 10.29243f },
	{ 16.22f, 8.105003f, 9.458567f },
	{ 47.35734f, 0.804994f, 6.76f },
	{ 0.040653f, -11.175f, 10.03f },
	{ 48.59734f, 3.204994f, 5.37436f },
	{ 0.040653f, -8.475002f, 8.644359f },
	{ 48.59734f, 3.204994f, 8.14564f },
	{ 0.040653f, -8.475004f, 11.41564f },
	{ 47.35734f, 0.804996f, -6.76f },
	{ 0.040653f, -11.175f, -10.03f },
	{ 48.59734f, 3.204996f, -5.37436f },
	{ 0.040653f, -8.475f, -8.644359f },
	{ 48.59734f, 3.204996f, -8.14564f },
	{ 0.040653f, -8.475f, -11.41564f },
	{ 47.09969f, 9.275002f, -6.76f },
	{ 0.039f, 9.975001f, -10.03f },
	{ 48.58969f, 7.075003f, -5.37436f },
	{ 0.039f, 7.075002f, -8.644359f },
	{ 48.58969f, 7.075003f, -8.14564f },
	{ 0.039f, 7.075003f, -11.41564f },
	{ 47.09969f, 9.275002f, 6.76f },
	{ 0.039f, 9.975001f, 10.03f },
	{ 48.58969f, 7.075003f, 5.37436f },
	{ 0.039f, 7.075002f, 8.644359f },
	{ 48.58969f, 7.075003f, 8.14564f },
	{ 0.039f, 7.075003f, 11.41564f }
};

NJS_VECTOR normal_000CDF88[] = {
	{ -0.776579f, 0, 0.6300189f },
	{ -0.7437479f, 0, -0.668461f },
	{ -0.727974f, 0, 0.685605f },
	{ -0.685605f, 0, -0.727974f },
	{ 0.631486f, 0, 0.775387f },
	{ 0.68274f, 0, -0.730662f },
	{ 0.685605f, 0, 0.727974f },
	{ 0.727974f, 0, -0.685605f },
	{ -0.780967f, 0, -0.624572f },
	{ -0.7437479f, 0, 0.668461f },
	{ -0.7336349f, 0, -0.679543f },
	{ -0.685605f, 0, 0.727974f },
	{ 0.6241519f, 0, -0.781303f },
	{ 0.68274f, 0, 0.730662f },
	{ 0.679543f, 0, -0.733636f },
	{ 0.727974f, 0, 0.685605f },
	{ -0.226118f, -0.226314f, -0.947445f },
	{ -0.226118f, -0.226314f, -0.947445f },
	{ -0.226118f, -0.226314f, -0.947445f },
	{ -0.226118f, -0.226314f, -0.947445f },
	{ 0.366413f, -0.109146f, -0.924029f },
	{ 0.366413f, -0.109146f, -0.924029f },
	{ 0.366413f, -0.109146f, -0.924029f },
	{ 0.366413f, -0.109146f, -0.924029f },
	{ -0.240459f, -0.219288f, -0.945565f },
	{ -0.240459f, -0.219288f, -0.945565f },
	{ -0.240459f, -0.219288f, -0.945564f },
	{ -0.240459f, -0.219288f, -0.945564f },
	{ 0.37687f, -0.137557f, -0.9159949f },
	{ 0.37687f, -0.137557f, -0.9159949f },
	{ 0.37687f, -0.137557f, -0.9159949f },
	{ 0.37687f, -0.137557f, -0.9159949f },
	{ -0.183514f, -0.199932f, 0.9624709f },
	{ -0.183514f, -0.199932f, 0.9624709f },
	{ -0.183514f, -0.199932f, 0.9624709f },
	{ -0.183514f, -0.199932f, 0.9624709f },
	{ 0.366413f, -0.109146f, 0.924029f },
	{ 0.366413f, -0.109146f, 0.924029f },
	{ 0.366413f, -0.109146f, 0.924029f },
	{ 0.366413f, -0.109146f, 0.924029f },
	{ -0.276518f, -0.24198f, 0.9300449f },
	{ -0.276518f, -0.24198f, 0.9300449f },
	{ -0.276518f, -0.24198f, 0.9300449f },
	{ -0.276518f, -0.24198f, 0.9300449f },
	{ 0.377243f, -0.146614f, 0.914435f },
	{ 0.377243f, -0.146614f, 0.914435f },
	{ 0.377243f, -0.146614f, 0.914435f },
	{ 0.377243f, -0.146614f, 0.914435f },
	{ 0.464929f, -0.884338f, -0.042277f },
	{ 0.242048f, -0.97019f, 0.012031f },
	{ 0.638586f, -0.589579f, -0.494575f },
	{ 0.058625f, -0.487598f, -0.871097f },
	{ 0.664539f, -0.57432f, 0.478063f },
	{ 0.185821f, -0.503635f, 0.843696f },
	{ 0.464929f, -0.884338f, 0.042277f },
	{ 0.242048f, -0.97019f, -0.012031f },
	{ 0.638586f, -0.589579f, 0.494575f },
	{ 0.058625f, -0.487598f, 0.871097f },
	{ 0.664539f, -0.57432f, -0.478063f },
	{ 0.185821f, -0.503635f, -0.843696f },
	{ 0.302433f, 0.952451f, 0.037037f },
	{ 0.011012f, 0.99977f, -0.018379f },
	{ 0.513869f, 0.660023f, 0.548004f },
	{ -0.059559f, 0.463115f, 0.884295f },
	{ 0.549432f, 0.644871f, -0.531288f },
	{ 0.06764f, 0.491544f, -0.868222f },
	{ 0.302433f, 0.952451f, -0.037037f },
	{ 0.011012f, 0.99977f, 0.018379f },
	{ 0.513869f, 0.660023f, -0.548004f },
	{ -0.059559f, 0.463115f, -0.884295f },
	{ 0.549432f, 0.644871f, 0.531288f },
	{ 0.06764f, 0.491544f, 0.868222f }
};

NJS_MODEL_SADX attach_000CE2E8 = { vertex_000CDC28, normal_000CDF88, LengthOfArray<Sint32>(vertex_000CDC28), meshlist_000CDBC8, matlist_000CD8D4, LengthOfArray<Uint16>(meshlist_000CDBC8), LengthOfArray<Uint16>(matlist_000CD8D4),{ 24.31817f, -0.600001f, 0 }, 26.829f, NULL };

NJS_OBJECT object_000CE310 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_000CE2E8, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_000CD8A0, NULL };

//BridgeC


NJS_MATERIAL matlist_000BE324[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win004_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win002_16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000BE388[] = {
	3, 5, 1, 2,
	7, 1, 3, 2, 0, 4, 1, 5,
	3, 3, 1, 0,
	3, 11, 7, 8,
	7, 7, 9, 8, 6, 10, 7, 11,
	3, 9, 7, 6,
	4, 12, 13, 16, 17,
	3, 15, 13, 12,
	3, 16, 14, 12,
	0x8000u | 5, 12, 15, 14, 13, 17,
	4, 40, 41, 36, 37,
	3, 36, 37, 39,
	3, 36, 39, 40,
	0x8000u | 5, 40, 38, 39, 41, 37,
	4, 46, 47, 42, 43,
	3, 42, 43, 45,
	3, 42, 45, 46,
	0x8000u | 5, 46, 44, 45, 47, 43,
	7, 53, 50, 51, 52, 48, 53, 49,
	3, 51, 49, 53,
	3, 48, 49, 51
};

Sint16 poly_000BE45A[] = {
	0x8000u | 6, 23, 20, 26, 24, 22, 21,
	0x8000u | 6, 18, 21, 25, 24, 19, 20,
	0x8000u | 6, 29, 28, 33, 34, 30, 27,
	0x8000u | 6, 32, 29, 35, 33, 31, 30,
	0x8000u | 6, 56, 59, 60, 62, 57, 58,
	0x8000u | 6, 57, 54, 60, 61, 56, 55,
	0x8000u | 6, 64, 65, 70, 69, 63, 66,
	0x8000u | 6, 65, 68, 69, 71, 66, 67
};

Sint16 poly_000BE4CA[] = {
	4, 75, 74, 73, 72,
	4, 78, 79, 76, 77
};

Sint16 poly_000BE4DE[] = {
	4, 79, 75, 77, 73,
	4, 74, 78, 72, 76
};

Sint16 poly_000BE4F2[] = {
	4, 79, 78, 75, 74
};

NJS_TEX uv_000BE4FC[] = {
	{ 127, 255 },
	{ 128, 2 },
	{ 0, 255 },
	{ 128, 2 },
	{ 0 },
	{ 0, 255 },
	{ 128, 2 },
	{ 127, 255 },
	{ 254, 1 },
	{ 254, 255 },
	{ 123, 154 },
	{ 177, 255 },
	{ 69, 254 },
	{ 127, 255 },
	{ 128, 2 },
	{ 0, 255 },
	{ 128, 2 },
	{ 0 },
	{ 0, 255 },
	{ 128, 2 },
	{ 127, 255 },
	{ 254, 1 },
	{ 254, 255 },
	{ 123, 154 },
	{ 177, 255 },
	{ 69, 254 },
	{ 0 },
	{ 128, 2 },
	{ 0, 255 },
	{ 127, 255 },
	{ 123, 154 },
	{ 177, 255 },
	{ 69, 254 },
	{ 254, 255 },
	{ 127, 255 },
	{ 254, 1 },
	{ 254, 1 },
	{ 128, 2 },
	{ 127, 255 },
	{ 254, 1 },
	{ 254, 255 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 128, 2 },
	{ 177, 255 },
	{ 69, 254 },
	{ 123, 154 },
	{ 254, 1 },
	{ 128, 2 },
	{ 254, 255 },
	{ 254, 255 },
	{ 127, 255 },
	{ 128, 2 },
	{ 254, 255 },
	{ 254, 1 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 128, 2 },
	{ 177, 255 },
	{ 69, 254 },
	{ 123, 154 },
	{ 254, 1 },
	{ 128, 2 },
	{ 254, 255 },
	{ 254, 255 },
	{ 127, 255 },
	{ 128, 2 },
	{ 254, 255 },
	{ 254, 1 },
	{ 127, 255 },
	{ 0, 255 },
	{ 0 },
	{ 127, 255 },
	{ 128, 2 },
	{ 254, 255 },
	{ 254, 1 },
	{ 0 },
	{ 128, 2 },
	{ 127, 255 },
	{ 177, 255 },
	{ 69, 254 },
	{ 123, 154 }
};

NJS_TEX uv_000BE64C[] = {
	{ 2549, 255 },
	{ 2549, 0 },
	{ 1277, 255 },
	{ 1277, 0 },
	{ 0, 255 },
	{ 0 },
	{ 2549, 0 },
	{ 2549, 255 },
	{ 1277, 0 },
	{ 1277, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1277, 255 },
	{ 1277, 0 },
	{ 2549, 255 },
	{ 2549, 0 },
	{ 2549, 255 },
	{ 2549, 0 },
	{ 1277, 255 },
	{ 1277, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 1277, 255 },
	{ 1277, 0 },
	{ 2549, 255 },
	{ 2549, 0 },
	{ 0 },
	{ 0, 255 },
	{ 1277, 0 },
	{ 1277, 255 },
	{ 2549, 0 },
	{ 2549, 255 },
	{ 2549, 255 },
	{ 2549, 0 },
	{ 1277, 255 },
	{ 1277, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 1277, 255 },
	{ 1277, 0 },
	{ 2549, 255 },
	{ 2549, 0 }
};

NJS_TEX uv_000BE70C[] = {
	{ 27, 255 },
	{ 27, -765 },
	{ 0, 255 },
	{ 0, -765 },
	{ 27, -765 },
	{ 27, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

NJS_TEX uv_000BE72C[] = {
	{ 510, 173 },
	{ 0, 173 },
	{ 510, 207 },
	{ 0, 207 },
	{ 0, 173 },
	{ 510, 173 },
	{ 0, 207 },
	{ 510, 207 }
};

NJS_TEX uv_000BE74C[] = {
	{ 510, -765 },
	{ 510, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_000BE75C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 21, poly_000BE388, NULL, NULL, NULL, uv_000BE4FC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_000BE45A, NULL, NULL, NULL, uv_000BE64C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000BE4CA, NULL, NULL, NULL, uv_000BE70C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000BE4DE, NULL, NULL, NULL, uv_000BE72C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_000BE4F2, NULL, NULL, NULL, uv_000BE74C, NULL }
};

NJS_VECTOR vertex_000BE7D4[] = {
	{ 18.9f, 12.35f, 18.75f },
	{ 18.9f, 12.35f, 21.51f },
	{ 16.89479f, 1.35f, 20.13f },
	{ 16.73f, 12.35f, 20.13f },
	{ 18.57f, 1.35f, 19.03f },
	{ 18.57f, 1.35f, 21.18f },
	{ 18.9f, 12.35f, -21.51f },
	{ 18.9f, 12.35f, -18.75f },
	{ 16.89479f, 1.35f, -20.13f },
	{ 16.73f, 12.35f, -20.13f },
	{ 18.57f, 1.35f, -21.23f },
	{ 18.57f, 1.35f, -19.08f },
	{ 18.82f, 12.65f, -1.380003f },
	{ 18.82f, 12.65f, 1.379997f },
	{ 16.89479f, 1.35f, -0.00003f },
	{ 16.65f, 12.65f, -0.00003f },
	{ 18.57f, 1.35f, -1.100003f },
	{ 18.57f, 1.35f, 1.099997f },
	{ 17.26748f, 9.025f, -19.99249f },
	{ 17.26748f, 9.025f, -0.007497f },
	{ 17.69999f, 9.775f, -0.007497f },
	{ 17.69999f, 9.775f, -19.99249f },
	{ 18.18249f, 9.025f, -19.99249f },
	{ 18.18249f, 9.025f, -0.007497f },
	{ 17.69999f, 9.027499f, -10.01928f },
	{ 17.26748f, 8.2775f, -10.01928f },
	{ 18.18249f, 8.2775f, -10.01928f },
	{ 17.26749f, 9.025f, -0.002494f },
	{ 17.26749f, 9.025f, 19.98251f },
	{ 17.69999f, 9.775f, 19.98251f },
	{ 17.69999f, 9.775f, -0.002494f },
	{ 18.18249f, 9.025f, -0.002494f },
	{ 18.18249f, 9.025f, 19.98251f },
	{ 17.69999f, 9.177501f, 10.01801f },
	{ 17.26749f, 8.427501f, 10.01801f },
	{ 18.18249f, 8.427501f, 10.01801f },
	{ -18.9f, 12.35f, 18.75f },
	{ -18.9f, 12.35f, 21.51f },
	{ -16.89479f, 1.35f, 20.13f },
	{ -16.67999f, 12.35f, 20.13f },
	{ -18.61999f, 1.35f, 19.03f },
	{ -18.61999f, 1.35f, 21.18f },
	{ -18.9f, 12.35f, -21.51f },
	{ -18.9f, 12.35f, -18.75f },
	{ -16.89479f, 1.35f, -20.13f },
	{ -16.67999f, 12.35f, -20.13f },
	{ -18.61999f, 1.35f, -21.23f },
	{ -18.62f, 1.35f, -19.08f },
	{ -18.82f, 12.65f, -1.380003f },
	{ -18.82f, 12.65f, 1.379997f },
	{ -16.89479f, 1.35f, -0.00003f },
	{ -16.6f, 12.65f, -0.00003f },
	{ -18.61999f, 1.35f, -1.100003f },
	{ -18.62f, 1.35f, 1.099997f },
	{ -17.21748f, 9.025f, -19.99249f },
	{ -17.21749f, 9.025f, -0.007497f },
	{ -17.69999f, 9.775f, -0.007497f },
	{ -17.69999f, 9.775f, -19.99249f },
	{ -18.13249f, 9.025f, -19.99249f },
	{ -18.13249f, 9.025f, -0.007497f },
	{ -17.69999f, 9.027499f, -10.01928f },
	{ -17.21748f, 8.2775f, -10.01928f },
	{ -18.13249f, 8.2775f, -10.01928f },
	{ -17.21748f, 9.025f, -0.002494f },
	{ -17.21749f, 9.025f, 19.98251f },
	{ -17.69999f, 9.775f, 19.98251f },
	{ -17.69999f, 9.775f, -0.002494f },
	{ -18.13249f, 9.025f, -0.002494f },
	{ -18.13249f, 9.025f, 19.98251f },
	{ -17.69999f, 9.177501f, 10.01801f },
	{ -17.21749f, 8.427501f, 10.01801f },
	{ -18.13249f, 8.427501f, 10.01801f },
	{ -19.99999f, 0.000004f, -25 },
	{ -19.99999f, 0.000004f, 25 },
	{ -19.99999f, 1.35f, -25 },
	{ -19.99999f, 1.35f, 25 },
	{ 19.99999f, 0.000004f, -25 },
	{ 19.99999f, 0.000004f, 25 },
	{ 19.99999f, 1.35f, -25 },
	{ 19.99999f, 1.35f, 25 }
};

NJS_VECTOR normal_000BEB94[] = {
	{ 0.4083f, 0.540413f, -0.735693f },
	{ 0.410209f, 0.5387999f, 0.735815f },
	{ -0.999874f, -0.015525f, 0.003277f },
	{ -0.835163f, 0.549996f, 0.002666f },
	{ 0.470983f, -0.039696f, -0.881249f },
	{ 0.47498f, -0.040009f, 0.879086f },
	{ 0.408299f, 0.540413f, -0.735694f },
	{ 0.410209f, 0.5387999f, 0.735815f },
	{ -0.999874f, -0.015525f, 0.003277f },
	{ -0.835163f, 0.549996f, 0.002667f },
	{ 0.470982f, -0.039696f, -0.881249f },
	{ 0.474981f, -0.040009f, 0.879086f },
	{ 0.405163f, 0.542064f, -0.736213f },
	{ 0.407908f, 0.540696f, 0.735703f },
	{ -0.999786f, -0.020459f, 0.003208f },
	{ -0.8361109f, 0.548553f, 0.002683f },
	{ 0.474409f, -0.035337f, -0.879595f },
	{ 0.477262f, -0.033664f, 0.878116f },
	{ -0.865674f, 0.499208f, 0.037416f },
	{ -0.865678f, 0.499211f, -0.037272f },
	{ -0.023298f, 0.996954f, -0.074434f },
	{ -0.023294f, 0.996932f, 0.07472099f },
	{ 0.840306f, 0.540597f, 0.040518f },
	{ 0.840311f, 0.5405999f, -0.040362f },
	{ -0.025338f, 0.999679f, 0.00015f },
	{ -0.86628f, 0.499558f, 0.00006899999f },
	{ 0.840996f, 0.541041f, 0.000075f },
	{ -0.865897f, 0.499335f, 0.029774f },
	{ -0.8658929f, 0.499333f, -0.029941f },
	{ -0.023496f, 0.9979309f, -0.059839f },
	{ -0.0235f, 0.997951f, 0.059505f },
	{ 0.840558f, 0.540761f, 0.032244f },
	{ 0.840553f, 0.540758f, -0.032425f },
	{ -0.02512f, 0.999684f, -0.000173f },
	{ -0.866281f, 0.499557f, -0.00081f },
	{ 0.840995f, 0.541042f, -0.0008799999f },
	{ -0.410591f, 0.5413859f, -0.7337f },
	{ -0.411911f, 0.540094f, 0.733912f },
	{ 0.99979f, -0.020339f, 0.002614f },
	{ 0.836606f, 0.547801f, 0.002097f },
	{ -0.478291f, -0.036985f, -0.877422f },
	{ -0.481684f, -0.037635f, 0.875536f },
	{ -0.410591f, 0.5413859f, -0.733701f },
	{ -0.411911f, 0.540094f, 0.733912f },
	{ 0.99979f, -0.02034f, 0.002615f },
	{ 0.836606f, 0.547801f, 0.002097f },
	{ -0.47829f, -0.036985f, -0.877423f },
	{ -0.481684f, -0.037635f, 0.875536f },
	{ -0.407515f, 0.54301f, -0.734215f },
	{ -0.409668f, 0.541972f, 0.733784f },
	{ 0.9996819f, -0.025103f, 0.002525f },
	{ 0.837495f, 0.546441f, 0.002115f },
	{ -0.48161f, -0.03263f, -0.875778f },
	{ -0.483829f, -0.031302f, 0.874603f },
	{ 0.840305f, 0.540598f, 0.040518f },
	{ 0.84031f, 0.540602f, -0.040362f },
	{ -0.0233f, 0.996954f, -0.074434f },
	{ -0.023295f, 0.996932f, 0.07472099f },
	{ -0.865674f, 0.499208f, 0.037416f },
	{ -0.865679f, 0.499209f, -0.037272f },
	{ -0.025339f, 0.999679f, 0.00015f },
	{ 0.840995f, 0.541043f, 0.000075f },
	{ -0.866281f, 0.499557f, 0.00006899999f },
	{ 0.8405589f, 0.54076f, 0.032244f },
	{ 0.840553f, 0.540758f, -0.032425f },
	{ -0.023495f, 0.9979309f, -0.059839f },
	{ -0.023498f, 0.997951f, 0.059505f },
	{ -0.865896f, 0.499337f, 0.029774f },
	{ -0.865892f, 0.499334f, -0.029942f },
	{ -0.025118f, 0.999685f, -0.000173f },
	{ 0.840996f, 0.541042f, -0.0008699999f },
	{ -0.86628f, 0.499558f, -0.00081f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_000BEF54 = { vertex_000BE7D4, normal_000BEB94, LengthOfArray<Sint32>(vertex_000BE7D4), meshlist_000BE75C, matlist_000BE324, LengthOfArray<Uint16>(meshlist_000BE75C), LengthOfArray<Uint16>(matlist_000BE324),{ 0, 6.325002f, 0 }, 32.01561f, NULL };

NJS_OBJECT object_000BEF7C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BEF54, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//BridgeB


NJS_MATERIAL matlist_000BD7FC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win004_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win002_16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000BD860[] = {
	4, 4, 5, 0, 1,
	3, 0, 1, 3,
	3, 0, 3, 4,
	0x8000u | 5, 4, 2, 3, 5, 1,
	7, 11, 8, 9, 10, 6, 11, 7,
	3, 9, 7, 11,
	3, 6, 7, 9,
	3, 35, 31, 32,
	7, 31, 33, 32, 30, 34, 31, 35,
	3, 33, 31, 30,
	4, 36, 37, 40, 41,
	3, 39, 37, 36,
	3, 40, 38, 36,
	0x8000u | 5, 36, 39, 38, 37, 41
};

Sint16 poly_000BD8EC[] = {
	4, 16, 18, 15, 19,
	4, 17, 14, 18, 19,
	0x8000u | 5, 12, 20, 19, 13, 14,
	3, 12, 15, 19,
	4, 22, 29, 23, 28,
	4, 25, 27, 24, 28,
	4, 26, 23, 27, 28,
	4, 24, 28, 21, 29,
	4, 43, 44, 50, 49,
	0x8000u | 5, 46, 48, 49, 47, 44,
	3, 46, 45, 49,
	4, 42, 50, 45, 49,
	4, 53, 58, 52, 59,
	4, 54, 58, 55, 57,
	4, 53, 56, 58, 57,
	4, 51, 59, 54, 58
};

Sint16 poly_000BD98C[] = {
	4, 63, 62, 61, 60,
	4, 66, 67, 64, 65
};

Sint16 poly_000BD9A0[] = {
	4, 67, 63, 65, 61,
	4, 62, 66, 60, 64
};

Sint16 poly_000BD9B4[] = {
	4, 67, 66, 63, 62
};

NJS_TEX uv_000BD9C0[] = {
	{ 0, 255 },
	{ 126, 255 },
	{ 0 },
	{ 126, 0 },
	{ 192, 254 },
	{ 83, 255 },
	{ 136, 146 },
	{ 254, 1 },
	{ 126, 0 },
	{ 254, 255 },
	{ 254, 255 },
	{ 126, 255 },
	{ 126, 0 },
	{ 254, 255 },
	{ 254, 1 },
	{ 126, 255 },
	{ 0, 255 },
	{ 0 },
	{ 126, 255 },
	{ 126, 0 },
	{ 254, 255 },
	{ 254, 1 },
	{ 0 },
	{ 126, 0 },
	{ 126, 255 },
	{ 192, 254 },
	{ 83, 255 },
	{ 136, 146 },
	{ 126, 255 },
	{ 126, 0 },
	{ 0, 255 },
	{ 126, 0 },
	{ 0 },
	{ 0, 255 },
	{ 126, 0 },
	{ 126, 255 },
	{ 254, 1 },
	{ 254, 255 },
	{ 136, 146 },
	{ 192, 254 },
	{ 83, 255 },
	{ 0 },
	{ 126, 0 },
	{ 0, 255 },
	{ 126, 255 },
	{ 136, 146 },
	{ 192, 254 },
	{ 83, 255 },
	{ 254, 255 },
	{ 126, 255 },
	{ 254, 1 },
	{ 254, 1 },
	{ 126, 0 },
	{ 126, 255 },
	{ 254, 1 },
	{ 254, 255 }
};

NJS_TEX uv_000BDAA0[] = {
	{ 2158, 255 },
	{ 3570, 255 },
	{ 2158, 0 },
	{ 3570, 0 },
	{ 2158, 255 },
	{ 2158, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1411, 255 },
	{ 1411, 0 },
	{ 3570, 255 },
	{ 3570, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1411, 0 },
	{ 3200, 255 },
	{ 0, 255 },
	{ 3195, 0 },
	{ 0 },
	{ 3110, 255 },
	{ 4590, 255 },
	{ 3114, 0 },
	{ 4589, 0 },
	{ 3110, 255 },
	{ 3114, 0 },
	{ 0, 255 },
	{ 0 },
	{ 3195, 0 },
	{ 4590, 0 },
	{ 3200, 255 },
	{ 4590, 255 },
	{ 2158, 255 },
	{ 2158, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1411, 255 },
	{ 1411, 0 },
	{ 3570, 255 },
	{ 3570, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1411, 0 },
	{ 2158, 255 },
	{ 3570, 255 },
	{ 2158, 0 },
	{ 3570, 0 },
	{ 3114, 0 },
	{ 0 },
	{ 3110, 255 },
	{ 0, 255 },
	{ 3195, 0 },
	{ 4590, 0 },
	{ 3200, 255 },
	{ 4590, 255 },
	{ 3195, 0 },
	{ 3200, 255 },
	{ 0 },
	{ 0, 255 },
	{ 3110, 255 },
	{ 4590, 255 },
	{ 3114, 0 },
	{ 4589, 0 }
};

NJS_TEX uv_000BDBA0[] = {
	{ 187, 209 },
	{ 187, -766 },
	{ 156, 209 },
	{ 156, -766 },
	{ 187, -766 },
	{ 187, 209 },
	{ 156, -766 },
	{ 156, 209 }
};

NJS_TEX uv_000BDBC0[] = {
	{ 510, 191 },
	{ 0, 191 },
	{ 510, 217 },
	{ 0, 217 },
	{ 0, 191 },
	{ 510, 191 },
	{ 0, 217 },
	{ 510, 217 }
};

NJS_TEX uv_000BDBE0[] = {
	{ 510, -765 },
	{ 510, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_000BDBF0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_000BD860, NULL, NULL, NULL, uv_000BD9C0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 16, poly_000BD8EC, NULL, NULL, NULL, uv_000BDAA0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000BD98C, NULL, NULL, NULL, uv_000BDBA0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_000BD9A0, NULL, NULL, NULL, uv_000BDBC0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_000BD9B4, NULL, NULL, NULL, uv_000BDBE0, NULL }
};

NJS_VECTOR vertex_000BDC68[] = {
	{ -18.875f, 15.90001f, 3.165f },
	{ -18.875f, 15.90001f, 6.315f },
	{ -16.85f, 1.350001f, 4.74f },
	{ -16.475f, 15.90001f, 4.74f },
	{ -18.7f, 1.350001f, 3.54f },
	{ -18.7f, 1.350001f, 5.94f },
	{ -18.775f, 12.2f, -21.575f },
	{ -18.775f, 12.2f, -18.575f },
	{ -16.85f, 1.350001f, -20 },
	{ -16.625f, 12.2f, -20 },
	{ -18.7f, 1.350001f, -21.35f },
	{ -18.7f, 1.350001f, -18.8f },
	{ -17.21748f, 8.605002f, -19.99249f },
	{ -17.21749f, 11.48501f, 4.732511f },
	{ -17.69999f, 12.35501f, 4.732511f },
	{ -17.69999f, 9.475003f, -19.99249f },
	{ -18.13249f, 8.605002f, -19.99249f },
	{ -18.1325f, 11.48501f, 4.732511f },
	{ -18.13249f, 9.537504f, -10.15793f },
	{ -17.69999f, 10.40751f, -10.15793f },
	{ -17.21748f, 9.537504f, -10.15793f },
	{ -17.21748f, 11.46501f, 4.737507f },
	{ -17.21749f, 20.455f, 30.00251f },
	{ -17.69999f, 21.765f, 30.00251f },
	{ -17.69999f, 12.335f, 4.737507f },
	{ -18.13249f, 11.46501f, 4.737507f },
	{ -18.1325f, 20.455f, 30.00251f },
	{ -18.13249f, 13.5775f, 12.62207f },
	{ -17.69999f, 14.57751f, 12.62207f },
	{ -17.21749f, 13.5775f, 12.62207f },
	{ 18.92499f, 15.90001f, 3.165001f },
	{ 18.92499f, 15.90001f, 6.315f },
	{ 16.74999f, 1.350001f, 4.74f },
	{ 16.525f, 15.90001f, 4.74f },
	{ 18.54999f, 1.350001f, 3.54f },
	{ 18.54999f, 1.350001f, 5.94f },
	{ 18.82499f, 12.2f, -21.575f },
	{ 18.82499f, 12.2f, -18.575f },
	{ 16.74999f, 1.350001f, -20 },
	{ 16.62499f, 12.2f, -20 },
	{ 18.54999f, 1.350001f, -21.35f },
	{ 18.54999f, 1.350001f, -18.8f },
	{ 17.26748f, 8.605002f, -19.99249f },
	{ 17.26748f, 11.48501f, 4.732511f },
	{ 17.69999f, 12.35501f, 4.732511f },
	{ 17.69999f, 9.475003f, -19.99249f },
	{ 18.18249f, 8.605002f, -19.99249f },
	{ 18.18249f, 11.48501f, 4.732511f },
	{ 18.18249f, 9.537504f, -10.15793f },
	{ 17.69999f, 10.40751f, -10.15793f },
	{ 17.26748f, 9.537504f, -10.15793f },
	{ 17.26748f, 11.46501f, 4.737507f },
	{ 17.26749f, 20.455f, 30.00251f },
	{ 17.69999f, 21.765f, 30.00251f },
	{ 17.69999f, 12.335f, 4.737507f },
	{ 18.18249f, 11.46501f, 4.737507f },
	{ 18.18249f, 20.455f, 30.00251f },
	{ 18.18249f, 13.5775f, 12.62207f },
	{ 17.69999f, 14.57751f, 12.62207f },
	{ 17.26749f, 13.5775f, 12.62207f },
	{ -19.99999f, 0.000001f, -25 },
	{ -19.99999f, 0.000001f, 25 },
	{ -19.99999f, 1.349999f, -25 },
	{ -19.99999f, 1.349999f, 25 },
	{ 19.99999f, 0.000001f, -25 },
	{ 19.99999f, 0.000001f, 25 },
	{ 19.99999f, 1.349999f, -25 },
	{ 19.99999f, 1.349999f, 25 }
};

NJS_VECTOR normal_000BDF98[] = {
	{ -0.399338f, 0.5422f, -0.739289f },
	{ -0.39832f, 0.542738f, 0.7394429f },
	{ 0.999658f, -0.026133f, -0.001162f },
	{ 0.835233f, 0.549895f, -0.0009709999f },
	{ -0.476753f, -0.02742f, -0.8786089f },
	{ -0.475737f, -0.027956f, 0.879143f },
	{ -0.378653f, 0.543286f, -0.749308f },
	{ -0.394954f, 0.545451f, 0.739252f },
	{ 0.999494f, -0.021606f, 0.023322f },
	{ 0.832862f, 0.5531549f, 0.018976f },
	{ -0.454181f, -0.021148f, -0.890658f },
	{ -0.474871f, -0.020467f, 0.8798169f },
	{ 0.873589f, 0.484492f, -0.045939f },
	{ 0.872757f, 0.484033f, -0.063306f },
	{ -0.020845f, 0.99134f, -0.129657f },
	{ -0.023699f, 0.995255f, -0.09436899f },
	{ -0.8946559f, 0.444761f, -0.042172f },
	{ -0.893939f, 0.444404f, -0.058124f },
	{ -0.894349f, 0.444609f, -0.049634f },
	{ -0.022818f, 0.993315f, -0.11316f },
	{ 0.8732319f, 0.484295f, -0.054077f },
	{ 0.866769f, 0.480715f, -0.13276f },
	{ 0.92933f, 0.342292f, -0.138499f },
	{ 0.007099f, 0.928409f, -0.371492f },
	{ -0.025954f, 0.963591f, -0.266117f },
	{ -0.88876f, 0.441832f, -0.122022f },
	{ -0.927606f, 0.347354f, -0.137449f },
	{ -0.905611f, 0.404201f, -0.128416f },
	{ -0.010389f, 0.9464779f, -0.3226f },
	{ 0.8946469f, 0.425741f, -0.135466f },
	{ 0.40275f, 0.540501f, -0.738682f },
	{ 0.40411f, 0.539758f, 0.738483f },
	{ -0.999887f, -0.014972f, 0.001561f },
	{ -0.833496f, 0.552524f, 0.001301f },
	{ 0.468027f, -0.03612f, -0.882976f },
	{ 0.46943f, -0.035406f, 0.88226f },
	{ 0.386055f, 0.541309f, -0.746958f },
	{ 0.406675f, 0.541127f, 0.736069f },
	{ -0.999541f, -0.010353f, 0.02848f },
	{ -0.832355f, 0.553746f, 0.023458f },
	{ 0.445479f, -0.035408f, -0.894592f },
	{ 0.471187f, -0.031607f, 0.881467f },
	{ -0.894657f, 0.444758f, -0.042171f },
	{ -0.89394f, 0.444402f, -0.058123f },
	{ -0.020846f, 0.99134f, -0.129656f },
	{ -0.023702f, 0.995255f, -0.09436899f },
	{ 0.873588f, 0.484493f, -0.045939f },
	{ 0.872757f, 0.484033f, -0.063306f },
	{ 0.873231f, 0.484296f, -0.054077f },
	{ -0.02282f, 0.993315f, -0.11316f },
	{ -0.89435f, 0.444606f, -0.049633f },
	{ -0.888761f, 0.441831f, -0.122021f },
	{ -0.942037f, 0.311015f, -0.125843f },
	{ -0.036464f, 0.924787f, -0.378735f },
	{ -0.025954f, 0.963591f, -0.266117f },
	{ 0.866769f, 0.480714f, -0.13276f },
	{ 0.911216f, 0.380662f, -0.157419f },
	{ 0.886149f, 0.44079f, -0.142982f },
	{ -0.033571f, 0.944545f, -0.32666f },
	{ -0.912469f, 0.389946f, -0.123863f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_000BE2C8 = { vertex_000BDC68, normal_000BDF98, LengthOfArray<Sint32>(vertex_000BDC68), meshlist_000BDBF0, matlist_000BD7FC, LengthOfArray<Uint16>(meshlist_000BDBF0), LengthOfArray<Uint16>(matlist_000BD7FC),{ 0, 10.8825f, 2.501256f }, 34.00468f, NULL };

NJS_OBJECT object_000BE2F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BE2C8, 0.000002f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Bridge A


NJS_MATERIAL matlist_000BD2EC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000BD33C[] = {
	4, 1, 0, 3, 2,
	4, 5, 1, 7, 3,
	4, 4, 5, 6, 7,
	4, 0, 4, 2, 6,
	4, 11, 10, 9, 8,
	4, 15, 11, 13, 9,
	4, 14, 15, 12, 13,
	4, 10, 14, 8, 12
};

Sint16 poly_000BD38C[] = {
	4, 3, 2, 7, 6,
	4, 15, 14, 11, 10
};

Sint16 poly_000BD3A0[] = {
	0x8000u | 5, 16, 18, 17, 19, 24,
	0x8000u | 5, 22, 20, 23, 21, 25
};

Sint16 poly_000BD3B8[] = {
	4, 18, 22, 16, 20,
	3, 18, 19, 22,
	0x8000u | 5, 22, 23, 19, 25, 24
};

NJS_TEX uv_000BD3D8[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -255 },
	{ 0, -255 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_000BD458[] = {
	{ 0, 255 },
	{ 0, 76 },
	{ 255, 255 },
	{ 255, 76 },
	{ 0, 255 },
	{ 0, 76 },
	{ 255, 255 },
	{ 255, 76 }
};

NJS_TEX uv_000BD478[] = {
	{ 105, 2 },
	{ 142, 2 },
	{ 105, 127 },
	{ 142, 127 },
	{ 105, 248 },
	{ 142, 2 },
	{ 105, 2 },
	{ 142, 127 },
	{ 105, 127 },
	{ 105, 248 }
};

NJS_TEX uv_000BD4A0[] = {
	{ 148, 223 },
	{ 415, 223 },
	{ 148, 255 },
	{ 414, 255 },
	{ 428, 1 },
	{ 430, 127 },
	{ 148, 1 },
	{ 148, 1 },
	{ 148, 127 },
	{ 430, 127 },
	{ 148, 255 },
	{ 430, 254 }
};

NJS_MESHSET_SADX meshlist_000BD4D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_000BD33C, NULL, NULL, NULL, uv_000BD3D8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000BD38C, NULL, NULL, NULL, uv_000BD458, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000BD3A0, NULL, NULL, NULL, uv_000BD478, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_000BD3B8, NULL, NULL, NULL, uv_000BD4A0, NULL }
};

NJS_VECTOR vertex_000BD530[] = {
	{ 19.95f, 1.95f, -2.000001f },
	{ 19.95f, 1.95f, 2.199998f },
	{ 20.45f, 26.41999f, -2.400002f },
	{ 20.45f, 26.41999f, 2.399998f },
	{ 16.05f, 1.95f, -2 },
	{ 16.05f, 1.95f, 2.200001f },
	{ 15.7f, 26.41999f, -2.4f },
	{ 15.7f, 26.41999f, 2.400002f },
	{ -19.95f, 1.95f, -2 },
	{ -19.95f, 1.95f, 2.200001f },
	{ -20.3f, 26.41999f, -2.4f },
	{ -20.3f, 26.41999f, 2.400002f },
	{ -16.1f, 1.95f, -2 },
	{ -16.1f, 1.95f, 2.200001f },
	{ -15.75f, 26.41999f, -2.4f },
	{ -15.75f, 26.41999f, 2.400002f },
	{ -21.7f, 0.000001f, -4.04999f },
	{ -21.7f, 0.000001f, 3.250012f },
	{ -21.7f, 1.950002f, -4.04999f },
	{ -21.7f, 1.950002f, 3.250012f },
	{ 21.7f, 0.000001f, -4.04999f },
	{ 21.7f, 0.000001f, 3.250012f },
	{ 21.7f, 1.950002f, -4.04999f },
	{ 21.7f, 1.950002f, 3.250012f },
	{ -21.7f, 0.000001f, 10.30001f },
	{ 21.7f, 0.000001f, 10.30001f }
};

NJS_VECTOR normal_000BD668[] = {
	{ 0.7059309f, -0.025995f, -0.707803f },
	{ 0.7041619f, -0.020189f, 0.709752f },
	{ 0.58286f, 0.5676979f, -0.581372f },
	{ 0.583307f, 0.5698299f, 0.578832f },
	{ -0.707407f, -0.021667f, -0.7064739f },
	{ -0.705622f, -0.015883f, 0.708411f },
	{ -0.580957f, 0.569307f, -0.5817029f },
	{ -0.581398f, 0.571449f, 0.579157f },
	{ -0.707407f, -0.021667f, -0.7064739f },
	{ -0.705622f, -0.015883f, 0.70841f },
	{ -0.580957f, 0.569307f, -0.5817029f },
	{ -0.581398f, 0.571449f, 0.579157f },
	{ 0.707407f, -0.021667f, -0.7064739f },
	{ 0.705622f, -0.015883f, 0.70841f },
	{ 0.580957f, 0.569307f, -0.5817029f },
	{ 0.581398f, 0.571449f, 0.579157f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.678046f, 0.728339f, 0.098872f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 1, 0, 0 },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.678046f, 0.728339f, 0.098872f },
	{ -0.169311f, 0.949896f, 0.262737f },
	{ 0.169311f, 0.949896f, 0.262737f }
};

NJS_MODEL_SADX attach_000BD7A0 = { vertex_000BD530, normal_000BD668, LengthOfArray<Sint32>(vertex_000BD530), meshlist_000BD4D0, matlist_000BD2EC, LengthOfArray<Uint16>(meshlist_000BD4D0), LengthOfArray<Uint16>(matlist_000BD2EC),{ 0, 13.21f, 3.12501f }, 22.85543f, NULL };

NJS_OBJECT object_000BD7C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000BD7A0, -0.00001f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//OSaku C


NJS_MATERIAL matlist_000C92CC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000C9308[] = {
	4, 3, 2, 1, 0,
	4, 7, 6, 5, 4,
	4, 11, 10, 9, 8,
	4, 15, 14, 13, 12
};

Sint16 poly_000C9330[] = {
	0x8000u | 8, 19, 17, 18, 16, 22, 20, 23, 21,
	4, 23, 19, 21, 17
};

Sint16 poly_000C934C[] = {
	3, 28, 25, 27,
	3, 27, 26, 28,
	0x8000u | 8, 26, 22, 27, 23, 25, 19, 24, 18,
	4, 24, 26, 18, 22,
	3, 24, 25, 28,
	3, 28, 26, 24
};

NJS_TEX uv_000C9388[] = {
	{ 243, 20 },
	{ 0, 1 },
	{ 242, 112 },
	{ 0, 127 },
	{ 243, 20 },
	{ 0, 1 },
	{ 242, 112 },
	{ 0, 127 },
	{ 243, 20 },
	{ 0, 1 },
	{ 242, 112 },
	{ 0, 127 },
	{ 243, 20 },
	{ 0, 1 },
	{ 242, 112 },
	{ 0, 127 }
};

NJS_TEX uv_000C93C8[] = {
	{ 0 },
	{ 0, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 510, 0 },
	{ 510, 254 },
	{ 765, 0 },
	{ 765, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 }
};

NJS_TEX uv_000C93F8[] = {
	{ 758, 1 },
	{ 515, 119 },
	{ 761, 119 },
	{ 515, 119 },
	{ 761, 119 },
	{ 758, 1 },
	{ 765, 0 },
	{ 765, 127 },
	{ 509, 0 },
	{ 513, 127 },
	{ 254, 0 },
	{ 258, 127 },
	{ 0 },
	{ 0, 127 },
	{ 765, 0 },
	{ 509, 0 },
	{ 765, 127 },
	{ 513, 127 },
	{ 515, 119 },
	{ 761, 119 },
	{ 758, 1 },
	{ 758, 1 },
	{ 515, 119 },
	{ 761, 119 }
};

NJS_MESHSET_SADX meshlist_000C9458[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000C9308, NULL, NULL, NULL, uv_000C9388, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000C9330, NULL, NULL, NULL, uv_000C93C8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_000C934C, NULL, NULL, NULL, uv_000C93F8, NULL }
};

NJS_VECTOR vertex_000C94A0[] = {
	{ 0, -3.227502f, -10.18954f },
	{ 0, -2.537202f, -2.034549f },
	{ 0, 1.042996f, -10.18954f },
	{ 0, 0.548198f, -2.034549f },
	{ 9.970408f, -3.227502f, -0.00001f },
	{ 2.034549f, -2.537202f, 0 },
	{ 9.970408f, 1.042996f, -0.00001f },
	{ 2.034549f, 0.548198f, 0 },
	{ 0, -3.227502f, 10.18954f },
	{ 0, -2.537202f, 2.034549f },
	{ 0.000001f, 1.042996f, 10.18954f },
	{ 0, 0.548198f, 2.034549f },
	{ -9.970408f, -3.227502f, 0 },
	{ -2.034549f, -2.537202f, 0 },
	{ -9.970408f, 1.042996f, 0 },
	{ -2.034549f, 0.548198f, 0 },
	{ -2.152208f, -2.830002f, 0 },
	{ 0, -2.830002f, 2.152208f },
	{ -2.152208f, 0.799999f, 0 },
	{ 0, 0.799999f, 2.152208f },
	{ 0, -2.830002f, -2.152208f },
	{ 2.152208f, -2.830002f, 0 },
	{ 0, 0.799999f, -2.152208f },
	{ 2.152208f, 0.799999f, 0 },
	{ -1.52358f, 1.819024f, 0 },
	{ 0, 1.819024f, 1.52358f },
	{ 0, 1.819024f, -1.52358f },
	{ 1.52358f, 1.819024f, 0 },
	{ 0, 2.393009f, 0 }
};

NJS_VECTOR normal_000C95FC[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -0.969485f, 0.245151f, 0 },
	{ 0, 0.245151f, 0.969485f },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 0, 0.245151f, -0.969485f },
	{ 0.969485f, 0.245151f, 0 },
	{ -0.711276f, 0.702912f, 0 },
	{ 0, 0.702912f, 0.711276f },
	{ 0, 0.702912f, -0.711276f },
	{ 0.711276f, 0.702912f, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_000C9758 = { vertex_000C94A0, normal_000C95FC, LengthOfArray<Sint32>(vertex_000C94A0), meshlist_000C9458, matlist_000C92CC, LengthOfArray<Uint16>(meshlist_000C9458), LengthOfArray<Uint16>(matlist_000C92CC),{ 0, -0.417246f, 0 }, 14.25608f, NULL };

NJS_OBJECT object_000C9780 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C9758, 0, 18.74f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_000C97B4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000C982C[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

Sint16 poly_000C9854[] = {
	4, 8, 10, 2, 6,
	4, 9, 8, 3, 2,
	4, 11, 9, 7, 3,
	4, 10, 11, 6, 7
};

Sint16 poly_000C987C[] = {
	4, 11, 10, 9, 8
};

Sint16 poly_000C9886[] = {
	4, 19, 17, 15, 13,
	4, 16, 18, 12, 14,
	4, 18, 19, 14, 15,
	4, 17, 16, 13, 12
};

Sint16 poly_000C98AE[] = {
	4, 26, 27, 24, 25,
	0x8000u | 8, 24, 26, 20, 22, 21, 23, 25, 27
};

Sint16 poly_000C98CA[] = {
	4, 29, 33, 28, 32,
	4, 31, 29, 30, 28
};

NJS_TEX uv_000C98E0[] = {
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, -255 },
	{ 254, -255 },
	{ 0, 255 },
	{ 254, 255 }
};

NJS_TEX uv_000C9920[] = {
	{ 252, 128 },
	{ 492, 128 },
	{ 231, 254 },
	{ 510, 255 },
	{ 20, 127 },
	{ 212, 128 },
	{ 0, 255 },
	{ 231, 254 },
	{ 252, 128 },
	{ 492, 128 },
	{ 231, 254 },
	{ 510, 255 },
	{ 20, 127 },
	{ 212, 128 },
	{ 0, 255 },
	{ 231, 254 }
};

NJS_TEX uv_000C9960[] = {
	{ 253, 254 },
	{ 253, 136 },
	{ 0, 255 },
	{ 0, 136 }
};

NJS_TEX uv_000C9970[] = {
	{ 109, 128 },
	{ 15, 128 },
	{ 126, 254 },
	{ 0, 255 },
	{ 109, 128 },
	{ 15, 128 },
	{ 126, 254 },
	{ 0, 255 },
	{ 109, 128 },
	{ 15, 128 },
	{ 126, 254 },
	{ 0, 255 },
	{ 109, 128 },
	{ 15, 128 },
	{ 126, 254 },
	{ 0, 255 }
};

NJS_TEX uv_000C99B0[] = {
	{ 0, 255 },
	{ 85, 255 },
	{ 0 },
	{ 85, 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 169, 0 },
	{ 169, 255 },
	{ 85, 0 },
	{ 85, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_000C99E0[] = {
	{ 1019, 0 },
	{ 1019, 127 },
	{ 0 },
	{ 0, 127 },
	{ 0, 127 },
	{ 0 },
	{ 1019, 127 },
	{ 1019, 0 }
};

NJS_MESHSET_SADX meshlist_000C9A00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000C982C, NULL, NULL, NULL, uv_000C98E0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000C9854, NULL, NULL, NULL, uv_000C9920, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_000C987C, NULL, NULL, NULL, uv_000C9960, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_000C9886, NULL, NULL, NULL, uv_000C9970, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_000C98AE, NULL, NULL, NULL, uv_000C99B0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_000C98CA, NULL, NULL, NULL, uv_000C99E0, NULL }
};

NJS_VECTOR vertex_000C9A90[] = {
	{ -2.2032f, 0, -1.836001f },
	{ -2.2032f, 0, 1.836001f },
	{ -2.2032f, 11.63001f, -1.836001f },
	{ -2.2032f, 11.63001f, 1.836001f },
	{ 2.203199f, 0, -1.836001f },
	{ 2.203199f, 0, 1.836001f },
	{ 2.203199f, 11.63001f, -1.836001f },
	{ 2.203199f, 11.63001f, 1.836001f },
	{ -1.836f, 12.60001f, -1.530001f },
	{ -1.836f, 12.6f, 1.530001f },
	{ 1.836f, 12.60001f, -1.530001f },
	{ 1.836f, 12.6f, 1.530001f },
	{ -1.465785f, 12.60001f, -1.218027f },
	{ -1.465785f, 12.60001f, 1.218028f },
	{ 1.465785f, 12.60001f, -1.218027f },
	{ 1.465785f, 12.60001f, 1.218028f },
	{ -1.091158f, 14.77923f, -0.914843f },
	{ -1.091158f, 14.77923f, 0.914843f },
	{ 1.091157f, 14.77923f, -0.914843f },
	{ 1.091157f, 14.77923f, 0.914843f },
	{ -0.624f, 14.78f, -0.616f },
	{ -0.624f, 14.78f, 0.616f },
	{ -0.624f, 16.2112f, -0.616f },
	{ -0.624f, 16.2112f, 0.616f },
	{ 0.624f, 14.78f, -0.616f },
	{ 0.624f, 14.78f, 0.616f },
	{ 0.624f, 16.2112f, -0.616f },
	{ 0.624f, 16.2112f, 0.616f },
	{ 2.198006f, 10.4f, 0 },
	{ 38.18201f, 10.4f, 0 },
	{ 2.198006f, 8.363997f, 0.880748f },
	{ 38.18201f, 8.363997f, 0.880747f },
	{ 2.198006f, 8.363997f, -0.880747f },
	{ 38.18201f, 8.363997f, -0.880748f }
};

NJS_VECTOR normal_000C9C28[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.695992f, 0.206646f, -0.687672f },
	{ -0.695992f, 0.206645f, 0.687672f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.695992f, 0.206645f, -0.687672f },
	{ 0.695992f, 0.206645f, 0.687672f },
	{ -0.460542f, 0.743629f, -0.484682f },
	{ -0.460543f, 0.743629f, 0.484682f },
	{ 0.460543f, 0.743629f, -0.484681f },
	{ 0.460543f, 0.743629f, 0.484682f },
	{ -0.6967109f, 0.214985f, -0.684379f },
	{ -0.6967109f, 0.214984f, 0.684379f },
	{ 0.6967109f, 0.214985f, -0.684379f },
	{ 0.6967109f, 0.214985f, 0.684379f },
	{ -0.682387f, 0.214529f, -0.6988029f },
	{ -0.682387f, 0.214529f, 0.6988029f },
	{ 0.682387f, 0.214529f, -0.6988029f },
	{ 0.682387f, 0.214529f, 0.6988029f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.39703f, 0.917805f },
	{ 0, 0.39703f, 0.917805f },
	{ 0, 0.39703f, -0.917805f },
	{ 0, 0.39703f, -0.917805f }
};

NJS_MODEL_SADX attach_000C9DC0 = { vertex_000C9A90, normal_000C9C28, LengthOfArray<Sint32>(vertex_000C9A90), meshlist_000C9A00, matlist_000C97B4, LengthOfArray<Uint16>(meshlist_000C9A00), LengthOfArray<Uint16>(matlist_000C97B4),{ 17.9894f, 8.105602f, 0 }, 20.2759f, NULL };

NJS_OBJECT object_000C9DE8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_000C9DC0, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_000C9780, NULL };

//OSaku B


NJS_MATERIAL matlist_000C8F54[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000C8F90[] = {
	4, 1, 5, 0, 4,
	4, 3, 1, 2, 0
};

Sint16 poly_000C8FA4[] = {
	4, 12, 13, 10, 11,
	0x8000u | 8, 10, 12, 6, 8, 7, 9, 11, 13
};

Sint16 poly_000C8FC0[] = {
	4, 17, 16, 15, 14,
	4, 15, 14, 9, 8,
	0x8000u | 8, 9, 15, 13, 17, 12, 16, 8, 14
};

NJS_TEX uv_000C8FE8[] = {
	{ 1019, 0 },
	{ 1019, 127 },
	{ 0 },
	{ 0, 127 },
	{ 0, 127 },
	{ 0 },
	{ 1019, 127 },
	{ 1019, 0 }
};

NJS_TEX uv_000C9008[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 509, -255 },
	{ 509, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_TEX uv_000C9038[] = {
	{ 255, 128 },
	{ 255, 255 },
	{ 0, 128 },
	{ 0, 255 },
	{ 23, 128 },
	{ 230, 128 },
	{ 0, 215 },
	{ 253, 215 },
	{ 253, 215 },
	{ 230, 128 },
	{ 0, 215 },
	{ 23, 128 },
	{ 253, 215 },
	{ 230, 128 },
	{ 0, 215 },
	{ 23, 128 }
};

NJS_MESHSET_SADX meshlist_000C9078[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_000C8F90, NULL, NULL, NULL, uv_000C8FE8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000C8FA4, NULL, NULL, NULL, uv_000C9008, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_000C8FC0, NULL, NULL, NULL, uv_000C9038, NULL }
};

NJS_VECTOR vertex_000C90C0[] = {
	{ 1.818007f, 10.4f, 0 },
	{ 38.18201f, 10.4f, 0 },
	{ 1.818007f, 8.363997f, 0.880748f },
	{ 38.18201f, 8.363997f, 0.880747f },
	{ 1.818007f, 8.363997f, -0.880747f },
	{ 38.18201f, 8.363997f, -0.880748f },
	{ -1.818f, -0.00001f, -1.800001f },
	{ -1.818f, -0.00001f, 1.8f },
	{ -1.818f, 11.6f, -1.800001f },
	{ -1.818f, 11.6f, 1.8f },
	{ 1.818f, -0.00001f, -1.800001f },
	{ 1.818f, -0.00001f, 1.8f },
	{ 1.818f, 11.6f, -1.800001f },
	{ 1.818f, 11.6f, 1.8f },
	{ -1.515f, 12.60001f, -1.500001f },
	{ -1.515f, 12.60001f, 1.500001f },
	{ 1.515f, 12.60001f, -1.500001f },
	{ 1.515f, 12.60001f, 1.500001f }
};

NJS_VECTOR normal_000C9198[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.39703f, 0.917805f },
	{ 0, 0.39703f, 0.917805f },
	{ 0, 0.397031f, -0.917805f },
	{ 0, 0.397031f, -0.917805f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.695188f, 0.184447f, -0.694761f },
	{ -0.695188f, 0.184447f, 0.694761f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.695188f, 0.184447f, -0.694761f },
	{ 0.695188f, 0.184446f, 0.694761f },
	{ -0.486387f, 0.72507f, -0.487546f },
	{ -0.486387f, 0.72507f, 0.487546f },
	{ 0.486387f, 0.72507f, -0.487546f },
	{ 0.486387f, 0.72507f, 0.487546f }
};

NJS_MODEL_SADX attach_000C9270 = { vertex_000C90C0, normal_000C9198, LengthOfArray<Sint32>(vertex_000C90C0), meshlist_000C9078, matlist_000C8F54, LengthOfArray<Uint16>(meshlist_000C9078), LengthOfArray<Uint16>(matlist_000C8F54),{ 18.182f, 6.300004f, 0 }, 20.08084f, NULL };

NJS_OBJECT object_000C9298 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C9270, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//OSaku A


NJS_MATERIAL matlist_000C8CCC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000C8CF4[] = {
	0x8000u | 8, 3, 9, 7, 11, 6, 10, 2, 8,
	4, 11, 10, 9, 8,
	4, 9, 8, 3, 2
};

Sint16 poly_000C8D1A[] = {
	4, 6, 7, 4, 5,
	0x8000u | 8, 4, 6, 0, 2, 1, 3, 5, 7
};

NJS_TEX uv_000C8D38[] = {
	{ 253, 215 },
	{ 230, 128 },
	{ 0, 215 },
	{ 23, 128 },
	{ 253, 215 },
	{ 230, 128 },
	{ 0, 215 },
	{ 23, 128 },
	{ 255, 128 },
	{ 255, 255 },
	{ 0, 128 },
	{ 0, 255 },
	{ 23, 128 },
	{ 230, 128 },
	{ 0, 215 },
	{ 253, 215 }
};

NJS_TEX uv_000C8D78[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 765, -255 },
	{ 765, 255 },
	{ 509, -255 },
	{ 509, 255 },
	{ 255, -255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_000C8DA8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000C8CF4, NULL, NULL, NULL, uv_000C8D38, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000C8D1A, NULL, NULL, NULL, uv_000C8D78, NULL }
};

NJS_VECTOR vertex_000C8DD8[] = {
	{ -1.818f, -0.00001f, -1.800001f },
	{ -1.818f, -0.00001f, 1.8f },
	{ -1.818f, 11.6f, -1.800001f },
	{ -1.818f, 11.6f, 1.8f },
	{ 1.818f, -0.00001f, -1.800001f },
	{ 1.818f, -0.00001f, 1.8f },
	{ 1.818f, 11.6f, -1.800001f },
	{ 1.818f, 11.6f, 1.8f },
	{ -1.515f, 12.60001f, -1.500001f },
	{ -1.515f, 12.60001f, 1.500001f },
	{ 1.515f, 12.60001f, -1.500001f },
	{ 1.515f, 12.60001f, 1.500001f }
};

NJS_VECTOR normal_000C8E68[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.695188f, 0.184447f, -0.694761f },
	{ -0.695188f, 0.184447f, 0.694761f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.695188f, 0.184447f, -0.694761f },
	{ 0.695188f, 0.184446f, 0.694761f },
	{ -0.486387f, 0.72507f, -0.487546f },
	{ -0.486387f, 0.72507f, 0.487546f },
	{ 0.486387f, 0.72507f, -0.487546f },
	{ 0.486387f, 0.72507f, 0.487546f }
};

NJS_MODEL_SADX attach_000C8EF8 = { vertex_000C8DD8, normal_000C8E68, LengthOfArray<Sint32>(vertex_000C8DD8), meshlist_000C8DA8, matlist_000C8CCC, LengthOfArray<Uint16>(meshlist_000C8DA8), LengthOfArray<Uint16>(matlist_000C8CCC),{ 0, 6.300004f, 0 }, 6.552104f, NULL };

NJS_OBJECT object_000C8F20 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000C8EF8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Bridge piece


NJS_MATERIAL matlist_000C48E8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win007_128, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000C4910[] = {
	4, 5, 3, 4, 2,
	4, 3, 1, 2, 0,
	4, 1, 5, 0, 4
};

Sint16 poly_000C492E[] = {
	3, 1, 3, 5,
	3, 4, 2, 0
};

NJS_TEX uv_000C4940[] = {
	{ 510, 4 },
	{ 510, 121 },
	{ 0, 4 },
	{ 0, 121 },
	{ 510, 4 },
	{ 510, 121 },
	{ 0, 4 },
	{ 0, 121 },
	{ 510, 4 },
	{ 510, 121 },
	{ 0, 4 },
	{ 0, 121 }
};

NJS_TEX uv_000C4970[] = {
	{ 252, 122 },
	{ 162, 63 },
	{ 253, 5 },
	{ 252, 122 },
	{ 162, 63 },
	{ 253, 5 }
};

NJS_MESHSET_SADX meshlist_000C4988[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_000C4910, NULL, NULL, NULL, uv_000C4940, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_000C492E, NULL, NULL, NULL, uv_000C4970, NULL }
};

NJS_VECTOR vertex_000C49B8[] = {
	{ -2.511474f, 1.45f, -19.99642f },
	{ -2.511474f, 1.45f, 19.99642f },
	{ 0, -2.9f, -19.99642f },
	{ 0, -2.9f, 19.99642f },
	{ 2.511474f, 1.45f, -19.99642f },
	{ 2.511474f, 1.45f, 19.99642f }
};

NJS_VECTOR normal_000C4A00[] = {
	{ -0.7205769f, 0.416025f, -0.5547f },
	{ -0.7205769f, 0.416025f, 0.5547f },
	{ 0, -0.83205f, -0.5547f },
	{ 0, -0.83205f, 0.5547f },
	{ 0.7205769f, 0.416025f, -0.5547f },
	{ 0.7205769f, 0.416025f, 0.5547f }
};

NJS_MODEL_SADX attach_000C4A48 = { vertex_000C49B8, normal_000C4A00, LengthOfArray<Sint32>(vertex_000C49B8), meshlist_000C4988, matlist_000C48E8, LengthOfArray<Uint16>(meshlist_000C4988), LengthOfArray<Uint16>(matlist_000C48E8),{ 0, -0.725f, 0 }, 20.15352f, NULL };

//Wind gate 1


NJS_MATERIAL matlist_000D202C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win027_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win016_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000D2054[] = {
	4, 3, 2, 1, 0,
	4, 7, 6, 5, 4,
	4, 17, 16, 15, 14,
	4, 21, 20, 19, 18,
	4, 25, 24, 23, 22,
	4, 35, 34, 33, 32,
	4, 39, 38, 37, 36,
	4, 43, 42, 41, 40,
	4, 53, 52, 51, 50
};

Sint16 poly_000D20AE[] = {
	4, 11, 9, 10, 8,
	0x8000u | 6, 9, 8, 13, 12, 11, 10,
	4, 29, 27, 28, 26,
	0x8000u | 6, 28, 29, 30, 31, 26, 27,
	0x8000u | 6, 48, 49, 44, 45, 46, 47,
	4, 49, 47, 48, 46
};

NJS_TEX uv_000D20F8[] = {
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 }
};

NJS_TEX uv_000D2188[] = {
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 127, 0 },
	{ 127, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 127, 0 },
	{ 127, 255 },
	{ 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_000D2200[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_000D20AE, NULL, NULL, NULL, uv_000D2188, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 9, poly_000D2054, NULL, NULL, NULL, uv_000D20F8, NULL }
};

NJS_VECTOR vertex_000D2230[] = {
	{ 0.384943f, -0.794919f, -14.67081f },
	{ -0.5829239f, -0.566095f, -11.57918f },
	{ -0.804743f, -9.669149f, -15.68568f },
	{ -2.550838f, -9.361265f, -10.56432f },
	{ -0.810427f, 0.058964f, -14.67081f },
	{ -0.198797f, 0.787877f, -11.57918f },
	{ -7.971365f, 5.531504f, -15.68568f },
	{ -6.831683f, 6.889727f, -10.56432f },
	{ 0.239631f, 1.359038f, -15.05f },
	{ 0.239632f, 1.359038f, -11.2f },
	{ -1.29678f, -0.471984f, -15.05f },
	{ -1.296779f, -0.471984f, -11.2f },
	{ 1.057138f, -0.887044f, -15.05f },
	{ 1.057139f, -0.887044f, -11.2f },
	{ 0.45627f, 0.67237f, -14.67081f },
	{ 0.781712f, -0.221773f, -11.57918f },
	{ 8.776097f, 4.137652f, -15.68568f },
	{ 9.38251f, 2.471549f, -10.56432f },
	{ 0.8058479f, -0.361503f, -1.545815f },
	{ -0.08266699f, -0.808347f, 1.545815f },
	{ 5.598744f, -7.924275f, -2.560683f },
	{ 4.063253f, -8.810792f, 2.560683f },
	{ -0.658723f, -0.475761f, -1.545815f },
	{ -0.658723f, 0.475766f, 1.545815f },
	{ -9.662004f, -0.8865139f, -2.560683f },
	{ -9.662004f, 0.886517f, 2.560683f },
	{ -0.690004f, 1.195117f, -1.925f },
	{ -0.690003f, 1.195119f, 1.925f },
	{ -0.690004f, -1.195113f, -1.925f },
	{ -0.690003f, -1.195112f, 1.925f },
	{ 1.379996f, 0.000003f, -1.925f },
	{ 1.379997f, 0.000003f, 1.925f },
	{ -0.08266699f, 0.808352f, -1.545815f },
	{ 0.74138f, 0.332589f, 1.545815f },
	{ 4.06325f, 8.810798f, -2.560683f },
	{ 5.598741f, 7.924281f, 2.560683f },
	{ 0.089849f, -0.878639f, 11.57918f },
	{ -0.741386f, -0.332584f, 14.67081f },
	{ -4.063255f, -8.810792f, 10.56432f },
	{ -5.598746f, -7.924276f, 15.68568f },
	{ -0.741386f, 0.332589f, 11.57918f },
	{ 0.08266f, 0.808352f, 14.67081f },
	{ -5.598749f, 7.92428f, 10.56432f },
	{ -4.063258f, 8.810798f, 15.68568f },
	{ 0.6899959f, 1.195119f, 11.2f },
	{ 0.689997f, 1.195119f, 15.05f },
	{ -1.380004f, 0.000002f, 11.2f },
	{ -1.380003f, 0.000002f, 15.05f },
	{ 0.689997f, -1.195112f, 11.2f },
	{ 0.689998f, -1.195112f, 15.05f },
	{ 0.658717f, 0.475766f, 11.57918f },
	{ 0.658717f, -0.475761f, 14.67081f },
	{ 9.661995f, 0.886519f, 10.56432f },
	{ 9.661995f, -0.8865139f, 15.68568f }
};

NJS_VECTOR normal_000D24B8[] = {
	{ 0.932003f, -0.171703f, 0.319199f },
	{ 0.932003f, -0.171703f, 0.319199f },
	{ 0.932003f, -0.171703f, 0.319199f },
	{ 0.932003f, -0.171703f, 0.319199f },
	{ -0.616057f, -0.722039f, 0.314855f },
	{ -0.616057f, -0.722039f, 0.314855f },
	{ -0.616057f, -0.722039f, 0.314855f },
	{ -0.616057f, -0.722039f, 0.314855f },
	{ 0.173648f, 0.984808f, 0 },
	{ 0.173648f, 0.984808f, 0 },
	{ -0.939693f, -0.34202f, 0 },
	{ -0.939693f, -0.34202f, 0 },
	{ 0.766044f, -0.642788f, 0 },
	{ 0.766044f, -0.642788f, 0 },
	{ -0.317275f, 0.894541f, 0.314854f },
	{ -0.317275f, 0.894541f, 0.314854f },
	{ -0.317275f, 0.894541f, 0.314854f },
	{ -0.317275f, 0.894541f, 0.314854f },
	{ 0.824325f, 0.467548f, 0.319199f },
	{ 0.824325f, 0.467548f, 0.319199f },
	{ 0.824325f, 0.467548f, 0.319199f },
	{ 0.824325f, 0.467548f, 0.319199f },
	{ -0.00781f, -0.9491079f, 0.314855f },
	{ -0.00781f, -0.9491079f, 0.314855f },
	{ -0.00781f, -0.9491079f, 0.314855f },
	{ -0.00781f, -0.9491079f, 0.314855f },
	{ -0.5f, 0.866025f, 0 },
	{ -0.5f, 0.866026f, 0 },
	{ -0.5f, -0.866025f, 0 },
	{ -0.5f, -0.866025f, 0 },
	{ 1, 0, -0.00001f },
	{ 1, 0, -0.00001f },
	{ -0.818047f, 0.481317f, 0.314855f },
	{ -0.818047f, 0.481317f, 0.314855f },
	{ -0.818047f, 0.481317f, 0.314855f },
	{ -0.818047f, 0.481317f, 0.314855f },
	{ 0.817071f, -0.480112f, 0.319199f },
	{ 0.817071f, -0.480112f, 0.319199f },
	{ 0.817071f, -0.480112f, 0.319199f },
	{ 0.817071f, -0.480112f, 0.319199f },
	{ -0.825856f, -0.467791f, 0.314855f },
	{ -0.825856f, -0.467791f, 0.314855f },
	{ -0.825856f, -0.467791f, 0.314855f },
	{ -0.825856f, -0.467791f, 0.314855f },
	{ 0.5f, 0.866026f, 0 },
	{ 0.5f, 0.866025f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.5f, -0.866025f, 0 },
	{ 0.5f, -0.866025f, 0 },
	{ 0.00781f, 0.9491079f, 0.314855f },
	{ 0.00781f, 0.9491079f, 0.314855f },
	{ 0.00781f, 0.9491079f, 0.314855f },
	{ 0.00781f, 0.9491079f, 0.314855f }
};

NJS_MODEL_SADX attach_000D2740 = { vertex_000D2230, normal_000D24B8, LengthOfArray<Sint32>(vertex_000D2230), meshlist_000D2200, matlist_000D202C, LengthOfArray<Uint16>(meshlist_000D2200), LengthOfArray<Uint16>(matlist_000D202C),{ -0.00005f, -0.429176f, 0 }, 18.42267f, NULL };

NJS_OBJECT object_000D2768 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000D2740, -0.00001f, 29, -0.00004f, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Wind gate 4


NJS_MATERIAL matlist_0082F5D4[] = {
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win012_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win016_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win027_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0082F610[] = {
	4, 3, 2, 1, 0,
	4, 7, 6, 5, 4,
	4, 17, 16, 15, 14,
	3, 18, 19, 20,
	3, 19, 21, 20,
	3, 22, 23, 24,
	3, 23, 25, 24,
	3, 32, 33, 34,
	3, 33, 35, 34,
	3, 36, 37, 38,
	3, 37, 39, 38,
	3, 40, 41, 42,
	3, 41, 43, 42,
	3, 50, 51, 52,
	3, 51, 53, 52
};

Sint16 poly_0082F690[] = {
	4, 11, 9, 10, 8,
	4, 9, 13, 8, 12,
	4, 13, 11, 12, 10,
	4, 29, 27, 28, 26,
	4, 27, 31, 26, 30,
	4, 31, 29, 30, 28,
	4, 47, 45, 46, 44,
	4, 45, 49, 44, 48,
	4, 49, 47, 48, 46
};

NJS_COLOR vcolor_0082F6F0[] = {
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFFFFDFBF },
	{ 0xFFFFDFBF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFFFFDFBF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFFFFDFBF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFFFFFFFF },
	{ 0xFFFFDFBF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF }
};

NJS_COLOR vcolor_0082F7B0[] = {
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC }
};

NJS_TEX uv_0082F840[] = {
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 0, 127 },
	{ 0 },
	{ 237, 112 },
	{ 237, 25 },
	{ 237, 25 },
	{ 237, 112 },
	{ 0 },
	{ 237, 112 },
	{ 0, 127 },
	{ 0 },
	{ 237, 25 },
	{ 237, 112 },
	{ 0 },
	{ 237, 112 },
	{ 0, 127 },
	{ 0 },
	{ 237, 25 },
	{ 237, 112 },
	{ 0 },
	{ 237, 112 },
	{ 0, 127 },
	{ 0 },
	{ 237, 25 },
	{ 237, 112 },
	{ 0 },
	{ 237, 112 },
	{ 0, 127 },
	{ 0 },
	{ 237, 25 },
	{ 237, 112 },
	{ 0 },
	{ 237, 112 },
	{ 0, 127 },
	{ 0 },
	{ 237, 25 },
	{ 237, 112 },
	{ 0 },
	{ 237, 112 },
	{ 0, 127 },
	{ 0 }
};

NJS_TEX uv_0082F900[] = {
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0082F990[] = {
	{ NJD_MESHSET_TRIMESH | 1, 15, poly_0082F610, NULL, NULL, vcolor_0082F6F0, uv_0082F840, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_0082F690, NULL, NULL, vcolor_0082F7B0, uv_0082F900, NULL }
};

NJS_VECTOR vertex_0082F9C8[] = {
	{ 0.384942f, -0.79492f, -14.67082f },
	{ -0.582925f, -0.566095f, -11.57918f },
	{ -0.804743f, -9.66915f, -15.68568f },
	{ -2.550839f, -9.361266f, -10.56432f },
	{ -0.810427f, 0.058964f, -14.67082f },
	{ -0.198797f, 0.787876f, -11.57918f },
	{ -7.971366f, 5.531504f, -15.68568f },
	{ -6.831684f, 6.889727f, -10.56432f },
	{ 0.23963f, 1.359038f, -15.05f },
	{ 0.239631f, 1.359038f, -11.2f },
	{ -1.296781f, -0.471985f, -15.05f },
	{ -1.296779f, -0.471985f, -11.2f },
	{ 1.057137f, -0.887045f, -15.05f },
	{ 1.057138f, -0.887045f, -11.2f },
	{ 0.456269f, 0.672369f, -14.67082f },
	{ 0.781711f, -0.221773f, -11.57918f },
	{ 8.776098f, 4.137652f, -15.68568f },
	{ 9.382511f, 2.471548f, -10.56432f },
	{ 0.805847f, -0.361503f, -1.545815f },
	{ -0.082667f, -0.808348f, 1.545815f },
	{ 5.598743f, -7.924275f, -2.560683f },
	{ 4.063252f, -8.810792f, 2.560683f },
	{ -0.658724f, -0.475761f, -1.545815f },
	{ -0.658724f, 0.475765f, 1.545815f },
	{ -9.662004f, -0.886515f, -2.560683f },
	{ -9.662004f, 0.886517f, 2.560683f },
	{ -0.690005f, 1.195116f, -1.925f },
	{ -0.690004f, 1.195118f, 1.925f },
	{ -0.690005f, -1.195114f, -1.925f },
	{ -0.690003f, -1.195112f, 1.925f },
	{ 1.379995f, 0.000002f, -1.925f },
	{ 1.379996f, 0.000002f, 1.925f },
	{ -0.082668f, 0.808352f, -1.545815f },
	{ 0.741379f, 0.332588f, 1.545815f },
	{ 4.063249f, 8.810798f, -2.560683f },
	{ 5.59874f, 7.924281f, 2.560683f },
	{ 0.089848f, -0.878639f, 11.57918f },
	{ -0.741387f, -0.332584f, 14.67082f },
	{ -4.063256f, -8.810792f, 10.56432f },
	{ -5.598747f, -7.924276f, 15.68568f },
	{ -0.741387f, 0.332588f, 11.57918f },
	{ 0.08266f, 0.808352f, 14.67082f },
	{ -5.59875f, 7.92428f, 10.56432f },
	{ -4.063259f, 8.810798f, 15.68568f },
	{ 0.689996f, 1.195118f, 11.2f },
	{ 0.689997f, 1.195118f, 15.05f },
	{ -1.380005f, 0.000002f, 11.2f },
	{ -1.380003f, 0.000002f, 15.05f },
	{ 0.689996f, -1.195112f, 11.2f },
	{ 0.689997f, -1.195112f, 15.05f },
	{ 0.658716f, 0.475765f, 11.57918f },
	{ 0.658716f, -0.475761f, 14.67082f },
	{ 9.661995f, 0.886519f, 10.56432f },
	{ 9.661995f, -0.886514f, 15.68568f }
};

NJS_VECTOR normal_0082FC50[] = {
	{ 0.932003f, -0.171703f, 0.319199f },
	{ 0.932003f, -0.171703f, 0.319199f },
	{ 0.932003f, -0.171703f, 0.319199f },
	{ 0.932003f, -0.171703f, 0.319199f },
	{ -0.616057f, -0.722039f, 0.314855f },
	{ -0.616057f, -0.722039f, 0.314855f },
	{ -0.616057f, -0.722039f, 0.314855f },
	{ -0.616057f, -0.722039f, 0.314855f },
	{ 0.173648f, 0.984808f, 0 },
	{ 0.173648f, 0.984808f, 0 },
	{ -0.939693f, -0.34202f, 0 },
	{ -0.939693f, -0.34202f, 0 },
	{ 0.766044f, -0.642788f, 0 },
	{ 0.766044f, -0.642788f, 0 },
	{ -0.317275f, 0.894541f, 0.314854f },
	{ -0.317275f, 0.894541f, 0.314854f },
	{ -0.317275f, 0.894541f, 0.314854f },
	{ -0.317275f, 0.894541f, 0.314854f },
	{ 0.824325f, 0.467548f, 0.319199f },
	{ 0.824325f, 0.467548f, 0.319199f },
	{ 0.824325f, 0.467548f, 0.319199f },
	{ 0.824325f, 0.467548f, 0.319199f },
	{ -0.00781f, -0.949108f, 0.314855f },
	{ -0.00781f, -0.949108f, 0.314855f },
	{ -0.00781f, -0.949108f, 0.314855f },
	{ -0.00781f, -0.949108f, 0.314855f },
	{ -0.5f, 0.866025f, 0 },
	{ -0.5f, 0.866026f, 0 },
	{ -0.5f, -0.866025f, 0 },
	{ -0.5f, -0.866025f, 0 },
	{ 1, 0, -0.00001f },
	{ 1, 0, -0.00001f },
	{ -0.818047f, 0.481317f, 0.314855f },
	{ -0.818047f, 0.481317f, 0.314855f },
	{ -0.818047f, 0.481317f, 0.314855f },
	{ -0.818047f, 0.481317f, 0.314855f },
	{ 0.817071f, -0.480112f, 0.319199f },
	{ 0.817071f, -0.480112f, 0.319199f },
	{ 0.817071f, -0.480112f, 0.319199f },
	{ 0.817071f, -0.480112f, 0.319199f },
	{ -0.825856f, -0.467791f, 0.314855f },
	{ -0.825856f, -0.467791f, 0.314855f },
	{ -0.825856f, -0.467791f, 0.314855f },
	{ -0.825856f, -0.467791f, 0.314855f },
	{ 0.5f, 0.866026f, 0 },
	{ 0.5f, 0.866025f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.5f, -0.866025f, 0 },
	{ 0.5f, -0.866025f, 0 },
	{ 0.00781f, 0.949108f, 0.314855f },
	{ 0.00781f, 0.949108f, 0.314855f },
	{ 0.00781f, 0.949108f, 0.314855f },
	{ 0.00781f, 0.949108f, 0.314855f }
};

NJS_MODEL_SADX attach_0082FED8 = { vertex_0082F9C8, normal_0082FC50, LengthOfArray<Sint32>(vertex_0082F9C8), meshlist_0082F990, matlist_0082F5D4, LengthOfArray<Uint16>(meshlist_0082F990), LengthOfArray<Uint16>(matlist_0082F5D4),{ -0.00005f, -0.429176f, 0 }, 18.42267f, NULL };

NJS_OBJECT object_0082FF04 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0082FED8, -0.00001f, 29, -0.00004f, 0, 0, 0xFFFF0000, 1, 1, 1, NULL, NULL };


//Wind gate 3


NJS_MATERIAL matlist_0082FF38[] = {
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win027_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win016_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0082FF60[] = {
	3, 0, 1, 2,
	3, 1, 3, 2,
	3, 4, 5, 6,
	3, 5, 7, 6,
	3, 8, 9, 10,
	3, 9, 11, 10,
	3, 18, 19, 20,
	3, 19, 21, 20,
	3, 22, 23, 24,
	3, 23, 25, 24,
	3, 26, 27, 28,
	3, 27, 29, 28
};

Sint16 poly_0082FFC0[] = {
	4, 17, 15, 16, 14,
	4, 15, 13, 14, 12,
	4, 13, 17, 12, 16,
	4, 35, 33, 34, 32,
	4, 33, 31, 32, 30,
	4, 31, 35, 30, 34
};

NJS_COLOR vcolor_00830000[] = {
	{ 0xFFFFFFFF },
	{ 0xFFFFCF9F },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFCF9F },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFCF9F },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFCF9F },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFCF9F },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF }
};

NJS_COLOR vcolor_00830090[] = {
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF }
};

NJS_TEX uv_008300F0[] = {
	{ 206, 20 },
	{ 206, 108 },
	{ 0 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 20 },
	{ 206, 108 },
	{ 0 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 20 },
	{ 206, 108 },
	{ 0 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 20 },
	{ 206, 108 },
	{ 0 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 20 },
	{ 206, 108 },
	{ 0 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 20 },
	{ 206, 108 },
	{ 0 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 }
};

NJS_TEX uv_00830180[] = {
	{ 127, 0 },
	{ 255, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 0 },
	{ 127, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 0 },
	{ 127, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 127, 255 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_008301E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0082FFC0, NULL, NULL, NULL, uv_00830180, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 12, poly_0082FF60, NULL, NULL, NULL, uv_008300F0, NULL }
};

NJS_VECTOR vertex_00830218[] = {
	{ 0.507237f, -2.470515f, -0.521442f },
	{ 0.705196f, -5.389487f, -0.178568f },
	{ 6.817367f, -1.529532f, -4.311975f },
	{ 7.142957f, -6.33047f, -3.748035f },
	{ 0.197958f, -2.470515f, 0.699995f },
	{ -0.19796f, -5.389487f, 0.699995f },
	{ 0.32559f, -1.529532f, 8.059995f },
	{ -0.325591f, -6.33047f, 8.059995f },
	{ -0.705199f, -2.470515f, -0.178568f },
	{ -0.50724f, -5.389487f, -0.521442f },
	{ -7.142962f, -1.529532f, -3.748036f },
	{ -6.817372f, -6.33047f, -4.311973f },
	{ -0.00001f, -5.490001f, -1.452005f },
	{ -0.00001f, -2.370001f, -1.452005f },
	{ -1.25747f, -5.490001f, 0.725996f },
	{ -1.25747f, -2.370001f, 0.725996f },
	{ 1.257468f, -5.490001f, 0.725996f },
	{ 1.257468f, -2.370001f, 0.725996f },
	{ 0.705195f, 4.929485f, 0.178558f },
	{ 0.507236f, 2.010514f, 0.521433f },
	{ 7.142957f, 5.870468f, 3.748026f },
	{ 6.817367f, 1.06953f, 4.311965f },
	{ -0.507241f, 4.929485f, 0.521433f },
	{ -0.7052f, 2.010514f, 0.178558f },
	{ -6.817372f, 5.870468f, 4.311966f },
	{ -7.142962f, 1.06953f, 3.748025f },
	{ -0.197961f, 4.929485f, -0.700005f },
	{ 0.197957f, 2.010514f, -0.700005f },
	{ -0.325592f, 5.870468f, -8.060003f },
	{ 0.325588f, 1.06953f, -8.060003f },
	{ 1.257467f, 1.91f, -0.726004f },
	{ 1.257467f, 5.029999f, -0.726004f },
	{ -1.257471f, 1.91f, -0.726004f },
	{ -1.257471f, 5.029999f, -0.726004f },
	{ -0.00002f, 1.91f, 1.451996f },
	{ -0.00002f, 5.029999f, 1.451996f }
};

NJS_VECTOR normal_008303C8[] = {
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134406f, 0.858167f },
	{ 0.495463f, 0.134406f, 0.858167f },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ 0.495463f, 0.134405f, -0.858168f },
	{ 0.495463f, 0.134405f, -0.858168f },
	{ 0.495463f, 0.134405f, -0.858168f },
	{ 0.495463f, 0.134405f, -0.858168f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.866025f, 0, 0.5f },
	{ -0.866025f, 0, 0.5f },
	{ 0.866025f, 0, 0.5f },
	{ 0.866025f, 0, 0.5f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134406f, -0.858167f },
	{ -0.495463f, 0.134406f, -0.858167f },
	{ -0.495463f, 0.134406f, -0.858167f },
	{ -0.495463f, 0.134406f, -0.858167f },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.866025f, 0, -0.5f },
	{ 0.866025f, 0, -0.5f },
	{ -0.866025f, 0, -0.5f },
	{ -0.866025f, 0, -0.5f },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_00830578 = { vertex_00830218, normal_008303C8, LengthOfArray<Sint32>(vertex_00830218), meshlist_008301E0, matlist_0082FF38, LengthOfArray<Uint16>(meshlist_008301E0), LengthOfArray<Uint16>(matlist_0082FF38),{ -0.00002f, -0.230001f, -0.00004f }, 10.76966f, NULL };

NJS_OBJECT object_008305A4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00830578, 0, 11.9f, -24, 0, 0xFFFF0000, 0, 1, 1, 1, NULL, &object_0082FF04 };

NJS_MATERIAL matlist_000D279C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win027_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win016_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000D27C4[] = {
	4, 3, 2, 1, 0,
	4, 7, 6, 5, 4,
	4, 11, 10, 9, 8,
	4, 21, 20, 19, 18,
	4, 25, 24, 23, 22,
	4, 29, 28, 27, 26
};

Sint16 poly_000D2800[] = {
	4, 17, 15, 16, 14,
	0x8000u | 6, 16, 17, 12, 13, 14, 15,
	4, 35, 33, 34, 32,
	0x8000u | 6, 33, 32, 31, 30, 35, 34
};

NJS_TEX uv_000D2830[] = {
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 206, 20 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 206, 20 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 206, 20 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 206, 20 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 206, 20 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 206, 20 }
};

NJS_TEX uv_000D2890[] = {
	{ 127, 0 },
	{ 255, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 127, 255 },
	{ 127, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 127, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 0, 255 },
	{ 127, 0 },
	{ 127, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_000D28E0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000D2800, NULL, NULL, NULL, uv_000D2890, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000D27C4, NULL, NULL, NULL, uv_000D2830, NULL }
};

NJS_VECTOR vertex_000D2910[] = {
	{ 0.507238f, -2.470515f, -0.5214429f },
	{ 0.705197f, -5.389487f, -0.178568f },
	{ 6.817367f, -1.529532f, -4.311975f },
	{ 7.142958f, -6.33047f, -3.748035f },
	{ 0.197958f, -2.470515f, 0.699995f },
	{ -0.19796f, -5.389487f, 0.699995f },
	{ 0.32559f, -1.529532f, 8.059995f },
	{ -0.32559f, -6.33047f, 8.059995f },
	{ -0.705198f, -2.470515f, -0.178568f },
	{ -0.50724f, -5.389487f, -0.5214429f },
	{ -7.142962f, -1.529532f, -3.748036f },
	{ -6.817371f, -6.33047f, -4.311973f },
	{ 0, -5.490001f, -1.452006f },
	{ 0, -2.370001f, -1.452006f },
	{ -1.257469f, -5.490001f, 0.725996f },
	{ -1.257469f, -2.370001f, 0.725996f },
	{ 1.257469f, -5.490001f, 0.725996f },
	{ 1.257469f, -2.370001f, 0.725996f },
	{ 0.705196f, 4.929485f, 0.178558f },
	{ 0.507237f, 2.010514f, 0.521433f },
	{ 7.142957f, 5.870468f, 3.748026f },
	{ 6.817367f, 1.06953f, 4.311965f },
	{ -0.50724f, 4.929485f, 0.521433f },
	{ -0.7051989f, 2.010514f, 0.178558f },
	{ -6.817371f, 5.870468f, 4.311966f },
	{ -7.142962f, 1.06953f, 3.748025f },
	{ -0.197961f, 4.929485f, -0.700005f },
	{ 0.197957f, 2.010514f, -0.700005f },
	{ -0.325592f, 5.870468f, -8.060002f },
	{ 0.325589f, 1.06953f, -8.060002f },
	{ 1.257467f, 1.91f, -0.7260039f },
	{ 1.257467f, 5.029999f, -0.7260039f },
	{ -1.25747f, 1.91f, -0.7260039f },
	{ -1.25747f, 5.029999f, -0.7260039f },
	{ -0.00002f, 1.91f, 1.451996f },
	{ -0.00002f, 5.029999f, 1.451996f }
};

NJS_VECTOR normal_000D2AC0[] = {
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134405f, 0.858167f },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ 0.495463f, 0.134405f, -0.8581679f },
	{ 0.495463f, 0.134405f, -0.8581679f },
	{ 0.495463f, 0.134405f, -0.8581679f },
	{ 0.495463f, 0.134405f, -0.8581679f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.866025f, 0, 0.5f },
	{ -0.866025f, 0, 0.5f },
	{ 0.866025f, 0, 0.5f },
	{ 0.866025f, 0, 0.5f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134406f, -0.858167f },
	{ -0.495463f, 0.134406f, -0.858167f },
	{ -0.495463f, 0.134406f, -0.858167f },
	{ -0.495463f, 0.134406f, -0.858167f },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.866025f, 0, -0.5f },
	{ 0.866025f, 0, -0.5f },
	{ -0.866025f, 0, -0.5f },
	{ -0.866025f, 0, -0.5f },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_000D2C70 = { vertex_000D2910, normal_000D2AC0, LengthOfArray<Sint32>(vertex_000D2910), meshlist_000D28E0, matlist_000D279C, LengthOfArray<Uint16>(meshlist_000D28E0), LengthOfArray<Uint16>(matlist_000D279C),{ -0.00002f, -0.230001f, -0.00004f }, 10.76965f, NULL };

NJS_OBJECT object_000D2C98 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000D2C70, 0, 11.9f, -24, 0, 0, 0, 1, 1, 1, NULL, &object_000D2768 };

NJS_MATERIAL matlist_000D2CCC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win027_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win016_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000D2CF4[] = {
	4, 1, 0, 3, 2,
	4, 5, 4, 7, 6,
	4, 9, 8, 11, 10,
	4, 19, 18, 21, 20,
	4, 23, 22, 25, 24,
	4, 27, 26, 29, 28
};

Sint16 poly_000D2D30[] = {
	0x8000u | 6, 13, 12, 15, 14, 17, 16,
	4, 12, 16, 13, 17,
	4, 34, 32, 35, 33,
	0x8000u | 6, 35, 34, 31, 30, 33, 32
};

NJS_TEX uv_000D2D60[] = {
	{ 206, 25 },
	{ 206, 108 },
	{ 0 },
	{ 0, 126 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0 },
	{ 0, 126 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0 },
	{ 0, 126 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0 },
	{ 0, 126 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0 },
	{ 0, 126 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0 },
	{ 0, 126 }
};

NJS_TEX uv_000D2DC0[] = {
	{ 255, 0 },
	{ 255, 255 },
	{ 127, 0 },
	{ 127, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 127, 0 },
	{ 127, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_000D2E10[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_000D2D30, NULL, NULL, NULL, uv_000D2DC0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_000D2CF4, NULL, NULL, NULL, uv_000D2D60, NULL }
};

NJS_VECTOR vertex_000D2E40[] = {
	{ -0.507238f, -2.470515f, -0.5214469f },
	{ -0.705197f, -5.389488f, -0.178572f },
	{ -6.817367f, -1.529531f, -4.311977f },
	{ -7.142958f, -6.330471f, -3.74804f },
	{ -0.197958f, -2.470515f, 0.699991f },
	{ 0.19796f, -5.389488f, 0.699991f },
	{ -0.325589f, -1.529531f, 8.05999f },
	{ 0.325592f, -6.330471f, 8.05999f },
	{ 0.705198f, -2.470515f, -0.178572f },
	{ 0.507239f, -5.389488f, -0.5214469f },
	{ 7.142959f, -1.529531f, -3.748041f },
	{ 6.817369f, -6.330471f, -4.311981f },
	{ 0, -5.490002f, -1.45201f },
	{ 0, -2.369999f, -1.45201f },
	{ 1.257469f, -5.490002f, 0.72599f },
	{ 1.257469f, -2.369999f, 0.72599f },
	{ -1.257469f, -5.490002f, 0.725992f },
	{ -1.257469f, -2.369999f, 0.725992f },
	{ 0.19796f, 4.929488f, -0.700007f },
	{ -0.197958f, 2.010516f, -0.700009f },
	{ 0.325591f, 5.870471f, -8.060006f },
	{ -0.32559f, 1.069531f, -8.060005f },
	{ -0.705196f, 4.929488f, 0.178556f },
	{ -0.507237f, 2.010516f, 0.52143f },
	{ -7.142958f, 5.870471f, 3.748024f },
	{ -6.817369f, 1.069531f, 4.311963f },
	{ 0.50724f, 4.929488f, 0.52143f },
	{ 0.7051989f, 2.010516f, 0.178556f },
	{ 6.817371f, 5.870471f, 4.311961f },
	{ 7.142961f, 1.069531f, 3.748023f },
	{ 1.257469f, 1.910001f, -0.726008f },
	{ 1.257469f, 5.030002f, -0.726008f },
	{ 0, 1.910001f, 1.451991f },
	{ 0, 5.030002f, 1.451991f },
	{ -1.257469f, 1.910001f, -0.726008f },
	{ -1.257469f, 5.030002f, -0.726008f }
};

NJS_VECTOR normal_000D2FF0[] = {
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ -0.495464f, 0.134405f, -0.858167f },
	{ -0.495464f, 0.134405f, -0.858167f },
	{ -0.495464f, 0.134405f, -0.858167f },
	{ -0.495464f, 0.134405f, -0.858167f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.866026f, 0, 0.5f },
	{ 0.866026f, 0, 0.5f },
	{ -0.866025f, 0, 0.5f },
	{ -0.866025f, 0, 0.5f },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ 0.495463f, 0.134405f, 0.8581679f },
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134405f, 0.8581679f },
	{ 0.495463f, 0.134405f, 0.8581679f },
	{ 0.495463f, 0.134405f, -0.858167f },
	{ 0.495463f, 0.134405f, -0.8581679f },
	{ 0.495463f, 0.134405f, -0.858167f },
	{ 0.495463f, 0.134405f, -0.858167f },
	{ 0.866025f, 0, -0.5f },
	{ 0.866025f, 0, -0.5f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.866026f, 0, -0.5f },
	{ -0.866026f, 0, -0.5f }
};

NJS_MODEL_SADX attach_000D31A0 = { vertex_000D2E40, normal_000D2FF0, LengthOfArray<Sint32>(vertex_000D2E40), meshlist_000D2E10, matlist_000D2CCC, LengthOfArray<Uint16>(meshlist_000D2E10), LengthOfArray<Uint16>(matlist_000D2CCC),{ 0.000001f, -0.23f, -0.00008999999f }, 10.76965f, NULL };

NJS_OBJECT object_000D31C8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000D31A0, 0, 12.1f, 24, 0, 0, 0, 1, 1, 1, NULL, &object_000D2C98 };

NJS_MATERIAL matlist_000D31FC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win028_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win012_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win017_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win017_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_WINDYTexName_am_win030_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_000D3260[] = {
	4, 5, 3, 4, 2,
	4, 3, 1, 2, 0,
	4, 1, 5, 0, 4,
	4, 28, 26, 29, 27,
	4, 26, 24, 27, 25,
	4, 24, 28, 25, 29,
	4, 35, 33, 34, 32,
	4, 33, 31, 32, 30,
	4, 31, 35, 30, 34
};

Sint16 poly_000D32BA[] = {
	4, 11, 9, 10, 8,
	0x8000u | 6, 9, 8, 7, 6, 11, 10,
	4, 19, 17, 20, 18,
	0x8000u | 6, 17, 18, 15, 16, 19, 20
};

Sint16 poly_000D32EA[] = {
	3, 13, 14, 12,
	3, 21, 23, 22
};

Sint16 poly_000D32FA[] = {
	4, 14, 13, 11, 9,
	0x8000u | 6, 11, 14, 7, 12, 9, 13,
	4, 20, 18, 23, 22,
	4, 18, 16, 22, 21,
	4, 16, 20, 21, 23
};

Sint16 poly_000D3330[] = {
	3, 15, 17, 19,
	3, 8, 6, 10
};

NJS_TEX uv_000D3340[] = {
	{ 0, 3 },
	{ 3, 122 },
	{ 1785, 3 },
	{ 1785, 122 },
	{ 0, 3 },
	{ 3, 122 },
	{ 1785, 3 },
	{ 1785, 122 },
	{ 0, 3 },
	{ 3, 122 },
	{ 1785, 3 },
	{ 1785, 122 },
	{ 0, 3 },
	{ 3, 122 },
	{ 1785, 3 },
	{ 1785, 122 },
	{ 0, 3 },
	{ 3, 122 },
	{ 1785, 3 },
	{ 1785, 122 },
	{ 0, 3 },
	{ 3, 122 },
	{ 1785, 3 },
	{ 1785, 122 },
	{ 0, 3 },
	{ 3, 122 },
	{ 1785, 3 },
	{ 1785, 122 },
	{ 0, 3 },
	{ 3, 122 },
	{ 1785, 3 },
	{ 1785, 122 },
	{ 0, 3 },
	{ 3, 122 },
	{ 1785, 3 },
	{ 1785, 122 }
};

NJS_TEX uv_000D33D0[] = {
	{ 0, -255 },
	{ 251, -255 },
	{ 0, 255 },
	{ 253, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 251, -255 },
	{ 253, 255 },
	{ 509, -255 },
	{ 509, 255 },
	{ 0, 255 },
	{ 253, 255 },
	{ 0, -255 },
	{ 251, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 253, 255 },
	{ 251, -255 },
	{ 509, 255 },
	{ 509, -255 }
};

NJS_TEX uv_000D3420[] = {
	{ 127, 0 },
	{ 0, 95 },
	{ 251, 94 },
	{ 127, 0 },
	{ 0, 95 },
	{ 251, 94 }
};

NJS_TEX uv_000D3438[] = {
	{ 249, 0 },
	{ 510, 0 },
	{ 252, 127 },
	{ 509, 127 },
	{ 509, 127 },
	{ 510, 0 },
	{ 252, 127 },
	{ 249, 0 },
	{ 0, 127 },
	{ 0 },
	{ 249, 0 },
	{ 510, 0 },
	{ 252, 127 },
	{ 509, 127 },
	{ 0, 127 },
	{ 252, 127 },
	{ 0 },
	{ 249, 0 },
	{ 249, 0 },
	{ 510, 0 },
	{ 252, 127 },
	{ 509, 127 }
};

NJS_TEX uv_000D3490[] = {
	{ 0, 2 },
	{ 253, 126 },
	{ 1, 254 },
	{ 0, 2 },
	{ 253, 126 },
	{ 1, 254 }
};

NJS_MESHSET_SADX meshlist_000D34A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_000D3260, NULL, NULL, NULL, uv_000D3340, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_000D32BA, NULL, NULL, NULL, uv_000D33D0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_000D32EA, NULL, NULL, NULL, uv_000D3420, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_000D32FA, NULL, NULL, NULL, uv_000D3438, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_000D3330, NULL, NULL, NULL, uv_000D3490, NULL }
};

NJS_VECTOR vertex_000D3520[] = {
	{ 0.573422f, 0.024154f, 24.28879f },
	{ 0.573422f, 19.54915f, 24.28879f },
	{ 0, 0.024154f, 23.32239f },
	{ 0, 19.54915f, 23.32239f },
	{ -0.5734209f, 0.024154f, 24.28879f },
	{ -0.5734209f, 19.54915f, 24.28879f },
	{ 1.997271f, 19.54915f, 25.41752f },
	{ 2.305922f, 30.46762f, 25.62f },
	{ 0, 19.54915f, 22.05624f },
	{ 0, 30.46762f, 21.85675f },
	{ -1.997271f, 19.54915f, 25.41752f },
	{ -2.305922f, 30.46762f, 25.62f },
	{ 1.688619f, 32.01473f, 25.2636f },
	{ 0, 32.01473f, 22.59107f },
	{ -1.68862f, 32.01473f, 25.2636f },
	{ 1.997271f, 19.54915f, -25.41752f },
	{ 2.305922f, 30.46762f, -25.62f },
	{ 0, 19.54915f, -22.05624f },
	{ 0, 30.46762f, -21.85675f },
	{ -1.997271f, 19.54915f, -25.41752f },
	{ -2.305922f, 30.46762f, -25.62f },
	{ 1.688619f, 32.01473f, -25.2636f },
	{ 0, 32.01473f, -22.59107f },
	{ -1.68862f, 32.01473f, -25.2636f },
	{ 0.573422f, 0.024154f, -24.2888f },
	{ 0.573422f, 19.54915f, -24.2888f },
	{ 0, 0.024154f, -23.3224f },
	{ 0, 19.54915f, -23.3224f },
	{ -0.5734209f, 0.024154f, -24.2888f },
	{ -0.5734209f, 19.54915f, -24.2888f },
	{ 0.609682f, 29.39104f, -23.7f },
	{ 0.609682f, 29.39104f, 23.70001f },
	{ -0.609682f, 29.39104f, -23.7f },
	{ -0.609682f, 29.39104f, 23.70001f },
	{ 0, 28.33504f, -23.7f },
	{ 0, 28.33504f, 23.70001f }
};

NJS_VECTOR normal_000D36D0[] = {
	{ 0.868991f, 0, 0.494828f },
	{ 0.868991f, 0, 0.494828f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.868991f, 0, 0.494829f },
	{ -0.868991f, 0, 0.494829f },
	{ 0.718549f, -0.565938f, 0.40423f },
	{ 0.853997f, 0.191446f, 0.483773f },
	{ 0.000043f, -0.560587f, -0.828095f },
	{ -0.002468f, 0.176091f, -0.9843709f },
	{ -0.716757f, -0.568884f, 0.403274f },
	{ -0.857947f, 0.175365f, 0.48288f },
	{ 0.605079f, 0.721488f, 0.336652f },
	{ -0.004122f, 0.710147f, -0.704042f },
	{ -0.61822f, 0.7092879f, 0.338695f },
	{ 0.718549f, -0.565938f, -0.40423f },
	{ 0.853997f, 0.191446f, -0.483773f },
	{ 0.000043f, -0.560587f, 0.828095f },
	{ -0.002468f, 0.176091f, 0.9843709f },
	{ -0.716757f, -0.568884f, -0.403274f },
	{ -0.857947f, 0.175365f, -0.48288f },
	{ 0.605079f, 0.721488f, -0.336652f },
	{ -0.004122f, 0.710147f, 0.704042f },
	{ -0.61822f, 0.7092879f, -0.338695f },
	{ 0.868991f, 0, -0.494828f },
	{ 0.868991f, 0, -0.494828f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.868991f, 0, -0.494829f },
	{ -0.868991f, 0, -0.494829f },
	{ 0.866025f, 0.5f, 0 },
	{ 0.866025f, 0.5f, 0 },
	{ -0.866026f, 0.5f, 0 },
	{ -0.866026f, 0.5f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 }
};

NJS_MODEL_SADX attach_000D3880 = { vertex_000D3520, normal_000D36D0, LengthOfArray<Sint32>(vertex_000D3520), meshlist_000D34A8, matlist_000D31FC, LengthOfArray<Uint16>(meshlist_000D34A8), LengthOfArray<Uint16>(matlist_000D31FC),{ 0, 16.01944f, 0 }, 30.2032f, NULL };

NJS_OBJECT object_000D38A8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_000D3880, 9.599998f, 0, 0.000004f, 0, 0, 0, 1, 1, 1, &object_000D31C8, NULL };

//Wind gate 2


NJS_MATERIAL matlist_008305D8[] = {
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win016_64, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0x00FFFFFF }, 11, OBJ_WINDYTexName_am_win027_32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00830600[] = {
	3, 2, 3, 0,
	3, 3, 1, 0,
	3, 6, 7, 4,
	3, 7, 5, 4,
	3, 10, 11, 8,
	3, 11, 9, 8,
	3, 20, 21, 18,
	3, 21, 19, 18,
	3, 24, 25, 22,
	3, 25, 23, 22,
	3, 28, 29, 26,
	3, 29, 27, 26
};

Sint16 poly_00830660[] = {
	4, 16, 14, 17, 15,
	4, 14, 12, 15, 13,
	4, 12, 16, 13, 17,
	4, 34, 32, 35, 33,
	4, 32, 30, 33, 31,
	4, 30, 34, 31, 35
};

NJS_COLOR vcolor_008306A0[] = {
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFFFFF },
	{ 0xFF9FCFFF },
	{ 0xFFFFCF9F },
	{ 0xFFFFFFFF }
};

NJS_COLOR vcolor_00830730[] = {
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA },
	{ 0xFFAAAAAA }
};

NJS_TEX uv_00830790[] = {
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 0 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 0 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 0 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 0 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 0 },
	{ 206, 25 },
	{ 206, 108 },
	{ 0, 126 },
	{ 0 },
	{ 206, 108 },
	{ 0 },
	{ 206, 25 },
	{ 206, 108 }
};

NJS_TEX uv_00830820[] = {
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 0, 255 },
	{ 127, 255 },
	{ 0 },
	{ 127, 0 },
	{ 127, 255 },
	{ 255, 255 },
	{ 127, 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00830880[] = {
	{ NJD_MESHSET_TRIMESH | 0, 12, poly_00830600, NULL, NULL, NULL, uv_00830790, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 6, poly_00830660, NULL, NULL, NULL, uv_00830820, NULL }
};

NJS_VECTOR vertex_008308B8[] = {
	{ -0.507238f, -2.470515f, -0.521447f },
	{ -0.705197f, -5.389488f, -0.178572f },
	{ -6.817368f, -1.529531f, -4.311977f },
	{ -7.142959f, -6.330471f, -3.74804f },
	{ -0.197959f, -2.470515f, 0.69999f },
	{ 0.197959f, -5.389488f, 0.69999f },
	{ -0.32559f, -1.529531f, 8.05999f },
	{ 0.325591f, -6.330471f, 8.05999f },
	{ 0.705198f, -2.470515f, -0.178572f },
	{ 0.507239f, -5.389488f, -0.521447f },
	{ 7.142959f, -1.529531f, -3.748041f },
	{ 6.817369f, -6.330471f, -4.311981f },
	{ 0, -5.490002f, -1.45201f },
	{ 0, -2.369999f, -1.45201f },
	{ 1.257469f, -5.490002f, 0.725989f },
	{ 1.257469f, -2.369999f, 0.725989f },
	{ -1.257469f, -5.490002f, 0.725991f },
	{ -1.257469f, -2.369999f, 0.725991f },
	{ 0.19796f, 4.929488f, -0.700007f },
	{ -0.197958f, 2.010516f, -0.700009f },
	{ 0.32559f, 5.870471f, -8.060007f },
	{ -0.325591f, 1.069531f, -8.060006f },
	{ -0.705197f, 4.929488f, 0.178556f },
	{ -0.507238f, 2.010516f, 0.52143f },
	{ -7.142959f, 5.870471f, 3.748024f },
	{ -6.81737f, 1.069531f, 4.311963f },
	{ 0.50724f, 4.929488f, 0.52143f },
	{ 0.705198f, 2.010516f, 0.178556f },
	{ 6.81737f, 5.870471f, 4.311961f },
	{ 7.14296f, 1.069531f, 3.748023f },
	{ 1.257469f, 1.910001f, -0.726008f },
	{ 1.257469f, 5.030002f, -0.726008f },
	{ 0, 1.910001f, 1.451991f },
	{ 0, 5.030002f, 1.451991f },
	{ -1.257469f, 1.910001f, -0.726008f },
	{ -1.257469f, 5.030002f, -0.726008f }
};

NJS_VECTOR normal_00830A68[] = {
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ -0.495463f, 0.134405f, 0.858167f },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ 0.990926f, 0.134405f, 0 },
	{ -0.495464f, 0.134405f, -0.858167f },
	{ -0.495464f, 0.134405f, -0.858167f },
	{ -0.495464f, 0.134405f, -0.858167f },
	{ -0.495464f, 0.134405f, -0.858167f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.866026f, 0, 0.5f },
	{ 0.866026f, 0, 0.5f },
	{ -0.866025f, 0, 0.5f },
	{ -0.866025f, 0, 0.5f },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ -0.990926f, 0.134405f, 0 },
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134405f, 0.858167f },
	{ 0.495463f, 0.134405f, -0.858167f },
	{ 0.495463f, 0.134405f, -0.858167f },
	{ 0.495463f, 0.134405f, -0.858167f },
	{ 0.495463f, 0.134405f, -0.858167f },
	{ 0.866025f, 0, -0.5f },
	{ 0.866025f, 0, -0.5f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.866025f, 0, -0.5f },
	{ -0.866025f, 0, -0.5f }
};

NJS_MODEL_SADX attach_00830C18 = { vertex_008308B8, normal_00830A68, LengthOfArray<Sint32>(vertex_008308B8), meshlist_00830880, matlist_008305D8, LengthOfArray<Uint16>(meshlist_00830880), LengthOfArray<Uint16>(matlist_008305D8),{ 0.000001f, -0.23f, -0.00009f }, 10.76965f, NULL };

NJS_OBJECT object_00830C44 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00830C18, 0, 12.1f, 24, 0, 0x10000, 0, 1, 1, 1, NULL, &object_008305A4 };