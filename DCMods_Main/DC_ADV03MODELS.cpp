#include "stdafx.h"
#include "Palm.h"
#include "ADV03_00_PC.h"
#include "ADV03_00.h"
#include "ADV03_01.h"
#include "ADV03_02.h"
#include "Past_objects.h"

HMODULE Past = GetModuleHandle(L"ADV03MODELS");

FunctionPointer(void, sub_408350, (NJS_ACTION *a1, float a2, int a3, float a4), 0x408350);
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

NJS_MATERIAL* PatyaMaterials[] = {
	(NJS_MATERIAL*)((size_t)Past + 0x0014714C),
	(NJS_MATERIAL*)((size_t)Past + 0x00146D38),
	(NJS_MATERIAL*)((size_t)Past + 0x00146A0C),
	(NJS_MATERIAL*)((size_t)Past + 0x00146670),
	(NJS_MATERIAL*)((size_t)Past + 0x00146370),
	(NJS_MATERIAL*)((size_t)Past + 0x00143998),
	(NJS_MATERIAL*)((size_t)Past + 0x001439AC),
	(NJS_MATERIAL*)((size_t)Past + 0x001439C0),
	(NJS_MATERIAL*)((size_t)Past + 0x001439D4),
	(NJS_MATERIAL*)((size_t)Past + 0x001439E8),
	(NJS_MATERIAL*)((size_t)Past + 0x001439FC),
	(NJS_MATERIAL*)((size_t)Past + 0x00143A10),
	(NJS_MATERIAL*)((size_t)Past + 0x00143A24),
	(NJS_MATERIAL*)((size_t)Past + 0x00143374),
	(NJS_MATERIAL*)((size_t)Past + 0x001431DC),
	(NJS_MATERIAL*)((size_t)Past + 0x00143040),
	(NJS_MATERIAL*)((size_t)Past + 0x00142884),
	(NJS_MATERIAL*)((size_t)Past + 0x00142898),
	(NJS_MATERIAL*)((size_t)Past + 0x0014207C),
	(NJS_MATERIAL*)((size_t)Past + 0x00141DFC),
	(NJS_MATERIAL*)((size_t)Past + 0x00141BA8),
	(NJS_MATERIAL*)((size_t)Past + 0x00141834),
	(NJS_MATERIAL*)((size_t)Past + 0x00141848),
	(NJS_MATERIAL*)((size_t)Past + 0x00141720),
	(NJS_MATERIAL*)((size_t)Past + 0x0014160C),
	(NJS_MATERIAL*)((size_t)Past + 0x001413B8),
	(NJS_MATERIAL*)((size_t)Past + 0x0014112C),
	(NJS_MATERIAL*)((size_t)Past + 0x00141018),
	(NJS_MATERIAL*)((size_t)Past + 0x00140F04),
	(NJS_MATERIAL*)((size_t)Past + 0x001406FC),
	(NJS_MATERIAL*)((size_t)Past + 0x00140478),
	(NJS_MATERIAL*)((size_t)Past + 0x001401F8),
	(NJS_MATERIAL*)((size_t)Past + 0x0013FFCC),
	(NJS_MATERIAL*)((size_t)Past + 0x0013FE54),
	(NJS_MATERIAL*)((size_t)Past + 0x0013FD40),
	(NJS_MATERIAL*)((size_t)Past + 0x0013FC2C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013FB18),
	(NJS_MATERIAL*)((size_t)Past + 0x0013FA04),
	(NJS_MATERIAL*)((size_t)Past + 0x0013F7B0),
	(NJS_MATERIAL*)((size_t)Past + 0x0013F43C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013F450),
	(NJS_MATERIAL*)((size_t)Past + 0x0013F328),
	(NJS_MATERIAL*)((size_t)Past + 0x0013F214),
	(NJS_MATERIAL*)((size_t)Past + 0x0013EFC0),
	(NJS_MATERIAL*)((size_t)Past + 0x0013ED30),
	(NJS_MATERIAL*)((size_t)Past + 0x0013EC1C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013EB08),
	(NJS_MATERIAL*)((size_t)Past + 0x0013E680),
	(NJS_MATERIAL*)((size_t)Past + 0x0013E694),
	(NJS_MATERIAL*)((size_t)Past + 0x0013E6A8),
	(NJS_MATERIAL*)((size_t)Past + 0x0013E334),
	(NJS_MATERIAL*)((size_t)Past + 0x0013E348),
	(NJS_MATERIAL*)((size_t)Past + 0x0013E134),
	(NJS_MATERIAL*)((size_t)Past + 0x0013DF00),
	(NJS_MATERIAL*)((size_t)Past + 0x0013DA78),
	(NJS_MATERIAL*)((size_t)Past + 0x0013DA8C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013DAA0),
	(NJS_MATERIAL*)((size_t)Past + 0x0013D72C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013D740),
	(NJS_MATERIAL*)((size_t)Past + 0x0013D52C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013D2F8),
	(NJS_MATERIAL*)((size_t)Past + 0x0013CF6C),
};

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

