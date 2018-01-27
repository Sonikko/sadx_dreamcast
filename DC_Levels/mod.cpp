#include <SADXModLoader.h>
#include "stdlib.h"
#include <IniFile.hpp>
#include "DC_Levels.h"

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		//Config stuff
		//If there is no config.ini, make one
		CopyFileA((std::string(path) + "\\default.ini").c_str(), (std::string(path) + "\\config.ini").c_str(), true);
		ADV00_Init(path, helperFunctions);
		ADV01_Init(path, helperFunctions);
		ADV02_Init(path, helperFunctions);
		ADV03_Init(path, helperFunctions);
		Bosses_Init(path, helperFunctions);
		EmeraldCoast_Init(path, helperFunctions);
		WindyValley_Init(path, helperFunctions);
		TwinklePark_Init(path, helperFunctions);
		SpeedHighway_Init(path, helperFunctions);
		RedMountain_Init(path, helperFunctions);
		SkyDeck_Init(path, helperFunctions);
		LostWorld_Init(path, helperFunctions);
		IceCap_Init(path, helperFunctions);
		Casinopolis_Init(path, helperFunctions);
		FinalEgg_Init(path, helperFunctions);
		HotShelter_Init(path, helperFunctions);
		Subgames_Init(path, helperFunctions);
		ChaoGardens_Init(path, helperFunctions);
		General_Init(path, helperFunctions);
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		ADV00_OnFrame();
		ADV01_OnFrame();
		ADV02_OnFrame();
		ADV03_OnFrame();
		Bosses_OnFrame();
		EmeraldCoast_OnFrame();
		WindyValley_OnFrame();
		TwinklePark_OnFrame();
		SpeedHighway_OnFrame();
		RedMountain_OnFrame();
		SkyDeck_OnFrame();
		LostWorld_OnFrame();
		IceCap_OnFrame();
		Casinopolis_OnFrame();
		FinalEgg_OnFrame();
		HotShelter_OnFrame();
		//Subgames_OnFrame();
		ChaoGardens_OnFrame();
		General_OnFrame();
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}