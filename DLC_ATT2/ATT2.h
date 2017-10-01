#include <SADXModLoader.h>

NJS_TEXNAME textures_att2[4];
NJS_TEXLIST texlist_att2 = { arrayptrandlength(textures_att2) };

//Wooden thing


NJS_MATERIAL matlist_00000004[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00000040[] = {
	3, 4, 2, 0,
	3, 3, 5, 1,
	3, 6, 4, 0,
	3, 5, 7, 1,
	3, 2, 6, 0,
	3, 7, 3, 1,
	3, 27, 25, 23,
	3, 26, 28, 24,
	3, 29, 27, 23,
	3, 28, 30, 24,
	3, 25, 29, 23,
	3, 30, 26, 24
};

Sint16 poly_000000A0[] = {
	4, 5, 3, 4, 2,
	4, 7, 5, 6, 4,
	4, 3, 7, 2, 6,
	0x8000u | 6, 9, 13, 10, 8, 11, 12,
	0x8000u | 5, 14, 11, 9, 12, 13,
	4, 9, 14, 10, 11,
	4, 28, 26, 27, 25,
	4, 30, 28, 29, 27,
	4, 26, 30, 25, 29,
	0x8000u | 8, 32, 36, 34, 35, 33, 31, 32, 36,
	3, 37, 34, 32,
	3, 37, 33, 34,
	3, 32, 33, 37
};

Sint16 poly_0000012A[] = {
	4, 17, 21, 15, 19,
	4, 22, 18, 20, 16
};

NJS_TEX uv_00000140[] = {
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 },
	{ 120, 255 },
	{ 120, 0 },
	{ 255, 127 }
};

NJS_TEX uv_000001D0[] = {
	{ 0, -255 },
	{ 123, -255 },
	{ 0, 255 },
	{ 123, 255 },
	{ 3, -255 },
	{ 123, -255 },
	{ 3, 255 },
	{ 123, 255 },
	{ 123, 255 },
	{ 0, 255 },
	{ 123, -255 },
	{ 0, -255 },
	{ 131, -1382 },
	{ 131, 255 },
	{ 255, -1382 },
	{ 255, 255 },
	{ 131, -1382 },
	{ 131, 255 },
	{ 192, -1530 },
	{ 131, -1382 },
	{ 255, -1381 },
	{ 131, 255 },
	{ 255, 255 },
	{ 131, -1382 },
	{ 131, -1530 },
	{ 255, -1382 },
	{ 131, -1382 },
	{ 0, -255 },
	{ 123, -255 },
	{ 0, 255 },
	{ 123, 255 },
	{ 0, -255 },
	{ 123, -255 },
	{ 0, 255 },
	{ 123, 255 },
	{ 123, 255 },
	{ 0, 255 },
	{ 123, -255 },
	{ 0, -255 },
	{ 255, -1382 },
	{ 255, 255 },
	{ 131, -1382 },
	{ 131, 255 },
	{ 255, -1382 },
	{ 255, 255 },
	{ 131, -1382 },
	{ 131, 255 },
	{ 192, -1530 },
	{ 131, -1382 },
	{ 255, -1381 },
	{ 131, -1530 },
	{ 255, -1382 },
	{ 131, -1382 },
	{ 131, -1530 },
	{ 255, -1382 },
	{ 131, -1382 }
};

NJS_TEX uv_000002B0[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_000002D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 12, poly_00000040, NULL, NULL, NULL, uv_00000140, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 13, poly_000000A0, NULL, NULL, NULL, uv_000001D0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0000012A, NULL, NULL, NULL, uv_000002B0, NULL }
};

NJS_VECTOR vertex_00000318[] = {
	{ -11.53969f, 5.000003f, 0 },
	{ 11.53969f, 5.000002f, 0 },
	{ -11.53969f, 3.320004f, 0 },
	{ 11.53969f, 3.320004f, 0 },
	{ -11.53969f, 5.840003f, -2.598076f },
	{ 11.53969f, 5.840002f, -2.598076f },
	{ -11.53969f, 5.840002f, 2.598077f },
	{ 11.53969f, 5.840002f, 2.598077f },
	{ -11, -20.00981f, 0 },
	{ -9.5f, 25.57033f, 0.86603f },
	{ -11, 25.57033f, 0 },
	{ -9.5f, 25.57033f, -0.86603f },
	{ -9.5f, -20.00981f, -0.866025f },
	{ -9.5f, -20.00981f, 0.866026f },
	{ -9.5f, 31.58958f, 0 },
	{ -9.578423f, 5.783011f, -0.615231f },
	{ -9.578423f, 5.783011f, 0.615231f },
	{ -9.578423f, 24.44208f, -0.615231f },
	{ -9.578423f, 24.44208f, 0.615231f },
	{ 9.578423f, 5.783011f, -0.615231f },
	{ 9.578423f, 5.783011f, 0.615231f },
	{ 9.578423f, 24.44208f, -0.615231f },
	{ 9.578423f, 24.44208f, 0.615231f },
	{ -12.03969f, 25.27085f, 0 },
	{ 12.03969f, 25.27085f, 0 },
	{ -12.03969f, 26.45085f, 0 },
	{ 12.03969f, 26.45085f, 0 },
	{ -12.03969f, 24.43085f, 4.330127f },
	{ 12.03969f, 24.43085f, 4.330127f },
	{ -12.03969f, 24.43085f, -4.330128f },
	{ 12.03969f, 24.43085f, -4.330128f },
	{ 11, -20.00981f, 0 },
	{ 9.5f, 25.57033f, 0.86603f },
	{ 11, 25.57033f, 0 },
	{ 9.5f, 25.57033f, -0.86603f },
	{ 9.5f, -20.00981f, -0.866025f },
	{ 9.5f, -20.00981f, 0.866026f },
	{ 9.5f, 31.58958f, 0 }
};

NJS_VECTOR normal_000004E0[] = {
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.578972f, -0.815348f, 0 },
	{ 0.578971f, -0.815348f, 0 },
	{ -0.546535f, 0.314563f, -0.776112f },
	{ 0.546535f, 0.314563f, -0.776112f },
	{ -0.546535f, 0.314563f, 0.776112f },
	{ 0.546535f, 0.314563f, 0.776112f },
	{ -1, 0, 0 },
	{ 0.484133f, 0.061093f, 0.872859f },
	{ -0.993435f, 0.114397f, 0 },
	{ 0.484133f, 0.061093f, -0.872859f },
	{ 0.5f, 0, -0.866026f },
	{ 0.499999f, 0, 0.866026f },
	{ 0.081683f, 0.996658f, 0 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.623183f, 0.782076f, 0 },
	{ 0.623183f, 0.782076f, 0 },
	{ -0.540069f, -0.182225f, 0.821656f },
	{ 0.540069f, -0.182225f, 0.821657f },
	{ -0.540069f, -0.182224f, -0.821657f },
	{ 0.540069f, -0.182224f, -0.821657f },
	{ 1, 0, 0 },
	{ -0.484133f, 0.061093f, 0.872859f },
	{ 0.993435f, 0.114397f, 0 },
	{ -0.484133f, 0.061093f, -0.872859f },
	{ -0.5f, 0, -0.866026f },
	{ -0.499999f, 0, 0.866026f },
	{ -0.081683f, 0.996658f, 0 }
};

NJS_MODEL_SADX attach_000006A8 = { vertex_00000318, normal_000004E0, LengthOfArray<Sint32>(vertex_00000318), meshlist_000002D0, matlist_00000004, LengthOfArray<Uint16>(meshlist_000002D0), LengthOfArray<Uint16>(matlist_00000004),{ 0, 5.789887f, 0 }, 26.16055f, NULL };

NJS_OBJECT object_000006D0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_000006A8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

//Poster

NJS_MATERIAL matlist_00116FA0X[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

NJS_MATERIAL matlist_00116FA0Z[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

NJS_MATERIAL matlist_00116FA0W[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00116FB4X[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00116FC0X[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 0 },
	{ 255 },
};

NJS_TEX uv_00116FC0Y[] = {
	{ 255, 0 },
	{ 128 },
	{ 255, 255 },
	{ 128, 255 },
};

NJS_MESHSET_SADX meshlist_00116FD0X[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00116FB4X, NULL, NULL, NULL, uv_00116FC0X, NULL }
};

NJS_MESHSET_SADX meshlist_00116FD0Y[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00116FB4X, NULL, NULL, NULL, uv_00116FC0Y, NULL }
};

NJS_VECTOR vertex_00116FE8X[] = {
	{ 10.0f, 10.0f, 0 },
	{ -10.0f, 10.0f, 0 },
	{ 10.0f, -10.0f, 0 },
	{ -10.0f, -10.0f, 0 }
};

NJS_VECTOR vertex_00116FE8Y[] = {
	{ 0, -10.0f, 0 },
	{ 10.0f, -10.0f, 0 },
	{ 0, 10.0f, 0 },
	{ 10.0f, 10.0f, 0 }
};

NJS_VECTOR normal_00117018X[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_00117048Z = { vertex_00116FE8X, normal_00117018X, LengthOfArray(vertex_00116FE8X), meshlist_00116FD0X, matlist_00116FA0Z, LengthOfArray(meshlist_00116FD0X), LengthOfArray(matlist_00116FA0Z),{ 0, 1.5f, 0 }, 11.71537f, NULL };

NJS_MODEL_SADX attach_00117048W = { vertex_00116FE8X, normal_00117018X, LengthOfArray(vertex_00116FE8X), meshlist_00116FD0X, matlist_00116FA0W, LengthOfArray(meshlist_00116FD0X), LengthOfArray(matlist_00116FA0W),{ 0, 1.5f, 0 }, 11.71537f, NULL };

NJS_OBJECT poster_start = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00117048Z, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT poster_goal = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00117048W, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
