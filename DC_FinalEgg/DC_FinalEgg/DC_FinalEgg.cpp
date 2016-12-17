#include "stdafx.h"
#include "SADXModLoader.h"
#include "FinalEgg1.h"
#include "FinalEgg2.h"
#include "FinalEgg3.h"
#include "FinalEgg_objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB48, &landtable_0001D108), //Act 1
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
	((LandTable *)0x19C8ED0)->COLList = &collist_00081980[3];
	((LandTable *)0x19C8ED0)->COLCount -= 3;
}


extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		ResizeTextureList((NJS_TEXLIST*)0x1A60488, 68); //Final Egg 2 texture list
		((LandTable *)0x19C8ED0)->COLCount = LengthOfArray(collist_00081980); //Final Egg 2 COL list
		((LandTable *)0x19C8ED0)->COLList = collist_00081980; //Final Egg 2 COL list
		WriteJump((void*)0x5ADC40, SetClip_FEgg2_r);
		DataArray(FogData, FinalEgg1Fog, 0x019C8FF0, 3);
		DataArray(FogData, FinalEgg2Fog, 0x019C9020, 3);
		for (int i = 0; i < 3; i++)
		{
			FinalEgg1Fog[i].Color = 0xFF000000;
			HMODULE palettelighting = GetModuleHandle(L"sadx-dc-lighting");
			if (palettelighting != 0)
			{
				FinalEgg1Fog[i].Layer = 1200.0f;
				FinalEgg1Fog[i].Distance = 3000.0f;
			}
			FinalEgg2Fog[i].Color = 0xFF000000;
			FinalEgg2Fog[i].Layer = 650.0f;
			FinalEgg2Fog[i].Distance = 2000.0f;
			FinalEgg2Fog[i].Toggle = 1;
		}
		memcpy((void*)0x19FEFE4, &object_001AEDFC, sizeof(object_001AEDFC));  // Light
		memcpy((void*)0x19D8BC0, &attach_015D8BC0, sizeof(attach_015D8BC0));  // Laser
	}
}