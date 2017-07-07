#include "stdafx.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include "EggHornet.h"
#include "EggWalker.h"
#include "EggViper.h"
#include "Chaos0_PoliceCar.h"
#include "Chaos0_helicopter.h"
#include "Chaos0_Landtable.h"
#include "Chaos0_Model.h"
#include "Chaos2_PC.h"
#include "Chaos4_water.h"
#include "Chaos4.h"
#include "Chaos6_Act1.h"
#include "Chaos6_Act2.h"
#include "Chaos7.h"
#include "E101.h"
#include "Zero.h"
#include "E101R.h"
#include "E101Kai_Model.h"
#include "LightingArrays.h"

//Chaos 6 material arrays
DataArray(NJS_MATERIAL, matlist_01270910, 0x01270910, 4);
DataArray(NJS_MATERIAL, matlist_0126C51C, 0x0126C51C, 2);
DataArray(NJS_MATERIAL, matlist_01271BCC, 0x01271BCC, 2);

DataPointer(float, Chaos4Hitpoints, 0x03C58158);
DataPointer(int, FramerateSetting, 0x0389D7DC);

DataPointer(NJS_TEXANIM, stru_149401C, 0x149401C);
DataPointer(NJS_TEXANIM, stru_1494050, 0x1494050);
DataPointer(NJS_SPRITE, stru_1494030, 0x1494030);
DataPointer(NJS_SPRITE, stru_1494064, 0x1494064);
DataPointer(NJS_ARGB, stru_1494114, 0x1494114);
DataPointer(NJS_ARGB, stru_1494124, 0x1494124);
DataPointer(int, DroppedFrames, 0x03B1117C);
FunctionPointer(void, sub_5632F0, (ObjectMaster *a1), 0x5632F0);
FunctionPointer(void, sub_563370, (ObjectMaster *a1), 0x563370);

static unsigned char EggHornetTrigger = 0;
static float TornadoAlpha = 1.0f;
int TornadoTrigger = 0;
static bool Chaos4Defeated = 0;
static int Chaos4Water = 27;
static int E101ROcean = 81;
static int EggHornetWater1 = 118;
static int EggHornetWater2 = 128;
static int EggHornet_Rotation = 0;
static int EggHornet_RotationDirection = 1;
static int egghornetwater = 143;
static int e101rwater = 87;

void __cdecl SetClip_Chaos6KX(signed int a1)
{
	NJS_MODEL_SADX *v1; // ecx@3
	signed int v2; // edx@3
	char *v3; // eax@4
	NJS_MODEL_SADX *v4; // edx@6
	signed int v5; // ecx@6
	char *v6; // eax@7
	NJS_MODEL_SADX *v7; // edx@9
	signed int v8; // ecx@9
	char *v9; // eax@10
	NJS_MODEL_SADX *v10; // edx@12
	signed int v11; // ecx@12
	char *v12; // eax@13

	if (a1 >= 2)
	{
		v1 = (NJS_MODEL_SADX*)object_00190A2C.model;
		v2 = 0;
		if (((NJS_MODEL_SADX*)object_00190A2C.model)->nbMat)
		{
			v3 = (char *)&((NJS_MODEL_SADX*)object_00190A2C.model)->mats->attrflags;
			do
			{
				*(_DWORD *)v3 &= ~NJD_FLAG_USE_ALPHA;
				++v2;
				v3 += 20;
			} while (v2 < v1->nbMat);
		}
		v4 = (NJS_MODEL_SADX*)object_00190BBC.model;
		v5 = 0;
		if (((NJS_MODEL_SADX*)object_00190BBC.model)->nbMat)
		{
			v6 = (char *)&((NJS_MODEL_SADX*)object_00190BBC.model)->mats->attrflags;
			do
			{
				*(_DWORD *)v6 &= ~NJD_FLAG_USE_ALPHA;
				++v5;
				v6 += 20;
			} while (v5 < v4->nbMat);
		}
		v7 = (NJS_MODEL_SADX*)object_001911EC.model;
		v8 = 0;
		if (((NJS_MODEL_SADX*)object_001911EC.model)->nbMat)
		{
			v9 = (char *)&((NJS_MODEL_SADX*)object_001911EC.model)->mats->attrflags;
			do
			{
				*(_DWORD *)v9 &= ~NJD_FLAG_USE_ALPHA;
				++v8;
				v9 += 20;
			} while (v8 < v7->nbMat);
		}
		v10 = (NJS_MODEL_SADX*)object_0019137C.model;
		v11 = 0;
		if (((NJS_MODEL_SADX*)object_0019137C.model)->nbMat)
		{
			v12 = (char *)&((NJS_MODEL_SADX*)object_0019137C.model)->mats->attrflags;
			do
			{
				*(_DWORD *)v12 &= ~NJD_FLAG_USE_ALPHA;
				++v11;
				v12 += 20;
			} while (v11 < v10->nbMat);
		}
		landtable_0000033C.COLCount -= 4;
	}
	else
	{
		landtable_0000033C.Col = &collist_0016F6D8[4];
		landtable_0000033C.COLCount -= 4;
	}
}

void __cdecl SetClip_Chaos6SX(signed int a1)
{
	NJS_MODEL_SADX *v1; // ecx@3
	signed int v2; // edx@3
	char *v3; // eax@4
	NJS_MODEL_SADX *v4; // edx@6
	signed int v5; // ecx@6
	char *v6; // eax@7
	NJS_MODEL_SADX *v7; // edx@9
	signed int v8; // ecx@9
	char *v9; // eax@10
	NJS_MODEL_SADX *v10; // edx@12
	signed int v11; // ecx@12
	char *v12; // eax@13

	if (a1 >= 2)
	{
		v1 = (NJS_MODEL_SADX*)object_0015D98C.model;
		v2 = 0;
		if (((NJS_MODEL_SADX*)object_0015D98C.model)->nbMat)
		{
			v3 = (char *)&((NJS_MODEL_SADX*)object_0015D98C.model)->mats->attrflags;
			do
			{
				*(_DWORD *)v3 &= ~NJD_FLAG_USE_ALPHA;
				++v2;
				v3 += 20;
			} while (v2 < v1->nbMat);
		}
		v4 = (NJS_MODEL_SADX*)object_0015DCB8.model;
		v5 = 0;
		if (((NJS_MODEL_SADX*)object_0015DCB8.model)->nbMat)
		{
			v6 = (char *)&((NJS_MODEL_SADX*)object_0015DCB8.model)->mats->attrflags;
			do
			{
				*(_DWORD *)v6 &= ~NJD_FLAG_USE_ALPHA;
				++v5;
				v6 += 20;
			} while (v5 < v4->nbMat);
		}
		v7 = (NJS_MODEL_SADX*)object_0015E2E8.model;
		v8 = 0;
		if (((NJS_MODEL_SADX*)object_0015E2E8.model)->nbMat)
		{
			v9 = (char *)&((NJS_MODEL_SADX*)object_0015E2E8.model)->mats->attrflags;
			do
			{
				*(_DWORD *)v9 &= ~NJD_FLAG_USE_ALPHA;
				++v8;
				v9 += 20;
			} while (v8 < v7->nbMat);
		}
		v10 = (NJS_MODEL_SADX*)object_0015E614.model;
		v11 = 0;
		if (((NJS_MODEL_SADX*)object_0015E614.model)->nbMat)
		{
			v12 = (char *)&((NJS_MODEL_SADX*)object_0015E614.model)->mats->attrflags;
			do
			{
				*(_DWORD *)v12 &= ~NJD_FLAG_USE_ALPHA;
				++v11;
				v12 += 20;
			} while (v11 < v10->nbMat);
		}
		landtable_00000318.COLCount -= 4;
	}
	else
	{
		landtable_00000318.Col = &collist_0014AFB4[4];
		landtable_00000318.COLCount -= 4;
	}
}

NJS_TEXANIM texanim_array[] =
{
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 0, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 1, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 2, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 3, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 4, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 5, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 6, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 7, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 8, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 9, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 10, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 11, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 12, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 13, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 14, 0 },
	{ 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 15, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 16, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 17, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 18, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 19, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 20, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 21, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 22, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 23, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 24, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 25, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 26, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 27, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 28, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 29, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 30, 0 },
	{ 0x28, 0x28, 0x14, 0x14, 0, 0, 0xFF, 0xFF, 31, 0 },
};

void __cdecl TornadoFunc()
{
	DataPointer(unsigned char, byte_03C5A7EF, 0x03C5A7EF);
	DataPointer(float, dword_3C6A998, 0x3C6A998);
	DataPointer(NJS_OBJECT, stru_13A6E8C, 0x13A6E8C);
	DataPointer(NJS_ARGB, nj_constant_material_temp, 0x03B18220);
	nj_constant_material_temp.a = TornadoAlpha;
	nj_constant_material_temp.r = 1.0f;
	nj_constant_material_temp.g = 1.0f;
	nj_constant_material_temp.b = 1.0f;
	SetMaterialAndSpriteColor(&nj_constant_material_temp);
	ProcessModelNode_D_WrapperB(&stru_13A6E8C, 0, 1.0);
}

PointerInfo pointers[] = {
	//ptrdecl(0x7D1CC0, &landtable_0000028C), //Chaos 2 DC
	ptrdecl(0x7D1CC0, &landtable_00D2136C), //Chaos 2 PC
	ptrdecl(0x7D1CD6, &landtable_00000238), //Chaos 4
	ptrdecl(0x7D1CEC, &landtable_00000318), // Chaos 6 Act 1
	ptrdecl(0x7D1CF6, &landtable_0000033C), //Chaos 6 Act 2
	ptrdecl(0x7D1D1C, &landtable_00000128), //Egg Hornet
	ptrdecl(0x7D1D32, &landtable_0000022C), //Egg Walker
	ptrdecl(0x7D1D48, &landtable_000580F4), //Egg Viper
	ptrdecl(0x7D1D7F, &landtable_00000068), //E-101
	ptrdecl(0x7D1D06, &landtable_00001214), //Perfect Chaos DC
	ptrdecl(0x7D1D64, &landtable_00000110), //Zero
	ptrdecl(0x7D1DD1, &landtable_00000180) //E101R
};

