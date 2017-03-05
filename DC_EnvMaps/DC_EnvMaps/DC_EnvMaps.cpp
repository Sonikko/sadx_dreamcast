#include "stdafx.h"
#include <SADXModLoader.h>

DataPointer(float, EnvMap1, 0x038A5DD0);
DataPointer(float, EnvMap2, 0x038A5DE4);
DataPointer(float, EnvMap3, 0x038A5E00);
DataPointer(float, EnvMap4, 0x038A5E04);

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 20)
		{
			EnvMap1 = 2.0f;
			EnvMap2 = 2.0f;
			EnvMap3 = 0.5f;
			EnvMap4 = 0.5f;
		}
		else
		{
			EnvMap1 = 0.5f;
			EnvMap2 = 0.5f;
			EnvMap3 = 0.5f;
			EnvMap4 = 0.5f;
		}
	}
}

