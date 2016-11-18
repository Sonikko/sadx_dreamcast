#include "stdafx.h"
#include "SADXModLoader.h"


extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl OnFrame()
	{
			Uint8 FogDist[4] = { 0x00u, 0x00u, 0x00u, 0x00u };
			WriteData((void*)0x03ABDC6C, (void*)FogDist, sizeof(char) * 4);
	}
}
