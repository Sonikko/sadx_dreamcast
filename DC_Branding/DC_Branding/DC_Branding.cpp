#include "stdafx.h"
#include <SADXModLoader.h>

DataPointer(NJS_TEXLIST, ava_title_e_TEXLIST, 0x010D7C78);
DataPointer(NJS_TEXLIST, ava_title_back_e_TEXLIST, 0x010D7C80);
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


static float control_vertoffset = 455.0f;
static float control_hzoffset = 566.0f;
static float camera_vertoffset = 75.0f;
static float camera_hzoffset = 215.0f;

Sint32 __cdecl DrawAVA_TITLE_BACK_E_DC(float a1)
{
	float y; // ST08_4@1
	float x; // ST04_4@1
	float v3; // ST08_4@1
	float v4; // ST04_4@1
	float v5; // ST08_4@1
	float v6; // ST04_4@1
	float v7; // ST08_4@1
	float v8; // ST04_4@1
	float v9; // ST08_4@1
	float v10; // ST04_4@1
	float v11; // ST08_4@1
	float v12; // ST04_4@1
	float v13; // ST08_4@1
	float v14; // ST04_4@1
	float v15; // ST08_4@1
	float v16; // ST04_4@1
	NJS_TEXLIST *texturelist; // [sp+1Ch] [bp+4h]@1

	njSetTexture(&ava_title_e_TEXLIST);
	SetVtxColorB(0xFFFFFFFF);
	njSetTexture(&ava_title_back_e_TEXLIST);
	*(float *)&texturelist = a1 - 4.0f;
	y = HorizontalStretch * 0.0f;
	x = HorizontalStretch * 0.0f;
	DrawBG(0, x, y, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	v3 = HorizontalStretch * 256.0f;
	v4 = HorizontalStretch * 0.0f;
	DrawBG(1, v4, v3, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	v5 = HorizontalStretch * 0.0f;
	v6 = HorizontalStretch * 256.0f;
	DrawBG(2, v6, v5, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	v7 = HorizontalStretch * 256.0f;
	v8 = HorizontalStretch * 256.0f;
	DrawBG(3, v8, v7, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	v9 = HorizontalStretch * 0.0f;
	v10 = HorizontalStretch * 512.0f;
	DrawBG(4, v10, v9, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	v11 = HorizontalStretch * 128.0f;
	v12 = HorizontalStretch * 512.0f;
	DrawBG(5, v12, v11, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	v13 = HorizontalStretch * 256.0f;
	v14 = HorizontalStretch * 512.0f;
	DrawBG(6, v14, v13, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	v15 = HorizontalStretch * 384.0f;
	v16 = HorizontalStretch * 512.0f;
	DrawBG(7, v16, v15, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	return njSetTexture(&ava_title_e_TEXLIST);
}

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
			WriteJump((void*)0x50BA90, DrawAVA_TITLE_BACK_E_DC);
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
		WriteData((char*)0x00459106, 0x50, 1); //Controls X shift
		WriteData((char*)0x0045917E, 0x50, 1); //Controls X shift
		WriteData((float**)0x004584C6, &pausexpos); //Pause box X position
		WriteData((float*)0x00459070, 17.1f); //Controls X scale
		WriteData((float**)0x00459054, &control_vertoffset);
		WriteData((float**)0x00459039, &control_hzoffset);
		WriteData((float**)0x00458D4D, &camera_hzoffset);
		WriteData((float**)0x00458D68, &camera_vertoffset);
		WriteData((float*)0x00459077, 23.0f); //Y position (Controls)
		WriteData((float*)0x00458D78, 27.0f); //X position (Camera)
		WriteData((float*)0x00458D7F, 5.0f); //Y position (Camera)
		WriteCall((void*)0x004585C8, BoxBackgroundColor);
		WriteCall((void*)0x0045902F, BoxBackgroundColor);
		WriteCall((void*)0x00458DA9, BoxBackgroundColor);
		WriteData((float*)0x00458125, 1.0f); //Selection box B
		WriteData((float*)0x0045812A, 0.7f); //Selection box G
		WriteData((float*)0x0045812F, 0.0f); //Selection box R
	}
}

/*Pause box Y scale disabled
WriteData((float*)0x0045852C, 17.15f); //Pause box Y scale (4 options)
WriteData((float*)0x00458523, 11.7f); //Pause box Y scale (3 options)
WriteData((float*)0x00458511, 17.9f); //Pause box Y scale (5 options)
WriteData((char*)0x0045850C, 0x7C, 1); //Change condition from "if <= 5 options" to "if < 5 options"
WriteData((char*)0x0045851E, 0x74, 1); //Change condition from "if >= 4 options" to "if = 4 options"
/*	__declspec(dllexport) void __cdecl OnFrame()
{
//Mission mode fix because SADX sucks
if (GameMode == GameModes_Mission && (CurrentLevel != 33 && CurrentAct != 3)) WriteData((float*)0x00458511, 21.0f); //Pause box Y scale (6 options)
else WriteData((float*)0x00458511, 17.9f); //Pause box Y scale (5 options)
}*/
