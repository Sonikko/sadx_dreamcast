#include "stdafx.h"
#include <SADXModLoader.h>
#include "stdlib.h"
#include <math.h> 
#include <lanternapi.h>
#include "Animals.h"
#include "Itembox.h"
#include "EmeraldGlow.h"
#include "TornadoCrash.h"
#include "EggmobileNPC.h"
#include "CharacterEffects.h"
#include "Ripple.h"
#include "CommonObjects.h"
#include <IniFile.hpp>
#include "DC_Levels.h"

HMODULE CHRMODELS3 = GetModuleHandle(L"CHRMODELS_orig");
HMODULE ADV01MODELS2 = GetModuleHandle(L"ADV01MODELS");
HMODULE ADV01CMODELS2 = GetModuleHandle(L"ADV01CMODELS");
HMODULE ADV03MODELS = GetModuleHandle(L"ADV03MODELS");

NJS_TEXANIM EmeraldGlowTexanim = { 32, 32, 0, 0, 0, 0, 0xFF, 0xFF, 3, 0 };
NJS_SPRITE EmeraldGlowSprite = { { -16.0f, -10.5f, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00C3FE20, &EmeraldGlowTexanim };

NJS_TEXANIM Heat1Texanim = { 56, 64, 28, 32, 0, 0, 0xFF, 0xFF, 2, 0 };
NJS_TEXANIM Heat2Texanim = { 56, 64, 28, 32, 0, 0, 0xFF, 0xFF, 2, 0 };

NJS_SPRITE Heat1Sprite = { { 0, 0, 0 }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x0091BD28, &Heat1Texanim };
NJS_SPRITE Heat2Sprite = { { 0, 0, 0 }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x0091BD28, &Heat2Texanim };

DataArray(char, byte_3C5B37C, 0x3C5B37C, 52);
DataPointer(NJS_MODEL_SADX, stru_8BC0F4, 0x8BC0F4);
DataPointer(NJS_MODEL_SADX, stru_8BBD84, 0x8BBD84);
DataPointer(NJS_MODEL_SADX, stru_989384, 0x989384);
DataPointer(D3DCOLORVALUE, stru_3D0B7C8, 0x3D0B7C8);
DataPointer(NJS_OBJECT, stru_8B22F4, 0x8B22F4);
DataPointer(int, CutsceneID, 0x3B2C570);
DataPointer(float, EnvMap1, 0x038A5DD0);
DataPointer(float, EnvMap2, 0x038A5DE4);
DataPointer(float, EnvMap3, 0x038A5E00);
DataPointer(float, EnvMap4, 0x038A5E04);
DataPointer(int, FramerateSetting, 0x0389D7DC);
FunctionPointer(void, sub_4083D0, (NJS_ACTION *a1, float a2, int a3), 0x4083D0);
FunctionPointer(EntityData1*, sub_4B9430, (NJS_VECTOR *a1, NJS_VECTOR *a2, float a3), 0x4B9430);

static int EnvMapMode = 0;
static int AlphaRejectionMode = 0;
static int EmeraldGlowAlpha = 255;
static bool EmeraldGlowDirection = false;
static bool EnableDCRipple = true;
static float heat_float1 = 1.0f; //1
static float heat_float2 = 0.2f; //0.5
static float alphathing = 1.0f;

NJS_MATERIAL* FirstCharacterSpecular_General[] = {
	//Hedgehog Hammer targets (possibly SL objects?)
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011C478),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011BF60),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011BF74),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011BBC8),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011B364),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011A9E8),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011A504),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011A1CC),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011A07C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011A090),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00119F2C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00119F40),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x001247C8),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x001242B0),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x001242C4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00123F18),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x001236B4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00122D38),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00122854),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0012251C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x001223CC),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x001223E0),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0012227C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00122290),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00115630),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00114C38),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00114C4C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00114C60),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00114C74),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00114568),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x0011457C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x001142D4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x001140CC),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00113EB4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x00113B4C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS2 + 0x001137E4),
	//Button
	((NJS_MATERIAL*)0x008BB6E4),
	((NJS_MATERIAL*)0x008BB6F8),
	((NJS_MATERIAL*)0x00989334),
	((NJS_MATERIAL*)0x00989348),
};

NJS_MATERIAL* LevelSpecular_General[] = {
	//Forgot
	((NJS_MATERIAL*)0x00989320),
	((NJS_MATERIAL*)0x008BB6D0),
	((NJS_MATERIAL*)0x008BB70C),
	((NJS_MATERIAL*)0x008BB720),
	((NJS_MATERIAL*)0x0098935C),
	((NJS_MATERIAL*)0x00989370),
};

NJS_MATERIAL* ObjectSpecular_General[] = {
	//Chaos6 eggmobile
	((NJS_MATERIAL*)0x012545E0),
	((NJS_MATERIAL*)0x012545F4),
	((NJS_MATERIAL*)0x01254608),
	((NJS_MATERIAL*)0x0125461C),
	((NJS_MATERIAL*)0x01254630),
	((NJS_MATERIAL*)0x01254644),
	((NJS_MATERIAL*)0x01254658),
	((NJS_MATERIAL*)0x0125466C),
	((NJS_MATERIAL*)0x01254680),
	((NJS_MATERIAL*)0x01254694),
	((NJS_MATERIAL*)0x012546A8),
	((NJS_MATERIAL*)0x012546BC),
	((NJS_MATERIAL*)0x012546D0),
	((NJS_MATERIAL*)0x012546E4),
	((NJS_MATERIAL*)0x012546F8),
	((NJS_MATERIAL*)0x0125470C),
	((NJS_MATERIAL*)0x01254720),
	((NJS_MATERIAL*)0x01254734),
	((NJS_MATERIAL*)0x01254748),
	((NJS_MATERIAL*)0x0125475C),
	((NJS_MATERIAL*)0x01254770),
	((NJS_MATERIAL*)0x01254784),
	((NJS_MATERIAL*)0x01254798),
	((NJS_MATERIAL*)0x012547AC),
	((NJS_MATERIAL*)0x012547C0),
	//Sewers elevator
	((NJS_MATERIAL*)0x02AB7798),
	((NJS_MATERIAL*)0x02AB77AC),
	((NJS_MATERIAL*)0x02AB77C0),
	((NJS_MATERIAL*)0x02AB77D4),
	((NJS_MATERIAL*)0x02AB77E8),
	((NJS_MATERIAL*)0x02AB77FC),
	((NJS_MATERIAL*)0x02AB7810),
	((NJS_MATERIAL*)0x02AB7824),
	((NJS_MATERIAL*)0x02AB7838),
	((NJS_MATERIAL*)0x02AB784C),
	((NJS_MATERIAL*)0x02AB7860),
	((NJS_MATERIAL*)0x02AB7874),
	//EggMissile
	((NJS_MATERIAL*)0x03317838),
	((NJS_MATERIAL*)0x0331784C),
	((NJS_MATERIAL*)0x03317860),
	((NJS_MATERIAL*)0x03317874),
	((NJS_MATERIAL*)0x03317888),
	((NJS_MATERIAL*)0x0331789C),
	((NJS_MATERIAL*)0x033178B0),
	//OSkyDeck
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2600),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2614),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2628),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F263C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2650),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2664),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F2678),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F268C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F26A0),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F26B4),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F26C8),
	(NJS_MATERIAL*)((size_t)ADV01MODELS2 + 0x001F26DC),
};

bool E101Function(NJS_MATERIAL* material, Uint32 flags)
{
	if (CurrentLevel == 33 || CurrentLevel == 32)
	{
		set_diffuse(2, false);
		set_specular(3, false);
	}
	else
	{
		set_diffuse(0, false);
		set_specular(1, false);
	}
	return true;
}

bool ForceWhiteDiffuseFirstCharSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(2, false);
	set_diffuse(1, false);
	diffuse_override(true);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuseSecondCharSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(3, false);
	set_diffuse(1, false);
	diffuse_override(true);
	use_default_diffuse(true);
	return true;
}

void RenderEmeraldWithGlow(NJS_OBJECT *a1, int scale)
{
	ProcessModelNode_D_Wrapper(a1, scale);
	if (EmeraldGlowAlpha >= 255) EmeraldGlowDirection = false;
	if (EmeraldGlowAlpha <= 128) EmeraldGlowDirection = true;
	if (EmeraldGlowDirection == true) EmeraldGlowAlpha = EmeraldGlowAlpha + 2; else EmeraldGlowAlpha = EmeraldGlowAlpha - 2;
	if (CurrentLevel == 2) EmeraldGlowTexanim.texid = 3;
	if (CurrentLevel == 9) EmeraldGlowTexanim.texid = 4;
	if (CurrentLevel == 8) EmeraldGlowTexanim.texid = 5;
	SetMaterialAndSpriteColor_Float((EmeraldGlowAlpha / 255.0f), 1.0f, 1.0f, 1.0f);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	njDrawSprite3D(&EmeraldGlowSprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR);
	njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
}

void RotateEmerald()
{
	njRotateY(0, Camera_Data1->Rotation.y);
}

void SonicDashTrailFix(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	a1->basicdxmodel->mats->attr_texId = rand() % 2;
	ProcessModelNode_A_WrapperB(a1, a2);
	a1->basicdxmodel->mats->attr_texId = 0;
}

void __cdecl Knuckles_MaximumHeat_DrawX(NJS_VECTOR *position, float alpha)
{
	float a; // ST00_4
	float s; // ST10_4
	double y; // st7

	if (!MissedFrames)
	{
		a = alpha * -0.6f;
		object_003291C4.basicdxmodel->mats[0].attr_texId = 1;
		matlist_003288AC[0].diffuse.argb.a = 255 * (1.0f - alpha*1.1f)*0.7f;
		njPushMatrix(0);
		njTranslateV(0, position);
		s = 1.2f - alpha * alpha;
		njScale(0, s, s, s);
		y = alpha * 262144.0f;
		if ((unsigned int)(unsigned __int64)y)
		{
			njRotateY(0, (unsigned __int16)(unsigned __int64)y);
		}
		njSetTexture(&KNU_EFF_TEXLIST);
		SomeDepthThing = 2000.0f;
		ProcessModelNode_A_WrapperB(&object_003291C4, QueuedModelFlagsB_SomeTextureThing);
		SomeDepthThing = 0.0f;
		njPopMatrix(1u);
		ClampGlobalColorThing_Thing();
	}
}

void __cdecl Knuckles_MaximumHeatSprite_Draw(ObjectMaster *sx)
{
	auto entity = EntityData1Ptrs[0];
	float *v1; // eax
	EntityData1 *v2; // esi
	float a; // ST00_4
	Float sxa; // [esp+18h] [ebp+4h]
	DataArray(EntityData1*, EntityData1Ptrs, 0x03B42E10, 8);
	NJS_VECTOR pos;
	float scl1;
	float scl2;
	v1 = (float *)&sx->Data1->Action;
	v2 = EntityData1Ptrs[0];
	if (EntityData1Ptrs[0])
	{
		if (!MissedFrames)
		{
			sxa = (v1[13] - v1[12]) * v1[3] + v1[12];
			a = (v1[2] - v1[4]) * v1[3] + v1[4];
			SetMaterialAndSpriteColor_Float(a, 1.0, 1.0, 1.0);
			pos = v2->CollisionInfo->CollisionArray->origin;
			pos.x = entity->Position.x;
			pos.y = entity->Position.y + 5.0f;
			pos.z = entity->Position.z;
			njSetTexture(&KNU_EFF_TEXLIST);
			njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
			//Sprite 1
			scl1 = sxa*0.09f;
			njPushMatrix(0);
			njTranslateV(0, &pos);
			njRotateX(0, Camera_Data1->Rotation.x);
			njRotateZ(0, Camera_Data1->Rotation.z);
			njRotateY(0, Camera_Data1->Rotation.y);
			njScale(0, scl1, scl1, scl1);
			DrawQueueDepthBias = 5000.0f;
			njDrawSprite3D(&Heat1Sprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR);
			njPopMatrix(1u);
			//Sprite 2
			scl2 = 0.05f / scl1;
			njPushMatrix(0);
			njTranslateV(0, &pos);
			njRotateX(0, Camera_Data1->Rotation.x);
			njRotateZ(0, Camera_Data1->Rotation.z);
			njRotateY(0, Camera_Data1->Rotation.y);
			njScale(0, scl2, scl2, scl2);
			njDrawSprite3D(&Heat2Sprite, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR);
			njPopMatrix(1u);
			ClampGlobalColorThing_Thing();
			njColorBlendingMode(NJD_SOURCE_COLOR, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
			DrawQueueDepthBias = 0;
		}
	}
}

void KnucklesPunch_RetrieveAlpha(float a, float r, float g, float b)
{
	alphathing = a;
}

void KnucklesPunch_Render(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	a1->basicdxmodel->mats[0].diffuse.argb.a = alphathing * 255;
	ProcessModelNode_A_WrapperB(a1, a2);
}

void __cdecl Sonic_DisplayLightDashModelX(EntityData1 *data1, CharObj2 **data2_pp, CharObj2 *data2)
{
	int v3; // eax
	__int16 v4; // t1
	double v5; // st7
	float v6; // ST28_4
	double v7; // st7
	NJS_ACTION v8; // [esp+4h] [ebp-18h]
	NJS_ARGB a1; // [esp+Ch] [ebp-10h]
	NJS_OBJECT **___SONIC_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS3, "___SONIC_OBJECTS");
	if (!MissedFrames)
	{
		v3 = (unsigned __int16)data2->AnimationThing.Index;
		v8.object = ___SONIC_OBJECTS[54];
		if (data2->AnimationThing.State == 2)
		{
			v4 = data2->AnimationThing.LastIndex;
			v8.motion = data2->AnimationThing.action->motion;
		}
		else
		{
			v8.motion = data2->AnimationThing.AnimData[v3].Animation->motion;
		}
		v5 = (double)(FrameCounterUnpaused & 0x7F);
		if (v5 >= 64.0f)
		{
			v5 = 128.0f - v5;
		}
		//v5 = 0;
		njPushMatrixEx();
		njControl3D(NJD_CONTROL_3D_CONSTANT_MATERIAL | NJD_CONTROL_3D_ENABLE_ALPHA | NJD_CONTROL_3D_CONSTANT_ATTR);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		//Main
		SetMaterialAndSpriteColor_Float(1.0f, 0, 0.06f + (64 - v5) / 880.0f, 1.0f);
		DrawQueueDepthBias = 8000.0f;
		sub_4083D0(&v8, data2->AnimationThing.Frame, 0);
		//Outer 1
		njScale(0, 1.05f, 1.05f, 1.05f);
		SetMaterialAndSpriteColor_Float(1.0f, 0.0245f, (64 - v5) / 1050.0f, 1.0f);
		DrawQueueDepthBias = 9000.0f;
		sub_4083D0(&v8, data2->AnimationThing.Frame, 0);
		//Outer 2
		njScale(0, 1.05f, 1.05f, 1.05f);
		SetMaterialAndSpriteColor_Float(1.0f, 0.024f, (64 - v5) / 2000.0f, 0.15f);
		DrawQueueDepthBias = 10000.0f;
		sub_4083D0(&v8, data2->AnimationThing.Frame, 0);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njPopMatrixEx();
		DrawQueueDepthBias = 0;
	}
}

void FixWaterSplash(EntityData1 *a1)
{
	ParticleDepthOverride = 2000.0f;
	SpawnSplashParticles(a1);
	ParticleDepthOverride = 0;
}

void __cdecl SpawnRipplesX(unsigned __int8 a1, NJS_VECTOR *a2)
{
	int v2; // eax
	CharObj2 *v3; // esi
	double v4; // st7
	_BOOL1 v5; // c0
	_BOOL1 v6; // c3
	double v7; // st7
	long double v8; // st7
	float a3; // ST08_4
	NJS_VECTOR a2a; // [esp+Ch] [ebp-Ch]

	v2 = a1;
	v3 = CharObj2Ptrs[v2];
	if (EntityData1Ptrs[v2]->Position.y + v3->PhysicsData.CollisionSize >= a2->y)
	{
		if (njScalor(&v3->Speed) == 0.0f)
		{
			v4 = (double)rand() * 0.000030517578;
			v5 = v4 < 0.9f;
			v6 = v4 == 0.9f;
		}
		else
		{
			v7 = (double)rand() * 0.000030517578f;
			v5 = v7 < 0.85f;
			v6 = v7 == 0.85f;
		}
		if (!(v5 | v6) && njScalor(&v3->Speed) != 0.0f)
		{
			v8 = v3->Speed.y;
			a2a.y = 0.0;
			a2a.z = 1.5;
			a2a.x = fabs(v8) * 0.005f + 0.03f;
			a3 = v3->PhysicsData.RippleSize * 0.1f;
			sub_4B9430(a2, &a2a, a3);
		}
	}
}

void __cdecl FixedRipple_Normal(ObjectMaster *a2)
{
	EntityData1 *v1; // esi
	float g; // [esp+10h] [ebp-4h]
	v1 = a2->Data1;
	if (!MissedFrames)
	{
		SetTextureToCommon();
		njPushMatrix(0);
		njControl3D_Backup();
		njControl3D_Add(NJD_CONTROL_3D_CONSTANT_ATTR);
		njTranslateV(0, &v1->Position);
		BackupConstantAttr();
		AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
		njScale(0, v1->Scale.x*0.74f, 1.0f, v1->Scale.x*0.74f);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		g = *(float *)&v1->CharIndex;
		SetMaterialAndSpriteColor_Float(g, g, g, g);
		DrawQueueDepthBias = 2000.0f;
		ProcessModelNode(&stru_8B22F4, (QueuedModelFlagsB)0, v1->Scale.x);
		DrawQueueDepthBias = 0.0;
		ClampGlobalColorThing_Thing();
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		RestoreConstantAttr();
		njControl3D_Restore();
		njPopMatrix(1u);
	}
}

void __cdecl FixedRipple_Bubble(ObjectMaster *a2)
{
	NJS_VECTOR *v1; // esi
	double v2; // st7
	NJS_ARGB colorthing;
	v1 = (NJS_VECTOR *)a2->UnknownB_ptr;
	if (!MissedFrames)
	{
		SetTextureToCommon();
		njPushMatrix(0);
		njTranslateV(0, v1);
		njScale(0, v1[2].z, 1.0f, v1[2].z);
		njControl3D_Backup();
		njControl3D_Add(NJD_CONTROL_3D_CONSTANT_ATTR);
		BackupConstantAttr();
		AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
		v2 = v1[1].z;
		colorthing.r = v1[1].z;
		colorthing.g = v2;
		colorthing.b = v2;
		SetMaterialAndSpriteColor(&colorthing);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		DrawQueueDepthBias = 2000.0f;
		ProcessModelNode(&stru_8B22F4, (QueuedModelFlagsB)0, v1[2].z);
		DrawQueueDepthBias = 0.0;
		ClampGlobalColorThing_Thing();
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		RestoreConstantAttr();
		njPopMatrix(1u);
		njControl3D_Restore();
	}
}

void GammaHook()
{
	if (GameMode == 12) SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	else SetMaterialAndSpriteColor_Float(0.85f, 1.0f, 1.0f, 1.0f);
}

FunctionPointer(double, sub_49EAD0, (float a1, float a2, float a3, int a4), 0x49EAD0);
FunctionPointer(float, sub_49E920, (float x, float y, float z, Rotation3 *rotation), 0x49E920);

float __cdecl EggKeeperFix(float x, float y, float z, Rotation3 *rotation)
{
	float result;
	result = sub_49E920(x, y, z, rotation);
	if (result == -1000000) result = y;
	return result;
}

double __cdecl AmenboFix(float a1, float a2, float a3, int a4)
{
	double u;
	u = sub_49EAD0(a1, a2, a3, a4);
	if (u == -1000000) u = a2;
	return u;
}

void General_Init(const char *path, const HelperFunctions &helperFunctions)
{
	char pathbuf[MAX_PATH];
	ReplacePVR("AL_BARRIA");
	ReplacePVR("AM_SEA124_8");
	ReplacePVR("BELT2");
	ReplacePVR("CAPTUREBEAM");
	ReplacePVR("MRASC_016S_HIRUUMI");
	ReplacePVR("MRASC_256S_HIRUSORAA");
	ReplacePVR("SEA");
	ReplacePVR("SKY_H_BAL01");
	ReplacePVR("SONIC_EMBLM01");
	ReplacePVR("SONIC_EMBLM03");
	ReplacePVR("SONIC_EMBLM04");
	ReplacePVR("SONIC_EMBLM05");
	ReplacePVR("SORA60");
	ReplacePVR("SSTX_BODY");
	ReplacePVR("STG_S_LOCKMK");
	ReplacePVR("STX_ICE0");
	ReplacePVR("ST_016S_HPBAR");
	ReplacePVR("ST_064S_LOCKA");
	ReplacePVR("ST_064S_LOCKB");
	ReplacePVR("ST_064S_LOCKC");
	ReplacePVR("SW_NBG2");
	ReplacePVR("S_WT28");
	ReplacePVR("S_WT32");
	ReplacePVR("TM32KURAGE");
	ReplacePVR("WATERCOLUMN01");
	ReplacePVR("WINDSEA001");
	ReplacePVR("WINDY2_NBG1");
	ReplacePVR("WINDY2_NBG2");
	ReplacePVR("WINDY2_NBG5");
	ReplacePVR("WINDY3_NBG2");
	ReplacePVM("AIR_SIGNAL");
	ReplacePVM("ANCIENT_LIGHT");
	ReplacePVM("ANKO");
	ReplacePVM("ANKO_T");
	ReplacePVM("A_MASTER");
	ReplacePVM("BANB");
	ReplacePVM("BIG_KAERU");
	ReplacePVM("BO1_MODEL");
	ReplacePVM("BULLET");
	ReplacePVM("CAPTUREBEAM");
	ReplacePVM("CHAOS_EMERALD");
	ReplacePVM("COERA");
	ReplacePVM("E102");
	ReplacePVM("E102BEAM");
	ReplacePVM("E102EFFECT");
	ReplacePVM("E102HIT");
	ReplacePVM("E103OLD");
	ReplacePVM("E104OLD");
	ReplacePVM("E105");
	ReplacePVM("E105OLD");
	ReplacePVM("EDV_K_HLIFT");
	ReplacePVM("EDV_S_STDOOR");
	ReplacePVM("EFF_C7_BUBBLE");
	ReplacePVM("EFF_CANDLE");
	ReplacePVM("EFF_REGULAR");
	ReplacePVM("EFF_TWINKLE");
	ReplacePVM("EFF_WT_COLUMN");
	ReplacePVM("EGGROB");
	ReplacePVM("EGG_MISSILE");
	ReplacePVM("EME_KIRAN");
	ReplacePVM("EROBO");
	ReplacePVM("ER_9000_EGGMANROBO");
	ReplacePVM("EV_EGGMAN_BODY");
	ReplacePVM("EV_EGGMOBILE1");
	ReplacePVM("EV_EGGMOBLE0");
	ReplacePVM("EV_EGGMOBLE0DM");
	ReplacePVM("EV_EGGMOBLE1");
	ReplacePVM("EV_EGGMOBLE2");
	ReplacePVM("EV_HELI");
	ReplacePVM("EV_K_PATYA");
	ReplacePVM("EV_SPOTLIGHT");
	ReplacePVM("EV_S_MSBODY");
	ReplacePVM("EV_S_T2C_BODY");
	ReplacePVM("EV_TR1");
	ReplacePVM("EV_TR2_BIG");
	ReplacePVM("E_AMENBO");
	ReplacePVM("E_BOMB");
	ReplacePVM("E_BUYON");
	ReplacePVM("E_CART");
	ReplacePVM("E_LEON");
	ReplacePVM("E_ROBO");
	ReplacePVM("E_SAI");
	ReplacePVM("E_SARU");
	ReplacePVM("E_SNAKE");
	ReplacePVM("E_SNOWMAN");
	ReplacePVM("F0000_FROG");
	ReplacePVM("FAT_B");
	ReplacePVM("FPACK");
	ReplacePVM("FROG");
	ReplacePVM("FROG1");
	ReplacePVM("FROG2");
	ReplacePVM("FROG3");
	ReplacePVM("F_EGG_ZANGAI");
	ReplacePVM("GACHAPON");
	ReplacePVM("GOMA");
	ReplacePVM("GORI");
	ReplacePVM("GR1_MODEL");
	ReplacePVM("GR_10000_GIRL1");
	ReplacePVM("HAMMER");
	ReplacePVM("HINT");
	ReplacePVM("HOT_E105");
	ReplacePVM("ICM0060");
	ReplacePVM("ICM006D");
	ReplacePVM("ICM00C3");
	ReplacePVM("ICM00C5");
	ReplacePVM("ICM00C7");
	ReplacePVM("ICM0142");
	ReplacePVM("ISHIDAI");
	ReplacePVM("KAJIKI");
	ReplacePVM("KAOS_EME");
	ReplacePVM("KNU_EFF");
	ReplacePVM("KOAR");
	ReplacePVM("KUJA");
	ReplacePVM("LAST1A_HIGHWAY_A");
	ReplacePVM("LIGHTNING");
	ReplacePVM("LION");
	ReplacePVM("LOCKET");
	ReplacePVM("L_SIBUKI");
	ReplacePVM("MECHA");
	ReplacePVM("MGHAND");
	ReplacePVM("MIZUBASIRA");
	ReplacePVM("MOGU");
	ReplacePVM("MOGURATATAKI");
	ReplacePVM("MP_10000_POLICE");
	ReplacePVM("MRACE_EGGMOBLE");
	ReplacePVM("M_EM_BLACK");
	ReplacePVM("M_EM_BLUE");
	ReplacePVM("M_EM_GREEN");
	ReplacePVM("M_EM_PURPLE");
	ReplacePVM("M_EM_RED");
	ReplacePVM("M_EM_SKY");
	ReplacePVM("M_EM_WHITE");
	ReplacePVM("M_EM_YELLOW");
	ReplacePVM("NEW_BB");
	ReplacePVM("NISEPAT");
	ReplacePVM("OL_10000");
	ReplacePVM("OUM");
	ReplacePVM("OY_10000");
	ReplacePVM("PEN");
	ReplacePVM("PIRANIA");
	ReplacePVM("RAKO");
	ReplacePVM("ROBOTV");
	ReplacePVM("RYUGU");
	ReplacePVM("SAKE");
	ReplacePVM("SAME");
	ReplacePVM("SEA_BASS");
	ReplacePVM("SHAPE_FROG");
	ReplacePVM("SHAPE_FROG_2");
	ReplacePVM("SS_DENTOU");
	ReplacePVM("SUKA");
	ReplacePVM("SUPI_SUPI");
	ReplacePVM("TAI");
	ReplacePVM("TOGEBALL_TOGEBALL");
	ReplacePVM("TR2CRASH");
	ReplacePVM("TUBA");
	ReplacePVM("TX_CHNAM_E");
	ReplacePVM("UNAGI");
	ReplacePVM("UNI_A_UNIBODY");
	ReplacePVM("UNI_C_UNIBODY");
	ReplacePVM("USA");
	ReplacePVM("UTSUBO");
	ReplacePVM("VER1_WING");
	ReplacePVM("VER2_WING");
	ReplacePVM("VER3_WING");
	ReplacePVM("VER4_WING");
	ReplacePVM("WARA");
	ReplacePVM("WAVE7_WA");
	ReplacePVM("WINDY_E103");
	ReplacePVM("WING_P");
	ReplacePVM("WING_T");
	ReplacePVM("ZOU");
	//Fix for Sweep badnik
	WriteCall((void*)0x007AA9F9, AmenboFix);
	WriteCall((void*)0x0049EFE7, EggKeeperFix);
	//Robot chest stuff
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
	//Chaos 1 materials
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
	HMODULE HD_GUI = GetModuleHandle(L"HD_GUI");
	if (HD_GUI == nullptr)
	{
		ReplacePVM("OBJ_REGULAR");
		ResizeTextureList(&OBJ_REGULAR_TEXLIST, 100); //Added DC ripple texture
	}
	WriteJump(ItemBox_Display_Destroyed, ItemBox_Display_Destroyed_Rotate);
	WriteJump(ItemBox_Display_Unknown, ItemBox_Display_Unknown_Rotate);
	WriteJump(ItemBox_Display, ItemBox_Display_Rotate);
	*(NJS_MODEL_SADX*)0x00989384 = attach_0019D298_2; //Switch
	*(NJS_MODEL_SADX*)0x008BBD84 = attach_0019D298; //Switch (pressed)
	*(NJS_MODEL_SADX*)0x008B8438 = attach_00199A4C; //Dash panel
	*(NJS_MODEL_SADX*)0x008C5D5C = attach_001A6F74; //Star panel
	*(NJS_MODEL_SADX*)0x008C9060 = attach_001AA1B8; //Checkpoint
	*(NJS_MODEL_SADX*)0x008B6010 = attach_00197698; //Normal spring
	*(NJS_MODEL_SADX*)0x008B5498 = attach_00196B5C; //Spring B
	*(NJS_MODEL_SADX*)0x008C6624 = attach_001A7820; //Spring H
	*(NJS_MODEL_SADX*)0x008BFEC8 = attach_001A127C; //Rocket platform
	*(NJS_MODEL_SADX*)0x008BE168 = attach_0019F5CC; //Balloon
	//Config stuff
	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
	EnableDCRipple = config->getBool("General", "EnableDreamcastWaterRipple", true);
	delete config;
	//Ripples
	if (EnableDCRipple == true)
	{
		*(NJS_OBJECT*)0x8B22F4 = object_00193A44;
		WriteJump((void*)0x4B9290, FixedRipple_Normal);
		WriteJump((void*)0x7A81A0, FixedRipple_Bubble);
		WriteJump((void*)0x004407C0, SpawnRipplesX);
	}
	//Water splash particle
	WriteCall((void*)0x0049F1C0, FixWaterSplash);
	//Gamma's chest patch lol
	HMODULE CHRMODELS = GetModuleHandle(L"CHRMODELS_orig");
	((NJS_MATERIAL*)((size_t)CHRMODELS + +0x00200DE8))->attrflags &= ~NJD_FLAG_USE_ALPHA; //Unnecessary alpha in Gamma's model
	WriteCall((void*)0x0047FE13, GammaHook); //Gamma's chest transparency
	//Character effects
	WriteJump((void*)0x004A1630, Sonic_DisplayLightDashModelX);
	WriteData((float**)0x47404B, &heat_float1);
	WriteData((float**)0x474057, &heat_float2);
	WriteJump((void*)0x004C1330, Knuckles_MaximumHeat_DrawX);
	WriteJump((void*)0x004C1410, Knuckles_MaximumHeatSprite_Draw);
	WriteCall((void*)0x004C1258, KnucklesPunch_RetrieveAlpha);
	WriteCall((void*)0x004C1305, KnucklesPunch_Render);
	WriteCall((void*)0x4A0F56, SonicDashTrailFix);
	WriteData<10>((char*)0x0040889C, 0x90u); //Queued model lighting/specular fix
	//Environment maps
	EnvMap1 = 0.5f;
	EnvMap2 = 0.5f;
	EnvMap3 = 0.5f;
	EnvMap4 = 0.5f;
	//Various bugfixes
	//Zero holding Amy lighting fix
	((NJS_OBJECT *)0x31A4DFC)->basicdxmodel->mats[11].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	((NJS_OBJECT *)0x31A4DFC)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	//Tikal lighting fixes
	((NJS_OBJECT*)0x008CE058)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x008CC658)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	//Eggman fingers fix
	((NJS_OBJECT*)0x008961E0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x008964CC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x008980DC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x00897DE0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x02EE22C0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x02EE25AC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x02EE4194)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	((NJS_OBJECT*)0x02EE3E98)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
	//Eggmobile NPC model fix
	*(NJS_OBJECT*)0x010FEF74 = object_02AEB524; //Fix materials on Eggmobile NPC model
	((NJS_OBJECT*)0x01257754)->basicdxmodel->mats[15].diffuse.color = 0xFFFFFFFF; //Chaos6 Eggmobile
	WriteData((NJS_TEXLIST**)0x007D2B22, (NJS_TEXLIST*)0x02EE0AA4); //Replace the texlist for the above model in the NPC data array
	*(NJS_TEXLIST**)0x02BD5FE4 = (NJS_TEXLIST*)0x02EE0AA4; //Eggman Super Sonic cutscene texlist fix
	//E101 Beta lighting fixes
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
	//Emblem field model
	((NJS_MATERIAL*)0x009740FC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x00974110)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x00974124)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x00974138)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	//Emeralds glow
	//Windy Valley
	WriteCall((void*)0x004DF27F, RenderEmeraldWithGlow);
	WriteCall((void*)0x004DF250, RotateEmerald);
	//Ice Cap
	WriteCall((void*)0x004ECEC4, RenderEmeraldWithGlow);
	WriteCall((void*)0x004ECE90, RotateEmerald);
	//Casino
	WriteCall((void*)0x005DCFB0, RenderEmeraldWithGlow);
	WriteCall((void*)0x005DCF7D, RotateEmerald);
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	if (Lantern != nullptr && GetProcAddress(Lantern, "allow_landtable_specular") != nullptr)
	{
		allow_landtable_specular(true);
		material_register(FirstCharacterSpecular_General, LengthOfArray(FirstCharacterSpecular_General), &ForceDiffuse2Specular2);
		material_register(ObjectSpecular_General, LengthOfArray(ObjectSpecular_General), &ForceDiffuse0Specular1);
		material_register(LevelSpecular_General, LengthOfArray(LevelSpecular_General), &ForceDiffuse0Specular0);
	}
	//Egg Walker cutscene
	((NJS_MATERIAL*)0x03310F18)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	((NJS_MATERIAL*)0x03310F18)->diffuse.color = 0xFFFFFFFF;
	((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Question mark from Character Select
	((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; //Question mark from Character Select
	//((NJS_OBJECT*)0x008BE194)->basicdxmodel->mats[0].diffuse.argb.a = 0xB2; //Balloon transparency
	//((NJS_OBJECT*)0x008BE194)->basicdxmodel->mats[1].diffuse.argb.a = 0xB2; //Balloon transparency
	WriteData<1>((char*)0x004D7712, 0x02u); //Animal bubble blending mode
	*(NJS_OBJECT*)0x02F67B78 = object_0021BD90; //Tornado 2 crashed
	ResizeTextureList((NJS_TEXLIST*)0x0092ACE4, 5); //GOMA texlist
	((NJS_OBJECT*)0x929E1C)->model = &attach_001568D8; //Goma left whisker
	((NJS_OBJECT*)0x929FD8)->model = &attach_00156758; //Goma right whisker
	((NJS_OBJECT*)0x929760)->model = &attach_00157668; //Goma body
	((NJS_OBJECT*)0x929AA4)->model = &attach_00156CA8; //Goma left front
	((NJS_OBJECT*)0x9298B4)->model = &attach_00156E90; //Goma right front
	((NJS_OBJECT*)0x92A1CC)->model = &attach_001565D8; //Goma left back
	((NJS_OBJECT*)0x929C94)->model = &attach_00156AC0; //Goma right back
	((NJS_OBJECT*)0x948ACC)->model = &attach_0017BE24; //Rako head
	((NJS_OBJECT*)0x949068)->model = &attach_0017CCE8; //Rako body
	((NJS_OBJECT*)0x9483B4)->model = &attach_0017C980; //Rako tail
	((NJS_OBJECT*)0x948CE4)->model = &attach_0017B6C4; //Rako ear left
	((NJS_OBJECT*)0x948BD8)->model = &attach_0017BAC8; //Rako ear right
	((NJS_OBJECT*)0x948508)->model = &attach_0017B7A8; //Rako whisker left
	((NJS_OBJECT*)0x9486C4)->model = &attach_0017B928; //Rako whisker right
	((NJS_OBJECT*)0x947C78)->model = &attach_0017C2A4; //Rako hand left
	((NJS_OBJECT*)0x947A58)->model = &attach_0017C064; //Rako hand right
	((NJS_OBJECT*)0x947D98)->model = &attach_0017C388; //Rako clam shell
	((NJS_OBJECT*)0x9481A8)->model = &attach_0017C7B0; //Rako foot left
	((NJS_OBJECT*)0x947FB8)->model = &attach_0017C59C; //Rako foot right
	((NJS_OBJECT*)0x942428)->model = &attach_00174864; //Lion face
	((NJS_OBJECT*)0x9427A4)->model = &attach_001744CC; //Lion mane
	((NJS_OBJECT*)0x942EF4)->model = &attach_001756A4; //Lion body
	((NJS_OBJECT*)0x942B78)->model = &attach_00175178; //Lion tail part 1
	((NJS_OBJECT*)0x942A34)->model = &attach_001752C8; //Lion tail part 2
	((NJS_OBJECT*)0x941D08)->model = &attach_00174FD4; //Lion left front
	((NJS_OBJECT*)0x941AF0)->model = &attach_00174DF8; //Lion right front
	((NJS_OBJECT*)0x94190C)->model = &attach_00174C1C; //Lion left back
	((NJS_OBJECT*)0x941728)->model = &attach_00174A40; //Lion right back
	((NJS_OBJECT*)0x942024)->model = &attach_0017427C; //Lion left ear
	((NJS_OBJECT*)0x941EB0)->model = &attach_001740DC; //Lion right ear
}
void General_OnFrame()
{
	//Alpha rejection
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	if (Lantern != nullptr)
	{
		if (AlphaRejectionMode == 0 && CurrentLevel != 25 && GameMode != GameModes_CharSel && GameMode != GameModes_Menu && CurrentChaoStage != 2)
		{
			WriteData((char*)0x007919CD, 0i8);
			AlphaRejectionMode = 1;
		}
		if (AlphaRejectionMode == 1 && (CurrentLevel == 25 || GameMode == GameModes_CharSel || GameMode == GameModes_Menu || CurrentChaoStage == 2))
		{
			WriteData<1>((char*)0x007919CD, 0x16u);
			AlphaRejectionMode = 0;
		}
	}
	//Environment maps
	if (EnvMapMode == 0 && CurrentLevel == 20 && MetalSonicFlag == 0)
	{
		EnvMapMode = 1;
		EnvMap1 = 2.0f;
		EnvMap2 = 2.0f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
	}
	if (EnvMapMode == 1 && CurrentLevel != 20)
	{
		EnvMapMode = 0;
		EnvMap1 = 0.5f;
		EnvMap2 = 0.5f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
	}
	if (EnvMapMode == 1 && MetalSonicFlag != 0)
	{
		EnvMapMode = 0;
		EnvMap1 = 0.5f;
		EnvMap2 = 0.5f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
	}
	//Chaos 1 puddle
	if (CurrentLevel == 33 && CutsceneID != 57) ((NJS_MATERIAL*)0x02D64FD8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
	else ((NJS_MATERIAL*)0x02D64FD8)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
}