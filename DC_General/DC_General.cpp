#include "stdafx.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include "Animals.h"
#include "Itembox.h"
#include "EmeShard.h"
#include "EmeraldGlow.h"
#include "TornadoCrash.h"
#include "EggmobileNPC.h"

HMODULE CHRMODELS = GetModuleHandle(L"CHRMODELS_orig");
HMODULE ADV01MODELS = GetModuleHandle(L"ADV01MODELS");
HMODULE ADV01CMODELS = GetModuleHandle(L"ADV01CMODELS");
HMODULE ADV03MODELS = GetModuleHandle(L"ADV03MODELS");

DataPointer(int, CutsceneID, 0x3B2C570);
DataPointer(float, EnvMap1, 0x038A5DD0);
DataPointer(float, EnvMap2, 0x038A5DE4);
DataPointer(float, EnvMap3, 0x038A5E00);
DataPointer(float, EnvMap4, 0x038A5E04);
DataPointer(int, MissedFrames, 0x03B1117C);
DataPointer(int, CurrentChaoStage, 0x0339F87C);
DataPointer(int, FramerateSetting, 0x0089295C);

static int EnvMapMode = 0;
static int AlphaRejectionMode = 0;
static int EmeraldGlowAlpha = 255;
static bool EmeraldGlowDirection = false;

void __cdecl Switch_DisplayX(ObjectMaster *a1)
{
	DataArray(char, byte_3C5B37C, 0x3C5B37C, 52);
	DataPointer(NJS_MODEL_SADX, stru_8BC0F4, 0x8BC0F4);
	DataPointer(NJS_MODEL_SADX, stru_8BBD84, 0x8BBD84);
	DataPointer(NJS_MODEL_SADX, stru_989384, 0x989384);
	DataPointer(int, MissedFrames, 0x03B1117C);
	EntityData1 *v1; // esi@1
	Angle v2; // eax@4
	Angle v3; // eax@6
	Angle v4; // eax@8

	v1 = a1->Data1;
	if (IsPlayerInsideSphere(&v1->Position, 410.0))
	{
		if (!MissedFrames && IsVisible(&v1->Position, 12.0))
		{
			SetTextureToCommon();
			//Direct3D_PerformLighting(2);
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.x;
			if (v2)
			{
				njRotateX(0, (unsigned __int16)v2);
			}
			v3 = v1->Rotation.y;
			if (v3)
			{
				njRotateY(0, (unsigned __int16)v3);
			}
			v4 = v1->Rotation.z;
			if (v4)
			{
				njRotateZ(0, (unsigned __int16)v4);
			}
			DrawModel_ResetRenderFlags(&stru_8BC0F4);
			//Direct3D_PerformLighting(0);
			njControl3D_Backup();
			njControl3D(NJD_CONTROL_3D_MODEL_CLIP | NJD_CONTROL_3D_OFFSET_MATERIAL | NJD_CONTROL_3D_ENABLE_ALPHA | NJD_CONTROL_3D_CONSTANT_ATTR);
			ClampGlobalColorThing_Thing();
			if (byte_3C5B37C[((short*)&a1->Data1->Object)[1]] & 1)
			{
				stru_8BBD84.mats[3].diffuse.color = 0xFFFFFFFF;
				stru_8BBD84.mats[4].diffuse.color = 0xFFFFFFFF;
				njTranslate(0, 0.0, -1.2, 0.0);
				DrawModel_ResetRenderFlags(&stru_8BBD84);
			}
			else
			{
				stru_989384.mats[3].diffuse.color = 0xFF101010;
				stru_989384.mats[4].diffuse.color = 0xFF101010;
				njTranslate(0, 0.0, -0.30000001, 0.0);
				DrawModel_ResetRenderFlags(&stru_989384);
			}
			njControl3D_Restore();
			njPopMatrix(1u);
		}
	}
}

NJS_MATERIAL* FirstCharacterSpecular[] = {
	//Hedgehog Hammer targets (possibly SL objects?)
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011C478),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011BF60),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011BF74),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011BBC8),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011B364),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A9E8),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A504),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A1CC),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A07C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011A090),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00119F2C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00119F40),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001247C8),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001242B0),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001242C4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00123F18),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001236B4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00122D38),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00122854),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0012251C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001223CC),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001223E0),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0012227C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00122290),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00115630),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114C38),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114C4C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114C60),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114C74),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00114568),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x0011457C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001142D4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001140CC),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00113EB4),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x00113B4C),
	(NJS_MATERIAL*)((size_t)ADV01CMODELS + 0x001137E4),
	//Button
	((NJS_MATERIAL*)0x008BB6E4),
	((NJS_MATERIAL*)0x008BB6F8),
	((NJS_MATERIAL*)0x00989334),
	((NJS_MATERIAL*)0x00989348),
};

NJS_MATERIAL* LevelSpecular[] = {
	//Forgot
	((NJS_MATERIAL*)0x00989320),
	((NJS_MATERIAL*)0x008BB6D0),
	((NJS_MATERIAL*)0x008BB70C),
	((NJS_MATERIAL*)0x008BB720),
	((NJS_MATERIAL*)0x0098935C),
	((NJS_MATERIAL*)0x00989370),
};

NJS_MATERIAL* ObjectSpecular[] = { 
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
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F2600),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F2614),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F2628),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F263C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F2650),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F2664),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F2678),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F268C),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F26A0),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F26B4),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F26C8),
	(NJS_MATERIAL*)((size_t)ADV01MODELS + 0x001F26DC),
};

bool ForceObjectSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

bool ForceFirstCharacterSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(2, false);
	use_default_diffuse(true);
	return true;
}

bool ForceSecondCharacterSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(3, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(1, false);
	diffuse_override(true);
	use_default_diffuse(true);
	return true;
}

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

void __cdecl FixedBubbleRipple(ObjectMaster *a1)
{
	DataPointer(int, MissedFrames, 0x03B1117C);
	DataPointer(D3DCOLORVALUE, stru_3D0B7C8, 0x3D0B7C8);
	DataPointer(NJS_OBJECT, stru_8B22F4, 0x8B22F4);
	NJS_VECTOR *v1; // esi@1
	double v2; // st7@2
	v1 = (NJS_VECTOR *)a1->UnknownB_ptr;
	if (!MissedFrames)
	{
		SetTextureToCommon();
		njPushMatrix(0);
		njTranslateV(0, v1);
		BackupConstantAttr();
		AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
		v2 = v1[1].z;
		stru_3D0B7C8.g = v1[1].z;
		stru_3D0B7C8.b = v2;
		stru_3D0B7C8.a = v2;
		//SetMaterialAndSpriteColor((NJS_ARGB *)&stru_3D0B7C8);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njScale(0, v1[2].z, 1.0f, v1[2].z);
		SomeDepthThing = -17952;
		ProcessModelNode_A_WrapperB(&stru_8B22F4, (QueuedModelFlagsB)0);
		SomeDepthThing = 0;
		ClampGlobalColorThing_Thing();
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		RestoreConstantAttr();
		njPopMatrix(1u);
	}
}

static PointerInfo jumps[] = {
	// ItemBox
	{ ItemBox_Display_Destroyed,	ItemBox_Display_Destroyed_Rotate },
	{ ItemBox_Display_Unknown,		ItemBox_Display_Unknown_Rotate },
	{ ItemBox_Display,				ItemBox_Display_Rotate },
};

void __cdecl njDrawSprite3D_NoSkippedFramesX(NJS_SPRITE *a1, Int n, NJD_SPRITE attr)
{
	DataPointer(float, Sprite3DDepth_Current, 0x03ABD9B8);
	DataPointer(float, Sprite3DDepth, 0x03ABD9BC);
	if (!MissedFrames)
	{
		njTextureShadingMode(1);
		Sprite3DDepth_Current = Sprite3DDepth;
		//njDrawSprite3D_Queue(a1, n, attr, (QueuedModelFlagsB)0);
		Sprite3DDepth_Current = 0;
		njTextureShadingMode(2);
	}
}

void RenderEmeraldWithGlow(NJS_OBJECT *a1, int scale)
{
	ProcessModelNode_D_Wrapper(a1, scale);
	EmeraldGlow.ang[1] = Camera_Data1->Rotation.y;
	if (CurrentLevel == 2) matlist_0007C334[0].attr_texId = 3;
	if (CurrentLevel == 9) matlist_0007C334[0].attr_texId = 4;
	if (CurrentLevel == 8) matlist_0007C334[0].attr_texId = 5;
	matlist_0007C334[0].diffuse.argb.a = EmeraldGlowAlpha;
	if (EmeraldGlowAlpha >= 255) EmeraldGlowDirection = false;
	if (EmeraldGlowAlpha <= 128) EmeraldGlowDirection = true;
	if (EmeraldGlowDirection == true) EmeraldGlowAlpha = EmeraldGlowAlpha + 2; else EmeraldGlowAlpha = EmeraldGlowAlpha - 2;
	ProcessModelNode_D_Wrapper(&EmeraldGlow, scale);
}

void RotateEmerald()
{
	njRotateY(0, Camera_Data1->Rotation.y);
}

extern "C"
{
	__declspec(dllexport) PointerList Jumps[] = { { arrayptrandlength(jumps) } };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		((NJS_MATERIAL*)0x008B1CE0)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //Ripple
		((NJS_MATERIAL*)0x008B1CE0)->diffuse.color = 0x99FFFFFF;
		//Environment maps
		EnvMap1 = 0.5f;
		EnvMap2 = 0.5f;
		EnvMap3 = 0.5f;
		EnvMap4 = 0.5f;
		//Common switch function
		WriteJump((void*)0x004CB590, Switch_DisplayX);
		//Various bugfixes
		//Ripple fix
		WriteJump((void*)0x7A81A0, FixedBubbleRipple);
		//Zero holding Amy lighting fix
		((NJS_OBJECT *)0x31A4DFC)->basicdxmodel->mats[11].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; 
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
			material_register(FirstCharacterSpecular, LengthOfArray(FirstCharacterSpecular), &ForceFirstCharacterSpecular);
			//material_register(SecondCharacterSpecular, LengthOfArray(SecondCharacterSpecular), &ForceSecondCharacterSpecular);
			material_register(ObjectSpecular, LengthOfArray(ObjectSpecular), &ForceObjectSpecular);
			material_register(LevelSpecular, LengthOfArray(LevelSpecular), &ForceLevelSpecular);
		}
		//Egg Walker cutscene
		((NJS_MATERIAL*)0x03310F18)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x03310F18)->diffuse.color = 0xFFFFFFFF;
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Question mark from Character Select
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; //Question mark from Character Select
		//((NJS_OBJECT*)0x008BE194)->basicdxmodel->mats[0].diffuse.argb.a = 0xB2; //Balloon transparency
		//((NJS_OBJECT*)0x008BE194)->basicdxmodel->mats[1].diffuse.argb.a = 0xB2; //Balloon transparency
		WriteData((char*)0x004D7712, 2, 1); //Animal bubble blending mode
		WriteData((char*)0x004A2DBB, 1, 1); //Emerald piece blending mode
		*(NJS_OBJECT*)0x008BA6D4 = object_0019BC48; //Emerald piece
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
	__declspec(dllexport) void __cdecl OnFrame()
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
				WriteData((char*)0x007919CD, 16, 1);
				AlphaRejectionMode = 0;
			}
		}
		//Environment maps
		if (EnvMapMode == 0 && CurrentLevel == 20)
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
		//Chaos 1 puddle
		if (CurrentLevel == 33 && CutsceneID != 57) ((NJS_MATERIAL*)0x02D64FD8)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		else ((NJS_MATERIAL*)0x02D64FD8)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
	}
}


