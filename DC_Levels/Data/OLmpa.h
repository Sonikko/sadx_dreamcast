#include "SADXModLoader.h"

NJS_MATERIAL matlist_02296920[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 107, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_02296934[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_02296940[] = {
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_02296950[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_02296934, NULL, NULL, NULL, uv_02296940, NULL }
};

NJS_VECTOR vertex_0229696C[] = {
	{ 0, 2.5f, 2.5f },
	{ 0, -2.5f, 2.5f },
	{ 0, 2.5f, -2.5f },
	{ 0, -2.5f, -2.5f }
};

NJS_VECTOR normal_0229699C[] = {
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

NJS_MODEL_SADX attach_022969CC = { vertex_0229696C, normal_0229699C, LengthOfArray(vertex_0229696C), meshlist_02296950, matlist_02296920, LengthOfArray(meshlist_02296950), LengthOfArray(matlist_02296920),{ 0 }, 3.535534f, NULL };

NJS_OBJECT object_022969F8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_022969CC, 0, -0.65f, 7.378999f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02296A2C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 21, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02296A40[] = {
	6, 0, 4, 2, 3, 1, 5,
	4, 45, 49, 50, 52,
	4, 32, 36, 31, 33,
	0x8000u | 8, 36, 35, 32, 30, 31, 29, 33, 34,
	4, 29, 34, 30, 35,
	6, 54, 7, 53, 6, 55, 9,
	3, 19, 15, 22,
	3, 21, 14, 20,
	0x8000u | 6, 15, 18, 19, 23, 22, 13,
	0x8000u | 11, 13, 12, 22, 21, 15, 14, 18, 20, 23, 17, 13,
	0x8000u | 5, 17, 20, 16, 21, 12,
	3, 28, 25, 24,
	0x8000u | 5, 28, 27, 24, 26, 25,
	4, 38, 40, 39, 43,
	8, 41, 43, 44, 40, 42, 38, 37, 39,
	4, 37, 41, 42, 44,
	4, 46, 48, 47, 51,
	8, 49, 51, 52, 48, 50, 46, 45, 47,
	6, 55, 10, 53, 11, 54, 8
};

NJS_TEX uv_02296B38[] = {
	{ 96, 67 },
	{ 15, 84 },
	{ 96, 89 },
	{ 15, 106 },
	{ 96, 67 },
	{ 15, 84 },
	{ 0, 255 },
	{ 0, 224 },
	{ 15, 224 },
	{ 15, 196 },
	{ 206, 98 },
	{ 206, 133 },
	{ 174, 98 },
	{ 157, 133 },
	{ 206, 133 },
	{ 255, 133 },
	{ 206, 98 },
	{ 237, 98 },
	{ 174, 98 },
	{ 206, 98 },
	{ 157, 133 },
	{ 206, 133 },
	{ 206, 98 },
	{ 206, 133 },
	{ 237, 98 },
	{ 255, 133 },
	{ 96, 66 },
	{ 15, 209 },
	{ 102, 88 },
	{ 15, 236 },
	{ 96, 66 },
	{ 15, 209 },
	{ 206, 28 },
	{ 226, 28 },
	{ 236, 63 },
	{ 206, 63 },
	{ 206, 28 },
	{ 175, 63 },
	{ 226, 28 },
	{ 186, 28 },
	{ 206, 28 },
	{ 206, 63 },
	{ 236, 63 },
	{ 226, 98 },
	{ 226, 98 },
	{ 206, 98 },
	{ 236, 63 },
	{ 206, 63 },
	{ 226, 28 },
	{ 206, 28 },
	{ 186, 28 },
	{ 175, 63 },
	{ 206, 63 },
	{ 206, 98 },
	{ 226, 98 },
	{ 206, 98 },
	{ 175, 63 },
	{ 186, 98 },
	{ 206, 63 },
	{ 206, 98 },
	{ 220, 28 },
	{ 206, 28 },
	{ 206, 0 },
	{ 220, 28 },
	{ 206, 28 },
	{ 206, 0 },
	{ 192, 28 },
	{ 206, 28 },
	{ 15, 120 },
	{ 15, 92 },
	{ 0, 92 },
	{ 0, 61 },
	{ 0, 92 },
	{ 0, 61 },
	{ 15, 65 },
	{ 15, 92 },
	{ 15, 92 },
	{ 15, 120 },
	{ 0, 123 },
	{ 0, 92 },
	{ 0, 123 },
	{ 0, 92 },
	{ 15, 92 },
	{ 15, 65 },
	{ 15, 251 },
	{ 15, 224 },
	{ 0, 224 },
	{ 0, 193 },
	{ 0, 224 },
	{ 0, 193 },
	{ 15, 196 },
	{ 15, 224 },
	{ 15, 224 },
	{ 15, 251 },
	{ 0, 255 },
	{ 0, 224 },
	{ 96, 66 },
	{ 188, 50 },
	{ 102, 88 },
	{ 188, 72 },
	{ 96, 66 },
	{ 188, 50 }
};

NJS_MESHSET_SADX meshlist_02296CD0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 19, poly_02296A40, NULL, NULL, NULL, uv_02296B38, NULL }
};

NJS_VECTOR vertex_02296CF0[] = {
	{ -0.25f, 2.421667f, 3.435122f },
	{ 0.25f, 2.421667f, 3.435122f },
	{ 0, 1.921667f, 3.435122f },
	{ 0, 1.546667f, 0.549049f },
	{ -0.25f, 2.046667f, 0.544049f },
	{ 0.25f, 2.046667f, 0.544049f },
	{ 0, -1.428333f, 0.554976f },
	{ -0.25f, -0.828333f, 0.554976f },
	{ -0.25f, 2.821667f, 6.757123f },
	{ 0.25f, -0.828333f, 0.554976f },
	{ 0.25f, 2.821667f, 6.757123f },
	{ 0, 2.321667f, 6.757123f },
	{ -0.707106f, 1.721667f, 7.381126f },
	{ 0, 1.721667f, 8.088232f },
	{ -0.707106f, 3.321666f, 7.381126f },
	{ 0, 3.321666f, 8.088232f },
	{ 0, 1.721667f, 6.674018f },
	{ 0.707107f, 1.721667f, 7.381126f },
	{ 0, 3.321666f, 6.674018f },
	{ 0.707107f, 3.321666f, 7.381126f },
	{ 0, 2.521667f, 6.292181f },
	{ -1.088944f, 2.521667f, 7.381126f },
	{ 0, 2.521667f, 8.470068f },
	{ 1.088944f, 2.521667f, 7.381126f },
	{ 0, 3.971633f, 7.381096f },
	{ 0.5f, 3.321632f, 7.381096f },
	{ 0, 3.321632f, 6.881095f },
	{ -0.5f, 3.321632f, 7.381096f },
	{ 0, 3.321632f, 7.881096f },
	{ -1.131371f, 1.721667f, 7.381126f },
	{ 0, 1.721667f, 8.512493f },
	{ 0, 1.721667f, 6.249754f },
	{ 1.131371f, 1.721667f, 7.381126f },
	{ 0, 0.921667f, 5.638818f },
	{ -1.742311f, 0.921667f, 7.381125f },
	{ 0, 0.921667f, 9.123434f },
	{ 1.742311f, 0.921667f, 7.381125f },
	{ 0, 1.142893f, -0.00001f },
	{ 0, 1.227746f, 0.549999f },
	{ -0.707107f, 1.85f, -0.00001f },
	{ -0.622254f, 1.85f, 0.549999f },
	{ 0.707107f, 1.85f, -0.00001f },
	{ 0.622254f, 1.85f, 0.549999f },
	{ 0, 2.557106f, -0.00001f },
	{ 0, 2.472254f, 0.549999f },
	{ 0, -1.857107f, -0.00001f },
	{ 0, -1.772254f, 0.549999f },
	{ -0.707107f, -1.15f, -0.00001f },
	{ -0.622254f, -1.15f, 0.549999f },
	{ 0.707107f, -1.15f, -0.00001f },
	{ 0.622254f, -1.15f, 0.549999f },
	{ 0, -0.442893f, -0.00001f },
	{ 0, -0.527746f, 0.549999f },
	{ 0, 1.946667f, 3.656049f },
	{ -0.25f, 2.446667f, 3.436049f },
	{ 0.25f, 2.446667f, 3.436049f }
};

NJS_VECTOR normal_02296F90[] = {
	{ -0.892923f, -0.446462f, 0.057961f },
	{ 0.892923f, -0.446462f, 0.057961f },
	{ 0, -0.991678f, 0.128742f },
	{ 0, -0.991678f, 0.128742f },
	{ -0.892923f, -0.446462f, 0.057961f },
	{ 0.892923f, -0.446462f, 0.057961f },
	{ 0, -0.668788f, 0.743453f },
	{ -0.848754f, -0.353647f, 0.393129f },
	{ -0.89321f, -0.446605f, 0.052156f },
	{ 0.848754f, -0.353647f, 0.393129f },
	{ 0.89321f, -0.446605f, 0.052156f },
	{ 0, -0.99325f, 0.115995f },
	{ -0.902473f, -0.430747f, 0.000001f },
	{ 0, -0.430747f, 0.902473f },
	{ -0.672423f, 0.740167f, 0 },
	{ 0, 0.740167f, 0.672423f },
	{ 0, -0.430747f, -0.902472f },
	{ 0.902473f, -0.430747f, 0.000001f },
	{ 0, 0.740168f, -0.672422f },
	{ 0.672422f, 0.740167f, 0 },
	{ 0, 0, -1 },
	{ -1, 0, 0 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 0, 1, 0 },
	{ 0.792625f, 0.60971f, 0 },
	{ 0, 0.609711f, -0.792624f },
	{ -0.792625f, 0.60971f, 0 },
	{ 0, 0.60971f, 0.792625f },
	{ -0.583905f, 0.811822f, 0.000001f },
	{ 0, 0.811822f, 0.583905f },
	{ 0, 0.811822f, -0.583905f },
	{ 0.583905f, 0.811822f, 0.000001f },
	{ 0, 0.606932f, -0.794754f },
	{ -0.794753f, 0.606933f, 0 },
	{ 0, 0.606932f, 0.794754f },
	{ 0.794753f, 0.606933f, 0 },
	{ 0, -0.988308f, 0.152474f },
	{ 0, -0.77334f, 0.633992f },
	{ -0.988308f, 0, 0.152474f },
	{ -0.77334f, 0, 0.633992f },
	{ 0.988308f, 0, 0.152474f },
	{ 0.77334f, 0, 0.633992f },
	{ 0, 0.988308f, 0.152474f },
	{ 0, 0.77334f, 0.633992f },
	{ 0, -0.988308f, 0.152474f },
	{ 0, -0.77334f, 0.633992f },
	{ -0.988308f, 0, 0.152474f },
	{ -0.77334f, 0, 0.633992f },
	{ 0.988308f, 0, 0.152474f },
	{ 0.77334f, 0, 0.633992f },
	{ 0, 0.988308f, 0.152474f },
	{ 0, 0.77334f, 0.633992f },
	{ 0, -0.868646f, 0.495433f },
	{ -0.886187f, -0.408886f, 0.21791f },
	{ 0.886187f, -0.408886f, 0.21791f }
};

NJS_MODEL_SADX attach_02297230 = { vertex_02296CF0, normal_02296F90, LengthOfArray(vertex_02296CF0), meshlist_02296CD0, matlist_02296A2C, LengthOfArray(meshlist_02296CD0), LengthOfArray(matlist_02296A2C),{ 0, 1.057263f, 4.561717f }, 5.413208f, NULL };

NJS_OBJECT object_0229725C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_02297230, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_022969F8, NULL };

//NJS_OBJECT Lamp1 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_022969CC, -370, 22.65f, -385-7.378999f, 0, 0, 0, 1, 1, 1, &object_022969F8, NULL };
//NJS_OBJECT Lamp2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_022969CC, -370, 22.65f, -415-7.378999f, 0, 0, 0, 1, 1, 1, &object_022969F8, NULL };
//NJS_OBJECT Lamp3 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_022969CC, -370, 22.65f, -475-7.378999f, 0, 0, 0, 1, 1, 1, &object_022969F8, NULL };
//NJS_OBJECT Lamp4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_022969CC, -370, 22.65f, -535-7.378999f, 0, 0, 0, 1, 1, 1, &object_022969F8, NULL };
//NJS_OBJECT Lamp5 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_022969CC, -370, 22.65f, -565-7.378999f, 0, 0, 0, 1, 1, 1, &object_022969F8, NULL };
