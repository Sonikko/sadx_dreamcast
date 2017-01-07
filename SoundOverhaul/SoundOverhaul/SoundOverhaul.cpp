#include "stdafx.h"
#include "SADXModLoader.h"

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		WriteData((void*)0x0053881F, 0x90u, 2);
	}
}