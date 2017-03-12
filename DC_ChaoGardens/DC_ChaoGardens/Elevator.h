#include <SADXModLoader.h>


NJS_MATERIAL matlist_026D50F0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_026D5140[] = {
	4, 1, 0, 2, 3,
	4, 8, 9, 10, 11,
	4, 13, 12, 14, 15,
	4, 16, 17, 18, 19,
	4, 20, 26, 14, 3,
	4, 28, 21, 10, 19,
	4, 2, 32, 15, 34,
	4, 20, 34, 21, 35,
	4, 18, 35, 11, 33
};

Sint16 poly_026D519C[] = {
	4, 5, 4, 6, 7
};

Sint16 poly_026D51A8[] = {
	0x8000u | 6, 16, 17, 13, 8, 0, 1,
	0x8000u | 6, 13, 12, 16, 1, 9, 8
};

Sint16 poly_026D51C4[] = {
	0x8000u | 8, 26, 27, 20, 24, 21, 25, 28, 29,
	8, 31, 33, 22, 35, 23, 34, 30, 32
};

NJS_TEX uv_026D51E8[] = {
	{ 49, 550 },
	{ 49, 730 },
	{ 0, 550 },
	{ 0, 730 },
	{ 49, 730 },
	{ 49, 550 },
	{ 0, 730 },
	{ 0, 550 },
	{ 185, 730 },
	{ 185, 550 },
	{ 234, 730 },
	{ 234, 550 },
	{ 185, 550 },
	{ 185, 730 },
	{ 255, 550 },
	{ 255, 730 },
	{ 234, 1022 },
	{ 0, 1022 },
	{ 234, 730 },
	{ 0, 730 },
	{ 0, 1026 },
	{ 255, 1026 },
	{ 0, 730 },
	{ 255, 730 },
	{ 0, 550 },
	{ 0, 516 },
	{ 234, 550 },
	{ 234, 516 },
	{ 234, 1022 },
	{ 234, 515 },
	{ 255, 1022 },
	{ 255, 515 },
	{ 255, 550 },
	{ 255, 511 },
	{ 0, 550 },
	{ 0, 511 }
};

NJS_TEX uv_026D5278[] = {
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_026D5288[] = {
	{ 127, 183 },
	{ 35, 183 },
	{ 35, 39 },
	{ 255, 183 },
	{ 255, 39 },
	{ 162, 39 },
	{ 35, 39 },
	{ 127, 39 },
	{ 127, 183 },
	{ 162, 39 },
	{ 162, 183 },
	{ 255, 183 }
};

NJS_TEX uv_026D52B8[] = {
	{ 0 },
	{ 0, 255 },
	{ 450, 0 },
	{ 450, 255 },
	{ 529, 0 },
	{ 529, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 529, 0 },
	{ 529, 255 },
	{ 450, 0 },
	{ 450, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_026D52F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_026D5140, NULL, NULL, NULL, uv_026D51E8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_026D519C, NULL, NULL, NULL, uv_026D5278, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_026D51A8, NULL, NULL, NULL, uv_026D5288, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_026D51C4, NULL, NULL, NULL, uv_026D52B8, NULL }
};

NJS_VECTOR vertex_026D5368[] = {
	{ -4.0333f, 12.5f, 0.7f },
	{ -4.0333f, 19.5f, 0.7f },
	{ -5, 19.5f, 0.7f },
	{ -5, 12.5f, 0.7f },
	{ -1.3667f, 12.5f, 1.1f },
	{ -1.3667f, 19.5f, 1.1f },
	{ -4.0333f, 19.5f, 1.1f },
	{ -4.0333f, 12.5f, 1.1f },
	{ -4.0333f, 12.5f, 1.40001f },
	{ -4.0333f, 19.5f, 1.40001f },
	{ -5, 12.5f, 1.4f },
	{ -5, 19.5f, 1.4f },
	{ -1.3667f, 19.5f, 0.7f },
	{ -1.3667f, 12.5f, 0.7f },
	{ -0.4f, 12.5f, 0.7f },
	{ -0.4f, 19.5f, 0.7f },
	{ -1.3667f, 19.5f, 1.40001f },
	{ -1.3667f, 12.5f, 1.40001f },
	{ 0, 19.5f, 1.4f },
	{ 0, 12.5f, 1.4f },
	{ -0.4f, 0.999997f, 0.700005f },
	{ 0, 0.999997f, 1.400004f },
	{ 0, 22, 1.400004f },
	{ -0.4f, 22, 0.700005f },
	{ -0.4f, -0.00003f, 0.700005f },
	{ 0, -0.00003f, 1.400004f },
	{ -5, 0.999997f, 0.700004f },
	{ -5, -0.00003f, 0.700004f },
	{ -5, 0.999997f, 1.400003f },
	{ -5, -0.00003f, 1.400003f },
	{ -5, 22, 0.700004f },
	{ -5, 22, 1.400003f },
	{ -5, 21, 0.7f },
	{ -5, 21, 1.4f },
	{ -0.4f, 21, 0.7f },
	{ 0, 21, 1.4f }
};

NJS_VECTOR normal_026D5518[] = {
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0.602608f, 0.797595f, 0.026584f },
	{ 0.132158f, 0.991212f, 0.00583f },
	{ -0.17752f, 0.9841f, 0.005788f },
	{ -0.714631f, 0.699113f, 0.023301f },
	{ 0.577346f, 0.577352f, 0.577352f },
	{ 0.577346f, -0.577352f, 0.577352f },
	{ -0.00005f, 0, 1 },
	{ -0.00005f, 0, 1 },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ -0.577347f, -0.577352f, 0.577352f },
	{ -0.577347f, 0.577352f, 0.577352f },
	{ 0.000004f, 0, 1 },
	{ 0.000004f, 0, 1 },
	{ 0.501927f, 0, -0.86491f },
	{ 0.86491f, 0, 0.501927f },
	{ 0.864909f, -0.00002f, 0.501928f },
	{ 0.501927f, 0.000004f, -0.86491f },
	{ 0.501927f, 0, -0.86491f },
	{ 0.86491f, 0, 0.501927f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0.000005f, -1 },
	{ 0, -0.00003f, 1 },
	{ 0, 0.000002f, -1 },
	{ 0, -0.00002f, 1 },
	{ 0.501926f, 0.000002f, -0.86491f },
	{ 0.864911f, -0.00001f, 0.501926f }
};

NJS_MODEL_SADX attach_026D56C8 = { vertex_026D5368, normal_026D5518, LengthOfArray(vertex_026D5368), meshlist_026D52F8, matlist_026D50F0, LengthOfArray(meshlist_026D52F8), LengthOfArray(matlist_026D50F0),{ -2.5f, 11, 1.050005f }, 11.00557f, NULL };

NJS_OBJECT object_026D56F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_026D56C8, 0, 0, 239.65f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_026D5728[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_026D5750[] = {
	0x8000u | 8, 13, 12, 2, 1, 3, 0, 9, 8,
	0x8000u | 8, 14, 15, 5, 7, 4, 6, 10, 11
};

Sint16 poly_026D5774[] = {
	0x8000u | 8, 12, 14, 1, 5, 0, 4, 8, 10
};

NJS_TEX uv_026D5788[] = {
	{ 1020, 0 },
	{ 1020, 255 },
	{ 549, 0 },
	{ 549, 255 },
	{ 489, 0 },
	{ 489, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 549, 0 },
	{ 549, 255 },
	{ 489, 0 },
	{ 489, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_026D57C8[] = {
	{ 0, 1022 },
	{ 0, 514 },
	{ 235, 1022 },
	{ 235, 514 },
	{ 265, 1022 },
	{ 265, 514 },
	{ 510, 1022 },
	{ 510, 514 }
};

NJS_MESHSET_SADX meshlist_026D57E8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_026D5750, NULL, NULL, NULL, uv_026D5788, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_026D5774, NULL, NULL, NULL, uv_026D57C8, NULL }
};

NJS_VECTOR vertex_026D5820[] = {
	{ -4.8f, 21, 0.7f },
	{ -5, 21, 0.100001f },
	{ -5, 22, 0.100001f },
	{ -4.8f, 22, 0.7f },
	{ -4.8f, 0.999997f, 0.7f },
	{ -5, 0.999997f, 0.100001f },
	{ -4.8f, -0.00003f, 0.7f },
	{ -5, -0.00003f, 0.100001f },
	{ -10, 21, 0.699999f },
	{ -10, 22, 0.699999f },
	{ -10, 0.999997f, 0.699999f },
	{ -10, -0.00003f, 0.699999f },
	{ -9.999999f, 21, 0.1f },
	{ -9.999999f, 22, 0.1f },
	{ -9.999999f, 0.999997f, 0.1f },
	{ -9.999999f, -0.00003f, 0.1f }
};

NJS_VECTOR normal_026D58E0[] = {
	{ 0.811242f, 0, 0.58471f },
	{ 0.58471f, 0, -0.811242f },
	{ 0.58471f, 0, -0.811242f },
	{ 0.811242f, 0, 0.58471f },
	{ 0.811242f, 0, 0.58471f },
	{ 0.58471f, 0, -0.811242f },
	{ 0.811242f, 0, 0.58471f },
	{ 0.58471f, 0, -0.811242f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_026D59A0 = { vertex_026D5820, normal_026D58E0, LengthOfArray(vertex_026D5820), meshlist_026D57E8, matlist_026D5728, LengthOfArray(meshlist_026D57E8), LengthOfArray(matlist_026D5728),{ -7.4f, 11, 0.4f }, 11.00409f, NULL };

NJS_OBJECT object_026D59CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_026D59A0, -0.2f, 0, 239.65f, 0, 0, 0, 1, 1, 1, &object_026D56F4, NULL };

NJS_MATERIAL matlist_026D5A00[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_026D5A50[] = {
	4, 2, 3, 1, 0,
	4, 10, 11, 8, 9,
	4, 14, 15, 13, 12,
	4, 18, 19, 16, 17,
	4, 14, 3, 20, 26,
	4, 10, 19, 28, 21,
	4, 15, 34, 2, 32,
	4, 21, 35, 20, 34,
	4, 11, 33, 18, 35
};

Sint16 poly_026D5AAC[] = {
	4, 6, 7, 5, 4
};

Sint16 poly_026D5AB8[] = {
	0x8000u | 6, 0, 1, 9, 12, 16, 17,
	0x8000u | 6, 9, 8, 0, 17, 13, 12
};

Sint16 poly_026D5AD4[] = {
	0x8000u | 8, 27, 26, 24, 20, 25, 21, 29, 28,
	8, 33, 31, 35, 22, 34, 23, 32, 30
};

NJS_TEX uv_026D5AF8[] = {
	{ 0, 550 },
	{ 0, 730 },
	{ 49, 550 },
	{ 49, 730 },
	{ 0, 730 },
	{ 0, 550 },
	{ 49, 730 },
	{ 49, 550 },
	{ 234, 730 },
	{ 234, 550 },
	{ 185, 730 },
	{ 185, 550 },
	{ 255, 550 },
	{ 255, 730 },
	{ 185, 550 },
	{ 185, 730 },
	{ 234, 730 },
	{ 0, 730 },
	{ 234, 1022 },
	{ 0, 1022 },
	{ 0, 730 },
	{ 255, 730 },
	{ 0, 1026 },
	{ 255, 1026 },
	{ 234, 550 },
	{ 234, 516 },
	{ 0, 550 },
	{ 0, 516 },
	{ 255, 1022 },
	{ 255, 515 },
	{ 234, 1022 },
	{ 234, 515 },
	{ 0, 550 },
	{ 0, 511 },
	{ 255, 550 },
	{ 255, 511 }
};

NJS_TEX uv_026D5B88[] = {
	{ 0 },
	{ 0, 255 },
	{ 254, 0 },
	{ 254, 255 }
};

NJS_TEX uv_026D5B98[] = {
	{ 255, 39 },
	{ 162, 39 },
	{ 162, 183 },
	{ 127, 39 },
	{ 127, 183 },
	{ 35, 183 },
	{ 162, 183 },
	{ 255, 183 },
	{ 255, 39 },
	{ 35, 183 },
	{ 35, 39 },
	{ 127, 39 }
};

NJS_TEX uv_026D5BC8[] = {
	{ 0, 255 },
	{ 0 },
	{ 450, 255 },
	{ 450, 0 },
	{ 529, 255 },
	{ 529, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 529, 255 },
	{ 529, 0 },
	{ 450, 255 },
	{ 450, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_026D5C08[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_026D5A50, NULL, NULL, NULL, uv_026D5AF8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_026D5AAC, NULL, NULL, NULL, uv_026D5B88, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_026D5AB8, NULL, NULL, NULL, uv_026D5B98, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_026D5AD4, NULL, NULL, NULL, uv_026D5BC8, NULL }
};

NJS_VECTOR vertex_026D5C78[] = {
	{ -4.0333f, 12.5f, -0.7f },
	{ -4.0333f, 19.5f, -0.7f },
	{ -5, 19.5f, -0.7f },
	{ -5, 12.5f, -0.7f },
	{ -1.3667f, 12.5f, -1.1f },
	{ -1.3667f, 19.5f, -1.1f },
	{ -4.0333f, 19.5f, -1.1f },
	{ -4.0333f, 12.5f, -1.1f },
	{ -4.0333f, 12.5f, -1.40001f },
	{ -4.0333f, 19.5f, -1.40001f },
	{ -5, 12.5f, -1.4f },
	{ -5, 19.5f, -1.4f },
	{ -1.3667f, 19.5f, -0.7f },
	{ -1.3667f, 12.5f, -0.7f },
	{ -0.4f, 12.5f, -0.7f },
	{ -0.4f, 19.5f, -0.7f },
	{ -1.3667f, 19.5f, -1.40001f },
	{ -1.3667f, 12.5f, -1.40001f },
	{ 0, 19.5f, -1.4f },
	{ 0, 12.5f, -1.4f },
	{ -0.4f, 0.999997f, -0.700005f },
	{ 0, 0.999997f, -1.400004f },
	{ 0, 22, -1.400004f },
	{ -0.4f, 22, -0.700005f },
	{ -0.4f, -0.00003f, -0.700005f },
	{ 0, -0.00003f, -1.400004f },
	{ -5, 0.999997f, -0.700004f },
	{ -5, -0.00003f, -0.700004f },
	{ -5, 0.999997f, -1.400003f },
	{ -5, -0.00003f, -1.400003f },
	{ -5, 22, -0.700004f },
	{ -5, 22, -1.400003f },
	{ -5, 21, -0.7f },
	{ -5, 21, -1.4f },
	{ -0.4f, 21, -0.7f },
	{ 0, 21, -1.4f }
};

NJS_VECTOR normal_026D5E28[] = {
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.602608f, 0.797595f, -0.026584f },
	{ 0.132158f, 0.991212f, -0.00583f },
	{ -0.17752f, 0.9841f, -0.005788f },
	{ -0.714631f, 0.699113f, -0.023301f },
	{ 0.577346f, 0.577352f, -0.577352f },
	{ 0.577346f, -0.577352f, -0.577352f },
	{ -0.00005f, 0, -1 },
	{ -0.00005f, 0, -1 },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.577347f, -0.577352f, -0.577352f },
	{ -0.577347f, 0.577352f, -0.577352f },
	{ 0.000004f, 0, -1 },
	{ 0.000004f, 0, -1 },
	{ 0.501927f, 0, 0.86491f },
	{ 0.86491f, 0, -0.501927f },
	{ 0.864909f, -0.00002f, -0.501928f },
	{ 0.501927f, 0.000004f, 0.86491f },
	{ 0.501927f, 0, 0.86491f },
	{ 0.86491f, 0, -0.501927f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0.000005f, 1 },
	{ 0, -0.00003f, -1 },
	{ 0, 0.000002f, 1 },
	{ 0, -0.00002f, -1 },
	{ 0.501926f, 0.000002f, 0.86491f },
	{ 0.864911f, -0.00001f, -0.501926f }
};

NJS_MODEL_SADX attach_026D5FD8 = { vertex_026D5C78, normal_026D5E28, LengthOfArray(vertex_026D5C78), meshlist_026D5C08, matlist_026D5A00, LengthOfArray(meshlist_026D5C08), LengthOfArray(matlist_026D5A00),{ -2.5f, 11, -1.050005f }, 11.00557f, NULL };

NJS_OBJECT object_026D6004 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_026D5FD8, 0, 0, 239.65f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_026D6038[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 41, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_026D6060[] = {
	0x8000u | 8, 12, 13, 0, 3, 1, 2, 8, 9,
	0x8000u | 8, 15, 14, 6, 4, 7, 5, 11, 10
};

Sint16 poly_026D6084[] = {
	0x8000u | 8, 14, 12, 4, 0, 5, 1, 10, 8
};

NJS_TEX uv_026D6098[] = {
	{ 0, 255 },
	{ 0 },
	{ 470, 255 },
	{ 470, 0 },
	{ 530, 255 },
	{ 530, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 0, 255 },
	{ 0 },
	{ 470, 255 },
	{ 470, 0 },
	{ 530, 255 },
	{ 530, 0 },
	{ 1020, 255 },
	{ 1020, 0 }
};

NJS_TEX uv_026D60D8[] = {
	{ 510, 514 },
	{ 510, 1022 },
	{ 274, 514 },
	{ 274, 1022 },
	{ 244, 514 },
	{ 244, 1022 },
	{ 0, 514 },
	{ 0, 1022 }
};

NJS_MESHSET_SADX meshlist_026D60F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_026D6060, NULL, NULL, NULL, uv_026D6098, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_026D6084, NULL, NULL, NULL, uv_026D60D8, NULL }
};

NJS_VECTOR vertex_026D6130[] = {
	{ -5, 21, -0.100001f },
	{ -4.8f, 21, -0.7f },
	{ -4.8f, 22, -0.7f },
	{ -5, 22, -0.100001f },
	{ -5, 0.999997f, -0.100001f },
	{ -4.8f, 0.999997f, -0.7f },
	{ -5, -0.00003f, -0.100001f },
	{ -4.8f, -0.00003f, -0.7f },
	{ -10, 21, -0.699999f },
	{ -10, 22, -0.699999f },
	{ -10, 0.999997f, -0.699999f },
	{ -10, -0.00003f, -0.699999f },
	{ -9.999999f, 21, -0.1f },
	{ -9.999999f, 22, -0.1f },
	{ -9.999999f, 0.999997f, -0.1f },
	{ -9.999999f, -0.00003f, -0.1f }
};

NJS_VECTOR normal_026D61F0[] = {
	{ 0.58471f, 0, 0.811242f },
	{ 0.811242f, 0, -0.58471f },
	{ 0.811242f, 0, -0.58471f },
	{ 0.58471f, 0, 0.811242f },
	{ 0.58471f, 0, 0.811242f },
	{ 0.811242f, 0, -0.58471f },
	{ 0.58471f, 0, 0.811242f },
	{ 0.811242f, 0, -0.58471f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_026D62B0 = { vertex_026D6130, normal_026D61F0, LengthOfArray(vertex_026D6130), meshlist_026D60F8, matlist_026D6038, LengthOfArray(meshlist_026D60F8), LengthOfArray(matlist_026D6038),{ -7.4f, 11, -0.4f }, 11.00409f, NULL };

NJS_OBJECT object_026D62DC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_026D62B0, 0, 0, 239.65f, 0, 0x8000, 0, 1, 1, 1, &object_026D6004, &object_026D59CC };

NJS_MATERIAL matlist_026D6310[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 36, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 35, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_026D6400[] = {
	4, 0, 1, 33, 32
};

Sint16 poly_026D640C[] = {
	3, 1, 34, 32,
	3, 0, 33, 35
};

Sint16 poly_026D641C[] = {
	4, 35, 33, 3, 2,
	4, 32, 34, 9, 8
};

Sint16 poly_026D6430[] = {
	4, 3, 2, 8, 9
};

Sint16 poly_026D643C[] = {
	4, 13, 6, 12, 4,
	4, 5, 11, 7, 10,
	4, 13, 11, 6, 5,
	4, 10, 12, 7, 4
};

Sint16 poly_026D6464[] = {
	4, 22, 23, 15, 14
};

Sint16 poly_026D6470[] = {
	4, 4, 6, 14, 15,
	4, 28, 29, 26, 27
};

Sint16 poly_026D6484[] = {
	0x8000u | 8, 18, 17, 30, 16, 31, 19, 21, 20
};

Sint16 poly_026D6498[] = {
	4, 22, 6, 16, 17,
	4, 4, 23, 20, 19,
	4, 23, 22, 19, 16
};

Sint16 poly_026D64B8[] = {
	4, 31, 30, 25, 24
};

Sint16 poly_026D64C4[] = {
	4, 26, 27, 24, 25
};

Sint16 poly_026D64D0[] = {
	4, 5, 7, 28, 29
};

NJS_TEX uv_026D64DC[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

NJS_TEX uv_026D64EC[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

NJS_TEX uv_026D650C[] = {
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_026D6520[] = {
	{ 0 },
	{ 60, 254 },
	{ 2550, 0 },
	{ 2489, 254 },
	{ 2489, 254 },
	{ 2550, 0 },
	{ 60, 254 },
	{ 0 },
	{ 2550, 0 },
	{ 0 },
	{ 2489, 254 },
	{ 60, 254 },
	{ 2550, 0 },
	{ 0 },
	{ 2489, 254 },
	{ 60, 254 }
};

NJS_TEX uv_026D6560[] = {
	{ 764, -509 },
	{ 0, -509 },
	{ 764, 255 },
	{ 0, 255 }
};

NJS_TEX uv_026D6570[] = {
	{ 0, -255 },
	{ 2549, -255 },
	{ 0, 254 },
	{ 2549, 254 },
	{ 0, -255 },
	{ 2549, -255 },
	{ 0, 254 },
	{ 2549, 254 }
};

NJS_TEX uv_026D6590[] = {
	{ 0, 255 },
	{ 0, -510 },
	{ 1530, 255 },
	{ 1530, -510 },
	{ 3060, 255 },
	{ 3060, -510 },
	{ 4590, 255 },
	{ 4590, -510 }
};

NJS_TEX uv_026D65B0[] = {
	{ 0, 254 },
	{ 2039, 254 },
	{ 0 },
	{ 2039, 0 },
	{ 0, 254 },
	{ 2039, 254 },
	{ 0 },
	{ 2039, 0 },
	{ 0, 254 },
	{ 2039, 254 },
	{ 0 },
	{ 2039, 0 }
};

NJS_TEX uv_026D65E0[] = {
	{ 0, 255 },
	{ 1019, 255 },
	{ 0, -764 },
	{ 1019, -764 }
};

NJS_TEX uv_026D65F0[] = {
	{ 0 },
	{ 1019, 0 },
	{ 0, 253 },
	{ 1020, 253 }
};

NJS_TEX uv_026D6600[] = {
	{ 1019, 0 },
	{ 0 },
	{ 1019, 254 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_026D6610[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_026D6400, NULL, NULL, NULL, uv_026D64DC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_026D640C, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_026D641C, NULL, NULL, NULL, uv_026D64EC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_026D6430, NULL, NULL, NULL, uv_026D650C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_026D643C, NULL, NULL, NULL, uv_026D6520, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_026D6464, NULL, NULL, NULL, uv_026D6560, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_026D6470, NULL, NULL, NULL, uv_026D6570, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_026D6484, NULL, NULL, NULL, uv_026D6590, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 3, poly_026D6498, NULL, NULL, NULL, uv_026D65B0, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_026D64B8, NULL, NULL, NULL, uv_026D65E0, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 1, poly_026D64C4, NULL, NULL, NULL, uv_026D65F0, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_026D64D0, NULL, NULL, NULL, uv_026D6600, NULL }
};

NJS_VECTOR vertex_026D6760[] = {
	{ 2.500001f, 24.2f, -0.00007f },
	{ -2.499999f, 24.2f, -0.00007f },
	{ 2.100001f, 23.9f, 0.199993f },
	{ 2.100001f, 23, -0.00007f },
	{ -10, -0.00003f, -0.00002f },
	{ 10, 25, -0.00003f },
	{ 10, -0.00003f, -0.00004f },
	{ -10, 25, -0.00001f },
	{ -2.099999f, 23, -0.00007f },
	{ -2.099999f, 23.9f, 0.199993f },
	{ -10.5f, 25.5f, 0.000001f },
	{ 10.5f, 25.5f, -0.00001f },
	{ -10.5f, -0.500003f, -0.00001f },
	{ 10.5f, -0.500003f, -0.00003f },
	{ -9.999999f, -0.00003f, -1.500007f },
	{ 10, -0.00003f, -1.500009f },
	{ 9.999999f, 0.999997f, -20 },
	{ 10, 0.999997f, -0.00005f },
	{ 10, 22.89999f, -0.00005f },
	{ -10, 0.999997f, -20 },
	{ -9.999999f, 0.999997f, -0.00003f },
	{ -9.999999f, 22.89999f, -0.00003f },
	{ 9.999999f, -0.00003f, -20 },
	{ -10, -0.00003f, -20 },
	{ 10, 22.89999f, -1.500005f },
	{ -9.999999f, 22.89999f, -1.500003f },
	{ 10, 22, -1.500005f },
	{ -9.999999f, 22, -1.500003f },
	{ 10, 22, -0.00005f },
	{ -9.999999f, 22, -0.00003f },
	{ 9.999999f, 22.89999f, -20 },
	{ -10, 22.89999f, -20 },
	{ -2.499999f, 23.9f, 0.199993f },
	{ 2.500001f, 23.9f, 0.199993f },
	{ -2.499999f, 23, -0.00007f },
	{ 2.500001f, 23, -0.00007f }
};

NJS_VECTOR normal_026D6910[] = {
	{ 0.350577f, 0.519496f, 0.779243f },
	{ -0.350577f, 0.519496f, 0.779243f },
	{ 0, -0.21693f, 0.976187f },
	{ 0, -0.21693f, 0.976187f },
	{ 0.301513f, 0.301512f, 0.904533f },
	{ -0.00001f, -0.00002f, 1 },
	{ -0.301512f, 0.301512f, 0.904534f },
	{ 0.000001f, -0.00002f, 1 },
	{ 0, -0.21693f, 0.976187f },
	{ 0, -0.21693f, 0.976187f },
	{ 0.000002f, -0.00002f, 1 },
	{ -0.00001f, -0.00002f, 1 },
	{ 0.000002f, 0.000001f, 1 },
	{ -0.00001f, 0.000001f, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.707107f, 0, 0.707107f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.707107f, 0, 0.707107f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, -0.707107f, -0.707107f },
	{ 0, -0.707107f, -0.707107f },
	{ 0, -0.707107f, -0.707107f },
	{ 0, -0.707107f, -0.707107f },
	{ 0, -0.707107f, 0.707106f },
	{ 0, -0.707107f, 0.707107f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ -0.628515f, 0.142819f, 0.764573f },
	{ 0.628515f, 0.142819f, 0.764573f },
	{ -0.137879f, -0.214858f, 0.966864f },
	{ 0.137879f, -0.214858f, 0.966864f }
};

NJS_MODEL_SADX attach_026D6AC0 = { vertex_026D6760, normal_026D6910, LengthOfArray(vertex_026D6760), meshlist_026D6610, matlist_026D6310, LengthOfArray(meshlist_026D6610), LengthOfArray(matlist_026D6310),{ -0.00001f, 12.5f, -9.900005f }, 16.46238f, NULL };

NJS_OBJECT object_026D6AEC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_026D6AC0, -0.1f, 0, 239.65f, 0, 0x8000, 0, 1, 1, 1, &object_026D62DC, NULL };
