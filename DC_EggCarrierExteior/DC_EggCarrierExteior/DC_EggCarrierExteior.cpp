#include "stdafx.h"
#include "SADXModLoader.h"
#include "Egg1.h"

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"ADV01MODELS");
	WriteData((char *)GetProcAddress(handle, "SetClip_EC00"), 0xC3u, sizeof(char *));
	WriteData((char *)GetProcAddress(handle, "SetClip_EC01"), 0xC3u, sizeof(char *));
	LandTable **___LANDTABLEEC = (LandTable **)GetProcAddress(handle, "___LANDTABLEEC");
	___LANDTABLEEC[0] = &landtable_00162260;
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };
