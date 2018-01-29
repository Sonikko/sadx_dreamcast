#pragma once
#include <SADXModLoader.h>

//GOMA

NJS_MATERIAL matlist_001564E8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001564FC[] = {
	3, 5, 1, 0,
	0x8000u | 5, 5, 4, 0, 3, 2
};

NJS_TEX uv_00156510[] = {
	{ 3, 26 },
	{ 1, 203 },
	{ 228, 11 },
	{ 3, 26 },
	{ 2, 63 },
	{ 228, 11 },
	{ 1, 203 },
	{ 243, 236 }
};

NJS_MESHSET_SADX meshlist_00156530[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001564FC, NULL, NULL, NULL, uv_00156510, NULL }
};

NJS_VECTOR vertex_00156548[] = {
	{ 1.094866f, -0.386296f, 0.036289f },
	{ -0.127298f, 0.18604f, -0.192673f },
	{ 1.23905f, 0.721222f, -0.151927f },
	{ -0.127298f, 0.18604f, -0.192673f },
	{ -0.246639f, -0.006416f, 0.006057f },
	{ -0.228412f, 0.007601f, -0.27174f }
};

NJS_VECTOR normal_00156590[] = {
	{ -0.077028f, 0.171525f, 0.982164f },
	{ 0.288694f, 0.24636f, -0.925182f },
	{ -0.09940799f, 0.179276f, 0.978764f },
	{ 0.07939699f, 0.511764f, 0.85545f },
	{ -0.168562f, -0.529074f, 0.831665f },
	{ -0.004832f, -0.6260279f, -0.779786f }
};

NJS_MODEL_SADX attach_001565D8 = { vertex_00156548, normal_00156590, LengthOfArray(vertex_00156548), meshlist_00156530, matlist_001564E8, LengthOfArray(meshlist_00156530), LengthOfArray(matlist_001564E8),{ 0.496205f, 0.167463f, -0.117725f }, 0.7584389f, NULL };

NJS_OBJECT object_00156600 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001565D8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00156634 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0.981858f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00156600 };

NJS_OBJECT object_00156668 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x8000, 0xFFFFFA4A, 0x27CE, 1, 1, 1, &object_00156634, NULL };

NJS_OBJECT object_0015669C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.278968f, -1.332942f, -0.126362f, 0x601A, 0x4000, 0xFFFFDFE6, 1, 1, 1, &object_00156668, NULL };

NJS_MATERIAL matlist_001566D0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001566E4[] = {
	3, 2, 1, 0
};

NJS_TEX uv_001566EC[] = {
	{ 244, 251 },
	{ 244, 14 },
	{ 0, 143 }
};

NJS_MESHSET_SADX meshlist_001566F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001566E4, NULL, NULL, NULL, uv_001566EC, NULL }
};

NJS_VECTOR vertex_00156710[] = {
	{ 0.032269f, 0.017277f, 0.02334f },
	{ 0.87153f, 0.480335f, 0.080638f },
	{ 0.879163f, -0.332311f, -0.032109f }
};

NJS_VECTOR normal_00156734P[] = {
	{ 0.008157f, -0.137345f, 0.99049f },
	{ 0.008157f, -0.137345f, 0.99049f },
	{ 0.008157f, -0.137345f, 0.99049f }
};

NJS_MODEL_SADX attach_00156758 = { vertex_00156710, normal_00156734P, LengthOfArray(vertex_00156710), meshlist_001566F8, matlist_001566D0, LengthOfArray(meshlist_001566F8), LengthOfArray(matlist_001566D0),{ 0.455716f, 0.074012f, 0.024264f }, 0.587055f, NULL };

NJS_OBJECT object_00156780 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00156758, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_001567B4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0.749528f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00156780 };

NJS_OBJECT object_001567E8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x71, 1, 1, 1, &object_001567B4, NULL };

NJS_OBJECT object_0015681C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.336866f, 2.291382f, 0, 0xFFFFDFE6, 0xFFFFC000, 0xFFFFDFE6, 1, 1, 1, &object_001567E8, &object_0015669C };

NJS_MATERIAL matlist_00156850[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00156864[] = {
	3, 0, 1, 2
};

NJS_TEX uv_0015686C[] = {
	{ 0, 142 },
	{ 243, 15 },
	{ 243, 252 }
};

NJS_MESHSET_SADX meshlist_00156878[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00156864, NULL, NULL, NULL, uv_0015686C, NULL }
};

NJS_VECTOR vertex_00156890[] = {
	{ 0.034029f, -0.009108f, 0.02334f },
	{ 0.879696f, -0.472166f, 0.080638f },
	{ 0.887386f, 0.340479f, -0.032109f }
};

NJS_VECTOR normal_001568B4[] = {
	{ 0.008095f, 0.137345f, 0.99049f },
	{ 0.008095f, 0.137345f, 0.99049f },
	{ 0.008095f, 0.137345f, 0.99049f }
};

NJS_MODEL_SADX attach_001568D8 = { vertex_00156890, normal_001568B4, LengthOfArray(vertex_00156890), meshlist_00156878, matlist_00156850, LengthOfArray(meshlist_00156878), LengthOfArray(matlist_00156850),{ 0.460708f, -0.065844f, 0.024264f }, 0.589391f, NULL };

NJS_OBJECT object_00156900 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001568D8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00156934 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0.749528f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00156900 };

NJS_OBJECT object_00156968 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x8000, 0, 0x71, 1, 1, 1, &object_00156934, NULL };

NJS_OBJECT object_0015699C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.336866f, 2.291382f, 0, 0x201A, 0x4000, 0xFFFFDFE6, 1, 1, 1, &object_00156968, &object_0015681C };

NJS_MATERIAL matlist_001569D0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001569E4[] = {
	3, 3, 2, 0,
	0x8000u | 5, 3, 4, 0, 5, 1
};

NJS_TEX uv_001569F8[] = {
	{ 2, 206 },
	{ 239, 238 },
	{ 232, 12 },
	{ 2, 206 },
	{ 2, 56 },
	{ 232, 12 },
	{ 4, 14 },
	{ 2, 206 }
};

NJS_MESHSET_SADX meshlist_00156A18[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001569E4, NULL, NULL, NULL, uv_001569F8, NULL }
};

NJS_VECTOR vertex_00156A30[] = {
	{ 1.094866f, 0.386296f, 0.036289f },
	{ -0.127298f, -0.18604f, -0.192673f },
	{ 1.23905f, -0.721222f, -0.151926f },
	{ -0.127298f, -0.18604f, -0.192673f },
	{ -0.246638f, 0.006416f, 0.006057f },
	{ -0.228412f, -0.007602f, -0.27174f }
};

NJS_VECTOR normal_00156A78[] = {
	{ -0.077028f, -0.171524f, 0.982164f },
	{ 0.288695f, -0.24636f, -0.925182f },
	{ -0.09940799f, -0.179276f, 0.978764f },
	{ 0.07939699f, -0.511764f, 0.85545f },
	{ -0.168563f, 0.529075f, 0.831665f },
	{ -0.004833f, 0.6260279f, -0.779786f }
};

NJS_MODEL_SADX attach_00156AC0 = { vertex_00156A30, normal_00156A78, LengthOfArray(vertex_00156A30), meshlist_00156A18, matlist_001569D0, LengthOfArray(meshlist_00156A18), LengthOfArray(matlist_001569D0),{ 0.496206f, -0.167463f, -0.117726f }, 0.7584389f, NULL };

NJS_OBJECT object_00156AE8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00156AC0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00156B1C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0.981858f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00156AE8 };

NJS_OBJECT object_00156B50 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0x5B6, 0x27CE, 1, 1, 1, &object_00156B1C, NULL };

NJS_OBJECT object_00156B84 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.278968f, -1.332942f, 0.126363f, 0xFFFF9FE6, 0xFFFFC000, 0xFFFFDFE6, 1, 1, 1, &object_00156B50, &object_0015699C };

NJS_MATERIAL matlist_00156BB8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00156BCC[] = {
	3, 5, 1, 0,
	0x8000u | 5, 5, 4, 0, 3, 2
};

NJS_TEX uv_00156BE0[] = {
	{ 4, 123 },
	{ 4, 139 },
	{ 219, 10 },
	{ 4, 123 },
	{ 4, 79 },
	{ 219, 10 },
	{ 4, 139 },
	{ 243, 250 }
};

NJS_MESHSET_SADX meshlist_00156C00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00156BCC, NULL, NULL, NULL, uv_00156BE0, NULL }
};

NJS_VECTOR vertex_00156C18[] = {
	{ 1.280575f, -0.50757f, -0.009833f },
	{ 0.110315f, 0.26587f, -0.041702f },
	{ 1.566522f, 0.392318f, -0.007039f },
	{ 0.110315f, 0.26587f, -0.041702f },
	{ -0.011591f, -0.217025f, 0.181601f },
	{ -0.004711f, -0.119693f, -0.235516f }
};

NJS_VECTOR normal_00156C60[] = {
	{ 0.048598f, -0.023361f, 0.998545f },
	{ 0.267404f, 0.367902f, -0.890586f },
	{ -0.024195f, 0.004585f, 0.999697f },
	{ 0.135484f, 0.244558f, 0.9601229f },
	{ -0.028489f, -0.635225f, 0.771801f },
	{ 0.03805f, -0.405352f, -0.913368f }
};

NJS_MODEL_SADX attach_00156CA8 = { vertex_00156C18, normal_00156C60, LengthOfArray(vertex_00156C18), meshlist_00156C00, matlist_00156BB8, LengthOfArray(meshlist_00156C00), LengthOfArray(matlist_00156BB8),{ 0.777465f, -0.057626f, -0.026957f }, 0.816089f, NULL };

NJS_OBJECT object_00156CD0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00156CA8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00156D04 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.450049f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00156CD0 };

NJS_OBJECT object_00156D38 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0xFFFF8AD7, 0x6D1A, 1, 1, 1, &object_00156D04, NULL };

NJS_OBJECT object_00156D6C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.403036f, 0.728202f, -0.60386f, 0x601A, 0x4000, 0xFFFFDFE6, 1, 1, 1, &object_00156D38, &object_00156B84 };

NJS_MATERIAL matlist_00156DA0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00156DB4[] = {
	3, 3, 2, 0,
	0x8000u | 5, 3, 4, 0, 5, 1
};

NJS_TEX uv_00156DC8[] = {
	{ 4, 134 },
	{ 242, 250 },
	{ 222, 9 },
	{ 4, 134 },
	{ 4, 94 },
	{ 222, 9 },
	{ 4, 111 },
	{ 4, 134 }
};

NJS_MESHSET_SADX meshlist_00156DE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00156DB4, NULL, NULL, NULL, uv_00156DC8, NULL }
};

NJS_VECTOR vertex_00156E00[] = {
	{ 1.280575f, 0.50757f, -0.009833f },
	{ 0.110315f, -0.26587f, -0.041702f },
	{ 1.566522f, -0.392318f, -0.007039f },
	{ 0.110315f, -0.26587f, -0.041702f },
	{ -0.011591f, 0.217025f, 0.181601f },
	{ -0.004712f, 0.119693f, -0.235516f }
};

NJS_VECTOR normal_00156E48[] = {
	{ 0.048598f, 0.023361f, 0.998545f },
	{ 0.267404f, -0.367902f, -0.890586f },
	{ -0.024195f, -0.004585f, 0.999697f },
	{ 0.135484f, -0.244558f, 0.9601229f },
	{ -0.028489f, 0.635225f, 0.771801f },
	{ 0.03805f, 0.405352f, -0.913368f }
};

NJS_MODEL_SADX attach_00156E90 = { vertex_00156E00, normal_00156E48, LengthOfArray(vertex_00156E00), meshlist_00156DE8, matlist_00156DA0, LengthOfArray(meshlist_00156DE8), LengthOfArray(matlist_00156DA0),{ 0.777465f, 0.057626f, -0.026957f }, 0.81609f, NULL };

NJS_OBJECT object_00156EB8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00156E90, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00156EEC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.450049f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00156EB8 };

NJS_OBJECT object_00156F20 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0xAD6, 0xFFFFED1B, 1, 1, 1, &object_00156EEC, NULL };

NJS_OBJECT object_00156F54 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.403036f, 0.728202f, 0.60386f, 0xFFFF9FE6, 0xFFFFC000, 0xFFFFDFE6, 1, 1, 1, &object_00156F20, &object_00156D6C };

NJS_MATERIAL matlist_00156F88[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00156FB0[] = {
	4, 10, 3, 16, 20,
	3, 17, 19, 11,
	6, 21, 28, 30, 36, 2, 12,
	3, 17, 10, 16,
	0x8000u | 8, 5, 16, 26, 17, 28, 19, 21, 13,
	0x8000u | 5, 12, 5, 36, 26, 28,
	10, 17, 11, 10, 4, 3, 35, 20, 31, 5, 12,
	0x8000u | 8, 19, 11, 13, 4, 6, 35, 14, 31,
	3, 16, 20, 5
};

Sint16 poly_00157026[] = {
	3, 30, 2, 0,
	3, 0, 12, 25,
	3, 25, 9, 22,
	3, 25, 34, 9,
	3, 13, 21, 15,
	3, 15, 18, 32,
	9, 6, 13, 23, 15, 8, 32, 29, 33, 9,
	3, 32, 24, 33,
	3, 27, 8, 1,
	3, 25, 22, 0,
	0x8000u | 7, 31, 34, 27, 7, 1, 29, 8,
	4, 29, 9, 7, 34,
	3, 31, 34, 25,
	3, 0, 2, 12,
	6, 23, 8, 6, 27, 14, 31,
	3, 25, 12, 31,
	10, 9, 33, 22, 24, 0, 32, 30, 18, 21, 15
};

NJS_TEX uv_001570D8[] = {
	{ 137, 113 },
	{ 140, 193 },
	{ 246, 198 },
	{ 246, 244 },
	{ 137, 113 },
	{ 68, 73 },
	{ 118, 40 },
	{ 7, 88 },
	{ 68, 216 },
	{ 7, 220 },
	{ 67, 235 },
	{ 7, 228 },
	{ 7, 244 },
	{ 236, 58 },
	{ 118, 123 },
	{ 246, 198 },
	{ 246, 244 },
	{ 246, 198 },
	{ 140, 193 },
	{ 137, 113 },
	{ 68, 216 },
	{ 68, 73 },
	{ 7, 88 },
	{ 25, 34 },
	{ 7, 244 },
	{ 246, 244 },
	{ 67, 235 },
	{ 140, 193 },
	{ 68, 216 },
	{ 118, 40 },
	{ 68, 73 },
	{ 136, 113 },
	{ 68, 216 },
	{ 140, 193 },
	{ 67, 235 },
	{ 246, 244 },
	{ 7, 244 },
	{ 246, 244 },
	{ 7, 235 },
	{ 25, 33 },
	{ 68, 73 },
	{ 7, 88 },
	{ 68, 216 },
	{ 7, 220 },
	{ 67, 235 },
	{ 7, 228 },
	{ 7, 244 },
	{ 246, 198 },
	{ 246, 230 },
	{ 246, 230 }
};

NJS_TEX uv_001571A0[] = {
	{ 234, 111 },
	{ 243, 209 },
	{ 177, 211 },
	{ 204, 232 },
	{ 134, 252 },
	{ 177, 211 },
	{ 134, 252 },
	{ 85, 200 },
	{ 147, 225 },
	{ 34, 253 },
	{ 134, 253 },
	{ 85, 200 },
	{ 146, 7 },
	{ 24, 7 },
	{ 85, 87 },
	{ 84, 87 },
	{ 167, 77 },
	{ 149, 165 },
	{ 234, 111 },
	{ 146, 7 },
	{ 167, 77 },
	{ 85, 87 },
	{ 149, 165 },
	{ 24, 165 },
	{ 104, 181 },
	{ 66, 181 },
	{ 85, 200 },
	{ 149, 165 },
	{ 164, 195 },
	{ 104, 181 },
	{ 177, 211 },
	{ 149, 165 },
	{ 164, 195 },
	{ 177, 211 },
	{ 147, 225 },
	{ 134, 252 },
	{ 204, 232 },
	{ 134, 252 },
	{ 177, 211 },
	{ 147, 225 },
	{ 164, 195 },
	{ 104, 181 },
	{ 149, 165 },
	{ 104, 181 },
	{ 85, 200 },
	{ 147, 225 },
	{ 134, 252 },
	{ 187, 237 },
	{ 151, 252 },
	{ 123, 248 },
	{ 204, 232 },
	{ 243, 209 },
	{ 177, 211 },
	{ 167, 77 },
	{ 149, 165 },
	{ 234, 111 },
	{ 177, 211 },
	{ 243, 209 },
	{ 204, 232 },
	{ 122, 251 },
	{ 109, 247 },
	{ 176, 226 },
	{ 85, 200 },
	{ 104, 181 },
	{ 147, 225 },
	{ 164, 195 },
	{ 177, 211 },
	{ 149, 165 },
	{ 234, 111 },
	{ 167, 77 },
	{ 146, 7 },
	{ 85, 87 }
};

NJS_MESHSET_SADX meshlist_001572C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_00156FB0, NULL, NULL, NULL, uv_001570D8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 17, poly_00157026, NULL, NULL, NULL, uv_001571A0, NULL }
};

NJS_VECTOR vertex_001572F0[] = {
	{ 0.267692f, 1.918929f, -0.607915f },
	{ 0.36783f, 2.123415f, 0.523489f },
	{ 0.275975f, 1.355106f, -1.044038f },
	{ 0.803315f, -0.147695f, 0.807938f },
	{ 0.96205f, 0.663656f, 1.052863f },
	{ -0.000977f, -1.344066f, -0.272496f },
	{ 0.8772759f, 1.352055f, 0.985792f },
	{ 0.183483f, 2.25578f, 0.410404f },
	{ 0.5518709f, 2.101588f, 0.42697f },
	{ 0.340407f, 2.282994f, 0 },
	{ 1.390367f, -0.150674f, 0.334659f },
	{ 1.661991f, 0.660104f, 0.436111f },
	{ 0.132371f, 1.355834f, -0.787379f },
	{ 1.512772f, 1.34883f, 0.408328f },
	{ 0.275975f, 1.355106f, 1.044038f },
	{ 1.024528f, 1.952778f, 0 },
	{ 0.334131f, -1.345766f, 0 },
	{ 1.390367f, -0.150674f, -0.334659f },
	{ 1.088606f, 1.796409f, -0.541612f },
	{ 1.66199f, 0.660104f, -0.436111f },
	{ -0.000977f, -1.344066f, 0.272496f },
	{ 1.512772f, 1.34883f, -0.408328f },
	{ 0.183483f, 2.25578f, -0.410404f },
	{ 1.088606f, 1.796409f, 0.541612f },
	{ 0.36783f, 2.123415f, -0.523489f },
	{ 0.015386f, 2.125203f, -0.324284f },
	{ 0.803315f, -0.147695f, -0.807938f },
	{ 0.267692f, 1.918929f, 0.607915f },
	{ 0.96205f, 0.663656f, -1.052864f },
	{ 0.449472f, 2.248862f, 0.116235f },
	{ 0.8772759f, 1.352055f, -0.985792f },
	{ 0.132371f, 1.355834f, 0.787379f },
	{ 0.5518709f, 2.101588f, -0.42697f },
	{ 0.449472f, 2.248862f, -0.116235f },
	{ 0.015386f, 2.125203f, 0.324284f },
	{ 0.299772f, 0.667016f, 1.115073f },
	{ 0.299772f, 0.667016f, -1.115073f }
};

NJS_VECTOR normal_001574AC[] = {
	{ -0.253116f, 0.481213f, -0.839265f },
	{ 0.249512f, 0.565092f, 0.7863939f },
	{ -0.426578f, 0.311826f, -0.848997f },
	{ 0.307119f, -0.451671f, 0.837658f },
	{ 0.403825f, -0.089535f, 0.910444f },
	{ -0.500443f, -0.69844f, -0.511603f },
	{ 0.347219f, 0.349782f, 0.87011f },
	{ -0.289899f, 0.841677f, 0.455563f },
	{ 0.364419f, 0.805988f, 0.466456f },
	{ -0.057383f, 0.998352f, 0 },
	{ 0.7850569f, -0.499333f, 0.366541f },
	{ 0.91321f, -0.061648f, 0.402798f },
	{ -0.940752f, 0.110968f, -0.320424f },
	{ 0.849692f, 0.389509f, 0.355395f },
	{ -0.426578f, 0.311826f, 0.848997f },
	{ 0.562193f, 0.827006f, 0 },
	{ 0.487085f, -0.873355f, 0 },
	{ 0.7850569f, -0.499333f, -0.366541f },
	{ 0.54273f, 0.684892f, -0.486176f },
	{ 0.91321f, -0.061648f, -0.402798f },
	{ -0.500443f, -0.69844f, 0.511603f },
	{ 0.849692f, 0.389509f, -0.355395f },
	{ -0.289899f, 0.841677f, -0.455563f },
	{ 0.54273f, 0.684892f, 0.486176f },
	{ 0.249512f, 0.565092f, -0.7863939f },
	{ -0.8782459f, 0.410772f, -0.244846f },
	{ 0.307119f, -0.451671f, -0.837658f },
	{ -0.253117f, 0.481213f, 0.839265f },
	{ 0.403825f, -0.089535f, -0.910444f },
	{ 0.53151f, 0.840781f, 0.102876f },
	{ 0.347219f, 0.349782f, -0.87011f },
	{ -0.940752f, 0.110968f, 0.320424f },
	{ 0.364419f, 0.805988f, -0.466457f },
	{ 0.53151f, 0.840781f, -0.102876f },
	{ -0.8782459f, 0.410772f, 0.244846f },
	{ -0.454103f, -0.093949f, 0.885982f },
	{ -0.454103f, -0.093949f, -0.885982f }
};

NJS_MODEL_SADX attach_00157668 = { vertex_001572F0, normal_001574AC, LengthOfArray(vertex_001572F0), meshlist_001572C0, matlist_00156F88, LengthOfArray(meshlist_001572C0), LengthOfArray(matlist_00156F88),{ 0.830507f, 0.468614f, 0 }, 1.995831f, NULL };

NJS_OBJECT object_00157690 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00157668, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00156F54 };

NJS_OBJECT object_001576C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 3.043363f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00157690 };

NJS_OBJECT object_001576F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x4034, 1, 1, 1, &object_001576C4, NULL };

NJS_OBJECT object_0015772C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0x4000, 0, 1, 1, 1, &object_001576F8, NULL };

NJS_OBJECT object_00157760 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0015772C, NULL };


//GOMA animation

NJS_MKEY_F _158830_0_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_0_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_1_pos[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0.028512f, -0.00316f },
	{ 2, 0, 0.09276699f, -0.008425999f },
	{ 3, 0, 0.160846f, -0.00948f },
	{ 4, 0, 0.200828f, 0 },
	{ 5, 0, 0.212309f, 0.02265f },
	{ 6, 0, 0.216803f, 0.053948f },
	{ 7, 0, 0.215277f, 0.089472f },
	{ 8, 0, 0.208693f, 0.124799f },
	{ 9, 0, 0.198015f, 0.155507f },
	{ 10, 0, 0.184207f, 0.177175f },
	{ 11, 0, 0.168233f, 0.18538f },
	{ 12, 0, 0.140026f, 0.166101f },
	{ 13, 0, 0.09696499f, 0.120126f },
	{ 14, 0, 0.051185f, 0.065254f },
	{ 15, 0, 0.014819f, 0.01928f },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_1_rot[] = {
	{ 0, 0, 0x3FFF, 0 },
	{ 16, 0, 0x3FFF, 0 }
};

NJS_MKEY_F _158830_2_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_2_rot[] = {
	{ 0, 0, 0, 0x4034 },
	{ 1, 0, 0, 0x3EF6 },
	{ 2, 0, 0, 0x3C46 },
	{ 3, 0, 0, 0x39B8 },
	{ 4, 0, 0, 0x38DF },
	{ 5, 0, 0, 0x39E9 },
	{ 6, 0, 0, 0x3BC3 },
	{ 7, 0, 0, 0x3E1B },
	{ 8, 0, 0, 0x409F },
	{ 9, 0, 0, 0x42FD },
	{ 10, 0, 0, 0x44E4 },
	{ 11, 0, 0, 0x4600 },
	{ 12, 0, 0, 0x45CA },
	{ 13, 0, 0, 0x4467 },
	{ 14, 0, 0, 0x428A },
	{ 15, 0, 0, 0x40E8 },
	{ 16, 0, 0, 0x4034 }
};

NJS_MKEY_F _158830_3_pos[] = {
	{ 0, 3.043363f, 0, 0 },
	{ 16, 3.043363f, 0, 0 }
};

NJS_MKEY_A _158830_3_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_4_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_4_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_5_pos[] = {
	{ 0, 0.403036f, 0.728202f, 0.60386f },
	{ 16, 0.403036f, 0.728202f, 0.60386f }
};

NJS_MKEY_A _158830_5_rot[] = {
	{ 0, 0xFFFF9FE6, 0xFFFFC001, 0xFFFFDFE6 },
	{ 16, 0xFFFF9FE6, 0xFFFFC001, 0xFFFFDFE6 }
};

NJS_MKEY_F _158830_6_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_6_rot[] = {
	{ 0, 0, 0xAD6, 0xFFFFED1B },
	{ 1, 0, 0xD26, 0xFFFFEE35 },
	{ 2, 0, 0x11E3, 0xFFFFF18E },
	{ 3, 0, 0x15DA, 0xFFFFF6D1 },
	{ 4, 0, 0x16D8, 0xFFFFFC64 },
	{ 5, 0, 0x1507, 0xB9 },
	{ 6, 0, 0xF97, 0x42E },
	{ 7, 0, 0x8B1, 0x57D },
	{ 8, 0, 0x380, 0x4DA },
	{ 9, 0, 0x162, 0x3CB },
	{ 10, 0, 0xD3, 0x1E7 },
	{ 11, 0, 0x182, 0xFFFFFEFA },
	{ 12, 0, 0x322, 0xFFFFFABD },
	{ 13, 0, 0x566, 0xFFFFF5C9 },
	{ 14, 0, 0x7E9, 0xFFFFF151 },
	{ 15, 0, 0x9FB, 0xFFFFEE3D },
	{ 16, 0, 0xAD6, 0xFFFFED1B }
};

NJS_MKEY_F _158830_7_pos[] = {
	{ 0, 1.450049f, 0, 0 },
	{ 16, 1.450049f, 0, 0 }
};

NJS_MKEY_A _158830_7_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_8_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_8_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_9_pos[] = {
	{ 0, 0.403036f, 0.728202f, -0.60386f },
	{ 16, 0.403036f, 0.728202f, -0.60386f }
};

NJS_MKEY_A _158830_9_rot[] = {
	{ 0, 0x601A, 0x3FFF, 0xFFFFDFE6 },
	{ 16, 0x601A, 0x3FFF, 0xFFFFDFE6 }
};

NJS_MKEY_F _158830_10_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_10_rot[] = {
	{ 0, 0, 0xFFFF8AD7, 0x6D19 },
	{ 1, 0, 0xFFFF8D28, 0x6E33 },
	{ 2, 0, 0xFFFF91E5, 0x718D },
	{ 3, 0, 0xFFFF95DE, 0x76D0 },
	{ 4, 0, 0xFFFF96DB, 0x7C62 },
	{ 5, 0, 0xFFFF9509, 0x80B8 },
	{ 6, 0, 0xFFFF8F80, 0x842A },
	{ 7, 0, 0xFFFF8879, 0x8579 },
	{ 8, 0, 0xFFFF835D, 0x84DA },
	{ 9, 0, 0xFFFF8169, 0x83CA },
	{ 10, 0, 0xFFFF80EE, 0x81E3 },
	{ 11, 0, 0xFFFF81A4, 0x7EF3 },
	{ 12, 0, 0xFFFF8342, 0x7AB7 },
	{ 13, 0, 0xFFFF857E, 0x75C5 },
	{ 14, 0, 0xFFFF87F6, 0x714F },
	{ 15, 0, 0xFFFF8A00, 0x6E3C },
	{ 16, 0, 0xFFFF8AD7, 0x6D19 }
};

NJS_MKEY_F _158830_11_pos[] = {
	{ 0, 1.450049f, 0, 0 },
	{ 16, 1.450049f, 0, 0 }
};

NJS_MKEY_A _158830_11_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_12_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_12_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_13_pos[] = {
	{ 0, 0.278968f, -1.332942f, 0.126363f },
	{ 16, 0.278968f, -1.332942f, 0.126363f }
};

NJS_MKEY_A _158830_13_rot[] = {
	{ 0, 0xFFFF9FE6, 0xFFFFC001, 0xFFFFDFE6 },
	{ 16, 0xFFFF9FE6, 0xFFFFC001, 0xFFFFDFE6 }
};

NJS_MKEY_F _158830_14_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_14_rot[] = {
	{ 0, 0, 0x5B6, 0x27CE },
	{ 1, 0, 0x3DB, 0x279D },
	{ 2, 0, 0xFFFFFFE3, 0x272F },
	{ 3, 0, 0xFFFFFC41, 0x26CE },
	{ 4, 0, 0xFFFFFB76, 0x26EE },
	{ 5, 0, 0xFFFFFE1A, 0x27A4 },
	{ 6, 0, 0x284, 0x2886 },
	{ 7, 0, 0x7BD, 0x295C },
	{ 8, 0, 0xCD4, 0x2A0A },
	{ 9, 0, 0x1100, 0x2A92 },
	{ 10, 0, 0x13A6, 0x2B09 },
	{ 11, 0, 0x1434, 0x2B8D },
	{ 12, 0, 0xBF0, 0x2DCA },
	{ 13, 0, 0x12D, 0x2EFE },
	{ 14, 0, 0xFFFFFFEB, 0x2CA5 },
	{ 15, 0, 0x344, 0x2967 },
	{ 16, 0, 0x5B6, 0x27CE }
};

NJS_MKEY_F _158830_15_pos[] = {
	{ 0, 0.981858f, 0, 0 },
	{ 16, 0.981858f, 0, 0 }
};

NJS_MKEY_A _158830_15_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_16_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_16_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_17_pos[] = {
	{ 0, 0.336866f, 2.291382f, 0 },
	{ 16, 0.336866f, 2.291382f, 0 }
};

NJS_MKEY_A _158830_17_rot[] = {
	{ 0, 0x201A, 0x3FFF, 0xFFFFDFE6 },
	{ 16, 0x201A, 0x3FFF, 0xFFFFDFE6 }
};

NJS_MKEY_F _158830_18_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_18_rot[] = {
	{ 0, 0x7FFF, 0, 0x71 },
	{ 1, 0x7FFF, 0xA2, 0xFFFFFB9F },
	{ 2, 0x7FFF, 0x13E, 0xFFFFF1C0 },
	{ 3, 0x7FFF, 0xE1, 0xFFFFE9D0 },
	{ 4, 0x7FFF, 0x46, 0xFFFFE7DA },
	{ 5, 0x7FFF, 0xFFFFFF91, 0xFFFFEB2D },
	{ 6, 0x7FFF, 0xFFFFFE24, 0xFFFFF0E5 },
	{ 7, 0x7FFF, 0xFFFFFBD7, 0xFFFFF824 },
	{ 8, 0x7FFF, 0xFFFFF904, 0xFFFFFF97 },
	{ 9, 0x7FFF, 0xFFFFF65C, 0x607 },
	{ 10, 0x7FFF, 0xFFFFF473, 0xA8B },
	{ 11, 0x7FFF, 0xFFFFF39E, 0xCB4 },
	{ 12, 0x7FFF, 0xFFFFF4AB, 0xC37 },
	{ 13, 0x7FFF, 0xFFFFF799, 0x997 },
	{ 14, 0x7FFF, 0xFFFFFB5E, 0x5C1 },
	{ 15, 0x7FFF, 0xFFFFFEA2, 0x216 },
	{ 16, 0x7FFF, 0, 0x71 }
};

NJS_MKEY_F _158830_19_pos[] = {
	{ 0, 0.749528f, 0, 0 },
	{ 16, 0.749528f, 0, 0 }
};

NJS_MKEY_A _158830_19_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_20_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_20_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_21_pos[] = {
	{ 0, 0.336866f, 2.291382f, 0 },
	{ 16, 0.336866f, 2.291382f, 0 }
};

NJS_MKEY_A _158830_21_rot[] = {
	{ 0, 0xFFFFDFE6, 0xFFFFC001, 0xFFFFDFE6 },
	{ 16, 0xFFFFDFE6, 0xFFFFC001, 0xFFFFDFE6 }
};

NJS_MKEY_F _158830_22_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_22_rot[] = {
	{ 0, 0, 0, 0x71 },
	{ 1, 0, 0xFFFFFF5E, 0xFFFFFB9F },
	{ 2, 0, 0xFFFFFEC2, 0xFFFFF1C0 },
	{ 3, 0, 0xFFFFFF1F, 0xFFFFE9D0 },
	{ 4, 0, 0xFFFFFFBA, 0xFFFFE7DA },
	{ 5, 0, 0x6F, 0xFFFFEB2D },
	{ 6, 0, 0x1DC, 0xFFFFF0E5 },
	{ 7, 0, 0x429, 0xFFFFF824 },
	{ 8, 0, 0x6FC, 0xFFFFFF97 },
	{ 9, 0, 0x9A4, 0x607 },
	{ 10, 0, 0xB8D, 0xA8B },
	{ 11, 0, 0xC62, 0xCB4 },
	{ 12, 0, 0xB55, 0xC37 },
	{ 13, 0, 0x867, 0x997 },
	{ 14, 0, 0x4A2, 0x5C1 },
	{ 15, 0, 0x15E, 0x216 },
	{ 16, 0, 0, 0x71 }
};

NJS_MKEY_F _158830_23_pos[] = {
	{ 0, 0.749528f, 0, 0 },
	{ 16, 0.749528f, 0, 0 }
};

NJS_MKEY_A _158830_23_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_24_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_24_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_25_pos[] = {
	{ 0, 0.278968f, -1.332942f, -0.126362f },
	{ 16, 0.278968f, -1.332942f, -0.126362f }
};

NJS_MKEY_A _158830_25_rot[] = {
	{ 0, 0x601A, 0x3FFF, 0xFFFFDFE6 },
	{ 16, 0x601A, 0x3FFF, 0xFFFFDFE6 }
};

NJS_MKEY_F _158830_26_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_26_rot[] = {
	{ 0, 0x7FFF, 0xFFFFFA4A, 0x27CE },
	{ 1, 0x7FFF, 0xFFFFFC25, 0x279D },
	{ 2, 0x7FFF, 0x1D, 0x272F },
	{ 3, 0x7FFF, 0x3BF, 0x26CE },
	{ 4, 0x7FFF, 0x48A, 0x26EE },
	{ 5, 0x7FFF, 0x1E6, 0x27A4 },
	{ 6, 0x7FFF, 0xFFFFFD7C, 0x2886 },
	{ 7, 0x7FFF, 0xFFFFF843, 0x295C },
	{ 8, 0x7FFF, 0xFFFFF32C, 0x2A0A },
	{ 9, 0x7FFF, 0xFFFFEF00, 0x2A92 },
	{ 10, 0x7FFF, 0xFFFFEC5A, 0x2B09 },
	{ 11, 0x7FFF, 0xFFFFEBCC, 0x2B8D },
	{ 12, 0x7FFF, 0xFFFFF410, 0x2DCA },
	{ 13, 0x7FFF, 0xFFFFFED3, 0x2EFE },
	{ 14, 0x7FFF, 0x15, 0x2CA5 },
	{ 15, 0x7FFF, 0xFFFFFCBC, 0x2967 },
	{ 16, 0x7FFF, 0xFFFFFA4A, 0x27CE }
};

NJS_MKEY_F _158830_27_pos[] = {
	{ 0, 0.981858f, 0, 0 },
	{ 16, 0.981858f, 0, 0 }
};

NJS_MKEY_A _158830_27_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _158830_28_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _158830_28_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MDATA2 _158830_mdat[] = {
	{ _158830_0_pos, _158830_0_rot, LengthOfArray(_158830_0_pos), LengthOfArray(_158830_0_rot) },
	{ _158830_1_pos, _158830_1_rot, LengthOfArray(_158830_1_pos), LengthOfArray(_158830_1_rot) },
	{ _158830_2_pos, _158830_2_rot, LengthOfArray(_158830_2_pos), LengthOfArray(_158830_2_rot) },
	{ _158830_3_pos, _158830_3_rot, LengthOfArray(_158830_3_pos), LengthOfArray(_158830_3_rot) },
	{ _158830_4_pos, _158830_4_rot, LengthOfArray(_158830_4_pos), LengthOfArray(_158830_4_rot) },
	{ _158830_5_pos, _158830_5_rot, LengthOfArray(_158830_5_pos), LengthOfArray(_158830_5_rot) },
	{ _158830_6_pos, _158830_6_rot, LengthOfArray(_158830_6_pos), LengthOfArray(_158830_6_rot) },
	{ _158830_7_pos, _158830_7_rot, LengthOfArray(_158830_7_pos), LengthOfArray(_158830_7_rot) },
	{ _158830_8_pos, _158830_8_rot, LengthOfArray(_158830_8_pos), LengthOfArray(_158830_8_rot) },
	{ _158830_9_pos, _158830_9_rot, LengthOfArray(_158830_9_pos), LengthOfArray(_158830_9_rot) },
	{ _158830_10_pos, _158830_10_rot, LengthOfArray(_158830_10_pos), LengthOfArray(_158830_10_rot) },
	{ _158830_11_pos, _158830_11_rot, LengthOfArray(_158830_11_pos), LengthOfArray(_158830_11_rot) },
	{ _158830_12_pos, _158830_12_rot, LengthOfArray(_158830_12_pos), LengthOfArray(_158830_12_rot) },
	{ _158830_13_pos, _158830_13_rot, LengthOfArray(_158830_13_pos), LengthOfArray(_158830_13_rot) },
	{ _158830_14_pos, _158830_14_rot, LengthOfArray(_158830_14_pos), LengthOfArray(_158830_14_rot) },
	{ _158830_15_pos, _158830_15_rot, LengthOfArray(_158830_15_pos), LengthOfArray(_158830_15_rot) },
	{ _158830_16_pos, _158830_16_rot, LengthOfArray(_158830_16_pos), LengthOfArray(_158830_16_rot) },
	{ _158830_17_pos, _158830_17_rot, LengthOfArray(_158830_17_pos), LengthOfArray(_158830_17_rot) },
	{ _158830_18_pos, _158830_18_rot, LengthOfArray(_158830_18_pos), LengthOfArray(_158830_18_rot) },
	{ _158830_19_pos, _158830_19_rot, LengthOfArray(_158830_19_pos), LengthOfArray(_158830_19_rot) },
	{ _158830_20_pos, _158830_20_rot, LengthOfArray(_158830_20_pos), LengthOfArray(_158830_20_rot) },
	{ _158830_21_pos, _158830_21_rot, LengthOfArray(_158830_21_pos), LengthOfArray(_158830_21_rot) },
	{ _158830_22_pos, _158830_22_rot, LengthOfArray(_158830_22_pos), LengthOfArray(_158830_22_rot) },
	{ _158830_23_pos, _158830_23_rot, LengthOfArray(_158830_23_pos), LengthOfArray(_158830_23_rot) },
	{ _158830_24_pos, _158830_24_rot, LengthOfArray(_158830_24_pos), LengthOfArray(_158830_24_rot) },
	{ _158830_25_pos, _158830_25_rot, LengthOfArray(_158830_25_pos), LengthOfArray(_158830_25_rot) },
	{ _158830_26_pos, _158830_26_rot, LengthOfArray(_158830_26_pos), LengthOfArray(_158830_26_rot) },
	{ _158830_27_pos, _158830_27_rot, LengthOfArray(_158830_27_pos), LengthOfArray(_158830_27_rot) },
	{ _158830_28_pos, _158830_28_rot, LengthOfArray(_158830_28_pos), LengthOfArray(_158830_28_rot) }
};

NJS_MOTION _158830 = { _158830_mdat, 17, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action__158830 = { &object_00157760, &_158830 };

//RAKO


NJS_MATERIAL matlist_0017B61C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017B630[] = {
	4, 1, 2, 0, 3
};

NJS_TEX uv_0017B63C[] = {
	{ 211, 253 },
	{ 174, 200 },
	{ 245, 141 },
	{ 126, 142 }
};

NJS_MESHSET_SADX meshlist_0017B64C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0017B630, NULL, NULL, NULL, uv_0017B63C, NULL }
};

NJS_VECTOR vertex_0017B664[] = {
	{ 0.117849f, -1.7358f, -2.247474f },
	{ 0.108776f, -0.284372f, -1.370387f },
	{ -0.114409f, -0.818999f, -1.217988f },
	{ 0.366272f, -1.685664f, -0.08924799f }
};

NJS_VECTOR normal_0017B694[] = {
	{ 0.980674f, 0.188137f, 0.053703f },
	{ 0.874937f, -0.246427f, 0.416845f },
	{ 0.982174f, 0.043465f, 0.182878f },
	{ 0.924598f, 0.363215f, -0.114863f }
};

NJS_MODEL_SADX attach_0017B6C4 = { vertex_0017B664, normal_0017B694, LengthOfArray(vertex_0017B664), meshlist_0017B64C, matlist_0017B61C, LengthOfArray(meshlist_0017B64C), LengthOfArray(matlist_0017B61C),{ 0.125931f, -1.010086f, -1.168361f }, 1.152769f, NULL };

NJS_OBJECT object_0017B6EC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_0017B6C4, 0, 0, 0, 0, 0, 0, 1, 1, 0.83f, NULL, NULL };

NJS_MATERIAL matlist_0017B720[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017B734[] = {
	3, 0, 1, 2
};

NJS_TEX uv_0017B73C[] = {
	{ 71, 30 },
	{ 248, 11 },
	{ 130, 122 }
};

NJS_MESHSET_SADX meshlist_0017B748[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0017B734, NULL, NULL, NULL, uv_0017B73C, NULL }
};

NJS_VECTOR vertex_0017B760[] = {
	{ 0.174932f, 0.169363f, -0.020528f },
	{ 1.852414f, 0.259717f, 0.197949f },
	{ 0.410902f, -0.84675f, 0.499808f }
};

NJS_VECTOR normal_0017B784[] = {
	{ 0.139375f, -0.425516f, -0.894154f },
	{ 0.139375f, -0.425516f, -0.894154f },
	{ 0.139375f, -0.425516f, -0.894154f }
};

NJS_MODEL_SADX attach_0017B7A8 = { vertex_0017B760, normal_0017B784, LengthOfArray(vertex_0017B760), meshlist_0017B748, matlist_0017B720, LengthOfArray(meshlist_0017B748), LengthOfArray(matlist_0017B720),{ 1.013673f, -0.293517f, 0.23964f }, 1.00424f, NULL };

NJS_OBJECT object_0017B7D0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017B7A8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0017B804 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.779967f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017B7D0 };

NJS_OBJECT object_0017B838 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFFF50, 1, 1, 1, &object_0017B804, NULL };

NJS_OBJECT object_0017B86C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.830964f, 0.016073f, -0.062815f, 0x3FDF, 0x4000, 0xFFFFC021, 1, 1, 1, &object_0017B838, &object_0017B6EC };

NJS_MATERIAL matlist_0017B8A0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017B8B4[] = {
	3, 2, 1, 0
};

NJS_TEX uv_0017B8BC[] = {
	{ 130, 122 },
	{ 248, 12 },
	{ 71, 29 }
};

NJS_MESHSET_SADX meshlist_0017B8C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0017B8B4, NULL, NULL, NULL, uv_0017B8BC, NULL }
};

NJS_VECTOR vertex_0017B8E0[] = {
	{ 0.174932f, 0.169363f, 0.020528f },
	{ 1.870114f, 0.260016f, -0.197949f },
	{ 0.410902f, -0.84675f, -0.499808f }
};

NJS_VECTOR normal_0017B904[] = {
	{ 0.138019f, -0.425856f, 0.894202f },
	{ 0.138019f, -0.425856f, 0.894202f },
	{ 0.138019f, -0.425856f, 0.894202f }
};

NJS_MODEL_SADX attach_0017B928 = { vertex_0017B8E0, normal_0017B904, LengthOfArray(vertex_0017B8E0), meshlist_0017B8C8, matlist_0017B8A0, LengthOfArray(meshlist_0017B8C8), LengthOfArray(matlist_0017B8A0),{ 1.022523f, -0.293367f, -0.23964f }, 1.011725f, NULL };

NJS_OBJECT object_0017B950 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017B928, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0017B984 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.779967f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017B950 };

NJS_OBJECT object_0017B9B8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFFF50, 1, 1, 1, &object_0017B984, NULL };

NJS_OBJECT object_0017B9EC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.830964f, 0.016073f, 0.062815f, 0xFFFFC021, 0xFFFFC000, 0xFFFFC021, 1, 1, 1, &object_0017B9B8, &object_0017B86C };

NJS_MATERIAL matlist_0017BA20[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BA34[] = {
	4, 1, 0, 2, 3
};

NJS_TEX uv_0017BA40[] = {
	{ 209, 254 },
	{ 247, 141 },
	{ 173, 198 },
	{ 126, 142 }
};

NJS_MESHSET_SADX meshlist_0017BA50[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0017BA34, NULL, NULL, NULL, uv_0017BA40, NULL }
};

NJS_VECTOR vertex_0017BA68[] = {
	{ 0.117851f, -1.7358f, 2.247474f },
	{ 0.108776f, -0.284372f, 1.370387f },
	{ -0.114409f, -0.818999f, 1.217988f },
	{ 0.366274f, -1.685664f, 0.08924799f }
};

NJS_VECTOR normal_0017BA98[] = {
	{ 0.980673f, 0.188137f, -0.053702f },
	{ 0.874937f, -0.246426f, -0.416844f },
	{ 0.982174f, 0.043466f, -0.182877f },
	{ 0.924598f, 0.363216f, 0.114864f }
};

NJS_MODEL_SADX attach_0017BAC8 = { vertex_0017BA68, normal_0017BA98, LengthOfArray(vertex_0017BA68), meshlist_0017BA50, matlist_0017BA20, LengthOfArray(meshlist_0017BA50), LengthOfArray(matlist_0017BA20),{ 0.125933f, -1.010086f, 1.168361f }, 1.152769f, NULL };

NJS_OBJECT object_0017BAF0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_0017BAC8, 0, 0, 0, 0, 0, 0, 1, 1, 0.83f, NULL, &object_0017B9EC };

NJS_MATERIAL matlist_0017BB24[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BB38[] = {
	7, 6, 10, 2, 0, 4, 14, 12,
	18, 12, 13, 4, 8, 2, 7, 6, 17, 10, 11, 14, 15, 12, 9, 13, 16, 7, 1,
	3, 14, 0, 10,
	3, 1, 16, 5,
	5, 5, 3, 1, 17, 7,
	0x8000u | 7, 17, 11, 3, 15, 5, 9, 16,
	3, 13, 7, 8
};

NJS_TEX uv_0017BBA4[] = {
	{ 106, 41 },
	{ 188, 81 },
	{ 131, 9 },
	{ 240, 51 },
	{ 188, 81 },
	{ 247, 249 },
	{ 220, 232 },
	{ 220, 232 },
	{ 115, 180 },
	{ 188, 81 },
	{ 106, 41 },
	{ 131, 9 },
	{ 20, 42 },
	{ 106, 41 },
	{ 115, 180 },
	{ 188, 81 },
	{ 220, 232 },
	{ 247, 249 },
	{ 22, 250 },
	{ 220, 232 },
	{ 86, 219 },
	{ 115, 180 },
	{ 39, 171 },
	{ 20, 42 },
	{ 1, 172 },
	{ 247, 249 },
	{ 240, 51 },
	{ 188, 81 },
	{ 39, 171 },
	{ 1, 172 },
	{ 21, 194 },
	{ 21, 194 },
	{ 86, 219 },
	{ 39, 171 },
	{ 115, 180 },
	{ 20, 42 },
	{ 115, 180 },
	{ 220, 232 },
	{ 86, 219 },
	{ 22, 250 },
	{ 21, 194 },
	{ 86, 219 },
	{ 39, 171 },
	{ 115, 180 },
	{ 20, 42 },
	{ 106, 41 }
};

NJS_MESHSET_SADX meshlist_0017BC5C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_0017BB38, NULL, NULL, NULL, uv_0017BBA4, NULL }
};

NJS_VECTOR vertex_0017BC74[] = {
	{ -0.60136f, -1.252724f, 0 },
	{ 2.004097f, -0.240387f, 0.36531f },
	{ 0.170026f, -1.903572f, 0.000001f },
	{ 1.327226f, 0.468225f, 0.821625f },
	{ 0.07097f, -0.846764f, -1.669904f },
	{ 1.871383f, 0.038111f, 0.000001f },
	{ 1.001136f, -1.553605f, 1.283038f },
	{ 1.494995f, -1.607432f, 0.000001f },
	{ 1.001136f, -1.553606f, -1.291894f },
	{ 1.327226f, 0.468224f, -0.821624f },
	{ 0.07096899f, -0.846764f, 1.669904f },
	{ 0.322821f, 0.041919f, 1.643249f },
	{ 0.322822f, 0.041919f, -1.643248f },
	{ 1.515672f, -0.011856f, -1.391822f },
	{ -0.887167f, 0.021608f, 0 },
	{ 0.692084f, 0.454612f, 0 },
	{ 2.004097f, -0.240387f, -0.365309f },
	{ 1.515672f, -0.011855f, 1.391824f }
};

NJS_VECTOR normal_0017BD4C[] = {
	{ -0.85506f, -0.518529f, 0 },
	{ 0.966058f, 0.061072f, 0.251003f },
	{ -0.312592f, -0.949887f, 0.000419f },
	{ 0.313303f, 0.927133f, 0.205585f },
	{ -0.439856f, -0.272832f, -0.855622f },
	{ 0.721268f, 0.692656f, 0 },
	{ 0.319933f, -0.700928f, 0.637451f },
	{ 0.6914f, -0.722472f, 0.000537f },
	{ 0.318973f, -0.699396f, -0.63961f },
	{ 0.313303f, 0.927133f, -0.205585f },
	{ -0.438223f, -0.274251f, 0.856006f },
	{ -0.258418f, 0.545672f, 0.797159f },
	{ -0.258417f, 0.545672f, -0.797159f },
	{ 0.63537f, 0.269975f, -0.7234769f },
	{ -0.8847089f, 0.466144f, 0 },
	{ -0.087298f, 0.996182f, 0 },
	{ 0.966058f, 0.061072f, -0.251003f },
	{ 0.635245f, 0.269044f, 0.723933f }
};

NJS_MODEL_SADX attach_0017BE24 = { vertex_0017BC74, normal_0017BD4C, LengthOfArray(vertex_0017BC74), meshlist_0017BC5C, matlist_0017BB24, LengthOfArray(meshlist_0017BC5C), LengthOfArray(matlist_0017BB24),{ 0.5584649f, -0.7176729f, 0 }, 1.869815f, NULL };

NJS_OBJECT object_0017BE4C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_0017BE24, 0, 0, 0, 0, 0, 0, 1, 1, 0.83f, NULL, &object_0017BAF0 };

NJS_OBJECT object_0017BE80 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 3.625491f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017BE4C };

NJS_OBJECT object_0017BEB4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x7FBE, 1, 1, 1, &object_0017BE80, NULL };

NJS_OBJECT object_0017BEE8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.367851f, 0.798504f, 0, 0, 0, 0xFFFFC000, 1, 1, 1, &object_0017BEB4, NULL };

NJS_MATERIAL matlist_0017BF1C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BF30[] = {
	3, 5, 1, 0,
	7, 6, 0, 2, 1, 3, 4, 6,
	3, 6, 2, 3,
	5, 0, 6, 5, 4, 1
};

NJS_TEX uv_0017BF5C[] = {
	{ 61, 161 },
	{ 114, 193 },
	{ 60, 225 },
	{ 120, 208 },
	{ 181, 251 },
	{ 180, 204 },
	{ 243, 203 },
	{ 181, 149 },
	{ 182, 13 },
	{ 120, 208 },
	{ 120, 208 },
	{ 180, 204 },
	{ 181, 149 },
	{ 60, 225 },
	{ 8, 192 },
	{ 61, 161 },
	{ 60, 34 },
	{ 114, 193 }
};

NJS_MESHSET_SADX meshlist_0017BFA4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0017BF30, NULL, NULL, NULL, uv_0017BF5C, NULL }
};

NJS_VECTOR vertex_0017BFBC[] = {
	{ 1.586265f, -0.013281f, -0.518343f },
	{ 1.46209f, 0.4226f, -0.449925f },
	{ 1.62267f, 0.091166f, -0.180691f },
	{ 1.046631f, 0.037309f, 0.03399f },
	{ -0.06945299f, 0.046582f, 0.008118f },
	{ 1.112865f, 0.09319799f, -0.461281f },
	{ 1.291547f, -0.343162f, -0.217933f }
};

NJS_VECTOR normal_0017C010[] = {
	{ 0.622724f, -0.311776f, -0.7176419f },
	{ 0.318673f, 0.8857729f, -0.337421f },
	{ 0.83084f, 0.09940699f, 0.547561f },
	{ 0.095102f, 0.141098f, 0.9854169f },
	{ -0.981887f, 0.012372f, 0.189062f },
	{ -0.301479f, -0.08553f, -0.9496289f },
	{ 0.176329f, -0.982331f, 0.062722f }
};

NJS_MODEL_SADX attach_0017C064 = { vertex_0017BFBC, normal_0017C010, LengthOfArray(vertex_0017BFBC), meshlist_0017BFA4, matlist_0017BF1C, LengthOfArray(meshlist_0017BFA4), LengthOfArray(matlist_0017BF1C),{ 0.7766089f, 0.039719f, -0.242176f }, 0.928665f, NULL };

NJS_OBJECT object_0017C08C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C064, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0017C0C0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.714142f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017C08C };

NJS_OBJECT object_0017C0F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFB1D5, 1, 1, 1, &object_0017C0C0, NULL };

NJS_OBJECT object_0017C128 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.261596f, 0.6379769f, 0.6578799f, 0, 0, 0xFFFFC000, 1, 1, 1, &object_0017C0F4, &object_0017BEE8 };

NJS_MATERIAL matlist_0017C15C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C170[] = {
	3, 0, 1, 5,
	0x8000u | 7, 6, 0, 2, 1, 3, 4, 6,
	3, 3, 2, 6,
	0x8000u | 5, 0, 6, 5, 4, 1
};

NJS_TEX uv_0017C19C[] = {
	{ 60, 225 },
	{ 114, 193 },
	{ 61, 161 },
	{ 120, 208 },
	{ 181, 251 },
	{ 180, 204 },
	{ 243, 203 },
	{ 181, 149 },
	{ 182, 13 },
	{ 120, 208 },
	{ 181, 149 },
	{ 180, 204 },
	{ 120, 208 },
	{ 60, 225 },
	{ 8, 192 },
	{ 61, 161 },
	{ 60, 34 },
	{ 114, 193 }
};

NJS_MESHSET_SADX meshlist_0017C1E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0017C170, NULL, NULL, NULL, uv_0017C19C, NULL }
};

NJS_VECTOR vertex_0017C1FC[] = {
	{ 1.586265f, -0.013281f, 0.518343f },
	{ 1.46209f, 0.4226f, 0.449925f },
	{ 1.62267f, 0.091166f, 0.180691f },
	{ 1.046631f, 0.037309f, -0.03399f },
	{ -0.06945299f, 0.046583f, -0.008118f },
	{ 1.112865f, 0.09319799f, 0.461281f },
	{ 1.291547f, -0.343162f, 0.217933f }
};

NJS_VECTOR normal_0017C250[] = {
	{ 0.622724f, -0.311776f, 0.7176419f },
	{ 0.318673f, 0.8857729f, 0.337422f },
	{ 0.83084f, 0.09940699f, -0.547561f },
	{ 0.095102f, 0.141099f, -0.9854169f },
	{ -0.981887f, 0.012373f, -0.189061f },
	{ -0.301479f, -0.08553f, 0.9496289f },
	{ 0.176329f, -0.982331f, -0.062723f }
};

NJS_MODEL_SADX attach_0017C2A4 = { vertex_0017C1FC, normal_0017C250, LengthOfArray(vertex_0017C1FC), meshlist_0017C1E4, matlist_0017C15C, LengthOfArray(meshlist_0017C1E4), LengthOfArray(matlist_0017C15C),{ 0.7766089f, 0.039719f, 0.242176f }, 0.928665f, NULL };

NJS_OBJECT object_0017C2CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C2A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017C300[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C314[] = {
	3, 2, 0, 1
};

NJS_TEX uv_0017C31C[] = {
	{ 86, 111 },
	{ 0, 254 },
	{ 172, 253 }
};

NJS_MESHSET_SADX meshlist_0017C328[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0017C314, NULL, NULL, NULL, uv_0017C31C, NULL }
};

NJS_VECTOR vertex_0017C340[] = {
	{ 0.636899f, -0.82372f, 0.251167f },
	{ 2.048318f, -0.470231f, 0.352263f },
	{ 1.068179f, 0.552964f, 0.725794f }
};

NJS_VECTOR normal_0017C364[] = {
	{ 0.015074f, -0.330115f, 0.94382f },
	{ 0.015074f, -0.330115f, 0.94382f },
	{ 0.015074f, -0.330115f, 0.94382f }
};

NJS_MODEL_SADX attach_0017C388 = { vertex_0017C340, normal_0017C364, LengthOfArray(vertex_0017C340), meshlist_0017C328, matlist_0017C300, LengthOfArray(meshlist_0017C328), LengthOfArray(matlist_0017C300),{ 1.342608f, -0.135378f, 0.488481f }, 0.98582f, NULL };

NJS_OBJECT object_0017C3B0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C388, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017C2CC };

NJS_OBJECT object_0017C3E4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.714142f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017C3B0 };

NJS_OBJECT object_0017C418 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFB1D5, 1, 1, 1, &object_0017C3E4, NULL };

NJS_OBJECT object_0017C44C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.261596f, 0.6379769f, -0.6578799f, 0, 0, 0xFFFFC000, 1, 1, 1, &object_0017C418, &object_0017C128 };

NJS_MATERIAL matlist_0017C480[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C494[] = {
	3, 0, 1, 2,
	0x8000u | 5, 6, 3, 4, 5, 6,
	3, 3, 5, 6
};

NJS_TEX uv_0017C4B0[] = {
	{ 58, 17 },
	{ 100, 58 },
	{ 20, 58 },
	{ 245, 18 },
	{ 242, 223 },
	{ 191, 15 },
	{ 132, 222 },
	{ 119, 18 },
	{ 10, 212 },
	{ 112, 212 },
	{ 62, 33 }
};

NJS_MESHSET_SADX meshlist_0017C4DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0017C494, NULL, NULL, NULL, uv_0017C4B0, NULL }
};

NJS_VECTOR vertex_0017C4F4[] = {
	{ 1.520769f, 0.028847f, 0.799275f },
	{ 0.912182f, 0.24763f, 0.884025f },
	{ 1.174288f, 0.169057f, 0.279854f },
	{ 0.912182f, 0.24763f, 0.884025f },
	{ 0.334389f, -0.176471f, -0.01268f },
	{ 1.174288f, 0.169057f, 0.279854f },
	{ -0.328252f, 0.428324f, -0.217936f }
};

NJS_VECTOR normal_0017C548[] = {
	{ -0.341376f, -0.93957f, -0.025907f },
	{ -0.341376f, -0.93957f, -0.025907f },
	{ -0.341376f, -0.93957f, -0.025907f },
	{ 0.314457f, 0.143738f, 0.9383259f },
	{ -0.211081f, -0.8913929f, -0.401078f },
	{ 0.9773459f, 0.027379f, -0.209867f },
	{ -0.845073f, 0.32985f, -0.420773f }
};

NJS_MODEL_SADX attach_0017C59C = { vertex_0017C4F4, normal_0017C548, LengthOfArray(vertex_0017C4F4), meshlist_0017C4DC, matlist_0017C480, LengthOfArray(meshlist_0017C4DC), LengthOfArray(matlist_0017C480),{ 0.596259f, 0.125927f, 0.333044f }, 0.97271f, NULL };

NJS_OBJECT object_0017C5C4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C59C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0017C5F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.680368f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017C5C4 };

NJS_OBJECT object_0017C62C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFF8BC2, 1, 1, 1, &object_0017C5F8, NULL };

NJS_OBJECT object_0017C660 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.490687f, -0.45004f, 0.338157f, 0, 0, 0xFFFFC000, 1, 1, 1, &object_0017C62C, &object_0017C44C };

NJS_MATERIAL matlist_0017C694[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C6A8[] = {
	3, 2, 1, 0,
	0x8000u | 5, 6, 5, 4, 3, 6,
	3, 6, 5, 3
};

NJS_TEX uv_0017C6C4[] = {
	{ 102, 63 },
	{ 18, 63 },
	{ 59, 7 },
	{ 243, 11 },
	{ 244, 205 },
	{ 193, 11 },
	{ 138, 205 },
	{ 145, 11 },
	{ 59, 35 },
	{ 114, 212 },
	{ 12, 212 }
};

NJS_MESHSET_SADX meshlist_0017C6F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0017C6A8, NULL, NULL, NULL, uv_0017C6C4, NULL }
};

NJS_VECTOR vertex_0017C708[] = {
	{ 1.520769f, 0.028847f, -0.799275f },
	{ 0.912182f, 0.24763f, -0.884025f },
	{ 1.174288f, 0.169057f, -0.279854f },
	{ 0.912182f, 0.24763f, -0.884025f },
	{ 0.334388f, -0.176471f, 0.01268f },
	{ 1.174288f, 0.169057f, -0.279854f },
	{ -0.328252f, 0.428324f, 0.217936f }
};

NJS_VECTOR normal_0017C75C[] = {
	{ -0.341376f, -0.93957f, 0.025907f },
	{ -0.341376f, -0.93957f, 0.025907f },
	{ -0.341376f, -0.93957f, 0.025907f },
	{ 0.314457f, 0.143738f, -0.9383259f },
	{ -0.21108f, -0.8913929f, 0.401078f },
	{ 0.977347f, 0.027378f, 0.209867f },
	{ -0.845074f, 0.32985f, 0.420773f }
};

NJS_MODEL_SADX attach_0017C7B0 = { vertex_0017C708, normal_0017C75C, LengthOfArray(vertex_0017C708), meshlist_0017C6F0, matlist_0017C694, LengthOfArray(meshlist_0017C6F0), LengthOfArray(matlist_0017C694),{ 0.596259f, 0.125927f, -0.333044f }, 0.97271f, NULL };

NJS_OBJECT object_0017C7D8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C7B0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0017C80C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.680368f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017C7D8 };

NJS_OBJECT object_0017C840 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFF8BC2, 1, 1, 1, &object_0017C80C, NULL };

NJS_OBJECT object_0017C874 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.490687f, -0.450041f, -0.338156f, 0, 0, 0xFFFFC000, 1, 1, 1, &object_0017C840, &object_0017C660 };

NJS_MATERIAL matlist_0017C8A8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017C8BC[] = {
	8, 2, 4, 0, 3, 2, 1, 4, 3
};

NJS_TEX uv_0017C8D0[] = {
	{ 177, 105 },
	{ 230, 100 },
	{ 234, 168 },
	{ 165, 167 },
	{ 177, 105 },
	{ 107, 19 },
	{ 230, 100 },
	{ 165, 167 }
};

NJS_MESHSET_SADX meshlist_0017C8F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0017C8BC, NULL, NULL, NULL, uv_0017C8D0, NULL }
};

NJS_VECTOR vertex_0017C908[] = {
	{ 1.299692f, 0.002152f, 0.085917f },
	{ -0.73987f, -0.193061f, 0.013732f },
	{ 0.561699f, 0.132718f, 0.092714f },
	{ 0.770281f, -0.331943f, -0.249533f },
	{ 0.749411f, -0.349577f, 0.414571f }
};

NJS_VECTOR normal_0017C944[] = {
	{ 0.953289f, 0.302f, 0.005943f },
	{ -0.9985909f, -0.017371f, -0.050145f },
	{ -0.070556f, 0.996635f, 0.04173f },
	{ 0.231051f, -0.455771f, -0.8595859f },
	{ 0.185682f, -0.493251f, 0.849838f }
};

NJS_MODEL_SADX attach_0017C980 = { vertex_0017C908, normal_0017C944, LengthOfArray(vertex_0017C908), meshlist_0017C8F0, matlist_0017C8A8, LengthOfArray(meshlist_0017C8F0), LengthOfArray(matlist_0017C8A8),{ 0.279911f, -0.10843f, 0.08251899f }, 1.047905f, NULL };

NJS_OBJECT object_0017C9A8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C980, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0017C9DC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.389654f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017C9A8 };

NJS_OBJECT object_0017CA10 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFE38F, 1, 1, 1, &object_0017C9DC, NULL };

NJS_OBJECT object_0017CA44 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.827159f, -0.913848f, 0, 0, 0, 0xFFFFC000, 1, 1, 1, &object_0017CA10, &object_0017C874 };

NJS_MATERIAL matlist_0017CA78[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017CA8C[] = {
	11, 4, 1, 0, 10, 12, 8, 6, 7, 5, 14, 13,
	3, 4, 3, 1,
	0x8000u | 8, 12, 0, 6, 4, 5, 3, 13, 9,
	0x8000u | 7, 3, 1, 2, 10, 11, 8, 7,
	6, 7, 11, 14, 2, 9, 3
};

NJS_TEX uv_0017CADC[] = {
	{ 244, 185 },
	{ 214, 195 },
	{ 195, 242 },
	{ 132, 196 },
	{ 124, 239 },
	{ 76, 201 },
	{ 132, 196 },
	{ 95, 137 },
	{ 151, 136 },
	{ 26, 36 },
	{ 92, 25 },
	{ 214, 195 },
	{ 195, 104 },
	{ 244, 185 },
	{ 124, 239 },
	{ 195, 242 },
	{ 132, 196 },
	{ 214, 195 },
	{ 151, 136 },
	{ 195, 104 },
	{ 92, 25 },
	{ 125, 6 },
	{ 195, 104 },
	{ 214, 195 },
	{ 151, 136 },
	{ 132, 196 },
	{ 95, 137 },
	{ 76, 201 },
	{ 81, 140 },
	{ 81, 140 },
	{ 95, 137 },
	{ 26, 36 },
	{ 151, 136 },
	{ 92, 25 },
	{ 195, 104 }
};

NJS_MESHSET_SADX meshlist_0017CB68[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0017CA8C, NULL, NULL, NULL, uv_0017CADC, NULL }
};

NJS_VECTOR vertex_0017CB80[] = {
	{ 0.410289f, -0.721769f, 0 },
	{ 0.8519599f, -0.935343f, 0.432652f },
	{ 2.132853f, 0.486838f, 0.879769f },
	{ 1.87832f, -0.689234f, 0 },
	{ 0.8519599f, -0.935343f, -0.432651f },
	{ 2.132853f, 0.486838f, -0.879769f },
	{ 0.78816f, 0.166435f, -0.972526f },
	{ 1.567492f, 0.776412f, -0.442997f },
	{ 0.550845f, 0.708591f, 0 },
	{ 2.849124f, 0.753652f, 0.335953f },
	{ 0.788161f, 0.166435f, 0.972527f },
	{ 1.567493f, 0.776411f, 0.442997f },
	{ 0.350809f, 0.200105f, 0 },
	{ 2.849124f, 0.753652f, -0.335953f },
	{ 2.706968f, 1.529794f, 0 }
};

NJS_VECTOR normal_0017CC34[] = {
	{ -0.875955f, -0.482392f, 0 },
	{ -0.183448f, -0.818498f, 0.544433f },
	{ 0.311662f, 0.068855f, 0.947695f },
	{ 0.591406f, -0.806374f, 0 },
	{ -0.183448f, -0.818498f, -0.544433f },
	{ 0.311662f, 0.068854f, -0.947695f },
	{ -0.429482f, 0.138545f, -0.8923849f },
	{ -0.255503f, 0.867054f, -0.42771f },
	{ -0.629577f, 0.776938f, 0 },
	{ 0.774738f, -0.147513f, 0.614834f },
	{ -0.429482f, 0.138545f, 0.8923849f },
	{ -0.255503f, 0.867054f, 0.42771f },
	{ -0.988612f, 0.15049f, 0 },
	{ 0.774738f, -0.147513f, -0.614834f },
	{ 0.009086999f, 0.999959f, 0 }
};

NJS_MODEL_SADX attach_0017CCE8 = { vertex_0017CB80, normal_0017CC34, LengthOfArray(vertex_0017CB80), meshlist_0017CB68, matlist_0017CA78, LengthOfArray(meshlist_0017CB68), LengthOfArray(matlist_0017CA78),{ 1.599966f, 0.297226f, 0 }, 1.754884f, NULL };

NJS_OBJECT object_0017CD10 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017CCE8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017CA44 };

NJS_OBJECT object_0017CD44 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 5.50753f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017CD10 };

NJS_OBJECT object_0017CD78 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x4000, 1, 1, 1, &object_0017CD44, NULL };

NJS_OBJECT object_0017CDAC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0x4000, 0, 1, 1, 1, &object_0017CD78, NULL };

NJS_OBJECT object_0017CDE0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0017CDAC, NULL };

//RAKO animation


NJS_MKEY_F _17E5E0_0_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_0_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_1_pos[] = {
	{ 0, -0.11223f, -0.102572f, 0.048995f },
	{ 1, -0.095432f, -0.111134f, 0.043061f },
	{ 2, -0.06385899f, -0.125114f, 0.029636f },
	{ 3, -0.026348f, -0.137455f, 0.016079f },
	{ 4, 0.009369999f, -0.1411f, 0.009749f },
	{ 5, 0.055018f, -0.132653f, 0.015683f },
	{ 6, 0.104169f, -0.118297f, 0.029108f },
	{ 7, 0.140921f, -0.105728f, 0.042666f },
	{ 8, 0.148939f, -0.102588f, 0.048995f },
	{ 9, 0.115268f, -0.1114f, 0.043061f },
	{ 10, 0.060709f, -0.12566f, 0.029636f },
	{ 11, 0.013533f, -0.137946f, 0.016079f },
	{ 12, -0.001383f, -0.140904f, 0.009749f },
	{ 13, -0.026636f, -0.132292f, 0.015683f },
	{ 14, -0.06755599f, -0.118333f, 0.029108f },
	{ 15, -0.102938f, -0.106036f, 0.042666f },
	{ 16, -0.11223f, -0.102391f, 0.048995f }
};

NJS_MKEY_A _17E5E0_1_rot[] = {
	{ 0, 0, 0x3FFF, 0 },
	{ 16, 0, 0x3FFF, 0 }
};

NJS_MKEY_F _17E5E0_2_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_2_rot[] = {
	{ 0, 0, 0, 0x3D10 },
	{ 1, 0, 0, 0x3E83 },
	{ 2, 0, 0, 0x3FB2 },
	{ 3, 0, 0, 0x3FDA },
	{ 4, 0, 0, 0x3EE1 },
	{ 5, 0, 0, 0x3DA6 },
	{ 6, 0, 0, 0x3CA0 },
	{ 7, 0, 0, 0x3C47 },
	{ 8, 0, 0, 0x3D10 },
	{ 9, 0, 0, 0x3E9F },
	{ 10, 0, 0, 0x3FCD },
	{ 11, 0, 0, 0x3FDD },
	{ 12, 0, 0, 0x3EC9 },
	{ 13, 0, 0, 0x3D86 },
	{ 14, 0, 0, 0x3C86 },
	{ 15, 0, 0, 0x3C39 },
	{ 16, 0, 0, 0x3D10 }
};

NJS_MKEY_F _17E5E0_3_pos[] = {
	{ 0, 5.50753f, 0, 0 },
	{ 16, 5.50753f, 0, 0 }
};

NJS_MKEY_A _17E5E0_3_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_4_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_4_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_5_pos[] = {
	{ 0, 0.827159f, -0.913848f, 0 },
	{ 16, 0.827159f, -0.913848f, 0 }
};

NJS_MKEY_A _17E5E0_5_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17E5E0_6_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_6_rot[] = {
	{ 0, 0, 0x12D8, 0xFFFFF92C },
	{ 1, 0, 0x191B, 0xFFFFFC6B },
	{ 2, 0, 0x1ABD, 0xFFFFFD59 },
	{ 3, 0, 0x16CD, 0xFFFFFB2D },
	{ 4, 0, 0xF3D, 0xFFFFF783 },
	{ 5, 0, 0x65C, 0xFFFFF443 },
	{ 6, 0, 0xFFFFFE4F, 0xFFFFF356 },
	{ 7, 0, 0xFFFFF4C0, 0xFFFFF582 },
	{ 8, 0, 0xFFFFEA8D, 0xFFFFF92C },
	{ 9, 0, 0xFFFFE2DC, 0xFFFFFC6B },
	{ 10, 0, 0xFFFFE0D1, 0xFFFFFD59 },
	{ 11, 0, 0xFFFFE5B6, 0xFFFFFB2D },
	{ 12, 0, 0xFFFFEEE3, 0xFFFFF783 },
	{ 13, 0, 0xFFFFF931, 0xFFFFF443 },
	{ 14, 0, 0x1A7, 0xFFFFF356 },
	{ 15, 0, 0xA41, 0xFFFFF582 },
	{ 16, 0, 0x12D8, 0xFFFFF92C }
};

NJS_MKEY_F _17E5E0_7_pos[] = {
	{ 0, 1.389654f, 0, 0 },
	{ 16, 1.389654f, 0, 0 }
};

NJS_MKEY_A _17E5E0_7_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_8_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_8_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_9_pos[] = {
	{ 0, 0.6544459f, -0.808359f, -0.088551f },
	{ 1, 0.685652f, -0.743177f, -0.10922f },
	{ 2, 0.755615f, -0.592491f, -0.158152f },
	{ 3, 0.828856f, -0.423596f, -0.215734f },
	{ 4, 0.8698919f, -0.303783f, -0.262353f },
	{ 5, 0.865871f, -0.25036f, -0.300033f },
	{ 6, 0.8368469f, -0.227651f, -0.336818f },
	{ 7, 0.796699f, -0.223471f, -0.362118f },
	{ 8, 0.759304f, -0.225635f, -0.365345f },
	{ 9, 0.722143f, -0.226498f, -0.335188f },
	{ 10, 0.679888f, -0.234024f, -0.280124f },
	{ 11, 0.642204f, -0.259442f, -0.219244f },
	{ 12, 0.618756f, -0.313979f, -0.171642f },
	{ 13, 0.61696f, -0.432199f, -0.139197f },
	{ 14, 0.630048f, -0.59759f, -0.112797f },
	{ 15, 0.646412f, -0.74477f, -0.095047f },
	{ 16, 0.6544459f, -0.808359f, -0.088551f }
};

NJS_MKEY_A _17E5E0_9_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17E5E0_10_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_10_rot[] = {
	{ 0, 0, 0, 0xFFFF8BC2 },
	{ 1, 0, 0xFFFFFF15, 0xFFFF8ACE },
	{ 2, 0, 0xFFFFFCF9, 0xFFFF88B5 },
	{ 3, 0, 0xFFFFFAA5, 0xFFFF869B },
	{ 4, 0, 0xFFFFF913, 0xFFFF85A7 },
	{ 5, 0, 0xFFFFF86D, 0xFFFF85EA },
	{ 6, 0, 0xFFFFF836, 0xFFFF869B },
	{ 7, 0, 0xFFFFF86D, 0xFFFF8795 },
	{ 8, 0, 0xFFFFF913, 0xFFFF88B5 },
	{ 9, 0, 0xFFFFFA7C, 0xFFFF89D4 },
	{ 10, 0, 0xFFFFFC8A, 0xFFFF8ACE },
	{ 11, 0, 0xFFFFFE98, 0xFFFF8B7F },
	{ 12, 0, 0, 0xFFFF8BC2 },
	{ 13, 0, 0x7C, 0xFFFF8BC2 },
	{ 14, 0, 0x6E, 0xFFFF8BC2 },
	{ 15, 0, 0x29, 0xFFFF8BC2 },
	{ 16, 0, 0, 0xFFFF8BC2 }
};

NJS_MKEY_F _17E5E0_11_pos[] = {
	{ 0, 1.680368f, 0, 0 },
	{ 16, 1.680368f, 0, 0 }
};

NJS_MKEY_A _17E5E0_11_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_12_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_12_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_13_pos[] = {
	{ 0, 0.713825f, -0.226379f, 0.355139f },
	{ 1, 0.707069f, -0.257932f, 0.334469f },
	{ 2, 0.6909879f, -0.334622f, 0.285537f },
	{ 3, 0.671859f, -0.429498f, 0.227956f },
	{ 4, 0.65596f, -0.515607f, 0.181337f },
	{ 5, 0.638763f, -0.607183f, 0.143656f },
	{ 6, 0.618986f, -0.71146f, 0.106872f },
	{ 7, 0.60778f, -0.790988f, 0.081572f },
	{ 8, 0.616296f, -0.808318f, 0.07834499f },
	{ 9, 0.660253f, -0.728638f, 0.108501f },
	{ 10, 0.7294559f, -0.580197f, 0.163566f },
	{ 11, 0.796182f, -0.420134f, 0.224445f },
	{ 12, 0.832712f, -0.305587f, 0.272047f },
	{ 13, 0.826852f, -0.252097f, 0.304492f },
	{ 14, 0.7949859f, -0.22909f, 0.330893f },
	{ 15, 0.752262f, -0.224529f, 0.348643f },
	{ 16, 0.713825f, -0.226379f, 0.355139f }
};

NJS_MKEY_A _17E5E0_13_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17E5E0_14_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_14_rot[] = {
	{ 0, 0, 0x74D, 0xFFFF8BC2 },
	{ 1, 0, 0x5E3, 0xFFFF8BC2 },
	{ 2, 0, 0x3BF, 0xFFFF8BC2 },
	{ 3, 0, 0x192, 0xFFFF8BC2 },
	{ 4, 0, 0xB, 0xFFFF8BC2 },
	{ 5, 0, 0xFFFFFF80, 0xFFFF8BC2 },
	{ 6, 0, 0xFFFFFF8A, 0xFFFF8BC2 },
	{ 7, 0, 0xFFFFFFD1, 0xFFFF8BC2 },
	{ 8, 0, 0, 0xFFFF8BC2 },
	{ 9, 0xFFFFFFC3, 0xDA, 0xFFFF8AE2 },
	{ 10, 0xFFFFFF3B, 0x2F8, 0xFFFF88F3 },
	{ 11, 0xFFFFFEB4, 0x55C, 0xFFFF8705 },
	{ 12, 0xFFFFFE76, 0x70A, 0xFFFF8624 },
	{ 13, 0xFFFFFEB4, 0x7C4, 0xFFFF8705 },
	{ 14, 0xFFFFFF3B, 0x811, 0xFFFF88F3 },
	{ 15, 0xFFFFFFC3, 0x7E9, 0xFFFF8AE2 },
	{ 16, 0, 0x747, 0xFFFF8BC2 }
};

NJS_MKEY_F _17E5E0_15_pos[] = {
	{ 0, 1.680368f, 0, 0 },
	{ 16, 1.680368f, 0, 0 }
};

NJS_MKEY_A _17E5E0_15_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_16_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_16_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_17_pos[] = {
	{ 0, 2.261596f, 0.6379769f, -0.6578799f },
	{ 16, 2.261596f, 0.6379769f, -0.6578799f }
};

NJS_MKEY_A _17E5E0_17_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17E5E0_18_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_18_rot[] = {
	{ 0, 0x25, 0xFFFFFB87, 0xFFFFB0DE },
	{ 1, 5, 0xFFFFFB85, 0xFFFFB1B2 },
	{ 2, 4, 0xFFFFFB85, 0xFFFFB1B7 },
	{ 3, 0x23, 0xFFFFFB87, 0xFFFFB0E7 },
	{ 4, 0x4D, 0xFFFFFB89, 0xFFFFAFCD },
	{ 5, 0x6D, 0xFFFFFB8B, 0xFFFFAEF9 },
	{ 6, 0x6E, 0xFFFFFB8B, 0xFFFFAEF5 },
	{ 7, 0x4F, 0xFFFFFB89, 0xFFFFAFC4 },
	{ 8, 0x25, 0xFFFFFB87, 0xFFFFB0DE },
	{ 9, 5, 0xFFFFFB85, 0xFFFFB1B2 },
	{ 10, 4, 0xFFFFFB85, 0xFFFFB1B7 },
	{ 11, 0x23, 0xFFFFFB87, 0xFFFFB0E7 },
	{ 12, 0x4D, 0xFFFFFB89, 0xFFFFAFCD },
	{ 13, 0x6D, 0xFFFFFB8B, 0xFFFFAEF9 },
	{ 14, 0x6E, 0xFFFFFB8B, 0xFFFFAEF5 },
	{ 15, 0x4F, 0xFFFFFB89, 0xFFFFAFC4 },
	{ 16, 0x25, 0xFFFFFB87, 0xFFFFB0DE }
};

NJS_MKEY_F _17E5E0_19_pos[] = {
	{ 0, 1.714142f, 0, 0 },
	{ 16, 1.714142f, 0, 0 }
};

NJS_MKEY_A _17E5E0_19_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_20_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_20_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_21_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_21_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_22_pos[] = {
	{ 0, 2.261596f, 0.6379769f, 0.6578799f },
	{ 16, 2.261596f, 0.6379769f, 0.6578799f }
};

NJS_MKEY_A _17E5E0_22_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17E5E0_23_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_23_rot[] = {
	{ 0, 0x164D, 0x5D7, 0xFFFFA586 },
	{ 1, 0x1638, 0x543, 0xFFFFA632 },
	{ 2, 0x1609, 0x540, 0xFFFFA635 },
	{ 3, 0x15D9, 0x5D1, 0xFFFFA58D },
	{ 4, 0x15C4, 0x696, 0xFFFFA4A8 },
	{ 5, 0x15D9, 0x72B, 0xFFFFA3FC },
	{ 6, 0x1609, 0x72E, 0xFFFFA3F8 },
	{ 7, 0x1638, 0x69C, 0xFFFFA4A1 },
	{ 8, 0x164D, 0x5D7, 0xFFFFA586 },
	{ 9, 0x1638, 0x543, 0xFFFFA632 },
	{ 10, 0x1609, 0x540, 0xFFFFA635 },
	{ 11, 0x15D9, 0x5D1, 0xFFFFA58D },
	{ 12, 0x15C4, 0x696, 0xFFFFA4A8 },
	{ 13, 0x15D9, 0x72B, 0xFFFFA3FC },
	{ 14, 0x1609, 0x72E, 0xFFFFA3F8 },
	{ 15, 0x1638, 0x69C, 0xFFFFA4A1 },
	{ 16, 0x164D, 0x5D7, 0xFFFFA586 }
};

NJS_MKEY_F _17E5E0_24_pos[] = {
	{ 0, 1.714142f, 0, 0 },
	{ 16, 1.714142f, 0, 0 }
};

NJS_MKEY_A _17E5E0_24_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_25_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_25_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_26_pos[] = {
	{ 0, 2.305161f, 1.025992f, 0 },
	{ 1, 2.305161f, 0.970738f, -0.026609f },
	{ 2, 2.305161f, 0.9530399f, -0.085148f },
	{ 3, 2.305161f, 0.971602f, -0.143688f },
	{ 4, 2.305161f, 1.025126f, -0.170297f },
	{ 5, 2.305161f, 1.108064f, -0.151389f },
	{ 6, 2.305161f, 1.136111f, -0.105685f },
	{ 7, 2.305161f, 1.098977f, -0.049712f },
	{ 8, 2.305161f, 1.025992f, 0 },
	{ 9, 2.305161f, 0.971346f, 0.047836f },
	{ 10, 2.305161f, 0.965058f, 0.099681f },
	{ 11, 2.305161f, 1.000201f, 0.141257f },
	{ 12, 2.305161f, 1.069851f, 0.158288f },
	{ 13, 2.305161f, 1.161892f, 0.133556f },
	{ 14, 2.305161f, 1.174279f, 0.07914399f },
	{ 15, 2.305161f, 1.110834f, 0.024732f },
	{ 16, 2.305161f, 1.025992f, 0 }
};

NJS_MKEY_A _17E5E0_26_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17E5E0_27_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_27_rot[] = {
	{ 0, 0, 0x36, 0x81CA },
	{ 16, 0, 0x36, 0x81CA }
};

NJS_MKEY_F _17E5E0_28_pos[] = {
	{ 0, 3.625491f, 0, 0 },
	{ 16, 3.625491f, 0, 0 }
};

NJS_MKEY_A _17E5E0_28_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_29_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_29_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_30_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_30_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_31_pos[] = {
	{ 0, 1.830964f, 0.016073f, 0.062815f },
	{ 16, 1.830964f, 0.016073f, 0.062815f }
};

NJS_MKEY_A _17E5E0_31_rot[] = {
	{ 0, 0xFFFFC021, 0xFFFFC001, 0xFFFFC021 },
	{ 16, 0xFFFFC021, 0xFFFFC001, 0xFFFFC021 }
};

NJS_MKEY_F _17E5E0_32_pos[] = {
	{ 0, 0, 0.000001f, 0.000001f },
	{ 16, 0, 0.000001f, 0.000001f }
};

NJS_MKEY_A _17E5E0_32_rot[] = {
	{ 0, 0, 0xFFFFFFA7, 0xFFFFFFAA },
	{ 1, 0xFFFFFFA4, 0x1C, 0xFFFFFEDF },
	{ 2, 0xFFFFFED8, 0x11E, 0xFFFFFD22 },
	{ 3, 0xFFFFFE0B, 0x220, 0xFFFFFB65 },
	{ 4, 0xFFFFFDAF, 0x295, 0xFFFFFA9B },
	{ 5, 0xFFFFFDFD, 0x241, 0xFFFFFB29 },
	{ 6, 0xFFFFFEB0, 0x176, 0xFFFFFC81 },
	{ 7, 0xFFFFFF77, 0x7F, 0xFFFFFE2A },
	{ 8, 0, 0xFFFFFFA7, 0xFFFFFFAA },
	{ 9, 0x31, 0xFFFFFEDD, 0x125 },
	{ 10, 0x38, 0xFFFFFE05, 0x2C8 },
	{ 11, 0x2C, 0xFFFFFD5A, 0x41B },
	{ 12, 0x23, 0xFFFFFD14, 0x4A6 },
	{ 13, 0x1D, 0xFFFFFD7B, 0x3DF },
	{ 14, 0x11, 0xFFFFFE5D, 0x228 },
	{ 15, 5, 0xFFFFFF40, 0x70 },
	{ 16, 0, 0xFFFFFFA7, 0xFFFFFFAA }
};

NJS_MKEY_F _17E5E0_33_pos[] = {
	{ 0, 2.779967f, 0, 0 },
	{ 16, 2.779967f, 0, 0 }
};

NJS_MKEY_A _17E5E0_33_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_34_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_34_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_35_pos[] = {
	{ 0, 1.830964f, 0.016073f, -0.062815f },
	{ 16, 1.830964f, 0.016073f, -0.062815f }
};

NJS_MKEY_A _17E5E0_35_rot[] = {
	{ 0, 0x3FDF, 0x3FFF, 0xFFFFC021 },
	{ 16, 0x3FDF, 0x3FFF, 0xFFFFC021 }
};

NJS_MKEY_F _17E5E0_36_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_36_rot[] = {
	{ 0, 0, 0xA6, 0xFFFFFFAB },
	{ 1, 6, 0x115, 0x7B },
	{ 2, 0x15, 0x209, 0x246 },
	{ 3, 0x24, 0x2FD, 0x411 },
	{ 4, 0x2B, 0x36B, 0x4E1 },
	{ 5, 0x16, 0x31F, 0x44F },
	{ 6, 0xFFFFFFF2, 0x266, 0x2EC },
	{ 7, 0xFFFFFFDE, 0x17D, 0x136 },
	{ 8, 0, 0xA6, 0xFFFFFFAB },
	{ 9, 0x8A, 0xFFFFFFC4, 0xFFFFFE1F },
	{ 10, 0x15D, 0xFFFFFEC3, 0xFFFFFC6A },
	{ 11, 0x21D, 0xFFFFFDF1, 0xFFFFFB07 },
	{ 12, 0x271, 0xFFFFFD9A, 0xFFFFFA76 },
	{ 13, 0x20F, 0xFFFFFE14, 0xFFFFFB46 },
	{ 14, 0x138, 0xFFFFFF20, 0xFFFFFD10 },
	{ 15, 0x61, 0x2C, 0xFFFFFEDB },
	{ 16, 0, 0xA6, 0xFFFFFFAB }
};

NJS_MKEY_F _17E5E0_37_pos[] = {
	{ 0, 2.779967f, 0, 0 },
	{ 16, 2.779967f, 0, 0 }
};

NJS_MKEY_A _17E5E0_37_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_38_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_38_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17E5E0_39_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17E5E0_39_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MDATA2 _17E5E0_mdat[] = {
	{ _17E5E0_0_pos, _17E5E0_0_rot, LengthOfArray(_17E5E0_0_pos), LengthOfArray(_17E5E0_0_rot) },
	{ _17E5E0_1_pos, _17E5E0_1_rot, LengthOfArray(_17E5E0_1_pos), LengthOfArray(_17E5E0_1_rot) },
	{ _17E5E0_2_pos, _17E5E0_2_rot, LengthOfArray(_17E5E0_2_pos), LengthOfArray(_17E5E0_2_rot) },
	{ _17E5E0_3_pos, _17E5E0_3_rot, LengthOfArray(_17E5E0_3_pos), LengthOfArray(_17E5E0_3_rot) },
	{ _17E5E0_4_pos, _17E5E0_4_rot, LengthOfArray(_17E5E0_4_pos), LengthOfArray(_17E5E0_4_rot) },
	{ _17E5E0_5_pos, _17E5E0_5_rot, LengthOfArray(_17E5E0_5_pos), LengthOfArray(_17E5E0_5_rot) },
	{ _17E5E0_6_pos, _17E5E0_6_rot, LengthOfArray(_17E5E0_6_pos), LengthOfArray(_17E5E0_6_rot) },
	{ _17E5E0_7_pos, _17E5E0_7_rot, LengthOfArray(_17E5E0_7_pos), LengthOfArray(_17E5E0_7_rot) },
	{ _17E5E0_8_pos, _17E5E0_8_rot, LengthOfArray(_17E5E0_8_pos), LengthOfArray(_17E5E0_8_rot) },
	{ _17E5E0_9_pos, _17E5E0_9_rot, LengthOfArray(_17E5E0_9_pos), LengthOfArray(_17E5E0_9_rot) },
	{ _17E5E0_10_pos, _17E5E0_10_rot, LengthOfArray(_17E5E0_10_pos), LengthOfArray(_17E5E0_10_rot) },
	{ _17E5E0_11_pos, _17E5E0_11_rot, LengthOfArray(_17E5E0_11_pos), LengthOfArray(_17E5E0_11_rot) },
	{ _17E5E0_12_pos, _17E5E0_12_rot, LengthOfArray(_17E5E0_12_pos), LengthOfArray(_17E5E0_12_rot) },
	{ _17E5E0_13_pos, _17E5E0_13_rot, LengthOfArray(_17E5E0_13_pos), LengthOfArray(_17E5E0_13_rot) },
	{ _17E5E0_14_pos, _17E5E0_14_rot, LengthOfArray(_17E5E0_14_pos), LengthOfArray(_17E5E0_14_rot) },
	{ _17E5E0_15_pos, _17E5E0_15_rot, LengthOfArray(_17E5E0_15_pos), LengthOfArray(_17E5E0_15_rot) },
	{ _17E5E0_16_pos, _17E5E0_16_rot, LengthOfArray(_17E5E0_16_pos), LengthOfArray(_17E5E0_16_rot) },
	{ _17E5E0_17_pos, _17E5E0_17_rot, LengthOfArray(_17E5E0_17_pos), LengthOfArray(_17E5E0_17_rot) },
	{ _17E5E0_18_pos, _17E5E0_18_rot, LengthOfArray(_17E5E0_18_pos), LengthOfArray(_17E5E0_18_rot) },
	{ _17E5E0_19_pos, _17E5E0_19_rot, LengthOfArray(_17E5E0_19_pos), LengthOfArray(_17E5E0_19_rot) },
	{ _17E5E0_20_pos, _17E5E0_20_rot, LengthOfArray(_17E5E0_20_pos), LengthOfArray(_17E5E0_20_rot) },
	{ _17E5E0_21_pos, _17E5E0_21_rot, LengthOfArray(_17E5E0_21_pos), LengthOfArray(_17E5E0_21_rot) },
	{ _17E5E0_22_pos, _17E5E0_22_rot, LengthOfArray(_17E5E0_22_pos), LengthOfArray(_17E5E0_22_rot) },
	{ _17E5E0_23_pos, _17E5E0_23_rot, LengthOfArray(_17E5E0_23_pos), LengthOfArray(_17E5E0_23_rot) },
	{ _17E5E0_24_pos, _17E5E0_24_rot, LengthOfArray(_17E5E0_24_pos), LengthOfArray(_17E5E0_24_rot) },
	{ _17E5E0_25_pos, _17E5E0_25_rot, LengthOfArray(_17E5E0_25_pos), LengthOfArray(_17E5E0_25_rot) },
	{ _17E5E0_26_pos, _17E5E0_26_rot, LengthOfArray(_17E5E0_26_pos), LengthOfArray(_17E5E0_26_rot) },
	{ _17E5E0_27_pos, _17E5E0_27_rot, LengthOfArray(_17E5E0_27_pos), LengthOfArray(_17E5E0_27_rot) },
	{ _17E5E0_28_pos, _17E5E0_28_rot, LengthOfArray(_17E5E0_28_pos), LengthOfArray(_17E5E0_28_rot) },
	{ _17E5E0_29_pos, _17E5E0_29_rot, LengthOfArray(_17E5E0_29_pos), LengthOfArray(_17E5E0_29_rot) },
	{ _17E5E0_30_pos, _17E5E0_30_rot, LengthOfArray(_17E5E0_30_pos), LengthOfArray(_17E5E0_30_rot) },
	{ _17E5E0_31_pos, _17E5E0_31_rot, LengthOfArray(_17E5E0_31_pos), LengthOfArray(_17E5E0_31_rot) },
	{ _17E5E0_32_pos, _17E5E0_32_rot, LengthOfArray(_17E5E0_32_pos), LengthOfArray(_17E5E0_32_rot) },
	{ _17E5E0_33_pos, _17E5E0_33_rot, LengthOfArray(_17E5E0_33_pos), LengthOfArray(_17E5E0_33_rot) },
	{ _17E5E0_34_pos, _17E5E0_34_rot, LengthOfArray(_17E5E0_34_pos), LengthOfArray(_17E5E0_34_rot) },
	{ _17E5E0_35_pos, _17E5E0_35_rot, LengthOfArray(_17E5E0_35_pos), LengthOfArray(_17E5E0_35_rot) },
	{ _17E5E0_36_pos, _17E5E0_36_rot, LengthOfArray(_17E5E0_36_pos), LengthOfArray(_17E5E0_36_rot) },
	{ _17E5E0_37_pos, _17E5E0_37_rot, LengthOfArray(_17E5E0_37_pos), LengthOfArray(_17E5E0_37_rot) },
	{ _17E5E0_38_pos, _17E5E0_38_rot, LengthOfArray(_17E5E0_38_pos), LengthOfArray(_17E5E0_38_rot) },
	{ _17E5E0_39_pos, _17E5E0_39_rot, LengthOfArray(_17E5E0_39_pos), LengthOfArray(_17E5E0_39_rot) }
};

NJS_MOTION _17E5E0 = { _17E5E0_mdat, 17, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action__17E5E0 = { &object_0017CDE0, &_17E5E0 };

//LION


NJS_MATERIAL matlist_00174034[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00174048[] = {
	4, 1, 0, 2, 3
};

NJS_TEX uv_00174054[] = {
	{ 96, 93 },
	{ 43, 90 },
	{ 187, 12 },
	{ 95, 93 }
};

NJS_MESHSET_SADX meshlist_00174064[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00174048, NULL, NULL, NULL, uv_00174054, NULL }
};

NJS_VECTOR vertex_0017407C[] = {
	{ 0.5359f, -0.047475f, 0.380408f },
	{ -0.057991f, 0.363712f, 0.390806f },
	{ -0.271395f, 0.01381f, -0.240059f },
	{ 0.097962f, 0.179272f, -0.568764f }
};

NJS_VECTOR normal_001740AC[] = {
	{ 0.274525f, 0.924081f, -0.265913f },
	{ 0.471055f, 0.694125f, -0.544333f },
	{ 0.078881f, 0.996875f, -0.004168f },
	{ -0.157135f, 0.941713f, 0.297465f }
};

NJS_MODEL_SADX attach_001740DC = { vertex_0017407C, normal_001740AC, LengthOfArray(vertex_0017407C), meshlist_00174064, matlist_00174034, LengthOfArray(meshlist_00174064), LengthOfArray(matlist_00174034),{ 0.132253f, 0.158119f, -0.088979f }, 0.5475399f, NULL };

NJS_OBJECT object_00174104 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001740DC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00174138 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.396947f, 0.000001f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00174104 };

NJS_OBJECT object_0017416C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x60C2, 1, 1, 1, &object_00174138, NULL };

NJS_OBJECT object_001741A0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.236441f, -0.822026f, 0.5006289f, 0, 0, 0x774D, 1, 1, 1, &object_0017416C, NULL };

NJS_MATERIAL matlist_001741D4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001741E8[] = {
	4, 1, 2, 0, 3
};

NJS_TEX uv_001741F4[] = {
	{ 101, 132 },
	{ 174, 31 },
	{ 43, 66 },
	{ 101, 132 }
};

NJS_MESHSET_SADX meshlist_00174204[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001741E8, NULL, NULL, NULL, uv_001741F4, NULL }
};

NJS_VECTOR vertex_0017421C[] = {
	{ 0.5359f, -0.047475f, -0.380408f },
	{ -0.057991f, 0.363713f, -0.390806f },
	{ -0.271395f, 0.013811f, 0.240059f },
	{ 0.097963f, 0.179272f, 0.568764f }
};

NJS_VECTOR normal_0017424C[] = {
	{ 0.274525f, 0.924081f, 0.265913f },
	{ 0.471055f, 0.694125f, 0.544333f },
	{ 0.078881f, 0.996875f, 0.004168f },
	{ -0.157135f, 0.941713f, -0.297465f }
};

NJS_MODEL_SADX attach_0017427C = { vertex_0017421C, normal_0017424C, LengthOfArray(vertex_0017421C), meshlist_00174204, matlist_001741D4, LengthOfArray(meshlist_00174204), LengthOfArray(matlist_001741D4),{ 0.132253f, 0.158119f, 0.088979f }, 0.5475399f, NULL };

NJS_OBJECT object_001742A4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017427C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_001742D8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.396948f, 0.000001f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001742A4 };

NJS_OBJECT object_0017430C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x60C2, 1, 1, 1, &object_001742D8, NULL };

NJS_OBJECT object_00174340 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.236441f, -0.822026f, -0.5006289f, 0, 0, 0x774D, 1, 1, 1, &object_0017430C, &object_001741A0 };

NJS_MATERIAL matlist_00174374[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00174388[] = {
	4, 5, 6, 7, 1,
	0x8000u | 9, 6, 4, 5, 8, 3, 2, 1, 0, 6
};

NJS_TEX uv_001743A8[] = {
	{ 106, 136 },
	{ 125, 255 },
	{ 125, 161 },
	{ 144, 136 },
	{ 125, 255 },
	{ 13, 148 },
	{ 106, 136 },
	{ 42, 27 },
	{ 125, 112 },
	{ 208, 27 },
	{ 144, 136 },
	{ 237, 148 },
	{ 125, 255 }
};

NJS_MESHSET_SADX meshlist_001743DC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00174388, NULL, NULL, NULL, uv_001743A8, NULL }
};

NJS_VECTOR vertex_001743F4[] = {
	{ 1.722555f, -0.754356f, 2.202877f },
	{ 0.139359f, -0.010374f, 0.8092f },
	{ 1.812344f, 1.615596f, 1.458548f },
	{ 0.086962f, 0.751089f, 0 },
	{ 1.722555f, -0.754356f, -2.202877f },
	{ 0.139359f, -0.010374f, -0.8092f },
	{ 0.165584f, -2.511598f, 0.000001f },
	{ -0.003719f, -0.806825f, 0 },
	{ 1.812344f, 1.615596f, -1.458548f }
};

NJS_VECTOR normal_00174460[] = {
	{ -0.650293f, 0.037526f, 0.758756f },
	{ -0.742857f, 0.146575f, 0.6532069f },
	{ -0.611814f, 0.63359f, 0.473547f },
	{ -0.696245f, 0.717804f, 0 },
	{ -0.650293f, 0.037526f, -0.758756f },
	{ -0.742857f, 0.146575f, -0.6532069f },
	{ -0.9723859f, -0.233379f, 0 },
	{ -0.995105f, -0.09882499f, 0 },
	{ -0.611814f, 0.63359f, -0.473547f }
};

NJS_MODEL_SADX attach_001744CC = { vertex_001743F4, normal_00174460, LengthOfArray(vertex_001743F4), meshlist_001743DC, matlist_00174374, LengthOfArray(meshlist_001743DC), LengthOfArray(matlist_00174374),{ 0.904312f, -0.448001f, 0 }, 2.871744f, NULL };

NJS_OBJECT object_001744F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001744CC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00174528 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.04396f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001744F4 };

NJS_OBJECT object_0017455C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFFF10, 1, 1, 1, &object_00174528, NULL };

NJS_OBJECT object_00174590 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.828182f, -0.313004f, 0, 0xFFFF8001, 0x8000, 0xFFFFF74E, 1, 1, 1, &object_0017455C, &object_00174340 };

NJS_MATERIAL matlist_001745C4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001745D8[] = {
	0x8000u | 17, 1, 4, 7, 8, 10, 11, 12, 15, 13, 0, 16, 3, 6, 5, 2, 4, 1,
	4, 0, 3, 9, 5,
	0x8000u | 7, 0, 15, 9, 11, 5, 8, 4,
	0x8000u | 7, 13, 16, 12, 6, 14, 2, 1
};

NJS_TEX uv_00174628[] = {
	{ 235, 31 },
	{ 159, 8 },
	{ 237, 96 },
	{ 154, 40 },
	{ 218, 211 },
	{ 136, 123 },
	{ 176, 238 },
	{ 70, 195 },
	{ 28, 235 },
	{ 28, 196 },
	{ 70, 195 },
	{ 50, 151 },
	{ 136, 123 },
	{ 28, 14 },
	{ 154, 40 },
	{ 159, 8 },
	{ 237, 96 },
	{ 28, 196 },
	{ 8, 151 },
	{ 50, 151 },
	{ 28, 14 },
	{ 28, 196 },
	{ 70, 195 },
	{ 50, 151 },
	{ 136, 123 },
	{ 28, 14 },
	{ 154, 40 },
	{ 159, 8 },
	{ 28, 235 },
	{ 70, 195 },
	{ 176, 238 },
	{ 136, 123 },
	{ 218, 211 },
	{ 154, 40 },
	{ 237, 96 }
};

NJS_MESHSET_SADX meshlist_001746B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001745D8, NULL, NULL, NULL, uv_00174628, NULL }
};

NJS_VECTOR vertex_001746CC[] = {
	{ 1.839023f, 0.163243f, 0 },
	{ -0.5541739f, 0.119864f, 0.430483f },
	{ 0.456448f, -0.627161f, 0.970253f },
	{ 1.828214f, -0.2361f, 0.278812f },
	{ -0.157458f, -0.907448f, 0 },
	{ 0.763142f, -1.197308f, 0 },
	{ 1.17203f, -0.103767f, 0.690343f },
	{ -0.5541739f, 0.119864f, -0.430483f },
	{ 0.456449f, -0.627161f, -0.970253f },
	{ 1.828215f, -0.2361f, -0.278811f },
	{ -0.136857f, 0.730101f, -0.6439559f },
	{ 1.17203f, -0.103767f, -0.6903419f },
	{ 0.354715f, 0.93032f, 0 },
	{ 1.639859f, 0.455939f, 0 },
	{ -0.136857f, 0.730101f, 0.6439559f },
	{ 1.580588f, 0.208454f, -0.539067f },
	{ 1.580588f, 0.208454f, 0.539068f }
};

NJS_VECTOR normal_00174798[] = {
	{ 0.939342f, 0.342983f, 0 },
	{ -0.7651539f, -0.277504f, 0.580974f },
	{ -0.011016f, -0.43483f, 0.900445f },
	{ 0.824987f, -0.356706f, 0.438357f },
	{ -0.650906f, -0.759158f, 0 },
	{ 0.238258f, -0.971202f, 0 },
	{ 0.345315f, -0.01806f, 0.9383129f },
	{ -0.765153f, -0.277504f, -0.580975f },
	{ -0.011015f, -0.43483f, -0.900445f },
	{ 0.824987f, -0.356706f, -0.438357f },
	{ 0.041425f, 0.4265f, -0.903538f },
	{ 0.345315f, -0.01806f, -0.9383129f },
	{ 0.419762f, 0.907634f, 0 },
	{ 0.59104f, 0.806642f, 0 },
	{ 0.041424f, 0.4265f, 0.903538f },
	{ 0.494856f, 0.40129f, -0.770768f },
	{ 0.494856f, 0.40129f, 0.770768f }
};

NJS_MODEL_SADX attach_00174864 = { vertex_001746CC, normal_00174798, LengthOfArray(vertex_001746CC), meshlist_001746B4, matlist_001745C4, LengthOfArray(meshlist_001746B4), LengthOfArray(matlist_001745C4),{ 0.6424249f, -0.133494f, 0 }, 1.601108f, NULL };

NJS_OBJECT object_0017488C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00174864, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00174590 };

NJS_OBJECT object_001748C0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.287611f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017488C };

NJS_OBJECT object_001748F4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFF88B3, 1, 1, 1, &object_001748C0, NULL };

NJS_OBJECT object_00174928 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.92207f, 0.76382f, 0, 0, 0, 0xFFFFC000, 1, 1, 1, &object_001748F4, NULL };

NJS_MATERIAL matlist_0017495C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00174970[] = {
	6, 1, 0, 4, 3, 1, 2,
	4, 3, 0, 2, 1
};

NJS_TEX uv_00174988[] = {
	{ 240, 123 },
	{ 182, 53 },
	{ 186, 85 },
	{ 128, 124 },
	{ 240, 123 },
	{ 188, 181 },
	{ 240, 123 },
	{ 189, 251 },
	{ 188, 182 },
	{ 129, 124 }
};

NJS_MESHSET_SADX meshlist_001749B0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00174970, NULL, NULL, NULL, uv_00174988, NULL }
};

NJS_VECTOR vertex_001749C8[] = {
	{ -0.346533f, 0.049115f, 0.005465f },
	{ 1.204057f, -0.075057f, 0.457383f },
	{ 1.109705f, 0.461946f, 0.074292f },
	{ 1.209348f, -0.053372f, -0.355668f },
	{ 1.12264f, -0.420734f, -0.007759f }
};

NJS_VECTOR normal_00174A04[] = {
	{ -0.999036f, 0.034824f, -0.026736f },
	{ 0.508236f, -0.1367f, 0.8502989f },
	{ 0.366626f, 0.929045f, 0.049609f },
	{ 0.54305f, -0.041697f, -0.8386649f },
	{ 0.34793f, -0.934678f, -0.07295299f }
};

NJS_MODEL_SADX attach_00174A40 = { vertex_001749C8, normal_00174A04, LengthOfArray(vertex_001749C8), meshlist_001749B0, matlist_0017495C, LengthOfArray(meshlist_001749B0), LengthOfArray(matlist_0017495C),{ 0.431408f, 0.020606f, 0.050858f }, 0.894412f, NULL };

NJS_OBJECT object_00174A68 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00174A40, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00174A9C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.210041f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00174A68 };

NJS_OBJECT object_00174AD0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFC283, 1, 1, 1, &object_00174A9C, NULL };

NJS_OBJECT object_00174B04 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.204095f, -0.585884f, 0.459274f, 0, 0, 0xFFFFC000, 1, 1, 1, &object_00174AD0, &object_00174928 };

NJS_MATERIAL matlist_00174B38[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00174B4C[] = {
	4, 3, 2, 0, 1,
	6, 3, 0, 4, 1, 3, 2
};

NJS_TEX uv_00174B64[] = {
	{ 240, 123 },
	{ 188, 182 },
	{ 189, 251 },
	{ 129, 124 },
	{ 128, 124 },
	{ 182, 53 },
	{ 186, 85 },
	{ 240, 123 },
	{ 128, 124 },
	{ 188, 181 }
};

NJS_MESHSET_SADX meshlist_00174B8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00174B4C, NULL, NULL, NULL, uv_00174B64, NULL }
};

NJS_VECTOR vertex_00174BA4[] = {
	{ -0.346533f, 0.049115f, -0.005466f },
	{ 1.204057f, -0.075057f, -0.457383f },
	{ 1.109705f, 0.461946f, -0.074292f },
	{ 1.209348f, -0.053372f, 0.355668f },
	{ 1.12264f, -0.420734f, 0.007759f }
};

NJS_VECTOR normal_00174BE0[] = {
	{ -0.999036f, 0.034824f, 0.026735f },
	{ 0.508236f, -0.1367f, -0.8502989f },
	{ 0.366625f, 0.929045f, -0.049609f },
	{ 0.54305f, -0.041697f, 0.8386649f },
	{ 0.34793f, -0.934678f, 0.07295299f }
};

NJS_MODEL_SADX attach_00174C1C = { vertex_00174BA4, normal_00174BE0, LengthOfArray(vertex_00174BA4), meshlist_00174B8C, matlist_00174B38, LengthOfArray(meshlist_00174B8C), LengthOfArray(matlist_00174B38),{ 0.431408f, 0.020606f, -0.050858f }, 0.894412f, NULL };

NJS_OBJECT object_00174C44 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00174C1C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00174C78 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.210041f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00174C44 };

NJS_OBJECT object_00174CAC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFC283, 1, 1, 1, &object_00174C78, NULL };

NJS_OBJECT object_00174CE0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.204095f, -0.585884f, -0.459274f, 0, 0, 0xFFFFC000, 1, 1, 1, &object_00174CAC, &object_00174B04 };

NJS_MATERIAL matlist_00174D14[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00174D28[] = {
	6, 1, 0, 4, 3, 1, 2,
	4, 3, 0, 2, 1
};

NJS_TEX uv_00174D40[] = {
	{ 130, 124 },
	{ 172, 32 },
	{ 177, 77 },
	{ 240, 120 },
	{ 130, 124 },
	{ 186, 201 },
	{ 130, 125 },
	{ 192, 252 },
	{ 186, 201 },
	{ 240, 120 }
};

NJS_MESHSET_SADX meshlist_00174D68[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00174D28, NULL, NULL, NULL, uv_00174D40, NULL }
};

NJS_VECTOR vertex_00174D80[] = {
	{ -0.453829f, -0.041477f, -0.011021f },
	{ 1.184373f, 0.156199f, 0.672215f },
	{ 0.921188f, 0.529485f, -0.032504f },
	{ 1.256016f, -0.244313f, -0.032504f },
	{ 1.189289f, -0.311916f, 0.406191f }
};

NJS_VECTOR normal_00174DBC[] = {
	{ -0.9858339f, -0.081636f, -0.146514f },
	{ 0.454019f, 0.295061f, 0.840718f },
	{ 0.189526f, 0.8842289f, -0.426871f },
	{ 0.650726f, -0.464949f, -0.600315f },
	{ 0.439545f, -0.779685f, 0.445973f }
};

NJS_MODEL_SADX attach_00174DF8 = { vertex_00174D80, normal_00174DBC, LengthOfArray(vertex_00174D80), meshlist_00174D68, matlist_00174D14, LengthOfArray(meshlist_00174D68), LengthOfArray(matlist_00174D14),{ 0.401093f, 0.108784f, 0.319855f }, 0.952828f, NULL };

NJS_OBJECT object_00174E20 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00174DF8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00174E54 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.439153f, -0.00001f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00174E20 };

NJS_OBJECT object_00174E88 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFB8CA, 1, 1, 1, &object_00174E54, NULL };

NJS_OBJECT object_00174EBC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.372801f, 0.98512f, 0.463997f, 0, 0, 0xFFFFC000, 1, 1, 1, &object_00174E88, &object_00174CE0 };

NJS_MATERIAL matlist_00174EF0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00174F04[] = {
	4, 3, 2, 0, 1,
	6, 3, 0, 4, 1, 3, 2
};

NJS_TEX uv_00174F1C[] = {
	{ 130, 125 },
	{ 186, 201 },
	{ 192, 252 },
	{ 240, 120 },
	{ 240, 120 },
	{ 172, 32 },
	{ 177, 77 },
	{ 130, 124 },
	{ 240, 119 },
	{ 186, 201 }
};

NJS_MESHSET_SADX meshlist_00174F44[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00174F04, NULL, NULL, NULL, uv_00174F1C, NULL }
};

NJS_VECTOR vertex_00174F5C[] = {
	{ -0.453829f, -0.041477f, 0.011021f },
	{ 1.184373f, 0.156199f, -0.672215f },
	{ 0.921188f, 0.529485f, 0.032504f },
	{ 1.256016f, -0.244313f, 0.032503f },
	{ 1.189289f, -0.311916f, -0.406192f }
};

NJS_VECTOR normal_00174F98[] = {
	{ -0.9858339f, -0.081636f, 0.146513f },
	{ 0.454019f, 0.295061f, -0.840718f },
	{ 0.189526f, 0.8842289f, 0.426871f },
	{ 0.650726f, -0.464949f, 0.600315f },
	{ 0.439545f, -0.779685f, -0.445973f }
};

NJS_MODEL_SADX attach_00174FD4 = { vertex_00174F5C, normal_00174F98, LengthOfArray(vertex_00174F5C), meshlist_00174F44, matlist_00174EF0, LengthOfArray(meshlist_00174F44), LengthOfArray(matlist_00174EF0),{ 0.401093f, 0.108785f, -0.319856f }, 0.952828f, NULL };

NJS_OBJECT object_00174FFC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00174FD4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00175030 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.439153f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00174FFC };

NJS_OBJECT object_00175064 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFB8CA, 1, 1, 1, &object_00175030, NULL };

NJS_OBJECT object_00175098 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.372801f, 0.98512f, -0.463997f, 0, 0, 0xFFFFC000, 1, 1, 1, &object_00175064, &object_00174EBC };

NJS_MATERIAL matlist_001750CC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001750E0[] = {
	0x8000u | 5, 1, 3, 0, 2, 1
};

NJS_TEX uv_001750EC[] = {
	{ 62, 15 },
	{ 6, 67 },
	{ 200, 241 },
	{ 47, 234 },
	{ 6, 67 }
};

NJS_MESHSET_SADX meshlist_00175100[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001750E0, NULL, NULL, NULL, uv_001750EC, NULL }
};

NJS_VECTOR vertex_00175118[] = {
	{ 1.006772f, 0.007840999f, 0 },
	{ -0.175129f, 0.011705f, 0.113923f },
	{ -0.11578f, -0.219774f, 0 },
	{ -0.175129f, 0.011705f, -0.113923f }
};

NJS_VECTOR normal_00175148[] = {
	{ 0.9979089f, 0.06462599f, 0.000006f },
	{ 0.077465f, 0.61753f, 0.782724f },
	{ 0.198722f, -0.980056f, 0 },
	{ 0.077465f, 0.61753f, -0.782724f }
};

NJS_MODEL_SADX attach_00175178 = { vertex_00175118, normal_00175148, LengthOfArray(vertex_00175118), meshlist_00175100, matlist_001750CC, LengthOfArray(meshlist_00175100), LengthOfArray(matlist_001750CC),{ 0.415822f, -0.104035f, 0 }, 0.602178f, NULL };

NJS_OBJECT object_001751A0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00175178, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001751D4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001751E8[] = {
	4, 1, 2, 3, 0,
	4, 1, 3, 4, 0,
	4, 1, 4, 2, 0
};

NJS_TEX uv_00175208[] = {
	{ 61, 37 },
	{ 23, 186 },
	{ 98, 192 },
	{ 56, 100 },
	{ 56, 37 },
	{ 97, 183 },
	{ 21, 178 },
	{ 62, 96 },
	{ 56, 27 },
	{ 19, 183 },
	{ 101, 182 },
	{ 60, 96 }
};

NJS_MESHSET_SADX meshlist_00175238[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_001751E8, NULL, NULL, NULL, uv_00175208, NULL }
};

NJS_VECTOR vertex_00175250[] = {
	{ 1.119424f, 0.003621f, 0 },
	{ -0.017351f, -0.011755f, 0 },
	{ 0.734279f, -0.001588f, 0.469812f },
	{ 0.728777f, 0.405244f, -0.234906f },
	{ 0.739782f, -0.40842f, -0.234906f }
};

NJS_VECTOR normal_0017528C[] = {
	{ 0.999909f, 0.013524f, 0 },
	{ -0.999909f, -0.013525f, 0 },
	{ 0.123551f, 0.001671f, 0.992337f },
	{ 0.111928f, 0.860981f, -0.496168f },
	{ 0.135174f, -0.857639f, -0.496168f }
};

NJS_MODEL_SADX attach_001752C8 = { vertex_00175250, normal_0017528C, LengthOfArray(vertex_00175250), meshlist_00175238, matlist_001751D4, LengthOfArray(meshlist_00175238), LengthOfArray(matlist_001751D4),{ 0.5510359f, -0.001588f, 0.117453f }, 0.5815049f, NULL };

NJS_OBJECT object_001752F0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001752C8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_00175324 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 1.102611f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001752F0 };

NJS_OBJECT object_00175358 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.919385f, 0, 0, 0, 0, 0xD0, 1, 1, 1, &object_00175324, &object_001751A0 };

NJS_OBJECT object_0017538C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFDDCC, 1, 1, 1, &object_00175358, NULL };

NJS_OBJECT object_001753C0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.733869f, -0.832487f, 0, 0, 0, 0xFFFFC000, 1, 1, 1, &object_0017538C, &object_00175098 };

NJS_MATERIAL matlist_001753F4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00175408[] = {
	3, 15, 2, 5,
	7, 0, 7, 4, 5, 1, 2, 11,
	4, 11, 0, 1, 4,
	0x8000u | 7, 13, 10, 6, 8, 3, 12, 9,
	3, 14, 9, 3,
	3, 3, 6, 14,
	0x8000u | 14, 9, 15, 14, 2, 6, 11, 13, 0, 10, 7, 8, 5, 12, 15
};

NJS_TEX uv_00175468[] = {
	{ 117, 65 },
	{ 67, 130 },
	{ 191, 82 },
	{ 208, 238 },
	{ 154, 148 },
	{ 240, 151 },
	{ 191, 82 },
	{ 154, 148 },
	{ 67, 130 },
	{ 109, 180 },
	{ 109, 180 },
	{ 208, 238 },
	{ 154, 148 },
	{ 240, 151 },
	{ 89, 243 },
	{ 109, 180 },
	{ 28, 169 },
	{ 67, 130 },
	{ 43, 104 },
	{ 117, 65 },
	{ 70, 35 },
	{ 43, 104 },
	{ 70, 35 },
	{ 19, 88 },
	{ 43, 104 },
	{ 28, 169 },
	{ 19, 88 },
	{ 70, 35 },
	{ 117, 65 },
	{ 43, 104 },
	{ 67, 130 },
	{ 28, 169 },
	{ 109, 180 },
	{ 89, 243 },
	{ 208, 238 },
	{ 109, 180 },
	{ 154, 148 },
	{ 67, 130 },
	{ 191, 82 },
	{ 117, 65 },
	{ 170, 39 }
};

NJS_MESHSET_SADX meshlist_0017550C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 7, poly_00175408, NULL, NULL, NULL, uv_00175468, NULL }
};

NJS_VECTOR vertex_00175524[] = {
	{ 1.581075f, -1.045238f, 0 },
	{ 1.775344f, -0.559018f, 0.624617f },
	{ 1.426684f, 0.193684f, 0.786032f },
	{ 0.770874f, 1.021882f, -0.5772049f },
	{ 2.066084f, -0.654252f, 0 },
	{ 1.996046f, -0.024323f, 0 },
	{ 0.875321f, 0.342543f, 0 },
	{ 1.775344f, -0.559018f, -0.624617f },
	{ 1.426684f, 0.193684f, -0.786032f },
	{ 1.701127f, 1.307066f, 0 },
	{ 1.130412f, -0.594462f, -0.709551f },
	{ 1.130412f, -0.594462f, 0.709551f },
	{ 2.210765f, 0.773664f, -0.436205f },
	{ 0.862384f, -0.784796f, 0 },
	{ 0.770874f, 1.021882f, 0.5772049f },
	{ 2.210766f, 0.773664f, 0.436204f }
};

NJS_VECTOR normal_001755E4[] = {
	{ 0.170125f, -0.985422f, 0 },
	{ 0.583823f, -0.334724f, 0.739669f },
	{ -0.017726f, 0.022802f, 0.9995829f },
	{ -0.662296f, 0.425229f, -0.616882f },
	{ 0.927756f, -0.373188f, 0 },
	{ 0.992561f, -0.121745f, 0 },
	{ -0.98401f, -0.178112f, 0 },
	{ 0.583823f, -0.334724f, -0.739669f },
	{ -0.017726f, 0.022802f, -0.9995829f },
	{ 0.090646f, 0.995883f, 0 },
	{ -0.468912f, -0.400862f, -0.78704f },
	{ -0.468911f, -0.400862f, 0.78704f },
	{ 0.712799f, 0.042853f, -0.700058f },
	{ -0.82119f, -0.570654f, 0 },
	{ -0.662296f, 0.425229f, 0.616882f },
	{ 0.7128f, 0.042853f, 0.700057f }
};

NJS_MODEL_SADX attach_001756A4 = { vertex_00175524, normal_001755E4, LengthOfArray(vertex_00175524), meshlist_0017550C, matlist_001753F4, LengthOfArray(meshlist_0017550C), LengthOfArray(matlist_001753F4),{ 1.49082f, 0.130914f, 0 }, 1.379005f, NULL };

NJS_OBJECT object_001756CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001756A4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001753C0 };

NJS_OBJECT object_00175700 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.753023f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001756CC };

NJS_OBJECT object_00175734 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x4000, 1, 1, 1, &object_00175700, NULL };

NJS_OBJECT object_00175768 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0x4000, 0, 1, 1, 1, &object_00175734, NULL };

NJS_OBJECT object_0017579C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00175768, NULL };

//LION animation

NJS_MKEY_F _17725C_0_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_0_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_1_pos[] = {
	{ 0, 0, 0.391249f, 0.06491899f },
	{ 1, 0, 0.367401f, 0.0589f },
	{ 2, 0, 0.30453f, 0.043431f },
	{ 3, 0, 0.215643f, 0.022393f },
	{ 4, 0, 0.113747f, -0.000331f },
	{ 5, 0, 0.011852f, -0.02086f },
	{ 6, 0, -0.07703499f, -0.035311f },
	{ 7, 0, -0.139906f, -0.039803f },
	{ 8, 0, -0.163754f, -0.030454f },
	{ 9, 0, -0.139906f, -0.012908f },
	{ 10, 0, -0.07703499f, 0.004208f },
	{ 11, 0, 0.011852f, 0.020306f },
	{ 12, 0, 0.113747f, 0.034797f },
	{ 13, 0, 0.215643f, 0.047092f },
	{ 14, 0, 0.30453f, 0.056604f },
	{ 15, 0, 0.367401f, 0.06274199f },
	{ 16, 0, 0.391249f, 0.06491899f }
};

NJS_MKEY_A _17725C_1_rot[] = {
	{ 0, 0, 0x3FFF, 0 },
	{ 16, 0, 0x3FFF, 0 }
};

NJS_MKEY_F _17725C_2_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_2_rot[] = {
	{ 0, 0, 0, 0x38EE },
	{ 1, 0, 0, 0x3CAF },
	{ 2, 0, 0, 0x40EB },
	{ 3, 0, 0, 0x4544 },
	{ 4, 0, 0, 0x495A },
	{ 5, 0, 0, 0x4CD1 },
	{ 6, 0, 0, 0x4F49 },
	{ 7, 0, 0, 0x5064 },
	{ 8, 0, 0, 0x4FC4 },
	{ 9, 0, 0, 0x4D2E },
	{ 10, 0, 0, 0x4923 },
	{ 11, 0, 0, 0x4453 },
	{ 12, 0, 0, 0x3F6F },
	{ 13, 0, 0, 0x3B29 },
	{ 14, 0, 0, 0x3831 },
	{ 15, 0, 0, 0x3737 },
	{ 16, 0, 0, 0x38EE }
};

NJS_MKEY_F _17725C_3_pos[] = {
	{ 0, 4.753023f, 0, 0 },
	{ 16, 4.753023f, 0, 0 }
};

NJS_MKEY_A _17725C_3_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_4_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_4_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_5_pos[] = {
	{ 0, 1.733869f, -0.897733f, 0 },
	{ 16, 1.733869f, -0.897733f, 0 }
};

NJS_MKEY_A _17725C_5_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17725C_6_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_6_rot[] = {
	{ 0, 0, 0, 0xFFFFF58E },
	{ 1, 0, 0, 0xFFFFF41A },
	{ 2, 0, 0, 0xFFFFF413 },
	{ 3, 0, 0, 0xFFFFF57C },
	{ 4, 0, 0, 0xFFFFF7F0 },
	{ 5, 0, 0, 0xFFFFFB05 },
	{ 6, 0, 0, 0xFFFFFE50 },
	{ 7, 0, 0, 0x168 },
	{ 8, 0, 0, 0x3E3 },
	{ 9, 0, 0, 0x556 },
	{ 10, 0, 0, 0x55D },
	{ 11, 0, 0, 0x3F4 },
	{ 12, 0, 0, 0x180 },
	{ 13, 0, 0, 0xFFFFFE6C },
	{ 14, 0, 0, 0xFFFFFB21 },
	{ 15, 0, 0, 0xFFFFF809 },
	{ 16, 0, 0, 0xFFFFF58E }
};

NJS_MKEY_F _17725C_7_pos[] = {
	{ 0, 0.919385f, 0, 0 },
	{ 16, 0.919385f, 0, 0 }
};

NJS_MKEY_A _17725C_7_rot[] = {
	{ 0, 0, 0, 0xFFFFFEA0 },
	{ 1, 0, 0, 0xFFFFF76F },
	{ 2, 0, 0, 0xFFFFF1AF },
	{ 3, 0, 0, 0xFFFFEE9B },
	{ 4, 0, 0, 0xFFFFEEC8 },
	{ 5, 0, 0, 0xFFFFF0A9 },
	{ 6, 0, 0, 0xFFFFF3D6 },
	{ 7, 0, 0, 0xFFFFF806 },
	{ 8, 0, 0, 0xFFFFFCEF },
	{ 9, 0, 0, 0x249 },
	{ 10, 0, 0, 0x7CC },
	{ 11, 0, 0, 0xD2D },
	{ 12, 0, 0, 0x110F },
	{ 13, 0, 0, 0x1079 },
	{ 14, 0, 0, 0xC61 },
	{ 15, 0, 0, 0x604 },
	{ 16, 0, 0, 0xFFFFFEA0 }
};

NJS_MKEY_F _17725C_8_pos[] = {
	{ 0, 1.102611f, 0, 0 },
	{ 16, 1.102611f, 0, 0 }
};

NJS_MKEY_A _17725C_8_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_9_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_9_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_10_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_10_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_11_pos[] = {
	{ 0, 1.372801f, 0.98512f, -0.463997f },
	{ 1, 1.378453f, 0.982893f, -0.463997f },
	{ 2, 1.392586f, 0.977326f, -0.463997f },
	{ 3, 1.410957f, 0.970089f, -0.463997f },
	{ 4, 1.429329f, 0.9628519f, -0.463997f },
	{ 5, 1.443461f, 0.957285f, -0.463997f },
	{ 6, 1.449114f, 0.955058f, -0.463997f },
	{ 7, 1.446977f, 0.9559f, -0.463997f },
	{ 8, 1.441177f, 0.958185f, -0.463997f },
	{ 9, 1.43263f, 0.961552f, -0.463997f },
	{ 10, 1.422252f, 0.9656399f, -0.463997f },
	{ 11, 1.410957f, 0.970089f, -0.463997f },
	{ 12, 1.399663f, 0.974538f, -0.463997f },
	{ 13, 1.389284f, 0.978626f, -0.463997f },
	{ 14, 1.380737f, 0.981993f, -0.463997f },
	{ 15, 1.374938f, 0.984278f, -0.463997f },
	{ 16, 1.372801f, 0.98512f, -0.463997f }
};

NJS_MKEY_A _17725C_11_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17725C_12_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_12_rot[] = {
	{ 0, 0, 0x61C, 0xFFFF93C1 },
	{ 1, 0, 0x5D9, 0xFFFF9BF2 },
	{ 2, 0, 0x528, 0xFFFFA3A8 },
	{ 3, 0, 0x42D, 0xFFFFAAFD },
	{ 4, 0, 0x30E, 0xFFFFB20A },
	{ 5, 0, 0x1EF, 0xFFFFB8E8 },
	{ 6, 0, 0xF4, 0xFFFFBFB0 },
	{ 7, 0, 0x43, 0xFFFFC67C },
	{ 8, 0, 0, 0xFFFFCD64 },
	{ 9, 0, 0x43, 0xFFFFCEB7 },
	{ 10, 0, 0xF4, 0xFFFFC604 },
	{ 11, 0, 0x1EF, 0xFFFFB724 },
	{ 12, 0, 0x30E, 0xFFFFA5F7 },
	{ 13, 0, 0x42D, 0xFFFF965B },
	{ 14, 0, 0x528, 0xFFFF8C31 },
	{ 15, 0, 0x5D9, 0xFFFF8B56 },
	{ 16, 0, 0x61C, 0xFFFF93C1 }
};

NJS_MKEY_F _17725C_13_pos[] = {
	{ 0, 1.439153f, 0, 0 },
	{ 16, 1.439153f, 0, 0 }
};

NJS_MKEY_A _17725C_13_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_14_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_14_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_15_pos[] = {
	{ 0, 1.372801f, 0.98512f, 0.463997f },
	{ 1, 1.378453f, 0.982893f, 0.463997f },
	{ 2, 1.392586f, 0.977326f, 0.463997f },
	{ 3, 1.410957f, 0.970089f, 0.463997f },
	{ 4, 1.429329f, 0.9628519f, 0.463997f },
	{ 5, 1.443461f, 0.957285f, 0.463997f },
	{ 6, 1.449114f, 0.955058f, 0.463997f },
	{ 7, 1.446977f, 0.9559f, 0.463997f },
	{ 8, 1.441177f, 0.958185f, 0.463997f },
	{ 9, 1.43263f, 0.961552f, 0.463997f },
	{ 10, 1.422252f, 0.9656399f, 0.463997f },
	{ 11, 1.410957f, 0.970089f, 0.463997f },
	{ 12, 1.399663f, 0.974538f, 0.463997f },
	{ 13, 1.389284f, 0.978626f, 0.463997f },
	{ 14, 1.380737f, 0.981993f, 0.463997f },
	{ 15, 1.374937f, 0.984278f, 0.463997f },
	{ 16, 1.372801f, 0.98512f, 0.463997f }
};

NJS_MKEY_A _17725C_15_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17725C_16_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_16_rot[] = {
	{ 0, 0, 0xFFFFF913, 0xFFFF8BF9 },
	{ 1, 0, 0xFFFFF960, 0xFFFF8E07 },
	{ 2, 0, 0xFFFFFA28, 0xFFFF9399 },
	{ 3, 0, 0xFFFFFB44, 0xFFFF9BCE },
	{ 4, 0, 0xFFFFFC8A, 0xFFFFA5C4 },
	{ 5, 0, 0xFFFFFDCF, 0xFFFFB09B },
	{ 6, 0, 0xFFFFFEEB, 0xFFFFBB71 },
	{ 7, 0, 0xFFFFFFB4, 0xFFFFC563 },
	{ 8, 0, 0, 0xFFFFCD92 },
	{ 9, 0, 0xFFFFFFB4, 0xFFFFD01D },
	{ 10, 0, 0xFFFFFEEB, 0xFFFFCB34 },
	{ 11, 0, 0xFFFFFDCF, 0xFFFFC106 },
	{ 12, 0, 0xFFFFFC8A, 0xFFFFB3C7 },
	{ 13, 0, 0xFFFFFB44, 0xFFFFA5A8 },
	{ 14, 0, 0xFFFFFA28, 0xFFFF98DA },
	{ 15, 0, 0xFFFFF960, 0xFFFF8F8F },
	{ 16, 0, 0xFFFFF913, 0xFFFF8BF9 }
};

NJS_MKEY_F _17725C_17_pos[] = {
	{ 0, 1.439153f, -0.00001f, 0 },
	{ 16, 1.439153f, -0.00001f, 0 }
};

NJS_MKEY_A _17725C_17_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_18_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_18_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_19_pos[] = {
	{ 0, 1.204095f, -0.585884f, -0.459274f },
	{ 1, 1.203622f, -0.577716f, -0.459274f },
	{ 2, 1.202375f, -0.556183f, -0.459274f },
	{ 3, 1.200611f, -0.52574f, -0.459274f },
	{ 4, 1.19859f, -0.490842f, -0.459274f },
	{ 5, 1.196569f, -0.455944f, -0.459274f },
	{ 6, 1.194806f, -0.425501f, -0.459274f },
	{ 7, 1.193558f, -0.403968f, -0.459274f },
	{ 8, 1.193085f, -0.3958f, -0.459274f },
	{ 9, 1.193558f, -0.403968f, -0.459274f },
	{ 10, 1.194806f, -0.425501f, -0.459274f },
	{ 11, 1.196569f, -0.455944f, -0.459274f },
	{ 12, 1.19859f, -0.490842f, -0.459274f },
	{ 13, 1.200611f, -0.52574f, -0.459274f },
	{ 14, 1.202375f, -0.556183f, -0.459274f },
	{ 15, 1.203622f, -0.577716f, -0.459274f },
	{ 16, 1.204095f, -0.585884f, -0.459274f }
};

NJS_MKEY_A _17725C_19_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17725C_20_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_20_rot[] = {
	{ 0, 0, 0, 0x56F },
	{ 1, 0, 0, 0x11F },
	{ 2, 0, 0, 0xFFFFF5C3 },
	{ 3, 0, 0, 0xFFFFE5B4 },
	{ 4, 0, 0, 0xFFFFD34E },
	{ 5, 0, 0, 0xFFFFC0ED },
	{ 6, 0, 0, 0xFFFFB0ED },
	{ 7, 0, 0, 0xFFFFA5A8 },
	{ 8, 0, 0, 0xFFFFA17A },
	{ 10, 0, 0, 0xFFFFA178 },
	{ 11, 0, 0, 0xFFFFA707 },
	{ 12, 0, 0, 0xFFFFB8E9 },
	{ 13, 0, 0, 0xFFFFD155 },
	{ 14, 0, 0, 0xFFFFEA41 },
	{ 15, 0, 0, 0xFFFFFDA2 },
	{ 16, 0, 0, 0x56F }
};

NJS_MKEY_F _17725C_21_pos[] = {
	{ 0, 1.210041f, 0, 0 },
	{ 16, 1.210041f, 0, 0 }
};

NJS_MKEY_A _17725C_21_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_22_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_22_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_23_pos[] = {
	{ 0, 1.204095f, -0.585884f, 0.459274f },
	{ 1, 1.203622f, -0.577716f, 0.459274f },
	{ 2, 1.202375f, -0.556183f, 0.459274f },
	{ 3, 1.200611f, -0.52574f, 0.459274f },
	{ 4, 1.19859f, -0.490842f, 0.459274f },
	{ 5, 1.196569f, -0.455944f, 0.459274f },
	{ 6, 1.194806f, -0.425501f, 0.459274f },
	{ 7, 1.193558f, -0.403968f, 0.459274f },
	{ 8, 1.193085f, -0.3958f, 0.459274f },
	{ 9, 1.193558f, -0.403968f, 0.459274f },
	{ 10, 1.194806f, -0.425501f, 0.459274f },
	{ 11, 1.196569f, -0.455944f, 0.459274f },
	{ 12, 1.19859f, -0.490842f, 0.459274f },
	{ 13, 1.200611f, -0.52574f, 0.459274f },
	{ 14, 1.202375f, -0.556183f, 0.459274f },
	{ 15, 1.203622f, -0.577716f, 0.459274f },
	{ 16, 1.204095f, -0.585884f, 0.459274f }
};

NJS_MKEY_A _17725C_23_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17725C_24_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_24_rot[] = {
	{ 0, 0, 0, 0xFFFFF9A8 },
	{ 1, 0, 0, 0xFFFFEB32 },
	{ 2, 0, 0, 0xFFFFDC29 },
	{ 3, 0, 0, 0xFFFFCD54 },
	{ 4, 0, 0, 0xFFFFBF75 },
	{ 5, 0, 0, 0xFFFFB351 },
	{ 6, 0, 0, 0xFFFFA9AC },
	{ 7, 0, 0, 0xFFFFA34A },
	{ 8, 0, 0, 0xFFFFA0F1 },
	{ 9, 0, 0, 0xFFFFA0E6 },
	{ 10, 0, 0, 0xFFFFA0EA },
	{ 11, 0, 0, 0xFFFFAA13 },
	{ 12, 0, 0, 0xFFFFC592 },
	{ 13, 0, 0, 0xFFFFE6D3 },
	{ 14, 0, 0, 0xD4 },
	{ 15, 0, 0, 0x696 },
	{ 16, 0, 0, 0xFFFFF9A8 }
};

NJS_MKEY_F _17725C_25_pos[] = {
	{ 0, 1.210041f, 0, 0 },
	{ 16, 1.210041f, 0, 0 }
};

NJS_MKEY_A _17725C_25_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_26_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_26_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_27_pos[] = {
	{ 0, 1.92207f, 0.76382f, 0 },
	{ 16, 1.92207f, 0.76382f, 0 }
};

NJS_MKEY_A _17725C_27_rot[] = {
	{ 0, 0, 0, 0xFFFFC001 },
	{ 16, 0, 0, 0xFFFFC001 }
};

NJS_MKEY_F _17725C_28_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_28_rot[] = {
	{ 0, 0, 0, 0xFFFF985E },
	{ 1, 0, 0, 0xFFFF9777 },
	{ 2, 0, 0, 0xFFFF9518 },
	{ 3, 0, 0, 0xFFFF91BC },
	{ 4, 0, 0, 0xFFFF8DE3 },
	{ 5, 0, 0, 0xFFFF8A09 },
	{ 6, 0, 0, 0xFFFF86AE },
	{ 7, 0, 0, 0xFFFF844E },
	{ 8, 0, 0, 0xFFFF8367 },
	{ 9, 0, 0, 0xFFFF844E },
	{ 10, 0, 0, 0xFFFF86AE },
	{ 11, 0, 0, 0xFFFF8A09 },
	{ 12, 0, 0, 0xFFFF8DE3 },
	{ 13, 0, 0, 0xFFFF91BC },
	{ 14, 0, 0, 0xFFFF9518 },
	{ 15, 0, 0, 0xFFFF9777 },
	{ 16, 0, 0, 0xFFFF985E }
};

NJS_MKEY_F _17725C_29_pos[] = {
	{ 0, 2.287611f, 0, 0 },
	{ 16, 2.287611f, 0, 0 }
};

NJS_MKEY_A _17725C_29_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_30_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_30_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_31_pos[] = {
	{ 0, 0.828182f, -0.313004f, 0 },
	{ 16, 0.828182f, -0.313004f, 0 }
};

NJS_MKEY_A _17725C_31_rot[] = {
	{ 0, 0xFFFF8001, 0x7FFF, 0xFFFFF74E },
	{ 16, 0xFFFF8001, 0x7FFF, 0xFFFFF74E }
};

NJS_MKEY_F _17725C_32_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_32_rot[] = {
	{ 0, 0, 0, 0xFFFFFB08 },
	{ 1, 0, 0, 0xFFFFFB98 },
	{ 2, 0, 0, 0xFFFFFD15 },
	{ 3, 0, 0, 0xFFFFFF2F },
	{ 4, 0, 0, 0x197 },
	{ 5, 0, 0, 0x400 },
	{ 6, 0, 0, 0x61A },
	{ 7, 0, 0, 0x797 },
	{ 8, 0, 0, 0x827 },
	{ 9, 0, 0, 0x797 },
	{ 10, 0, 0, 0x61A },
	{ 11, 0, 0, 0x400 },
	{ 12, 0, 0, 0x197 },
	{ 13, 0, 0, 0xFFFFFF2F },
	{ 14, 0, 0, 0xFFFFFD15 },
	{ 15, 0, 0, 0xFFFFFB98 },
	{ 16, 0, 0, 0xFFFFFB08 }
};

NJS_MKEY_F _17725C_33_pos[] = {
	{ 0, 4.04396f, 0, 0 },
	{ 16, 4.04396f, 0, 0 }
};

NJS_MKEY_A _17725C_33_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_34_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_34_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_35_pos[] = {
	{ 0, 0.236441f, -0.822026f, -0.5006289f },
	{ 16, 0.236441f, -0.822026f, -0.5006289f }
};

NJS_MKEY_A _17725C_35_rot[] = {
	{ 0, 0, 0, 0x774D },
	{ 16, 0, 0, 0x774D }
};

NJS_MKEY_F _17725C_36_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_36_rot[] = {
	{ 0, 0, 0, 0x60C2 },
	{ 16, 0, 0, 0x60C2 }
};

NJS_MKEY_F _17725C_37_pos[] = {
	{ 0, 1.396948f, 0.000001f, 0 },
	{ 16, 1.396948f, 0.000001f, 0 }
};

NJS_MKEY_A _17725C_37_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_38_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_38_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_39_pos[] = {
	{ 0, 0.236441f, -0.822026f, 0.5006289f },
	{ 16, 0.236441f, -0.822026f, 0.5006289f }
};

NJS_MKEY_A _17725C_39_rot[] = {
	{ 0, 0, 0, 0x774D },
	{ 16, 0, 0, 0x774D }
};

NJS_MKEY_F _17725C_40_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_40_rot[] = {
	{ 0, 0, 0, 0x60C2 },
	{ 16, 0, 0, 0x60C2 }
};

NJS_MKEY_F _17725C_41_pos[] = {
	{ 0, 1.396947f, 0.000001f, 0 },
	{ 16, 1.396947f, 0.000001f, 0 }
};

NJS_MKEY_A _17725C_41_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_F _17725C_42_pos[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MKEY_A _17725C_42_rot[] = {
	{ 0, 0, 0, 0 },
	{ 16, 0, 0, 0 }
};

NJS_MDATA2 _17725C_mdat[] = {
	{ _17725C_0_pos, _17725C_0_rot, LengthOfArray(_17725C_0_pos), LengthOfArray(_17725C_0_rot) },
	{ _17725C_1_pos, _17725C_1_rot, LengthOfArray(_17725C_1_pos), LengthOfArray(_17725C_1_rot) },
	{ _17725C_2_pos, _17725C_2_rot, LengthOfArray(_17725C_2_pos), LengthOfArray(_17725C_2_rot) },
	{ _17725C_3_pos, _17725C_3_rot, LengthOfArray(_17725C_3_pos), LengthOfArray(_17725C_3_rot) },
	{ _17725C_4_pos, _17725C_4_rot, LengthOfArray(_17725C_4_pos), LengthOfArray(_17725C_4_rot) },
	{ _17725C_5_pos, _17725C_5_rot, LengthOfArray(_17725C_5_pos), LengthOfArray(_17725C_5_rot) },
	{ _17725C_6_pos, _17725C_6_rot, LengthOfArray(_17725C_6_pos), LengthOfArray(_17725C_6_rot) },
	{ _17725C_7_pos, _17725C_7_rot, LengthOfArray(_17725C_7_pos), LengthOfArray(_17725C_7_rot) },
	{ _17725C_8_pos, _17725C_8_rot, LengthOfArray(_17725C_8_pos), LengthOfArray(_17725C_8_rot) },
	{ _17725C_9_pos, _17725C_9_rot, LengthOfArray(_17725C_9_pos), LengthOfArray(_17725C_9_rot) },
	{ _17725C_10_pos, _17725C_10_rot, LengthOfArray(_17725C_10_pos), LengthOfArray(_17725C_10_rot) },
	{ _17725C_11_pos, _17725C_11_rot, LengthOfArray(_17725C_11_pos), LengthOfArray(_17725C_11_rot) },
	{ _17725C_12_pos, _17725C_12_rot, LengthOfArray(_17725C_12_pos), LengthOfArray(_17725C_12_rot) },
	{ _17725C_13_pos, _17725C_13_rot, LengthOfArray(_17725C_13_pos), LengthOfArray(_17725C_13_rot) },
	{ _17725C_14_pos, _17725C_14_rot, LengthOfArray(_17725C_14_pos), LengthOfArray(_17725C_14_rot) },
	{ _17725C_15_pos, _17725C_15_rot, LengthOfArray(_17725C_15_pos), LengthOfArray(_17725C_15_rot) },
	{ _17725C_16_pos, _17725C_16_rot, LengthOfArray(_17725C_16_pos), LengthOfArray(_17725C_16_rot) },
	{ _17725C_17_pos, _17725C_17_rot, LengthOfArray(_17725C_17_pos), LengthOfArray(_17725C_17_rot) },
	{ _17725C_18_pos, _17725C_18_rot, LengthOfArray(_17725C_18_pos), LengthOfArray(_17725C_18_rot) },
	{ _17725C_19_pos, _17725C_19_rot, LengthOfArray(_17725C_19_pos), LengthOfArray(_17725C_19_rot) },
	{ _17725C_20_pos, _17725C_20_rot, LengthOfArray(_17725C_20_pos), LengthOfArray(_17725C_20_rot) },
	{ _17725C_21_pos, _17725C_21_rot, LengthOfArray(_17725C_21_pos), LengthOfArray(_17725C_21_rot) },
	{ _17725C_22_pos, _17725C_22_rot, LengthOfArray(_17725C_22_pos), LengthOfArray(_17725C_22_rot) },
	{ _17725C_23_pos, _17725C_23_rot, LengthOfArray(_17725C_23_pos), LengthOfArray(_17725C_23_rot) },
	{ _17725C_24_pos, _17725C_24_rot, LengthOfArray(_17725C_24_pos), LengthOfArray(_17725C_24_rot) },
	{ _17725C_25_pos, _17725C_25_rot, LengthOfArray(_17725C_25_pos), LengthOfArray(_17725C_25_rot) },
	{ _17725C_26_pos, _17725C_26_rot, LengthOfArray(_17725C_26_pos), LengthOfArray(_17725C_26_rot) },
	{ _17725C_27_pos, _17725C_27_rot, LengthOfArray(_17725C_27_pos), LengthOfArray(_17725C_27_rot) },
	{ _17725C_28_pos, _17725C_28_rot, LengthOfArray(_17725C_28_pos), LengthOfArray(_17725C_28_rot) },
	{ _17725C_29_pos, _17725C_29_rot, LengthOfArray(_17725C_29_pos), LengthOfArray(_17725C_29_rot) },
	{ _17725C_30_pos, _17725C_30_rot, LengthOfArray(_17725C_30_pos), LengthOfArray(_17725C_30_rot) },
	{ _17725C_31_pos, _17725C_31_rot, LengthOfArray(_17725C_31_pos), LengthOfArray(_17725C_31_rot) },
	{ _17725C_32_pos, _17725C_32_rot, LengthOfArray(_17725C_32_pos), LengthOfArray(_17725C_32_rot) },
	{ _17725C_33_pos, _17725C_33_rot, LengthOfArray(_17725C_33_pos), LengthOfArray(_17725C_33_rot) },
	{ _17725C_34_pos, _17725C_34_rot, LengthOfArray(_17725C_34_pos), LengthOfArray(_17725C_34_rot) },
	{ _17725C_35_pos, _17725C_35_rot, LengthOfArray(_17725C_35_pos), LengthOfArray(_17725C_35_rot) },
	{ _17725C_36_pos, _17725C_36_rot, LengthOfArray(_17725C_36_pos), LengthOfArray(_17725C_36_rot) },
	{ _17725C_37_pos, _17725C_37_rot, LengthOfArray(_17725C_37_pos), LengthOfArray(_17725C_37_rot) },
	{ _17725C_38_pos, _17725C_38_rot, LengthOfArray(_17725C_38_pos), LengthOfArray(_17725C_38_rot) },
	{ _17725C_39_pos, _17725C_39_rot, LengthOfArray(_17725C_39_pos), LengthOfArray(_17725C_39_rot) },
	{ _17725C_40_pos, _17725C_40_rot, LengthOfArray(_17725C_40_pos), LengthOfArray(_17725C_40_rot) },
	{ _17725C_41_pos, _17725C_41_rot, LengthOfArray(_17725C_41_pos), LengthOfArray(_17725C_41_rot) },
	{ _17725C_42_pos, _17725C_42_rot, LengthOfArray(_17725C_42_pos), LengthOfArray(_17725C_42_rot) }
};

NJS_MOTION _17725C = { _17725C_mdat, 17, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

NJS_ACTION action__17725C = { &object_0017579C, &_17725C };
