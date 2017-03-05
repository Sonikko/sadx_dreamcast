#include "stdafx.h"
#include <SADXModLoader.h>

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		((LandTable *)0x3405E54)->COLList[74].Flags = 0x84000002; //EC garden ocean animation
	}
}
