#include <SADXModLoader.h>
#include <lanternapi.h>
#include <string>
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
#include "ERobo.h"
#include <IniFile.hpp>
#include "DC_Levels.h"

std::string plm0xbin;

//Chaos 6 material arrays
DataArray(NJS_MATERIAL, matlist_00F975B0, 0x013975B0, 3);
DataArray(NJS_MATERIAL, matlist_00F98C98, 0x01398C98, 6);
DataArray(NJS_MATERIAL, matlist_01270910, 0x01270910, 4);
DataArray(NJS_MATERIAL, matlist_0126C51C, 0x0126C51C, 2);
DataArray(NJS_MATERIAL, matlist_01271BCC, 0x01271BCC, 2);
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
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6S, 0x011EF040, 3);
DataArray(NJS_VECTOR, SkyBoxScale_Chaos6K, 0x011EF064, 3);
DataArray(DrawDistance, DrawDist_Chaos7, 0x01420E00, 3);
DataArray(DrawDistance, DrawDist_Chaso6S, 0x011EF0B8, 3);
DataArray(DrawDistance, DrawDist_Chaso6K, 0x011EF0D0, 3);
DataArray(DrawDistance, DrawDist_EggHornet, 0x01556B1C, 3);
DataArray(DrawDistance, DrawDist_E101R, 0x015225D8, 3);
DataArray(DrawDistance, DrawDist_Zero, 0x016B4D98, 3);
DataPointer(float, SomeDepthThing, 0x03ABD9C0);
DataPointer(unsigned char, byte_3C5A7EF, 0x3C5A7EF);
DataPointer(unsigned char, byte_3C5A7ED, 0x3C5A7ED);
DataPointer(unsigned char, byte_03C6C944, 0x03C6C944);
DataPointer(float, dword_3C6C930, 0x3C6C930);
DataPointer(unsigned char, byte_03C5A7EF, 0x03C5A7EF);
DataPointer(float, dword_3C6A998, 0x3C6A998);
DataPointer(NJS_OBJECT, stru_13A6E8C, 0x13A6E8C);
DataPointer(NJS_ARGB, nj_constant_material_temp, 0x03B18220);
DataPointer(float, Chaos4Hitpoints, 0x03C58158);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, EVEffect, 0x3C6E1EC);
DataPointer(int, CutsceneID, 0x3B2C570);
DataPointer(NJS_OBJECT, stru_11EDF38, 0x11EDF38);
DataPointer(NJS_OBJECT, stru_11EEED8, 0x11EEED8);
DataPointer(NJS_TEXANIM, stru_149401C, 0x149401C);
DataPointer(NJS_TEXANIM, stru_1494050, 0x1494050);
DataPointer(NJS_SPRITE, stru_1494030, 0x1494030);
DataPointer(NJS_SPRITE, stru_1494064, 0x1494064);
DataPointer(NJS_ARGB, stru_1494114, 0x1494114);
DataPointer(NJS_ARGB, stru_1494124, 0x1494124);
DataPointer(char, EggViperByteThing, 0x03C6E178);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(float, EggViperHitCount, 0x03C58158);
FunctionPointer(void, sub_5632F0, (ObjectMaster *a1), 0x5632F0);
FunctionPointer(void, sub_563370, (ObjectMaster *a1), 0x563370);
FunctionPointer(void, sub_4B9540, (NJS_VECTOR *position, NJS_VECTOR *scale_v, float scale), 0x4B9540);
FunctionPointer(void, sub_408530, (NJS_OBJECT *o), 0x408530);
FunctionPointer(void, sub_570900, (int a1, int a2), 0x570900);
FunctionPointer(void, sub_407BB0, (NJS_MODEL_SADX *a1, QueuedModelFlagsB queueFlags), 0x407BB0);
FunctionPointer(void, sub_56FC30, (int a1, int a2, float a3), 0x56FC30);
FunctionPointer(void, sub_568EC0, (EntityData1 *a1), 0x568EC0);
FunctionPointer(void, sub_4CACF0, (NJS_VECTOR *a1, float a2), 0x4CACF0);
FunctionPointer(void, sub_4CC540, (NJS_VECTOR *a1, int a2, int a3, int a4), 0x4CC540);
FunctionPointer(void, sub_77E940, (FVFStruct_H_B *a1, signed int count, int a3), 0x77E940);

static bool SADXStyleWater_EggHornet = false;
static bool SADXStyleWater_ZeroE101R = false;
static float EggViper_blendfactor = 0.0f;
static int EggViper_blenddirection = 1;
static int EggViper_EffectMode = 0;
static int EggViper_Timer = 0;
static float EggViper_blendfactor_max = 0.005f;
static float EggViper_blendfactor_min = 0.005f;
static unsigned char EggHornetTrigger = 0;
static float TornadoAlpha = 1.0f;
static int TornadoTrigger = 0;
static bool Chaos4Defeated = 0;
static int Chaos4Water = 27;
static float EggViperHitCount_Old = 0.0f;
static int E101ROcean = 81;
static int EggHornetWater1 = 118;
static int EggHornetWater2 = 128;
static int EggHornet_Rotation = 0;
static int EggHornet_RotationDirection = 1;
static int egghornetwater = 143;
static int e101rwater = 87;
static int E101REffectMode = 1;
static float e101rframe = 0;
static NJS_VECTOR E101R_ParticleVector = { 0,0,0 };
static int E101R_ParticleA = 0;
static int E101R_ParticleB = 0;
static int E101R_ParticleC = 0;

void __cdecl EggHornetWaterFunc()
{
	if (!DroppedFrames)
	{
		DisableFog();
		njSetTexture((NJS_TEXLIST *)0x1557064);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper(&object_00048F9C, QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper(&object_00049370, QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper(&object_0004EB6C, QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		ProcessModelNode_A_Wrapper(&object_0004EE14, QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
	}
}

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
	nj_constant_material_temp.a = TornadoAlpha;
	nj_constant_material_temp.r = 1.0f;
	nj_constant_material_temp.g = 1.0f;
	nj_constant_material_temp.b = 1.0f;
	SetMaterialAndSpriteColor(&nj_constant_material_temp);
	ProcessModelNode_D_WrapperB(&stru_13A6E8C, 0, 1.0);
}

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
		stru_1494064.tanim = &texanim_array[v3 + 16];
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

const char* __cdecl SetPLM0X(int level, int act)
{
	if (level == 22)
	{
		return plm0xbin.c_str();
	}
	else { return nullptr; }
}

void FixChaos0Car(NJS_ACTION *a1, float frame, float scale)
{
	NJS_ACTION a4;
	a4.motion = a1->motion;
	a4.object = &object_000597B0_2;
	DisplayAnimationFrame(a1, frame, (QueuedModelFlagsB)0, scale, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))DrawModelThing);
	DisplayAnimationFrame(&a4, frame, (QueuedModelFlagsB)1, scale, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))DrawModel_Queue);
}

void FixChaos2Columns(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	SomeDepthThing = 8000.0f;
	ProcessModelNode_A_Wrapper(a1, a2, a3);
	SomeDepthThing = 0;
}

void Chaos4Skybox(ObjectMaster *o1)
{
	float xshift = -145.92953f;
	float zshift = -27.3004f;
	NJS_VECTOR a1;
	NJS_VECTOR a2;
	if (!MissedFrames)
	{
		njSetTexture(&CHAOS4_OBJECT_TEXLIST);
		j_ClampGlobalColorThing_Thing();
		njPushMatrix(0);
		sub_408530((NJS_OBJECT*)0x11C2C20);
		njPopMatrix(1u);
	}
	if (GameState == 15)
	{
		int v40;
		a2 = { 0, 0, 0 };
		a1.y = 20.0f;
		SetParticleDepthOverride(100.0f);
		v40 = FrameCounter2;
		if (!(FrameCounter2 & 3))
		{
			a1.x = 9.3f;
			a1.z = -280.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 12.3f;
			a1.z = -275.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 15.3f;
			a1.z = -270.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			v40 = FrameCounter2;
		}
		if ((v40 & 3) == 1)
		{
			a1.x = 23.3f;
			a1.z = -267.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 31.3f;
			a1.z = -268.5f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 37.3f;
			a1.z = -269.5f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			v40 = FrameCounter2;
		}
		if ((v40 & 3) == 2)
		{
			a1.x = 43.3f;
			a1.z = -270.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 42.5f;
			a1.z = -275.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
			a1.x = 48.3f;
			a1.z = -280.0f;
			a1.x += xshift;
			a1.z += zshift;
			sub_4B9540(&a1, (NJS_VECTOR *)&a2, 1.5);
		}
		SetParticleDepthOverride(0.0f);
	}
}

void __cdecl Chaos6SkyboxBottom(EntityData1 *a1)
{
	Sint16 v1; // cx
	NJS_TEX *v2; // eax

	if (!MissedFrames)
	{
		v1 = *(Sint16*)&a1->LoopData;
		v2 = stru_11EDF38.basicdxmodel->meshsets->vertuv;
		v2->v = v1 + 2040;
		v2[2].v = v1 + 2040;
		v2[1].v = v1;
		v2[3].v = v1;
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		SetMaterialAndSpriteColor_Float(0.5, 0.0, 0.0, 0.0);
		njTranslate(0, Camera_Data1->Position.x, 0, Camera_Data1->Position.z);
		njScale(0, 3.0, 1.0, 3.0);
		DrawQueueDepthBias = -32000.0f;
		ProcessModelNode(&stru_11EDF38, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void __cdecl Chaos6SkyboxMain()
{
	if (!MissedFrames)
	{
		DisableFog();
		njSetTexture(&CHAOS6_BG_TEXLIST);
		njPushMatrix(0);
		njTranslate(0, Camera_Data1->Position.x, 0.0, Camera_Data1->Position.z);
		njRotateY(0, 57344);
		njScaleV(0, &Skybox_Scale);
		DrawQueueDepthBias = -30000.0f;
		ProcessModelNode(&stru_11EEED8, QueuedModelFlagsB_SomeTextureThing, 3.0f);
		DrawQueueDepthBias = 0;
		//sub_408530(&stru_11EEED8);
		njPopMatrix(1u);
		ToggleStageFog();
	}
}

void PerfectChaosWaterfallHook(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	if (EV_MainThread_ptr != nullptr && CutsceneID == 254) ProcessModelNode(a1, QueuedModelFlagsB_EnableZWrite, a3);
	else ProcessModelNode_A_Wrapper(a1, a2, a3);
}

void E101RRenderAfterEffect(float a, float r, float g, float b)
{
	if (E101REffectMode == 0) SetMaterialAndSpriteColor_Float(min(1.0f, a + 0.2f), min(1.0f, a + 0.2f), a, a);
	else SetMaterialAndSpriteColor_Float(min(1.0f, a + 0.2f), a, a, min(1.0f, a + 0.2f));
}

void E101REffect_Orange(int a1, int a2)
{
	E101REffectMode = 0;
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	sub_570900(a1, a2);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void E101REffect_Blue(int a1, int a2)
{
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	sub_570900(a1, a2);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	E101REffectMode = 1;
}


void E101R_AfterImageConstantAttr(Uint32 and_attr, Uint32 or_attr)
{
	//njSetConstantAttr(0x9999999u, 0x24100000u);
	AddConstantAttr(0, NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ALPHA | NJD_FLAG_IGNORE_LIGHT);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void E101R_AfterImageMaterial(float a, float r, float g, float b)
{
	SetMaterialAndSpriteColor_Float(a, 1.0f, 1.0f, 1.0f);
}

void RenderE101RStuff()
{
	DisableFog();
	njSetTexture((NJS_TEXLIST *)0x16B460C);
	njPushMatrix(0);
	njTranslate(0, 0, 0, 0);
	if (SADXStyleWater_ZeroE101R == false) ProcessModelNode_AB_Wrapper(&object_00007C50, 1.0f);
	ProcessModelNode_AB_Wrapper(&objectR_0001AD68, 1.0f);
	ProcessModelNode_AB_Wrapper(&objectR_0001C3BC, 1.0f);
	ProcessModelNode_AB_Wrapper(&objectR_0001BDF4, 1.0f);
	ProcessModelNode_AB_Wrapper(&objectR_0001A814, 1.0f);
	njAction(&action_animationR_00023C20, e101rframe);
	ProcessModelNode_AB_Wrapper(&objectR_0001CC84, 1.0f);
	ProcessModelNode_AB_Wrapper(&objectR_0001C958, 1.0f);
	ProcessModelNode_AB_Wrapper(&objectR_0001D5E0, 1.0f);
	ProcessModelNode_AB_Wrapper(&objectR_0001D2B4, 1.0f);
	njPopMatrix(1u);
	if (GameState != 16) e101rframe += 0.09999999f;
	if (e101rframe >= 59) e101rframe = 0;
}

void E101R_SkyboxHook(EntityData1 *a1)
{
	sub_568EC0(a1);
	RenderE101RStuff();
}

void E101R_DrawExplosion(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	DrawQueueDepthBias = 20000.0f;
	ProcessModelNode_A_WrapperB(a1, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0.0f;
}

void E101R_DrawSkybox(NJS_OBJECT *a1)
{
	ProcessModelNode_AB_Wrapper(a1, 1.0f);
}

void E101R_RenderParticle(FVFStruct_H_B *a1, signed int count, int a3)//(NJS_VECTOR *a1, int a2, int a3, int a4)
{
	Direct3D_EnableZWrite(0);
	sub_77E940(a1, count, a3);
	Direct3D_EnableZWrite(1);
}

void E101R_SwapParticleOrder(int a1, int a2, float a3)
{
	sub_56FC30(a1, a2, a3);
	sub_4CC540(&E101R_ParticleVector, E101R_ParticleA, E101R_ParticleB, E101R_ParticleC);
}

void E101R_RetrieveParticleStuff(NJS_VECTOR *a1, int a2, int a3, int a4)
{
	E101R_ParticleVector.x = a1->x;
	E101R_ParticleVector.y = a1->y;
	E101R_ParticleVector.z = a1->z;
	E101R_ParticleA = a2;
	E101R_ParticleB = a3;
	E101R_ParticleC = a4;
}

void E101R_AfterImageArmConstantAttr(Uint32 and_attr, Uint32 or_attr)
{
	njSetConstantAttr(0x9999999u, 0x24100000u);
	AddConstantAttr(0, NJD_FLAG_IGNORE_LIGHT);
}

void Bosses_Init(const char *path, const HelperFunctions &helperFunctions)
{
	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
	SADXStyleWater_EggHornet = config->getBool("SADX Style Water", "EggHornet", false);
	SADXStyleWater_ZeroE101R = config->getBool("SADX Style Water", "ZeroE101R", false);
	delete config;
	//Landtables
	WriteData((LandTable**)0x7D1CC0, &landtable_00D2136C); //Chaos 2 PC
	WriteData((LandTable**)0x7D1CD6, &landtable_00000238); //Chaos 4
	WriteData((LandTable**)0x7D1CEC, &landtable_00000318); // Chaos 6 Act 1
	WriteData((LandTable**)0x7D1CF6, &landtable_0000033C); //Chaos 6 Act 2
	WriteData((LandTable**)0x7D1D1C, &landtable_00000128); //Egg Hornet
	WriteData((LandTable**)0x7D1D32, &landtable_0000022C); //Egg Walker
	WriteData((LandTable**)0x7D1D48, &landtable_000580F4); //Egg Viper
	WriteData((LandTable**)0x7D1D7F, &landtable_00000068); //E-101
	WriteData((LandTable**)0x7D1D06, &landtable_00001214); //Perfect Chaos DC
	WriteData((LandTable**)0x7D1D64, &landtable_00000110); //Zero
	WriteData((LandTable**)0x7D1DD1, &landtable_00000180); //E101R
	//E-101R fixes
	ShadowBlob_Model.basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	WriteCall((void*)0x0056FF4A, E101R_RetrieveParticleStuff);
	WriteCall((void*)0x0056FF61, E101R_SwapParticleOrder);
	WriteCall((void*)0x004CC82E, E101R_RenderParticle);
	WriteCall((void*)0x0056FD59, E101R_RenderParticle);
	WriteCall((void*)0x00568F59, E101R_DrawSkybox);
	WriteCall((void*)0x00571581, E101R_DrawExplosion);
	WriteCall((void*)0x005715AE, E101R_DrawExplosion);
	WriteCall((void*)0x0056909F, E101R_SkyboxHook);
	WriteCall((void*)0x00569008, E101R_SkyboxHook);
	WriteData<1>((char*)0x00568D20, 0xC3u); //E101R clip function
	WriteCall((void*)0x0057069D, E101R_AfterImageMaterial); //E10R afterimage
	WriteCall((void*)0x00570784, E101R_AfterImageConstantAttr); //E10R afterimage
	WriteCall((void*)0x0056B07D, E101REffect_Orange); //Set arm effect to orange and render
	WriteCall((void*)0x0056B096, E101REffect_Blue); //Set arm effect to blue and render
	WriteCall((void*)0x0057098A, E101RRenderAfterEffect); //After effect on E101R's arms
	WriteCall((void*)0x00570952, E101R_AfterImageArmConstantAttr);
	WriteCall((void*)0x56463B, PerfectChaosWaterfallHook);
	WriteJump((void*)0x556FD0, Chaos6SkyboxBottom);
	WriteJump((void*)0x556F20, Chaos6SkyboxMain);
	WriteJump((void*)0x550D10, Chaos4Skybox);
	//Robot chest stuff
	*(NJS_OBJECT*)0x00991268 = object_00591268; //Zero main and cutscene model
	WriteData<1>((char*)0x004CFC05, 0x08); //Zero constant material thing
	WriteData<1>((char*)0x004CFC99, 0x08); //Zero constant material thing
	WriteData((float*)0x00567D08, 0.85f); //E101 alpha (boss model)
	WriteData((float*)0x006F4718, 0.85f); //E101 alpha (boss model)
	((NJS_OBJECT*)0x014D943C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E101 unnecessary alpha (boss model)
	((NJS_OBJECT*)0x0312F714)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E101 unnecessary alpha (cutscene model)
	((NJS_OBJECT*)0x030AB08C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E103 unnecessary alpha (cutscene model)
	((NJS_OBJECT*)0x030A290C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E104 unnecessary alpha (cutscene model)
	((NJS_OBJECT*)0x0309A21C)->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_USE_ALPHA; //E105 unnecessary alpha (cutscene model)
	WriteData((float*)0x004E7BFD, 0.85f); //E103 alpha (reused Gamma model)
	WriteData((float*)0x004E7C40, 0.85f); //E103 alpha (reused Gamma model)
	WriteData((float*)0x00605813, 0.85f); //E104 alpha (reused Gamma model)
	WriteData((float*)0x006F3F94, 0.85f); //E103 alpha (cutscene model)
	WriteData((float*)0x006F3D54, 0.85f); //E104 alpha (cutscene model)
	WriteData((float*)0x006F3B24, 0.85f); //E105 alpha (cutscene model)
	WriteCall((void*)0x0054AC30, FixChaos2Columns);
	WriteCall((void*)0x0054968E, FixChaos0Car);
	//Fix Chaos0 police car
	//Egg Carrier 2 crash in Perfect Chaos cutscene
	WriteData((float*)0x0065D8D1, 837.418f); //X1
	WriteData((float*)0x0065D8CC, 412.38f); //Y1
	WriteData((float*)0x0065D8C7, -406.796f); //Z1
	WriteData((int*)0x0065D8E3, 65238); //XA1
	WriteData((int*)0x0065D8DE, 29421); //YA1
	WriteData((float*)0x0065D8FC, 1148.37f); //X2
	WriteData((float*)0x0065D8F7, 423.5f); //Y2
	WriteData((float*)0x0065D8F2, -325.65f); //Z2
	WriteData((int*)0x0065D912, 64083); //XA2
	WriteData((int*)0x0065D90D, 28705); //YA2
	plm0xbin = path;
	plm0xbin.append("\\system\\PL_M0X.BIN");
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	HMODULE SA1Chars = GetModuleHandle(L"SA1_Chars");
	if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
	{
		typedef const char* (__cdecl* lantern_load_cb)(int level, int act);
		pl_load_register(SetPLM0X);
		material_register(Chaos6ObjectMaterials, LengthOfArray(Chaos6ObjectMaterials), &ForceDiffuse0Specular0or1);
		material_register(WhiteDiffuse_Boss, LengthOfArray(WhiteDiffuse_Boss), &ForceWhiteDiffuse1);
	}
	WriteJump((void*)0x00556D60, SetClip_Chaos6KX);
	WriteJump((void*)0x00556E40, SetClip_Chaos6SX);
	//SADX style water
	if (SADXStyleWater_EggHornet == true)
	{
		ResizeTextureList((NJS_TEXLIST*)0x1557064, 160); //Egg Hornet level texlist
		landtable_00000128.TexName = "EGM1LANDW";
		WriteCall((void*)0x00572310, WaterTexture_BossWaves); //Egg Hornet ocean
		WriteCall((void*)0x0057236D, WaterTexture_BossOcean); //Egg Hornet ocean
		WriteCall((void*)0x005722A3, DisableSADXWaterFog); //Egg Hornet ocean
		collist_0001E294[LengthOfArray(collist_0001E294) - 1].Flags = 0x81000000;
		collist_0001E294[LengthOfArray(collist_0001E294) - 2].Flags = 0x81000000;
		collist_0001E294[LengthOfArray(collist_0001E294) - 3].Flags = 0x81000000;
		collist_0001E294[LengthOfArray(collist_0001E294) - 4].Flags = 0x81000000;
		collist_0001E294[LengthOfArray(collist_0001E294) - 5].Flags = 0x00000000;
	}
	else
	{
		ResizeTextureList((NJS_TEXLIST*)0x1557064, 143);  //Egg Hornet level texlist
		landtable_00000128.TexName = "EGM1LAND";
		WriteCall((void*)0x0057192A, EggHornetWaterFunc); //Egg Hornet water
		collist_0001E294[LengthOfArray(collist_0001E294) - 1].Flags = 0x00000000;
		collist_0001E294[LengthOfArray(collist_0001E294) - 2].Flags = 0x00000000;
		collist_0001E294[LengthOfArray(collist_0001E294) - 3].Flags = 0x00000000;
		collist_0001E294[LengthOfArray(collist_0001E294) - 4].Flags = 0x00000000;
		collist_0001E294[LengthOfArray(collist_0001E294) - 5].Flags = 0x80040400;
	}
	if (SADXStyleWater_ZeroE101R == true)
	{
		ResizeTextureList((NJS_TEXLIST*)0x16B460C, 104); //Zero/E101R texlist
		collist_000096DC[LengthOfArray(collist_000096DC) - 1].Flags = 0x00000000;
		landtable_00000110.TexName = "E101R_TIKEIW";
		landtable_00000180.TexName = "E101R_TIKEIW";
		WriteCall((void*)0x0056CD15, WaterTexture_BossWaves); //E101R ocean
		WriteCall((void*)0x0056CD7B, WaterTexture_BossOcean); //E101R ocean
		WriteCall((void*)0x00587EF5, WaterTexture_BossWaves); //Zero ocean
		WriteCall((void*)0x00587F5B, WaterTexture_BossOcean); //Zero ocean
	}
	else
	{
		ResizeTextureList((NJS_TEXLIST*)0x16B460C, 87); //Zero/E101R texlist
		collist_000096DC[LengthOfArray(collist_000096DC) - 1].Flags = 0x80000000;
		landtable_00000110.TexName = "E101R_TIKEI";
		landtable_00000180.TexName = "E101R_TIKEI";
		WriteData<1>((void*)0x587E10, 0xC3u); //E101R water
		WriteData<1>((void*)0x56CC30, 0xC3u); //Zero water
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
	((NJS_MATERIAL*)0x0117E8A0)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //Top light in Chaos 2
	((NJS_MATERIAL*)0x011E2C00)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Lilypad in Chaos 4
	((NJS_MATERIAL*)0x011E2C14)->attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Lilypad in Chaos 4
	*(NJS_OBJECT*)0x01669DA8 = object_000434A0; //part of Egg Viper model
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
	matlist_00F975B0[0].diffuse.color = 0xFFB2B2B2;
	matlist_00F975B0[1].diffuse.color = 0xFFB2B2B2;
	matlist_00F975B0[2].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[0].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[1].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[2].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[3].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[4].diffuse.color = 0xFFB2B2B2;
	matlist_00F98C98[5].diffuse.color = 0xFFB2B2B2;
	ResizeTextureList((NJS_TEXLIST*)0x117C76C, textures_chaos2);
	ResizeTextureList((NJS_TEXLIST*)0x118FF08, textures_chaos4dc);
	ResizeTextureList((NJS_TEXLIST*)0x121FF28, textures_chaos6);
	ResizeTextureList((NJS_TEXLIST*)0x11F04A0, textures_chaos6_2);
	ResizeTextureList((NJS_TEXLIST*)0x1494FBC, textures_chaos7);
	ResizeTextureList((NJS_TEXLIST*)0x15E99F8, textures_eggwalker);
	ResizeTextureList((NJS_TEXLIST*)0x167E5CC, textures_eggviper);
	ResizeTextureList((NJS_TEXLIST*)0x14FBFB4, textures_e101);
	memcpy((void*)0x011C4B90, &object_000425F8, sizeof(object_000425F8)); // Chaos4 swamp water
	//*(NJS_OBJECT*)0x1561A70 = object_000104E8; //Egg Hornet model
	//Chaos 6 emeralds
	((NJS_MATERIAL*)0x01264A58)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x01266968)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126F6F4)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126F970)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126FBE8)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x0126FE60)->diffuse.color = 0xFFB2B2B2;
	((NJS_MATERIAL*)0x01264A58)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x01266968)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126F6F4)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126F970)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126FBE8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x0126FE60)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	//Egg Hornet model stuff
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
	((NJS_MATERIAL*)0x015570AC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	//Egg Walker
	((NJS_OBJECT*)0x162E0FC)->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x0162E158)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
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
	for (int p = 0; p < LengthOfArray(PerfectChaosCars); p++)
	{
		PerfectChaosCars[p]->diffuse.argb.r = 0xB2;
		PerfectChaosCars[p]->diffuse.argb.g = 0xB2;
		PerfectChaosCars[p]->diffuse.argb.b = 0xB2;
	}
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
		SkyBoxScale_Chaos6S[i].x = 1.0f;
		SkyBoxScale_Chaos6S[i].y = 1.0f;
		SkyBoxScale_Chaos6S[i].z = 1.0f;
		SkyBoxScale_Chaos6K[i].x = 1.0f;
		SkyBoxScale_Chaos6K[i].y = 1.0f;
		SkyBoxScale_Chaos6K[i].z = 1.0f;
		DrawDist_Chaso6S[i].Maximum = -18000.0f;
		DrawDist_Chaso6K[i].Maximum = -18000.0f;
		Chaos7Fog[i].Layer = -4000.0f;
		Chaos7Fog[i].Distance = 11000.0f;
		Chaos7Fog[i].Toggle = 1;
		DrawDist_Chaos7[i].Maximum = -6500.0;
		DrawDist_EggHornet[i].Maximum = -12500.0;
		EggHornetFog[i].Distance = -9000.0f;
		EggHornetFog[i].Layer = -1500.0f;
		EggHornetFog[i].Toggle = 1;
		EggHornetFog[i].Color = 0xFF646464;
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

void Bosses_OnFrame()
{
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	//Egg Viper effect
	if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
	{

		//Hopefully disable all this before it gets ugly
		if (EggViper_blendfactor != 0 && CurrentLevel != 22)
		{
			EggViper_blendfactor = 0;
			EggViper_EffectMode = 0;
			set_shader_flags(ShaderFlags_Blend, false);
		}
		if (GameMode == GameModes_Menu || GameMode == GameModes_CharSel)
		{
			EggViper_blendfactor_max = 0.005f;
			EggViper_blendfactor_min = 0.005f;
			EggViper_Timer = 0;
			EggViper_EffectMode = 0;
			EggViper_blendfactor = 0;
			EggViper_blenddirection = 1;
			set_shader_flags(ShaderFlags_Blend, false);
			EggViperByteThing = 0;
		}
		if (CurrentLevel == 22)
		{
			if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21 || CurrentLevel != 22)
			{
				EggViper_blendfactor_max = 0.005f;
				EggViper_blendfactor_min = 0.005f;
				EggViper_Timer = 0;
				EggViper_EffectMode = 0;
				EggViper_blendfactor = 0;
				EggViper_blenddirection = 1;
				EggViperByteThing = 0;
			}
			if (EggViperHitCount == 7) EggViperHitCount_Old = 7;
			//activate a brief flash
			if (EggViper_Timer <= 0 && EggViperHitCount < EggViperHitCount_Old && EggViperHitCount > 0)
			{
				EggViper_blendfactor_max = 0.005f;
				EggViper_blendfactor_min = 0.005f;
				EggViper_Timer = 200 / FramerateSetting;
				EggViper_EffectMode = 1;
				EggViper_blendfactor = 0;
				EggViper_blenddirection = 1;
				EggViperHitCount_Old = EggViperHitCount;
			}
			//activate a longer flash
			if (EggViper_Timer <= 0 && EggViper_EffectMode == 0 && EggViperHitCount == EggViperHitCount_Old && EVEffect == 1)
			{
				EggViper_blendfactor_max = 0.005f;
				EggViper_blendfactor_min = 0.005f;
				EggViper_Timer = 200 / FramerateSetting;
				EggViper_EffectMode = 2;
				if (EggViper_blendfactor == 0) EggViper_blenddirection = 1;
			}
			//activate a brief permanent flash
			if (EggViper_EffectMode == 0 && EggViperHitCount == EggViperHitCount_Old && EVEffect == 0 && EggViperByteThing == 1)
			{
				EggViper_EffectMode = 5;
				if (EggViper_blendfactor == 0) EggViper_blenddirection = 1;
			}
			//activate permanent flashing
			if (EggViper_Timer <= 0 && EggViperHitCount < EggViperHitCount_Old && EggViperHitCount <= 0)
			{
				EggViper_Timer = 1040 / FramerateSetting;
				EggViper_EffectMode = 3;
				if (EggViper_blendfactor == 0) EggViper_blenddirection = 1;
				EggViperHitCount_Old = EggViperHitCount;
			}
			//brief flash
			if (EggViper_EffectMode == 1)
			{
				if (GameState != 16)
				{
					if (EggViper_blenddirection == 1 && EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.08f*FramerateSetting;
					if (EggViper_blenddirection == -1 && EggViper_blendfactor > 0.0f) EggViper_blendfactor = EggViper_blendfactor - 0.08f*FramerateSetting;
				}
				if (EggViper_blendfactor >= 1.0f) EggViper_blenddirection = -1;
				if (EggViper_blenddirection == -1 && EggViper_blendfactor <= 0.0f)
				{
					EggViper_blendfactor = 0;
					EggViper_EffectMode = 0;
					set_shader_flags(ShaderFlags_Blend, false);
				}
			}
			//longer flash
			if (EggViper_EffectMode == 2)
			{
				if (GameState != 16 && EggViper_blenddirection == 1 && EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.028f*FramerateSetting;
				if (EggViper_blendfactor >= 1.0f) EggViper_blenddirection = -1;
				if (GameState != 16 && EggViper_blenddirection == -1 && EggViper_blendfactor > 0.0f) EggViper_blendfactor = EggViper_blendfactor - 0.028f*FramerateSetting;
				if (EggViper_blenddirection == -1 && EggViper_blendfactor <= 0.0f)
				{
					EggViper_blendfactor = 0;
					EggViper_EffectMode = 0;
					set_shader_flags(ShaderFlags_Blend, false);
				}
			}
			//permanent flash
			if (EggViper_EffectMode == 3)
			{
				if (EggViper_Timer <= 0)
				{
					EggViper_blenddirection = 1;
					EggViper_EffectMode = 4;
				}
				if (EggViper_blendfactor >= 1.0f) EggViper_blenddirection = -1;
				if (EggViper_blendfactor <= 0.5f) EggViper_blenddirection = 1;
				if (GameState != 16)
				{
					if (EggViper_blenddirection == 1 && EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.08f*FramerateSetting;
					if (EggViper_blenddirection == -1 && EggViper_blendfactor > 0.0f) EggViper_blendfactor = EggViper_blendfactor - 0.08f*FramerateSetting;
				}
			}
			//final flash
			if (EggViper_EffectMode == 4)
			{
				if (EggViper_blendfactor < 1.0f) EggViper_blendfactor = EggViper_blendfactor + 0.08f*FramerateSetting;
			}
			//fast flickering within an increasing range
			if (EggViper_EffectMode == 5)
			{
				if (EggViperByteThing == 0)
				{
					EggViper_blendfactor_max = 0.005f;
					EggViper_blendfactor_min = 0.001f;
					EggViper_blendfactor = 0.0f;
					EggViper_blenddirection = 1;
					EggViper_EffectMode = 0;
					set_blend_factor(0);
				}
				if (EggViper_blendfactor >= EggViper_blendfactor_max)
				{
					set_diffuse_blend(0, 3);
					EggViper_blenddirection = -1;
					if (EggViper_blendfactor_max < 1.0f)
					{
						EggViper_blendfactor_max = EggViper_blendfactor_max + 0.015f;
					}
				}
				if (EggViper_blendfactor <= EggViper_blendfactor_min)
				{
					EggViper_blenddirection = 1;
					set_diffuse_blend(0, 6);
				}
				if (GameState != 16)
				{
					if (EggViper_blenddirection == 1 && EggViper_blendfactor < EggViper_blendfactor_max) EggViper_blendfactor = EggViper_blendfactor + (EggViper_blendfactor_max / 2.0f)*FramerateSetting;
					if (EggViper_blenddirection == -1 && EggViper_blendfactor > EggViper_blendfactor_min) EggViper_blendfactor = EggViper_blendfactor - (EggViper_blendfactor_max / 2.0f)*FramerateSetting;
				}
			}
			//subtract timer
			if (GameState != 16 && EggViper_Timer > 0) EggViper_Timer--;
			//general stuff
			if (EggViper_EffectMode != 0)
			{
				set_shader_flags(ShaderFlags_Blend, true);
				if (EggViper_EffectMode != 5) set_diffuse_blend(0, 5);
				set_specular_blend(0, 0);
				set_blend_factor(EggViper_blendfactor);
			}
			else
			{
				set_shader_flags(ShaderFlags_Blend, false);
			}

		}
	}
	//Super stupid hax to make Perfect Chaos' tornadoes fade in
	if (byte_3C5A7ED != 11)
	{
		if (byte_3C5A7EF == 0) TornadoTrigger = 0;
		if (byte_3C5A7EF == 3)
		{
			TornadoTrigger = 1;
			TornadoAlpha = 0;
		}
		if (TornadoTrigger == 1 && byte_3C5A7EF != 3) TornadoTrigger = 2;
		if (TornadoTrigger == 2) TornadoAlpha = TornadoAlpha + 0.04f;
		if (TornadoAlpha >= 1.0f) TornadoTrigger = 0;
	}
	else
	{
		if (TornadoAlpha > 0.0f) TornadoTrigger = 3;
		if (TornadoTrigger == 3) TornadoAlpha = TornadoAlpha - 0.01f * FramerateSetting;
		if (TornadoTrigger == 3 && TornadoAlpha <= 0.01f)
		{
			TornadoTrigger = 4;
			TornadoAlpha = 0.0f;
		}
	}
	//Egg Hornet rotation
	if (CurrentLevel == 20 && GameState != 16)
	{
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
		{
			EggHornet_Rotation = 0;
			EggHornet_RotationDirection = 1;
			EggHornetTrigger = 0;
		}
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
			if (EggHornet_RotationDirection == 1) EggHornet_Rotation = EggHornet_Rotation + 3 * FramerateSetting;
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
			((NJS_OBJECT *)0x01568334)->ang[1] = NJM_DEG_ANG(EggHornet_Rotation + 180); //Jet
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
	if (CurrentLevel == 17 && GameState == 15 && Chaos4Hitpoints > 4 && LevelFrameCount > 70 && matlist_000429E8[0].diffuse.argb.a > 3)matlist_000429E8[0].diffuse.argb.a = matlist_000429E8[0].diffuse.argb.a - 4; //make water invisible when Chaos4 gets in there
	if (CurrentLevel == 17 && GameState == 15 && Chaos4Hitpoints < 1) Chaos4Defeated = 1;
	if (CurrentLevel == 17 && Chaos4Defeated == 1 && object_000425F8.basicdxmodel->mats[0].diffuse.argb.a > 0) object_000425F8.basicdxmodel->mats[0].diffuse.argb.a--;
	if (CurrentLevel == 17 && Chaos4Defeated == 1 && matlist_000429E8[0].diffuse.argb.a < 0xBF) matlist_000429E8[0].diffuse.argb.a = matlist_000429E8[0].diffuse.argb.a + 4;
}