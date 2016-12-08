#include "SADXModLoader.h"

enum OBJ_PASTTexName
{
	OBJ_PASTTexName_m128_sea001,
	OBJ_PASTTexName_mr_032k_huti,
	OBJ_PASTTexName_mr_032k_pkage,
	OBJ_PASTTexName_mr_032k_pkaidanue2,
	OBJ_PASTTexName_mr_032k_pnikaid01,
	OBJ_PASTTexName_mr_064k__loweda,
	OBJ_PASTTexName_mr_064k_akaren,
	OBJ_PASTTexName_mr_064k_chyashikasan,
	OBJ_PASTTexName_mr_064k_chyashikoke,
	OBJ_PASTTexName_mr_064k_chyashikuki,
	OBJ_PASTTexName_mr_064k_chyashiue,
	OBJ_PASTTexName_mr_064k_chyaykikuki,
	OBJ_PASTTexName_mr_064k_chyaykkoke,
	OBJ_PASTTexName_mr_064k_chyaykue,
	OBJ_PASTTexName_mr_064k_kawa,
	OBJ_PASTTexName_mr_064k_knhashi,
	OBJ_PASTTexName_mr_064k_knkabem,
	OBJ_PASTTexName_mr_064k_knmizo,
	OBJ_PASTTexName_mr_064k_pcueye,
	OBJ_PASTTexName_mr_064k_ptuti,
	OBJ_PASTTexName_mr_064n_har,
	OBJ_PASTTexName_mr_064n_hau,
	OBJ_PASTTexName_mr_064n_mikih,
	OBJ_PASTTexName_mr_064n_sidaa,
	OBJ_PASTTexName_mr_064n_sidab,
	OBJ_PASTTexName_mr_064n_sidag,
	OBJ_PASTTexName_mr_064n_sidah,
	OBJ_PASTTexName_mr_064n_sidak,
	OBJ_PASTTexName_mr_064o_maki01,
	OBJ_PASTTexName_mr_128f_hekid,
	OBJ_PASTTexName_mr_128k_eda,
	OBJ_PASTTexName_mr_128k_knpknu,
	OBJ_PASTTexName_mr_128k_knpyuka,
	OBJ_PASTTexName_mr_128k_mrpkabe,
	OBJ_PASTTexName_mr_128k_nikabe01,
	OBJ_PASTTexName_mr_128k_phebi,
	OBJ_PASTTexName_mr_128n_eda,
	OBJ_PASTTexName_mr_128o_itaita,
	OBJ_PASTTexName_mr_64s_kawa,
	OBJ_PASTTexName_mr_016k_marukage,
	OBJ_PASTTexName_mr_016k_sikakukage,
	OBJ_PASTTexName_mr_064s_emered,
	OBJ_PASTTexName_mr_064s_emegren,
	OBJ_PASTTexName_mr_064s_emegrenb,
	OBJ_PASTTexName_mr_064s_emepupl,
	OBJ_PASTTexName_mr_064s_emebl,
	OBJ_PASTTexName_mr_064s_emesky,
	OBJ_PASTTexName_mr_064s_emewhit,
	OBJ_PASTTexName_mr_064s_emeyelw,
	OBJ_PASTTexName_mk_016k_emebmust
};

NJS_MATERIAL matlist_00122C18[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_PASTTexName_mr_064k_chyashikasan, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00122C54[] = {
	0x8000u | 8, 7, 10, 6, 9, 8, 11, 7, 10,
	0x8000u | 8, 8, 2, 6, 3, 7, 5, 8, 2
};

Sint16 poly_00122C78[] = {
	0x8000u | 8, 0, 3, 1, 2, 4, 5, 0, 3
};

Sint16 poly_00122C8C[] = {
	4, 0, 12, 1, 13,
	4, 1, 13, 4, 14,
	4, 4, 14, 0, 12
};

NJS_TEX uv_00122CB0[] = {
	{ 510, 42 },
	{ 510, 255 },
	{ 336, 42 },
	{ 336, 255 },
	{ 172, 43 },
	{ 172, 255 },
	{ 510, 42 },
	{ 510, 255 },
	{ 172, 43 },
	{ 172, 0 },
	{ 336, 42 },
	{ 336, 0 },
	{ 510, 42 },
	{ 510, 0 },
	{ 172, 43 },
	{ 172, 0 }
};

NJS_TEX uv_00122CF0[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 338, 0 },
	{ 344, 255 },
	{ 169, 0 },
	{ 172, 255 },
	{ 510, 0 },
	{ 510, 255 }
};

NJS_TEX uv_00122D10[] = {
	{ 253, 247 },
	{ 253, -757 },
	{ 1, 247 },
	{ 1, -757 },
	{ 253, 247 },
	{ 253, -757 },
	{ 1, 247 },
	{ 1, -757 },
	{ 253, 247 },
	{ 253, -757 },
	{ 1, 247 },
	{ 1, -757 }
};

NJS_MESHSET_SADX meshlist_00122D40[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00122C54, NULL, NULL, NULL, uv_00122CB0, NULL }
};

NJS_VECTOR vertex_00122D98[] = {
	{ 4.341034f, 5.000001f, -0.707962f },
	{ -1.558464f, 5.000001f, 2.698142f },
	{ -2.529167f, -3, 4.438238f },
	{ 4.833397f, -3, 0.187469f },
	{ -1.541206f, 5.000001f, -4.084167f },
	{ -2.763817f, -3, -4.469742f },
	{ 4.479783f, -10.00001f, -0.58754f },
	{ -1.714874f, -10.00001f, -4.384964f },
	{ -1.523537f, -10.00001f, 2.878486f },
	{ 1.381943f, -44.99999f, 1.113586f },
	{ -2.072189f, -44.99999f, -1.003845f },
	{ -1.965508f, -44.99999f, 3.046241f },
	{ 1.692291f, 37.94292f, 1.542327f },
	{ -2.329514f, 37.94292f, 3.864325f },
	{ -2.312767f, 37.94292f, -0.750656f }
};

NJS_VECTOR normal_00122E50[] = {
	{ 0.996574f, 0.068234f, -0.046737f },
	{ -0.492452f, 0.124699f, 0.86136f },
	{ -0.493067f, 0.005612f, 0.869973f },
	{ 0.997685f, 0.004718f, 0.067834f },
	{ -0.453009f, 0.079605f, -0.887945f },
	{ -0.550209f, 0.001683f, -0.835026f },
	{ 0.997324f, -0.066086f, -0.031267f },
	{ -0.452345f, -0.077854f, -0.888438f },
	{ -0.477159f, -0.133878f, 0.86856f },
	{ 0.995399f, -0.086055f, 0.042132f },
	{ -0.527609f, -0.076345f, -0.84605f },
	{ -0.492628f, 0.010391f, 0.870178f },
	{ 0.996243f, 0.077542f, 0.038561f },
	{ -0.5018f, -0.042253f, 0.863951f },
	{ -0.533991f, 0.072582f, -0.842369f }
};

NJS_MODEL_SADX attach_00122F04 = { vertex_00122D98, normal_00122E50, LengthOfArray(vertex_00122D98), meshlist_00122D40, matlist_00122C18, LengthOfArray(meshlist_00122D40), LengthOfArray(matlist_00122C18),{ 1.03479f, -3.528534f, -0.015752f }, 41.70995f, NULL };

NJS_OBJECT object_00122F3Z = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00122F04, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
