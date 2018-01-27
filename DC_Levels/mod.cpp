#include <SADXModLoader.h>
#include "DC_Levels.h"

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		ADV00_Init(path, helperFunctions);
		ADV01_Init(path, helperFunctions);
		ADV02_Init(path, helperFunctions);
		ADV03_Init(path, helperFunctions);
		Bosses_Init(path, helperFunctions);
		EmeraldCoast_Init(path, helperFunctions);
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		ADV00_OnFrame();
		ADV01_OnFrame();
		ADV02_OnFrame();
		ADV03_OnFrame();
		Bosses_OnFrame();
		EmeraldCoast_OnFrame();
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}