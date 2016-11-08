#include "stdafx.h"
#include "SADXModLoader.h"
#include "ADV_MR00 (Station area).h"
#include "ADV_MR01 (Angel Island).h"
#include "ADV_MR02 (Jungle area).h"
#include "ADV_MR03 (Final Egg entrance).h"

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"ADV02MODELS");
	LandTable **___LANDTABLEMR = (LandTable **)GetProcAddress(handle, "___LANDTABLEMR");
	___LANDTABLEMR[0] = &landtable_00017960;
	___LANDTABLEMR[1] = &landtable_0009E7B0;
	___LANDTABLEMR[2] = &landtable_00000178;
	___LANDTABLEMR[3] = &landtable_0000019C;
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };