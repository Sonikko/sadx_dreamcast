#include "stdafx.h"
#include "SADXModLoader.h"
#include "Chaos0_Landtable.h"
#include "Chaos0_PoliceCar.h"

extern "C"
{
__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };

__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"BOSSCHAOS0MODELS");
	LandTable **___LANDTABLEBOSSCHAOS0 = (LandTable **)GetProcAddress(handle, "___LANDTABLEBOSSCHAOS0");
	___LANDTABLEBOSSCHAOS0[0] = &landtable_000001D8;
	NJS_ACTION **___BOSSCHAOS0_ACTIONS = (NJS_ACTION **)GetProcAddress(handle, "___BOSSCHAOS0_ACTIONS");
	___BOSSCHAOS0_ACTIONS[18]->object = &object_0005D234;
}
}