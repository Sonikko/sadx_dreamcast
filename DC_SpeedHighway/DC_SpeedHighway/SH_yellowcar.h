#include "stdafx.h"
#include "SADXModLoader.h"
#include "textures.h"

NJS_MATERIAL matlist_0013D1E0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tirepattern, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tyre_all, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013D208[] = {
	4, 7, 5, 8, 6,
	0x8000u | 16, 8, 7, 10, 9, 12, 11, 14, 13, 16, 15, 2, 1, 4, 3, 6, 5,
	4, 25, 23, 24, 22,
	0x8000u | 16, 24, 25, 26, 27, 28, 29, 30, 31, 17, 0, 18, 19, 20, 21, 22, 23
};

Sint16 poly_0013D260[] = {
	8, 10, 8, 12, 6, 14, 4, 16, 2,
	8, 19, 21, 0, 23, 31, 25, 29, 27
};

NJS_TEX uv_0013D284[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 1530, 0 },
	{ 1530, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 510, 255 },
	{ 254, 0 },
	{ 254, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0013D324[] = {
	{ 0 },
	{ 74, -180 },
	{ 74, 180 },
	{ 255, -254 },
	{ 255, 255 },
	{ 435, -180 },
	{ 435, 180 },
	{ 510, 0 },
	{ 510, 0 },
	{ 435, -180 },
	{ 435, 180 },
	{ 255, -254 },
	{ 255, 255 },
	{ 74, -180 },
	{ 74, 180 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013D364[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0013D208, NULL, NULL, NULL, uv_0013D284, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0013D260, NULL, NULL, NULL, uv_0013D324, NULL }
};

NJS_VECTOR vertex_0013D394[] = {
	{ 2.251442f, -2.251443f, 9.172402f },
	{ 3.18402f, 0.000001f, -6.447927f },
	{ 3.18402f, -0.00001f, -9.172402f },
	{ 2.251442f, 2.251443f, -6.447927f },
	{ 2.251442f, 2.251441f, -9.172402f },
	{ 0, 3.18402f, -6.447927f },
	{ 0, 3.184018f, -9.172402f },
	{ -2.251442f, 2.251443f, -6.447927f },
	{ -2.251442f, 2.251441f, -9.172402f },
	{ -3.18402f, 0.000001f, -6.447927f },
	{ -3.18402f, -0.00001f, -9.172402f },
	{ -2.251442f, -2.251441f, -6.447927f },
	{ -2.251442f, -2.251443f, -9.172402f },
	{ 0, -3.184018f, -6.447927f },
	{ 0, -3.18402f, -9.172402f },
	{ 2.251442f, -2.251441f, -6.447927f },
	{ 2.251442f, -2.251443f, -9.172402f },
	{ 2.251442f, -2.251441f, 6.447927f },
	{ 3.18402f, 0.000001f, 6.447927f },
	{ 3.18402f, -0.00001f, 9.172402f },
	{ 2.251442f, 2.251443f, 6.447927f },
	{ 2.251442f, 2.251441f, 9.172402f },
	{ 0, 3.18402f, 6.447927f },
	{ 0, 3.184018f, 9.172402f },
	{ -2.251442f, 2.251443f, 6.447927f },
	{ -2.251442f, 2.251441f, 9.172402f },
	{ -3.18402f, 0.000001f, 6.447927f },
	{ -3.18402f, -0.00001f, 9.172402f },
	{ -2.251442f, -2.251441f, 6.447927f },
	{ -2.251442f, -2.251443f, 9.172402f },
	{ 0, -3.184018f, 6.447927f },
	{ 0, -3.18402f, 9.172402f }
};

NJS_VECTOR normal_0013D514[] = {
	{ 0.5489849f, -0.5489849f, 0.630262f },
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630263f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630263f },
	{ 0, 1, -0.00001f },
	{ 0, 0.776382f, -0.630263f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630262f },
	{ 0, -1, 0.000001f },
	{ 0, -0.776382f, -0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, -0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630263f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, 0.630263f },
	{ 0, 1, 0.000001f },
	{ 0, 0.776382f, 0.630263f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, -0.00001f },
	{ 0, -0.776382f, 0.630262f }
};

NJS_MODEL_SADX attach_0013D694 = { vertex_0013D394, normal_0013D514, LengthOfArray(vertex_0013D394), meshlist_0013D364, matlist_0013D1E0, LengthOfArray(meshlist_0013D364), LengthOfArray(matlist_0013D1E0), { 0 }, 9.709324f, NULL };

NJS_OBJECT object_0013D6BC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013D694, 10.06501f, 3.169001f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013D6F0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tirepattern, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tyre_all, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013D718[] = {
	0x8000u | 16, 3, 4, 1, 2, 15, 16, 13, 14, 11, 12, 9, 10, 7, 8, 5, 6,
	4, 5, 3, 6, 4,
	0x8000u | 16, 21, 20, 19, 18, 17, 0, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22,
	4, 23, 21, 22, 20
};

Sint16 poly_0013D770[] = {
	8, 2, 16, 4, 14, 6, 12, 8, 10,
	8, 19, 21, 17, 23, 31, 25, 29, 27
};

NJS_TEX uv_0013D794[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 1785, 255 },
	{ 1785, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 510, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 1530, 255 },
	{ 1530, 0 },
	{ 1785, 255 },
	{ 1785, 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_0013D834[] = {
	{ 510, 0 },
	{ 435, 180 },
	{ 435, -180 },
	{ 255, 255 },
	{ 255, -254 },
	{ 74, 180 },
	{ 74, -180 },
	{ 0 },
	{ 510, 0 },
	{ 435, -180 },
	{ 435, 180 },
	{ 255, -254 },
	{ 255, 255 },
	{ 74, -180 },
	{ 74, 180 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0013D874[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0013D718, NULL, NULL, NULL, uv_0013D794, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0013D770, NULL, NULL, NULL, uv_0013D834, NULL }
};

NJS_VECTOR vertex_0013D8A4[] = {
	{ 2.251442f, -2.251441f, 6.646283f },
	{ 3.18402f, 0.000001f, -6.646283f },
	{ 3.18402f, -0.00001f, -9.454571f },
	{ 2.251442f, 2.251443f, -6.646283f },
	{ 2.251442f, 2.251441f, -9.454571f },
	{ 0, 3.18402f, -6.646283f },
	{ 0, 3.184018f, -9.454571f },
	{ -2.251442f, 2.251443f, -6.646283f },
	{ -2.251442f, 2.251441f, -9.454571f },
	{ -3.18402f, 0.000001f, -6.646283f },
	{ -3.18402f, -0.00001f, -9.454571f },
	{ -2.251442f, -2.251441f, -6.646283f },
	{ -2.251442f, -2.251443f, -9.454571f },
	{ 0, -3.184018f, -6.646283f },
	{ 0, -3.18402f, -9.454571f },
	{ 2.251442f, -2.251441f, -6.646283f },
	{ 2.251442f, -2.251443f, -9.454571f },
	{ 2.251442f, -2.251443f, 9.454571f },
	{ 3.18402f, 0.000001f, 6.646283f },
	{ 3.18402f, -0.00001f, 9.454571f },
	{ 2.251442f, 2.251443f, 6.646283f },
	{ 2.251442f, 2.251441f, 9.454571f },
	{ 0, 3.18402f, 6.646283f },
	{ 0, 3.184018f, 9.454571f },
	{ -2.251442f, 2.251443f, 6.646283f },
	{ -2.251442f, 2.251441f, 9.454571f },
	{ -3.18402f, 0.000001f, 6.646283f },
	{ -3.18402f, -0.00001f, 9.454571f },
	{ -2.251442f, -2.251441f, 6.646283f },
	{ -2.251442f, -2.251443f, 9.454571f },
	{ 0, -3.184018f, 6.646283f },
	{ 0, -3.18402f, 9.454571f }
};

NJS_VECTOR normal_0013DA24[] = {
	{ 0.7071069f, -0.7071069f, 0 },
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630263f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630263f },
	{ 0, 1, -0.00001f },
	{ 0, 0.776382f, -0.630263f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630262f },
	{ 0, -1, 0.000001f },
	{ 0, -0.776382f, -0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, -0.630262f },
	{ 0.5489849f, -0.5489849f, 0.630262f },
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630263f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, 0.630263f },
	{ 0, 1, 0.000001f },
	{ 0, 0.776382f, 0.630263f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, -0.00001f },
	{ 0, -0.776382f, 0.630262f }
};

NJS_MODEL_SADX attach_0013DBA4 = { vertex_0013D8A4, normal_0013DA24, LengthOfArray(vertex_0013D8A4), meshlist_0013D874, matlist_0013D6F0, LengthOfArray(meshlist_0013D874), LengthOfArray(matlist_0013D6F0), { 0 }, 9.976315f, NULL };

NJS_OBJECT object_0013DBCC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013DBA4, -8.640992f, 3.187001f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0013D6BC };

NJS_MATERIAL matlist_0013DC00[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_front_g, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_light1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_ref_yellow, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_ref_crome, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_light2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_cone05, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_streetsky, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_light0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013DCA0[] = {
	4, 3, 2, 1, 0
};

Sint16 poly_0013DCAA[] = {
	4, 5, 4, 7, 6,
	4, 11, 10, 9, 8
};

Sint16 poly_0013DCBE[] = {
	3, 20, 62, 30,
	3, 39, 52, 48,
	3, 38, 27, 50,
	0x8000u | 7, 69, 34, 46, 33, 72, 60, 39,
	0x8000u | 5, 26, 25, 27, 24, 38,
	0x8000u | 7, 54, 57, 55, 56, 67, 66, 37,
	13, 25, 54, 26, 57, 65, 63, 36, 66, 61, 37, 34, 35, 69,
	0x8000u | 5, 74, 75, 32, 12, 31,
	6, 81, 80, 51, 75, 70, 12,
	5, 53, 20, 47, 30, 45,
	0x8000u | 6, 71, 42, 62, 31, 20, 12,
	3, 70, 49, 51,
	6, 52, 53, 48, 47, 78, 77,
	10, 78, 40, 48, 38, 39, 50, 60, 65, 64, 36,
	6, 49, 37, 51, 67, 81, 68
};

Sint16 poly_0013DD8C[] = {
	8, 75, 80, 74, 76, 42, 28, 71, 45,
	4, 28, 77, 45, 47,
	0x8000u | 5, 18, 23, 13, 22, 19,
	0x8000u | 5, 16, 14, 21, 15, 17,
	0x8000u | 12, 40, 38, 79, 24, 29, 25, 58, 54, 59, 55, 68, 67
};

Sint16 poly_0013DDDA[] = {
	4, 45, 30, 71, 62,
	4, 31, 32, 42, 74
};

Sint16 poly_0013DDEE[] = {
	0x8000u | 6, 41, 35, 43, 69, 44, 46,
	0x8000u | 9, 70, 41, 12, 43, 20, 44, 73, 46, 72,
	3, 20, 53, 73
};

Sint16 poly_0013DE18[] = {
	0x8000u | 5, 37, 35, 49, 41, 70,
	0x8000u | 5, 53, 73, 52, 72, 39,
	6, 60, 64, 33, 36, 34, 61
};

Sint16 poly_0013DE3E[] = {
	4, 66, 63, 56, 57,
	4, 65, 50, 26, 27
};

NJS_TEX uv_0013DE54[] = {
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 0 }
};

NJS_TEX uv_0013DE64[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

NJS_TEX uv_0013DE84[] = {
	{ 236, 102 },
	{ 253, 171 },
	{ 249, 171 },
	{ 76, 106 },
	{ 106, 104 },
	{ 128, 214 },
	{ 22, 218 },
	{ 9, 203 },
	{ 15, 152 },
	{ 109, 0 },
	{ 103, 7 },
	{ 109, 0 },
	{ 103, 7 },
	{ 108, 9 },
	{ 71, 107 },
	{ 76, 106 },
	{ 3, 203 },
	{ 0, 220 },
	{ 9, 203 },
	{ 7, 220 },
	{ 22, 218 },
	{ 0, 220 },
	{ 3, 203 },
	{ 7, 220 },
	{ 9, 203 },
	{ 22, 218 },
	{ 15, 152 },
	{ 76, 106 },
	{ 0, 220 },
	{ 0, 220 },
	{ 3, 203 },
	{ 3, 203 },
	{ 9, 152 },
	{ 9, 152 },
	{ 62, 108 },
	{ 15, 152 },
	{ 71, 107 },
	{ 76, 106 },
	{ 103, 7 },
	{ 108, 9 },
	{ 109, 0 },
	{ 250, 213 },
	{ 230, 215 },
	{ 249, 171 },
	{ 236, 102 },
	{ 253, 171 },
	{ 128, 254 },
	{ 230, 254 },
	{ 128, 214 },
	{ 230, 215 },
	{ 161, 104 },
	{ 236, 102 },
	{ 161, 104 },
	{ 236, 102 },
	{ 230, 215 },
	{ 249, 171 },
	{ 250, 213 },
	{ 255, 213 },
	{ 255, 213 },
	{ 253, 171 },
	{ 253, 171 },
	{ 236, 102 },
	{ 236, 102 },
	{ 161, 104 },
	{ 106, 104 },
	{ 128, 214 },
	{ 106, 104 },
	{ 161, 104 },
	{ 128, 214 },
	{ 230, 215 },
	{ 128, 254 },
	{ 230, 254 },
	{ 128, 254 },
	{ 24, 254 },
	{ 128, 214 },
	{ 22, 218 },
	{ 76, 106 },
	{ 15, 152 },
	{ 71, 107 },
	{ 9, 152 },
	{ 62, 108 },
	{ 62, 108 },
	{ 106, 104 },
	{ 76, 106 },
	{ 128, 214 },
	{ 22, 218 },
	{ 128, 254 },
	{ 24, 254 }
};

NJS_TEX uv_0013DFE4[] = {
	{ 230, 197 },
	{ 230, 254 },
	{ 250, 196 },
	{ 251, 252 },
	{ 255, 196 },
	{ 251, 252 },
	{ 255, 196 },
	{ 250, 196 },
	{ 251, 252 },
	{ 230, 254 },
	{ 250, 196 },
	{ 230, 197 },
	{ 87, 0 },
	{ 89, 0 },
	{ 79, 37 },
	{ 88, 39 },
	{ 87, 39 },
	{ 87, 39 },
	{ 88, 39 },
	{ 79, 37 },
	{ 89, 0 },
	{ 87, 0 },
	{ 24, 254 },
	{ 22, 202 },
	{ 8, 254 },
	{ 7, 205 },
	{ 1, 254 },
	{ 0, 205 },
	{ 1, 254 },
	{ 0, 205 },
	{ 8, 254 },
	{ 7, 205 },
	{ 24, 254 },
	{ 22, 202 }
};

NJS_TEX uv_0013E06C[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0013E08C[] = {
	{ 221, 27 },
	{ 221, 30 },
	{ 203, 0 },
	{ 209, 7 },
	{ 51, 0 },
	{ 45, 7 },
	{ 255, 255 },
	{ 221, 27 },
	{ 241, 249 },
	{ 203, 0 },
	{ 13, 249 },
	{ 51, 0 },
	{ 33, 27 },
	{ 45, 7 },
	{ 33, 30 },
	{ 13, 249 },
	{ 0, 255 },
	{ 33, 27 }
};

NJS_TEX uv_0013E0D4[] = {
	{ 254, 252 },
	{ 217, 5 },
	{ 250, 246 },
	{ 217, 2 },
	{ 249, 246 },
	{ 5, 246 },
	{ 37, 2 },
	{ 4, 246 },
	{ 37, 5 },
	{ 0, 252 },
	{ 5, 254 },
	{ 39, 254 },
	{ 43, 0 },
	{ 215, 254 },
	{ 211, 0 },
	{ 249, 254 }
};

NJS_TEX uv_0013E114[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0013E134[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0013DCA0, NULL, NULL, NULL, uv_0013DE54, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0013DCAA, NULL, NULL, NULL, uv_0013DE64, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 15, poly_0013DCBE, NULL, NULL, NULL, uv_0013DE84, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_0013DD8C, NULL, NULL, NULL, uv_0013DFE4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0013DDDA, NULL, NULL, NULL, uv_0013E06C, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 3, poly_0013DDEE, NULL, NULL, NULL, uv_0013E08C, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_0013DE18, NULL, NULL, NULL, uv_0013E0D4, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_0013DE3E, NULL, NULL, NULL, uv_0013E114, NULL }
};

NJS_VECTOR vertex_0013E1F4[] = {
	{ 14.84467f, 9.87324f, -3.892472f },
	{ 14.84467f, 9.87324f, 3.892472f },
	{ 15.89313f, 7.966626f, -3.892472f },
	{ 15.89313f, 7.966626f, 3.892472f },
	{ -13.0734f, 4.734951f, -8.702231f },
	{ -12.49328f, 4.732489f, -8.970265f },
	{ -13.05908f, 5.424263f, -8.642278f },
	{ -12.47897f, 5.421798f, -8.836512f },
	{ -13.0734f, 4.734951f, 8.789248f },
	{ -12.49328f, 4.732489f, 8.970265f },
	{ -13.05908f, 5.424263f, 8.642278f },
	{ -12.47897f, 5.421798f, 8.836512f },
	{ 14.39991f, 10.28602f, 7.573743f },
	{ -5.301736f, 10.20791f, 8.667054f },
	{ -4.22905f, 10.12553f, -10.34236f },
	{ -4.05805f, 11.54808f, -10.44894f },
	{ -4.35805f, 10.12553f, -8.8451f },
	{ -4.35805f, 11.54808f, -8.8451f },
	{ -4.35805f, 11.54808f, 8.8451f },
	{ -4.35805f, 10.12553f, 8.8451f },
	{ 14.39991f, 10.28602f, -7.573743f },
	{ -5.301736f, 10.20791f, -8.667054f },
	{ -4.22905f, 10.12553f, 10.34236f },
	{ -4.05805f, 11.54808f, 10.44894f },
	{ -14.37687f, 4.20987f, -8.406116f },
	{ -15.35914f, 4.20987f, -3.961926f },
	{ -14.89922f, 5.08908f, -5.161036f },
	{ -14.14131f, 5.08808f, -7.953256f },
	{ 16.31702f, 2.54036f, -6.462209f },
	{ -15.19915f, 2.452161f, -3.98069f },
	{ 16.03648f, 6.744792f, -7.647899f },
	{ 16.54759f, 6.744248f, 6.212358f },
	{ 16.03477f, 6.747525f, 7.647899f },
	{ -2.348697f, 15.16143f, -5.849439f },
	{ -2.348697f, 15.16143f, 5.849439f },
	{ -1.745209f, 15.05126f, 6.252607f },
	{ -7.496789f, 9.996119f, 6.079526f },
	{ -5.713065f, 10.05618f, 8.853231f },
	{ -12.46481f, 4.307522f, -9.072487f },
	{ -5.713066f, 10.05618f, -8.853231f },
	{ -12.22438f, 2.466861f, -8.7167f },
	{ 3.948822f, 15.11769f, 6.266326f },
	{ 16.73173f, 4.551461f, 6.230497f },
	{ 9.110537f, 15.72206f, 5.076595f },
	{ 9.110537f, 15.72206f, -5.076595f },
	{ 16.11819f, 4.548249f, -7.74029f },
	{ -1.536041f, 15.55476f, -5.471032f },
	{ 13.6255f, 4.490771f, -8.978974f },
	{ 0.83622f, 4.509838f, -9.35346f },
	{ -1.934857f, 10.16012f, 8.564911f },
	{ -13.45666f, 7.710847f, -7.953256f },
	{ 0.83622f, 4.509838f, 9.35346f },
	{ -1.934857f, 10.16012f, -8.564911f },
	{ 4.909626f, 10.15858f, -8.470626f },
	{ -15.35914f, 4.20987f, 4.161926f },
	{ -14.37687f, 4.20987f, 8.606121f },
	{ -14.14131f, 5.08808f, 7.953256f },
	{ -14.89922f, 5.08908f, 5.161036f },
	{ -15.19915f, 2.452161f, 3.98069f },
	{ -14.26406f, 2.452161f, 8.335999f },
	{ -6.319057f, 10.00457f, -8.444818f },
	{ -6.319057f, 10.00457f, 8.444818f },
	{ 16.55207f, 6.736801f, -6.212358f },
	{ -14.15287f, 7.727779f, 5.258379f },
	{ -7.496789f, 9.996119f, -6.079526f },
	{ -14.15287f, 7.727779f, -5.273409f },
	{ -13.45666f, 7.710847f, 7.953256f },
	{ -12.46481f, 4.307522f, 9.072487f },
	{ -12.22438f, 2.466861f, 8.7167f },
	{ -1.536041f, 15.55476f, 5.471032f },
	{ 4.909626f, 10.15858f, 8.470626f },
	{ 16.73173f, 4.551461f, -6.293432f },
	{ -1.745209f, 15.05126f, -6.252607f },
	{ 3.948822f, 15.11769f, -6.266326f },
	{ 16.11819f, 4.548249f, 7.74029f },
	{ 13.6255f, 4.490771f, 8.978974f },
	{ 16.31702f, 2.54036f, 6.462209f },
	{ 13.63802f, 2.466861f, -8.371274f },
	{ 0.787541f, 2.437547f, -8.990113f },
	{ -14.26497f, 2.452161f, -8.259535f },
	{ 13.63802f, 2.466861f, 8.371274f },
	{ 0.787541f, 2.437547f, 9.080016f }
};

NJS_VECTOR normal_0013E5CC[] = {
	{ 0.87625f, 0.481856f, 0 },
	{ 0.87625f, 0.481856f, 0 },
	{ 0.87625f, 0.481856f, 0 },
	{ 0.87625f, 0.481856f, 0 },
	{ -0.363084f, 0.184751f, -0.913256f },
	{ -0.363084f, 0.184751f, -0.913256f },
	{ -0.363084f, 0.184751f, -0.913256f },
	{ -0.363084f, 0.184751f, -0.913256f },
	{ -0.301546f, 0.187654f, 0.9348029f },
	{ -0.301546f, 0.187654f, 0.9348029f },
	{ -0.301546f, 0.187654f, 0.9348029f },
	{ -0.301546f, 0.187654f, 0.9348029f },
	{ 0.581901f, 0.54024f, 0.607892f },
	{ -0.885839f, -0.315785f, 0.339956f },
	{ -0.826244f, -0.220949f, -0.518171f },
	{ -0.873316f, 0.289763f, -0.391608f },
	{ -0.088397f, -0.996056f, -0.007616f },
	{ -0.817466f, 0.55531f, -0.152908f },
	{ -0.817466f, 0.55531f, 0.152908f },
	{ -0.088397f, -0.996056f, 0.007616f },
	{ 0.581885f, 0.5402589f, -0.60789f },
	{ -0.885839f, -0.315785f, -0.339956f },
	{ -0.826244f, -0.220949f, 0.518171f },
	{ -0.873316f, 0.289763f, 0.391608f },
	{ -0.722738f, 0.09956799f, -0.683912f },
	{ -0.983228f, 0.164202f, -0.079375f },
	{ -0.954417f, 0.257007f, -0.151774f },
	{ -0.784326f, 0.271816f, -0.557627f },
	{ 0.881303f, -0.292046f, -0.371502f },
	{ -0.990066f, -0.08895399f, -0.108887f },
	{ 0.716821f, 0.213402f, -0.663797f },
	{ 0.946794f, 0.28358f, 0.152194f },
	{ 0.722707f, 0.217051f, 0.656188f },
	{ -0.338449f, 0.678197f, -0.6523049f },
	{ -0.338449f, 0.678197f, 0.6523049f },
	{ -0.270726f, 0.664869f, 0.696172f },
	{ -0.799489f, 0.08952399f, 0.593971f },
	{ -0.583487f, 0.089025f, 0.807228f },
	{ -0.208132f, 0.01172f, -0.978031f },
	{ -0.583487f, 0.089025f, -0.807228f },
	{ -0.133705f, -0.204884f, -0.969611f },
	{ 0.351059f, 0.6496969f, 0.674278f },
	{ 0.982986f, -0.047783f, 0.177355f },
	{ 0.3302f, 0.862709f, 0.383016f },
	{ 0.3302f, 0.862709f, -0.383016f },
	{ 0.711798f, -0.113976f, -0.6930749f },
	{ -0.179017f, 0.9603879f, -0.21356f },
	{ 0.229101f, -0.059192f, -0.9716009f },
	{ 0.013825f, -0.05693f, -0.998282f },
	{ -0.290531f, 0.119744f, 0.949343f },
	{ -0.580022f, 0.580424f, -0.571562f },
	{ 0.013861f, -0.057085f, 0.998273f },
	{ -0.290531f, 0.119744f, -0.949343f },
	{ 0.44333f, 0.113242f, -0.889176f },
	{ -0.980116f, 0.17942f, 0.084746f },
	{ -0.669439f, 0.186695f, 0.719025f },
	{ -0.761568f, 0.364902f, 0.535594f },
	{ -0.928781f, 0.342057f, 0.142698f },
	{ -0.989881f, -0.100435f, 0.100241f },
	{ -0.709439f, -0.188661f, 0.679046f },
	{ -0.636206f, 0.083984f, -0.766934f },
	{ -0.636206f, 0.083984f, 0.766934f },
	{ 0.9462619f, 0.281103f, -0.159908f },
	{ -0.742004f, 0.6620269f, 0.105593f },
	{ -0.799489f, 0.08952399f, -0.593971f },
	{ -0.740297f, 0.663896f, -0.105841f },
	{ -0.5817569f, 0.578002f, 0.572253f },
	{ -0.186362f, 0.027641f, 0.982092f },
	{ -0.105599f, -0.201999f, 0.973676f },
	{ -0.179017f, 0.9603879f, 0.21356f },
	{ 0.44333f, 0.113242f, 0.889176f },
	{ 0.979778f, -0.052614f, -0.193044f },
	{ -0.270726f, 0.664869f, -0.696172f },
	{ 0.351059f, 0.6496969f, -0.674278f },
	{ 0.720176f, -0.109806f, 0.685046f },
	{ 0.229992f, -0.059155f, 0.971393f },
	{ 0.881951f, -0.289443f, 0.372003f },
	{ 0.278406f, -0.316539f, -0.906804f },
	{ 0.008533999f, -0.239434f, -0.970875f },
	{ -0.722841f, -0.175323f, -0.668403f },
	{ 0.280073f, -0.316399f, 0.906339f },
	{ 0.008478999f, -0.239613f, 0.970832f }
};

NJS_MODEL_SADX attach_0013E9A4 = { vertex_0013E1F4, normal_0013E5CC, LengthOfArray(vertex_0013E1F4), meshlist_0013E134, matlist_0013DC00, LengthOfArray(meshlist_0013E134), LengthOfArray(matlist_0013DC00), { 0.686295f, 9.079803f, 0 }, 19.14775f, NULL };

NJS_OBJECT object_0013E9CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0013E9A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0013DBCC, NULL };
