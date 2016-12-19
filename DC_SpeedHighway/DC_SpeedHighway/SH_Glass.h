#include "stdafx.h"
#include "SADXModLoader.h"
#include "textures.h"

NJS_MATERIAL matlist_001489B8[] = {
	{ { 0x4BB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_HIGHWAYTexName_st3_mado, NJD_D_100 | NJD_FILTER_BILINEAR |	NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001489CC[] = {
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4,
	8, 4, 5, 0, 1, 2, 3, 6, 7
};

NJS_TEX uv_001489FC[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_00148A4C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001489CC, NULL, NULL, NULL, uv_001489FC, NULL }
};

NJS_VECTOR vertex_00148A64[] = {
	{ -20, -1, -20 },
	{ -20, -1, 20 },
	{ -20, 1, -20 },
	{ -20, 1, 20 },
	{ 20, -1, -20 },
	{ 20, -1, 20 },
	{ 20, 1, -20 },
	{ 20, 1, 20 }
};

NJS_VECTOR normal_00148AC4[] = {
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_00148B24 = { vertex_00148A64, normal_00148AC4, LengthOfArray(vertex_00148A64), meshlist_00148A4C,

matlist_001489B8, LengthOfArray(meshlist_00148A4C), LengthOfArray(matlist_001489B8),{ 0 }, 28.28427f, NULL };

NJS_OBJECT object_00148B4C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK,

&attach_00148B24, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
