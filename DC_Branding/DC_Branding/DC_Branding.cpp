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
		WriteData((void*)0x00458125, 0x66, 3);
		WriteData((void*)0x00458128, 0x3F, 1);
		WriteData((void*)0x0045812A, 0x9A, 1);
		WriteData((void*)0x0045812B, 0x99, 1);
		WriteData((void*)0x0045812C, 0x19, 1);
		WriteData((void*)0x0045812D, 0x3F, 1);
		WriteData((void*)0x0045812F, 0, 4);
	}
}

