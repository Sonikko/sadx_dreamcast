#include "stdafx.h"
#include "SADXModLoader.h"


SoundFileInfo E101mkIISoundList_list[] = {
	{ 0, "COMMON_BANK00" },
	{ 1, "E101_BANK01" },
	{ 2, "CHECK_SHEET_BANK02" },
	{ 4, "E101R_BANK04" },
	{ 5, "" }
};

SoundFileInfo soundlist97_list[] = {
	{ 6, "E_00BF" }
};


SoundFileInfo FinalEggSoundList_list[] = {
	{ 0, "COMMON_BANK00" },
	{ 1, "FINAL_EGG_BANK01" },
	{ 2, "CHECK_SHEET_BANK02" },
	{ 4, "ENEMY_SET_BANK04" },
	{ 5, "FINAL_EGG_BANK05" }
};

SoundList FinalEggSoundList = { arraylengthandptr(FinalEggSoundList_list) };
SoundList E101mkIISoundList = { arraylengthandptr(E101mkIISoundList_list) };
SoundList soundlist97 = { arraylengthandptr(soundlist97_list) };

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		*(SoundList*)0x90FDD0 = E101mkIISoundList;
		*(SoundList*)0x90FFB8 = soundlist97;
		*(SoundList*)0x90FDE0 = FinalEggSoundList;
		WriteData((void*)0x0053881F, 0x90u, 2); // Enable ambient sound in MR Final Egg base
	}
}