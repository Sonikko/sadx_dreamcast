#include "stdafx.h"
#include "SADXModLoader.h"
#include "ADV01_0_animlist.h"
#include "ADV01_0.h"
#include "ADV01_1.h"
#include "ADV01_2.h"
#include "ADV01_3.h"
#include "ADV01_4.h"
#include "ADV01_5.h"
#include "EC_Objects.h"
#include "ADV01C_00.h"
#include "ADV01C_01.h"
#include "ADV01C_02.h"
#include "ADV01C_03.h"
#include "ADV01C_04.h"
#include "ADV01C_05.h"

DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(__int16, EggCarrierSunk_CharacterFlag, 0x0090A41C);

static int water1 = 101;
static int water2 = 93;
static int water3 = 69;

DataArray(DrawDistance, EggCarrierOutsideDrawDist1, 0x010F2264, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist2, 0x010F227C, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist3, 0x010F2294, 3);
DataArray(FogData, EggCarrierOutside2Fog, 0x010F233C, 3);
DataArray(FogData, EggCarrierOutside3Fog, 0x010F236C, 3);
DataArray(FogData, EggCarrierOutside4Fog, 0x010F239C, 3);
DataArray(FogData, EggCarrierOutside5Fog, 0x010F23CC, 3);
DataArray(FogData, EggCarrierOutside6Fog, 0x010F23FC, 3);
DataArray(FogData, EggCarrierOutside7Fog, 0x010F242C, 3);
DataArray(FogData, EggCarrierInside1Fog, 0x01100C18, 3);
DataArray(FogData, EggCarrierInside2Fog, 0x01100C48, 3);
DataArray(FogData, EggCarrierInside3Fog, 0x01100C78, 3);
DataArray(FogData, EggCarrierInside4Fog, 0x01100CA8, 3);
DataArray(FogData, EggCarrierInside5Fog, 0x01100CD8, 3);
DataArray(FogData, EggCarrierInside6Fog, 0x01100D08, 3);
DataArray(PVMEntry, EggCarrierObjectTexlist_Sea, 0x010F34A8, 6);
DataPointer(int, DroppedFrames, 0x03B1117C);
HMODULE handle2 = GetModuleHandle(L"ADV01MODELS");
HMODULE handle3 = GetModuleHandle(L"ADV01CMODELS");
NJS_TEXLIST **___ADV01_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle2, "___ADV01_TEXLISTS");
NJS_TEXLIST **___ADV01C_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle3, "___ADV01C_TEXLISTS");
LandTable **___LANDTABLEEC = (LandTable **)GetProcAddress(handle2, "___LANDTABLEEC");
LandTable **___LANDTABLEECC = (LandTable **)GetProcAddress(handle3, "___LANDTABLEEC");
NJS_OBJECT **___ADV01C_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle3, "___ADV01C_OBJECTS");
NJS_OBJECT **___ADV01_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle2, "___ADV01_OBJECTS");
NJS_OBJECT **___ADV01EC00_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle2, "___ADV01EC00_OBJECTS");
NJS_MODEL_SADX **___ADV01C_MODELS = (NJS_MODEL_SADX **)GetProcAddress(handle3, "___ADV01C_MODELS");
static bool PinkMonitorMode = 0;
static bool CurrentlyPink = 0;

//FunctionPointer(void, sub_10001050, (NJS_OBJECT*), (handle2+0x1050));
//void(__cdecl* sub_10001050)(NJS_OBJECT*) = (void(__cdecl*)(NJS_OBJECT*))(handle2 + 0x1050);
void(__cdecl* sub_10001050)(NJS_OBJECT*) = nullptr;

void __cdecl SetClip_EC00(signed int cliplevel)
{
	if (cliplevel >= 2)
	{
		sub_10001050(&object_00032A00);
		sub_10001050(&object_00032D2C);
		sub_10001050(&object_0003335C);
		sub_10001050(&object_00033688);
		landtable_00162260.COLCount -= 4;
	}
	else
	{
		landtable_00162260.COLList = &collist_0015F764[4];
		landtable_00162260.COLCount -= 4;
	}
}

void __cdecl SetClip_EC01(signed int cliplevel)
{
	if (cliplevel >= 2)
	{
		sub_10001050(&object_0007F56C);
		sub_10001050(&object_0007F898);
		sub_10001050(&object_0007EF3C);
		sub_10001050(&object_0007EC10);
		sub_10001050(&object_0008241C_2);
		sub_10001050(&object_00082A7C_2);
		landtable_001631F0.COLCount -= 6;
	}
	else
	{
		landtable_001631F0.COLList = &collist_00162284[6];
		landtable_001631F0.COLCount -= 6;
	}
}

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
	if (SADXStyleWater != 0)
	{
		EggCarrierObjectTexlist_Sea[1].Name = "EC_SEAW";
		landtable_00162260.TexName = "ADV_EC00W";
		landtable_001631F0.TexName = "ADV_EC01W";
		landtable_00163CE8.TexName = "ADV_EC02W";
	}
	else
	{
		EggCarrierObjectTexlist_Sea[1].Name = "EC_SEA";
		landtable_00162260.TexName = "ADV_EC00";
		landtable_001631F0.TexName = "ADV_EC01";
		landtable_00163CE8.TexName = "ADV_EC02";
	}
	sub_10001050 = (void(__cdecl*)(NJS_OBJECT*))(handle2 + 0x1050);
	WriteJump((char *)GetProcAddress(handle2, "SetClip_EC00"), SetClip_EC00);
	WriteJump((char *)GetProcAddress(handle2, "SetClip_EC01"), SetClip_EC01);
	WriteData((void *)0x0051BB8C, 0x90, 5); //disable that stupid DisableFog thing
	___ADV01_TEXLISTS[0] = &texlist_ec00;
	___ADV01_TEXLISTS[1] = &texlist_ec01;
	___ADV01_TEXLISTS[2] = &texlist_ec02;
	___ADV01_TEXLISTS[3] = &texlist_ec03;
	___ADV01_TEXLISTS[4] = &texlist_ec04;
	___ADV01_TEXLISTS[5] = &texlist_ec05;
	___LANDTABLEEC[0] = &landtable_00162260;
	___LANDTABLEEC[1] = &landtable_001631F0;
	___LANDTABLEEC[2] = &landtable_00163CE8;
	___LANDTABLEEC[3] = &landtable_001650C8;
	___LANDTABLEEC[4] = &landtable_00165830;
	___LANDTABLEEC[5] = &landtable_001666F4;
	___ADV01C_TEXLISTS[51] = &texlist_ec30;
	___ADV01C_TEXLISTS[52] = &texlist_ec31;
	___ADV01C_TEXLISTS[53] = &texlist_ec32;
	___ADV01C_TEXLISTS[54] = &texlist_ec33;
	___ADV01C_TEXLISTS[55] = &texlist_ec34;
	___ADV01C_TEXLISTS[56] = &texlist_ec35;
	___LANDTABLEECC[0] = &landtable_0000C64C;
	___LANDTABLEECC[1] = &landtable_0000D7B0;
	___LANDTABLEECC[2] = &landtable_0000E1D0;
	___LANDTABLEECC[3] = &landtable_0000EDB8;
	___LANDTABLEECC[4] = &landtable_0000F7A8;
	___LANDTABLEECC[5] = &landtable_0000FE44;
	___ADV01C_MODELS[28] = &attach_00111938;
	___ADV01C_MODELS[27] = &attach_001114EC;
	___ADV01C_OBJECTS[7] = &object_00111964;
	___ADV01C_OBJECTS[7]->child = &object_00111518;
	___ADV01C_MODELS[27]->mats[0].diffuse.color = 0xFFFFFFFF;
	for (int i = 0; i < 3; i++)
	{
		EggCarrierOutsideDrawDist1[i].Maximum = -11000;
		EggCarrierOutsideDrawDist2[i].Maximum = -11000;
		EggCarrierOutsideDrawDist3[i].Maximum = -11000;
		EggCarrierOutside2Fog[i].Toggle = 0;
		EggCarrierOutside3Fog[i].Toggle = 0;
		EggCarrierOutside4Fog[i].Toggle = 0;
		EggCarrierOutside5Fog[i].Toggle = 0;
		EggCarrierOutside6Fog[i].Toggle = 0;
		EggCarrierOutside7Fog[i].Toggle = 1;
		EggCarrierOutside7Fog[i].Layer = 3000;
		EggCarrierOutside7Fog[i].Color = 0xFF000000;
		EggCarrierOutside7Fog[i].Distance = 21500;
		EggCarrierInside1Fog[i].Toggle = 0;
		EggCarrierInside2Fog[i].Toggle = 1;
		EggCarrierInside2Fog[i].Distance = 4000.0f;
		EggCarrierInside2Fog[i].Layer = 800.0f;
		EggCarrierInside2Fog[i].Color = 0xFFC6C9A8;
		EggCarrierInside3Fog[i].Toggle = 0;
		EggCarrierInside4Fog[i].Toggle = 1;
		EggCarrierInside4Fog[i].Distance = 1216.0f;
		EggCarrierInside4Fog[i].Layer = 139.0f;
		EggCarrierInside4Fog[i].Color = 0xFFC8C864;
		EggCarrierInside5Fog[i].Toggle = 0;
		EggCarrierInside6Fog[i].Toggle = 0;
	}
}

extern "C" __declspec(dllexport)  void __cdecl OnFrame()
{
	if (CurrentLevel == 32 && GameState != 16)
	{
		//EC Interior barrier stuff
		//Water reservoir and Ammunition Room
		if (CurrentCharacter == 6)
		{
		collist_0000C670[LengthOfArray(collist_0000C670) - 4].Flags = 0x00000000;
		collist_0000C670[LengthOfArray(collist_0000C670) - 5].Flags = 0x00000000;
		}
		else
		{
		collist_0000C670[LengthOfArray(collist_0000C670) - 4].Flags = 0x80040000;
		collist_0000C670[LengthOfArray(collist_0000C670) - 5].Flags = 0x80040000;
		}
		//Hot Shelter room
		if (CurrentCharacter != 5 && CurrentCharacter != 6 && CurrentCharacter != 7) collist_0000C670[LengthOfArray(collist_0000C670) - 2].Flags = 0x80040000; //Lock Hot Shelter room for everyone but Amy, Big and Gamma
		if (CurrentCharacter == 5 || CurrentCharacter == 7) collist_0000C670[LengthOfArray(collist_0000C670) - 2].Flags = 0x00000000; //Unlock Hot Shelter room for Amy and Big
		if (CurrentCharacter == 6 && !GetEventFlag(EventFlags_Gamma_RedMountainClear)) collist_0000C670[LengthOfArray(collist_0000C670) - 2].Flags = 0x80040000; //Lock Hot Shelter room for Gamma
		if (CurrentCharacter == 6 && GetEventFlag(EventFlags_Gamma_RedMountainClear)) collist_0000C670[LengthOfArray(collist_0000C670) - 2].Flags = 0x00000000; //Unlock Hot Shelter room for Gamma
		//Hedgehog Hammer room
		if (CurrentCharacter == 5 || CurrentCharacter == 6 || CurrentCharacter == 7) collist_0000C670[LengthOfArray(collist_0000C670) - 3].Flags = 0x00000000; //Unlock prison room for Amy, Big and Gamma
		else collist_0000C670[LengthOfArray(collist_0000C670) - 3].Flags = 0x80040000; //Lock prison room for everyone else
		//E101 Beta room
		if (CurrentCharacter != 6) collist_0000C670[LengthOfArray(collist_0000C670) - 1].Flags = 0x80040000; //Lock E101 Beta room for everyone but Gamma
		if (CurrentCharacter == 6 && GetEventFlag(EventFlags_Gamma_JetBooster))	collist_0000C670[LengthOfArray(collist_0000C670) - 1].Flags = 0x80040000; //Lock E101 Beta room for Gamma
		if (CurrentCharacter == 6 && !GetEventFlag(EventFlags_Gamma_JetBooster)) collist_0000C670[LengthOfArray(collist_0000C670) - 1].Flags = 0x00000000; //Unlock E101 Beta room for Gamma
	}
	HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
	if (CurrentLevel == 29 && CurrentAct == 0)
	{
		if (GameState != 16)
		{
			if (water1 > 110) water1 = 101;
			matlist_00007B80[0].attr_texId = water1;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) water1++;
		}
		if (IsEggCarrierSunk() && SADXStyleWater == 0) collist_0015F764[LengthOfArray(collist_0015F764)-1].Flags = 0x80000000; else collist_0015F764[LengthOfArray(collist_0015F764) - 1].Flags = 0x00000000;
	}
	if (CurrentLevel == 29 && CurrentAct == 1)
	{
		if (GameState != 16)
		{
			if (water2 > 102) water2 = 93;
			matlist_00007B80_1[0].attr_texId = water2;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) water2++;
		}
		if (IsEggCarrierSunk() && SADXStyleWater == 0) collist_00162284[LengthOfArray(collist_00162284) - 1].Flags = 0x80000000; else collist_00162284[LengthOfArray(collist_00162284) - 1].Flags = 0x00000000;
	}
	if (CurrentLevel == 29 && CurrentAct == 2)
	{
		if (GameState != 16)
		{
			if (water3 > 78) water3 = 69;
			matlist_00007B80_2[0].attr_texId = water3;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) water3++;
		}
		if (IsEggCarrierSunk() && SADXStyleWater == 0) collist_00163214[LengthOfArray(collist_00163214) - 1].Flags = 0x80000000; else collist_00163214[LengthOfArray(collist_00163214) - 1].Flags = 0x00000000;
	}
	if (CurrentLevel == 32 && CurrentAct == 1) PinkMonitorMode = 1;
	if (CurrentLevel == 32 && CurrentAct != 1) PinkMonitorMode = 0;
	if (CurrentLevel == 12) PinkMonitorMode = 1;
	if (CurrentLevel != 32 && CurrentLevel != 12) PinkMonitorMode = 0;
	if (PinkMonitorMode == 1 && CurrentlyPink == 0)
	{
		for (int p = 0; p < 17; p++)
		{
			((NJS_OBJECT*)0x38F4F04)->basicdxmodel->mats[p].diffuse.color = 0xFFFF40FF;
			((NJS_OBJECT*)0x38F4F04)->basicdxmodel->mats[p].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			CurrentlyPink = 1;
		}
	}
	if (PinkMonitorMode == 0 && CurrentlyPink == 1)
	{
		for (int p = 0; p < 17; p++)
		{
			((NJS_OBJECT*)0x38F4F04)->basicdxmodel->mats[p].diffuse.color = 0xFFB2B2B2;
			((NJS_OBJECT*)0x38F4F04)->basicdxmodel->mats[p].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			CurrentlyPink = 0;
		}
		((NJS_OBJECT*)0x38F4F04)->basicdxmodel->mats[10].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x38F4F04)->basicdxmodel->mats[16].diffuse.color = 0x7FB2B2B2;
	}
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };