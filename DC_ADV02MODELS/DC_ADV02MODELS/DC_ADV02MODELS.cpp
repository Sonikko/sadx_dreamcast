#include "stdafx.h"
#include <SADXModLoader.h>
#include "button.h"
#include "ADV_MR00 (Station area).h"
#include "ADV_MR01 (Angel Island).h"
#include "ADV_MR02 (Jungle area).h"
#include "ADV_MR03 (Final Egg entrance).h"
#include "OFinalEgg.h"
#include "MR_train.h"
#include "MR_Rock.h"
#include "MR_IceCapDoor.h"
#include "Tanken.h"
#include "Tanken2.h"
#include "Tanken3.h"
#include "Grass.h"
#include "MR_Objects.h"

DataArray(FogData, MR1FogDay, 0x01103448, 3);
DataArray(FogData, MR2FogDay, 0x01103478, 3);
DataArray(FogData, MR3FogDay, 0x011034A8, 3);
DataArray(FogData, MR4FogDay, 0x011034D8, 3);
DataArray(FogData, MR1FogEvening, 0x01103508, 3);
DataArray(FogData, MR2FogEvening, 0x01103538, 3);
DataArray(FogData, MR1FogNight, 0x01103568, 3);
DataArray(FogData, MR3FogNight, 0x01103598, 3);
DataArray(DrawDistance, MR1DrawDist, 0x011033E8, 3);
DataArray(DrawDistance, MR2DrawDist, 0x01103400, 3);
DataArray(DrawDistance, MR3DrawDist, 0x01103418, 3);
DataArray(DrawDistance, MR4DrawDist, 0x01103430, 3);
DataPointer(int, CutsceneID, 0x3B2C570);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, DroppedFrames, 0x03B1117C);
static bool InsideTemple = 0;
static int anim1 = 130;
static int anim2 = 140;
static int anim3 = 76;
static int anim_sadx = 156;
NJS_TEXNAME textures_mrtrain[31];
NJS_TEXLIST texlist_mrtrain = { arrayptrandlength(textures_mrtrain) };

void __cdecl SetWaterTexture()
{
	njSetTextureNum(155);
}

void __cdecl MRWater()
{
	if (CurrentAct == 0)
	{
		if (!DroppedFrames)
		{
			DisableFog();
			njSetTexture(&texlist_mr00); //Act 1
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_A_Wrapper(&object_00057FD4, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_A_Wrapper(&object_000538B0, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_A_Wrapper(&object_000534DC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_A_Wrapper(&object_00059734, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);
			njPushMatrix(0);
			njTranslate(0, 0, 0, 0);
			ProcessModelNode_A_Wrapper(&object_000599DC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);
		}
	}
}
	
extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	*(NJS_OBJECT*)0x1108A18 = object_00226468; //TANKEN
	*(NJS_OBJECT*)0x110CF34 = object2_00229334; //TANKEN 2
	*(NJS_OBJECT*)0x11112CC = object_0022DDA4; //TANKEN 3
	HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
	if (SADXStyleWater != 0) 
	{
		landtable_00017960.TexName = "ADV_MR00W";
		WriteCall((void*)0x005325C9, SetWaterTexture);
		WriteData((int*)0x00532611, 156);
		texlist_mr00.nbTexture = 171;
		collist_00015E60[LengthOfArray(collist_00015E60) - 2].Flags = 0x81000000;
		collist_00015E60[LengthOfArray(collist_00015E60) - 3].Flags = 0x81000000;
		collist_00015E60[LengthOfArray(collist_00015E60) - 4].Flags = 0x81000000;
		collist_00015E60[LengthOfArray(collist_00015E60) - 5].Flags = 0x81000000;
	}
	else 
	{
		WriteJump((void*)0x532500, MRWater);
		landtable_00017960.TexName = "ADV_MR00";
	}
	for (int i = 0; i < 3; i++)
	{
		MR1FogDay[i].Distance = -9000.0f;
		MR1FogDay[i].Layer = -1500.0f;
		MR1FogDay[i].Toggle = 1;
		MR1FogDay[i].Color = 0xFF646464;
		MR1FogEvening[i].Distance = -9000.0f;
		MR1FogEvening[i].Layer = -3500.0f;
		MR1FogNight[i].Color = 0xFF000F53;
		MR1FogNight[i].Distance = -10000.0f;
		MR1FogNight[i].Layer = -2000.0f;
		MR2FogDay[i].Layer = -2000.0f;
		MR2FogDay[i].Distance = -16000.0f;
		MR2FogDay[i].Color = 0xFFB4B4B4;
		MR2FogEvening[i].Distance = -12000.0f;
		MR2FogEvening[i].Layer = -5000.0f;
		MR2FogEvening[i].Color = 0xFF96825A;
		MR3FogDay[i].Layer = -4000.0f;
		MR3FogDay[i].Distance = -16000.0f;
		MR3FogDay[i].Color = 0xFFB4B4B4;
		MR3FogNight[i].Distance = -12000;
		MR3FogNight[i].Color = 0xFF000F53;
		MR3FogNight[i].Layer = -5000;
		MR1DrawDist[i].Maximum = -10000.0f;
		MR2DrawDist[i].Maximum = -10000.0f;
		MR3DrawDist[i].Maximum = -12000.0f;
		MR4DrawDist[i].Maximum = -4000.0f;
	}
	HMODULE handle = GetModuleHandle(L"ADV02MODELS");
	NJS_TEXLIST **___ADV02_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle, "___ADV02_TEXLISTS");
	___ADV02_TEXLISTS[4] = &texlist_mrtrain;
	___ADV02_TEXLISTS[38] = &texlist_mr00;
	___ADV02_TEXLISTS[39] = &texlist_mr01;
	___ADV02_TEXLISTS[40] = &texlist_mr02;
	___ADV02_TEXLISTS[41] = &texlist_mr03;
	LandTable **___LANDTABLEMR = (LandTable **)GetProcAddress(handle, "___LANDTABLEMR");
	___LANDTABLEMR[0] = &landtable_00017960;
	___LANDTABLEMR[1] = &landtable_0009E7B0;
	___LANDTABLEMR[2] = &landtable_00000178;
	___LANDTABLEMR[3] = &landtable_0000019C;
	NJS_OBJECT **___ADV02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV02_OBJECTS");
	___ADV02_OBJECTS[23] = &object_001BACAC; //Ice Cap door
	___ADV02_OBJECTS[25] = &object_001B9854; //Ice Cap door 1 
	___ADV02_OBJECTS[26] = &object_001B9D9C; //Ice Cap door 2
	___ADV02_OBJECTS[86] = &object_001BF00C; //Ice Cap lock
	___ADV02_OBJECTS[88] = &object_001BBA04; //Ice Stone
	___ADV02_OBJECTS[64] = &object_001E87F0;
	___ADV02_OBJECTS[68] = &object_002145D4;
	___ADV02_OBJECTS[100] = &object_001F41C0; //Grass
	___ADV02_OBJECTS[20] = &object_001B5F40; //Torokko 
	___ADV02_OBJECTS[61] = &object_001B1A98; //OIslandDoor
	___ADV02_OBJECTS[60] = &object_001B0FE0; //OIslandDoor right
	___ADV02_OBJECTS[59] = &object_001B1648; //OIslandDoor left
	___ADV02_OBJECTS[39] = &object_001AF63C; //Monkey cage (full)
	___ADV02_OBJECTS[38] = &object_001AF0B0; //Monkey cage (bottom)
	___ADV02_OBJECTS[42] = &object_001AE9B0; //Monkey cage (bottom)
	___ADV02_OBJECTS[43] = &object_001AE70C; //Monkey cage (bottom)
	___ADV02_OBJECTS[10] = &object_001A79D0; //Item stand
	___ADV02_OBJECTS[12] = &object_001A7370; //Item stand
	___ADV02_OBJECTS[13] = &object_001A6B1C; //Item stand
	//___ADV02_OBJECTS[67] = &object_001DCF78; //Palm trees near Tails' workshop
	NJS_OBJECT **___ADV02MR02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV02MR02_OBJECTS");
	___ADV02MR02_OBJECTS[141] = &object_001615BC;
	___ADV02MR02_OBJECTS[142] = &object_00161B8C;
	___ADV02MR02_OBJECTS[143] = &object_00161FD8;
	___ADV02MR02_OBJECTS[144] = &object_0016221C;
	___ADV02MR02_OBJECTS[145] = &object_00162820;
	___ADV02MR02_OBJECTS[0] = &object_001A08EC;
	___ADV02MR02_OBJECTS[117] = &object_001A08EC;
	___ADV02MR02_OBJECTS[135] = &object_001A08EC;
	___ADV02MR02_OBJECTS[136] = &object_001A08EC;
	___ADV02MR02_OBJECTS[137] = &object_001A08EC;
	___ADV02MR02_OBJECTS[138] = &object_001A08EC;
	___ADV02MR02_OBJECTS[139] = &object_001A08EC;
	___ADV02MR02_OBJECTS[118] = &object_001A08EC;
	___ADV02MR02_OBJECTS[119] = &object_001A08EC;
	___ADV02MR02_OBJECTS[178] = &object_001A08EC;
	NJS_ACTION **___ADV02_ACTIONS = (NJS_ACTION **)GetProcAddress(handle, "___ADV02_ACTIONS");
	___ADV02_ACTIONS[0]->object = &object_0020C3B0;
	___ADV02_ACTIONS[11]->object = &object_001B5F40; //Torokko
	___ADV02_ACTIONS[29]->object = &object_001BBA04; //Ice Stone
	___ADV02_ACTIONS[32]->object = &object_001F41C0;
	___ADV02_ACTIONS[0]->motion = &animation_000862E8;
	___ADV02_ACTIONS[10]->object = &object_00201C18;
	___ADV02_ACTIONS[30]->object = &object_0020DC78;
	___ADV02_ACTIONS[21]->object = &object_001DDBFC; //Plane platform
	___ADV02_ACTIONS[9]->object = &object_001B2D5C; //Final Egg base door
	___ADV02_ACTIONS[17]->object = &object_001CCFBC; //OHiddenGate
	NJS_MODEL_SADX **___ADV02_MODELS = (NJS_MODEL_SADX **)GetProcAddress(handle, "___ADV02_MODELS");
	___ADV02_MODELS[12] = &attach_001B412C; //Echidna statue
}

extern "C"  __declspec(dllexport) void __cdecl OnFrame()
{
	HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
	//Evening and night materials Act 3
	if (CurrentLevel == 33 && CurrentAct == 2)
	{
		matlist_00208504Z[9].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504Z[10].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504Z[11].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504Z[12].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_002069C8[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_002069C8[6].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_002069C8[7].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504[9].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504[10].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504[11].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504[12].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_0020632C[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504Z[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504Z[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		matlist_00208504[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	}
	auto entity = CharObj1Ptrs[0];
	if (GameState != 16 && CurrentLevel == 33 && CurrentAct == 0)
	{
		if (GameMode == GameModes_Mission && CurrentCharacter == 5) collist_00015E60[LengthOfArray(collist_00015E60) - 1].Flags = 0x00000001; else collist_00015E60[LengthOfArray(collist_00015E60) - 1].Flags = 0x00000000;
		for (int q = 0; q < LengthOfArray(uv_00075EC0); q++)
		{
			uv_00075EC0[q].v = uv_00075EC0[q].v + 1;
		}
		if (uv_00075EC0[0].v >= -67)
		{
			for (int r1 = 0; r1 < LengthOfArray(uv_00075EC0); r1++)
			{
				uv_00075EC0[r1].v = uv_00075EC0_0[r1].v;
			}
		}
		for (int q2 = 0; q2 < LengthOfArray(uv_000755A4); q2++)
		{
			uv_000755A4[q2].v = uv_000755A4[q2].v - 1;
		}
		if (uv_000755A4[0].v <= -761)
		{
			for (int r2 = 0; r2 < LengthOfArray(uv_000755A4); r2++)
			{
				uv_000755A4[r2].v = uv_000755A4_0[r2].v;
			}
		}
		if (anim1 > 139) anim1 = 130;
		if (anim2 > 154) anim2 = 140;
		if (anim_sadx > 170) anim_sadx = 156;
		if (SADXStyleWater != 0) WriteData((int*)0x00532611, anim_sadx);
		matlist_0007523C[0].attr_texId = anim1;
		matlist_00057F04[0].attr_texId = anim1;
		matlist_00053510[0].attr_texId = anim2;
		matlist_00053010[0].attr_texId = anim2;
		matlist_00059768[0].attr_texId = anim2;
		matlist_000594C0[0].attr_texId = anim2;
		if (FramerateSetting < 2 && FrameCounter % 5 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
		{
			anim1++;
			anim2++;
			anim_sadx++;
		}
	}
	if (GameState != 16 && CurrentLevel == 33 && CurrentAct == 1)
	{
		if (anim3 > 89) anim3 = 76;
		matlist_000A3884[0].attr_texId = anim3;
		matlist_000A6CF8[1].attr_texId = anim3;
		matlist_000A6CF8[2].attr_texId = anim3;
		matlist_000A6CF8[3].attr_texId = anim3;
		if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2)
		{
			anim3++;
		}
	}
	if (GameState != 16 && CurrentLevel == 33 && CurrentAct == 2)
	{
		if (Camera_Data1 != nullptr && Camera_Data1->Position.z < -548 && Camera_Data1->Position.z > -1560 && Camera_Data1->Position.x < -80 && Camera_Data1->Position.x > -900)
		{
			InsideTemple = 1;
		}
		else InsideTemple = 0;
		if (CurrentCharacter == 7)  InsideTemple = 1; //208, 226
		if (Camera_Data1 != nullptr && Camera_Data1->Position.y < 300.0f && InsideTemple == 0)
		{
			if (CurrentFogLayer < -65.0f) CurrentFogLayer = CurrentFogLayer + 64.0f;
			if (CurrentFogLayer > -65.0f) CurrentFogLayer = -1.0f;
			if (CurrentFogDist < -3200.0f) CurrentFogDist = CurrentFogDist + 128.0f;
		}
		if (Camera_Data1 != nullptr && Camera_Data1->Position.y > 300.0f)
		{
			if (GetTimeOfDay() != 0)
			{
				if (CurrentFogLayer > -1000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
				if (CurrentFogDist > -14000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
			}
			if (GetTimeOfDay() == 0)
			{
				if (CurrentFogLayer > -4000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
				if (CurrentFogDist > -16000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
			}
		}
		if (InsideTemple == 1)
		{
			if (GetTimeOfDay() != 0)
			{
				if (CurrentFogLayer > -1000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
				if (CurrentFogDist > -14000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
			}
			if (GetTimeOfDay() == 0)
			{
				if (CurrentFogLayer > -4000.0f) CurrentFogLayer = CurrentFogLayer - 64.0f;
				if (CurrentFogDist > -16000.0f) CurrentFogDist = CurrentFogDist - 128.0f;
			}
		}
		for (int q6 = 0; q6 < LengthOfArray(uv_00162054); q6++) { uv_00162054[q6].v++; }
		if (uv_00162054[0].v > 255)
		{
			for (int r3 = 0; r3 < LengthOfArray(uv_00162054); r3++)
			{
				uv_00162054[r3].v = uv_00162054_0[r3].v;
			}
		}
		for (int q7 = 0; q7 < LengthOfArray(uv_001622D8); q7++) { uv_001622D8[q7].v++; }
		if (uv_001622D8[0].v > 510)
		{
			for (int r4 = 0; r4 < LengthOfArray(uv_001622D8); r4++)
			{
				uv_001622D8[r4].v = uv_001622D8_0[r4].v;
			}
		}
		for (int q3 = 0; q3 < LengthOfArray(uv_00160D9C); q3++) { uv_00160D9C[q3].v--; }
		if (uv_00160D9C[0].v < -4)
		{
			for (int r5 = 0; r5 < LengthOfArray(uv_00160D9C); r5++)
			{
				uv_00160D9C[r5].v = uv_00160D9C_0[r5].v;
			}
		}
		for (int q4 = 0; q4 < LengthOfArray(uv_0016166C); q4++) { uv_0016166C[q4].v++; }
		if (uv_0016166C[0].v > 179)
		{
			for (int r6 = 0; r6 < LengthOfArray(uv_0016166C); r6++)
			{
				uv_0016166C[r6].v = uv_0016166C_0[r6].v;
			}
		}
		for (int q5 = 0; q5 < LengthOfArray(uv_00161C18); q5++) { uv_00161C18[q5].v++; }
		if (uv_00161C18[0].v > -473)
		{
			for (int r7 = 0; r7 < LengthOfArray(uv_00161C18); r7++)
			{
				uv_00161C18[r7].v = uv_00161C18_0[r7].v;
			}
		}
	}
}
extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };