#include "stdafx.h"
#include "SADXModLoader.h"
//#include "ADV01_0.h"
#include "ADV01_1.h"
#include "ADV01_2.h"
#include "ADV01_3.h"
#include "ADV01_4.h"
#include "ADV01_5.h"


extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle2 = GetModuleHandle(L"ADV01MODELS");
	LandTable **___LANDTABLEEC = (LandTable **)GetProcAddress(handle2, "___LANDTABLEEC");
	//___LANDTABLEEC[0] = &landtable_00162260;
	___LANDTABLEEC[1] = &landtable_001631F0;
	___LANDTABLEEC[2] = &landtable_00163CE8;
	___LANDTABLEEC[3] = &landtable_001650C8;
	___LANDTABLEEC[4] = &landtable_00165830;
	___LANDTABLEEC[5] = &landtable_001666F4;
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };