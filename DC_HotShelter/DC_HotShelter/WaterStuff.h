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

NJS_OBJECT object_0140FA2C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0140FA00, -370, 72, -340, 0, 0, 0, 1, 1, 1, NULL, NULL };

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

NJS_OBJECT object_0140F7F0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0140F7C4, -85, 69, -485, 0, 0, 0, 1, 1, 1, NULL, NULL };

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

//Elevator


enum HOTSHELTER0TexName
{
	HOTSHELTER0TexName_ai128gear1h,
	HOTSHELTER0TexName_ai128wc_kk1h,
	HOTSHELTER0TexName_ai32mizoru1h,
	HOTSHELTER0TexName_ai64gear3h,
	HOTSHELTER0TexName_ai64jiku1h,
	HOTSHELTER0TexName_ai64rkai2h,
	HOTSHELTER0TexName_ai64wc_tobira1h,
	HOTSHELTER0TexName_ai64wc_tobira3h,
	HOTSHELTER0TexName_ai64yuka2h,
	HOTSHELTER0TexName_ai64yuka3h,
	HOTSHELTER0TexName_d128grass1alha,
	HOTSHELTER0TexName_d128kikai1h,
	HOTSHELTER0TexName_d128yuka3h,
	HOTSHELTER0TexName_d16door2h,
	HOTSHELTER0TexName_d16hikari2alfa_h,
	HOTSHELTER0TexName_d16kaiten1h,
	HOTSHELTER0TexName_d32grass2alha,
	HOTSHELTER0TexName_d32tecyu1h,
	HOTSHELTER0TexName_d32tunagi4h,
	HOTSHELTER0TexName_d32yuka11h,
	HOTSHELTER0TexName_d64gom1h,
	HOTSHELTER0TexName_d64hikari1alfa_h,
	HOTSHELTER0TexName_d64pipe1h,
	HOTSHELTER0TexName_d64tetu1h,
	HOTSHELTER0TexName_d64tunagi1h,
	HOTSHELTER0TexName_d64tunagi3h,
	HOTSHELTER0TexName_d8azule_h,
	HOTSHELTER0TexName_d8hyouji_green,
	HOTSHELTER0TexName_d8hyouji_red,
	HOTSHELTER0TexName_eq128cncle01,
	HOTSHELTER0TexName_eq128crgamb01,
	HOTSHELTER0TexName_eq128excont03,
	HOTSHELTER0TexName_eq128ggrip,
	HOTSHELTER0TexName_eq128hoobgum01,
	HOTSHELTER0TexName_eq128meca01,
	HOTSHELTER0TexName_eq128mtlblt01,
	HOTSHELTER0TexName_eq128redtile05,
	HOTSHELTER0TexName_eq128redwall01,
	HOTSHELTER0TexName_eq128tnnlwall01,
	HOTSHELTER0TexName_eq128tnnlwall02,
	HOTSHELTER0TexName_eq128wood03,
	HOTSHELTER0TexName_eq16ana01,
	HOTSHELTER0TexName_eq16kabelight02,
	HOTSHELTER0TexName_eq32lightbl01,
	HOTSHELTER0TexName_eq32pipeorng01,
	HOTSHELTER0TexName_eq32tnnlwall01,
	HOTSHELTER0TexName_eq64ahsr01,
	HOTSHELTER0TexName_eq64blutile01,
	HOTSHELTER0TexName_eq64catap01,
	HOTSHELTER0TexName_eq64crggl01,
	HOTSHELTER0TexName_eq64crggl02,
	HOTSHELTER0TexName_eq64crgy01,
	HOTSHELTER0TexName_eq64crgy04,
	HOTSHELTER0TexName_eq64crgy05,
	HOTSHELTER0TexName_eq64glihgt01,
	HOTSHELTER0TexName_eq64glyplt02,
	HOTSHELTER0TexName_eq64grd01,
	HOTSHELTER0TexName_eq64koji01,
	HOTSHELTER0TexName_eq64orng,
	HOTSHELTER0TexName_eq64rail01,
	HOTSHELTER0TexName_eq64recargo01,
	HOTSHELTER0TexName_eq64recargo02,
	HOTSHELTER0TexName_eq64recargo03,
	HOTSHELTER0TexName_eq64rens02,
	HOTSHELTER0TexName_eq64rens03,
	HOTSHELTER0TexName_eq64smki01,
	HOTSHELTER0TexName_eq64tainetu02,
	HOTSHELTER0TexName_eq64tnnlwall01,
	HOTSHELTER0TexName_tm126yel01,
	HOTSHELTER0TexName_tm128pipeg,
	HOTSHELTER0TexName_tm128ygrip,
	HOTSHELTER0TexName_tm16yew1,
	HOTSHELTER0TexName_tm32ami7_al,
	HOTSHELTER0TexName_tm32bk01,
	HOTSHELTER0TexName_tm32bkbk,
	HOTSHELTER0TexName_tm32blakx,
	HOTSHELTER0TexName_tm32dac01,
	HOTSHELTER0TexName_tm32gin01,
	HOTSHELTER0TexName_tm32gr2x,
	HOTSHELTER0TexName_tm32gtop,
	HOTSHELTER0TexName_tm32hasirs,
	HOTSHELTER0TexName_tm32kikag,
	HOTSHELTER0TexName_tm32kou1,
	HOTSHELTER0TexName_tm32kyf,
	HOTSHELTER0TexName_tm32ligyy,
	HOTSHELTER0TexName_tm32line,
	HOTSHELTER0TexName_tm32mar,
	HOTSHELTER0TexName_tm32ohy,
	HOTSHELTER0TexName_tm32pligg,
	HOTSHELTER0TexName_tm32sya,
	HOTSHELTER0TexName_tm32yekai,
	HOTSHELTER0TexName_tm32yelamp,
	HOTSHELTER0TexName_tm32yelbb,
	HOTSHELTER0TexName_tm32yukli,
	HOTSHELTER0TexName_tm54dd01,
	HOTSHELTER0TexName_tm64bkggz,
	HOTSHELTER0TexName_tm64boxerd,
	HOTSHELTER0TexName_tm64egg2_al,
	HOTSHELTER0TexName_tm64ent01,
	HOTSHELTER0TexName_tm64ent02,
	HOTSHELTER0TexName_tm64gom01,
	HOTSHELTER0TexName_tm64hami_ah,
	HOTSHELTER0TexName_tm64kai,
	HOTSHELTER0TexName_tm64linexc,
	HOTSHELTER0TexName_tm64monib,
	HOTSHELTER0TexName_tm64objgr2x,
	HOTSHELTER0TexName_tm64tuika01,
	HOTSHELTER0TexName_tm64waw,
	HOTSHELTER0TexName_tm64wawg,
	HOTSHELTER0TexName_tm64ye02,
	HOTSHELTER0TexName_tm64yel2p,
	HOTSHELTER0TexName_tm64yelw,
	HOTSHELTER0TexName_tm64yewss,
	HOTSHELTER0TexName_tm64yewss2,
	HOTSHELTER0TexName_tm8bk01,
	HOTSHELTER0TexName_tm8bk02,
	HOTSHELTER0TexName_tm8bkline,
	HOTSHELTER0TexName_ai32ma1h,
	HOTSHELTER0TexName_ai32ma2h,
	HOTSHELTER0TexName_ai64e_doa1h
};

NJS_MATERIAL matlist_0013F9A8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_d128grass1alha, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013F9BC[] = {
	0x8000u | 8, 3, 0, 4, 5, 7, 6, 2, 1,
	4, 4, 3, 7, 2,
	4, 6, 1, 5, 0
};

NJS_TEX uv_0013F9E4[] = {
	{ 253, 255 },
	{ 253, 1 },
	{ 253, 1 },
	{ 0, 1 },
	{ 253, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 1 },
	{ 253, 1 },
	{ 253, 255 },
	{ 253, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 1 },
	{ 0, 1 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlist_0013FA24[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0013F9BC, NULL, NULL, NULL, uv_0013F9E4, NULL }
};

NJS_VECTOR vertex_0013FA3C[] = {
	{ 24.31628f, 20.33197f, 40.84031f },
	{ -24.31626f, 20.33197f, 40.84032f },
	{ -24.31626f, -1.50502f, 40.84032f },
	{ 24.31628f, -1.50502f, 40.84031f },
	{ 22.81628f, 17.91159f, 43.34031f },
	{ -22.81626f, 17.91159f, 43.34029f },
	{ -22.81626f, 0.33197f, 43.34032f },
	{ 22.81628f, 0.33197f, 43.34031f }
};

NJS_VECTOR normal_0013FA9C[] = {
	{ -0.445423f, -0.494724f, -0.746222f },
	{ 0.44542f, -0.494724f, -0.746223f },
	{ 0.5025769f, 0.524701f, -0.687099f },
	{ -0.50258f, 0.524701f, -0.687097f },
	{ -0.407513f, -0.298318f, -0.863099f },
	{ 0.407511f, -0.298318f, -0.8631f },
	{ 0.399736f, 0.355956f, -0.8446929f },
	{ -0.399738f, 0.355956f, -0.844692f }
};

NJS_MODEL_SADX attach_0013FAFC = { vertex_0013FA3C, normal_0013FA9C, LengthOfArray(vertex_0013FA3C), meshlist_0013FA24, matlist_0013F9A8, LengthOfArray(meshlist_0013FA24), LengthOfArray(matlist_0013F9A8),{ 0.000007f, 9.413474f, 42.09032f }, 24.34838f, NULL };

NJS_OBJECT object_0013FB24 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013FAFC, 0, 1.5f, -1.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0013FB58[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_d128grass1alha, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013FB6C[] = {
	0x8000u | 8, 3, 0, 4, 5, 7, 6, 2, 1,
	4, 4, 3, 7, 2,
	4, 0, 5, 1, 6
};

NJS_TEX uv_0013FB94[] = {
	{ 253, 255 },
	{ 253, 1 },
	{ 253, 1 },
	{ 0, 1 },
	{ 253, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 1 },
	{ 253, 1 },
	{ 253, 255 },
	{ 253, 255 },
	{ 0, 255 },
	{ 253, 1 },
	{ 0, 1 },
	{ 0, 1 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0013FBD4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0013FB6C, NULL, NULL, NULL, uv_0013FB94, NULL }
};

NJS_VECTOR vertex_0013FBEC[] = {
	{ 23.51374f, 20.33197f, 39.98877f },
	{ -25.11879f, 20.33197f, 40.0263f },
	{ -25.11879f, -1.50502f, 40.0263f },
	{ 23.51374f, -1.50502f, 39.98877f },
	{ 22.01663f, 17.91159f, 42.48934f },
	{ -23.61591f, 17.91159f, 42.52576f },
	{ -23.61591f, 0.33197f, 42.52576f },
	{ 22.01663f, 0.33197f, 42.48934f }
};

NJS_VECTOR normal_0013FC4C[] = {
	{ -0.445967f, -0.494745f, -0.745883f },
	{ 0.444869f, -0.494571f, -0.746653f },
	{ 0.502075f, 0.524665f, -0.687494f },
	{ -0.503107f, 0.5248539f, -0.6865939f },
	{ -0.408273f, -0.298263f, -0.862758f },
	{ 0.406737f, -0.298291f, -0.863474f },
	{ 0.398998f, 0.356013f, -0.845018f },
	{ -0.400501f, 0.355983f, -0.84432f }
};

NJS_MODEL_SADX attach_0013FCAC = { vertex_0013FBEC, normal_0013FC4C, LengthOfArray(vertex_0013FBEC), meshlist_0013FBD4, matlist_0013FB58, LengthOfArray(meshlist_0013FBD4), LengthOfArray(matlist_0013FB58),{ -0.802524f, 9.413474f, 41.25727f }, 26.65511f, NULL };

NJS_OBJECT object_0013FCD4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013FCAC, 0, 1.5f, -1.5f, 0, 0x3FF7, 0, 1, 1, 1, NULL, &object_0013FB24 };

NJS_MATERIAL matlist_0013FD08[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_d128grass1alha, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013FD1C[] = {
	4, 4, 7, 5, 6,
	10, 3, 4, 0, 5, 1, 6, 2, 7, 3, 4
};

NJS_TEX uv_0013FD3C[] = {
	{ 175, 12 },
	{ 175, 244 },
	{ 253, 12 },
	{ 253, 244 },
	{ 0, 255 },
	{ 175, 12 },
	{ 0, 1 },
	{ 253, 12 },
	{ 83, 1 },
	{ 253, 244 },
	{ 83, 255 },
	{ 175, 244 },
	{ 0, 255 },
	{ 175, 12 }
};

NJS_MESHSET_SADX meshlist_0013FD74[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0013FD1C, NULL, NULL, NULL, uv_0013FD3C, NULL }
};

NJS_VECTOR vertex_0013FD8C[] = {
	{ 25.64347f, 20.33197f, 39.69221f },
	{ -22.98533f, 20.33197f, 40.2948f },
	{ -22.98533f, -1.50502f, 40.2948f },
	{ 25.64347f, -1.50502f, 39.69221f },
	{ 24.17451f, 17.91159f, 42.21065f },
	{ -20.95456f, 17.91159f, 42.76979f },
	{ -20.95456f, 0.33197f, 42.76979f },
	{ 24.17451f, 0.33197f, 42.21065f }
};

NJS_VECTOR normal_0013FDEC[] = {
	{ -0.454638f, -0.494723f, -0.740644f },
	{ 0.421577f, -0.450832f, -0.78678f },
	{ 0.474445f, 0.474486f, -0.741462f },
	{ -0.5110559f, 0.524693f, -0.680822f },
	{ -0.418171f, -0.298321f, -0.8579839f },
	{ 0.337319f, -0.302336f, -0.891521f },
	{ 0.330951f, 0.361366f, -0.871714f },
	{ -0.410168f, 0.355955f, -0.839677f }
};

NJS_MODEL_SADX attach_0013FE4C = { vertex_0013FD8C, normal_0013FDEC, LengthOfArray(vertex_0013FD8C), meshlist_0013FD74, matlist_0013FD08, LengthOfArray(meshlist_0013FD74), LengthOfArray(matlist_0013FD08),{ 1.329072f, 9.413474f, 41.23101f }, 26.6551f, NULL };

NJS_OBJECT object_0013FE74 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0013FE4C, 0, 1.5f, -1.5f, 0, 0xBF7E, 0, 1, 1, 1, NULL, &object_0013FCD4 };

NJS_MATERIAL matlist_0013FEA8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_eq128redwall01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_eq128mtlblt01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_eq128redwall01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_eq128redwall01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_ai64rkai2h, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_eq128ggrip, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_tm64kai, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_tm32kou1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_tm32hasirs, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_eq64blutile01, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_tm64yelw, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_ai32mizoru1h, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_tm32line, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_tm64yel2p, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_tm64kai, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, HOTSHELTER0TexName_tm32line, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0013FFE8[] = {
	4, 7, 15, 31, 32,
	4, 12, 11, 27, 28
};

Sint16 poly_0013FFFC[] = {
	0x8000u | 6, 2, 5, 28, 29, 11, 10,
	0x8000u | 6, 12, 13, 27, 26, 9, 8,
	0x8000u | 6, 7, 1, 31, 30, 0, 3,
	0x8000u | 6, 14, 15, 33, 32, 6, 4
};

Sint16 poly_00140034[] = {
	0x8000u | 8, 69, 8, 70, 26, 66, 13, 68, 64,
	3, 14, 13, 64,
	0x8000u | 5, 33, 71, 14, 65, 64,
	10, 74, 33, 75, 71, 77, 67, 76, 6, 74, 33
};

Sint16 poly_00140070[] = {
	4, 10, 1, 29, 30
};

Sint16 poly_0014007A[] = {
	4, 78, 79, 80, 81,
	4, 49, 53, 48, 52
};

Sint16 poly_0014008E[] = {
	8, 20, 18, 21, 19, 22, 16, 23, 17
};

Sint16 poly_001400A0[] = {
	16, 6, 46, 4, 45, 0, 44, 3, 43, 5, 42, 2, 25, 9, 24, 8, 47,
	0x8000u | 8, 8, 69, 47, 72, 46, 73, 6, 67
};

Sint16 poly_001400D4[] = {
	18, 45, 22, 44, 23, 43, 17, 42, 16, 25, 19, 24, 18, 47, 20, 46, 21, 45, 22
};

Sint16 poly_001400FA[] = {
	0x8000u | 10, 74, 78, 75, 79, 77, 81, 76, 80, 74, 78
};

Sint16 poly_00140110[] = {
	3, 35, 34, 36,
	0x8000u | 7, 40, 39, 41, 38, 35, 37, 36
};

Sint16 poly_00140128[] = {
	0x8000u | 18, 14, 40, 15, 41, 7, 35, 1, 34, 10, 36, 11, 37, 12, 38, 13, 39, 14, 40
};

Sint16 poly_0014014E[] = {
	10, 61, 57, 62, 58, 63, 59, 60, 56, 61, 57
};

Sint16 poly_00140164[] = {
	4, 49, 68, 50, 66,
	4, 51, 65, 48, 64,
	3, 48, 52, 51,
	3, 53, 49, 50
};

Sint16 poly_00140188[] = {
	4, 54, 59, 53, 58,
	0x8000u | 8, 56, 57, 55, 52, 73, 51, 71, 65,
	4, 72, 54, 50, 53,
	3, 73, 67, 71,
	0x8000u | 5, 72, 69, 50, 70, 66
};

Sint16 poly_001401C2[] = {
	4, 53, 58, 52, 57,
	4, 55, 56, 54, 59
};

Sint16 poly_001401D6[] = {
	4, 48, 64, 49, 68,
	4, 73, 55, 72, 54
};

NJS_TEX uv_001401EC[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 1 },
	{ 0, 1 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 1 },
	{ 510, 1 }
};

NJS_TEX uv_0014020C[] = {
	{ 0, 254 },
	{ 253, 254 },
	{ 0, -7 },
	{ 253, -7 },
	{ 0, -255 },
	{ 253, -255 },
	{ 0, -255 },
	{ 253, -255 },
	{ 0, -7 },
	{ 253, -7 },
	{ 0, 254 },
	{ 253, 254 },
	{ 253, -255 },
	{ 0, -255 },
	{ 253, -7 },
	{ 0, -7 },
	{ 253, 254 },
	{ 0, 254 },
	{ 0, -255 },
	{ 253, -255 },
	{ 0, -7 },
	{ 253, -7 },
	{ 0, 254 },
	{ 253, 254 }
};

NJS_TEX uv_0014026C[] = {
	{ 424, -254 },
	{ 510, -254 },
	{ 424, 7 },
	{ 510, 7 },
	{ 424, 88 },
	{ 510, 255 },
	{ 371, 171 },
	{ 135, 171 },
	{ 0, 255 },
	{ 510, 255 },
	{ 135, 171 },
	{ 0, 7 },
	{ 83, 7 },
	{ 0, 255 },
	{ 83, 88 },
	{ 135, 171 },
	{ 15, -218 },
	{ 0, 7 },
	{ 15, -34 },
	{ 83, 7 },
	{ 73, -34 },
	{ 83, -254 },
	{ 73, -218 },
	{ 0, -254 },
	{ 15, -218 },
	{ 0, 7 }
};

NJS_TEX uv_001402D4[] = {
	{ 509, 255 },
	{ 0, 255 },
	{ 509, 1 },
	{ 0, 1 }
};

NJS_TEX uv_001402E4[] = {
	{ 423, 64 },
	{ 81, 64 },
	{ 423, 194 },
	{ 82, 194 },
	{ 506, 5 },
	{ 506, 253 },
	{ 3, 5 },
	{ 3, 253 }
};

NJS_TEX uv_00140304[] = {
	{ 255, 254 },
	{ 0, 3 },
	{ 1015, 254 },
	{ 0, -746 },
	{ 1274, 0 },
	{ 259, -1020 },
	{ 1274, -756 },
	{ 1019, -1020 }
};

NJS_TEX uv_00140324[] = {
	{ 1, 225 },
	{ 249, 225 },
	{ 1, -73 },
	{ 249, -73 },
	{ 1, -910 },
	{ 249, -910 },
	{ 1, -1269 },
	{ 249, -1269 },
	{ 1, -2044 },
	{ 249, -2044 },
	{ 1, -2404 },
	{ 249, -2404 },
	{ 1, -3181 },
	{ 249, -3181 },
	{ 1, -3540 },
	{ 249, -3540 },
	{ 0, -254 },
	{ 4, -169 },
	{ 251, -198 },
	{ 101, -158 },
	{ 251, 197 },
	{ 101, 160 },
	{ 0, 254 },
	{ 4, 171 }
};

NJS_TEX uv_00140384[] = {
	{ 10040, 251 },
	{ 10040, 11 },
	{ 8446, 251 },
	{ 8446, 11 },
	{ 7490, 251 },
	{ 7490, 11 },
	{ 5896, 251 },
	{ 5896, 11 },
	{ 4940, 251 },
	{ 4940, 11 },
	{ 3346, 251 },
	{ 3346, 11 },
	{ 2390, 251 },
	{ 2390, 11 },
	{ 796, 251 },
	{ 796, 11 },
	{ 159, 251 },
	{ 159, 11 }
};

NJS_TEX uv_001403CC[] = {
	{ 243, -1251 },
	{ 3, -1251 },
	{ 243, -772 },
	{ 3, -772 },
	{ 243, -533 },
	{ 3, -533 },
	{ 243, -7 },
	{ 3, -7 },
	{ 243, 231 },
	{ 3, 231 }
};

NJS_TEX uv_001403F4[] = {
	{ 1529, -974 },
	{ 1217, -1275 },
	{ 300, -1275 },
	{ 1229, 254 },
	{ 300, 254 },
	{ 1530, -45 },
	{ 0, -45 },
	{ 1529, -974 },
	{ 0, -974 },
	{ 300, -1275 }
};

NJS_TEX uv_0014041C[] = {
	{ 6072, 5 },
	{ 6072, 253 },
	{ 5594, 5 },
	{ 5594, 253 },
	{ 4542, 5 },
	{ 4542, 253 },
	{ 4064, 5 },
	{ 4064, 253 },
	{ 3107, 5 },
	{ 3107, 253 },
	{ 2629, 5 },
	{ 2629, 253 },
	{ 1577, 5 },
	{ 1577, 253 },
	{ 1004, 5 },
	{ 1004, 253 },
	{ 47, 5 },
	{ 47, 253 }
};

NJS_TEX uv_00140464[] = {
	{ 79, 251 },
	{ 79, 11 },
	{ 1190, 255 },
	{ 1190, 7 },
	{ 2550, 255 },
	{ 2550, 7 },
	{ 3740, 255 },
	{ 3740, 7 },
	{ 5020, 251 },
	{ 5020, 11 }
};

NJS_TEX uv_0014048C[] = {
	{ 3, 11 },
	{ 3, 251 },
	{ 243, 11 },
	{ 243, 251 },
	{ 3, 11 },
	{ 3, 251 },
	{ 243, 11 },
	{ 243, 251 },
	{ 3, 251 },
	{ 243, 11 },
	{ 243, 251 },
	{ 243, 11 },
	{ 3, 251 },
	{ 243, 251 }
};

NJS_TEX uv_001404C4[] = {
	{ 182, 249 },
	{ 249, 249 },
	{ 182, -504 },
	{ 249, -504 },
	{ 1, 249 },
	{ 1, -504 },
	{ 64, 249 },
	{ 64, -504 },
	{ 182, 249 },
	{ 182, -504 },
	{ 249, -276 },
	{ 249, -504 },
	{ 182, 249 },
	{ 64, 249 },
	{ 182, -504 },
	{ 64, -504 },
	{ 182, 249 },
	{ 249, 249 },
	{ 249, -276 },
	{ 64, 249 },
	{ 1, 249 },
	{ 64, -504 },
	{ 1, -312 },
	{ 1, -504 }
};

NJS_TEX uv_00140524[] = {
	{ 103, 5 },
	{ 209, 5 },
	{ 103, 253 },
	{ 209, 253 },
	{ 103, 5 },
	{ 209, 5 },
	{ 103, 253 },
	{ 209, 253 }
};

NJS_TEX uv_00140544[] = {
	{ 1020, 7 },
	{ 959, 255 },
	{ 0, 7 },
	{ 60, 255 },
	{ 1004, 251 },
	{ 1004, 11 },
	{ 15, 251 },
	{ 15, 11 }
};

NJS_MESHSET_SADX meshlist_00140564[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0013FFE8, NULL, NULL, NULL, uv_001401EC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0013FFFC, NULL, NULL, NULL, uv_0014020C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_00140034, NULL, NULL, NULL, uv_0014026C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00140070, NULL, NULL, NULL, uv_001402D4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0014007A, NULL, NULL, NULL, uv_001402E4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0014008E, NULL, NULL, NULL, uv_00140304, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_001400A0, NULL, NULL, NULL, uv_00140324, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_001400D4, NULL, NULL, NULL, uv_00140384, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 1, poly_001400FA, NULL, NULL, NULL, uv_001403CC, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_00140110, NULL, NULL, NULL, uv_001403F4, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 1, poly_00140128, NULL, NULL, NULL, uv_0014041C, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 1, poly_0014014E, NULL, NULL, NULL, uv_00140464, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 4, poly_00140164, NULL, NULL, NULL, uv_0014048C, NULL },
	{ NJD_MESHSET_TRIMESH | 13, 5, poly_00140188, NULL, NULL, NULL, uv_001404C4, NULL },
	{ NJD_MESHSET_TRIMESH | 14, 2, poly_001401C2, NULL, NULL, NULL, uv_00140524, NULL },
	{ NJD_MESHSET_TRIMESH | 15, 2, poly_001401D6, NULL, NULL, NULL, uv_00140544, NULL }
};

NJS_VECTOR vertex_001406E4[] = {
	{ 40.0069f, -0.00502f, 23.64969f },
	{ 24.31628f, 42.41159f, 39.34031f },
	{ -40.0069f, -0.00502f, 23.64969f },
	{ 24.31628f, -0.00502f, 39.34031f },
	{ 40.00691f, -0.00502f, -24.98286f },
	{ -24.31626f, -0.00502f, 39.34032f },
	{ 24.31627f, -0.00502f, -40.6735f },
	{ 40.0069f, 42.41159f, 23.64969f },
	{ -24.31628f, -0.00502f, -40.6735f },
	{ -40.0069f, -0.00502f, -24.98285f },
	{ -24.31626f, 42.41159f, 39.34029f },
	{ -40.0069f, 42.41159f, 23.64969f },
	{ -40.0069f, 42.41159f, -24.98285f },
	{ -24.31628f, 42.41159f, -40.6735f },
	{ 24.31627f, 42.41159f, -40.6735f },
	{ 40.00691f, 42.41159f, -24.98286f },
	{ -16.03785f, 0.040375f, 26.96277f },
	{ 16.17639f, 0.040375f, 26.96279f },
	{ -27.03709f, 0.040375f, -17.02441f },
	{ -27.03711f, 0.040375f, 15.1898f },
	{ -16.20758f, 0.040375f, -27.85386f },
	{ 16.00668f, 0.040375f, -27.85386f },
	{ 27.0059f, 0.040375f, -16.85456f },
	{ 27.00589f, 0.040375f, 15.63335f },
	{ -30.92155f, 0.040375f, -19.55471f },
	{ -30.92155f, 0.040375f, 18.20747f },
	{ -24.31628f, 21.83197f, -40.6735f },
	{ -40.0069f, 21.83197f, -24.98285f },
	{ -40.0069f, 21.83197f, 23.64969f },
	{ -24.31626f, 21.83197f, 39.34032f },
	{ 24.31628f, 21.83197f, 39.34031f },
	{ 40.0069f, 21.83197f, 23.64969f },
	{ 40.00691f, 21.83197f, -24.98286f },
	{ 24.31627f, 21.83197f, -40.6735f },
	{ 18.37308f, 46.33322f, 30.38329f },
	{ 31.05136f, 46.33322f, 18.20505f },
	{ -18.87309f, 46.33322f, 30.38328f },
	{ -31.05138f, 46.33322f, 18.20503f },
	{ -31.05137f, 46.33322f, -19.54118f },
	{ -18.8731f, 46.33322f, -31.71943f },
	{ 18.87307f, 46.33322f, -31.71941f },
	{ 31.05137f, 46.33322f, -19.54117f },
	{ -18.8465f, 0.040375f, 30.66943f },
	{ 18.91578f, 0.040375f, 30.66941f },
	{ 30.90595f, 0.040375f, 18.1794f },
	{ 30.90596f, 0.040375f, -19.46977f },
	{ 18.83089f, 0.040375f, -31.54497f },
	{ -18.93137f, 0.040375f, -31.54499f },
	{ 12.85f, 33.49994f, -36.99933f },
	{ -12.65002f, 33.49994f, -36.99939f },
	{ -15.14996f, 29.09994f, -36.99932f },
	{ 15.34998f, 28.59994f, -36.99932f },
	{ 13.09897f, 29.49994f, -39.04084f },
	{ -12.73642f, 29.49994f, -39.04082f },
	{ -12.73003f, -0.00031f, -39.03936f },
	{ 13.09786f, -0.00061f, -39.03849f },
	{ 13.10173f, -0.00032f, -41.78898f },
	{ 13.10223f, 29.49994f, -41.79011f },
	{ -12.73321f, 29.49994f, -41.79012f },
	{ -12.72998f, -0.00031f, -41.78942f },
	{ 13.10173f, 0.000122f, -46.78896f },
	{ 13.10223f, 29.5004f, -46.79011f },
	{ -12.73321f, 29.5004f, -46.79012f },
	{ -12.72998f, 0.000427f, -46.78941f },
	{ 11.34995f, 35.49978f, -40.49953f },
	{ 16.34998f, 28.59979f, -40.49958f },
	{ -16.15002f, 28.59979f, -40.49962f },
	{ 16.34998f, -0.000198f, -40.49958f },
	{ -11.15001f, 35.49978f, -40.49952f },
	{ -16.15002f, -0.000198f, -40.49962f },
	{ -16.15002f, 21.7998f, -40.49962f },
	{ 16.34998f, 21.7998f, -40.49958f },
	{ -15.14997f, -0.000198f, -36.99958f },
	{ 15.34997f, -0.000198f, -36.99958f },
	{ 22.81627f, 2.994995f, -40.6735f },
	{ 22.81627f, 18.33197f, -40.6735f },
	{ 17.34998f, 2.999817f, -40.49958f },
	{ 17.34998f, 18.2998f, -40.49958f },
	{ 21.81627f, 3.994995f, -38.6735f },
	{ 21.81627f, 17.33197f, -38.6735f },
	{ 18.34998f, 3.999817f, -38.49958f },
	{ 18.34998f, 17.2998f, -38.49958f }
};

NJS_VECTOR normal_00140ABC[] = {
	{ -0.389665f, 0.833608f, -0.391482f },
	{ -0.333139f, -0.514169f, -0.790347f },
	{ 0.389662f, 0.833608f, -0.391485f },
	{ -0.391479f, 0.83364f, -0.389601f },
	{ -0.389688f, 0.833589f, 0.391499f },
	{ 0.391474f, 0.83364f, -0.389607f },
	{ -0.289791f, 0.631727f, 0.718987f },
	{ -0.790494f, -0.51437f, -0.33248f },
	{ 0.289297f, 0.62973f, 0.720935f },
	{ 0.389674f, 0.833596f, 0.391499f },
	{ 0.333436f, -0.511857f, -0.791721f },
	{ 0.791723f, -0.511849f, -0.333445f },
	{ 0.791734f, -0.511835f, 0.33344f },
	{ 0.330671f, -0.50977f, 0.794224f },
	{ -0.330649f, -0.5097359f, 0.794255f },
	{ -0.791734f, -0.511835f, 0.333441f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.002582f, 0.9999959f, -0.000905f },
	{ -0.002586f, 0.9999959f, 0.000908f },
	{ 0.372828f, 0, 0.9279f },
	{ 0.862857f, 0, 0.505449f },
	{ 0.862856f, 0, -0.50545f },
	{ 0.505449f, -0.00001f, -0.862857f },
	{ -0.50545f, -0.00001f, -0.862856f },
	{ -0.862856f, 0, -0.505449f },
	{ -0.862856f, 0, 0.50545f },
	{ -0.373193f, 0.001485f, 0.927752f },
	{ -0.069626f, -0.975191f, -0.210128f },
	{ -0.209521f, -0.975004f, -0.073948f },
	{ 0.07488199f, -0.974448f, -0.211764f },
	{ 0.211788f, -0.974443f, -0.074875f },
	{ 0.211797f, -0.97444f, 0.074898f },
	{ 0.07489f, -0.974435f, 0.21182f },
	{ -0.07489f, -0.974435f, 0.21182f },
	{ -0.211797f, -0.97444f, 0.074898f },
	{ -0.000912f, 0.9999959f, 0.00269f },
	{ 0.0009179999f, 0.9999959f, 0.002691f },
	{ 0.002582f, 0.9999959f, 0.000905f },
	{ 0.002575f, 0.9999959f, -0.000896f },
	{ 0.000991f, 0.9999959f, -0.002671f },
	{ -0.001002f, 0.9999959f, -0.002654f },
	{ 0.474992f, 0.341719f, 0.810932f },
	{ -0.462213f, 0.366804f, 0.80735f },
	{ -0.423635f, 0.183272f, 0.887099f },
	{ 0.395915f, 0.153803f, 0.905315f },
	{ -0.633504f, -0.506004f, 0.585348f },
	{ 0.6087019f, -0.498572f, 0.617178f },
	{ 0.525093f, 0.815305f, 0.244038f },
	{ -0.5351149f, 0.810904f, 0.236825f },
	{ -0.707251f, 0.706962f, -0.000408f },
	{ -0.707259f, -0.7069539f, -0.0004899999f },
	{ 0.707043f, -0.70717f, 0.000177f },
	{ 0.707043f, 0.707171f, 0.00026f },
	{ -0.707122f, 0.707092f, 0.000063f },
	{ -0.707083f, -0.70713f, -0.0006499999f },
	{ 0.707119f, -0.707094f, -0.0006499999f },
	{ 0.7071019f, 0.7071109f, 0.000064f },
	{ 0.152942f, 0.388391f, 0.908714f },
	{ 0.546251f, 0.124835f, 0.828267f },
	{ -0.546722f, 0.125026f, 0.827927f },
	{ 0.4899f, 0.5988719f, 0.633522f },
	{ -0.149682f, 0.395685f, 0.906106f },
	{ -0.491706f, 0.5953479f, 0.635442f },
	{ -0.610656f, -0.00001f, 0.791896f },
	{ 0.610769f, 0.001893f, 0.791807f },
	{ -0.092198f, 0.950232f, 0.297588f },
	{ 0.084229f, 0.953344f, 0.289899f },
	{ 0.185837f, -0.164309f, 0.968745f },
	{ 0.184517f, 0.171998f, 0.967662f },
	{ -0.16194f, -0.173056f, 0.971508f },
	{ -0.163523f, 0.181132f, 0.9697689f },
	{ 0.442467f, -0.423957f, 0.790243f },
	{ 0.441818f, 0.429556f, 0.787578f },
	{ -0.405291f, -0.420766f, 0.8116f },
	{ -0.40843f, 0.423094f, 0.808812f }
};

NJS_MODEL_SADX attach_00140E94 = { vertex_001406E4, normal_00140ABC, LengthOfArray(vertex_001406E4), meshlist_00140564, matlist_0013FEA8, LengthOfArray(meshlist_00140564), LengthOfArray(matlist_0013FEA8),{ 0.000002f, 23.1641f, -3.724899f }, 58.78066f, NULL };

NJS_OBJECT object_00140EBC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00140E94, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0013FE74, NULL };
