//Final Egg 1 landtable has a smaller texture count (80 vs 82 in DX)
//Final Egg 2 landtable is not replaced at the moment, therefore the texture count is the same (76)
//Final Egg 3 landtable has the same texture count (90)
//The problem occurs when Final Egg 1 PVM is replaced with a texture pack based on the same PVM
//The problem gets worse when other Final Egg PVMs have texture packs
//Resizing the texture count in the texture pack seems to affect the problem, but it only influences which textures are wrong
//The problem doesn't occur when loading Act 2 directly, but it does occur when loading Act 1 and proceeding to Act 2 afterwards

#include "stdafx.h"
#include "SADXModLoader.h"
#include "FinalEgg1.h"
#include "FinalEgg3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB48, &landtable_0001D108), //Act 1
	//ptrdecl(0x97DB4C, &landtable_00083CCC), // Act 2 DC
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

	}
		
}