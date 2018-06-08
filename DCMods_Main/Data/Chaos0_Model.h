#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

enum CHAOS0TexName
{
	CHAOS0TexName_c2tx_brain,
	CHAOS0TexName_c2tx_eye1,
	CHAOS0TexName_c2tx_mizu0
};

NJS_MATERIAL matlist_02859CD8[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02859CEC[] = {
	8, 0, 9, 1
};

Sint16 poly_02859CF4[] = {
	2, 4, 3, 5
};

Sint16 poly_02859CFC[] = {
	0, 2, 1, 3
};

Sint16 poly_02859D04[] = {
	6, 8, 7, 9
};

Sint16 poly_02859D0C[] = {
	4, 6, 5, 7
};

NJS_TEX uv_02859D18[] = {
	{ 254, 39 },
	{ 254, 0 },
	{ 0, 71 },
	{ 0, 28 }
};

NJS_TEX uv_02859D28[] = {
	{ 255, 103 },
	{ 254, 207 },
	{ 0, 141 },
	{ 0, 255 }
};

NJS_TEX uv_02859D38[] = {
	{ 254, 0 },
	{ 255, 103 },
	{ 0, 28 },
	{ 0, 141 }
};

NJS_TEX uv_02859D48[] = {
	{ 254, 167 },
	{ 254, 39 },
	{ 0, 211 },
	{ 0, 71 }
};

NJS_TEX uv_02859D58[] = {
	{ 254, 207 },
	{ 254, 167 },
	{ 0, 255 },
	{ 0, 211 }
};

NJS_MESHSET_SADX meshlist_02859D68[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_02859CEC, NULL, NULL, NULL, uv_02859D18, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02859CF4, NULL, NULL, NULL, uv_02859D28, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02859CFC, NULL, NULL, NULL, uv_02859D38, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02859D04, NULL, NULL, NULL, uv_02859D48, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02859D0C, NULL, NULL, NULL, uv_02859D58, NULL }
};

NJS_VECTOR vertex_02859DF8[] = {
	{ 2.525106f, 0.123572f, 0.448218f },
	{ -0.210429f, -0.176372f, 0.296109f },
	{ 2.526533f, 0.932174f, -0.102599f },
	{ -0.210688f, 0.322563f, -0.306154f },
	{ 2.525106f, 0.123572f, -0.653416f },
	{ -0.210429f, -0.176372f, -0.908418f },
	{ 2.52565f, -0.524249f, -0.443023f },
	{ -0.210011f, -0.983665f, -0.678373f },
	{ 2.52565f, -0.524249f, 0.237825f },
	{ -0.210011f, -0.983665f, 0.066065f }
};

NJS_VECTOR normal_02859E70[] = {
	{ -0.126466f, 0.20571f, 0.970407f },
	{ -0.126466f, 0.20571f, 0.970407f },
	{ -0.152157f, 0.988291f, -0.011387f },
	{ -0.152157f, 0.988291f, -0.011387f },
	{ 0.072955f, 0.214539f, -0.973987f },
	{ 0.072955f, 0.214539f, -0.973987f },
	{ 0.182923f, -0.788277f, -0.587502f },
	{ 0.182923f, -0.788277f, -0.587502f },
	{ 0.090032f, -0.796747f, 0.597569f },
	{ 0.090032f, -0.796747f, 0.597569f }
};

NJS_MODEL_SADX attach_02859EE8 = { vertex_02859DF8, normal_02859E70, LengthOfArray(vertex_02859DF8), meshlist_02859D68, matlist_02859CD8, LengthOfArray(meshlist_02859D68), LengthOfArray(matlist_02859CD8),{ 1.157923f, -0.025746f, -0.2301f }, 1.532036f, NULL };

NJS_OBJECT object_02859F14 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02859EE8, 0, 0, -0.004449f, 0, 1, 0xFFFFFFFD, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02859F48[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02859F5C[] = {
	8, 0, 9, 1
};

Sint16 poly_02859F64[] = {
	2, 4, 3, 5
};

Sint16 poly_02859F6C[] = {
	0, 2, 1, 3
};

Sint16 poly_02859F74[] = {
	6, 8, 7, 9
};

Sint16 poly_02859F7C[] = {
	4, 6, 5, 7
};

NJS_TEX uv_02859F88[] = {
	{ 255, 45 },
	{ 254, 0 },
	{ 0, 77 },
	{ 0, 35 }
};

NJS_TEX uv_02859F98[] = {
	{ 254, 119 },
	{ 254, 238 },
	{ 0, 145 },
	{ 0, 255 }
};

NJS_TEX uv_02859FA8[] = {
	{ 254, 0 },
	{ 254, 119 },
	{ 0, 35 },
	{ 0, 145 }
};

NJS_TEX uv_02859FB8[] = {
	{ 255, 193 },
	{ 255, 45 },
	{ 0, 213 },
	{ 0, 77 }
};

NJS_TEX uv_02859FC8[] = {
	{ 254, 238 },
	{ 255, 193 },
	{ 0, 255 },
	{ 0, 213 }
};

NJS_MESHSET_SADX meshlist_02859FD8[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_02859F5C, NULL, NULL, NULL, uv_02859F88, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02859F64, NULL, NULL, NULL, uv_02859F98, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02859F6C, NULL, NULL, NULL, uv_02859FA8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02859F74, NULL, NULL, NULL, uv_02859FB8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02859F7C, NULL, NULL, NULL, uv_02859FC8, NULL }
};

NJS_VECTOR vertex_0285A068[] = {
	{ 1.894627f, 0.164611f, 0.62801f },
	{ -0.006622f, 0.123583f, 0.448218f },
	{ 1.893979f, 1.220743f, 0.028391f },
	{ -0.005195f, 0.932185f, -0.102599f },
	{ 1.894627f, 0.164611f, -0.571227f },
	{ -0.006622f, 0.123583f, -0.653416f },
	{ 1.895323f, -0.610352f, -0.342193f },
	{ -0.006079f, -0.524237f, -0.443023f },
	{ 1.895323f, -0.610352f, 0.398976f },
	{ -0.006079f, -0.524237f, 0.237825f }
};

NJS_VECTOR normal_0285A0E0[] = {
	{ -0.121173f, 0.123998f, 0.984856f },
	{ -0.121173f, 0.123998f, 0.984856f },
	{ -0.106299f, 0.994307f, -0.007421f },
	{ -0.106299f, 0.994307f, -0.007421f },
	{ 0.034443f, 0.126295f, -0.991395f },
	{ 0.034443f, 0.126295f, -0.991395f },
	{ -0.004954f, -0.804613f, -0.593779f },
	{ -0.004954f, -0.804613f, -0.593779f },
	{ -0.080034f, -0.802686f, 0.591007f },
	{ -0.080034f, -0.802686f, 0.591007f }
};

NJS_MODEL_SADX attach_0285A158 = { vertex_0285A068, normal_0285A0E0, LengthOfArray(vertex_0285A068), meshlist_02859FD8, matlist_02859F48, LengthOfArray(meshlist_02859FD8), LengthOfArray(matlist_02859F48),{ 0.94435f, 0.305195f, -0.012703f }, 1.154539f, NULL };

NJS_OBJECT object_0285A184 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285A158, -0.00001f, -0.00091f, -0.004706f, 0, 1, 0xFFFFFFFD, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0285A1B8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -8.016493f, -0.0089f, -1.307692f, 0, 0, 0x3F75, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0285A1EC[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285A200[] = {
	8, 3, 1
};

Sint16 poly_0285A208[] = {
	9, 1, 4
};

Sint16 poly_0285A210[] = {
	0, 2, 7
};

Sint16 poly_0285A218[] = {
	16, 6, 14
};

Sint16 poly_0285A220[] = {
	12, 5, 11
};

Sint16 poly_0285A228[] = {
	14, 6, 15
};

Sint16 poly_0285A230[] = {
	13, 5, 12
};

Sint16 poly_0285A238[] = {
	4, 0, 10
};

Sint16 poly_0285A240[] = {
	10, 9, 4
};

Sint16 poly_0285A248[] = {
	7, 2, 4
};

Sint16 poly_0285A250[] = {
	4, 8, 7
};

Sint16 poly_0285A258[] = {
	3, 8, 4
};

Sint16 poly_0285A260[] = {
	1, 9, 8
};

Sint16 poly_0285A268[] = {
	7, 10, 0
};

Sint16 poly_0285A270[] = {
	11, 5, 13
};

Sint16 poly_0285A278[] = {
	15, 6, 16
};

Sint16 poly_0285A280[] = {
	16, 1, 15, 3
};

Sint16 poly_0285A288[] = {
	13, 4, 11, 2
};

Sint16 poly_0285A290[] = {
	14, 4, 16, 1
};

Sint16 poly_0285A298[] = {
	11, 2, 12, 0
};

Sint16 poly_0285A2A0[] = {
	12, 0, 13, 4
};

Sint16 poly_0285A2A8[] = {
	15, 3, 14, 4
};

NJS_TEX uv_0285A2B0[] = {
	{ 0 },
	{ 85, 146 },
	{ 254, 95 }
};

NJS_TEX uv_0285A2BC[] = {
	{ 254, 9 },
	{ 254, 95 },
	{ 254, 95 }
};

NJS_TEX uv_0285A2C8[] = {
	{ 254, 95 },
	{ 85, 146 },
	{ 0 }
};

NJS_TEX uv_0285A2D4[] = {
	{ 254, 237 },
	{ 255, 255 },
	{ 254, 237 }
};

NJS_TEX uv_0285A2E0[] = {
	{ 254, 237 },
	{ 255, 255 },
	{ 205, 246 }
};

NJS_TEX uv_0285A2EC[] = {
	{ 254, 237 },
	{ 255, 255 },
	{ 205, 246 }
};

NJS_TEX uv_0285A2F8[] = {
	{ 254, 237 },
	{ 255, 255 },
	{ 254, 237 }
};

NJS_TEX uv_0285A304[] = {
	{ 254, 95 },
	{ 254, 95 },
	{ 254, 9 }
};

NJS_TEX uv_0285A310[] = {
	{ 254, 9 },
	{ 254, 9 },
	{ 254, 95 }
};

NJS_TEX uv_0285A31C[] = {
	{ 0 },
	{ 85, 146 },
	{ 254, 95 }
};

NJS_TEX uv_0285A328[] = {
	{ 254, 95 },
	{ 0 },
	{ 0 }
};

NJS_TEX uv_0285A334[] = {
	{ 85, 146 },
	{ 0 },
	{ 254, 95 }
};

NJS_TEX uv_0285A340[] = {
	{ 254, 95 },
	{ 254, 9 },
	{ 0 }
};

NJS_TEX uv_0285A34C[] = {
	{ 0 },
	{ 254, 9 },
	{ 254, 95 }
};

NJS_TEX uv_0285A358[] = {
	{ 205, 246 },
	{ 255, 255 },
	{ 254, 237 }
};

NJS_TEX uv_0285A364[] = {
	{ 205, 246 },
	{ 255, 255 },
	{ 254, 237 }
};

NJS_TEX uv_0285A370[] = {
	{ 254, 237 },
	{ 254, 95 },
	{ 205, 246 },
	{ 85, 146 }
};

NJS_TEX uv_0285A380[] = {
	{ 254, 237 },
	{ 254, 95 },
	{ 205, 246 },
	{ 85, 146 }
};

NJS_TEX uv_0285A390[] = {
	{ 254, 237 },
	{ 254, 95 },
	{ 254, 237 },
	{ 254, 95 }
};

NJS_TEX uv_0285A3A0[] = {
	{ 205, 246 },
	{ 85, 146 },
	{ 254, 237 },
	{ 254, 95 }
};

NJS_TEX uv_0285A3B0[] = {
	{ 254, 237 },
	{ 254, 95 },
	{ 254, 237 },
	{ 254, 95 }
};

NJS_TEX uv_0285A3C0[] = {
	{ 205, 246 },
	{ 85, 146 },
	{ 254, 237 },
	{ 254, 95 }
};

NJS_MESHSET_SADX meshlist_0285A3D0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285A200, NULL, NULL, NULL, uv_0285A2B0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A208, NULL, NULL, NULL, uv_0285A2BC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A210, NULL, NULL, NULL, uv_0285A2C8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A218, NULL, NULL, NULL, uv_0285A2D4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A220, NULL, NULL, NULL, uv_0285A2E0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A228, NULL, NULL, NULL, uv_0285A2EC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A230, NULL, NULL, NULL, uv_0285A2F8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A238, NULL, NULL, NULL, uv_0285A304, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A240, NULL, NULL, NULL, uv_0285A310, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A248, NULL, NULL, NULL, uv_0285A31C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A250, NULL, NULL, NULL, uv_0285A328, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A258, NULL, NULL, NULL, uv_0285A334, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A260, NULL, NULL, NULL, uv_0285A340, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A268, NULL, NULL, NULL, uv_0285A34C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A270, NULL, NULL, NULL, uv_0285A358, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A278, NULL, NULL, NULL, uv_0285A364, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285A280, NULL, NULL, NULL, uv_0285A370, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285A288, NULL, NULL, NULL, uv_0285A380, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285A290, NULL, NULL, NULL, uv_0285A390, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285A298, NULL, NULL, NULL, uv_0285A3A0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285A2A0, NULL, NULL, NULL, uv_0285A3B0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285A2A8, NULL, NULL, NULL, uv_0285A3C0, NULL }
};

NJS_VECTOR vertex_0285A638[] = {
	{ 1.225766f, -1.698224f, -1.729339f },
	{ 1.225766f, -1.698224f, 1.729339f },
	{ -0.192991f, -2.634367f, -1.072114f },
	{ -0.192991f, -2.634367f, 1.072114f },
	{ 1.225766f, -1.698224f, 0 },
	{ 1.228813f, -4.650229f, -1.146586f },
	{ 1.228813f, -4.650229f, 1.138038f },
	{ -0.911089f, 0.072187f, -0.959719f },
	{ -0.911048f, 0.072199f, 0.9845f },
	{ 1.224121f, -0.104479f, 1.524722f },
	{ 1.22412f, -0.104486f, -1.391151f },
	{ 0.814674f, -4.489307f, -1.180025f },
	{ 1.22847f, -4.31743f, -1.384291f },
	{ 1.22847f, -4.31743f, -0.846812f },
	{ 1.22847f, -4.31743f, 0.838264f },
	{ 0.814674f, -4.489307f, 1.171477f },
	{ 1.22847f, -4.31743f, 1.375743f }
};

NJS_VECTOR normal_0285A708[] = {
	{ 0.361722f, 0.004938f, -0.932273f },
	{ 0.346739f, -0.025309f, 0.93762f },
	{ -0.930961f, -0.353471f, -0.091488f },
	{ -0.930646f, -0.353943f, 0.092859f },
	{ 0.823038f, -0.567986f, 0.000346f },
	{ 0.404398f, -0.911725f, -0.072256f },
	{ 0.404398f, -0.911724f, 0.072256f },
	{ -0.793495f, -0.370269f, -0.482976f },
	{ -0.791087f, -0.393709f, 0.468161f },
	{ 0.875978f, 0.062313f, 0.478308f },
	{ 0.879815f, 0.099533f, -0.464779f },
	{ -0.611809f, -0.7862f, -0.08706f },
	{ 0.624824f, -0.292243f, -0.724009f },
	{ 0.567172f, -0.419121f, 0.708981f },
	{ 0.566918f, -0.41826f, -0.709691f },
	{ -0.611699f, -0.786269f, 0.08721f },
	{ 0.625023f, -0.293265f, 0.723423f }
};

NJS_MODEL_SADX attach_0285A7D4 = { vertex_0285A638, normal_0285A708, LengthOfArray(vertex_0285A638), meshlist_0285A3D0, matlist_0285A1EC, LengthOfArray(meshlist_0285A3D0), LengthOfArray(matlist_0285A1EC),{ 0.158862f, -2.289015f, 0 }, 2.915131f, NULL };

NJS_OBJECT object_0285A800 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285A7D4, 0.431652f, -1.333709f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0285A1B8 };

NJS_MATERIAL matlist_0285A834[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285A848[] = {
	4, 0, 2
};

Sint16 poly_0285A850[] = {
	9, 3, 4
};

Sint16 poly_0285A858[] = {
	4, 2, 9
};

Sint16 poly_0285A860[] = {
	3, 1, 4
};

Sint16 poly_0285A868[] = {
	0, 4, 1
};

Sint16 poly_0285A870[] = {
	5, 2, 8, 0
};

Sint16 poly_0285A878[] = {
	7, 1, 6, 3
};

Sint16 poly_0285A880[] = {
	8, 0, 7, 1
};

NJS_TEX uv_0285A888[] = {
	{ 254, 0 },
	{ 254, 31 },
	{ 0, 66 }
};

NJS_TEX uv_0285A894[] = {
	{ 0, 66 },
	{ 0, 66 },
	{ 254, 0 }
};

NJS_TEX uv_0285A8A0[] = {
	{ 254, 0 },
	{ 0, 66 },
	{ 0, 66 }
};

NJS_TEX uv_0285A8AC[] = {
	{ 0, 66 },
	{ 254, 31 },
	{ 254, 0 }
};

NJS_TEX uv_0285A8B8[] = {
	{ 254, 31 },
	{ 254, 0 },
	{ 254, 31 }
};

NJS_TEX uv_0285A8C4[] = {
	{ 19, 240 },
	{ 0, 66 },
	{ 255, 255 },
	{ 254, 31 }
};

NJS_TEX uv_0285A8D4[] = {
	{ 255, 255 },
	{ 254, 31 },
	{ 19, 240 },
	{ 0, 66 }
};

NJS_TEX uv_0285A8E4[] = {
	{ 255, 255 },
	{ 254, 31 },
	{ 255, 255 },
	{ 254, 31 }
};

NJS_MESHSET_SADX meshlist_0285A8F8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285A848, NULL, NULL, NULL, uv_0285A888, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A850, NULL, NULL, NULL, uv_0285A894, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A858, NULL, NULL, NULL, uv_0285A8A0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A860, NULL, NULL, NULL, uv_0285A8AC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285A868, NULL, NULL, NULL, uv_0285A8B8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285A870, NULL, NULL, NULL, uv_0285A8C4, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285A878, NULL, NULL, NULL, uv_0285A8D4, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285A880, NULL, NULL, NULL, uv_0285A8E4, NULL }
};

NJS_VECTOR vertex_0285A9D8[] = {
	{ 1.652864f, 1.377877f, -1.052963f },
	{ 1.652866f, 1.377877f, 1.186534f },
	{ -0.652227f, 0.933428f, -0.85639f },
	{ -0.652224f, 0.933428f, 0.881174f },
	{ 1.657134f, 2.129112f, 0 },
	{ -0.479438f, -1.261515f, -0.959719f },
	{ -0.479398f, -1.26151f, 0.9845f },
	{ 1.655773f, -1.438187f, 1.524722f },
	{ 1.655771f, -1.438187f, -1.391151f },
	{ -0.644762f, 1.943158f, 0 }
};

NJS_VECTOR normal_0285AA50[] = {
	{ 0.688175f, 0.355553f, -0.632453f },
	{ 0.679706f, 0.37629f, 0.629607f },
	{ -0.126784f, 0.545334f, -0.828575f },
	{ -0.153684f, 0.562f, 0.812734f },
	{ 0.157291f, 0.987363f, -0.019342f },
	{ -0.100704f, 0.083819f, -0.991379f },
	{ -0.146356f, 0.08173f, 0.98585f },
	{ 0.653284f, 0.063337f, 0.754459f },
	{ 0.670525f, 0.063266f, -0.739184f },
	{ -0.080518f, 0.996728f, -0.007056f }
};

NJS_MODEL_SADX attach_0285AAC8 = { vertex_0285A9D8, normal_0285AA50, LengthOfArray(vertex_0285A9D8), meshlist_0285A8F8, matlist_0285A834, LengthOfArray(meshlist_0285A8F8), LengthOfArray(matlist_0285A834),{ 0.502453f, 0.345462f, 0.066785f }, 2.303574f, NULL };

NJS_OBJECT object_0285AAF4 = { NJD_EVAL_UNIT_SCL, &attach_0285AAC8, 2.837488f, -0.25135f, 0.042539f, 0, 1, 0xFFFFFFFD, 1, 1, 1, &object_0285A800, NULL };

NJS_MATERIAL matlist_0285AB28[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285AB3C[] = {
	8, 0, 11
};

Sint16 poly_0285AB44[] = {
	2, 4, 12
};

Sint16 poly_0285AB4C[] = {
	11, 0, 2
};

Sint16 poly_0285AB54[] = {
	14, 6, 8
};

Sint16 poly_0285AB5C[] = {
	6, 14, 12
};

Sint16 poly_0285AB64[] = {
	10, 3, 1
};

Sint16 poly_0285AB6C[] = {
	11, 1, 9
};

Sint16 poly_0285AB74[] = {
	9, 7, 14
};

Sint16 poly_0285AB7C[] = {
	14, 7, 5
};

Sint16 poly_0285AB84[] = {
	5, 3, 10
};

Sint16 poly_0285AB8C[] = {
	9, 13, 11
};

Sint16 poly_0285AB94[] = {
	14, 13, 9
};

Sint16 poly_0285AB9C[] = {
	5, 12, 14
};

Sint16 poly_0285ABA4[] = {
	10, 12, 5
};

Sint16 poly_0285ABAC[] = {
	1, 11, 10
};

Sint16 poly_0285ABB4[] = {
	2, 10, 11
};

Sint16 poly_0285ABBC[] = {
	11, 13, 8
};

Sint16 poly_0285ABC4[] = {
	8, 13, 14
};

Sint16 poly_0285ABCC[] = {
	12, 10, 2
};

Sint16 poly_0285ABD4[] = {
	12, 4, 6
};

NJS_TEX uv_0285ABE0[] = {
	{ 255, 0 },
	{ 236, 13 },
	{ 175, 30 }
};

NJS_TEX uv_0285ABEC[] = {
	{ 237, 129 },
	{ 236, 241 },
	{ 176, 234 }
};

NJS_TEX uv_0285ABF8[] = {
	{ 175, 30 },
	{ 236, 13 },
	{ 237, 129 }
};

NJS_TEX uv_0285AC04[] = {
	{ 175, 225 },
	{ 254, 255 },
	{ 255, 0 }
};

NJS_TEX uv_0285AC10[] = {
	{ 254, 255 },
	{ 175, 225 },
	{ 176, 234 }
};

NJS_TEX uv_0285AC1C[] = {
	{ 175, 133 },
	{ 0, 131 },
	{ 0, 53 }
};

NJS_TEX uv_0285AC28[] = {
	{ 175, 30 },
	{ 0, 53 },
	{ 0, 80 }
};

NJS_TEX uv_0285AC34[] = {
	{ 0, 80 },
	{ 0, 182 },
	{ 175, 225 }
};

NJS_TEX uv_0285AC40[] = {
	{ 175, 225 },
	{ 0, 182 },
	{ 0, 210 }
};

NJS_TEX uv_0285AC4C[] = {
	{ 0, 210 },
	{ 0, 131 },
	{ 175, 133 }
};

NJS_TEX uv_0285AC58[] = {
	{ 0, 80 },
	{ 175, 26 },
	{ 175, 30 }
};

NJS_TEX uv_0285AC64[] = {
	{ 175, 225 },
	{ 175, 26 },
	{ 0, 80 }
};

NJS_TEX uv_0285AC70[] = {
	{ 0, 210 },
	{ 176, 234 },
	{ 175, 225 }
};

NJS_TEX uv_0285AC7C[] = {
	{ 175, 133 },
	{ 176, 234 },
	{ 0, 210 }
};

NJS_TEX uv_0285AC88[] = {
	{ 0, 53 },
	{ 175, 30 },
	{ 175, 133 }
};

NJS_TEX uv_0285AC94[] = {
	{ 237, 129 },
	{ 175, 133 },
	{ 175, 30 }
};

NJS_TEX uv_0285ACA0[] = {
	{ 175, 30 },
	{ 175, 26 },
	{ 255, 0 }
};

NJS_TEX uv_0285ACAC[] = {
	{ 255, 0 },
	{ 175, 26 },
	{ 175, 225 }
};

NJS_TEX uv_0285ACB8[] = {
	{ 176, 234 },
	{ 175, 133 },
	{ 237, 129 }
};

NJS_TEX uv_0285ACC4[] = {
	{ 176, 234 },
	{ 236, 241 },
	{ 254, 255 }
};

NJS_MESHSET_SADX meshlist_0285ACD0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB3C, NULL, NULL, NULL, uv_0285ABE0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB44, NULL, NULL, NULL, uv_0285ABEC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB4C, NULL, NULL, NULL, uv_0285ABF8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB54, NULL, NULL, NULL, uv_0285AC04, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB5C, NULL, NULL, NULL, uv_0285AC10, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB64, NULL, NULL, NULL, uv_0285AC1C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB6C, NULL, NULL, NULL, uv_0285AC28, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB74, NULL, NULL, NULL, uv_0285AC34, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB7C, NULL, NULL, NULL, uv_0285AC40, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB84, NULL, NULL, NULL, uv_0285AC4C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB8C, NULL, NULL, NULL, uv_0285AC58, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB94, NULL, NULL, NULL, uv_0285AC64, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285AB9C, NULL, NULL, NULL, uv_0285AC70, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285ABA4, NULL, NULL, NULL, uv_0285AC7C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285ABAC, NULL, NULL, NULL, uv_0285AC88, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285ABB4, NULL, NULL, NULL, uv_0285AC94, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285ABBC, NULL, NULL, NULL, uv_0285ACA0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285ABC4, NULL, NULL, NULL, uv_0285ACAC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285ABCC, NULL, NULL, NULL, uv_0285ACB8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285ABD4, NULL, NULL, NULL, uv_0285ACC4, NULL }
};

NJS_VECTOR vertex_0285AF00[] = {
	{ 2.185351f, 0.684705f, 0.928906f },
	{ -0.05747f, 0.164621f, 0.62801f },
	{ 2.192812f, 1.619818f, 0.047732f },
	{ -0.058118f, 1.220758f, 0.028391f },
	{ 2.185347f, 0.684705f, -0.808658f },
	{ -0.05747f, 0.164621f, -0.571227f },
	{ 2.358136f, -1.510238f, -0.911988f },
	{ -0.056775f, -0.610342f, -0.360329f },
	{ 2.358177f, -1.510233f, 1.032232f },
	{ -0.056775f, -0.610342f, 0.420122f },
	{ 1.609318f, 1.431933f, 0.016697f },
	{ 1.608898f, 0.160558f, 0.798121f },
	{ 1.612224f, 0.144468f, -0.756602f },
	{ 1.608219f, -1.121672f, 0.833166f },
	{ 1.607744f, -1.155958f, -0.686272f }
};

NJS_VECTOR normal_0285AFB8[] = {
	{ -0.466493f, 0.305965f, 0.829921f },
	{ -0.086081f, 0.270902f, 0.95875f },
	{ -0.584435f, 0.811215f, -0.019134f },
	{ -0.125638f, 0.992076f, 0.00066f },
	{ -0.381954f, 0.321723f, -0.866375f },
	{ -0.142219f, 0.186347f, -0.972136f },
	{ -0.372235f, -0.396708f, -0.839085f },
	{ -0.354486f, -0.739843f, -0.571814f },
	{ -0.465921f, -0.586969f, 0.662107f },
	{ -0.309275f, -0.701478f, 0.642089f },
	{ -0.201886f, 0.979382f, -0.007298f },
	{ -0.2662f, 0.214311f, 0.939791f },
	{ -0.236942f, 0.269267f, -0.933463f },
	{ -0.421041f, -0.607032f, 0.67397f },
	{ -0.404578f, -0.749654f, -0.523771f }
};

NJS_MODEL_SADX attach_0285B06C = { vertex_0285AF00, normal_0285AFB8, LengthOfArray(vertex_0285AF00), meshlist_0285ACD0, matlist_0285AB28, LengthOfArray(meshlist_0285ACD0), LengthOfArray(matlist_0285AB28),{ 1.15003f, 0.05479f, 0.060122f }, 1.841314f, NULL };

NJS_OBJECT object_0285B098 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285B06C, -0.00001f, -0.001612f, -0.004905f, 0, 1, 0xFFFFFFFD, 1, 1, 1, NULL, &object_0285AAF4 };

NJS_OBJECT object_0285B0CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.939466f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0285B098 };

NJS_OBJECT object_0285B100 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.961013f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0285B0CC, &object_0285A184 };

NJS_OBJECT object_0285B134 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.54064f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0285B100, &object_02859F14 };

NJS_OBJECT object_0285B168 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0xFFFFFFFF, 0xFFFFBF46, 1, 1, 1, &object_0285B134, NULL };

NJS_OBJECT object_0285B19C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.245227f, -0.681835f, 1.264418f, 0, 0, 0, 1, 1, 1, &object_0285B168, NULL };

NJS_OBJECT object_0285B1D0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 11.02623f, 0.011758f, 0, 0, 0, 0xFFFFFF43, 1, 1, 1, NULL, &object_0285B19C };

NJS_OBJECT object_0285B204 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -0.602201f, -11.77145f, 1.005872f, 0, 0, 0xFFFFFDED, 1, 1, 1, NULL, &object_0285B1D0 };

NJS_OBJECT object_0285B238 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -7.193983f, 3.835119f, 0, 0, 0, 0xFFFFFF43, 1, 1, 1, NULL, &object_0285B204 };

NJS_OBJECT object_0285B26C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0.001112f, -3.45063f, 2.878713f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0285B2A0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.013203f, -3.279202f, -0.208251f, 0, 0, 0, 1, 1, 1, &object_0285B26C, NULL };

NJS_OBJECT object_0285B2D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.162712f, -8.238091f, -6.666938f, 0, 0, 0, 1, 1, 1, &object_0285B2A0, &object_0285B238 };

NJS_OBJECT object_0285B308 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0.006113f, -3.61092f, -0.955605f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0285B33C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, -5.169367f, 0.333508f, 0, 0, 0, 1, 1, 1, &object_0285B308, NULL };

NJS_OBJECT object_0285B370 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -0.065828f, -7.462395f, 6.394921f, 0, 0, 0, 1, 1, 1, &object_0285B33C, &object_0285B2D4 };

NJS_OBJECT object_0285B3A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -0.216447f, -11.78073f, -1.013034f, 0, 0, 0, 1, 1, 1, NULL, &object_0285B370 };

NJS_MATERIAL matlist_0285B3D8[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285B3EC[] = {
	9, 1, 8, 0
};

Sint16 poly_0285B3F4[] = {
	3, 5, 2, 4
};

Sint16 poly_0285B3FC[] = {
	1, 3, 0, 2
};

Sint16 poly_0285B404[] = {
	7, 9, 6, 8
};

Sint16 poly_0285B40C[] = {
	5, 7, 4, 6
};

NJS_TEX uv_0285B418[] = {
	{ 0, 183 },
	{ 0, 226 },
	{ 254, 215 },
	{ 254, 255 }
};

NJS_TEX uv_0285B428[] = {
	{ 0, 113 },
	{ 0 },
	{ 255, 151 },
	{ 254, 47 }
};

NJS_TEX uv_0285B438[] = {
	{ 0, 226 },
	{ 0, 113 },
	{ 254, 255 },
	{ 255, 151 }
};

NJS_TEX uv_0285B448[] = {
	{ 0, 43 },
	{ 0, 183 },
	{ 254, 87 },
	{ 254, 215 }
};

NJS_TEX uv_0285B458[] = {
	{ 0 },
	{ 0, 43 },
	{ 254, 47 },
	{ 254, 87 }
};

NJS_MESHSET_SADX meshlist_0285B468[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0285B3EC, NULL, NULL, NULL, uv_0285B418, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B3F4, NULL, NULL, NULL, uv_0285B428, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B3FC, NULL, NULL, NULL, uv_0285B438, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B404, NULL, NULL, NULL, uv_0285B448, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B40C, NULL, NULL, NULL, uv_0285B458, NULL }
};

NJS_VECTOR vertex_0285B4F8[] = {
	{ 2.525106f, 0.123572f, -0.448218f },
	{ -0.21043f, -0.176372f, -0.296109f },
	{ 2.526533f, 0.932174f, 0.102599f },
	{ -0.210688f, 0.322563f, 0.306154f },
	{ 2.525106f, 0.123572f, 0.653416f },
	{ -0.21043f, -0.176372f, 0.908418f },
	{ 2.52565f, -0.524249f, 0.443023f },
	{ -0.210011f, -0.983665f, 0.678373f },
	{ 2.52565f, -0.524249f, -0.237825f },
	{ -0.210011f, -0.983665f, -0.066065f }
};

NJS_VECTOR normal_0285B570[] = {
	{ -0.126466f, 0.20571f, -0.970407f },
	{ -0.126466f, 0.20571f, -0.970407f },
	{ -0.152157f, 0.988291f, 0.011387f },
	{ -0.152157f, 0.988291f, 0.011387f },
	{ 0.072955f, 0.214539f, 0.973987f },
	{ 0.072955f, 0.214539f, 0.973987f },
	{ 0.182923f, -0.788277f, 0.587502f },
	{ 0.182923f, -0.788277f, 0.587502f },
	{ 0.090032f, -0.796747f, -0.597569f },
	{ 0.090032f, -0.796747f, -0.597569f }
};

NJS_MODEL_SADX attach_0285B5E8 = { vertex_0285B4F8, normal_0285B570, LengthOfArray(vertex_0285B4F8), meshlist_0285B468, matlist_0285B3D8, LengthOfArray(meshlist_0285B468), LengthOfArray(matlist_0285B3D8),{ 1.157922f, -0.025746f, 0.2301f }, 1.532036f, NULL };

NJS_OBJECT object_0285B614 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285B5E8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0285B648[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285B65C[] = {
	9, 1, 8, 0
};

Sint16 poly_0285B664[] = {
	3, 5, 2, 4
};

Sint16 poly_0285B66C[] = {
	1, 3, 0, 2
};

Sint16 poly_0285B674[] = {
	7, 9, 6, 8
};

Sint16 poly_0285B67C[] = {
	5, 7, 4, 6
};

NJS_TEX uv_0285B688[] = {
	{ 0, 177 },
	{ 0, 219 },
	{ 255, 209 },
	{ 254, 255 }
};

NJS_TEX uv_0285B698[] = {
	{ 0, 109 },
	{ 0 },
	{ 254, 135 },
	{ 254, 16 }
};

NJS_TEX uv_0285B6A8[] = {
	{ 0, 219 },
	{ 0, 109 },
	{ 254, 255 },
	{ 254, 135 }
};

NJS_TEX uv_0285B6B8[] = {
	{ 0, 41 },
	{ 0, 177 },
	{ 255, 61 },
	{ 255, 209 }
};

NJS_TEX uv_0285B6C8[] = {
	{ 0 },
	{ 0, 41 },
	{ 254, 16 },
	{ 255, 61 }
};

NJS_MESHSET_SADX meshlist_0285B6D8[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0285B65C, NULL, NULL, NULL, uv_0285B688, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B664, NULL, NULL, NULL, uv_0285B698, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B66C, NULL, NULL, NULL, uv_0285B6A8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B674, NULL, NULL, NULL, uv_0285B6B8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B67C, NULL, NULL, NULL, uv_0285B6C8, NULL }
};

NJS_VECTOR vertex_0285B768[] = {
	{ 1.894627f, 0.164611f, -0.62801f },
	{ -0.006622f, 0.123583f, -0.448218f },
	{ 1.893979f, 1.220743f, -0.028391f },
	{ -0.005195f, 0.932185f, 0.102599f },
	{ 1.894627f, 0.164611f, 0.571227f },
	{ -0.006622f, 0.123583f, 0.653416f },
	{ 1.895323f, -0.610352f, 0.342193f },
	{ -0.006079f, -0.524237f, 0.443023f },
	{ 1.895323f, -0.610352f, -0.398976f },
	{ -0.006079f, -0.524237f, -0.237825f }
};

NJS_VECTOR normal_0285B7E0[] = {
	{ -0.121173f, 0.123998f, -0.984856f },
	{ -0.121173f, 0.123998f, -0.984856f },
	{ -0.106299f, 0.994307f, 0.007421f },
	{ -0.106299f, 0.994307f, 0.007421f },
	{ 0.034443f, 0.126295f, 0.991395f },
	{ 0.034443f, 0.126295f, 0.991395f },
	{ -0.004954f, -0.804613f, 0.593779f },
	{ -0.004954f, -0.804613f, 0.593779f },
	{ -0.080034f, -0.802686f, -0.591007f },
	{ -0.080034f, -0.802686f, -0.591007f }
};

NJS_MODEL_SADX attach_0285B858 = { vertex_0285B768, normal_0285B7E0, LengthOfArray(vertex_0285B768), meshlist_0285B6D8, matlist_0285B648, LengthOfArray(meshlist_0285B6D8), LengthOfArray(matlist_0285B648),{ 0.94435f, 0.305195f, 0.012703f }, 1.154539f, NULL };

NJS_OBJECT object_0285B884 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285B858, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0285B8B8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -8.016494f, -0.0089f, 1.307692f, 0, 0, 0x3F75, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0285B8EC[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285B900[] = {
	1, 3, 8
};

Sint16 poly_0285B908[] = {
	4, 1, 9
};

Sint16 poly_0285B910[] = {
	7, 2, 0
};

Sint16 poly_0285B918[] = {
	14, 6, 16
};

Sint16 poly_0285B920[] = {
	11, 5, 12
};

Sint16 poly_0285B928[] = {
	15, 6, 14
};

Sint16 poly_0285B930[] = {
	12, 5, 13
};

Sint16 poly_0285B938[] = {
	10, 0, 4
};

Sint16 poly_0285B940[] = {
	4, 9, 10
};

Sint16 poly_0285B948[] = {
	4, 2, 7
};

Sint16 poly_0285B950[] = {
	7, 8, 4
};

Sint16 poly_0285B958[] = {
	4, 8, 3
};

Sint16 poly_0285B960[] = {
	8, 9, 1
};

Sint16 poly_0285B968[] = {
	0, 10, 7
};

Sint16 poly_0285B970[] = {
	13, 5, 11
};

Sint16 poly_0285B978[] = {
	16, 6, 15
};

Sint16 poly_0285B980[] = {
	15, 3, 16, 1
};

Sint16 poly_0285B988[] = {
	11, 2, 13, 4
};

Sint16 poly_0285B990[] = {
	16, 1, 14, 4
};

Sint16 poly_0285B998[] = {
	12, 0, 11, 2
};

Sint16 poly_0285B9A0[] = {
	13, 4, 12, 0
};

Sint16 poly_0285B9A8[] = {
	14, 4, 15, 3
};

NJS_TEX uv_0285B9B0[] = {
	{ 254, 95 },
	{ 85, 146 },
	{ 0 }
};

NJS_TEX uv_0285B9BC[] = {
	{ 254, 95 },
	{ 254, 95 },
	{ 254, 9 }
};

NJS_TEX uv_0285B9C8[] = {
	{ 0 },
	{ 85, 146 },
	{ 254, 95 }
};

NJS_TEX uv_0285B9D4[] = {
	{ 254, 237 },
	{ 255, 255 },
	{ 254, 237 }
};

NJS_TEX uv_0285B9E0[] = {
	{ 205, 246 },
	{ 255, 255 },
	{ 254, 237 }
};

NJS_TEX uv_0285B9EC[] = {
	{ 205, 246 },
	{ 255, 255 },
	{ 254, 237 }
};

NJS_TEX uv_0285B9F8[] = {
	{ 254, 237 },
	{ 255, 255 },
	{ 254, 237 }
};

NJS_TEX uv_0285BA04[] = {
	{ 254, 9 },
	{ 254, 95 },
	{ 254, 95 }
};

NJS_TEX uv_0285BA10[] = {
	{ 254, 95 },
	{ 254, 9 },
	{ 254, 9 }
};

NJS_TEX uv_0285BA1C[] = {
	{ 254, 95 },
	{ 85, 146 },
	{ 0 }
};

NJS_TEX uv_0285BA28[] = {
	{ 0 },
	{ 0 },
	{ 254, 95 }
};

NJS_TEX uv_0285BA34[] = {
	{ 254, 95 },
	{ 0 },
	{ 85, 146 }
};

NJS_TEX uv_0285BA40[] = {
	{ 0 },
	{ 254, 9 },
	{ 254, 95 }
};

NJS_TEX uv_0285BA4C[] = {
	{ 254, 95 },
	{ 254, 9 },
	{ 0 }
};

NJS_TEX uv_0285BA58[] = {
	{ 254, 237 },
	{ 255, 255 },
	{ 205, 246 }
};

NJS_TEX uv_0285BA64[] = {
	{ 254, 237 },
	{ 255, 255 },
	{ 205, 246 }
};

NJS_TEX uv_0285BA70[] = {
	{ 205, 246 },
	{ 85, 146 },
	{ 254, 237 },
	{ 254, 95 }
};

NJS_TEX uv_0285BA80[] = {
	{ 205, 246 },
	{ 85, 146 },
	{ 254, 237 },
	{ 254, 95 }
};

NJS_TEX uv_0285BA90[] = {
	{ 254, 237 },
	{ 254, 95 },
	{ 254, 237 },
	{ 254, 95 }
};

NJS_TEX uv_0285BAA0[] = {
	{ 254, 237 },
	{ 254, 95 },
	{ 205, 246 },
	{ 85, 146 }
};

NJS_TEX uv_0285BAB0[] = {
	{ 254, 237 },
	{ 254, 95 },
	{ 254, 237 },
	{ 254, 95 }
};

NJS_TEX uv_0285BAC0[] = {
	{ 254, 237 },
	{ 254, 95 },
	{ 205, 246 },
	{ 85, 146 }
};

NJS_MESHSET_SADX meshlist_0285BAD0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285B900, NULL, NULL, NULL, uv_0285B9B0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B908, NULL, NULL, NULL, uv_0285B9BC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B910, NULL, NULL, NULL, uv_0285B9C8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B918, NULL, NULL, NULL, uv_0285B9D4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B920, NULL, NULL, NULL, uv_0285B9E0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B928, NULL, NULL, NULL, uv_0285B9EC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B930, NULL, NULL, NULL, uv_0285B9F8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B938, NULL, NULL, NULL, uv_0285BA04, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B940, NULL, NULL, NULL, uv_0285BA10, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B948, NULL, NULL, NULL, uv_0285BA1C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B950, NULL, NULL, NULL, uv_0285BA28, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B958, NULL, NULL, NULL, uv_0285BA34, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B960, NULL, NULL, NULL, uv_0285BA40, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B968, NULL, NULL, NULL, uv_0285BA4C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B970, NULL, NULL, NULL, uv_0285BA58, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285B978, NULL, NULL, NULL, uv_0285BA64, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B980, NULL, NULL, NULL, uv_0285BA70, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B988, NULL, NULL, NULL, uv_0285BA80, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B990, NULL, NULL, NULL, uv_0285BA90, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B998, NULL, NULL, NULL, uv_0285BAA0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B9A0, NULL, NULL, NULL, uv_0285BAB0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285B9A8, NULL, NULL, NULL, uv_0285BAC0, NULL }
};

NJS_VECTOR vertex_0285BD38[] = {
	{ 1.225766f, -1.698224f, 1.729339f },
	{ 1.225766f, -1.698224f, -1.729339f },
	{ -0.192991f, -2.634367f, 1.072114f },
	{ -0.192991f, -2.634367f, -1.072114f },
	{ 1.225766f, -1.698224f, 0 },
	{ 1.228813f, -4.650229f, 1.146586f },
	{ 1.228813f, -4.650229f, -1.138038f },
	{ -0.911089f, 0.072187f, 0.959719f },
	{ -0.911048f, 0.072199f, -0.9845f },
	{ 1.224121f, -0.104479f, -1.524722f },
	{ 1.22412f, -0.104486f, 1.391151f },
	{ 0.814674f, -4.489307f, 1.180025f },
	{ 1.22847f, -4.31743f, 1.384291f },
	{ 1.22847f, -4.31743f, 0.846812f },
	{ 1.22847f, -4.31743f, -0.838264f },
	{ 0.814674f, -4.489307f, -1.171477f },
	{ 1.22847f, -4.31743f, -1.375743f }
};

NJS_VECTOR normal_0285BE08[] = {
	{ 0.361722f, 0.004938f, 0.932273f },
	{ 0.346739f, -0.025309f, -0.93762f },
	{ -0.930961f, -0.353471f, 0.091488f },
	{ -0.930646f, -0.353943f, -0.092859f },
	{ 0.823038f, -0.567986f, -0.000346f },
	{ 0.404398f, -0.911725f, 0.072256f },
	{ 0.404398f, -0.911724f, -0.072256f },
	{ -0.793495f, -0.370269f, 0.482976f },
	{ -0.791087f, -0.393709f, -0.468161f },
	{ 0.875978f, 0.062313f, -0.478308f },
	{ 0.879815f, 0.099533f, 0.464779f },
	{ -0.611809f, -0.7862f, 0.08706f },
	{ 0.624824f, -0.292243f, 0.724009f },
	{ 0.567172f, -0.419121f, -0.708981f },
	{ 0.566918f, -0.41826f, 0.709691f },
	{ -0.611699f, -0.786269f, -0.08721f },
	{ 0.625023f, -0.293265f, -0.723423f }
};

NJS_MODEL_SADX attach_0285BED4 = { vertex_0285BD38, normal_0285BE08, LengthOfArray(vertex_0285BD38), meshlist_0285BAD0, matlist_0285B8EC, LengthOfArray(meshlist_0285BAD0), LengthOfArray(matlist_0285B8EC),{ 0.158862f, -2.289015f, 0 }, 2.915131f, NULL };

NJS_OBJECT object_0285BF00 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285BED4, 0.431651f, -1.333709f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0285B8B8 };

NJS_MATERIAL matlist_0285BF34[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285BF48[] = {
	2, 0, 4
};

Sint16 poly_0285BF50[] = {
	4, 3, 9
};

Sint16 poly_0285BF58[] = {
	9, 2, 4
};

Sint16 poly_0285BF60[] = {
	4, 1, 3
};

Sint16 poly_0285BF68[] = {
	1, 4, 0
};

Sint16 poly_0285BF70[] = {
	8, 0, 5, 2
};

Sint16 poly_0285BF78[] = {
	6, 3, 7, 1
};

Sint16 poly_0285BF80[] = {
	7, 1, 8, 0
};

NJS_TEX uv_0285BF88[] = {
	{ 0, 66 },
	{ 254, 31 },
	{ 254, 0 }
};

NJS_TEX uv_0285BF94[] = {
	{ 254, 0 },
	{ 0, 66 },
	{ 0, 66 }
};

NJS_TEX uv_0285BFA0[] = {
	{ 0, 66 },
	{ 0, 66 },
	{ 254, 0 }
};

NJS_TEX uv_0285BFAC[] = {
	{ 254, 0 },
	{ 254, 31 },
	{ 0, 66 }
};

NJS_TEX uv_0285BFB8[] = {
	{ 254, 31 },
	{ 254, 0 },
	{ 254, 31 }
};

NJS_TEX uv_0285BFC4[] = {
	{ 255, 255 },
	{ 254, 31 },
	{ 19, 240 },
	{ 0, 66 }
};

NJS_TEX uv_0285BFD4[] = {
	{ 19, 240 },
	{ 0, 66 },
	{ 255, 255 },
	{ 254, 31 }
};

NJS_TEX uv_0285BFE4[] = {
	{ 255, 255 },
	{ 254, 31 },
	{ 255, 255 },
	{ 254, 31 }
};

NJS_MESHSET_SADX meshlist_0285BFF8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285BF48, NULL, NULL, NULL, uv_0285BF88, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285BF50, NULL, NULL, NULL, uv_0285BF94, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285BF58, NULL, NULL, NULL, uv_0285BFA0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285BF60, NULL, NULL, NULL, uv_0285BFAC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285BF68, NULL, NULL, NULL, uv_0285BFB8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285BF70, NULL, NULL, NULL, uv_0285BFC4, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285BF78, NULL, NULL, NULL, uv_0285BFD4, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285BF80, NULL, NULL, NULL, uv_0285BFE4, NULL }
};

NJS_VECTOR vertex_0285C0D8[] = {
	{ 1.652864f, 1.377877f, 1.052963f },
	{ 1.652866f, 1.377877f, -1.186534f },
	{ -0.652227f, 0.933428f, 0.85639f },
	{ -0.652224f, 0.933428f, -0.881174f },
	{ 1.657134f, 2.129112f, 0 },
	{ -0.479438f, -1.261515f, 0.959719f },
	{ -0.479398f, -1.26151f, -0.9845f },
	{ 1.655773f, -1.438187f, -1.524722f },
	{ 1.655771f, -1.438187f, 1.391151f },
	{ -0.644762f, 1.943158f, 0 }
};

NJS_VECTOR normal_0285C150[] = {
	{ 0.688175f, 0.355553f, 0.632453f },
	{ 0.679706f, 0.37629f, -0.629607f },
	{ -0.126784f, 0.545334f, 0.828575f },
	{ -0.153684f, 0.562f, -0.812734f },
	{ 0.157291f, 0.987363f, 0.019342f },
	{ -0.100704f, 0.083819f, 0.991379f },
	{ -0.146356f, 0.08173f, -0.98585f },
	{ 0.653284f, 0.063337f, -0.754459f },
	{ 0.670525f, 0.063266f, 0.739184f },
	{ -0.080518f, 0.996728f, 0.007056f }
};

NJS_MODEL_SADX attach_0285C1C8 = { vertex_0285C0D8, normal_0285C150, LengthOfArray(vertex_0285C0D8), meshlist_0285BFF8, matlist_0285BF34, LengthOfArray(meshlist_0285BFF8), LengthOfArray(matlist_0285BF34),{ 0.502453f, 0.345462f, -0.066785f }, 2.303574f, NULL };

NJS_OBJECT object_0285C1F4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0285C1C8, 2.837574f, -0.248723f, -0.047732f, 0, 0, 0, 1, 1, 1, &object_0285BF00, NULL };

NJS_MATERIAL matlist_0285C228[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285C23C[] = {
	11, 0, 8
};

Sint16 poly_0285C244[] = {
	12, 4, 2
};

Sint16 poly_0285C24C[] = {
	2, 0, 11
};

Sint16 poly_0285C254[] = {
	8, 6, 14
};

Sint16 poly_0285C25C[] = {
	12, 14, 6
};

Sint16 poly_0285C264[] = {
	1, 3, 10
};

Sint16 poly_0285C26C[] = {
	9, 1, 11
};

Sint16 poly_0285C274[] = {
	14, 7, 9
};

Sint16 poly_0285C27C[] = {
	5, 7, 14
};

Sint16 poly_0285C284[] = {
	10, 3, 5
};

Sint16 poly_0285C28C[] = {
	11, 13, 9
};

Sint16 poly_0285C294[] = {
	9, 13, 14
};

Sint16 poly_0285C29C[] = {
	14, 12, 5
};

Sint16 poly_0285C2A4[] = {
	5, 12, 10
};

Sint16 poly_0285C2AC[] = {
	10, 11, 1
};

Sint16 poly_0285C2B4[] = {
	11, 10, 2
};

Sint16 poly_0285C2BC[] = {
	8, 13, 11
};

Sint16 poly_0285C2C4[] = {
	14, 13, 8
};

Sint16 poly_0285C2CC[] = {
	2, 10, 12
};

Sint16 poly_0285C2D4[] = {
	6, 4, 12
};

NJS_TEX uv_0285C2E0[] = {
	{ 175, 224 },
	{ 236, 241 },
	{ 255, 255 }
};

NJS_TEX uv_0285C2EC[] = {
	{ 176, 20 },
	{ 236, 13 },
	{ 237, 125 }
};

NJS_TEX uv_0285C2F8[] = {
	{ 237, 125 },
	{ 236, 241 },
	{ 175, 224 }
};

NJS_TEX uv_0285C304[] = {
	{ 255, 255 },
	{ 254, 0 },
	{ 175, 29 }
};

NJS_TEX uv_0285C310[] = {
	{ 176, 20 },
	{ 175, 29 },
	{ 254, 0 }
};

NJS_TEX uv_0285C31C[] = {
	{ 0, 201 },
	{ 0, 123 },
	{ 175, 121 }
};

NJS_TEX uv_0285C328[] = {
	{ 0, 174 },
	{ 0, 201 },
	{ 175, 224 }
};

NJS_TEX uv_0285C334[] = {
	{ 175, 29 },
	{ 0, 72 },
	{ 0, 174 }
};

NJS_TEX uv_0285C340[] = {
	{ 0, 44 },
	{ 0, 72 },
	{ 175, 29 }
};

NJS_TEX uv_0285C34C[] = {
	{ 175, 121 },
	{ 0, 123 },
	{ 0, 44 }
};

NJS_TEX uv_0285C358[] = {
	{ 175, 224 },
	{ 175, 228 },
	{ 0, 174 }
};

NJS_TEX uv_0285C364[] = {
	{ 0, 174 },
	{ 175, 228 },
	{ 175, 29 }
};

NJS_TEX uv_0285C370[] = {
	{ 175, 29 },
	{ 176, 20 },
	{ 0, 44 }
};

NJS_TEX uv_0285C37C[] = {
	{ 0, 44 },
	{ 176, 20 },
	{ 175, 121 }
};

NJS_TEX uv_0285C388[] = {
	{ 175, 121 },
	{ 175, 224 },
	{ 0, 201 }
};

NJS_TEX uv_0285C394[] = {
	{ 175, 224 },
	{ 175, 121 },
	{ 237, 125 }
};

NJS_TEX uv_0285C3A0[] = {
	{ 255, 255 },
	{ 175, 228 },
	{ 175, 224 }
};

NJS_TEX uv_0285C3AC[] = {
	{ 175, 29 },
	{ 175, 228 },
	{ 255, 255 }
};

NJS_TEX uv_0285C3B8[] = {
	{ 237, 125 },
	{ 175, 121 },
	{ 176, 20 }
};

NJS_TEX uv_0285C3C4[] = {
	{ 254, 0 },
	{ 236, 13 },
	{ 176, 20 }
};

NJS_MESHSET_SADX meshlist_0285C3D0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285C23C, NULL, NULL, NULL, uv_0285C2E0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C244, NULL, NULL, NULL, uv_0285C2EC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C24C, NULL, NULL, NULL, uv_0285C2F8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C254, NULL, NULL, NULL, uv_0285C304, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C25C, NULL, NULL, NULL, uv_0285C310, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C264, NULL, NULL, NULL, uv_0285C31C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C26C, NULL, NULL, NULL, uv_0285C328, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C274, NULL, NULL, NULL, uv_0285C334, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C27C, NULL, NULL, NULL, uv_0285C340, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C284, NULL, NULL, NULL, uv_0285C34C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C28C, NULL, NULL, NULL, uv_0285C358, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C294, NULL, NULL, NULL, uv_0285C364, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C29C, NULL, NULL, NULL, uv_0285C370, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C2A4, NULL, NULL, NULL, uv_0285C37C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C2AC, NULL, NULL, NULL, uv_0285C388, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C2B4, NULL, NULL, NULL, uv_0285C394, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C2BC, NULL, NULL, NULL, uv_0285C3A0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C2C4, NULL, NULL, NULL, uv_0285C3AC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C2CC, NULL, NULL, NULL, uv_0285C3B8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C2D4, NULL, NULL, NULL, uv_0285C3C4, NULL }
};

NJS_VECTOR vertex_0285C600[] = {
	{ 2.185351f, 0.684705f, -0.928906f },
	{ -0.05747f, 0.164621f, -0.62801f },
	{ 2.192812f, 1.619818f, -0.047732f },
	{ -0.058118f, 1.220758f, -0.028391f },
	{ 2.185347f, 0.684705f, 0.808658f },
	{ -0.05747f, 0.164621f, 0.571227f },
	{ 2.358136f, -1.510238f, 0.911988f },
	{ -0.056775f, -0.610342f, 0.360329f },
	{ 2.358177f, -1.510233f, -1.032232f },
	{ -0.056775f, -0.610342f, -0.420122f },
	{ 1.609318f, 1.431933f, -0.016697f },
	{ 1.608898f, 0.160558f, -0.798121f },
	{ 1.612224f, 0.144468f, 0.756602f },
	{ 1.608219f, -1.121672f, -0.833166f },
	{ 1.607744f, -1.155958f, 0.686272f }
};

NJS_VECTOR normal_0285C6B8[] = {
	{ -0.466493f, 0.305965f, -0.829921f },
	{ -0.086081f, 0.270902f, -0.95875f },
	{ -0.584435f, 0.811215f, 0.019134f },
	{ -0.125638f, 0.992076f, -0.00066f },
	{ -0.381954f, 0.321723f, 0.866375f },
	{ -0.142219f, 0.186347f, 0.972136f },
	{ -0.372235f, -0.396708f, 0.839085f },
	{ -0.354486f, -0.739843f, 0.571814f },
	{ -0.465921f, -0.586969f, -0.662107f },
	{ -0.309275f, -0.701478f, -0.642089f },
	{ -0.201886f, 0.979382f, 0.007298f },
	{ -0.2662f, 0.214311f, -0.939791f },
	{ -0.236942f, 0.269267f, 0.933463f },
	{ -0.421041f, -0.607032f, -0.67397f },
	{ -0.404578f, -0.749654f, 0.523771f }
};

NJS_MODEL_SADX attach_0285C76C = { vertex_0285C600, normal_0285C6B8, LengthOfArray(vertex_0285C600), meshlist_0285C3D0, matlist_0285C228, LengthOfArray(meshlist_0285C3D0), LengthOfArray(matlist_0285C228),{ 1.15003f, 0.05479f, -0.060122f }, 1.841314f, NULL };

NJS_OBJECT object_0285C798 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285C76C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0285C1F4 };

NJS_OBJECT object_0285C7CC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 2.939466f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0285C798 };

NJS_OBJECT object_0285C800 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 1.961013f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0285C7CC, &object_0285B884 };

NJS_OBJECT object_0285C834 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.540639f, 0, 0, 0, 0, 0, 1, 1, 1, &object_0285C800, &object_0285B614 };

NJS_OBJECT object_0285C868 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFBF42, 1, 1, 1, &object_0285C834, NULL };

NJS_OBJECT object_0285C89C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.245227f, -0.681835f, -1.25997f, 0, 0, 0, 1, 1, 1, &object_0285C868, &object_0285B3A4 };

NJS_OBJECT object_0285C8D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0.015339f, -3.297874f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0285C904[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285C918[] = {
	30, 5, 0
};

Sint16 poly_0285C920[] = {
	7, 2, 34
};

Sint16 poly_0285C928[] = {
	7, 8, 3
};

Sint16 poly_0285C930[] = {
	3, 8, 9
};

Sint16 poly_0285C938[] = {
	4, 9, 10
};

Sint16 poly_0285C940[] = {
	5, 10, 0
};

Sint16 poly_0285C948[] = {
	4, 5, 30
};

Sint16 poly_0285C950[] = {
	51, 14, 15
};

Sint16 poly_0285C958[] = {
	47, 15, 0
};

Sint16 poly_0285C960[] = {
	3, 4, 29
};

Sint16 poly_0285C968[] = {
	17, 12, 31
};

Sint16 poly_0285C970[] = {
	12, 17, 18
};

Sint16 poly_0285C978[] = {
	18, 19, 14
};

Sint16 poly_0285C980[] = {
	19, 20, 15
};

Sint16 poly_0285C988[] = {
	15, 20, 0
};

Sint16 poly_0285C990[] = {
	27, 2, 3
};

Sint16 poly_0285C998[] = {
	35, 22, 17
};

Sint16 poly_0285C9A0[] = {
	22, 23, 18
};

Sint16 poly_0285C9A8[] = {
	18, 23, 24
};

Sint16 poly_0285C9B0[] = {
	19, 24, 25
};

Sint16 poly_0285C9B8[] = {
	20, 25, 0
};

Sint16 poly_0285C9C0[] = {
	34, 2, 27
};

Sint16 poly_0285C9C8[] = {
	38, 30, 0
};

Sint16 poly_0285C9D0[] = {
	11, 16, 33
};

Sint16 poly_0285C9D8[] = {
	33, 16, 21
};

Sint16 poly_0285C9E0[] = {
	26, 36, 44
};

Sint16 poly_0285C9E8[] = {
	26, 1, 34
};

Sint16 poly_0285C9F0[] = {
	11, 31, 45
};

Sint16 poly_0285C9F8[] = {
	34, 1, 6
};

Sint16 poly_0285CA00[] = {
	18, 13, 12
};

Sint16 poly_0285CA08[] = {
	18, 17, 22
};

Sint16 poly_0285CA10[] = {
	17, 33, 35
};

Sint16 poly_0285CA18[] = {
	31, 33, 17
};

Sint16 poly_0285CA20[] = {
	33, 31, 11
};

Sint16 poly_0285CA28[] = {
	21, 35, 33
};

Sint16 poly_0285CA30[] = {
	24, 19, 18
};

Sint16 poly_0285CA38[] = {
	14, 13, 18
};

Sint16 poly_0285CA40[] = {
	29, 28, 3
};

Sint16 poly_0285CA48[] = {
	9, 4, 3
};

Sint16 poly_0285CA50[] = {
	3, 28, 27
};

Sint16 poly_0285CA58[] = {
	3, 2, 7
};

Sint16 poly_0285CA60[] = {
	27, 36, 34
};

Sint16 poly_0285CA68[] = {
	34, 32, 7
};

Sint16 poly_0285CA70[] = {
	34, 36, 26
};

Sint16 poly_0285CA78[] = {
	6, 32, 34
};

Sint16 poly_0285CA80[] = {
	10, 5, 4
};

Sint16 poly_0285CA88[] = {
	30, 29, 4
};

Sint16 poly_0285CA90[] = {
	15, 14, 19
};

Sint16 poly_0285CA98[] = {
	25, 20, 19
};

Sint16 poly_0285CAA0[] = {
	45, 32, 6
};

Sint16 poly_0285CAA8[] = {
	6, 11, 45
};

Sint16 poly_0285CAB0[] = {
	46, 49, 48
};

Sint16 poly_0285CAB8[] = {
	52, 51, 47
};

Sint16 poly_0285CAC0[] = {
	10, 9, 50
};

Sint16 poly_0285CAC8[] = {
	47, 10, 50
};

Sint16 poly_0285CAD0[] = {
	0, 10, 47
};

Sint16 poly_0285CAD8[] = {
	0, 25, 38
};

Sint16 poly_0285CAE0[] = {
	38, 39, 37
};

Sint16 poly_0285CAE8[] = {
	47, 50, 52
};

Sint16 poly_0285CAF0[] = {
	41, 42, 43
};

Sint16 poly_0285CAF8[] = {
	44, 35, 21
};

Sint16 poly_0285CB00[] = {
	44, 21, 26
};

Sint16 poly_0285CB08[] = {
	37, 40, 38
};

Sint16 poly_0285CB10[] = {
	51, 15, 47
};

Sint16 poly_0285CB18[] = {
	46, 7, 45, 32
};

Sint16 poly_0285CB20[] = {
	46, 12, 49, 13
};

Sint16 poly_0285CB28[] = {
	49, 13, 51, 14
};

Sint16 poly_0285CB30[] = {
	43, 22, 44, 35
};

Sint16 poly_0285CB38[] = {
	43, 27, 41, 28
};

Sint16 poly_0285CB40[] = {
	41, 28, 40, 29
};

Sint16 poly_0285CB48[] = {
	40, 29, 38, 30
};

Sint16 poly_0285CB50[] = {
	45, 31, 46, 12
};

Sint16 poly_0285CB58[] = {
	48, 8, 46, 7
};

Sint16 poly_0285CB60[] = {
	50, 9, 48, 8
};

Sint16 poly_0285CB68[] = {
	38, 25, 39, 24
};

Sint16 poly_0285CB70[] = {
	39, 24, 42, 23
};

Sint16 poly_0285CB78[] = {
	42, 23, 43, 22
};

Sint16 poly_0285CB80[] = {
	44, 36, 43, 27
};

NJS_TEX uv_0285CB88[] = {
	{ 192, 18 },
	{ 125, 18 },
	{ 125, 3 }
};

NJS_TEX uv_0285CB94[] = {
	{ 33, 168 },
	{ 125, 168 },
	{ 125, 217 }
};

NJS_TEX uv_0285CBA0[] = {
	{ 33, 168 },
	{ 19, 135 },
	{ 125, 135 }
};

NJS_TEX uv_0285CBAC[] = {
	{ 125, 135 },
	{ 19, 135 },
	{ 22, 57 }
};

NJS_TEX uv_0285CBB8[] = {
	{ 125, 57 },
	{ 22, 57 },
	{ 58, 18 }
};

NJS_TEX uv_0285CBC4[] = {
	{ 125, 18 },
	{ 58, 18 },
	{ 125, 3 }
};

NJS_TEX uv_0285CBD0[] = {
	{ 125, 57 },
	{ 125, 18 },
	{ 192, 18 }
};

NJS_TEX uv_0285CBDC[] = {
	{ 3, 57 },
	{ 22, 57 },
	{ 58, 18 }
};

NJS_TEX uv_0285CBE8[] = {
	{ 58, 18 },
	{ 58, 18 },
	{ 125, 3 }
};

NJS_TEX uv_0285CBF4[] = {
	{ 125, 135 },
	{ 125, 57 },
	{ 228, 57 }
};

NJS_TEX uv_0285CC00[] = {
	{ 125, 184 },
	{ 33, 168 },
	{ 52, 217 }
};

NJS_TEX uv_0285CC0C[] = {
	{ 33, 168 },
	{ 125, 184 },
	{ 125, 135 }
};

NJS_TEX uv_0285CC18[] = {
	{ 125, 135 },
	{ 125, 57 },
	{ 22, 57 }
};

NJS_TEX uv_0285CC24[] = {
	{ 125, 57 },
	{ 125, 18 },
	{ 58, 18 }
};

NJS_TEX uv_0285CC30[] = {
	{ 58, 18 },
	{ 125, 18 },
	{ 125, 3 }
};

NJS_TEX uv_0285CC3C[] = {
	{ 217, 168 },
	{ 125, 168 },
	{ 125, 135 }
};

NJS_TEX uv_0285CC48[] = {
	{ 198, 217 },
	{ 217, 168 },
	{ 125, 184 }
};

NJS_TEX uv_0285CC54[] = {
	{ 217, 168 },
	{ 231, 135 },
	{ 125, 135 }
};

NJS_TEX uv_0285CC60[] = {
	{ 125, 135 },
	{ 231, 135 },
	{ 228, 57 }
};

NJS_TEX uv_0285CC6C[] = {
	{ 125, 57 },
	{ 228, 57 },
	{ 192, 18 }
};

NJS_TEX uv_0285CC78[] = {
	{ 125, 18 },
	{ 192, 18 },
	{ 125, 3 }
};

NJS_TEX uv_0285CC84[] = {
	{ 125, 217 },
	{ 125, 168 },
	{ 217, 168 }
};

NJS_TEX uv_0285CC90[] = {
	{ 192, 18 },
	{ 192, 18 },
	{ 125, 3 }
};

NJS_TEX uv_0285CC9C[] = {
	{ 64, 254 },
	{ 125, 254 },
	{ 125, 217 }
};

NJS_TEX uv_0285CCA8[] = {
	{ 125, 217 },
	{ 125, 254 },
	{ 186, 254 }
};

NJS_TEX uv_0285CCB4[] = {
	{ 186, 254 },
	{ 198, 217 },
	{ 209, 217 }
};

NJS_TEX uv_0285CCC0[] = {
	{ 186, 254 },
	{ 125, 254 },
	{ 125, 217 }
};

NJS_TEX uv_0285CCCC[] = {
	{ 64, 254 },
	{ 52, 217 },
	{ 41, 217 }
};

NJS_TEX uv_0285CCD8[] = {
	{ 125, 217 },
	{ 125, 254 },
	{ 64, 254 }
};

NJS_TEX uv_0285CCE4[] = {
	{ 125, 135 },
	{ 19, 135 },
	{ 33, 168 }
};

NJS_TEX uv_0285CCF0[] = {
	{ 125, 135 },
	{ 125, 184 },
	{ 217, 168 }
};

NJS_TEX uv_0285CCFC[] = {
	{ 125, 184 },
	{ 125, 217 },
	{ 198, 217 }
};

NJS_TEX uv_0285CD08[] = {
	{ 52, 217 },
	{ 125, 217 },
	{ 125, 184 }
};

NJS_TEX uv_0285CD14[] = {
	{ 125, 217 },
	{ 52, 217 },
	{ 64, 254 }
};

NJS_TEX uv_0285CD20[] = {
	{ 186, 254 },
	{ 198, 217 },
	{ 125, 217 }
};

NJS_TEX uv_0285CD2C[] = {
	{ 228, 57 },
	{ 125, 57 },
	{ 125, 135 }
};

NJS_TEX uv_0285CD38[] = {
	{ 22, 57 },
	{ 19, 135 },
	{ 125, 135 }
};

NJS_TEX uv_0285CD44[] = {
	{ 228, 57 },
	{ 231, 135 },
	{ 125, 135 }
};

NJS_TEX uv_0285CD50[] = {
	{ 22, 57 },
	{ 125, 57 },
	{ 125, 135 }
};

NJS_TEX uv_0285CD5C[] = {
	{ 125, 135 },
	{ 231, 135 },
	{ 217, 168 }
};

NJS_TEX uv_0285CD68[] = {
	{ 125, 135 },
	{ 125, 168 },
	{ 33, 168 }
};

NJS_TEX uv_0285CD74[] = {
	{ 217, 168 },
	{ 198, 217 },
	{ 125, 217 }
};

NJS_TEX uv_0285CD80[] = {
	{ 125, 217 },
	{ 52, 217 },
	{ 33, 168 }
};

NJS_TEX uv_0285CD8C[] = {
	{ 125, 217 },
	{ 198, 217 },
	{ 186, 254 }
};

NJS_TEX uv_0285CD98[] = {
	{ 64, 254 },
	{ 52, 217 },
	{ 125, 217 }
};

NJS_TEX uv_0285CDA4[] = {
	{ 58, 18 },
	{ 125, 18 },
	{ 125, 57 }
};

NJS_TEX uv_0285CDB0[] = {
	{ 192, 18 },
	{ 228, 57 },
	{ 125, 57 }
};

NJS_TEX uv_0285CDBC[] = {
	{ 58, 18 },
	{ 22, 57 },
	{ 125, 57 }
};

NJS_TEX uv_0285CDC8[] = {
	{ 192, 18 },
	{ 125, 18 },
	{ 125, 57 }
};

NJS_TEX uv_0285CDD4[] = {
	{ 41, 217 },
	{ 52, 217 },
	{ 64, 254 }
};

NJS_TEX uv_0285CDE0[] = {
	{ 64, 254 },
	{ 64, 254 },
	{ 41, 217 }
};

NJS_TEX uv_0285CDEC[] = {
	{ 19, 168 },
	{ 0, 135 },
	{ 0, 135 }
};

NJS_TEX uv_0285CDF8[] = {
	{ 3, 49 },
	{ 3, 57 },
	{ 58, 18 }
};

NJS_TEX uv_0285CE04[] = {
	{ 58, 18 },
	{ 22, 57 },
	{ 3, 57 }
};

NJS_TEX uv_0285CE10[] = {
	{ 58, 18 },
	{ 58, 18 },
	{ 3, 57 }
};

NJS_TEX uv_0285CE1C[] = {
	{ 125, 3 },
	{ 58, 18 },
	{ 58, 18 }
};

NJS_TEX uv_0285CE28[] = {
	{ 125, 3 },
	{ 192, 18 },
	{ 192, 18 }
};

NJS_TEX uv_0285CE34[] = {
	{ 192, 18 },
	{ 247, 57 },
	{ 247, 49 }
};

NJS_TEX uv_0285CE40[] = {
	{ 58, 18 },
	{ 3, 57 },
	{ 3, 49 }
};

NJS_TEX uv_0285CE4C[] = {
	{ 251, 135 },
	{ 251, 135 },
	{ 231, 168 }
};

NJS_TEX uv_0285CE58[] = {
	{ 209, 217 },
	{ 198, 217 },
	{ 186, 254 }
};

NJS_TEX uv_0285CE64[] = {
	{ 209, 217 },
	{ 186, 254 },
	{ 186, 254 }
};

NJS_TEX uv_0285CE70[] = {
	{ 247, 49 },
	{ 247, 57 },
	{ 192, 18 }
};

NJS_TEX uv_0285CE7C[] = {
	{ 3, 57 },
	{ 58, 18 },
	{ 58, 18 }
};

NJS_TEX uv_0285CE88[] = {
	{ 19, 168 },
	{ 33, 168 },
	{ 41, 217 },
	{ 52, 217 }
};

NJS_TEX uv_0285CE98[] = {
	{ 19, 168 },
	{ 33, 168 },
	{ 0, 135 },
	{ 19, 135 }
};

NJS_TEX uv_0285CEA8[] = {
	{ 0, 135 },
	{ 19, 135 },
	{ 3, 57 },
	{ 22, 57 }
};

NJS_TEX uv_0285CEB8[] = {
	{ 231, 168 },
	{ 217, 168 },
	{ 209, 217 },
	{ 198, 217 }
};

NJS_TEX uv_0285CEC8[] = {
	{ 231, 168 },
	{ 217, 168 },
	{ 251, 135 },
	{ 231, 135 }
};

NJS_TEX uv_0285CED8[] = {
	{ 251, 135 },
	{ 231, 135 },
	{ 247, 57 },
	{ 228, 57 }
};

NJS_TEX uv_0285CEE8[] = {
	{ 247, 57 },
	{ 228, 57 },
	{ 192, 18 },
	{ 192, 18 }
};

NJS_TEX uv_0285CEF8[] = {
	{ 41, 217 },
	{ 52, 217 },
	{ 19, 168 },
	{ 33, 168 }
};

NJS_TEX uv_0285CF08[] = {
	{ 0, 135 },
	{ 19, 135 },
	{ 19, 168 },
	{ 33, 168 }
};

NJS_TEX uv_0285CF18[] = {
	{ 3, 57 },
	{ 22, 57 },
	{ 0, 135 },
	{ 19, 135 }
};

NJS_TEX uv_0285CF28[] = {
	{ 192, 18 },
	{ 192, 18 },
	{ 247, 57 },
	{ 228, 57 }
};

NJS_TEX uv_0285CF38[] = {
	{ 247, 57 },
	{ 228, 57 },
	{ 251, 135 },
	{ 231, 135 }
};

NJS_TEX uv_0285CF48[] = {
	{ 251, 135 },
	{ 231, 135 },
	{ 231, 168 },
	{ 217, 168 }
};

NJS_TEX uv_0285CF58[] = {
	{ 209, 217 },
	{ 198, 217 },
	{ 231, 168 },
	{ 217, 168 }
};

NJS_MESHSET_SADX meshlist_0285CF68[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285C918, NULL, NULL, NULL, uv_0285CB88, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C920, NULL, NULL, NULL, uv_0285CB94, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C928, NULL, NULL, NULL, uv_0285CBA0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C930, NULL, NULL, NULL, uv_0285CBAC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C938, NULL, NULL, NULL, uv_0285CBB8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C940, NULL, NULL, NULL, uv_0285CBC4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C948, NULL, NULL, NULL, uv_0285CBD0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C950, NULL, NULL, NULL, uv_0285CBDC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C958, NULL, NULL, NULL, uv_0285CBE8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C960, NULL, NULL, NULL, uv_0285CBF4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C968, NULL, NULL, NULL, uv_0285CC00, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C970, NULL, NULL, NULL, uv_0285CC0C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C978, NULL, NULL, NULL, uv_0285CC18, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C980, NULL, NULL, NULL, uv_0285CC24, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C988, NULL, NULL, NULL, uv_0285CC30, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C990, NULL, NULL, NULL, uv_0285CC3C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C998, NULL, NULL, NULL, uv_0285CC48, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9A0, NULL, NULL, NULL, uv_0285CC54, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9A8, NULL, NULL, NULL, uv_0285CC60, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9B0, NULL, NULL, NULL, uv_0285CC6C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9B8, NULL, NULL, NULL, uv_0285CC78, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9C0, NULL, NULL, NULL, uv_0285CC84, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9C8, NULL, NULL, NULL, uv_0285CC90, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9D0, NULL, NULL, NULL, uv_0285CC9C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9D8, NULL, NULL, NULL, uv_0285CCA8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9E0, NULL, NULL, NULL, uv_0285CCB4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9E8, NULL, NULL, NULL, uv_0285CCC0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9F0, NULL, NULL, NULL, uv_0285CCCC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285C9F8, NULL, NULL, NULL, uv_0285CCD8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA00, NULL, NULL, NULL, uv_0285CCE4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA08, NULL, NULL, NULL, uv_0285CCF0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA10, NULL, NULL, NULL, uv_0285CCFC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA18, NULL, NULL, NULL, uv_0285CD08, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA20, NULL, NULL, NULL, uv_0285CD14, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA28, NULL, NULL, NULL, uv_0285CD20, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA30, NULL, NULL, NULL, uv_0285CD2C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA38, NULL, NULL, NULL, uv_0285CD38, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA40, NULL, NULL, NULL, uv_0285CD44, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA48, NULL, NULL, NULL, uv_0285CD50, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA50, NULL, NULL, NULL, uv_0285CD5C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA58, NULL, NULL, NULL, uv_0285CD68, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA60, NULL, NULL, NULL, uv_0285CD74, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA68, NULL, NULL, NULL, uv_0285CD80, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA70, NULL, NULL, NULL, uv_0285CD8C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA78, NULL, NULL, NULL, uv_0285CD98, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA80, NULL, NULL, NULL, uv_0285CDA4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA88, NULL, NULL, NULL, uv_0285CDB0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA90, NULL, NULL, NULL, uv_0285CDBC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CA98, NULL, NULL, NULL, uv_0285CDC8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAA0, NULL, NULL, NULL, uv_0285CDD4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAA8, NULL, NULL, NULL, uv_0285CDE0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAB0, NULL, NULL, NULL, uv_0285CDEC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAB8, NULL, NULL, NULL, uv_0285CDF8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAC0, NULL, NULL, NULL, uv_0285CE04, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAC8, NULL, NULL, NULL, uv_0285CE10, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAD0, NULL, NULL, NULL, uv_0285CE1C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAD8, NULL, NULL, NULL, uv_0285CE28, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAE0, NULL, NULL, NULL, uv_0285CE34, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAE8, NULL, NULL, NULL, uv_0285CE40, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAF0, NULL, NULL, NULL, uv_0285CE4C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CAF8, NULL, NULL, NULL, uv_0285CE58, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CB00, NULL, NULL, NULL, uv_0285CE64, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CB08, NULL, NULL, NULL, uv_0285CE70, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285CB10, NULL, NULL, NULL, uv_0285CE7C, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB18, NULL, NULL, NULL, uv_0285CE88, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB20, NULL, NULL, NULL, uv_0285CE98, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB28, NULL, NULL, NULL, uv_0285CEA8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB30, NULL, NULL, NULL, uv_0285CEB8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB38, NULL, NULL, NULL, uv_0285CEC8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB40, NULL, NULL, NULL, uv_0285CED8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB48, NULL, NULL, NULL, uv_0285CEE8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB50, NULL, NULL, NULL, uv_0285CEF8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB58, NULL, NULL, NULL, uv_0285CF08, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB60, NULL, NULL, NULL, uv_0285CF18, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB68, NULL, NULL, NULL, uv_0285CF28, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB70, NULL, NULL, NULL, uv_0285CF38, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB78, NULL, NULL, NULL, uv_0285CF48, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285CB80, NULL, NULL, NULL, uv_0285CF58, NULL }
};

