#include "SADXModLoader.h"

NJS_MATERIAL matlist_001F7C14[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F7C8C[] = {
	4, 14, 11, 12, 13,
	4, 3, 4, 9, 10,
	4, 33, 30, 31, 32,
	4, 22, 23, 28, 29
};

Sint16 poly_001F7CB4[] = {
	4, 5, 10, 7, 12,
	4, 9, 6, 13, 8,
	4, 24, 29, 26, 31,
	4, 28, 25, 32, 27
};

Sint16 poly_001F7CDC[] = {
	6, 4, 2, 10, 0, 14, 1
};

Sint16 poly_001F7CEA[] = {
	4, 6, 5, 8, 7,
	4, 25, 24, 27, 26
};

Sint16 poly_001F7CFE[] = {
	4, 18, 17, 16, 15
};

Sint16 poly_001F7D08[] = {
	6, 23, 21, 29, 19, 33, 20
};

NJS_TEX uv_001F7D18[] = {
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 }
};

NJS_TEX uv_001F7D58[] = {
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 254, -254 }
};

NJS_TEX uv_001F7D98[] = {
	{ 254, 255 },
	{ 0, 255 },
	{ 254, 96 },
	{ 0, 96 },
	{ 254, -255 },
	{ 0, -255 }
};

NJS_TEX uv_001F7DB0[] = {
	{ 251, 251 },
	{ 0, 251 },
	{ 251, 0 },
	{ 0 },
	{ 0, 251 },
	{ 251, 251 },
	{ 0 },
	{ 251, 0 }
};

NJS_TEX uv_001F7DD0[] = {
	{ 509, 255 },
	{ 0, 255 },
	{ 509, 0 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_001F7DE0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001F7C8C, NULL, NULL, NULL, uv_001F7D18, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001F7CB4, NULL, NULL, NULL, uv_001F7D58, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001F7CDC, NULL, NULL, NULL, uv_001F7D98, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001F7CEA, NULL, NULL, NULL, uv_001F7DB0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001F7CFE, NULL, NULL, NULL, uv_001F7DD0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001F7D08, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001F7E70[] = {
	{ 4.25f, -3.399998f, -0.51f },
	{ 4.25f, 9, -0.51f },
	{ 4.25f, -9, -0.51f },
	{ -4.249994f, -9, 0.49f },
	{ 4.25f, -9, 0.49f },
	{ 2.25f, -3.399998f, 0.49f },
	{ -2.250023f, -3.399998f, 0.49f },
	{ 2.25f, 6.800001f, 0.49f },
	{ -2.250023f, 6.800001f, 0.49f },
	{ -4.249994f, -3.399998f, 0.49f },
	{ 4.25f, -3.399998f, 0.49f },
	{ -4.249994f, 9, 0.49f },
	{ 4.25f, 6.800001f, 0.49f },
	{ -4.249994f, 6.800001f, 0.49f },
	{ 4.25f, 9, 0.49f },
	{ 3.049992f, 0.5f, 0.5100009f },
	{ 3.049992f, -1.5f, 0.5100009f },
	{ 3.749989f, 0.5f, 0.5100009f },
	{ 3.749989f, -1.5f, 0.5100009f },
	{ -4.25f, -3.399998f, 0.49f },
	{ -4.25f, 9, 0.49f },
	{ -4.25f, -9, 0.49f },
	{ 4.249992f, -9, -0.5100009f },
	{ -4.25f, -9, -0.51f },
	{ -2.25f, -3.399998f, -0.5100009f },
	{ 2.250023f, -3.399998f, -0.5100009f },
	{ -2.25f, 6.800001f, -0.5100009f },
	{ 2.250023f, 6.800001f, -0.5100009f },
	{ 4.249992f, -3.399998f, -0.5100009f },
	{ -4.25f, -3.399998f, -0.51f },
	{ 4.249992f, 9, -0.5100009f },
	{ -4.25f, 6.800001f, -0.51f },
	{ 4.249992f, 6.800001f, -0.5100009f },
	{ -4.25f, 9, -0.51f }
};

NJS_VECTOR normal_001F8008[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_001F81A0 = { vertex_001F7E70, normal_001F8008, LengthOfArray(vertex_001F7E70), meshlist_001F7DE0, matlist_001F7C14, LengthOfArray(meshlist_001F7DE0), LengthOfArray(matlist_001F7C14),{ 0 }, 9.014439f, NULL };

NJS_OBJECT object_001F81C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F81A0, 44.25f, 20.5f, -14.00999f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F81FC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F8274[] = {
	4, 12, 13, 14, 11,
	4, 9, 10, 3, 4,
	4, 31, 32, 33, 30,
	4, 28, 29, 22, 23
};

Sint16 poly_001F829C[] = {
	4, 7, 12, 5, 10,
	4, 13, 8, 9, 6,
	4, 26, 31, 24, 29,
	4, 32, 27, 28, 25
};

Sint16 poly_001F82C4[] = {
	6, 2, 4, 0, 10, 1, 14
};

Sint16 poly_001F82D2[] = {
	4, 8, 7, 6, 5,
	4, 27, 26, 25, 24
};

Sint16 poly_001F82E6[] = {
	4, 16, 15, 18, 17
};

Sint16 poly_001F82F0[] = {
	6, 21, 23, 19, 29, 20, 33
};

NJS_TEX uv_001F8300[] = {
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 }
};

NJS_TEX uv_001F8340[] = {
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 254, 254 }
};

NJS_TEX uv_001F8380[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 96 },
	{ 254, 96 },
	{ 0, -255 },
	{ 254, -255 }
};

NJS_TEX uv_001F8398[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 254 },
	{ 0, 254 }
};

NJS_TEX uv_001F83B8[] = {
	{ 509, 0 },
	{ 0 },
	{ 509, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_001F83C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001F8274, NULL, NULL, NULL, uv_001F8300, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001F829C, NULL, NULL, NULL, uv_001F8340, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001F82C4, NULL, NULL, NULL, uv_001F8380, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001F82D2, NULL, NULL, NULL, uv_001F8398, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001F82E6, NULL, NULL, NULL, uv_001F83B8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001F82F0, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001F8458[] = {
	{ 4.25f, -3.399998f, 0.51f },
	{ 4.25f, 9, 0.51f },
	{ 4.25f, -9, 0.51f },
	{ -4.249994f, -9, -0.49f },
	{ 4.25f, -9, -0.49f },
	{ 2.25f, -3.399998f, -0.49f },
	{ -2.250023f, -3.399998f, -0.49f },
	{ 2.25f, 6.800001f, -0.49f },
	{ -2.250023f, 6.800001f, -0.49f },
	{ -4.249994f, -3.399998f, -0.49f },
	{ 4.25f, -3.399998f, -0.49f },
	{ -4.249994f, 9, -0.49f },
	{ 4.25f, 6.800001f, -0.49f },
	{ -4.249994f, 6.800001f, -0.49f },
	{ 4.25f, 9, -0.49f },
	{ 3.049992f, 0.5f, -0.5100009f },
	{ 3.049992f, -1.5f, -0.5100009f },
	{ 3.749989f, 0.5f, -0.5100009f },
	{ 3.749989f, -1.5f, -0.5100009f },
	{ -4.25f, -3.399998f, -0.49f },
	{ -4.25f, 9, -0.49f },
	{ -4.25f, -9, -0.49f },
	{ 4.249992f, -9, 0.5100009f },
	{ -4.25f, -9, 0.51f },
	{ -2.25f, -3.399998f, 0.5100009f },
	{ 2.250023f, -3.399998f, 0.5100009f },
	{ -2.25f, 6.800001f, 0.5100009f },
	{ 2.250023f, 6.800001f, 0.5100009f },
	{ 4.249992f, -3.399998f, 0.5100009f },
	{ -4.25f, -3.399998f, 0.51f },
	{ 4.249992f, 9, 0.5100009f },
	{ -4.25f, 6.800001f, 0.51f },
	{ 4.249992f, 6.800001f, 0.5100009f },
	{ -4.25f, 9, 0.51f }
};

NJS_VECTOR normal_001F85F0[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f }
};

NJS_MODEL_SADX attach_001F8788 = { vertex_001F8458, normal_001F85F0, LengthOfArray(vertex_001F8458), meshlist_001F83C8, matlist_001F81FC, LengthOfArray(meshlist_001F83C8), LengthOfArray(matlist_001F81FC),{ 0 }, 9.014439f, NULL };

NJS_OBJECT object_001F87B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F8788, 35.75f, 20.5f, -14.00999f, 0, 0, 0, 1, 1, 1, NULL, &object_001F81C8 };

NJS_MATERIAL matlist_001F87E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F880C[] = {
	4, 8, 10, 9, 11,
	4, 14, 13, 15, 12
};

Sint16 poly_001F8820[] = {
	4, 4, 6, 12, 15,
	4, 3, 1, 8, 10,
	4, 7, 5, 14, 13,
	4, 0, 2, 11, 9
};

NJS_TEX uv_001F8848[] = {
	{ 255, 254 },
	{ 255, -1785 },
	{ 0, 255 },
	{ 0, -1785 },
	{ 255, 254 },
	{ 255, -1785 },
	{ 0, 255 },
	{ 0, -1785 }
};

NJS_TEX uv_001F8868[] = {
	{ 255, -255 },
	{ 255, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, 254 },
	{ 255, -255 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, -255 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_001F88A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001F880C, NULL, NULL, NULL, uv_001F8848, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001F8820, NULL, NULL, NULL, uv_001F8868, NULL }
};

NJS_VECTOR vertex_001F88D8[] = {
	{ 29.99999f, 29.6f, -13.5f },
	{ 30, 29.6f, -15 },
	{ 29.99999f, 11.5f, -13.5f },
	{ 30, 11.5f, -15 },
	{ 50, 29.5f, -15 },
	{ 50, 29.5f, -13.5f },
	{ 50, 11.5f, -15 },
	{ 50, 11.5f, -13.5f },
	{ 31.5f, 11.5f, -15 },
	{ 31.49999f, 11.5f, -13.5f },
	{ 31.5f, 29.6f, -15 },
	{ 31.49999f, 29.6f, -13.5f },
	{ 48.5f, 29.5f, -15 },
	{ 48.5f, 29.5f, -13.5f },
	{ 48.5f, 11.5f, -13.5f },
	{ 48.5f, 11.5f, -15 }
};

NJS_VECTOR normal_001F8998[] = {
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.707108f, 0, -0.707105f },
	{ 0.707105f, 0, 0.707108f },
	{ 0.707108f, 0, -0.707106f },
	{ 0.707106f, 0, 0.707108f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_001F8A58 = { vertex_001F88D8, normal_001F8998, LengthOfArray(vertex_001F88D8), meshlist_001F88A8, matlist_001F87E4, LengthOfArray(meshlist_001F88A8), LengthOfArray(matlist_001F87E4),{ 40, 20.55f, -14.25f }, 10.02809f, NULL };

NJS_OBJECT object_001F8A80 = { NJD_EVAL_UNIT_SCL, &attach_001F8A58, 0, -5, 0, 0, 0xFFFF8001, 0, 1, 1, 1, &object_001F87B0, NULL };

NJS_MATERIAL matlist_001F8AB4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F8B2C[] = {
	4, 12, 13, 14, 11,
	4, 9, 10, 3, 4,
	4, 31, 32, 33, 30,
	4, 28, 29, 22, 23
};

Sint16 poly_001F8B54[] = {
	4, 7, 12, 5, 10,
	4, 13, 8, 9, 6,
	4, 26, 31, 24, 29,
	4, 32, 27, 28, 25
};

Sint16 poly_001F8B7C[] = {
	6, 2, 4, 0, 10, 1, 14
};

Sint16 poly_001F8B8A[] = {
	4, 8, 7, 6, 5,
	4, 27, 26, 25, 24
};

Sint16 poly_001F8B9E[] = {
	4, 16, 15, 18, 17
};

Sint16 poly_001F8BA8[] = {
	6, 21, 23, 19, 29, 20, 33
};

NJS_TEX uv_001F8BB8[] = {
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 }
};

NJS_TEX uv_001F8BF8[] = {
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 254, 254 }
};

NJS_TEX uv_001F8C38[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 96 },
	{ 254, 96 },
	{ 0, -255 },
	{ 254, -255 }
};

NJS_TEX uv_001F8C50[] = {
	{ 251, 0 },
	{ 0 },
	{ 251, 251 },
	{ 0, 251 },
	{ 0 },
	{ 251, 0 },
	{ 0, 251 },
	{ 251, 251 }
};

NJS_TEX uv_001F8C70[] = {
	{ 509, 0 },
	{ 0 },
	{ 509, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_001F8C80[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001F8B2C, NULL, NULL, NULL, uv_001F8BB8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001F8B54, NULL, NULL, NULL, uv_001F8BF8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001F8B7C, NULL, NULL, NULL, uv_001F8C38, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001F8B8A, NULL, NULL, NULL, uv_001F8C50, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001F8B9E, NULL, NULL, NULL, uv_001F8C70, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001F8BA8, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001F8D10[] = {
	{ 4.25f, -3.399998f, 0.51f },
	{ 4.25f, 9, 0.51f },
	{ 4.25f, -9, 0.51f },
	{ -4.249994f, -9, -0.49f },
	{ 4.25f, -9, -0.49f },
	{ 2.25f, -3.399998f, -0.49f },
	{ -2.250023f, -3.399998f, -0.49f },
	{ 2.25f, 6.800001f, -0.49f },
	{ -2.250023f, 6.800001f, -0.49f },
	{ -4.249994f, -3.399998f, -0.49f },
	{ 4.25f, -3.399998f, -0.49f },
	{ -4.249994f, 9, -0.49f },
	{ 4.25f, 6.800001f, -0.49f },
	{ -4.249994f, 6.800001f, -0.49f },
	{ 4.25f, 9, -0.49f },
	{ 3.049992f, 0.5f, -0.5100009f },
	{ 3.049992f, -1.5f, -0.5100009f },
	{ 3.749989f, 0.5f, -0.5100009f },
	{ 3.749989f, -1.5f, -0.5100009f },
	{ -4.25f, -3.399998f, -0.49f },
	{ -4.25f, 9, -0.49f },
	{ -4.25f, -9, -0.49f },
	{ 4.249992f, -9, 0.5100009f },
	{ -4.25f, -9, 0.51f },
	{ -2.25f, -3.399998f, 0.5100009f },
	{ 2.250023f, -3.399998f, 0.5100009f },
	{ -2.25f, 6.800001f, 0.5100009f },
	{ 2.250023f, 6.800001f, 0.5100009f },
	{ 4.249992f, -3.399998f, 0.5100009f },
	{ -4.25f, -3.399998f, 0.51f },
	{ 4.249992f, 9, 0.5100009f },
	{ -4.25f, 6.800001f, 0.51f },
	{ 4.249992f, 6.800001f, 0.5100009f },
	{ -4.25f, 9, 0.51f }
};

NJS_VECTOR normal_001F8EA8[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f }
};

NJS_MODEL_SADX attach_001F9040 = { vertex_001F8D10, normal_001F8EA8, LengthOfArray(vertex_001F8D10), meshlist_001F8C80, matlist_001F8AB4, LengthOfArray(meshlist_001F8C80), LengthOfArray(matlist_001F8AB4),{ 0 }, 9.014439f, NULL };

NJS_OBJECT object_001F9068 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F9040, 44.25f, 20.5f, 14.00999f, 0, 0xFFFF8000, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F909C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F9114[] = {
	4, 14, 11, 12, 13,
	4, 3, 4, 9, 10,
	4, 33, 30, 31, 32,
	4, 22, 23, 28, 29
};

Sint16 poly_001F913C[] = {
	4, 5, 10, 7, 12,
	4, 9, 6, 13, 8,
	4, 24, 29, 26, 31,
	4, 28, 25, 32, 27
};

Sint16 poly_001F9164[] = {
	6, 4, 2, 10, 0, 14, 1
};

Sint16 poly_001F9172[] = {
	4, 6, 5, 8, 7,
	4, 25, 24, 27, 26
};

Sint16 poly_001F9186[] = {
	4, 18, 17, 16, 15
};

Sint16 poly_001F9190[] = {
	6, 23, 21, 29, 19, 33, 20
};

NJS_TEX uv_001F91A0[] = {
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 }
};

NJS_TEX uv_001F91E0[] = {
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 254, -254 }
};

NJS_TEX uv_001F9220[] = {
	{ 254, 255 },
	{ 0, 255 },
	{ 254, 96 },
	{ 0, 96 },
	{ 254, -255 },
	{ 0, -255 }
};

NJS_TEX uv_001F9238[] = {
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_001F9258[] = {
	{ 509, 255 },
	{ 0, 255 },
	{ 509, 0 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_001F9268[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001F9114, NULL, NULL, NULL, uv_001F91A0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001F913C, NULL, NULL, NULL, uv_001F91E0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001F9164, NULL, NULL, NULL, uv_001F9220, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001F9172, NULL, NULL, NULL, uv_001F9238, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001F9186, NULL, NULL, NULL, uv_001F9258, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001F9190, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001F92F8[] = {
	{ 4.25f, -3.399998f, -0.51f },
	{ 4.25f, 9, -0.51f },
	{ 4.25f, -9, -0.51f },
	{ -4.249994f, -9, 0.49f },
	{ 4.25f, -9, 0.49f },
	{ 2.25f, -3.399998f, 0.49f },
	{ -2.250023f, -3.399998f, 0.49f },
	{ 2.25f, 6.800001f, 0.49f },
	{ -2.250023f, 6.800001f, 0.49f },
	{ -4.249994f, -3.399998f, 0.49f },
	{ 4.25f, -3.399998f, 0.49f },
	{ -4.249994f, 9, 0.49f },
	{ 4.25f, 6.800001f, 0.49f },
	{ -4.249994f, 6.800001f, 0.49f },
	{ 4.25f, 9, 0.49f },
	{ 3.049992f, 0.5f, 0.5100009f },
	{ 3.049992f, -1.5f, 0.5100009f },
	{ 3.749989f, 0.5f, 0.5100009f },
	{ 3.749989f, -1.5f, 0.5100009f },
	{ -4.25f, -3.399998f, 0.49f },
	{ -4.25f, 9, 0.49f },
	{ -4.25f, -9, 0.49f },
	{ 4.249992f, -9, -0.5100009f },
	{ -4.25f, -9, -0.51f },
	{ -2.25f, -3.399998f, -0.5100009f },
	{ 2.250023f, -3.399998f, -0.5100009f },
	{ -2.25f, 6.800001f, -0.5100009f },
	{ 2.250023f, 6.800001f, -0.5100009f },
	{ 4.249992f, -3.399998f, -0.5100009f },
	{ -4.25f, -3.399998f, -0.51f },
	{ 4.249992f, 9, -0.5100009f },
	{ -4.25f, 6.800001f, -0.51f },
	{ 4.249992f, 6.800001f, -0.5100009f },
	{ -4.25f, 9, -0.51f }
};

NJS_VECTOR normal_001F9490[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_001F9628 = { vertex_001F92F8, normal_001F9490, LengthOfArray(vertex_001F92F8), meshlist_001F9268, matlist_001F909C, LengthOfArray(meshlist_001F9268), LengthOfArray(matlist_001F909C),{ 0 }, 9.014439f, NULL };

NJS_OBJECT object_001F9650 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F9628, 35.75f, 20.5f, 14.00999f, 0, 0, 0, 1, 1, 1, NULL, &object_001F9068 };

NJS_MATERIAL matlist_001F9684[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F96AC[] = {
	4, 9, 11, 8, 10,
	4, 15, 12, 14, 13
};

Sint16 poly_001F96C0[] = {
	4, 12, 15, 4, 6,
	4, 8, 10, 3, 1,
	4, 14, 13, 7, 5,
	4, 11, 9, 0, 2
};

NJS_TEX uv_001F96E8[] = {
	{ 0, 255 },
	{ 0, -1785 },
	{ 255, 254 },
	{ 255, -1785 },
	{ 0, 255 },
	{ 0, -1785 },
	{ 255, 254 },
	{ 255, -1785 }
};

NJS_TEX uv_001F9708[] = {
	{ 0, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 255, 254 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 0, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 255, 254 }
};

NJS_MESHSET_SADX meshlist_001F9748[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001F96AC, NULL, NULL, NULL, uv_001F96E8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001F96C0, NULL, NULL, NULL, uv_001F9708, NULL }
};

NJS_VECTOR vertex_001F9778[] = {
	{ 29.99999f, 29.6f, 13.5f },
	{ 30, 29.6f, 15 },
	{ 29.99999f, 11.5f, 13.5f },
	{ 30, 11.5f, 15 },
	{ 50, 29.5f, 15 },
	{ 50, 29.5f, 13.5f },
	{ 50, 11.5f, 15 },
	{ 50, 11.5f, 13.5f },
	{ 31.5f, 11.5f, 15 },
	{ 31.49999f, 11.5f, 13.5f },
	{ 31.5f, 29.6f, 15 },
	{ 31.49999f, 29.6f, 13.5f },
	{ 48.5f, 29.5f, 15 },
	{ 48.5f, 29.5f, 13.5f },
	{ 48.5f, 11.5f, 13.5f },
	{ 48.5f, 11.5f, 15 }
};

NJS_VECTOR normal_001F9838[] = {
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0.707108f, 0, 0.707105f },
	{ 0.707105f, 0, -0.707108f },
	{ 0.707108f, 0, 0.707106f },
	{ 0.707106f, 0, -0.707108f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

NJS_MODEL_SADX attach_001F98F8 = { vertex_001F9778, normal_001F9838, LengthOfArray(vertex_001F9778), meshlist_001F9748, matlist_001F9684, LengthOfArray(meshlist_001F9748), LengthOfArray(matlist_001F9684),{ 40, 20.55f, 14.25f }, 10.02809f, NULL };

NJS_OBJECT object_001F9920 = { NJD_EVAL_UNIT_SCL, &attach_001F98F8, 0, -5, 0, 0, 0x7FFF, 0, 1, 1, 1, &object_001F9650, &object_001F8A80 };

NJS_MATERIAL matlist_001F9954[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F99CC[] = {
	4, 14, 11, 12, 13,
	4, 3, 4, 9, 10,
	4, 33, 30, 31, 32,
	4, 22, 23, 28, 29
};

Sint16 poly_001F99F4[] = {
	4, 5, 10, 7, 12,
	4, 9, 6, 13, 8,
	4, 24, 29, 26, 31,
	4, 28, 25, 32, 27
};

Sint16 poly_001F9A1C[] = {
	6, 4, 2, 10, 0, 14, 1
};

Sint16 poly_001F9A2A[] = {
	4, 6, 5, 8, 7,
	4, 25, 24, 27, 26
};

Sint16 poly_001F9A3E[] = {
	4, 18, 17, 16, 15
};

Sint16 poly_001F9A48[] = {
	6, 23, 21, 29, 19, 33, 20
};

NJS_TEX uv_001F9A58[] = {
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 }
};

NJS_TEX uv_001F9A98[] = {
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 254, -254 }
};

NJS_TEX uv_001F9AD8[] = {
	{ 254, 255 },
	{ 0, 255 },
	{ 254, 96 },
	{ 0, 96 },
	{ 254, -255 },
	{ 0, -255 }
};

NJS_TEX uv_001F9AF0[] = {
	{ 251, 251 },
	{ 0, 251 },
	{ 251, 0 },
	{ 0 },
	{ 0, 251 },
	{ 251, 251 },
	{ 0 },
	{ 251, 0 }
};

NJS_TEX uv_001F9B10[] = {
	{ 509, 255 },
	{ 0, 255 },
	{ 509, 0 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_001F9B20[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001F99CC, NULL, NULL, NULL, uv_001F9A58, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001F99F4, NULL, NULL, NULL, uv_001F9A98, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001F9A1C, NULL, NULL, NULL, uv_001F9AD8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001F9A2A, NULL, NULL, NULL, uv_001F9AF0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001F9A3E, NULL, NULL, NULL, uv_001F9B10, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001F9A48, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001F9BB0[] = {
	{ 4.25f, -3.399998f, -0.51f },
	{ 4.25f, 9, -0.51f },
	{ 4.25f, -9, -0.51f },
	{ -4.249994f, -9, 0.49f },
	{ 4.25f, -9, 0.49f },
	{ 2.25f, -3.399998f, 0.49f },
	{ -2.250023f, -3.399998f, 0.49f },
	{ 2.25f, 6.800001f, 0.49f },
	{ -2.250023f, 6.800001f, 0.49f },
	{ -4.249994f, -3.399998f, 0.49f },
	{ 4.25f, -3.399998f, 0.49f },
	{ -4.249994f, 9, 0.49f },
	{ 4.25f, 6.800001f, 0.49f },
	{ -4.249994f, 6.800001f, 0.49f },
	{ 4.25f, 9, 0.49f },
	{ 3.049992f, 0.5f, 0.5100009f },
	{ 3.049992f, -1.5f, 0.5100009f },
	{ 3.749989f, 0.5f, 0.5100009f },
	{ 3.749989f, -1.5f, 0.5100009f },
	{ -4.25f, -3.399998f, 0.49f },
	{ -4.25f, 9, 0.49f },
	{ -4.25f, -9, 0.49f },
	{ 4.249992f, -9, -0.5100009f },
	{ -4.25f, -9, -0.51f },
	{ -2.25f, -3.399998f, -0.5100009f },
	{ 2.250023f, -3.399998f, -0.5100009f },
	{ -2.25f, 6.800001f, -0.5100009f },
	{ 2.250023f, 6.800001f, -0.5100009f },
	{ 4.249992f, -3.399998f, -0.5100009f },
	{ -4.25f, -3.399998f, -0.51f },
	{ 4.249992f, 9, -0.5100009f },
	{ -4.25f, 6.800001f, -0.51f },
	{ 4.249992f, 6.800001f, -0.5100009f },
	{ -4.25f, 9, -0.51f }
};

NJS_VECTOR normal_001F9D48[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_001F9EE0 = { vertex_001F9BB0, normal_001F9D48, LengthOfArray(vertex_001F9BB0), meshlist_001F9B20, matlist_001F9954, LengthOfArray(meshlist_001F9B20), LengthOfArray(matlist_001F9954),{ 0 }, 9.014439f, NULL };

NJS_OBJECT object_001F9F08 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F9EE0, 44.25f, 20.5f, -14.01f, 0, 0xFFFF8001, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F9F3C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F9FB4[] = {
	4, 12, 13, 14, 11,
	4, 9, 10, 3, 4,
	4, 31, 32, 33, 30,
	4, 28, 29, 22, 23
};

Sint16 poly_001F9FDC[] = {
	4, 7, 12, 5, 10,
	4, 13, 8, 9, 6,
	4, 26, 31, 24, 29,
	4, 32, 27, 28, 25
};

Sint16 poly_001FA004[] = {
	6, 2, 4, 0, 10, 1, 14
};

Sint16 poly_001FA012[] = {
	4, 8, 7, 6, 5,
	4, 27, 26, 25, 24
};

Sint16 poly_001FA026[] = {
	4, 16, 15, 18, 17
};

Sint16 poly_001FA030[] = {
	6, 21, 23, 19, 29, 20, 33
};

NJS_TEX uv_001FA040[] = {
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 }
};

NJS_TEX uv_001FA080[] = {
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 254, 254 }
};

NJS_TEX uv_001FA0C0[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 96 },
	{ 254, 96 },
	{ 0, -255 },
	{ 254, -255 }
};

NJS_TEX uv_001FA0D8[] = {
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 254 },
	{ 0, 254 }
};

NJS_TEX uv_001FA0F8[] = {
	{ 509, 0 },
	{ 0 },
	{ 509, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_001FA108[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001F9FB4, NULL, NULL, NULL, uv_001FA040, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001F9FDC, NULL, NULL, NULL, uv_001FA080, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001FA004, NULL, NULL, NULL, uv_001FA0C0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001FA012, NULL, NULL, NULL, uv_001FA0D8, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001FA026, NULL, NULL, NULL, uv_001FA0F8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001FA030, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001FA198[] = {
	{ 4.25f, -3.399998f, 0.51f },
	{ 4.25f, 9, 0.51f },
	{ 4.25f, -9, 0.51f },
	{ -4.249994f, -9, -0.49f },
	{ 4.25f, -9, -0.49f },
	{ 2.25f, -3.399998f, -0.49f },
	{ -2.250023f, -3.399998f, -0.49f },
	{ 2.25f, 6.800001f, -0.49f },
	{ -2.250023f, 6.800001f, -0.49f },
	{ -4.249994f, -3.399998f, -0.49f },
	{ 4.25f, -3.399998f, -0.49f },
	{ -4.249994f, 9, -0.49f },
	{ 4.25f, 6.800001f, -0.49f },
	{ -4.249994f, 6.800001f, -0.49f },
	{ 4.25f, 9, -0.49f },
	{ 3.049992f, 0.5f, -0.5100009f },
	{ 3.049992f, -1.5f, -0.5100009f },
	{ 3.749989f, 0.5f, -0.5100009f },
	{ 3.749989f, -1.5f, -0.5100009f },
	{ -4.25f, -3.399998f, -0.49f },
	{ -4.25f, 9, -0.49f },
	{ -4.25f, -9, -0.49f },
	{ 4.249992f, -9, 0.5100009f },
	{ -4.25f, -9, 0.51f },
	{ -2.25f, -3.399998f, 0.5100009f },
	{ 2.250023f, -3.399998f, 0.5100009f },
	{ -2.25f, 6.800001f, 0.5100009f },
	{ 2.250023f, 6.800001f, 0.5100009f },
	{ 4.249992f, -3.399998f, 0.5100009f },
	{ -4.25f, -3.399998f, 0.51f },
	{ 4.249992f, 9, 0.5100009f },
	{ -4.25f, 6.800001f, 0.51f },
	{ 4.249992f, 6.800001f, 0.5100009f },
	{ -4.25f, 9, 0.51f }
};

NJS_VECTOR normal_001FA330[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f }
};

NJS_MODEL_SADX attach_001FA4C8 = { vertex_001FA198, normal_001FA330, LengthOfArray(vertex_001FA198), meshlist_001FA108, matlist_001F9F3C, LengthOfArray(meshlist_001FA108), LengthOfArray(matlist_001F9F3C),{ 0 }, 9.014439f, NULL };

NJS_OBJECT object_001FA4F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001FA4C8, 35.75f, 20.5f, -14.01f, 0, 0, 0, 1, 1, 1, NULL, &object_001F9F08 };

NJS_MATERIAL matlist_001FA524[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001FA54C[] = {
	4, 8, 10, 9, 11,
	4, 14, 13, 15, 12
};

Sint16 poly_001FA560[] = {
	4, 4, 6, 12, 15,
	4, 3, 1, 8, 10,
	4, 7, 5, 14, 13,
	4, 0, 2, 11, 9
};

NJS_TEX uv_001FA588[] = {
	{ 255, 254 },
	{ 255, -1785 },
	{ 0, 255 },
	{ 0, -1785 },
	{ 255, 254 },
	{ 255, -1785 },
	{ 0, 255 },
	{ 0, -1785 }
};

NJS_TEX uv_001FA5A8[] = {
	{ 255, -255 },
	{ 255, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, 254 },
	{ 255, -255 },
	{ 255, -255 },
	{ 255, 254 },
	{ 0, -255 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_001FA5E8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001FA54C, NULL, NULL, NULL, uv_001FA588, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001FA560, NULL, NULL, NULL, uv_001FA5A8, NULL }
};

NJS_VECTOR vertex_001FA618[] = {
	{ 29.99999f, 29.6f, -13.5f },
	{ 30, 29.6f, -15 },
	{ 29.99999f, 11.5f, -13.5f },
	{ 30, 11.5f, -15 },
	{ 50, 29.5f, -15 },
	{ 50, 29.5f, -13.5f },
	{ 50, 11.5f, -15 },
	{ 50, 11.5f, -13.5f },
	{ 31.5f, 11.5f, -15 },
	{ 31.49999f, 11.5f, -13.5f },
	{ 31.5f, 29.6f, -15 },
	{ 31.49999f, 29.6f, -13.5f },
	{ 48.5f, 29.5f, -15 },
	{ 48.5f, 29.5f, -13.5f },
	{ 48.5f, 11.5f, -13.5f },
	{ 48.5f, 11.5f, -15 }
};

NJS_VECTOR normal_001FA6D8[] = {
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.707108f, 0, -0.707105f },
	{ 0.707105f, 0, 0.707108f },
	{ 0.707108f, 0, -0.707106f },
	{ 0.707106f, 0, 0.707108f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_001FA798 = { vertex_001FA618, normal_001FA6D8, LengthOfArray(vertex_001FA618), meshlist_001FA5E8, matlist_001FA524, LengthOfArray(meshlist_001FA5E8), LengthOfArray(matlist_001FA524),{ 40, 20.55f, -14.25f }, 10.02809f, NULL };

NJS_OBJECT object_001FA7C0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001FA798, 0, -5, 0, 0, 0, 0, 1, 1, 1, &object_001FA4F0, &object_001F9920 };

NJS_MATERIAL matlist_001FA7F4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001FA86C[] = {
	4, 12, 13, 14, 11,
	4, 9, 10, 3, 4,
	4, 31, 32, 33, 30,
	4, 28, 29, 22, 23
};

Sint16 poly_001FA894[] = {
	4, 7, 12, 5, 10,
	4, 13, 8, 9, 6,
	4, 26, 31, 24, 29,
	4, 32, 27, 28, 25
};

Sint16 poly_001FA8BC[] = {
	6, 2, 4, 0, 10, 1, 14
};

Sint16 poly_001FA8CA[] = {
	4, 8, 7, 6, 5,
	4, 27, 26, 25, 24
};

Sint16 poly_001FA8DE[] = {
	4, 16, 15, 18, 17
};

Sint16 poly_001FA8E8[] = {
	6, 21, 23, 19, 29, 20, 33
};

NJS_TEX uv_001FA8F8[] = {
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 }
};

NJS_TEX uv_001FA938[] = {
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 0, 254 },
	{ 254, 254 }
};

NJS_TEX uv_001FA978[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 96 },
	{ 254, 96 },
	{ 0, -255 },
	{ 254, -255 }
};

NJS_TEX uv_001FA990[] = {
	{ 251, 0 },
	{ 0 },
	{ 251, 251 },
	{ 0, 251 },
	{ 0 },
	{ 251, 0 },
	{ 0, 251 },
	{ 251, 251 }
};

NJS_TEX uv_001FA9B0[] = {
	{ 509, 0 },
	{ 0 },
	{ 509, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_001FA9C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001FA86C, NULL, NULL, NULL, uv_001FA8F8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001FA894, NULL, NULL, NULL, uv_001FA938, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001FA8BC, NULL, NULL, NULL, uv_001FA978, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001FA8CA, NULL, NULL, NULL, uv_001FA990, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001FA8DE, NULL, NULL, NULL, uv_001FA9B0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001FA8E8, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001FAA50[] = {
	{ 4.25f, -3.399998f, 0.51f },
	{ 4.25f, 9, 0.51f },
	{ 4.25f, -9, 0.51f },
	{ -4.249994f, -9, -0.49f },
	{ 4.25f, -9, -0.49f },
	{ 2.25f, -3.399998f, -0.49f },
	{ -2.250023f, -3.399998f, -0.49f },
	{ 2.25f, 6.800001f, -0.49f },
	{ -2.250023f, 6.800001f, -0.49f },
	{ -4.249994f, -3.399998f, -0.49f },
	{ 4.25f, -3.399998f, -0.49f },
	{ -4.249994f, 9, -0.49f },
	{ 4.25f, 6.800001f, -0.49f },
	{ -4.249994f, 6.800001f, -0.49f },
	{ 4.25f, 9, -0.49f },
	{ 3.049992f, 0.5f, -0.5100009f },
	{ 3.049992f, -1.5f, -0.5100009f },
	{ 3.749989f, 0.5f, -0.5100009f },
	{ 3.749989f, -1.5f, -0.5100009f },
	{ -4.25f, -3.399998f, -0.49f },
	{ -4.25f, 9, -0.49f },
	{ -4.25f, -9, -0.49f },
	{ 4.249992f, -9, 0.5100009f },
	{ -4.25f, -9, 0.51f },
	{ -2.25f, -3.399998f, 0.5100009f },
	{ 2.250023f, -3.399998f, 0.5100009f },
	{ -2.25f, 6.800001f, 0.5100009f },
	{ 2.250023f, 6.800001f, 0.5100009f },
	{ 4.249992f, -3.399998f, 0.5100009f },
	{ -4.25f, -3.399998f, 0.51f },
	{ 4.249992f, 9, 0.5100009f },
	{ -4.25f, 6.800001f, 0.51f },
	{ 4.249992f, 6.800001f, 0.5100009f },
	{ -4.25f, 9, 0.51f }
};

NJS_VECTOR normal_001FABE8[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f }
};

NJS_MODEL_SADX attach_001FAD80 = { vertex_001FAA50, normal_001FABE8, LengthOfArray(vertex_001FAA50), meshlist_001FA9C0, matlist_001FA7F4, LengthOfArray(meshlist_001FA9C0), LengthOfArray(matlist_001FA7F4),{ 0 }, 9.014439f, NULL };

NJS_OBJECT object_001FADA8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001FAD80, 44.25f, 20.5f, 14.01f, 0, 0x7FFF, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001FADDC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001FAE54[] = {
	4, 14, 11, 12, 13,
	4, 3, 4, 9, 10,
	4, 33, 30, 31, 32,
	4, 22, 23, 28, 29
};

Sint16 poly_001FAE7C[] = {
	4, 5, 10, 7, 12,
	4, 9, 6, 13, 8,
	4, 24, 29, 26, 31,
	4, 28, 25, 32, 27
};

Sint16 poly_001FAEA4[] = {
	6, 4, 2, 10, 0, 14, 1
};

Sint16 poly_001FAEB2[] = {
	4, 6, 5, 8, 7,
	4, 25, 24, 27, 26
};

Sint16 poly_001FAEC6[] = {
	4, 18, 17, 16, 15
};

Sint16 poly_001FAED0[] = {
	6, 23, 21, 29, 19, 33, 20
};

NJS_TEX uv_001FAEE0[] = {
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0 },
	{ 510, 0 }
};

NJS_TEX uv_001FAF20[] = {
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 254, -254 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, -254 },
	{ 0, -254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0, -254 },
	{ 254, -254 }
};

NJS_TEX uv_001FAF60[] = {
	{ 254, 255 },
	{ 0, 255 },
	{ 254, 96 },
	{ 0, 96 },
	{ 254, -255 },
	{ 0, -255 }
};

NJS_TEX uv_001FAF78[] = {
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_001FAF98[] = {
	{ 509, 255 },
	{ 0, 255 },
	{ 509, 0 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_001FAFA8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001FAE54, NULL, NULL, NULL, uv_001FAEE0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001FAE7C, NULL, NULL, NULL, uv_001FAF20, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001FAEA4, NULL, NULL, NULL, uv_001FAF60, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001FAEB2, NULL, NULL, NULL, uv_001FAF78, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001FAEC6, NULL, NULL, NULL, uv_001FAF98, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_001FAED0, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001FB038[] = {
	{ 4.25f, -3.399998f, -0.51f },
	{ 4.25f, 9, -0.51f },
	{ 4.25f, -9, -0.51f },
	{ -4.249994f, -9, 0.49f },
	{ 4.25f, -9, 0.49f },
	{ 2.25f, -3.399998f, 0.49f },
	{ -2.250023f, -3.399998f, 0.49f },
	{ 2.25f, 6.800001f, 0.49f },
	{ -2.250023f, 6.800001f, 0.49f },
	{ -4.249994f, -3.399998f, 0.49f },
	{ 4.25f, -3.399998f, 0.49f },
	{ -4.249994f, 9, 0.49f },
	{ 4.25f, 6.800001f, 0.49f },
	{ -4.249994f, 6.800001f, 0.49f },
	{ 4.25f, 9, 0.49f },
	{ 3.049992f, 0.5f, 0.5100009f },
	{ 3.049992f, -1.5f, 0.5100009f },
	{ 3.749989f, 0.5f, 0.5100009f },
	{ 3.749989f, -1.5f, 0.5100009f },
	{ -4.25f, -3.399998f, 0.49f },
	{ -4.25f, 9, 0.49f },
	{ -4.25f, -9, 0.49f },
	{ 4.249992f, -9, -0.5100009f },
	{ -4.25f, -9, -0.51f },
	{ -2.25f, -3.399998f, -0.5100009f },
	{ 2.250023f, -3.399998f, -0.5100009f },
	{ -2.25f, 6.800001f, -0.5100009f },
	{ 2.250023f, 6.800001f, -0.5100009f },
	{ 4.249992f, -3.399998f, -0.5100009f },
	{ -4.25f, -3.399998f, -0.51f },
	{ 4.249992f, 9, -0.5100009f },
	{ -4.25f, 6.800001f, -0.51f },
	{ 4.249992f, 6.800001f, -0.5100009f },
	{ -4.25f, 9, -0.51f }
};

NJS_VECTOR normal_001FB1D0[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_001FB368 = { vertex_001FB038, normal_001FB1D0, LengthOfArray(vertex_001FB038), meshlist_001FAFA8, matlist_001FADDC, LengthOfArray(meshlist_001FAFA8), LengthOfArray(matlist_001FADDC),{ 0 }, 9.014439f, NULL };

NJS_OBJECT object_001FB390 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001FB368, 35.75f, 20.5f, 14.01f, 0, 0, 0, 1, 1, 1, NULL, &object_001FADA8 };

NJS_MATERIAL matlist_001FB3C4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001FB3EC[] = {
	4, 9, 11, 8, 10,
	4, 15, 12, 14, 13
};

Sint16 poly_001FB400[] = {
	4, 12, 15, 4, 6,
	4, 8, 10, 3, 1,
	4, 14, 13, 7, 5,
	4, 11, 9, 0, 2
};

NJS_TEX uv_001FB428[] = {
	{ 0, 255 },
	{ 0, -1785 },
	{ 255, 254 },
	{ 255, -1785 },
	{ 0, 255 },
	{ 0, -1785 },
	{ 255, 254 },
	{ 255, -1785 }
};

NJS_TEX uv_001FB448[] = {
	{ 0, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 255, 254 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 255, 254 },
	{ 255, -255 },
	{ 0, 254 },
	{ 0, -255 },
	{ 0, -255 },
	{ 0, 254 },
	{ 255, -255 },
	{ 255, 254 }
};

NJS_MESHSET_SADX meshlist_001FB488[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001FB3EC, NULL, NULL, NULL, uv_001FB428, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001FB400, NULL, NULL, NULL, uv_001FB448, NULL }
};

NJS_VECTOR vertex_001FB4B8[] = {
	{ 29.99999f, 29.6f, 13.5f },
	{ 30, 29.6f, 15 },
	{ 29.99999f, 11.5f, 13.5f },
	{ 30, 11.5f, 15 },
	{ 50, 29.5f, 15 },
	{ 50, 29.5f, 13.5f },
	{ 50, 11.5f, 15 },
	{ 50, 11.5f, 13.5f },
	{ 31.5f, 11.5f, 15 },
	{ 31.49999f, 11.5f, 13.5f },
	{ 31.5f, 29.6f, 15 },
	{ 31.49999f, 29.6f, 13.5f },
	{ 48.5f, 29.5f, 15 },
	{ 48.5f, 29.5f, 13.5f },
	{ 48.5f, 11.5f, 13.5f },
	{ 48.5f, 11.5f, 15 }
};

NJS_VECTOR normal_001FB578[] = {
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0.707108f, 0, 0.707105f },
	{ 0.707105f, 0, -0.707108f },
	{ 0.707108f, 0, 0.707106f },
	{ 0.707106f, 0, -0.707108f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f }
};

NJS_MODEL_SADX attach_001FB638 = { vertex_001FB4B8, normal_001FB578, LengthOfArray(vertex_001FB4B8), meshlist_001FB488, matlist_001FB3C4, LengthOfArray(meshlist_001FB488), LengthOfArray(matlist_001FB3C4),{ 40, 20.55f, 14.25f }, 10.02809f, NULL };

NJS_OBJECT object_001FB660 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001FB638, 0, -5, 0, 0, 0, 0, 1, 1, 1, &object_001FB390, &object_001FA7C0 };

NJS_MATERIAL matlist_001FB694[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001FB6E4[] = {
	4, 19, 20, 3, 2,
	4, 18, 17, 35, 4,
	4, 22, 55, 0, 49,
	4, 16, 53, 6, 50,
	4, 52, 15, 51, 5,
	4, 54, 21, 48, 1
};

Sint16 poly_001FB720[] = {
	4, 20, 41, 2, 8,
	4, 44, 22, 7, 0,
	4, 47, 19, 9, 3,
	4, 17, 46, 4, 13,
	4, 38, 16, 14, 6,
	4, 12, 40, 35, 18,
	4, 15, 37, 5, 10,
	4, 21, 43, 1, 11
};

Sint16 poly_001FB770[] = {
	4, 47, 32, 41, 31,
	4, 36, 34, 37, 33,
	4, 30, 45, 29, 44,
	4, 40, 25, 46, 26,
	4, 16, 38, 53, 39,
	4, 46, 17, 40, 18,
	4, 43, 21, 42, 54,
	4, 37, 15, 36, 52,
	4, 19, 47, 20, 41,
	4, 22, 44, 55, 45,
	4, 38, 27, 39, 28,
	4, 23, 43, 24, 42
};

Sint16 poly_001FB7E8[] = {
	0x8000u | 8, 12, 11, 35, 1, 2, 0, 8, 7,
	0x8000u | 8, 9, 10, 3, 5, 4, 6, 13, 14,
	4, 5, 6, 51, 50,
	4, 4, 3, 35, 2,
	4, 1, 0, 48, 49
};

NJS_TEX uv_001FB82C[] = {
	{ 3060, 0 },
	{ 0 },
	{ 3060, 254 },
	{ 0, 254 },
	{ 3060, 0 },
	{ 0 },
	{ 3060, 254 },
	{ 0, 254 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 254 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 254 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 254 },
	{ 1019, 0 },
	{ 0 },
	{ 1019, 255 },
	{ 0, 254 }
};

NJS_TEX uv_001FB88C[] = {
	{ 0 },
	{ 509, 0 },
	{ 0, 254 },
	{ 509, 255 },
	{ 0 },
	{ 509, 0 },
	{ 0, 254 },
	{ 509, 255 },
	{ 0 },
	{ 509, 0 },
	{ 0, 254 },
	{ 509, 255 },
	{ 0 },
	{ 509, 0 },
	{ 0, 254 },
	{ 509, 255 },
	{ 0 },
	{ 509, 0 },
	{ 0, 254 },
	{ 509, 255 },
	{ 0, 254 },
	{ 0 },
	{ 509, 255 },
	{ 509, 0 },
	{ 0 },
	{ 509, 0 },
	{ 0, 254 },
	{ 509, 255 },
	{ 0 },
	{ 509, 0 },
	{ 0, 254 },
	{ 509, 255 }
};

NJS_TEX uv_001FB90C[] = {
	{ 2040, 0 },
	{ 2040, 254 },
	{ 0 },
	{ 0, 254 },
	{ 336, 0 },
	{ 337, 254 },
	{ 0 },
	{ 0, 254 },
	{ 337, 254 },
	{ 336, 0 },
	{ 0, 254 },
	{ 0 },
	{ 2040, 0 },
	{ 2040, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0, 254 },
	{ 0 },
	{ 507, 254 },
	{ 339, 0 },
	{ 2040, 0 },
	{ 2040, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 339, 0 },
	{ 507, 254 },
	{ 0 },
	{ 0, 254 },
	{ 339, 0 },
	{ 507, 254 },
	{ 0, 254 },
	{ 0 },
	{ 2040, 254 },
	{ 2040, 0 },
	{ 0, 254 },
	{ 0 },
	{ 507, 254 },
	{ 339, 0 },
	{ 0 },
	{ 0, 254 },
	{ 336, 0 },
	{ 337, 254 },
	{ 0, 254 },
	{ 0 },
	{ 337, 254 },
	{ 336, 0 }
};

NJS_TEX uv_001FB9CC[] = {
	{ 1118, 255 },
	{ 1353, 255 },
	{ 1118, 135 },
	{ 1353, 135 },
	{ 1118, -135 },
	{ 1353, -135 },
	{ 1118, -255 },
	{ 1353, -255 },
	{ 411, -255 },
	{ 176, -255 },
	{ 411, -135 },
	{ 176, -135 },
	{ 411, 135 },
	{ 176, 135 },
	{ 411, 255 },
	{ 176, 255 },
	{ 176, -135 },
	{ 176, 135 },
	{ 0, -135 },
	{ 0, 135 },
	{ 411, 135 },
	{ 411, -135 },
	{ 1118, 135 },
	{ 1118, -135 },
	{ 1353, 135 },
	{ 1353, -135 },
	{ 1530, 135 },
	{ 1530, -135 }
};

NJS_MESHSET_SADX meshlist_001FBA3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_001FB6E4, NULL, NULL, NULL, uv_001FB82C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_001FB720, NULL, NULL, NULL, uv_001FB88C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 12, poly_001FB770, NULL, NULL, NULL, uv_001FB90C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_001FB7E8, NULL, NULL, NULL, uv_001FB9CC, NULL }
};

NJS_VECTOR vertex_001FBA9C[] = {
	{ 50, -4.250003f, 8 },
	{ 50, -4.250003f, -8 },
	{ 30, -4.250003f, 8 },
	{ -30, -4.250003f, 8 },
	{ -30, -4.250003f, -8 },
	{ -50, -4.250003f, 8 },
	{ -50, -4.250003f, -8 },
	{ 50, -4.250005f, 15 },
	{ 30, -4.250005f, 15 },
	{ -30, -4.250005f, 15 },
	{ -50, -4.250005f, 15 },
	{ 50, -4.250005f, -15 },
	{ 30, -4.250005f, -15 },
	{ -30, -4.250005f, -15 },
	{ -50, -4.250005f, -15 },
	{ -50, 0.749997f, 8 },
	{ -50, 0.749997f, -8 },
	{ -30, 0.749997f, -8 },
	{ 30, 0.749998f, -8 },
	{ -30, 0.749997f, 8 },
	{ 30, 0.749997f, 8 },
	{ 50, 0.749997f, -8 },
	{ 50, 0.749997f, 8 },
	{ 50, 4.250005f, -14.99f },
	{ 60, 4.250005f, -14.99f },
	{ 30, 4.250005f, -14.99f },
	{ -30, 4.250005f, -14.99f },
	{ -50, 4.250005f, -14.99f },
	{ -60, 4.250005f, -14.99f },
	{ 50, 4.250005f, 14.99f },
	{ 60, 4.250005f, 14.99f },
	{ 30, 4.250005f, 14.99f },
	{ -30, 4.250005f, 14.99f },
	{ -50, 4.250005f, 14.99f },
	{ -60, 4.250005f, 14.99f },
	{ 30, -4.250003f, -8 },
	{ -60, 0.750007f, 14.99f },
	{ -50, 0.750007f, 14.99f },
	{ -50, 0.750007f, -14.99f },
	{ -60, 0.749995f, -15 },
	{ 30, 0.750007f, -14.99f },
	{ 30, 0.750007f, 14.99f },
	{ 60, 0.750007f, -14.99f },
	{ 50, 0.750007f, -14.99f },
	{ 50, 0.750007f, 14.99f },
	{ 60, 0.750007f, 14.99f },
	{ -30, 0.750007f, -14.99f },
	{ -30, 0.750007f, 14.99f },
	{ 65, -4.250005f, -8 },
	{ 65, -4.250005f, 8 },
	{ -65, -4.250005f, -8 },
	{ -65, -4.250005f, 8 },
	{ -65, 0.749995f, 8 },
	{ -65, 0.749995f, -8 },
	{ 65, 0.749995f, -8 },
	{ 65, 0.749995f, 8 }
};

NJS_VECTOR normal_001FBD3C[] = {
	{ -0.301511f, 0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ -0.706656f, 0.707557f, 0 },
	{ 0.706656f, 0.707557f, 0 },
	{ -0.706656f, 0.707557f, 0 },
	{ 0.706656f, 0.707557f, 0 },
	{ -0.706656f, 0.707557f, 0 },
	{ 0.706656f, 0.707557f, 0 },
	{ -0.706656f, 0.707557f, 0 },
	{ 0.706656f, 0.707557f, 0 },
	{ 0.57735f, 0.57735f, -0.577351f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.577351f },
	{ 0.57735f, 0.57735f, 0.577351f },
	{ -0.57735f, 0.57735f, -0.577351f },
	{ 0.57735f, 0.57735f, -0.577351f },
	{ -0.57735f, 0.57735f, 0.577351f },
	{ -0.57735f, 0.57735f, -0.577351f },
	{ 0, 0.000001f, 1 },
	{ 0, 0.000001f, 1 },
	{ 0, 0.000001f, 1 },
	{ 0, 0.000001f, 1 },
	{ -0.0009999999f, -0.001428f, 0.999998f },
	{ -0.0009999999f, -0.001428f, 0.999998f },
	{ 0, 0.000001f, -1 },
	{ 0, 0.000001f, -1 },
	{ 0, 0.000001f, -1 },
	{ 0, 0.000001f, -1 },
	{ 0, 0.000001f, -1 },
	{ 0, 0.000001f, -1 },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 0, 0.812806f, -0.582535f },
	{ 0.577839f, 0.577105f, -0.577106f },
	{ 0.577607f, 0.576993f, 0.57745f },
	{ -0.000584f, 0.812313f, 0.583222f },
	{ 0.577839f, 0.577105f, 0.577106f },
	{ 0.577839f, 0.577105f, -0.577106f },
	{ 0, 0.812806f, 0.582535f },
	{ -0.577839f, 0.577105f, 0.577106f },
	{ -0.577839f, 0.577105f, -0.577106f },
	{ 0, 0.812806f, -0.582535f },
	{ -0.577839f, 0.577105f, 0.577106f },
	{ -0.577839f, 0.577105f, -0.577106f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.517453f, -0.855711f },
	{ 0, 0.517723f, 0.855548f },
	{ 0, 0.517453f, 0.855711f },
	{ 0, 0.517453f, -0.855711f }
};

NJS_MODEL_SADX attach_001FBFDC = { vertex_001FBA9C, normal_001FBD3C, LengthOfArray(vertex_001FBA9C), meshlist_001FBA3C, matlist_001FB694, LengthOfArray(meshlist_001FBA3C), LengthOfArray(matlist_001FB694),{ 0 }, 66.70832f, NULL };

NJS_OBJECT object_001FC004 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001FBFDC, 0, 10.74999f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001FB660 };

NJS_MATERIAL matlist_001FC038[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001FC060[] = {
	4, 0, 1, 2, 3,
	4, 4, 5, 6, 7,
	4, 8, 9, 10, 11,
	0x8000u | 8, 13, 14, 12, 15, 16, 17, 18, 19,
	0x8000u | 8, 26, 27, 24, 25, 21, 22, 20, 23
};

Sint16 poly_001FC0A2[] = {
	4, 21, 24, 12, 16
};

NJS_TEX uv_001FC0AC[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -254 },
	{ 255, -254 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -254 },
	{ 255, -254 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -254 },
	{ 255, -254 },
	{ 0, 255 },
	{ 185, 255 },
	{ 0, 153 },
	{ 254, 153 },
	{ 0, -153 },
	{ 254, -153 },
	{ 0, -255 },
	{ 185, -255 },
	{ 0, -255 },
	{ 185, -255 },
	{ 0, -153 },
	{ 254, -153 },
	{ 0, 153 },
	{ 254, 153 },
	{ 0, 255 },
	{ 185, 255 }
};

NJS_TEX uv_001FC11C[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 510, -255 }
};

NJS_MESHSET_SADX meshlist_001FC12C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_001FC060, NULL, NULL, NULL, uv_001FC0AC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_001FC0A2, NULL, NULL, NULL, uv_001FC11C, NULL }
};

NJS_VECTOR vertex_001FC15C[] = {
	{ 0, -2.25f, 0.5f },
	{ 0, -2.25f, -0.5f },
	{ -3, 0.25f, 0.5f },
	{ -3, 0.25f, -0.5f },
	{ -3, 0.25f, 1.5f },
	{ -3, 0.25f, 0.5f },
	{ 0, 2.25f, 1.5f },
	{ 0, 2.25f, 0.5f },
	{ -3, 0.25f, -0.5f },
	{ -3, 0.25f, -1.5f },
	{ 0, 2.25f, -0.5f },
	{ 0, 2.25f, -1.5f },
	{ 3, 2.25f, 4.5f },
	{ 5, 1.25f, 4.5f },
	{ 5, 1.05f, 5.3f },
	{ 3, 2.05f, 5.6f },
	{ -3, 2.25f, 4.5f },
	{ -3, 2.05f, 5.6f },
	{ -5, 1.25f, 4.5f },
	{ -5, 1.05f, 5.3f },
	{ 5, 1.25f, -4.5f },
	{ 3, 2.25f, -4.5f },
	{ 3, 2.05f, -5.6f },
	{ 5, 1.05f, -5.3f },
	{ -3, 2.25f, -4.5f },
	{ -3, 2.05f, -5.6f },
	{ -5, 1.25f, -4.5f },
	{ -5, 1.05f, -5.3f }
};

NJS_VECTOR normal_001FC2AC[] = {
	{ 0.640184f, 0.768221f, 0 },
	{ 0.640184f, 0.768221f, 0 },
	{ 0.640184f, 0.768221f, 0 },
	{ 0.640184f, 0.768221f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.148938f, 0.9796939f, 0.134227f },
	{ 0.449543f, 0.866588f, 0.216647f },
	{ 0.449543f, 0.866588f, 0.216647f },
	{ 0.227278f, 0.952428f, 0.203041f },
	{ -0.149212f, 0.982074f, 0.115177f },
	{ -0.227961f, 0.957965f, 0.174175f },
	{ -0.45103f, 0.878112f, 0.159657f },
	{ -0.45103f, 0.878112f, 0.159657f },
	{ 0.45103f, 0.878112f, -0.159657f },
	{ 0.149212f, 0.982074f, -0.115177f },
	{ 0.227961f, 0.957965f, -0.174175f },
	{ 0.45103f, 0.878112f, -0.159657f },
	{ -0.148938f, 0.9796939f, -0.134227f },
	{ -0.227278f, 0.952428f, -0.203041f },
	{ -0.449543f, 0.866588f, -0.216647f },
	{ -0.449543f, 0.866588f, -0.216647f }
};

NJS_MODEL_SADX attach_001FC3FC = { vertex_001FC15C, normal_001FC2AC, LengthOfArray(vertex_001FC15C), meshlist_001FC12C, matlist_001FC038, LengthOfArray(meshlist_001FC12C), LengthOfArray(matlist_001FC038),{ 0 }, 7.507331f, NULL };

NJS_OBJECT object_001FC424 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001FC3FC, -35, 39.25f, 0, 0, 0x7FFF, 0, 1, 1, 1, NULL, &object_001FC004 };

NJS_MATERIAL matlist_001FC458[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 8, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001FC480[] = {
	4, 2, 3, 0, 1,
	4, 6, 7, 4, 5,
	4, 10, 11, 8, 9,
	0x8000u | 8, 14, 13, 15, 12, 17, 16, 19, 18,
	0x8000u | 8, 27, 26, 25, 24, 22, 21, 23, 20
};

Sint16 poly_001FC4C2[] = {
	4, 12, 16, 21, 24
};

NJS_TEX uv_001FC4CC[] = {
	{ 0, -254 },
	{ 255, -254 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -254 },
	{ 255, -254 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -254 },
	{ 255, -254 },
	{ 0, 255 },
	{ 255, 255 },
	{ 185, 255 },
	{ 0, 255 },
	{ 254, 153 },
	{ 0, 153 },
	{ 254, -153 },
	{ 0, -153 },
	{ 185, -255 },
	{ 0, -255 },
	{ 185, -255 },
	{ 0, -255 },
	{ 254, -153 },
	{ 0, -153 },
	{ 254, 153 },
	{ 0, 153 },
	{ 185, 255 },
	{ 0, 255 }
};

NJS_TEX uv_001FC53C[] = {
	{ 0, -255 },
	{ 510, -255 },
	{ 0, 255 },
	{ 510, 255 }
};

NJS_MESHSET_SADX meshlist_001FC54C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_001FC480, NULL, NULL, NULL, uv_001FC4CC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_001FC4C2, NULL, NULL, NULL, uv_001FC53C, NULL }
};

NJS_VECTOR vertex_001FC57C[] = {
	{ 0, -2.25f, -0.5f },
	{ 0, -2.25f, 0.5f },
	{ -3, 0.25f, -0.5f },
	{ -3, 0.25f, 0.5f },
	{ -3, 0.25f, -1.5f },
	{ -3, 0.25f, -0.5f },
	{ 0, 2.25f, -1.5f },
	{ 0, 2.25f, -0.5f },
	{ -3, 0.25f, 0.5f },
	{ -3, 0.25f, 1.5f },
	{ 0, 2.25f, 0.5f },
	{ 0, 2.25f, 1.5f },
	{ 3, 2.25f, -4.5f },
	{ 5, 1.25f, -4.5f },
	{ 5, 1.05f, -5.3f },
	{ 3, 2.05f, -5.6f },
	{ -3, 2.25f, -4.5f },
	{ -3, 2.05f, -5.6f },
	{ -5, 1.25f, -4.5f },
	{ -5, 1.05f, -5.3f },
	{ 5, 1.25f, 4.5f },
	{ 3, 2.25f, 4.5f },
	{ 3, 2.05f, 5.6f },
	{ 5, 1.05f, 5.3f },
	{ -3, 2.25f, 4.5f },
	{ -3, 2.05f, 5.6f },
	{ -5, 1.25f, 4.5f },
	{ -5, 1.05f, 5.3f }
};

NJS_VECTOR normal_001FC6CC[] = {
	{ 0.640184f, 0.768221f, 0 },
	{ 0.640184f, 0.768221f, 0 },
	{ 0.640184f, 0.768221f, 0 },
	{ 0.640184f, 0.768221f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.5547f, -0.83205f, 0 },
	{ 0.148938f, 0.9796939f, -0.134227f },
	{ 0.449543f, 0.866588f, -0.216647f },
	{ 0.449543f, 0.866588f, -0.216647f },
	{ 0.227278f, 0.952428f, -0.203041f },
	{ -0.149212f, 0.982074f, -0.115177f },
	{ -0.227961f, 0.957965f, -0.174175f },
	{ -0.45103f, 0.878112f, -0.159657f },
	{ -0.45103f, 0.878112f, -0.159657f },
	{ 0.45103f, 0.878112f, 0.159657f },
	{ 0.149212f, 0.982074f, 0.115177f },
	{ 0.227961f, 0.957965f, 0.174175f },
	{ 0.45103f, 0.878112f, 0.159657f },
	{ -0.148938f, 0.9796939f, 0.134227f },
	{ -0.227278f, 0.952428f, 0.203041f },
	{ -0.449543f, 0.866588f, 0.216647f },
	{ -0.449543f, 0.866588f, 0.216647f }
};

NJS_MODEL_SADX attach_001FC81C = { vertex_001FC57C, normal_001FC6CC, LengthOfArray(vertex_001FC57C), meshlist_001FC54C, matlist_001FC458, LengthOfArray(meshlist_001FC54C), LengthOfArray(matlist_001FC458),{ 0 }, 7.50733f, NULL };

NJS_OBJECT object_001FC844 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001FC81C, 35, 39.25f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001FC424 };

NJS_MATERIAL matlist_001FC878[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001FC88C[] = {
	0x8000u | 8, 2, 3, 10, 0, 9, 4, 11, 8,
	0x8000u | 8, 10, 7, 2, 6, 1, 8, 5, 4
};

NJS_TEX uv_001FC8B0[] = {
	{ 0, 255 },
	{ 0, 255 },
	{ 1020, 255 },
	{ 0, 240 },
	{ 1020, 240 },
	{ 0 },
	{ 1020, 0 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, 240 },
	{ 0, 240 },
	{ 1020, 0 },
	{ 0 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_001FC8F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001FC88C, NULL, NULL, NULL, uv_001FC8B0, NULL }
};

NJS_VECTOR vertex_001FC908[] = {
	{ -2.5f, 2.999997f, -5.5f },
	{ -2.5f, 2.999997f, 5.5f },
	{ -2.5f, 3.999994f, 4.5f },
	{ -2.5f, 3.999994f, -4.5f },
	{ -2.5f, -14, -5.5f },
	{ -2.5f, -14, 5.5f },
	{ 2.499999f, 2.999997f, 5.5f },
	{ 2.499999f, 3.999994f, 4.5f },
	{ 2.499999f, -14, 5.5f },
	{ 2.499999f, 2.999997f, -5.5f },
	{ 2.499999f, 3.999994f, -4.5f },
	{ 2.499999f, -14, -5.5f }
};

NJS_VECTOR normal_001FC998[] = {
	{ 0, 0.382684f, -0.923879f },
	{ 0, 0.382684f, 0.923879f },
	{ 0, 0.92388f, 0.382683f },
	{ 0, 0.92388f, -0.382683f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.382684f, 0.923879f },
	{ 0, 0.92388f, 0.382683f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.382684f, -0.923879f },
	{ 0, 0.92388f, -0.382683f },
	{ 0, -0.7071069f, -0.7071069f }
};

NJS_MODEL_SADX attach_001FCA28 = { vertex_001FC908, normal_001FC998, LengthOfArray(vertex_001FC908), meshlist_001FC8F0, matlist_001FC878, LengthOfArray(meshlist_001FC8F0), LengthOfArray(matlist_001FC878),{ 0, -5.000003f, 0 }, 10.54751f, NULL };

NJS_OBJECT object_001FCA50 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001FCA28, -67.5f, 20.5f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001FC844 };

NJS_MATERIAL matlist_001FCA84[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xB2B2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_001FCB4C[] = {
	4, 0, 3, 1, 2,
	4, 117, 118, 116, 119
};

Sint16 poly_001FCB60[] = {
	4, 8, 9, 5, 4,
	4, 6, 11, 5, 8,
	4, 10, 11, 7, 6,
	4, 9, 10, 4, 7,
	4, 121, 120, 124, 125,
	4, 121, 124, 122, 127,
	4, 123, 122, 126, 127,
	4, 120, 123, 125, 126
};

Sint16 poly_001FCBB0[] = {
	4, 16, 310, 17, 18,
	0x8000u | 12, 310, 18, 311, 23, 309, 13, 12, 14, 20, 21, 16, 17,
	4, 69, 70, 68, 320,
	0x8000u | 12, 70, 320, 75, 313, 65, 312, 66, 64, 73, 72, 69, 68,
	4, 132, 315, 133, 134,
	0x8000u | 12, 315, 134, 316, 139, 314, 129, 128, 130, 136, 137, 132, 133,
	4, 185, 186, 184, 321,
	0x8000u | 12, 186, 321, 191, 318, 181, 317, 182, 180, 189, 188, 185, 184
};

Sint16 poly_001FCC40[] = {
	3, 15, 12, 309,
	3, 19, 310, 16,
	4, 16, 20, 19, 22,
	4, 20, 12, 22, 15,
	3, 64, 67, 312,
	3, 68, 320, 71,
	4, 71, 74, 68, 72,
	4, 74, 67, 72, 64,
	3, 131, 128, 314,
	3, 135, 315, 132,
	4, 132, 136, 135, 138,
	4, 136, 128, 138, 131,
	3, 180, 183, 317,
	3, 184, 321, 187,
	4, 187, 190, 184, 188,
	4, 190, 183, 188, 180
};

Sint16 poly_001FCCD0[] = {
	4, 242, 290, 239, 289,
	4, 290, 291, 289, 288,
	4, 241, 242, 240, 239,
	4, 288, 291, 303, 304,
	4, 301, 300, 323, 302,
	4, 256, 257, 255, 254,
	4, 254, 257, 273, 272,
	4, 274, 319, 276, 275,
	4, 241, 240, 277, 278,
	4, 269, 268, 284, 283,
	4, 269, 284, 322, 299,
	4, 268, 256, 283, 255
};

Sint16 poly_001FCD48[] = {
	0x8000u | 7, 253, 286, 238, 285, 234, 233, 235,
	0x8000u | 8, 295, 249, 287, 236, 245, 237, 246, 247,
	12, 291, 293, 304, 308, 323, 307, 301, 306, 322, 305, 269, 270,
	7, 241, 244, 242, 292, 290, 293, 291,
	12, 295, 249, 294, 248, 296, 250, 297, 251, 298, 252, 286, 253,
	13, 247, 246, 261, 260, 263, 262, 265, 264, 267, 266, 235, 232, 233,
	0x8000u | 8, 270, 269, 271, 268, 258, 256, 259, 257,
	13, 257, 259, 272, 279, 319, 280, 275, 281, 277, 282, 241, 243, 244
};

Sint16 poly_001FCDF8[] = {
	4, 25, 26, 24, 27,
	4, 76, 79, 77, 78,
	4, 141, 142, 140, 143,
	4, 192, 195, 193, 194
};

Sint16 poly_001FCE20[] = {
	3, 29, 24, 27,
	3, 25, 28, 26,
	3, 79, 76, 81,
	3, 78, 80, 77,
	3, 145, 140, 143,
	3, 141, 144, 142,
	3, 195, 192, 197,
	3, 194, 196, 193
};

Sint16 poly_001FCE60[] = {
	4, 40, 30, 42, 44,
	0x8000u | 5, 44, 46, 30, 32, 34,
	5, 40, 38, 30, 36, 34,
	4, 51, 49, 47, 63,
	0x8000u | 5, 57, 59, 47, 61, 63,
	5, 57, 55, 47, 53, 51,
	4, 92, 94, 82, 96,
	5, 96, 98, 82, 84, 86,
	0x8000u | 5, 92, 90, 82, 88, 86,
	3, 111, 113, 99,
	3, 103, 105, 99,
	0x8000u | 5, 111, 109, 99, 107, 105,
	5, 113, 115, 99, 101, 103,
	4, 156, 146, 158, 160,
	0x8000u | 5, 160, 162, 146, 148, 150,
	5, 156, 154, 146, 152, 150,
	4, 167, 165, 163, 179,
	0x8000u | 5, 167, 169, 163, 171, 173,
	0x8000u | 5, 173, 175, 163, 177, 179,
	4, 208, 210, 198, 212,
	5, 212, 214, 198, 200, 202,
	0x8000u | 5, 208, 206, 198, 204, 202,
	3, 227, 229, 215,
	3, 219, 221, 215,
	5, 221, 223, 215, 225, 227,
	5, 229, 231, 215, 217, 219
};

Sint16 poly_001FCF7C[] = {
	18, 38, 35, 36, 33, 34, 31, 32, 45, 46, 43, 44, 41, 42, 39, 40, 37, 38, 35,
	18, 62, 49, 48, 51, 50, 53, 52, 55, 54, 57, 56, 59, 58, 61, 60, 63, 62, 49,
	18, 89, 88, 87, 86, 85, 84, 83, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88,
	18, 106, 105, 104, 103, 102, 101, 100, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105,
	18, 154, 151, 152, 149, 150, 147, 148, 161, 162, 159, 160, 157, 158, 155, 156, 153, 154, 151,
	18, 167, 164, 165, 178, 179, 176, 177, 174, 175, 172, 173, 170, 171, 168, 169, 166, 167, 164,
	18, 205, 204, 203, 202, 201, 200, 199, 214, 213, 212, 211, 210, 209, 208, 207, 206, 205, 204,
	18, 218, 217, 216, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217
};

NJS_TEX uv_001FD0AC[] = {
	{ 255, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 },
	{ 255, 254 },
	{ 255, 0 },
	{ 0, 254 },
	{ 0 }
};

NJS_TEX uv_001FD0CC[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 }
};

NJS_TEX uv_001FD14C[] = {
	{ 290, 255 },
	{ 290, 255 },
	{ 36, 255 },
	{ 36, 255 },
	{ 290, 0 },
	{ 36, 0 },
	{ 290, 127 },
	{ 36, 127 },
	{ 290, 255 },
	{ 36, 255 },
	{ 290, 255 },
	{ 36, 255 },
	{ 290, 127 },
	{ 36, 127 },
	{ 290, 0 },
	{ 36, 0 },
	{ 36, 255 },
	{ 36, 255 },
	{ 290, 255 },
	{ 291, 255 },
	{ 36, 0 },
	{ 291, 0 },
	{ 36, 127 },
	{ 291, 127 },
	{ 36, 255 },
	{ 291, 255 },
	{ 36, 255 },
	{ 290, 255 },
	{ 36, 127 },
	{ 290, 127 },
	{ 36, 0 },
	{ 290, 0 },
	{ 253, 255 },
	{ 253, 255 },
	{ 254, 255 },
	{ 254, 255 },
	{ 253, 0 },
	{ 254, 0 },
	{ 253, 127 },
	{ 254, 127 },
	{ 253, 255 },
	{ 254, 255 },
	{ 253, 255 },
	{ 254, 255 },
	{ 253, 127 },
	{ 254, 127 },
	{ 253, 0 },
	{ 254, 0 },
	{ 254, 255 },
	{ 254, 255 },
	{ 253, 255 },
	{ 253, 255 },
	{ 254, 0 },
	{ 253, 0 },
	{ 254, 127 },
	{ 253, 127 },
	{ 254, 255 },
	{ 253, 255 },
	{ 254, 255 },
	{ 253, 255 },
	{ 254, 127 },
	{ 253, 127 },
	{ 254, 0 },
	{ 253, 0 }
};

NJS_TEX uv_001FD24C[] = {
	{ 255, 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 0, 254 },
	{ 0 },
	{ 255, 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 },
	{ 0 },
	{ 255, 0 },
	{ 0, 254 },
	{ 255, 254 }
};

NJS_TEX uv_001FD32C[] = {
	{ 510, 254 },
	{ 0, 254 },
	{ 509, 0 },
	{ 0 },
	{ 510, 254 },
	{ 0, 254 },
	{ 509, 0 },
	{ 0 },
	{ 510, 254 },
	{ 0, 254 },
	{ 509, 0 },
	{ 0 },
	{ 509, 0 },
	{ 510, 254 },
	{ 0 },
	{ 0, 254 },
	{ 1528, 255 },
	{ 1528, 0 },
	{ 1, 255 },
	{ 1, 0 },
	{ 510, 254 },
	{ 0, 254 },
	{ 509, 0 },
	{ 0 },
	{ 509, 0 },
	{ 510, 254 },
	{ 0 },
	{ 0, 254 },
	{ 1528, 0 },
	{ 1528, 255 },
	{ 1, 0 },
	{ 1, 255 },
	{ 509, 0 },
	{ 510, 254 },
	{ 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, 254 },
	{ 509, 0 },
	{ 0 },
	{ 509, 0 },
	{ 510, 254 },
	{ 0 },
	{ 0, 254 },
	{ 510, 254 },
	{ 0, 254 },
	{ 509, 0 },
	{ 0 }
};

NJS_TEX uv_001FD3EC[] = {
	{ 1530, 0 },
	{ 1530, 254 },
	{ 1173, 0 },
	{ 1173, 254 },
	{ 357, 0 },
	{ 357, 254 },
	{ 0 },
	{ 1530, 254 },
	{ 1530, 0 },
	{ 1173, 254 },
	{ 1173, 0 },
	{ 357, 254 },
	{ 357, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 679, 0 },
	{ 679, 254 },
	{ 2039, 0 },
	{ 2039, 254 },
	{ 6120, 0 },
	{ 6120, 254 },
	{ 7480, 0 },
	{ 7480, 254 },
	{ 8160, 0 },
	{ 8160, 254 },
	{ 0 },
	{ 595, 254 },
	{ 595, 0 },
	{ 1955, 254 },
	{ 1955, 0 },
	{ 2550, 254 },
	{ 2550, 0 },
	{ 4080, 254 },
	{ 4080, 0 },
	{ 3740, 254 },
	{ 3740, 0 },
	{ 3060, 254 },
	{ 3060, 0 },
	{ 1019, 254 },
	{ 1019, 0 },
	{ 339, 254 },
	{ 339, 0 },
	{ 0, 254 },
	{ 0 },
	{ 4080, 0 },
	{ 4080, 254 },
	{ 3740, 0 },
	{ 3740, 254 },
	{ 3060, 0 },
	{ 3060, 254 },
	{ 1019, 0 },
	{ 1019, 254 },
	{ 339, 0 },
	{ 339, 254 },
	{ 0 },
	{ 0, 254 },
	{ 357, 254 },
	{ 2550, 254 },
	{ 2550, 0 },
	{ 1955, 254 },
	{ 1955, 0 },
	{ 595, 254 },
	{ 595, 0 },
	{ 0, 254 },
	{ 0 },
	{ 8160, 0 },
	{ 8160, 254 },
	{ 7480, 0 },
	{ 7480, 254 },
	{ 6120, 0 },
	{ 6120, 254 },
	{ 2039, 0 },
	{ 2039, 254 },
	{ 679, 0 },
	{ 679, 254 },
	{ 0 },
	{ 0, 254 },
	{ 595, 254 }
};

NJS_TEX uv_001FD52C[] = {
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 255 },
	{ 510, 0 }
};

NJS_TEX uv_001FD56C[] = {
	{ 254, 255 },
	{ 0, 127 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0, 127 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0, 127 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0, 127 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0, 127 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0, 127 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0, 127 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0, 127 },
	{ 254, 0 }
};

NJS_TEX uv_001FD5CC[] = {
	{ 254, 127 },
	{ 127, 127 },
	{ 217, 217 },
	{ 127, 254 },
	{ 127, 254 },
	{ 37, 217 },
	{ 127, 127 },
	{ 0, 127 },
	{ 37, 37 },
	{ 254, 127 },
	{ 217, 37 },
	{ 127, 127 },
	{ 127, 0 },
	{ 37, 37 },
	{ 37, 37 },
	{ 0, 127 },
	{ 127, 127 },
	{ 37, 217 },
	{ 254, 127 },
	{ 217, 217 },
	{ 127, 127 },
	{ 127, 254 },
	{ 37, 217 },
	{ 254, 127 },
	{ 217, 37 },
	{ 127, 127 },
	{ 127, 0 },
	{ 37, 37 },
	{ 0, 127 },
	{ 37, 217 },
	{ 127, 127 },
	{ 127, 254 },
	{ 127, 254 },
	{ 217, 217 },
	{ 127, 127 },
	{ 254, 127 },
	{ 217, 37 },
	{ 0, 127 },
	{ 37, 37 },
	{ 127, 127 },
	{ 127, 0 },
	{ 217, 37 },
	{ 37, 217 },
	{ 127, 254 },
	{ 127, 127 },
	{ 217, 37 },
	{ 127, 0 },
	{ 127, 127 },
	{ 37, 217 },
	{ 0, 127 },
	{ 127, 127 },
	{ 37, 37 },
	{ 127, 0 },
	{ 127, 254 },
	{ 217, 217 },
	{ 127, 127 },
	{ 254, 127 },
	{ 217, 37 },
	{ 254, 127 },
	{ 127, 127 },
	{ 217, 217 },
	{ 127, 254 },
	{ 127, 254 },
	{ 37, 217 },
	{ 127, 127 },
	{ 0, 127 },
	{ 37, 37 },
	{ 254, 127 },
	{ 217, 37 },
	{ 127, 127 },
	{ 127, 0 },
	{ 37, 37 },
	{ 37, 37 },
	{ 0, 127 },
	{ 127, 127 },
	{ 37, 217 },
	{ 37, 37 },
	{ 127, 0 },
	{ 127, 127 },
	{ 217, 37 },
	{ 254, 127 },
	{ 254, 127 },
	{ 217, 217 },
	{ 127, 127 },
	{ 127, 254 },
	{ 37, 217 },
	{ 0, 127 },
	{ 37, 217 },
	{ 127, 127 },
	{ 127, 254 },
	{ 127, 254 },
	{ 217, 217 },
	{ 127, 127 },
	{ 254, 127 },
	{ 217, 37 },
	{ 0, 127 },
	{ 37, 37 },
	{ 127, 127 },
	{ 127, 0 },
	{ 217, 37 },
	{ 37, 217 },
	{ 127, 254 },
	{ 127, 127 },
	{ 217, 37 },
	{ 127, 0 },
	{ 127, 127 },
	{ 127, 0 },
	{ 37, 37 },
	{ 127, 127 },
	{ 0, 127 },
	{ 37, 217 },
	{ 127, 254 },
	{ 217, 217 },
	{ 127, 127 },
	{ 254, 127 },
	{ 217, 37 }
};

NJS_TEX uv_001FD79C[] = {
	{ 0, 57 },
	{ 254, 0 },
	{ 0, 28 },
	{ 254, 37 },
	{ 0, 57 },
	{ 254, 127 },
	{ 0, 127 },
	{ 254, 217 },
	{ 0, 197 },
	{ 254, 255 },
	{ 0, 226 },
	{ 254, 217 },
	{ 0, 197 },
	{ 254, 127 },
	{ 0, 127 },
	{ 254, 37 },
	{ 0, 57 },
	{ 254, 0 },
	{ 254, 217 },
	{ 0, 127 },
	{ 254, 127 },
	{ 0, 57 },
	{ 254, 37 },
	{ 0, 28 },
	{ 254, 0 },
	{ 0, 57 },
	{ 254, 37 },
	{ 0, 127 },
	{ 254, 127 },
	{ 0, 197 },
	{ 254, 217 },
	{ 0, 226 },
	{ 254, 255 },
	{ 0, 197 },
	{ 254, 217 },
	{ 0, 127 },
	{ 254, 37 },
	{ 0, 28 },
	{ 254, 0 },
	{ 0, 57 },
	{ 254, 37 },
	{ 0, 127 },
	{ 254, 127 },
	{ 0, 197 },
	{ 254, 217 },
	{ 0, 226 },
	{ 254, 255 },
	{ 0, 197 },
	{ 254, 217 },
	{ 0, 127 },
	{ 254, 127 },
	{ 0, 57 },
	{ 254, 37 },
	{ 0, 28 },
	{ 254, 37 },
	{ 0, 28 },
	{ 254, 0 },
	{ 0, 57 },
	{ 254, 37 },
	{ 0, 127 },
	{ 254, 127 },
	{ 0, 197 },
	{ 254, 217 },
	{ 0, 226 },
	{ 254, 255 },
	{ 0, 197 },
	{ 254, 217 },
	{ 0, 127 },
	{ 254, 127 },
	{ 0, 57 },
	{ 254, 37 },
	{ 0, 28 },
	{ 255, 57 },
	{ 0 },
	{ 255, 28 },
	{ 0, 37 },
	{ 255, 57 },
	{ 0, 127 },
	{ 255, 127 },
	{ 0, 217 },
	{ 255, 197 },
	{ 0, 255 },
	{ 255, 226 },
	{ 0, 217 },
	{ 255, 197 },
	{ 0, 127 },
	{ 255, 127 },
	{ 0, 37 },
	{ 255, 57 },
	{ 0 },
	{ 255, 57 },
	{ 0, 127 },
	{ 255, 127 },
	{ 0, 217 },
	{ 255, 197 },
	{ 0, 255 },
	{ 255, 226 },
	{ 0, 217 },
	{ 255, 197 },
	{ 0, 127 },
	{ 255, 127 },
	{ 0, 37 },
	{ 255, 57 },
	{ 0 },
	{ 255, 28 },
	{ 0, 37 },
	{ 255, 57 },
	{ 0, 127 },
	{ 0, 37 },
	{ 255, 28 },
	{ 0 },
	{ 255, 57 },
	{ 0, 37 },
	{ 255, 127 },
	{ 0, 127 },
	{ 255, 197 },
	{ 0, 217 },
	{ 255, 226 },
	{ 0, 255 },
	{ 255, 197 },
	{ 0, 217 },
	{ 255, 127 },
	{ 0, 127 },
	{ 255, 57 },
	{ 0, 37 },
	{ 255, 28 },
	{ 0, 37 },
	{ 255, 127 },
	{ 0, 127 },
	{ 255, 197 },
	{ 0, 217 },
	{ 255, 226 },
	{ 0, 255 },
	{ 255, 197 },
	{ 0, 217 },
	{ 255, 127 },
	{ 0, 127 },
	{ 255, 57 },
	{ 0, 37 },
	{ 255, 28 },
	{ 0 },
	{ 255, 57 },
	{ 0, 37 },
	{ 255, 127 }
};

NJS_MESHSET_SADX meshlist_001FD9DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001FCB4C, NULL, NULL, NULL, uv_001FD0AC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_001FCB60, NULL, NULL, NULL, uv_001FD0CC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 8, poly_001FCBB0, NULL, NULL, NULL, uv_001FD14C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 16, poly_001FCC40, NULL, NULL, NULL, uv_001FD24C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 12, poly_001FCCD0, NULL, NULL, NULL, uv_001FD32C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 8, poly_001FCD48, NULL, NULL, NULL, uv_001FD3EC, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_001FCDF8, NULL, NULL, NULL, uv_001FD52C, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 8, poly_001FCE20, NULL, NULL, NULL, uv_001FD56C, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 8, poly_001FCF7C, NULL, NULL, NULL, uv_001FD79C, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 26, poly_001FCE60, NULL, NULL, NULL, uv_001FD5CC, NULL }
};

