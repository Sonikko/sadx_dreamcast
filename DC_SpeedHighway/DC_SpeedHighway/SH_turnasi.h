#pragma once
#include "stdafx.h"
#include "SADXModLoader.h"
#include "textures.h"

NJS_MATERIAL matlist_00149DCC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 7, OBJ_HIGHWAYTexName_courseter02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_HIGHWAYTexName_ref_white, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_HIGHWAYTexName_ref_red, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_HIGHWAYTexName_ref_yellow, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00149E1C[] = {
	12, 26, 27, 40, 41, 25, 24, 36, 37, 42, 43, 34, 39,
	6, 25, 36, 40, 42, 26, 34,
	6, 37, 24, 43, 41, 39, 27
};

Sint16 poly_00149E52[] = {
	4, 31, 30, 38, 35,
	8, 28, 31, 33, 38, 39, 35, 34, 26,
	4, 33, 32, 28, 29,
	8, 30, 29, 35, 32, 26, 33, 27, 39
};

Sint16 poly_00149E8A[] = {
	10, 7, 9, 6, 8, 4, 10, 2, 0, 3, 1,
	0x8000u | 6, 9, 8, 11, 10, 1, 0,
	0x8000u | 6, 3, 2, 5, 4, 7, 6,
	14, 18, 17, 16, 15, 14, 13, 12, 23, 22, 21, 20, 19, 18, 17,
	6, 18, 16, 20, 14, 22, 12
};

Sint16 poly_00149EE8[] = {
	4, 45, 47, 44, 46,
	10, 29, 46, 28, 47, 31, 45, 30, 44, 29, 46
};

NJS_TEX uv_00149F08[] = {
	{ 0 },
	{ 254, 0 },
	{ 0, 15 },
	{ 254, 15 },
	{ 25, 47 },
	{ 229, 47 },
	{ 25, 207 },
	{ 229, 207 },
	{ 0, 239 },
	{ 254, 239 },
	{ 0, 255 },
	{ 254, 254 },
	{ 25, 47 },
	{ 25, 207 },
	{ 0, 15 },
	{ 0, 239 },
	{ 0 },
	{ 0, 255 },
	{ 229, 207 },
	{ 229, 47 },
	{ 254, 239 },
	{ 254, 15 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_TEX uv_00149F68[] = {
	{ 229, 215 },
	{ 25, 215 },
	{ 244, 231 },
	{ 10, 231 },
	{ 229, 39 },
	{ 229, 215 },
	{ 244, 23 },
	{ 244, 231 },
	{ 254, 254 },
	{ 10, 231 },
	{ 0, 255 },
	{ 0 },
	{ 244, 23 },
	{ 10, 23 },
	{ 229, 39 },
	{ 25, 39 },
	{ 25, 215 },
	{ 25, 39 },
	{ 10, 231 },
	{ 10, 23 },
	{ 0 },
	{ 244, 23 },
	{ 254, 0 },
	{ 254, 254 }
};

NJS_TEX uv_00149FC8[] = {
	{ 26, 255 },
	{ 26, 191 },
	{ 0, 255 },
	{ 0, 191 },
	{ 0, 191 },
	{ 0, 63 },
	{ 0, 63 },
	{ 0 },
	{ 26, 63 },
	{ 26, 0 },
	{ 26, 191 },
	{ 0, 191 },
	{ 26, 63 },
	{ 0, 63 },
	{ 26, 0 },
	{ 0 },
	{ 26, 63 },
	{ 0, 63 },
	{ 26, 191 },
	{ 0, 191 },
	{ 26, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 228, 191 },
	{ 255, 191 },
	{ 228, 63 },
	{ 255, 63 },
	{ 228, 0 },
	{ 255, 0 },
	{ 228, 63 },
	{ 255, 63 },
	{ 228, 191 },
	{ 255, 191 },
	{ 228, 255 },
	{ 255, 255 },
	{ 228, 191 },
	{ 0, 255 },
	{ 0, 191 },
	{ 0, 191 },
	{ 0, 63 },
	{ 0, 63 },
	{ 0 }
};

NJS_TEX uv_0014A070[] = {
	{ 0, 255 },
	{ 254, 255 },
	{ 0 },
	{ 254, 0 },
	{ 0 },
	{ 254, 0 },
	{ 254, 0 },
	{ 254, 255 },
	{ 254, 254 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 254, 0 }
};

NJS_MESHSET_SADX meshlist_0014A0A8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00149E1C, NULL, NULL, NULL, uv_00149F08, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00149E52, NULL, NULL, NULL, uv_00149F68, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, poly_00149E8A, NULL, NULL, NULL, uv_00149FC8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00149EE8, NULL, NULL, NULL, uv_0014A070, NULL }
};

NJS_VECTOR vertex_0014A108[] = {
	{ -44.4f, 2.463999f, -0.00001f },
	{ -35.09999f, 2.463999f, 0 },
	{ -44.4f, 1.231999f, -2.133888f },
	{ -35.09999f, 1.231998f, -2.133887f },
	{ -44.4f, -1.232001f, -2.133887f },
	{ -35.09999f, -1.232002f, -2.133886f },
	{ -44.4f, -2.464001f, 0.000001f },
	{ -35.09999f, -2.464001f, 0.000002f },
	{ -44.4f, -1.232f, 2.133887f },
	{ -35.09999f, -1.232f, 2.133888f },
	{ -44.4f, 1.232001f, 2.133886f },
	{ -35.09999f, 1.232f, 2.133887f },
	{ 44.4f, 2.464001f, -0.00001f },
	{ 35.09999f, 2.464f, -0.00001f },
	{ 44.4f, 1.232f, -2.133887f },
	{ 35.09999f, 1.232f, -2.133887f },
	{ 44.4f, -1.232f, -2.133886f },
	{ 35.09999f, -1.232f, -2.133886f },
	{ 44.4f, -2.463999f, 0.000001f },
	{ 35.09999f, -2.464f, 0.000001f },
	{ 44.4f, -1.231998f, 2.133888f },
	{ 35.09999f, -1.231999f, 2.133888f },
	{ 44.4f, 1.232002f, 2.133886f },
	{ 35.09999f, 1.232002f, 2.133886f },
	{ 29.99999f, 9.999995f, -15 },
	{ -30, 9.999993f, -15 },
	{ -37.5f, 16, 6.999998f },
	{ 37.5f, 16, 6.999993f },
	{ 30, 11, 6.999994f },
	{ -30, 11, 6.999998f },
	{ -30, -11, 7.000004f },
	{ 30, -11, 7 },
	{ -34.49999f, 13, 15 },
	{ 34.5f, 13.00001f, 14.99999f },
	{ -37.5f, -16, 7.000007f },
	{ -34.49999f, -13, 15.00001f },
	{ -30, -10.00001f, -14.99999f },
	{ 29.99999f, -10, -15 },
	{ 34.5f, -12.99999f, 15 },
	{ 37.5f, -16, 7.000002f },
	{ -37.5f, 14, -8.000002f },
	{ 37.5f, 14, -8.000006f },
	{ -37.5f, -14, -7.999994f },
	{ 37.5f, -14, -7.999998f },
	{ -30, 11, -6.000002f },
	{ -30, -11, -5.999996f },
	{ 30, 11, -6.000006f },
	{ 30, -11, -6 }
};

NJS_VECTOR normal_0014A348[] = {
	{ -0.609994f, 0.792406f, 0 },
	{ 0, 1, 0 },
	{ -0.609994f, 0.396203f, -0.686244f },
	{ 0, 0.5f, -0.866026f },
	{ -0.609994f, -0.396203f, -0.686243f },
	{ 0, -0.5f, -0.866025f },
	{ -0.609994f, -0.792406f, 0 },
	{ 0, -1, 0 },
	{ -0.609994f, -0.396203f, 0.686244f },
	{ 0, -0.5f, 0.866026f },
	{ -0.609994f, 0.396203f, 0.686243f },
	{ 0, 0.5f, 0.866025f },
	{ 0.609994f, 0.792406f, 0 },
	{ 0, 1, 0 },
	{ 0.609994f, 0.396203f, -0.686244f },
	{ 0, 0.5f, -0.866026f },
	{ 0.609994f, -0.396203f, -0.686243f },
	{ 0, -0.5f, -0.866025f },
	{ 0.609994f, -0.792406f, 0 },
	{ 0, -1, 0 },
	{ 0.609994f, -0.396203f, 0.686244f },
	{ 0, -0.5f, 0.866026f },
	{ 0.609994f, 0.396203f, 0.686243f },
	{ 0, 0.5f, 0.866025f },
	{ 0.27655f, 0.420297f, -0.864216f },
	{ -0.276551f, 0.420297f, -0.864216f },
	{ -0.6806999f, 0.711881f, 0.172837f },
	{ 0.6806999f, 0.711881f, 0.172837f },
	{ -0.6319f, -0.7233379f, 0.278359f },
	{ 0.631901f, -0.7233379f, 0.278359f },
	{ 0.6319f, 0.7233379f, 0.278358f },
	{ -0.6319f, 0.7233379f, 0.278359f },
	{ -0.245817f, 0.303854f, 0.92046f },
	{ 0.245818f, 0.303854f, 0.92046f },
	{ -0.6806999f, -0.711881f, 0.172837f },
	{ -0.245817f, -0.303853f, 0.92046f },
	{ -0.276551f, -0.420298f, -0.864216f },
	{ 0.27655f, -0.420298f, -0.864216f },
	{ 0.245818f, -0.303853f, 0.92046f },
	{ 0.6806999f, -0.711881f, 0.172837f },
	{ -0.680303f, 0.612534f, -0.402479f },
	{ 0.680303f, 0.612534f, -0.402479f },
	{ -0.680303f, -0.612534f, -0.402479f },
	{ 0.680303f, -0.612534f, -0.402479f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_0014A588 = { vertex_0014A108, normal_0014A348, LengthOfArray(vertex_0014A108), meshlist_0014A0A8, matlist_00149DCC, LengthOfArray(meshlist_0014A0A8), LengthOfArray(matlist_00149DCC),{ 0, 0.000002f, 0 }, 46.86534f, NULL };

NJS_OBJECT object_0014A5B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0014A588, 0.000003f, -24, 0.000004f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0014A5E4[] = {
	{ { 0xFFFF0000 },{ 0xFFFFFFFF }, 7, OBJ_HIGHWAYTexName_courseter02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_HIGHWAYTexName_ref_crome, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_HIGHWAYTexName_ref_red, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0014A620[] = {
	12, 12, 15, 16, 19, 20, 23, 24, 27, 28, 31, 32, 35,
	10, 14, 13, 18, 17, 22, 21, 26, 25, 30, 29,
	0x8000u | 26, 21, 16, 17, 12, 13, 15, 14, 19, 18, 23, 22, 27, 26, 31, 30, 35, 34, 32, 33, 28, 29, 24, 25, 20, 21, 16,
	4, 30, 29, 34, 33
};

Sint16 poly_0014A690[] = {
	10, 6, 8, 7, 9, 5, 11, 3, 1, 2, 0,
	0x8000u | 6, 8, 9, 10, 11, 0, 1,
	0x8000u | 6, 2, 3, 4, 5, 6, 7,
	6, 6, 4, 8, 2, 10, 0
};

NJS_TEX uv_0014A6D0[] = {
	{ 13, 255 },
	{ 13, 255 },
	{ 13, 52 },
	{ 13, 52 },
	{ 27, 25 },
	{ 27, 25 },
	{ 227, 25 },
	{ 227, 25 },
	{ 241, 52 },
	{ 241, 52 },
	{ 241, 255 },
	{ 241, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 42 },
	{ 0, 42 },
	{ 21, 0 },
	{ 21, 0 },
	{ 233, 0 },
	{ 233, 0 },
	{ 255, 42 },
	{ 255, 42 },
	{ 21, 0 },
	{ 13, 52 },
	{ 0, 42 },
	{ 13, 255 },
	{ 0, 255 },
	{ 13, 255 },
	{ 0, 255 },
	{ 13, 52 },
	{ 0, 42 },
	{ 27, 25 },
	{ 21, 0 },
	{ 227, 25 },
	{ 233, 0 },
	{ 241, 52 },
	{ 255, 42 },
	{ 241, 255 },
	{ 255, 255 },
	{ 241, 255 },
	{ 255, 255 },
	{ 241, 52 },
	{ 255, 42 },
	{ 227, 25 },
	{ 233, 0 },
	{ 27, 25 },
	{ 21, 0 },
	{ 13, 52 },
	{ 0, 42 },
	{ 0, 42 },
	{ 0, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0014A7A0[] = {
	{ 255, 0 },
	{ 255, 63 },
	{ 0 },
	{ 0, 63 },
	{ 0, 63 },
	{ 0, 191 },
	{ 0, 191 },
	{ 0, 255 },
	{ 255, 191 },
	{ 255, 255 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 0 },
	{ 0 },
	{ 0 },
	{ 0, 63 },
	{ 0, 63 },
	{ 0, 191 },
	{ 0, 191 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_0014A810[] = {
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0014A620, NULL, NULL, NULL, uv_0014A6D0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0014A690, NULL, NULL, NULL, uv_0014A7A0, NULL }
};

NJS_VECTOR vertex_0014A840[] = {
	{ 9, -2.7104f, 0 },
	{ -9, -2.7104f, 0 },
	{ 9, -1.355199f, 2.347275f },
	{ -9, -1.355199f, 2.347275f },
	{ 9, 1.3552f, 2.347275f },
	{ -9, 1.3552f, 2.347275f },
	{ 9, 2.7104f, -0.00001f },
	{ -9, 2.7104f, -0.00001f },
	{ 9, 1.355199f, -2.347276f },
	{ -9, 1.355199f, -2.347276f },
	{ 9, -1.355202f, -2.347275f },
	{ -9, -1.3552f, -2.347275f },
	{ -38.25f, -28, 3.500004f },
	{ -42.75f, -28, 3.500004f },
	{ -42.75f, -28, -3.499996f },
	{ -38.25f, -28, -3.499996f },
	{ -38.25f, -4.621321f, 1.500001f },
	{ -42.75f, -3.378679f, 1.5f },
	{ -42.75f, -3.37868f, -1.5f },
	{ -38.25f, -4.621321f, -1.499999f },
	{ -33.56802f, -1.5f, 1.5f },
	{ -35.43198f, 1.5f, 1.5f },
	{ -35.43198f, 1.5f, -1.5f },
	{ -33.56802f, -1.5f, -1.5f },
	{ 33.56802f, -1.5f, 1.5f },
	{ 35.43198f, 1.5f, 1.5f },
	{ 35.43198f, 1.5f, -1.5f },
	{ 33.56802f, -1.5f, -1.5f },
	{ 38.25f, -4.621321f, 1.500001f },
	{ 42.75f, -3.378679f, 1.5f },
	{ 42.75f, -3.37868f, -1.5f },
	{ 38.25f, -4.621321f, -1.499999f },
	{ 38.25f, -28, 3.500004f },
	{ 42.75f, -28, 3.500004f },
	{ 42.75f, -28, -3.499996f },
	{ 38.25f, -28, -3.499996f }
};

NJS_VECTOR normal_0014A9F0[] = {
	{ 0.609994f, -0.792406f, 0 },
	{ -0.609994f, -0.792406f, 0 },
	{ 0.609994f, -0.396203f, 0.686244f },
	{ -0.609994f, -0.396203f, 0.686244f },
	{ 0.609994f, 0.396203f, 0.686244f },
	{ -0.609994f, 0.396203f, 0.686244f },
	{ 0.609994f, 0.792406f, 0 },
	{ -0.609994f, 0.792406f, 0 },
	{ 0.609994f, 0.396203f, -0.686244f },
	{ -0.609994f, 0.396203f, -0.686244f },
	{ 0.609994f, -0.396203f, -0.686243f },
	{ -0.609994f, -0.396203f, -0.686243f },
	{ 0.576633f, -0.553849f, 0.600622f },
	{ -0.568657f, -0.5576259f, 0.604717f },
	{ -0.569313f, -0.5560229f, -0.605575f },
	{ 0.577768f, -0.5520189f, -0.601214f },
	{ 0.511808f, -0.232618f, 0.8270079f },
	{ -0.697548f, 0.392737f, 0.599319f },
	{ -0.697069f, 0.394134f, -0.59896f },
	{ 0.512213f, -0.231124f, -0.827176f },
	{ 0.181878f, -0.600702f, 0.778509f },
	{ -0.220877f, 0.729508f, 0.6473269f },
	{ -0.220877f, 0.729507f, -0.6473269f },
	{ 0.181878f, -0.6007029f, -0.778509f },
	{ -0.181878f, -0.600702f, 0.778509f },
	{ 0.220877f, 0.729508f, 0.6473269f },
	{ 0.220877f, 0.729507f, -0.6473269f },
	{ -0.181878f, -0.6007029f, -0.778509f },
	{ -0.511808f, -0.232618f, 0.8270079f },
	{ 0.697548f, 0.392737f, 0.599319f },
	{ 0.697069f, 0.394134f, -0.59896f },
	{ -0.512213f, -0.231124f, -0.827176f },
	{ -0.576633f, -0.553849f, 0.600622f },
	{ 0.568657f, -0.5576259f, 0.604717f },
	{ 0.569313f, -0.5560229f, -0.605575f },
	{ -0.577768f, -0.5520189f, -0.601214f }
};

NJS_MODEL_SADX attach_0014ABA0 = { vertex_0014A840, normal_0014A9F0, LengthOfArray(vertex_0014A840), meshlist_0014A810, matlist_0014A5E4, LengthOfArray(meshlist_0014A810), LengthOfArray(matlist_0014A5E4),{ 0, -12.6448f, 0.000004f }, 42.89304f, NULL };

NJS_OBJECT object_0014ABC8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0014ABA0, 0, -51, 0.000004f, 0, 0, 0, 1, 1, 1, &object_0014A5B0, NULL };

NJS_MATERIAL matlist_0014ABFC[] = {
	{ { 0xFFFF0000 },{ 0xFFFFFFFF }, 7, OBJ_HIGHWAYTexName_ref_red, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_HIGHWAYTexName_st3_34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, OBJ_HIGHWAYTexName_courseter02, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0014AC38[] = {
	10, 6, 8, 7, 9, 5, 11, 3, 1, 2, 0,
	0x8000u | 6, 8, 9, 10, 11, 0, 1,
	0x8000u | 6, 2, 3, 4, 5, 6, 7,
	6, 6, 4, 8, 2, 10, 0
};

Sint16 poly_0014AC78[] = {
	4, 13, 12, 20, 21,
	4, 12, 16, 21, 26,
	4, 16, 18, 26, 27,
	4, 18, 13, 27, 20
};

Sint16 poly_0014ACA0[] = {
	4, 15, 13, 14, 18,
	0x8000u | 8, 16, 18, 19, 14, 17, 15, 12, 13,
	4, 19, 16, 17, 12,
	4, 23, 21, 22, 26,
	0x8000u | 8, 27, 26, 24, 22, 25, 23, 20, 21,
	4, 24, 27, 25, 20
};

NJS_TEX uv_0014ACEC[] = {
	{ 255, 0 },
	{ 255, 63 },
	{ 0 },
	{ 0, 63 },
	{ 0, 63 },
	{ 0, 191 },
	{ 0, 191 },
	{ 0, 254 },
	{ 255, 191 },
	{ 255, 254 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 254 },
	{ 0, 254 },
	{ 255, 191 },
	{ 0, 191 },
	{ 255, 63 },
	{ 0, 63 },
	{ 255, 0 },
	{ 0 },
	{ 0 },
	{ 0, 63 },
	{ 0, 63 },
	{ 0, 191 },
	{ 0, 191 },
	{ 0, 254 }
};

NJS_TEX uv_0014AD5C[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 }
};

NJS_TEX uv_0014AD9C[] = {
	{ 0 },
	{ 0, 35 },
	{ 0 },
	{ 254, 35 },
	{ 254, 35 },
	{ 254, 35 },
	{ 254, 0 },
	{ 0 },
	{ 254, 0 },
	{ 0 },
	{ 0, 35 },
	{ 0, 35 },
	{ 254, 0 },
	{ 254, 35 },
	{ 254, 0 },
	{ 0, 35 },
	{ 0, 255 },
	{ 0, 228 },
	{ 0, 255 },
	{ 254, 228 },
	{ 254, 228 },
	{ 254, 228 },
	{ 254, 255 },
	{ 0, 255 },
	{ 254, 255 },
	{ 0, 255 },
	{ 0, 228 },
	{ 0, 228 },
	{ 254, 255 },
	{ 254, 228 },
	{ 254, 255 },
	{ 0, 228 }
};

NJS_MESHSET_SADX meshlist_0014AE1C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0014AC38, NULL, NULL, NULL, uv_0014ACEC, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0014AC78, NULL, NULL, NULL, uv_0014AD5C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_0014ACA0, NULL, NULL, NULL, uv_0014AD9C, NULL }
};

NJS_VECTOR vertex_0014AE64[] = {
	{ 6, -2.800008f, 0 },
	{ -6, -2.800008f, 0 },
	{ 6, -1.400006f, 2.424871f },
	{ -6, -1.400006f, 2.424871f },
	{ 6, 1.399997f, 2.42487f },
	{ -6, 1.399997f, 2.42487f },
	{ 6, 2.799998f, -0.00001f },
	{ -6, 2.799998f, -0.00001f },
	{ 6, 1.399996f, -2.424872f },
	{ -6, 1.399996f, -2.424872f },
	{ 6, -1.400007f, -2.42487f },
	{ -6, -1.400007f, -2.42487f },
	{ -4, -4.000001f, -6 },
	{ -4, -4, 6.000001f },
	{ -4, 3.999995f, 4 },
	{ -4, 3.999995f, -4.000001f },
	{ 4, -4.000001f, -6 },
	{ 4, 3.999995f, -4.000001f },
	{ 4, -4, 6.000001f },
	{ 4, 3.999995f, 4 },
	{ -4, -48, 6.000005f },
	{ -4, -48, -5.999996f },
	{ -4, -54, -3.999996f },
	{ -4, -54, 4.000005f },
	{ 4, -54, -3.999996f },
	{ 4, -54, 4.000005f },
	{ 4, -48, -5.999996f },
	{ 4, -48, 6.000005f }
};

NJS_VECTOR normal_0014AFB4[] = {
	{ 0.609994f, -0.792406f, 0 },
	{ -0.609994f, -0.792406f, 0 },
	{ 0.609994f, -0.396203f, 0.686244f },
	{ -0.609994f, -0.396203f, 0.686244f },
	{ 0.609994f, 0.396203f, 0.686244f },
	{ -0.609994f, 0.396203f, 0.686244f },
	{ 0.609994f, 0.792406f, 0 },
	{ -0.609994f, 0.792406f, 0 },
	{ 0.609994f, 0.396203f, -0.686244f },
	{ -0.609994f, 0.396203f, -0.686244f },
	{ 0.609994f, -0.396203f, -0.686243f },
	{ -0.609994f, -0.396203f, -0.686243f },
	{ -0.680612f, 0.089517f, -0.727154f },
	{ -0.680612f, 0.089517f, 0.727154f },
	{ -0.591338f, 0.635628f, 0.496283f },
	{ -0.591338f, 0.635627f, -0.496283f },
	{ 0.680612f, 0.089517f, -0.727154f },
	{ 0.591338f, 0.635627f, -0.496283f },
	{ 0.680612f, 0.089517f, 0.727154f },
	{ 0.591338f, 0.635628f, 0.496283f },
	{ -0.672768f, -0.118511f, 0.7302999f },
	{ -0.672768f, -0.118511f, -0.7302999f },
	{ -0.5961829f, -0.6513039f, -0.469434f },
	{ -0.5961829f, -0.6513039f, 0.469434f },
	{ 0.5961829f, -0.6513039f, -0.469434f },
	{ 0.5961829f, -0.6513039f, 0.469434f },
	{ 0.672768f, -0.118511f, -0.7302999f },
	{ 0.672768f, -0.118511f, 0.7302999f }
};

NJS_MODEL_SADX attach_0014B104 = { vertex_0014AE64, normal_0014AFB4, LengthOfArray(vertex_0014AE64), meshlist_0014AE1C, matlist_0014ABFC, LengthOfArray(meshlist_0014AE1C), LengthOfArray(matlist_0014ABFC),{ 0, -25, 0.000002f }, 29.61418f, NULL };

NJS_OBJECT object_0227DC14 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0014B104, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0014ABC8, NULL };
