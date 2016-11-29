#include "stdafx.h"
#include "SADXModLoader.h"
#include "HotShelter1.h"
#include "HotShelter2.h"
#include "HotShelter3.h"

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
		memcpy((void*)0x0183C594, &attach_0012AB9C, sizeof(attach_0012AB9C));  // Bridge
		memcpy((void*)0x0187201C, &object_0015CC48, sizeof(object_0015CC48));  // Light
		DataArray(DrawDistance, DrawDist_HotShelter1, 0x017C3408, 3);
		for (int i = 0; i < 3; i++)
		{
			DrawDist_HotShelter1[i].Maximum = -3000.0;
		}
		DataArray(DrawDistance, DrawDist_HotShelter2, 0x017C3420, 3);
		for (int i = 0; i < 3; i++)
		{
			DrawDist_HotShelter2[i].Maximum = -3000.0;
		}
		DataArray(FogData, FogData_HotShelter1, 0x017C3450, 3);
		for (int i = 0; i < 3; i++)
		{
			FogData_HotShelter1[i].Color = 0xFF000000;
			FogData_HotShelter1[i].Layer = 600.0f;
			FogData_HotShelter1[i].Distance = 1500.0f;
		}
		DataArray(FogData, FogData_HotShelter2, 0x017C3480, 3);
		for (int i = 0; i < 3; i++)
		{
			FogData_HotShelter2[i].Color = 0xFF000000;
			FogData_HotShelter2[i].Toggle = 1;
			FogData_HotShelter2[i].Layer = 800.0f;
			FogData_HotShelter2[i].Distance = 2000.0f;
		}
		DataArray(FogData, FogData_HotShelter3, 0x017C34B0, 3);
		for (int i = 0; i < 3; i++)
		{
			FogData_HotShelter3[i].Color = 0xFF000000;
			FogData_HotShelter3[i].Toggle = 1;
			FogData_HotShelter3[i].Layer = 500.0f;
			FogData_HotShelter3[i].Distance = 1800.0f;
		}

	}

}