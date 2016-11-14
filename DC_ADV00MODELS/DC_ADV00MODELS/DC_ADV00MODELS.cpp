#include "stdafx.h"
#include "SADXModLoader.h"
#include "ADVSS00 (City Hall).h"
#include "ADVSS01 (Casino Area).h"
//#include "ADVSS02 (Sewers).h"
#include "ADVSS02_PC.h"
#include "ADVSS03 (StationMainArea).h"
#include "ADVSS04 (Hotel).h"
#include "ADVSS05 (Twinkle Park Entrance).h"
#include "textures.h"
#include "SS_bluecar.h"
#include "SS_redcar.h"
#include "SS_police.h"
#include "SS_taxi.h"

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		memcpy((void*)0x02AF4FC0, &object_0019F390, sizeof(object_0019F390)); // SS Police
		memcpy((void*)0x02AF1974, &object_0019CBD8, sizeof(object_0019CBD8)); // SS Red Car
		memcpy((void*)0x02AF8400, &object_001A17C4, sizeof(object_001A17C4)); // SS Blue Car
		memcpy((void*)0x02AFBA64, &object_001A4268, sizeof(object_001A4268)); // SS Taxi
		HMODULE handle = GetModuleHandle(L"ADV00MODELS");
		LandTable **___LANDTABLESS = (LandTable **)GetProcAddress(handle, "___LANDTABLESS");
		___LANDTABLESS[0] = &landtable_000157F4;
		___LANDTABLESS[1] = &landtable_000738F4;
		___LANDTABLESS[2] = &landtable_001D5ABC; //PC
//		___LANDTABLESS[2] = &landtable_000C21F0; //DC
		___LANDTABLESS[3] = &landtable_000DCEBC;
		___LANDTABLESS[4] = &landtable_00135A90;
		___LANDTABLESS[5] = &landtable_001573CC;
		NJS_OBJECT **___ADV00SS02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV00SS02_OBJECTS");
		___ADV00SS02_OBJECTS[119] = &object_0010F2F4; //PC
//		___ADV00SS02_OBJECTS[119] = &object_000DA934; //DC
		NJS_OBJECT **___ADV00SS03_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV00SS03_OBJECTS");
			
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };

	__declspec(dllexport) void __cdecl OnFrame()
	{
		HMODULE handle = GetModuleHandle(L"ADV00MODELS");

		//Water animation in Act 2 (Sewers)
		NJS_OBJECT **___ADV00SS02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV00SS02_OBJECTS");
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 1 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 47;
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 4 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 48;
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 7 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 49;
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 10 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 50;
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 13 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 51;
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 16 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 52;
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 19 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 53;
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 22 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 54;
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 0 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 55;

		//Water animation in Act 3 (Main area)
		NJS_OBJECT **___ADV00SS03_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV00SS03_OBJECTS");
		if (CurrentLevel == 26 && CurrentAct == 2 && FrameCounter % 25 == 1 && GameState == 15)	___ADV00SS03_OBJECTS[147]->basicdxmodel->mats[0].attr_texId = 5;

		//Night reflections Act 0
		if (CurrentLevel == 26 && CurrentAct == 0 && GetTimeOfDay() == 2)
		{
			matlist_0003B3C4[1].attr_texId = 207;
			matlist_0003BBA4[1].attr_texId = 207;
			matlist_0003BF94[1].attr_texId = 207;
			matlist_0003C384[1].attr_texId = 207;
			matlist_0003AFD4[1].attr_texId = 207;
			matlist_0003B7B4[1].attr_texId = 207;
			matlist_0003BBA4[1].attr_texId = 207;
			matlist_000631AC[2].attr_texId = 207;
			matlist_00046404[0].attr_texId = 209;
			matlist_00046404[1].attr_texId = 209;
			matlist_0007C240[0].attr_texId = 209;
			matlist_0007C240[1].attr_texId = 209;
			matlist_0002B718[0].attr_texId = 211;
			matlist_0002F984[0].attr_texId = 211;
			matlist_000631AC[0].attr_texId = 213;
			matlist_00063748[0].attr_texId = 213;
			matlist_000203BC[0].attr_texId = 215;
			matlist_00021684[0].attr_texId = 217;
			matlist_000631AC[1].attr_texId = 219;
		}

		//Evening reflections Act 0
		if (CurrentLevel == 26 && CurrentAct == 0 && GetTimeOfDay() == 1)
		{
			matlist_0003B3C4[1].attr_texId = 206;
			matlist_0003BBA4[1].attr_texId = 206;
			matlist_0003BF94[1].attr_texId = 206;
			matlist_0003C384[1].attr_texId = 206;
			matlist_0003AFD4[1].attr_texId = 206;
			matlist_0003B7B4[1].attr_texId = 206;
			matlist_0003BBA4[1].attr_texId = 206;
			matlist_000631AC[2].attr_texId = 206;
			matlist_00046404[0].attr_texId = 208;
			matlist_00046404[1].attr_texId = 208;
			matlist_0007C240[0].attr_texId = 208;
			matlist_0007C240[1].attr_texId = 208;
			matlist_0002B718[0].attr_texId = 210;
			matlist_0002F984[0].attr_texId = 210;
			matlist_000631AC[0].attr_texId = 212;
			matlist_00063748[0].attr_texId = 212;
			matlist_000203BC[0].attr_texId = 214;
			matlist_00021684[0].attr_texId = 216;
			matlist_000631AC[1].attr_texId = 218;
		}

		//Day reflections Act 0
		if (CurrentLevel == 26 && CurrentAct == 0 && GetTimeOfDay() == 0)
		{
			matlist_0003B3C4[1].attr_texId = 124;
			matlist_0003BBA4[1].attr_texId = 124;
			matlist_0003BF94[1].attr_texId = 124;
			matlist_0003C384[1].attr_texId = 124;
			matlist_0003AFD4[1].attr_texId = 124;
			matlist_0003B7B4[1].attr_texId = 124;
			matlist_0003BBA4[1].attr_texId = 124;
			matlist_000631AC[2].attr_texId = 124;
			matlist_00046404[0].attr_texId = 145;
			matlist_00046404[1].attr_texId = 145;
			matlist_0007C240[0].attr_texId = 145;
			matlist_0007C240[1].attr_texId = 145;
			matlist_0002B718[0].attr_texId = 69;
			matlist_0002F984[0].attr_texId = 69;
			matlist_000631AC[0].attr_texId = 184;
			matlist_00063748[0].attr_texId = 184;
			matlist_000203BC[0].attr_texId = 36;
			matlist_00021684[0].attr_texId = 39;
			matlist_000631AC[1].attr_texId = 185;
		}

		//Day, Night & Evening textures for Act 1 (Casino)
		if (CurrentLevel == 26 && CurrentAct == 1 && GetTimeOfDay() == 2) matlist_000B59E0[0].attr_texId = 265;
		if (CurrentLevel == 26 && CurrentAct == 1 && GetTimeOfDay() == 1) matlist_000B59E0[0].attr_texId = 264;
		if (CurrentLevel == 26 && CurrentAct == 1 && GetTimeOfDay() == 0) matlist_000B59E0[0].attr_texId = 240;

		//Day, Night & Evening textures for Act 4 (Hotel)
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 2) matlist_00151F58[0].attr_texId = 118;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 2) matlist_00152110[0].attr_texId = 117;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 1) matlist_00151F58[0].attr_texId = 116;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 1) matlist_00152110[0].attr_texId = 115;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 0) matlist_00151F58[0].attr_texId = 69;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 0) matlist_00152110[0].attr_texId = 70;

		//Night reflections Act 3 (Main area)
		if (CurrentLevel == 26 && CurrentAct == 3 && GetTimeOfDay() == 2)
		{
			matlist_000F062C[5].attr_texId = 259;
			matlist_000EF934[0].attr_texId = 259;
			matlist_000FA4D4[0].attr_texId = 263;
			matlist_000FBD0C[0].attr_texId = 261;
			matlist_0011BE68[2].attr_texId = 257;
		}

		//Evening reflections Act 3 (Main area)
		if (CurrentLevel == 26 && CurrentAct == 3 && GetTimeOfDay() == 1)
		{
			matlist_000F062C[5].attr_texId = 258;
			matlist_000EF934[0].attr_texId = 258;
			matlist_000FA4D4[0].attr_texId = 262;
			matlist_000FBD0C[0].attr_texId = 260;
			matlist_0011BE68[2].attr_texId = 256;
		}

		//Day reflections Act 3 (Main area)
		if (CurrentLevel == 26 && CurrentAct == 3 && GetTimeOfDay() == 0)
		{
			matlist_000EF934[0].attr_texId = 52;
			matlist_000F062C[5].attr_texId = 60;
			matlist_000FA4D4[0].attr_texId = 89;
			matlist_000FBD0C[0].attr_texId = 94;
			matlist_0011BE68[2].attr_texId = 165;
		}

		//Sea animations Act 3 (Main area)
		if (CurrentLevel == 26 && CurrentAct == 3)
		{
			if (FrameCounter % 43 == 1 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 183;
				matlist_00123620[0].attr_texId = 183;
				matlist_000E7180[2].attr_texId = 29;
				matlist_00122894[3].attr_texId = 29;
			}
			if (FrameCounter % 43 == 4 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 242;
				matlist_00123620[0].attr_texId = 242;
				matlist_000E7180[2].attr_texId = 228;
				matlist_00122894[3].attr_texId = 228;
			}
			if (FrameCounter % 43 == 7 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 243;
				matlist_00123620[0].attr_texId = 243;
				matlist_000E7180[2].attr_texId = 229;
				matlist_00122894[3].attr_texId = 229;
			}
			if (FrameCounter % 43 == 10 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 244;
				matlist_00123620[0].attr_texId = 244;
				matlist_000E7180[2].attr_texId = 230;
				matlist_00122894[3].attr_texId = 230;
			}
			if (FrameCounter % 43 == 13 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 245;
				matlist_00123620[0].attr_texId = 245;
				matlist_000E7180[2].attr_texId = 231;
				matlist_00122894[3].attr_texId = 231;
			}
			if (FrameCounter % 43 == 16 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 246;
				matlist_00123620[0].attr_texId = 246;
				matlist_000E7180[2].attr_texId = 232;
				matlist_00122894[3].attr_texId = 232;
			}
			if (FrameCounter % 43 == 19 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 247;
				matlist_00123620[0].attr_texId = 247;
				matlist_000E7180[2].attr_texId = 233;
				matlist_00122894[3].attr_texId = 233;
			}
			if (FrameCounter % 43 == 22 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 248;
				matlist_00123620[0].attr_texId = 248;
				matlist_000E7180[2].attr_texId = 234;
				matlist_00122894[3].attr_texId = 234;
			}
			if (FrameCounter % 43 == 25 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 249;
				matlist_00123620[0].attr_texId = 249;
				matlist_000E7180[2].attr_texId = 235;
				matlist_00122894[3].attr_texId = 235;
			}
			if (FrameCounter % 43 == 28 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 250;
				matlist_00123620[0].attr_texId = 250;
				matlist_000E7180[2].attr_texId = 236;
				matlist_00122894[3].attr_texId = 236;
			}
			if (FrameCounter % 43 == 31 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 251;
				matlist_00123620[0].attr_texId = 251;
				matlist_000E7180[2].attr_texId = 237;
				matlist_00122894[3].attr_texId = 237;
			}
			if (FrameCounter % 43 == 34 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 252;
				matlist_00123620[0].attr_texId = 252;
				matlist_000E7180[2].attr_texId = 238;
				matlist_00122894[3].attr_texId = 238;
			}
			if (FrameCounter % 43 == 37 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 253;
				matlist_00123620[0].attr_texId = 253;
				matlist_000E7180[2].attr_texId = 239;
				matlist_00122894[3].attr_texId = 239;
			}
			if (FrameCounter % 43 == 40 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 254;
				matlist_00123620[0].attr_texId = 254;
				matlist_000E7180[2].attr_texId = 240;
				matlist_00122894[3].attr_texId = 240;
			}
			if (FrameCounter % 43 == 0 && GameState == 15)
			{
				matlist_0012231C[0].attr_texId = 255;
				matlist_00123620[0].attr_texId = 255;
				matlist_000E7180[2].attr_texId = 241;
				matlist_00122894[3].attr_texId = 241;
			}
		}

		//Sea animations Act 4 (Hotel)
		if (CurrentLevel == 26 && CurrentAct == 4)
		{
			if (FrameCounter % 43 == 1 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 59;
				matlist_00150A50[1].attr_texId = 59;
				matlist_00148688[0].attr_texId = 60;
			}
			if (FrameCounter % 43 == 4 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 87;
				matlist_00150A50[1].attr_texId = 87;
				matlist_00148688[0].attr_texId = 101;
		}
			if (FrameCounter % 43 == 7 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 88;
				matlist_00150A50[1].attr_texId = 88;
				matlist_00148688[0].attr_texId = 102;
			}
			if (FrameCounter % 43 == 10 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 89;
				matlist_00150A50[1].attr_texId = 89;
				matlist_00148688[0].attr_texId = 103;
			}
			if (FrameCounter % 43 == 13 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 90;
				matlist_00150A50[1].attr_texId = 90;
				matlist_00148688[0].attr_texId = 104;
			}
			if (FrameCounter % 43 == 16 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 91;
				matlist_00150A50[1].attr_texId = 91;
				matlist_00148688[0].attr_texId = 105;
			}
			if (FrameCounter % 43 == 19 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 92;
				matlist_00150A50[1].attr_texId = 92;
				matlist_00148688[0].attr_texId = 106;
			}
			if (FrameCounter % 43 == 22 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 93;
				matlist_00150A50[1].attr_texId = 93;
				matlist_00148688[0].attr_texId = 107;
			}
			if (FrameCounter % 43 == 25 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 94;
				matlist_00150A50[1].attr_texId = 94;
				matlist_00148688[0].attr_texId = 108;
			}
			if (FrameCounter % 43 == 28 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 95;
				matlist_00150A50[1].attr_texId = 95;
				matlist_00148688[0].attr_texId = 109;
			}
			if (FrameCounter % 43 == 31 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 96;
				matlist_00150A50[1].attr_texId = 96;
				matlist_00148688[0].attr_texId = 110;
			}
			if (FrameCounter % 43 == 34 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 97;
				matlist_00150A50[1].attr_texId = 97;
				matlist_00148688[0].attr_texId = 111; 
			}
			if (FrameCounter % 43 == 37 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 98;
				matlist_00150A50[1].attr_texId = 98;
				matlist_00148688[0].attr_texId = 112;
			}
			if (FrameCounter % 43 == 40 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 99;
				matlist_00150A50[1].attr_texId = 99;
				matlist_00148688[0].attr_texId = 113;
			}
			if (FrameCounter % 43 == 0 && GameState == 15)
			{
				matlist_00147958[2].attr_texId = 100;
				matlist_00150A50[1].attr_texId = 100;
				matlist_00148688[0].attr_texId = 114;
			}
		}
	}
	}
