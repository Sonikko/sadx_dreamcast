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
		//Selection box B
		WriteData((void*)0x00458125, 0x00, 2);
		WriteData((void*)0x00458127, 0x80, 2);
		WriteData((void*)0x00458128, 0x3F, 1);
		//Selection box G
		WriteData((void*)0x0045812A, 0x33, 3);
		WriteData((void*)0x0045812D, 0x3F, 1);
		//Selection box R
		WriteData((void*)0x0045812F, 0, 4);
		//Kill Cream
		WriteData((void*)0x00634F40, 0xC3u, sizeof (void*));
	}
}

