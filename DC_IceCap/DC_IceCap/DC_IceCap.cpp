#include "stdafx.h"
#include "SADXModLoader.h"
#include "IceCap1.h"
#include "IceCap2.h"
#include "IceCap3.h"
#include "Icicle.h"

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
		memcpy((void*)0x0E537D8, &object_00162694, sizeof(object_00162694));  // Icicle
		DataArray(FogData, IceCap1Fog, 0x00C67EA0, 1);
		for (int i = 0; i < 3; i++)
		{
			IceCap1Fog[i].Color = 0xFFFFFFFF;
			IceCap1Fog[i].Layer = 1500.0f;
			IceCap1Fog[i].Distance = 3800.0f;
			IceCap1Fog[i].Toggle = 1;
		}
		DataArray(FogData, IceCap2Fog, 0x00C67ED0, 1);
		for (int i = 0; i < 3; i++)
		{
			IceCap2Fog[i].Color = 0xFFFFFFFF;
			IceCap2Fog[i].Layer = 800.0f;
			IceCap2Fog[i].Distance = 3800.0f;
			IceCap2Fog[i].Toggle = 1;
		}
		DataArray(FogData, IceCap4Fog, 0x00C67F30, 1);
		for (int i = 0; i < 3; i++)
		{
			IceCap4Fog[i].Color = 0xFF000000;
			IceCap4Fog[i].Layer = 800.0f;
			IceCap4Fog[i].Distance = 3800.0f;
			IceCap4Fog[i].Toggle = 1;
		}
		DataArray(DrawDistance, DrawDist_IceCap1, 0x00C67E40, 3);
		for (int i = 0; i < 3; i++)
		{
			DrawDist_IceCap1[i].Maximum = -4000.0;
		}
		DataArray(DrawDistance, DrawDist_IceCap2, 0x00C67E58, 3);
		for (int i = 0; i < 3; i++)
		{
			DrawDist_IceCap1[i].Maximum = -4000.0;
		}
	};
}
