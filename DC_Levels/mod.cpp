#include "stdafx.h"
#include <SADXModLoader.h>
#include "stdlib.h"
#include <IniFile.hpp>
#include "DC_Levels.h"

static bool EnableDCBranding = true;

static bool EnableEmeraldCoast = true;
static bool EnableWindyValley = true;
static bool EnableTwinklePark = true;
static bool EnableSpeedHighway = true;
static bool EnableRedMountain = true;
static bool EnableSkyDeck = true;
static bool EnableLostWorld = true; 
static bool EnableIceCap = true;
static bool EnableCasinopolis = true;
static bool EnableFinalEgg = true;
static bool EnableHotShelter = true;
static bool EnableStationSquare = true;
static bool EnableMysticRuins = true;
static bool EnableEggCarrier = true;
static bool EnablePast = true;

static bool SADXWater_EmeraldCoast = false;
static bool SADXWater_StationSquare = false;
static bool SADXWater_MysticRuins = false;
static bool SADXWater_EggCarrier = false;
static bool SADXWater_Past = false;
static bool SADXWater_EggHornet = false;
static bool SADXWater_ZeroE101R = false;

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		//Config stuff
		//If there is no config.ini, make one
		CopyFileA((std::string(path) + "\\default.ini").c_str(), (std::string(path) + "\\config.ini").c_str(), true);
		const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
		//Read config stuff for levels and branding
		EnableDCBranding = config->getBool("General", "EnableDreamcastBranding", true);
		EnableEmeraldCoast = config->getBool("Levels", "EnableEmeraldCoast", true);
		EnableWindyValley = config->getBool("Levels", "EnableWindyValley", true);
		EnableTwinklePark = config->getBool("Levels", "EnableTwinklePark", true);
		EnableSpeedHighway = config->getBool("Levels", "EnableSpeedHighway", true);
		EnableRedMountain = config->getBool("Levels", "EnableRedMountain", true);
		EnableSkyDeck = config->getBool("Levels", "EnableSkyDeck", true);
		EnableLostWorld = config->getBool("Levels", "EnableLostWorld", true);
		EnableIceCap = config->getBool("Levels", "EnableIceCap", true);
		EnableCasinopolis = config->getBool("Levels", "EnableCasinopolis", true);
		EnableFinalEgg = config->getBool("Levels", "EnableFinalEgg", true);
		EnableHotShelter = config->getBool("Levels", "EnableHotShelter", true);
		EnableStationSquare = config->getBool("Levels", "EnableStationSquare", true);
		EnableMysticRuins = config->getBool("Levels", "EnableMysticRuins", true);
		EnableEggCarrier = config->getBool("Levels", "EnableEggCarrier", true);
		EnablePast = config->getBool("Levels", "EnablePast", true);
		delete config;
		//Init functions
		if (EnableDCBranding == true) Branding_Init(path, helperFunctions);
		if (EnableStationSquare == true) ADV00_Init(path, helperFunctions);
		if (EnableEggCarrier == true) ADV01_Init(path, helperFunctions);
		if (EnableMysticRuins == true) ADV02_Init(path, helperFunctions);
		if (EnablePast == true) ADV03_Init(path, helperFunctions);
		Bosses_Init(path, helperFunctions);
		if (EnableEmeraldCoast == true) EmeraldCoast_Init(path, helperFunctions);
		if (EnableWindyValley == true) WindyValley_Init(path, helperFunctions);
		if (EnableTwinklePark == true) TwinklePark_Init(path, helperFunctions);
		if (EnableSpeedHighway == true) SpeedHighway_Init(path, helperFunctions);
		if (EnableRedMountain == true) RedMountain_Init(path, helperFunctions);
		if (EnableSkyDeck == true) SkyDeck_Init(path, helperFunctions);
		if (EnableLostWorld == true) LostWorld_Init(path, helperFunctions);
		if (EnableIceCap == true) IceCap_Init(path, helperFunctions);
		if (EnableCasinopolis == true) Casinopolis_Init(path, helperFunctions);
		if (EnableFinalEgg == true) FinalEgg_Init(path, helperFunctions);
		if (EnableHotShelter == true) HotShelter_Init(path, helperFunctions);
		Subgames_Init(path, helperFunctions);
		ChaoGardens_Init(path, helperFunctions);
		General_Init(path, helperFunctions);
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (EnableDCBranding == true) Branding_OnFrame();
		if (EnableStationSquare == true) ADV00_OnFrame();
		if (EnableEggCarrier == true) ADV01_OnFrame();
		if (EnableMysticRuins == true) ADV02_OnFrame();
		if (EnablePast == true) ADV03_OnFrame();
		Bosses_OnFrame();
		if (EnableDCBranding == true) EmeraldCoast_OnFrame();
		if (EnableEmeraldCoast == true) WindyValley_OnFrame();
		if (EnableTwinklePark == true) TwinklePark_OnFrame();
		if (EnableSpeedHighway == true) SpeedHighway_OnFrame();
		if (EnableRedMountain == true) RedMountain_OnFrame();
		if (EnableSkyDeck == true) SkyDeck_OnFrame();
		if (EnableLostWorld == true) LostWorld_OnFrame();
		if (EnableIceCap == true) IceCap_OnFrame();
		if (EnableCasinopolis == true) Casinopolis_OnFrame();
		if (EnableFinalEgg == true) FinalEgg_OnFrame();
		if (EnableHotShelter == true) HotShelter_OnFrame();
		//Subgames_OnFrame();
		ChaoGardens_OnFrame();
		General_OnFrame();
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}