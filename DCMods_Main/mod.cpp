#include "stdafx.h"
#include <SADXModLoader.h>
#include "stdlib.h"
#include <IniFile.hpp>
#include "DC_Levels.h"

bool EnableWindowTitle = true;
bool EnableDCBranding = true;
bool EnableEmeraldCoast = true;
bool EnableWindyValley = true;
bool EnableTwinklePark = true;
bool EnableSpeedHighway = true;
bool EnableRedMountain = true;
bool EnableSkyDeck = true;
bool EnableLostWorld = true; 
bool EnableIceCap = true;
bool EnableCasinopolis = true;
bool EnableFinalEgg = true;
bool EnableHotShelter = true;
bool EnableStationSquare = true;
bool EnableMysticRuins = true;
bool EnableEggCarrier = true;
bool EnablePast = true;
bool DisableAllVideoStuff = true;

static bool SADXWater_EmeraldCoast = false;
static bool SADXWater_StationSquare = false;
static bool SADXWater_MysticRuins = false;
static bool SADXWater_EggCarrier = false;
static bool SADXWater_Past = false;
static bool SADXWater_EggHornet = false;
static bool SADXWater_ZeroE101R = false;
static bool OldModsFound = false;

int EnableSETFixes = 1;

bool DLLLoaded_SA1Chars = false;
bool DLLLoaded_Lantern = false;
bool DLLLoaded_HDGUI = false;
bool DLLLoaded_DLCs = false;
bool DLLLoaded_SADXFE = false;
bool EnableSpeedFixes = true;

std::string OldModsMessage = "Old/incompatible mods detected!\n \nThe following mods are outdated and will cause problems if you leave them enabled. These mods are no longer needed because they are built into the main Dreamcast Conversion mod.\n \nPlease uninstall the following mods in the Mod Manager:\n \n";

std::string OldModDLLs[] = { 
	"DC_Bosses",
	"DC_Branding",
	"DC_ChaoGardens",
	"DC_Casinopolis",
	"DC_ADV00MODELS",
	"DC_ADV01MODELS",
	"DC_ADV02MODELS",
	"DC_ADV03MODELS",
	"DC_EmeraldCoast",
	"DC_EnvMaps",
	"DC_FinalEgg",
	"DC_General",
	"DC_HotShelter",
	"DC_IceCap",
	"DC_LostWorld",
	"DC_RedMountain",
	"DC_SkyDeck",
	"DC_SpeedHighway",
	"DC_TwinklePark",
	"DC_WindyValley",
	"DC_SubGames",
	"DC_TornadoModels",
	"DisableSA1TitleScreen",
	"KillCream",
	"RevertECDrawDistance",
	"SADXStyleWater",
	"MRFinalEggFix"
};

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		//Check which DLLs are loaded
		if (GetModuleHandle(TEXT("HD_GUI.dll")) != nullptr) DLLLoaded_HDGUI = true;
		if (GetModuleHandle(TEXT("SA1_Chars.dll")) != nullptr) DLLLoaded_SA1Chars = true;
		if (GetModuleHandle(TEXT("sadx-dc-lighting.dll")) != nullptr) DLLLoaded_Lantern = true;
		if (GetModuleHandle(TEXT("DLCs_Main.dll")) != nullptr) DLLLoaded_DLCs = true;
		if (GetModuleHandle(TEXT("sadx-fixed-edition.dll")) != nullptr) DLLLoaded_SADXFE = true;
		HMODULE WaterEffect = GetModuleHandle(L"WaterEffect");
		//Error messages
		if (helperFunctions.Version < 7)
		{
			MessageBoxA(WindowHandle, "Please update SADX Mod Loader. Dreamcast Conversion requires API version 7 or newer.",
				"DC Conversion error: Mod loader out of date", MB_OK | MB_ICONERROR);
			return;
		}
		//Check old mod DLLs
		for (int i = 0; i < LengthOfArray(OldModDLLs); i++)
		{
			LPCSTR OldModHandle = OldModDLLs[i].c_str();
			if (GetModuleHandleA(OldModHandle) != nullptr)
			{
				OldModsMessage += OldModDLLs[i] + "\n";
				OldModsFound = true;
			}
		}
		if (OldModsFound == true)
		{
			LPCSTR OldModsLPC = OldModsMessage.c_str();
			MessageBoxA(WindowHandle, OldModsLPC, "DC Conversion error: incompatible mods detected", MB_OK | MB_ICONERROR);
			return;
		}
		//If there is no config.ini, make one
		CopyFileA((std::string(path) + "\\default.ini").c_str(), (std::string(path) + "\\config.ini").c_str(), true);
		//Config stuff
		const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
		//Read config stuff for levels and branding
		EnableDCBranding = config->getBool("General", "EnableDreamcastBranding", true);
		EnableSpeedFixes = config->getBool("General", "EnableSpeedFixes", true);
		EnableWindowTitle = config->getBool("General", "EnableWindowTitle", true);
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
		DisableAllVideoStuff = config->getBool("Videos", "DisableAllVideoStuff", false);
		std::string EnableSETFixes_String = "Normal";
		EnableSETFixes_String = config->getString("Miscellaneous", "EnableSETFixes", "Normal");
		if (EnableSETFixes_String == "Off") EnableSETFixes = 0;
		if (EnableSETFixes_String == "Normal") EnableSETFixes = 1;
		if (EnableSETFixes_String == "Extra") EnableSETFixes = 2;
		delete config;
		//Set window title
		if (EnableWindowTitle == true) helperFunctions.SetWindowTitle("Sonic Adventure");
		//Another error message
		if (EnableEmeraldCoast == true && WaterEffect != nullptr)
		{
			MessageBoxA(WindowHandle, "The Enhanced Emerald Coast mod is not compatible with DC Emerald Coast. Please disable Enhanced Emerald Coast for the Dreamcast level to work. To get SADX-like water in DC Emerald Coast, enable SADX Style Water in Dreamcast Conversion's config.",
				"DC Conversion error: incompatible mod detected", MB_OK | MB_ICONERROR);
		}
		//Init functions
		if (EnableDCBranding == true) Branding_Init(path, helperFunctions);
		if (EnableStationSquare == true) ADV00_Init(path, helperFunctions);
		if (EnableEggCarrier == true) ADV01_Init(path, helperFunctions);
		FixMRBase_Apply(path, helperFunctions);
		if (EnableMysticRuins == true) ADV02_Init(path, helperFunctions);
		if (EnablePast == true) ADV03_Init(path, helperFunctions);
		Bosses_Init(path, helperFunctions);
		if (WaterEffect == nullptr && EnableEmeraldCoast == true) EmeraldCoast_Init(path, helperFunctions);
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
		SkyChaseFix_Init();
		Subgames_Init(path, helperFunctions);
		ChaoGardens_Init(path, helperFunctions);
		General_Init(path, helperFunctions);
		if (DisableAllVideoStuff == false) Videos_Init(path, helperFunctions);
		if (EnableSpeedFixes == true) SpeedFixes_Init();
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (EnableDCBranding == true) Branding_OnFrame();
		if (EnableStationSquare == true) ADV00_OnFrame();
		if (EnableEggCarrier == true) ADV01_OnFrame();
		if (EnableMysticRuins == true) ADV02_OnFrame();
		//if (EnablePast == true) ADV03_OnFrame();
		Bosses_OnFrame();
		if (EnableEmeraldCoast == true) EmeraldCoast_OnFrame();
		if (EnableWindyValley == true) WindyValley_OnFrame();
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
		if (DisableAllVideoStuff == false) Videos_OnFrame();
		if (EnableSpeedFixes == true) SpeedFixes_OnFrame();
	}
	__declspec(dllexport) void __cdecl OnInput()
	{
		if (DisableAllVideoStuff == false) Videos_OnInput();
		if (CutsceneSkipMode != 3) General_OnInput();
	}
	_declspec(dllexport) void __cdecl OnRenderDeviceReset()
	{
		SkyChaseFix_UpdateBounds();
	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}