//Perfect Chaos damage functions

//Main explosion sprite
void __cdecl Chaos7Explosion_DisplayX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	unsigned __int64 v2;
	v1 = a1->Data1;
	v2 = (unsigned __int64)*(float *)&v1->CharIndex;
	if (!DroppedFrames)
	{
		DisableFog();
		SetMaterialAndSpriteColor(&stru_1494114);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		stru_1494030.tanim = &texanim_array[v2];
		njDrawSprite3D_Queue(&stru_1494030, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

//DamageSlave sprite
void __cdecl Chaos7Damage_DisplayX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	double v2; // st7@2
	short v3;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		DisableFog();
		SetMaterialAndSpriteColor(&stru_1494124);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v3 = ((signed short*)&v1->Object)[1];
		stru_1494064.tanim = &texanim_array[v3+16];
		v2 = v1->Scale.x;
		stru_1494064.sy = v1->Scale.x;
		stru_1494064.sx = v2;
		njDrawSprite3D_Queue(&stru_1494064, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void WaterTexture_BossOcean()
{
	if (CurrentLevel == 20) njSetTextureNum(158);
	if (CurrentLevel == 23 || CurrentLevel == 25) njSetTextureNum(102);
}

void WaterTexture_BossWaves()
{
	if (egghornetwater > 157) egghornetwater = 143;
	if (e101rwater > 101) e101rwater = 87;
	if (CurrentLevel == 20) njSetTextureNum(egghornetwater);
	if (CurrentLevel == 23 || CurrentLevel == 25) njSetTextureNum(e101rwater);
	if (GameState != 16)
	{
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
		{
			egghornetwater++;
			e101rwater++;
		}
	}
}
/*
void __cdecl sub_563620(int a1)
{
	NJS_TEXANIM sanic { 0x190, 0x190, 0xC8, 0xC8, 0, 0, 0xFF, 0xFF, 0, 0 };
	int v1; // esi@1
	long double v2; // st7@3
	double v3; // st7@3
	DataPointer(float, flt_14940DC, 0x14940DC);
	DataPointer(float, flt_1494098, 0x1494098);
	DataPointer(D3DCOLORVALUE, stru_3C6AC98, 0x3C6AC98);
	DataPointer(NJS_SPRITE, stru_14940BC, 0x14940BC);
	DataPointer(__int16, word_14940B8, 0x14940B8);
	DataPointer(NJS_TEXANIM, stru_14940A8, 0x014940A8);
	v1 = *(_DWORD *)(a1 + 32);
	if (!DroppedFrames && flt_14940DC != 0.0f)
	{
		DisableFog();
		v2 = fabs(njSin((v1 + 20))) * flt_1494098 * flt_14940DC;
		stru_3C6AC98.a = 255;
		stru_3C6AC98.b = 255;
		stru_3C6AC98.g = 255;
		SetMaterialAndSpriteColor((NJS_ARGB *)&stru_3C6AC98);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njPushMatrix(0);
		njTranslateV(0, (NJS_VECTOR *)(v1 + 32));
		v3 = *(float *)(v1 + 44);
		stru_14940BC.sy = 0;
		stru_14940BC.sx = 0;
		//stru_14940A8.texid = 0;
		word_14940B8 = (v1 + 12);
		njDrawSprite3D_Queue(&stru_14940BC,	0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE | NJD_SPRITE_COLOR, QueuedModelFlagsB_SomeTextureThing);
		njPopMatrix(1u);
		ToggleStageFog();
		ClampGlobalColorThing_Thing();
	}
}
*/


bool ForceObjectSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(3, false);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

bool ChaosPuddleFunc(NJS_MATERIAL* material, Uint32 flags)
{
	if (CurrentLevel == 18 || CurrentLevel == 16 || CurrentLevel == 19)
	{
	set_diffuse(4, false);
	set_specular(5, false);
	}
	else
	{
		set_diffuse(0, false);
		set_specular(1, false);
	}
	use_default_diffuse(true);
	return true;
}

bool SpecialBossFunction(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(4, false);
	set_specular(5, false);
	use_default_diffuse(true);
	return true;
}

bool Chaos0Function(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool CharacterFunction(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(3, false);
	use_default_diffuse(true);
	return true;
}

bool CharacterFunction_Specular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	if (material->attrflags & NJD_FLAG_IGNORE_SPECULAR) set_specular(2, false); else set_specular(3, false);
	use_default_diffuse(true);
	return true;
}

bool CharacterFunction_nospec(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(2, false);
	use_default_diffuse(true);
	return true;
}

bool ForceObjectOrLevelSpecularFunction(NJS_MATERIAL* material, Uint32 flags)
{
	if (material->attrflags & NJD_FLAG_IGNORE_SPECULAR) set_specular(0, false); else set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
		if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
		{
			material_register(CharacterMaterials_Specular, LengthOfArray(CharacterMaterials_Specular), &CharacterFunction_Specular);
			material_register(SpecialBossMaterials, LengthOfArray(SpecialBossMaterials), &SpecialBossFunction);
			material_register(ChaosPuddle, LengthOfArray(ChaosPuddle), &ChaosPuddleFunc);
			material_register(CharacterMaterials, LengthOfArray(CharacterMaterials), &CharacterFunction_nospec);
			material_register(Chaos0Materials, LengthOfArray(Chaos0Materials), &Chaos0Function);
			material_register(EggHornetMaterials, LengthOfArray(EggHornetMaterials), &ForceObjectOrLevelSpecularFunction);
			material_register(Chaos6ObjectMaterials, LengthOfArray(Chaos6ObjectMaterials), &ForceObjectOrLevelSpecularFunction);
			material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
		}
		WriteJump((void*)0x00556D60, SetClip_Chaos6KX);
		WriteJump((void*)0x00556E40, SetClip_Chaos6SX);
		//WriteJump((void*)0x563620, sub_563620); //Mist
		HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
		//SADX style water
		if (SADXStyleWater != 0)
		{
			ResizeTextureList((NJS_TEXLIST*)0x1557064, 160); //Egg Hornet level texlist
			ResizeTextureList((NJS_TEXLIST*)0x16B460C, 104); //Zero/E101R texlist
			collist_00009FA4[LengthOfArray(collist_00009FA4) - 1].Flags = 0x00000000;
			collist_000096DC[LengthOfArray(collist_000096DC) - 1].Flags = 0x00000000;
			collist_0001E294[0].Flags = 0x00000000;
			landtable_00000128.TexName = "EGM1LANDW";
			landtable_00000110.TexName = "E101R_TIKEIW";
			landtable_00000180.TexName = "E101R_TIKEIW";
			WriteCall((void*)0x00572310, WaterTexture_BossWaves); //Egg Hornet ocean
			WriteCall((void*)0x0057236D, WaterTexture_BossOcean); //Egg Hornet ocean
			WriteCall((void*)0x0056CD15, WaterTexture_BossWaves); //E101R ocean
			WriteCall((void*)0x0056CD7B, WaterTexture_BossOcean); //E101R ocean
			WriteCall((void*)0x00587EF5, WaterTexture_BossWaves); //Zero ocean
			WriteCall((void*)0x00587F5B, WaterTexture_BossOcean); //Zero ocean
		}
		else
		{
			ResizeTextureList((NJS_TEXLIST*)0x1557064, 143);  //Egg Hornet level texlist
			ResizeTextureList((NJS_TEXLIST*)0x16B460C, 87); //Zero/E101R texlist
			collist_00009FA4[LengthOfArray(collist_00009FA4) - 1].Flags = 0x80000000;
			collist_000096DC[LengthOfArray(collist_000096DC) - 1].Flags = 0x80000000;
			collist_0001E294[0].Flags = 0x80040000;
			landtable_00000128.TexName = "EGM1LAND";
			landtable_00000110.TexName = "E101R_TIKEI";
			landtable_00000180.TexName = "E101R_TIKEI";
			WriteData((void*)0x572270, 0xC3u, 1); //Egg Hornet water
			WriteData((void*)0x587E10, 0xC3u, 1); //E101R water
			WriteData((void*)0x56CC30, 0xC3u, 1); //Zero water
		}
		//Perfect Chaos damage functions
		WriteJump((void*)0x5632F0, Chaos7Explosion_DisplayX);
		WriteJump((void*)0x005633C0, Chaos7Damage_DisplayX);
		//Perfect Chaos tornado UVs
		WriteData((int*)0x01426CA0, 1538);
		WriteData((int*)0x01426CA4, -2500);
		WriteData((int*)0x01426CA8, -2538);
		WriteData((int*)0x01426CAC, -2538);
		WriteCall((void*)0x00562303, TornadoFunc); //Perfect Chaos tornado fade-in
		*(NJS_OBJECT *)0x02DA8664 = object_029A8664; //E101R model in cutscenes
		*(NJS_OBJECT *)0x010FEF74 = *(NJS_OBJECT *)0x02EEB524; //Replace the non-updated Eggmobile model with a high-poly one
		WriteData((NJS_TEXLIST**)0x007D2B22, (NJS_TEXLIST*)0x02EE0AA4); //Replace the texlist for the above model in the NPC data array
		*(NJS_TEXLIST**)0x02BD5FE4 = (NJS_TEXLIST*)0x02EE0AA4; //Eggman Super Sonic cutscene texlist fix
		//Disable Chaos 2 columns
		((NJS_OBJECT *)0x11863EC)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C944)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C978)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C9AC)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C9E0)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CA14)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CA48)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CA7C)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CAB0)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CAE4)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CB18)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CB4C)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CB80)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CBB4)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CBE8)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C910)->evalflags |= NJD_EVAL_HIDE;
		WriteData((char*)0x0054E12F, 0xFF, 1); //Chandelier lighting in Chaos 2
		WriteData((char*)0x0054E12C, 0x00, 1); //Chandelier lighting in Chaos 2
		((NJS_MATERIAL*)0x011E2C00)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Lilypad in Chaos 4
		((NJS_MATERIAL*)0x011E2C14)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Lilypad in Chaos 4
		//E101 Beta lighting fix
		((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x014D76B4)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x014D857C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014D857C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014D887C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014D943C)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014DC25C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014DD4A4)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		//Egg Viper platforms specular fix
		((NJS_MATERIAL*)0x01672848)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0167285C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01672870)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01672884)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01672898)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x016728AC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x016728C0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01671BD8)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01671BEC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01671C00)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01671C14)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01671C28)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01671C3C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x01671C50)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166FE18)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166FE2C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166FE40)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166FE54)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166FE68)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166FE7C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166FE90)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166FA48)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166F728)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166F73C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166F750)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166F764)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166F778)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166F78C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166EF08)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166EF1C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166EF30)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166EF44)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166EF58)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166EF6C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166EF80)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0166EF94)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x016714D0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x016714E4)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x016714F8)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x0167150C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01671520)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01671534)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01671548)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01671100)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670A70)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670A84)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670A98)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670AAC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670AC0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670AD4)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670AE8)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670250)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670264)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x01670278)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x0167028C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x016702A0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x016702B4)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x016702C8)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_MATERIAL*)0x016702DC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			*(NJS_OBJECT*)0x01669DA8 = object_000434A0;
		//Material fixes
		//Eggmobiles
		for (int e = 0; e < 24; e++)
		{
			((NJS_OBJECT *)0x269D214)->basicdxmodel->mats[e].diffuse.color = 0xFFB2B2B2;
			((NJS_OBJECT *)0x1257754)->basicdxmodel->mats[e].diffuse.color = 0xFFB2B2B2;
			((NJS_OBJECT *)0x269D214)->basicdxmodel->mats[e].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_OBJECT *)0x1257754)->basicdxmodel->mats[e].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		}
		((NJS_OBJECT *)0x31A4DFC)->basicdxmodel->mats[11].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Zero holding Amy lighting fix
		//Chaos 0
		((NJS_OBJECT*)0x02C65CF8)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5DD18)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5E100)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5E36C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5F12C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5EEBC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5EB8C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C66B10)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5B614)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5B884)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5C798)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5C1F4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5BF00)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5A800)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5AAF4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5B098)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5A184)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C59F14)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C600A4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C603D4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C60644)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5F884)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5F618)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		//Chaos 1
		((NJS_OBJECT*)0x038DD9BC)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Chaos puddle
		((NJS_OBJECT*)0x02D6962C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Chaos puddle
		((NJS_OBJECT*)0x03185C90)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x031854CC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x03183F64)->basicdxmodel->mats[1].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x03180C58)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x031807B4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317FB3C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317D0D4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317C830)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317C31C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317C14C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317BF04)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317BA6C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317B8A0)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317B3B0)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317B0AC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317AE78)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317AAE4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317A914)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317A640)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317A33C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317A108)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x03179D4C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x03179B7C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		//Chaos 2
		((NJS_MATERIAL*)0x011835E8)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //Chaos2 table
		((NJS_OBJECT*)0x0114B918)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011339EC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos2 small ball
		((NJS_OBJECT*)0x01139274)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos2 ball
		((NJS_OBJECT*)0x0113F81C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos2 ball
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01132A50)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011326E4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011324A0)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01132074)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01131E78)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01131980)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01131614)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011313D0)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01130FA4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113091C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01130DA8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112F1A8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112ECD4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112E09C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112B584)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112ACC0)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112A6E8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112A214)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011295DC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01126AC4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112A6E8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01126200)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01125C60)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01121EE4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		//Chaos 4
		((NJS_OBJECT*)0x011A652C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4 something?
		((NJS_OBJECT*)0x011C1C24)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos4 ball
		((NJS_OBJECT*)0x011EC85C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos4 ball
		((NJS_OBJECT*)0x0119E1A4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x0119CFF8)->basicdxmodel->mats[1].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01199FDC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01198F18)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01198694)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01197FFC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01196F44)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01194B34)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01194294)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01193EAC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01193B18)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01192014)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01191764)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x011913AC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01191018)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		//Chaos 6 transformed emeralds lighting (well this still doesn't work)
		/*((NJS_MATERIAL*)0x0128C194)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x0128BCB4)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x0128B7F4)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x0128B314)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x0128AE34)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x0128A954)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;*/
		//Perfect Chaos misc
		((NJS_OBJECT*)0x0248B1B4)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //Egg Carrier 2
		/*((NJS_OBJECT*)0x02EE83E0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		((NJS_OBJECT*)0x02EE83E0)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		((NJS_OBJECT*)0x02EE83E0)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		((NJS_OBJECT*)0x02EE83E0)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		((NJS_OBJECT*)0x02EE83E0)->basicdxmodel->mats[4].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //Eggmobile*/
		((NJS_OBJECT*)0x02EE7808)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		((NJS_OBJECT*)0x02EE7808)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		((NJS_OBJECT*)0x02EE7808)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		((NJS_OBJECT*)0x02EE7808)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		((NJS_OBJECT*)0x02EE7808)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		((NJS_OBJECT*)0x02EE7808)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggmobile
		DataArray(NJS_MATERIAL, matlist_00F975B0, 0x013975B0, 3);
		DataArray(NJS_MATERIAL, matlist_00F98C98, 0x01398C98, 6);
		matlist_00F975B0[0].diffuse.color = 0xFFB2B2B2;
		matlist_00F975B0[1].diffuse.color = 0xFFB2B2B2;
		matlist_00F975B0[2].diffuse.color = 0xFFB2B2B2;
		matlist_00F98C98[0].diffuse.color = 0xFFB2B2B2;
		matlist_00F98C98[1].diffuse.color = 0xFFB2B2B2;
		matlist_00F98C98[2].diffuse.color = 0xFFB2B2B2;
		matlist_00F98C98[3].diffuse.color = 0xFFB2B2B2;
		matlist_00F98C98[4].diffuse.color = 0xFFB2B2B2;
		matlist_00F98C98[5].diffuse.color = 0xFFB2B2B2;
		//Eggman model lighting fix
		((NJS_OBJECT*)0x008961E0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x008964CC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x008980DC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x00897DE0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		//Eggman model (Eggmobile) lighting fix
		((NJS_OBJECT*)0x02EE22C0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x02EE25AC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x02EE4194)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x02EE3E98)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		ResizeTextureList((NJS_TEXLIST*)0x117C76C, textures_chaos2);
		ResizeTextureList((NJS_TEXLIST*)0x117C2CC, 6); //Chaos 2 for CHAOS2.PVM (SADX bug)
		ResizeTextureList((NJS_TEXLIST*)0x118FF08, textures_chaos4dc);
		ResizeTextureList((NJS_TEXLIST*)0x121FF28, textures_chaos6);
		ResizeTextureList((NJS_TEXLIST*)0x11F04A0, textures_chaos6_2);
		ResizeTextureList((NJS_TEXLIST*)0x1494FBC, textures_chaos7);
		ResizeTextureList((NJS_TEXLIST*)0x15E99F8, textures_eggwalker);
		ResizeTextureList((NJS_TEXLIST*)0x167E5CC, textures_eggviper);
		ResizeTextureList((NJS_TEXLIST*)0x14FBFB4, textures_e101);
		memcpy((void*)0x011C4B90, &object_000425F8, sizeof(object_000425F8)); // Chaos4 swamp water
		WriteData((float*)0x00557064, 0.0f); //Move Chaos 6 skybox animation to the bottom
		//*(NJS_OBJECT*)0x1561A70 = object_000104E8; //Egg Hornet model
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155AA54)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155EA6C)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[6].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155CE84)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_OBJECT*)0x0155D5D0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //drills
		((NJS_OBJECT*)0x0155B9E8)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //drills
		((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[18].attrflags |= NJD_FLAG_IGNORE_LIGHT; //front light
		((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[8].attrflags |= NJD_FLAG_IGNORE_LIGHT; //computer
		((NJS_OBJECT*)0x015650D8)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman head
		((NJS_OBJECT*)0x015650D8)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman head
		((NJS_OBJECT*)0x015650D8)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman head
		((NJS_OBJECT*)0x015650D8)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman head
		((NJS_OBJECT*)0x015650D8)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman head
		((NJS_OBJECT*)0x015650D8)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman head
		((NJS_OBJECT*)0x01564040)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman head
		((NJS_OBJECT*)0x01562DA4)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01562DA4)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01562DA4)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01562DA4)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01562DA4)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01563A9C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01563A9C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01563A9C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01563A9C)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01563A9C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x0156291C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x0156291C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x0156291C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01563614)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01563614)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		((NJS_OBJECT*)0x01563614)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Eggman arms
		//Egg Walker
		((NJS_OBJECT*)0x162E0FC)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		//E101 rocket
		((NJS_MATERIAL*)0x014DE5D0)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x014DE5E4)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x014DE5F8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x014DE60C)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		/*
		((NJS_OBJECT*)0x0155B9E8)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x0155D5D0)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x0155D5D0)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x0155B9E8)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
*/
		for (int m = 0; m < 20; m++)
		{
			((NJS_OBJECT*)0x01561A70)->basicdxmodel->mats[m].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		}
		DataArray(FogData, Chaos2Fog, 0x01120638, 3);
		DataArray(FogData, Chaos6SFog, 0x011EF0E8, 3);
		DataArray(FogData, Chaos6KFog, 0x011EF118, 3);
		DataArray(FogData, Chaos4Fog, 0x0118FA00, 3);
		DataArray(FogData, Chaos7Fog, 0x01420E30, 3);
		DataArray(FogData, EggHornetFog, 0x01556B34, 3);
		DataArray(FogData, EggWalkerFog, 0x015E87F4, 3);
		DataArray(FogData, EggViperFog, 0x0165D334, 3);
		DataArray(FogData, Fog_E101R, 0x015225F0, 3);
		DataArray(FogData, Fog_Zero, 0x016B4DB0, 3);
		DataArray(DrawDistance, DrawDist_Chaos7, 0x01420E00, 3);
		DataArray(DrawDistance, DrawDist_EggHornet, 0x01556B1C, 3);
		DataArray(DrawDistance, DrawDist_E101R, 0x015225D8, 3);
		DataArray(DrawDistance, DrawDist_Zero, 0x016B4D98, 3);
		for (int i = 0; i < 3; i++)
		{
			Chaos2Fog[i].Color = 0xFF000000;
			Chaos2Fog[i].Layer = 700.0f;
			Chaos2Fog[i].Distance = 1700.0f;
			Chaos2Fog[i].Toggle = 0;
			Chaos4Fog[i].Color = 0xFF000000;
			Chaos4Fog[i].Layer = 1.0f;
			Chaos4Fog[i].Distance = 2000.0f;
			Chaos4Fog[i].Toggle = 0;
			Chaos6SFog[i].Distance = 12000.0f;	
			Chaos6KFog[i].Distance = 12000.0f;
			//Chaos7Fog[i].Color = 0xFF000000;
			Chaos7Fog[i].Layer = -4000.0f;
			Chaos7Fog[i].Distance = 11000.0f;
			Chaos7Fog[i].Toggle = 1;
			DrawDist_Chaos7[i].Maximum = -6500.0;
			DrawDist_EggHornet[i].Maximum = -12500.0;
			EggHornetFog[i].Layer = -2000.0f;
			EggHornetFog[i].Distance= -8000.0f;
			EggHornetFog[i].Toggle = 0;
			EggWalkerFog[i].Toggle = 0;
			EggViperFog[i].Toggle = 0;
			Fog_Zero[i].Toggle = 0;
			Fog_E101R[i].Toggle = 0;
			DrawDist_Zero[i].Maximum = -9500.0f;
			DrawDist_E101R[i].Maximum = -9500.0f;
		}
		HMODULE handle = GetModuleHandle(L"BOSSCHAOS0MODELS");
		LandTable **___LANDTABLEBOSSCHAOS0 = (LandTable **)GetProcAddress(handle, "___LANDTABLEBOSSCHAOS0");
		___LANDTABLEBOSSCHAOS0[0] = &landtable_000001D8;
		NJS_ACTION **___BOSSCHAOS0_ACTIONS = (NJS_ACTION **)GetProcAddress(handle, "___BOSSCHAOS0_ACTIONS");
		NJS_OBJECT **___BOSSCHAOS0_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___BOSSCHAOS0_OBJECTS");
		NJS_TEXLIST **___BOSSCHAOS0_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle, "___BOSSCHAOS0_TEXLISTS");
		___BOSSCHAOS0_TEXLISTS[2] = &texlist_chaos0;
		___BOSSCHAOS0_TEXLISTS[3] = &chaos0_object;
		___BOSSCHAOS0_OBJECTS[0]->child->child->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[0]->child->child->child->child->sibling->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[0]->child->child->child->child->sibling->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[0]->child->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[0]->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[5]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[6]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[7]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[8]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[9]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[10]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[10]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[10]->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[15]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[16]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[17]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[18]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[18]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[20]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[21]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[22]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[22]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[22]->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[28]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[29]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[30]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[31]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[31]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[33]->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_ACTIONS[17]->object = &object_0005825C;
		___BOSSCHAOS0_ACTIONS[18]->object = &object_0005D234;
		___BOSSCHAOS0_ACTIONS[18]->motion = &animation_0004CEA0;
	}
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl OnFrame()
	{
		HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
		//Super stupid hax to make Perfect Chaos' tornadoes fade in
		DataPointer(unsigned char, byte_03C5A7EF, 0x03C5A7EF);
		if (byte_03C5A7EF == 0) TornadoTrigger = 0;
		if (byte_03C5A7EF == 3)
		{
			TornadoTrigger = 1;
			TornadoAlpha = 0;
		}
		if (TornadoTrigger == 1 && byte_03C5A7EF != 3) TornadoTrigger = 2;
		if (TornadoTrigger == 2) TornadoAlpha = TornadoAlpha + 0.04f;
		if (TornadoAlpha >= 1.0f) TornadoTrigger = 0;
		//Egg Hornet rotation
		DataPointer(unsigned char, byte_03C6C944, 0x03C6C944);
		DataPointer(float, dword_3C6C930, 0x3C6C930);
		if (CurrentLevel == 20 && GameState != 16)
		{
			if (dword_3C6C930 != 1 && byte_03C6C944 != EggHornetTrigger)
			{
				EggHornetTrigger = byte_03C6C944;
				((NJS_OBJECT *)0x01561A70)->ang[1] = NJM_DEG_ANG(0); //Main model
				((NJS_OBJECT *)0x015658E0)->ang[1] = NJM_DEG_ANG(90); //Eggman
				((NJS_SPRITE *)0x3C6C884)->ang = NJM_DEG_ANG(0); //Main model
				((NJS_OBJECT *)0x01567BCC)->ang[1] = NJM_DEG_ANG(0); //Jet
				((NJS_OBJECT *)0x01567E64)->ang[1] = NJM_DEG_ANG(0); //Jet
				((NJS_OBJECT *)0x015685CC)->ang[1] = NJM_DEG_ANG(0); //Jet
				((NJS_OBJECT *)0x015680CC)->ang[1] = NJM_DEG_ANG(0); //Jet
				((NJS_OBJECT *)0x01568334)->ang[2] = NJM_DEG_ANG(0); //Jet
			}
			if (dword_3C6C930 == 1 && byte_03C6C944 != EggHornetTrigger)
			{
				if (EggHornet_RotationDirection == 1) EggHornet_Rotation = EggHornet_Rotation + 3*FramerateSetting;
				if (EggHornet_RotationDirection == -1) EggHornet_Rotation = EggHornet_Rotation - 3 * FramerateSetting;
				if (EggHornet_Rotation > 10) EggHornet_RotationDirection = -1;
				if (EggHornet_Rotation < -10) EggHornet_RotationDirection = 1;
				((NJS_OBJECT *)0x01561A70)->ang[1] = NJM_DEG_ANG(EggHornet_Rotation); //Main model
				((NJS_OBJECT *)0x015658E0)->ang[1] = NJM_DEG_ANG(EggHornet_Rotation + 90); //Eggman
				((NJS_SPRITE *)0x3C6C884)->ang = NJM_DEG_ANG(EggHornet_Rotation); //Jet sprite
				((NJS_OBJECT *)0x01567BCC)->evalflags &= ~NJD_EVAL_UNIT_ANG;
				((NJS_OBJECT *)0x01567E64)->evalflags &= ~NJD_EVAL_UNIT_ANG;
				((NJS_OBJECT *)0x015685CC)->evalflags &= ~NJD_EVAL_UNIT_ANG;
				((NJS_OBJECT *)0x015680CC)->evalflags &= ~NJD_EVAL_UNIT_ANG;
				((NJS_OBJECT *)0x01568334)->evalflags &= ~NJD_EVAL_UNIT_ANG;
				((NJS_OBJECT *)0x01567BCC)->ang[1] = NJM_DEG_ANG(EggHornet_Rotation); //Jet
				((NJS_OBJECT *)0x01567E64)->ang[1] = NJM_DEG_ANG(EggHornet_Rotation); //Jet
				((NJS_OBJECT *)0x015685CC)->ang[1] = NJM_DEG_ANG(EggHornet_Rotation); //Jet
				((NJS_OBJECT *)0x015680CC)->ang[1] = NJM_DEG_ANG(EggHornet_Rotation); //Jet
				((NJS_OBJECT *)0x01568334)->ang[1] = NJM_DEG_ANG(EggHornet_Rotation +180); //Jet
			}
		}
		//water animation
		if (CurrentLevel == 23 || CurrentLevel == 25)
		{
			if (GameState != 16)
			{
			if (E101ROcean > 86) E101ROcean = 77;
			matlist_00007B80[0].attr_texId = E101ROcean;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) E101ROcean++;
			if (Camera_Data1 != nullptr)
			{
				object_00007C50.pos[0] = Camera_Data1->Position.x;
				object_00007C50.pos[2] = Camera_Data1->Position.z;
			}
			}
		}
		if (CurrentLevel == 17 && GameState != 16)
		{
			if (Chaos4Water < 13) Chaos4Water = 26;
			matlist_000429E8[0].attr_texId = Chaos4Water;
			if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) Chaos4Water--;
		}
		if (CurrentLevel == 17 && LevelFrameCount < 70)
		{
			matlist_000429E8[0].diffuse.argb.a = 0xBF; //set water alpha back to normal if level is restarted
			object_000425F8.basicdxmodel->mats[0].diffuse.argb.a = 0x65;
			Chaos4Defeated = 0;
		}
		if (CurrentLevel == 20 && GameState != 16)
		{
			if (EggHornetWater1 > 127) EggHornetWater1 = 118;
			if (EggHornetWater2 > 142) EggHornetWater2 = 128;
			matlist_00057F04[0].attr_texId = EggHornetWater1;
			matlist_00048AD0[0].attr_texId = EggHornetWater2;
			matlist_00048FD0[0].attr_texId = EggHornetWater2;
			matlist_0004E8F8[0].attr_texId = EggHornetWater2;
			matlist_0004EBA0[0].attr_texId = EggHornetWater2;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				EggHornetWater1++;
				EggHornetWater2++;
			}
		}
		if (CurrentLevel == 17 && GameState == 15 && Chaos4Hitpoints > 4 && LevelFrameCount > 70 && matlist_000429E8[0].diffuse.argb.a>3)matlist_000429E8[0].diffuse.argb.a= matlist_000429E8[0].diffuse.argb.a-4; //make water invisible when Chaos4 gets in there
		if (CurrentLevel == 17 && GameState == 15 && Chaos4Hitpoints < 1) Chaos4Defeated = 1;
		if (CurrentLevel == 17 && Chaos4Defeated == 1 && object_000425F8.basicdxmodel->mats[0].diffuse.argb.a > 0) object_000425F8.basicdxmodel->mats[0].diffuse.argb.a--;
		if (CurrentLevel == 17 && Chaos4Defeated == 1 && matlist_000429E8[0].diffuse.argb.a < 0xBF) matlist_000429E8[0].diffuse.argb.a = matlist_000429E8[0].diffuse.argb.a + 4;
	}
}