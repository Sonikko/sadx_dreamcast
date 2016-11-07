#include "stdafx.h"
#include "SADXModLoader.h"
#include "ADVSS00(City Hall).h"

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"ADV00MODELS");
	LandTable **___LANDTABLESS = (LandTable **)GetProcAddress(handle, "___LANDTABLESS");
	___LANDTABLESS[0] = &landtable_000157F4;
	//___LANDTABLESS[1] = &landtable_000738F4;
	//___LANDTABLESS[2] = &landtable_000C21F0;
	//___LANDTABLESS[3] = &landtable_000DCEBC;
	//___LANDTABLESS[4] = &landtable_00135A90;
	//___LANDTABLESS[5] = &landtable_001573CC;
	//NJS_OBJECT **___ADV00SS03_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV00SS03_OBJECTS");
	////___ADV00SS03_OBJECTS[147] = &object_0015EDF8;
	//NJS_OBJECT **___ADV00SS04_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV00SS04_OBJECTS");
	//___ADV00SS03_OBJECTS[82] = &object_001BB358;

}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };
