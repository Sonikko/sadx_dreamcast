#include "stdafx.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>

DataPointer(NJS_TEXLIST, ava_title_e_TEXLIST, 0x010D7C78);
DataPointer(NJS_TEXLIST, ava_title_back_e_TEXLIST, 0x010D7C80);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataArray(PVMEntry, GUITexturePVMs, 0x007EECF0, 30);
DataArray(PVMEntry, GUITexturePVMs2, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITexturePVMs3, 0x007EEED0, 30);
DataArray(PVMEntry, GUITexturePVMs4, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITexturePVMs5, 0x007EF0B0, 30);

static int titleframe = 0;
static int titledrawn = -1;
static int logoframe = 0;
static int logodrawn = -1;
static int startframe = 0;
static int startdrawn = -1;

//Ini stuff
static bool RipplesOn = true;
static bool DisableSA1Titlescreen = false;
static bool DisableFade = true;
static bool DrawOverlay = true;
static int TextOffsetX = 0;
static int TextOffsetY = 0;
static int SonicTeamOffsetX = 0;
static int SonicTeamOffsetY = 0;
static int PressStartOffsetX = 0;
static int PressStartOffsetY = 0;
static int LogoOffsetX = 0;
static int LogoOffsetY = 0;
static float LogoScaleX = 1.0f;
static float LogoScaleY = 1.0f;
static int BackgroundOffsetX = 0;
static int BackgroundOffsetY = 0;
static float BackgroundScaleX = 1.0f;
static float BackgroundScaleY = 1.0f;

Uint8 options;

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
	float xpos = 0;
	float ypos = 0;
	float scaleX = 0;
	float scaleY = 0;
	int tn = 0;
	int surfacesucks = 0;
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
	njTextureShadingMode(1);
	njSetTexture(&ava_title_e_TEXLIST);
	SetVtxColorB(0xFFFFFFFF);
	njSetTexture(&ava_title_back_e_TEXLIST);
	*(float *)&texturelist = a1 - 4.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) surfacesucks = -48.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) >= 2.2f) surfacesucks = -96.0f;
	//Draw main menu BG
	xpos = BackgroundOffsetX * HorizontalStretch * BackgroundScaleX;
	ypos = BackgroundOffsetY *  (VerticalStretch*rewritestretch) * BackgroundScaleY;
	scaleX = HorizontalStretch * 0.5f * BackgroundScaleX;
	scaleY = VerticalStretch * rewritestretch * BackgroundScaleY;
	DrawBG(tn, xpos, ypos, *(float *)&texturelist, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 256.0f)* HorizontalStretch * BackgroundScaleX;
	ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
	DrawBG(tn + 1, xpos, ypos, *(float *)&texturelist, scaleX, scaleY);

	xpos = BackgroundOffsetX* HorizontalStretch * BackgroundScaleX;
	ypos = (VerticalStretch*rewritestretch) * (512.0f + BackgroundOffsetY)*BackgroundScaleY;
	DrawBG(tn + 2, xpos, ypos, *(float *)&texturelist, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 256.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = (VerticalStretch*rewritestretch) * (512.0f + BackgroundOffsetY)*BackgroundScaleY;
	DrawBG(tn + 3, xpos, ypos, *(float *)&texturelist, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
	DrawBG(tn + 4, xpos, ypos, *(float *)&texturelist, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 256.0f)*BackgroundScaleY;
	DrawBG(tn + 5, xpos, ypos, *(float *)&texturelist, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 512.0f)*BackgroundScaleY;
	DrawBG(tn + 6, xpos, ypos, *(float *)&texturelist, scaleX, scaleY);

	xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
	ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 768.0f)*BackgroundScaleY;
	DrawBG(tn + 7, xpos, ypos, *(float *)&texturelist, scaleX, scaleY);
	DrawBG(7, v16, v15, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	//Draw logo
	DrawBG(8, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, *(float *)&texturelist, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
	//Draw logo overlay
	if (DrawOverlay == true) DrawBG(9, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, *(float *)&texturelist, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
	return njSetTexture(&ava_title_e_TEXLIST);
}

void BoxBackgroundColor()
{
	SetMaterialAndSpriteColor_Float(0.8f, 1.0f, 1.0f, 1.0f);
}

void DrawTitleBG()
{
	int tn;
	float xpos;
	float ypos;
	float scaleX;
	float scaleY;
	if (!DroppedFrames)
	{
		if (titledrawn != titleframe)
		{
			if (titleframe > 22) titleframe = 0;
			if (RipplesOn == false) tn = 0; else tn = 8 + (titleframe * 8);
			xpos = BackgroundOffsetX * HorizontalStretch * BackgroundScaleX;
			ypos = BackgroundOffsetY *  (VerticalStretch*rewritestretch) * BackgroundScaleY;
			scaleX = HorizontalStretch * 0.5f * BackgroundScaleX;
			scaleY = VerticalStretch * rewritestretch * BackgroundScaleY;
			DrawBG(tn, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = (BackgroundOffsetX + 256.0f)* HorizontalStretch * BackgroundScaleX;
			ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
			DrawBG(tn + 1, xpos, ypos, 2.0f, scaleX, scaleY);
			
			xpos = BackgroundOffsetX* HorizontalStretch * BackgroundScaleX;
			ypos = (VerticalStretch*rewritestretch) * (512.0f+BackgroundOffsetY)*BackgroundScaleY;
			DrawBG(tn + 2, xpos, ypos, 2.0f, scaleX, scaleY);
			
			xpos = (BackgroundOffsetX + 256.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = (VerticalStretch*rewritestretch) * (512.0f + BackgroundOffsetY)*BackgroundScaleY;
			DrawBG(tn + 3, xpos, ypos, 2.0f, scaleX, scaleY);
			
			xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
			DrawBG(tn + 4, xpos, ypos, 2.0f, scaleX, scaleY);
			
			xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY+256.0f)*BackgroundScaleY;
			DrawBG(tn + 5, xpos, ypos, 2.0f, scaleX, scaleY);
			
			xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY+512.0f)*BackgroundScaleY;	
			DrawBG(tn + 6, xpos, ypos, 2.0f, scaleX, scaleY);
			
			xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY+768.0f)*BackgroundScaleY;
			DrawBG(tn + 7, xpos, ypos, 2.0f, scaleX, scaleY);
			titledrawn = titleframe;
		}
	}
}

void DrawLogo()
{
	float surfacesucks = 0.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) surfacesucks = -48.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) > 2.2f)  surfacesucks = -96.0f;
	if (logodrawn != logoframe)
	{
		njTextureShadingMode(1);
		njSetTexture((NJS_TEXLIST*)0x010D7C48); //AVA_GTITLE0_E
		if (logoframe > 128) logoframe = 0;
		//Draw logo
		DrawBG(0, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, 1.2f, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
		//Draw logo overlay
		if (DrawOverlay == true) DrawBG(1, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, 1.2f, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
		//Disable this stuff for ultra wide screens because there isn't enough space
		if (float(HorizontalResolution) / float(VerticalResolution) < 2.2f)
		{
			//Draw Sonic Team logo
			DrawBG(2, (320 - 32 + SonicTeamOffsetX)*HorizontalStretch, (64 + surfacesucks + SonicTeamOffsetY)*VerticalStretch* rewritestretch, 1.2f, HorizontalStretch * 0.5f, VerticalStretch * rewritestretch);
			//Draw copyright text
			DrawBG(3, (64 + TextOffsetX)*HorizontalStretch, (960 - 168 + TextOffsetY + surfacesucks)*VerticalStretch* rewritestretch, 1.2f, HorizontalStretch * 0.5f, VerticalStretch * rewritestretch);
		}
		logodrawn = logoframe;
	}
}


void DrawPressStart()
{
	float yoff = 112.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) < 1.5f) yoff = 112.0f; //4:3
	if (float(HorizontalResolution) / float(VerticalResolution) > 1.6f) yoff = 82.0f; //16:9
	if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) yoff = 120.0f; //16:10
	if (float(HorizontalResolution) / float(VerticalResolution) <= 1.3f) yoff = 134; //5:4
	if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) yoff = 92.0f; //3:2
	if (float(HorizontalResolution) / float(VerticalResolution) > 2.2f) yoff = 48.0f; //Ultra wide
	if (startdrawn != startframe)
	{
		if (startframe > 128) startframe = 0;
		DrawBG(8, HorizontalStretch*(320.0f - 128.0f+PressStartOffsetX), VerticalResolution - HorizontalStretch*(yoff-PressStartOffsetY), 1.1f, HorizontalStretch * 0.5f, VerticalStretch * rewritestretch);
	}
	startdrawn = startframe;
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void Init(const char *path, const HelperFunctions &helperFunctions)
	{
		//Set up normal/widescreen setting
		std::string SectionName;
		if (float(HorizontalResolution) / float(VerticalResolution) > 1.5f) SectionName = "Widescreen"; else SectionName = "Normal";
		//Load defaults first
		const IniFile *defaults = new IniFile(std::string(path) + "\\default.ini");
		RipplesOn = defaults->getBool("", "RippleEffect", true);
		DisableFade = defaults->getBool("", "DisableFade", true);
		DisableSA1Titlescreen = defaults->getBool("", "DisableSA1TitleScreen", false);
		DrawOverlay = defaults->getBool("", "DrawOverlay", true);
		TextOffsetX = defaults->getInt(SectionName, "CopyrightOffsetX", 0);
		TextOffsetY = defaults->getInt(SectionName, "CopyrightOffsetY", 0);
		PressStartOffsetX = defaults->getInt(SectionName, "PressStartOffsetX", 0);
		PressStartOffsetY = defaults->getInt(SectionName, "PressStartOffsetY", 0);
		SonicTeamOffsetX = defaults->getInt(SectionName, "SonicTeamOffsetX", 0);
		SonicTeamOffsetY = defaults->getInt(SectionName, "SonicTeamOffsetY", 0);
		BackgroundOffsetX = defaults->getInt(SectionName, "BackgroundOffsetX", -16);
		BackgroundOffsetY = defaults->getInt(SectionName, "BackgroundOffsetY", 0);
		BackgroundScaleX = defaults->getFloat(SectionName, "BackgroundScaleX", 1.0f);
		BackgroundScaleY = defaults->getFloat(SectionName, "BackgroundScaleY", 1.0f);
		LogoOffsetX = defaults->getInt(SectionName, "LogoOffsetX", 64);
		LogoOffsetY = defaults->getInt(SectionName, "LogoOffsetY", 220);
		LogoScaleX = defaults->getFloat(SectionName, "LogoScaleX", 1.0f);
		LogoScaleY = defaults->getFloat(SectionName, "LogoScaleY", 1.0f);
		delete defaults;
		//If there is no config.ini, make one
		CopyFileA((std::string(path) + "\\default.ini").c_str(), (std::string(path) + "\\config.ini").c_str(), true);
		//Check if config.ini is from an old version; if so, delete config.ini
		const IniFile *checkthing = new IniFile(std::string(path) + "\\config.ini");
		if (!checkthing->hasKey("", "DrawOverlay"))
		{
			delete checkthing;
			DeleteFileA((std::string(path) + "\\config.ini").c_str());
		}
		//If there is no config.ini, make one
		CopyFileA((std::string(path) + "\\default.ini").c_str(), (std::string(path) + "\\config.ini").c_str(), true);
		//Set up settings
		const IniFile *settings = new IniFile(std::string(path) + "\\config.ini");
		RipplesOn = settings->getBool("", "RippleEffect", true);
		DisableSA1Titlescreen = settings->getBool("", "DisableSA1TitleScreen", false);
		DrawOverlay = settings->getBool("", "DrawOverlay", true);
		DisableFade = settings->getBool("", "DisableFade", true);
		TextOffsetX = settings->getInt(SectionName, "CopyrightOffsetX", 0);
		TextOffsetY = settings->getInt(SectionName, "CopyrightOffsetY", 0);
		PressStartOffsetX = settings->getInt(SectionName, "PressStartOffsetX", 0);
		PressStartOffsetY = settings->getInt(SectionName, "PressStartOffsetY", 0);
		SonicTeamOffsetX = settings->getInt(SectionName, "SonicTeamOffsetX", 0);
		SonicTeamOffsetY = settings->getInt(SectionName, "SonicTeamOffsetY", 0);
		BackgroundOffsetX = settings->getInt(SectionName, "BackgroundOffsetX", -16);
		BackgroundOffsetY = settings->getInt(SectionName, "BackgroundOffsetY", 0);
		BackgroundScaleX = settings->getFloat(SectionName, "BackgroundScaleX", 1.0f);
		BackgroundScaleY = settings->getFloat(SectionName, "BackgroundScaleY", 1.0f);
		LogoOffsetX = settings->getInt(SectionName, "LogoOffsetX", 64);
		LogoOffsetY = settings->getInt(SectionName, "LogoOffsetY", 220);
		LogoScaleX = settings->getFloat(SectionName, "LogoScaleX", 1.0f);
		LogoScaleY = settings->getFloat(SectionName, "LogoScaleY", 1.0f);
		delete settings;
		//Main code
		if (DisableSA1Titlescreen == false)
		{
			//Kill titlescreen fade
			if (DisableFade == true) WriteData((char*)0x0050E49B, 0x90, 5);
			ResizeTextureList((NJS_TEXLIST*)0x010D7C80, 10);
			WriteJump((void*)0x50BA90, DrawAVA_TITLE_BACK_E_DC);
			//PVMs
			GUITexturePVMs[17].Name = "AVA_GTITLE0_ES";
			GUITexturePVMs2[17].Name = "AVA_GTITLE0_ES";
			GUITexturePVMs3[17].Name = "AVA_GTITLE0_ES";
			GUITexturePVMs4[17].Name = "AVA_GTITLE0_ES";
			GUITexturePVMs5[17].Name = "AVA_GTITLE0_ES";
			GUITexturePVMs[29].Name = "AVA_TITLE_CMN_SMALLS";
			GUITexturePVMs2[29].Name = "AVA_TITLE_CMN_SMALLS";
			GUITexturePVMs3[29].Name = "AVA_TITLE_CMN_SMALLS";
			GUITexturePVMs4[29].Name = "AVA_TITLE_CMN_SMALLS";
			GUITexturePVMs5[29].Name = "AVA_TITLE_CMN_SMALLS";
			GUITexturePVMs[20].Name = "AVA_TITLE_BACK_ES";
			GUITexturePVMs2[20].Name = "AVA_TITLE_BACK_ES";
			GUITexturePVMs3[20].Name = "AVA_TITLE_BACK_ES";
			GUITexturePVMs4[20].Name = "AVA_TITLE_BACK_ES";
			GUITexturePVMs5[20].Name = "AVA_TITLE_BACK_ES";
			if (RipplesOn == true)
			{
				GUITexturePVMs[18].Name = "AVA_TITLE_CMNX";
				GUITexturePVMs2[18].Name = "AVA_TITLE_CMNX";
				GUITexturePVMs3[18].Name = "AVA_TITLE_CMNX";
				GUITexturePVMs4[18].Name = "AVA_TITLE_CMNX";
				GUITexturePVMs5[18].Name = "AVA_TITLE_CMNX";
			}
			else
			{
				GUITexturePVMs[18].Name = "AVA_TITLE_CMNS";
				GUITexturePVMs2[18].Name = "AVA_TITLE_CMNS";
				GUITexturePVMs3[18].Name = "AVA_TITLE_CMNS";
				GUITexturePVMs4[18].Name = "AVA_TITLE_CMNS";
				GUITexturePVMs5[18].Name = "AVA_TITLE_CMNS";
			}
			//Logo
			if (float(HorizontalResolution) / float(VerticalResolution) <= 1.3f) rewritestretch = 0.48f; //5:4
			if (float(HorizontalResolution) / float(VerticalResolution) > 1.5f) rewritestretch = 0.667f; //16:9
			if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) rewritestretch = 0.55f; //3:2
			if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) rewritestretch = 0.6f; //16:10
			if (float(HorizontalResolution) / float(VerticalResolution) > 2.2f)  rewritestretch = 0.9f; //Ultra wide
			if (RipplesOn == true) ResizeTextureList((NJS_TEXLIST*)0x010D7C58, 192);
			WriteCall((void*)0x0050E6F4, DrawTitleBG);
			WriteCall((void*)0x0050E8AF, DrawLogo);
			WriteCall((void*)0x0051002B, DrawPressStart);
			//Kill other BG
			WriteData((char*)0x0050E754, 0x90, 5);
			WriteData((char*)0x0050E7B4, 0x90, 5);
			WriteData((char*)0x0050E814, 0x90, 5);
			WriteData((char*)0x0050EA11, 0x90, 5);
			WriteData((char*)0x0050E99A, 0x90, 5);
			WriteData((char*)0x0050E929, 0x90, 5);
			//Kill Sonic
			WriteData((char*)0x0050EC03, 0x90, 5);
			WriteData((char*)0x0050EC6D, 0x90, 5);
			WriteData((char*)0x0050ECD7, 0x90, 5);
			WriteData((char*)0x0050ED4F, 0x90, 5);
			WriteData((char*)0x0050EDC7, 0x90, 5);
			WriteData((char*)0x0050EE31, 0x90, 5);
			WriteData((char*)0x0050EEA9, 0x90, 5);
			WriteData((char*)0x0050EF21, 0x90, 5);
			WriteData((char*)0x0050EF99, 0x90, 5);
			WriteData((char*)0x0050F003, 0x90, 5);
			WriteData((char*)0x0050F07B, 0x90, 5);
			WriteData((char*)0x0050F0F3, 0x90, 5);
			WriteData((char*)0x0050F6BA, 0x90, 5);
			WriteData((char*)0x0050F722, 0x90, 5);
			WriteData((char*)0x0050F78A, 0x90, 5);
			WriteData((char*)0x0050F800, 0x90, 5);
			WriteData((char*)0x0050F876, 0x90, 5);
			WriteData((char*)0x0050F8DE, 0x90, 5);
			WriteData((char*)0x0050F954, 0x90, 5);
			WriteData((char*)0x0050F9CA, 0x90, 5);
			WriteData((char*)0x0050FA40, 0x90, 5);
			WriteData((char*)0x0050FAA8, 0x90, 5);
			WriteData((char*)0x0050FB1E, 0x90, 5);
			WriteData((char*)0x0050FB94, 0x90, 5);
			WriteData((char*)0x0050F16B, 0x90, 5);
			WriteData((char*)0x0050FC0A, 0x90, 5);
			//Kill Logo 1
			WriteData((char*)0x0050FCAB, 0x90, 5);
			WriteData((char*)0x0050FD07, 0x90, 5);
			WriteData((char*)0x0050FD63, 0x90, 5);
			WriteData((char*)0x0050FDBF, 0x90, 5);
			WriteData((char*)0x0050FE1B, 0x90, 5);
			WriteData((char*)0x0050FE85, 0x90, 5);
			WriteData((char*)0x0050FEEF, 0x90, 5);
			//Kill Logo 2
			WriteData((char*)0x0050F1C5, 0x90, 5);
			WriteData((char*)0x0050F223, 0x90, 5);
			WriteData((char*)0x0050F281, 0x90, 5);
			WriteData((char*)0x0050F2DF, 0x90, 5);
			WriteData((char*)0x0050F33D, 0x90, 5);
			WriteData((char*)0x0050F3A9, 0x90, 5);
			WriteData((char*)0x0050F415, 0x90, 5);
			//Kill PressEnter
			WriteData((char*)0x00510085, 0x90, 5);
			WriteData((char*)0x005100EB, 0x90, 5);
			//Some other stuff
			WriteData((char*)0x0050E8BA, 0x1, 1); //Draw logo only once
			WriteData((char*)0x0050E81F, 0x1, 1); //Draw title screen BG only once)
			WriteData((float**)0x0050E87C, &rewritestretch); //Disable logo stretching
			//Scrolling
			WriteData((float**)0x0050E83B, &zero); //Disable titlescreen scrolling 
			WriteData((float**)0x0050E5BB, &zero); //Disable titlescreen scrolling (640x480)
			//Offset
			WriteData((float**)0x0050E6C2, &zero); //Disable horizontal offset
			WriteData((float*)0x0050E6E7, -1.0f); //Disable vertical offset row 1
			WriteData((float**)0x0050E73D, &one); //Disable vertical offset row 2
			WriteData((float**)0x0050E79D, &one); //Disable vertical offset row 3
			WriteData((float**)0x0050E7FD, &one); //Disable vertical offset row 4
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
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (DisableSA1Titlescreen == false && GameState == 21)
		{
			if (titleframe == titledrawn) titleframe++;
			if (logoframe == logodrawn) logoframe++;
			if (startframe == startdrawn) startframe++;
		}
		if (GameState == 16)
		{
		char optionCount = SetPauseDisplayOptions(&options);
		if (optionCount == 6)
		{
			WriteData((float*)0x0045852C, 21.0f); //Pause box Y scale (4 options)
			WriteData((float*)0x00458523, 21.0f); //Pause box Y scale (3 options)
			WriteData((float*)0x00458511, 21.0f); //Pause box Y scale (5 options)
		}
		if (optionCount == 5)
		{
			WriteData((float*)0x0045852C, 17.9f); //Pause box Y scale (4 options)
			WriteData((float*)0x00458523, 17.9f); //Pause box Y scale (3 options)
			WriteData((float*)0x00458511, 17.9f); //Pause box Y scale (5 options)
		}
		if (optionCount == 4)
		{
			WriteData((float*)0x0045852C, 17.15f); //Pause box Y scale (4 options)
			WriteData((float*)0x00458523, 17.15f); //Pause box Y scale (3 options)
			WriteData((float*)0x00458511, 17.15f); //Pause box Y scale (5 options)
		}
		if (optionCount == 3)
		{
			WriteData((float*)0x0045852C, 11.7f); //Pause box Y scale (4 options)
			WriteData((float*)0x00458523, 11.7f); //Pause box Y scale (3 options)
			WriteData((float*)0x00458511, 11.7f); //Pause box Y scale (5 options)
		}
		}
	}

}