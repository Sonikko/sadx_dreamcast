#include "stdafx.h"
#include <SADXModLoader.h>
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

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) void cdecl Init()
{
	WriteData((void*)0x4DD120, 0xC3, sizeof(char));
	*(NJS_OBJECT*)0x00C32DB8 = object_000D40D4; //grassy rock
	*(NJS_OBJECT*)0xC0B188 = object_000B6C3C; //Skybox bottom in Act 3
	*(NJS_OBJECT*)0xC2B860 = object_0082B860; //broken fan piece
	*(NJS_OBJECT*)0xC2C160 = object_0082C160; //broken fan piece 2
	*(NJS_OBJECT*)0xC2C788 = object_0082C788; //broken fan piece 3
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
		FogData_Windy3[i].Layer = 2000.0f;
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