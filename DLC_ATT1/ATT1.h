#include <SADXModLoader.h>

NJS_TEXNAME textures_att1[8];
NJS_TEXLIST texlist_att1 = { arrayptrandlength(textures_att1) };

//Rotating thing

NJS_MATERIAL matlist_00000004[] = {
	{ { 0x65B2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x65B2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0000002C[] = {
	4, 13, 12, 5, 4,
	4, 9, 8, 1, 0,
	4, 11, 10, 3, 2,
	4, 15, 14, 7, 6
};

Sint16 poly_00000054[] = {
	4, 14, 13, 6, 5,
	4, 8, 15, 0, 7,
	4, 10, 9, 2, 1,
	4, 12, 11, 4, 3
};

NJS_TEX uv_0000007C[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_000000BC[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_000000FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0000002C, NULL, NULL, NULL, uv_0000007C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00000054, NULL, NULL, NULL, uv_000000BC, NULL }
};

NJS_VECTOR vertex_0000012C[] = {
	{ 39.88842f, -5.936027f, 16.52233f },
	{ 39.88843f, -5.936027f, -16.52233f },
	{ 16.52233f, -5.936027f, -39.88842f },
	{ -16.52233f, -5.936027f, -39.88843f },
	{ -39.88842f, -5.936027f, -16.52233f },
	{ -39.88843f, -5.936027f, 16.52233f },
	{ -16.52233f, -5.936027f, 39.88842f },
	{ 16.52233f, -5.936027f, 39.88843f },
	{ 43.17493f, 17.88668f, 17.88364f },
	{ 43.17493f, 17.88668f, -17.88364f },
	{ 17.88364f, 17.88668f, -43.17493f },
	{ -17.88364f, 17.88668f, -43.17493f },
	{ -43.17493f, 17.88668f, -17.88364f },
	{ -43.17493f, 17.88668f, 17.88364f },
	{ -17.88364f, 17.88668f, 43.17493f },
	{ 17.88364f, 17.88668f, 43.17493f }
};

NJS_VECTOR normal_000001EC[] = {
	{ 0.913749f, -0.147686f, 0.378487f },
	{ 0.913749f, -0.147686f, -0.378487f },
	{ 0.378487f, -0.147686f, -0.913749f },
	{ -0.378487f, -0.147686f, -0.913749f },
	{ -0.913749f, -0.147686f, -0.378487f },
	{ -0.913749f, -0.147686f, 0.378487f },
	{ -0.378487f, -0.147686f, 0.913749f },
	{ 0.378487f, -0.147686f, 0.913749f },
	{ 0.913749f, -0.147686f, 0.378487f },
	{ 0.913749f, -0.147686f, -0.378487f },
	{ 0.378487f, -0.147686f, -0.913749f },
	{ -0.378487f, -0.147686f, -0.913749f },
	{ -0.913749f, -0.147686f, -0.378487f },
	{ -0.913749f, -0.147686f, 0.378487f },
	{ -0.378487f, -0.147686f, 0.913749f },
	{ 0.378487f, -0.147686f, 0.913749f }
};

NJS_MODEL_SADX attach_000002AC = { vertex_0000012C, normal_000001EC, LengthOfArray<Sint32>(vertex_0000012C), meshlist_000000FC, matlist_00000004, LengthOfArray<Uint16>(meshlist_000000FC), LengthOfArray<Uint16>(matlist_00000004),{ 0, 5.975329f, 0 }, 61.05858f, NULL };

NJS_OBJECT object_000002D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000002AC, 0, -18.47759f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00000308[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

NJS_MATERIAL matlist_00000308_2[] = {
	{ { 0xCCB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xCCB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
};
Sint16 poly_00000394[] = {
	6, 40, 41, 17, 34, 36, 35,
	0x8000u | 6, 37, 36, 38, 17, 39, 40
};

Sint16 poly_000003B0[] = {
	3, 44, 43, 16,
	9, 43, 42, 16, 32, 30, 31, 29, 47, 46,
	0x8000u | 5, 29, 30, 28, 16, 44,
	3, 20, 42, 43,
	8, 46, 45, 27, 25, 26, 24, 44, 43,
	0x8000u | 6, 46, 29, 27, 28, 26, 44,
	0x8000u | 7, 47, 48, 31, 33, 32, 18, 42,
	0x8000u | 5, 48, 49, 33, 19, 18,
	3, 49, 19, 50,
	0x8000u | 6, 50, 21, 19, 20, 18, 42,
	3, 50, 21, 51,
	6, 52, 51, 23, 21, 22, 20,
	8, 45, 52, 25, 23, 24, 22, 43, 20
};

Sint16 poly_0000045A[] = {
	4, 13, 12, 5, 4,
	4, 9, 8, 1, 0,
	4, 11, 10, 3, 2,
	4, 15, 14, 7, 6
};

Sint16 poly_00000482[] = {
	4, 14, 13, 6, 5,
	4, 8, 15, 0, 7,
	4, 10, 9, 2, 1,
	4, 12, 11, 4, 3
};

Sint16 poly_000004AA[] = {
	4, 34, 49, 35, 50,
	4, 41, 48, 34, 49,
	4, 35, 50, 36, 51,
	4, 36, 51, 37, 52,
	4, 40, 47, 41, 48,
	4, 37, 52, 38, 45,
	4, 39, 46, 40, 47,
	4, 38, 45, 39, 46
};

NJS_TEX uv_000004FC[] = {
	{ 127, 0 },
	{ 37, 37 },
	{ 127, 127 },
	{ 0, 127 },
	{ 127, 255 },
	{ 37, 217 },
	{ 217, 217 },
	{ 127, 255 },
	{ 255, 127 },
	{ 127, 127 },
	{ 217, 37 },
	{ 127, 0 }
};

NJS_TEX uv_0000052C[] = {
	{ 124, -121 },
	{ 315, -121 },
	{ 188, -121 },
	{ 315, -121 },
	{ 251, -121 },
	{ 188, -121 },
	{ 220, -1008 },
	{ 188, -1008 },
	{ 188, -1556 },
	{ 156, -1556 },
	{ 188, -1956 },
	{ 156, -1956 },
	{ 156, -1556 },
	{ 188, -1008 },
	{ 156, -1008 },
	{ 188, -121 },
	{ 124, -121 },
	{ 28, -1008 },
	{ -3, -121 },
	{ 60, -121 },
	{ 156, -1956 },
	{ 124, -1956 },
	{ 124, -1556 },
	{ 92, -1556 },
	{ 124, -1008 },
	{ 92, -1008 },
	{ 124, -121 },
	{ 60, -121 },
	{ 156, -1956 },
	{ 156, -1556 },
	{ 124, -1556 },
	{ 156, -1008 },
	{ 124, -1008 },
	{ 124, -121 },
	{ 188, -1956 },
	{ 220, -1956 },
	{ 188, -1556 },
	{ 220, -1556 },
	{ 220, -1008 },
	{ 251, -1008 },
	{ 251, -121 },
	{ 220, -1956 },
	{ 251, -1956 },
	{ 220, -1556 },
	{ 251, -1556 },
	{ 251, -1008 },
	{ -3, -1956 },
	{ -3, -1556 },
	{ 28, -1956 },
	{ 28, -1956 },
	{ 28, -1556 },
	{ -3, -1556 },
	{ 28, -1008 },
	{ -3, -1008 },
	{ -3, -121 },
	{ 28, -1956 },
	{ 28, -1556 },
	{ 60, -1956 },
	{ 92, -1956 },
	{ 60, -1956 },
	{ 60, -1556 },
	{ 28, -1556 },
	{ 60, -1008 },
	{ 28, -1008 },
	{ 124, -1956 },
	{ 92, -1956 },
	{ 92, -1556 },
	{ 60, -1556 },
	{ 92, -1008 },
	{ 60, -1008 },
	{ 60, -121 },
	{ 28, -1008 }
};

NJS_TEX uv_0000064C[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0000068C[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_000006CC[] = {
	{ 5, 88 },
	{ 5, 196 },
	{ 240, 87 },
	{ 241, 196 },
	{ 5, 88 },
	{ 5, 196 },
	{ 240, 87 },
	{ 241, 196 },
	{ 5, 88 },
	{ 5, 196 },
	{ 240, 87 },
	{ 241, 196 },
	{ 5, 88 },
	{ 5, 196 },
	{ 240, 87 },
	{ 241, 196 },
	{ 5, 88 },
	{ 5, 196 },
	{ 240, 87 },
	{ 241, 196 },
	{ 5, 88 },
	{ 5, 196 },
	{ 240, 87 },
	{ 241, 196 },
	{ 5, 88 },
	{ 5, 196 },
	{ 240, 87 },
	{ 241, 196 },
	{ 5, 88 },
	{ 5, 196 },
	{ 240, 87 },
	{ 241, 196 }
};

NJS_MESHSET_SADX meshlist_0000074C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00000394, NULL, NULL, NULL, uv_000004FC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 13, poly_000003B0, NULL, NULL, NULL, uv_0000052C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_000004AA, NULL, NULL, NULL, uv_000006CC, NULL }
};

NJS_MESHSET_SADX meshlist_0000074C_2[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0000045A, NULL, NULL, NULL, uv_0000064C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00000482, NULL, NULL, NULL, uv_0000068C, NULL },
};

NJS_VECTOR vertex_000007C4[] = {
	{ 37.98897f, -23.30734f, 15.73555f },
	{ 37.98898f, -23.30734f, -15.73555f },
	{ 15.73555f, -23.30734f, -37.98897f },
	{ -15.73555f, -23.30734f, -37.98898f },
	{ -37.98897f, -23.30734f, -15.73555f },
	{ -37.98898f, -23.30734f, 15.73555f },
	{ -15.73555f, -23.30734f, 37.98897f },
	{ 15.73555f, -23.30734f, 37.98898f },
	{ 41.11898f, -3, 17.03204f },
	{ 41.11898f, -3, -17.03204f },
	{ 17.03204f, -3, -41.11898f },
	{ -17.03204f, -3, -41.11898f },
	{ -41.11898f, -3, -17.03204f },
	{ -41.11898f, -3, 17.03204f },
	{ -17.03204f, -3, 41.11898f },
	{ 17.03204f, -3, 41.11898f },
	{ 0, -36.95518f, 11.32743f },
	{ 0, 1, 0 },
	{ 28.28427f, -28.28427f, 0 },
	{ 36.95518f, -15.30734f, 0 },
	{ 20, -28.28427f, -20 },
	{ 26.13126f, -15.30734f, -26.13126f },
	{ 0, -28.28427f, -28.28427f },
	{ 0, -15.30734f, -36.95518f },
	{ -20, -28.28427f, -20 },
	{ -26.13126f, -15.30734f, -26.13126f },
	{ -28.28427f, -28.28427f, 0 },
	{ -36.95518f, -15.30734f, 0 },
	{ -20, -28.28427f, 20 },
	{ -26.13126f, -15.30734f, 26.13126f },
	{ 0, -28.28427f, 28.28427f },
	{ 0, -15.30734f, 36.95518f },
	{ 20, -28.28427f, 20 },
	{ 26.13126f, -15.30734f, 26.13126f },
	{ 37.99999f, 1.000002f, 0 },
	{ 26.87006f, 1.000002f, -26.87006f },
	{ 0, 1.000002f, -37.99999f },
	{ -26.87006f, 1.000002f, -26.87006f },
	{ -37.99999f, 1.000002f, 0 },
	{ -26.87006f, 1.000002f, 26.87006f },
	{ 0, 1.000002f, 37.99999f },
	{ 26.87006f, 1.000002f, 26.87006f },
	{ 11.32743f, -36.95518f, 0 },
	{ 0, -36.95518f, -11.32743f },
	{ -11.32743f, -36.95518f, 0 },
	{ -40, -1.999998f, 0 },
	{ -28.28427f, -1.999998f, 28.28427f },
	{ 0, -1.999998f, 40 },
	{ 28.28427f, -1.999998f, 28.28427f },
	{ 40, -1.999998f, 0 },
	{ 28.28427f, -1.999998f, -28.28427f },
	{ 0, -1.999998f, -40 },
	{ -28.28427f, -1.999998f, -28.28427f }
};

NJS_VECTOR normal_00000A40[] = {
	{ 0.911285f, -0.164557f, 0.377467f },
	{ 0.911285f, -0.164557f, -0.377466f },
	{ 0.377467f, -0.164557f, -0.911285f },
	{ -0.377466f, -0.164557f, -0.911285f },
	{ -0.911285f, -0.164557f, -0.377467f },
	{ -0.911285f, -0.164557f, 0.377466f },
	{ -0.377467f, -0.164557f, 0.911285f },
	{ 0.377466f, -0.164557f, 0.911285f },
	{ 0.911285f, -0.164557f, 0.377467f },
	{ 0.911285f, -0.164557f, -0.377467f },
	{ 0.377467f, -0.164557f, -0.911285f },
	{ -0.377466f, -0.164557f, -0.911285f },
	{ -0.911285f, -0.164557f, -0.377467f },
	{ -0.911285f, -0.164557f, 0.377466f },
	{ -0.377467f, -0.164557f, 0.911285f },
	{ 0.377466f, -0.164557f, 0.911285f },
	{ 0, -0.961372f, 0.275253f },
	{ 0, 1, 0 },
	{ 0.696803f, -0.717262f, 0 },
	{ 0.924735f, -0.380611f, 0 },
	{ 0.488611f, -0.722855f, -0.488611f },
	{ 0.653887f, -0.380611f, -0.653887f },
	{ 0, -0.717262f, -0.696803f },
	{ 0, -0.380611f, -0.924735f },
	{ -0.488611f, -0.722854f, -0.488611f },
	{ -0.653887f, -0.380611f, -0.653887f },
	{ -0.696803f, -0.717262f, 0 },
	{ -0.924735f, -0.380611f, 0 },
	{ -0.488611f, -0.722854f, 0.488611f },
	{ -0.653887f, -0.380611f, 0.653887f },
	{ 0, -0.717262f, 0.696803f },
	{ 0, -0.380611f, 0.924735f },
	{ 0.488611f, -0.722855f, 0.488611f },
	{ 0.653887f, -0.380611f, 0.653887f },
	{ 0.553214f, 0.833039f, 0 },
	{ 0.391181f, 0.833039f, -0.391181f },
	{ 0, 0.833039f, -0.553214f },
	{ -0.391181f, 0.833039f, -0.391181f },
	{ -0.553214f, 0.833039f, 0 },
	{ -0.391181f, 0.833039f, 0.391181f },
	{ 0, 0.833039f, 0.553214f },
	{ 0.391181f, 0.833039f, 0.391181f },
	{ 0.275253f, -0.961372f, 0 },
	{ 0, -0.961372f, -0.275253f },
	{ -0.275253f, -0.961372f, 0 },
	{ -0.986212f, 0.165486f, 0 },
	{ -0.697357f, 0.165486f, 0.697357f },
	{ 0, 0.165486f, 0.986212f },
	{ 0.697357f, 0.165486f, 0.697357f },
	{ 0.986212f, 0.165486f, 0 },
	{ 0.697357f, 0.165486f, -0.697357f },
	{ 0, 0.165486f, -0.986212f },
	{ -0.697357f, 0.165486f, -0.697357f }
};

NJS_MODEL_SADX attach_00000CBC = { vertex_000007C4, normal_00000A40, LengthOfArray<Sint32>(vertex_000007C4), meshlist_0000074C, matlist_00000308, LengthOfArray<Uint16>(meshlist_0000074C), LengthOfArray<Uint16>(matlist_00000308),{ 0, -17.97759f, 0 }, 58.15102f, NULL };

NJS_MODEL_SADX attach_00000CBC_2 = { vertex_000007C4, normal_00000A40, LengthOfArray<Sint32>(vertex_000007C4), meshlist_0000074C_2, matlist_00000308_2, LengthOfArray<Uint16>(meshlist_0000074C_2), LengthOfArray<Uint16>(matlist_00000308_2),{ 0, -17.97759f, 0 }, 58.15102f, NULL };

NJS_OBJECT object_00000CE4_2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00000CBC_2, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_000002D4, NULL };

NJS_OBJECT object_00000CE4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00000CBC, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00000CE4_2, NULL };

//Poster

NJS_MATERIAL matlist_00116FA0X[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

NJS_MATERIAL matlist_00116FA0Z[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

NJS_MATERIAL matlist_00116FA0W[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00116FB4X[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00116FC0X[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 0 },
	{ 255 },
};

NJS_TEX uv_00116FC0Y[] = {
	{ 255, 0 },
	{ 128 },
	{ 255, 255 },
	{ 128, 255 },
};

NJS_MESHSET_SADX meshlist_00116FD0X[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00116FB4X, NULL, NULL, NULL, uv_00116FC0X, NULL }
};

NJS_MESHSET_SADX meshlist_00116FD0Y[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00116FB4X, NULL, NULL, NULL, uv_00116FC0Y, NULL }
};

NJS_VECTOR vertex_00116FE8X[] = {
	{ 10.0f, 10.0f, 0 },
	{ -10.0f, 10.0f, 0 },
	{ 10.0f, -10.0f, 0 },
	{ -10.0f, -10.0f, 0 }
};

NJS_VECTOR vertex_00116FE8Y[] = {
	{ 0, -10.0f, 0 },
	{ 10.0f, -10.0f, 0 },
	{ 0, 10.0f, 0 },
	{ 10.0f, 10.0f, 0 }
};

NJS_VECTOR normal_00117018X[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_00117048X = { vertex_00116FE8X, normal_00117018X, LengthOfArray(vertex_00116FE8X), meshlist_00116FD0X, matlist_00116FA0X, LengthOfArray(meshlist_00116FD0X), LengthOfArray(matlist_00116FA0X),{ 0, 1.5f, 0 }, 11.71537f, NULL };

NJS_MODEL_SADX attach_00117048Z = { vertex_00116FE8X, normal_00117018X, LengthOfArray(vertex_00116FE8X), meshlist_00116FD0X, matlist_00116FA0Z, LengthOfArray(meshlist_00116FD0X), LengthOfArray(matlist_00116FA0Z),{ 0, 1.5f, 0 }, 11.71537f, NULL };

NJS_MODEL_SADX attach_00117048W = { vertex_00116FE8X, normal_00117018X, LengthOfArray(vertex_00116FE8X), meshlist_00116FD0X, matlist_00116FA0W, LengthOfArray(meshlist_00116FD0X), LengthOfArray(matlist_00116FA0W),{ 0, 1.5f, 0 }, 11.71537f, NULL };

NJS_OBJECT billboard_big = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00117048X, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT poster_start = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00117048Z, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT poster_goal = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00117048W, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
