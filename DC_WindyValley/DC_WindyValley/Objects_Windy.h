#include <SADXModLoader.h>

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
