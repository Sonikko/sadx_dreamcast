#include <SADXModLoader.h>


NJS_MATERIAL matlistADV02_001F2A44[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F2A58[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F2A60[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlistADV02_001F2A6C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F2A58, NULL, NULL, NULL, uvADV02_001F2A60, NULL }
};

NJS_VECTOR vertexADV02_001F2A84[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F2AA8[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F2ACC = { vertexADV02_001F2A84, normalADV02_001F2AA8, LengthOfArray(vertexADV02_001F2A84), meshlistADV02_001F2A6C, matlistADV02_001F2A44, LengthOfArray(meshlistADV02_001F2A6C), LengthOfArray(matlistADV02_001F2A44),{ 0, 1.000001f, -1 }, 1.732438f, NULL };

NJS_OBJECT objectADV02_001F2AF4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F2ACC, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F2B28[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F2B3C[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F2B48[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlistADV02_001F2B58[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F2B3C, NULL, NULL, NULL, uvADV02_001F2B48, NULL }
};

NJS_VECTOR vertexADV02_001F2B70[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F2BA0[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F2BD0 = { vertexADV02_001F2B70, normalADV02_001F2BA0, LengthOfArray(vertexADV02_001F2B70), meshlistADV02_001F2B58, matlistADV02_001F2B28, LengthOfArray(meshlistADV02_001F2B58), LengthOfArray(matlistADV02_001F2B28),{ 0, 1.5f, -0.5f }, 2.209687f, NULL };

NJS_OBJECT objectADV02_001F2BF8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F2BD0, 0, 0, 0, 0xD816, 0x24FE, 0, 1, 1, 1, &objectADV02_001F2AF4, NULL };

NJS_MATERIAL matlistADV02_001F2C2C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 152, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F2C40[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F2C48[] = {
	{ 129, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_MESHSET_SADX meshlistADV02_001F2C54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F2C40, NULL, NULL, NULL, uvADV02_001F2C48, NULL }
};

NJS_VECTOR vertexADV02_001F2C6C[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F2C90[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F2CB4 = { vertexADV02_001F2C6C, normalADV02_001F2C90, LengthOfArray(vertexADV02_001F2C6C), meshlistADV02_001F2C54, matlistADV02_001F2C2C, LengthOfArray(meshlistADV02_001F2C54), LengthOfArray(matlistADV02_001F2C2C),{ 0, 1.000001f, -1 }, 1.705545f, NULL };

NJS_OBJECT objectADV02_001F2CDC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F2CB4, 0, 2.999999f, -1, 0x1040E, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F2D10[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 153, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F2D24[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F2D30[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlistADV02_001F2D40[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F2D24, NULL, NULL, NULL, uvADV02_001F2D30, NULL }
};

NJS_VECTOR vertexADV02_001F2D58[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F2D88[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F2DB8 = { vertexADV02_001F2D58, normalADV02_001F2D88, LengthOfArray(vertexADV02_001F2D58), meshlistADV02_001F2D40, matlistADV02_001F2D10, LengthOfArray(meshlistADV02_001F2D40), LengthOfArray(matlistADV02_001F2D10),{ 0, 1.5f, -0.5f }, 2.144097f, NULL };

NJS_OBJECT objectADV02_001F2DE0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F2DB8, 0, 0, 0, 0xD774, 0xFFFFEC48, 0, 1, 1, 1, &objectADV02_001F2CDC, &objectADV02_001F2BF8 };

NJS_MATERIAL matlistADV02_001F2E14[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F2E28[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F2E30[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlistADV02_001F2E3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F2E28, NULL, NULL, NULL, uvADV02_001F2E30, NULL }
};

NJS_VECTOR vertexADV02_001F2E54[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F2E78[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F2E9C = { vertexADV02_001F2E54, normalADV02_001F2E78, LengthOfArray(vertexADV02_001F2E54), meshlistADV02_001F2E3C, matlistADV02_001F2E14, LengthOfArray(meshlistADV02_001F2E3C), LengthOfArray(matlistADV02_001F2E14),{ 0, 1.000001f, -1 }, 1.724791f, NULL };

NJS_OBJECT objectADV02_001F2EC4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F2E9C, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F2EF8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F2F0C[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F2F18[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlistADV02_001F2F28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F2F0C, NULL, NULL, NULL, uvADV02_001F2F18, NULL }
};

NJS_VECTOR vertexADV02_001F2F40[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F2F70[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F2FA0 = { vertexADV02_001F2F40, normalADV02_001F2F70, LengthOfArray(vertexADV02_001F2F40), meshlistADV02_001F2F28, matlistADV02_001F2EF8, LengthOfArray(meshlistADV02_001F2F28), LengthOfArray(matlistADV02_001F2EF8),{ 0, 1.5f, -0.5f }, 2.200898f, NULL };

NJS_OBJECT objectADV02_001F2FC8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F2FA0, 0, 0, 0, 0xD7E1, 0xFFFFD961, 0, 1, 1, 1, &objectADV02_001F2EC4, &objectADV02_001F2DE0 };

NJS_MATERIAL matlistADV02_001F2FFC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3010[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F3018[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlistADV02_001F3024[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3010, NULL, NULL, NULL, uvADV02_001F3018, NULL }
};

NJS_VECTOR vertexADV02_001F303C[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F3060[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F3084 = { vertexADV02_001F303C, normalADV02_001F3060, LengthOfArray(vertexADV02_001F303C), meshlistADV02_001F3024, matlistADV02_001F2FFC, LengthOfArray(meshlistADV02_001F3024), LengthOfArray(matlistADV02_001F2FFC),{ 0, 1.000001f, -1 }, 1.597726f, NULL };

NJS_OBJECT objectADV02_001F30AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F3084, 0, 2.999999f, -1, 0x10430, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F30E0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F30F4[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F3100[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlistADV02_001F3110[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F30F4, NULL, NULL, NULL, uvADV02_001F3100, NULL }
};

NJS_VECTOR vertexADV02_001F3128[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F3158[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F3188 = { vertexADV02_001F3128, normalADV02_001F3158, LengthOfArray(vertexADV02_001F3128), meshlistADV02_001F3110, matlistADV02_001F30E0, LengthOfArray(meshlistADV02_001F3110), LengthOfArray(matlistADV02_001F30E0),{ 0, 1.5f, -0.5f }, 1.738508f, NULL };

NJS_OBJECT objectADV02_001F31B0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F3188, 0, 0, 0, 0xE0CA, 0x607, 0, 1, 1, 1, &objectADV02_001F30AC, &objectADV02_001F2FC8 };

NJS_OBJECT objectADV02_001F31E4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &objectADV02_001F31B0, NULL };

NJS_MATERIAL matlistADV02_001F3218[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 152, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F322C[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F3234[] = {
	{ 129, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_MESHSET_SADX meshlistADV02_001F3240[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F322C, NULL, NULL, NULL, uvADV02_001F3234, NULL }
};

NJS_VECTOR vertexADV02_001F3258[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F327C[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F32A0 = { vertexADV02_001F3258, normalADV02_001F327C, LengthOfArray(vertexADV02_001F3258), meshlistADV02_001F3240, matlistADV02_001F3218, LengthOfArray(meshlistADV02_001F3240), LengthOfArray(matlistADV02_001F3218),{ 0, 1.000001f, -1 }, 1.653678f, NULL };

NJS_OBJECT objectADV02_001F32C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F32A0, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F32FC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 153, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3310[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F331C[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlistADV02_001F332C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3310, NULL, NULL, NULL, uvADV02_001F331C, NULL }
};

NJS_VECTOR vertexADV02_001F3344[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F3374[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F33A4 = { vertexADV02_001F3344, normalADV02_001F3374, LengthOfArray(vertexADV02_001F3344), meshlistADV02_001F332C, matlistADV02_001F32FC, LengthOfArray(meshlistADV02_001F332C), LengthOfArray(matlistADV02_001F32FC),{ 0, 1.5f, -0.5f }, 2.08652f, NULL };

NJS_OBJECT objectADV02_001F33CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F33A4, 0, 0, 0, 0xD774, 0x2FEA, 0, 1, 1, 1, &objectADV02_001F32C8, NULL };

NJS_MATERIAL matlistADV02_001F3400[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3414[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F341C[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlistADV02_001F3428[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3414, NULL, NULL, NULL, uvADV02_001F341C, NULL }
};

NJS_VECTOR vertexADV02_001F3440[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F3464[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F3488 = { vertexADV02_001F3440, normalADV02_001F3464, LengthOfArray(vertexADV02_001F3440), meshlistADV02_001F3428, matlistADV02_001F3400, LengthOfArray(meshlistADV02_001F3428), LengthOfArray(matlistADV02_001F3400),{ 0, 1.000001f, -1 }, 1.632293f, NULL };

NJS_OBJECT objectADV02_001F34B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F3488, 0, 2.999999f, -1, 0x1040E, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F34E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F34F8[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F3504[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlistADV02_001F3514[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F34F8, NULL, NULL, NULL, uvADV02_001F3504, NULL }
};

NJS_VECTOR vertexADV02_001F352C[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F355C[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F358C = { vertexADV02_001F352C, normalADV02_001F355C, LengthOfArray(vertexADV02_001F352C), meshlistADV02_001F3514, matlistADV02_001F34E4, LengthOfArray(meshlistADV02_001F3514), LengthOfArray(matlistADV02_001F34E4),{ 0, 1.5f, -0.5f }, 1.941872f, NULL };

NJS_OBJECT objectADV02_001F35B4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F358C, 0, 0, 0, 0xDC9F, 0xFFFFF430, 0, 1, 1, 1, &objectADV02_001F34B0, &objectADV02_001F33CC };

NJS_MATERIAL matlistADV02_001F35E8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 152, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F35FC[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F3604[] = {
	{ 129, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_MESHSET_SADX meshlistADV02_001F3610[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F35FC, NULL, NULL, NULL, uvADV02_001F3604, NULL }
};

NJS_VECTOR vertexADV02_001F3628[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F364C[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F3670 = { vertexADV02_001F3628, normalADV02_001F364C, LengthOfArray(vertexADV02_001F3628), meshlistADV02_001F3610, matlistADV02_001F35E8, LengthOfArray(meshlistADV02_001F3610), LengthOfArray(matlistADV02_001F35E8),{ 0, 1.000001f, -1 }, 1.587026f, NULL };

NJS_OBJECT objectADV02_001F3698 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F3670, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F36CC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 153, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F36E0[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F36EC[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlistADV02_001F36FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F36E0, NULL, NULL, NULL, uvADV02_001F36EC, NULL }
};

NJS_VECTOR vertexADV02_001F3714[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F3744[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F3774 = { vertexADV02_001F3714, normalADV02_001F3744, LengthOfArray(vertexADV02_001F3714), meshlistADV02_001F36FC, matlistADV02_001F36CC, LengthOfArray(meshlistADV02_001F36FC), LengthOfArray(matlistADV02_001F36CC),{ 0, 1.5f, -0.5f }, 1.892918f, NULL };

NJS_OBJECT objectADV02_001F379C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F3774, 0, 0, 0, 0xD7E1, 0xFFFFC773, 0, 1, 1, 1, &objectADV02_001F3698, &objectADV02_001F35B4 };

NJS_MATERIAL matlistADV02_001F37D0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 152, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F37E4[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F37EC[] = {
	{ 129, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_MESHSET_SADX meshlistADV02_001F37F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F37E4, NULL, NULL, NULL, uvADV02_001F37EC, NULL }
};

NJS_VECTOR vertexADV02_001F3810[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F3834[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F3858 = { vertexADV02_001F3810, normalADV02_001F3834, LengthOfArray(vertexADV02_001F3810), meshlistADV02_001F37F8, matlistADV02_001F37D0, LengthOfArray(meshlistADV02_001F37F8), LengthOfArray(matlistADV02_001F37D0),{ 0, 1.000001f, -1 }, 1.620689f, NULL };

NJS_OBJECT objectADV02_001F3880 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F3858, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F38B4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 153, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F38C8[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F38D4[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlistADV02_001F38E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F38C8, NULL, NULL, NULL, uvADV02_001F38D4, NULL }
};

NJS_VECTOR vertexADV02_001F38FC[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F392C[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F395C = { vertexADV02_001F38FC, normalADV02_001F392C, LengthOfArray(vertexADV02_001F38FC), meshlistADV02_001F38E4, matlistADV02_001F38B4, LengthOfArray(meshlistADV02_001F38E4), LengthOfArray(matlistADV02_001F38B4),{ 0, 1.5f, -0.5f }, 1.807306f, NULL };

NJS_OBJECT objectADV02_001F3984 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F395C, 0, 0, 0, 0xD775, 0xD5D, 0, 1, 1, 1, &objectADV02_001F3880, &objectADV02_001F379C };

NJS_OBJECT objectADV02_001F39B8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x1037, 0, 0, 1, 1, 1, &objectADV02_001F3984, &objectADV02_001F31E4 };

NJS_MATERIAL matlistADV02_001F39EC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3A00[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F3A08[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlistADV02_001F3A14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3A00, NULL, NULL, NULL, uvADV02_001F3A08, NULL }
};

NJS_VECTOR vertexADV02_001F3A2C[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F3A50[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F3A74 = { vertexADV02_001F3A2C, normalADV02_001F3A50, LengthOfArray(vertexADV02_001F3A2C), meshlistADV02_001F3A14, matlistADV02_001F39EC, LengthOfArray(meshlistADV02_001F3A14), LengthOfArray(matlistADV02_001F39EC),{ 0, 1.000001f, -1 }, 3.508662f, NULL };

NJS_OBJECT objectADV02_001F3A9C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F3A74, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F3AD0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3AE4[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F3AF0[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlistADV02_001F3B00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3AE4, NULL, NULL, NULL, uvADV02_001F3AF0, NULL }
};

NJS_VECTOR vertexADV02_001F3B18[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F3B48[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F3B78 = { vertexADV02_001F3B18, normalADV02_001F3B48, LengthOfArray(vertexADV02_001F3B18), meshlistADV02_001F3B00, matlistADV02_001F3AD0, LengthOfArray(meshlistADV02_001F3B00), LengthOfArray(matlistADV02_001F3AD0),{ 0, 1.5f, -0.5f }, 4.276909f, NULL };

NJS_OBJECT objectADV02_001F3BA0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F3B78, 0, 0, 0, 0xDDA6, 0x24FE, 0, 1, 1, 1, &objectADV02_001F3A9C, NULL };

NJS_MATERIAL matlistADV02_001F3BD4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3BE8[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F3BF0[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlistADV02_001F3BFC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3BE8, NULL, NULL, NULL, uvADV02_001F3BF0, NULL }
};

NJS_VECTOR vertexADV02_001F3C14[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F3C38[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F3C5C = { vertexADV02_001F3C14, normalADV02_001F3C38, LengthOfArray(vertexADV02_001F3C14), meshlistADV02_001F3BFC, matlistADV02_001F3BD4, LengthOfArray(meshlistADV02_001F3BFC), LengthOfArray(matlistADV02_001F3BD4),{ 0, 1.000001f, -1 }, 3.418882f, NULL };

NJS_OBJECT objectADV02_001F3C84 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F3C5C, 0, 2.999999f, -1, 0x1040E, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F3CB8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3CCC[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F3CD8[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlistADV02_001F3CE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3CCC, NULL, NULL, NULL, uvADV02_001F3CD8, NULL }
};

NJS_VECTOR vertexADV02_001F3D00[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F3D30[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F3D60 = { vertexADV02_001F3D00, normalADV02_001F3D30, LengthOfArray(vertexADV02_001F3D00), meshlistADV02_001F3CE8, matlistADV02_001F3CB8, LengthOfArray(meshlistADV02_001F3CE8), LengthOfArray(matlistADV02_001F3CB8),{ 0, 1.5f, -0.5f }, 4.09731f, NULL };

NJS_OBJECT objectADV02_001F3D88 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F3D60, 0, 0, 0, 0xDEBB, 0xFFFFEC72, 0, 1, 1, 1, &objectADV02_001F3C84, &objectADV02_001F3BA0 };

NJS_MATERIAL matlistADV02_001F3DBC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3DD0[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F3DD8[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlistADV02_001F3DE4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3DD0, NULL, NULL, NULL, uvADV02_001F3DD8, NULL }
};

NJS_VECTOR vertexADV02_001F3DFC[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F3E20[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F3E44 = { vertexADV02_001F3DFC, normalADV02_001F3E20, LengthOfArray(vertexADV02_001F3DFC), meshlistADV02_001F3DE4, matlistADV02_001F3DBC, LengthOfArray(meshlistADV02_001F3DE4), LengthOfArray(matlistADV02_001F3DBC),{ 0, 1.000001f, -1 }, 3.464729f, NULL };

NJS_OBJECT objectADV02_001F3E6C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F3E44, 0, 2.999999f, -1, 0x101C5, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F3EA0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3EB4[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F3EC0[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlistADV02_001F3ED0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3EB4, NULL, NULL, NULL, uvADV02_001F3EC0, NULL }
};

NJS_VECTOR vertexADV02_001F3EE8[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F3F18[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F3F48 = { vertexADV02_001F3EE8, normalADV02_001F3F18, LengthOfArray(vertexADV02_001F3EE8), meshlistADV02_001F3ED0, matlistADV02_001F3EA0, LengthOfArray(meshlistADV02_001F3ED0), LengthOfArray(matlistADV02_001F3EA0),{ 0, 1.5f, -0.5f }, 4.401796f, NULL };

NJS_OBJECT objectADV02_001F3F70 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F3F48, 0, 0, 0, 0xD7E1, 0xFFFFD961, 0, 1, 1, 1, &objectADV02_001F3E6C, &objectADV02_001F3D88 };

NJS_MATERIAL matlistADV02_001F3FA4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F3FB8[] = {
	3, 0, 2, 1
};

NJS_TEX uvADV02_001F3FC0[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlistADV02_001F3FCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F3FB8, NULL, NULL, NULL, uvADV02_001F3FC0, NULL }
};

NJS_VECTOR vertexADV02_001F3FE4[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normalADV02_001F4008[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attachADV02_001F402C = { vertexADV02_001F3FE4, normalADV02_001F4008, LengthOfArray(vertexADV02_001F3FE4), meshlistADV02_001F3FCC, matlistADV02_001F3FA4, LengthOfArray(meshlistADV02_001F3FCC), LengthOfArray(matlistADV02_001F3FA4),{ 0, 1.000001f, -1 }, 2.941608f, NULL };

NJS_OBJECT objectADV02_001F4054 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV02_001F402C, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV02_001F4088[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV02_001F409C[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uvADV02_001F40A8[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlistADV02_001F40B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, polyADV02_001F409C, NULL, NULL, NULL, uvADV02_001F40A8, NULL }
};

NJS_VECTOR vertexADV02_001F40D0[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normalADV02_001F4100[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attachADV02_001F4130 = { vertexADV02_001F40D0, normalADV02_001F4100, LengthOfArray(vertexADV02_001F40D0), meshlistADV02_001F40B8, matlistADV02_001F4088, LengthOfArray(meshlistADV02_001F40B8), LengthOfArray(matlistADV02_001F4088),{ 0, 1.5f, -0.5f }, 3.44593f, NULL };

NJS_OBJECT objectADV02_001F4158 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attachADV02_001F4130, 0, 0, 0, 0xD774, 0x1506, 0, 1, 1, 1, &objectADV02_001F4054, &objectADV02_001F3F70 };

NJS_OBJECT objectADV02_001F418C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x2404, 0, 0, 1, 1, 1, &objectADV02_001F4158, &objectADV02_001F39B8 };

NJS_OBJECT objectADV02_001F41C0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0x8000, 0, 2, 2, 2, &objectADV02_001F418C, NULL };