#include "stdafx.h"
#include "ninja.h"
#include "SADXModLoader.h"
#include "ADV03_00_PC.h"
#include "ADV03_00.h"
#include "ADV03_01_PC.h"
#include "ADV03_02_PC.h"

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"ADV03MODELS");
	LandTable **___LANDTABLEPAST = (LandTable **)GetProcAddress(handle, "___LANDTABLEPAST");
	___LANDTABLEPAST[0] = &landtable_00000278; //dc
	___LANDTABLEPAST[1] = &landtable_00101B5C; //pc
    ___LANDTABLEPAST[2] = &landtable_00103974; //pc
//	___LANDTABLEPAST[1] = &landtable_0000029C; //dc
//	___LANDTABLEPAST[2] = &landtable_000002C0; //dc
	NJS_OBJECT **___ADV03PAST01_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03PAST01_OBJECTS");
	___ADV03PAST01_OBJECTS[211] = &object_000B7CFC;
	___ADV03PAST01_OBJECTS[212] = &object_000B7F80;
	___ADV03PAST01_OBJECTS[213] = &object_000B85E4;
	___ADV03PAST01_OBJECTS[214] = &object_000B8C60;
	NJS_OBJECT **___ADV03PAST02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03PAST02_OBJECTS");
	___ADV03PAST02_OBJECTS[212] = &object_000FB898;
	___ADV03PAST02_OBJECTS[209] = &object_000FABB4;
	___ADV03PAST02_OBJECTS[210] = &object_000FAE38;
	___ADV03PAST02_OBJECTS[211] = &object_000FB49C;
	;
}


extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };