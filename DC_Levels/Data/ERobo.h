enum EGGROBTexName
{
	EGGROBTexName_ertx_black0,
	EGGROBTexName_ertx_en,
	EGGROBTexName_ertx_eyes,
	EGGROBTexName_ertx_green1,
	EGGROBTexName_ertx_green3,
	EGGROBTexName_ertx_green4,
	EGGROBTexName_ertx_green5,
	EGGROBTexName_ertx_green7,
	EGGROBTexName_ertx_head,
	EGGROBTexName_ertx_head3,
	EGGROBTexName_ertx_iat0,
	EGGROBTexName_ertx_kosi0,
	EGGROBTexName_ertx_metal0,
	EGGROBTexName_ertx_paipe,
	EGGROBTexName_ertx_red0,
	EGGROBTexName_ertx_red1,
	EGGROBTexName_ertx_right0,
	EGGROBTexName_ertx_right1,
	EGGROBTexName_ertx_right2,
	EGGROBTexName_ertx_te0,
	EGGROBTexName_ertx_yellow0,
	EGGROBTexName_zero_shock01,
	EGGROBTexName_zero_shock02,
	EGGROBTexName_er_hatena0,
	EGGROBTexName_er_hatena1,
	EGGROBTexName_er_hatena2,
	EGGROBTexName_er_hirame0,
	EGGROBTexName_er_hirame1,
	EGGROBTexName_er_hirame2
};

NJS_OBJECT object_00589618 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -8.0483f, 6.498f, 1.8919f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0058964C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -15.56516f, -2.534294f, 2.153728f, 0, 0, 0, 1, 1, 1, &object_00589618, NULL };

NJS_OBJECT object_00589680 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -10.35412f, 11.06245f, -13.20359f, 0, 0, 0x7FFD, 1, 1, 1, &object_0058964C, NULL };

NJS_OBJECT object_005896B4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, -8.048277f, 6.498003f, -1.891941f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_005896E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -15.5652f, -2.5343f, -2.1537f, 0, 0, 0, 1, 1, 1, &object_005896B4, NULL };

NJS_OBJECT object_0058971C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, -10.3541f, 11.0624f, 13.20361f, 0, 0, 0x7FFD, 1, 1, 1, &object_005896E8, &object_00589680 };

NJS_MATERIAL matlist_00589750[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_eyes, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00589778[] = {
	14, 5, 8, 7, 10, 9, 0, 11, 2, 1, 4, 3, 6, 5, 8
};

Sint16 poly_00589798[] = {
	3, 6, 4, 2,
	0x8000u | 5, 6, 8, 2, 10, 0
};

NJS_TEX uv_005897AC[] = {
	{ 0, 253 },
	{ 63, 4 },
	{ 61, 253 },
	{ 0, 4 },
	{ 0, 253 },
	{ 63, 4 },
	{ 61, 253 },
	{ 0, 4 },
	{ 0, 253 },
	{ 63, 4 },
	{ 61, 253 },
	{ 0, 4 },
	{ 0, 253 },
	{ 63, 4 }
};

NJS_TEX uv_005897E4[] = {
	{ 215, 184 },
	{ 215, 74 },
	{ 122, 24 },
	{ 215, 184 },
	{ 123, 237 },
	{ 122, 24 },
	{ 31, 185 },
	{ 32, 73 }
};

NJS_MESHSET_SADX meshlist_00589804[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00589778, NULL, NULL, NULL, uv_005897AC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00589798, NULL, NULL, NULL, uv_005897E4, NULL }
};

NJS_VECTOR vertex_00589840[] = {
	{ 1.63621f, -0.351593f, -0.289757f },
	{ -0.759392f, -0.70272f, -0.276396f },
	{ 1.430147f, -0.702952f, 0.276396f },
	{ -0.965455f, -0.351359f, 0.289757f },
	{ 1.224084f, -0.351592f, 0.842549f },
	{ -0.965455f, 0.351361f, 0.289757f },
	{ 1.224084f, 0.351128f, 0.842549f },
	{ -0.759392f, 0.70272f, -0.276397f },
	{ 1.430147f, 0.702487f, 0.276395f },
	{ -0.553329f, 0.35136f, -0.84255f },
	{ 1.63621f, 0.351127f, -0.289758f },
	{ -0.553329f, -0.35136f, -0.842549f }
};

NJS_VECTOR normal_005898D0[] = {
	{ 0.786267f, -0.396008f, -0.474302f },
	{ -0.008121f, -0.999463f, 0.031744f },
	{ 0.580155f, -0.793541f, 0.183612f },
	{ -0.214426f, -0.482737f, 0.849109f },
	{ 0.379221f, -0.392597f, 0.837889f },
	{ -0.214323f, 0.482782f, 0.84911f },
	{ 0.379261f, 0.392542f, 0.837897f },
	{ -0.007925f, 0.999462f, 0.031811f },
	{ 0.580228f, 0.793481f, 0.183637f },
	{ 0.210522f, 0.51062f, -0.833635f },
	{ 0.786301f, 0.395955f, -0.474289f },
	{ 0.210428f, -0.510567f, -0.833692f }
};

NJS_MODEL_SADX attach_00589960 = { vertex_00589840, normal_005898D0, LengthOfArray<Sint32>(vertex_00589840), meshlist_00589804, matlist_00589750, LengthOfArray<Uint16>(meshlist_00589804), LengthOfArray<Uint16>(matlist_00589750),{ 0.335378f, -0.000116f, 0 }, 1.549856f, NULL };

NJS_OBJECT object_0058998C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00589960, 1.8f, -1.5f, 1.018526f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_005899C0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_eyes, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_005899E8[] = {
	14, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7
};

Sint16 poly_00589A08[] = {
	0x8000u | 5, 10, 8, 2, 6, 4,
	3, 2, 10, 0
};

NJS_TEX uv_00589A1C[] = {
	{ 0, 4 },
	{ 61, 253 },
	{ 63, 4 },
	{ 0, 253 },
	{ 0, 4 },
	{ 61, 253 },
	{ 63, 4 },
	{ 0, 253 },
	{ 0, 4 },
	{ 61, 253 },
	{ 63, 4 },
	{ 0, 253 },
	{ 0, 4 },
	{ 61, 253 }
};

NJS_TEX uv_00589A54[] = {
	{ 31, 185 },
	{ 123, 237 },
	{ 122, 24 },
	{ 215, 184 },
	{ 215, 74 },
	{ 122, 24 },
	{ 31, 185 },
	{ 32, 73 }
};

NJS_MESHSET_SADX meshlist_00589A74[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_005899E8, NULL, NULL, NULL, uv_00589A1C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00589A08, NULL, NULL, NULL, uv_00589A54, NULL }
};

NJS_VECTOR vertex_00589AB0[] = {
	{ 1.63621f, -0.351593f, 0.289757f },
	{ -0.759392f, -0.70272f, 0.276396f },
	{ 1.430147f, -0.702952f, -0.276396f },
	{ -0.965455f, -0.35136f, -0.289757f },
	{ 1.224084f, -0.351592f, -0.842549f },
	{ -0.965455f, 0.35136f, -0.289757f },
	{ 1.224084f, 0.351128f, -0.842549f },
	{ -0.759392f, 0.70272f, 0.276397f },
	{ 1.430147f, 0.702487f, -0.276395f },
	{ -0.553329f, 0.35136f, 0.84255f },
	{ 1.63621f, 0.351127f, 0.289758f },
	{ -0.553329f, -0.35136f, 0.842549f }
};

NJS_VECTOR normal_00589B40[] = {
	{ 0.786267f, -0.396008f, 0.474302f },
	{ -0.008121f, -0.999463f, -0.031744f },
	{ 0.580155f, -0.793541f, -0.183612f },
	{ -0.214426f, -0.482737f, -0.849109f },
	{ 0.379221f, -0.392597f, -0.837889f },
	{ -0.214323f, 0.482782f, -0.84911f },
	{ 0.379261f, 0.392542f, -0.837897f },
	{ -0.007925f, 0.999462f, -0.031811f },
	{ 0.580228f, 0.793481f, -0.183637f },
	{ 0.210522f, 0.51062f, 0.833635f },
	{ 0.786301f, 0.395955f, 0.474289f },
	{ 0.210428f, -0.510567f, 0.833692f }
};

NJS_MODEL_SADX attach_00589BD0 = { vertex_00589AB0, normal_00589B40, LengthOfArray<Sint32>(vertex_00589AB0), meshlist_00589A74, matlist_005899C0, LengthOfArray<Uint16>(meshlist_00589A74), LengthOfArray<Uint16>(matlist_005899C0),{ 0.335378f, -0.000116f, 0 }, 1.549856f, NULL };

NJS_OBJECT object_00589BFC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00589BD0, 1.8f, -1.5f, -1.018526f, 0, 0, 0, 1, 1, 1, NULL, &object_0058998C };

NJS_MATERIAL matlist_00589C30[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_metal0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00589C6C[] = {
	3, 4, 2, 0,
	3, 6, 4, 0,
	3, 8, 6, 0,
	3, 10, 8, 0,
	3, 2, 10, 0
};

Sint16 poly_00589C94[] = {
	4, 5, 3, 4, 2,
	4, 7, 5, 6, 4,
	4, 9, 7, 8, 6,
	4, 11, 9, 10, 8,
	4, 3, 11, 2, 10
};

Sint16 poly_00589CC8[] = {
	4, 7, 1, 5, 3,
	5, 7, 9, 1, 11, 3
};

NJS_TEX uv_00589CE0[] = {
	{ 39, 192 },
	{ 4, 193 },
	{ 20, 121 },
	{ 39, 192 },
	{ 4, 193 },
	{ 20, 121 },
	{ 39, 192 },
	{ 4, 193 },
	{ 20, 121 },
	{ 39, 192 },
	{ 4, 193 },
	{ 20, 121 },
	{ 39, 192 },
	{ 4, 193 },
	{ 20, 121 }
};

NJS_TEX uv_00589D20[] = {
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 254 }
};

NJS_TEX uv_00589D70[] = {
	{ 162, 158 },
	{ 215, 215 },
	{ 142, 230 },
	{ 194, 255 },
	{ 162, 158 },
	{ 226, 138 },
	{ 215, 215 },
	{ 247, 198 },
	{ 194, 255 }
};

NJS_MESHSET_SADX meshlist_00589D98[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00589C6C, NULL, NULL, NULL, uv_00589CE0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_00589C94, NULL, NULL, NULL, uv_00589D20, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00589CC8, NULL, NULL, NULL, uv_00589D70, NULL }
};

NJS_VECTOR vertex_00589DF0[] = {
	{ -5.991748f, 3.47959f, -4.000342f },
	{ 0.399297f, -0.209455f, 0.260115f },
	{ -5.821493f, 1.721301f, -3.407722f },
	{ -1.016198f, -1.052416f, -0.204371f },
	{ -4.732763f, 2.239905f, -4.591864f },
	{ 0.072534f, -0.533813f, -1.388514f },
	{ -4.155366f, 3.762573f, -4.139563f },
	{ 0.649932f, 0.988854f, -0.936211f },
	{ -4.887246f, 4.185029f, -2.675882f },
	{ -0.08195f, 1.411311f, 0.527469f },
	{ -5.91697f, 2.923454f, -2.223579f },
	{ -1.111674f, 0.149736f, 0.979771f }
};

NJS_VECTOR normal_00589E80[] = {
	{ -0.750042f, 0.43294f, -0.5f },
	{ 0.750042f, -0.43294f, 0.5f },
	{ -0.744582f, -0.640688f, -0.187393f },
	{ -0.142981f, -0.967665f, 0.207799f },
	{ -0.042504f, -0.306262f, -0.950998f },
	{ 0.545798f, -0.639575f, -0.54134f },
	{ 0.329837f, 0.675645f, -0.659327f },
	{ 0.911084f, 0.32373f, -0.255194f },
	{ -0.142124f, 0.94807f, 0.284542f },
	{ 0.448065f, 0.590994f, 0.670793f },
	{ -0.806152f, 0.134532f, 0.576213f },
	{ -0.203383f, -0.207132f, 0.956939f }
};

NJS_MODEL_SADX attach_00589F10 = { vertex_00589DF0, normal_00589E80, LengthOfArray<Sint32>(vertex_00589DF0), meshlist_00589D98, matlist_00589C30, LengthOfArray<Uint16>(meshlist_00589D98), LengthOfArray<Uint16>(matlist_00589C30),{ -2.670908f, 1.566307f, -1.806046f }, 4.3346f, NULL };

NJS_OBJECT object_00589F3C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00589F10, -2.963105f, -1.235971f, -2.280475f, 0, 0, 0, 1, 1, 1, NULL, &object_00589BFC };

NJS_MATERIAL matlist_00589F70[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_metal0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00589FAC[] = {
	3, 0, 2, 4,
	3, 0, 4, 6,
	3, 0, 6, 8,
	3, 0, 8, 10,
	3, 0, 10, 2
};

Sint16 poly_00589FD4[] = {
	4, 4, 2, 5, 3,
	4, 6, 4, 7, 5,
	4, 8, 6, 9, 7,
	4, 10, 8, 11, 9,
	4, 2, 10, 3, 11
};

Sint16 poly_0058A008[] = {
	4, 7, 5, 1, 3,
	0x8000u | 5, 7, 9, 1, 11, 3
};

NJS_TEX uv_0058A020[] = {
	{ 20, 121 },
	{ 4, 193 },
	{ 39, 192 },
	{ 20, 121 },
	{ 4, 193 },
	{ 39, 192 },
	{ 20, 121 },
	{ 4, 193 },
	{ 39, 192 },
	{ 20, 121 },
	{ 4, 193 },
	{ 39, 192 },
	{ 20, 121 },
	{ 4, 193 },
	{ 39, 192 }
};

NJS_TEX uv_0058A060[] = {
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 254 },
	{ 250, 5 },
	{ 0, 5 }
};

NJS_TEX uv_0058A0B0[] = {
	{ 162, 158 },
	{ 142, 230 },
	{ 215, 215 },
	{ 194, 255 },
	{ 162, 158 },
	{ 226, 138 },
	{ 215, 215 },
	{ 247, 198 },
	{ 194, 255 }
};

NJS_MESHSET_SADX meshlist_0058A0D8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00589FAC, NULL, NULL, NULL, uv_0058A020, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_00589FD4, NULL, NULL, NULL, uv_0058A060, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0058A008, NULL, NULL, NULL, uv_0058A0B0, NULL }
};

NJS_VECTOR vertex_0058A130[] = {
	{ -5.991748f, 3.47959f, 4.000342f },
	{ 0.399297f, -0.209455f, -0.260115f },
	{ -5.821493f, 1.721301f, 3.407722f },
	{ -1.016198f, -1.052416f, 0.204371f },
	{ -4.732763f, 2.239905f, 4.591864f },
	{ 0.072534f, -0.533813f, 1.388514f },
	{ -4.155366f, 3.762573f, 4.139563f },
	{ 0.649932f, 0.988854f, 0.936211f },
	{ -4.887246f, 4.185029f, 2.675882f },
	{ -0.08195f, 1.411311f, -0.527469f },
	{ -5.91697f, 2.923454f, 2.223579f },
	{ -1.111674f, 0.149736f, -0.979771f }
};

NJS_VECTOR normal_0058A1C0[] = {
	{ -0.750042f, 0.43294f, 0.5f },
	{ 0.750042f, -0.43294f, -0.5f },
	{ -0.744582f, -0.640688f, 0.187393f },
	{ -0.142981f, -0.967665f, -0.207799f },
	{ -0.042504f, -0.306262f, 0.950998f },
	{ 0.545798f, -0.639575f, 0.54134f },
	{ 0.329837f, 0.675645f, 0.659327f },
	{ 0.911084f, 0.32373f, 0.255194f },
	{ -0.142124f, 0.94807f, -0.284542f },
	{ 0.448065f, 0.590994f, -0.670793f },
	{ -0.806152f, 0.134532f, -0.576213f },
	{ -0.203383f, -0.207132f, -0.956939f }
};

NJS_MODEL_SADX attach_0058A250 = { vertex_0058A130, normal_0058A1C0, LengthOfArray<Sint32>(vertex_0058A130), meshlist_0058A0D8, matlist_00589F70, LengthOfArray<Uint16>(meshlist_0058A0D8), LengthOfArray<Uint16>(matlist_00589F70),{ -2.670908f, 1.566307f, 1.806046f }, 4.3346f, NULL };

NJS_OBJECT object_0058A27C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058A250, -2.963105f, -1.235971f, 2.280475f, 0, 0, 0, 1, 1, 1, NULL, &object_00589F3C };

NJS_MATERIAL matlist_0058A2B0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_right0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_right2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xCCB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_right1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058A314[] = {
	4, 2, 0, 1, 11,
	4, 4, 2, 3, 1,
	4, 6, 4, 5, 3,
	4, 8, 6, 7, 5,
	4, 0, 10, 11, 9,
	4, 10, 8, 9, 7
};

Sint16 poly_0058A350[] = {
	3, 10, 0, 2,
	0x8000u | 5, 10, 8, 2, 6, 4
};

Sint16 poly_0058A364[] = {
	4, 14, 18, 12, 16,
	4, 18, 19, 16, 17,
	4, 19, 15, 17, 13,
	4, 15, 14, 13, 12
};

Sint16 poly_0058A38C[] = {
	3, 1, 5, 3,
	0x8000u | 5, 5, 7, 1, 9, 11
};

Sint16 poly_0058A3A0[] = {
	5, 20, 23, 21, 25, 27,
	0x8000u | 5, 20, 31, 21, 29, 27,
	14, 28, 27, 26, 25, 24, 23, 22, 20, 32, 31, 30, 29, 28, 27
};

NJS_TEX uv_0058A3D8[] = {
	{ 250, 254 },
	{ 0, 256 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 256 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 256 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 256 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 256 },
	{ 250, 5 },
	{ 0, 5 },
	{ 250, 254 },
	{ 0, 256 },
	{ 250, 5 },
	{ 0, 5 }
};

NJS_TEX uv_0058A438[] = {
	{ 235, 69 },
	{ 235, 192 },
	{ 123, 253 },
	{ 235, 69 },
	{ 123, 7 },
	{ 123, 253 },
	{ 11, 69 },
	{ 11, 192 }
};

NJS_TEX uv_0058A458[] = {
	{ 23, 136 },
	{ 229, 135 },
	{ 24, 6 },
	{ 228, 6 },
	{ 23, 136 },
	{ 229, 135 },
	{ 24, 6 },
	{ 228, 6 },
	{ 23, 136 },
	{ 229, 135 },
	{ 24, 6 },
	{ 228, 6 },
	{ 23, 136 },
	{ 229, 135 },
	{ 24, 6 },
	{ 228, 6 }
};

NJS_TEX uv_0058A498[] = {
	{ 123, 255 },
	{ 8, 69 },
	{ 8, 195 },
	{ 8, 69 },
	{ 123, 8 },
	{ 123, 255 },
	{ 238, 69 },
	{ 238, 195 }
};

NJS_TEX uv_0058A4B8[] = {
	{ 237, 192 },
	{ 123, 254 },
	{ 123, 130 },
	{ 9, 192 },
	{ 9, 68 },
	{ 237, 192 },
	{ 237, 68 },
	{ 123, 130 },
	{ 123, 6 },
	{ 9, 68 },
	{ 123, 6 },
	{ 9, 68 },
	{ 9, 68 },
	{ 9, 192 },
	{ 9, 192 },
	{ 123, 254 },
	{ 123, 254 },
	{ 237, 192 },
	{ 237, 192 },
	{ 237, 68 },
	{ 237, 68 },
	{ 123, 6 },
	{ 123, 6 },
	{ 9, 68 }
};

NJS_MESHSET_SADX meshlist_0058A518[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0058A314, NULL, NULL, NULL, uv_0058A3D8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0058A350, NULL, NULL, NULL, uv_0058A438, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0058A364, NULL, NULL, NULL, uv_0058A458, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0058A38C, NULL, NULL, NULL, uv_0058A498, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_0058A3A0, NULL, NULL, NULL, uv_0058A4B8, NULL }
};

NJS_VECTOR vertex_0058A5A8[] = {
	{ 1.589957f, -4.726829f, 1.800041f },
	{ -1.832676f, -5.76594f, 0 },
	{ 1.590058f, -5.76608f, 0 },
	{ -1.832777f, -4.726687f, -1.800041f },
	{ 1.589957f, -4.726829f, -1.800041f },
	{ -1.832977f, -2.648178f, -1.80004f },
	{ 1.589756f, -2.648321f, -1.80004f },
	{ -1.833078f, -1.608925f, 0 },
	{ 1.589655f, -1.609067f, 0 },
	{ -1.832977f, -2.648178f, 1.800041f },
	{ 1.589756f, -2.648322f, 1.800041f },
	{ -1.832777f, -4.726687f, 1.800041f },
	{ 0.335342f, -0.867623f, -0.371211f },
	{ 0.335342f, -0.867623f, 0.348789f },
	{ 0.335513f, -2.099621f, -0.371211f },
	{ 0.335513f, -2.099621f, 0.348789f },
	{ -0.384658f, -0.867693f, -0.371211f },
	{ -0.384658f, -0.867693f, 0.348789f },
	{ -0.384487f, -2.099691f, -0.371211f },
	{ -0.384487f, -2.099691f, 0.348789f },
	{ 2.014294f, -4.727077f, 1.800041f },
	{ 2.775821f, -3.687748f, 0 },
	{ 1.584323f, -5.766792f, 0 },
	{ 2.014395f, -5.766328f, 0 },
	{ 1.584222f, -4.72754f, -1.800041f },
	{ 2.014294f, -4.727076f, -1.800041f },
	{ 1.584021f, -2.649029f, -1.80004f },
	{ 2.014093f, -2.648569f, -1.80004f },
	{ 1.583921f, -1.609776f, 0 },
	{ 2.013993f, -1.609315f, 0 },
	{ 1.584021f, -2.649029f, 1.800041f },
	{ 2.014093f, -2.648569f, 1.800041f },
	{ 1.584222f, -4.72754f, 1.800041f }
};

NJS_VECTOR normal_0058A738[] = {
	{ 0.610007f, -0.39618f, 0.686246f },
	{ -0.609969f, -0.792425f, 0 },
	{ 0.610019f, -0.792386f, 0 },
	{ -0.609982f, -0.396226f, -0.686241f },
	{ 0.610007f, -0.39618f, -0.686246f },
	{ -0.610007f, 0.39618f, -0.686246f },
	{ 0.609982f, 0.396226f, -0.686241f },
	{ -0.610019f, 0.792387f, 0 },
	{ 0.60997f, 0.792425f, 0 },
	{ -0.610007f, 0.39618f, 0.686246f },
	{ 0.609982f, 0.396226f, 0.686241f },
	{ -0.609982f, -0.396226f, 0.686241f },
	{ 0.707097f, 0.000098f, -0.707116f },
	{ 0.707097f, 0.000098f, 0.707116f },
	{ 0.707116f, 0.000098f, -0.707097f },
	{ 0.707116f, 0.000098f, 0.707097f },
	{ -0.707116f, -0.00099f, -0.707097f },
	{ -0.707116f, -0.00099f, 0.707097f },
	{ -0.707097f, -0.00099f, -0.707116f },
	{ -0.707097f, -0.00099f, 0.707116f },
	{ 0.500373f, -0.432709f, 0.749926f },
	{ 1, 0.000097f, 0 },
	{ 0.001079f, -0.999999f, 0 },
	{ 0.50062f, -0.865667f, 0 },
	{ 0.00054f, -0.500234f, -0.86589f },
	{ 0.500373f, -0.432709f, -0.749927f },
	{ -0.000535f, 0.499767f, -0.866159f },
	{ 0.499881f, 0.433242f, -0.749947f },
	{ -0.00107f, 0.999999f, 0 },
	{ 0.499636f, 0.866236f, 0 },
	{ -0.000535f, 0.499767f, 0.866159f },
	{ 0.499881f, 0.433242f, 0.749947f },
	{ 0.00054f, -0.500234f, 0.86589f }
};

NJS_MODEL_SADX attach_0058A8C4 = { vertex_0058A5A8, normal_0058A738, LengthOfArray<Sint32>(vertex_0058A5A8), meshlist_0058A518, matlist_0058A2B0, LengthOfArray<Uint16>(meshlist_0058A518), LengthOfArray<Uint16>(matlist_0058A2B0),{ 0.471372f, -3.317208f, 0 }, 3.039837f, NULL };

NJS_OBJECT object_0058A8F0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058A8C4, 0, -1.164663f, 7.48481f, 0, 0, 0, 1, 1, 1, NULL, &object_0058A27C };

NJS_MATERIAL matlist_0058A924[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_metal0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058A938[] = {
	4, 1, 2, 0, 6,
	4, 3, 5, 7, 4,
	0x8000u | 8, 7, 6, 4, 0, 5, 1, 3, 2
};

NJS_TEX uv_0058A960[] = {
	{ 245, 255 },
	{ 124, 8 },
	{ 122, 254 },
	{ 1, 7 },
	{ 247, 8 },
	{ 122, 254 },
	{ 124, 8 },
	{ 0, 254 },
	{ 124, 8 },
	{ 1, 7 },
	{ 0, 254 },
	{ 122, 254 },
	{ 122, 254 },
	{ 245, 255 },
	{ 247, 8 },
	{ 124, 8 }
};

NJS_MESHSET_SADX meshlist_0058A9A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0058A938, NULL, NULL, NULL, uv_0058A960, NULL }
};

NJS_VECTOR vertex_0058A9C0[] = {
	{ 4.299562f, -0.042279f, -0.407229f },
	{ 4.300286f, -0.454663f, 0.005156f },
	{ 0.85809f, -0.048319f, -0.407229f },
	{ 0.858814f, -0.460704f, 0.005156f },
	{ 4.298838f, 0.370106f, 0.005156f },
	{ 4.299562f, -0.042279f, 0.417541f },
	{ 0.857366f, 0.364065f, 0.005156f },
	{ 0.85809f, -0.048319f, 0.417541f }
};

NJS_VECTOR normal_0058AA20[] = {
	{ 0.577349f, 0.001013f, -0.816497f },
	{ 0.578783f, -0.815482f, 0 },
	{ 0, 0, -1 },
	{ 0.001755f, -0.999999f, 0 },
	{ 0.575916f, 0.817509f, 0 },
	{ 0.577349f, 0.001013f, 0.816497f },
	{ -0.001755f, 0.999999f, 0 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_0058AA80 = { vertex_0058A9C0, normal_0058AA20, LengthOfArray<Sint32>(vertex_0058A9C0), meshlist_0058A9A0, matlist_0058A924, LengthOfArray<Uint16>(meshlist_0058A9A0), LengthOfArray<Uint16>(matlist_0058A924),{ 2.578826f, -0.045299f, 0.005156f }, 1.628329f, NULL };

NJS_OBJECT object_0058AAAC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058AA80, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0058AAE0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058AAF4[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4,
	4, 1, 0, 5, 4,
	4, 7, 6, 3, 2
};

NJS_TEX uv_0058AB30[] = {
	{ 229, 253 },
	{ 18, 253 },
	{ 229, 5 },
	{ 18, 5 },
	{ 229, 253 },
	{ 18, 253 },
	{ 229, 5 },
	{ 18, 5 },
	{ 229, 253 },
	{ 18, 253 },
	{ 229, 5 },
	{ 18, 5 },
	{ 229, 253 },
	{ 18, 253 },
	{ 229, 5 },
	{ 18, 5 },
	{ 125, 4 },
	{ 0, 3 },
	{ 251, 4 },
	{ 125, 4 },
	{ 207, 255 },
	{ 124, 254 },
	{ 124, 254 },
	{ 42, 254 }
};

NJS_MESHSET_SADX meshlist_0058AB90[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0058AAF4, NULL, NULL, NULL, uv_0058AB30, NULL }
};

NJS_VECTOR vertex_0058ABB0[] = {
	{ 3.181524f, -1.083579f, 0.005154f },
	{ 3.179686f, -0.036533f, 1.052203f },
	{ -0.063248f, -0.729351f, 0.005154f },
	{ -0.064453f, -0.042226f, 0.69228f },
	{ 3.179686f, -0.036532f, -1.041894f },
	{ 3.177848f, 1.010514f, 0.005154f },
	{ -0.064454f, -0.042226f, -0.681971f },
	{ -0.06566f, 0.644899f, 0.005154f }
};

NJS_VECTOR normal_0058AC10[] = {
	{ 0.537789f, -0.843079f, 0 },
	{ 0.536308f, 0.000941f, 0.844022f },
	{ -0.616896f, -0.787045f, 0 },
	{ -0.618275f, -0.001085f, 0.785961f },
	{ 0.536308f, 0.000941f, -0.844022f },
	{ 0.534826f, 0.844962f, 0 },
	{ -0.618275f, -0.001085f, -0.785961f },
	{ -0.619655f, 0.784875f, 0 }
};

NJS_MODEL_SADX attach_0058AC70 = { vertex_0058ABB0, normal_0058AC10, LengthOfArray<Sint32>(vertex_0058ABB0), meshlist_0058AB90, matlist_0058AAE0, LengthOfArray<Uint16>(meshlist_0058AB90), LengthOfArray<Uint16>(matlist_0058AAE0),{ 1.557932f, -0.036532f, 0.005154f }, 2.230838f, NULL };

NJS_OBJECT object_0058AC9C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058AC70, -0.00001f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0058ACD0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_en, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058AD10[] = {
	3, 13, 0, 1,
	4, 7, 4, 6, 3,
	3, 4, 7, 1,
	3, 0, 4, 1,
	4, 10, 7, 9, 6,
	3, 7, 10, 1,
	4, 13, 10, 12, 9,
	3, 10, 13, 1,
	4, 4, 0, 3, 15,
	4, 0, 13, 15, 12
};

Sint16 poly_0058AD6C[] = {
	4, 6, 3, 5, 2,
	4, 9, 6, 8, 5,
	4, 3, 15, 2, 14,
	4, 12, 9, 11, 8,
	4, 15, 12, 14, 11
};

Sint16 poly_0058ADA0[] = {
	0x8000u | 5, 2, 5, 14, 8, 11
};

NJS_TEX uv_0058ADB0[] = {
	{ 232, 6 },
	{ 132, 53 },
	{ 0, 5 },
	{ 0, 5 },
	{ 250, 5 },
	{ 0, 254 },
	{ 251, 253 },
	{ 232, 6 },
	{ 132, 53 },
	{ 0, 5 },
	{ 232, 6 },
	{ 132, 53 },
	{ 0, 5 },
	{ 0, 5 },
	{ 250, 5 },
	{ 0, 254 },
	{ 251, 253 },
	{ 232, 6 },
	{ 132, 53 },
	{ 0, 5 },
	{ 0, 5 },
	{ 250, 5 },
	{ 0, 254 },
	{ 251, 253 },
	{ 232, 6 },
	{ 132, 53 },
	{ 0, 5 },
	{ 0, 5 },
	{ 250, 5 },
	{ 0, 254 },
	{ 251, 253 },
	{ 0, 5 },
	{ 250, 5 },
	{ 0, 254 },
	{ 251, 253 }
};

NJS_TEX uv_0058AE40[] = {
	{ 245, 254 },
	{ 0, 253 },
	{ 244, 31 },
	{ 1, 32 },
	{ 245, 254 },
	{ 0, 253 },
	{ 244, 31 },
	{ 1, 32 },
	{ 245, 254 },
	{ 0, 253 },
	{ 244, 31 },
	{ 1, 32 },
	{ 245, 254 },
	{ 0, 253 },
	{ 244, 31 },
	{ 1, 32 },
	{ 245, 254 },
	{ 0, 253 },
	{ 244, 31 },
	{ 1, 32 }
};

NJS_TEX uv_0058AE90[] = {
	{ 122, 21 },
	{ 236, 106 },
	{ 10, 105 },
	{ 198, 245 },
	{ 53, 245 }
};

NJS_MESHSET_SADX meshlist_0058AEA8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_0058AD10, NULL, NULL, NULL, uv_0058ADB0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0058AD6C, NULL, NULL, NULL, uv_0058AE40, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0058ADA0, NULL, NULL, NULL, uv_0058AE90, NULL }
};

NJS_VECTOR vertex_0058AF00[] = {
	{ -0.278043f, 0.45118f, 1.519404f },
	{ -0.278028f, -0.049713f, -0.016775f },
	{ 5.912284f, 2.358389f, -0.016725f },
	{ 3.779083f, 2.59125f, -0.016768f },
	{ -0.27805f, 1.571208f, -0.016775f },
	{ 5.912323f, 0.694516f, -2.298816f },
	{ 3.779127f, 0.766398f, -2.51965f },
	{ -0.278026f, 0.451179f, -1.552953f },
	{ 5.91236f, -1.997688f, -1.427134f },
	{ 3.779166f, -2.186277f, -1.563634f },
	{ -0.278006f, -1.361065f, -0.966185f },
	{ 5.912342f, -1.997688f, 1.393684f },
	{ 3.779147f, -2.186277f, 1.530098f },
	{ -0.278016f, -1.361065f, 0.932636f },
	{ 5.912296f, 0.694516f, 2.265365f },
	{ 3.779096f, 0.766398f, 2.486114f }
};

NJS_VECTOR normal_0058AFC0[] = {
	{ -0.68665f, 0.224327f, 0.691512f },
	{ -1, -0.00013f, -0.00005f },
	{ 0.635984f, 0.771702f, 0.000008f },
	{ -0.064596f, 0.997912f, -0.00004f },
	{ -0.686539f, 0.727093f, -0.00003f },
	{ 0.636275f, 0.238138f, -0.733787f },
	{ -0.064402f, 0.308137f, -0.94916f },
	{ -0.686645f, 0.224327f, -0.691517f },
	{ 0.636137f, -0.623938f, -0.453907f },
	{ -0.064477f, -0.807108f, -0.586873f },
	{ -0.686569f, -0.587889f, -0.427795f },
	{ 0.636125f, -0.623938f, 0.453923f },
	{ -0.06449f, -0.807111f, 0.586868f },
	{ -0.686572f, -0.587889f, 0.42779f },
	{ 0.636257f, 0.238138f, 0.733803f },
	{ -0.064423f, 0.308139f, 0.949158f }
};

NJS_MODEL_SADX attach_0058B080 = { vertex_0058AF00, normal_0058AFC0, LengthOfArray<Sint32>(vertex_0058AF00), meshlist_0058AEA8, matlist_0058ACD0, LengthOfArray<Uint16>(meshlist_0058AEA8), LengthOfArray<Uint16>(matlist_0058ACD0),{ 2.817155f, 0.202487f, -0.016768f }, 4.41003f, NULL };

NJS_OBJECT object_0058B0AC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058B080, 0.000002f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0058B0E0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_te0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058B11C[] = {
	3, 4, 5, 1,
	3, 3, 2, 0,
	8, 5, 2, 1, 3, 4, 0, 5, 2
};

Sint16 poly_0058B140[] = {
	0x8000u | 10, 13, 10, 11, 6, 7, 8, 9, 12, 13, 10,
	4, 8, 12, 6, 10
};

Sint16 poly_0058B160[] = {
	4, 13, 9, 11, 7
};

NJS_TEX uv_0058B16C[] = {
	{ 8, 66 },
	{ 232, 36 },
	{ 178, 17 },
	{ 8, 14 },
	{ 135, 78 },
	{ 73, 79 },
	{ 232, 36 },
	{ 135, 78 },
	{ 178, 17 },
	{ 8, 14 },
	{ 8, 66 },
	{ 73, 79 },
	{ 232, 36 },
	{ 135, 78 }
};

NJS_TEX uv_0058B1A4[] = {
	{ 38, 7 },
	{ 246, 90 },
	{ 204, 76 },
	{ 247, 172 },
	{ 204, 186 },
	{ 125, 224 },
	{ 39, 255 },
	{ 124, 38 },
	{ 38, 7 },
	{ 246, 90 },
	{ 125, 224 },
	{ 124, 38 },
	{ 247, 172 },
	{ 246, 90 }
};

NJS_TEX uv_0058B1DC[] = {
	{ 0, 8 },
	{ 0, 247 },
	{ 246, 8 },
	{ 246, 247 }
};

NJS_MESHSET_SADX meshlist_0058B1F0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0058B11C, NULL, NULL, NULL, uv_0058B16C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0058B140, NULL, NULL, NULL, uv_0058B1A4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0058B160, NULL, NULL, NULL, uv_0058B1DC, NULL }
};

NJS_VECTOR vertex_0058B248[] = {
	{ 0.011708f, -2.112289f, 0.005879f },
	{ 0.012268f, 2.110349f, 0.015821f },
	{ 0.519218f, 0.00991f, -0.978738f },
	{ -0.988787f, 0.00543f, -0.502274f },
	{ -0.495244f, -0.006904f, 1.00045f },
	{ 1.012761f, -0.002426f, 0.523986f },
	{ 2.822401f, -0.96601f, 1.506249f },
	{ 2.172925f, -1.290033f, 2.402647f },
	{ 0.944478f, -2.185119f, -0.950999f },
	{ -0.382078f, -2.916619f, 1.188365f },
	{ 2.819591f, 0.974139f, 1.506645f },
	{ 2.169178f, 1.296833f, 2.403175f },
	{ 0.938144f, 2.189727f, -0.950107f },
	{ -0.390524f, 2.916509f, 1.189556f }
};

NJS_VECTOR normal_0058B2F0[] = {
	{ -0.00065f, -0.999995f, -0.003275f },
	{ 0.000065f, 0.999995f, 0.003279f },
	{ 0.456187f, 0.004333f, -0.889874f },
	{ -0.889875f, 0.002398f, -0.456199f },
	{ -0.456187f, -0.003521f, 0.889877f },
	{ 0.889875f, -0.001585f, 0.456202f },
	{ 0.937482f, -0.348005f, -0.004451f },
	{ 0.334225f, -0.475065f, 0.814006f },
	{ 0.040879f, -0.573927f, -0.817885f },
	{ -0.581147f, -0.782301f, 0.224219f },
	{ 0.935167f, 0.354122f, -0.007824f },
	{ 0.328708f, 0.481252f, 0.812618f },
	{ 0.032419f, 0.574624f, -0.817775f },
	{ -0.587635f, 0.78007f, 0.214885f }
};

NJS_MODEL_SADX attach_0058B398 = { vertex_0058B248, normal_0058B2F0, LengthOfArray<Sint32>(vertex_0058B248), meshlist_0058B1F0, matlist_0058B0E0, LengthOfArray<Uint16>(meshlist_0058B1F0), LengthOfArray<Uint16>(matlist_0058B0E0),{ 0.916807f, -0.00055f, 0.712219f }, 3.643842f, NULL };

NJS_OBJECT object_0058B3C4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058B398, 2.844656f, 0.003269f, 0.966746f, 0, 0xFFB2B2B2, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0058B3F8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_te0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058B434[] = {
	8, 6, 7, 4, 5, 0, 1, 2, 3,
	0x8000u | 5, 3, 2, 6, 0, 4,
	3, 3, 7, 6
};

Sint16 poly_0058B45C[] = {
	4, 7, 3, 5, 1
};

Sint16 poly_0058B468[] = {
	3, 11, 10, 8,
	8, 13, 10, 9, 11, 12, 8, 13, 10,
	3, 12, 13, 9
};

NJS_TEX uv_0058B490[] = {
	{ 116, 38 },
	{ 24, 10 },
	{ 246, 55 },
	{ 189, 30 },
	{ 247, 207 },
	{ 190, 232 },
	{ 117, 224 },
	{ 23, 254 },
	{ 68, 255 },
	{ 117, 224 },
	{ 116, 38 },
	{ 247, 207 },
	{ 246, 55 },
	{ 68, 255 },
	{ 67, 7 },
	{ 116, 38 }
};

NJS_TEX uv_0058B4D0[] = {
	{ 0, 9 },
	{ 0, 247 },
	{ 246, 9 },
	{ 246, 246 }
};

NJS_TEX uv_0058B4E0[] = {
	{ 1, 10 },
	{ 146, 28 },
	{ 90, 52 },
	{ 206, 50 },
	{ 146, 28 },
	{ 241, 12 },
	{ 1, 10 },
	{ 15, 60 },
	{ 90, 52 },
	{ 206, 50 },
	{ 146, 28 },
	{ 15, 60 },
	{ 206, 50 },
	{ 241, 12 }
};

NJS_MESHSET_SADX meshlist_0058B518[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0058B434, NULL, NULL, NULL, uv_0058B490, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0058B45C, NULL, NULL, NULL, uv_0058B4D0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0058B468, NULL, NULL, NULL, uv_0058B4E0, NULL }
};

NJS_VECTOR vertex_0058B570[] = {
	{ 3.169117f, -2.182612f, -0.151881f },
	{ 2.124474f, -2.913282f, 2.033886f },
	{ 0.782864f, -2.667334f, -1.658764f },
	{ -0.119184f, -3.558206f, 1.29331f },
	{ 3.16272f, 2.192234f, -0.151881f },
	{ 2.115944f, 2.919845f, 2.033886f },
	{ 0.775059f, 2.669976f, -1.658764f },
	{ -0.12959f, 3.558206f, 1.293311f },
	{ -0.011703f, -2.669647f, -0.003972f },
	{ -0.00863f, 2.675463f, 0.008252f },
	{ 0.383771f, 0.016681f, -1.34922f },
	{ -1.37684f, 0.01101f, -0.396448f },
	{ -0.4041f, -0.004603f, 1.353516f },
	{ 1.356511f, 0.001066f, 0.400743f }
};

NJS_VECTOR normal_0058B618[] = {
	{ 0.869059f, -0.419631f, -0.262003f },
	{ 0.406748f, -0.580725f, 0.705205f },
	{ -0.240474f, -0.528628f, -0.814079f },
	{ -0.599112f, -0.736623f, 0.313769f },
	{ 0.86376f, 0.4269f, -0.26772f },
	{ 0.395361f, 0.589292f, 0.704574f },
	{ -0.251283f, 0.526244f, -0.812357f },
	{ -0.610884f, 0.731287f, 0.303383f },
	{ -0.000683f, -0.999995f, -0.003204f },
	{ 0.000683f, 0.999995f, 0.003208f },
	{ 0.279916f, 0.004333f, -0.960015f },
	{ -0.960018f, 0.002398f, -0.279928f },
	{ -0.279916f, -0.003521f, 0.960018f },
	{ 0.960019f, -0.001585f, 0.279931f }
};

NJS_MODEL_SADX attach_0058B6C0 = { vertex_0058B570, normal_0058B618, LengthOfArray<Sint32>(vertex_0058B570), meshlist_0058B518, matlist_0058B3F8, LengthOfArray<Uint16>(meshlist_0058B518), LengthOfArray<Uint16>(matlist_0058B3F8),{ 0.896138f, 0, 0.187561f }, 4.360394f, NULL };

NJS_OBJECT object_0058B6EC = { NJD_EVAL_UNIT_SCL, &attach_0058B6C0, 3.687287f, -0.000781f, -0.121492f, 0, 0xFFB2B2B2, 0, 1, 1, 1, &object_0058B3C4, NULL };

NJS_MATERIAL matlist_0058B720[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_te0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058B748[] = {
	0x8000u | 11, 0, 9, 8, 3, 7, 6, 10, 11, 5, 4, 0,
	3, 0, 1, 8,
	6, 7, 8, 10, 1, 5, 0,
	4, 9, 3, 2, 6
};

Sint16 poly_0058B780[] = {
	0x8000u | 6, 0, 4, 9, 11, 2, 6
};

NJS_TEX uv_0058B790[] = {
	{ 247, 218 },
	{ 159, 236 },
	{ 65, 237 },
	{ 0, 255 },
	{ 0, 8 },
	{ 119, 7 },
	{ 65, 25 },
	{ 158, 25 },
	{ 171, 43 },
	{ 246, 43 },
	{ 247, 218 },
	{ 247, 218 },
	{ 171, 218 },
	{ 65, 237 },
	{ 0, 8 },
	{ 65, 237 },
	{ 65, 25 },
	{ 171, 218 },
	{ 171, 43 },
	{ 247, 218 },
	{ 159, 236 },
	{ 0, 255 },
	{ 119, 254 },
	{ 119, 7 }
};

NJS_TEX uv_0058B7F0[] = {
	{ 247, 254 },
	{ 246, 8 },
	{ 114, 253 },
	{ 114, 8 },
	{ 0, 254 },
	{ 0, 7 }
};

NJS_MESHSET_SADX meshlist_0058B808[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0058B748, NULL, NULL, NULL, uv_0058B790, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0058B780, NULL, NULL, NULL, uv_0058B7F0, NULL }
};

NJS_VECTOR vertex_0058B840[] = {
	{ 2.482099f, -0.894005f, 3.825089f },
	{ 1.480969f, -0.895287f, 4.272751f },
	{ 0.790619f, -1.262734f, -0.212623f },
	{ -0.78797f, -1.265042f, 0.208663f },
	{ 2.479475f, 0.900714f, 3.825089f },
	{ 1.478345f, 0.899432f, 4.272751f },
	{ 0.786923f, 1.265039f, -0.212623f },
	{ -0.791666f, 1.262731f, 0.208663f },
	{ 0.074419f, -1.08082f, 2.789937f },
	{ 1.317192f, -1.078776f, 2.1857f },
	{ 0.071259f, 1.080426f, 2.789937f },
	{ 1.314032f, 1.082471f, 2.1857f }
};

NJS_VECTOR normal_0058B8D0[] = {
	{ 0.809489f, -0.539134f, 0.232512f },
	{ -0.144748f, -0.56389f, 0.813066f },
	{ 0.426077f, -0.59646f, -0.680215f },
	{ -0.712122f, -0.59614f, -0.370809f },
	{ 0.808009f, 0.541389f, 0.23242f },
	{ -0.146277f, 0.563606f, 0.812989f },
	{ 0.424358f, 0.597737f, -0.68017f },
	{ -0.713828f, 0.594108f, -0.37079f },
	{ -0.621263f, -0.658168f, 0.425262f },
	{ 0.624536f, -0.754704f, -0.200941f },
	{ -0.623173f, 0.656342f, 0.42529f },
	{ 0.622382f, 0.756482f, -0.200937f }
};

NJS_MODEL_SADX attach_0058B960 = { vertex_0058B840, normal_0058B8D0, LengthOfArray<Sint32>(vertex_0058B840), meshlist_0058B808, matlist_0058B720, LengthOfArray<Uint16>(meshlist_0058B808), LengthOfArray<Uint16>(matlist_0058B720),{ 0.845216f, -0.00001f, 2.030064f }, 3.312177f, NULL };

NJS_OBJECT object_0058B98C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058B960, 1.487802f, -0.849818f, 0.891651f, 0, 0x7D2, 0, 1, 1, 1, NULL, &object_0058B6EC };

NJS_MATERIAL matlist_0058B9C0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_metal0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058B9E8[] = {
	4, 1, 5, 3, 7,
	4, 2, 6, 0, 4,
	0x8000u | 10, 5, 0, 1, 2, 3, 6, 7, 4, 5, 0
};

Sint16 poly_0058BA14[] = {
	3, 13, 12, 8,
	3, 10, 11, 9,
	0x8000u | 8, 11, 8, 10, 13, 9, 12, 11, 8
};

NJS_TEX uv_0058BA38[] = {
	{ 201, 252 },
	{ 200, 10 },
	{ 35, 215 },
	{ 34, 47 },
	{ 35, 194 },
	{ 34, 68 },
	{ 245, 223 },
	{ 245, 40 },
	{ 200, 10 },
	{ 245, 223 },
	{ 201, 252 },
	{ 35, 194 },
	{ 35, 215 },
	{ 34, 68 },
	{ 34, 47 },
	{ 245, 40 },
	{ 200, 10 },
	{ 245, 223 }
};

NJS_TEX uv_0058BA80[] = {
	{ 243, 251 },
	{ 112, 129 },
	{ 4, 252 },
	{ 110, 128 },
	{ 2, 78 },
	{ 240, 18 },
	{ 2, 78 },
	{ 4, 252 },
	{ 110, 128 },
	{ 243, 251 },
	{ 240, 18 },
	{ 112, 129 },
	{ 2, 78 },
	{ 4, 252 }
};

NJS_MESHSET_SADX meshlist_0058BAB8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0058B9E8, NULL, NULL, NULL, uv_0058BA38, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0058BA14, NULL, NULL, NULL, uv_0058BA80, NULL }
};

NJS_VECTOR vertex_0058BAF0[] = {
	{ 3.803027f, -2.73914f, -2.01812f },
	{ 3.007116f, -3.653346f, 1.130788f },
	{ 0.279709f, -1.907273f, -1.378303f },
	{ 0.280636f, -2.541308f, 1.130788f },
	{ 3.795017f, 2.73893f, -2.018121f },
	{ 2.996436f, 3.650746f, 1.130788f },
	{ 0.274146f, 1.896941f, -1.378303f },
	{ 0.273219f, 2.530976f, 1.130788f },
	{ -0.00627f, -1.597441f, -0.029941f },
	{ 0.000213f, 1.599395f, -0.017117f },
	{ -0.013072f, 0.009287f, -1.62305f },
	{ -1.602562f, 0.006053f, -0.013462f },
	{ 0.007023f, -0.003587f, 1.576007f },
	{ 1.596513f, -0.000354f, -0.033582f }
};

NJS_VECTOR normal_0058BB98[] = {
	{ 0.636519f, -0.644772f, -0.423216f },
	{ 0.439777f, -0.842256f, 0.31177f },
	{ -0.345343f, -0.802189f, -0.487063f },
	{ -0.273948f, -0.84899f, 0.45185f },
	{ 0.635164f, 0.645876f, -0.42357f },
	{ 0.437787f, 0.843168f, 0.312108f },
	{ -0.34831f, 0.800372f, -0.48794f },
	{ -0.276845f, 0.847685f, 0.452533f },
	{ -0.566987f, -0.817884f, 0.09793f },
	{ -0.563272f, 0.819646f, 0.104428f },
	{ -0.621856f, 0.005914f, -0.783109f },
	{ -0.99706f, 0.002713f, 0.076582f },
	{ -0.519719f, -0.001087f, 0.854336f },
	{ 0.935476f, 0.001782f, 0.353386f }
};

NJS_MODEL_SADX attach_0058BC40 = { vertex_0058BAF0, normal_0058BB98, LengthOfArray<Sint32>(vertex_0058BAF0), meshlist_0058BAB8, matlist_0058B9C0, LengthOfArray<Uint16>(meshlist_0058BAB8), LengthOfArray<Uint16>(matlist_0058B9C0),{ 1.100233f, -0.0013f, -0.221057f }, 4.157664f, NULL };

NJS_OBJECT object_0058BC6C = { NJD_EVAL_UNIT_SCL, &attach_0058BC40, 6.298108f, -0.023051f, 0.000067f, 0x755, 0, 0, 1, 1, 1, &object_0058B98C, &object_0058B0AC };

NJS_OBJECT object_0058BCA0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.897654f, -0.00001f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0058BC6C };

NJS_OBJECT object_0058BCD4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 3.324162f, 0, 0, 0, 0x789, 0xFFB2B2B2, 1, 1, 1, &object_0058BCA0, &object_0058AC9C };

NJS_OBJECT object_0058BD08 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 4.393758f, 0, 0, 0, 0x3ED, 0xFFB2B2B2, 1, 1, 1, &object_0058BCD4, &object_0058AAAC };

NJS_OBJECT object_0058BD3C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0x1159, 0xFFB2B2B2, 1, 1, 1, &object_0058BD08, NULL };

NJS_OBJECT object_0058BD70 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.058032f, -1.242976f, -5.892152f, 0, 0, 0x6313, 1, 1, 1, &object_0058BD3C, &object_0058A8F0 };

NJS_MATERIAL matlist_0058BDA4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_metal0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058BDB8[] = {
	10, 5, 6, 4, 2, 0, 3, 1, 7, 5, 6,
	4, 0, 1, 4, 5
};

NJS_TEX uv_0058BDD8[] = {
	{ 130, 246 },
	{ 9, 0 },
	{ 7, 246 },
	{ 132, 0 },
	{ 130, 246 },
	{ 255, 0 },
	{ 253, 247 },
	{ 132, 0 },
	{ 130, 246 },
	{ 9, 0 },
	{ 130, 246 },
	{ 253, 247 },
	{ 7, 246 },
	{ 130, 246 }
};

NJS_MESHSET_SADX meshlist_0058BE10[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0058BDB8, NULL, NULL, NULL, uv_0058BDD8, NULL }
};

NJS_VECTOR vertex_0058BE30[] = {
	{ 4.299563f, -0.042279f, 0.407229f },
	{ 4.300287f, -0.454664f, -0.005156f },
	{ 0.858091f, -0.048319f, 0.407229f },
	{ 0.858815f, -0.460704f, -0.005156f },
	{ 4.29884f, 0.370105f, -0.005156f },
	{ 4.299563f, -0.042279f, -0.417541f },
	{ 0.857368f, 0.364065f, -0.005156f },
	{ 0.858091f, -0.048319f, -0.417541f }
};

NJS_VECTOR normal_0058BE90[] = {
	{ 0.577349f, 0.001013f, 0.816497f },
	{ 0.578783f, -0.815482f, 0 },
	{ 0, 0, 1 },
	{ 0.001755f, -0.999999f, 0 },
	{ 0.575916f, 0.817509f, 0 },
	{ 0.577349f, 0.001013f, -0.816497f },
	{ -0.001755f, 0.999998f, 0 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_0058BEF0 = { vertex_0058BE30, normal_0058BE90, LengthOfArray<Sint32>(vertex_0058BE30), meshlist_0058BE10, matlist_0058BDA4, LengthOfArray<Uint16>(meshlist_0058BE10), LengthOfArray<Uint16>(matlist_0058BDA4),{ 2.578827f, -0.045299f, -0.005156f }, 1.628934f, NULL };

NJS_OBJECT object_0058BF1C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058BEF0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0058BF50[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058BF64[] = {
	4, 1, 0, 3, 2,
	4, 5, 1, 7, 3,
	4, 4, 5, 6, 7,
	4, 0, 4, 2, 6,
	4, 5, 4, 1, 0,
	4, 3, 2, 7, 6
};

NJS_TEX uv_0058BFA0[] = {
	{ 229, 5 },
	{ 18, 5 },
	{ 229, 253 },
	{ 18, 253 },
	{ 229, 5 },
	{ 18, 5 },
	{ 229, 253 },
	{ 18, 253 },
	{ 229, 5 },
	{ 18, 5 },
	{ 229, 253 },
	{ 18, 253 },
	{ 229, 5 },
	{ 18, 5 },
	{ 229, 253 },
	{ 18, 253 },
	{ 251, 4 },
	{ 125, 4 },
	{ 125, 4 },
	{ 0, 3 },
	{ 124, 254 },
	{ 42, 254 },
	{ 207, 255 },
	{ 124, 254 }
};

NJS_MESHSET_SADX meshlist_0058C000[] = {
	{ NJD_MESHSET_TRIMESH | 0, 6, poly_0058BF64, NULL, NULL, NULL, uv_0058BFA0, NULL }
};

NJS_VECTOR vertex_0058C020[] = {
	{ 3.181524f, -1.083579f, -0.005154f },
	{ 3.179686f, -0.036533f, -1.052203f },
	{ -0.063248f, -0.729351f, -0.005154f },
	{ -0.064453f, -0.042226f, -0.69228f },
	{ 3.179686f, -0.036532f, 1.041894f },
	{ 3.177848f, 1.010514f, -0.005154f },
	{ -0.064454f, -0.042226f, 0.681971f },
	{ -0.06566f, 0.644899f, -0.005154f }
};

NJS_VECTOR normal_0058C080[] = {
	{ 0.537789f, -0.843079f, 0 },
	{ 0.536308f, 0.000941f, -0.844022f },
	{ -0.616896f, -0.787045f, 0 },
	{ -0.618275f, -0.001085f, -0.785961f },
	{ 0.536308f, 0.000941f, 0.844022f },
	{ 0.534826f, 0.844962f, 0 },
	{ -0.618275f, -0.001085f, 0.785961f },
	{ -0.619655f, 0.784875f, 0 }
};

NJS_MODEL_SADX attach_0058C0E0 = { vertex_0058C020, normal_0058C080, LengthOfArray<Sint32>(vertex_0058C020), meshlist_0058C000, matlist_0058BF50, LengthOfArray<Uint16>(meshlist_0058C000), LengthOfArray<Uint16>(matlist_0058BF50),{ 1.557932f, -0.036532f, -0.005154f }, 2.230839f, NULL };

NJS_OBJECT object_0058C10C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058C0E0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0058C140[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_en, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058C180[] = {
	3, 1, 0, 13,
	4, 6, 3, 7, 4,
	3, 1, 7, 4,
	3, 1, 4, 0,
	4, 9, 6, 10, 7,
	3, 1, 10, 7,
	4, 12, 9, 13, 10,
	3, 1, 13, 10,
	4, 3, 15, 4, 0,
	4, 15, 12, 0, 13
};

Sint16 poly_0058C1DC[] = {
	4, 5, 2, 6, 3,
	4, 8, 5, 9, 6,
	4, 2, 14, 3, 15,
	4, 11, 8, 12, 9,
	4, 14, 11, 15, 12
};

Sint16 poly_0058C210[] = {
	0x8000u | 5, 11, 8, 14, 5, 2
};

NJS_TEX uv_0058C220[] = {
	{ 250, 5 },
	{ 0, 5 },
	{ 133, 51 },
	{ 0, 254 },
	{ 251, 253 },
	{ 0, 5 },
	{ 250, 5 },
	{ 250, 5 },
	{ 0, 5 },
	{ 133, 51 },
	{ 250, 5 },
	{ 0, 5 },
	{ 133, 51 },
	{ 0, 254 },
	{ 251, 253 },
	{ 0, 5 },
	{ 250, 5 },
	{ 250, 5 },
	{ 0, 5 },
	{ 133, 51 },
	{ 0, 254 },
	{ 251, 253 },
	{ 0, 5 },
	{ 250, 5 },
	{ 250, 5 },
	{ 0, 5 },
	{ 133, 51 },
	{ 0, 254 },
	{ 251, 253 },
	{ 0, 5 },
	{ 250, 5 },
	{ 0, 254 },
	{ 251, 253 },
	{ 0, 5 },
	{ 250, 5 }
};

NJS_TEX uv_0058C2B0[] = {
	{ 244, 31 },
	{ 1, 32 },
	{ 245, 254 },
	{ 0, 253 },
	{ 244, 31 },
	{ 1, 32 },
	{ 245, 254 },
	{ 0, 253 },
	{ 244, 31 },
	{ 1, 32 },
	{ 245, 254 },
	{ 0, 253 },
	{ 244, 31 },
	{ 1, 32 },
	{ 245, 254 },
	{ 0, 253 },
	{ 244, 31 },
	{ 1, 32 },
	{ 245, 254 },
	{ 0, 253 }
};

NJS_TEX uv_0058C300[] = {
	{ 53, 245 },
	{ 198, 245 },
	{ 10, 105 },
	{ 236, 106 },
	{ 122, 21 }
};

NJS_MESHSET_SADX meshlist_0058C318[] = {
	{ NJD_MESHSET_TRIMESH | 0, 10, poly_0058C180, NULL, NULL, NULL, uv_0058C220, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0058C1DC, NULL, NULL, NULL, uv_0058C2B0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0058C210, NULL, NULL, NULL, uv_0058C300, NULL }
};

NJS_VECTOR vertex_0058C370[] = {
	{ -0.278043f, 0.451179f, -1.519404f },
	{ -0.278028f, -0.049713f, 0.016775f },
	{ 5.912284f, 2.358389f, 0.016725f },
	{ 3.779083f, 2.591249f, 0.016768f },
	{ -0.27805f, 1.571208f, 0.016775f },
	{ 5.912323f, 0.694515f, 2.298816f },
	{ 3.779127f, 0.766397f, 2.51965f },
	{ -0.278026f, 0.451179f, 1.552953f },
	{ 5.91236f, -1.997689f, 1.427134f },
	{ 3.779166f, -2.186277f, 1.563634f },
	{ -0.278006f, -1.361065f, 0.966185f },
	{ 5.912342f, -1.997689f, -1.393684f },
	{ 3.779147f, -2.186277f, -1.530099f },
	{ -0.278016f, -1.361065f, -0.932636f },
	{ 5.912296f, 0.694515f, -2.265365f },
	{ 3.779096f, 0.766397f, -2.486114f }
};

NJS_VECTOR normal_0058C430[] = {
	{ -0.68665f, 0.224327f, -0.691512f },
	{ -1, -0.00013f, 0.000005f },
	{ 0.635984f, 0.771702f, -0.00008f },
	{ -0.064596f, 0.997912f, 0.000004f },
	{ -0.686539f, 0.727093f, 0.000003f },
	{ 0.636275f, 0.238138f, 0.733787f },
	{ -0.064402f, 0.308137f, 0.94916f },
	{ -0.686645f, 0.224327f, 0.691517f },
	{ 0.636137f, -0.623938f, 0.453907f },
	{ -0.064477f, -0.807108f, 0.586873f },
	{ -0.686569f, -0.587889f, 0.427795f },
	{ 0.636125f, -0.623938f, -0.453923f },
	{ -0.06449f, -0.807111f, -0.586868f },
	{ -0.686572f, -0.587889f, -0.42779f },
	{ 0.636257f, 0.238138f, -0.733803f },
	{ -0.064423f, 0.308139f, -0.949158f }
};

NJS_MODEL_SADX attach_0058C4F0 = { vertex_0058C370, normal_0058C430, LengthOfArray<Sint32>(vertex_0058C370), meshlist_0058C318, matlist_0058C140, LengthOfArray<Uint16>(meshlist_0058C318), LengthOfArray<Uint16>(matlist_0058C140),{ 2.817155f, 0.202486f, 0.016768f }, 4.410034f, NULL };

NJS_OBJECT object_0058C51C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058C4F0, 0.000001f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0058C550[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_te0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058C58C[] = {
	3, 1, 5, 4,
	3, 0, 2, 3,
	0x8000u | 8, 5, 2, 1, 3, 4, 0, 5, 2
};

Sint16 poly_0058C5B0[] = {
	4, 6, 10, 8, 12,
	0x8000u | 10, 13, 8, 9, 6, 7, 10, 11, 12, 13, 8
};

Sint16 poly_0058C5D0[] = {
	4, 11, 7, 13, 9
};

NJS_TEX uv_0058C5DC[] = {
	{ 178, 17 },
	{ 232, 36 },
	{ 8, 66 },
	{ 73, 79 },
	{ 135, 78 },
	{ 8, 14 },
	{ 232, 36 },
	{ 135, 78 },
	{ 178, 17 },
	{ 8, 14 },
	{ 8, 66 },
	{ 73, 79 },
	{ 232, 36 },
	{ 135, 78 }
};

NJS_TEX uv_0058C614[] = {
	{ 247, 172 },
	{ 246, 90 },
	{ 125, 224 },
	{ 124, 38 },
	{ 38, 7 },
	{ 125, 224 },
	{ 39, 255 },
	{ 247, 172 },
	{ 204, 186 },
	{ 246, 90 },
	{ 204, 76 },
	{ 124, 38 },
	{ 38, 7 },
	{ 125, 224 }
};

NJS_TEX uv_0058C64C[] = {
	{ 246, 8 },
	{ 246, 247 },
	{ 0, 8 },
	{ 0, 247 }
};

NJS_MESHSET_SADX meshlist_0058C660[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0058C58C, NULL, NULL, NULL, uv_0058C5DC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0058C5B0, NULL, NULL, NULL, uv_0058C614, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0058C5D0, NULL, NULL, NULL, uv_0058C64C, NULL }
};

NJS_VECTOR vertex_0058C6B8[] = {
	{ 0.011708f, -2.112289f, -0.005879f },
	{ 0.012268f, 2.110349f, -0.015821f },
	{ 0.519218f, 0.00991f, 0.978738f },
	{ -0.988787f, 0.00543f, 0.502274f },
	{ -0.495244f, -0.006904f, -1.00045f },
	{ 1.012761f, -0.002426f, -0.523986f },
	{ 2.822401f, -0.96601f, -1.506249f },
	{ 2.172925f, -1.290033f, -2.402647f },
	{ 0.944478f, -2.185119f, 0.950999f },
	{ -0.382078f, -2.916619f, -1.188365f },
	{ 2.819591f, 0.974139f, -1.506645f },
	{ 2.169178f, 1.296833f, -2.403175f },
	{ 0.938144f, 2.189727f, 0.950107f },
	{ -0.390524f, 2.916509f, -1.189556f }
};

NJS_VECTOR normal_0058C760[] = {
	{ -0.00065f, -0.999995f, 0.003275f },
	{ 0.000065f, 0.999995f, -0.003279f },
	{ 0.456187f, 0.004333f, 0.889874f },
	{ -0.889875f, 0.002398f, 0.456199f },
	{ -0.456187f, -0.003521f, -0.889877f },
	{ 0.889875f, -0.001585f, -0.456202f },
	{ 0.937482f, -0.348005f, 0.004451f },
	{ 0.334225f, -0.475065f, -0.814006f },
	{ 0.040879f, -0.573927f, 0.817885f },
	{ -0.581147f, -0.782301f, -0.224219f },
	{ 0.935167f, 0.354122f, 0.007824f },
	{ 0.328708f, 0.481252f, -0.812618f },
	{ 0.032419f, 0.574624f, 0.817775f },
	{ -0.587635f, 0.78007f, -0.214885f }
};

NJS_MODEL_SADX attach_0058C808 = { vertex_0058C6B8, normal_0058C760, LengthOfArray<Sint32>(vertex_0058C6B8), meshlist_0058C660, matlist_0058C550, LengthOfArray<Uint16>(meshlist_0058C660), LengthOfArray<Uint16>(matlist_0058C550),{ 0.916807f, -0.00055f, -0.712219f }, 3.643842f, NULL };

NJS_OBJECT object_0058C834 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058C808, 2.844657f, 0.003269f, -0.966746f, 0, 0x10B4, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0058C868[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_te0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058C8A4[] = {
	0x8000u | 8, 1, 3, 0, 2, 4, 6, 5, 7,
	4, 0, 1, 4, 5,
	4, 6, 7, 2, 3
};

Sint16 poly_0058C8CC[] = {
	4, 5, 1, 7, 3
};

Sint16 poly_0058C8D8[] = {
	3, 8, 10, 11,
	0x8000u | 8, 13, 10, 9, 11, 12, 8, 13, 10,
	3, 9, 13, 12
};

NJS_TEX uv_0058C900[] = {
	{ 190, 232 },
	{ 23, 254 },
	{ 247, 207 },
	{ 117, 224 },
	{ 246, 55 },
	{ 116, 38 },
	{ 189, 30 },
	{ 24, 10 },
	{ 247, 207 },
	{ 190, 232 },
	{ 246, 55 },
	{ 189, 30 },
	{ 116, 38 },
	{ 67, 7 },
	{ 117, 224 },
	{ 68, 255 }
};

NJS_TEX uv_0058C940[] = {
	{ 246, 9 },
	{ 246, 246 },
	{ 0, 9 },
	{ 0, 247 }
};

NJS_TEX uv_0058C950[] = {
	{ 90, 52 },
	{ 146, 28 },
	{ 1, 10 },
	{ 206, 50 },
	{ 146, 28 },
	{ 241, 12 },
	{ 1, 10 },
	{ 15, 60 },
	{ 90, 52 },
	{ 206, 50 },
	{ 146, 28 },
	{ 241, 12 },
	{ 206, 50 },
	{ 15, 60 }
};

NJS_MESHSET_SADX meshlist_0058C988[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0058C8A4, NULL, NULL, NULL, uv_0058C900, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0058C8CC, NULL, NULL, NULL, uv_0058C940, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0058C8D8, NULL, NULL, NULL, uv_0058C950, NULL }
};

NJS_VECTOR vertex_0058C9E0[] = {
	{ 3.169117f, -2.182612f, 0.151881f },
	{ 2.124474f, -2.913282f, -2.033886f },
	{ 0.782864f, -2.667334f, 1.658764f },
	{ -0.119184f, -3.558206f, -1.29331f },
	{ 3.16272f, 2.192234f, 0.151881f },
	{ 2.115944f, 2.919845f, -2.033886f },
	{ 0.775059f, 2.669976f, 1.658764f },
	{ -0.12959f, 3.558206f, -1.293311f },
	{ -0.011703f, -2.669647f, 0.003972f },
	{ -0.00863f, 2.675463f, -0.008252f },
	{ 0.383771f, 0.016681f, 1.34922f },
	{ -1.37684f, 0.01101f, 0.396448f },
	{ -0.4041f, -0.004603f, -1.353516f },
	{ 1.356511f, 0.001066f, -0.400743f }
};

NJS_VECTOR normal_0058CA88[] = {
	{ 0.869059f, -0.419631f, 0.262003f },
	{ 0.406748f, -0.580725f, -0.705205f },
	{ -0.240474f, -0.528628f, 0.814079f },
	{ -0.599112f, -0.736623f, -0.313769f },
	{ 0.86376f, 0.4269f, 0.26772f },
	{ 0.395361f, 0.589292f, -0.704574f },
	{ -0.251283f, 0.526244f, 0.812357f },
	{ -0.610884f, 0.731287f, -0.303383f },
	{ -0.000683f, -0.999995f, 0.003204f },
	{ 0.000683f, 0.999995f, -0.003208f },
	{ 0.279916f, 0.004333f, 0.960015f },
	{ -0.960018f, 0.002398f, 0.279928f },
	{ -0.279916f, -0.003521f, -0.960018f },
	{ 0.960019f, -0.001585f, -0.279931f }
};

NJS_MODEL_SADX attach_0058CB30 = { vertex_0058C9E0, normal_0058CA88, LengthOfArray<Sint32>(vertex_0058C9E0), meshlist_0058C988, matlist_0058C868, LengthOfArray<Uint16>(meshlist_0058C988), LengthOfArray<Uint16>(matlist_0058C868),{ 0.896138f, 0, -0.187561f }, 4.360395f, NULL };

NJS_OBJECT object_0058CB5C = { NJD_EVAL_UNIT_SCL, &attach_0058CB30, 3.687287f, -0.000781f, 0.121492f, 0, 0xA2F, 0, 1, 1, 1, &object_0058C834, NULL };

NJS_MATERIAL matlist_0058CB90[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_te0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058CBB8[] = {
	6, 5, 8, 10, 3, 7, 2,
	4, 4, 0, 1, 9,
	0x8000u | 11, 2, 9, 8, 1, 5, 4, 10, 11, 7, 6, 2,
	3, 2, 3, 8
};

Sint16 poly_0058CBF0[] = {
	0x8000u | 6, 4, 0, 11, 9, 6, 2
};

NJS_TEX uv_0058CC00[] = {
	{ 171, 43 },
	{ 65, 237 },
	{ 65, 25 },
	{ 0, 255 },
	{ 0, 8 },
	{ 119, 254 },
	{ 246, 43 },
	{ 247, 218 },
	{ 171, 218 },
	{ 159, 236 },
	{ 119, 254 },
	{ 159, 236 },
	{ 65, 237 },
	{ 171, 218 },
	{ 171, 43 },
	{ 246, 43 },
	{ 65, 25 },
	{ 158, 25 },
	{ 0, 8 },
	{ 119, 7 },
	{ 119, 254 },
	{ 119, 254 },
	{ 0, 255 },
	{ 65, 237 }
};

NJS_TEX uv_0058CC60[] = {
	{ 246, 8 },
	{ 247, 254 },
	{ 114, 8 },
	{ 114, 253 },
	{ 0, 7 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_0058CC78[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0058CBB8, NULL, NULL, NULL, uv_0058CC00, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0058CBF0, NULL, NULL, NULL, uv_0058CC60, NULL }
};

NJS_VECTOR vertex_0058CCB0[] = {
	{ 2.482099f, -0.894005f, -3.825089f },
	{ 1.480969f, -0.895287f, -4.272751f },
	{ 0.790619f, -1.262734f, 0.212623f },
	{ -0.78797f, -1.265042f, -0.208663f },
	{ 2.479475f, 0.900714f, -3.825089f },
	{ 1.478345f, 0.899432f, -4.272751f },
	{ 0.786923f, 1.265039f, 0.212623f },
	{ -0.791666f, 1.262731f, -0.208663f },
	{ 0.074419f, -1.08082f, -2.789937f },
	{ 1.317192f, -1.078776f, -2.1857f },
	{ 0.071259f, 1.080426f, -2.789937f },
	{ 1.314032f, 1.082471f, -2.1857f }
};

NJS_VECTOR normal_0058CD40[] = {
	{ 0.809489f, -0.539134f, -0.232512f },
	{ -0.144748f, -0.56389f, -0.813066f },
	{ 0.426077f, -0.59646f, 0.680215f },
	{ -0.712122f, -0.59614f, 0.370809f },
	{ 0.808009f, 0.541389f, -0.23242f },
	{ -0.146277f, 0.563606f, -0.812989f },
	{ 0.424358f, 0.597737f, 0.68017f },
	{ -0.713828f, 0.594108f, 0.37079f },
	{ -0.621263f, -0.658168f, -0.425262f },
	{ 0.624536f, -0.754704f, 0.200941f },
	{ -0.623173f, 0.656342f, -0.42529f },
	{ 0.622382f, 0.756482f, 0.200937f }
};

NJS_MODEL_SADX attach_0058CDD0 = { vertex_0058CCB0, normal_0058CD40, LengthOfArray<Sint32>(vertex_0058CCB0), meshlist_0058CC78, matlist_0058CB90, LengthOfArray<Uint16>(meshlist_0058CC78), LengthOfArray<Uint16>(matlist_0058CB90),{ 0.845216f, -0.00001f, -2.030064f }, 3.312179f, NULL };

NJS_OBJECT object_0058CDFC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058CDD0, 1.487802f, -0.849818f, -0.891652f, 0, 0xFFB2B2B2, 0, 1, 1, 1, NULL, &object_0058CB5C };

NJS_MATERIAL matlist_0058CE30[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_metal0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058CE58[] = {
	10, 5, 6, 4, 2, 0, 3, 1, 7, 5, 6,
	4, 5, 4, 1, 0,
	4, 3, 2, 7, 6
};

Sint16 poly_0058CE84[] = {
	3, 8, 12, 13,
	3, 9, 11, 10,
	8, 11, 8, 10, 13, 9, 12, 11, 8
};

NJS_TEX uv_0058CEA8[] = {
	{ 200, 10 },
	{ 34, 68 },
	{ 245, 40 },
	{ 35, 194 },
	{ 245, 223 },
	{ 35, 215 },
	{ 201, 252 },
	{ 34, 47 },
	{ 200, 10 },
	{ 34, 68 },
	{ 200, 10 },
	{ 245, 40 },
	{ 201, 252 },
	{ 245, 223 },
	{ 35, 215 },
	{ 35, 194 },
	{ 34, 47 },
	{ 34, 68 }
};

NJS_TEX uv_0058CEF0[] = {
	{ 4, 252 },
	{ 112, 129 },
	{ 243, 251 },
	{ 240, 18 },
	{ 2, 78 },
	{ 110, 128 },
	{ 2, 78 },
	{ 4, 252 },
	{ 110, 128 },
	{ 243, 251 },
	{ 240, 18 },
	{ 112, 129 },
	{ 2, 78 },
	{ 4, 252 }
};

NJS_MESHSET_SADX meshlist_0058CF28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0058CE58, NULL, NULL, NULL, uv_0058CEA8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0058CE84, NULL, NULL, NULL, uv_0058CEF0, NULL }
};

NJS_VECTOR vertex_0058CF60[] = {
	{ 3.803027f, -2.73914f, 2.01812f },
	{ 3.007116f, -3.653346f, -1.130788f },
	{ 0.279709f, -1.907273f, 1.378303f },
	{ 0.280636f, -2.541308f, -1.130788f },
	{ 3.795017f, 2.73893f, 2.018121f },
	{ 2.996436f, 3.650746f, -1.130788f },
	{ 0.274146f, 1.896941f, 1.378303f },
	{ 0.273219f, 2.530976f, -1.130788f },
	{ -0.00627f, -1.597441f, 0.029941f },
	{ 0.000213f, 1.599395f, 0.017117f },
	{ -0.013072f, 0.009287f, 1.62305f },
	{ -1.602562f, 0.006053f, 0.013462f },
	{ 0.007023f, -0.003587f, -1.576007f },
	{ 1.596513f, -0.000354f, 0.033582f }
};

NJS_VECTOR normal_0058D008[] = {
	{ 0.636519f, -0.644772f, 0.423216f },
	{ 0.439777f, -0.842256f, -0.31177f },
	{ -0.345343f, -0.802189f, 0.487063f },
	{ -0.273948f, -0.84899f, -0.45185f },
	{ 0.635164f, 0.645876f, 0.42357f },
	{ 0.437787f, 0.843168f, -0.312108f },
	{ -0.34831f, 0.800372f, 0.48794f },
	{ -0.276845f, 0.847685f, -0.452533f },
	{ -0.566987f, -0.817884f, -0.09793f },
	{ -0.563272f, 0.819646f, -0.104428f },
	{ -0.621856f, 0.005914f, 0.783109f },
	{ -0.99706f, 0.002713f, -0.076582f },
	{ -0.519719f, -0.001087f, -0.854336f },
	{ 0.935476f, 0.001782f, -0.353386f }
};

NJS_MODEL_SADX attach_0058D0B0 = { vertex_0058CF60, normal_0058D008, LengthOfArray<Sint32>(vertex_0058CF60), meshlist_0058CF28, matlist_0058CE30, LengthOfArray<Uint16>(meshlist_0058CF28), LengthOfArray<Uint16>(matlist_0058CE30),{ 1.100233f, -0.0013f, 0.221057f }, 4.157669f, NULL };

NJS_OBJECT object_0058D0DC = { NJD_EVAL_UNIT_SCL, &attach_0058D0B0, 6.298108f, -0.023051f, -0.00066f, 0xFFB2B2B2, 0, 0, 1, 1, 1, &object_0058CDFC, &object_0058C51C };

NJS_OBJECT object_0058D110 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 4.897655f, 0.000001f, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0058D0DC };

NJS_OBJECT object_0058D144 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 3.324163f, 0, 0, 0, 0xFFB2B2B2, 0xFFB2B2B2, 1, 1, 1, &object_0058D110, &object_0058C10C };

NJS_OBJECT object_0058D178 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 4.393759f, 0, 0, 0, 0xFFB2B2B2, 0xFFB2B2B2, 1, 1, 1, &object_0058D144, &object_0058BF1C };

NJS_OBJECT object_0058D1AC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0xFFB2B2B2, 0xFFB2B2B2, 1, 1, 1, &object_0058D178, NULL };

NJS_OBJECT object_0058D1E0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0.058031f, -1.242977f, 5.892151f, 0, 0, 0x631B, 1, 1, 1, &object_0058D1AC, &object_0058BD70 };

NJS_MATERIAL matlist_0058D218[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_paipe, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_metal0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_head, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_paipe, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_head3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_iat0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058D348[] = {
	3, 2, 0, 19,
	0x8000u | 7, 7, 9, 28, 29, 21, 22, 6,
	0x8000u | 12, 11, 7, 27, 28, 23, 21, 10, 6, 8, 22, 23, 27,
	0x8000u | 8, 13, 12, 17, 16, 15, 14, 13, 12,
	3, 8, 10, 23,
	0x8000u | 12, 1, 5, 24, 26, 19, 18, 0, 4, 2, 20, 19, 24,
	0x8000u | 5, 3, 1, 25, 24, 20,
	0x8000u | 7, 5, 3, 26, 25, 18, 20, 4,
	5, 22, 27, 29, 11, 9
};

Sint16 poly_0058D3D8[] = {
	0x8000u | 6, 47, 50, 44, 49, 48, 51,
	0x8000u | 16, 67, 66, 63, 62, 59, 58, 55, 54, 79, 78, 75, 74, 71, 70, 67, 66,
	4, 94, 138, 96, 140,
	4, 96, 140, 98, 139,
	4, 96, 98, 92, 100,
	4, 98, 139, 100, 137,
	4, 100, 137, 102, 136,
	5, 100, 102, 92, 94, 96,
	4, 102, 136, 94, 138,
	4, 97, 142, 95, 141,
	3, 142, 97, 144,
	0x8000u | 6, 144, 145, 99, 101, 91, 93,
	4, 93, 143, 101, 145,
	0x8000u | 8, 143, 141, 93, 95, 91, 97, 99, 144
};

Sint16 poly_0058D48C[] = {
	4, 37, 33, 35, 31,
	4, 36, 38, 34, 39,
	4, 32, 36, 30, 34,
	4, 35, 39, 37, 38,
	4, 43, 41, 33, 31,
	4, 40, 42, 30, 32
};

Sint16 poly_0058D4C8[] = {
	3, 34, 39, 35,
	3, 46, 30, 34,
	0x8000u | 6, 30, 40, 46, 45, 31, 41,
	3, 35, 31, 46,
	3, 46, 34, 35
};

Sint16 poly_0058D4F8[] = {
	4, 49, 51, 45, 40,
	4, 45, 41, 49, 50,
	4, 54, 119, 58, 118,
	4, 58, 118, 62, 116,
	4, 74, 120, 78, 121,
	4, 78, 121, 54, 119,
	4, 69, 65, 68, 64,
	4, 66, 115, 70, 117,
	4, 69, 108, 65, 109,
	4, 61, 110, 57, 111,
	4, 77, 114, 73, 113
};

Sint16 poly_0058D568[] = {
	4, 47, 50, 43, 41,
	4, 42, 40, 48, 51
};

Sint16 poly_0058D57C[] = {
	0x8000u | 10, 72, 73, 76, 77, 52, 53, 56, 57, 60, 61
};

Sint16 poly_0058D594[] = {
	4, 70, 117, 74, 120,
	4, 62, 116, 66, 115,
	6, 57, 111, 53, 112, 77, 114
};

Sint16 poly_0058D5B8[] = {
	4, 73, 69, 72, 68,
	4, 65, 61, 64, 60
};

Sint16 poly_0058D5CC[] = {
	3, 67, 71, 75,
	0x8000u | 6, 55, 79, 59, 75, 63, 67
};

Sint16 poly_0058D5E4[] = {
	5, 105, 104, 80, 103, 107,
	4, 107, 106, 80, 105,
	16, 125, 134, 124, 132, 123, 129, 122, 131, 128, 130, 127, 133, 126, 135, 125, 134
};

Sint16 poly_0058D620[] = {
	4, 84, 82, 83, 81,
	4, 82, 90, 81, 89,
	4, 86, 84, 85, 83,
	4, 88, 86, 87, 85,
	4, 90, 88, 89, 87,
	4, 103, 104, 81, 83,
	4, 107, 103, 89, 81,
	4, 104, 105, 83, 85,
	4, 105, 106, 85, 87,
	4, 106, 107, 87, 89
};

Sint16 poly_0058D684[] = {
	4, 65, 109, 61, 110,
	4, 73, 113, 69, 108
};

Sint16 poly_0058D698[] = {
	4, 108, 123, 109, 122,
	4, 109, 122, 110, 128,
	4, 110, 128, 111, 127,
	4, 111, 127, 112, 126,
	4, 112, 126, 114, 125,
	4, 114, 125, 113, 124,
	4, 113, 124, 108, 123,
	4, 116, 130, 115, 131,
	4, 115, 131, 117, 129,
	4, 117, 129, 120, 132,
	4, 120, 132, 121, 134,
	4, 121, 134, 119, 135,
	4, 119, 135, 118, 133,
	4, 118, 133, 116, 130
};

Sint16 poly_0058D724[] = {
	4, 142, 139, 141, 140,
	4, 144, 137, 142, 139,
	4, 145, 136, 144, 137,
	4, 143, 138, 145, 136,
	4, 141, 140, 143, 138
};

NJS_TEX uv_0058D758[] = {
	{ 388, 356 },
	{ 356, 374 },
	{ 356, 166 },
	{ 36, 78 },
	{ 4, 104 },
	{ 36, 80 },
	{ 4, 105 },
	{ 36, 166 },
	{ 4, 180 },
	{ 36, 374 },
	{ 36, 134 },
	{ 36, 78 },
	{ 36, 134 },
	{ 36, 80 },
	{ 36, 206 },
	{ 36, 166 },
	{ 36, 385 },
	{ 36, 374 },
	{ 5, 356 },
	{ 4, 180 },
	{ 36, 206 },
	{ 36, 134 },
	{ 357, 376 },
	{ 35, 376 },
	{ 357, 386 },
	{ 35, 386 },
	{ 357, 328 },
	{ 35, 328 },
	{ 357, 376 },
	{ 35, 376 },
	{ 5, 356 },
	{ 36, 385 },
	{ 36, 206 },
	{ 356, 78 },
	{ 356, 133 },
	{ 356, 79 },
	{ 356, 133 },
	{ 356, 166 },
	{ 356, 206 },
	{ 356, 374 },
	{ 356, 385 },
	{ 388, 356 },
	{ 388, 179 },
	{ 356, 166 },
	{ 356, 79 },
	{ 388, 103 },
	{ 356, 78 },
	{ 388, 105 },
	{ 356, 79 },
	{ 388, 179 },
	{ 356, 133 },
	{ 388, 103 },
	{ 356, 133 },
	{ 388, 105 },
	{ 356, 206 },
	{ 388, 179 },
	{ 356, 385 },
	{ 4, 180 },
	{ 36, 134 },
	{ 4, 105 },
	{ 36, 134 },
	{ 4, 104 }
};

NJS_TEX uv_0058D850[] = {
	{ 239, 197 },
	{ 214, 44 },
	{ 118, 197 },
	{ 118, 48 },
	{ 6, 197 },
	{ 29, 47 },
	{ 213, 218 },
	{ 236, 52 },
	{ 148, 218 },
	{ 154, 52 },
	{ 67, 218 },
	{ 51, 52 },
	{ 30, 218 },
	{ 5, 52 },
	{ 67, 218 },
	{ 51, 52 },
	{ 148, 218 },
	{ 154, 52 },
	{ 213, 218 },
	{ 236, 52 },
	{ 213, 218 },
	{ 236, 52 },
	{ 236, 228 },
	{ 236, 108 },
	{ 10, 228 },
	{ 10, 228 },
	{ 236, 226 },
	{ 236, 228 },
	{ 10, 226 },
	{ 10, 226 },
	{ 236, 228 },
	{ 236, 226 },
	{ 247, 139 },
	{ 236, 104 },
	{ 236, 104 },
	{ 236, 226 },
	{ 10, 104 },
	{ 10, 104 },
	{ 236, 31 },
	{ 236, 104 },
	{ 10, 31 },
	{ 10, 31 },
	{ 236, 104 },
	{ 236, 31 },
	{ 247, 139 },
	{ 236, 108 },
	{ 236, 228 },
	{ 236, 108 },
	{ 236, 31 },
	{ 10, 108 },
	{ 10, 108 },
	{ 10, 226 },
	{ 10, 226 },
	{ 10, 228 },
	{ 236, 228 },
	{ 236, 226 },
	{ 10, 226 },
	{ 10, 104 },
	{ 236, 104 },
	{ 10, 31 },
	{ 10, 104 },
	{ 10, 31 },
	{ 0, 139 },
	{ 10, 108 },
	{ 10, 108 },
	{ 10, 108 },
	{ 10, 31 },
	{ 236, 31 },
	{ 236, 108 },
	{ 10, 228 },
	{ 10, 108 },
	{ 10, 228 },
	{ 0, 139 },
	{ 10, 226 },
	{ 10, 104 },
	{ 10, 104 }
};

NJS_TEX uv_0058D980[] = {
	{ 249, 5 },
	{ 0, 4 },
	{ 250, 253 },
	{ 0, 255 },
	{ 249, 5 },
	{ 0, 4 },
	{ 250, 253 },
	{ 0, 255 },
	{ 249, 5 },
	{ 0, 4 },
	{ 250, 253 },
	{ 0, 255 },
	{ 0, 255 },
	{ 250, 253 },
	{ 0, 4 },
	{ 249, 5 },
	{ 0, 4 },
	{ 0, 255 },
	{ 249, 5 },
	{ 250, 253 },
	{ 250, 253 },
	{ 249, 5 },
	{ 0, 255 },
	{ 0, 4 }
};

NJS_TEX uv_0058D9E0[] = {
	{ 67, 16 },
	{ 210, 130 },
	{ 173, 16 },
	{ 210, 130 },
	{ 67, 16 },
	{ 173, 16 },
	{ 0, 154 },
	{ 0, 254 },
	{ 249, 154 },
	{ 250, 254 },
	{ 0, 154 },
	{ 0, 254 },
	{ 67, 16 },
	{ 173, 16 },
	{ 210, 130 },
	{ 124, 34 },
	{ 250, 201 },
	{ 0, 201 }
};

NJS_TEX uv_0058DA28[] = {
	{ 1, 178 },
	{ 249, 176 },
	{ 1, 252 },
	{ 248, 253 },
	{ 248, 253 },
	{ 1, 252 },
	{ 249, 176 },
	{ 1, 178 },
	{ 250, 255 },
	{ 250, 4 },
	{ 0, 254 },
	{ 0, 5 },
	{ 250, 255 },
	{ 249, 4 },
	{ 0, 254 },
	{ 0, 5 },
	{ 250, 255 },
	{ 249, 4 },
	{ 0, 254 },
	{ 0, 5 },
	{ 250, 255 },
	{ 250, 4 },
	{ 0, 254 },
	{ 0, 5 },
	{ 248, 251 },
	{ 3, 253 },
	{ 249, 202 },
	{ 1, 200 },
	{ 250, 255 },
	{ 249, 4 },
	{ 0, 254 },
	{ 0, 5 },
	{ 251, 254 },
	{ 251, 4 },
	{ 1, 254 },
	{ 0, 4 },
	{ 251, 254 },
	{ 251, 4 },
	{ 1, 254 },
	{ 0, 4 },
	{ 251, 254 },
	{ 251, 4 },
	{ 1, 254 },
	{ 0, 4 }
};

NJS_TEX uv_0058DAD8[] = {
	{ 138, 4 },
	{ 136, 218 },
	{ 0, 4 },
	{ 0, 254 },
	{ 0, 4 },
	{ 0, 254 },
	{ 138, 4 },
	{ 136, 218 }
};

NJS_TEX uv_0058DAF8[] = {
	{ 131, 107 },
	{ 142, 75 },
	{ 91, 114 },
	{ 61, 88 },
	{ 54, 139 },
	{ 25, 139 },
	{ 91, 165 },
	{ 61, 191 },
	{ 131, 171 },
	{ 142, 203 }
};

NJS_TEX uv_0058DB20[] = {
	{ 0, 254 },
	{ 0, 5 },
	{ 249, 254 },
	{ 250, 4 },
	{ 0, 254 },
	{ 0, 5 },
	{ 249, 254 },
	{ 250, 4 },
	{ 249, 254 },
	{ 250, 5 },
	{ 0, 255 },
	{ 0, 5 },
	{ 249, 254 },
	{ 250, 5 }
};

NJS_TEX uv_0058DB58[] = {
	{ 202, 20 },
	{ 141, 19 },
	{ 164, 58 },
	{ 131, 58 },
	{ 202, 20 },
	{ 141, 19 },
	{ 164, 58 },
	{ 131, 58 }
};

NJS_TEX uv_0058DB78[] = {
	{ 246, 186 },
	{ 246, 77 },
	{ 158, 8 },
	{ -1, 132 },
	{ 45, 30 },
	{ 46, 234 },
	{ 158, 8 },
	{ 158, 255 },
	{ 246, 186 }
};

NJS_TEX uv_0058DBA0[] = {
	{ 199, 152 },
	{ 114, 209 },
	{ 114, 114 },
	{ 30, 151 },
	{ 62, 58 },
	{ 62, 58 },
	{ 167, 58 },
	{ 114, 114 },
	{ 199, 152 },
	{ 49, 53 },
	{ 49, 227 },
	{ 152, 53 },
	{ 152, 227 },
	{ 234, 53 },
	{ 235, 227 },
	{ 234, 53 },
	{ 235, 227 },
	{ 152, 53 },
	{ 152, 227 },
	{ 49, 53 },
	{ 49, 227 },
	{ 3, 53 },
	{ 3, 227 },
	{ 49, 53 },
	{ 49, 227 }
};

NJS_TEX uv_0058DC08[] = {
	{ 0, 255 },
	{ 246, 254 },
	{ 0, 40 },
	{ 246, 40 },
	{ 0, 255 },
	{ 246, 254 },
	{ 0, 40 },
	{ 246, 40 },
	{ 0, 255 },
	{ 246, 254 },
	{ 0, 40 },
	{ 246, 40 },
	{ 0, 255 },
	{ 246, 254 },
	{ 0, 40 },
	{ 246, 40 },
	{ 0, 255 },
	{ 246, 254 },
	{ 0, 40 },
	{ 246, 40 },
	{ 224, 121 },
	{ 18, 121 },
	{ 222, 46 },
	{ 21, 49 },
	{ 224, 121 },
	{ 18, 121 },
	{ 222, 46 },
	{ 21, 49 },
	{ 224, 121 },
	{ 18, 121 },
	{ 222, 46 },
	{ 21, 49 },
	{ 224, 121 },
	{ 18, 121 },
	{ 222, 46 },
	{ 21, 49 },
	{ 224, 121 },
	{ 18, 121 },
	{ 222, 46 },
	{ 21, 49 }
};

NJS_TEX uv_0058DCA8[] = {
	{ 249, 254 },
	{ 250, 4 },
	{ 0, 254 },
	{ 0, 4 },
	{ 249, 254 },
	{ 250, 4 },
	{ 0, 254 },
	{ 0, 4 }
};

NJS_TEX uv_0058DCC8[] = {
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 },
	{ 237, 249 },
	{ 236, 20 },
	{ 5, 249 },
	{ 3, 20 }
};

NJS_TEX uv_0058DDA8[] = {
	{ 34, 9 },
	{ 208, 9 },
	{ 33, 250 },
	{ 208, 250 },
	{ 34, 9 },
	{ 208, 9 },
	{ 33, 250 },
	{ 208, 250 },
	{ 34, 9 },
	{ 208, 9 },
	{ 33, 250 },
	{ 208, 250 },
	{ 34, 9 },
	{ 208, 9 },
	{ 33, 250 },
	{ 208, 250 },
	{ 34, 9 },
	{ 208, 9 },
	{ 33, 250 },
	{ 208, 250 }
};

NJS_MESHSET_SADX meshlist_0058DDF8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_0058D348, NULL, NULL, NULL, uv_0058D758, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 14, poly_0058D3D8, NULL, NULL, NULL, uv_0058D850, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_0058D48C, NULL, NULL, NULL, uv_0058D980, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 5, poly_0058D4C8, NULL, NULL, NULL, uv_0058D9E0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 11, poly_0058D4F8, NULL, NULL, NULL, uv_0058DA28, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0058D568, NULL, NULL, NULL, uv_0058DAD8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_0058D57C, NULL, NULL, NULL, uv_0058DAF8, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 3, poly_0058D594, NULL, NULL, NULL, uv_0058DB20, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_0058D5B8, NULL, NULL, NULL, uv_0058DB58, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 2, poly_0058D5CC, NULL, NULL, NULL, uv_0058DB78, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 3, poly_0058D5E4, NULL, NULL, NULL, uv_0058DBA0, NULL },
	{ NJD_MESHSET_TRIMESH | 11, 10, poly_0058D620, NULL, NULL, NULL, uv_0058DC08, NULL },
	{ NJD_MESHSET_TRIMESH | 12, 2, poly_0058D684, NULL, NULL, NULL, uv_0058DCA8, NULL },
	{ NJD_MESHSET_TRIMESH | 13, 14, poly_0058D698, NULL, NULL, NULL, uv_0058DCC8, NULL },
	{ NJD_MESHSET_TRIMESH | 14, 5, poly_0058D724, NULL, NULL, NULL, uv_0058DDA8, NULL }
};

