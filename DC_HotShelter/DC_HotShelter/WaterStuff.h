#include "SADXModLoader.h"
//pool
NJS_MATERIAL matlist_0140FBE8[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 11, 78, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0140FBFC[] = {
	4, 1, 0, 2, 3
};

NJS_TEX uv_0140FC08[] = {
	{ 1020, 255 },
	{ 0, 255 },
	{ 1020, -255 },
	{ 0, -255 }
};

NJS_MESHSET_SADX meshlist_0140FC18[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0140FBFC, NULL, NULL, NULL, uv_0140FC08, NULL }
};

NJS_VECTOR vertex_0140FC34[] = {
	{ -110, 0, -45 },
	{ 110, 0, -45 },
	{ 110, 0, 35 },
	{ -110, 0, 35 }
};

NJS_VECTOR normal_0140FC64[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0140FC94 = { vertex_0140FC34, normal_0140FC64, LengthOfArray(vertex_0140FC34), meshlist_0140FC18, matlist_0140FBE8, LengthOfArray(meshlist_0140FC18), LengthOfArray(matlist_0140FBE8),{ 0, 0, -5 }, 117.047f, NULL };

NJS_OBJECT object_0140FCC0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0140FC94, 180, -5, -645, 0, 0, 0, 1, 1, 1, NULL, NULL };
//suimen left
NJS_MATERIAL matlist_0140F824[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 11, 78, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0140F838[] = {
	14, 12, 13, 10, 11, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1
};

NJS_TEX uv_0140F858[] = {
	{ 780, 35 },
	{ 122, 255 },
	{ 712, -238 },
	{ 0, -238 },
	{ 780, -513 },
	{ 122, -732 },
	{ 974, -745 },
	{ 470, -1150 },
	{ 1264, -901 },
	{ 991, -1430 },
	{ 1606, -956 },
	{ 1570, -1530 },
	{ 1785, -956 },
	{ 1785, -1530 }
};

NJS_MESHSET_SADX meshlist_0140F890[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0140F838, NULL, NULL, NULL, uv_0140F858, NULL }
};

NJS_VECTOR vertex_0140F8B0[] = {
	{ 230, -0.00046f, 40 },
	{ 230, 0.000046f, 200 },
	{ 190, -0.00008f, 40 },
	{ 181.9698f, -0.00008f, 200 },
	{ 113.4633f, -0.00008f, 24.77588f },
	{ 52.38391f, -0.00008f, 172.2346f },
	{ 48.57864f, -0.00008f, -18.57864f },
	{ -64.28137f, -0.00008f, 94.28137f },
	{ 5.224121f, 0, -83.46332f },
	{ -142.2346f, 0, -22.38388f },
	{ -10, 0, -160 },
	{ -169.6082f, 0.000008f, -159.9999f },
	{ 5.22406f, 0, -236.5366f },
	{ -142.2346f, 0.000015f, -297.616f }
};

NJS_VECTOR normal_0140F958[] = {
	{ -0.00001f, 1, 0 },
	{ -0.00001f, 1, 0 },
	{ -0.00001f, 1, 0 },
	{ -0.00001f, 1, 0 },
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

NJS_MODEL_SADX attach_0140FA00 = { vertex_0140F8B0, normal_0140F958, LengthOfArray(vertex_0140F8B0), meshlist_0140F890, matlist_0140F824, LengthOfArray(meshlist_0140F890), LengthOfArray(matlist_0140F824),{ 30.19592f, 0, -48.80801f }, 319.1036f, NULL };

NJS_OBJECT object_0140FA2C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0140FA00, -370, 75, -340, 0, 0, 0, 1, 1, 1, NULL, NULL };

//suimen right
NJS_MATERIAL matlist_0140F608[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 11, 78, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0140F61C[] = {
	0x8000u | 13, 10, 9, 12, 11, 8, 0, 7, 1, 6, 2, 5, 3, 4
};

NJS_TEX uv_0140F638[] = {
	{ 1530, 255 },
	{ 1530, -510 },
	{ 883, 255 },
	{ 883, -510 },
	{ 441, 255 },
	{ 441, -510 },
	{ 272, 225 },
	{ 272, -480 },
	{ 129, 142 },
	{ 129, -397 },
	{ 33, 18 },
	{ 33, -273 },
	{ 0, -127 }
};

NJS_MESHSET_SADX meshlist_0140F66C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0140F61C, NULL, NULL, NULL, uv_0140F638, NULL }
};

NJS_VECTOR vertex_0140F688[] = {
	{ -101.7f, 0.308342f, 82.50464f },
	{ -139.9683f, 0.308349f, 74.89258f },
	{ -172.4106f, 0.308349f, 53.21533f },
	{ -194.0879f, 0.308349f, 20.77298f },
	{ -201.7f, 0.308349f, -17.49536f },
	{ -194.0879f, 0.308349f, -55.76367f },
	{ -172.4106f, 0.308349f, -88.20599f },
	{ -139.9683f, 0.308349f, -109.8833f },
	{ -101.7f, 0.308357f, -117.4954f },
	{ 144.8f, 0.308349f, 82.50464f },
	{ 144.8f, 0.349632f, -117.4954f },
	{ -1.699955f, 0.308346f, 82.50464f },
	{ -1.699951f, 0.328995f, -117.4954f }
};

NJS_VECTOR normal_0140F728[] = {
	{ -0.00055f, 1, 0.000055f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.00055f, 1, 0.000055f },
	{ -0.0007f, 1, 0.000206f },
	{ -0.0007f, 1, 0.000206f },
	{ -0.00087f, 1, 0.000155f },
	{ -0.00087f, 1, 0.000155f }
};

NJS_MODEL_SADX attach_0140F7C4 = { vertex_0140F688, normal_0140F728, LengthOfArray(vertex_0140F688), meshlist_0140F66C, matlist_0140F608, LengthOfArray(meshlist_0140F66C), LengthOfArray(matlist_0140F608),{ -28.44995f, 0.328987f, -17.49536f }, 200.0389f, NULL };

NJS_OBJECT object_0140F7F0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0140F7C4, -85, 72, -485, 0, 0, 0, 1, 1, 1, NULL, NULL };

//suimen far

NJS_MATERIAL matlist_0140FA60[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 11, 78, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0140FA74[] = {
	0x8000u | 8, 1, 0, 6, 4, 7, 5, 3, 2
};

NJS_TEX uv_0140FA88[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 1020, -255 },
	{ 1020, 255 },
	{ 1530, -255 },
	{ 1530, 255 }
};

NJS_MESHSET_SADX meshlist_0140FAA8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0140FA74, NULL, NULL, NULL, uv_0140FA88, NULL }
};

NJS_VECTOR vertex_0140FAC8[] = {
	{ -180, 0, -80 },
	{ -180, 0, 80 },
	{ 180, 0, -80 },
	{ 180, 0, 80 },
	{ -60, 0, -80 },
	{ 60, 0, -80 },
	{ -60, 0, 80 },
	{ 60, 0, 80 }
};

NJS_VECTOR normal_0140FB28[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_0140FB88 = { vertex_0140FAC8, normal_0140FB28, LengthOfArray(vertex_0140FAC8), meshlist_0140FAA8, matlist_0140FA60, LengthOfArray(meshlist_0140FAA8), LengthOfArray(matlist_0140FA60),{ 0 }, 196.9772f, NULL };

NJS_OBJECT object_0140FBB4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0140FB88, 120, 75, -780, 0, 0, 0, 1, 1, 1, NULL, NULL };

//glass 1


