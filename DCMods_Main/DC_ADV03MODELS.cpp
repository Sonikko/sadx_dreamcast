#include "stdafx.h"
#include <SADXModLoader.h>
#include <Trampoline.h>
#include "Palm.h"
#include "ADV03_00_PC.h"
#include "ADV03_00.h"
#include "ADV03_01.h"
#include "ADV03_02.h"
#include "Past_objects.h"
#include <lanternapi.h>
#include <IniFile.hpp>
#include "DC_Levels.h"

HMODULE Past = GetModuleHandle(L"ADV03MODELS");

FunctionPointer(void, sub_408350, (NJS_ACTION *a1, float a2, int a3, float a4), 0x408350);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataArray(DrawDistance, DrawDist_Past1, 0x0111E540, 3);
DataArray(DrawDistance, DrawDist_Past2, 0x0111E558, 3);
DataArray(DrawDistance, DrawDist_Past3, 0x0111E570, 3);
DataArray(FogData, FogData_Past1, 0x0111E588, 3);
DataArray(FogData, FogData_Past2, 0x0111E5B8, 3);
DataArray(FogData, FogData_Past3, 0x0111E5E8, 3);
static int ocean_act1 = 73;
static int ocean_act2 = 59;
static int water_act1 = 59;
static int water_act2 = 59;
static char ocean_act1_sadx = 83;
static char ocean_act2_sadx = 85;
static bool SADXStyleWater = false;

NJS_MATERIAL* SecondCharacterSpecular[] = {
	//Chao
	(NJS_MATERIAL*)((size_t)Past + 0x0013CA54),
};

NJS_MATERIAL* Past_ObjectSpecular[] = {
	//Tree
	(NJS_MATERIAL*)((size_t)Past + 0x0011F030),
	(NJS_MATERIAL*)((size_t)Past + 0x0011F044),
	(NJS_MATERIAL*)((size_t)Past + 0x0011E100),
	(NJS_MATERIAL*)((size_t)Past + 0x0011E114),
};

NJS_MATERIAL* FirstCharacterSpecular[] = {
	//Chao
	(NJS_MATERIAL*)((size_t)Past + 0x0013C668),
	(NJS_MATERIAL*)((size_t)Past + 0x0013C190),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BCB8),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BB7C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BA40),
	(NJS_MATERIAL*)((size_t)Past + 0x0013B6F0),
	(NJS_MATERIAL*)((size_t)Past + 0x0013B184),
	(NJS_MATERIAL*)((size_t)Past + 0x0013ADEC),
	(NJS_MATERIAL*)((size_t)Past + 0x0013AA54),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A94C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A4DC),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A068),
	(NJS_MATERIAL*)((size_t)Past + 0x0013C668),
	(NJS_MATERIAL*)((size_t)Past + 0x0013C190),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BCB8),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BB7C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BA40),
	(NJS_MATERIAL*)((size_t)Past + 0x0013B6F0),
	(NJS_MATERIAL*)((size_t)Past + 0x0013B184),
	(NJS_MATERIAL*)((size_t)Past + 0x0013ADEC),
	(NJS_MATERIAL*)((size_t)Past + 0x0013AA54),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A94C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A4DC),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A068),
};

bool ForceFirstCharacterSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(2, false);
	use_default_diffuse(true);
	return true;
}

static void __cdecl Past_OceanDraw_r(OceanData *a1);
static Trampoline Past_OceanDraw_t(0x542850, 0x542858, Past_OceanDraw_r);
static void __cdecl Past_OceanDraw_r(OceanData *a1)
{
	auto original = reinterpret_cast<decltype(Past_OceanDraw_r)*>(Past_OceanDraw_t.Target());
	if (EnablePast == true)
	{
		if (CurrentAct == 1)
		{
			if (GameState != 16)
			{
				if (ocean_act1 > 82) ocean_act1 = 73;
				if (water_act1 > 72) water_act1 = 59;
				if (ocean_act1_sadx > 97) ocean_act1_sadx = 83;
				matlistADV03_0006DBD0[0].attr_texId = ocean_act1;
				matlistADV03_00095CF8[0].attr_texId = water_act1;
				matlistADV03_000950C4[0].attr_texId = water_act1;
				matlistADV03_0009542C[0].attr_texId = water_act1;
				WriteData<1>((char*)0x0054287B, ocean_act1_sadx);
				if ((FramerateSetting < 2 && FrameCounter % 4 == 0) || (FramerateSetting == 2 && FrameCounter % 2 == 0) || FramerateSetting > 2)
				{
					ocean_act1++;
					water_act1++;
					ocean_act1_sadx++;
				}
			}
			//Reflections act 1
			njSetTexture(&texlist_past01);
			DrawQueueDepthBias = 1000.0f;
			ProcessModelNode(&objectADV03_0008B2E0Z, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			DrawQueueDepthBias = 2500.0f;
			ProcessModelNode(&objectADV03_0009609C, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			DrawQueueDepthBias = 0;
		}
		if (CurrentAct == 2)
		{
			if (GameState != 16)
			{
				if (water_act2 > 74) water_act2 = 61;
				if (ocean_act2 > 84) ocean_act2 = 75;
				if (ocean_act2_sadx > 99) ocean_act2_sadx = 85;
				//matlistADV03_000C7840[0].attr_texId = water_act2; //Apparently SADX does it on its own
				//matlistADV03_000C6C0C[0].attr_texId = water_act2; //Apparently SADX does it on its own
				//matlistADV03_000C6F74[0].attr_texId = water_act2; //Apparently SADX does it on its own
				matlistADV03_0009DEBC[0].attr_texId = ocean_act2;
				WriteData<1>((char*)0x005428A0, ocean_act2_sadx);
				if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
				{
					ocean_act2++;
					water_act2++;
					ocean_act2_sadx++;
				}
			}
			//Reflections act 2
			njSetTexture(&texlist_past02);
			DrawQueueDepthBias = 1000.0f;
			ProcessModelNode(&objectADV03_000BCC28Z, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			DrawQueueDepthBias = 2500.0f;
			ProcessModelNode(&objectADV03_000C7BE4, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			DrawQueueDepthBias = 0;
		}
		if (SADXStyleWater == true) original(a1);
	}
	else original(a1);
}

void RenderPalm2(NJS_ACTION *a1, float a2, int a3, float a4)
{
	sub_408350(a1, a2, a3, a4);
	DrawQueueDepthBias = -17000.0f;
	ProcessModelNode(&object_00122F30_2, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void RenderPalm1(NJS_OBJECT *a1, QueuedModelFlagsB a2, float a3)
{
	ProcessModelNode_C_VerifyTexList(&object_00125250, a2, a3);
	DrawQueueDepthBias = -17000.0f;
	ProcessModelNode(&object_0012521C_2, QueuedModelFlagsB_EnableZWrite, 1.0f);
	DrawQueueDepthBias = 0.0f;
}

void ADV03_Init(const char *path, const HelperFunctions &helperFunctions)
{
	char pathbuf[MAX_PATH];
	ReplaceBIN_DC("CAMPAST00S");
	ReplaceBIN_DC("CAMPAST01S");
	ReplaceBIN_DC("CAMPAST02S");
	ReplaceBIN_DC("SETPAST00S");
	ReplaceBIN_DC("SETPAST01S");
	ReplaceBIN_DC("SETPAST02S");
	ReplacePVM("EFF_PAST");
	ReplacePVM("EV_ALIFE");
	ReplacePVM("K_PATYA");
	ReplacePVM("OBJ_PAST");
	ReplacePVM("PAST00");
	ReplacePVM("PAST_KN_FAM");
	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
	SADXStyleWater = config->getBool("SADX Style Water", "Past", false);
	delete config;
	if (SADXStyleWater == true)
	{
		ReplacePVMX_SADXStyleWater("PAST01");
		ReplacePVMX_SADXStyleWater("PAST02");
	}
	else
	{
		ReplacePVM("PAST01");
		ReplacePVM("PAST02");
	}
	//Palm fixes
	ADV03_ACTIONS[10]->object->model = &attach_00122F04;
	WriteCall((void*)0x545C1A, RenderPalm1);
	WriteCall((void*)0x545BFD, RenderPalm2);
	//Tikal cutscene water ripple thing
	WriteData((float*)0x0068BA27, -40.7f); //Ripple 1 X
	WriteData((float*)0x0068BA22, 86.0f); //Ripple 1 Y
	WriteData((float*)0x0068BA1D, 59.43f); //Ripple 1 Z
	WriteData((float*)0x0068BA62, -40.7f); //Ripple 2 X
	WriteData((float*)0x0068BA5D, 86.0f); //Ripple 2 Y
	WriteData((float*)0x0068BA58, 59.43f); //Ripple 2 Z
	WriteData((float*)0x0068BA94, -52.01f); //Ripple 3 X
	WriteData((float*)0x0068BA8F, 86.0f); //Ripple 3 Y
	WriteData((float*)0x0068BA8A, 52.42f); //Ripple 3 Z
	HMODULE handle = GetModuleHandle(L"ADV03MODELS");
	if (handle != nullptr && DLLLoaded_Lantern == true)
	{
		material_register(SecondCharacterSpecular, LengthOfArray(SecondCharacterSpecular), &ForceDiffuse2Specular3);
		material_register(FirstCharacterSpecular, LengthOfArray(FirstCharacterSpecular), &ForceDiffuse2Specular2);
		material_register(Past_ObjectSpecular, LengthOfArray(Past_ObjectSpecular), &ForceDiffuse0Specular1);
	}
	if (SADXStyleWater == true)
	{
		ResizeTextureList(&texlist_past01, 100);
		ResizeTextureList(&texlist_past02, 102);
		WriteData<1>((char*)0x0054287B, 0x53); // wave texture ID act 2
		WriteData<1>((char*)0x00542880, 0x62); // water texture ID act 2
		WriteData<1>((char*)0x005428A0, 0x55); // wave texture ID act 3
		WriteData<1>((char*)0x005428A5, 0x64); // water texture ID act 3
		collist_0006735C[0].Flags = 0x00000020;
		collist_000976C0[0].Flags = 0x00000020;
	}
	else
	{
		collist_0006735C[0].Flags = 0x80000020;
		collist_000976C0[0].Flags = 0x80000020;
	}
	for (int i = 0; i < 3; i++)
	{
		FogData_Past1[i].Layer = -12000.0f;
		FogData_Past1[i].Distance = -12000.0f;
		FogData_Past2[i].Layer = -12000.0f;
		FogData_Past2[i].Distance = -12000.0f;
		FogData_Past3[i].Layer = -12000.0f;
		FogData_Past3[i].Distance = -12000.0f;
		DrawDist_Past1[i].Maximum = -12000.0f;
		DrawDist_Past2[i].Maximum = -16000.0f;
		DrawDist_Past3[i].Maximum = -16000.0f;
	}
	NJS_TEXLIST **___ADV03_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle, "___ADV03_TEXLISTS");
	___ADV03_TEXLISTS[4] = &texlist_past0;
	___ADV03_TEXLISTS[5] = &texlist_past01;
	___ADV03_TEXLISTS[6] = &texlist_past02;
	LandTable **___LANDTABLEPAST = (LandTable **)GetProcAddress(handle, "___LANDTABLEPAST");
	___LANDTABLEPAST[0] = &landtable_00000278;
	___LANDTABLEPAST[1] = &landtable_0000029C;
	___LANDTABLEPAST[2] = &landtable_000002C0;
	NJS_OBJECT **___ADV03PAST01_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03PAST01_OBJECTS");
	//___ADV03PAST01_OBJECTS[211] = &objectADV03_000953F8; //water 1
	//___ADV03PAST01_OBJECTS[212] = &objectADV03_0009566C; //water 2
	___ADV03PAST01_OBJECTS[213] = &objectADV03_00095CC4;
	//___ADV03PAST01_OBJECTS[214] = &objectADV03_0009609C; //water 3
	NJS_OBJECT **___ADV03PAST02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03PAST02_OBJECTS");
	___ADV03PAST02_OBJECTS[212] = &objectADV03_000C7BE4;
	___ADV03PAST02_OBJECTS[209] = &objectADV03_000C6F40;
	___ADV03PAST02_OBJECTS[210] = &objectADV03_000C71B4;
	___ADV03PAST02_OBJECTS[211] = &objectADV03_000FB49C;
	NJS_OBJECT **___ADV03_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03_OBJECTS");
	___ADV03_OBJECTS[16] = &objectADV03_0001EDDC; //tree 16
	___ADV03_OBJECTS[17] = &objectADV03_0001EDDC; //tree 17
	___ADV03_OBJECTS[15] = &objectADV03_00027158; //small tree shadow
	___ADV03_OBJECTS[13] = &objectADV03_00016CA0; //OWell
	___ADV03_OBJECTS[18] = &objectADV03_00027054; //well shadow
}
