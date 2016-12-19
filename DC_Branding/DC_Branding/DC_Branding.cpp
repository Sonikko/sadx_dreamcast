#include "stdafx.h"
#include "SADXModLoader.h"

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		WriteData((void*)0x0050E842, 0x90, 3);
		WriteData((void*)0x0050E864, 0x90, 3);
		WriteData((void*)0x0050E5C2, 0x90, 3);
		WriteData((void*)0x0050E5E2, 0x90, 3);
		WriteData((void*)0x0042CCF3, 0x0F, 1);
	}
}

