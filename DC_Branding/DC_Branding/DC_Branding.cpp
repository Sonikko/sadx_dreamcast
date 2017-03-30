#include "stdafx.h"
#include "SADXModLoader.h"

DataArray(PVMEntry, GUITexturePVMs, 0x007EECF0, 30);
DataArray(PVMEntry, GUITexturePVMs2, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITexturePVMs3, 0x007EEED0, 30);
DataArray(PVMEntry, GUITexturePVMs4, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITexturePVMs5, 0x007EF0B0, 30);

static float vstretchx = 0.3525f;
static float vstretchz = 0.4025f;
static float rewritestretch = 0.5f;
static float zero = 0.0f;
static float f256 = 256.0f;
static float f512 = 512.0f;
static float f768 = 768.0f;
static float gamestretch = 0.0f;

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		HMODULE DisableSA1Titlescreen = GetModuleHandle(L"DisableSA1Titlescreen");
		if (DisableSA1Titlescreen == 0 && float(HorizontalResolution) / float(VerticalResolution) < 2.2f)
		{
			//PVMs
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
				GUITexturePVMs[20].Name = "AVA_TITLE_BACK_E1";
				GUITexturePVMs[29].Name = "AVA_TITLE_CMN_SMALLS";

				GUITexturePVMs2[17].Name = "AVA_GTITLE0_E1";
				GUITexturePVMs2[18].Name = "AVA_TITLE_CMN1";
				GUITexturePVMs2[20].Name = "AVA_TITLE_BACK_E1";
				GUITexturePVMs2[29].Name = "AVA_TITLE_CMN_SMALLS";

				GUITexturePVMs3[17].Name = "AVA_GTITLE0_E1";
				GUITexturePVMs3[18].Name = "AVA_TITLE_CMN1";
				GUITexturePVMs3[20].Name = "AVA_TITLE_BACK_E1";
				GUITexturePVMs3[29].Name = "AVA_TITLE_CMN_SMALLS";

				GUITexturePVMs4[17].Name = "AVA_GTITLE0_E1";
				GUITexturePVMs4[18].Name = "AVA_TITLE_CMN1";
				GUITexturePVMs4[20].Name = "AVA_TITLE_BACK_E1";
				GUITexturePVMs4[29].Name = "AVA_TITLE_CMN_SMALLS";

				GUITexturePVMs5[17].Name = "AVA_GTITLE0_E1";
				GUITexturePVMs5[18].Name = "AVA_TITLE_CMN1";
				GUITexturePVMs5[20].Name = "AVA_TITLE_BACK_E1";
				GUITexturePVMs5[29].Name = "AVA_TITLE_CMN_SMALLS";
			}
			//Main menu
			gamestretch = float(HorizontalResolution)/1280.0f;
			WriteData((float**)0x0050BAB7, &gamestretch);
			WriteData((float**)0x0050BAFA, &gamestretch);
			WriteData((float**)0x0050BB3A, &gamestretch);
			WriteData((float**)0x0050BB46, &gamestretch);
			WriteData((float**)0x0050BABD, &gamestretch);
			WriteData((float**)0x0050BB74, &gamestretch);
			WriteData((float**)0x0050BB80, &gamestretch);
			WriteData((float**)0x0050BBA9, &gamestretch);
			WriteData((float**)0x0050BBB1, &gamestretch);
			WriteData((float**)0x0050BBB7, &gamestretch);
			WriteData((float**)0x0050BBE3, &gamestretch);
			WriteData((float**)0x0050BBE9, &gamestretch);
			WriteData((float**)0x0050BBF5, &gamestretch);
			WriteData((float**)0x0050BC1E, &gamestretch);
			WriteData((float**)0x0050BC23, &gamestretch);
			WriteData((float**)0x0050BC2F, &gamestretch);
			WriteData((float**)0x0050BC58, &gamestretch);
			WriteData((float**)0x0050BC5E, &gamestretch);
			WriteData((float**)0x0050BC69, &gamestretch);
			WriteData((float**)0x0050BB34, &gamestretch);
			WriteData((float**)0x0050BB6F, &gamestretch);
			WriteData((float**)0x0050BB00, &gamestretch);
			WriteData((float**)0x0050BB0B, &gamestretch);
			WriteData((float**)0x0050BB0B, &gamestretch);
			WriteData((float**)0x0050BC64, &f768);
			WriteData((float**)0x0050BBEF, &f256);
			WriteData((float**)0x0050BB06, &f256);
			WriteData((float**)0x0050BB7A, &f256);
			WriteData((float**)0x0050BC29, &f512);
			WriteData((float**)0x0050BB06, &f512);
			WriteData((float**)0x0050BB7A, &f512);
			WriteData((float**)0x0050BBBD, &zero);
			WriteData((float**)0x0050BAD5, &zero);
			WriteData((float**)0x0050BB40, &zero);
			//Scrolling
			WriteData((float**)0x0050E83B, &zero); //Disable titlescreen scrolling 
			WriteData((float**)0x0050E5BB, &zero); //Disable titlescreen scrolling (640x480)
			//Offset
			WriteData((float**)0x0050E6C2, &zero); //Disable horizontal offset
			WriteData((float*)0x0050E6E7, 0.0f); //Disable vertical offset row 1
			WriteData((float**)0x0050E73D, &zero); //Disable vertical offset row 2
			WriteData((float**)0x0050E79D, &zero); //Disable vertical offset row 3
			WriteData((float**)0x0050E7FD, &zero); //Disable vertical offset row 4
			//PressStart for 4:3
			WriteData((float*)0x0050FFAA, 191.0f); //PressStart texture X
			WriteData((float*)0x0050FFB2, 363.0f); //PressStart texture Y
			//Title screen vertical stretching
			WriteData((float**)0x0050E7C1, &rewritestretch);
			WriteData((float**)0x0050E761, &rewritestretch);
			WriteData((float**)0x0050E701, &rewritestretch);
			WriteData((float**)0x0050E6D2, &rewritestretch);
			if (float(HorizontalResolution) / float(VerticalResolution) > 1.5f)
			{
				WriteData((float**)0x0050E6CC, (float*)0x008928C0); //Widescreen
				WriteData((float**)0x0050E6FB, (float*)0x008928C0); //Widescreen
				WriteData((float**)0x0050E75B, (float*)0x008928C0); //Widescreen
				WriteData((float**)0x0050E7BB, (float*)0x008928C0); //Widescreen
				WriteData((float*)0x0050FFAA, 207.0f); //PressStart texture X for widescreen
				WriteData((float*)0x0050FFB2, 375.0f); //PressStart texture Y for widescreen
				WriteData((float**)0x0050FFFF, &vstretchx); //Stretch the PressStart texture at 16:9
				if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) WriteData((float**)0x0050FFFF, &vstretchz); //Stretch the PressStart texture at 16:10
				if (float(HorizontalResolution) / float(VerticalResolution) > 1.8f) WriteData((float*)0x0050FFB2, 390.0f); //PressStart texture for widescreen 4K
				if (float(HorizontalResolution) / float(VerticalResolution) < 1.77f) WriteData((float*)0x0050FFB2, 360.0f); //PressStart texture Y for widescreen 1024x600
				if (float(HorizontalResolution) / float(VerticalResolution) < 1.77f) WriteData((float*)0x0050FFAA, 215.0f); //PressStart texture X for widescreen 1024x600
				if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) WriteData((float*)0x0050FFB2, 335.0f); //PressStart texture Y for widescreen 16:10
				if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) WriteData((float*)0x0050FFAA, 190.0f); //PressStart texture X for widescreen 16:10
			}
		}
		WriteData((void*)0x0042CCF3, 0x0F, 1); //Disable Sonic Team logo
		WriteData((float*)0x00458125, 1.0f); //Selection box B
		WriteData((float*)0x0045812A, 0.7f); //Selection box G
		WriteData((float*)0x0045812F, 0.0f); //Selection box R
	}
}

