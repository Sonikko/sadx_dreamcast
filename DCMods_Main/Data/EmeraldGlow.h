#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

enum KAOS_EMETexName
{
	KAOS_EMETexName_mr_064s_emebl,
	KAOS_EMETexName_mr_064s_emegren,
	KAOS_EMETexName_mr_064s_emewhit,
	KAOS_EMETexName_objef_emeefblu,
	KAOS_EMETexName_objef_emefwhi,
	KAOS_EMETexName_objef_emefgren
};

NJS_MATERIAL matlist_0007C334[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 10, KAOS_EMETexName_objef_emefgren, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_0007C348[] = {
	0, 1, 3, 2
};

NJS_TEX uv_0007C350[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_0007C36C[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0007C348, NULL, NULL, NULL, uv_0007C350, NULL }
};

NJS_VECTOR vertex_0007C388[] = {
	{ -10, 10, 0 },
	{ -10, -10, 0 },
	{ 10, -10, 0 },
	{ 10, 10, 0 }
};

NJS_VECTOR normal_0007C360[] = {
	{ 0, 1, 0 },
	{ 0, 0, 0 },
	{ 0, 0, 0 },
	{ 0, -10, 10 }
};

NJS_MODEL_SADX attach_0007C3B8 = { vertex_0007C388, normal_0007C360, LengthOfArray<Sint32>(vertex_0007C388), meshlist_0007C36C, matlist_0007C334, LengthOfArray<Uint16>(meshlist_0007C36C), LengthOfArray<Uint16>(matlist_0007C334),{ 0 }, 14.14214f, NULL };

NJS_OBJECT EmeraldGlow = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_SHAPE_SKIP, &attach_0007C3B8, 0, 5, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

#pragma warning(pop)