NJS_VECTOR vertex_0058DFA0[] = {
	{ 5.436084f, -2.416005f, 2.106287f },
	{ 1.949838f, -0.06829f, 2.100649f },
	{ 5.21655f, -2.271755f, 2.50778f },
	{ 2.053907f, -0.266404f, 2.510921f },
	{ 5.013867f, -2.498011f, 2.106286f },
	{ 2.178155f, -0.509494f, 2.100649f },
	{ 5.436084f, -2.416f, -1.961241f },
	{ 1.949776f, -0.075099f, -1.96536f },
	{ 5.216551f, -2.271749f, -2.358384f },
	{ 2.053846f, -0.273211f, -2.371577f },
	{ 5.013867f, -2.498005f, -1.961241f },
	{ 2.178092f, -0.516302f, -1.965361f },
	{ 5.436021f, -2.424384f, -1.969964f },
	{ 5.436021f, -2.424389f, 2.11501f },
	{ 5.218216f, -2.050156f, -1.969964f },
	{ 5.218216f, -2.050161f, 2.115011f },
	{ 5.013803f, -2.50639f, -1.969965f },
	{ 5.013803f, -2.506396f, 2.11501f },
	{ 5.024761f, -1.081393f, 2.103467f },
	{ 5.428322f, -0.767137f, 2.103468f },
	{ 5.226913f, -0.872952f, 2.509351f },
	{ 5.428292f, -0.77054f, -1.9633f },
	{ 5.226883f, -0.876354f, -2.36498f },
	{ 5.02473f, -1.084795f, -1.9633f },
	{ 4.542176f, -0.078568f, 2.102059f },
	{ 4.412327f, -0.281984f, 2.510136f },
	{ 4.299905f, -0.505361f, 2.102059f },
	{ 4.299859f, -0.510467f, -1.96433f },
	{ 4.54213f, -0.083675f, -1.96433f },
	{ 4.412281f, -0.287088f, -2.368278f },
	{ 1.419974f, 0.113865f, -3.151442f },
	{ 1.419974f, 0.113864f, 3.151442f },
	{ 1.420213f, -2.352562f, -4.00233f },
	{ 1.420213f, -2.352562f, 4.00233f },
	{ -1.500725f, 0.113582f, -3.151442f },
	{ -1.500725f, 0.113581f, 3.151442f },
	{ -2.458723f, -2.352937f, -4.00233f },
	{ -2.458723f, -2.352937f, 4.00233f },
	{ -4.558286f, -2.353048f, 0 },
	{ -3.600285f, 0.113472f, 0 },
	{ 2.919187f, -0.407885f, -2.011881f },
	{ 2.919187f, -0.407885f, 2.011881f },
	{ 2.919374f, -2.336837f, -2.555088f },
	{ 2.919374f, -2.336837f, 2.555088f },
	{ 2.942573f, -2.336835f, 0 },
	{ 3.611156f, -0.407818f, 0 },
	{ 2.440629f, 0.113964f, 0 },
	{ 2.308585f, -2.336897f, 2.309361f },
	{ 2.372756f, -2.33689f, -2.119381f },
	{ 2.944236f, -0.710513f, 0 },
	{ 2.312009f, -0.670295f, 1.833148f },
	{ 2.368133f, -0.701674f, -1.678255f },
	{ -4.563334f, -2.281176f, 0.000001f },
	{ -6.113596f, -2.281419f, 0.000001f },
	{ -7.414507f, -10.26916f, -0.00002f },
	{ -6.112694f, -11.60868f, -0.00002f },
	{ -2.668007f, -2.281084f, -1.957028f },
	{ -4.228686f, -2.281235f, -3.914057f },
	{ -5.03952f, -10.26893f, -4.931715f },
	{ -4.227783f, -11.60849f, -3.91406f },
	{ -0.550331f, -2.28088f, -2.440374f },
	{ 0.006669f, -2.280825f, -4.880748f },
	{ 0.297027f, -10.26841f, -6.149746f },
	{ 0.007571f, -11.60808f, -4.880752f },
	{ 1.147914f, -2.280716f, -1.086068f },
	{ 3.40316f, -2.280497f, -2.172137f },
	{ 4.576605f, -10.268f, -2.736895f },
	{ 3.404062f, -11.60776f, -2.17214f },
	{ 1.147914f, -2.280717f, 1.08607f },
	{ 3.403159f, -2.280499f, 2.172139f },
	{ 4.576604f, -10.268f, 2.736892f },
	{ 3.404061f, -11.60776f, 2.172136f },
	{ -0.550331f, -2.280881f, 2.440375f },
	{ 0.006668f, -2.280828f, 4.88075f },
	{ 0.297026f, -10.26842f, 6.149742f },
	{ 0.007571f, -11.60809f, 4.880746f },
	{ -2.668007f, -2.281086f, 1.957029f },
	{ -4.228686f, -2.281237f, 3.914057f },
	{ -5.03952f, -10.26893f, 4.93171f },
	{ -4.227783f, -11.6085f, 3.914054f },
	{ 4.67486f, -4.957242f, -0.00001f },
	{ 4.595971f, -5.206506f, -0.758976f },
	{ 3.842873f, -5.420854f, -1.194684f },
	{ 4.677943f, -5.748525f, -0.003317f },
	{ 3.971904f, -6.274035f, -0.00522f },
	{ 4.596905f, -5.212677f, 0.756924f },
	{ 3.844342f, -5.430568f, 1.191455f },
	{ 4.464849f, -4.339484f, 0.471119f },
	{ 3.636475f, -4.056097f, 0.741577f },
	{ 4.464272f, -4.33567f, -0.465759f },
	{ 3.635567f, -4.050093f, -0.733138f },
	{ 0.075728f, -1.201375f, -8.780683f },
	{ 0.074516f, -1.189749f, 10.04296f },
	{ -1.178278f, -0.841116f, -8.040914f },
	{ -1.159425f, -0.835253f, 9.303192f },
	{ -0.676278f, -2.211121f, -8.040915f },
	{ -0.665458f, -2.183337f, 9.30319f },
	{ 0.864967f, -2.185692f, -8.040915f },
	{ 0.851128f, -2.158315f, 9.30319f },
	{ 1.31551f, -0.799971f, -8.040914f },
	{ 1.294461f, -0.794766f, 9.303191f },
	{ 0.052715f, 0.031024f, -8.040914f },
	{ 0.051872f, 0.022931f, 9.303191f },
	{ 4.197824f, -5.192397f, -0.508514f },
	{ 4.252765f, -5.55555f, -0.002222f },
	{ 4.198451f, -5.196533f, 0.507139f },
	{ 4.109947f, -4.611498f, 0.31565f },
	{ 4.109559f, -4.608942f, -0.312058f },
	{ 4.109577f, -6.926294f, 2.528151f },
	{ 4.109578f, -6.926293f, -2.528151f },
	{ 0.156403f, -6.926662f, -5.680704f },
	{ -4.773126f, -6.927126f, -4.555573f },
	{ -6.966973f, -6.927334f, -0.00001f },
	{ 0.156402f, -6.926667f, 5.680702f },
	{ -4.773126f, -6.92713f, 4.55557f },
	{ 4.343091f, -8.317698f, -2.632523f },
	{ 0.226715f, -8.318089f, -5.915225f },
	{ 4.343091f, -8.317699f, 2.632521f },
	{ -4.906323f, -8.318579f, -4.743644f },
	{ -7.19074f, -8.318798f, -0.00001f },
	{ 0.226714f, -8.318094f, 5.915222f },
	{ -4.906323f, -8.318583f, 4.74364f },
	{ 3.592384f, -7.361179f, -2.193287f },
	{ 3.592384f, -7.36118f, 2.193286f },
	{ 0.162825f, -7.361565f, 4.928268f },
	{ -4.113767f, -7.36204f, 3.952165f },
	{ -6.017029f, -7.362249f, -0.00001f },
	{ -4.113767f, -7.362036f, -3.952168f },
	{ 0.162825f, -7.361559f, -4.92827f },
	{ 3.610641f, -7.91396f, 2.195743f },
	{ 0.177241f, -7.914343f, -4.933791f },
	{ 3.610641f, -7.913958f, -2.195744f },
	{ 0.17724f, -7.914349f, 4.933789f },
	{ -4.104142f, -7.914826f, -3.956595f },
	{ -4.104142f, -7.91483f, 3.956591f },
	{ -6.009536f, -7.915043f, -0.00001f },
	{ 0.052715f, 0.031019f, 8.116152f },
	{ 1.31551f, -0.799975f, 8.114138f },
	{ -1.178278f, -0.841119f, 8.117148f },
	{ 0.864968f, -2.185695f, 8.12074f },
	{ -0.676278f, -2.211123f, 8.117732f },
	{ -0.676278f, -2.211123f, 6.81884f },
	{ 0.864968f, -2.185695f, 6.822736f },
	{ -1.178278f, -0.841119f, 6.819101f },
	{ 1.31551f, -0.799975f, 6.818291f },
	{ 0.052715f, 0.031019f, 6.822409f }
};

NJS_VECTOR normal_0058E678[] = {
	{ 0.726805f, -0.579649f, -0.368459f },
	{ 0.005258f, 0.922666f, -0.385564f },
	{ -0.010653f, -0.341132f, 0.939955f },
	{ 0.00352f, 0.320762f, 0.947153f },
	{ -0.608602f, -0.721856f, -0.329434f },
	{ -0.001514f, -0.814566f, -0.580069f },
	{ 0.727227f, -0.579483f, 0.367887f },
	{ 0.004217f, 0.923317f, 0.384016f },
	{ -0.010552f, -0.341166f, -0.939944f },
	{ 0.004321f, 0.32014f, -0.94736f },
	{ -0.608734f, -0.722057f, 0.328751f },
	{ -0.00146f, -0.816648f, 0.577134f },
	{ 0.910653f, -0.413172f, 0 },
	{ 0.910653f, -0.413172f, 0 },
	{ -0.052907f, 0.998599f, 0.000001f },
	{ -0.052908f, 0.998599f, 0.000001f },
	{ -0.783384f, -0.621538f, -0.00001f },
	{ -0.783384f, -0.621538f, -0.00001f },
	{ -0.727294f, -0.294829f, -0.619773f },
	{ 0.811824f, 0.41242f, -0.413341f },
	{ 0.250575f, 0.099937f, 0.962925f },
	{ 0.81228f, 0.413936f, 0.410924f },
	{ 0.251189f, 0.098025f, -0.962962f },
	{ -0.729719f, -0.29345f, 0.617574f },
	{ 0.305664f, 0.83486f, -0.457797f },
	{ 0.041817f, 0.218666f, 0.974903f },
	{ -0.245087f, -0.784392f, -0.569791f },
	{ -0.245314f, -0.786135f, 0.567286f },
	{ 0.305073f, 0.836159f, 0.455816f },
	{ 0.042963f, 0.217798f, -0.975048f },
	{ 0.277706f, 0.748828f, -0.601777f },
	{ 0.291837f, 0.749379f, 0.594358f },
	{ 0.311765f, 0.300981f, -0.901228f },
	{ 0.333028f, 0.29892f, 0.894282f },
	{ -0.277107f, 0.778192f, -0.563586f },
	{ -0.277107f, 0.778191f, 0.563586f },
	{ -0.471446f, 0.445641f, -0.761014f },
	{ -0.471446f, 0.445641f, 0.761014f },
	{ -0.860934f, 0.508716f, 0 },
	{ -0.60605f, 0.795427f, 0 },
	{ 0.930555f, 0.30073f, -0.208874f },
	{ 0.952821f, 0.243888f, 0.180693f },
	{ 0.991898f, 0.058387f, -0.112826f },
	{ 0.998951f, 0.011416f, -0.044343f },
	{ 0.999998f, -0.001023f, 0.001798f },
	{ 0.999981f, -0.004288f, 0.004484f },
	{ 0.256323f, 0.966591f, 0 },
	{ 0.839243f, -0.193855f, -0.508027f },
	{ 0.916092f, -0.144734f, 0.373936f },
	{ 0.804381f, -0.5941f, 0.004067f },
	{ 0.825536f, -0.505948f, -0.250014f },
	{ 0.864682f, -0.478174f, 0.153866f },
	{ -0.000121f, 1, 0.000023f },
	{ -0.72539f, 0.688338f, 0.000013f },
	{ -0.956628f, -0.291312f, 0 },
	{ -0.474838f, -0.880073f, 0 },
	{ -0.00092f, 1, -0.00004f },
	{ -0.45192f, 0.687421f, -0.568525f },
	{ -0.595915f, -0.289816f, -0.748928f },
	{ -0.296023f, -0.880054f, -0.371315f },
	{ -0.00097f, 1, 0 },
	{ 0.163432f, 0.685345f, -0.709642f },
	{ 0.214459f, -0.286467f, -0.933779f },
	{ 0.105773f, -0.88001f, -0.463027f },
	{ -0.00097f, 1, 0 },
	{ 0.657785f, 0.683681f, -0.316068f },
	{ 0.864174f, -0.283797f, -0.415526f },
	{ 0.427995f, -0.879975f, -0.206068f },
	{ -0.00097f, 1, 0 },
	{ 0.657785f, 0.683681f, 0.316069f },
	{ 0.864174f, -0.283797f, 0.415526f },
	{ 0.427994f, -0.879976f, 0.206067f },
	{ -0.00097f, 1, 0 },
	{ 0.163432f, 0.685345f, 0.709643f },
	{ 0.214459f, -0.286468f, 0.933779f },
	{ 0.105773f, -0.880011f, 0.463026f },
	{ -0.000124f, 1, 0.000025f },
	{ -0.451932f, 0.68741f, 0.568529f },
	{ -0.595915f, -0.289816f, 0.748927f },
	{ -0.296023f, -0.880054f, 0.371315f },
	{ 0.988761f, 0.149504f, -0.00001f },
	{ 0.949464f, 0.016592f, -0.313437f },
	{ 0.530191f, -0.177478f, -0.829095f },
	{ 0.979862f, -0.199674f, -0.001303f },
	{ 0.597074f, -0.802177f, -0.003714f },
	{ 0.949821f, 0.013996f, 0.312482f },
	{ 0.530956f, -0.18441f, 0.82709f },
	{ 0.899518f, 0.389964f, 0.196967f },
	{ 0.421605f, 0.759254f, 0.495765f },
	{ 0.899307f, 0.391585f, -0.194699f },
	{ 0.421124f, 0.763225f, -0.490044f },
	{ 0.000005f, -0.00054f, -1 },
	{ 0.000005f, -0.00054f, 1 },
	{ -0.860848f, 0.266515f, -0.433487f },
	{ -0.858473f, 0.268291f, 0.437086f },
	{ -0.512438f, -0.742802f, -0.430874f },
	{ -0.511307f, -0.738726f, 0.439145f },
	{ 0.53806f, -0.724362f, -0.431035f },
	{ 0.536391f, -0.72035f, 0.439751f },
	{ 0.850888f, 0.296904f, -0.433402f },
	{ 0.848092f, 0.298613f, 0.437687f },
	{ -0.015605f, 0.90307f, -0.429211f },
	{ -0.015793f, 0.902823f, 0.429721f },
	{ 0.898621f, 0.257892f, 0.354925f },
	{ 0.859926f, 0.510417f, 0.001522f },
	{ 0.898172f, 0.260834f, -0.353912f },
	{ 0.963787f, -0.153859f, -0.21781f },
	{ 0.964067f, -0.155623f, 0.215303f },
	{ 0.844566f, -0.338655f, 0.414753f },
	{ 0.844566f, -0.338655f, -0.414753f },
	{ 0.194251f, -0.369143f, -0.908845f },
	{ -0.579141f, -0.394985f, -0.71315f },
	{ -0.914886f, -0.403713f, 0 },
	{ 0.194251f, -0.369144f, 0.908845f },
	{ -0.579141f, -0.394985f, 0.713149f },
	{ 0.760829f, 0.532426f, -0.371028f },
	{ 0.178663f, 0.5466f, -0.818112f },
	{ 0.760829f, 0.532425f, 0.371028f },
	{ -0.521117f, 0.558967f, -0.644975f },
	{ -0.826332f, 0.563184f, 0 },
	{ 0.178663f, 0.5466f, 0.818113f },
	{ -0.521117f, 0.558967f, 0.644975f },
	{ 0.783922f, -0.504785f, -0.361467f },
	{ 0.783922f, -0.504785f, 0.361467f },
	{ 0.210651f, -0.553187f, 0.805984f },
	{ -0.48335f, -0.606051f, 0.631724f },
	{ -0.77953f, -0.626364f, 0 },
	{ -0.48335f, -0.60605f, -0.631724f },
	{ 0.21065f, -0.553187f, -0.805984f },
	{ 0.708323f, 0.624942f, 0.328216f },
	{ 0.192226f, 0.642205f, -0.742039f },
	{ 0.708323f, 0.624942f, -0.328216f },
	{ 0.192226f, 0.642205f, 0.742039f },
	{ -0.456191f, 0.660679f, -0.596149f },
	{ -0.456191f, 0.660678f, 0.596149f },
	{ -0.744534f, 0.667585f, 0 },
	{ -0.01704f, 0.999849f, 0.003396f },
	{ 0.944282f, 0.329049f, 0.007623f },
	{ -0.955379f, 0.295302f, 0.006853f },
	{ 0.593678f, -0.804602f, 0.01273f },
	{ -0.565009f, -0.824994f, 0.012194f },
	{ -0.565909f, -0.824468f, 0 },
	{ 0.594361f, -0.804198f, 0 },
	{ -0.954867f, 0.297034f, 0 },
	{ 0.943681f, 0.330858f, 0 },
	{ -0.017188f, 0.999852f, 0 }
};

NJS_MODEL_SADX attach_0058ED50 = { vertex_0058DFA0, normal_0058E678, LengthOfArray<Sint32>(vertex_0058DFA0), meshlist_0058DDF8, matlist_0058D218, LengthOfArray<Uint16>(meshlist_0058DDF8), LengthOfArray<Uint16>(matlist_0058D218),{ -0.989211f, -5.747356f, 0.631139f }, 11.39591f, NULL };

NJS_OBJECT object_0058ED7C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0058ED50, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0058D1E0, &object_0058971C };

NJS_OBJECT object_0058EDB0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 9.930777f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0058ED7C };

NJS_OBJECT object_0058EDE4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0x7FF9, 1, 1, 1, &object_0058EDB0, NULL };

NJS_OBJECT object_0058EE18 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 2.1f, 0, 0, 0, 0, 1, 1, 1, &object_0058EDE4, NULL };

NJS_MATERIAL matlist_0058EE50[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_yellow0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058EEC8[] = {
	4, 3, 2, 1, 0
};

Sint16 poly_0058EED4[] = {
	4, 5, 11, 7, 10,
	4, 9, 4, 8, 6,
	0x8000u | 20, 4, 5, 9, 11, 8, 10, 6, 7, 37, 5, 36, 4, 29, 6, 31, 37, 30, 36, 28, 29
};

Sint16 poly_0058EF14[] = {
	4, 2, 32, 0, 34,
	4, 3, 33, 2, 32,
	4, 1, 35, 3, 33,
	4, 0, 34, 1, 35
};

Sint16 poly_0058EF3C[] = {
	4, 15, 14, 13, 12,
	4, 19, 18, 17, 16,
	4, 23, 22, 21, 20,
	4, 27, 26, 25, 24
};

Sint16 poly_0058EF64[] = {
	6, 34, 29, 35, 28, 33, 30,
	4, 31, 32, 30, 33
};

Sint16 poly_0058EF7C[] = {
	4, 29, 34, 31, 32
};

NJS_TEX uv_0058EF88[] = {
	{ 241, 9 },
	{ 241, 253 },
	{ 9, 9 },
	{ 10, 254 }
};

NJS_TEX uv_0058EF98[] = {
	{ 247, 252 },
	{ 213, 153 },
	{ 247, 250 },
	{ 96, 92 },
	{ 213, 154 },
	{ 36, 136 },
	{ 96, 93 },
	{ 36, 134 },
	{ 36, 136 },
	{ 247, 252 },
	{ 213, 154 },
	{ 213, 153 },
	{ 96, 93 },
	{ 96, 92 },
	{ 36, 134 },
	{ 247, 250 },
	{ 246, 130 },
	{ 247, 252 },
	{ 246, 132 },
	{ 36, 136 },
	{ 0, 46 },
	{ 36, 134 },
	{ 0, 45 },
	{ 246, 130 },
	{ 245, 10 },
	{ 246, 132 },
	{ 245, 12 },
	{ 0, 46 }
};

NJS_TEX uv_0058F008[] = {
	{ 228, 8 },
	{ 228, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 228, 8 },
	{ 228, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 228, 8 },
	{ 228, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 228, 8 },
	{ 228, 254 },
	{ 0, 8 },
	{ 0, 255 }
};

NJS_TEX uv_0058F048[] = {
	{ 993, 28 },
	{ 993, 1017 },
	{ 4, 27 },
	{ 5, 1016 },
	{ 993, 28 },
	{ 993, 1017 },
	{ 4, 27 },
	{ 5, 1016 },
	{ 993, 28 },
	{ 993, 1017 },
	{ 4, 27 },
	{ 5, 1016 },
	{ 993, 28 },
	{ 993, 1017 },
	{ 4, 27 },
	{ 5, 1016 }
};

NJS_TEX uv_0058F088[] = {
	{ 0, 55 },
	{ 0, 254 },
	{ 231, 55 },
	{ 231, 253 },
	{ 17, 55 },
	{ 16, 254 },
	{ 0, 254 },
	{ 0, 55 },
	{ 231, 253 },
	{ 231, 55 }
};

NJS_TEX uv_0058F0B0[] = {
	{ 0, 254 },
	{ 0, 58 },
	{ 249, 254 },
	{ 250, 56 }
};

NJS_MESHSET_SADX meshlist_0058F0C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0058EEC8, NULL, NULL, NULL, uv_0058EF88, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0058EED4, NULL, NULL, NULL, uv_0058EF98, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0058EF14, NULL, NULL, NULL, uv_0058F008, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0058EF3C, NULL, NULL, NULL, uv_0058F048, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0058EF64, NULL, NULL, NULL, uv_0058F088, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0058EF7C, NULL, NULL, NULL, uv_0058F0B0, NULL }
};

NJS_VECTOR vertex_0058F168[] = {
	{ -1.178331f, -0.018106f, -0.748199f },
	{ -1.787598f, 1.013934f, 1.766756f },
	{ 1.251112f, -0.009363f, -0.748199f },
	{ 1.683034f, 1.026424f, 1.766756f },
	{ -2.337322f, -6.735431f, -1.766756f },
	{ -3.820215f, -8.538262f, 1.766756f },
	{ 2.268224f, -6.717233f, -1.766756f },
	{ 3.403653f, -8.512264f, 1.766756f },
	{ -1.434373f, -6.073052f, -0.762797f },
	{ -2.135401f, -7.022547f, 1.212083f },
	{ 1.391823f, -6.062881f, -0.762797f },
	{ 1.902019f, -7.008017f, 1.212083f },
	{ -2.416008f, -7.764361f, 1.469198f },
	{ -2.419156f, -6.88948f, 0.73508f },
	{ 2.215685f, -7.747693f, 1.469198f },
	{ 2.212538f, -6.872811f, 0.73508f },
	{ -2.334932f, -7.517883f, 0.839613f },
	{ -2.338081f, -6.643002f, 0.105496f },
	{ 2.132838f, -7.501805f, 0.839613f },
	{ 2.129689f, -6.626925f, 0.105496f },
	{ -2.105674f, -7.217254f, 0.090108f },
	{ -2.108822f, -6.342373f, -0.644009f },
	{ 1.901422f, -7.202833f, 0.090108f },
	{ 1.898272f, -6.327951f, -0.644009f },
	{ -1.974337f, -6.946959f, -0.599435f },
	{ -1.977485f, -6.072078f, -1.333552f },
	{ 1.768143f, -6.93349f, -0.599435f },
	{ 1.764995f, -6.058609f, -1.333552f },
	{ -3.781865f, -4.818104f, 1.749306f },
	{ -2.113575f, -5.350041f, -2.380077f },
	{ 3.430423f, -4.792126f, 1.749306f },
	{ 2.111834f, -5.331856f, -2.380077f },
	{ 1.814478f, -1.766146f, -1.564138f },
	{ 2.556729f, -0.4131f, 1.758031f },
	{ -1.776148f, -1.779611f, -1.564138f },
	{ -2.784731f, -0.432334f, 1.758031f },
	{ -3.80104f, -6.678184f, 1.758031f },
	{ 3.417038f, -6.652195f, 1.758031f }
};

NJS_VECTOR normal_0058F330[] = {
	{ -0.343446f, 0.691364f, -0.635658f },
	{ -0.439384f, 0.774413f, 0.455221f },
	{ 0.377193f, 0.687268f, -0.620796f },
	{ 0.441465f, 0.769301f, 0.461827f },
	{ -0.401799f, -0.724173f, -0.560474f },
	{ -0.531849f, -0.789377f, 0.306627f },
	{ 0.430061f, -0.723556f, -0.53992f },
	{ 0.491433f, -0.804559f, 0.333434f },
	{ 0.229099f, -0.972741f, 0.035888f },
	{ 0.297231f, -0.736873f, -0.607183f },
	{ -0.256985f, -0.965853f, 0.032976f },
	{ -0.31528f, -0.723002f, -0.614708f },
	{ 0.002313f, -0.642783f, -0.766044f },
	{ 0.002313f, -0.642783f, -0.766045f },
	{ 0.002313f, -0.642783f, -0.766044f },
	{ 0.002313f, -0.642783f, -0.766045f },
	{ 0.002313f, -0.642784f, -0.766044f },
	{ 0.002313f, -0.642784f, -0.766044f },
	{ 0.002313f, -0.642784f, -0.766044f },
	{ 0.002313f, -0.642784f, -0.766044f },
	{ 0.002313f, -0.642783f, -0.766044f },
	{ 0.002313f, -0.642783f, -0.766044f },
	{ 0.002313f, -0.642783f, -0.766044f },
	{ 0.002313f, -0.642783f, -0.766044f },
	{ 0.002313f, -0.642784f, -0.766044f },
	{ 0.002313f, -0.642784f, -0.766044f },
	{ 0.002313f, -0.642784f, -0.766044f },
	{ 0.002313f, -0.642784f, -0.766044f },
	{ -0.844354f, 0.086433f, 0.528768f },
	{ -0.50167f, -0.031425f, -0.864488f },
	{ 0.824508f, 0.073895f, 0.561004f },
	{ 0.53411f, -0.033216f, -0.844762f },
	{ 0.552596f, 0.3405f, -0.760721f },
	{ 0.785664f, 0.303785f, 0.538932f },
	{ -0.520647f, 0.347871f, -0.779687f },
	{ -0.791107f, 0.34137f, 0.507559f },
	{ -0.830804f, -0.000268f, 0.556566f },
	{ 0.808027f, -0.006334f, 0.589111f }
};

NJS_MODEL_SADX attach_0058F4F8 = { vertex_0058F168, normal_0058F330, LengthOfArray<Sint32>(vertex_0058F168), meshlist_0058F0C0, matlist_0058EE50, LengthOfArray<Uint16>(meshlist_0058F0C0), LengthOfArray<Uint16>(matlist_0058EE50),{ -0.194896f, -3.755919f, -0.30666f }, 5.212472f, NULL };

NJS_OBJECT object_0058F524 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058F4F8, 1, 0, -3.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0058F558[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_yellow0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green7, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058F5D0[] = {
	4, 1, 0, 3, 2
};

Sint16 poly_0058F5DC[] = {
	19, 36, 37, 7, 6, 11, 10, 9, 8, 5, 4, 36, 28, 37, 30, 6, 31, 4, 29, 28,
	5, 11, 9, 7, 5, 36,
	4, 8, 10, 4, 6
};

Sint16 poly_0058F61C[] = {
	4, 0, 34, 2, 32,
	4, 2, 32, 3, 33,
	4, 3, 33, 1, 35,
	4, 1, 35, 0, 34
};

Sint16 poly_0058F644[] = {
	4, 13, 12, 15, 14,
	4, 17, 16, 19, 18,
	4, 21, 20, 23, 22,
	4, 25, 24, 27, 26
};

Sint16 poly_0058F66C[] = {
	6, 29, 34, 28, 35, 30, 33,
	4, 30, 33, 31, 32
};

Sint16 poly_0058F684[] = {
	4, 31, 32, 29, 34
};

NJS_TEX uv_0058F690[] = {
	{ 9, 9 },
	{ 10, 254 },
	{ 241, 9 },
	{ 241, 253 }
};

NJS_TEX uv_0058F6A0[] = {
	{ 0, 132 },
	{ 0, 130 },
	{ 0, 250 },
	{ 210, 134 },
	{ 33, 153 },
	{ 150, 92 },
	{ 33, 154 },
	{ 150, 93 },
	{ 0, 252 },
	{ 210, 136 },
	{ 0, 132 },
	{ 1, 12 },
	{ 0, 130 },
	{ 1, 10 },
	{ 210, 134 },
	{ 247, 45 },
	{ 210, 136 },
	{ 247, 46 },
	{ 1, 12 },
	{ 33, 153 },
	{ 33, 154 },
	{ 0, 250 },
	{ 0, 252 },
	{ 0, 132 },
	{ 150, 93 },
	{ 150, 92 },
	{ 210, 136 },
	{ 210, 134 }
};

NJS_TEX uv_0058F710[] = {
	{ 0, 8 },
	{ 0, 255 },
	{ 228, 8 },
	{ 228, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 228, 8 },
	{ 228, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 228, 8 },
	{ 228, 254 },
	{ 0, 8 },
	{ 0, 255 },
	{ 228, 8 },
	{ 228, 254 }
};

NJS_TEX uv_0058F750[] = {
	{ 4, 27 },
	{ 5, 1016 },
	{ 993, 28 },
	{ 993, 1017 },
	{ 4, 27 },
	{ 5, 1016 },
	{ 993, 28 },
	{ 993, 1017 },
	{ 4, 27 },
	{ 5, 1016 },
	{ 993, 28 },
	{ 993, 1017 },
	{ 4, 27 },
	{ 5, 1016 },
	{ 993, 28 },
	{ 993, 1017 }
};

NJS_TEX uv_0058F790[] = {
	{ 0, 254 },
	{ 0, 55 },
	{ 231, 253 },
	{ 231, 55 },
	{ 16, 254 },
	{ 17, 55 },
	{ 231, 253 },
	{ 231, 55 },
	{ 0, 254 },
	{ 0, 55 }
};

NJS_TEX uv_0058F7B8[] = {
	{ 249, 254 },
	{ 250, 56 },
	{ 0, 254 },
	{ 0, 58 }
};

NJS_MESHSET_SADX meshlist_0058F7C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0058F5D0, NULL, NULL, NULL, uv_0058F690, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0058F5DC, NULL, NULL, NULL, uv_0058F6A0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0058F61C, NULL, NULL, NULL, uv_0058F710, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0058F644, NULL, NULL, NULL, uv_0058F750, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0058F66C, NULL, NULL, NULL, uv_0058F790, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 1, poly_0058F684, NULL, NULL, NULL, uv_0058F7B8, NULL }
};

NJS_VECTOR vertex_0058F870[] = {
	{ -1.178331f, -0.018106f, 0.748199f },
	{ -1.787598f, 1.013934f, -1.766756f },
	{ 1.251112f, -0.009363f, 0.748199f },
	{ 1.683034f, 1.026424f, -1.766756f },
	{ -2.337322f, -6.735431f, 1.766756f },
	{ -3.820215f, -8.538262f, -1.766756f },
	{ 2.268224f, -6.717233f, 1.766756f },
	{ 3.403653f, -8.512264f, -1.766756f },
	{ -1.434373f, -6.073052f, 0.762797f },
	{ -2.135401f, -7.022547f, -1.212083f },
	{ 1.391823f, -6.062881f, 0.762797f },
	{ 1.902019f, -7.008017f, -1.212083f },
	{ -2.416008f, -7.764361f, -1.469198f },
	{ -2.419156f, -6.88948f, -0.73508f },
	{ 2.215685f, -7.747693f, -1.469198f },
	{ 2.212538f, -6.872811f, -0.73508f },
	{ -2.334932f, -7.517883f, -0.839613f },
	{ -2.338081f, -6.643002f, -0.105496f },
	{ 2.132838f, -7.501805f, -0.839613f },
	{ 2.129689f, -6.626925f, -0.105496f },
	{ -2.105674f, -7.217254f, -0.090108f },
	{ -2.108822f, -6.342373f, 0.644009f },
	{ 1.901422f, -7.202833f, -0.090108f },
	{ 1.898272f, -6.327951f, 0.644009f },
	{ -1.974337f, -6.946959f, 0.599435f },
	{ -1.977485f, -6.072078f, 1.333552f },
	{ 1.768143f, -6.93349f, 0.599435f },
	{ 1.764995f, -6.058609f, 1.333552f },
	{ -3.781865f, -4.818104f, -1.749306f },
	{ -2.113575f, -5.350041f, 2.380077f },
	{ 3.430423f, -4.792126f, -1.749306f },
	{ 2.111834f, -5.331856f, 2.380077f },
	{ 1.814478f, -1.766146f, 1.564138f },
	{ 2.556729f, -0.4131f, -1.758031f },
	{ -1.776148f, -1.779611f, 1.564138f },
	{ -2.784731f, -0.432334f, -1.758031f },
	{ -3.80104f, -6.678184f, -1.758031f },
	{ 3.417038f, -6.652195f, -1.758031f }
};

NJS_VECTOR normal_0058FA38[] = {
	{ -0.343446f, 0.691364f, 0.635658f },
	{ -0.439384f, 0.774413f, -0.455221f },
	{ 0.377193f, 0.687268f, 0.620796f },
	{ 0.441465f, 0.769301f, -0.461827f },
	{ -0.401799f, -0.724173f, 0.560474f },
	{ -0.531849f, -0.789377f, -0.306627f },
	{ 0.430061f, -0.723556f, 0.53992f },
	{ 0.491433f, -0.804559f, -0.333434f },
	{ 0.229099f, -0.972741f, -0.035888f },
	{ 0.297231f, -0.736873f, 0.607183f },
	{ -0.256985f, -0.965853f, -0.032976f },
	{ -0.31528f, -0.723002f, 0.614708f },
	{ 0.002313f, -0.642783f, 0.766044f },
	{ 0.002313f, -0.642783f, 0.766045f },
	{ 0.002313f, -0.642783f, 0.766044f },
	{ 0.002313f, -0.642783f, 0.766045f },
	{ 0.002313f, -0.642784f, 0.766044f },
	{ 0.002313f, -0.642784f, 0.766044f },
	{ 0.002313f, -0.642784f, 0.766044f },
	{ 0.002313f, -0.642784f, 0.766044f },
	{ 0.002313f, -0.642783f, 0.766044f },
	{ 0.002313f, -0.642783f, 0.766044f },
	{ 0.002313f, -0.642783f, 0.766044f },
	{ 0.002313f, -0.642783f, 0.766044f },
	{ 0.002313f, -0.642784f, 0.766044f },
	{ 0.002313f, -0.642784f, 0.766044f },
	{ 0.002313f, -0.642784f, 0.766044f },
	{ 0.002313f, -0.642784f, 0.766044f },
	{ -0.844354f, 0.086433f, -0.528768f },
	{ -0.50167f, -0.031425f, 0.864488f },
	{ 0.824508f, 0.073895f, -0.561004f },
	{ 0.53411f, -0.033216f, 0.844762f },
	{ 0.552596f, 0.3405f, 0.760721f },
	{ 0.785664f, 0.303785f, -0.538932f },
	{ -0.520647f, 0.347871f, 0.779687f },
	{ -0.791107f, 0.34137f, -0.507559f },
	{ -0.830804f, -0.000268f, -0.556566f },
	{ 0.808027f, -0.006334f, -0.589111f }
};

NJS_MODEL_SADX attach_0058FC00 = { vertex_0058F870, normal_0058FA38, LengthOfArray<Sint32>(vertex_0058F870), meshlist_0058F7C8, matlist_0058F558, LengthOfArray<Uint16>(meshlist_0058F7C8), LengthOfArray<Uint16>(matlist_0058F558),{ -0.194896f, -3.755919f, 0.30666f }, 5.212472f, NULL };

NJS_OBJECT object_0058FC2C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0058FC00, 1, 0, 3.5f, 0, 0, 0, 1, 1, 1, NULL, &object_0058F524 };

NJS_MATERIAL matlist_0058FC60[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_paipe, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_black0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0058FC88[] = {
	9, 2, 19, 20, 24, 25, 31, 32, 1, 3,
	0x8000u | 12, 19, 0, 2, 4, 20, 18, 25, 26, 32, 30, 3, 5,
	0x8000u | 10, 4, 0, 18, 19, 26, 24, 30, 31, 5, 1,
	0x8000u | 8, 16, 17, 12, 13, 14, 15, 16, 17,
	3, 8, 10, 23,
	9, 6, 22, 21, 29, 28, 35, 34, 9, 7,
	7, 22, 27, 29, 33, 35, 11, 9,
	0x8000u | 14, 27, 23, 22, 8, 6, 10, 21, 23, 28, 27, 34, 33, 7, 11
};

Sint16 poly_0058FD28[] = {
	0x8000u | 5, 42, 36, 40, 38, 39,
	4, 42, 41, 40, 39,
	12, 44, 36, 46, 38, 47, 39, 37, 41, 43, 42, 44, 36,
	4, 44, 46, 45, 47,
	5, 47, 37, 45, 43, 44
};

NJS_TEX uv_0058FD70[] = {
	{ 39, 77 },
	{ 26, 185 },
	{ 38, 184 },
	{ 57, 254 },
	{ 64, 237 },
	{ 216, 254 },
	{ 236, 238 },
	{ 216, 255 },
	{ 236, 239 },
	{ 26, 185 },
	{ 27, 66 },
	{ 39, 77 },
	{ 51, 59 },
	{ 38, 184 },
	{ 51, 173 },
	{ 64, 237 },
	{ 71, 219 },
	{ 236, 238 },
	{ 215, 219 },
	{ 236, 239 },
	{ 215, 219 },
	{ 52, 20 },
	{ 26, 20 },
	{ 51, 173 },
	{ 26, 185 },
	{ 71, 219 },
	{ 57, 254 },
	{ 215, 219 },
	{ 216, 254 },
	{ 215, 219 },
	{ 216, 255 },
	{ 52, 19 },
	{ 52, 20 },
	{ 26, 19 },
	{ 27, 65 },
	{ 39, 77 },
	{ 39, 95 },
	{ 52, 19 },
	{ 52, 20 },
	{ 39, 77 },
	{ 51, 59 },
	{ 51, 173 },
	{ 26, 20 },
	{ 38, 184 },
	{ 26, 184 },
	{ 64, 237 },
	{ 57, 253 },
	{ 238, 238 },
	{ 214, 254 },
	{ 239, 238 },
	{ 214, 254 },
	{ 38, 184 },
	{ 71, 219 },
	{ 64, 237 },
	{ 214, 219 },
	{ 238, 238 },
	{ 214, 219 },
	{ 239, 238 },
	{ 71, 219 },
	{ 51, 173 },
	{ 38, 184 },
	{ 39, 77 },
	{ 26, 20 },
	{ 52, 20 },
	{ 26, 184 },
	{ 51, 173 },
	{ 57, 253 },
	{ 71, 219 },
	{ 214, 254 },
	{ 214, 219 },
	{ 214, 254 },
	{ 214, 219 }
};

NJS_TEX uv_0058FE90[] = {
	{ 7, 253 },
	{ 106, 253 },
	{ 144, 253 },
	{ 229, 253 },
	{ 229, 10 },
	{ 7, 253 },
	{ 144, 10 },
	{ 144, 253 },
	{ 229, 10 },
	{ 7, 253 },
	{ 106, 253 },
	{ 144, 253 },
	{ 229, 253 },
	{ 144, 10 },
	{ 229, 10 },
	{ 106, 10 },
	{ 144, 10 },
	{ 7, 10 },
	{ 7, 253 },
	{ 7, 253 },
	{ 106, 253 },
	{ 7, 253 },
	{ 144, 253 },
	{ 7, 10 },
	{ 144, 10 },
	{ 144, 10 },
	{ 106, 10 },
	{ 7, 10 },
	{ 7, 10 },
	{ 7, 253 }
};

NJS_MESHSET_SADX meshlist_0058FF08[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_0058FC88, NULL, NULL, NULL, uv_0058FD70, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_0058FD28, NULL, NULL, NULL, uv_0058FE90, NULL }
};

NJS_VECTOR vertex_0058FF40[] = {
	{ -4.359756f, 3.03958f, 4.057474f },
	{ 0.001615f, -0.23595f, 1.323777f },
	{ -4.079519f, 2.83832f, 4.552633f },
	{ 0.463742f, 0.04043f, 1.336256f },
	{ -3.796744f, 3.153921f, 4.057473f },
	{ -0.016663f, 0.379559f, 1.323777f },
	{ -4.359756f, 3.03958f, -4.030291f },
	{ -0.027177f, -0.226449f, -1.38895f },
	{ -4.079519f, 2.83832f, -4.534548f },
	{ 0.532055f, 0.049932f, -1.393426f },
	{ -3.796744f, 3.15392f, -4.030291f },
	{ -0.043741f, 0.38906f, -1.388949f },
	{ -4.359667f, 3.051275f, -4.047498f },
	{ -4.359667f, 3.051275f, 4.074682f },
	{ -4.081871f, 2.529198f, -4.047498f },
	{ -4.081871f, 2.529198f, 4.074682f },
	{ -3.796656f, 3.165617f, -4.047498f },
	{ -3.796656f, 3.165617f, 4.074682f },
	{ -3.812133f, 1.177742f, 4.051912f },
	{ -4.375144f, 0.977125f, 4.051913f },
	{ -4.094164f, 0.986041f, 4.555544f },
	{ -4.375099f, 0.981876f, -4.034355f },
	{ -4.09412f, 0.990792f, -4.546782f },
	{ -3.812089f, 1.182492f, -4.034355f },
	{ -3.673923f, -0.221264f, 4.04913f },
	{ -3.492757f, 0.062482f, 4.556998f },
	{ -3.335898f, 0.374081f, 4.04913f },
	{ -3.335832f, 0.381207f, -4.036387f },
	{ -3.673857f, -0.214137f, -4.036387f },
	{ -3.492692f, 0.069608f, -4.552897f },
	{ -0.007951f, 0.378979f, 4.046645f },
	{ 0.007588f, -0.233954f, 4.046728f },
	{ 0.461609f, 0.04348f, 4.558252f },
	{ -0.024474f, 0.388194f, -4.038198f },
	{ -0.043458f, -0.224346f, -4.038074f },
	{ 0.518563f, 0.052377f, -4.558252f },
	{ -4.046221f, 2.803798f, -3.074546f },
	{ -4.046221f, 2.803798f, 3.051933f },
	{ -2.877948f, 2.803798f, -3.074546f },
	{ -2.877948f, 2.803798f, 3.051933f },
	{ -3.685204f, 3.914891f, -3.074546f },
	{ -3.685204f, 3.91489f, 3.051933f },
	{ -4.991373f, 3.490491f, -3.074546f },
	{ -4.991373f, 3.490491f, 3.051933f },
	{ -4.991372f, 2.117105f, -3.074546f },
	{ -4.991372f, 2.117105f, 3.051933f },
	{ -3.685204f, 1.692706f, -3.074546f },
	{ -3.685204f, 1.692706f, 3.051933f }
};

NJS_VECTOR normal_00590180[] = {
	{ -0.726583f, 0.585932f, -0.358833f },
	{ -0.492185f, -0.870485f, 0.00308f },
	{ -0.005896f, 0.32486f, 0.945744f },
	{ 0.999228f, -0.039281f, -0.000531f },
	{ 0.611183f, 0.729539f, -0.306966f },
	{ -0.486492f, 0.873683f, 0.001962f },
	{ -0.725187f, 0.584399f, 0.364116f },
	{ -0.51669f, -0.856166f, -0.003282f },
	{ -0.00592f, 0.330076f, -0.943936f },
	{ 0.999303f, -0.037257f, -0.002348f },
	{ 0.610182f, 0.728225f, 0.312035f },
	{ -0.514127f, 0.857714f, 0.000168f },
	{ -0.904446f, 0.426589f, 0 },
	{ -0.904446f, 0.426589f, 0 },
	{ 0.033831f, -0.999428f, 0 },
	{ 0.033831f, -0.999428f, 0 },
	{ 0.780756f, 0.624836f, 0 },
	{ 0.780756f, 0.624836f, 0 },
	{ 0.805549f, 0.197921f, -0.558496f },
	{ -0.861848f, -0.222777f, -0.455618f },
	{ -0.186532f, -0.052871f, 0.981025f },
	{ -0.860065f, -0.224539f, 0.458116f },
	{ -0.188467f, -0.048852f, -0.980864f },
	{ 0.803787f, 0.195294f, 0.561949f },
	{ -0.461347f, -0.78492f, -0.413593f },
	{ -0.149285f, -0.245789f, 0.957759f },
	{ 0.378829f, 0.685054f, -0.622246f },
	{ 0.378482f, 0.682099f, 0.625693f },
	{ -0.459894f, -0.784865f, 0.415313f },
	{ -0.15085f, -0.245088f, -0.957693f },
	{ -0.064366f, 0.991388f, -0.114048f },
	{ -0.093812f, -0.989445f, -0.110446f },
	{ 0.698294f, -0.011896f, 0.715712f },
	{ -0.107679f, 0.990018f, 0.090938f },
	{ -0.138381f, -0.984061f, 0.111687f },
	{ 0.711315f, -0.00513f, -0.702854f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.803211f, 0, -0.595694f },
	{ 0.803211f, 0, 0.595694f },
	{ 0.248206f, 0.763899f, -0.595694f },
	{ 0.248206f, 0.763899f, 0.595694f },
	{ -0.649812f, 0.472116f, -0.595694f },
	{ -0.649812f, 0.472116f, 0.595694f },
	{ -0.649811f, -0.472116f, -0.595694f },
	{ -0.649811f, -0.472116f, 0.595694f },
	{ 0.248206f, -0.763899f, -0.595694f },
	{ 0.248206f, -0.763899f, 0.595694f }
};

NJS_MODEL_SADX attach_005903C0 = { vertex_0058FF40, normal_00590180, LengthOfArray<Sint32>(vertex_0058FF40), meshlist_0058FF08, matlist_0058FC60, LengthOfArray<Uint16>(meshlist_0058FF08), LengthOfArray<Uint16>(matlist_0058FC60),{ -2.229659f, 1.83947f, 0 }, 5.384578f, NULL };

NJS_OBJECT object_005903EC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_005903C0, 0.006276f, -5.562633f, 0.011307f, 0, 0, 0x2AC7, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00590420[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_kosi0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_metal0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_kosi0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_iat0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_metal0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00590488[] = {
	4, 32, 30, 34, 28,
	4, 33, 35, 31, 29,
	3, 28, 26, 34,
	4, 31, 29, 30, 28,
	3, 29, 35, 27,
	4, 27, 35, 26, 34,
	4, 35, 33, 34, 32,
	4, 29, 27, 28, 26,
	4, 33, 31, 32, 30
};

Sint16 poly_005904E0[] = {
	3, 0, 2, 1,
	8, 3, 2, 4, 0, 5, 1, 3, 2,
	3, 4, 5, 3
};

Sint16 poly_00590508[] = {
	3, 10, 8, 6,
	4, 11, 9, 10, 8,
	3, 9, 11, 7,
	3, 12, 10, 6,
	4, 13, 11, 12, 10,
	3, 11, 13, 7,
	3, 14, 12, 6,
	4, 15, 13, 14, 12,
	3, 13, 15, 7,
	3, 16, 14, 6,
	3, 15, 17, 7,
	3, 8, 16, 6,
	0x8000u | 6, 9, 8, 17, 16, 15, 14,
	3, 17, 9, 7
};

Sint16 poly_00590584[] = {
	4, 25, 21, 23, 19,
	4, 23, 22, 25, 24,
	4, 20, 24, 18, 22
};

Sint16 poly_005905A4[] = {
	4, 18, 19, 20, 21
};

NJS_TEX uv_005905B0[] = {
	{ 121, 232 },
	{ 92, 233 },
	{ 78, 245 },
	{ 79, 221 },
	{ 121, 232 },
	{ 92, 233 },
	{ 78, 245 },
	{ 79, 221 },
	{ 79, 221 },
	{ 78, 245 },
	{ 121, 232 },
	{ 246, 201 },
	{ 246, 52 },
	{ 0, 202 },
	{ 0, 53 },
	{ 79, 221 },
	{ 78, 245 },
	{ 121, 232 },
	{ 246, 201 },
	{ 246, 52 },
	{ 0, 202 },
	{ 0, 53 },
	{ 246, 201 },
	{ 246, 52 },
	{ 0, 202 },
	{ 0, 53 },
	{ 246, 201 },
	{ 246, 52 },
	{ 0, 202 },
	{ 0, 53 },
	{ 246, 201 },
	{ 246, 52 },
	{ 0, 202 },
	{ 0, 53 }
};

NJS_TEX uv_00590638[] = {
	{ 0, 13 },
	{ 0, 70 },
	{ 247, 13 },
	{ 247, 70 },
	{ 0, 70 },
	{ 0, 226 },
	{ 0, 13 },
	{ 247, 226 },
	{ 247, 13 },
	{ 247, 70 },
	{ 0, 70 },
	{ 0, 226 },
	{ 247, 226 },
	{ 247, 70 }
};

NJS_TEX uv_00590670[] = {
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 },
	{ 1, 13 },
	{ 0, 119 },
	{ 245, 13 },
	{ 246, 118 },
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 },
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 },
	{ 246, 118 },
	{ 245, 13 },
	{ 0, 119 },
	{ 1, 13 },
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 },
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 },
	{ 246, 209 },
	{ 245, 116 },
	{ 0, 211 },
	{ 0, 116 },
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 },
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 },
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 },
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 },
	{ 245, 97 },
	{ 1, 97 },
	{ 245, 234 },
	{ 1, 234 },
	{ 245, 235 },
	{ 1, 235 },
	{ 176, 101 },
	{ 78, 101 },
	{ 121, 249 }
};

NJS_TEX uv_00590730[] = {
	{ 246, 254 },
	{ 1, 254 },
	{ 246, 9 },
	{ 1, 10 },
	{ 1, 15 },
	{ 502, 15 },
	{ 3, 511 },
	{ 500, 511 },
	{ 246, 254 },
	{ 1, 254 },
	{ 246, 9 },
	{ 1, 10 }
};

NJS_TEX uv_00590760[] = {
	{ 5, 254 },
	{ 241, 254 },
	{ 31, 24 },
	{ 215, 24 }
};

NJS_MESHSET_SADX meshlist_00590770[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_00590488, NULL, NULL, NULL, uv_005905B0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_005904E0, NULL, NULL, NULL, uv_00590638, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 14, poly_00590508, NULL, NULL, NULL, uv_00590670, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_00590584, NULL, NULL, NULL, uv_00590730, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_005905A4, NULL, NULL, NULL, uv_00590760, NULL }
};

NJS_VECTOR vertex_00590800[] = {
	{ 0.168464f, 0.290819f, -4.682803f },
	{ 0.168464f, 0.290818f, 4.682803f },
	{ -0.377935f, 0.144412f, -4.682803f },
	{ -0.377935f, 0.144411f, 4.682803f },
	{ 0.022057f, -0.25558f, -4.682803f },
	{ 0.022057f, -0.25558f, 4.682803f },
	{ -0.044604f, -0.019904f, -3.518512f },
	{ -0.044604f, -0.019904f, 3.518512f },
	{ 0.985492f, 0.321459f, -2.706548f },
	{ 0.985492f, 0.321458f, 2.706548f },
	{ -0.050942f, 1.065262f, -2.706548f },
	{ -0.050942f, 1.065262f, 2.706548f },
	{ -1.078617f, 0.309403f, -2.706548f },
	{ -1.078616f, 0.309403f, 2.706548f },
	{ -0.67732f, -0.901547f, -2.706548f },
	{ -0.67732f, -0.901547f, 2.706548f },
	{ 0.598369f, -0.894096f, -2.706548f },
	{ 0.598369f, -0.894097f, 2.706548f },
	{ -0.672519f, -4.527257f, -2.823629f },
	{ -0.672519f, -4.527257f, 2.823629f },
	{ -0.672519f, -0.887701f, -2.188861f },
	{ -0.672519f, -0.887701f, 2.188861f },
	{ 0.578642f, -4.526678f, -3.331882f },
	{ 0.578642f, -4.526678f, 3.331882f },
	{ 0.578642f, -0.887701f, -2.582855f },
	{ 0.578642f, -0.887701f, 2.582855f },
	{ 1.247075f, -5.951133f, -3.769883f },
	{ 1.247075f, -5.951134f, 3.769883f },
	{ 0.764637f, -4.48709f, -3.769883f },
	{ 0.764637f, -4.487091f, 3.769883f },
	{ -0.776832f, -4.493501f, -3.769883f },
	{ -0.776833f, -4.493502f, 3.769883f },
	{ -1.247075f, -5.961508f, -3.769883f },
	{ -1.247075f, -5.961508f, 3.769883f },
	{ 0.003769f, -6.862374f, -3.769883f },
	{ 0.003769f, -6.862375f, 3.769883f }
};

NJS_VECTOR normal_005909B0[] = {
	{ 0.588348f, 0.588348f, -0.5547f },
	{ 0.588349f, 0.588348f, 0.5547f },
	{ -0.803699f, 0.21535f, -0.5547f },
	{ -0.803699f, 0.21535f, 0.5547f },
	{ 0.215351f, -0.803699f, -0.5547f },
	{ 0.215351f, -0.803699f, 0.5547f },
	{ 0, 0, -1 },
	{ 0, 0, 1 },
	{ 0.873433f, 0.289446f, -0.391582f },
	{ 0.873433f, 0.289446f, 0.391582f },
	{ -0.005374f, 0.920128f, -0.391582f },
	{ -0.005374f, 0.920128f, 0.391582f },
	{ -0.876754f, 0.279224f, -0.391582f },
	{ -0.876754f, 0.279224f, 0.391582f },
	{ -0.536489f, -0.747558f, -0.391582f },
	{ -0.53649f, -0.747558f, 0.391582f },
	{ 0.545185f, -0.74124f, -0.391582f },
	{ 0.545185f, -0.74124f, 0.391582f },
	{ -0.78393f, 0.106671f, -0.611617f },
	{ -0.783303f, 0.125328f, 0.608876f },
	{ -0.843928f, 0.092171f, -0.528479f },
	{ -0.843493f, 0.108292f, 0.526111f },
	{ 0.524177f, 0.146319f, -0.838945f },
	{ 0.525049f, 0.171583f, 0.833596f },
	{ 0.624037f, 0.134255f, -0.769775f },
	{ 0.624654f, 0.157436f, 0.764867f },
	{ 0.764925f, -0.245026f, -0.595694f },
	{ 0.764925f, -0.245026f, 0.595694f },
	{ 0.469409f, 0.65177f, -0.595694f },
	{ 0.469409f, 0.65177f, 0.595694f },
	{ -0.474814f, 0.647842f, -0.595694f },
	{ -0.474815f, 0.647842f, 0.595694f },
	{ -0.76286f, -0.251381f, -0.595694f },
	{ -0.76286f, -0.251381f, 0.595694f },
	{ 0.003341f, -0.803204f, -0.595694f },
	{ 0.003341f, -0.803204f, 0.595694f }
};

NJS_MODEL_SADX attach_00590B60 = { vertex_00590800, normal_005909B0, LengthOfArray<Sint32>(vertex_00590800), meshlist_00590770, matlist_00590420, LengthOfArray<Uint16>(meshlist_00590770), LengthOfArray<Uint16>(matlist_00590420),{ 0, -2.898556f, 0 }, 6.135185f, NULL };

NJS_OBJECT object_00590B8C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00590B60, -3.257226f, 1.002486f, 0, 0, 0, 0, 1, 1, 1, &object_005903EC, &object_0058FC2C };

NJS_MATERIAL matlist_00590BC0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00590C24[] = {
	4, 14, 12, 6, 4,
	4, 14, 15, 12, 13,
	4, 13, 15, 5, 7,
	4, 15, 14, 7, 6
};

Sint16 poly_00590C4C[] = {
	4, 7, 3, 5, 1,
	4, 2, 6, 0, 4
};

Sint16 poly_00590C60[] = {
	4, 1, 0, 5, 4
};

Sint16 poly_00590C6C[] = {
	6, 7, 6, 3, 2, 11, 10,
	4, 8, 10, 0, 2,
	4, 9, 8, 1, 0,
	4, 11, 9, 3, 1
};

Sint16 poly_00590C98[] = {
	4, 12, 13, 4, 5
};

NJS_TEX uv_00590CA8[] = {
	{ 0, 9 },
	{ 246, 8 },
	{ 1, 254 },
	{ 245, 253 },
	{ 2, 172 },
	{ 1, 198 },
	{ 243, 172 },
	{ 245, 199 },
	{ 246, 8 },
	{ 0, 9 },
	{ 245, 253 },
	{ 1, 254 },
	{ 1, 9 },
	{ 39, 8 },
	{ 0, 255 },
	{ 34, 255 }
};

NJS_TEX uv_00590CE8[] = {
	{ 18, 5 },
	{ 17, 254 },
	{ 233, 5 },
	{ 230, 253 },
	{ 230, 253 },
	{ 233, 5 },
	{ 17, 254 },
	{ 18, 5 }
};

NJS_TEX uv_00590D08[] = {
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 5 },
	{ 0, 5 }
};

NJS_TEX uv_00590D18[] = {
	{ 231, 5 },
	{ 16, 5 },
	{ 231, 254 },
	{ 16, 254 },
	{ 231, 5 },
	{ 16, 5 },
	{ 16, 5 },
	{ 231, 5 },
	{ 16, 254 },
	{ 231, 254 },
	{ 16, 5 },
	{ 231, 5 },
	{ 16, 254 },
	{ 231, 254 },
	{ 16, 5 },
	{ 231, 5 },
	{ 16, 254 },
	{ 231, 254 }
};

NJS_TEX uv_00590D60[] = {
	{ 244, 245 },
	{ 244, 8 },
	{ 1, 245 },
	{ 1, 9 }
};

NJS_MESHSET_SADX meshlist_00590D70[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00590C24, NULL, NULL, NULL, uv_00590CA8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00590C4C, NULL, NULL, NULL, uv_00590CE8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00590C60, NULL, NULL, NULL, uv_00590D08, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_00590C6C, NULL, NULL, NULL, uv_00590D18, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00590C98, NULL, NULL, NULL, uv_00590D60, NULL }
};

NJS_VECTOR vertex_00590E00[] = {
	{ 3.79253f, -2.690933f, -1.0296f },
	{ 3.79253f, -2.690933f, 1.0296f },
	{ 3.79253f, 1.701068f, -0.468f },
	{ 3.79253f, 1.701068f, 0.468f },
	{ 9.039862f, -3.052438f, -1.0296f },
	{ 9.039862f, -3.052438f, 1.0296f },
	{ 9.217973f, 1.882796f, -0.468f },
	{ 9.217973f, 1.882796f, 0.468f },
	{ -0.250475f, -1.05036f, -0.66924f },
	{ -0.250475f, -1.05036f, 0.66924f },
	{ -0.250476f, 1.119289f, -0.3042f },
	{ -0.250476f, 1.119289f, 0.3042f },
	{ 12.71266f, -1.969524f, -0.66924f },
	{ 12.71266f, -1.969524f, 0.66924f },
	{ 12.8562f, 0.295863f, -0.3042f },
	{ 12.8562f, 0.295863f, 0.3042f }
};

NJS_VECTOR normal_00590EC0[] = {
	{ -0.181588f, -0.66646f, -0.723088f },
	{ -0.189323f, -0.668497f, 0.719213f },
	{ -0.067627f, 0.755372f, -0.651798f },
	{ -0.076822f, 0.752694f, 0.653873f },
	{ 0.113319f, -0.687466f, -0.717321f },
	{ 0.100742f, -0.690166f, 0.716605f },
	{ 0.157726f, 0.767689f, -0.621109f },
	{ 0.147746f, 0.76653f, 0.624983f },
	{ -0.283153f, -0.520914f, -0.805278f },
	{ -0.304598f, -0.517917f, 0.799364f },
	{ -0.11293f, 0.730987f, -0.672982f },
	{ -0.132174f, 0.729621f, 0.670957f },
	{ 0.653684f, -0.457927f, -0.602495f },
	{ 0.639952f, -0.463353f, 0.612997f },
	{ 0.719022f, 0.450333f, -0.529347f },
	{ 0.708144f, 0.457415f, 0.53787f }
};

NJS_MODEL_SADX attach_00590F80 = { vertex_00590E00, normal_00590EC0, LengthOfArray<Sint32>(vertex_00590E00), meshlist_00590D70, matlist_00590BC0, LengthOfArray<Uint16>(meshlist_00590D70), LengthOfArray<Uint16>(matlist_00590BC0),{ 6.30286f, -0.584821f, 0 }, 6.600447f, NULL };

NJS_OBJECT object_00590FAC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00590F80, 1.552091f, -2.210648f, 0, 0, 0, 0xFFB2B2B2, 1, 1, 1, NULL, &object_00590B8C };

NJS_MATERIAL matlist_00590FE0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_green4, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFB2B2B2 }, 11, EGGROBTexName_ertx_red1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00591008[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4,
	4, 3, 7, 2, 6
};

Sint16 poly_0059103C[] = {
	4, 1, 0, 5, 4
};

NJS_TEX uv_00591048[] = {
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 254 },
	{ 250, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 254 },
	{ 250, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 254 },
	{ 250, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 254 },
	{ 250, 255 },
	{ 24, 16 },
	{ 227, 16 },
	{ 24, 185 },
	{ 227, 184 }
};

NJS_TEX uv_00591098[] = {
	{ 2, 10 },
	{ 1, 253 },
	{ 244, 9 },
	{ 244, 253 }
};

NJS_MESHSET_SADX meshlist_005910A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00591008, NULL, NULL, NULL, uv_00591048, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0059103C, NULL, NULL, NULL, uv_00591098, NULL }
};

NJS_VECTOR vertex_005910E0[] = {
	{ -2.165913f, -2.281698f, -1.227508f },
	{ -2.165913f, -2.281698f, 1.227508f },
	{ -2.512133f, 2.008605f, -1.573728f },
	{ -2.512133f, 2.008605f, 1.573728f },
	{ 1.245046f, -2.281698f, -1.227508f },
	{ 1.245046f, -2.281698f, 1.227508f },
	{ 1.591266f, 2.008605f, -1.573728f },
	{ 1.591266f, 2.008605f, 1.573728f }
};

NJS_VECTOR normal_00591140[] = {
	{ -0.555112f, -0.619436f, -0.555112f },
	{ -0.555112f, -0.619436f, 0.555112f },
	{ -0.597337f, 0.535142f, -0.597337f },
	{ -0.597337f, 0.535142f, 0.597337f },
	{ 0.555112f, -0.619436f, -0.555112f },
	{ 0.555112f, -0.619436f, 0.555112f },
	{ 0.597337f, 0.535142f, -0.597337f },
	{ 0.597337f, 0.535142f, 0.597337f }
};

NJS_MODEL_SADX attach_005911A0 = { vertex_005910E0, normal_00591140, LengthOfArray<Sint32>(vertex_005910E0), meshlist_005910A8, matlist_00590FE0, LengthOfArray<Uint16>(meshlist_005910A8), LengthOfArray<Uint16>(matlist_00590FE0),{ -0.460434f, -0.136547f, 0 }, 2.660507f, NULL };

NJS_OBJECT object_005911CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_005911A0, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00590FAC, &object_0058EE18 };

NJS_OBJECT object_00591200 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE | NJD_EVAL_BREAK, NULL, 11.83597f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_005911CC };

NJS_OBJECT object_00591234 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00591200, NULL };

NJS_OBJECT object_00591268 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_00591234, NULL };
