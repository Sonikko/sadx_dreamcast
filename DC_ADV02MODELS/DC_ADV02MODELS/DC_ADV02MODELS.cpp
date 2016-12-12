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

NJS_TEXNAME textures_mrtrain[31];
NJS_TEXLIST texlist_mrtrain = { arrayptrandlength(textures_mrtrain) };

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
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
	for (int i = 0; i < 3; i++)
	{
		MR1FogDay[i].Distance = 9000.0f;
		MR1FogDay[i].Layer = 3500.0f;
		MR2FogDay[i].Distance = 9000.0f;
		MR2FogDay[i].Layer = 3000.0f;
		MR3FogDay[i].Toggle = 0;
		MR1FogEvening[i].Distance = 9000.0f;
		MR1FogEvening[i].Layer = 3500.0f;
		MR2FogEvening[i].Distance = 9000.0f;
		MR2FogEvening[i].Layer = 3000.0f;
		MR1FogNight[i].Distance = 9000.0f;
		MR1FogNight[i].Layer = 3500.0f;
		MR3FogNight[i].Distance = 9000; 
		MR3FogNight[i].Layer = 3500;
		MR1DrawDist[i].Maximum = -12000.0f;
		MR3DrawDist[i].Maximum = -12000.0f;
		//Either some of these are shared for night, or I'm too dumb to understand the disassembly
	}
	HMODULE handle = GetModuleHandle(L"ADV02MODELS");
	NJS_TEXLIST **___ADV002_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle, "___ADV02_TEXLISTS");
	___ADV002_TEXLISTS[4] = &texlist_mrtrain;
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
		if (FrameCounter % 128 == 2)
		{
			matlist_00075E50[0].attr_texId = 158;
			matlist_000753C4[0].attr_texId = 221;
		}
		if (FrameCounter % 128 == 4)
		{
			matlist_00075E50[0].attr_texId = 159;
			matlist_000753C4[0].attr_texId = 222;
		}
		if (FrameCounter % 128 == 6)
		{
			matlist_00075E50[0].attr_texId = 160;
			matlist_000753C4[0].attr_texId = 223;
		}
		if (FrameCounter % 128 == 8)
		{
			matlist_00075E50[0].attr_texId = 161;
			matlist_000753C4[0].attr_texId = 224;
		}
		if (FrameCounter % 128 == 10)
		{
			matlist_00075E50[0].attr_texId = 162;
			matlist_000753C4[0].attr_texId = 225;
		}
		if (FrameCounter % 128 == 12) 
		{
			matlist_00075E50[0].attr_texId = 163;
			matlist_000753C4[0].attr_texId = 226;
		}
		if (FrameCounter % 128 == 14) { matlist_00075E50[0].attr_texId = 164; matlist_000753C4[0].attr_texId = 227;}
		if (FrameCounter % 128 == 16) {matlist_00075E50[0].attr_texId = 165; matlist_000753C4[0].attr_texId = 228;}
		if (FrameCounter % 128 == 18) {matlist_00075E50[0].attr_texId = 166; matlist_000753C4[0].attr_texId = 229;
		}
		if (FrameCounter % 128 == 20) {matlist_00075E50[0].attr_texId = 167; matlist_000753C4[0].attr_texId = 230;
		}
		if (FrameCounter % 128 == 22) {matlist_00075E50[0].attr_texId = 168; matlist_000753C4[0].attr_texId = 231;
		}
		if (FrameCounter % 128 == 24) { matlist_00075E50[0].attr_texId = 169; matlist_000753C4[0].attr_texId = 232; }
		if (FrameCounter % 128 == 26) { matlist_00075E50[0].attr_texId = 170; matlist_000753C4[0].attr_texId = 233; }
		if (FrameCounter % 128 == 28) {
			matlist_00075E50[0].attr_texId = 171; matlist_000753C4[0].attr_texId = 234;
		}
		if (FrameCounter % 128 == 30) {
			matlist_00075E50[0].attr_texId = 172; matlist_000753C4[0].attr_texId = 235;
		}
		if (FrameCounter % 128 == 32) {
			matlist_00075E50[0].attr_texId = 173; matlist_000753C4[0].attr_texId = 236;
		}
		if (FrameCounter % 128 == 34) {
			matlist_00075E50[0].attr_texId = 174; matlist_000753C4[0].attr_texId = 237;
		}
		if (FrameCounter % 128 == 36) {
			matlist_00075E50[0].attr_texId = 175; matlist_000753C4[0].attr_texId = 238;
		}
		if (FrameCounter % 128 == 38) {
			matlist_00075E50[0].attr_texId = 176; matlist_000753C4[0].attr_texId = 239;
		}
		if (FrameCounter % 128 == 40) {
			matlist_00075E50[0].attr_texId = 177; matlist_000753C4[0].attr_texId = 240;
		}
		if (FrameCounter % 128 == 42) {
			matlist_00075E50[0].attr_texId = 178; matlist_000753C4[0].attr_texId = 241;
		}
		if (FrameCounter % 128 == 44) {
			matlist_00075E50[0].attr_texId = 179; matlist_000753C4[0].attr_texId = 242;
		}
		if (FrameCounter % 128 == 46) {
			matlist_00075E50[0].attr_texId = 180; matlist_000753C4[0].attr_texId = 243;
		}
		if (FrameCounter % 128 == 48) {
			matlist_00075E50[0].attr_texId = 181; matlist_000753C4[0].attr_texId = 244;
		}
		if (FrameCounter % 128 == 50) {
			matlist_00075E50[0].attr_texId = 182; matlist_000753C4[0].attr_texId = 245;
		}
		if (FrameCounter % 128 == 52) {
			matlist_00075E50[0].attr_texId = 183; matlist_000753C4[0].attr_texId = 246;
		}
		if (FrameCounter % 128 == 54) {
			matlist_00075E50[0].attr_texId = 184; matlist_000753C4[0].attr_texId = 247;
		}
		if (FrameCounter % 128 == 56) {
			matlist_00075E50[0].attr_texId = 185; matlist_000753C4[0].attr_texId = 248;
		}
		if (FrameCounter % 128 == 58) {
			matlist_00075E50[0].attr_texId = 186; matlist_000753C4[0].attr_texId = 249;
		}
		if (FrameCounter % 128 == 60) {
			matlist_00075E50[0].attr_texId = 187; matlist_000753C4[0].attr_texId = 250;
		}
		if (FrameCounter % 128 == 62) {
			matlist_00075E50[0].attr_texId = 188; matlist_000753C4[0].attr_texId = 251;
		}
		if (FrameCounter % 128 == 64) {
			matlist_00075E50[0].attr_texId = 189; matlist_000753C4[0].attr_texId = 252;
		}
		if (FrameCounter % 128 == 66) {
			matlist_00075E50[0].attr_texId = 190; matlist_000753C4[0].attr_texId = 253;
		}
		if (FrameCounter % 128 == 68) {
			matlist_00075E50[0].attr_texId = 191; matlist_000753C4[0].attr_texId = 254;
		}
		if (FrameCounter % 128 == 70) {
			matlist_00075E50[0].attr_texId = 192; matlist_000753C4[0].attr_texId = 255;
		}
		if (FrameCounter % 128 == 72) {
			matlist_00075E50[0].attr_texId = 193; matlist_000753C4[0].attr_texId = 256;
		}
		if (FrameCounter % 128 == 74) {
			matlist_00075E50[0].attr_texId = 194; matlist_000753C4[0].attr_texId = 257;
		}
		if (FrameCounter % 128 == 76) {
			matlist_00075E50[0].attr_texId = 195; matlist_000753C4[0].attr_texId = 258;
		}
		if (FrameCounter % 128 == 78) {
			matlist_00075E50[0].attr_texId = 196; matlist_000753C4[0].attr_texId = 259;
		}
		if (FrameCounter % 128 == 80) {
			matlist_00075E50[0].attr_texId = 197; matlist_000753C4[0].attr_texId = 260;
		}
		if (FrameCounter % 128 == 82) {
			matlist_00075E50[0].attr_texId = 198; matlist_000753C4[0].attr_texId = 261;
		}
		if (FrameCounter % 128 == 84) {
			matlist_00075E50[0].attr_texId = 199; matlist_000753C4[0].attr_texId = 262;
		}
		if (FrameCounter % 128 == 86) {
			matlist_00075E50[0].attr_texId = 200; matlist_000753C4[0].attr_texId = 263;
		}
		if (FrameCounter % 128 == 88) {
			matlist_00075E50[0].attr_texId = 201; matlist_000753C4[0].attr_texId = 264;
		}
		if (FrameCounter % 128 == 90) {
			matlist_00075E50[0].attr_texId = 202; matlist_000753C4[0].attr_texId = 265;
		}
		if (FrameCounter % 128 == 92) {
			matlist_00075E50[0].attr_texId = 203; matlist_000753C4[0].attr_texId = 266;
		}
		if (FrameCounter % 128 == 94) {
			matlist_00075E50[0].attr_texId = 204; matlist_000753C4[0].attr_texId = 267;
		}
		if (FrameCounter % 128 == 96) {
			matlist_00075E50[0].attr_texId = 205; matlist_000753C4[0].attr_texId = 268;
		}
		if (FrameCounter % 128 == 98) {
			matlist_00075E50[0].attr_texId = 206; matlist_000753C4[0].attr_texId = 269;
		}
		if (FrameCounter % 128 == 100) {
			matlist_00075E50[0].attr_texId = 207; matlist_000753C4[0].attr_texId = 270;
		}
		if (FrameCounter % 128 == 102) {matlist_00075E50[0].attr_texId = 208; matlist_000753C4[0].attr_texId = 271;
		}
		if (FrameCounter % 128 == 104) {matlist_00075E50[0].attr_texId = 209; matlist_000753C4[0].attr_texId = 272;
		}
		if (FrameCounter % 128 == 106) {matlist_00075E50[0].attr_texId = 210; matlist_000753C4[0].attr_texId = 273;
		}
		if (FrameCounter % 128 == 108) {matlist_00075E50[0].attr_texId = 211; matlist_000753C4[0].attr_texId = 274;
		}
		if (FrameCounter % 128 == 110) {matlist_00075E50[0].attr_texId = 212; matlist_000753C4[0].attr_texId = 275;
		}
		if (FrameCounter % 128 == 112) {matlist_00075E50[0].attr_texId = 213; matlist_000753C4[0].attr_texId = 276;
		}
		if (FrameCounter % 128 == 114) {matlist_00075E50[0].attr_texId = 214; matlist_000753C4[0].attr_texId = 277;
		}
		if (FrameCounter % 128 == 116) {matlist_00075E50[0].attr_texId = 215; matlist_000753C4[0].attr_texId = 278;
		}
		if (FrameCounter % 128 == 118) {matlist_00075E50[0].attr_texId = 216; matlist_000753C4[0].attr_texId = 279;
		}
		if (FrameCounter % 128 == 120) {matlist_00075E50[0].attr_texId = 217; matlist_000753C4[0].attr_texId = 280;
		}
		if (FrameCounter % 128 == 122) {matlist_00075E50[0].attr_texId = 218; matlist_000753C4[0].attr_texId = 281;
		}
		if (FrameCounter % 128 == 124) {matlist_00075E50[0].attr_texId = 219; matlist_000753C4[0].attr_texId = 282;
		}
		if (FrameCounter % 128 == 126) {matlist_00075E50[0].attr_texId = 220; matlist_000753C4[0].attr_texId = 283;
		}
		if (FrameCounter % 128 == 0) {matlist_00075E50[0].attr_texId = 130; matlist_000753C4[0].attr_texId = 100;
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
	NJS_OBJECT **___ADV02MR02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV02MR02_OBJECTS");
	if (GameState == 15 && CurrentLevel == 33 && CurrentAct == 2)
	{
		if (FrameCounter % 128 == 2) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 125;
		if (FrameCounter % 128 == 4) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 126;
		if (FrameCounter % 128 == 6) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 127;
		if (FrameCounter % 128 == 8) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 128;
		if (FrameCounter % 128 == 10) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 129;
		if (FrameCounter % 128 == 12) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 130;
		if (FrameCounter % 128 == 14) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 131;
		if (FrameCounter % 128 == 16) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 132;
		if (FrameCounter % 128 == 18) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 133;
		if (FrameCounter % 128 == 20) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 134;
		if (FrameCounter % 128 == 22) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 135;
		if (FrameCounter % 128 == 24) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 136;
		if (FrameCounter % 128 == 26) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 137;
		if (FrameCounter % 128 == 28) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 138;
		if (FrameCounter % 128 == 30) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 139;
		if (FrameCounter % 128 == 32) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 140;
		if (FrameCounter % 128 == 34) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 141;
		if (FrameCounter % 128 == 36) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 142;
		if (FrameCounter % 128 == 38) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 143;
		if (FrameCounter % 128 == 40) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 144;
		if (FrameCounter % 128 == 42) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 145;
		if (FrameCounter % 128 == 44) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 146;
		if (FrameCounter % 128 == 46) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 147;
		if (FrameCounter % 128 == 48) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 148;
		if (FrameCounter % 128 == 50) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 149;
		if (FrameCounter % 128 == 52) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 150;
		if (FrameCounter % 128 == 54) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 151;
		if (FrameCounter % 128 == 56) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 152;
		if (FrameCounter % 128 == 58) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 153;
		if (FrameCounter % 128 == 60) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 154;
		if (FrameCounter % 128 == 62) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 155;
		if (FrameCounter % 128 == 64) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 156;
		if (FrameCounter % 128 == 66) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 157;
		if (FrameCounter % 128 == 68) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 158;
		if (FrameCounter % 128 == 70) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 159;
		if (FrameCounter % 128 == 72) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 160;
		if (FrameCounter % 128 == 74) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 161;
		if (FrameCounter % 128 == 76) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 162;
		if (FrameCounter % 128 == 78) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 163;
		if (FrameCounter % 128 == 80) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 164;
		if (FrameCounter % 128 == 82) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 165;
		if (FrameCounter % 128 == 84) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 166;
		if (FrameCounter % 128 == 86) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 167;
		if (FrameCounter % 128 == 88) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 168;
		if (FrameCounter % 128 == 90) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 169;
		if (FrameCounter % 128 == 92) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 170;
		if (FrameCounter % 128 == 94) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 171;
		if (FrameCounter % 128 == 96) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 172;
		if (FrameCounter % 128 == 98) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 173;
		if (FrameCounter % 128 == 100) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 174;
		if (FrameCounter % 128 == 102) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 175;
		if (FrameCounter % 128 == 104) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 176;
		if (FrameCounter % 128 == 106) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 177;
		if (FrameCounter % 128 == 108) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 178;
		if (FrameCounter % 128 == 110) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 179;
		if (FrameCounter % 128 == 112) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 180;
		if (FrameCounter % 128 == 114) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 181;
		if (FrameCounter % 128 == 116) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 182;
		if (FrameCounter % 128 == 118) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 183;
		if (FrameCounter % 128 == 120) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 184;
		if (FrameCounter % 128 == 122) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 185;
		if (FrameCounter % 128 == 124) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 186;
		if (FrameCounter % 128 == 126) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 187;
		if (FrameCounter % 128 == 0) ___ADV02MR02_OBJECTS[145]->basicdxmodel->mats[1].attr_texId = 188;
		if (FrameCounter % 128 == 2) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 125;
		if (FrameCounter % 128 == 4) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 126;
		if (FrameCounter % 128 == 6) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 127;
		if (FrameCounter % 128 == 8) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 128;
		if (FrameCounter % 128 == 10) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 129;
		if (FrameCounter % 128 == 12) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 130;
		if (FrameCounter % 128 == 14) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 131;
		if (FrameCounter % 128 == 16) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 132;
		if (FrameCounter % 128 == 18) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 133;
		if (FrameCounter % 128 == 20) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 134;
		if (FrameCounter % 128 == 22) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 135;
		if (FrameCounter % 128 == 24) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 136;
		if (FrameCounter % 128 == 26) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 137;
		if (FrameCounter % 128 == 28) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 138;
		if (FrameCounter % 128 == 30) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 139;
		if (FrameCounter % 128 == 32) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 140;
		if (FrameCounter % 128 == 34) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 141;
		if (FrameCounter % 128 == 36) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 142;
		if (FrameCounter % 128 == 38) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 143;
		if (FrameCounter % 128 == 40) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 144;
		if (FrameCounter % 128 == 42) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 145;
		if (FrameCounter % 128 == 44) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 146;
		if (FrameCounter % 128 == 46) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 147;
		if (FrameCounter % 128 == 48) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 148;
		if (FrameCounter % 128 == 50) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 149;
		if (FrameCounter % 128 == 52) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 150;
		if (FrameCounter % 128 == 54) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 151;
		if (FrameCounter % 128 == 56) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 152;
		if (FrameCounter % 128 == 58) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 153;
		if (FrameCounter % 128 == 60) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 154;
		if (FrameCounter % 128 == 62) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 155;
		if (FrameCounter % 128 == 64) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 156;
		if (FrameCounter % 128 == 66) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 157;
		if (FrameCounter % 128 == 68) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 158;
		if (FrameCounter % 128 == 70) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 159;
		if (FrameCounter % 128 == 72) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 160;
		if (FrameCounter % 128 == 74) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 161;
		if (FrameCounter % 128 == 76) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 162;
		if (FrameCounter % 128 == 78) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 163;
		if (FrameCounter % 128 == 80) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 164;
		if (FrameCounter % 128 == 82) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 165;
		if (FrameCounter % 128 == 84) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 166;
		if (FrameCounter % 128 == 86) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 167;
		if (FrameCounter % 128 == 88) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 168;
		if (FrameCounter % 128 == 90) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 169;
		if (FrameCounter % 128 == 92) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 170;
		if (FrameCounter % 128 == 94) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 171;
		if (FrameCounter % 128 == 96) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 172;
		if (FrameCounter % 128 == 98) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 173;
		if (FrameCounter % 128 == 100) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 174;
		if (FrameCounter % 128 == 102) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 175;
		if (FrameCounter % 128 == 104) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 176;
		if (FrameCounter % 128 == 106) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 177;
		if (FrameCounter % 128 == 108) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 178;
		if (FrameCounter % 128 == 110) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 179;
		if (FrameCounter % 128 == 112) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 180;
		if (FrameCounter % 128 == 114) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 181;
		if (FrameCounter % 128 == 116) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 182;
		if (FrameCounter % 128 == 118) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 183;
		if (FrameCounter % 128 == 120) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 184;
		if (FrameCounter % 128 == 122) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 185;
		if (FrameCounter % 128 == 124) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 186;
		if (FrameCounter % 128 == 126) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 187;
		if (FrameCounter % 128 == 0) ___ADV02MR02_OBJECTS[144]->basicdxmodel->mats[1].attr_texId = 188;
		if (FrameCounter % 128 == 2) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 125;
		if (FrameCounter % 128 == 4) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 126;
		if (FrameCounter % 128 == 6) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 127;
		if (FrameCounter % 128 == 8) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 128;
		if (FrameCounter % 128 == 10) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 129;
		if (FrameCounter % 128 == 12) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 130;
		if (FrameCounter % 128 == 14) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 131;
		if (FrameCounter % 128 == 16) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 132;
		if (FrameCounter % 128 == 18) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 133;
		if (FrameCounter % 128 == 20) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 134;
		if (FrameCounter % 128 == 22) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 135;
		if (FrameCounter % 128 == 24) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 136;
		if (FrameCounter % 128 == 26) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 137;
		if (FrameCounter % 128 == 28) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 138;
		if (FrameCounter % 128 == 30) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 139;
		if (FrameCounter % 128 == 32) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 140;
		if (FrameCounter % 128 == 34) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 141;
		if (FrameCounter % 128 == 36) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 142;
		if (FrameCounter % 128 == 38) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 143;
		if (FrameCounter % 128 == 40) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 144;
		if (FrameCounter % 128 == 42) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 145;
		if (FrameCounter % 128 == 44) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 146;
		if (FrameCounter % 128 == 46) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 147;
		if (FrameCounter % 128 == 48) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 148;
		if (FrameCounter % 128 == 50) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 149;
		if (FrameCounter % 128 == 52) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 150;
		if (FrameCounter % 128 == 54) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 151;
		if (FrameCounter % 128 == 56) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 152;
		if (FrameCounter % 128 == 58) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 153;
		if (FrameCounter % 128 == 60) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 154;
		if (FrameCounter % 128 == 62) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 155;
		if (FrameCounter % 128 == 64) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 156;
		if (FrameCounter % 128 == 66) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 157;
		if (FrameCounter % 128 == 68) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 158;
		if (FrameCounter % 128 == 70) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 159;
		if (FrameCounter % 128 == 72) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 160;
		if (FrameCounter % 128 == 74) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 161;
		if (FrameCounter % 128 == 76) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 162;
		if (FrameCounter % 128 == 78) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 163;
		if (FrameCounter % 128 == 80) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 164;
		if (FrameCounter % 128 == 82) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 165;
		if (FrameCounter % 128 == 84) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 166;
		if (FrameCounter % 128 == 86) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 167;
		if (FrameCounter % 128 == 88) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 168;
		if (FrameCounter % 128 == 90) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 169;
		if (FrameCounter % 128 == 92) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 170;
		if (FrameCounter % 128 == 94) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 171;
		if (FrameCounter % 128 == 96) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 172;
		if (FrameCounter % 128 == 98) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 173;
		if (FrameCounter % 128 == 100) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 174;
		if (FrameCounter % 128 == 102) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 175;
		if (FrameCounter % 128 == 104) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 176;
		if (FrameCounter % 128 == 106) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 177;
		if (FrameCounter % 128 == 108) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 178;
		if (FrameCounter % 128 == 110) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 179;
		if (FrameCounter % 128 == 112) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 180;
		if (FrameCounter % 128 == 114) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 181;
		if (FrameCounter % 128 == 116) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 182;
		if (FrameCounter % 128 == 118) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 183;
		if (FrameCounter % 128 == 120) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 184;
		if (FrameCounter % 128 == 122) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 185;
		if (FrameCounter % 128 == 124) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 186;
		if (FrameCounter % 128 == 126) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 187;
		if (FrameCounter % 128 == 0) ___ADV02MR02_OBJECTS[143]->basicdxmodel->mats[0].attr_texId = 188;
		if (FrameCounter % 128 == 2) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 125;
		if (FrameCounter % 128 == 4) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 126;
		if (FrameCounter % 128 == 6) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 127;
		if (FrameCounter % 128 == 8) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 128;
		if (FrameCounter % 128 == 10) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 129;
		if (FrameCounter % 128 == 12) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 130;
		if (FrameCounter % 128 == 14) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 131;
		if (FrameCounter % 128 == 16) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 132;
		if (FrameCounter % 128 == 18) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 133;
		if (FrameCounter % 128 == 20) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 134;
		if (FrameCounter % 128 == 22) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 135;
		if (FrameCounter % 128 == 24) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 136;
		if (FrameCounter % 128 == 26) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 137;
		if (FrameCounter % 128 == 28) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 138;
		if (FrameCounter % 128 == 30) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 139;
		if (FrameCounter % 128 == 32) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 140;
		if (FrameCounter % 128 == 34) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 141;
		if (FrameCounter % 128 == 36) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 142;
		if (FrameCounter % 128 == 38) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 143;
		if (FrameCounter % 128 == 40) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 144;
		if (FrameCounter % 128 == 42) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 145;
		if (FrameCounter % 128 == 44) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 146;
		if (FrameCounter % 128 == 46) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 147;
		if (FrameCounter % 128 == 48) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 148;
		if (FrameCounter % 128 == 50) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 149;
		if (FrameCounter % 128 == 52) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 150;
		if (FrameCounter % 128 == 54) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 151;
		if (FrameCounter % 128 == 56) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 152;
		if (FrameCounter % 128 == 58) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 153;
		if (FrameCounter % 128 == 60) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 154;
		if (FrameCounter % 128 == 62) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 155;
		if (FrameCounter % 128 == 64) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 156;
		if (FrameCounter % 128 == 66) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 157;
		if (FrameCounter % 128 == 68) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 158;
		if (FrameCounter % 128 == 70) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 159;
		if (FrameCounter % 128 == 72) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 160;
		if (FrameCounter % 128 == 74) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 161;
		if (FrameCounter % 128 == 76) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 162;
		if (FrameCounter % 128 == 78) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 163;
		if (FrameCounter % 128 == 80) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 164;
		if (FrameCounter % 128 == 82) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 165;
		if (FrameCounter % 128 == 84) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 166;
		if (FrameCounter % 128 == 86) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 167;
		if (FrameCounter % 128 == 88) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 168;
		if (FrameCounter % 128 == 90) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 169;
		if (FrameCounter % 128 == 92) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 170;
		if (FrameCounter % 128 == 94) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 171;
		if (FrameCounter % 128 == 96) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 172;
		if (FrameCounter % 128 == 98) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 173;
		if (FrameCounter % 128 == 100) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 174;
		if (FrameCounter % 128 == 102) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 175;
		if (FrameCounter % 128 == 104) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 176;
		if (FrameCounter % 128 == 106) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 177;
		if (FrameCounter % 128 == 108) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 178;
		if (FrameCounter % 128 == 110) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 179;
		if (FrameCounter % 128 == 112) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 180;
		if (FrameCounter % 128 == 114) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 181;
		if (FrameCounter % 128 == 116) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 182;
		if (FrameCounter % 128 == 118) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 183;
		if (FrameCounter % 128 == 120) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 184;
		if (FrameCounter % 128 == 122) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 185;
		if (FrameCounter % 128 == 124) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 186;
		if (FrameCounter % 128 == 126) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 187;
		if (FrameCounter % 128 == 0) ___ADV02MR02_OBJECTS[142]->basicdxmodel->mats[0].attr_texId = 188;
		if (FrameCounter % 128 == 2) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 189;
		if (FrameCounter % 128 == 4) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 190;
		if (FrameCounter % 128 == 6) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 191;
		if (FrameCounter % 128 == 8) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 192;
		if (FrameCounter % 128 == 10) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 193;
		if (FrameCounter % 128 == 12) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 194;
		if (FrameCounter % 128 == 14) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 195;
		if (FrameCounter % 128 == 16) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 196;
		if (FrameCounter % 128 == 18) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 197;
		if (FrameCounter % 128 == 20) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 198;
		if (FrameCounter % 128 == 22) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 199;
		if (FrameCounter % 128 == 24) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 200;
		if (FrameCounter % 128 == 26) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 201;
		if (FrameCounter % 128 == 28) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 202;
		if (FrameCounter % 128 == 30) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 203;
		if (FrameCounter % 128 == 32) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 204;
		if (FrameCounter % 128 == 34) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 205;
		if (FrameCounter % 128 == 36) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 206;
		if (FrameCounter % 128 == 38) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 207;
		if (FrameCounter % 128 == 40) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 208;
		if (FrameCounter % 128 == 42) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 209;
		if (FrameCounter % 128 == 44) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 210;
		if (FrameCounter % 128 == 46) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 211;
		if (FrameCounter % 128 == 48) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 212;
		if (FrameCounter % 128 == 50) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 213;
		if (FrameCounter % 128 == 52) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 214;
		if (FrameCounter % 128 == 54) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 215;
		if (FrameCounter % 128 == 56) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 216;
		if (FrameCounter % 128 == 58) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 217;
		if (FrameCounter % 128 == 60) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 218;
		if (FrameCounter % 128 == 62) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 219;
		if (FrameCounter % 128 == 64) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 220;
		if (FrameCounter % 128 == 66) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 221;
		if (FrameCounter % 128 == 68) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 222;
		if (FrameCounter % 128 == 70) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 223;
		if (FrameCounter % 128 == 72) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 224;
		if (FrameCounter % 128 == 74) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 225;
		if (FrameCounter % 128 == 76) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 226;
		if (FrameCounter % 128 == 78) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 227;
		if (FrameCounter % 128 == 80) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 228;
		if (FrameCounter % 128 == 82) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 229;
		if (FrameCounter % 128 == 84) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 230;
		if (FrameCounter % 128 == 86) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 231;
		if (FrameCounter % 128 == 88) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 232;
		if (FrameCounter % 128 == 90) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 233;
		if (FrameCounter % 128 == 92) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 234;
		if (FrameCounter % 128 == 94) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 235;
		if (FrameCounter % 128 == 96) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 236;
		if (FrameCounter % 128 == 98) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 237;
		if (FrameCounter % 128 == 100) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 238;
		if (FrameCounter % 128 == 102) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 239;
		if (FrameCounter % 128 == 104) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 240;
		if (FrameCounter % 128 == 106) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 241;
		if (FrameCounter % 128 == 108) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 242;
		if (FrameCounter % 128 == 110) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 243;
		if (FrameCounter % 128 == 112) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 244;
		if (FrameCounter % 128 == 114) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 245;
		if (FrameCounter % 128 == 116) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 246;
		if (FrameCounter % 128 == 118) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 247;
		if (FrameCounter % 128 == 120) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 248;
		if (FrameCounter % 128 == 122) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 249;
		if (FrameCounter % 128 == 124) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 250;
		if (FrameCounter % 128 == 126) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 251;
		if (FrameCounter % 128 == 0) ___ADV02MR02_OBJECTS[141]->basicdxmodel->mats[1].attr_texId = 83;
	}
}
	

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };