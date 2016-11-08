#include "stdafx.h"
#include "SADXModLoader.h"
#include "ADV03_00.h"
#include "ADV03_01.h"
#include "ADV03_02.h"

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"ADV03MODELS");
	LandTable **___LANDTABLEPAST = (LandTable **)GetProcAddress(handle, "___LANDTABLEPAST");
	___LANDTABLEPAST[0] = &landtable_00000278;
	___LANDTABLEPAST[1] = &landtable_0000029C;
	___LANDTABLEPAST[2] = &landtable_000002C0;
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };