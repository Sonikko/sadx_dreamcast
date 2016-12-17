#include "stdafx.h"
#include "SADXModLoader.h"
#include "Palm.h"
#include "ADV03_00_PC.h"
#include "ADV03_00.h"
#include "ADV03_01.h"
#include "ADV03_02.h"

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	DataArray(DrawDistance, DrawDist_Past2, 0x0111E558, 3);
	DataArray(DrawDistance, DrawDist_Past3, 0x0111E570, 3);
	for (int i = 0; i < 3; i++)
	{
		DrawDist_Past2[i].Maximum = -20000.0;
		DrawDist_Past3[i].Maximum = -20000.0;
	}
	HMODULE handle = GetModuleHandle(L"ADV03MODELS");
	LandTable **___LANDTABLEPAST = (LandTable **)GetProcAddress(handle, "___LANDTABLEPAST");
	___LANDTABLEPAST[0] = &landtable_00000278;
	___LANDTABLEPAST[1] = &landtable_0000029C;
	___LANDTABLEPAST[2] = &landtable_000002C0;
	NJS_OBJECT **___ADV03PAST01_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03PAST01_OBJECTS");
	___ADV03PAST01_OBJECTS[211] = &object_000953F8;
	___ADV03PAST01_OBJECTS[212] = &object_0009566C;
	___ADV03PAST01_OBJECTS[213] = &object_000B85E4;
	___ADV03PAST01_OBJECTS[214] = &object_0009609C;
	NJS_OBJECT **___ADV03PAST02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03PAST02_OBJECTS");
	___ADV03PAST02_OBJECTS[212] = &object_000C7BE4;
	___ADV03PAST02_OBJECTS[209] = &object_000C6F40;
	___ADV03PAST02_OBJECTS[210] = &object_000C71B4;
	___ADV03PAST02_OBJECTS[211] = &object_000FB49C;
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };