#include "stdafx.h"
#include "SADXModLoader.h"
#include "ADV01_0_animlist.h"
#include "ADV01_0.h"
#include "ADV01_1.h"
#include "ADV01_2.h"
#include "ADV01_3.h"
#include "ADV01_4.h"
#include "ADV01_5.h"
#include "ADV01C_00.h"
#include "ADV01C_01.h"
#include "ADV01C_02.h"
#include "ADV01C_03.h"
#include "ADV01C_04.h"
#include "ADV01C_05.h"
#include "EC_Objects.h"

static bool PinkMonitorMode = 0;
static bool CurrentlyPink = 0;

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle2 = GetModuleHandle(L"ADV01MODELS");
	WriteData((char *)GetProcAddress(handle2, "SetClip_EC00"), 0xC3u, sizeof(char *));
	WriteData((char *)GetProcAddress(handle2, "SetClip_EC01"), 0xC3u, sizeof(char *));
	NJS_TEXLIST **___ADV01_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle2, "___ADV01_TEXLISTS");
	___ADV01_TEXLISTS[0] = &texlist_ec00;
	___ADV01_TEXLISTS[1] = &texlist_ec01;
	___ADV01_TEXLISTS[2] = &texlist_ec02;
	___ADV01_TEXLISTS[3] = &texlist_ec03;
	___ADV01_TEXLISTS[4] = &texlist_ec04;
	___ADV01_TEXLISTS[5] = &texlist_ec05;
	LandTable **___LANDTABLEEC = (LandTable **)GetProcAddress(handle2, "___LANDTABLEEC");
	___LANDTABLEEC[0] = &landtable_00162260;
	___LANDTABLEEC[1] = &landtable_001631F0;
	___LANDTABLEEC[2] = &landtable_00163CE8;
	___LANDTABLEEC[3] = &landtable_001650C8;
	___LANDTABLEEC[4] = &landtable_00165830;
	___LANDTABLEEC[5] = &landtable_001666F4;
	HMODULE handle3 = GetModuleHandle(L"ADV01CMODELS");
	LandTable **___LANDTABLEECC = (LandTable **)GetProcAddress(handle3, "___LANDTABLEEC");
	NJS_TEXLIST **___ADV01C_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle3, "___ADV01C_TEXLISTS");
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
	NJS_OBJECT **___ADV01C_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle3, "___ADV01C_OBJECTS");
	//___ADV01C_OBJECTS[7] = &object_00111964;
	___ADV01C_OBJECTS[7]->basicdxmodel->mats = matlist_0011154C;
	___ADV01C_OBJECTS[7]->basicdxmodel->meshsets = meshlist_001116A0;
	___ADV01C_OBJECTS[7]->child->basicdxmodel->mats = matlist_00111440;
	//___ADV01C_OBJECTS[7]->sibling = &object_00111964Z;
	//___ADV01C_OBJECTS[7]->child->evalflags
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
	for (int i = 0; i < 3; i++)
	{
		EggCarrierOutside4Fog[i].Toggle = 0;
		EggCarrierOutside5Fog[i].Toggle = 0;
		EggCarrierOutside6Fog[i].Toggle = 0;
		EggCarrierOutside7Fog[i].Toggle = 1;
		//EggCarrierOutside7Fog[i].Distance = 800;
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
	if (CurrentLevel == 32 | CurrentLevel == 12) PinkMonitorMode = 1;
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