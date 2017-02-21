#include "stdafx.h"
#include "SADXModLoader.h"

DataArray(PVMEntry, GUITexturePVMs, 0x007EECF0, 30);
DataArray(PVMEntry, GUITexturePVMs2, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITexturePVMs3, 0x007EEED0, 30);
DataArray(PVMEntry, GUITexturePVMs4, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITexturePVMs5, 0x007EF0B0, 30);

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		HMODULE DisableSA1Titlescreen = GetModuleHandle(L"DisableSA1Titlescreen");
		WriteData((void*)0x007DB831, 0x20, 1); //Space
		WriteData((void*)0x007DB832, 0x41, 1); //A
		WriteData((void*)0x007DB833, 0x64, 1); //D
		WriteData((void*)0x007DB834, 0x76, 1); //V
		WriteData((void*)0x007DB835, 0x65, 1); //E
		WriteData((void*)0x007DB836, 0x6E, 1); //N
		WriteData((void*)0x007DB837, 0x74, 1); //T
		WriteData((void*)0x007DB838, 0x75, 1); //U
		WriteData((void*)0x007DB839, 0x72, 1); //R
		WriteData((void*)0x007DB83A, 0x65, 1); //E
		WriteData((void*)0x007DB83B, 0x20, 1); //Space
		WriteData((void*)0x007DB83C, 0x20, 1); //Space
		WriteData((void*)0x007DB83D, 0x20, 1); //Space
		WriteData((void*)0x007DB83E, 0x20, 1); //Space
		WriteData((void*)0x007DB2E9, 0x20, 1); //Space
		if (DisableSA1Titlescreen == 0)
		{
		GUITexturePVMs[17].Name = "AVA_GTITLE0_ES";
		GUITexturePVMs[18].Name = "AVA_TITLE_CMNS";
		GUITexturePVMs[20].Name = "AVA_TITLE_BACK_ES";
		GUITexturePVMs[29].Name = "AVA_TITLE_CMN_SMALLS";

		GUITexturePVMs2[17].Name = "AVA_GTITLE0_ES";
		GUITexturePVMs2[18].Name = "AVA_TITLE_CMNS";
		GUITexturePVMs2[20].Name = "AVA_TITLE_BACK_ES";
		GUITexturePVMs2[29].Name = "AVA_TITLE_CMN_SMALLS";

		GUITexturePVMs3[17].Name = "AVA_GTITLE0_ES";
		GUITexturePVMs3[18].Name = "AVA_TITLE_CMNS";
		GUITexturePVMs3[20].Name = "AVA_TITLE_BACK_ES";
		GUITexturePVMs3[29].Name = "AVA_TITLE_CMN_SMALLS";

		GUITexturePVMs4[17].Name = "AVA_GTITLE0_ES";
		GUITexturePVMs4[18].Name = "AVA_TITLE_CMNS";
		GUITexturePVMs4[20].Name = "AVA_TITLE_BACK_ES";
		GUITexturePVMs4[29].Name = "AVA_TITLE_CMN_SMALLS";

		GUITexturePVMs5[17].Name = "AVA_GTITLE0_ES";
		GUITexturePVMs5[18].Name = "AVA_TITLE_CMNS";
		GUITexturePVMs5[20].Name = "AVA_TITLE_BACK_ES";
		GUITexturePVMs5[29].Name = "AVA_TITLE_CMN_SMALLS";
		WriteData((void*)0x0050E83B, 0x34, 1); //Disable titlescreen scrolling 1
		WriteData((void*)0x0050E83C, 0xF9, 1); //Disable titlescreen scrolling 2
		WriteData((void*)0x0050E5BB, 0x34, 1); //Disable titlescreen scrolling 1 (640x480)
		WriteData((void*)0x0050E5BC, 0xF9, 1); //Disable titlescreen scrolling 2 (640x480)
		}
		WriteData((void*)0x0042CCF3, 0x0F, 1); //Disable Sonic Team logo
		//Selection box B
		WriteData((void*)0x00458125, 0x00, 2);
		WriteData((void*)0x00458127, 0x80, 2);
		WriteData((void*)0x00458128, 0x3F, 1);
		//Selection box G
		WriteData((void*)0x0045812A, 0x33, 3);
		WriteData((void*)0x0045812D, 0x3F, 1);
		//Selection box R
		WriteData((void*)0x0045812F, 0, 4);
	}
}

