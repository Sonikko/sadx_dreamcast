#include "stdafx.h"
#include "SADXModLoader.h"
#include "button.h"
#include "ADV_MR00 (Station area).h"
#include "ADV_MR01 (Angel Island).h"
#include "ADV_MR02 (Jungle area).h"
#include "MetalSonic.h"
#include "ADV_MR03 (Final Egg entrance).h"
#include "OFinalEgg.h"
#include "MR_train.h"
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
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);

NJS_TEXNAME textures_mrtrain[31];
NJS_TEXLIST texlist_mrtrain = { arrayptrandlength(textures_mrtrain) };
static bool InsideTemple = 0;

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	for (int i = 0; i < 3; i++)
	{
		MR1FogDay[i].Distance = 9000.0f;
		MR1FogDay[i].Layer = 3500.0f;
		MR1FogEvening[i].Distance = 9000.0f;
		MR1FogEvening[i].Layer = 3500.0f;
		MR1FogNight[i].Distance = 9000.0f;
		MR1FogNight[i].Layer = 3500.0f;
		MR2FogDay[i].Layer = 3000.0f;
		MR2FogDay[i].Distance = 9000.0f;
		MR2FogEvening[i].Distance = 9000.0f;
		MR2FogEvening[i].Layer = 3000.0f;
		MR3FogDay[i].Layer = -5000.0f;
		MR3FogDay[i].Distance = -10000.0f;
		MR3FogDay[i].Color = 0xFF8F9672;
		MR3FogNight[i].Distance = -12000;
		MR3FogNight[i].Color = 0xFF000F53;
		MR3FogNight[i].Layer = -5000;
		MR1DrawDist[i].Maximum = -12000.0f;
		MR3DrawDist[i].Maximum = -12000.0f;
		//Either some of these are shared for night, or I'm too dumb to understand the disassembly
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
	___ADV02_OBJECTS[68] = &object_002145D4;
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
	___ADV02_ACTIONS[0]->motion = &animation_000862E8;
	___ADV02_ACTIONS[10]->object = &object_00201C18;
}

extern "C"  __declspec(dllexport) void __cdecl OnFrame()
{
	auto entity = CharObj1Ptrs[0];
	HMODULE handle = GetModuleHandle(L"ADV02MODELS");
	if (GameState == 15 && CurrentLevel == 33 && CurrentAct == 0)
	{
		if (FrameCounter % 30 == 1) matlist_0007523C[0].attr_texId = 133;
		if (FrameCounter % 30 == 4) matlist_0007523C[0].attr_texId = 134;
		if (FrameCounter % 30 == 7) matlist_0007523C[0].attr_texId = 135;
		if (FrameCounter % 30 == 10) matlist_0007523C[0].attr_texId = 136;
		if (FrameCounter % 30 == 13) matlist_0007523C[0].attr_texId = 137;
		if (FrameCounter % 30 == 16) matlist_0007523C[0].attr_texId = 138;
		if (FrameCounter % 30 == 19) matlist_0007523C[0].attr_texId = 139;
		if (FrameCounter % 30 == 22) matlist_0007523C[0].attr_texId = 140;
		if (FrameCounter % 30 == 25) matlist_0007523C[0].attr_texId = 141;
		if (FrameCounter % 30 == 28) matlist_0007523C[0].attr_texId = 142;
		/*if (FrameCounter % 60 == 0) matlist_00053510[0].attr_texId = 143;
		if (FrameCounter % 60 == 4) matlist_00053510[0].attr_texId = 144;
		if (FrameCounter % 60 == 8) matlist_00053510[0].attr_texId = 145;
		if (FrameCounter % 60 == 12) matlist_00053510[0].attr_texId = 146;
		if (FrameCounter % 60 == 16) matlist_00053510[0].attr_texId = 147;
		if (FrameCounter % 60 == 20) matlist_00053510[0].attr_texId = 148;
		if (FrameCounter % 60 == 24) matlist_00053510[0].attr_texId = 149;
		if (FrameCounter % 60 == 28) matlist_00053510[0].attr_texId = 150;
		if (FrameCounter % 60 == 32) matlist_00053510[0].attr_texId = 151;
		if (FrameCounter % 60 == 36) matlist_00053510[0].attr_texId = 152;
		if (FrameCounter % 60 == 40) matlist_00053510[0].attr_texId = 153;
		if (FrameCounter % 60 == 44) matlist_00053510[0].attr_texId = 154;
		if (FrameCounter % 60 == 48) matlist_00053510[0].attr_texId = 155;
		if (FrameCounter % 60 == 52) matlist_00053510[0].attr_texId = 156;
		if (FrameCounter % 60 == 56) matlist_00053510[0].attr_texId = 157;*/
	}
	if (GameState == 15 && CurrentLevel == 33 && CurrentAct == 0)
	{
		for (int q = 0; q < LengthOfArray(uv_00075EC0); q++)
		{
			uv_00075EC0[q].v = uv_00075EC0[q].v + 1;

		}
		for (int q2 = 0; q2 < LengthOfArray(uv_000755A4); q2++)
		{
			uv_000755A4[q2].v = uv_000755A4[q2].v - 1;

		}
	}
	if (GameState == 15 && CurrentLevel == 33 && CurrentAct == 1)
	{
		if (FrameCounter % 42 == 1) {matlist_000A3884[0].attr_texId = 76; matlist_000A6CF8[1].attr_texId = 76; matlist_000A6CF8[2].attr_texId = 76; matlist_000A6CF8[3].attr_texId = 76;
		}
		if (FrameCounter % 42 == 4) {matlist_000A3884[0].attr_texId = 77; matlist_000A6CF8[1].attr_texId = 77; matlist_000A6CF8[2].attr_texId = 77; matlist_000A6CF8[3].attr_texId = 77;
		}
		if (FrameCounter % 42 == 7) {matlist_000A3884[0].attr_texId = 78; matlist_000A6CF8[1].attr_texId = 78; matlist_000A6CF8[2].attr_texId = 78; matlist_000A6CF8[3].attr_texId = 78;
		}
		if (FrameCounter % 42 == 10) {matlist_000A3884[0].attr_texId = 79; matlist_000A6CF8[1].attr_texId = 79; matlist_000A6CF8[2].attr_texId = 79; matlist_000A6CF8[3].attr_texId = 79;
		}
		if (FrameCounter % 42 == 13) {matlist_000A3884[0].attr_texId = 80; matlist_000A6CF8[1].attr_texId = 80; matlist_000A6CF8[2].attr_texId = 80; matlist_000A6CF8[3].attr_texId = 80;
		}
		if (FrameCounter % 42 == 16) {matlist_000A3884[0].attr_texId = 81; matlist_000A6CF8[1].attr_texId = 81; matlist_000A6CF8[2].attr_texId = 81; matlist_000A6CF8[3].attr_texId = 81;
		}
		if (FrameCounter % 42 == 19) {matlist_000A3884[0].attr_texId = 82; matlist_000A6CF8[1].attr_texId = 82; matlist_000A6CF8[2].attr_texId = 82; matlist_000A6CF8[3].attr_texId = 82;
		}
		if (FrameCounter % 42 == 22) {matlist_000A3884[0].attr_texId = 83; matlist_000A6CF8[1].attr_texId = 83; matlist_000A6CF8[2].attr_texId = 83; matlist_000A6CF8[3].attr_texId = 83;
		}
		if (FrameCounter % 42 == 25) {matlist_000A3884[0].attr_texId = 84; matlist_000A6CF8[1].attr_texId = 84; matlist_000A6CF8[2].attr_texId = 84; matlist_000A6CF8[3].attr_texId = 84;
		}
		if (FrameCounter % 42 == 28) {matlist_000A3884[0].attr_texId = 85; matlist_000A6CF8[1].attr_texId = 85; matlist_000A6CF8[2].attr_texId = 85; matlist_000A6CF8[3].attr_texId = 85;
		}
		if (FrameCounter % 42 == 31) {matlist_000A3884[0].attr_texId = 86; matlist_000A6CF8[1].attr_texId = 86; matlist_000A6CF8[2].attr_texId = 86; matlist_000A6CF8[3].attr_texId = 86;
		}
		if (FrameCounter % 42 == 34) {matlist_000A3884[0].attr_texId = 87; matlist_000A6CF8[1].attr_texId = 87; matlist_000A6CF8[2].attr_texId = 87; matlist_000A6CF8[3].attr_texId = 87;
		}
		if (FrameCounter % 42 == 37) {matlist_000A3884[0].attr_texId = 88; matlist_000A6CF8[1].attr_texId = 88; matlist_000A6CF8[2].attr_texId = 88; matlist_000A6CF8[3].attr_texId = 88;
		}
		if (FrameCounter % 42 == 40) {matlist_000A3884[0].attr_texId = 89; matlist_000A6CF8[1].attr_texId = 89; matlist_000A6CF8[2].attr_texId = 89; matlist_000A6CF8[3].attr_texId = 89;
		}
	}
	if (GameState == 15 && CurrentLevel == 33 && CurrentAct == 2)
	{
		if (entity != nullptr && entity->Position.z < -725 && entity->Position.z > -1560 && entity->Position.x < -100 && entity->Position.x > -900)
		{
			InsideTemple = 1;
		}
		else InsideTemple = 0;
		if (entity != nullptr && entity->Position.y < 300.0f && InsideTemple == 0)
		{
				if (CurrentFogLayer < -350.0f) CurrentFogLayer = CurrentFogLayer + 32.0f;
				if (CurrentFogDist < -2200.0f) CurrentFogDist = CurrentFogDist + 32.0f;
		}
		if (entity != nullptr && entity->Position.y > 300.0f)
		{
			if (CurrentFogLayer > -5000.0f) CurrentFogLayer = CurrentFogLayer - 16.0f;
			if (CurrentFogDist > -12000.0f) CurrentFogDist = CurrentFogDist - 32.0f;
		}
		if (InsideTemple == 1)
		{
			if (CurrentFogLayer > -5000.0f) CurrentFogLayer = CurrentFogLayer - 16.0f;
			if (CurrentFogDist > -12000.0f) CurrentFogDist = CurrentFogDist - 32.0f;
		}
		for (int q6 = 0; q6 < LengthOfArray(uv_00162054); q6++) {uv_00162054[q6].v++; }
		for (int q7 = 0; q7 < LengthOfArray(uv_001622D8); q7++) {uv_001622D8[q7].v++; }
		for (int q3 = 0; q3 < LengthOfArray(uv_00160D9C); q3++)	{uv_00160D9C[q3].v--; }
		for (int q4 = 0; q4 < LengthOfArray(uv_0016166C); q4++)	{uv_0016166C[q4].v++; }
		for (int q5 = 0; q5 < LengthOfArray(uv_00161C18); q5++) {uv_00161C18[q5].v++; }
	}
}
	

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };