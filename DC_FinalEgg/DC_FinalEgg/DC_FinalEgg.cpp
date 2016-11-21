#include "stdafx.h"
#include "SADXModLoader.h"
#include "FinalEgg1.h"
#include "FinalEgg2.h"
#include "FinalEgg2_PC.h"
#include "FinalEgg3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB48, &landtable_0001D108), //Act 1
	//prdecl(0x97DB4C, &landtable_00083CCC), // Act 2 DC
	//ptrdecl(0x97DB4C, &landtable_015C8ED0), //Act 2 PC
	ptrdecl(0x97DB50, &landtable_000E67D0) //Act 3
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		DataArray(FogData, FinalEgg1Fog, 0x019C8FF0, 3);
		for (int i = 0; i < 3; i++)
		{
			FinalEgg1Fog[i].Color = 0xFF000000;
			//FinalEgg1Fog[i].Layer = 1300.0f;
			//FinalEgg1Fog[i].Distance = 3200.0f;
		}
		DataArray(FogData, FinalEgg2Fog, 0x019C9020, 3);
		for (int i = 0; i < 3; i++)
		{
			FinalEgg2Fog[i].Color = 0xFF000000;
			FinalEgg2Fog[i].Layer = 700.0f;
			FinalEgg2Fog[i].Distance = 1700.0f;
			FinalEgg2Fog[i].Toggle = 1;
		}
		memcpy((void*)0x1AC3004, &object_000E0558, sizeof(object_000E0558));  // BG 1
		memcpy((void*)0x1AC2FD0, &object_000E058C, sizeof(object_000E058C));  // BG 2
		memcpy((void*)0x1AC3038, &object_000E0524, sizeof(object_000E0524));  // BG 3
		memcpy((void*)0x1A7B47C, &object_000C6218, sizeof(object_000C6218));  // BG 4
		memcpy((void*)0x1AC2F68, &object_000E04F0, sizeof(object_000E04F0));  // BG 5
		memcpy((void*)0x1AC2F9C, &object_000E05C0, sizeof(object_000E05C0));  // BG 6
		memcpy((void*)0x1AC1E04, &matlist_016C1E04, sizeof(matlist_016C1E04));  // Trans 1
		memcpy((void*)0x1ABE6A8, &matlist_016BE6A8, sizeof(matlist_016BE6A8));  // Trans 2
		memcpy((void*)0x1AC01B0, &matlist_016C01B0, sizeof(matlist_016C01B0));  // Trans 3
		memcpy((void*)0x1A95858, &matlist_01695858, sizeof(matlist_01695858));  // Trans 4
		memcpy((void*)0x1A95D50, &matlist_01695D50, sizeof(matlist_01695D50));  // Trans 5
	}
		
}