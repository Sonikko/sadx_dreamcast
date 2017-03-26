#include "stdafx.h"
#include "SADXModLoader.h"

DataArray(PVMEntry, GUITexturePVMs, 0x007EECF0, 30);
DataArray(PVMEntry, GUITexturePVMs2, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITexturePVMs3, 0x007EEED0, 30);
DataArray(PVMEntry, GUITexturePVMs4, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITexturePVMs5, 0x007EF0B0, 30);
static float vstretchx = 0.3525f;
extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		HMODULE DisableSA1Titlescreen = GetModuleHandle(L"DisableSA1Titlescreen");
		if (DisableSA1Titlescreen == 0 && float(HorizontalResolution) / float(VerticalResolution) < 2.2f)
		{
			if (float(HorizontalResolution) / float(VerticalResolution) < 1.5f) //Non-widescreen
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
			}
			if (float(HorizontalResolution) / float(VerticalResolution) > 1.5f) //Widescreen
			{
				GUITexturePVMs[17].Name = "AVA_GTITLE0_E1";
				GUITexturePVMs[18].Name = "AVA_TITLE_CMN1";
				GUITexturePVMs[20].Name = "AVA_TITLE_BACK_ES";
				GUITexturePVMs[29].Name = "AVA_TITLE_CMN_SMALLS";

				GUITexturePVMs2[17].Name = "AVA_GTITLE0_E1";
				GUITexturePVMs2[18].Name = "AVA_TITLE_CMN1";
				GUITexturePVMs2[20].Name = "AVA_TITLE_BACK_ES";
				GUITexturePVMs2[29].Name = "AVA_TITLE_CMN_SMALLS";

				GUITexturePVMs3[17].Name = "AVA_GTITLE0_E1";
				GUITexturePVMs3[18].Name = "AVA_TITLE_CMN1";
				GUITexturePVMs3[20].Name = "AVA_TITLE_BACK_ES";
				GUITexturePVMs3[29].Name = "AVA_TITLE_CMN_SMALLS";

				GUITexturePVMs4[17].Name = "AVA_GTITLE0_E1";
				GUITexturePVMs4[18].Name = "AVA_TITLE_CMN1";
				GUITexturePVMs4[20].Name = "AVA_TITLE_BACK_ES";
				GUITexturePVMs4[29].Name = "AVA_TITLE_CMN_SMALLS";

				GUITexturePVMs5[17].Name = "AVA_GTITLE0_E1";
				GUITexturePVMs5[18].Name = "AVA_TITLE_CMN1";
				GUITexturePVMs5[20].Name = "AVA_TITLE_BACK_ES";
				GUITexturePVMs5[29].Name = "AVA_TITLE_CMN_SMALLS";
			}
			WriteData((void*)0x0050E83B, 0x34, 1); //Disable titlescreen scrolling 1
			WriteData((void*)0x0050E83C, 0xF9, 1); //Disable titlescreen scrolling 2
			WriteData((void*)0x0050E5BB, 0x34, 1); //Disable titlescreen scrolling 1 (640x480)
			WriteData((void*)0x0050E5BC, 0xF9, 1); //Disable titlescreen scrolling 2 (640x480)
			WriteData((float*)0x0050FFAA, 191.0f); //PressStart texture
			WriteData((float*)0x0050FFB2, 363.0f); //PressStart texture
			WriteData((float*)0x0050E6E7, 0.0f); //Disable vertical offset
			WriteData((char*)0x0050E6C2, 0x34, 1); //Disable horizontal offset
			WriteData((char*)0x0050E6C3, 0xF9, 1); //Disable horizontal offset 
			WriteData((char*)0x0050E6C4, 0x7E, 1); //Disable horizontal offset
			WriteData((char*)0x0050E6C5, 0x00, 1); //Disable horizontal offset
			//Title screen vertical stretching
			WriteData((char*)0x0050E7C1, 0x98, 1);
			WriteData((char*)0x0050E7C2, 0xCC, 1);
			WriteData((char*)0x0050E7C3, 0x7D, 1);

			WriteData((char*)0x0050E761, 0x98, 1);
			WriteData((char*)0x0050E762, 0xCC, 1);
			WriteData((char*)0x0050E763, 0x7D, 1);
			WriteData((char*)0x0050E764, 0x00, 1);

			WriteData((char*)0x0050E701, 0x98, 1);
			WriteData((char*)0x0050E702, 0xCC, 1);
			WriteData((char*)0x0050E703, 0x7D, 1);
			WriteData((char*)0x0050E704, 0x00, 1);

			WriteData((char*)0x0050E6D2, 0x98, 1);
			WriteData((char*)0x0050E6D3, 0xCC, 1);
			WriteData((char*)0x0050E6D4, 0x7D, 1);
			WriteData((char*)0x0050E6D5, 0x00, 1);
			if (float(HorizontalResolution) / float(VerticalResolution) > 1.5f)
			{
				WriteData((char*)0x0050E6CC, 0xC0, 1);//Widescreen
				WriteData((char*)0x0050E6CD, 0x28, 1);//Widescreen
				WriteData((char*)0x0050E6CE, 0x89, 1);//Widescreen
				WriteData((char*)0x0050E6CF, 0x00, 1);//Widescreen
				WriteData((float*)0x0050FFAA, 207.0f); //PressStart texture X for widescreen
				WriteData((float*)0x0050FFB2, 375.0f); //PressStart texture Y for widescreen
				WriteData((float**)0x0050FFFF, &vstretchx); //Stretch the PressStart texture at 16:9
				if (float(HorizontalResolution) / float(VerticalResolution) > 1.8f) WriteData((float*)0x0050FFB2, 390.0f); //PressStart texture for widescreen 4K
				if (float(HorizontalResolution) / float(VerticalResolution) < 1.77f) WriteData((float*)0x0050FFB2, 360.0f); //PressStart texture Y for widescreen 1024x600
				if (float(HorizontalResolution) / float(VerticalResolution) < 1.77f) WriteData((float*)0x0050FFAA, 185.0f); //PressStart texture X for widescreen 1024x600
				if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) WriteData((float*)0x0050FFB2, 335.0f); //PressStart texture Y for widescreen 16:10
				if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) WriteData((float*)0x0050FFAA, 215.0f); //PressStart texture X for widescreen 16:10
			}
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

