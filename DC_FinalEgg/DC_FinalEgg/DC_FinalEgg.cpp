#include "stdafx.h"
#include "SADXModLoader.h"
#include "FinalEgg1.h"
#include "FinalEgg2.h"
#include "FinalEgg2_PC.h"
#include "FinalEgg3.h"
#include "FinalEgg_objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB48, &landtable_0001D108), //Act 1
	//ptrdecl(0x97DB4C, &landtable_00083CCC), // Act 2 DC
	//ptrdecl(0x97DB4C, &landtable_015C8ED0), //Act 2 PC
	ptrdecl(0x97DB50, &landtable_000E67D0) //Act 3
};

//Final Egg 2 clip function

void __cdecl SetClip_FEgg2_r(signed int a1)
{
	if (a1 >= 2)
	{
		for (int i = 0; i < object_016C017C.basicdxmodel->nbMat; i++)
			object_016C017C.basicdxmodel->mats[i].attrflags &= 0xFFEFFFFF;
		for (int i = 0; i < object_016C1DD0.basicdxmodel->nbMat; i++)
			object_016C1DD0.basicdxmodel->mats[i].attrflags &= 0xFFEFFFFF;
		for (int i = 0; i < object_016C2D94.basicdxmodel->nbMat; i++)
			object_016C2D94.basicdxmodel->mats[i].attrflags &= 0xFFEFFFFF;
	}
	else
		((LandTable *)0x19C8ED0)->COLList = &collist_015C7D60[3];
		((LandTable *)0x19C8ED0)->COLCount -= 3;
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		((LandTable *)0x19C8ED0)->COLCount = LengthOfArray(collist_015C7D60);
		((LandTable *)0x19C8ED0)->COLList = collist_015C7D60;
		WriteJump((void*)0x5ADC40, SetClip_FEgg2_r);
		DataArray(FogData, FinalEgg1Fog, 0x019C8FF0, 3);
		for (int i = 0; i < 3; i++)
		{
			FinalEgg1Fog[i].Color = 0xFF000000;
			HMODULE palettelighting = GetModuleHandle(L"sadx-dc-lighting");
			if (palettelighting != 0)
			{
			FinalEgg1Fog[i].Layer = 1300.0f;
			FinalEgg1Fog[i].Distance = 3200.0f;
			}
		}
		DataArray(FogData, FinalEgg2Fog, 0x019C9020, 3);
		for (int i = 0; i < 3; i++)
		{
			FinalEgg2Fog[i].Color = 0xFF000000;
			FinalEgg2Fog[i].Layer = 800.0f;
			FinalEgg2Fog[i].Distance = 2000.0f;
			FinalEgg2Fog[i].Toggle = 1;
		}
		memcpy((void*)0x19FEFE4, &object_001AEDFC, sizeof(object_001AEDFC));  // Light
		//memcpy((void*)0x1C28564, &object_0021B58C, sizeof(object_0021B58C));  // Light2
		memcpy(&object_016C3004, &object_000E0558Z, sizeof(object_000E0558Z));  // BG 1
		memcpy(&object_016C2FD0, &object_000E058CZ, sizeof(object_000E058CZ));  // BG 2
		memcpy(&object_016C3038, &object_000E0524Z, sizeof(object_000E0524Z));  // BG 3
		memcpy(&object_0167B47C, &object_000C6218Z, sizeof(object_000C6218Z));  // BG 4
		memcpy(&object_016C2F68, &object_000E04F0Z, sizeof(object_000E04F0Z));  // BG 5
		memcpy(&object_016C2F9C, &object_000E05C0Z, sizeof(object_000E05C0Z));  // BG 6
		memcpy(&matlist_016C1E04, &matlist_016C1E04Z, sizeof(matlist_016C1E04Z));  // Trans 1
		memcpy(&matlist_016BE6A8, &matlist_016BE6A8Z, sizeof(matlist_016BE6A8Z));  // Trans 2
		memcpy(&matlist_016C01B0, &matlist_016C01B0Z, sizeof(matlist_016C01B0Z));  // Trans 3
		memcpy(&matlist_01695858, &matlist_01695858Z, sizeof(matlist_01695858Z));  // Trans 4
		memcpy(&matlist_01695D50, &matlist_01695D50Z, sizeof(matlist_01695D50Z));  // Trans 5
	}
		
}

/*BK
memcpy((void*)0x1AC3004, &object_000E0558, sizeof(object_000E0558));  // BG 1
memcpy((void*)0x1AC2FD0, &object_000E058C, sizeof(object_000E058C));  // BG 2
memcpy((void*)0x1AC3038, &object_000E0524, sizeof(object_000E0524));  // BG 3
memcpy((void*)0x1A7B47C, &object_000C6218, sizeof(object_000C6218));  // BG 4
memcpy((void*)0x1AC2F68, &object_000E04F0, sizeof(object_000E04F0));  // BG 5
memcpy((void*)0x1AC2F9C, &object_000E05C0, sizeof(object_000E05C0));  // BG 6
memcpy((void*)0x1AC1E04, &matlist_016C1E04Z, sizeof(matlist_016C1E04Z));  // Trans 1
memcpy((void*)0x1ABE6A8, &matlist_016BE6A8Z, sizeof(matlist_016BE6A8Z));  // Trans 2
memcpy((void*)0x1AC01B0, &matlist_016C01B0Z, sizeof(matlist_016C01B0Z));  // Trans 3
memcpy((void*)0x1A95858, &matlist_01695858Z, sizeof(matlist_01695858Z));  // Trans 4
memcpy((void*)0x1A95D50, &matlist_01695D50Z, sizeof(matlist_01695D50Z));  // Trans 5
*/