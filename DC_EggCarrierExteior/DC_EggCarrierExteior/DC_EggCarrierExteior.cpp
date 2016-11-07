#include "stdafx.h"
#include "SADXModLoader.h"
#include "Egg1.h"

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"ADV01MODELS");
	LandTable **___LANDTABLEEC = (LandTable **)GetProcAddress(handle, "___LANDTABLEEC");
	___LANDTABLEEC[0] = &landtable_00162260;
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };
