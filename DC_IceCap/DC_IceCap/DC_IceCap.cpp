#include "stdafx.h"
#include "SADXModLoader.h"
#include "IceCap1.h"
#include "IceCap2.h"
#include "IceCap3.h"

NJS_TEXNAME textures_icecap4[55];
NJS_TEXLIST texlist_icecap4 = { arrayptrandlength(textures_icecap4) };

PVMEntry IceCap4Textures_list[] = {
	{ "ICECAP04", (TexList *)0xD39744 }
};

LevelPVMList IceCap4Textures = { levelact(LevelIDs_IceCap, 3), arraylengthandptr(IceCap4Textures_list) };

PointerInfo pointers[] = {
	ptrdecl(0x97DB08, &landtable_00014B44),
	ptrdecl(0x97DB0C, &landtable_00015714),
	ptrdecl(0x97DB10, &landtable_000180B4),
	ptrdecl(0x90F070, &IceCap4Textures)
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		memcpy((void*)0x00D6B39C, &object_0007F6C4, sizeof(object_0007F6C4));
		memcpy((void*)0x00DD3A5C, &object_000C50AC, sizeof(object_000C50AC));
	};
}
