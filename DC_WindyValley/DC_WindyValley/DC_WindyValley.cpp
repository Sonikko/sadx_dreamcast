#include "stdafx.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include "windy1.h"
#include "windy2.h"
#include "windy3.h"
#include "Objects_Windy.h"

DataArray(FogData, FogData_Windy1, 0x00AFEA20, 3);
DataArray(FogData, FogData_Windy2, 0x00AFEA50, 3);
DataArray(FogData, FogData_Windy3, 0x00AFEA80, 3);
DataArray(DrawDistance, DrawDist_WindyValley1, 0x00AFE9D8, 3);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(NJS_BGRA, CurrentFogColor, 0x03ABDC68);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
static int TornadoActive = 0;
static int fadeout = 255;
static int fadeout2 = 255;

PointerInfo pointers[] = {
	ptrdecl(0x97DA48, &landtable_0000D7E0),
	ptrdecl(0x97DA4C, &landtable_0000DB40),
	ptrdecl(0x97DA50, &landtable_0000F274),
};

bool ForceObjectorLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	if (material->attrflags & NJD_FLAG_IGNORE_SPECULAR) set_specular(0, false); else set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceObjectSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

NJS_MATERIAL* ObjectSpecular[] = {
	//Leon
	((NJS_MATERIAL*)0x00955080),
	((NJS_MATERIAL*)0x00951848),
	((NJS_MATERIAL*)0x0095185C),
	((NJS_MATERIAL*)0x00951870),
	((NJS_MATERIAL*)0x00952978),
	((NJS_MATERIAL*)0x0095298C),
	((NJS_MATERIAL*)0x009529A0),
	((NJS_MATERIAL*)0x00955094),
	((NJS_MATERIAL*)0x00954904),
	((NJS_MATERIAL*)0x00954918),
	((NJS_MATERIAL*)0x0095492C),
	((NJS_MATERIAL*)0x009544C8),
	((NJS_MATERIAL*)0x009544DC),
	((NJS_MATERIAL*)0x009544F0),
	((NJS_MATERIAL*)0x0095438C),
	((NJS_MATERIAL*)0x00954178),
	((NJS_MATERIAL*)0x00953EE4),
	((NJS_MATERIAL*)0x00953EF8),
	((NJS_MATERIAL*)0x00953AA8),
	((NJS_MATERIAL*)0x00953ABC),
	((NJS_MATERIAL*)0x00953AD0),
	((NJS_MATERIAL*)0x00953920),
	((NJS_MATERIAL*)0x00953540),
	((NJS_MATERIAL*)0x00953554),
	((NJS_MATERIAL*)0x00953568),
	((NJS_MATERIAL*)0x0095357C),
	((NJS_MATERIAL*)0x009533E8),
	((NJS_MATERIAL*)0x00953290),
	((NJS_MATERIAL*)0x009530B8),
	((NJS_MATERIAL*)0x00952C9C),
	((NJS_MATERIAL*)0x00952CB0),
	((NJS_MATERIAL*)0x00952820),
	((NJS_MATERIAL*)0x00952404),
	((NJS_MATERIAL*)0x00952418),
	((NJS_MATERIAL*)0x00951F88),
	((NJS_MATERIAL*)0x00951B6C),
	((NJS_MATERIAL*)0x00951B80),
	((NJS_MATERIAL*)0x009516F0),
	((NJS_MATERIAL*)0x009512D4),
	((NJS_MATERIAL*)0x009512E8),
	((NJS_MATERIAL*)0x00950E5C),
	((NJS_MATERIAL*)0x00950B50),
	((NJS_MATERIAL*)0x00950B64),
	((NJS_MATERIAL*)0x00950B78),
	((NJS_MATERIAL*)0x00950978),
//St_brd
	((NJS_MATERIAL*)0x00C3BBB8),
	((NJS_MATERIAL*)0x00C3BBCC),
	((NJS_MATERIAL*)0x00C3BBE0),
	((NJS_MATERIAL*)0x00C3BBF4),
	//Rocket
	((NJS_MATERIAL*)0x008C24D0),
	((NJS_MATERIAL*)0x008C24E4),
	((NJS_MATERIAL*)0x008C24F8),
	((NJS_MATERIAL*)0x008C250C),
	//O Toge
	((NJS_MATERIAL*)0x008BAAC8),
	((NJS_MATERIAL*)0x008BAADC),
	((NJS_MATERIAL*)0x008BAAF0),
	((NJS_MATERIAL*)0x008BAB04),
	((NJS_MATERIAL*)0x008BAB18),
	((NJS_MATERIAL*)0x008BA708),
	//Boa-boa
	((NJS_MATERIAL*)0x0094F34C),
	((NJS_MATERIAL*)0x0094F360),
	((NJS_MATERIAL*)0x0094F008),
	((NJS_MATERIAL*)0x0094F01C),
	((NJS_MATERIAL*)0x0094FEB4),
	((NJS_MATERIAL*)0x0094FEC8),
	((NJS_MATERIAL*)0x0094FB6C),
	((NJS_MATERIAL*)0x0094FB80),
};

NJS_MATERIAL* LevelSpecular[] = {
	//Boa-boa
	((NJS_MATERIAL*)0x00950200),
	((NJS_MATERIAL*)0x00950214),
	((NJS_MATERIAL*)0x00950228),
	((NJS_MATERIAL*)0x0095023C),
	((NJS_MATERIAL*)0x00950250),
	((NJS_MATERIAL*)0x00950264),
	//Leon
	((NJS_MATERIAL*)0x009520E0),
	((NJS_MATERIAL*)0x009520F4),
	((NJS_MATERIAL*)0x00952108),
	((NJS_MATERIAL*)0x00950FB0),
	((NJS_MATERIAL*)0x00950FC4),
	((NJS_MATERIAL*)0x00950FD8),
	//Rocket
	((NJS_MATERIAL*)0x008C2D38),
	((NJS_MATERIAL*)0x008C2D4C),
	((NJS_MATERIAL*)0x008C2D60),
	((NJS_MATERIAL*)0x008C2D74),
	((NJS_MATERIAL*)0x008C2D88),
	((NJS_MATERIAL*)0x008C2D9C),
};
extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) void cdecl Init()
{
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
	{
		material_register(LevelSpecular, LengthOfArray(LevelSpecular), &ForceLevelSpecular);
		material_register(ObjectSpecular, LengthOfArray(ObjectSpecular), &ForceObjectSpecular);
	}
	WriteData((void*)0x4DD120, 0xC3, sizeof(char));
	*(NJS_OBJECT*)0x00C32DB8 = object_000D40D4; //grassy rock
	*(NJS_OBJECT*)0xC0B188 = object_000B6C3C; //Skybox bottom in Act 3
	*(NJS_OBJECT*)0xC2B860 = object_0082B860; //broken fan piece
	*(NJS_OBJECT*)0xC2C160 = object_0082C160; //broken fan piece 2
	*(NJS_OBJECT*)0xC2C788 = object_0082C788; //broken fan piece 3
	*(NJS_OBJECT*)0xC21704 = object_000C7F08; //Yure
	*(NJS_OBJECT*)0xC29B94 = object_000CE310; //HaneA
	*(NJS_OBJECT*)0xC1560C = object_000BEF7C; //BridgeC
	*(NJS_OBJECT*)0xC142FC = object_000BE2F0; //BridgeB
	*(NJS_OBJECT*)0xC13274 = object_000BD7C8; //BridgeA
	*(NJS_OBJECT*)0xC2433C = object_000C9DE8; //OSaku C
	*(NJS_OBJECT*)0xC23384 = object_000C9298; //OSaku B
	*(NJS_OBJECT*)0xC22E74 = object_000C8F20; //OSaku A
	*(NJS_MODEL_SADX*)0xC1DDF8 = attach_000C4A48; //Bridge piece
	*(NJS_OBJECT*)0xC315FC = object_000D38A8; //Wind gate 1
	*(NJS_OBJECT*)0xC30C44 = object_00830C44; //Wind gate 2
	*(NJS_OBJECT*)0xC305A4 = object_008305A4; //Wind gate 3
	*(NJS_OBJECT*)0xC2FF04 = object_0082FF04; //Wind gate 4
	((NJS_OBJECT*)0xC0655C)->evalflags |= NJD_EVAL_HIDE;
	((NJS_OBJECT*)0xC06450)->evalflags |= NJD_EVAL_HIDE;
	((NJS_OBJECT*)0xC05E10)->evalflags |= NJD_EVAL_HIDE;
	((NJS_OBJECT*)0xC06344)->evalflags |= NJD_EVAL_HIDE;
	((NJS_OBJECT*)0xC06A94)->evalflags |= NJD_EVAL_HIDE;
	for (int i = 0; i < 3; i++)
	{
		DrawDist_WindyValley1[i].Maximum = -8000.0f;
		FogData_Windy1[i].Distance = 12000.0f;
		FogData_Windy1[i].Layer = 1000.0f;
		FogData_Windy1[i].Color = 0xFFFFFFFF;
		FogData_Windy2[i].Color = 0xFFFFFFFF;
		FogData_Windy2[i].Distance = 2500.0f;
		FogData_Windy2[i].Layer = 50.0f;
		FogData_Windy2[i].Toggle = 1;
		FogData_Windy3[i].Distance = 6000.0f;
		FogData_Windy3[i].Layer = 200.0f;
		FogData_Windy3[i].Color = 0xFFFFFFFF;
	}
	ResizeTextureList((NJS_TEXLIST *)0xB98BF8, textures_windy1);
	ResizeTextureList((NJS_TEXLIST *)0xB81304, textures_windy2);
	ResizeTextureList((NJS_TEXLIST *)0xAFEC30, textures_windy3);
};

extern "C" __declspec(dllexport) void cdecl OnFrame()
{
	if (CurrentLevel == 2 && CurrentAct == 0)
	{
		if (GameState == 3 || GameState == 4)
		{
			TornadoActive = 0;
			fadeout = 255;
			fadeout2 = 255;
			matlist_00806484[0].diffuse.argb.a = 178;
			matlist_00806484[0].diffuse.argb.r = 255;
			matlist_00806484[0].diffuse.argb.g = 255;
			matlist_00806484[0].diffuse.argb.b = 255;
			matlist_00806590[0].diffuse.argb.r = 255;
			matlist_00806590[0].diffuse.argb.g = 255;
			matlist_00806590[0].diffuse.argb.b = 255;
			matlist_00805E44[0].diffuse.argb.r = 255;
			matlist_00805E44[0].diffuse.argb.g = 255;
			matlist_00805E44[0].diffuse.argb.b = 255;
			matlist_00806378[0].diffuse.argb.r = 255;
			matlist_00806378[0].diffuse.argb.g = 255;
			matlist_00806378[0].diffuse.argb.b = 255;
			matlist_008055DC[0].diffuse.argb.r = 255;
			matlist_008055DC[0].diffuse.argb.g = 255;
			matlist_008055DC[0].diffuse.argb.b = 255;
			matlist_008055DC[1].diffuse.argb.r = 255;
			matlist_008055DC[1].diffuse.argb.g = 255;
			matlist_008055DC[1].diffuse.argb.b = 255;
			matlist_008055DC[2].diffuse.argb.r = 255;
			matlist_008055DC[2].diffuse.argb.g = 255;
			matlist_008055DC[2].diffuse.argb.b = 255;
		}
		if (Camera_Data1 != nullptr)
		{
			object_00805E10.pos[0] = Camera_Data1->Position.x;
			object_00806450.pos[0] = Camera_Data1->Position.x;
			object_00806344.pos[0] = Camera_Data1->Position.x;
			object_00806A94.pos[0] = Camera_Data1->Position.x;
			object_0080655C.pos[0] = Camera_Data1->Position.x;
			object_00805E10.pos[1] = 0;
			object_00806450.pos[1] = 0;
			object_00806344.pos[1] = 0;
			object_00806A94.pos[1] = 0;
			object_0080655C.pos[1] = 0;
			object_00805E10.pos[2] = Camera_Data1->Position.z;
			object_00806450.pos[2] = Camera_Data1->Position.z;
			object_00806344.pos[2] = Camera_Data1->Position.z;
			object_00806A94.pos[2] = Camera_Data1->Position.z;
			object_0080655C.pos[2] = Camera_Data1->Position.z;
		}
	}
	auto entity = CharObj1Ptrs[0];
	if (CurrentCharacter != 6 && CurrentLevel == 2 && CurrentAct == 0 && GameState != 16)
	{
		if (entity != nullptr && TornadoActive == 0)
		{
			if (entity->Position.z < -1250 || entity->Position.x > 2980)
			{
				if (matlist_00806484[0].diffuse.argb.a > 1) matlist_00806484[0].diffuse.argb.a--;
				matlist_00806484[0].diffuse.argb.r = fadeout;
				matlist_00806484[0].diffuse.argb.g = fadeout;
				matlist_00806484[0].diffuse.argb.b = fadeout;
				matlist_00806590[0].diffuse.argb.r = fadeout2;
				matlist_00806590[0].diffuse.argb.g = fadeout2;
				matlist_00806590[0].diffuse.argb.b = fadeout2;
				matlist_00805E44[0].diffuse.argb.r = fadeout2;
				matlist_00805E44[0].diffuse.argb.g = fadeout2;
				matlist_00805E44[0].diffuse.argb.b = fadeout2;
				matlist_00806378[0].diffuse.argb.r = fadeout;
				matlist_00806378[0].diffuse.argb.g = fadeout;
				matlist_00806378[0].diffuse.argb.b = fadeout;
				matlist_008055DC[0].diffuse.argb.r = fadeout;
				matlist_008055DC[0].diffuse.argb.g = fadeout;
				matlist_008055DC[0].diffuse.argb.b = fadeout;
				matlist_008055DC[1].diffuse.argb.r = fadeout;
				matlist_008055DC[1].diffuse.argb.g = fadeout;
				matlist_008055DC[1].diffuse.argb.b = fadeout;
				matlist_008055DC[2].diffuse.argb.r = fadeout;
				matlist_008055DC[2].diffuse.argb.g = fadeout;
				matlist_008055DC[2].diffuse.argb.b = fadeout;
				if (fadeout2 > 80) fadeout2 = fadeout2 - 2;
				if (fadeout > 53) fadeout = fadeout - 2;
				if (CurrentFogColor.r > 7)
				{
					CurrentFogColor.r = CurrentFogColor.r - 8;
					CurrentFogColor.g = CurrentFogColor.g - 8;
					CurrentFogColor.b = CurrentFogColor.b - 8;
				}
				if (CurrentFogColor.r <= 7 && CurrentFogColor.r > 0)
				{
					CurrentFogColor.r = 0;
					CurrentFogColor.g = 0;
					CurrentFogColor.b = 0;
				}
				if (CurrentFogDist > 5000) CurrentFogDist = CurrentFogDist - 128.0f;
				if (CurrentFogLayer >= 100) CurrentFogLayer = CurrentFogLayer - 128.0f;
			}
		}
		if (entity != nullptr && entity->Position.x > 3050 && entity->Position.z > -1520 && entity->Position.z < -1300 && entity->Position.y <= -480)
		{
			TornadoActive = 1;
			if (CurrentFogDist > 450) CurrentFogDist = CurrentFogDist - 64.0f;
			if (CurrentFogLayer >= 64) CurrentFogLayer = CurrentFogLayer - 64.0f;
			if (CurrentFogColor.r > 1)
			{
				CurrentFogColor.r--;
				CurrentFogColor.g--;
				CurrentFogColor.b--;
			}
		}
		if (entity != nullptr && entity->Position.y > -350)
		{
			if (CurrentFogDist < 2200) CurrentFogDist = CurrentFogDist + 32.0f;
			if (CurrentFogLayer < 400) CurrentFogLayer = CurrentFogLayer + 16.0f;
		}
	}

};
extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };