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

static int water1 = 98;
static int water2 = 90;
static int water3 = 66;
static char water_sadx1 = 108;
static char water_sadx2 = 100;
static char water_sadx3 = 76;

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
HMODULE CHRMODELS = GetModuleHandle(L"CHRMODELS");
NJS_OBJECT **___MILES_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS, "___MILES_OBJECTS");
NJS_TEXLIST **___ADV01_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle2, "___ADV01_TEXLISTS");
NJS_TEXLIST **___ADV01C_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle3, "___ADV01C_TEXLISTS");
LandTable **___LANDTABLEEC = (LandTable **)GetProcAddress(handle2, "___LANDTABLEEC");
LandTable **___LANDTABLEECC = (LandTable **)GetProcAddress(handle3, "___LANDTABLEEC");
NJS_OBJECT **___ADV01C_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle3, "___ADV01C_OBJECTS");
NJS_ACTION **___ADV01C_ACTIONS = (NJS_ACTION **)GetProcAddress(handle3, "___ADV01C_ACTIONS");
NJS_ACTION **___ADV01_ACTIONS = (NJS_ACTION **)GetProcAddress(handle2, "___ADV01_ACTIONS");
NJS_OBJECT **___ADV01_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle2, "___ADV01_OBJECTS");
NJS_OBJECT **___ADV01EC00_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle2, "___ADV01EC00_OBJECTS");
NJS_MODEL_SADX **___ADV01C_MODELS = (NJS_MODEL_SADX **)GetProcAddress(handle3, "___ADV01C_MODELS");
static bool PinkMonitorMode = 0;
static bool CurrentlyPink = 0;

void sub_10001050(NJS_OBJECT *a1)
{
	NJS_MODEL_SADX *v1; // edx@1
	signed int v2; // ecx@1
	__int16 *v3; // eax@2

	v1 = (NJS_MODEL_SADX*)a1->model;
	v2 = 0;
	if (v1->nbMat)
	{
		v3 = (__int16*)&v1->mats->attrflags;
		do
		{
			*(_DWORD *)v3 &= 0xFFEFFFFF;
			++v2;
			v3 += 10;
		} while (v2 < v1->nbMat);
	}
}

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
		landtable_00162260.Col = &collist_0015F764[4];
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
		landtable_001631F0.Col = &collist_00162284[6];
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
		texlist_ec00.nbTexture = 125;
		texlist_ec01.nbTexture = 117;
		texlist_ec02.nbTexture = 93;
		WriteData((char*)0x0051C4E8, 0x7B, 1); //act 1 water
		WriteData((char*)0x0051C50B, 0x73, 1); //act 2 water
		WriteData((char*)0x0051C529, 0x5B, 1); //act 3 water
		WriteData((float*)0x0051C5EC, 2.5f); //Z fighting fix
	}
	else
	{
		WriteData((void*)0x0051C440, 0xC3u, 1);
		EggCarrierObjectTexlist_Sea[1].Name = "EC_SEA";
		landtable_00162260.TexName = "ADV_EC00";
		landtable_001631F0.TexName = "ADV_EC01";
		landtable_00163CE8.TexName = "ADV_EC02";
	}
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
	___LANDTABLEECC[0] = &landtable_0000C64C;
	___LANDTABLEECC[1] = &landtable_0000D7B0;
	___LANDTABLEECC[2] = &landtable_0000E1D0;
	___LANDTABLEECC[3] = &landtable_0000EDB8;
	___LANDTABLEECC[4] = &landtable_0000F7A8;
	___LANDTABLEECC[5] = &landtable_0000FE44;
	___ADV01C_TEXLISTS[15] = &texlist_ec30;
	___ADV01C_TEXLISTS[16] = &texlist_ec31;
	___ADV01C_TEXLISTS[17] = &texlist_ec32;
	___ADV01C_TEXLISTS[18] = &texlist_ec33;
	___ADV01C_TEXLISTS[19] = &texlist_ec34;
	___ADV01C_TEXLISTS[20] = &texlist_ec35;
	___ADV01C_MODELS[28] = &attach_00111938;
	___ADV01C_MODELS[27] = &attach_001114EC;
	___ADV01C_OBJECTS[7] = &object_00111964; //tarai button
	___ADV01C_OBJECTS[8] = &object_000D243C; //tarai
	___ADV01_ACTIONS[2]->object = &object_0019795C; //OEggChair
	___ADV01_ACTIONS[2]->motion = &_197dbc; //OEggChair
	___ADV01_OBJECTS[21] = &object_001972E4;
	___ADV01_OBJECTS[22] = &object_0018C098;
	___ADV01_OBJECTS[23] = &object_0018BD3C;
	___ADV01_OBJECTS[24] = &object_0018B9E0;
	___ADV01_OBJECTS[0] = &object_00182160; //SideLift
	___ADV01_OBJECTS[1] = &object_00181DBC; //SideLift
	___ADV01_OBJECTS[2] = &object_00181684; //SideLift
	___ADV01_OBJECTS[55] = &object_0017D82C; //OSLight
	___ADV01_OBJECTS[56] = &object_0017CBA0; //OSLight
	___ADV01_OBJECTS[57] = &object_0017C970; //OSLight
	___ADV01_OBJECTS[58] = &object_0017BFE4; //OSLight
	___ADV01_ACTIONS[0]->object = &object_00178BC4; //This thing is stupid
	___ADV01_OBJECTS[5] = &object_00178BC4; //This thing is stupid
	//___ADV01_OBJECTS[13] = &object_001A85F0; //OParasol
	___ADV01_OBJECTS[27] = &object_001782D4; //Door top
	___ADV01_OBJECTS[28] = &object_001777B4; //Door 2
	___ADV01_OBJECTS[18] = &object_00189EA0; //Eggcap
	___ADV01_OBJECTS[19] = &object_001760A0; //Egglift
	___ADV01_OBJECTS[69]->child->child->model = &attach_0016CD90; //Monorail front
	___ADV01_OBJECTS[69]->child->model = &attach_0016D524; //Monorail front
	___ADV01_OBJECTS[70]->child->child->model = &attach_00170CFC; //Monorail back
	___ADV01_OBJECTS[70]->child->model = &attach_001714D8; //Monorail back
	___ADV01C_OBJECTS[7]->child = &object_00111518;
	___ADV01C_OBJECTS[43]->child->child->model = &attach_000AEDD0; //Monorail 1 door
	___ADV01C_OBJECTS[43]->child->model = &attach_000AF564; //Monorail 1 door thing
	___ADV01C_OBJECTS[44]->child->child->model = &attach_000B2D3C; //Monorail 2 door 
	___ADV01C_OBJECTS[44]->child->model = &attach_000B3518; //Monorail 2 door thing
	___ADV01C_OBJECTS[29] = &object_000ADCD8; //Monorail station
	___ADV01C_ACTIONS[7]->object = &object_000B8CD4; //Egglift
	___ADV01C_OBJECTS[23] = &object_000B8CD4; //Egglift
	___ADV01C_ACTIONS[6]->object = &object_000BAF48; //Door
	___ADV01C_MODELS[27]->mats[0].diffuse.color = 0xFFFFFFFF;
	WriteData((void*)0x005244D6, 0x90, 5); //Disable light flickering
	for (int i = 0; i < 3; i++)
	{
		EggCarrierOutsideDrawDist1[i].Maximum = -11000;
		EggCarrierOutsideDrawDist2[i].Maximum = -11000;
		EggCarrierOutsideDrawDist3[i].Maximum = -11000;
		EggCarrierOutside2Fog[i].Distance = -12000;
		EggCarrierOutside2Fog[i].Layer = -12000;
		EggCarrierOutside3Fog[i].Distance = -12000;
		EggCarrierOutside3Fog[i].Layer = -12000;
		EggCarrierOutside4Fog[i].Distance = -12000;
		EggCarrierOutside4Fog[i].Layer = -12000;
		EggCarrierOutside5Fog[i].Distance = -12000;
		EggCarrierOutside5Fog[i].Layer = -12000;
		EggCarrierOutside6Fog[i].Distance = -12000;
		EggCarrierOutside6Fog[i].Layer = -12000;
		EggCarrierOutside7Fog[i].Toggle = 1;
		EggCarrierOutside7Fog[i].Layer = 3000;
		EggCarrierOutside7Fog[i].Color = 0xFF000000;
		EggCarrierOutside7Fog[i].Distance = 21500;
		EggCarrierInside1Fog[i].Distance = -12000;
		EggCarrierInside1Fog[i].Layer = -12000;
		EggCarrierInside2Fog[i].Toggle = 1;
		EggCarrierInside2Fog[i].Distance = 4000.0f;
		EggCarrierInside2Fog[i].Layer = 800.0f;
		EggCarrierInside2Fog[i].Color = 0xFFC6C9A8;
		EggCarrierInside3Fog[i].Distance = -12000;
		EggCarrierInside3Fog[i].Layer = -12000;
		EggCarrierInside4Fog[i].Toggle = 1;
		EggCarrierInside4Fog[i].Distance = 1216.0f;
		EggCarrierInside4Fog[i].Layer = 139.0f;
		EggCarrierInside4Fog[i].Color = 0xFFC8C864;
		EggCarrierInside5Fog[i].Distance = -12000;
		EggCarrierInside5Fog[i].Layer = -12000;
		EggCarrierInside6Fog[i].Distance = -12000;
		EggCarrierInside6Fog[i].Layer = -12000;
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
			if (water1 > 107) water1 = 98;
			if (water_sadx1 > 122) water_sadx1 = 108;
			matlist_00007B80[0].attr_texId = water1;
			if (Camera_Data1 != nullptr)
			{
				object_00007C50.pos[0] = Camera_Data1->Position.x;
				object_00007C50.pos[2] = Camera_Data1->Position.z;
			}
			if (SADXStyleWater != 0) WriteData((char*)0x0051C4E0, water_sadx1, 1);
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				water1++;
				water_sadx1++;
			}
		}
		if (IsEggCarrierSunk() && SADXStyleWater == 0) collist_0015F764[LengthOfArray(collist_0015F764)-1].Flags = 0x80000000; else collist_0015F764[LengthOfArray(collist_0015F764) - 1].Flags = 0x00000000;
	}
	if (CurrentLevel == 29 && CurrentAct == 1)
	{
		if (GameState != 16)
		{
			if (water_sadx2 > 114) water_sadx2 = 100;
			if (water2 > 99) water2 = 90;
			matlist_00007B80_1[0].attr_texId = water2;
			if (Camera_Data1 != nullptr)
			{
				object_00007C50_1.pos[0] = Camera_Data1->Position.x;
				object_00007C50_1.pos[2] = Camera_Data1->Position.z;
			}
			if (SADXStyleWater != 0) WriteData((char*)0x0051C503, water_sadx2, 1);
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				water2++;
				water_sadx2++;
			}
		}
		if (IsEggCarrierSunk() && SADXStyleWater == 0) collist_00162284[LengthOfArray(collist_00162284) - 1].Flags = 0x80000000; else collist_00162284[LengthOfArray(collist_00162284) - 1].Flags = 0x00000000;
	}
	if (CurrentLevel == 29 && CurrentAct == 2)
	{
		if (GameState != 16)
		{
			if (water3 > 75) water3 = 66;
			if (water_sadx3 > 90) water_sadx3 = 76;
			matlist_00007B80_2[0].attr_texId = water3;
			if (Camera_Data1 != nullptr)
			{
				object_00007C50_2.pos[0] = Camera_Data1->Position.x;
				object_00007C50_2.pos[2] = Camera_Data1->Position.z;
			}
			if (SADXStyleWater != 0) WriteData((char*)0x0051C521, water_sadx3, 1);
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				water3++;
				water_sadx3++;
			}
		}
		if (IsEggCarrierSunk() && SADXStyleWater == 0) collist_00163214[LengthOfArray(collist_00163214) - 1].Flags = 0x80000000; else collist_00163214[LengthOfArray(collist_00163214) - 1].Flags = 0x00000000;
	}
	if (CurrentLevel == 32 && CurrentAct == 1) PinkMonitorMode = 1;
	if (CurrentLevel == 32 && CurrentAct != 1) PinkMonitorMode = 0;
	if (CurrentLevel == 12 && CurrentAct == 0) PinkMonitorMode = 1;
	if (CurrentLevel == 12 && CurrentAct != 0) PinkMonitorMode = 0;
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