void __cdecl Past_OceanDraw_r(OceanData *a1)
{
	if (CurrentAct == 1)
	{
		if (GameState != 16)
		{
			if (ocean_act1 > 82) ocean_act1 = 73;
			if (water_act1 > 72) water_act1 = 59;
			matlistADV03_0006DBD0[0].attr_texId = ocean_act1;
			matlistADV03_00095CF8[0].attr_texId = water_act1;
			matlistADV03_000950C4[0].attr_texId = water_act1;
			matlistADV03_0009542C[0].attr_texId = water_act1;
			if ((FramerateSetting < 2 && FrameCounter % 4 == 0) || (FramerateSetting == 2 && FrameCounter % 2 == 0) || FramerateSetting > 2)
			{
				ocean_act1++;
				water_act1++;
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
			//matlistADV03_000C7840[0].attr_texId = water_act2; //Apparently SADX does it on its own
			//matlistADV03_000C6C0C[0].attr_texId = water_act2; //Apparently SADX does it on its own
			//matlistADV03_000C6F74[0].attr_texId = water_act2; //Apparently SADX does it on its own
			matlistADV03_0009DEBC[0].attr_texId = ocean_act2;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				ocean_act2++;
				water_act2++;
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
	if (SADXWater_Past) Past_OceanDraw_SADXStyle(a1);
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

void ADV03_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
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
	ReplacePVM("PAST01");
	ReplacePVM("PAST02");
	ReplacePVM("PAST_KN_FAM");
	ReplacePVM("KNUCKLES_NORMAL");
	ReplacePVM("KNUCKLES_DEBU");
	ReplacePVM("KNUCKLES_LONG");
	WriteJump((void*)0x542850, Past_OceanDraw_r);
	//Material fixes for Pacman
	for (unsigned int i = 0; i < LengthOfArray(PatyaMaterials); i++)
	{
		RemoveMaterialColors(PatyaMaterials[i]);
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
	if (handle != nullptr && DLLLoaded_Lantern)
	{
		material_register(SecondCharacterSpecular, LengthOfArray(SecondCharacterSpecular), &ForceDiffuse2Specular3);
		material_register(FirstCharacterSpecular, LengthOfArray(FirstCharacterSpecular), &ForceDiffuse2Specular2);
		material_register(Past_ObjectSpecular, LengthOfArray(Past_ObjectSpecular), &ForceDiffuse0Specular1);
	}
	if (SADXWater_Past)
	{
		collist_0006735C[0].Flags = 0x00000020;
		collist_000976C0[0].Flags = 0x00000020;
	}
	else
	{
		collist_0006735C[0].Flags = 0x80000020;
		collist_000976C0[0].Flags = 0x80000020;
	}
	//Fog data
	for (unsigned int i = 0; i < 3; i++)
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