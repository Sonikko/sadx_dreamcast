#include "stdafx.h"
#include <SADXModLoader.h>

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		WriteData((void*)0x6353A0, 0xC3u, sizeof(void*));
	}
}

