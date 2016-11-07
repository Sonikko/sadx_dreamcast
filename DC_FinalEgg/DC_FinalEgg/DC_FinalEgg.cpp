#include "stdafx.h"
#include "SADXModLoader.h"
#include "FinalEgg1.h"
#include "FinalEgg2.h"
#include "FinalEgg3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB48, &landtable_0001D108),
	ptrdecl(0x97DB4C, &landtable_00083CCC),
	ptrdecl(0x97DB50, &landtable_000E67D0)
};


extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl OnFrame()
	{
		Uint8 FogColor[4] = { 0x00u, 0x00u, 0x00u, 0x00u };
		if (CurrentLevel == 10) WriteData((void*)0x03ABDC68, (void*)FogColor, sizeof(char) * 4);
	}
}