NJS_MATERIAL matlist_01432800[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_01432814[] = {
	0x8000u | 10, 5, 6, 3, 7, 2, 8, 1, 9, 0, 10,
	3, 3, 5, 4
};

NJS_TEX uv_01432834[] = {
	{ 0, 128 },
	{ 11, 176 },
	{ 45, 38 },
	{ 45, 218 },
	{ 93, 11 },
	{ 93, 244 },
	{ 152, 1 },
	{ 152, 255 },
	{ 253, 1 },
	{ 253, 255 },
	{ 45, 38 },
	{ 0, 128 },
	{ 11, 79 }
};

NJS_MESHSET_SADX meshlist_01432868[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_01432814, NULL, NULL, NULL, uv_01432834, NULL }
};

NJS_VECTOR vertex_01432888[] = {
	{ 67, 5, 93 },
	{ 6.999996f, 4.999996f, 93 },
	{ -28.26835f, 4.999996f, 86.38795f },
	{ -56.71068f, 4.999997f, 66.71068f },
	{ -77.38795f, 4.999998f, 37.26835f },
	{ -84, 5, 2.000015f },
	{ -77.38796f, 5.000002f, -32.26832f },
	{ -56.7107f, 5.000003f, -62.71066f },
	{ -28.26836f, 5.000004f, -81.38795f },
	{ 7.000001f, 5.000004f, -89 },
	{ 67, 5.041286f, -89 }
};

NJS_VECTOR normal_01432910[] = {
	{ 0.638519f, -0.000175f, 0.769606f },
	{ 0.167911f, -0.000224f, 0.985802f },
	{ -0.228081f, -0.000238f, 0.973642f },
	{ -0.59744f, -0.000256f, 0.801913f },
	{ -0.890126f, -0.000267f, 0.455715f },
	{ -1, -0.000273f, 0 },
	{ -0.895339f, -0.000268f, -0.445386f },
	{ -0.597441f, -0.000256f, -0.801913f },
	{ -0.230672f, -0.000241f, -0.973032f },
	{ 0.167911f, -0.000224f, -0.985802f },
	{ 0.638519f, 0.000175f, -0.769606f }
};

NJS_MODEL_SADX attach_01432994 = { vertex_01432888, normal_01432910, LengthOfArray(vertex_01432888), meshlist_01432868, matlist_01432800, LengthOfArray(meshlist_01432868), LengthOfArray(matlist_01432800),{ -8.5f, 5.020641f, 2 }, 118.2423f, NULL };

NJS_OBJECT object_014329C0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_01432994, -183, 75, -502, 0, 0, 0, 1, 1, 1, NULL, NULL };

//glass 2


NJS_MATERIAL matlist_01433644[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_01433658[] = {
	4, 3, 2, 0, 1
};

NJS_TEX uv_01433664[] = {
	{ 253, 255 },
	{ 0, 255 },
	{ 253, 1 },
	{ 0, 1 }
};

NJS_MESHSET_SADX meshlist_01433674[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_01433658, NULL, NULL, NULL, uv_01433664, NULL }
};

NJS_VECTOR vertex_01433690[] = {
	{ 146.5f, 5, 93 },
	{ -0.00004f, 4.999996f, 93 },
	{ 0.000001f, 5.000004f, -78 },
	{ 146.5f, 5.041286f, -78 }
};

NJS_VECTOR normal_014336C0[] = {
	{ 0.650608f, -0.000183f, 0.759413f },
	{ -0.650609f, -0.000183f, 0.759413f },
	{ -0.650608f, -0.000183f, -0.759413f },
	{ 0.650608f, 0.000183f, -0.759413f }
};

NJS_MODEL_SADX attach_014336F0 = { vertex_01433690, normal_014336C0, LengthOfArray(vertex_01433690), meshlist_01433674, matlist_01433644, LengthOfArray(meshlist_01433674), LengthOfArray(matlist_01433644),{ 73.25f, 5.020641f, 7.5f }, 112.5869f, NULL };

NJS_OBJECT object_0143371C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_014336F0, -83, 75, -503, 0, 0, 0, 1, 1, 1, NULL, NULL };
