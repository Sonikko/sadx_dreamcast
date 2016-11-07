#include "stdafx.h"
#include "SADXModLoader.h"
#include "ADVSS00 (City Hall).h"
#include "ADVSS01 (Casino Area).h"
//#include "ADVSS02 (Sewers).h"
#include "ADVSS02_PC.h"
#include "ADVSS03 (StationMainArea).h"
#include "ADVSS04 (Hotel).h"
#include "ADVSS05 (Twinkle Park Entrance).h"

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
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
			
	}

	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };

	__declspec(dllexport) void __cdecl OnFrame()
	{ 		HMODULE handle = GetModuleHandle(L"ADV00MODELS");
			NJS_OBJECT **___ADV00SS02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV00SS02_OBJECTS");
			if (FrameCounter % 25 == 1 && GameState == 15)		___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 47;
			if (FrameCounter % 25 == 4 && GameState == 15)		___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 48;
			if (FrameCounter % 25 == 7 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 49;
			if (FrameCounter % 25 == 10 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 50;
			if (FrameCounter % 25 == 13 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 51;
			if (FrameCounter % 25 == 16 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 52;
			if (FrameCounter % 25 == 19 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 53;
			if (FrameCounter % 25 == 22 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 54;
			if (FrameCounter % 25 == 0 && GameState == 15)	___ADV00SS02_OBJECTS[119]->basicdxmodel->mats[0].attr_texId = 55;
	}
	}
