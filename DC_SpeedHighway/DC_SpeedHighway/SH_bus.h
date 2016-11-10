#include "stdafx.h"
#include "SADXModLoader.h"
#include "textures.h"

NJS_MATERIAL matlist_0013B2D4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tirepattern, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tyre_all, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B2FC[] = {
	0x8000u | 16, 2, 3, 0, 1, 14, 15, 12, 13, 10, 11, 8, 9, 6, 7, 4, 5,
	4, 4, 2, 5, 3,
	0x8000u | 16, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 16, 17, 18, 19,
	4, 21, 19, 20, 18
};

Sint16 poly_0013B354[] = {
	0x8000u | 8, 29, 27, 31, 25, 17, 23, 19, 21,
	8, 13, 11, 15, 9, 1, 7, 3, 5
};

NJS_TEX uv_0013B378[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 509, 255 },
	{ 510, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 1020, 255 },
	{ 1020, 0 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 1529, 255 },
	{ 1530, 0 },
	{ 1785, 255 },
	{ 1785, 0 },
	{ 1529, 255 },
	{ 1785, 255 },
	{ 1530, 0 },
	{ 1785, 0 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 1530, 0 },
	{ 1529, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 510, 0 },
	{ 509, 255 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1529, 255 },
	{ 1785, 255 },
	{ 1530, 0 },
	{ 1785, 0 }
};

NJS_TEX uv_0013B418[] = {
	{ 254, 254 },
	{ 74, 180 },
	{ 435, 180 },
	{ 0 },
	{ 510, 0 },
	{ 74, -180 },
	{ 435, -180 },
	{ 254, -254 },
	{ 254, 255 },
	{ 74, 180 },
	{ 435, 180 },
	{ 0 },
	{ 510, 0 },
	{ 74, -180 },
	{ 435, -180 },
	{ 254, -254 }
};

NJS_MESHSET_SADX meshlist_0013B458[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0013B2FC, NULL, NULL, NULL, uv_0013B378, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0013B354, NULL, NULL, NULL, uv_0013B418, NULL }
};

NJS_VECTOR vertex_0013B488[] = {
	{ 3.729521f, -0.000237f, -8.629903f },
	{ 3.729522f, -0.000239f, -11.60356f },
	{ 2.637147f, 2.636987f, -8.629904f },
	{ 2.637148f, 2.636986f, -11.60356f },
	{ -0.00077f, 3.72936f, -8.629903f },
	{ -0.00077f, 3.729358f, -11.60356f },
	{ -2.637302f, 2.636988f, -8.629904f },
	{ -2.637301f, 2.636986f, -11.60356f },
	{ -3.729674f, -0.000236f, -8.629903f },
	{ -3.729674f, -0.000238f, -11.60356f },
	{ -2.637301f, -2.63746f, -8.629903f },
	{ -2.637301f, -2.637462f, -11.60356f },
	{ -0.00077f, -3.729835f, -8.629904f },
	{ -0.00078f, -3.729836f, -11.60356f },
	{ 2.637146f, -2.63746f, -8.629903f },
	{ 2.637146f, -2.637462f, -11.60356f },
	{ 3.729521f, -0.000237f, 8.521243f },
	{ 3.729522f, -0.000237f, 11.4949f },
	{ 2.637148f, 2.636987f, 8.521243f },
	{ 2.637147f, 2.636986f, 11.4949f },
	{ -0.00077f, 3.729361f, 8.521246f },
	{ -0.00077f, 3.729359f, 11.4949f },
	{ -2.637301f, 2.636987f, 8.521242f },
	{ -2.637301f, 2.636987f, 11.4949f },
	{ -3.729674f, -0.000236f, 8.521243f },
	{ -3.729674f, -0.000236f, 11.4949f },
	{ -2.637301f, -2.637461f, 8.521244f },
	{ -2.637301f, -2.637462f, 11.4949f },
	{ -0.00078f, -3.729835f, 8.521243f },
	{ -0.00078f, -3.729835f, 11.49491f },
	{ 2.637146f, -2.637461f, 8.521244f },
	{ 2.637146f, -2.637462f, 11.4949f }
};

NJS_VECTOR normal_0013B608[] = {
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630262f },
	{ 0, 1, -0.00001f },
	{ 0, 0.776382f, -0.630263f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630262f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.707106f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630263f },
	{ 0, -1, 0.000001f },
	{ 0, -0.776383f, -0.6302609f },
	{ 0.7071069f, -0.7071069f, 0.000001f },
	{ 0.5489849f, -0.5489849f, -0.630263f },
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630262f },
	{ 0.7071069f, 0.7071069f, 0.000001f },
	{ 0.5489849f, 0.5489849f, 0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776383f, 0.630262f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630262f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, 0.630263f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, 0.630262f }
};

NJS_MODEL_SADX attach_0013B788 = { vertex_0013B488, normal_0013B608, LengthOfArray(vertex_0013B488), meshlist_0013B458, matlist_0013B2D4, LengthOfArray(meshlist_0013B458), LengthOfArray(matlist_0013B2D4), { -0.00076f, -0.000238f, -0.054329f }, 12.1365f, NULL };

NJS_OBJECT object_0013B7B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013B788, -11.9f, 3.71f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013B7E4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tirepattern, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_tyre_all, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013B80C[] = {
	0x8000u | 16, 3, 2, 1, 0, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4,
	4, 5, 3, 4, 2,
	0x8000u | 16, 21, 20, 23, 22, 25, 24, 27, 26, 29, 28, 31, 30, 17, 16, 19, 18,
	4, 20, 18, 21, 19
};

Sint16 poly_0013B864[] = {
	0x8000u | 8, 13, 11, 15, 9, 1, 7, 3, 5,
	4, 17, 23, 19, 21,
	0x8000u | 6, 29, 31, 27, 17, 25, 23
};

NJS_TEX uv_0013B890[] = {
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
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_0013B930[] = {
	{ 254, 255 },
	{ 74, 180 },
	{ 435, 180 },
	{ 0 },
	{ 510, 0 },
	{ 74, -180 },
	{ 435, -180 },
	{ 254, -254 },
	{ 510, 0 },
	{ 74, -180 },
	{ 435, -180 },
	{ 254, -254 },
	{ 254, 255 },
	{ 435, 180 },
	{ 74, 180 },
	{ 510, 0 },
	{ 0 },
	{ 74, -180 }
};

NJS_MESHSET_SADX meshlist_0013B978[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0013B80C, NULL, NULL, NULL, uv_0013B890, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0013B864, NULL, NULL, NULL, uv_0013B930, NULL }
};

NJS_VECTOR vertex_0013B9A8[] = {
	{ 3.727673f, 0.000013f, 8.222245f },
	{ 3.727673f, 0.000012f, 11.3368f },
	{ 2.635295f, 2.637239f, 8.222245f },
	{ 2.635295f, 2.637238f, 11.3368f },
	{ -0.001927f, 3.729614f, 8.222245f },
	{ -0.001927f, 3.729613f, 11.3368f },
	{ -2.639149f, 2.637239f, 8.222245f },
	{ -2.639149f, 2.637238f, 11.3368f },
	{ -3.731523f, 0.000014f, 8.222245f },
	{ -3.731523f, 0.000014f, 11.3368f },
	{ -2.63915f, -2.63721f, 8.222245f },
	{ -2.63915f, -2.637211f, 11.3368f },
	{ -0.001928f, -3.729585f, 8.222245f },
	{ -0.001928f, -3.729586f, 11.3368f },
	{ 2.635294f, -2.637211f, 8.222245f },
	{ 2.635294f, -2.637212f, 11.3368f },
	{ 3.727673f, 0.000013f, -8.222244f },
	{ 3.727673f, 0.000012f, -11.3368f },
	{ 2.635295f, 2.637239f, -8.222244f },
	{ 2.635295f, 2.637238f, -11.3368f },
	{ -0.001927f, 3.729614f, -8.222244f },
	{ -0.001927f, 3.729613f, -11.3368f },
	{ -2.639149f, 2.637239f, -8.222244f },
	{ -2.639149f, 2.637238f, -11.3368f },
	{ -3.731523f, 0.000014f, -8.222244f },
	{ -3.731523f, 0.000014f, -11.3368f },
	{ -2.63915f, -2.63721f, -8.222244f },
	{ -2.63915f, -2.637211f, -11.3368f },
	{ -0.001928f, -3.729585f, -8.222244f },
	{ -0.001928f, -3.729586f, -11.3368f },
	{ 2.635294f, -2.637211f, -8.222244f },
	{ 2.635294f, -2.637212f, -11.3368f }
};

NJS_VECTOR normal_0013BB28[] = {
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, 0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, 0.630262f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.707106f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, 0.630262f },
	{ 0.707106f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, 0.630263f },
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, -0.630262f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.707106f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, -0.630262f },
	{ 0.707106f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, -0.630262f }
};

NJS_MODEL_SADX attach_0013BCA8 = { vertex_0013B9A8, normal_0013BB28, LengthOfArray(vertex_0013B9A8), meshlist_0013B978, matlist_0013B7E4, LengthOfArray(meshlist_0013B978), LengthOfArray(matlist_0013B7E4), { -0.001925f, 0.000014f, 0 }, 11.93453f, NULL };

NJS_OBJECT object_0013BCD0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013BCA8, 13.51f, 3.71f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0013B7B0 };

NJS_MATERIAL matlist_0013BD04[] = {
	{ { 0xE5B2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_ama_hw010, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_ref_white, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_ref_yellow, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_streetsky, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_ref_crome, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_light1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_light0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, HIGHWAY_CARTexName_light2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013BDA4[] = {
	0x8000u | 6, 2, 3, 5, 4, 0, 1,
	4, 9, 8, 7, 6,
	4, 11, 10, 13, 12
};

Sint16 poly_0013BDC6[] = {
	4, 15, 14, 17, 16,
	4, 21, 20, 19, 18,
	0x8000u | 7, 26, 47, 46, 104, 52, 56, 22,
	0x8000u | 5, 48, 50, 44, 43, 40,
	3, 48, 41, 44,
	0x8000u | 8, 57, 46, 54, 52, 58, 22, 30, 56,
	0x8000u | 12, 68, 71, 69, 70, 65, 40, 54, 43, 57, 50, 59, 48,
	0x8000u | 6, 71, 55, 70, 31, 40, 44,
	3, 54, 65, 58,
	7, 65, 69, 58, 39, 30, 64, 53
};

Sint16 poly_0013BE50[] = {
	4, 29, 42, 32, 51,
	0x8000u | 5, 28, 34, 33, 67, 73,
	0x8000u | 9, 47, 37, 38, 36, 53, 74, 64, 63, 68,
	0x8000u | 17, 41, 55, 29, 71, 32, 68, 67, 63, 73, 74, 33, 36, 35, 37, 23, 47, 26,
	8, 29, 41, 42, 48, 51, 59, 23, 26,
	5, 51, 23, 28, 35, 33
};

Sint16 poly_0013BEBC[] = {
	4, 44, 41, 31, 55,
	4, 64, 39, 68, 69,
	4, 26, 59, 46, 57,
	6, 30, 53, 119, 38, 104, 47
};

Sint16 poly_0013BEE8[] = {
	4, 78, 76, 75, 77,
	3, 91, 92, 88,
	3, 129, 49, 130,
	5, 92, 90, 88, 89, 91,
	3, 93, 87, 94,
	0x8000u | 5, 93, 96, 94, 95, 87,
	4, 66, 97, 45, 121,
	8, 127, 72, 24, 62, 61, 120, 25, 125,
	0x8000u | 5, 127, 122, 24, 123, 25,
	0x8000u | 12, 128, 129, 27, 49, 97, 130, 66, 129, 126, 128, 60, 124,
	3, 61, 25, 24
};

Sint16 poly_0013BF6C[] = {
	4, 80, 79, 82, 81,
	4, 86, 85, 84, 83
};

Sint16 poly_0013BF80[] = {
	0x8000u | 6, 102, 103, 101, 98, 100, 99,
	0x8000u | 5, 109, 108, 105, 107, 106,
	3, 109, 110, 105
};

Sint16 poly_0013BFA2[] = {
	4, 112, 111, 114, 113,
	4, 118, 117, 116, 115
};

NJS_TEX uv_0013BFB8[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 90 },
	{ 0, 90 },
	{ 255, 0 },
	{ 0 },
	{ 255, 0 },
	{ 255, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_TEX uv_0013BFF0[] = {
	{ 62, 251 },
	{ 67, 33 },
	{ 69, 251 },
	{ 72, 33 },
	{ 69, 251 },
	{ 72, 33 },
	{ 62, 251 },
	{ 67, 33 },
	{ 3, 251 },
	{ 0, 254 },
	{ 32, 39 },
	{ 28, 42 },
	{ 37, 11 },
	{ 11, 47 },
	{ 23, 24 },
	{ 249, 250 },
	{ 229, 25 },
	{ 234, 25 },
	{ 221, 0 },
	{ 221, 0 },
	{ 249, 250 },
	{ 255, 250 },
	{ 234, 25 },
	{ 122, 27 },
	{ 32, 39 },
	{ 122, 0 },
	{ 37, 11 },
	{ 37, 11 },
	{ 23, 24 },
	{ 28, 42 },
	{ 11, 47 },
	{ 125, 251 },
	{ 249, 250 },
	{ 122, 27 },
	{ 229, 25 },
	{ 122, 0 },
	{ 221, 0 },
	{ 122, 0 },
	{ 221, 0 },
	{ 122, 27 },
	{ 229, 25 },
	{ 125, 251 },
	{ 249, 250 },
	{ 249, 250 },
	{ 255, 250 },
	{ 229, 25 },
	{ 234, 25 },
	{ 221, 0 },
	{ 234, 25 },
	{ 122, 0 },
	{ 122, 0 },
	{ 37, 11 },
	{ 122, 0 },
	{ 122, 27 },
	{ 37, 11 },
	{ 32, 39 },
	{ 28, 42 },
	{ 3, 251 },
	{ 0, 254 }
};

NJS_TEX uv_0013C0DC[] = {
	{ 255, 68 },
	{ 255, 68 },
	{ 250, 255 },
	{ 250, 255 },
	{ 15, 255 },
	{ 0, 255 },
	{ 0, 106 },
	{ 15, 255 },
	{ 16, 106 },
	{ 27, 2 },
	{ 21, 22 },
	{ 14, 5 },
	{ 9, 25 },
	{ 27, 2 },
	{ 21, 22 },
	{ 30, 0 },
	{ 26, 19 },
	{ 136, 0 },
	{ 250, 0 },
	{ 250, 0 },
	{ 255, 68 },
	{ 245, 0 },
	{ 250, 255 },
	{ 136, 0 },
	{ 15, 255 },
	{ 26, 19 },
	{ 16, 106 },
	{ 21, 22 },
	{ 0, 106 },
	{ 9, 25 },
	{ 16, 106 },
	{ 21, 22 },
	{ 26, 19 },
	{ 27, 2 },
	{ 30, 0 },
	{ 255, 68 },
	{ 250, 0 },
	{ 255, 68 },
	{ 245, 0 },
	{ 250, 255 },
	{ 136, 0 },
	{ 26, 19 },
	{ 30, 0 },
	{ 250, 255 },
	{ 26, 19 },
	{ 15, 255 },
	{ 16, 106 },
	{ 0, 106 }
};

NJS_TEX uv_0013C19C[] = {
	{ 226, 0 },
	{ 251, 246 },
	{ 28, 0 },
	{ 3, 246 },
	{ -3, 247 },
	{ 19, 15 },
	{ -5, 247 },
	{ 18, 1 },
	{ 258, 247 },
	{ 260, 247 },
	{ 235, 15 },
	{ 236, 1 },
	{ 27, 18 },
	{ 5, 251 },
	{ 127, 20 },
	{ 127, 254 },
	{ 227, 18 },
	{ 249, 251 }
};

NJS_TEX uv_0013C1E4[] = {
	{ 13, 81 },
	{ 9, 84 },
	{ 7, 103 },
	{ 13, 81 },
	{ 34, 42 },
	{ 34, 0 },
	{ 34, 32 },
	{ 13, 223 },
	{ 0, 223 },
	{ 13, 223 },
	{ 34, 0 },
	{ 39, 0 },
	{ 34, 32 },
	{ 39, 42 },
	{ 34, 42 },
	{ 34, 0 },
	{ 34, 42 },
	{ 34, 32 },
	{ 34, 0 },
	{ 39, 0 },
	{ 34, 32 },
	{ 39, 42 },
	{ 34, 42 },
	{ 19, 223 },
	{ 16, 255 },
	{ 33, 223 },
	{ 31, 255 },
	{ 247, 255 },
	{ 252, 255 },
	{ 255, 222 },
	{ 252, 255 },
	{ 254, 222 },
	{ 247, 255 },
	{ 234, 222 },
	{ 234, 255 },
	{ 247, 255 },
	{ 234, 255 },
	{ 255, 222 },
	{ 234, 222 },
	{ 234, 222 },
	{ 16, 255 },
	{ 13, 223 },
	{ 0, 255 },
	{ 0, 223 },
	{ 16, 255 },
	{ 13, 223 },
	{ 19, 223 },
	{ 13, 223 },
	{ 19, 223 },
	{ 16, 255 },
	{ 33, 223 },
	{ 31, 255 },
	{ 254, 222 },
	{ 234, 222 },
	{ 255, 222 }
};

NJS_TEX uv_0013C2C0[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 0 },
	{ 255, 0 },
	{ 0, 255 },
	{ 255, 255 }
};

NJS_TEX uv_0013C2E0[] = {
	{ 239, 199 },
	{ 239, 38 },
	{ 127, 236 },
	{ 126, 6 },
	{ 21, 199 },
	{ 21, 38 },
	{ 21, 199 },
	{ 127, 236 },
	{ 126, 6 },
	{ 239, 199 },
	{ 239, 38 },
	{ 21, 199 },
	{ 21, 38 },
	{ 126, 6 }
};

NJS_TEX uv_0013C318[] = {
	{ 254, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0013C338[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0013BDA4, NULL, NULL, NULL, uv_0013BFB8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 10, poly_0013BDC6, NULL, NULL, NULL, uv_0013BFF0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_0013BE50, NULL, NULL, NULL, uv_0013C0DC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0013BEBC, NULL, NULL, NULL, uv_0013C19C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 11, poly_0013BEE8, NULL, NULL, NULL, uv_0013C1E4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0013BF6C, NULL, NULL, NULL, uv_0013C2C0, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 3, poly_0013BF80, NULL, NULL, NULL, uv_0013C2E0, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 2, poly_0013BFA2, NULL, NULL, NULL, uv_0013C318, NULL }
};

NJS_VECTOR vertex_0013C3F8[] = {
	{ 22.00001f, 13.89f, -3.704399f },
	{ 22.00001f, 13.89f, 3.704399f },
	{ 22.01001f, 6.349997f, -3.704399f },
	{ 22.01001f, 6.349997f, 3.704399f },
	{ 22.50001f, 11.65f, 3.704399f },
	{ 22.50001f, 11.65f, -3.704399f },
	{ -2.219999f, 4.999997f, -11.22632f },
	{ -2.219999f, 13.29f, -11.22745f },
	{ 6.860001f, 4.999997f, -11.11757f },
	{ 6.860001f, 13.29f, -11.11868f },
	{ -2.219999f, 4.999997f, 11.18712f },
	{ -2.219999f, 13.29f, 11.18825f },
	{ 6.860001f, 4.999997f, 11.07837f },
	{ 6.860001f, 13.29f, 11.07948f },
	{ -6.502161f, 21.9839f, -8.984788f },
	{ -7.262161f, 14.99734f, -10.83695f },
	{ -5.812161f, 21.9839f, -8.984788f },
	{ -6.182161f, 14.99734f, -10.83695f },
	{ -6.502161f, 21.9839f, 8.966348f },
	{ -7.262161f, 14.99734f, 10.88288f },
	{ -5.812161f, 21.9839f, 8.966348f },
	{ -6.182161f, 14.99734f, 10.88288f },
	{ -13.20606f, 22.27241f, 0 },
	{ -16.75563f, 14.05934f, 11.02476f },
	{ 22.55987f, 4.132666f, 11.21604f },
	{ 18.90793f, 4.132666f, -11.10735f },
	{ -16.0818f, 14.9975f, 10.74214f },
	{ -21.90266f, 2.160299f, 0.000004f },
	{ -18.71055f, 2.58462f, 11.29742f },
	{ 22.42313f, 11.66225f, -10.63826f },
	{ -12.43993f, 21.68739f, -8.191975f },
	{ 18.59799f, 22.22739f, -8.105344f },
	{ 21.66474f, 2.58462f, -10.95492f },
	{ -21.16228f, 9.812254f, 0.000001f },
	{ -21.31029f, 2.58462f, 0 },
	{ -18.43159f, 9.812254f, 10.74465f },
	{ -19.74396f, 13.79933f, 0 },
	{ -17.6796f, 13.89934f, 10.32727f },
	{ -18.77078f, 14.7719f, 0 },
	{ -11.83487f, 21.77739f, -8.914987f },
	{ 16.64959f, 23.04579f, -6.863979f },
	{ 21.65169f, 15.01572f, 10.20833f },
	{ 22.42313f, 11.66225f, 10.63826f },
	{ 16.64959f, 23.04579f, 6.863979f },
	{ 18.59799f, 22.22739f, 8.105344f },
	{ -16.14471f, 4.077301f, 11.44749f },
	{ -11.83487f, 21.77739f, 8.914987f },
	{ -16.6598f, 14.8847f, 10.00957f },
	{ 20.8499f, 15.01915f, 11.05903f },
	{ -22.00267f, 4.077301f, 0.000004f },
	{ 17.77959f, 22.22739f, 8.915874f },
	{ 21.66474f, 2.58462f, 10.95492f },
	{ -11.04418f, 22.68211f, 6.932621f },
	{ -16.6648f, 14.8847f, -10.01437f },
	{ 1.812855f, 23.05916f, 6.926058f },
	{ 21.65169f, 15.01572f, -10.20833f },
	{ -14.95811f, 21.54382f, 0 },
	{ 1.812855f, 22.17999f, 8.940159f },
	{ -11.04418f, 22.68211f, -6.932621f },
	{ 2.142855f, 14.98568f, 10.9277f },
	{ -16.14471f, 4.077301f, -11.44748f },
	{ 22.55987f, 4.132666f, -11.21604f },
	{ 22.19803f, 2.160299f, -10.21653f },
	{ -16.75563f, 14.05934f, -11.02476f },
	{ -16.0818f, 14.9975f, -10.74214f },
	{ 1.812855f, 23.05916f, -6.926058f },
	{ -18.52687f, 4.077301f, 11.2957f },
	{ -18.71055f, 2.58462f, -11.29742f },
	{ 2.142855f, 14.98568f, -10.9277f },
	{ 1.812855f, 22.17999f, -8.940159f },
	{ 17.77959f, 22.22739f, -8.915874f },
	{ 20.8499f, 15.01915f, -11.05903f },
	{ 22.19804f, 2.160299f, 10.21652f },
	{ -18.43159f, 9.812254f, -10.74465f },
	{ -17.6796f, 13.89934f, -10.32727f },
	{ -20.71472f, 11.46085f, 0 },
	{ -20.36112f, 12.60483f, 0 },
	{ -19.66416f, 12.80483f, -2.773497f },
	{ -19.66416f, 12.80483f, 2.773497f },
	{ -18.98809f, 10.7455f, -8.870807f },
	{ -18.74437f, 10.72495f, -9.731417f },
	{ -18.7498f, 11.86112f, -8.870807f },
	{ -18.51608f, 11.84057f, -9.731417f },
	{ -18.98809f, 10.7455f, 8.870807f },
	{ -18.74437f, 10.72495f, 9.731417f },
	{ -18.7498f, 11.86112f, 8.870807f },
	{ -18.51608f, 11.84057f, 9.731417f },
	{ -15.8917f, 15.21773f, 10.65259f },
	{ -15.8917f, 15.79516f, -11.63283f },
	{ -15.09371f, 15.21773f, -12.35798f },
	{ -15.09371f, 17.81774f, -12.35798f },
	{ -15.8917f, 15.21773f, -10.65259f },
	{ -15.8917f, 17.81774f, -10.65259f },
	{ -15.8917f, 17.81774f, 10.65259f },
	{ -15.8917f, 15.80244f, 11.63283f },
	{ -15.09371f, 15.21773f, 12.35798f },
	{ -15.09371f, 17.81774f, 12.35798f },
	{ -19.204f, 2.160299f, 11.38664f },
	{ -19.11135f, 9.764002f, -8.234079f },
	{ -19.47917f, 8.892506f, -6.841615f },
	{ -19.60789f, 7.192688f, -6.839318f },
	{ -19.33879f, 6.364368f, -8.229487f },
	{ -18.93096f, 7.235864f, -9.621955f },
	{ -18.80225f, 8.93568f, -9.624249f },
	{ -12.43493f, 21.68739f, 8.187365f },
	{ -19.11135f, 9.764002f, 8.234079f },
	{ -19.47917f, 8.892506f, 6.841615f },
	{ -19.60789f, 7.192688f, 6.839318f },
	{ -19.33879f, 6.364368f, 8.229487f },
	{ -18.93096f, 7.235864f, 9.621955f },
	{ -18.80225f, 8.93568f, 9.624249f },
	{ 22.23978f, 8.169332f, -7.775991f },
	{ 22.20963f, 8.173117f, -9.206505f },
	{ 22.02364f, 5.920469f, -7.775991f },
	{ 21.9935f, 5.924254f, -9.206505f },
	{ 22.23978f, 8.169332f, 7.775991f },
	{ 22.20963f, 8.173117f, 9.206505f },
	{ 22.02364f, 5.920469f, 7.775991f },
	{ 21.9935f, 5.924254f, 9.206505f },
	{ -14.46344f, 21.61739f, 0 },
	{ 21.18958f, 2.160299f, -11.05793f },
	{ -16.47207f, 2.160299f, 11.2963f },
	{ 18.91464f, 2.160299f, 10.96065f },
	{ 18.90793f, 4.132666f, 11.10735f },
	{ -16.47207f, 2.160299f, -11.29629f },
	{ 18.91463f, 2.160299f, -10.96065f },
	{ -18.52687f, 4.077301f, -11.2957f },
	{ 21.18958f, 2.160299f, 11.05793f },
	{ -19.204f, 2.160299f, -11.38663f },
	{ -19.62422f, 4.077301f, -10.77422f },
	{ -19.62422f, 4.077301f, 10.77422f }
};

NJS_VECTOR normal_0013CA1C[] = {
	{ 0.975982f, 0.217853f, 0 },
	{ 0.975982f, 0.217853f, 0 },
	{ 0.995753f, -0.09206f, 0 },
	{ 0.995753f, -0.09206f, 0 },
	{ 0.997971f, 0.063668f, 0 },
	{ 0.997971f, 0.063668f, 0 },
	{ 0.011978f, -0.000135f, -0.999928f },
	{ 0.011978f, -0.000135f, -0.999928f },
	{ 0.011978f, -0.000135f, -0.999928f },
	{ 0.011978f, -0.000135f, -0.999928f },
	{ 0.011978f, -0.000135f, 0.999928f },
	{ 0.011978f, -0.000135f, 0.999928f },
	{ 0.011978f, -0.000135f, 0.999928f },
	{ 0.011978f, -0.000135f, 0.999928f },
	{ 0, 0.256253f, -0.96661f },
	{ 0, 0.256253f, -0.96661f },
	{ 0, 0.256253f, -0.96661f },
	{ 0, 0.256253f, -0.96661f },
	{ 0, 0.264544f, 0.9643739f },
	{ 0, 0.264544f, 0.9643739f },
	{ 0, 0.264544f, 0.9643739f },
	{ 0, 0.264544f, 0.9643739f },
	{ -0.348592f, 0.937274f, 0.000061f },
	{ -0.361708f, 0.317928f, 0.876407f },
	{ 0.629906f, 0.46943f, 0.618751f },
	{ -0.021514f, 0.690663f, -0.722857f },
	{ -0.8297639f, 0.121102f, 0.544818f },
	{ -0.995146f, -0.09840599f, 0.0009959999f },
	{ -0.6218089f, 0.044634f, 0.781896f },
	{ 0.82376f, 0.06157f, -0.563586f },
	{ -0.720885f, 0.5145209f, -0.46432f },
	{ 0.824398f, 0.432809f, -0.364752f },
	{ 0.687768f, -0.053328f, -0.723969f },
	{ -0.988755f, 0.149532f, -0.002123f },
	{ -0.99979f, 0.020474f, 0 },
	{ -0.757446f, 0.158969f, 0.63325f },
	{ -0.866102f, 0.499851f, -0.004054f },
	{ -0.7644539f, 0.46841f, 0.442947f },
	{ -0.99362f, 0.112779f, 0 },
	{ -0.6877109f, 0.520471f, -0.506126f },
	{ 0.156094f, 0.976236f, -0.150329f },
	{ 0.897738f, 0.101059f, 0.428782f },
	{ 0.823759f, 0.06157f, 0.563586f },
	{ 0.154579f, 0.976412f, 0.150751f },
	{ 0.824398f, 0.432809f, 0.364752f },
	{ -0.005602f, -0.022789f, 0.999725f },
	{ -0.6877109f, 0.520471f, 0.506126f },
	{ -0.855217f, 0.114863f, 0.5053819f },
	{ 0.362648f, 0.24678f, 0.898658f },
	{ -0.78219f, 0.6230389f, 0.000783f },
	{ 0.247696f, 0.678133f, 0.691941f },
	{ 0.687768f, -0.053328f, 0.723969f },
	{ -0.202218f, 0.963311f, 0.176465f },
	{ -0.85518f, 0.114824f, -0.505453f },
	{ -0.014859f, 0.979454f, 0.201122f },
	{ 0.897738f, 0.101059f, -0.428782f },
	{ -0.45304f, 0.89149f, 0.000079f },
	{ 0.116355f, 0.72579f, 0.678005f },
	{ -0.201801f, 0.963393f, -0.176494f },
	{ 0.164435f, 0.209568f, 0.963868f },
	{ -0.005603f, -0.022791f, -0.999725f },
	{ 0.633892f, 0.466172f, -0.617142f },
	{ 0.895766f, -0.320451f, -0.308082f },
	{ -0.360952f, 0.317613f, -0.8768319f },
	{ -0.8297639f, 0.121102f, -0.544818f },
	{ -0.013681f, 0.97953f, -0.200835f },
	{ -0.191814f, 0.435783f, 0.879375f },
	{ -0.6218089f, 0.044634f, -0.781896f },
	{ 0.164435f, 0.209568f, -0.963868f },
	{ 0.116355f, 0.72579f, -0.678005f },
	{ 0.2514f, 0.678058f, -0.690677f },
	{ 0.364123f, 0.246999f, -0.898001f },
	{ 0.895766f, -0.320452f, 0.308081f },
	{ -0.764155f, 0.122668f, -0.633261f },
	{ -0.786577f, 0.423326f, -0.449546f },
	{ -0.9554009f, 0.295311f, 0 },
	{ -0.9554009f, 0.295311f, 0 },
	{ -0.933324f, 0.288487f, -0.213732f },
	{ -0.933324f, 0.288487f, 0.213732f },
	{ -0.944258f, 0.193225f, -0.266536f },
	{ -0.944258f, 0.193225f, -0.266536f },
	{ -0.944258f, 0.193225f, -0.266536f },
	{ -0.944258f, 0.193225f, -0.266536f },
	{ -0.944258f, 0.193225f, 0.266536f },
	{ -0.944258f, 0.193225f, 0.266536f },
	{ -0.944258f, 0.193225f, 0.266536f },
	{ -0.944258f, 0.193225f, 0.266536f },
	{ -0.95819f, -0.245736f, 0.14658f },
	{ -0.900026f, -0.168949f, -0.401757f },
	{ -0.739779f, -0.226857f, -0.633453f },
	{ -0.839204f, 0.14299f, -0.524682f },
	{ -0.958284f, -0.246266f, -0.145067f },
	{ -0.9403099f, 0.148423f, -0.306247f },
	{ -0.94038f, 0.148773f, 0.305864f },
	{ -0.900492f, -0.166005f, 0.40194f },
	{ -0.7406999f, -0.226436f, 0.632527f },
	{ -0.838968f, 0.143309f, 0.524972f },
	{ -0.585422f, 0.02084f, 0.810461f },
	{ -0.969256f, 0.073079f, -0.234954f },
	{ -0.9724129f, 0.073337f, -0.221438f },
	{ -0.9724129f, 0.073337f, -0.221438f },
	{ -0.969404f, 0.07309099f, -0.234336f },
	{ -0.966078f, 0.07281999f, -0.247772f },
	{ -0.966078f, 0.07281999f, -0.247772f },
	{ -0.720836f, 0.514689f, 0.46421f },
	{ -0.968657f, 0.07024299f, 0.238264f },
	{ -0.971259f, 0.067526f, 0.228245f },
	{ -0.971259f, 0.067526f, 0.228245f },
	{ -0.968778f, 0.070118f, 0.237806f },
	{ -0.966078f, 0.07281999f, 0.247772f },
	{ -0.966078f, 0.07281999f, 0.247772f },
	{ 0.995189f, -0.095645f, -0.021225f },
	{ 0.995189f, -0.095645f, -0.021225f },
	{ 0.995189f, -0.095645f, -0.021225f },
	{ 0.995189f, -0.095645f, -0.021225f },
	{ 0.995189f, -0.095645f, 0.021225f },
	{ 0.995189f, -0.095645f, 0.021225f },
	{ 0.995189f, -0.095645f, 0.021225f },
	{ 0.995189f, -0.095645f, 0.021225f },
	{ -0.853317f, 0.5213929f, 0 },
	{ 0.193532f, -0.216411f, -0.956928f },
	{ 0.032935f, -0.08416899f, 0.9959069f },
	{ -0.04264f, -0.06231f, 0.997146f },
	{ -0.030831f, 0.692255f, 0.720994f },
	{ 0.032934f, -0.08417f, -0.9959069f },
	{ -0.029683f, -0.066801f, -0.9973249f },
	{ -0.191815f, 0.435781f, -0.879376f },
	{ 0.184904f, -0.213798f, 0.959219f },
	{ -0.583118f, -0.02319f, -0.8120559f },
	{ -0.662568f, 0.614559f, -0.428159f },
	{ -0.645396f, 0.641124f, 0.415238f }
};

NJS_MODEL_SADX attach_0013D040 = { vertex_0013C3F8, normal_0013CA1C, LengthOfArray(vertex_0013C3F8), meshlist_0013C338, matlist_0013BD04, LengthOfArray(meshlist_0013C338), LengthOfArray(matlist_0013BD04), { 0.278601f, 12.60973f, 0 }, 25.4789f, NULL };

NJS_OBJECT object_0013D068 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0013D040, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0013BCD0, NULL };