NJS_VECTOR vertex_0285D7F0[] = {
	{ 0, 1.748074f, 0 },
	{ 1.205319f, -2.325143f, 0 },
	{ 1.448438f, -0.922734f, 0 },
	{ 1.746402f, -0.38722f, 0 },
	{ 1.621488f, 0.874037f, 0 },
	{ 0.905252f, 1.513876f, 0 },
	{ 0.699001f, -2.325143f, -1.478088f },
	{ 0.950614f, -0.922734f, -2.236353f },
	{ 1.223879f, -0.38722f, -2.580709f },
	{ 1.05991f, 0.874037f, -2.503154f },
	{ 0.452626f, 1.513876f, -1.639075f },
	{ -0.641196f, -2.325143f, -1.478088f },
	{ -0.89281f, -0.922734f, -2.236353f },
	{ -1.260327f, -0.38722f, -2.580708f },
	{ -1.096358f, 0.874037f, -2.503153f },
	{ -0.452626f, 1.513876f, -1.639075f },
	{ -1.147515f, -2.325143f, 0 },
	{ -1.451989f, -1.183497f, 0.000001f },
	{ -1.901883f, -0.38722f, 0.000001f },
	{ -1.673959f, 0.874037f, 0 },
	{ -0.905252f, 1.513876f, 0 },
	{ -0.641196f, -2.325143f, 1.478088f },
	{ -0.89281f, -0.922734f, 2.236354f },
	{ -1.260326f, -0.38722f, 2.580709f },
	{ -1.096358f, 0.874037f, 2.503154f },
	{ -0.452626f, 1.513876f, 1.639076f },
	{ 0.699001f, -2.325143f, 1.478088f },
	{ 0.950615f, -0.922734f, 2.236353f },
	{ 1.22388f, -0.38722f, 2.580708f },
	{ 1.05991f, 0.874037f, 2.503153f },
	{ 0.452626f, 1.513876f, 1.639075f },
	{ -0.672572f, -1.715973f, -1.769191f },
	{ 0.730376f, -1.715973f, -1.769191f },
	{ -1.210266f, -1.715973f, 0 },
	{ 1.26807f, -1.715973f, 0 },
	{ -0.672572f, -1.715973f, 1.769192f },
	{ 0.730377f, -1.715973f, 1.769191f },
	{ -0.006131f, 1.011688f, 2.95881f },
	{ 0, 1.513876f, 1.639076f },
	{ -0.595984f, 0.874037f, 2.958811f },
	{ 0.647253f, 0.874037f, 2.95881f },
	{ 0.722469f, -0.38722f, 3.050484f },
	{ -0.671198f, -0.38722f, 3.050484f },
	{ 0.028903f, -0.922734f, 2.574936f },
	{ 0.028903f, -1.715973f, 2.037046f },
	{ 0.028902f, -1.715973f, -2.037046f },
	{ 0.028902f, -0.922734f, -2.574936f },
	{ 0, 1.513876f, -1.639075f },
	{ 0.722468f, -0.38722f, -3.050484f },
	{ -0.671199f, -0.38722f, -3.050484f },
	{ 0.647253f, 0.874037f, -2.958811f },
	{ -0.595984f, 0.874037f, -2.95881f },
	{ -0.006131f, 1.011688f, -2.95881f }
};

NJS_VECTOR normal_0285DA70[] = {
	{ 0, 1, 0 },
	{ 0.994736f, -0.102469f, 0 },
	{ 0.933773f, -0.357867f, 0 },
	{ 0.977987f, -0.208667f, 0 },
	{ 0.813686f, 0.581305f, 0 },
	{ 0.470106f, 0.88261f, 0 },
	{ 0.648268f, -0.405529f, -0.644434f },
	{ 0.756805f, -0.505216f, -0.414732f },
	{ 0.828819f, -0.254977f, -0.498042f },
	{ 0.819417f, 0.446519f, -0.359412f },
	{ 0.335378f, 0.913234f, -0.231354f },
	{ -0.648268f, -0.405529f, -0.644434f },
	{ -0.667353f, -0.582898f, -0.463541f },
	{ -0.788744f, -0.300383f, -0.536333f },
	{ -0.790608f, 0.471413f, -0.390779f },
	{ -0.31849f, 0.918685f, -0.233628f },
	{ -0.994736f, -0.102469f, 0 },
	{ -0.897756f, -0.440493f, 0 },
	{ -0.975245f, -0.221128f, 0 },
	{ -0.78635f, 0.617781f, 0 },
	{ -0.454852f, 0.890567f, 0 },
	{ -0.648267f, -0.405529f, 0.644434f },
	{ -0.667353f, -0.582898f, 0.463541f },
	{ -0.788744f, -0.300383f, 0.536333f },
	{ -0.773834f, 0.477261f, 0.416416f },
	{ -0.355958f, 0.911289f, 0.206994f },
	{ 0.648268f, -0.405529f, 0.644434f },
	{ 0.756805f, -0.505216f, 0.414732f },
	{ 0.828819f, -0.254977f, 0.498042f },
	{ 0.800218f, 0.455372f, 0.39024f },
	{ 0.370392f, 0.90531f, 0.207903f },
	{ -0.726573f, -0.427637f, -0.537791f },
	{ 0.67236f, -0.428466f, -0.603613f },
	{ -0.970923f, -0.239392f, 0 },
	{ 0.971895f, -0.235415f, 0 },
	{ -0.726573f, -0.427637f, 0.537791f },
	{ 0.67236f, -0.428466f, 0.603613f },
	{ -0.010234f, 0.934588f, 0.355584f },
	{ -0.00086f, 0.945137f, 0.326675f },
	{ -0.401012f, 0.706118f, 0.583597f },
	{ 0.425191f, 0.709734f, 0.561686f },
	{ 0.410823f, -0.437589f, 0.799837f },
	{ -0.373104f, -0.450058f, 0.81132f },
	{ 0.00658f, -0.640604f, 0.767843f },
	{ 0, -0.545853f, 0.837881f },
	{ 0, -0.545852f, -0.837881f },
	{ 0.006579f, -0.640604f, -0.767843f },
	{ -0.003393f, 0.949596f, -0.313457f },
	{ 0.410823f, -0.437589f, -0.799838f },
	{ -0.373105f, -0.450058f, -0.81132f },
	{ 0.359257f, 0.780401f, -0.511769f },
	{ -0.333256f, 0.778091f, -0.532461f },
	{ -0.010234f, 0.934588f, -0.355584f }
};

NJS_MODEL_SADX attach_0285DCEC = { vertex_0285D7F0, normal_0285DA70, LengthOfArray(vertex_0285D7F0), meshlist_0285CF68, matlist_0285C904, LengthOfArray(meshlist_0285CF68), LengthOfArray(matlist_0285C904),{ -0.077741f, -0.288535f, 0 }, 3.667864f, NULL };

NJS_OBJECT object_0285DD18 = { NJD_EVAL_UNIT_SCL, &attach_0285DCEC, -0.126218f, 2.318556f, 0, 0, 0, 0x245, 1, 1, 1, &object_0285C8D0, NULL };

NJS_MATERIAL matlist_0285DD4C[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285DD60[] = {
	14, 9, 10, 7
};

Sint16 poly_0285DD68[] = {
	11, 3, 13, 1
};

Sint16 poly_0285DD70[] = {
	13, 1, 14, 9
};

Sint16 poly_0285DD78[] = {
	10, 7, 12, 5
};

Sint16 poly_0285DD80[] = {
	12, 5, 11, 3
};

Sint16 poly_0285DD88[] = {
	14, 8, 13, 0
};

Sint16 poly_0285DD90[] = {
	13, 0, 11, 2
};

Sint16 poly_0285DD98[] = {
	11, 2, 12, 4
};

Sint16 poly_0285DDA0[] = {
	10, 6, 14, 8
};

Sint16 poly_0285DDA8[] = {
	12, 4, 10, 6
};

NJS_TEX uv_0285DDB0[] = {
	{ 73, 0 },
	{ 0, 2 },
	{ 80, 73 },
	{ 8, 76 }
};

NJS_TEX uv_0285DDC0[] = {
	{ 100, 195 },
	{ 23, 254 },
	{ 79, 72 },
	{ 7, 76 }
};

NJS_TEX uv_0285DDD0[] = {
	{ 79, 72 },
	{ 7, 76 },
	{ 73, 0 },
	{ 0, 2 }
};

NJS_TEX uv_0285DDE0[] = {
	{ 80, 73 },
	{ 8, 76 },
	{ 100, 195 },
	{ 24, 255 }
};

NJS_TEX uv_0285DDF0[] = {
	{ 100, 195 },
	{ 24, 255 },
	{ 100, 195 },
	{ 23, 254 }
};

NJS_TEX uv_0285DE00[] = {
	{ 73, 0 },
	{ 254, 27 },
	{ 79, 72 },
	{ 254, 81 }
};

NJS_TEX uv_0285DE10[] = {
	{ 79, 72 },
	{ 254, 81 },
	{ 100, 195 },
	{ 254, 168 }
};

NJS_TEX uv_0285DE20[] = {
	{ 100, 195 },
	{ 254, 168 },
	{ 100, 195 },
	{ 254, 168 }
};

NJS_TEX uv_0285DE30[] = {
	{ 80, 73 },
	{ 254, 81 },
	{ 73, 0 },
	{ 254, 27 }
};

NJS_TEX uv_0285DE40[] = {
	{ 100, 195 },
	{ 254, 168 },
	{ 80, 73 },
	{ 254, 81 }
};

NJS_MESHSET_SADX meshlist_0285DE50[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0285DD60, NULL, NULL, NULL, uv_0285DDB0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285DD68, NULL, NULL, NULL, uv_0285DDC0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285DD70, NULL, NULL, NULL, uv_0285DDD0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285DD78, NULL, NULL, NULL, uv_0285DDE0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285DD80, NULL, NULL, NULL, uv_0285DDF0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285DD88, NULL, NULL, NULL, uv_0285DE00, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285DD90, NULL, NULL, NULL, uv_0285DE10, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285DD98, NULL, NULL, NULL, uv_0285DE20, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285DDA0, NULL, NULL, NULL, uv_0285DE30, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285DDA8, NULL, NULL, NULL, uv_0285DE40, NULL }
};

NJS_VECTOR vertex_0285DF68[] = {
	{ 2.58623f, 0.498098f, 0.088906f },
	{ -0.376059f, 0.441108f, 0.126027f },
	{ 2.58741f, 0.319003f, -0.507224f },
	{ -0.180377f, 0.499257f, -1.094895f },
	{ 2.59145f, -0.294405f, -0.508626f },
	{ -0.176609f, -0.766662f, -1.097134f },
	{ 2.592767f, -0.494416f, 0.086638f },
	{ -0.370097f, -0.747113f, 0.123935f },
	{ 2.589541f, -0.004622f, 0.455933f },
	{ -0.467636f, -0.192167f, 0.625364f },
	{ 0.497288f, -0.738834f, 0.146492f },
	{ 0.739497f, 0.278928f, -0.690096f },
	{ 0.743354f, -0.480163f, -0.691439f },
	{ 0.491048f, 0.489402f, 0.148664f },
	{ 0.410508f, -0.114425f, 0.645823f }
};

NJS_VECTOR normal_0285E020[] = {
	{ 0.017117f, 0.947861f, 0.318225f },
	{ 0.009352f, 0.887647f, 0.460429f },
	{ 0.059433f, 0.598328f, -0.799044f },
	{ 0.345933f, 0.712518f, -0.610449f },
	{ 0.129625f, -0.577088f, -0.806329f },
	{ 0.389045f, -0.688555f, -0.611993f },
	{ 0.128293f, -0.947129f, 0.294086f },
	{ 0.091251f, -0.900241f, 0.425723f },
	{ 0.07894f, -0.005809f, 0.996862f },
	{ -0.032566f, -0.029746f, 0.999027f },
	{ 0.108917f, -0.924653f, 0.364903f },
	{ 0.196113f, 0.662382f, -0.723042f },
	{ 0.254726f, -0.638638f, -0.726124f },
	{ 0.013059f, 0.918832f, 0.394434f },
	{ 0.024715f, -0.017487f, 0.999542f }
};

NJS_MODEL_SADX attach_0285E0D4 = { vertex_0285DF68, normal_0285E020, LengthOfArray(vertex_0285DF68), meshlist_0285DE50, matlist_0285DD4C, LengthOfArray(meshlist_0285DE50), LengthOfArray(matlist_0285DD4C),{ 1.062565f, -0.133702f, -0.225655f }, 1.952614f, NULL };

NJS_OBJECT object_0285E100 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285E0D4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0285E134[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285E148[] = {
	6, 8, 7, 9
};

Sint16 poly_0285E150[] = {
	0, 2, 1, 3
};

Sint16 poly_0285E158[] = {
	8, 0, 9, 1
};

Sint16 poly_0285E160[] = {
	4, 6, 5, 7
};

Sint16 poly_0285E168[] = {
	2, 4, 3, 5
};

NJS_TEX uv_0285E170[] = {
	{ 255, 255 },
	{ 254, 128 },
	{ 0, 215 },
	{ 0, 131 }
};

NJS_TEX uv_0285E180[] = {
	{ 253, 0 },
	{ 254, 46 },
	{ 0, 44 },
	{ 0, 75 }
};

NJS_TEX uv_0285E190[] = {
	{ 254, 128 },
	{ 253, 0 },
	{ 0, 131 },
	{ 0, 44 }
};

NJS_TEX uv_0285E1A0[] = {
	{ 254, 203 },
	{ 255, 255 },
	{ 0, 180 },
	{ 0, 215 }
};

NJS_TEX uv_0285E1B0[] = {
	{ 254, 46 },
	{ 254, 203 },
	{ 0, 75 },
	{ 0, 180 }
};

NJS_MESHSET_SADX meshlist_0285E1C0[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0285E148, NULL, NULL, NULL, uv_0285E170, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E150, NULL, NULL, NULL, uv_0285E180, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E158, NULL, NULL, NULL, uv_0285E190, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E160, NULL, NULL, NULL, uv_0285E1A0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E168, NULL, NULL, NULL, uv_0285E1B0, NULL }
};

NJS_VECTOR vertex_0285E250[] = {
	{ 2.457662f, 0.757116f, 0.170631f },
	{ 0.060796f, 0.498103f, 0.088906f },
	{ 2.459423f, 0.489731f, -0.719374f },
	{ 0.061064f, 0.319001f, -0.507224f },
	{ 2.465455f, -0.42607f, -0.721467f },
	{ 0.065104f, -0.294407f, -0.508626f },
	{ 2.467422f, -0.724681f, 0.167245f },
	{ 0.067333f, -0.494412f, 0.086638f },
	{ 2.462579f, 0.010605f, 0.718592f },
	{ 0.063651f, -0.004621f, 0.455933f }
};

NJS_VECTOR normal_0285E2C8[] = {
	{ -0.112553f, 0.942063f, 0.315989f },
	{ -0.112553f, 0.942063f, 0.315989f },
	{ -0.11274f, 0.59346f, -0.796928f },
	{ -0.11274f, 0.59346f, -0.796928f },
	{ -0.103484f, -0.580205f, -0.807869f },
	{ -0.103484f, -0.580205f, -0.807869f },
	{ -0.100561f, -0.950238f, 0.294848f },
	{ -0.100561f, -0.950238f, 0.294848f },
	{ -0.108319f, -0.006814f, 0.994093f },
	{ -0.108319f, -0.006814f, 0.994093f }
};

NJS_MODEL_SADX attach_0285E340 = { vertex_0285E250, normal_0285E2C8, LengthOfArray(vertex_0285E250), meshlist_0285E1C0, matlist_0285E134, LengthOfArray(meshlist_0285E1C0), LengthOfArray(matlist_0285E134),{ 1.264109f, 0.016217f, -0.001438f }, 1.525177f, NULL };

NJS_OBJECT object_0285E36C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285E340, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0285E3A0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -4.464855f, -0.174964f, -4.603166f, 0x2EB, 0xFFFFFFE5, 0x3F4F, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0285E3D4[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285E3E8[] = {
	6, 8, 9
};

Sint16 poly_0285E3F0[] = {
	0, 2, 3
};

Sint16 poly_0285E3F8[] = {
	16, 1, 18
};

Sint16 poly_0285E400[] = {
	21, 7, 19
};

Sint16 poly_0285E408[] = {
	9, 14, 13
};

Sint16 poly_0285E410[] = {
	10, 12, 9
};

Sint16 poly_0285E418[] = {
	3, 11, 10
};

Sint16 poly_0285E420[] = {
	3, 5, 9
};

Sint16 poly_0285E428[] = {
	19, 7, 20
};

Sint16 poly_0285E430[] = {
	9, 8, 0
};

Sint16 poly_0285E438[] = {
	20, 7, 21
};

Sint16 poly_0285E440[] = {
	17, 1, 16
};

Sint16 poly_0285E448[] = {
	5, 4, 6
};

Sint16 poly_0285E450[] = {
	10, 0, 3
};

Sint16 poly_0285E458[] = {
	18, 1, 17
};

Sint16 poly_0285E460[] = {
	9, 0, 10
};

Sint16 poly_0285E468[] = {
	13, 6, 9
};

Sint16 poly_0285E470[] = {
	5, 6, 13
};

Sint16 poly_0285E478[] = {
	13, 15, 5
};

Sint16 poly_0285E480[] = {
	2, 4, 3, 5
};

Sint16 poly_0285E488[] = {
	11, 3, 12, 9
};

Sint16 poly_0285E490[] = {
	14, 9, 15, 5
};

Sint16 poly_0285E498[] = {
	16, 10, 17, 11
};

Sint16 poly_0285E4A0[] = {
	18, 12, 16, 10
};

Sint16 poly_0285E4A8[] = {
	17, 11, 18, 12
};

Sint16 poly_0285E4B0[] = {
	19, 15, 21, 13
};

Sint16 poly_0285E4B8[] = {
	20, 14, 19, 15
};

Sint16 poly_0285E4C0[] = {
	21, 13, 20, 14
};

NJS_TEX uv_0285E4C8[] = {
	{ 0, 23 },
	{ 0, 129 },
	{ 102, 129 }
};

NJS_TEX uv_0285E4D4[] = {
	{ 1, 235 },
	{ 0, 192 },
	{ 103, 153 }
};

NJS_TEX uv_0285E4E0[] = {
	{ 242, 238 },
	{ 254, 219 },
	{ 246, 204 }
};

NJS_TEX uv_0285E4EC[] = {
	{ 241, 15 },
	{ 255, 35 },
	{ 246, 42 }
};

NJS_TEX uv_0285E4F8[] = {
	{ 102, 129 },
	{ 191, 62 },
	{ 168, 0 }
};

NJS_TEX uv_0285E504[] = {
	{ 172, 255 },
	{ 191, 192 },
	{ 102, 129 }
};

NJS_TEX uv_0285E510[] = {
	{ 103, 153 },
	{ 191, 208 },
	{ 172, 255 }
};

NJS_TEX uv_0285E51C[] = {
	{ 103, 153 },
	{ 102, 107 },
	{ 102, 129 }
};

NJS_TEX uv_0285E528[] = {
	{ 246, 42 },
	{ 255, 35 },
	{ 246, 49 }
};

NJS_TEX uv_0285E534[] = {
	{ 102, 129 },
	{ 0, 129 },
	{ 1, 235 }
};

NJS_TEX uv_0285E540[] = {
	{ 246, 49 },
	{ 255, 35 },
	{ 241, 15 }
};

NJS_TEX uv_0285E54C[] = {
	{ 246, 213 },
	{ 254, 219 },
	{ 242, 238 }
};

NJS_TEX uv_0285E558[] = {
	{ 102, 107 },
	{ 0, 61 },
	{ 0, 23 }
};

NJS_TEX uv_0285E564[] = {
	{ 172, 255 },
	{ 1, 235 },
	{ 103, 153 }
};

NJS_TEX uv_0285E570[] = {
	{ 246, 204 },
	{ 254, 219 },
	{ 246, 213 }
};

NJS_TEX uv_0285E57C[] = {
	{ 102, 129 },
	{ 1, 235 },
	{ 172, 255 }
};

NJS_TEX uv_0285E588[] = {
	{ 168, 0 },
	{ 0, 23 },
	{ 102, 129 }
};

NJS_TEX uv_0285E594[] = {
	{ 102, 107 },
	{ 0, 23 },
	{ 168, 0 }
};

NJS_TEX uv_0285E5A0[] = {
	{ 168, 0 },
	{ 191, 48 },
	{ 102, 107 }
};

NJS_TEX uv_0285E5B0[] = {
	{ 0, 192 },
	{ 0, 61 },
	{ 103, 153 },
	{ 102, 107 }
};

NJS_TEX uv_0285E5C0[] = {
	{ 191, 208 },
	{ 103, 153 },
	{ 191, 192 },
	{ 102, 129 }
};

NJS_TEX uv_0285E5D0[] = {
	{ 191, 62 },
	{ 102, 129 },
	{ 191, 48 },
	{ 102, 107 }
};

NJS_TEX uv_0285E5E0[] = {
	{ 242, 238 },
	{ 172, 255 },
	{ 246, 213 },
	{ 191, 208 }
};

NJS_TEX uv_0285E5F0[] = {
	{ 246, 204 },
	{ 191, 192 },
	{ 242, 238 },
	{ 172, 255 }
};

NJS_TEX uv_0285E600[] = {
	{ 246, 213 },
	{ 191, 208 },
	{ 246, 204 },
	{ 191, 192 }
};

NJS_TEX uv_0285E610[] = {
	{ 246, 42 },
	{ 191, 48 },
	{ 241, 15 },
	{ 168, 0 }
};

NJS_TEX uv_0285E620[] = {
	{ 246, 49 },
	{ 191, 62 },
	{ 246, 42 },
	{ 191, 48 }
};

NJS_TEX uv_0285E630[] = {
	{ 241, 15 },
	{ 168, 0 },
	{ 246, 49 },
	{ 191, 62 }
};

NJS_MESHSET_SADX meshlist_0285E640[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285E3E8, NULL, NULL, NULL, uv_0285E4C8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E3F0, NULL, NULL, NULL, uv_0285E4D4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E3F8, NULL, NULL, NULL, uv_0285E4E0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E400, NULL, NULL, NULL, uv_0285E4EC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E408, NULL, NULL, NULL, uv_0285E4F8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E410, NULL, NULL, NULL, uv_0285E504, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E418, NULL, NULL, NULL, uv_0285E510, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E420, NULL, NULL, NULL, uv_0285E51C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E428, NULL, NULL, NULL, uv_0285E528, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E430, NULL, NULL, NULL, uv_0285E534, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E438, NULL, NULL, NULL, uv_0285E540, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E440, NULL, NULL, NULL, uv_0285E54C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E448, NULL, NULL, NULL, uv_0285E558, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E450, NULL, NULL, NULL, uv_0285E564, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E458, NULL, NULL, NULL, uv_0285E570, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E460, NULL, NULL, NULL, uv_0285E57C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E468, NULL, NULL, NULL, uv_0285E588, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E470, NULL, NULL, NULL, uv_0285E594, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285E478, NULL, NULL, NULL, uv_0285E5A0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E480, NULL, NULL, NULL, uv_0285E5B0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E488, NULL, NULL, NULL, uv_0285E5C0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E490, NULL, NULL, NULL, uv_0285E5D0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E498, NULL, NULL, NULL, uv_0285E5E0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E4A0, NULL, NULL, NULL, uv_0285E5F0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E4A8, NULL, NULL, NULL, uv_0285E600, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E4B0, NULL, NULL, NULL, uv_0285E610, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E4B8, NULL, NULL, NULL, uv_0285E620, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285E4C0, NULL, NULL, NULL, uv_0285E630, NULL }
};

NJS_VECTOR vertex_0285E950[] = {
	{ 0.013086f, -1.508265f, 0.29127f },
	{ 4.226305f, -1.281424f, -0.512855f },
	{ 0.009005f, -0.888564f, -1.058707f },
	{ 1.705399f, -0.323398f, -0.307704f },
	{ -0.003445f, 1.001624f, -1.061882f },
	{ 1.701097f, 0.32972f, -0.309197f },
	{ -0.007081f, 1.55372f, 0.286133f },
	{ 4.231905f, 1.379904f, -0.514691f },
	{ 0.003118f, 0.015662f, 1.122427f },
	{ 1.702661f, 0.025212f, 1.037775f },
	{ 2.853812f, -1.793273f, 0.365644f },
	{ 3.181636f, -1.119785f, -0.310272f },
	{ 3.179877f, -0.891271f, 0.527056f },
	{ 2.787457f, 1.887418f, 0.359859f },
	{ 3.173729f, 0.98157f, 0.525083f },
	{ 3.172668f, 1.181175f, -0.313462f },
	{ 4.027918f, -1.557136f, -0.283161f },
	{ 4.091341f, -1.194247f, -0.70264f },
	{ 4.090394f, -1.070866f, -0.182988f },
	{ 4.093188f, 1.278475f, -0.706155f },
	{ 4.093763f, 1.170703f, -0.185746f },
	{ 3.999239f, 1.660548f, -0.288286f }
};

NJS_VECTOR normal_0285EA58[] = {
	{ 0.182863f, -0.954354f, 0.236157f },
	{ 0.982505f, -0.124286f, -0.138697f },
	{ 0.483264f, -0.46756f, -0.740164f },
	{ 0.511192f, -0.251745f, -0.821771f },
	{ 0.505213f, 0.473226f, -0.721676f },
	{ 0.525976f, 0.244903f, -0.814477f },
	{ 0.189842f, 0.948568f, 0.253337f },
	{ 0.977808f, 0.165532f, -0.128415f },
	{ 0.049749f, -0.000327f, 0.998762f },
	{ 0.405371f, 0.003842f, 0.914144f },
	{ -0.008342f, -0.994144f, 0.107742f },
	{ -0.100417f, 0.311208f, -0.945022f },
	{ 0.539857f, 0.595654f, 0.594769f },
	{ -0.032112f, 0.995734f, 0.086497f },
	{ 0.549967f, -0.567791f, 0.612494f },
	{ -0.077755f, -0.345951f, -0.935025f },
	{ 0.599242f, -0.800218f, -0.023669f },
	{ 0.357538f, 0.181899f, -0.916013f },
	{ 0.822202f, 0.45682f, 0.339557f },
	{ 0.353294f, -0.200912f, -0.913684f },
	{ 0.826656f, -0.421877f, 0.37237f },
	{ 0.557706f, 0.829361f, -0.033539f }
};

NJS_MODEL_SADX attach_0285EB60 = { vertex_0285E950, normal_0285EA58, LengthOfArray(vertex_0285E950), meshlist_0285E640, matlist_0285E3D4, LengthOfArray(meshlist_0285E640), LengthOfArray(matlist_0285E3D4),{ 2.112412f, 0.047072f, 0.030273f }, 2.44216f, NULL };

NJS_OBJECT object_0285EB8C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0285EB60, 2.745118f, 0.016042f, 0.007276f, 0, 0, 0, 1, 1, 1, &object_0285E3A0, NULL };

NJS_MATERIAL matlist_0285EBC0[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285EBD4[] = {
	7, 1, 9
};

Sint16 poly_0285EBDC[] = {
	8, 1, 7
};

Sint16 poly_0285EBE4[] = {
	9, 1, 8
};

Sint16 poly_0285EBEC[] = {
	6, 3, 4, 0
};

Sint16 poly_0285EBF4[] = {
	4, 0, 5, 2
};

Sint16 poly_0285EBFC[] = {
	5, 2, 6, 3
};

Sint16 poly_0285EC04[] = {
	7, 6, 8, 4
};

Sint16 poly_0285EC0C[] = {
	9, 5, 7, 6
};

Sint16 poly_0285EC14[] = {
	8, 4, 9, 5
};

NJS_TEX uv_0285EC1C[] = {
	{ 249, 237 },
	{ 254, 207 },
	{ 255, 149 }
};

NJS_TEX uv_0285EC28[] = {
	{ 236, 194 },
	{ 254, 207 },
	{ 249, 237 }
};

NJS_TEX uv_0285EC34[] = {
	{ 255, 149 },
	{ 254, 207 },
	{ 236, 194 }
};

NJS_TEX uv_0285EC40[] = {
	{ 160, 255 },
	{ 89, 231 },
	{ 134, 166 },
	{ 0, 49 }
};

NJS_TEX uv_0285EC50[] = {
	{ 134, 166 },
	{ 0, 49 },
	{ 171, 75 },
	{ 107, 0 }
};

NJS_TEX uv_0285EC60[] = {
	{ 171, 75 },
	{ 107, 0 },
	{ 160, 255 },
	{ 89, 231 }
};

NJS_TEX uv_0285EC70[] = {
	{ 249, 237 },
	{ 160, 255 },
	{ 236, 194 },
	{ 134, 166 }
};

NJS_TEX uv_0285EC80[] = {
	{ 255, 149 },
	{ 171, 75 },
	{ 249, 237 },
	{ 160, 255 }
};

NJS_TEX uv_0285EC90[] = {
	{ 236, 194 },
	{ 134, 166 },
	{ 255, 149 },
	{ 171, 75 }
};

NJS_MESHSET_SADX meshlist_0285ECA0[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285EBD4, NULL, NULL, NULL, uv_0285EC1C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285EBDC, NULL, NULL, NULL, uv_0285EC28, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285EBE4, NULL, NULL, NULL, uv_0285EC34, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EBEC, NULL, NULL, NULL, uv_0285EC40, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EBF4, NULL, NULL, NULL, uv_0285EC50, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EBFC, NULL, NULL, NULL, uv_0285EC60, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EC04, NULL, NULL, NULL, uv_0285EC70, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EC0C, NULL, NULL, NULL, uv_0285EC80, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EC14, NULL, NULL, NULL, uv_0285EC90, NULL }
};

NJS_VECTOR vertex_0285EDA0[] = {
	{ -0.908555f, 0.250226f, 0.285968f },
	{ 2.70652f, -0.506591f, -1.717304f },
	{ 0.621686f, 0.486692f, 0.312625f },
	{ 0.363728f, -0.623147f, 0.251829f },
	{ 0.996124f, -0.3119f, -1.289161f },
	{ 1.531826f, 0.125932f, -0.788265f },
	{ 1.367303f, -0.736447f, -0.813006f },
	{ 2.633042f, -0.65285f, -1.535998f },
	{ 2.452093f, -0.445883f, -1.768124f },
	{ 2.713247f, -0.23244f, -1.523937f }
};

NJS_VECTOR normal_0285EE18[] = {
	{ -0.615737f, 0.12442f, -0.778067f },
	{ 0.685593f, -0.235497f, -0.688842f },
	{ 0.627048f, 0.738257f, 0.248572f },
	{ 0.180412f, -0.94296f, 0.279782f },
	{ -0.465621f, 0.058253f, -0.883065f },
	{ 0.550058f, 0.782894f, 0.290712f },
	{ 0.212991f, -0.929248f, 0.301884f },
	{ 0.519824f, -0.853568f, -0.034699f },
	{ -0.052064f, -0.087787f, -0.994778f },
	{ 0.832474f, 0.536076f, -0.140033f }
};

NJS_MODEL_SADX attach_0285EE90 = { vertex_0285EDA0, normal_0285EE18, LengthOfArray(vertex_0285EDA0), meshlist_0285ECA0, matlist_0285EBC0, LengthOfArray(meshlist_0285ECA0), LengthOfArray(matlist_0285EBC0),{ 0.902346f, -0.124878f, -0.727749f }, 2.116315f, NULL };

NJS_OBJECT object_0285EEBC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285EE90, 1.800035f, -0.097003f, -0.684219f, 0, 0, 0, 1, 1, 1, NULL, &object_0285EB8C };

NJS_MATERIAL matlist_0285EEF0[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285EF04[] = {
	6, 8, 7, 9
};

Sint16 poly_0285EF0C[] = {
	0, 2, 1, 3
};

Sint16 poly_0285EF14[] = {
	8, 0, 9, 1
};

Sint16 poly_0285EF1C[] = {
	4, 6, 5, 7
};

Sint16 poly_0285EF24[] = {
	2, 4, 3, 5
};

NJS_TEX uv_0285EF30[] = {
	{ 255, 255 },
	{ 254, 127 },
	{ 0, 190 },
	{ 0, 129 }
};

NJS_TEX uv_0285EF40[] = {
	{ 253, 0 },
	{ 253, 46 },
	{ 0, 66 },
	{ 0, 89 }
};

NJS_TEX uv_0285EF50[] = {
	{ 254, 127 },
	{ 253, 0 },
	{ 0, 129 },
	{ 0, 66 }
};

NJS_TEX uv_0285EF60[] = {
	{ 254, 203 },
	{ 255, 255 },
	{ 0, 165 },
	{ 0, 190 }
};

NJS_TEX uv_0285EF70[] = {
	{ 253, 46 },
	{ 254, 203 },
	{ 0, 89 },
	{ 0, 165 }
};

NJS_MESHSET_SADX meshlist_0285EF80[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0285EF04, NULL, NULL, NULL, uv_0285EF30, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EF0C, NULL, NULL, NULL, uv_0285EF40, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EF14, NULL, NULL, NULL, uv_0285EF50, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EF1C, NULL, NULL, NULL, uv_0285EF60, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285EF24, NULL, NULL, NULL, uv_0285EF70, NULL }
};

NJS_VECTOR vertex_0285F010[] = {
	{ 2.73807f, 1.565141f, 0.298547f },
	{ -0.056745f, 0.761164f, 0.170631f },
	{ 2.74171f, 1.012601f, -1.05143f },
	{ -0.056324f, 0.49377f, -0.719374f },
	{ 2.754174f, -0.879864f, -1.054605f },
	{ -0.050293f, -0.422031f, -0.721467f },
	{ 2.758238f, -1.496932f, 0.29341f },
	{ -0.046986f, -0.720634f, 0.167245f },
	{ 2.747818f, 0.028455f, 1.129704f },
	{ -0.052472f, 0.010611f, 0.718592f }
};

NJS_VECTOR normal_0285F088[] = {
	{ -0.252461f, 0.911844f, 0.323734f },
	{ -0.252461f, 0.911844f, 0.323734f },
	{ -0.198847f, 0.557302f, -0.806148f },
	{ -0.198847f, 0.557302f, -0.806148f },
	{ -0.210026f, -0.53901f, -0.815694f },
	{ -0.210026f, -0.53901f, -0.815694f },
	{ -0.229456f, -0.922635f, 0.30999f },
	{ -0.229456f, -0.922635f, 0.30999f },
	{ -0.177903f, -0.00811f, 0.984015f },
	{ -0.177903f, -0.00811f, 0.984015f }
};

NJS_MODEL_SADX attach_0285F100 = { vertex_0285F010, normal_0285F088, LengthOfArray(vertex_0285F010), meshlist_0285EF80, matlist_0285EEF0, LengthOfArray(meshlist_0285EF80), LengthOfArray(matlist_0285EEF0),{ 1.350746f, 0.034105f, 0.03755f }, 1.879012f, NULL };

NJS_OBJECT object_0285F12C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0285F100, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0285EEBC, NULL };

NJS_OBJECT object_0285F160 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.420436f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0285F12C };

NJS_OBJECT object_0285F194 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.515918f, 0, 0, 0, 0x453, 0x39, 1, 1, 1, &object_0285F160, &object_0285E36C };

NJS_OBJECT object_0285F1C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.526071f, 0, 0, 0, 0x2B5, 0x7A, 1, 1, 1, &object_0285F194, &object_0285E100 };

NJS_OBJECT object_0285F1FC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0xFFFFF60B, 0xFFFFC245, 1, 1, 1, &object_0285F1C8, NULL };

NJS_OBJECT object_0285F230 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.046468f, 2.574576f, 3.65f, 0, 0, 0, 1, 1, 1, &object_0285F1FC, &object_0285DD18 };

NJS_MATERIAL matlist_0285F264[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285F278[] = {
	10, 7, 14, 9
};

Sint16 poly_0285F280[] = {
	13, 1, 11, 3
};

Sint16 poly_0285F288[] = {
	14, 9, 13, 1
};

Sint16 poly_0285F290[] = {
	12, 5, 10, 7
};

Sint16 poly_0285F298[] = {
	11, 3, 12, 5
};

Sint16 poly_0285F2A0[] = {
	13, 0, 14, 8
};

Sint16 poly_0285F2A8[] = {
	11, 2, 13, 0
};

Sint16 poly_0285F2B0[] = {
	12, 4, 11, 2
};

Sint16 poly_0285F2B8[] = {
	14, 8, 10, 6
};

Sint16 poly_0285F2C0[] = {
	10, 6, 12, 4
};

NJS_TEX uv_0285F2C8[] = {
	{ 80, 181 },
	{ 8, 178 },
	{ 73, 255 },
	{ 0, 252 }
};

NJS_TEX uv_0285F2D8[] = {
	{ 79, 182 },
	{ 7, 178 },
	{ 100, 59 },
	{ 23, 0 }
};

NJS_TEX uv_0285F2E8[] = {
	{ 73, 255 },
	{ 0, 252 },
	{ 79, 182 },
	{ 7, 178 }
};

NJS_TEX uv_0285F2F8[] = {
	{ 100, 59 },
	{ 24, 0 },
	{ 80, 181 },
	{ 8, 178 }
};

NJS_TEX uv_0285F308[] = {
	{ 100, 59 },
	{ 23, 0 },
	{ 100, 59 },
	{ 24, 0 }
};

NJS_TEX uv_0285F318[] = {
	{ 79, 182 },
	{ 254, 173 },
	{ 73, 255 },
	{ 254, 227 }
};

NJS_TEX uv_0285F328[] = {
	{ 100, 59 },
	{ 254, 86 },
	{ 79, 182 },
	{ 254, 173 }
};

NJS_TEX uv_0285F338[] = {
	{ 100, 59 },
	{ 254, 86 },
	{ 100, 59 },
	{ 254, 86 }
};

NJS_TEX uv_0285F348[] = {
	{ 73, 255 },
	{ 254, 227 },
	{ 80, 181 },
	{ 255, 173 }
};

NJS_TEX uv_0285F358[] = {
	{ 80, 181 },
	{ 255, 173 },
	{ 100, 59 },
	{ 254, 86 }
};

NJS_MESHSET_SADX meshlist_0285F368[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0285F278, NULL, NULL, NULL, uv_0285F2C8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F280, NULL, NULL, NULL, uv_0285F2D8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F288, NULL, NULL, NULL, uv_0285F2E8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F290, NULL, NULL, NULL, uv_0285F2F8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F298, NULL, NULL, NULL, uv_0285F308, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F2A0, NULL, NULL, NULL, uv_0285F318, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F2A8, NULL, NULL, NULL, uv_0285F328, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F2B0, NULL, NULL, NULL, uv_0285F338, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F2B8, NULL, NULL, NULL, uv_0285F348, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F2C0, NULL, NULL, NULL, uv_0285F358, NULL }
};

NJS_VECTOR vertex_0285F480[] = {
	{ 2.586231f, 0.498098f, -0.088906f },
	{ -0.376059f, 0.441108f, -0.126027f },
	{ 2.58741f, 0.319003f, 0.507224f },
	{ -0.180377f, 0.499257f, 1.094895f },
	{ 2.59145f, -0.294405f, 0.508626f },
	{ -0.176608f, -0.766662f, 1.097134f },
	{ 2.592768f, -0.494416f, -0.086638f },
	{ -0.370097f, -0.747113f, -0.123935f },
	{ 2.589542f, -0.004622f, -0.455933f },
	{ -0.467636f, -0.192167f, -0.625364f },
	{ 0.497288f, -0.738834f, -0.146492f },
	{ 0.739498f, 0.278928f, 0.690096f },
	{ 0.743354f, -0.480163f, 0.691439f },
	{ 0.491048f, 0.489402f, -0.148664f },
	{ 0.410508f, -0.114425f, -0.645823f }
};

NJS_VECTOR normal_0285F538[] = {
	{ 0.017117f, 0.947861f, -0.318225f },
	{ 0.009352f, 0.887647f, -0.460429f },
	{ 0.059433f, 0.598328f, 0.799044f },
	{ 0.345933f, 0.712518f, 0.610449f },
	{ 0.129625f, -0.577088f, 0.806329f },
	{ 0.389045f, -0.688555f, 0.611993f },
	{ 0.128293f, -0.947129f, -0.294086f },
	{ 0.091251f, -0.900241f, -0.425723f },
	{ 0.07894f, -0.005809f, -0.996862f },
	{ -0.032566f, -0.029746f, -0.999027f },
	{ 0.108917f, -0.924653f, -0.364903f },
	{ 0.196113f, 0.662382f, 0.723042f },
	{ 0.254726f, -0.638638f, 0.726124f },
	{ 0.013059f, 0.918832f, -0.394434f },
	{ 0.024715f, -0.017487f, -0.999542f }
};

NJS_MODEL_SADX attach_0285F5EC = { vertex_0285F480, normal_0285F538, LengthOfArray(vertex_0285F480), meshlist_0285F368, matlist_0285F264, LengthOfArray(meshlist_0285F368), LengthOfArray(matlist_0285F264),{ 1.062566f, -0.133702f, 0.225655f }, 1.988664f, NULL };

NJS_OBJECT object_0285F618 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285F5EC, 0.00182f, 0, 0.104372f, 1, 0x1AF, 0x60, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0285F64C[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285F660[] = {
	7, 9, 6, 8
};

Sint16 poly_0285F668[] = {
	1, 3, 0, 2
};

Sint16 poly_0285F670[] = {
	9, 1, 8, 0
};

Sint16 poly_0285F678[] = {
	5, 7, 4, 6
};

Sint16 poly_0285F680[] = {
	3, 5, 2, 4
};

NJS_TEX uv_0285F688[] = {
	{ 0, 215 },
	{ 0, 131 },
	{ 255, 255 },
	{ 254, 128 }
};

NJS_TEX uv_0285F698[] = {
	{ 0, 44 },
	{ 0, 75 },
	{ 253, 0 },
	{ 254, 46 }
};

NJS_TEX uv_0285F6A8[] = {
	{ 0, 131 },
	{ 0, 44 },
	{ 254, 128 },
	{ 253, 0 }
};

NJS_TEX uv_0285F6B8[] = {
	{ 0, 180 },
	{ 0, 215 },
	{ 254, 203 },
	{ 255, 255 }
};

NJS_TEX uv_0285F6C8[] = {
	{ 0, 75 },
	{ 0, 180 },
	{ 254, 46 },
	{ 254, 203 }
};

NJS_MESHSET_SADX meshlist_0285F6D8[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0285F660, NULL, NULL, NULL, uv_0285F688, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F668, NULL, NULL, NULL, uv_0285F698, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F670, NULL, NULL, NULL, uv_0285F6A8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F678, NULL, NULL, NULL, uv_0285F6B8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F680, NULL, NULL, NULL, uv_0285F6C8, NULL }
};

NJS_VECTOR vertex_0285F768[] = {
	{ 2.457662f, 0.757116f, -0.170631f },
	{ 0.060796f, 0.498103f, -0.088905f },
	{ 2.459423f, 0.489731f, 0.719375f },
	{ 0.061064f, 0.319001f, 0.507224f },
	{ 2.465455f, -0.42607f, 0.721468f },
	{ 0.065104f, -0.294407f, 0.508626f },
	{ 2.467422f, -0.724681f, -0.167244f },
	{ 0.067333f, -0.494412f, -0.086637f },
	{ 2.462579f, 0.010606f, -0.718592f },
	{ 0.063652f, -0.004621f, -0.455932f }
};

NJS_VECTOR normal_0285F7E0[] = {
	{ -0.112553f, 0.942063f, -0.315989f },
	{ -0.112553f, 0.942063f, -0.315989f },
	{ -0.11274f, 0.59346f, 0.796928f },
	{ -0.11274f, 0.59346f, 0.796928f },
	{ -0.103484f, -0.580205f, 0.807869f },
	{ -0.103484f, -0.580205f, 0.807869f },
	{ -0.100561f, -0.950238f, -0.294848f },
	{ -0.100561f, -0.950238f, -0.294848f },
	{ -0.108319f, -0.006814f, -0.994093f },
	{ -0.108319f, -0.006814f, -0.994093f }
};

NJS_MODEL_SADX attach_0285F858 = { vertex_0285F768, normal_0285F7E0, LengthOfArray(vertex_0285F768), meshlist_0285F6D8, matlist_0285F64C, LengthOfArray(meshlist_0285F6D8), LengthOfArray(matlist_0285F64C),{ 1.264109f, 0.016217f, 0.001438f }, 1.545911f, NULL };

NJS_OBJECT object_0285F884 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0285F858, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0285F8B8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -3.840855f, -0.146972f, 4.866795f, 0x25A, 0x33, 0x3F88, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0285F8EC[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0285F900[] = {
	9, 8, 6
};

Sint16 poly_0285F908[] = {
	3, 2, 0
};

Sint16 poly_0285F910[] = {
	18, 1, 16
};

Sint16 poly_0285F918[] = {
	19, 7, 21
};

Sint16 poly_0285F920[] = {
	13, 14, 9
};

Sint16 poly_0285F928[] = {
	9, 12, 10
};

Sint16 poly_0285F930[] = {
	10, 11, 3
};

Sint16 poly_0285F938[] = {
	9, 5, 3
};

Sint16 poly_0285F940[] = {
	20, 7, 19
};

Sint16 poly_0285F948[] = {
	0, 8, 9
};

Sint16 poly_0285F950[] = {
	21, 7, 20
};

Sint16 poly_0285F958[] = {
	16, 1, 17
};

Sint16 poly_0285F960[] = {
	6, 4, 5
};

Sint16 poly_0285F968[] = {
	3, 0, 10
};

Sint16 poly_0285F970[] = {
	17, 1, 18
};

Sint16 poly_0285F978[] = {
	10, 0, 9
};

Sint16 poly_0285F980[] = {
	9, 6, 13
};

Sint16 poly_0285F988[] = {
	13, 6, 5
};

Sint16 poly_0285F990[] = {
	5, 15, 13
};

Sint16 poly_0285F998[] = {
	3, 5, 2, 4
};

Sint16 poly_0285F9A0[] = {
	12, 9, 11, 3
};

Sint16 poly_0285F9A8[] = {
	15, 5, 14, 9
};

Sint16 poly_0285F9B0[] = {
	17, 11, 16, 10
};

Sint16 poly_0285F9B8[] = {
	16, 10, 18, 12
};

Sint16 poly_0285F9C0[] = {
	18, 12, 17, 11
};

Sint16 poly_0285F9C8[] = {
	21, 13, 19, 15
};

Sint16 poly_0285F9D0[] = {
	19, 15, 20, 14
};

Sint16 poly_0285F9D8[] = {
	20, 14, 21, 13
};

NJS_TEX uv_0285F9E0[] = {
	{ 102, 129 },
	{ 0, 129 },
	{ 0, 23 }
};

NJS_TEX uv_0285F9EC[] = {
	{ 103, 153 },
	{ 0, 192 },
	{ 1, 235 }
};

NJS_TEX uv_0285F9F8[] = {
	{ 246, 204 },
	{ 254, 219 },
	{ 242, 238 }
};

NJS_TEX uv_0285FA04[] = {
	{ 246, 42 },
	{ 255, 35 },
	{ 241, 15 }
};

NJS_TEX uv_0285FA10[] = {
	{ 168, 0 },
	{ 191, 62 },
	{ 102, 129 }
};

NJS_TEX uv_0285FA1C[] = {
	{ 102, 129 },
	{ 191, 192 },
	{ 172, 254 }
};

NJS_TEX uv_0285FA28[] = {
	{ 172, 254 },
	{ 191, 208 },
	{ 103, 153 }
};

NJS_TEX uv_0285FA34[] = {
	{ 102, 129 },
	{ 102, 107 },
	{ 103, 153 }
};

NJS_TEX uv_0285FA40[] = {
	{ 246, 49 },
	{ 255, 35 },
	{ 246, 42 }
};

NJS_TEX uv_0285FA4C[] = {
	{ 1, 235 },
	{ 0, 129 },
	{ 102, 129 }
};

NJS_TEX uv_0285FA58[] = {
	{ 241, 15 },
	{ 255, 35 },
	{ 246, 49 }
};

NJS_TEX uv_0285FA64[] = {
	{ 242, 238 },
	{ 254, 219 },
	{ 246, 213 }
};

NJS_TEX uv_0285FA70[] = {
	{ 0, 23 },
	{ 0, 61 },
	{ 102, 107 }
};

NJS_TEX uv_0285FA7C[] = {
	{ 103, 153 },
	{ 1, 235 },
	{ 172, 254 }
};

NJS_TEX uv_0285FA88[] = {
	{ 246, 213 },
	{ 254, 219 },
	{ 246, 204 }
};

NJS_TEX uv_0285FA94[] = {
	{ 172, 254 },
	{ 1, 235 },
	{ 102, 129 }
};

NJS_TEX uv_0285FAA0[] = {
	{ 102, 129 },
	{ 0, 23 },
	{ 168, 0 }
};

NJS_TEX uv_0285FAAC[] = {
	{ 168, 0 },
	{ 0, 23 },
	{ 102, 107 }
};

NJS_TEX uv_0285FAB8[] = {
	{ 102, 107 },
	{ 191, 48 },
	{ 168, 0 }
};

NJS_TEX uv_0285FAC8[] = {
	{ 103, 153 },
	{ 102, 107 },
	{ 0, 192 },
	{ 0, 61 }
};

NJS_TEX uv_0285FAD8[] = {
	{ 191, 192 },
	{ 102, 129 },
	{ 191, 208 },
	{ 103, 153 }
};

NJS_TEX uv_0285FAE8[] = {
	{ 191, 48 },
	{ 102, 107 },
	{ 191, 62 },
	{ 102, 129 }
};

NJS_TEX uv_0285FAF8[] = {
	{ 246, 213 },
	{ 191, 208 },
	{ 242, 238 },
	{ 172, 254 }
};

NJS_TEX uv_0285FB08[] = {
	{ 242, 238 },
	{ 172, 254 },
	{ 246, 204 },
	{ 191, 192 }
};

NJS_TEX uv_0285FB18[] = {
	{ 246, 204 },
	{ 191, 192 },
	{ 246, 213 },
	{ 191, 208 }
};

NJS_TEX uv_0285FB28[] = {
	{ 241, 15 },
	{ 168, 0 },
	{ 246, 42 },
	{ 191, 48 }
};

NJS_TEX uv_0285FB38[] = {
	{ 246, 42 },
	{ 191, 48 },
	{ 246, 49 },
	{ 191, 62 }
};

NJS_TEX uv_0285FB48[] = {
	{ 246, 49 },
	{ 191, 62 },
	{ 241, 15 },
	{ 168, 0 }
};

NJS_MESHSET_SADX meshlist_0285FB58[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_0285F900, NULL, NULL, NULL, uv_0285F9E0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F908, NULL, NULL, NULL, uv_0285F9EC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F910, NULL, NULL, NULL, uv_0285F9F8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F918, NULL, NULL, NULL, uv_0285FA04, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F920, NULL, NULL, NULL, uv_0285FA10, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F928, NULL, NULL, NULL, uv_0285FA1C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F930, NULL, NULL, NULL, uv_0285FA28, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F938, NULL, NULL, NULL, uv_0285FA34, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F940, NULL, NULL, NULL, uv_0285FA40, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F948, NULL, NULL, NULL, uv_0285FA4C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F950, NULL, NULL, NULL, uv_0285FA58, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F958, NULL, NULL, NULL, uv_0285FA64, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F960, NULL, NULL, NULL, uv_0285FA70, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F968, NULL, NULL, NULL, uv_0285FA7C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F970, NULL, NULL, NULL, uv_0285FA88, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F978, NULL, NULL, NULL, uv_0285FA94, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F980, NULL, NULL, NULL, uv_0285FAA0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F988, NULL, NULL, NULL, uv_0285FAAC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_0285F990, NULL, NULL, NULL, uv_0285FAB8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F998, NULL, NULL, NULL, uv_0285FAC8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F9A0, NULL, NULL, NULL, uv_0285FAD8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F9A8, NULL, NULL, NULL, uv_0285FAE8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F9B0, NULL, NULL, NULL, uv_0285FAF8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F9B8, NULL, NULL, NULL, uv_0285FB08, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F9C0, NULL, NULL, NULL, uv_0285FB18, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F9C8, NULL, NULL, NULL, uv_0285FB28, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F9D0, NULL, NULL, NULL, uv_0285FB38, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0285F9D8, NULL, NULL, NULL, uv_0285FB48, NULL }
};

NJS_VECTOR vertex_0285FE68[] = {
	{ 0.007563f, -1.508301f, -0.287762f },
	{ 4.220781f, -1.281461f, 0.516364f },
	{ 0.003481f, -0.888601f, 1.062215f },
	{ 1.699875f, -0.323434f, 0.311213f },
	{ -0.008969f, 1.001588f, 1.06539f },
	{ 1.695573f, 0.329683f, 0.312705f },
	{ -0.012605f, 1.553684f, -0.282625f },
	{ 4.226382f, 1.379868f, 0.5182f },
	{ -0.002405f, 0.015625f, -1.118919f },
	{ 1.697137f, 0.025175f, -1.034267f },
	{ 2.848289f, -1.79331f, -0.362135f },
	{ 3.176113f, -1.119822f, 0.31378f },
	{ 3.174353f, -0.891308f, -0.523547f },
	{ 2.781934f, 1.887382f, -0.35635f },
	{ 3.168206f, 0.981533f, -0.521575f },
	{ 3.167145f, 1.181138f, 0.316971f },
	{ 4.022394f, -1.557172f, 0.28667f },
	{ 4.085817f, -1.194283f, 0.706149f },
	{ 4.08487f, -1.070902f, 0.186496f },
	{ 4.087665f, 1.278439f, 0.709663f },
	{ 4.08824f, 1.170667f, 0.189255f },
	{ 3.993715f, 1.660512f, 0.291795f }
};

NJS_VECTOR normal_0285FF70[] = {
	{ 0.182863f, -0.954354f, -0.236157f },
	{ 0.982505f, -0.124286f, 0.138697f },
	{ 0.483264f, -0.46756f, 0.740164f },
	{ 0.511192f, -0.251745f, 0.821771f },
	{ 0.505213f, 0.473226f, 0.721676f },
	{ 0.525976f, 0.244903f, 0.814477f },
	{ 0.189842f, 0.948568f, -0.253337f },
	{ 0.977808f, 0.165533f, 0.128415f },
	{ 0.049749f, -0.000327f, -0.998762f },
	{ 0.405371f, 0.003843f, -0.914144f },
	{ -0.008342f, -0.994144f, -0.107742f },
	{ -0.100417f, 0.311208f, 0.945022f },
	{ 0.539857f, 0.595654f, -0.594769f },
	{ -0.032112f, 0.995734f, -0.086497f },
	{ 0.549967f, -0.567791f, -0.612494f },
	{ -0.077755f, -0.345951f, 0.935025f },
	{ 0.599243f, -0.800218f, 0.023669f },
	{ 0.357539f, 0.181898f, 0.916013f },
	{ 0.822203f, 0.45682f, -0.339556f },
	{ 0.353294f, -0.200911f, 0.913684f },
	{ 0.826657f, -0.421876f, -0.37237f },
	{ 0.557706f, 0.829361f, 0.033539f }
};

NJS_MODEL_SADX attach_02860078 = { vertex_0285FE68, normal_0285FF70, LengthOfArray(vertex_0285FE68), meshlist_0285FB58, matlist_0285F8EC, LengthOfArray(meshlist_0285FB58), LengthOfArray(matlist_0285F8EC),{ 2.106889f, 0.047036f, -0.026764f }, 2.403025f, NULL };

NJS_OBJECT object_028600A4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_02860078, 2.750642f, 0.016079f, -0.010785f, 0, 0, 0, 1, 1, 1, &object_0285F8B8, NULL };

NJS_MATERIAL matlist_028600D8[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_028600EC[] = {
	9, 1, 7
};

Sint16 poly_028600F4[] = {
	7, 1, 8
};

Sint16 poly_028600FC[] = {
	8, 1, 9
};

Sint16 poly_02860104[] = {
	4, 0, 6, 3
};

Sint16 poly_0286010C[] = {
	5, 2, 4, 0
};

Sint16 poly_02860114[] = {
	6, 3, 5, 2
};

Sint16 poly_0286011C[] = {
	8, 4, 7, 6
};

Sint16 poly_02860124[] = {
	7, 6, 9, 5
};

Sint16 poly_0286012C[] = {
	9, 5, 8, 4
};

NJS_TEX uv_02860134[] = {
	{ 255, 149 },
	{ 254, 207 },
	{ 249, 237 }
};

NJS_TEX uv_02860140[] = {
	{ 249, 237 },
	{ 254, 207 },
	{ 236, 194 }
};

NJS_TEX uv_0286014C[] = {
	{ 236, 194 },
	{ 254, 207 },
	{ 255, 149 }
};

NJS_TEX uv_02860158[] = {
	{ 134, 166 },
	{ 0, 49 },
	{ 160, 255 },
	{ 89, 231 }
};

NJS_TEX uv_02860168[] = {
	{ 171, 75 },
	{ 107, 0 },
	{ 134, 166 },
	{ 0, 49 }
};

NJS_TEX uv_02860178[] = {
	{ 160, 255 },
	{ 89, 231 },
	{ 171, 75 },
	{ 107, 0 }
};

NJS_TEX uv_02860188[] = {
	{ 236, 194 },
	{ 134, 166 },
	{ 249, 237 },
	{ 160, 255 }
};

NJS_TEX uv_02860198[] = {
	{ 249, 237 },
	{ 160, 255 },
	{ 255, 149 },
	{ 171, 75 }
};

NJS_TEX uv_028601A8[] = {
	{ 255, 149 },
	{ 171, 75 },
	{ 236, 194 },
	{ 134, 166 }
};

NJS_MESHSET_SADX meshlist_028601B8[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_028600EC, NULL, NULL, NULL, uv_02860134, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028600F4, NULL, NULL, NULL, uv_02860140, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028600FC, NULL, NULL, NULL, uv_0286014C, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02860104, NULL, NULL, NULL, uv_02860158, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0286010C, NULL, NULL, NULL, uv_02860168, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02860114, NULL, NULL, NULL, uv_02860178, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0286011C, NULL, NULL, NULL, uv_02860188, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02860124, NULL, NULL, NULL, uv_02860198, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0286012C, NULL, NULL, NULL, uv_028601A8, NULL }
};

NJS_VECTOR vertex_028602B8[] = {
	{ -0.908555f, 0.250226f, -0.285967f },
	{ 2.70652f, -0.506591f, 1.717304f },
	{ 0.621686f, 0.486692f, -0.312625f },
	{ 0.363728f, -0.623147f, -0.251829f },
	{ 0.996124f, -0.3119f, 1.289161f },
	{ 1.531826f, 0.125932f, 0.788265f },
	{ 1.367303f, -0.736447f, 0.813007f },
	{ 2.633042f, -0.65285f, 1.535999f },
	{ 2.452093f, -0.445883f, 1.768124f },
	{ 2.713248f, -0.23244f, 1.523937f }
};

NJS_VECTOR normal_02860330[] = {
	{ -0.615737f, 0.12442f, 0.778067f },
	{ 0.685593f, -0.235497f, 0.688842f },
	{ 0.627048f, 0.738257f, -0.248572f },
	{ 0.180412f, -0.94296f, -0.279782f },
	{ -0.465621f, 0.058253f, 0.883065f },
	{ 0.550058f, 0.782894f, -0.290712f },
	{ 0.212991f, -0.929248f, -0.301884f },
	{ 0.519824f, -0.853568f, 0.034699f },
	{ -0.052064f, -0.087787f, 0.994778f },
	{ 0.832474f, 0.536076f, 0.140033f }
};

NJS_MODEL_SADX attach_028603A8 = { vertex_028602B8, normal_02860330, LengthOfArray(vertex_028602B8), meshlist_028601B8, matlist_028600D8, LengthOfArray(meshlist_028601B8), LengthOfArray(matlist_028600D8),{ 0.902346f, -0.124878f, 0.72775f }, 2.085258f, NULL };

NJS_OBJECT object_028603D4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_028603A8, 1.800035f, -0.097003f, 0.684218f, 0, 0, 0, 1, 1, 1, NULL, &object_028600A4 };

NJS_MATERIAL matlist_02860408[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0286041C[] = {
	7, 9, 6, 8
};

Sint16 poly_02860424[] = {
	1, 3, 0, 2
};

Sint16 poly_0286042C[] = {
	9, 1, 8, 0
};

Sint16 poly_02860434[] = {
	5, 7, 4, 6
};

Sint16 poly_0286043C[] = {
	3, 5, 2, 4
};

NJS_TEX uv_02860448[] = {
	{ 0, 190 },
	{ 0, 129 },
	{ 255, 255 },
	{ 254, 127 }
};

NJS_TEX uv_02860458[] = {
	{ 0, 66 },
	{ 0, 89 },
	{ 253, 0 },
	{ 253, 46 }
};

NJS_TEX uv_02860468[] = {
	{ 0, 129 },
	{ 0, 66 },
	{ 254, 127 },
	{ 253, 0 }
};

NJS_TEX uv_02860478[] = {
	{ 0, 165 },
	{ 0, 190 },
	{ 254, 203 },
	{ 255, 255 }
};

NJS_TEX uv_02860488[] = {
	{ 0, 89 },
	{ 0, 165 },
	{ 253, 46 },
	{ 254, 203 }
};

NJS_MESHSET_SADX meshlist_02860498[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0286041C, NULL, NULL, NULL, uv_02860448, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02860424, NULL, NULL, NULL, uv_02860458, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0286042C, NULL, NULL, NULL, uv_02860468, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02860434, NULL, NULL, NULL, uv_02860478, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_0286043C, NULL, NULL, NULL, uv_02860488, NULL }
};

NJS_VECTOR vertex_02860528[] = {
	{ 2.738071f, 1.565141f, -0.298548f },
	{ -0.056745f, 0.761164f, -0.170632f },
	{ 2.74171f, 1.012601f, 1.051429f },
	{ -0.056324f, 0.49377f, 0.719374f },
	{ 2.754175f, -0.879864f, 1.054604f },
	{ -0.050292f, -0.422031f, 0.721467f },
	{ 2.758239f, -1.496932f, -0.293411f },
	{ -0.046985f, -0.720634f, -0.167245f },
	{ 2.747819f, 0.028455f, -1.129704f },
	{ -0.052472f, 0.010611f, -0.718593f }
};

NJS_VECTOR normal_028605A0[] = {
	{ -0.252461f, 0.911844f, -0.323734f },
	{ -0.252461f, 0.911844f, -0.323734f },
	{ -0.198847f, 0.557302f, 0.806148f },
	{ -0.198847f, 0.557302f, 0.806148f },
	{ -0.210026f, -0.53901f, 0.815694f },
	{ -0.210026f, -0.53901f, 0.815694f },
	{ -0.229456f, -0.922635f, -0.30999f },
	{ -0.229456f, -0.922635f, -0.30999f },
	{ -0.177903f, -0.00811f, -0.984015f },
	{ -0.177903f, -0.00811f, -0.984015f }
};

NJS_MODEL_SADX attach_02860618 = { vertex_02860528, normal_028605A0, LengthOfArray(vertex_02860528), meshlist_02860498, matlist_02860408, LengthOfArray(meshlist_02860498), LengthOfArray(matlist_02860408),{ 1.350747f, 0.034105f, -0.03755f }, 1.879597f, NULL };

NJS_OBJECT object_02860644 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_02860618, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_028603D4, NULL };

NJS_OBJECT object_02860678 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.420435f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02860644 };

NJS_OBJECT object_028606AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.515918f, 0, 0, 0, 0xFFFFF55E, 0x52, 1, 1, 1, &object_02860678, &object_0285F884 };

NJS_OBJECT object_028606E0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 2.526071f, 0, 0, 0, 0xFFFFFE12, 0x6F, 1, 1, 1, &object_028606AC, &object_0285F618 };

NJS_OBJECT object_02860714 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0xA36, 0xFFFFC205, 1, 1, 1, &object_028606E0, NULL };

NJS_OBJECT object_02860748 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.046468f, 2.574578f, -3.65f, 0, 0, 0, 1, 1, 1, &object_02860714, &object_0285F230 };

NJS_OBJECT object_0286077C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 0, 0.376892f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_028607B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.235628f, -5.325598f, 0, 0, 0, 0x795F, 1, 1, 1, &object_0286077C, NULL };

NJS_MATERIAL matlist_028607E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_brain, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_brain, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02860820[] = {
	15, 11, 14, 10,
	17, 13, 16, 12,
	14, 8, 15, 9,
	16, 10, 17, 11,
	25, 21, 24, 20,
	27, 23, 26, 22,
	24, 18, 25, 19,
	26, 20, 27, 21,
	35, 31, 34, 30,
	37, 33, 36, 32,
	34, 28, 35, 29,
	36, 30, 37, 31,
	45, 41, 44, 40,
	47, 43, 46, 42,
	44, 38, 45, 39,
	46, 40, 47, 41
};

Sint16 poly_028608A0[] = {
	0, 1, 2, 3,
	1, 5, 3, 7,
	5, 4, 7, 6,
	4, 0, 6, 2,
	4, 5, 0, 1
};

NJS_TEX uv_028608C8[] = {
	{ 140, 134 },
	{ 97, 128 },
	{ 145, 132 },
	{ 101, 126 },
	{ 93, 83 },
	{ 68, 40 },
	{ 96, 82 },
	{ 69, 40 },
	{ 145, 132 },
	{ 170, 179 },
	{ 140, 134 },
	{ 164, 181 },
	{ 96, 82 },
	{ 101, 126 },
	{ 93, 83 },
	{ 97, 128 },
	{ 127, 159 },
	{ 114, 157 },
	{ 123, 162 },
	{ 111, 159 },
	{ 63, 102 },
	{ 16, 81 },
	{ 60, 103 },
	{ 15, 82 },
	{ 123, 162 },
	{ 174, 174 },
	{ 127, 159 },
	{ 177, 170 },
	{ 60, 103 },
	{ 111, 159 },
	{ 63, 102 },
	{ 114, 157 },
	{ 150, 129 },
	{ 130, 82 },
	{ 145, 131 },
	{ 126, 84 },
	{ 61, 62 },
	{ 60, 3 },
	{ 58, 63 },
	{ 58, 4 },
	{ 145, 131 },
	{ 173, 173 },
	{ 150, 129 },
	{ 178, 171 },
	{ 58, 63 },
	{ 126, 84 },
	{ 61, 62 },
	{ 130, 82 },
	{ 113, 147 },
	{ 104, 112 },
	{ 114, 147 },
	{ 105, 112 },
	{ 55, 74 },
	{ 0, 20 },
	{ 55, 74 },
	{ 0, 20 },
	{ 114, 147 },
	{ 171, 177 },
	{ 113, 147 },
	{ 171, 177 },
	{ 55, 74 },
	{ 105, 112 },
	{ 55, 74 },
	{ 104, 112 }
};

NJS_TEX uv_028609C8[] = {
	{ 179, 169 },
	{ 170, 173 },
	{ 251, 235 },
	{ 229, 245 },
	{ 170, 173 },
	{ 161, 177 },
	{ 229, 245 },
	{ 208, 255 },
	{ 161, 177 },
	{ 170, 173 },
	{ 208, 255 },
	{ 229, 245 },
	{ 170, 173 },
	{ 179, 169 },
	{ 229, 245 },
	{ 251, 235 },
	{ 170, 173 },
	{ 161, 177 },
	{ 179, 169 },
	{ 170, 173 }
};

NJS_MESHSET_SADX meshlist_02860A18[] = {
	{ NJD_MESHSET_4 | 1, 16, poly_02860820, NULL, NULL, NULL, uv_028608C8, NULL },
	{ NJD_MESHSET_4 | 2, 5, poly_028608A0, NULL, NULL, NULL, uv_028609C8, NULL }
};

NJS_VECTOR vertex_02860A50[] = {
	{ -0.886237f, 1.737756f, 0.046696f },
	{ -1.060259f, 1.633695f, 0.249454f },
	{ 0.487282f, 0.058189f, 0.046735f },
	{ 0.08258f, -0.183812f, 0.518266f },
	{ -1.060251f, 1.633688f, -0.156066f },
	{ -1.234273f, 1.529627f, 0.046692f },
	{ 0.0826f, -0.18383f, -0.424803f },
	{ -0.322103f, -0.425831f, 0.046727f },
	{ -1.065314f, 1.491604f, 0.022282f },
	{ -1.166952f, 1.436247f, 0.067206f },
	{ -2.375633f, 2.810989f, -1.331879f },
	{ -2.453893f, 2.768364f, -1.297287f },
	{ -2.993168f, 5.002848f, -2.46817f },
	{ -3.01756f, 4.989562f, -2.457388f },
	{ -1.527433f, 2.678782f, -0.873862f },
	{ -1.623988f, 2.626194f, -0.831184f },
	{ -2.468281f, 3.944202f, -1.716598f },
	{ -2.529264f, 3.910989f, -1.689644f },
	{ -0.971816f, 1.599656f, 0.022969f },
	{ -0.922246f, 1.705782f, 0.064112f },
	{ -2.189117f, 1.989167f, 1.70408f },
	{ -2.126053f, 2.046617f, 1.747216f },
	{ -4.025766f, 3.931471f, 3.194843f },
	{ -4.007545f, 3.950832f, 3.208293f },
	{ -1.953063f, 1.908617f, 0.770366f },
	{ -1.874495f, 1.978754f, 0.82345f },
	{ -3.164251f, 3.392814f, 2.094577f },
	{ -3.115351f, 3.437814f, 2.128227f },
	{ -1.000129f, 1.621046f, 0.022835f },
	{ -0.90207f, 1.685268f, 0.063732f },
	{ -1.905303f, 3.872567f, 1.491086f },
	{ -1.829798f, 3.922018f, 1.522577f },
	{ -3.194646f, 5.899591f, 2.823036f },
	{ -3.171113f, 5.915005f, 2.832852f },
	{ -1.539327f, 2.688305f, 1.107005f },
	{ -1.446171f, 2.749316f, 1.145858f },
	{ -3.209742f, 4.409179f, 2.547237f },
	{ -3.150906f, 4.447711f, 2.571775f },
	{ -1.038835f, 1.532018f, -0.022981f },
	{ -1.046287f, 1.523713f, 0.100665f },
	{ -2.310446f, 3.178877f, -2.153174f },
	{ -2.316184f, 3.172483f, -2.057968f },
	{ -4.322895f, 5.48912f, -3.208293f },
	{ -4.324684f, 5.487128f, -3.178618f },
	{ -2.138764f, 2.296012f, -1.215922f },
	{ -2.145844f, 2.288123f, -1.098458f },
	{ -3.258414f, 4.126211f, -2.377817f },
	{ -3.262885f, 4.121228f, -2.30363f }
};

NJS_VECTOR normal_02860C90[] = {
	{ 0.316853f, 0.948475f, -0.0001f },
	{ -0.329918f, 0.549603f, 0.767523f },
	{ 0.774109f, 0.633052f, 0.000005f },
	{ -0.064953f, 0.105913f, 0.992252f },
	{ -0.329891f, 0.549583f, -0.767548f },
	{ -0.9898f, 0.142466f, -0.00022f },
	{ -0.064922f, 0.105892f, -0.992256f },
	{ -0.90625f, -0.422742f, -0.0001f },
	{ -0.020236f, -0.607358f, -0.794171f },
	{ -0.020236f, -0.607358f, -0.794171f },
	{ -0.02254f, -0.60471f, -0.796127f },
	{ -0.02254f, -0.60471f, -0.796127f },
	{ -0.03515f, -0.590059f, -0.806595f },
	{ -0.03515f, -0.590059f, -0.806595f },
	{ 0.082993f, -0.715402f, -0.693766f },
	{ 0.082993f, -0.715402f, -0.693766f },
	{ -0.132336f, -0.466696f, -0.874461f },
	{ -0.132336f, -0.466696f, -0.874461f },
	{ 0.43643f, -0.495108f, 0.751264f },
	{ 0.43643f, -0.495108f, 0.751264f },
	{ 0.205485f, -0.721801f, 0.660893f },
	{ 0.205485f, -0.721801f, 0.660893f },
	{ 0.321578f, -0.725425f, 0.608561f },
	{ 0.321578f, -0.725425f, 0.608561f },
	{ 0.532119f, -0.677119f, 0.508291f },
	{ 0.532119f, -0.677119f, 0.508291f },
	{ 0.047315f, -0.604146f, 0.795468f },
	{ 0.047315f, -0.604146f, 0.795468f },
	{ 0.135885f, -0.671412f, 0.72852f },
	{ 0.135885f, -0.671412f, 0.72852f },
	{ 0.030552f, -0.569672f, 0.821304f },
	{ 0.030552f, -0.569672f, 0.821304f },
	{ -0.281233f, -0.171861f, 0.944125f },
	{ -0.281233f, -0.171861f, 0.944125f },
	{ -0.011023f, -0.525086f, 0.850978f },
	{ -0.011023f, -0.525086f, 0.850978f },
	{ -0.035958f, -0.497176f, 0.866904f },
	{ -0.035958f, -0.497176f, 0.866904f },
	{ -0.502077f, -0.860329f, -0.08805f },
	{ -0.502077f, -0.860329f, -0.08805f },
	{ -0.856602f, -0.508795f, -0.085796f },
	{ -0.856602f, -0.508795f, -0.085796f },
	{ -0.757922f, -0.646236f, -0.089068f },
	{ -0.757922f, -0.646236f, -0.089068f },
	{ -0.788869f, -0.608171f, -0.088394f },
	{ -0.788869f, -0.608171f, -0.088394f },
	{ -0.726414f, -0.6814f, -0.089536f },
	{ -0.726414f, -0.6814f, -0.089536f }
};

NJS_MODEL_SADX attach_02860ED0 = { vertex_02860A50, normal_02860C90, LengthOfArray(vertex_02860A50), meshlist_02860A18, matlist_028607E4, LengthOfArray(meshlist_02860A18), LengthOfArray(matlist_028607E4),{ -1.918701f, 2.744587f, 0 }, 4.32332f, NULL };

NJS_OBJECT object_02860EFC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02860ED0, -0.354965f, 0.175502f, -0.046754f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_02860F30[] = {
	{ { 0xFFB2B2B2 },{ 0x00000000 }, 0, CHAOS0TexName_c2tx_brain, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02860F48[] = {
	7, 2, 0,
	6, 11, 1,
	12, 7, 0,
	11, 16, 1,
	17, 12, 0,
	16, 21, 1,
	22, 17, 0,
	21, 26, 1,
	27, 22, 0,
	26, 31, 1,
	2, 27, 0,
	31, 6, 1
};

Sint16 poly_02860F90[] = {
	2, 7, 3, 8,
	3, 8, 4, 9,
	4, 9, 5, 10,
	5, 10, 6, 11,
	7, 12, 8, 13,
	8, 13, 9, 14,
	9, 14, 10, 15,
	10, 15, 11, 16,
	12, 17, 13, 18,
	13, 18, 14, 19,
	14, 19, 15, 20,
	15, 20, 16, 21,
	17, 22, 18, 23,
	18, 23, 19, 24,
	19, 24, 20, 25,
	20, 25, 21, 26,
	22, 27, 23, 28,
	23, 28, 24, 29,
	24, 29, 25, 30,
	25, 30, 26, 31,
	27, 2, 28, 3,
	28, 3, 29, 4,
	29, 4, 30, 5,
	30, 5, 31, 6
};

NJS_TEX uv_02861050[] = {
	{ 159, 242 },
	{ 191, 242 },
	{ 127, 255 },
	{ 222, 27 },
	{ 190, 27 },
	{ 158, 0 },
	{ 95, 242 },
	{ 159, 242 },
	{ 127, 255 },
	{ 190, 27 },
	{ 126, 27 },
	{ 158, 0 },
	{ 63, 242 },
	{ 95, 242 },
	{ 127, 255 },
	{ 126, 27 },
	{ 94, 27 },
	{ 158, 0 },
	{ 95, 242 },
	{ 63, 242 },
	{ 127, 255 },
	{ 94, 27 },
	{ 126, 27 },
	{ 158, 0 },
	{ 159, 242 },
	{ 95, 242 },
	{ 127, 255 },
	{ 126, 27 },
	{ 190, 27 },
	{ 158, 0 },
	{ 191, 242 },
	{ 159, 242 },
	{ 127, 255 },
	{ 190, 27 },
	{ 222, 27 },
	{ 158, 0 }
};

NJS_TEX uv_028610E0[] = {
	{ 191, 242 },
	{ 159, 242 },
	{ 237, 209 },
	{ 182, 209 },
	{ 237, 209 },
	{ 182, 209 },
	{ 255, 163 },
	{ 191, 163 },
	{ 255, 163 },
	{ 191, 163 },
	{ 237, 117 },
	{ 182, 117 },
	{ 237, 117 },
	{ 182, 117 },
	{ 222, 27 },
	{ 190, 27 },
	{ 159, 242 },
	{ 95, 242 },
	{ 182, 209 },
	{ 72, 209 },
	{ 182, 209 },
	{ 72, 209 },
	{ 191, 163 },
	{ 63, 163 },
	{ 191, 163 },
	{ 63, 163 },
	{ 182, 117 },
	{ 72, 117 },
	{ 182, 117 },
	{ 72, 117 },
	{ 190, 27 },
	{ 126, 27 },
	{ 95, 242 },
	{ 63, 242 },
	{ 72, 209 },
	{ 17, 209 },
	{ 72, 209 },
	{ 17, 209 },
	{ 63, 163 },
	{ 0, 163 },
	{ 63, 163 },
	{ 0, 163 },
	{ 72, 117 },
	{ 17, 117 },
	{ 72, 117 },
	{ 17, 117 },
	{ 126, 27 },
	{ 94, 27 },
	{ 63, 242 },
	{ 95, 242 },
	{ 17, 209 },
	{ 72, 209 },
	{ 17, 209 },
	{ 72, 209 },
	{ 0, 163 },
	{ 63, 163 },
	{ 0, 163 },
	{ 63, 163 },
	{ 17, 117 },
	{ 72, 117 },
	{ 17, 117 },
	{ 72, 117 },
	{ 94, 27 },
	{ 126, 27 },
	{ 95, 242 },
	{ 159, 242 },
	{ 72, 209 },
	{ 182, 209 },
	{ 72, 209 },
	{ 182, 209 },
	{ 63, 163 },
	{ 191, 163 },
	{ 63, 163 },
	{ 191, 163 },
	{ 72, 117 },
	{ 182, 117 },
	{ 72, 117 },
	{ 182, 117 },
	{ 126, 27 },
	{ 190, 27 },
	{ 159, 242 },
	{ 191, 242 },
	{ 182, 209 },
	{ 237, 209 },
	{ 182, 209 },
	{ 237, 209 },
	{ 191, 163 },
	{ 255, 163 },
	{ 191, 163 },
	{ 255, 163 },
	{ 182, 117 },
	{ 237, 117 },
	{ 182, 117 },
	{ 237, 117 },
	{ 190, 27 },
	{ 222, 27 }
};

NJS_MESHSET_SADX meshlist_02861260[] = {
	{ NJD_MESHSET_3 | 0, 12, poly_02860F48, NULL, NULL, NULL, uv_02861050, NULL },
	{ NJD_MESHSET_4 | 0, 24, poly_02860F90, NULL, NULL, NULL, uv_028610E0, NULL }
};

NJS_VECTOR vertex_02861298[] = {
	{ 0.10981f, 0.902738f, 0 },
	{ -0.522943f, -1.568015f, -0.00009f },
	{ -0.578587f, 0.863741f, -0.00019f },
	{ -1.111952f, 0.593305f, -0.00032f },
	{ -1.347371f, 0.163894f, -0.00037f },
	{ -1.221762f, -0.309434f, -0.00032f },
	{ -1.163538f, -1.214031f, -0.00028f },
	{ -0.241728f, 0.822765f, -0.587739f },
	{ -0.528496f, 0.522334f, -1.017993f },
	{ -0.673653f, 0.081942f, -1.175477f },
	{ -0.638305f, -0.380406f, -1.017993f },
	{ -0.826679f, -1.255007f, -0.587748f },
	{ 0.431957f, 0.740818f, -0.58772f },
	{ 0.638362f, 0.380397f, -1.01796f },
	{ 0.673719f, -0.081952f, -1.17544f },
	{ 0.528553f, -0.522343f, -1.01796f },
	{ -0.152993f, -1.336954f, -0.587729f },
	{ 0.768784f, 0.699846f, 0.000019f },
	{ 1.221763f, 0.309432f, 0.000033f },
	{ 1.347372f, -0.163896f, 0.000038f },
	{ 1.111953f, -0.593307f, 0.000033f },
	{ 0.183834f, -1.377926f, 0.00001f },
	{ 0.431925f, 0.740822f, 0.587739f },
	{ 0.638306f, 0.380403f, 1.017993f },
	{ 0.673654f, -0.081944f, 1.175477f },
	{ 0.528497f, -0.522336f, 1.017993f },
	{ -0.153025f, -1.33695f, 0.58773f },
	{ -0.241761f, 0.822769f, 0.58772f },
	{ -0.528552f, 0.52234f, 1.01796f },
	{ -0.673718f, 0.08195f, 1.17544f },
	{ -0.638361f, -0.380399f, 1.01796f },
	{ -0.826711f, -1.255003f, 0.587711f }
};

NJS_VECTOR normal_02861418[] = {
	{ 0.12075f, 0.992683f, 0 },
	{ -0.12075f, -0.992683f, 0 },
	{ -0.255461f, 0.966819f, -0.0001f },
	{ -0.687003f, 0.726655f, -0.00021f },
	{ -0.992683f, 0.12075f, -0.00028f },
	{ -0.986828f, -0.161771f, -0.00027f },
	{ -0.82701f, -0.562187f, -0.00021f },
	{ -0.071639f, 0.944459f, -0.320725f },
	{ -0.304941f, 0.68018f, -0.666607f },
	{ -0.496318f, 0.060372f, -0.866039f },
	{ -0.517318f, -0.296527f, -0.802779f },
	{ -0.445016f, -0.664236f, -0.600625f },
	{ 0.295986f, 0.899741f, -0.320715f },
	{ 0.459147f, 0.587237f, -0.666586f },
	{ 0.496365f, -0.060378f, -0.866012f },
	{ 0.36066f, -0.532623f, -0.765661f },
	{ 0.190072f, -0.824663f, -0.532732f },
	{ 0.47979f, 0.877383f, 0.00001f },
	{ 0.841172f, 0.540767f, 0.000021f },
	{ 0.992683f, -0.12075f, 0.000028f },
	{ 0.771681f, -0.63601f, 0.000023f },
	{ 0.457898f, -0.889005f, 0.000016f },
	{ 0.295969f, 0.899743f, 0.320725f },
	{ 0.45911f, 0.587241f, 0.666608f },
	{ 0.496318f, -0.060372f, 0.866039f },
	{ 0.360619f, -0.532618f, 0.765684f },
	{ 0.190042f, -0.824659f, 0.532748f },
	{ -0.071657f, 0.944461f, 0.320715f },
	{ -0.304977f, 0.680185f, 0.666586f },
	{ -0.496365f, 0.060378f, 0.866012f },
	{ -0.517362f, -0.296521f, 0.802752f },
	{ -0.445049f, -0.664232f, 0.600605f }
};

NJS_MODEL_SADX attach_02861598 = { vertex_02861298, normal_02861418, LengthOfArray(vertex_02861298), meshlist_02861260, matlist_02860F30, LengthOfArray(meshlist_02861260), LengthOfArray(matlist_02860F30),{ 0.000001f, -0.332638f, 0 }, 1.794668f, NULL };

NJS_OBJECT object_028615C4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_02861598, -0.491055f, -4.091239f, 0.00009f, 0, 0, 0, 1, 1, 1, &object_02860EFC, &object_028607B0 };

NJS_MATERIAL matlist_028615F8[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_eye1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02861620[] = {
	26, 14, 25,
	29, 14, 28,
	14, 26, 37,
	18, 12, 17,
	25, 14, 24,
	28, 14, 27,
	24, 14, 23,
	23, 14, 29,
	16, 12, 22,
	12, 16, 36,
	33, 7, 29,
	22, 12, 21,
	29, 7, 32,
	36, 17, 12,
	37, 27, 14,
	20, 12, 19,
	19, 12, 18,
	31, 1, 21,
	21, 12, 20,
	21, 1, 30
};

Sint16 poly_02861698[] = {
	18, 5, 19, 0,
	36, 16, 35, 4,
	37, 26, 34, 15,
	23, 8, 24, 6,
	24, 6, 25, 11,
	25, 11, 26, 15,
	34, 10, 37, 27,
	27, 10, 28, 9,
	35, 13, 36, 17,
	17, 13, 18, 5,
	19, 0, 20, 2,
	22, 3, 16, 4,
	32, 8, 29, 23,
	29, 28, 33, 9,
	30, 3, 21, 22,
	21, 20, 31, 2
};

NJS_TEX uv_02861718[] = {
	{ 222, 73 },
	{ 168, 88 },
	{ 176, 42 },
	{ 117, 162 },
	{ 168, 88 },
	{ 187, 193 },
	{ 168, 88 },
	{ 222, 73 },
	{ 247, 127 },
	{ 176, 42 },
	{ 168, 88 },
	{ 222, 73 },
	{ 176, 42 },
	{ 168, 88 },
	{ 114, 47 },
	{ 187, 193 },
	{ 168, 88 },
	{ 227, 177 },
	{ 114, 47 },
	{ 168, 88 },
	{ 88, 83 },
	{ 88, 83 },
	{ 168, 88 },
	{ 117, 162 },
	{ 227, 177 },
	{ 168, 88 },
	{ 187, 193 },
	{ 168, 88 },
	{ 227, 177 },
	{ 247, 127 },
	{ 90, 235 },
	{ 45, 209 },
	{ 117, 162 },
	{ 187, 193 },
	{ 168, 88 },
	{ 117, 162 },
	{ 117, 162 },
	{ 45, 209 },
	{ 18, 147 },
	{ 247, 127 },
	{ 222, 73 },
	{ 168, 88 },
	{ 247, 127 },
	{ 227, 177 },
	{ 168, 88 },
	{ 88, 83 },
	{ 168, 88 },
	{ 114, 47 },
	{ 114, 47 },
	{ 168, 88 },
	{ 176, 42 },
	{ 18, 147 },
	{ 45, 209 },
	{ 117, 162 },
	{ 117, 162 },
	{ 168, 88 },
	{ 88, 83 },
	{ 117, 162 },
	{ 45, 209 },
	{ 90, 235 }
};

NJS_TEX uv_02861808[] = {
	{ 176, 42 },
	{ 133, 5 },
	{ 114, 47 },
	{ 34, 15 },
	{ 247, 127 },
	{ 227, 177 },
	{ 239, 144 },
	{ 215, 224 },
	{ 247, 127 },
	{ 222, 73 },
	{ 239, 144 },
	{ 208, 57 },
	{ 88, 83 },
	{ 7, 71 },
	{ 114, 47 },
	{ 34, 15 },
	{ 114, 47 },
	{ 34, 15 },
	{ 176, 42 },
	{ 133, 5 },
	{ 176, 42 },
	{ 133, 5 },
	{ 222, 73 },
	{ 208, 57 },
	{ 239, 144 },
	{ 215, 224 },
	{ 247, 127 },
	{ 227, 177 },
	{ 227, 177 },
	{ 215, 224 },
	{ 187, 193 },
	{ 151, 249 },
	{ 239, 144 },
	{ 208, 57 },
	{ 247, 127 },
	{ 222, 73 },
	{ 222, 73 },
	{ 208, 57 },
	{ 176, 42 },
	{ 133, 5 },
	{ 114, 47 },
	{ 34, 15 },
	{ 88, 83 },
	{ 7, 71 },
	{ 187, 193 },
	{ 151, 249 },
	{ 227, 177 },
	{ 215, 224 },
	{ 18, 147 },
	{ 7, 71 },
	{ 117, 162 },
	{ 88, 83 },
	{ 117, 162 },
	{ 187, 193 },
	{ 90, 235 },
	{ 151, 249 },
	{ 90, 235 },
	{ 151, 249 },
	{ 117, 162 },
	{ 187, 193 },
	{ 117, 162 },
	{ 88, 83 },
	{ 18, 147 },
	{ 7, 71 }
};

NJS_MESHSET_SADX meshlist_02861908[] = {
	{ NJD_MESHSET_3 | 1, 20, poly_02861620, NULL, NULL, NULL, uv_02861718, NULL },
	{ NJD_MESHSET_4 | 1, 16, poly_02861698, NULL, NULL, NULL, uv_02861808, NULL }
};

NJS_VECTOR vertex_02861940[] = {
	{ 1.255654f, -1.025558f, 1.427473f },
	{ 1.335547f, -2.384223f, 2.049877f },
	{ 1.056584f, -1.421751f, 1.84249f },
	{ 2.114599f, -2.658327f, 1.78921f },
	{ 2.588626f, -2.489137f, 1.22385f },
	{ 1.988933f, -0.960646f, 0.928718f },
	{ 1.255654f, -1.025558f, -1.427473f },
	{ 1.335547f, -2.384223f, -2.049877f },
	{ 1.056584f, -1.421751f, -1.84249f },
	{ 2.114599f, -2.658327f, -1.78921f },
	{ 2.588626f, -2.489137f, -1.22385f },
	{ 1.988933f, -0.960646f, -0.928718f },
	{ 2.246087f, -1.537305f, 1.793021f },
	{ 2.534435f, -1.31808f, 0.642658f },
	{ 2.246087f, -1.537305f, -1.793021f },
	{ 2.534435f, -1.31808f, -0.642658f },
	{ 2.675961f, -2.161743f, 1.554878f },
	{ 2.642362f, -1.435689f, 1.125776f },
	{ 2.30415f, -1.21408f, 1.403095f },
	{ 1.849525f, -1.254325f, 1.787887f },
	{ 1.657051f, -1.499964f, 2.004151f },
	{ 1.870513f, -2.054001f, 2.129669f },
	{ 2.382065f, -2.26664f, 1.845637f },
	{ 1.657051f, -1.499964f, -2.004151f },
	{ 1.849525f, -1.254325f, -1.787887f },
	{ 2.30415f, -1.21408f, -1.403095f },
	{ 2.642362f, -1.435689f, -1.125776f },
	{ 2.675961f, -2.161743f, -1.554878f },
	{ 2.382065f, -2.26664f, -1.845637f },
	{ 1.870513f, -2.054001f, -2.129669f },
	{ 1.668272f, -2.565927f, 1.929896f },
	{ 1.139265f, -1.947638f, 2.073928f },
	{ 1.139265f, -1.947638f, -2.073928f },
	{ 1.668272f, -2.565927f, -1.929896f },
	{ 2.76465f, -1.928043f, -0.895403f },
	{ 2.76465f, -1.928043f, 0.895403f },
	{ 2.820187f, -1.80734f, 1.273311f },
	{ 2.820187f, -1.80734f, -1.273311f }
};

NJS_VECTOR normal_02861B08[] = {
	{ 0.032026f, 0.852399f, 0.52191f },
	{ 0.010723f, -0.251239f, 0.967866f },
	{ -0.1669f, 0.5192f, 0.838198f },
	{ 0.529874f, -0.479573f, 0.699459f },
	{ 0.858085f, -0.453209f, 0.241436f },
	{ 0.378396f, 0.899599f, 0.218031f },
	{ 0.032026f, 0.852399f, -0.52191f },
	{ 0.010723f, -0.251239f, -0.967866f },
	{ -0.1669f, 0.5192f, -0.838198f },
	{ 0.529874f, -0.479573f, -0.699459f },
	{ 0.858085f, -0.453209f, -0.241436f },
	{ 0.378396f, 0.899599f, -0.218031f },
	{ 0.575312f, 0.392296f, 0.717719f },
	{ 0.792662f, 0.608799f, -0.032424f },
	{ 0.575312f, 0.392296f, -0.717719f },
	{ 0.792662f, 0.608799f, 0.032424f },
	{ 0.845057f, -0.129054f, 0.518867f },
	{ 0.779019f, 0.575576f, 0.248679f },
	{ 0.507025f, 0.760266f, 0.406104f },
	{ 0.221809f, 0.732277f, 0.643872f },
	{ 0.090446f, 0.474525f, 0.875583f },
	{ 0.17305f, -0.015123f, 0.984797f },
	{ 0.597204f, -0.155201f, 0.786931f },
	{ 0.090446f, 0.474525f, -0.875583f },
	{ 0.221809f, 0.732277f, -0.643872f },
	{ 0.507025f, 0.760266f, -0.406104f },
	{ 0.779019f, 0.575577f, -0.248679f },
	{ 0.845057f, -0.129054f, -0.518867f },
	{ 0.597204f, -0.155201f, -0.786931f },
	{ 0.17305f, -0.015123f, -0.984797f },
	{ 0.202724f, -0.365906f, 0.908304f },
	{ -0.157981f, 0.079443f, 0.984241f },
	{ -0.157981f, 0.079443f, -0.984241f },
	{ 0.202724f, -0.365906f, -0.908304f },
	{ 0.998945f, 0.018333f, 0.042101f },
	{ 0.998945f, 0.018333f, -0.042101f },
	{ 0.926231f, 0.224793f, 0.302596f },
	{ 0.926231f, 0.224793f, -0.302596f }
};

NJS_MODEL_SADX attach_02861CD0 = { vertex_02861940, normal_02861B08, LengthOfArray(vertex_02861940), meshlist_02861908, matlist_028615F8, LengthOfArray(meshlist_02861908), LengthOfArray(matlist_028615F8),{ 1.938386f, -1.809487f, 0 }, 2.196941f, NULL };

NJS_OBJECT object_02861CFC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_02861CD0, 0.028132f, -0.134513f, 0, 0, 0, 0, 0.95f, 0.95f, 0.95f, NULL, &object_028615C4 };

NJS_MATERIAL matlist_02861D30[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x7FFFFFFF },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_eye1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02861D58[] = {
	13, 127, 128
};

Sint16 poly_02861D60[] = {
	95, 7, 80
};

Sint16 poly_02861D68[] = {
	94, 46, 91
};

Sint16 poly_02861D70[] = {
	39, 89, 34
};

Sint16 poly_02861D78[] = {
	5, 20, 19
};

Sint16 poly_02861D80[] = {
	127, 108, 128
};

Sint16 poly_02861D88[] = {
	83, 48, 92
};

Sint16 poly_02861D90[] = {
	81, 36, 88
};

Sint16 poly_02861D98[] = {
	34, 28, 39
};

Sint16 poly_02861DA0[] = {
	4, 0, 82
};

Sint16 poly_02861DA8[] = {
	4, 5, 1
};

Sint16 poly_02861DB0[] = {
	84, 4, 82
};

Sint16 poly_02861DB8[] = {
	26, 23, 5
};

Sint16 poly_02861DC0[] = {
	25, 85, 22
};

Sint16 poly_02861DC8[] = {
	29, 30, 36
};

Sint16 poly_02861DD0[] = {
	38, 32, 13
};

Sint16 poly_02861DD8[] = {
	32, 12, 152
};

Sint16 poly_02861DE0[] = {
	1, 2, 38
};

Sint16 poly_02861DE8[] = {
	93, 87, 6
};

Sint16 poly_02861DF0[] = {
	33, 29, 81
};

Sint16 poly_02861DF8[] = {
	88, 8, 92
};

Sint16 poly_02861E00[] = {
	6, 87, 82
};

Sint16 poly_02861E08[] = {
	80, 7, 28
};

Sint16 poly_02861E10[] = {
	36, 37, 8
};

Sint16 poly_02861E18[] = {
	0, 6, 82
};

Sint16 poly_02861E20[] = {
	0, 1, 95
};

Sint16 poly_02861E28[] = {
	46, 87, 93
};

Sint16 poly_02861E30[] = {
	8, 3, 83
};

Sint16 poly_02861E38[] = {
	2, 1, 5
};

Sint16 poly_02861E40[] = {
	8, 88, 36
};

Sint16 poly_02861E48[] = {
	22, 85, 65
};

Sint16 poly_02861E50[] = {
	85, 25, 27
};

Sint16 poly_02861E58[] = {
	96, 10, 97
};

Sint16 poly_02861E60[] = {
	97, 10, 98
};

Sint16 poly_02861E68[] = {
	4, 84, 27
};

Sint16 poly_02861E70[] = {
	99, 10, 96
};

Sint16 poly_02861E78[] = {
	98, 10, 100
};

Sint16 poly_02861E80[] = {
	100, 10, 99
};

Sint16 poly_02861E88[] = {
	6, 34, 93
};

Sint16 poly_02861E90[] = {
	1, 0, 4
};

Sint16 poly_02861E98[] = {
	58, 59, 42
};

Sint16 poly_02861EA0[] = {
	83, 3, 16
};

Sint16 poly_02861EA8[] = {
	17, 86, 16
};

Sint16 poly_02861EB0[] = {
	107, 3, 18
};

Sint16 poly_02861EB8[] = {
	19, 2, 5
};

Sint16 poly_02861EC0[] = {
	67, 65, 85
};

Sint16 poly_02861EC8[] = {
	27, 84, 85
};

Sint16 poly_02861ED0[] = {
	92, 48, 88
};

Sint16 poly_02861ED8[] = {
	18, 3, 2
};

Sint16 poly_02861EE0[] = {
	34, 89, 93
};

Sint16 poly_02861EE8[] = {
	57, 86, 17
};

Sint16 poly_02861EF0[] = {
	16, 3, 107
};

Sint16 poly_02861EF8[] = {
	16, 86, 90
};

Sint16 poly_02861F00[] = {
	129, 108, 127
};

Sint16 poly_02861F08[] = {
	29, 134, 156
};

Sint16 poly_02861F10[] = {
	34, 6, 80
};

Sint16 poly_02861F18[] = {
	81, 29, 36
};

Sint16 poly_02861F20[] = {
	134, 29, 33
};

Sint16 poly_02861F28[] = {
	15, 30, 29
};

Sint16 poly_02861F30[] = {
	31, 14, 151
};

Sint16 poly_02861F38[] = {
	92, 8, 83
};

Sint16 poly_02861F40[] = {
	74, 89, 79
};

Sint16 poly_02861F48[] = {
	59, 60, 45
};

Sint16 poly_02861F50[] = {
	53, 78, 130
};

Sint16 poly_02861F58[] = {
	88, 76, 81
};

Sint16 poly_02861F60[] = {
	79, 68, 74
};

Sint16 poly_02861F68[] = {
	82, 40, 44
};

Sint16 poly_02861F70[] = {
	41, 45, 44
};

Sint16 poly_02861F78[] = {
	3, 8, 2
};

Sint16 poly_02861F80[] = {
	82, 44, 84
};

Sint16 poly_02861F88[] = {
	66, 44, 45
};

Sint16 poly_02861F90[] = {
	24, 25, 22
};

Sint16 poly_02861F98[] = {
	76, 70, 69
};

Sint16 poly_02861FA0[] = {
	53, 72, 78
};

Sint16 poly_02861FA8[] = {
	153, 52, 72
};

Sint16 poly_02861FB0[] = {
	78, 77, 48
};

Sint16 poly_02861FB8[] = {
	94, 40, 46
};

Sint16 poly_02861FC0[] = {
	131, 109, 132
};

Sint16 poly_02861FC8[] = {
	81, 69, 73
};

Sint16 poly_02861FD0[] = {
	82, 87, 46
};

Sint16 poly_02861FD8[] = {
	68, 47, 91
};

Sint16 poly_02861FE0[] = {
	48, 77, 76
};

Sint16 poly_02861FE8[] = {
	82, 46, 40
};

Sint16 poly_02861FF0[] = {
	91, 47, 94
};

Sint16 poly_02861FF8[] = {
	94, 47, 41
};

Sint16 poly_02862000[] = {
	83, 43, 48
};

Sint16 poly_02862008[] = {
	45, 41, 42
};

Sint16 poly_02862010[] = {
	76, 88, 48
};

Sint16 poly_02862018[] = {
	16, 90, 83
};

Sint16 poly_02862020[] = {
	85, 84, 67
};

Sint16 poly_02862028[] = {
	103, 50, 105
};

Sint16 poly_02862030[] = {
	102, 50, 103
};

Sint16 poly_02862038[] = {
	27, 26, 4
};

Sint16 poly_02862040[] = {
	67, 84, 44
};

Sint16 poly_02862048[] = {
	105, 50, 104
};

Sint16 poly_02862050[] = {
	101, 50, 102
};

Sint16 poly_02862058[] = {
	104, 50, 101
};

Sint16 poly_02862060[] = {
	95, 6, 0
};

Sint16 poly_02862068[] = {
	44, 40, 41
};

Sint16 poly_02862070[] = {
	2, 19, 18
};

Sint16 poly_02862078[] = {
	83, 90, 56
};

Sint16 poly_02862080[] = {
	56, 43, 83
};

Sint16 poly_02862088[] = {
	56, 86, 57
};

Sint16 poly_02862090[] = {
	58, 43, 106
};

Sint16 poly_02862098[] = {
	44, 66, 67
};

Sint16 poly_028620A0[] = {
	45, 42, 59
};

Sint16 poly_028620A8[] = {
	41, 40, 94
};

Sint16 poly_028620B0[] = {
	95, 1, 7
};

Sint16 poly_028620B8[] = {
	80, 6, 95
};

Sint16 poly_028620C0[] = {
	42, 43, 58
};

Sint16 poly_028620C8[] = {
	93, 89, 74
};

Sint16 poly_028620D0[] = {
	57, 51, 106
};

Sint16 poly_028620D8[] = {
	90, 86, 56
};

Sint16 poly_028620E0[] = {
	69, 55, 155
};

Sint16 poly_028620E8[] = {
	91, 46, 74
};

Sint16 poly_028620F0[] = {
	76, 69, 81
};

Sint16 poly_028620F8[] = {
	73, 69, 136
};

Sint16 poly_02862100[] = {
	69, 70, 55
};

Sint16 poly_02862108[] = {
	72, 52, 154
};

Sint16 poly_02862110[] = {
	93, 74, 46
};

Sint16 poly_02862118[] = {
	43, 42, 48
};

Sint16 poly_02862120[] = {
	81, 73, 33
};

Sint16 poly_02862128[] = {
	79, 89, 39
};

Sint16 poly_02862130[] = {
	78, 42, 41
};

Sint16 poly_02862138[] = {
	8, 37, 38
};

Sint16 poly_02862140[] = {
	21, 18, 19
};

Sint16 poly_02862148[] = {
	58, 51, 61
};

Sint16 poly_02862150[] = {
	21, 11, 18
};

Sint16 poly_02862158[] = {
	20, 5, 23
};

Sint16 poly_02862160[] = {
	21, 24, 22
};

Sint16 poly_02862168[] = {
	61, 21, 22
};

Sint16 poly_02862170[] = {
	63, 45, 60
};

Sint16 poly_02862178[] = {
	60, 64, 63
};

Sint16 poly_02862180[] = {
	23, 24, 20
};

Sint16 poly_02862188[] = {
	91, 74, 68
};

Sint16 poly_02862190[] = {
	28, 34, 80
};

Sint16 poly_02862198[] = {
	18, 11, 107
};

Sint16 poly_028621A0[] = {
	107, 11, 17
};

Sint16 poly_028621A8[] = {
	106, 51, 58
};

Sint16 poly_028621B0[] = {
	106, 43, 56
};

Sint16 poly_028621B8[] = {
	1, 38, 128
};

Sint16 poly_028621C0[] = {
	132, 109, 130
};

Sint16 poly_028621C8[] = {
	13, 7, 1
};

Sint16 poly_028621D0[] = {
	53, 41, 47
};

Sint16 poly_028621D8[] = {
	22, 65, 64
};

Sint16 poly_028621E0[] = {
	61, 64, 60
};

Sint16 poly_028621E8[] = {
	64, 61, 22
};

Sint16 poly_028621F0[] = {
	59, 58, 61
};

Sint16 poly_028621F8[] = {
	60, 59, 61
};

Sint16 poly_02862200[] = {
	20, 24, 21
};

Sint16 poly_02862208[] = {
	21, 19, 20
};

Sint16 poly_02862210[] = {
	5, 4, 26
};

Sint16 poly_02862218[] = {
	45, 63, 66
};

Sint16 poly_02862220[] = {
	38, 2, 8
};

Sint16 poly_02862228[] = {
	48, 42, 78
};

Sint16 poly_02862230[] = {
	17, 16, 107
};

Sint16 poly_02862238[] = {
	106, 56, 57
};

Sint16 poly_02862240[] = {
	33, 35, 134
};

Sint16 poly_02862248[] = {
	136, 75, 73
};

Sint16 poly_02862250[] = {
	130, 109, 131
};

Sint16 poly_02862258[] = {
	130, 78, 41
};

Sint16 poly_02862260[] = {
	128, 38, 13
};

Sint16 poly_02862268[] = {
	128, 108, 129
};

Sint16 poly_02862270[] = {
	128, 129, 1
};

Sint16 poly_02862278[] = {
	41, 132, 130
};

Sint16 poly_02862280[] = {
	130, 131, 53
};

Sint16 poly_02862288[] = {
	68, 79, 136
};

Sint16 poly_02862290[] = {
	134, 39, 28
};

Sint16 poly_02862298[] = {
	151, 12, 32
};

Sint16 poly_028622A0[] = {
	32, 31, 151
};

Sint16 poly_028622A8[] = {
	154, 54, 71
};

Sint16 poly_028622B0[] = {
	71, 72, 154
};

Sint16 poly_028622B8[] = {
	156, 15, 29
};

Sint16 poly_028622C0[] = {
	155, 136, 69
};

Sint16 poly_028622C8[] = {
	152, 13, 32
};

Sint16 poly_028622D0[] = {
	72, 53, 153
};

Sint16 poly_028622D8[] = {
	134, 136, 39, 79
};

Sint16 poly_028622E0[] = {
	61, 51, 21, 11
};

Sint16 poly_028622E8[] = {
	51, 57, 11, 17
};

Sint16 poly_028622F0[] = {
	121, 105, 119, 104
};

Sint16 poly_028622F8[] = {
	36, 30, 37, 31
};

Sint16 poly_02862300[] = {
	37, 31, 38, 32
};

Sint16 poly_02862308[] = {
	14, 31, 15, 30
};

Sint16 poly_02862310[] = {
	120, 103, 121, 105
};

Sint16 poly_02862318[] = {
	77, 71, 76, 70
};

Sint16 poly_02862320[] = {
	78, 72, 77, 71
};

Sint16 poly_02862328[] = {
	55, 70, 54, 71
};

Sint16 poly_02862330[] = {
	73, 75, 33, 35
};

Sint16 poly_02862338[] = {
	119, 104, 117, 101
};

Sint16 poly_02862340[] = {
	117, 101, 118, 102
};

Sint16 poly_02862348[] = {
	110, 23, 112, 26
};

Sint16 poly_02862350[] = {
	112, 26, 114, 27
};

Sint16 poly_02862358[] = {
	114, 27, 113, 25
};

Sint16 poly_02862360[] = {
	113, 25, 111, 24
};

Sint16 poly_02862368[] = {
	111, 24, 110, 23
};

Sint16 poly_02862370[] = {
	9, 64, 115, 65
};

Sint16 poly_02862378[] = {
	115, 65, 116, 67
};

Sint16 poly_02862380[] = {
	116, 67, 49, 66
};

Sint16 poly_02862388[] = {
	49, 66, 62, 63
};

Sint16 poly_02862390[] = {
	62, 63, 9, 64
};

Sint16 poly_02862398[] = {
	123, 97, 125, 98
};

Sint16 poly_028623A0[] = {
	122, 96, 123, 97
};

Sint16 poly_028623A8[] = {
	124, 99, 122, 96
};

Sint16 poly_028623B0[] = {
	126, 100, 124, 99
};

Sint16 poly_028623B8[] = {
	125, 98, 126, 100
};

Sint16 poly_028623C0[] = {
	118, 102, 120, 103
};

Sint16 poly_028623C8[] = {
	121, 62, 120, 9
};

Sint16 poly_028623D0[] = {
	120, 9, 118, 115
};

Sint16 poly_028623D8[] = {
	118, 115, 117, 116
};

Sint16 poly_028623E0[] = {
	117, 116, 119, 49
};

Sint16 poly_028623E8[] = {
	119, 49, 121, 62
};

Sint16 poly_028623F0[] = {
	125, 113, 123, 111
};

Sint16 poly_028623F8[] = {
	123, 111, 122, 110
};

Sint16 poly_02862400[] = {
	122, 110, 124, 112
};

Sint16 poly_02862408[] = {
	124, 112, 126, 114
};

Sint16 poly_02862410[] = {
	126, 114, 125, 113
};

Sint16 poly_02862418[] = {
	132, 41, 131, 53
};

Sint16 poly_02862420[] = {
	127, 13, 129, 1
};

Sint16 poly_02862428[] = {
	147, 135, 146
};

Sint16 poly_02862430[] = {
	139, 133, 138
};

Sint16 poly_02862438[] = {
	146, 135, 145
};

Sint16 poly_02862440[] = {
	141, 133, 140
};

Sint16 poly_02862448[] = {
	142, 133, 141
};

Sint16 poly_02862450[] = {
	143, 133, 142
};

Sint16 poly_02862458[] = {
	133, 137, 157
};

Sint16 poly_02862460[] = {
	137, 133, 143
};

Sint16 poly_02862468[] = {
	144, 135, 150
};

Sint16 poly_02862470[] = {
	150, 135, 149
};

Sint16 poly_02862478[] = {
	135, 147, 158
};

Sint16 poly_02862480[] = {
	149, 135, 148
};

Sint16 poly_02862488[] = {
	145, 135, 144
};

Sint16 poly_02862490[] = {
	154, 52, 150
};

Sint16 poly_02862498[] = {
	150, 52, 153
};

Sint16 poly_028624A0[] = {
	140, 133, 139
};

Sint16 poly_028624A8[] = {
	152, 12, 142
};

Sint16 poly_028624B0[] = {
	142, 12, 151
};

Sint16 poly_028624B8[] = {
	158, 148, 135
};

Sint16 poly_028624C0[] = {
	157, 138, 133
};

Sint16 poly_028624C8[] = {
	139, 28, 140, 7
};

Sint16 poly_028624D0[] = {
	144, 53, 145, 47
};

Sint16 poly_028624D8[] = {
	145, 47, 146, 68
};

Sint16 poly_028624E0[] = {
	146, 68, 147, 136
};

Sint16 poly_028624E8[] = {
	155, 55, 158, 148
};

Sint16 poly_028624F0[] = {
	148, 55, 149, 54
};

Sint16 poly_028624F8[] = {
	156, 134, 157, 138
};

Sint16 poly_02862500[] = {
	138, 134, 139, 28
};

Sint16 poly_02862508[] = {
	140, 7, 141, 13
};

Sint16 poly_02862510[] = {
	143, 14, 137, 15
};

Sint16 poly_02862518[] = {
	153, 53, 150, 144
};

Sint16 poly_02862520[] = {
	150, 149, 154, 54
};

Sint16 poly_02862528[] = {
	151, 14, 142, 143
};

Sint16 poly_02862530[] = {
	142, 141, 152, 13
};

Sint16 poly_02862538[] = {
	158, 147, 155, 136
};

Sint16 poly_02862540[] = {
	157, 137, 156, 15
};

NJS_TEX uv_02862548[] = {
	{ 199, 144 },
	{ 202, 130 },
	{ 194, 130 }
};

NJS_TEX uv_02862554[] = {
	{ 180, 131 },
	{ 204, 137 },
	{ 200, 128 }
};

NJS_TEX uv_02862560[] = {
	{ 180, 131 },
	{ 195, 123 },
	{ 200, 128 }
};

NJS_TEX uv_0286256C[] = {
	{ 238, 140 },
	{ 232, 132 },
	{ 221, 130 }
};

NJS_TEX uv_02862578[] = {
	{ 124, 145 },
	{ 100, 155 },
	{ 115, 173 }
};

NJS_TEX uv_02862584[] = {
	{ 202, 130 },
	{ 215, 107 },
	{ 194, 130 }
};

NJS_TEX uv_02862590[] = {
	{ 222, 211 },
	{ 221, 192 },
	{ 241, 192 }
};

NJS_TEX uv_0286259C[] = {
	{ 255, 157 },
	{ 239, 171 },
	{ 252, 176 }
};

NJS_TEX uv_028625A8[] = {
	{ 221, 130 },
	{ 222, 136 },
	{ 238, 140 }
};

NJS_TEX uv_028625B4[] = {
	{ 138, 126 },
	{ 159, 126 },
	{ 158, 118 }
};

NJS_TEX uv_028625C0[] = {
	{ 138, 126 },
	{ 124, 145 },
	{ 161, 142 }
};

NJS_TEX uv_028625CC[] = {
	{ 121, 114 },
	{ 138, 126 },
	{ 158, 118 }
};

NJS_TEX uv_028625D8[] = {
	{ 99, 92 },
	{ 58, 113 },
	{ 124, 145 }
};

NJS_TEX uv_028625E4[] = {
	{ 39, 117 },
	{ 72, 133 },
	{ 67, 153 }
};

NJS_TEX uv_028625F0[] = {
	{ 248, 150 },
	{ 239, 165 },
	{ 239, 171 }
};

NJS_TEX uv_028625FC[] = {
	{ 185, 170 },
	{ 195, 166 },
	{ 199, 144 }
};

NJS_TEX uv_02862608[] = {
	{ 195, 166 },
	{ 206, 160 },
	{ 201, 153 }
};

NJS_TEX uv_02862614[] = {
	{ 161, 142 },
	{ 165, 171 },
	{ 185, 170 }
};

NJS_TEX uv_02862620[] = {
	{ 219, 125 },
	{ 203, 121 },
	{ 195, 123 }
};

NJS_TEX uv_0286262C[] = {
	{ 247, 144 },
	{ 248, 150 },
	{ 255, 157 }
};

NJS_TEX uv_02862638[] = {
	{ 252, 176 },
	{ 221, 192 },
	{ 241, 192 }
};

NJS_TEX uv_02862644[] = {
	{ 195, 123 },
	{ 203, 121 },
	{ 158, 118 }
};

NJS_TEX uv_02862650[] = {
	{ 200, 128 },
	{ 204, 137 },
	{ 222, 136 }
};

NJS_TEX uv_0286265C[] = {
	{ 239, 171 },
	{ 219, 178 },
	{ 221, 192 }
};

NJS_TEX uv_02862668[] = {
	{ 159, 126 },
	{ 195, 123 },
	{ 158, 118 }
};

NJS_TEX uv_02862674[] = {
	{ 159, 126 },
	{ 161, 142 },
	{ 180, 131 }
};

NJS_TEX uv_02862680[] = {
	{ 195, 123 },
	{ 203, 121 },
	{ 219, 125 }
};

NJS_TEX uv_0286268C[] = {
	{ 221, 192 },
	{ 159, 194 },
	{ 222, 211 }
};

NJS_TEX uv_02862698[] = {
	{ 165, 171 },
	{ 161, 142 },
	{ 124, 145 }
};

NJS_TEX uv_028626A4[] = {
	{ 221, 192 },
	{ 252, 176 },
	{ 239, 171 }
};

NJS_TEX uv_028626B0[] = {
	{ 67, 153 },
	{ 72, 133 },
	{ 39, 117 }
};

NJS_TEX uv_028626BC[] = {
	{ 72, 133 },
	{ 39, 117 },
	{ 93, 96 }
};

NJS_TEX uv_028626C8[] = {
	{ 22, 11 },
	{ 21, 0 },
	{ 6, 18 }
};

NJS_TEX uv_028626D4[] = {
	{ 6, 18 },
	{ 21, 0 },
	{ 14, 13 }
};

NJS_TEX uv_028626E0[] = {
	{ 138, 126 },
	{ 121, 114 },
	{ 93, 96 }
};

NJS_TEX uv_028626EC[] = {
	{ 40, 3 },
	{ 21, 0 },
	{ 22, 11 }
};

NJS_TEX uv_028626F8[] = {
	{ 14, 13 },
	{ 21, 0 },
	{ 37, 5 }
};

NJS_TEX uv_02862704[] = {
	{ 37, 5 },
	{ 21, 0 },
	{ 40, 3 }
};

NJS_TEX uv_02862710[] = {
	{ 195, 123 },
	{ 221, 130 },
	{ 219, 125 }
};

NJS_TEX uv_0286271C[] = {
	{ 161, 142 },
	{ 159, 126 },
	{ 138, 126 }
};

NJS_TEX uv_02862728[] = {
	{ 114, 185 },
	{ 115, 173 },
	{ 165, 171 }
};

NJS_TEX uv_02862734[] = {
	{ 222, 211 },
	{ 159, 194 },
	{ 145, 249 }
};

NJS_TEX uv_02862740[] = {
	{ 107, 236 },
	{ 139, 254 },
	{ 145, 249 }
};

NJS_TEX uv_0286274C[] = {
	{ 122, 197 },
	{ 159, 194 },
	{ 114, 185 }
};

NJS_TEX uv_02862758[] = {
	{ 115, 173 },
	{ 165, 171 },
	{ 124, 145 }
};

NJS_TEX uv_02862764[] = {
	{ 93, 96 },
	{ 39, 117 },
	{ 72, 133 }
};

NJS_TEX uv_02862770[] = {
	{ 93, 96 },
	{ 121, 114 },
	{ 72, 133 }
};

NJS_TEX uv_0286277C[] = {
	{ 241, 192 },
	{ 221, 192 },
	{ 252, 176 }
};

NJS_TEX uv_02862788[] = {
	{ 114, 185 },
	{ 159, 194 },
	{ 165, 171 }
};

NJS_TEX uv_02862794[] = {
	{ 221, 130 },
	{ 232, 132 },
	{ 219, 125 }
};

NJS_TEX uv_028627A0[] = {
	{ 107, 236 },
	{ 139, 254 },
	{ 107, 236 }
};

NJS_TEX uv_028627AC[] = {
	{ 145, 249 },
	{ 159, 194 },
	{ 122, 197 }
};

NJS_TEX uv_028627B8[] = {
	{ 145, 249 },
	{ 139, 254 },
	{ 175, 255 }
};

NJS_TEX uv_028627C4[] = {
	{ 183, 130 },
	{ 215, 107 },
	{ 202, 130 }
};

NJS_TEX uv_028627D0[] = {
	{ 248, 150 },
	{ 235, 142 },
	{ 241, 153 }
};

NJS_TEX uv_028627DC[] = {
	{ 221, 130 },
	{ 195, 123 },
	{ 200, 128 }
};

NJS_TEX uv_028627E8[] = {
	{ 255, 157 },
	{ 248, 150 },
	{ 239, 171 }
};

NJS_TEX uv_028627F4[] = {
	{ 235, 142 },
	{ 248, 150 },
	{ 247, 144 }
};

NJS_TEX uv_02862800[] = {
	{ 237, 162 },
	{ 239, 165 },
	{ 248, 150 }
};

NJS_TEX uv_0286280C[] = {
	{ 224, 171 },
	{ 225, 165 },
	{ 214, 163 }
};

NJS_TEX uv_02862818[] = {
	{ 241, 192 },
	{ 221, 192 },
	{ 222, 211 }
};

NJS_TEX uv_02862824[] = {
	{ 221, 130 },
	{ 232, 132 },
	{ 238, 140 }
};

NJS_TEX uv_02862830[] = {
	{ 115, 173 },
	{ 100, 155 },
	{ 124, 145 }
};

NJS_TEX uv_0286283C[] = {
	{ 199, 144 },
	{ 185, 170 },
	{ 194, 130 }
};

NJS_TEX uv_02862848[] = {
	{ 252, 176 },
	{ 239, 171 },
	{ 255, 157 }
};

NJS_TEX uv_02862854[] = {
	{ 238, 140 },
	{ 222, 136 },
	{ 221, 130 }
};

NJS_TEX uv_02862860[] = {
	{ 158, 118 },
	{ 159, 126 },
	{ 138, 126 }
};

NJS_TEX uv_0286286C[] = {
	{ 161, 142 },
	{ 124, 145 },
	{ 138, 126 }
};

NJS_TEX uv_02862878[] = {
	{ 159, 194 },
	{ 221, 192 },
	{ 165, 171 }
};

NJS_TEX uv_02862884[] = {
	{ 158, 118 },
	{ 138, 126 },
	{ 121, 114 }
};

NJS_TEX uv_02862890[] = {
	{ 99, 92 },
	{ 138, 126 },
	{ 124, 145 }
};

NJS_TEX uv_0286289C[] = {
	{ 27, 125 },
	{ 39, 117 },
	{ 67, 153 }
};

NJS_TEX uv_028628A8[] = {
	{ 239, 171 },
	{ 239, 165 },
	{ 248, 150 }
};

NJS_TEX uv_028628B4[] = {
	{ 199, 144 },
	{ 195, 166 },
	{ 185, 170 }
};

NJS_TEX uv_028628C0[] = {
	{ 201, 153 },
	{ 206, 160 },
	{ 195, 166 }
};

NJS_TEX uv_028628CC[] = {
	{ 185, 170 },
	{ 219, 178 },
	{ 221, 192 }
};

NJS_TEX uv_028628D8[] = {
	{ 180, 131 },
	{ 159, 126 },
	{ 195, 123 }
};

NJS_TEX uv_028628E4[] = {
	{ 202, 130 },
	{ 215, 107 },
	{ 183, 130 }
};

NJS_TEX uv_028628F0[] = {
	{ 255, 157 },
	{ 248, 150 },
	{ 247, 144 }
};

NJS_TEX uv_028628FC[] = {
	{ 158, 118 },
	{ 203, 121 },
	{ 195, 123 }
};

NJS_TEX uv_02862908[] = {
	{ 222, 136 },
	{ 204, 137 },
	{ 200, 128 }
};

NJS_TEX uv_02862914[] = {
	{ 221, 192 },
	{ 219, 178 },
	{ 239, 171 }
};

NJS_TEX uv_02862920[] = {
	{ 158, 118 },
	{ 195, 123 },
	{ 159, 126 }
};

NJS_TEX uv_0286292C[] = {
	{ 200, 128 },
	{ 204, 137 },
	{ 180, 131 }
};

NJS_TEX uv_02862938[] = {
	{ 180, 131 },
	{ 204, 137 },
	{ 161, 142 }
};

NJS_TEX uv_02862944[] = {
	{ 222, 211 },
	{ 159, 194 },
	{ 221, 192 }
};

NJS_TEX uv_02862950[] = {
	{ 124, 145 },
	{ 161, 142 },
	{ 165, 171 }
};

NJS_TEX uv_0286295C[] = {
	{ 239, 171 },
	{ 252, 176 },
	{ 221, 192 }
};

NJS_TEX uv_02862968[] = {
	{ 145, 249 },
	{ 175, 255 },
	{ 222, 211 }
};

NJS_TEX uv_02862974[] = {
	{ 72, 133 },
	{ 121, 114 },
	{ 93, 96 }
};

NJS_TEX uv_02862980[] = {
	{ 6, 18 },
	{ 21, 0 },
	{ 22, 11 }
};

NJS_TEX uv_0286298C[] = {
	{ 14, 13 },
	{ 21, 0 },
	{ 6, 18 }
};

NJS_TEX uv_02862998[] = {
	{ 93, 96 },
	{ 99, 92 },
	{ 138, 126 }
};

NJS_TEX uv_028629A4[] = {
	{ 93, 96 },
	{ 121, 114 },
	{ 138, 126 }
};

NJS_TEX uv_028629B0[] = {
	{ 22, 11 },
	{ 21, 0 },
	{ 40, 3 }
};

NJS_TEX uv_028629BC[] = {
	{ 37, 5 },
	{ 21, 0 },
	{ 14, 13 }
};

NJS_TEX uv_028629C8[] = {
	{ 40, 3 },
	{ 21, 0 },
	{ 37, 5 }
};

NJS_TEX uv_028629D4[] = {
	{ 180, 131 },
	{ 195, 123 },
	{ 159, 126 }
};

NJS_TEX uv_028629E0[] = {
	{ 138, 126 },
	{ 159, 126 },
	{ 161, 142 }
};

NJS_TEX uv_028629EC[] = {
	{ 165, 171 },
	{ 115, 173 },
	{ 114, 185 }
};

NJS_TEX uv_028629F8[] = {
	{ 222, 211 },
	{ 175, 255 },
	{ 145, 249 }
};

NJS_TEX uv_02862A04[] = {
	{ 145, 249 },
	{ 159, 194 },
	{ 222, 211 }
};

NJS_TEX uv_02862A10[] = {
	{ 145, 249 },
	{ 139, 254 },
	{ 107, 236 }
};

NJS_TEX uv_02862A1C[] = {
	{ 114, 185 },
	{ 159, 194 },
	{ 122, 197 }
};

NJS_TEX uv_02862A28[] = {
	{ 138, 126 },
	{ 99, 92 },
	{ 93, 96 }
};

NJS_TEX uv_02862A34[] = {
	{ 124, 145 },
	{ 165, 171 },
	{ 115, 173 }
};

NJS_TEX uv_02862A40[] = {
	{ 161, 142 },
	{ 159, 126 },
	{ 180, 131 }
};

NJS_TEX uv_02862A4C[] = {
	{ 180, 131 },
	{ 161, 142 },
	{ 204, 137 }
};

NJS_TEX uv_02862A58[] = {
	{ 200, 128 },
	{ 195, 123 },
	{ 180, 131 }
};

NJS_TEX uv_02862A64[] = {
	{ 165, 171 },
	{ 159, 194 },
	{ 114, 185 }
};

NJS_TEX uv_02862A70[] = {
	{ 219, 125 },
	{ 232, 132 },
	{ 221, 130 }
};

NJS_TEX uv_02862A7C[] = {
	{ 107, 236 },
	{ 96, 200 },
	{ 122, 197 }
};

NJS_TEX uv_02862A88[] = {
	{ 175, 255 },
	{ 139, 254 },
	{ 145, 249 }
};

NJS_TEX uv_02862A94[] = {
	{ 248, 150 },
	{ 237, 162 },
	{ 241, 153 }
};

NJS_TEX uv_02862AA0[] = {
	{ 200, 128 },
	{ 195, 123 },
	{ 221, 130 }
};

NJS_TEX uv_02862AAC[] = {
	{ 239, 171 },
	{ 248, 150 },
	{ 255, 157 }
};

NJS_TEX uv_02862AB8[] = {
	{ 247, 144 },
	{ 248, 150 },
	{ 235, 142 }
};

NJS_TEX uv_02862AC4[] = {
	{ 248, 150 },
	{ 239, 165 },
	{ 237, 162 }
};

NJS_TEX uv_02862AD0[] = {
	{ 195, 166 },
	{ 206, 160 },
	{ 214, 163 }
};

NJS_TEX uv_02862ADC[] = {
	{ 219, 125 },
	{ 221, 130 },
	{ 195, 123 }
};

NJS_TEX uv_02862AE8[] = {
	{ 159, 194 },
	{ 165, 171 },
	{ 221, 192 }
};

NJS_TEX uv_02862AF4[] = {
	{ 255, 157 },
	{ 247, 144 },
	{ 247, 144 }
};

NJS_TEX uv_02862B00[] = {
	{ 238, 140 },
	{ 232, 132 },
	{ 238, 140 }
};

NJS_TEX uv_02862B0C[] = {
	{ 185, 170 },
	{ 165, 171 },
	{ 161, 142 }
};

NJS_TEX uv_02862B18[] = {
	{ 221, 192 },
	{ 219, 178 },
	{ 185, 170 }
};

NJS_TEX uv_02862B24[] = {
	{ 80, 174 },
	{ 114, 185 },
	{ 115, 173 }
};

NJS_TEX uv_02862B30[] = {
	{ 114, 185 },
	{ 96, 200 },
	{ 80, 174 }
};

NJS_TEX uv_02862B3C[] = {
	{ 80, 174 },
	{ 96, 200 },
	{ 114, 185 }
};

NJS_TEX uv_02862B48[] = {
	{ 100, 155 },
	{ 124, 145 },
	{ 58, 113 }
};

NJS_TEX uv_02862B54[] = {
	{ 80, 174 },
	{ 27, 125 },
	{ 67, 153 }
};

NJS_TEX uv_02862B60[] = {
	{ 80, 174 },
	{ 80, 174 },
	{ 67, 153 }
};

NJS_TEX uv_02862B6C[] = {
	{ 58, 113 },
	{ 124, 145 },
	{ 100, 155 }
};

NJS_TEX uv_02862B78[] = {
	{ 100, 155 },
	{ 27, 125 },
	{ 58, 113 }
};

NJS_TEX uv_02862B84[] = {
	{ 58, 113 },
	{ 27, 125 },
	{ 100, 155 }
};

NJS_TEX uv_02862B90[] = {
	{ 200, 128 },
	{ 221, 130 },
	{ 222, 136 }
};

NJS_TEX uv_02862B9C[] = {
	{ 222, 136 },
	{ 221, 130 },
	{ 200, 128 }
};

NJS_TEX uv_02862BA8[] = {
	{ 114, 185 },
	{ 96, 200 },
	{ 122, 197 }
};

NJS_TEX uv_02862BB4[] = {
	{ 122, 197 },
	{ 96, 200 },
	{ 107, 236 }
};

NJS_TEX uv_02862BC0[] = {
	{ 122, 197 },
	{ 96, 200 },
	{ 114, 185 }
};

NJS_TEX uv_02862BCC[] = {
	{ 122, 197 },
	{ 159, 194 },
	{ 145, 249 }
};

NJS_TEX uv_02862BD8[] = {
	{ 161, 142 },
	{ 185, 170 },
	{ 194, 130 }
};

NJS_TEX uv_02862BE4[] = {
	{ 183, 130 },
	{ 215, 107 },
	{ 194, 130 }
};

NJS_TEX uv_02862BF0[] = {
	{ 199, 144 },
	{ 204, 137 },
	{ 161, 142 }
};

NJS_TEX uv_02862BFC[] = {
	{ 199, 144 },
	{ 161, 142 },
	{ 204, 137 }
};

NJS_TEX uv_02862C08[] = {
	{ 67, 153 },
	{ 39, 117 },
	{ 27, 125 }
};

NJS_TEX uv_02862C14[] = {
	{ 80, 174 },
	{ 27, 125 },
	{ 100, 155 }
};

NJS_TEX uv_02862C20[] = {
	{ 27, 125 },
	{ 80, 174 },
	{ 67, 153 }
};

NJS_TEX uv_02862C2C[] = {
	{ 115, 173 },
	{ 114, 185 },
	{ 80, 174 }
};

NJS_TEX uv_02862C38[] = {
	{ 100, 155 },
	{ 115, 173 },
	{ 80, 174 }
};

NJS_TEX uv_02862C44[] = {
	{ 100, 155 },
	{ 27, 125 },
	{ 80, 174 }
};

NJS_TEX uv_02862C50[] = {
	{ 80, 174 },
	{ 115, 173 },
	{ 100, 155 }
};

NJS_TEX uv_02862C5C[] = {
	{ 124, 145 },
	{ 138, 126 },
	{ 99, 92 }
};

NJS_TEX uv_02862C68[] = {
	{ 124, 145 },
	{ 58, 113 },
	{ 99, 92 }
};

NJS_TEX uv_02862C74[] = {
	{ 185, 170 },
	{ 165, 171 },
	{ 221, 192 }
};

NJS_TEX uv_02862C80[] = {
	{ 221, 192 },
	{ 165, 171 },
	{ 185, 170 }
};

NJS_TEX uv_02862C8C[] = {
	{ 107, 236 },
	{ 145, 249 },
	{ 122, 197 }
};

NJS_TEX uv_02862C98[] = {
	{ 122, 197 },
	{ 145, 249 },
	{ 107, 236 }
};

NJS_TEX uv_02862CA4[] = {
	{ 247, 144 },
	{ 239, 139 },
	{ 235, 142 }
};

NJS_TEX uv_02862CB0[] = {
	{ 235, 142 },
	{ 239, 139 },
	{ 247, 144 }
};

NJS_TEX uv_02862CBC[] = {
	{ 194, 130 },
	{ 215, 107 },
	{ 202, 130 }
};

NJS_TEX uv_02862CC8[] = {
	{ 194, 130 },
	{ 185, 170 },
	{ 161, 142 }
};

NJS_TEX uv_02862CD4[] = {
	{ 194, 130 },
	{ 185, 170 },
	{ 199, 144 }
};

NJS_TEX uv_02862CE0[] = {
	{ 194, 130 },
	{ 215, 107 },
	{ 183, 130 }
};

NJS_TEX uv_02862CEC[] = {
	{ 194, 130 },
	{ 183, 130 },
	{ 161, 142 }
};

NJS_TEX uv_02862CF8[] = {
	{ 161, 142 },
	{ 183, 130 },
	{ 194, 130 }
};

NJS_TEX uv_02862D04[] = {
	{ 194, 130 },
	{ 202, 130 },
	{ 199, 144 }
};

NJS_TEX uv_02862D10[] = {
	{ 222, 136 },
	{ 238, 140 },
	{ 235, 142 }
};

NJS_TEX uv_02862D1C[] = {
	{ 235, 142 },
	{ 238, 140 },
	{ 222, 136 }
};

NJS_TEX uv_02862D28[] = {
	{ 214, 163 },
	{ 206, 160 },
	{ 195, 166 }
};

NJS_TEX uv_02862D34[] = {
	{ 195, 166 },
	{ 224, 171 },
	{ 214, 163 }
};

NJS_TEX uv_02862D40[] = {
	{ 214, 163 },
	{ 225, 165 },
	{ 224, 171 }
};

NJS_TEX uv_02862D4C[] = {
	{ 224, 171 },
	{ 195, 166 },
	{ 214, 163 }
};

NJS_TEX uv_02862D58[] = {
	{ 241, 153 },
	{ 237, 162 },
	{ 248, 150 }
};

NJS_TEX uv_02862D64[] = {
	{ 241, 153 },
	{ 235, 142 },
	{ 248, 150 }
};

NJS_TEX uv_02862D70[] = {
	{ 201, 153 },
	{ 199, 144 },
	{ 195, 166 }
};

NJS_TEX uv_02862D7C[] = {
	{ 195, 166 },
	{ 199, 144 },
	{ 201, 153 }
};

NJS_TEX uv_02862D88[] = {
	{ 235, 142 },
	{ 235, 142 },
	{ 238, 140 },
	{ 238, 140 }
};

NJS_TEX uv_02862D98[] = {
	{ 80, 174 },
	{ 96, 200 },
	{ 80, 174 },
	{ 96, 200 }
};

NJS_TEX uv_02862DA8[] = {
	{ 96, 200 },
	{ 107, 236 },
	{ 96, 200 },
	{ 107, 236 }
};

NJS_TEX uv_02862DB8[] = {
	{ 22, 46 },
	{ 22, 11 },
	{ 49, 33 },
	{ 40, 3 }
};

NJS_TEX uv_02862DC8[] = {
	{ 239, 171 },
	{ 239, 165 },
	{ 219, 178 },
	{ 224, 171 }
};

NJS_TEX uv_02862DD8[] = {
	{ 219, 178 },
	{ 224, 171 },
	{ 185, 170 },
	{ 195, 166 }
};

NJS_TEX uv_02862DE8[] = {
	{ 225, 165 },
	{ 224, 171 },
	{ 237, 162 },
	{ 239, 165 }
};

NJS_TEX uv_02862DF8[] = {
	{ 0, 55 },
	{ 6, 18 },
	{ 22, 46 },
	{ 22, 11 }
};

NJS_TEX uv_02862E08[] = {
	{ 219, 178 },
	{ 224, 171 },
	{ 239, 171 },
	{ 239, 165 }
};

NJS_TEX uv_02862E18[] = {
	{ 185, 170 },
	{ 195, 166 },
	{ 219, 178 },
	{ 224, 171 }
};

NJS_TEX uv_02862E28[] = {
	{ 237, 162 },
	{ 239, 165 },
	{ 225, 165 },
	{ 224, 171 }
};

NJS_TEX uv_02862E38[] = {
	{ 247, 144 },
	{ 239, 139 },
	{ 247, 144 },
	{ 239, 139 }
};

NJS_TEX uv_02862E48[] = {
	{ 49, 33 },
	{ 40, 3 },
	{ 45, 36 },
	{ 37, 5 }
};

NJS_TEX uv_02862E58[] = {
	{ 45, 36 },
	{ 37, 5 },
	{ 9, 49 },
	{ 14, 13 }
};

NJS_TEX uv_02862E68[] = {
	{ 36, 81 },
	{ 58, 113 },
	{ 69, 66 },
	{ 99, 92 }
};

NJS_TEX uv_02862E78[] = {
	{ 69, 66 },
	{ 99, 92 },
	{ 64, 69 },
	{ 93, 96 }
};

NJS_TEX uv_02862E88[] = {
	{ 64, 69 },
	{ 93, 96 },
	{ 21, 84 },
	{ 39, 117 }
};

NJS_TEX uv_02862E98[] = {
	{ 21, 84 },
	{ 39, 117 },
	{ 10, 91 },
	{ 27, 125 }
};

NJS_TEX uv_02862EA8[] = {
	{ 10, 91 },
	{ 27, 125 },
	{ 36, 81 },
	{ 58, 113 }
};

NJS_TEX uv_02862EB8[] = {
	{ 10, 91 },
	{ 27, 125 },
	{ 21, 84 },
	{ 39, 117 }
};

NJS_TEX uv_02862EC8[] = {
	{ 21, 84 },
	{ 39, 117 },
	{ 64, 69 },
	{ 93, 96 }
};

NJS_TEX uv_02862ED8[] = {
	{ 64, 69 },
	{ 93, 96 },
	{ 69, 66 },
	{ 99, 92 }
};

NJS_TEX uv_02862EE8[] = {
	{ 69, 66 },
	{ 99, 92 },
	{ 36, 81 },
	{ 58, 113 }
};

NJS_TEX uv_02862EF8[] = {
	{ 36, 81 },
	{ 58, 113 },
	{ 10, 91 },
	{ 27, 125 }
};

NJS_TEX uv_02862F08[] = {
	{ 0, 55 },
	{ 6, 18 },
	{ 9, 49 },
	{ 14, 13 }
};

NJS_TEX uv_02862F18[] = {
	{ 22, 46 },
	{ 22, 11 },
	{ 0, 55 },
	{ 6, 18 }
};

NJS_TEX uv_02862F28[] = {
	{ 49, 33 },
	{ 40, 3 },
	{ 22, 46 },
	{ 22, 11 }
};

NJS_TEX uv_02862F38[] = {
	{ 45, 36 },
	{ 37, 5 },
	{ 49, 33 },
	{ 40, 3 }
};

NJS_TEX uv_02862F48[] = {
	{ 9, 49 },
	{ 14, 13 },
	{ 45, 36 },
	{ 37, 5 }
};

NJS_TEX uv_02862F58[] = {
	{ 9, 49 },
	{ 14, 13 },
	{ 0, 55 },
	{ 6, 18 }
};

NJS_TEX uv_02862F68[] = {
	{ 22, 46 },
	{ 36, 81 },
	{ 0, 55 },
	{ 10, 91 }
};

NJS_TEX uv_02862F78[] = {
	{ 0, 55 },
	{ 10, 91 },
	{ 9, 49 },
	{ 21, 84 }
};

NJS_TEX uv_02862F88[] = {
	{ 9, 49 },
	{ 21, 84 },
	{ 45, 36 },
	{ 64, 69 }
};

NJS_TEX uv_02862F98[] = {
	{ 45, 36 },
	{ 64, 69 },
	{ 49, 33 },
	{ 69, 66 }
};

NJS_TEX uv_02862FA8[] = {
	{ 49, 33 },
	{ 69, 66 },
	{ 22, 46 },
	{ 36, 81 }
};

NJS_TEX uv_02862FB8[] = {
	{ 9, 49 },
	{ 21, 84 },
	{ 0, 55 },
	{ 10, 91 }
};

NJS_TEX uv_02862FC8[] = {
	{ 0, 55 },
	{ 10, 91 },
	{ 22, 46 },
	{ 36, 81 }
};

NJS_TEX uv_02862FD8[] = {
	{ 22, 46 },
	{ 36, 81 },
	{ 49, 33 },
	{ 69, 66 }
};

NJS_TEX uv_02862FE8[] = {
	{ 49, 33 },
	{ 69, 66 },
	{ 45, 36 },
	{ 64, 69 }
};

NJS_TEX uv_02862FF8[] = {
	{ 45, 36 },
	{ 64, 69 },
	{ 9, 49 },
	{ 21, 84 }
};

NJS_TEX uv_02863008[] = {
	{ 183, 130 },
	{ 161, 142 },
	{ 202, 130 },
	{ 199, 144 }
};

NJS_TEX uv_02863018[] = {
	{ 202, 130 },
	{ 199, 144 },
	{ 183, 130 },
	{ 161, 142 }
};

NJS_TEX uv_02863028[] = {
	{ 222, 73 },
	{ 168, 88 },
	{ 176, 42 }
};

NJS_TEX uv_02863034[] = {
	{ 176, 42 },
	{ 168, 88 },
	{ 222, 73 }
};

NJS_TEX uv_02863040[] = {
	{ 176, 42 },
	{ 168, 88 },
	{ 114, 47 }
};

NJS_TEX uv_0286304C[] = {
	{ 88, 83 },
	{ 168, 88 },
	{ 114, 47 }
};

NJS_TEX uv_02863058[] = {
	{ 117, 162 },
	{ 168, 88 },
	{ 88, 83 }
};

NJS_TEX uv_02863064[] = {
	{ 187, 193 },
	{ 168, 88 },
	{ 117, 162 }
};

NJS_TEX uv_02863070[] = {
	{ 168, 88 },
	{ 227, 177 },
	{ 247, 127 }
};

NJS_TEX uv_0286307C[] = {
	{ 227, 177 },
	{ 168, 88 },
	{ 187, 193 }
};

NJS_TEX uv_02863088[] = {
	{ 88, 83 },
	{ 168, 88 },
	{ 117, 162 }
};

NJS_TEX uv_02863094[] = {
	{ 117, 162 },
	{ 168, 88 },
	{ 187, 193 }
};

NJS_TEX uv_028630A0[] = {
	{ 168, 88 },
	{ 222, 73 },
	{ 247, 127 }
};

NJS_TEX uv_028630AC[] = {
	{ 187, 193 },
	{ 168, 88 },
	{ 227, 177 }
};

NJS_TEX uv_028630B8[] = {
	{ 114, 47 },
	{ 168, 88 },
	{ 88, 83 }
};

NJS_TEX uv_028630C4[] = {
	{ 90, 235 },
	{ 45, 209 },
	{ 117, 162 }
};

NJS_TEX uv_028630D0[] = {
	{ 117, 162 },
	{ 45, 209 },
	{ 18, 147 }
};

NJS_TEX uv_028630DC[] = {
	{ 114, 47 },
	{ 168, 88 },
	{ 176, 42 }
};

NJS_TEX uv_028630E8[] = {
	{ 18, 147 },
	{ 45, 209 },
	{ 117, 162 }
};

NJS_TEX uv_028630F4[] = {
	{ 117, 162 },
	{ 45, 209 },
	{ 90, 235 }
};

NJS_TEX uv_02863100[] = {
	{ 247, 127 },
	{ 227, 177 },
	{ 168, 88 }
};

NJS_TEX uv_0286310C[] = {
	{ 247, 127 },
	{ 222, 73 },
	{ 168, 88 }
};

NJS_TEX uv_02863118[] = {
	{ 176, 42 },
	{ 133, 5 },
	{ 114, 47 },
	{ 34, 15 }
};

NJS_TEX uv_02863128[] = {
	{ 88, 83 },
	{ 7, 71 },
	{ 114, 47 },
	{ 34, 15 }
};

NJS_TEX uv_02863138[] = {
	{ 114, 47 },
	{ 34, 15 },
	{ 176, 42 },
	{ 133, 5 }
};

NJS_TEX uv_02863148[] = {
	{ 176, 42 },
	{ 133, 5 },
	{ 222, 73 },
	{ 208, 57 }
};

NJS_TEX uv_02863158[] = {
	{ 239, 144 },
	{ 215, 224 },
	{ 247, 127 },
	{ 227, 177 }
};

NJS_TEX uv_02863168[] = {
	{ 227, 177 },
	{ 215, 224 },
	{ 187, 193 },
	{ 151, 249 }
};

NJS_TEX uv_02863178[] = {
	{ 239, 144 },
	{ 208, 57 },
	{ 247, 127 },
	{ 222, 73 }
};

NJS_TEX uv_02863188[] = {
	{ 222, 73 },
	{ 208, 57 },
	{ 176, 42 },
	{ 133, 5 }
};

NJS_TEX uv_02863198[] = {
	{ 114, 47 },
	{ 34, 15 },
	{ 88, 83 },
	{ 7, 71 }
};

NJS_TEX uv_028631A8[] = {
	{ 187, 193 },
	{ 151, 249 },
	{ 227, 177 },
	{ 215, 224 }
};

NJS_TEX uv_028631B8[] = {
	{ 18, 147 },
	{ 7, 71 },
	{ 117, 162 },
	{ 88, 83 }
};

NJS_TEX uv_028631C8[] = {
	{ 117, 162 },
	{ 187, 193 },
	{ 90, 235 },
	{ 151, 249 }
};

NJS_TEX uv_028631D8[] = {
	{ 90, 235 },
	{ 151, 249 },
	{ 117, 162 },
	{ 187, 193 }
};

NJS_TEX uv_028631E8[] = {
	{ 117, 162 },
	{ 88, 83 },
	{ 18, 147 },
	{ 7, 71 }
};

NJS_TEX uv_028631F8[] = {
	{ 247, 127 },
	{ 222, 73 },
	{ 239, 144 },
	{ 208, 57 }
};

NJS_TEX uv_02863208[] = {
	{ 247, 127 },
	{ 227, 177 },
	{ 239, 144 },
	{ 215, 224 }
};

NJS_MESHSET_SADX meshlist_02863218[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_02861D58, NULL, NULL, NULL, uv_02862548, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861D60, NULL, NULL, NULL, uv_02862554, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861D68, NULL, NULL, NULL, uv_02862560, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861D70, NULL, NULL, NULL, uv_0286256C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861D78, NULL, NULL, NULL, uv_02862578, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861D80, NULL, NULL, NULL, uv_02862584, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861D88, NULL, NULL, NULL, uv_02862590, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861D90, NULL, NULL, NULL, uv_0286259C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861D98, NULL, NULL, NULL, uv_028625A8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DA0, NULL, NULL, NULL, uv_028625B4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DA8, NULL, NULL, NULL, uv_028625C0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DB0, NULL, NULL, NULL, uv_028625CC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DB8, NULL, NULL, NULL, uv_028625D8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DC0, NULL, NULL, NULL, uv_028625E4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DC8, NULL, NULL, NULL, uv_028625F0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DD0, NULL, NULL, NULL, uv_028625FC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DD8, NULL, NULL, NULL, uv_02862608, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DE0, NULL, NULL, NULL, uv_02862614, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DE8, NULL, NULL, NULL, uv_02862620, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DF0, NULL, NULL, NULL, uv_0286262C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861DF8, NULL, NULL, NULL, uv_02862638, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E00, NULL, NULL, NULL, uv_02862644, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E08, NULL, NULL, NULL, uv_02862650, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E10, NULL, NULL, NULL, uv_0286265C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E18, NULL, NULL, NULL, uv_02862668, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E20, NULL, NULL, NULL, uv_02862674, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E28, NULL, NULL, NULL, uv_02862680, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E30, NULL, NULL, NULL, uv_0286268C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E38, NULL, NULL, NULL, uv_02862698, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E40, NULL, NULL, NULL, uv_028626A4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E48, NULL, NULL, NULL, uv_028626B0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E50, NULL, NULL, NULL, uv_028626BC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E58, NULL, NULL, NULL, uv_028626C8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E60, NULL, NULL, NULL, uv_028626D4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E68, NULL, NULL, NULL, uv_028626E0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E70, NULL, NULL, NULL, uv_028626EC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E78, NULL, NULL, NULL, uv_028626F8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E80, NULL, NULL, NULL, uv_02862704, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E88, NULL, NULL, NULL, uv_02862710, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E90, NULL, NULL, NULL, uv_0286271C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861E98, NULL, NULL, NULL, uv_02862728, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EA0, NULL, NULL, NULL, uv_02862734, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EA8, NULL, NULL, NULL, uv_02862740, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EB0, NULL, NULL, NULL, uv_0286274C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EB8, NULL, NULL, NULL, uv_02862758, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EC0, NULL, NULL, NULL, uv_02862764, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EC8, NULL, NULL, NULL, uv_02862770, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861ED0, NULL, NULL, NULL, uv_0286277C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861ED8, NULL, NULL, NULL, uv_02862788, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EE0, NULL, NULL, NULL, uv_02862794, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EE8, NULL, NULL, NULL, uv_028627A0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EF0, NULL, NULL, NULL, uv_028627AC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861EF8, NULL, NULL, NULL, uv_028627B8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F00, NULL, NULL, NULL, uv_028627C4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F08, NULL, NULL, NULL, uv_028627D0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F10, NULL, NULL, NULL, uv_028627DC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F18, NULL, NULL, NULL, uv_028627E8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F20, NULL, NULL, NULL, uv_028627F4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F28, NULL, NULL, NULL, uv_02862800, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F30, NULL, NULL, NULL, uv_0286280C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F38, NULL, NULL, NULL, uv_02862818, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F40, NULL, NULL, NULL, uv_02862824, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F48, NULL, NULL, NULL, uv_02862830, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F50, NULL, NULL, NULL, uv_0286283C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F58, NULL, NULL, NULL, uv_02862848, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F60, NULL, NULL, NULL, uv_02862854, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F68, NULL, NULL, NULL, uv_02862860, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F70, NULL, NULL, NULL, uv_0286286C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F78, NULL, NULL, NULL, uv_02862878, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F80, NULL, NULL, NULL, uv_02862884, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F88, NULL, NULL, NULL, uv_02862890, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F90, NULL, NULL, NULL, uv_0286289C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861F98, NULL, NULL, NULL, uv_028628A8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FA0, NULL, NULL, NULL, uv_028628B4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FA8, NULL, NULL, NULL, uv_028628C0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FB0, NULL, NULL, NULL, uv_028628CC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FB8, NULL, NULL, NULL, uv_028628D8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FC0, NULL, NULL, NULL, uv_028628E4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FC8, NULL, NULL, NULL, uv_028628F0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FD0, NULL, NULL, NULL, uv_028628FC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FD8, NULL, NULL, NULL, uv_02862908, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FE0, NULL, NULL, NULL, uv_02862914, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FE8, NULL, NULL, NULL, uv_02862920, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FF0, NULL, NULL, NULL, uv_0286292C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02861FF8, NULL, NULL, NULL, uv_02862938, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862000, NULL, NULL, NULL, uv_02862944, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862008, NULL, NULL, NULL, uv_02862950, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862010, NULL, NULL, NULL, uv_0286295C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862018, NULL, NULL, NULL, uv_02862968, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862020, NULL, NULL, NULL, uv_02862974, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862028, NULL, NULL, NULL, uv_02862980, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862030, NULL, NULL, NULL, uv_0286298C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862038, NULL, NULL, NULL, uv_02862998, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862040, NULL, NULL, NULL, uv_028629A4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862048, NULL, NULL, NULL, uv_028629B0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862050, NULL, NULL, NULL, uv_028629BC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862058, NULL, NULL, NULL, uv_028629C8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862060, NULL, NULL, NULL, uv_028629D4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862068, NULL, NULL, NULL, uv_028629E0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862070, NULL, NULL, NULL, uv_028629EC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862078, NULL, NULL, NULL, uv_028629F8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862080, NULL, NULL, NULL, uv_02862A04, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862088, NULL, NULL, NULL, uv_02862A10, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862090, NULL, NULL, NULL, uv_02862A1C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862098, NULL, NULL, NULL, uv_02862A28, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620A0, NULL, NULL, NULL, uv_02862A34, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620A8, NULL, NULL, NULL, uv_02862A40, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620B0, NULL, NULL, NULL, uv_02862A4C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620B8, NULL, NULL, NULL, uv_02862A58, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620C0, NULL, NULL, NULL, uv_02862A64, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620C8, NULL, NULL, NULL, uv_02862A70, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620D0, NULL, NULL, NULL, uv_02862A7C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620D8, NULL, NULL, NULL, uv_02862A88, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620E0, NULL, NULL, NULL, uv_02862A94, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620E8, NULL, NULL, NULL, uv_02862AA0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620F0, NULL, NULL, NULL, uv_02862AAC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028620F8, NULL, NULL, NULL, uv_02862AB8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862100, NULL, NULL, NULL, uv_02862AC4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862108, NULL, NULL, NULL, uv_02862AD0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862110, NULL, NULL, NULL, uv_02862ADC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862118, NULL, NULL, NULL, uv_02862AE8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862120, NULL, NULL, NULL, uv_02862AF4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862128, NULL, NULL, NULL, uv_02862B00, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862130, NULL, NULL, NULL, uv_02862B0C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862138, NULL, NULL, NULL, uv_02862B18, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862140, NULL, NULL, NULL, uv_02862B24, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862148, NULL, NULL, NULL, uv_02862B30, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862150, NULL, NULL, NULL, uv_02862B3C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862158, NULL, NULL, NULL, uv_02862B48, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862160, NULL, NULL, NULL, uv_02862B54, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862168, NULL, NULL, NULL, uv_02862B60, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862170, NULL, NULL, NULL, uv_02862B6C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862178, NULL, NULL, NULL, uv_02862B78, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862180, NULL, NULL, NULL, uv_02862B84, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862188, NULL, NULL, NULL, uv_02862B90, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862190, NULL, NULL, NULL, uv_02862B9C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862198, NULL, NULL, NULL, uv_02862BA8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621A0, NULL, NULL, NULL, uv_02862BB4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621A8, NULL, NULL, NULL, uv_02862BC0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621B0, NULL, NULL, NULL, uv_02862BCC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621B8, NULL, NULL, NULL, uv_02862BD8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621C0, NULL, NULL, NULL, uv_02862BE4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621C8, NULL, NULL, NULL, uv_02862BF0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621D0, NULL, NULL, NULL, uv_02862BFC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621D8, NULL, NULL, NULL, uv_02862C08, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621E0, NULL, NULL, NULL, uv_02862C14, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621E8, NULL, NULL, NULL, uv_02862C20, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621F0, NULL, NULL, NULL, uv_02862C2C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028621F8, NULL, NULL, NULL, uv_02862C38, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862200, NULL, NULL, NULL, uv_02862C44, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862208, NULL, NULL, NULL, uv_02862C50, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862210, NULL, NULL, NULL, uv_02862C5C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862218, NULL, NULL, NULL, uv_02862C68, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862220, NULL, NULL, NULL, uv_02862C74, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862228, NULL, NULL, NULL, uv_02862C80, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862230, NULL, NULL, NULL, uv_02862C8C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862238, NULL, NULL, NULL, uv_02862C98, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862240, NULL, NULL, NULL, uv_02862CA4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862248, NULL, NULL, NULL, uv_02862CB0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862250, NULL, NULL, NULL, uv_02862CBC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862258, NULL, NULL, NULL, uv_02862CC8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862260, NULL, NULL, NULL, uv_02862CD4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862268, NULL, NULL, NULL, uv_02862CE0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862270, NULL, NULL, NULL, uv_02862CEC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862278, NULL, NULL, NULL, uv_02862CF8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862280, NULL, NULL, NULL, uv_02862D04, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862288, NULL, NULL, NULL, uv_02862D10, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862290, NULL, NULL, NULL, uv_02862D1C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02862298, NULL, NULL, NULL, uv_02862D28, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028622A0, NULL, NULL, NULL, uv_02862D34, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028622A8, NULL, NULL, NULL, uv_02862D40, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028622B0, NULL, NULL, NULL, uv_02862D4C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028622B8, NULL, NULL, NULL, uv_02862D58, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028622C0, NULL, NULL, NULL, uv_02862D64, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028622C8, NULL, NULL, NULL, uv_02862D70, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_028622D0, NULL, NULL, NULL, uv_02862D7C, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028622D8, NULL, NULL, NULL, uv_02862D88, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028622E0, NULL, NULL, NULL, uv_02862D98, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028622E8, NULL, NULL, NULL, uv_02862DA8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028622F0, NULL, NULL, NULL, uv_02862DB8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028622F8, NULL, NULL, NULL, uv_02862DC8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862300, NULL, NULL, NULL, uv_02862DD8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862308, NULL, NULL, NULL, uv_02862DE8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862310, NULL, NULL, NULL, uv_02862DF8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862318, NULL, NULL, NULL, uv_02862E08, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862320, NULL, NULL, NULL, uv_02862E18, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862328, NULL, NULL, NULL, uv_02862E28, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862330, NULL, NULL, NULL, uv_02862E38, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862338, NULL, NULL, NULL, uv_02862E48, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862340, NULL, NULL, NULL, uv_02862E58, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862348, NULL, NULL, NULL, uv_02862E68, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862350, NULL, NULL, NULL, uv_02862E78, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862358, NULL, NULL, NULL, uv_02862E88, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862360, NULL, NULL, NULL, uv_02862E98, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862368, NULL, NULL, NULL, uv_02862EA8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862370, NULL, NULL, NULL, uv_02862EB8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862378, NULL, NULL, NULL, uv_02862EC8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862380, NULL, NULL, NULL, uv_02862ED8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862388, NULL, NULL, NULL, uv_02862EE8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862390, NULL, NULL, NULL, uv_02862EF8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862398, NULL, NULL, NULL, uv_02862F08, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623A0, NULL, NULL, NULL, uv_02862F18, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623A8, NULL, NULL, NULL, uv_02862F28, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623B0, NULL, NULL, NULL, uv_02862F38, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623B8, NULL, NULL, NULL, uv_02862F48, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623C0, NULL, NULL, NULL, uv_02862F58, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623C8, NULL, NULL, NULL, uv_02862F68, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623D0, NULL, NULL, NULL, uv_02862F78, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623D8, NULL, NULL, NULL, uv_02862F88, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623E0, NULL, NULL, NULL, uv_02862F98, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623E8, NULL, NULL, NULL, uv_02862FA8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623F0, NULL, NULL, NULL, uv_02862FB8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_028623F8, NULL, NULL, NULL, uv_02862FC8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862400, NULL, NULL, NULL, uv_02862FD8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862408, NULL, NULL, NULL, uv_02862FE8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862410, NULL, NULL, NULL, uv_02862FF8, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862418, NULL, NULL, NULL, uv_02863008, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02862420, NULL, NULL, NULL, uv_02863018, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862428, NULL, NULL, NULL, uv_02863028, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862430, NULL, NULL, NULL, uv_02863034, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862438, NULL, NULL, NULL, uv_02863040, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862440, NULL, NULL, NULL, uv_0286304C, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862448, NULL, NULL, NULL, uv_02863058, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862450, NULL, NULL, NULL, uv_02863064, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862458, NULL, NULL, NULL, uv_02863070, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862460, NULL, NULL, NULL, uv_0286307C, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862468, NULL, NULL, NULL, uv_02863088, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862470, NULL, NULL, NULL, uv_02863094, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862478, NULL, NULL, NULL, uv_028630A0, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862480, NULL, NULL, NULL, uv_028630AC, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862488, NULL, NULL, NULL, uv_028630B8, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862490, NULL, NULL, NULL, uv_028630C4, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_02862498, NULL, NULL, NULL, uv_028630D0, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_028624A0, NULL, NULL, NULL, uv_028630DC, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_028624A8, NULL, NULL, NULL, uv_028630E8, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_028624B0, NULL, NULL, NULL, uv_028630F4, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_028624B8, NULL, NULL, NULL, uv_02863100, NULL },
	{ NJD_MESHSET_3 | 1, 1, poly_028624C0, NULL, NULL, NULL, uv_0286310C, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_028624C8, NULL, NULL, NULL, uv_02863118, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_028624D0, NULL, NULL, NULL, uv_02863128, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_028624D8, NULL, NULL, NULL, uv_02863138, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_028624E0, NULL, NULL, NULL, uv_02863148, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_028624E8, NULL, NULL, NULL, uv_02863158, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_028624F0, NULL, NULL, NULL, uv_02863168, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_028624F8, NULL, NULL, NULL, uv_02863178, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_02862500, NULL, NULL, NULL, uv_02863188, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_02862508, NULL, NULL, NULL, uv_02863198, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_02862510, NULL, NULL, NULL, uv_028631A8, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_02862518, NULL, NULL, NULL, uv_028631B8, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_02862520, NULL, NULL, NULL, uv_028631C8, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_02862528, NULL, NULL, NULL, uv_028631D8, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_02862530, NULL, NULL, NULL, uv_028631E8, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_02862538, NULL, NULL, NULL, uv_028631F8, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_02862540, NULL, NULL, NULL, uv_02863208, NULL }
};

NJS_VECTOR vertex_02864DE0[] = {
	{ -0.623024f, -0.413125f, 1.612911f },
	{ -0.52459f, -1.338792f, 2.229045f },
	{ -0.343801f, -2.992818f, 2.354983f },
	{ -0.600527f, -4.360391f, 1.601004f },
	{ -1.478011f, -0.40738f, 2.042868f },
	{ -2.065699f, -1.482285f, 2.575382f },
	{ 0.874736f, -0.234763f, 0.973015f },
	{ 1.255654f, -1.025558f, 1.427473f },
	{ 1.968202f, -4.206935f, 1.209475f },
	{ -6.776491f, 1.631662f, -3.353856f },
	{ -6.321402f, 6.967659f, 3.776378f },
	{ -3.198362f, -4.673795f, 0.821422f },
	{ 1.335547f, -2.384223f, 2.049877f },
	{ 1.056584f, -1.421751f, 1.84249f },
	{ 2.114599f, -2.658328f, 1.78921f },
	{ 2.588626f, -2.489138f, 1.22385f },
	{ -1.176001f, -7.561704f, 0.9008f },
	{ -2.775634f, -6.794944f, 0.576883f },
	{ -2.457292f, -3.811991f, 1.934313f },
	{ -2.447979f, -3.112021f, 2.349352f },
	{ -3.048981f, -2.097169f, 2.592399f },
	{ -3.873211f, -3.1694f, 0.640393f },
	{ -4.393024f, -1.953132f, 0 },
	{ -4.800952f, 0.372591f, 3.783766f },
	{ -6.048797f, -0.350875f, 2.62324f },
	{ -5.584178f, 0.143979f, 1.822717f },
	{ -3.070057f, 1.567532f, 3.264789f },
	{ -3.325857f, 1.369764f, 1.80564f },
	{ 1.988933f, -0.960647f, 0.928718f },
	{ 3.072813f, -1.765275f, 0.482751f },
	{ 2.703713f, -2.683497f, 1.275575f },
	{ 2.076274f, -2.984492f, 1.991656f },
	{ 0.892634f, -2.736718f, 2.434083f },
	{ 3.027159f, -1.450919f, 0.24702f },
	{ 1.968699f, -0.59278f, 0.717703f },
	{ 2.678392f, -1.164602f, 0.181288f },
	{ 2.685089f, -2.976679f, 0.859306f },
	{ 1.846132f, -3.420198f, 1.477155f },
	{ 0.458724f, -2.922955f, 2.252146f },
	{ 2.637328f, -1.180487f, 0.16533f },
	{ -0.623024f, -0.413125f, -1.612911f },
	{ -0.52459f, -1.338792f, -2.229045f },
	{ -0.343801f, -2.992818f, -2.354983f },
	{ -0.600527f, -4.360391f, -1.601004f },
	{ -1.478011f, -0.40738f, -2.042868f },
	{ -2.065699f, -1.482285f, -2.575382f },
	{ 0.874736f, -0.234763f, -0.973015f },
	{ 1.255654f, -1.025558f, -1.427473f },
	{ 1.968202f, -4.206935f, -1.209475f },
	{ -4.310822f, 3.097795f, -3.899598f },
	{ -6.321402f, 6.967659f, -3.776378f },
	{ -3.198362f, -4.673795f, -0.821422f },
	{ 1.335547f, -2.384223f, -2.049877f },
	{ 1.056584f, -1.421751f, -1.84249f },
	{ 2.114599f, -2.658328f, -1.78921f },
	{ 2.588626f, -2.489138f, -1.22385f },
	{ -1.176001f, -7.561704f, -0.9008f },
	{ -2.775634f, -6.794944f, -0.576883f },
	{ -2.457292f, -3.811991f, -1.934313f },
	{ -2.447979f, -3.112021f, -2.349352f },
	{ -3.048981f, -2.097169f, -2.592399f },
	{ -3.873211f, -3.1694f, -0.640393f },
	{ -5.683594f, 2.253995f, -4.34108f },
	{ -4.800952f, 0.372591f, -3.783766f },
	{ -6.048797f, -0.350875f, -2.62324f },
	{ -5.584178f, 0.143979f, -1.822717f },
	{ -3.070057f, 1.567532f, -3.264789f },
	{ -3.325857f, 1.369764f, -1.80564f },
	{ 1.988933f, -0.960647f, -0.928718f },
	{ 3.072813f, -1.765275f, -0.482751f },
	{ 2.703713f, -2.683497f, -1.275575f },
	{ 2.076274f, -2.984492f, -1.991656f },
	{ 0.892634f, -2.736718f, -2.434083f },
	{ 3.027159f, -1.450919f, -0.24702f },
	{ 1.968699f, -0.59278f, -0.717703f },
	{ 2.678392f, -1.164602f, -0.181288f },
	{ 2.685089f, -2.976679f, -0.859306f },
	{ 1.846132f, -3.420198f, -1.477155f },
	{ 0.458724f, -2.922955f, -2.252146f },
	{ 2.637328f, -1.180487f, -0.16533f },
	{ 1.072928f, -0.516492f, 1.256099f },
	{ 3.331341f, -2.184908f, 0 },
	{ -0.670618f, 0.093948f, 0 },
	{ 1.974415f, -5.322865f, 0 },
	{ -2.16608f, 0.302394f, 0 },
	{ -4.221111f, -0.790615f, 0 },
	{ -1.423674f, -7.831857f, 0 },
	{ 1.18847f, -0.096568f, 0 },
	{ 3.220152f, -3.282301f, 0 },
	{ 2.397541f, -0.739082f, 0 },
	{ 0.068545f, -7.858367f, 0 },
	{ 1.072928f, -0.516492f, -1.256099f },
	{ 2.7546f, -4.221703f, 0 },
	{ 1.874252f, -0.341533f, 0 },
	{ 0.241492f, -0.683992f, -1.719882f },
	{ 0.24102f, -0.683578f, 1.772942f },
	{ -6.266627f, 6.3012f, 4.439338f },
	{ -6.9188f, 5.877109f, 3.736947f },
	{ -6.615783f, 6.161217f, 3.252441f },
	{ -5.538189f, 6.775338f, 4.12523f },
	{ -5.647995f, 6.637291f, 3.242106f },
	{ -5.647995f, 6.637291f, -3.242106f },
	{ -6.615783f, 6.161217f, -3.252441f },
	{ -6.918799f, 5.877108f, -3.736947f },
	{ -5.538189f, 6.775338f, -4.12523f },
	{ -6.266627f, 6.3012f, -4.439338f },
	{ -2.152548f, -4.518857f, -1.561484f },
	{ -2.152548f, -4.518857f, 1.561484f },
	{ 1.698924f, 0.704851f, 1.766746f },
	{ 1.698924f, 0.704851f, -1.766746f },
	{ -5.683594f, 2.253995f, 4.34108f },
	{ -6.776491f, 1.631663f, 3.353856f },
	{ -4.310822f, 3.097795f, 3.899598f },
	{ -6.320566f, 2.052376f, 2.672875f },
	{ -4.515452f, 2.909715f, 2.658346f },
	{ -6.320566f, 2.052376f, -2.672875f },
	{ -4.515452f, 2.909715f, -2.658346f },
	{ -5.320427f, 4.820831f, -3.058936f },
	{ -6.790717f, 4.10699f, -3.072051f },
	{ -5.153703f, 4.996761f, -4.179555f },
	{ -7.195455f, 3.72765f, -3.686851f },
	{ -6.267529f, 4.290971f, -4.578131f },
	{ -6.267529f, 4.29097f, 4.578131f },
	{ -7.195455f, 3.727651f, 3.686851f },
	{ -5.153703f, 4.996761f, 4.179555f },
	{ -6.790717f, 4.10699f, 3.072051f },
	{ -5.320427f, 4.820831f, 3.058936f },
	{ 1.156365f, -0.632288f, 1.916462f },
	{ 0.854347f, -0.641962f, 2.36335f },
	{ 0.365778f, -0.590809f, 2.099213f },
	{ 0.854347f, -0.641962f, -2.36335f },
	{ 1.156365f, -0.632288f, -1.916462f },
	{ 0.365778f, -0.590809f, -2.099213f },
	{ 2.246087f, -1.537306f, 1.793021f },
	{ 2.534435f, -1.31808f, 0.642658f },
	{ 2.246087f, -1.537306f, -1.793021f },
	{ 2.534435f, -1.31808f, -0.642658f },
	{ 2.675961f, -2.161743f, 1.554878f },
	{ 2.642362f, -1.435689f, 1.125776f },
	{ 2.30415f, -1.21408f, 1.403095f },
	{ 1.849525f, -1.254325f, 1.787887f },
	{ 1.657051f, -1.499965f, 2.004151f },
	{ 1.870513f, -2.054002f, 2.129669f },
	{ 2.382065f, -2.266641f, 1.845637f },
	{ 1.657051f, -1.499965f, -2.004151f },
	{ 1.849525f, -1.254325f, -1.787887f },
	{ 2.30415f, -1.21408f, -1.403095f },
	{ 2.642362f, -1.435689f, -1.125776f },
	{ 2.675961f, -2.161743f, -1.554878f },
	{ 2.382065f, -2.266641f, -1.845637f },
	{ 1.870513f, -2.054002f, -2.129669f },
	{ 1.668272f, -2.565927f, 1.929896f },
	{ 1.139265f, -1.947639f, 2.073928f },
	{ 1.139265f, -1.947639f, -2.073928f },
	{ 1.668272f, -2.565927f, -1.929896f },
	{ 2.76465f, -1.928043f, -0.895403f },
	{ 2.76465f, -1.928043f, 0.895403f },
	{ 2.820187f, -1.80734f, 1.273311f },
	{ 2.820187f, -1.80734f, -1.273311f }
};