NJS_VECTOR vertex_001FDACC[] = {
	{ -65.4f, 29.83398f, 3 },
	{ -65.4f, 29.83398f, -3 },
	{ -65.4f, 31.86603f, -3 },
	{ -65.4f, 31.86603f, 3 },
	{ -64.99998f, 29.83398f, -3 },
	{ -64.99998f, 29.83398f, 3 },
	{ -64.99998f, 31.86603f, 3 },
	{ -64.99998f, 31.86603f, -3 },
	{ -65.7f, 29.83398f, 3 },
	{ -65.7f, 29.83398f, -3 },
	{ -65.7f, 31.86603f, -3 },
	{ -65.7f, 31.86603f, 3 },
	{ -64.99998f, 16.53397f, 13 },
	{ -65.7f, 16.53397f, 7 },
	{ -65.7f, 16.53397f, 13 },
	{ -61.00001f, 16.53397f, 13 },
	{ -64.99998f, 19.46602f, 13 },
	{ -65.7f, 19.46602f, 13 },
	{ -65.7f, 19.46602f, 7 },
	{ -61.00001f, 19.46602f, 13 },
	{ -64.99998f, 18, 13.5f },
	{ -65.7f, 18, 13.5f },
	{ -61.00001f, 18, 13.5f },
	{ -65.7f, 18, 6.5f },
	{ -65.09999f, 16.53397f, 7 },
	{ -65.09999f, 16.53397f, 13 },
	{ -65.09999f, 19.46602f, 13 },
	{ -65.09999f, 19.46602f, 7 },
	{ -65.09999f, 18, 13.5f },
	{ -65.09999f, 18, 6.5f },
	{ -65.79999f, 18, 11.5f },
	{ -65.09999f, 18, 10.0672f },
	{ -65.5f, 18, 10.38242f },
	{ -65.09999f, 19.01314f, 10.48686f },
	{ -65.5f, 18.79025f, 10.70975f },
	{ -65.09999f, 19.4328f, 11.5f },
	{ -65.5f, 19.11758f, 11.5f },
	{ -65.09999f, 19.01314f, 12.51314f },
	{ -65.5f, 18.79025f, 12.29025f },
	{ -65.09999f, 18, 12.9328f },
	{ -65.5f, 18, 12.61758f },
	{ -65.09999f, 16.98686f, 12.51314f },
	{ -65.5f, 17.20975f, 12.29025f },
	{ -65.09999f, 16.5672f, 11.5f },
	{ -65.5f, 16.88242f, 11.5f },
	{ -65.09999f, 16.98686f, 10.48686f },
	{ -65.5f, 17.20975f, 10.70975f },
	{ -65.79999f, 18, 8.5f },
	{ -65.09999f, 18, 7.0672f },
	{ -65.5f, 18, 7.382416f },
	{ -65.09999f, 19.01314f, 7.486857f },
	{ -65.5f, 18.79025f, 7.709748f },
	{ -65.09999f, 19.4328f, 8.5f },
	{ -65.5f, 19.11758f, 8.5f },
	{ -65.09999f, 19.01314f, 9.513143f },
	{ -65.5f, 18.79025f, 9.290251f },
	{ -65.09999f, 18, 9.932799f },
	{ -65.5f, 18, 9.617582f },
	{ -65.09999f, 16.98686f, 9.513143f },
	{ -65.5f, 17.20975f, 9.290251f },
	{ -65.09999f, 16.5672f, 8.5f },
	{ -65.5f, 16.88242f, 8.5f },
	{ -65.09999f, 16.98686f, 7.486857f },
	{ -65.5f, 17.20975f, 7.709748f },
	{ -64.99998f, 16.53397f, -13 },
	{ -65.7f, 16.53397f, -7 },
	{ -65.7f, 16.53397f, -13 },
	{ -60.99999f, 16.53397f, -13 },
	{ -64.99998f, 19.46602f, -13 },
	{ -65.7f, 19.46602f, -13 },
	{ -65.7f, 19.46602f, -7 },
	{ -60.99999f, 19.46602f, -13 },
	{ -64.99998f, 18, -13.5f },
	{ -65.7f, 18, -13.5f },
	{ -60.99999f, 18, -13.5f },
	{ -65.7f, 18, -6.5f },
	{ -65.09999f, 16.53397f, -7 },
	{ -65.09999f, 16.53397f, -13 },
	{ -65.09999f, 19.46602f, -13 },
	{ -65.09999f, 19.46602f, -7 },
	{ -65.09999f, 18, -13.5f },
	{ -65.09999f, 18, -6.5f },
	{ -65.79999f, 18, -11.5f },
	{ -65.09999f, 18, -10.0672f },
	{ -65.5f, 18, -10.38242f },
	{ -65.09999f, 19.01314f, -10.48686f },
	{ -65.5f, 18.79025f, -10.70975f },
	{ -65.09999f, 19.4328f, -11.5f },
	{ -65.5f, 19.11758f, -11.5f },
	{ -65.09999f, 19.01314f, -12.51314f },
	{ -65.5f, 18.79025f, -12.29025f },
	{ -65.09999f, 18, -12.9328f },
	{ -65.5f, 18, -12.61758f },
	{ -65.09999f, 16.98686f, -12.51314f },
	{ -65.5f, 17.20975f, -12.29025f },
	{ -65.09999f, 16.5672f, -11.5f },
	{ -65.5f, 16.88242f, -11.5f },
	{ -65.09999f, 16.98686f, -10.48686f },
	{ -65.5f, 17.20975f, -10.70975f },
	{ -65.79999f, 18, -8.5f },
	{ -65.09999f, 18, -7.0672f },
	{ -65.5f, 18, -7.382416f },
	{ -65.09999f, 19.01314f, -7.486857f },
	{ -65.5f, 18.79025f, -7.709749f },
	{ -65.09999f, 19.4328f, -8.5f },
	{ -65.5f, 19.11758f, -8.5f },
	{ -65.09999f, 19.01314f, -9.513143f },
	{ -65.5f, 18.79025f, -9.290252f },
	{ -65.09999f, 18, -9.932799f },
	{ -65.5f, 18, -9.617583f },
	{ -65.09999f, 16.98686f, -9.513143f },
	{ -65.5f, 17.20975f, -9.290252f },
	{ -65.09999f, 16.5672f, -8.5f },
	{ -65.5f, 16.88242f, -8.5f },
	{ -65.09999f, 16.98686f, -7.486857f },
	{ -65.5f, 17.20975f, -7.709749f },
	{ 65.4f, 29.83398f, 3 },
	{ 65.4f, 29.83398f, -3 },
	{ 65.4f, 31.86603f, -3 },
	{ 65.4f, 31.86603f, 3 },
	{ 64.99998f, 29.83398f, -3 },
	{ 64.99998f, 29.83398f, 3 },
	{ 64.99998f, 31.86603f, 3 },
	{ 64.99998f, 31.86603f, -3 },
	{ 65.7f, 29.83398f, 3 },
	{ 65.7f, 29.83398f, -3 },
	{ 65.7f, 31.86603f, -3 },
	{ 65.7f, 31.86603f, 3 },
	{ 64.99998f, 16.53397f, -13 },
	{ 65.7f, 16.53397f, -7 },
	{ 65.7f, 16.53397f, -13 },
	{ 61.00001f, 16.53397f, -13 },
	{ 64.99998f, 19.46602f, -13 },
	{ 65.7f, 19.46602f, -13 },
	{ 65.7f, 19.46602f, -7 },
	{ 61.00001f, 19.46602f, -13 },
	{ 64.99998f, 18, -13.5f },
	{ 65.7f, 18, -13.5f },
	{ 61.00001f, 18, -13.5f },
	{ 65.7f, 18, -6.5f },
	{ 65.09999f, 16.53397f, -7 },
	{ 65.09999f, 16.53397f, -13 },
	{ 65.09999f, 19.46602f, -13 },
	{ 65.09999f, 19.46602f, -7 },
	{ 65.09999f, 18, -13.5f },
	{ 65.09999f, 18, -6.5f },
	{ 65.80001f, 18, -11.5f },
	{ 65.10001f, 18, -10.0672f },
	{ 65.50001f, 18, -10.38242f },
	{ 65.10001f, 19.01314f, -10.48686f },
	{ 65.50001f, 18.79025f, -10.70975f },
	{ 65.10001f, 19.4328f, -11.5f },
	{ 65.50001f, 19.11758f, -11.5f },
	{ 65.10001f, 19.01314f, -12.51314f },
	{ 65.50001f, 18.79025f, -12.29025f },
	{ 65.10001f, 18, -12.9328f },
	{ 65.50001f, 18, -12.61758f },
	{ 65.10001f, 16.98686f, -12.51314f },
	{ 65.50001f, 17.20975f, -12.29025f },
	{ 65.10001f, 16.5672f, -11.5f },
	{ 65.50001f, 16.88242f, -11.5f },
	{ 65.10001f, 16.98686f, -10.48686f },
	{ 65.50001f, 17.20975f, -10.70975f },
	{ 65.80001f, 18, -8.5f },
	{ 65.10001f, 18, -7.0672f },
	{ 65.50001f, 18, -7.382416f },
	{ 65.10001f, 19.01314f, -7.486857f },
	{ 65.50001f, 18.79025f, -7.709749f },
	{ 65.10001f, 19.4328f, -8.5f },
	{ 65.50001f, 19.11758f, -8.5f },
	{ 65.10001f, 19.01314f, -9.513143f },
	{ 65.50001f, 18.79025f, -9.290251f },
	{ 65.10001f, 18, -9.932799f },
	{ 65.50001f, 18, -9.617583f },
	{ 65.10001f, 16.98686f, -9.513143f },
	{ 65.50001f, 17.20975f, -9.290251f },
	{ 65.10001f, 16.5672f, -8.5f },
	{ 65.50001f, 16.88242f, -8.5f },
	{ 65.10001f, 16.98686f, -7.486857f },
	{ 65.50001f, 17.20975f, -7.709749f },
	{ 64.99998f, 16.53397f, 13 },
	{ 65.7f, 16.53397f, 7 },
	{ 65.7f, 16.53397f, 13 },
	{ 61, 16.53397f, 13 },
	{ 64.99998f, 19.46602f, 13 },
	{ 65.7f, 19.46602f, 13 },
	{ 65.7f, 19.46602f, 7 },
	{ 61, 19.46602f, 13 },
	{ 64.99998f, 18, 13.5f },
	{ 65.7f, 18, 13.5f },
	{ 61, 18, 13.5f },
	{ 65.7f, 18, 6.5f },
	{ 65.09999f, 16.53397f, 7 },
	{ 65.09999f, 16.53397f, 13 },
	{ 65.09999f, 19.46602f, 13 },
	{ 65.09999f, 19.46602f, 7 },
	{ 65.09999f, 18, 13.5f },
	{ 65.09999f, 18, 6.5f },
	{ 65.79999f, 18, 11.5f },
	{ 65.09999f, 18, 10.0672f },
	{ 65.5f, 18, 10.38242f },
	{ 65.09999f, 19.01314f, 10.48686f },
	{ 65.5f, 18.79025f, 10.70975f },
	{ 65.09999f, 19.4328f, 11.5f },
	{ 65.5f, 19.11758f, 11.5f },
	{ 65.09999f, 19.01314f, 12.51314f },
	{ 65.5f, 18.79025f, 12.29025f },
	{ 65.09999f, 18, 12.9328f },
	{ 65.5f, 18, 12.61758f },
	{ 65.09999f, 16.98686f, 12.51314f },
	{ 65.5f, 17.20975f, 12.29025f },
	{ 65.09999f, 16.5672f, 11.5f },
	{ 65.5f, 16.88242f, 11.5f },
	{ 65.09999f, 16.98686f, 10.48686f },
	{ 65.5f, 17.20975f, 10.70975f },
	{ 65.79999f, 18, 8.5f },
	{ 65.09999f, 18, 7.0672f },
	{ 65.5f, 18, 7.382416f },
	{ 65.09999f, 19.01314f, 7.486857f },
	{ 65.5f, 18.79025f, 7.709749f },
	{ 65.09999f, 19.4328f, 8.5f },
	{ 65.5f, 19.11758f, 8.5f },
	{ 65.09999f, 19.01314f, 9.513143f },
	{ 65.5f, 18.79025f, 9.290251f },
	{ 65.09999f, 18, 9.932799f },
	{ 65.5f, 18, 9.617583f },
	{ 65.09999f, 16.98686f, 9.513143f },
	{ 65.5f, 17.20975f, 9.290251f },
	{ 65.09999f, 16.5672f, 8.5f },
	{ 65.5f, 16.88242f, 8.5f },
	{ 65.09999f, 16.98686f, 7.486857f },
	{ 65.5f, 17.20975f, 7.709749f },
	{ -60, 29.5f, -15 },
	{ -65, 29.5f, -8 },
	{ -65, 32.09999f, -8 },
	{ -60, 32.09999f, -15 },
	{ 65, 32.09999f, 8 },
	{ 65.00002f, 32.09999f, -8 },
	{ -65, 32.09999f, 8 },
	{ -65, 20.1f, -8 },
	{ -60, 20.1f, -15 },
	{ -60, 11.5f, -15 },
	{ -65, 11.5f, -8 },
	{ -60, 10, -15 },
	{ -65, 10, -8 },
	{ 65.00002f, 29.5f, -8 },
	{ 60, 29.5f, -15 },
	{ 60, 32.09999f, -15 },
	{ 50, 32.09999f, 15 },
	{ 60, 32.09999f, 15 },
	{ 30, 32.09999f, 15 },
	{ -30, 32.09999f, 15 },
	{ -50, 32.09999f, 15 },
	{ -60, 32.09999f, 15 },
	{ 60, 20.1f, -15 },
	{ 65, 20.1f, -8 },
	{ 65, 11.5f, -8 },
	{ 60, 11.5f, -15 },
	{ 65, 10, -8 },
	{ 60, 10, -15 },
	{ 50, 29.5f, -15 },
	{ 50, 32.09999f, -15 },
	{ 30, 29.5f, -15 },
	{ 30, 32.09999f, -15 },
	{ -30, 29.5f, -15 },
	{ -30, 32.09999f, -15 },
	{ -50, 29.5f, -15 },
	{ -50, 32.09999f, -15 },
	{ 65, 11.5f, 8 },
	{ 60, 11.5f, 15 },
	{ 60, 10, 15 },
	{ 65, 10, 8 },
	{ 50, 11.5f, -15 },
	{ 50, 20.1f, -15 },
	{ 30, 20.1f, -15 },
	{ -30, 11.5f, -15 },
	{ -30, 20.1f, -15 },
	{ -50, 11.5f, -15 },
	{ -50, 20.1f, -15 },
	{ 50, 10, -15 },
	{ 30, 10, -15 },
	{ -30, 10, -15 },
	{ -50, 10, -15 },
	{ 65, 20.1f, 8 },
	{ 60, 20.1f, 15 },
	{ -65, 29.5f, 8 },
	{ -60, 29.5f, 15 },
	{ 65, 29.5f, 8 },
	{ -60, 20.1f, 15 },
	{ -65, 20.1f, 8 },
	{ -65, 11.5f, 8 },
	{ -60, 11.5f, 15 },
	{ -65, 10, 8 },
	{ -60, 10, 15 },
	{ 50, 29.5f, 15 },
	{ 60, 29.5f, 15 },
	{ 30, 29.5f, 15 },
	{ -30, 29.5f, 15 },
	{ -50, 29.5f, 15 },
	{ 50, 20.1f, 15 },
	{ 30, 20.1f, 15 },
	{ 30, 11.5f, 15 },
	{ -30, 20.1f, 15 },
	{ -50, 20.1f, 15 },
	{ -50, 11.5f, 15 },
	{ 50, 10, 15 },
	{ 30, 10, 15 },
	{ -30, 10, 15 },
	{ -50, 10, 15 },
	{ -64.99998f, 16.53397f, 7 },
	{ -64.99998f, 19.46602f, 7 },
	{ -64.99998f, 18, 6.5f },
	{ -64.99998f, 16.53397f, -7 },
	{ -64.99998f, 18, -6.5f },
	{ 65, 16.53397f, -7 },
	{ 65, 19.46602f, -7 },
	{ 65, 18, -6.5f },
	{ 64.99998f, 16.53397f, 7 },
	{ 64.99998f, 18, 6.5f },
	{ 30, 11.5f, -15 },
	{ -64.99998f, 19.46602f, -7 },
	{ 64.99998f, 19.46602f, 7 },
	{ 50, 11.5f, 15 },
	{ -30, 11.5f, 15 }
};

NJS_VECTOR normal_001FE9FC[] = {
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.813265f, 0.581893f },
	{ 0, -0.813265f, -0.581893f },
	{ 0, -0.813265f, 0.581893f },
	{ 0, -0.707853f, 0.70636f },
	{ 0, 0.813265f, 0.581893f },
	{ 0, 0.813265f, 0.581893f },
	{ 0, 0.813265f, -0.581893f },
	{ 0, 0.707853f, 0.70636f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.6189499f, 0, -0.785431f },
	{ -0.799735f, 0, -0.600354f },
	{ -0.6189499f, 0.555384f, -0.555383f },
	{ -0.799735f, 0.424514f, -0.424514f },
	{ -0.618949f, 0.785431f, 0 },
	{ -0.799734f, 0.600354f, 0 },
	{ -0.618949f, 0.555383f, 0.555384f },
	{ -0.799735f, 0.424514f, 0.424514f },
	{ -0.6189499f, 0, 0.785431f },
	{ -0.799735f, 0, 0.6003529f },
	{ -0.618949f, -0.555383f, 0.555384f },
	{ -0.799735f, -0.424514f, 0.424514f },
	{ -0.618949f, -0.785431f, 0 },
	{ -0.799734f, -0.600354f, 0 },
	{ -0.618949f, -0.555384f, -0.555384f },
	{ -0.799734f, -0.424514f, -0.424514f },
	{ -1, 0, 0 },
	{ -0.618949f, 0, -0.785431f },
	{ -0.799735f, 0, -0.600354f },
	{ -0.618949f, 0.555384f, -0.555383f },
	{ -0.799735f, 0.424514f, -0.424514f },
	{ -0.618949f, 0.785431f, 0 },
	{ -0.799734f, 0.600354f, 0 },
	{ -0.618949f, 0.555383f, 0.555384f },
	{ -0.799735f, 0.424514f, 0.424514f },
	{ -0.6189499f, 0, 0.785431f },
	{ -0.799735f, 0, 0.6003529f },
	{ -0.618949f, -0.555383f, 0.555384f },
	{ -0.799735f, -0.424514f, 0.424514f },
	{ -0.618949f, -0.785432f, 0 },
	{ -0.799734f, -0.600354f, 0 },
	{ -0.618948f, -0.555384f, -0.555384f },
	{ -0.799734f, -0.424514f, -0.424515f },
	{ 0, -0.813265f, -0.581893f },
	{ 0, -0.813265f, 0.581893f },
	{ 0, -0.813265f, -0.581893f },
	{ 0, -0.7078519f, -0.70636f },
	{ 0, 0.813265f, -0.581893f },
	{ 0, 0.813265f, -0.581893f },
	{ 0, 0.813265f, 0.581893f },
	{ 0, 0.7078519f, -0.70636f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.6189499f, 0, 0.785431f },
	{ -0.799735f, 0, 0.600354f },
	{ -0.6189499f, 0.555384f, 0.555383f },
	{ -0.799735f, 0.424514f, 0.424514f },
	{ -0.618949f, 0.785431f, 0 },
	{ -0.799734f, 0.600354f, 0 },
	{ -0.618949f, 0.555383f, -0.555384f },
	{ -0.799735f, 0.424514f, -0.424514f },
	{ -0.6189499f, 0, -0.785431f },
	{ -0.799735f, 0, -0.6003529f },
	{ -0.618949f, -0.555383f, -0.555384f },
	{ -0.799735f, -0.424514f, -0.424514f },
	{ -0.618949f, -0.785431f, 0 },
	{ -0.799734f, -0.600354f, 0 },
	{ -0.618949f, -0.555384f, 0.555384f },
	{ -0.799734f, -0.424514f, 0.424514f },
	{ -1, 0, 0 },
	{ -0.6189499f, 0, 0.785431f },
	{ -0.799735f, 0, 0.600354f },
	{ -0.6189499f, 0.555384f, 0.555383f },
	{ -0.799735f, 0.424514f, 0.424514f },
	{ -0.618949f, 0.785431f, 0 },
	{ -0.799734f, 0.600354f, 0 },
	{ -0.618948f, 0.555384f, -0.555384f },
	{ -0.799734f, 0.424514f, -0.424515f },
	{ -0.618948f, 0, -0.785432f },
	{ -0.799734f, 0, -0.600354f },
	{ -0.618948f, -0.555384f, -0.555384f },
	{ -0.799734f, -0.424514f, -0.424515f },
	{ -0.618949f, -0.785431f, 0 },
	{ -0.799734f, -0.600354f, 0 },
	{ -0.618949f, -0.555384f, 0.555384f },
	{ -0.799734f, -0.424514f, 0.424514f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0, -0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, -0.813265f, -0.581893f },
	{ 0, -0.813265f, 0.581893f },
	{ 0, -0.813265f, -0.581893f },
	{ 0, -0.707853f, -0.70636f },
	{ 0, 0.813265f, -0.581893f },
	{ 0, 0.813265f, -0.581893f },
	{ 0, 0.813265f, 0.581893f },
	{ 0, 0.707853f, -0.70636f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.6189499f, 0, 0.785431f },
	{ 0.799735f, 0, 0.600354f },
	{ 0.6189499f, 0.555384f, 0.555383f },
	{ 0.799735f, 0.424514f, 0.424514f },
	{ 0.618949f, 0.785431f, 0 },
	{ 0.799734f, 0.600354f, 0 },
	{ 0.618949f, 0.555383f, -0.555384f },
	{ 0.799735f, 0.424514f, -0.424514f },
	{ 0.6189499f, 0, -0.785431f },
	{ 0.799735f, 0, -0.6003529f },
	{ 0.618949f, -0.555383f, -0.555384f },
	{ 0.799735f, -0.424514f, -0.424514f },
	{ 0.618949f, -0.785431f, 0 },
	{ 0.799734f, -0.600354f, 0 },
	{ 0.618949f, -0.555384f, 0.555384f },
	{ 0.799734f, -0.424514f, 0.424514f },
	{ 1, 0, 0 },
	{ 0.618949f, 0, 0.785431f },
	{ 0.799735f, 0, 0.600354f },
	{ 0.618949f, 0.555384f, 0.555383f },
	{ 0.799735f, 0.424514f, 0.424514f },
	{ 0.618949f, 0.785431f, 0 },
	{ 0.799734f, 0.600354f, 0 },
	{ 0.618949f, 0.555384f, -0.555384f },
	{ 0.799734f, 0.424514f, -0.424514f },
	{ 0.618949f, 0, -0.785431f },
	{ 0.799735f, 0, -0.600354f },
	{ 0.618949f, -0.555384f, -0.555384f },
	{ 0.799735f, -0.424514f, -0.424514f },
	{ 0.618949f, -0.785431f, 0 },
	{ 0.799734f, -0.600354f, 0 },
	{ 0.618949f, -0.555384f, 0.555384f },
	{ 0.799734f, -0.424514f, 0.424514f },
	{ 0, -0.813265f, 0.581893f },
	{ 0, -0.813265f, -0.581893f },
	{ 0, -0.813265f, 0.581893f },
	{ 0, -0.707853f, 0.70636f },
	{ 0, 0.813265f, 0.581893f },
	{ 0, 0.813265f, 0.581893f },
	{ 0, 0.813265f, -0.581893f },
	{ 0, 0.707853f, 0.70636f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.6189499f, 0, -0.785431f },
	{ 0.799735f, 0, -0.600354f },
	{ 0.6189499f, 0.555384f, -0.555383f },
	{ 0.799735f, 0.424514f, -0.424514f },
	{ 0.618949f, 0.785431f, 0 },
	{ 0.799734f, 0.600354f, 0 },
	{ 0.618949f, 0.555383f, 0.555384f },
	{ 0.799735f, 0.424514f, 0.424514f },
	{ 0.6189499f, 0, 0.785431f },
	{ 0.799735f, 0, 0.6003529f },
	{ 0.618949f, -0.555383f, 0.555384f },
	{ 0.799735f, -0.424514f, 0.424514f },
	{ 0.618949f, -0.785431f, 0 },
	{ 0.799734f, -0.600354f, 0 },
	{ 0.618949f, -0.555384f, -0.555384f },
	{ 0.799734f, -0.424514f, -0.424514f },
	{ 1, 0, 0 },
	{ 0.6189499f, 0, -0.785431f },
	{ 0.799735f, 0, -0.600354f },
	{ 0.6189499f, 0.555384f, -0.555383f },
	{ 0.799735f, 0.424514f, -0.424514f },
	{ 0.618949f, 0.785431f, 0 },
	{ 0.799734f, 0.600354f, 0 },
	{ 0.618949f, 0.555384f, 0.555384f },
	{ 0.799734f, 0.424514f, 0.424514f },
	{ 0.618949f, 0, 0.785431f },
	{ 0.799735f, 0, 0.600354f },
	{ 0.618949f, -0.555384f, 0.555384f },
	{ 0.799735f, -0.424514f, 0.424514f },
	{ 0.618949f, -0.785431f, 0 },
	{ 0.799734f, -0.600354f, 0 },
	{ 0.618949f, -0.555384f, -0.555384f },
	{ 0.799734f, -0.424514f, -0.424514f },
	{ -0.457582f, 0, -0.889168f },
	{ -0.9522949f, 0, -0.305177f },
	{ -0.9522949f, 0, -0.305177f },
	{ -0.457582f, 0, -0.889168f },
	{ 0.9522949f, 0, 0.305178f },
	{ 0.9522949f, 0, -0.305178f },
	{ -0.9522949f, 0, 0.305177f },
	{ -0.9522949f, 0, -0.305177f },
	{ -0.457582f, 0, -0.889168f },
	{ -0.457582f, 0, -0.889168f },
	{ -0.9522949f, 0, -0.305177f },
	{ -0.457582f, 0, -0.889168f },
	{ -0.9522949f, 0, -0.305177f },
	{ 0.9522949f, 0, -0.305178f },
	{ 0.457581f, 0, -0.889168f },
	{ 0.457581f, 0, -0.889168f },
	{ 0, 0, 1 },
	{ 0.457582f, 0, 0.889168f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.457582f, 0, 0.889168f },
	{ 0.457582f, 0, -0.889168f },
	{ 0.9522949f, 0, -0.305177f },
	{ 0.9522949f, 0, -0.305177f },
	{ 0.457582f, 0, -0.889168f },
	{ 0.9522949f, 0, -0.305177f },
	{ 0.457582f, 0, -0.889168f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.9522949f, 0, 0.305177f },
	{ 0.457582f, 0, 0.889168f },
	{ 0.457582f, 0, 0.889168f },
	{ 0.9522949f, 0, 0.305177f },
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
	{ 0, 0, -1 },
	{ 0.9522949f, 0, 0.305177f },
	{ 0.457582f, 0, 0.889168f },
	{ -0.9522949f, 0, 0.305177f },
	{ -0.457582f, 0, 0.889168f },
	{ 0.9522949f, 0, 0.305178f },
	{ -0.457582f, 0, 0.889168f },
	{ -0.9522949f, 0, 0.305177f },
	{ -0.9522949f, 0, 0.305177f },
	{ -0.457582f, 0, 0.889168f },
	{ -0.9522949f, 0, 0.305177f },
	{ -0.457582f, 0, 0.889168f },
	{ 0, 0, 1 },
	{ 0.457582f, 0, 0.889168f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, -0.873366f, -0.487064f },
	{ 0, 0.873366f, -0.487064f },
	{ 0, 0, -1 },
	{ 0, -0.873366f, 0.487064f },
	{ 0, 0, 1 },
	{ 0, -0.873366f, 0.487064f },
	{ 0, 0.873366f, 0.487064f },
	{ 0, 0, 1 },
	{ 0, -0.873366f, -0.487064f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0.873366f, 0.487064f },
	{ 0, 0.873366f, -0.487064f },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_001FF92C = { vertex_001FDACC, normal_001FE9FC, LengthOfArray(vertex_001FDACC), meshlist_001FD9DC, matlist_001FCA84, LengthOfArray(meshlist_001FD9DC), LengthOfArray(matlist_001FCA84),{ 0.000008f, 21.05f, 0 }, 67.48807f, NULL };

NJS_OBJECT object_001FF954 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001FF92C, 0, -5, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001FCA50 };

NJS_MATERIAL matlist_001FF988[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 27, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 24, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 23, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001FFA28[] = {
	6, 1, 5, 0, 4, 2, 7,
	0x8000u | 8, 7, 6, 4, 17, 5, 16, 13, 12,
	6, 13, 9, 12, 8, 14, 11,
	6, 6, 17, 15, 16, 14, 12,
	6, 10, 18, 3, 19, 2, 0,
	0x8000u | 8, 11, 10, 8, 18, 9, 19, 1, 0
};

Sint16 poly_001FFA84[] = {
	4, 9, 13, 1, 5,
	0x8000u | 10, 69, 21, 20, 26, 22, 27, 23, 25, 24, 72,
	0x8000u | 5, 29, 28, 73, 72, 25,
	0x8000u | 5, 38, 31, 68, 69, 20
};

Sint16 poly_001FFABC[] = {
	4, 20, 68, 22, 70,
	4, 72, 24, 71, 23,
	4, 69, 21, 74, 26,
	4, 25, 73, 27, 75
};

Sint16 poly_001FFAE4[] = {
	4, 22, 70, 23, 71,
	4, 74, 26, 75, 27
};

Sint16 poly_001FFAF8[] = {
	4, 31, 69, 30, 74,
	4, 33, 32, 35, 34,
	4, 73, 29, 75, 36,
	4, 68, 38, 70, 37,
	4, 40, 39, 42, 41,
	4, 28, 72, 43, 71
};

Sint16 poly_001FFB34[] = {
	4, 30, 74, 33, 32,
	4, 75, 36, 34, 35,
	4, 70, 37, 40, 39,
	4, 43, 71, 41, 42
};

Sint16 poly_001FFB5C[] = {
	4, 46, 47, 45, 44,
	4, 53, 51, 52, 50,
	4, 57, 56, 58, 59,
	4, 64, 62, 65, 63
};

Sint16 poly_001FFB84[] = {
	4, 50, 51, 49, 48,
	4, 46, 45, 48, 49,
	6, 53, 52, 55, 54, 47, 44,
	4, 55, 48, 53, 51,
	4, 47, 46, 55, 48,
	4, 61, 60, 62, 63,
	4, 60, 61, 58, 57,
	4, 67, 66, 65, 64,
	4, 66, 67, 56, 59,
	4, 60, 67, 63, 65,
	4, 67, 60, 59, 58
};

NJS_TEX uv_001FFBF8[] = {
	{ 4016, 3 },
	{ 63, 3 },
	{ 4016, 123 },
	{ 63, 123 },
	{ 4016, 251 },
	{ 63, 251 },
	{ 0, 255 },
	{ 238, 255 },
	{ 68, 81 },
	{ 238, 81 },
	{ 238, 0 },
	{ 782, 81 },
	{ 782, 0 },
	{ 952, 81 },
	{ 4016, 3 },
	{ 63, 3 },
	{ 4016, 123 },
	{ 63, 123 },
	{ 4016, 251 },
	{ 63, 251 },
	{ 238, 255 },
	{ 238, 81 },
	{ 782, 255 },
	{ 782, 81 },
	{ 1020, 255 },
	{ 952, 81 },
	{ 782, 255 },
	{ 782, 81 },
	{ 238, 255 },
	{ 238, 81 },
	{ 0, 255 },
	{ 68, 81 },
	{ 1020, 255 },
	{ 782, 255 },
	{ 952, 81 },
	{ 782, 81 },
	{ 782, 0 },
	{ 238, 81 },
	{ 238, 0 },
	{ 68, 81 }
};

NJS_TEX uv_001FFC98[] = {
	{ 0, -254 },
	{ 8159, -254 },
	{ 0, 255 },
	{ 8159, 255 },
	{ 5996, -255 },
	{ 5841, -191 },
	{ 5841, 191 },
	{ 5635, -191 },
	{ 5635, 191 },
	{ 484, -191 },
	{ 484, 191 },
	{ 278, -191 },
	{ 278, 191 },
	{ 123, 254 },
	{ 0, -255 },
	{ 0, 254 },
	{ 123, -255 },
	{ 123, 254 },
	{ 278, -191 },
	{ 6120, 254 },
	{ 6120, -255 },
	{ 5996, 254 },
	{ 5996, -255 },
	{ 5841, 191 }
};

NJS_TEX uv_001FFCF8[] = {
	{ 109, 0 },
	{ 0, 255 },
	{ 243, 0 },
	{ 244, 255 },
	{ 0, 255 },
	{ 109, 0 },
	{ 244, 255 },
	{ 243, 0 },
	{ 0, 255 },
	{ 109, 0 },
	{ 244, 255 },
	{ 243, 0 },
	{ 109, 0 },
	{ 0, 255 },
	{ 243, 0 },
	{ 244, 255 }
};

NJS_TEX uv_001FFD38[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 254, 255 },
	{ 254, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_001FFD58[] = {
	{ 510, 255 },
	{ 379, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 0, 255 },
	{ 0 },
	{ 379, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 379, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 510, 255 },
	{ 379, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_001FFDB8[] = {
	{ 1529, 255 },
	{ 1529, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 0, 255 },
	{ 1529, 0 },
	{ 1529, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1529, 0 },
	{ 1529, 255 },
	{ 1529, 255 },
	{ 1529, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_001FFDF8[] = {
	{ 1530, 254 },
	{ 0, 254 },
	{ 1530, 0 },
	{ 0 },
	{ 1530, 254 },
	{ 0, 254 },
	{ 1530, 0 },
	{ 0 },
	{ 1530, 254 },
	{ 0, 254 },
	{ 1530, 0 },
	{ 0 },
	{ 1530, 254 },
	{ 0, 254 },
	{ 1530, 0 },
	{ 0 }
};

NJS_TEX uv_001FFE38[] = {
	{ 0, 254 },
	{ 0 },
	{ 765, 254 },
	{ 765, 88 },
	{ 765, 0 },
	{ 765, 254 },
	{ 0 },
	{ 0, 254 },
	{ 765, 254 },
	{ 765, 88 },
	{ 0, 254 },
	{ 0 },
	{ 765, 254 },
	{ 765, 0 },
	{ 0, 254 },
	{ 0 },
	{ 765, 254 },
	{ 765, 0 },
	{ 765, 0 },
	{ 765, 254 },
	{ 0 },
	{ 0, 254 },
	{ 0, 254 },
	{ 0 },
	{ 765, 254 },
	{ 765, 91 },
	{ 0, 254 },
	{ 0 },
	{ 765, 254 },
	{ 765, 0 },
	{ 0, 254 },
	{ 0 },
	{ 765, 254 },
	{ 765, 91 },
	{ 0, 254 },
	{ 0 },
	{ 765, 254 },
	{ 765, 0 },
	{ 0, 254 },
	{ 0 },
	{ 765, 254 },
	{ 765, 0 },
	{ 0, 254 },
	{ 0 },
	{ 765, 254 },
	{ 765, 0 }
};

NJS_MESHSET_SADX meshlist_001FFEF0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_001FFA28, NULL, NULL, NULL, uv_001FFBF8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001FFA84, NULL, NULL, NULL, uv_001FFC98, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_001FFABC, NULL, NULL, NULL, uv_001FFCF8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001FFAE4, NULL, NULL, NULL, uv_001FFD38, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_001FFAF8, NULL, NULL, NULL, uv_001FFD58, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, poly_001FFB34, NULL, NULL, NULL, uv_001FFDB8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_001FFB5C, NULL, NULL, NULL, uv_001FFDF8, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 11, poly_001FFB84, NULL, NULL, NULL, uv_001FFE38, NULL }
};

NJS_VECTOR vertex_001FFFB0[] = {
	{ -60, 34.74999f, -13 },
	{ -60, 35.99999f, -8 },
	{ -60, 32.09999f, -15 },
	{ -65, 32.09999f, -8 },
	{ 60, 34.74999f, -13 },
	{ 60, 35.99999f, -8 },
	{ 65, 32.09999f, -8 },
	{ 60, 32.09999f, -15 },
	{ -60, 34.74999f, 13 },
	{ -60, 35.99999f, 8 },
	{ -65, 32.09999f, 8 },
	{ -60, 32.09999f, 15 },
	{ 60, 34.74999f, 13 },
	{ 60, 35.99999f, 8 },
	{ 60, 32.09999f, 15 },
	{ 65, 32.09999f, 8 },
	{ 63, 34.74999f, 8 },
	{ 63, 34.74999f, -8 },
	{ -63, 34.74999f, 8 },
	{ -63, 34.74999f, -8 },
	{ 53.99999f, 39.7f, -3 },
	{ 53.99999f, 39.7f, 3 },
	{ 50, 39.7f, -3 },
	{ -50, 39.7f, -3 },
	{ -53.99999f, 39.7f, -3 },
	{ -53.99999f, 39.7f, 3 },
	{ 50, 39.7f, 3 },
	{ -50, 39.7f, 3 },
	{ -59.39999f, 36, -4 },
	{ -59.39999f, 36, 4 },
	{ 50, 36, 4 },
	{ 59.39999f, 36, 4 },
	{ 20, 38.45f, 4 },
	{ 20, 36, 4 },
	{ -20, 38.45f, 4 },
	{ -20, 36, 4 },
	{ -50, 36, 4 },
	{ 50, 36, -4 },
	{ 59.39999f, 36, -4 },
	{ 20, 36, -4 },
	{ 20, 38.45f, -4 },
	{ -20, 36, -4 },
	{ -20, 38.45f, -4 },
	{ -50, 36, -4 },
	{ -43, 39.7f, -3 },
	{ -43, 39.7f, 3 },
	{ -43, 42, 3 },
	{ -43, 42, -3 },
	{ -30.5f, 42, 3 },
	{ -30.5f, 39.7f, 3 },
	{ -23, 39.7f, 3 },
	{ -23, 41, 3 },
	{ -23, 39.7f, -3 },
	{ -23, 41, -3 },
	{ -30.5f, 39.7f, -3 },
	{ -30.5f, 42, -3 },
	{ 43, 39.7f, -3 },
	{ 43, 39.7f, 3 },
	{ 43, 42, 3.000006f },
	{ 43, 42, -2.999994f },
	{ 30.5f, 42, 3 },
	{ 30.5f, 39.7f, 3 },
	{ 23, 39.7f, 3 },
	{ 23, 41, 3.000004f },
	{ 23, 39.7f, -2.999996f },
	{ 23, 41, -2.999996f },
	{ 30.5f, 39.7f, -3 },
	{ 30.5f, 42, -2.999995f },
	{ 56.99999f, 38.45f, -4 },
	{ 56.99999f, 38.45f, 4 },
	{ 50, 38.45f, -4 },
	{ -50, 38.45f, -4 },
	{ -56.99999f, 38.45f, -4 },
	{ -56.99999f, 38.45f, 4 },
	{ 50, 38.45f, 4 },
	{ -50, 38.45f, 4 }
};

NJS_VECTOR normal_00200340[] = {
	{ -0.334998f, 0.765936f, -0.548742f },
	{ -0.192047f, 0.97423f, -0.118294f },
	{ -0.314152f, 0.593256f, -0.7411849f },
	{ -0.792863f, 0.563287f, -0.232542f },
	{ 0.334998f, 0.765936f, -0.548742f },
	{ 0.192047f, 0.97423f, -0.118294f },
	{ 0.792863f, 0.563287f, -0.232542f },
	{ 0.314152f, 0.593256f, -0.7411849f },
	{ -0.334998f, 0.765936f, 0.548742f },
	{ -0.192047f, 0.97423f, 0.118294f },
	{ -0.792863f, 0.563287f, 0.232542f },
	{ -0.314152f, 0.593256f, 0.7411849f },
	{ 0.334998f, 0.765936f, 0.548742f },
	{ 0.192047f, 0.97423f, 0.118294f },
	{ 0.314152f, 0.593256f, 0.7411849f },
	{ 0.792863f, 0.563287f, 0.232542f },
	{ 0.634204f, 0.743427f, 0.212371f },
	{ 0.634204f, 0.743427f, -0.212371f },
	{ -0.634204f, 0.743427f, 0.212371f },
	{ -0.634204f, 0.743427f, -0.212371f },
	{ 0.13275f, 0.914459f, -0.382285f },
	{ 0.13275f, 0.914459f, 0.382285f },
	{ 0, 0.901303f, -0.433189f },
	{ 0, 0.901303f, -0.433189f },
	{ -0.13275f, 0.914459f, -0.382285f },
	{ -0.13275f, 0.914459f, 0.382285f },
	{ 0, 0.901303f, 0.433189f },
	{ 0, 0.901303f, 0.433189f },
	{ -0.6372589f, 0.624256f, -0.45189f },
	{ -0.6372589f, 0.624256f, 0.45189f },
	{ 0, 0, 1 },
	{ 0.6372589f, 0.624256f, 0.45189f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0.6372589f, 0.624256f, -0.45189f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.047778f, 0.719834f, 0.6925f },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.610402f, 0.534417f, 0.5846429f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.610402f, 0.534417f, -0.5846429f },
	{ 0, 0, -1 },
	{ 0.047778f, 0.719834f, -0.6925f },
	{ 0.707106f, 0.000002f, -0.7071069f },
	{ 0.7071069f, -0.00001f, 0.707106f },
	{ 0.57735f, 0.57735f, 0.577351f },
	{ 0.57735f, 0.577351f, -0.5773489f },
	{ -0.047778f, 0.719834f, 0.6925f },
	{ 0, -0.00001f, 1 },
	{ -0.7071069f, -0.00001f, 0.707106f },
	{ -0.610402f, 0.534417f, 0.5846429f },
	{ -0.7071069f, 0.000001f, -0.7071069f },
	{ -0.610402f, 0.534418f, -0.584642f },
	{ 0, 0.000002f, -1 },
	{ -0.047778f, 0.719835f, -0.692499f },
	{ 0.394356f, 0.631339f, -0.667753f },
	{ 0.394356f, 0.631339f, 0.667753f },
	{ 0, 0.331006f, -0.943628f },
	{ 0, 0.331006f, -0.943628f },
	{ -0.394356f, 0.631339f, -0.667753f },
	{ -0.394356f, 0.631339f, 0.667753f },
	{ 0, 0.331006f, 0.943628f },
	{ 0, 0.331006f, 0.943628f }
};

NJS_MODEL_SADX attach_002006D0 = { vertex_001FFFB0, normal_00200340, LengthOfArray(vertex_001FFFB0), meshlist_001FFEF0, matlist_001FF988, LengthOfArray(meshlist_001FFEF0), LengthOfArray(matlist_001FF988),{ 0, 37.05f, 0 }, 66.70832f, NULL };

NJS_OBJECT object_002006F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002006D0, 0, -5, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001FF954 };

NJS_MATERIAL matlist_0020072C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 20, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0020077C[] = {
	4, 6, 38, 7, 39,
	4, 0, 32, 1, 33,
	4, 36, 4, 37, 5,
	4, 34, 2, 35, 3
};

Sint16 poly_002007A4[] = {
	4, 2, 6, 3, 7,
	4, 4, 0, 5, 1
};

Sint16 poly_002007B8[] = {
	4, 34, 35, 9, 8,
	4, 36, 37, 26, 27,
	4, 33, 32, 16, 17,
	4, 39, 38, 19, 18
};

Sint16 poly_002007E0[] = {
	4, 31, 30, 21, 20,
	4, 29, 28, 11, 10,
	4, 12, 13, 10, 11,
	4, 14, 15, 12, 13,
	4, 22, 23, 20, 21,
	4, 24, 25, 22, 23
};

NJS_TEX uv_0020081C[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 254, 0 },
	{ 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 },
	{ 0, 254 },
	{ 254, 254 }
};

NJS_TEX uv_0020085C[] = {
	{ 510, 0 },
	{ 0 },
	{ 510, 254 },
	{ 0, 254 },
	{ 510, 0 },
	{ 0 },
	{ 510, 254 },
	{ 0, 254 }
};

NJS_TEX uv_0020087C[] = {
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0 },
	{ 0, 254 },
	{ 254, 0 },
	{ 254, 254 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 },
	{ 0, 254 },
	{ 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_TEX uv_002008BC[] = {
	{ 510, 254 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 },
	{ 510, 254 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 },
	{ 510, 254 },
	{ 510, 0 },
	{ 0, 254 },
	{ 0 },
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 },
	{ 0 },
	{ 0, 254 },
	{ 510, 0 },
	{ 510, 254 }
};

NJS_MESHSET_SADX meshlist_0020091C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0020077C, NULL, NULL, NULL, uv_0020081C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_002007A4, NULL, NULL, NULL, uv_0020085C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_002007B8, NULL, NULL, NULL, uv_0020087C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_002007E0, NULL, NULL, NULL, uv_002008BC, NULL }
};

NJS_VECTOR vertex_0020097C[] = {
	{ -65, 29.5f, -8 },
	{ -65, 20.1f, -8 },
	{ 65, 29.5f, -8 },
	{ 65, 20.1f, -8 },
	{ -65, 29.5f, 8 },
	{ -65, 20.1f, 8 },
	{ 65, 29.5f, 8 },
	{ 65, 20.1f, 8 },
	{ 50, 20.1f, -15 },
	{ 50, 29.5f, -15 },
	{ 10, 20.1f, -15 },
	{ 10, 29.5f, -15 },
	{ -10, 20.1f, -15 },
	{ -10, 29.5f, -15 },
	{ -30, 20.1f, -15 },
	{ -30, 29.5f, -15 },
	{ -50, 20.1f, -15 },
	{ -50, 29.5f, -15 },
	{ 50, 29.5f, 15 },
	{ 50, 20.1f, 15 },
	{ 10, 29.5f, 15 },
	{ 10, 20.1f, 15 },
	{ -10, 29.5f, 15 },
	{ -10, 20.1f, 15 },
	{ -30, 29.5f, 15 },
	{ -30, 20.1f, 15 },
	{ -50, 29.5f, 15 },
	{ -50, 20.1f, 15 },
	{ 30, 20.1f, -15 },
	{ 30, 29.5f, -15 },
	{ 30, 29.5f, 15 },
	{ 30, 20.1f, 15 },
	{ -60, 29.5f, -15 },
	{ -60, 20.1f, -15 },
	{ 60, 29.5f, -15 },
	{ 60, 20.1f, -15 },
	{ -60, 29.5f, 15 },
	{ -60, 20.1f, 15 },
	{ 60, 29.5f, 15 },
	{ 60, 20.1f, 15 }
};

NJS_VECTOR normal_00200B5C[] = {
	{ -0.9522949f, 0, -0.305177f },
	{ -0.952296f, 0, -0.305177f },
	{ 0.9522949f, 0, -0.305177f },
	{ 0.9522949f, 0, -0.305177f },
	{ -0.9522949f, 0, 0.305177f },
	{ -0.9522949f, 0, 0.305177f },
	{ 0.9522949f, 0, 0.305177f },
	{ 0.9522949f, 0, 0.305177f },
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
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.457582f, 0, -0.889168f },
	{ -0.457582f, 0, -0.889168f },
	{ 0.457582f, 0, -0.889168f },
	{ 0.457582f, 0, -0.889168f },
	{ -0.457582f, 0, 0.889168f },
	{ -0.457582f, 0, 0.889168f },
	{ 0.457582f, 0, 0.889168f },
	{ 0.457582f, 0, 0.889168f }
};

NJS_MODEL_SADX attach_00200D3C = { vertex_0020097C, normal_00200B5C, LengthOfArray(vertex_0020097C), meshlist_0020091C, matlist_0020072C, LengthOfArray(meshlist_0020091C), LengthOfArray(matlist_0020072C),{ 0, 24.8f, 0 }, 66.70832f, NULL };

NJS_OBJECT object_00200D64 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00200D3C, 0, -5, 0, 0, 0, 0, 1, 1, 1, NULL, &object_002006F8 };

NJS_MATERIAL matlist_00200D98[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00200DAC[] = {
	0x8000u | 8, 4, 6, 5, 7, 1, 3, 0, 2,
	0x8000u | 8, 14, 12, 15, 13, 11, 9, 10, 8,
	0x8000u | 8, 20, 22, 21, 23, 17, 19, 16, 18,
	0x8000u | 8, 30, 28, 31, 29, 27, 25, 26, 24,
	0x8000u | 8, 38, 36, 39, 37, 35, 33, 34, 32,
	0x8000u | 8, 44, 46, 45, 47, 41, 43, 40, 42,
	0x8000u | 8, 54, 52, 55, 53, 51, 49, 50, 48,
	0x8000u | 8, 60, 62, 61, 63, 57, 59, 56, 58
};

NJS_TEX uv_00200E3C[] = {
	{ 0, 255 },
	{ 0 },
	{ 63, 255 },
	{ 63, 0 },
	{ 446, 255 },
	{ 446, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0 },
	{ 0, 255 },
	{ 63, 0 },
	{ 63, 255 },
	{ 446, 0 },
	{ 446, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0 },
	{ 63, 255 },
	{ 63, 0 },
	{ 446, 255 },
	{ 446, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0 },
	{ 0, 255 },
	{ 63, 0 },
	{ 63, 255 },
	{ 446, 0 },
	{ 446, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 446, 0 },
	{ 446, 255 },
	{ 63, 0 },
	{ 63, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 0 },
	{ 446, 255 },
	{ 446, 0 },
	{ 63, 255 },
	{ 63, 0 },
	{ 0, 255 },
	{ 0 },
	{ 510, 0 },
	{ 510, 255 },
	{ 446, 0 },
	{ 446, 255 },
	{ 63, 0 },
	{ 63, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 0 },
	{ 446, 255 },
	{ 446, 0 },
	{ 63, 255 },
	{ 63, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_00200F3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00200DAC, NULL, NULL, NULL, uv_00200E3C, NULL }
};

NJS_VECTOR vertex_00200F54[] = {
	{ -35, -2.5f, 9.000002f },
	{ -37.5f, -2.5f, 10.5f },
	{ -35, 2.5f, 9.000002f },
	{ -37.5f, 2.5f, 10.5f },
	{ -55, -2.5f, 8.999998f },
	{ -52.5f, -2.5f, 10.5f },
	{ -55, 2.5f, 8.999998f },
	{ -52.5f, 2.5f, 10.5f },
	{ -35, -2.5f, -9.000006f },
	{ -37.5f, -2.5f, -10.5f },
	{ -35, 2.5f, -9.000006f },
	{ -37.5f, 2.5f, -10.5f },
	{ -55, -2.5f, -9.000009f },
	{ -52.5f, -2.5f, -10.50001f },
	{ -55, 2.5f, -9.000009f },
	{ -52.5f, 2.5f, -10.50001f },
	{ -10, -2.5f, 9.000002f },
	{ -12.5f, -2.5f, 10.5f },
	{ -10, 2.5f, 9.000002f },
	{ -12.5f, 2.5f, 10.5f },
	{ -30, -2.5f, 8.999998f },
	{ -27.5f, -2.5f, 10.5f },
	{ -30, 2.5f, 8.999998f },
	{ -27.5f, 2.5f, 10.5f },
	{ -10, -2.5f, -9.000006f },
	{ -12.5f, -2.5f, -10.5f },
	{ -10, 2.5f, -9.000006f },
	{ -12.5f, 2.5f, -10.5f },
	{ -30, -2.5f, -9.000009f },
	{ -27.5f, -2.5f, -10.50001f },
	{ -30, 2.5f, -9.000009f },
	{ -27.5f, 2.5f, -10.50001f },
	{ 10, -2.5f, 9.000008f },
	{ 12.5f, -2.5f, 10.50001f },
	{ 10, 2.5f, 9.000008f },
	{ 12.5f, 2.5f, 10.50001f },
	{ 30, -2.5f, 9.000008f },
	{ 27.5f, -2.5f, 10.50001f },
	{ 30, 2.5f, 9.000008f },
	{ 27.5f, 2.5f, 10.50001f },
	{ 10, -2.5f, -9 },
	{ 12.5f, -2.5f, -10.5f },
	{ 10, 2.5f, -9 },
	{ 12.5f, 2.5f, -10.5f },
	{ 30, -2.5f, -9 },
	{ 27.5f, -2.5f, -10.5f },
	{ 30, 2.5f, -9 },
	{ 27.5f, 2.5f, -10.5f },
	{ 35, -2.5f, 9.000008f },
	{ 37.5f, -2.5f, 10.50001f },
	{ 35, 2.5f, 9.000008f },
	{ 37.5f, 2.5f, 10.50001f },
	{ 55, -2.5f, 9.000008f },
	{ 52.5f, -2.5f, 10.50001f },
	{ 55, 2.5f, 9.000008f },
	{ 52.5f, 2.5f, 10.50001f },
	{ 35, -2.5f, -9 },
	{ 37.5f, -2.5f, -10.5f },
	{ 35, 2.5f, -9 },
	{ 37.5f, 2.5f, -10.5f },
	{ 55, -2.5f, -9 },
	{ 52.5f, -2.5f, -10.5f },
	{ 55, 2.5f, -9 },
	{ 52.5f, 2.5f, -10.5f }
};

NJS_VECTOR normal_00201254[] = {
	{ 0.514495f, 0, 0.857493f },
	{ 0.266933f, 0, 0.963715f },
	{ 0.514495f, 0, 0.857493f },
	{ 0.266933f, 0, 0.963715f },
	{ -0.514496f, 0, 0.857493f },
	{ -0.266934f, 0, 0.963715f },
	{ -0.514496f, 0, 0.857493f },
	{ -0.266934f, 0, 0.963715f },
	{ 0.514495f, 0, -0.857493f },
	{ 0.266934f, 0, -0.963715f },
	{ 0.514495f, 0, -0.857493f },
	{ 0.266934f, 0, -0.963715f },
	{ -0.514495f, 0, -0.857493f },
	{ -0.266933f, 0, -0.963715f },
	{ -0.514495f, 0, -0.857493f },
	{ -0.266933f, 0, -0.963715f },
	{ 0.514495f, 0, 0.857493f },
	{ 0.266933f, 0, 0.963715f },
	{ 0.514495f, 0, 0.857493f },
	{ 0.266933f, 0, 0.963715f },
	{ -0.514496f, 0, 0.857493f },
	{ -0.266934f, 0, 0.963715f },
	{ -0.514496f, 0, 0.857493f },
	{ -0.266934f, 0, 0.963715f },
	{ 0.514495f, 0, -0.857493f },
	{ 0.266934f, 0, -0.963715f },
	{ 0.514495f, 0, -0.857493f },
	{ 0.266934f, 0, -0.963715f },
	{ -0.514495f, 0, -0.857493f },
	{ -0.266933f, 0, -0.963715f },
	{ -0.514495f, 0, -0.857493f },
	{ -0.266933f, 0, -0.963715f },
	{ -0.514495f, 0, 0.857493f },
	{ -0.266933f, 0, 0.963715f },
	{ -0.514495f, 0, 0.857493f },
	{ -0.266933f, 0, 0.963715f },
	{ 0.514495f, 0, 0.857493f },
	{ 0.266933f, 0, 0.963715f },
	{ 0.514495f, 0, 0.857493f },
	{ 0.266933f, 0, 0.963715f },
	{ -0.514495f, 0, -0.857493f },
	{ -0.266933f, 0, -0.963715f },
	{ -0.514495f, 0, -0.857493f },
	{ -0.266933f, 0, -0.963715f },
	{ 0.514495f, 0, -0.857493f },
	{ 0.266933f, 0, -0.963715f },
	{ 0.514495f, 0, -0.857493f },
	{ 0.266933f, 0, -0.963715f },
	{ -0.514495f, 0, 0.857493f },
	{ -0.266933f, 0, 0.963715f },
	{ -0.514495f, 0, 0.857493f },
	{ -0.266933f, 0, 0.963715f },
	{ 0.514495f, 0, 0.857493f },
	{ 0.266933f, 0, 0.963715f },
	{ 0.514495f, 0, 0.857493f },
	{ 0.266933f, 0, 0.963715f },
	{ -0.514495f, 0, -0.857493f },
	{ -0.266933f, 0, -0.963715f },
	{ -0.514495f, 0, -0.857493f },
	{ -0.266933f, 0, -0.963715f },
	{ 0.514495f, 0, -0.857493f },
	{ 0.266933f, 0, -0.963715f },
	{ 0.514495f, 0, -0.857493f },
	{ 0.266933f, 0, -0.963715f }
};

NJS_MODEL_SADX attach_00201554 = { vertex_00200F54, normal_00201254, LengthOfArray(vertex_00200F54), meshlist_00200F3C, matlist_00200D98, LengthOfArray(meshlist_00200F3C), LengthOfArray(matlist_00200D98),{ 0 }, 55.9933f, NULL };

NJS_OBJECT object_0020157C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00201554, 0, 2.5f, -0.00004f, 0, 0, 0, 1, 1, 1, NULL, &object_00200D64 };

NJS_MATERIAL matlist_002015B0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 9, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 22, NJD_D_100 | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_002015D8[] = {
	4, 1, 0, 3, 2,
	4, 5, 4, 7, 6,
	4, 11, 10, 9, 8,
	4, 15, 14, 13, 12,
	4, 35, 34, 33, 32,
	4, 39, 38, 37, 36,
	4, 41, 40, 43, 42,
	4, 45, 44, 47, 46
};

Sint16 poly_00201628[] = {
	8, 18, 19, 17, 16, 24, 25, 27, 26,
	3, 19, 18, 23,
	4, 29, 27, 28, 26,
	9, 29, 28, 31, 30, 20, 21, 23, 22, 19
};

NJS_TEX uv_00201660[] = {
	{ 0, -254 },
	{ 0, 255 },
	{ 1020, -254 },
	{ 1020, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 1020, -254 },
	{ 1020, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 1020, -254 },
	{ 1020, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 1020, -254 },
	{ 1020, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 1020, -254 },
	{ 1020, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 1020, -254 },
	{ 1020, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 1020, -254 },
	{ 1020, 255 },
	{ 0, -254 },
	{ 0, 255 },
	{ 1020, -254 },
	{ 1020, 255 }
};

NJS_TEX uv_002016E0[] = {
	{ 0 },
	{ 0, 255 },
	{ 424, 0 },
	{ 424, 255 },
	{ 849, 0 },
	{ 849, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 4080, 255 },
	{ 4080, 0 },
	{ 0 },
	{ 4080, 0 },
	{ 0 },
	{ 4080, 255 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 849, 0 },
	{ 849, 255 },
	{ 424, 0 },
	{ 424, 255 },
	{ 0 },
	{ 0, 255 },
	{ 4080, 255 }
};

NJS_MESHSET_SADX meshlist_00201740[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00201628, NULL, NULL, NULL, uv_002016E0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_002015D8, NULL, NULL, NULL, uv_00201660, NULL }
};

NJS_VECTOR vertex_00201770[] = {
	{ -9.999998f, -5, -9.000002f },
	{ -9.999998f, 5, -9.000002f },
	{ -30, -5, -9.000005f },
	{ -30, 5, -9.000005f },
	{ -35, -5, -9.000006f },
	{ -35, 5, -9.000006f },
	{ -55, -5, -9.000009f },
	{ -55, 5, -9.000009f },
	{ -35, -5, 8.999993f },
	{ -35, 5, 8.999993f },
	{ -55, -5, 8.99999f },
	{ -55, 5, 8.99999f },
	{ -10, -5, 8.999997f },
	{ -10, 5, 8.999997f },
	{ -30, -5, 8.999994f },
	{ -30, 5, 8.999994f },
	{ -64, 0, -3.333333f },
	{ -64, 5, -3.333333f },
	{ -60, 5, -10 },
	{ -60, 0, -10 },
	{ 64, 5, -3.333336f },
	{ 64, 0, -3.333336f },
	{ 60, 0, -10 },
	{ 60, 5, -10 },
	{ -64, 5, 3.333333f },
	{ -64, 0, 3.333333f },
	{ -60, 0, 10 },
	{ -60, 5, 10 },
	{ 60, 0, 10 },
	{ 60, 5, 10 },
	{ 64, 0, 3.333333f },
	{ 64, 5, 3.333333f },
	{ 10, -5, -9 },
	{ 10, 5, -9 },
	{ 30, -5, -9 },
	{ 30, 5, -9 },
	{ 35, -5, -9 },
	{ 35, 5, -9 },
	{ 55, -5, -9 },
	{ 55, 5, -9 },
	{ 35, -5, 9 },
	{ 35, 5, 9 },
	{ 55, -5, 9 },
	{ 55, 5, 9 },
	{ 10, -5, 9 },
	{ 10, 5, 9 },
	{ 30, -5, 9 },
	{ 30, 5, 9 }
};

NJS_VECTOR normal_002019B0[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.963715f, 0, -0.266934f },
	{ -0.963715f, 0, -0.266934f },
	{ -0.492699f, 0, -0.8702f },
	{ -0.492699f, 0, -0.8702f },
	{ 0.963715f, 0, -0.266934f },
	{ 0.963715f, 0, -0.266934f },
	{ 0.492699f, 0, -0.8702f },
	{ 0.492699f, 0, -0.8702f },
	{ -0.963715f, 0, 0.266934f },
	{ -0.963715f, 0, 0.266934f },
	{ -0.492699f, 0, 0.8702f },
	{ -0.492699f, 0, 0.8702f },
	{ 0.492699f, 0, 0.8702f },
	{ 0.492699f, 0, 0.8702f },
	{ 0.963715f, 0, 0.266934f },
	{ 0.963715f, 0, 0.266934f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_00201BF0 = { vertex_00201770, normal_002019B0, LengthOfArray(vertex_00201770), meshlist_00201740, matlist_002015B0, LengthOfArray(meshlist_00201740), LengthOfArray(matlist_002015B0),{ 0 }, 64.77654f, NULL };

NJS_OBJECT object_00201C18 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00201BF0, 0, 5, 0, 0, 0, 0, 1, 1, 1, &object_0020157C, NULL };
