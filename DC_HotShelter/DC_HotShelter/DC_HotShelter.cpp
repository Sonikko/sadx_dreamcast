#include "stdafx.h"
#include "SADXModLoader.h"
#include "WaterStuff.h"
#include "HotShelter1.h"
#include "HotShelter2.h"
#include "HotShelter3.h"

static int anim = 78;

PointerInfo pointers[] = {
	ptrdecl(0x97DB88, &landtable_0001970C),
	ptrdecl(0x97DB8C, &landtable_0005277C),
	ptrdecl(0x97DB90, &landtable_000B0DA4),
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		ResizeTextureList((NJS_TEXLIST*)0x180DFF4, textures_shelter0);
		ResizeTextureList((NJS_TEXLIST*)0x17F56F4, textures_shelter1);
		ResizeTextureList((NJS_TEXLIST*)0x17F4F74, textures_shelter2);
		memcpy((void*)0x0183C594, &attach_0012AB9C, sizeof(attach_0012AB9C));  // Bridge
		memcpy((void*)0x0187201C, &object_0015CC48, sizeof(object_0015CC48));  // Light
		DataArray(FogData, FogData_HotShelter1, 0x017C3450, 3);
		DataArray(FogData, FogData_HotShelter2, 0x017C3480, 3);
		DataArray(FogData, FogData_HotShelter3, 0x017C34B0, 3);
		DataArray(DrawDistance, DrawDist_HotShelter1, 0x017C3408, 3);
		DataArray(DrawDistance, DrawDist_HotShelter2, 0x017C3420, 3);
		for (int i = 0; i < 3; i++)
		{
			DrawDist_HotShelter1[i].Maximum = -3000.0;
			DrawDist_HotShelter2[i].Maximum = -3000.0;
			FogData_HotShelter1[i].Color = 0xFF000000;
			FogData_HotShelter1[i].Layer = 600.0f;
			FogData_HotShelter1[i].Distance = 1500.0f;
			FogData_HotShelter2[i].Color = 0xFF000000;
			FogData_HotShelter2[i].Toggle = 1;
			FogData_HotShelter2[i].Layer = 800.0f;
			FogData_HotShelter2[i].Distance = 2000.0f;
			FogData_HotShelter3[i].Color = 0xFF000000;
			FogData_HotShelter3[i].Toggle = 1;
			FogData_HotShelter3[i].Layer = 500.0f;
			FogData_HotShelter3[i].Distance = 1800.0f;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		{
			if (CurrentLevel == 12 && CurrentAct == 0 && GameState != 16)
			{
				if (anim > 91) anim = 78;
				matlist_0140FBE8[0].attr_texId = anim;
				matlist_0140F824[0].attr_texId = anim;
				matlist_0140F608[0].attr_texId = anim;
				matlist_0140FA60[0].attr_texId = anim;
				if (LevelFrameCount % 3 == 0) anim++;
			}
		}
	}
}