NJS_VECTOR normal_02865558[] = {
	{ 0.150955f, 0.801581f, 0.578516f },
	{ 0.108768f, 0.410261f, 0.905459f },
	{ 0.102294f, -0.291354f, 0.95113f },
	{ 0.133255f, -0.455168f, 0.880378f },
	{ 0.489421f, 0.726156f, 0.482871f },
	{ 0.252303f, -0.031342f, 0.967141f },
	{ 0.225634f, 0.892889f, 0.389664f },
	{ 0.275432f, 0.598934f, 0.751941f },
	{ 0.502594f, -0.441329f, 0.743389f },
	{ -0.941252f, -0.302213f, -0.150705f },
	{ -0.493332f, 0.869841f, 0.000284f },
	{ -0.796401f, -0.357922f, 0.48748f },
	{ 0.280623f, 0.005182f, 0.959804f },
	{ 0.171941f, 0.469008f, 0.866296f },
	{ 0.56567f, -0.004525f, 0.824619f },
	{ 0.806466f, 0.033277f, 0.590343f },
	{ 0.022636f, -0.570208f, 0.821189f },
	{ -0.685982f, -0.539474f, 0.488259f },
	{ -0.319562f, -0.466266f, 0.82491f },
	{ -0.269096f, -0.373495f, 0.887744f },
	{ -0.236099f, -0.505172f, 0.830095f },
	{ -0.806392f, -0.486068f, 0.336854f },
	{ -0.979408f, -0.201893f, 0 },
	{ 0.024166f, -0.338342f, 0.940713f },
	{ -0.832167f, -0.527273f, 0.171701f },
	{ -0.665427f, 0.222262f, -0.712606f },
	{ 0.737678f, 0.320786f, 0.594077f },
	{ 0.245763f, 0.799591f, -0.547955f },
	{ 0.555843f, 0.660088f, 0.505295f },
	{ 0.801662f, 0.242f, 0.546603f },
	{ 0.813495f, -0.00558f, 0.581546f },
	{ 0.542717f, -0.011259f, 0.83984f },
	{ 0.205392f, 0.212f, 0.955442f },
	{ 0.771096f, 0.580773f, 0.260986f },
	{ 0.585692f, 0.668557f, 0.458254f },
	{ 0.596208f, 0.774653f, 0.210828f },
	{ 0.821804f, -0.268068f, 0.502769f },
	{ 0.494864f, -0.500245f, 0.710538f },
	{ 0.167044f, -0.208836f, 0.963579f },
	{ 0.894546f, 0.343482f, 0.286019f },
	{ 0.166086f, 0.794022f, -0.58476f },
	{ 0.112458f, 0.42083f, -0.900142f },
	{ 0.102294f, -0.291354f, -0.95113f },
	{ 0.133255f, -0.455168f, -0.880378f },
	{ 0.489421f, 0.726156f, -0.482871f },
	{ 0.252303f, -0.031342f, -0.967141f },
	{ 0.224798f, 0.88923f, -0.398417f },
	{ 0.262947f, 0.609258f, -0.748107f },
	{ 0.502594f, -0.441329f, -0.743389f },
	{ 0.790843f, 0.339484f, -0.509232f },
	{ -0.493332f, 0.869841f, -0.000284f },
	{ -0.796401f, -0.357922f, -0.48748f },
	{ 0.280623f, 0.005182f, -0.959804f },
	{ 0.171941f, 0.469008f, -0.866296f },
	{ 0.56567f, -0.004525f, -0.824619f },
	{ 0.806466f, 0.033277f, -0.590343f },
	{ 0.022636f, -0.570208f, -0.821189f },
	{ -0.685982f, -0.539474f, -0.488259f },
	{ -0.319562f, -0.466266f, -0.82491f },
	{ -0.269096f, -0.373495f, -0.887744f },
	{ -0.236099f, -0.505172f, -0.830095f },
	{ -0.806392f, -0.486068f, -0.336854f },
	{ -0.101722f, -0.228479f, -0.96822f },
	{ 0.024166f, -0.338342f, -0.940713f },
	{ -0.832167f, -0.527273f, -0.171701f },
	{ -0.665427f, 0.222262f, 0.712606f },
	{ 0.737678f, 0.320786f, -0.594077f },
	{ 0.245763f, 0.799591f, 0.547955f },
	{ 0.555843f, 0.660088f, -0.505295f },
	{ 0.801662f, 0.242f, -0.546603f },
	{ 0.813495f, -0.00558f, -0.581546f },
	{ 0.542717f, -0.011259f, -0.83984f },
	{ 0.205392f, 0.212f, -0.955442f },
	{ 0.771096f, 0.580773f, -0.260986f },
	{ 0.585692f, 0.668557f, -0.458254f },
	{ 0.596208f, 0.774653f, -0.210828f },
	{ 0.821804f, -0.268068f, -0.502769f },
	{ 0.494864f, -0.500245f, -0.710538f },
	{ 0.167044f, -0.208836f, -0.963579f },
	{ 0.894546f, 0.343482f, -0.286019f },
	{ 0.405954f, 0.583309f, 0.703528f },
	{ 0.994837f, 0.101484f, 0 },
	{ 0.104051f, 0.994572f, 0 },
	{ 0.691112f, -0.722748f, 0 },
	{ 0.192586f, 0.98128f, 0 },
	{ -0.713675f, 0.700477f, 0 },
	{ -0.340692f, -0.940175f, 0 },
	{ 0.219966f, 0.975508f, 0 },
	{ 0.953517f, -0.301338f, 0 },
	{ 0.754246f, 0.656592f, 0 },
	{ 0.334805f, -0.942288f, 0 },
	{ 0.392724f, 0.58185f, -0.712192f },
	{ 0.858169f, -0.513368f, 0 },
	{ 0.441572f, 0.897226f, 0 },
	{ 0.240629f, 0.576699f, -0.780715f },
	{ 0.247407f, 0.575062f, 0.779804f },
	{ -0.399397f, 0.376057f, 0.8361f },
	{ -0.943477f, 0.309599f, 0.118316f },
	{ -0.597966f, 0.368491f, -0.711794f },
	{ 0.540489f, 0.693963f, 0.475696f },
	{ 0.317671f, 0.624124f, -0.713831f },
	{ 0.317671f, 0.624124f, 0.713831f },
	{ -0.597967f, 0.368491f, 0.711793f },
	{ -0.943477f, 0.309599f, -0.118316f },
	{ 0.540489f, 0.693963f, -0.475696f },
	{ -0.399397f, 0.376057f, -0.8361f },
	{ -0.265103f, -0.360909f, -0.894128f },
	{ -0.265103f, -0.360909f, 0.894128f },
	{ 0.474744f, 0.572502f, 0.668476f },
	{ 0.474744f, 0.572502f, -0.668476f },
	{ -0.101722f, -0.228479f, 0.96822f },
	{ -0.941252f, -0.302213f, 0.150705f },
	{ 0.790843f, 0.339484f, 0.509232f },
	{ -0.534261f, 0.097299f, -0.839701f },
	{ 0.4217f, 0.514568f, -0.746585f },
	{ -0.534261f, 0.097299f, 0.839701f },
	{ 0.4217f, 0.514568f, 0.746585f },
	{ 0.564808f, 0.290132f, 0.772539f },
	{ -0.513116f, 0.087307f, 0.853867f },
	{ 0.832692f, 0.227992f, -0.504622f },
	{ -0.990983f, -0.043784f, -0.126633f },
	{ -0.193923f, -0.032645f, -0.980473f },
	{ -0.193923f, -0.032645f, 0.980473f },
	{ -0.990983f, -0.043784f, 0.126633f },
	{ 0.832692f, 0.227992f, 0.504622f },
	{ -0.513116f, 0.087307f, -0.853867f },
	{ 0.564807f, 0.290132f, -0.772539f },
	{ 0.787037f, -0.219241f, -0.576634f },
	{ 0.366191f, 0.106969f, 0.924371f },
	{ -0.672667f, 0.696956f, -0.248538f },
	{ 0.366191f, 0.106969f, -0.924371f },
	{ 0.787037f, -0.219241f, 0.576634f },
	{ -0.672667f, 0.696956f, 0.248538f },
	{ 0.575312f, 0.392296f, 0.717719f },
	{ 0.795176f, 0.511925f, 0.325005f },
	{ 0.575312f, 0.392296f, -0.717719f },
	{ 0.795176f, 0.511925f, -0.325005f },
	{ 0.845057f, -0.129054f, 0.518867f },
	{ 0.779019f, 0.575576f, 0.248679f },
	{ 0.507025f, 0.760266f, 0.406104f },
	{ 0.221809f, 0.732277f, 0.643872f },
	{ 0.090446f, 0.474525f, 0.875583f },
	{ 0.17305f, -0.015123f, 0.984797f },
	{ 0.597204f, -0.155201f, 0.786931f },
	{ 0.090446f, 0.474525f, -0.875583f },
	{ 0.221809f, 0.732277f, -0.643872f },
	{ 0.507025f, 0.760266f, -0.406104f },
	{ 0.779019f, 0.575577f, -0.248679f },
	{ 0.845057f, -0.129054f, -0.518868f },
	{ 0.597204f, -0.155201f, -0.786931f },
	{ 0.17305f, -0.015123f, -0.984797f },
	{ 0.355255f, 0.119608f, 0.927086f },
	{ 0.071298f, 0.203677f, 0.976439f },
	{ 0.071298f, 0.203677f, -0.976439f },
	{ 0.355255f, 0.119608f, -0.927086f },
	{ 0.92376f, 0.183857f, -0.335953f },
	{ 0.92376f, 0.183857f, 0.335953f },
	{ 0.926231f, 0.224793f, 0.302596f },
	{ 0.926231f, 0.224793f, -0.302596f }
};

NJS_MODEL_SADX attach_02865CCC = { vertex_02864DE0, normal_02865558, LengthOfArray(vertex_02864DE0), meshlist_02863218, matlist_02861D30, LengthOfArray(meshlist_02863218), LengthOfArray(matlist_02861D30),{ -1.932057f, -0.445354f, 0 }, 8.28531f, NULL };

NJS_OBJECT object_02865CF8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_02865CCC, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02861CFC, NULL };

NJS_OBJECT object_02865D2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.368511f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02865CF8 };

NJS_OBJECT object_02865D60 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFF8959, 1, 1, 1, &object_02865D2C, NULL };

NJS_OBJECT object_02865D94 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.02769f, 3.874684f, 0, 0, 0, 0xFFFFFF8E, 1, 1, 1, &object_02865D60, &object_02860748 };

NJS_OBJECT object_02865DC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 7.440057f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02865D94 };

NJS_OBJECT object_02865DFC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0xFFFFFCF4, 1, 1, 1, &object_02865DC8, NULL };

NJS_OBJECT object_02865E30 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.012189f, 0.975989f, 0, 0, 0, 0xFFFFFF7E, 1, 1, 1, &object_02865DFC, &object_0285C89C };

NJS_MATERIAL matlist_02865E64[] = {
	{ { 0x7FB2B2B2 },{ 0xFFFFFFFF }, 6, CHAOS0TexName_c2tx_mizu0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02865E78[] = {
	6, 1, 0
};

Sint16 poly_02865E80[] = {
	33, 32, 4
};

Sint16 poly_02865E88[] = {
	32, 8, 9
};

Sint16 poly_02865E90[] = {
	11, 6, 0
};

Sint16 poly_02865E98[] = {
	16, 11, 0
};

Sint16 poly_02865EA0[] = {
	4, 31, 3
};

Sint16 poly_02865EA8[] = {
	21, 16, 0
};

Sint16 poly_02865EB0[] = {
	26, 21, 0
};

Sint16 poly_02865EB8[] = {
	1, 26, 0
};

Sint16 poly_02865EC0[] = {
	2, 34, 1
};

Sint16 poly_02865EC8[] = {
	34, 36, 1
};

Sint16 poly_02865ED0[] = {
	36, 34, 3
};

Sint16 poly_02865ED8[] = {
	2, 32, 33
};

Sint16 poly_02865EE0[] = {
	29, 28, 31
};

Sint16 poly_02865EE8[] = {
	31, 28, 27
};

Sint16 poly_02865EF0[] = {
	7, 8, 32
};

Sint16 poly_02865EF8[] = {
	35, 3, 34
};

Sint16 poly_02865F00[] = {
	35, 34, 33
};

Sint16 poly_02865F08[] = {
	3, 31, 36
};

Sint16 poly_02865F10[] = {
	33, 34, 2
};

Sint16 poly_02865F18[] = {
	31, 4, 29
};

Sint16 poly_02865F20[] = {
	9, 4, 32
};

Sint16 poly_02865F28[] = {
	31, 27, 36
};

Sint16 poly_02865F30[] = {
	3, 35, 4
};

Sint16 poly_02865F38[] = {
	4, 35, 33
};

Sint16 poly_02865F40[] = {
	2, 7, 32
};

Sint16 poly_02865F48[] = {
	1, 6, 2, 7
};

Sint16 poly_02865F50[] = {
	4, 9, 5, 10
};

Sint16 poly_02865F58[] = {
	29, 4, 30, 5
};

Sint16 poly_02865F60[] = {
	6, 11, 7, 12
};

Sint16 poly_02865F68[] = {
	7, 12, 8, 13
};

Sint16 poly_02865F70[] = {
	8, 13, 9, 14
};

Sint16 poly_02865F78[] = {
	9, 14, 10, 15
};

Sint16 poly_02865F80[] = {
	11, 16, 12, 17
};

Sint16 poly_02865F88[] = {
	12, 17, 13, 18
};

Sint16 poly_02865F90[] = {
	13, 18, 14, 19
};

Sint16 poly_02865F98[] = {
	14, 19, 15, 20
};

Sint16 poly_02865FA0[] = {
	16, 21, 17, 22
};

Sint16 poly_02865FA8[] = {
	17, 22, 18, 23
};

Sint16 poly_02865FB0[] = {
	18, 23, 19, 24
};

Sint16 poly_02865FB8[] = {
	19, 24, 20, 25
};

Sint16 poly_02865FC0[] = {
	36, 27, 1, 26
};

Sint16 poly_02865FC8[] = {
	21, 26, 22, 27
};

Sint16 poly_02865FD0[] = {
	22, 27, 23, 28
};

Sint16 poly_02865FD8[] = {
	23, 28, 24, 29
};

Sint16 poly_02865FE0[] = {
	24, 29, 25, 30
};

NJS_TEX uv_02865FE8[] = {
	{ 55, 196 },
	{ 127, 196 },
	{ 127, 210 }
};

NJS_TEX uv_02865FF4[] = {
	{ 81, 188 },
	{ 71, 99 },
	{ 127, 43 }
};

NJS_TEX uv_02866000[] = {
	{ 71, 99 },
	{ 0, 99 },
	{ 8, 43 }
};

NJS_TEX uv_0286600C[] = {
	{ 55, 195 },
	{ 55, 196 },
	{ 127, 210 }
};

NJS_TEX uv_02866018[] = {
	{ 127, 194 },
	{ 55, 195 },
	{ 127, 210 }
};

NJS_TEX uv_02866024[] = {
	{ 127, 43 },
	{ 183, 99 },
	{ 173, 188 }
};

NJS_TEX uv_02866030[] = {
	{ 199, 195 },
	{ 127, 194 },
	{ 127, 210 }
};

NJS_TEX uv_0286603C[] = {
	{ 199, 196 },
	{ 199, 195 },
	{ 127, 210 }
};

NJS_TEX uv_02866048[] = {
	{ 127, 196 },
	{ 199, 196 },
	{ 127, 210 }
};

NJS_TEX uv_02866054[] = {
	{ 68, 168 },
	{ 127, 255 },
	{ 127, 196 }
};

NJS_TEX uv_02866060[] = {
	{ 127, 255 },
	{ 186, 168 },
	{ 127, 196 }
};

NJS_TEX uv_0286606C[] = {
	{ 186, 168 },
	{ 127, 255 },
	{ 173, 188 }
};

NJS_TEX uv_02866078[] = {
	{ 68, 168 },
	{ 71, 99 },
	{ 81, 188 }
};

NJS_TEX uv_02866084[] = {
	{ 246, 43 },
	{ 254, 99 },
	{ 183, 99 }
};

NJS_TEX uv_02866090[] = {
	{ 183, 99 },
	{ 254, 99 },
	{ 246, 155 }
};

NJS_TEX uv_0286609C[] = {
	{ 8, 155 },
	{ 0, 99 },
	{ 71, 99 }
};

NJS_TEX uv_028660A8[] = {
	{ 127, 130 },
	{ 173, 188 },
	{ 127, 255 }
};

NJS_TEX uv_028660B4[] = {
	{ 127, 130 },
	{ 127, 255 },
	{ 81, 188 }
};

NJS_TEX uv_028660C0[] = {
	{ 173, 188 },
	{ 183, 99 },
	{ 186, 168 }
};

NJS_TEX uv_028660CC[] = {
	{ 81, 188 },
	{ 127, 255 },
	{ 68, 168 }
};

NJS_TEX uv_028660D8[] = {
	{ 183, 99 },
	{ 127, 43 },
	{ 246, 43 }
};

NJS_TEX uv_028660E4[] = {
	{ 8, 43 },
	{ 127, 43 },
	{ 71, 99 }
};

NJS_TEX uv_028660F0[] = {
	{ 183, 99 },
	{ 246, 155 },
	{ 186, 168 }
};

NJS_TEX uv_028660FC[] = {
	{ 173, 188 },
	{ 127, 130 },
	{ 127, 43 }
};

NJS_TEX uv_02866108[] = {
	{ 127, 43 },
	{ 127, 130 },
	{ 81, 188 }
};

NJS_TEX uv_02866114[] = {
	{ 68, 168 },
	{ 8, 155 },
	{ 71, 99 }
};

NJS_TEX uv_02866120[] = {
	{ 127, 196 },
	{ 55, 196 },
	{ 68, 168 },
	{ 8, 155 }
};

NJS_TEX uv_02866130[] = {
	{ 127, 43 },
	{ 8, 43 },
	{ 127, 2 },
	{ 55, 1 }
};

NJS_TEX uv_02866140[] = {
	{ 246, 43 },
	{ 127, 43 },
	{ 199, 1 },
	{ 127, 2 }
};

NJS_TEX uv_02866150[] = {
	{ 55, 196 },
	{ 55, 195 },
	{ 8, 155 },
	{ 8, 153 }
};

NJS_TEX uv_02866160[] = {
	{ 8, 155 },
	{ 8, 153 },
	{ 0, 99 },
	{ 0, 97 }
};

NJS_TEX uv_02866170[] = {
	{ 0, 99 },
	{ 0, 97 },
	{ 8, 43 },
	{ 8, 41 }
};

NJS_TEX uv_02866180[] = {
	{ 8, 43 },
	{ 8, 41 },
	{ 55, 1 },
	{ 55, 0 }
};

NJS_TEX uv_02866190[] = {
	{ 55, 195 },
	{ 127, 194 },
	{ 8, 153 },
	{ 127, 153 }
};

NJS_TEX uv_028661A0[] = {
	{ 8, 153 },
	{ 127, 153 },
	{ 0, 97 },
	{ 127, 96 }
};

NJS_TEX uv_028661B0[] = {
	{ 0, 97 },
	{ 127, 96 },
	{ 8, 41 },
	{ 127, 40 }
};

NJS_TEX uv_028661C0[] = {
	{ 8, 41 },
	{ 127, 40 },
	{ 55, 0 },
	{ 127, 0 }
};

NJS_TEX uv_028661D0[] = {
	{ 127, 194 },
	{ 199, 195 },
	{ 127, 153 },
	{ 246, 153 }
};

NJS_TEX uv_028661E0[] = {
	{ 127, 153 },
	{ 246, 153 },
	{ 127, 96 },
	{ 255, 97 }
};

NJS_TEX uv_028661F0[] = {
	{ 127, 96 },
	{ 255, 97 },
	{ 127, 40 },
	{ 246, 41 }
};

NJS_TEX uv_02866200[] = {
	{ 127, 40 },
	{ 246, 41 },
	{ 127, 0 },
	{ 199, 0 }
};

NJS_TEX uv_02866210[] = {
	{ 186, 168 },
	{ 246, 155 },
	{ 127, 196 },
	{ 199, 196 }
};

NJS_TEX uv_02866220[] = {
	{ 199, 195 },
	{ 199, 196 },
	{ 246, 153 },
	{ 246, 155 }
};

NJS_TEX uv_02866230[] = {
	{ 246, 153 },
	{ 246, 155 },
	{ 255, 97 },
	{ 254, 99 }
};

NJS_TEX uv_02866240[] = {
	{ 255, 97 },
	{ 254, 99 },
	{ 246, 41 },
	{ 246, 43 }
};

NJS_TEX uv_02866250[] = {
	{ 246, 41 },
	{ 246, 43 },
	{ 199, 0 },
	{ 199, 1 }
};

NJS_MESHSET_SADX meshlist_02866260[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_02865E78, NULL, NULL, NULL, uv_02865FE8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865E80, NULL, NULL, NULL, uv_02865FF4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865E88, NULL, NULL, NULL, uv_02866000, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865E90, NULL, NULL, NULL, uv_0286600C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865E98, NULL, NULL, NULL, uv_02866018, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EA0, NULL, NULL, NULL, uv_02866024, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EA8, NULL, NULL, NULL, uv_02866030, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EB0, NULL, NULL, NULL, uv_0286603C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EB8, NULL, NULL, NULL, uv_02866048, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EC0, NULL, NULL, NULL, uv_02866054, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EC8, NULL, NULL, NULL, uv_02866060, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865ED0, NULL, NULL, NULL, uv_0286606C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865ED8, NULL, NULL, NULL, uv_02866078, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EE0, NULL, NULL, NULL, uv_02866084, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EE8, NULL, NULL, NULL, uv_02866090, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EF0, NULL, NULL, NULL, uv_0286609C, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865EF8, NULL, NULL, NULL, uv_028660A8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865F00, NULL, NULL, NULL, uv_028660B4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865F08, NULL, NULL, NULL, uv_028660C0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865F10, NULL, NULL, NULL, uv_028660CC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865F18, NULL, NULL, NULL, uv_028660D8, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865F20, NULL, NULL, NULL, uv_028660E4, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865F28, NULL, NULL, NULL, uv_028660F0, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865F30, NULL, NULL, NULL, uv_028660FC, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865F38, NULL, NULL, NULL, uv_02866108, NULL },
	{ NJD_MESHSET_3 | 0, 1, poly_02865F40, NULL, NULL, NULL, uv_02866114, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F48, NULL, NULL, NULL, uv_02866120, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F50, NULL, NULL, NULL, uv_02866130, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F58, NULL, NULL, NULL, uv_02866140, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F60, NULL, NULL, NULL, uv_02866150, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F68, NULL, NULL, NULL, uv_02866160, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F70, NULL, NULL, NULL, uv_02866170, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F78, NULL, NULL, NULL, uv_02866180, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F80, NULL, NULL, NULL, uv_02866190, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F88, NULL, NULL, NULL, uv_028661A0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F90, NULL, NULL, NULL, uv_028661B0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865F98, NULL, NULL, NULL, uv_028661C0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865FA0, NULL, NULL, NULL, uv_028661D0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865FA8, NULL, NULL, NULL, uv_028661E0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865FB0, NULL, NULL, NULL, uv_028661F0, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865FB8, NULL, NULL, NULL, uv_02866200, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865FC0, NULL, NULL, NULL, uv_02866210, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865FC8, NULL, NULL, NULL, uv_02866220, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865FD0, NULL, NULL, NULL, uv_02866230, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865FD8, NULL, NULL, NULL, uv_02866240, NULL },
	{ NJD_MESHSET_4 | 0, 1, poly_02865FE0, NULL, NULL, NULL, uv_02866250, NULL }
};

NJS_VECTOR vertex_02866768[] = {
	{ -0.01915f, -1.113158f, 0 },
	{ 0.837708f, -1.071358f, 0 },
	{ 1.093556f, -0.703738f, -0.971198f },
	{ 2.72062f, -1.429545f, 0.855577f },
	{ 1.606619f, 0.526366f, 0 },
	{ 1.248466f, 0.938826f, 0 },
	{ 0.411754f, -0.969856f, -1.180466f },
	{ 0.886458f, -0.573557f, -1.845276f },
	{ 0.94033f, -0.019878f, -1.984854f },
	{ 0.900735f, 0.534936f, -1.845275f },
	{ 0.725096f, 0.944034f, -1.510996f },
	{ -0.446229f, -0.95944f, -1.180466f },
	{ -0.717896f, -0.550342f, -1.845275f },
	{ -0.757491f, 0.004472f, -1.984854f },
	{ -0.703618f, 0.558152f, -1.845275f },
	{ -0.649041f, 0.964779f, -1.510996f },
	{ -0.875221f, -0.954232f, 0 },
	{ -1.423779f, -0.541772f, 0 },
	{ -1.510108f, 0.01361f, 0.000001f },
	{ -1.409502f, 0.566721f, 0 },
	{ -1.172411f, 0.969988f, 0 },
	{ -0.446229f, -0.95944f, 1.180466f },
	{ -0.717895f, -0.550342f, 1.845276f },
	{ -0.75749f, 0.004472f, 1.984854f },
	{ -0.703618f, 0.558152f, 1.845276f },
	{ -0.64904f, 0.964779f, 1.510997f },
	{ 0.411754f, -0.969856f, 1.180465f },
	{ 0.886459f, -0.573557f, 1.845275f },
	{ 0.940331f, -0.019878f, 1.984854f },
	{ 0.900736f, 0.534936f, 1.845275f },
	{ 0.725096f, 0.944034f, 1.510996f },
	{ 1.316639f, -0.024446f, 1.139933f },
	{ 1.316639f, -0.024446f, -1.139933f },
	{ 2.72062f, -1.429545f, -0.855577f },
	{ 2.64714f, -2.080471f, 0 },
	{ 3.1896f, -0.867286f, 0 },
	{ 1.093557f, -0.703738f, 0.971197f }
};

NJS_VECTOR normal_02866928[] = {
	{ -0.049068f, -0.998795f, 0 },
	{ 0.008265f, -0.999966f, 0 },
	{ 0.13775f, -0.765072f, -0.629039f },
	{ 0.513931f, -0.066196f, 0.855274f },
	{ 0.818731f, 0.574171f, -0.002581f },
	{ 0.782747f, 0.62227f, -0.009305f },
	{ 0.113939f, -0.960967f, -0.252113f },
	{ 0.533768f, -0.615034f, -0.580366f },
	{ 0.548577f, -0.007079f, -0.83607f },
	{ 0.615148f, 0.437005f, -0.656215f },
	{ 0.441581f, 0.673321f, -0.592996f },
	{ -0.20818f, -0.947516f, -0.242641f },
	{ -0.467736f, -0.619396f, -0.630534f },
	{ -0.572682f, 0.007339f, -0.819745f },
	{ -0.519742f, 0.459401f, -0.720291f },
	{ -0.463876f, 0.638117f, -0.614513f },
	{ -0.405468f, -0.914108f, 0.001778f },
	{ -0.855154f, -0.518371f, 0.00175f },
	{ -0.999917f, 0.01286f, -0.000327f },
	{ -0.946155f, 0.323684f, 0.004316f },
	{ -0.890706f, 0.454494f, 0.008806f },
	{ -0.2134f, -0.945914f, 0.24435f },
	{ -0.471696f, -0.616716f, 0.63021f },
	{ -0.572195f, 0.007386f, 0.820084f },
	{ -0.534297f, 0.43246f, 0.726296f },
	{ -0.499333f, 0.58969f, 0.634769f },
	{ 0.11391f, -0.961149f, 0.251429f },
	{ 0.533835f, -0.615458f, 0.579855f },
	{ 0.548578f, -0.007026f, 0.83607f },
	{ 0.605275f, 0.45461f, 0.653431f },
	{ 0.410749f, 0.705805f, 0.577169f },
	{ 0.830393f, 0.040647f, 0.555693f },
	{ 0.830393f, 0.040647f, -0.555694f },
	{ 0.513931f, -0.066196f, -0.855274f },
	{ 0.079493f, -0.996835f, 0 },
	{ 0.992382f, 0.123197f, 0 },
	{ 0.13775f, -0.765072f, 0.629039f }
};

NJS_MODEL_SADX attach_02866AE4 = { vertex_02866768, normal_02866928, LengthOfArray(vertex_02866768), meshlist_02866260, matlist_02865E64, LengthOfArray(meshlist_02866260), LengthOfArray(matlist_02865E64),{ 0.839746f, -0.555241f, 0 }, 3.085677f, NULL };

NJS_OBJECT object_02866B10 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02866AE4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02865E30 };

NJS_OBJECT object_02866B44 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 3.252544f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_02866B10 };

NJS_OBJECT object_02866B78 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x148, 1, 1, 1, &object_02866B44, NULL };

NJS_OBJECT object_02866BAC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_02866B78, NULL };

#pragma warning(pop)
