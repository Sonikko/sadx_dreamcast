#include "stdafx.h"
#include "SADXModLoader.h"

DataArray(PVMEntry, GUITexturePVMs, 0x007EECF0, 30);
DataArray(PVMEntry, GUITexturePVMs2, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITexturePVMs3, 0x007EEED0, 30);
DataArray(PVMEntry, GUITexturePVMs4, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITexturePVMs5, 0x007EF0B0, 30);

static float pausexpos = 137.0f;
static float vstretchx = 0.3525f;
static float vstretchz = 0.4025f;
static float rewritestretch = 0.5f;
static float zero = 0.0f;
static float one = 1.0f;
static float minus1 = -1.0f;
static float f128 = 128.0f;
static float f256 = 256.0f;
static float f512 = 512.0f;
static float f384 = 384.0f;
static float f768 = 768.0f;
static float gamestretch = 0.0f;
static float control_vertoffset = 455.0f;
static float control_hzoffset = 566.0f;
static float camera_vertoffset = 75.0f;
static float camera_hzoffset = 215.0f;
static float vertoffset = 0.0f;
static float vertoffset128 = 128.0f;
static float vertoffset256 = 256.0f;
static float vertoffset384 = 384.0f;

void BoxBackgroundColor()
{
	SetMaterialAndSpriteColor_Float(0.8f, 1.0f, 1.0f, 1.0f);
}

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
			if (float(HorizontalResolution) / float(VerticalResolution) >= 1.5f) //Widescreen
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
			//Main menu BG
			WriteData((float**)0x0050BAB7, (float*)0x008928C0);
			WriteData((float**)0x0050BAFA, (float*)0x008928C0);
			WriteData((float**)0x0050BB3A, (float*)0x008928C0);
			WriteData((float**)0x0050BB46, (float*)0x008928C0);
			WriteData((float**)0x0050BABD, (float*)0x008928C0);
			WriteData((float**)0x0050BB74, (float*)0x008928C0);
			WriteData((float**)0x0050BB80, (float*)0x008928C0);
			WriteData((float**)0x0050BBA9, (float*)0x008928C0);
			WriteData((float**)0x0050BBB1, (float*)0x008928C0);
			WriteData((float**)0x0050BBB7, (float*)0x008928C0);
			WriteData((float**)0x0050BBE3, (float*)0x008928C0);
			WriteData((float**)0x0050BBE9, (float*)0x008928C0);
			WriteData((float**)0x0050BBF5, (float*)0x008928C0);
			WriteData((float**)0x0050BC1E, (float*)0x008928C0);
			WriteData((float**)0x0050BC23, (float*)0x008928C0);
			WriteData((float**)0x0050BC2F, (float*)0x008928C0);
			WriteData((float**)0x0050BC58, (float*)0x008928C0);
			WriteData((float**)0x0050BC5E, (float*)0x008928C0);
			WriteData((float**)0x0050BC69, (float*)0x008928C0);
			WriteData((float**)0x0050BB34, (float*)0x008928C0);
			WriteData((float**)0x0050BB6F, (float*)0x008928C0);
			WriteData((float**)0x0050BB00, (float*)0x008928C0);
			WriteData((float**)0x0050BB0B, (float*)0x008928C0);
			WriteData((float**)0x0050BB0B, (float*)0x008928C0);
			//vertoffset = 0.5f*(480.0f - (float(VerticalResolution) / float(HorizontalResolution / 640.0f)))-1.0f;
			vertoffset = 0.0f;
			vertoffset128 = 128.0f;
			vertoffset256 = 256.0f;
			vertoffset384 = 384.0f;
			WriteData((float**)0x0050BAD5, &vertoffset);
			WriteData((float**)0x0050BB06, &vertoffset256);
			WriteData((float**)0x0050BB40, &vertoffset);
			WriteData((float**)0x0050BB7A, &vertoffset256);
			WriteData((float**)0x0050BBBD, &vertoffset);
			WriteData((float**)0x0050BBEF, &vertoffset128);
			WriteData((float**)0x0050BC29, &vertoffset256);
			WriteData((float**)0x0050BC64, &vertoffset384);
			//Scrolling
			WriteData((float**)0x0050E83B, &zero); //Disable titlescreen scrolling 
			WriteData((float**)0x0050E5BB, &zero); //Disable titlescreen scrolling (640x480)
			//Offset
			WriteData((float**)0x0050E6C2, &zero); //Disable horizontal offset
			WriteData((float*)0x0050E6E7, -1.0f); //Disable vertical offset row 1
			WriteData((float**)0x0050E73D, &one); //Disable vertical offset row 2
			WriteData((float**)0x0050E79D, &one); //Disable vertical offset row 3
			WriteData((float**)0x0050E7FD, &one); //Disable vertical offset row 4
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
		//Pause box stuff
		WriteData((float*)0x00458501, 17.1f); //Pause box X scale
		WriteData((float*)0x0045852C, 18.0f); //Pause box Y scale (5+ options)
		WriteData((float*)0x00458523, 17.5f); //Pause box Y scale (4 options)
		WriteData((char*)0x0045851D, 0x05, 1); //Check if pause box has 4 or 5 options
		WriteData((char*)0x00459106, 0x50, 1); //Controls X shift
		WriteData((char*)0x0045917E, 0x50, 1); //Controls X shift
		WriteData((float**)0x004584C6, &pausexpos); //Pause box X position
		WriteData((float*)0x00459070, 17.1f); //Controls X scale
		WriteData((float**)0x00459054, &control_vertoffset);
		WriteData((float**)0x00459039, &control_hzoffset);
		WriteData((float**)0x00458D4D, &camera_hzoffset);
		WriteData((float**)0x00458D68, &camera_vertoffset);
		WriteData((float*)0x00459077, 23.0f);
		WriteData((float*)0x00458D78, 27.0f);
		WriteData((float*)0x00458D7F, 5.0f);
		WriteCall((void*)0x004585C8, BoxBackgroundColor);
		WriteCall((void*)0x0045902F, BoxBackgroundColor);
		WriteCall((void*)0x00458DA9, BoxBackgroundColor);
		WriteData((float*)0x00458125, 1.0f); //Selection box B
		WriteData((float*)0x0045812A, 0.7f); //Selection box G
		WriteData((float*)0x0045812F, 0.0f); //Selection box R
	}
}

