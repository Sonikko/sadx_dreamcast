#include <SADXModLoader.h>
#include <IniFile.hpp>

DataPointer(int, DroppedFrames, 0x03B1117C);
DataArray(PVMEntry, GUITextures_Japanese, 0x007EECF0, 30);
DataArray(PVMEntry, GUITextures_English, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITextures_French, 0x007EEED0, 30);
DataArray(PVMEntry, GUITextures_Spanish, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITextures_German, 0x007EF0B0, 30);

static float Options_ArrowScale = 0.0f;
static float Options_ArrowScaleAmount = 0.1f;
static float HalfResHZ = 320.0f;
static float HalfResVT = 240.0f;
static float floatone = 1.0f;
static int PSInt = 0;
static float PSsX = 0;
static float PSsY = 0;
static float PSsZ = 0;
static int BSInt = 0;
static float BSsX = 0;
static float BSsY = 0;
static float BSsZ = 0;
static int titleframe = 0;
static int titledrawn = -1;
static int logoframe = 0;
static int logodrawn = -1;
static int startframe = 0;
static int startdrawn = -1;
static int transitionframe = 0;
static int transitionmode = 0;
//Ini stuff
static bool RipplesOn = true;
static bool EnableTransition = false;
static bool DisableSA1Titlescreen = false;
static bool DisableFade = true;
static bool DrawOverlay = true;
static bool RemoveCream = false;
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
static float LogoScaleXT = 1.0f;
static float LogoScaleYT = 1.0f;
static int BackgroundOffsetX = 0;
static int BackgroundOffsetY = 0;
static float BackgroundScaleX = 1.0f;
static float BackgroundScaleY = 1.0f;
static float f480_Fixed = 0;
static float f640_Fixed = 0;

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

int __cdecl sub_505810()
{
	if (EnableTransition == true)
	{
		transitionmode = 1;
	}
	return PlaySound(2, 0, 0, 0);
}

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
	njSetTexture(&ava_title_e_TEXLIST);
	njTextureShadingMode(1);
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
	//DrawBG(7, 0, 0, *(float *)&texturelist, HorizontalStretch, HorizontalStretch);
	//Draw logo
	DrawBG(8, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, *(float *)&texturelist, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
	//Draw logo overlay
	if (DrawOverlay == true) DrawBG(9, LogoOffsetX*HorizontalStretch*LogoScaleX, VerticalStretch*(LogoOffsetY + surfacesucks)*LogoScaleY* rewritestretch, *(float *)&texturelist, HorizontalStretch * 0.5f*LogoScaleX, VerticalStretch * rewritestretch*LogoScaleY);
	njTextureShadingMode(2);
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
			ypos = (VerticalStretch*rewritestretch) * (512.0f + BackgroundOffsetY)*BackgroundScaleY;
			DrawBG(tn + 2, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = (BackgroundOffsetX + 256.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = (VerticalStretch*rewritestretch) * (512.0f + BackgroundOffsetY)*BackgroundScaleY;
			DrawBG(tn + 3, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = BackgroundOffsetY * (VerticalStretch*rewritestretch) * BackgroundScaleY;
			DrawBG(tn + 4, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 256.0f)*BackgroundScaleY;
			DrawBG(tn + 5, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 512.0f)*BackgroundScaleY;
			DrawBG(tn + 6, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = (BackgroundOffsetX + 512.0f)*BackgroundScaleX * HorizontalStretch;
			ypos = (VerticalStretch*rewritestretch) * (BackgroundOffsetY + 768.0f)*BackgroundScaleY;
			DrawBG(tn + 7, xpos, ypos, 2.0f, scaleX, scaleY);
			titledrawn = titleframe;
		}
	}
}

void DrawTitleBG_640()
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
			scaleX = 1.0f;
			scaleY = 1.0f;

			xpos = 0;
			ypos = 0;
			DrawBG(tn, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = 256;
			ypos = 0;
			DrawBG(tn + 1, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = 0;
			ypos = 256;
			DrawBG(tn + 2, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = 256;
			ypos = 256;
			DrawBG(tn + 3, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = 512;
			ypos = 0;
			DrawBG(tn + 4, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = 512;
			ypos = 128;
			DrawBG(tn + 5, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = 512;
			ypos = 256;
			DrawBG(tn + 6, xpos, ypos, 2.0f, scaleX, scaleY);

			xpos = 512;
			ypos = 384;
			DrawBG(tn + 7, xpos, ypos, 2.0f, scaleX, scaleY);
			titledrawn = titleframe;
		}
	}
}

void DrawLogo()
{
	float xpos;
	float smalloff;
	float ypos;
	float surfacesucks = 0.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) smalloff = -60; //16:10
	if (float(HorizontalResolution) / float(VerticalResolution) <= 1.3f) smalloff = -40; //5:4
	if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) surfacesucks = -48.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) > 2.2f)  surfacesucks = -96.0f;
	if (logodrawn != logoframe)
	{
		njSetTexture((NJS_TEXLIST*)0x010D7C48); //AVA_GTITLE0_E
		if (logoframe > 128) logoframe = 0;
		//Draw logo
		njTextureShadingMode(1);
		SetVtxColorB(0xFFFFFFFF);
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
		//Ultra wide
		if (float(HorizontalResolution) / float(VerticalResolution) >= 2.2f)
		{
			//Draw Sonic Team logo
			DrawBG(2, (320 - 32 + SonicTeamOffsetX)*HorizontalStretch, (64 + surfacesucks + SonicTeamOffsetY)*VerticalStretch* rewritestretch, 1.2f, HorizontalStretch * 0.5f*0.8f, VerticalStretch * rewritestretch*0.8f);
			//Draw copyright text
			DrawBG(3, (64 + TextOffsetX)*HorizontalStretch, (960 - 168 + TextOffsetY + surfacesucks)*VerticalStretch* rewritestretch, 1.2f, HorizontalStretch * 0.5f*0.8f, VerticalStretch * rewritestretch*0.8f);
		}
		logodrawn = logoframe;
		if (transitionmode != 0)
		{
			if (transitionmode == 1)
			{
				{
					if (LogoScaleXT < LogoScaleX * 2.0f)LogoScaleXT = LogoScaleXT*1.12f;
					if (LogoScaleYT < LogoScaleY * 2.0f)LogoScaleYT = LogoScaleYT*1.12f;
				}
				transitionframe++;
			}
			xpos = (HorizontalResolution - LogoScaleXT * 512.0f * HorizontalStretch) / 2.0f;
			ypos = (VerticalResolution - LogoScaleYT * 256.0f * HorizontalStretch + smalloff * VerticalStretch * rewritestretch) / 2.0f;
			//Draw logo transition
			SetVtxColorB(0x7FFFFFFF);
			if (LogoScaleXT <= 2.0f*LogoScaleX) DrawBG(0, xpos, ypos, 1.2f, HorizontalStretch * 0.5f*LogoScaleXT, VerticalStretch * rewritestretch*LogoScaleYT);
		}
		njTextureShadingMode(2);
	}
}

void DrawLogo_640()
{
	float xpos;
	float ypos;
	if (RipplesOn == true && logodrawn != logoframe)
	{
		njSetTexture((NJS_TEXLIST*)0x010D7C48); //AVA_GTITLE0_E
		if (logoframe > 128) logoframe = 0;
		//Draw logo
		njTextureShadingMode(1);
		SetVtxColorB(0xFFFFFFFF);
		DrawBG(4, 64, 81, 1.2f, 1.0f, 1.0f);
		//Draw logo overlay
		if (DrawOverlay == true) DrawBG(5, 64, 81, 1.2f, 1.0f, 1.0f);
		//Draw Sonic Team logo
		DrawBG(6, (320 - 32), 35, 1.2f, 1.0f, 1.0f);
		//Draw copyright text
		DrawBG(7, 64, (480 - 84), 1.2f, 1.0f, 1.0f);
		logodrawn = logoframe;
		if (transitionmode != 0)
		{
			if (transitionmode == 1)
			{
				{
					if (LogoScaleXT < LogoScaleX * 2.0f)LogoScaleXT = LogoScaleXT*1.12f;
					if (LogoScaleYT < LogoScaleY * 2.0f)LogoScaleYT = LogoScaleYT*1.12f;
				}
				transitionframe++;
			}
			xpos = (320 - LogoScaleXT * 256.0f * HorizontalStretch) / 2.0f;
			ypos = (240 - LogoScaleYT * 128.0f * HorizontalStretch) / 2.0f;
			//Draw logo transition
			SetVtxColorB(0x7FFFFFFF);
			if (LogoScaleXT <= 2.0f) DrawBG(4, xpos, ypos, 1.2f, LogoScaleXT, LogoScaleYT);
		}
		njTextureShadingMode(2);
	}
}

void DrawPressStart()
{
	njTextureShadingMode(1);
	float yoff = 112.0f;
	if (float(HorizontalResolution) / float(VerticalResolution) < 1.5f) yoff = 112.0f; //4:3
	if (float(HorizontalResolution) / float(VerticalResolution) > 1.6f) yoff = 82.0f; //16:9
	if (float(HorizontalResolution) / float(VerticalResolution) == 1.6f) yoff = 120.0f; //16:10
	if (float(HorizontalResolution) / float(VerticalResolution) <= 1.3f) yoff = 134; //5:4
	if (float(HorizontalResolution) / float(VerticalResolution) == 1.5f) yoff = 92.0f; //3:2
	if (float(HorizontalResolution) / float(VerticalResolution) > 2.2f) yoff = 48.0f; //Ultra wide
	if (!(HorizontalResolution == 640 && VerticalResolution == 480) && startdrawn != startframe)
	{
		if (startframe > 128) startframe = 0;
		DrawBG(8, HorizontalStretch*(320.0f - 128.0f + PressStartOffsetX), VerticalResolution - HorizontalStretch*(yoff - PressStartOffsetY), 1.1f, HorizontalStretch * 0.5f, VerticalStretch * rewritestretch);
	}
	if (HorizontalResolution == 640 && VerticalResolution == 480 && startdrawn != startframe)
	{
		if (startframe > 128) startframe = 0;
		DrawBG(8, (320.0f - 128.0f), (480 - 114), 1.1f, 0.5f, 0.5f);
	}
	startdrawn = startframe;
	njTextureShadingMode(2);
}

void DrawShadow_Hook(int texnum, float x, float y, float z, float scaleX, float scaleY)
{
	njTextureShadingMode(1);
	DrawBG(texnum, x, y, z, scaleX, scaleY);
	njTextureShadingMode(2);
}

void DrawTexture_Hook(int that_cant_be_right, float x, float y, float z)
{
	njTextureShadingMode(1);
	DisplayScreenTexture(that_cant_be_right, x, y, z);
	njTextureShadingMode(2);
}

void DisplayScreenTexture_AlwaysTop(int that_cant_be_right, float x, float y, float z)
{
	Direct3D_SetZFunc(7u);
	Direct3D_EnableZWrite(0);
	DisplayScreenTexture(that_cant_be_right, x, y, z);
	Direct3D_EnableZWrite(1);
	Direct3D_SetZFunc(3u);
}

void ScreenFadeFix(float left, float top, float right, float bottom, float depth, int color, QueuedModelFlagsB queueflags)
{
	DrawRect_Queue(-50.0f, -50.0f, HorizontalResolution + 50.0f, VerticalResolution + 50.0f, 32048.0f, color, QueuedModelFlagsB_EnableZWrite);
}

void RenderShittyTextures(int texnum, float x, float y, float z, float scaleX, float scaleY)
{
	DrawBG(texnum, x, y, z, scaleX, scaleY);
	DoColorGradientThingMaybe(0xFF0016FF, 0xFF002EFF, 0xFF0016FF, 0xFF002EFF);
	DisplayScreenTexture(BSInt, BSsX, BSsY, BSsZ);
	DoColorGradientThingMaybe(0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu, 0xFFFFFFFFu);
	DisplayScreenTexture(PSInt, PSsX, PSsY, PSsZ);
}

void RetrieveBottomThingStuff(int texnum, float x, float y, float z)
{
	BSInt = texnum;
	BSsX = x;
	BSsY = y;
	BSsZ = z;
}

void RetrievePlayerSelectStuff(int that_cant_be_right, float x, float y, float z)
{
	PSInt = that_cant_be_right;
	PSsX = x;
	PSsY = y;
	PSsZ = z;
}

void FileIcon_Hook(int that_cant_be_right, float Texture_X, float Texture_Y, float Texture_Z)
{
	float Arrow1_X;
	float Arrow1_Y;
	float Arrow2_X;
	float Arrow2_Y;
	float Arrow1Center_X = 251.0f;
	float Arrow1Center_Y = 268.0f;
	float Arrow2Center_X = 218.0f;
	float Arrow2Center_Y = 322.0f;
	float Arrow1Scale = 0.0f + Options_ArrowScale;
	float Arrow2Scale = 0.5f - Options_ArrowScale;
	Arrow1_X = (Arrow1Center_X - 64 * Arrow1Scale) - 320.0f + HorizontalStretch * 320.0f;
	Arrow1_Y = (Arrow1Center_Y - 64 * Arrow1Scale) - 240.0f + VerticalStretch * 240.0f;
	Arrow2_X = (Arrow2Center_X - 64 * Arrow2Scale) - 320.0f + HorizontalStretch * 320.0f;
	Arrow2_Y = (Arrow2Center_Y - 64 * Arrow2Scale) - 240.0f + VerticalStretch * 240.0f;
	njTextureShadingMode(1);
	DisplayScreenTexture(44, Texture_X, Texture_Y, Texture_Z);
	DrawBG(45, Arrow1_X, Arrow1_Y, Texture_Z, Arrow1Scale, Arrow1Scale);
	DrawBG(46, Arrow2_X, Arrow2_Y, Texture_Z, Arrow2Scale, Arrow2Scale);
	njTextureShadingMode(2);
}

void Branding_Init(const char *path, const HelperFunctions &helperFunctions)
{
	f480_Fixed = 1.0f + VerticalResolution;
	f640_Fixed = 1.0f + HorizontalResolution;
	HMODULE HD_GUI = GetModuleHandle(L"HD_GUI");
	//Set PVM names
	if (HD_GUI == nullptr)
	{
		//Code stuff
		WriteData((char**)0x0339C8A4, "GG_TEXLIST_US_DC.PVM");
		WriteData((char**)0x0064221D, (char*)"ADV_WINDOW_DC");
		WriteData((char**)0x0064222E, (char*)"AVA_CSR_DC");
		WriteData((char**)0x00642249, (char*)"AVA_DLG_E_DC");
		WriteData((char**)0x00642258, (char*)"TUTO_CMN_E_DC");
		WriteData((char**)0x0064225F, (char*)"AVA_DLG_DC");
		WriteData((char**)0x0064226E, (char*)"TUTO_CMN_DC");
		WriteData((char**)0x00415A8C, (char*)"PRESSSTART_DC");
		//Tutorials
		WriteData((char**)0x02BC544C, (char*)"TUTOMSG_SONIC_E_DC");
		WriteData((char**)0x02BC5460, (char*)"TUTOMSG_SONIC_E_DC");
		WriteData((char**)0x02BC5478, (char*)"TUTOMSG_SONIC_E_DC");
		WriteData((char**)0x02BC5490, (char*)"TUTOMSG_SONIC_E_DC");
		WriteData((char**)0x02BC54A8, (char*)"TUTOMSG_SONIC_E_DC");
		WriteData((char**)0x02BC54C0, (char*)"TUTOMSG_SONIC_E_DC");
		WriteData((char**)0x02BC5464, (char*)"TUTOMSG_TAILS_E_DC");
		WriteData((char**)0x02BC547C, (char*)"TUTOMSG_KNUCKLES_E_DC");
		WriteData((char**)0x02BC5494, (char*)"TUTOMSG_AMY_E_DC");
		WriteData((char**)0x02BC54AC, (char*)"TUTOMSG_BIG_E_DC");
		WriteData((char**)0x02BC54C4, (char*)"TUTOMSG_E102_E_DC");
		//Japanese
		GUITextures_Japanese[0].Name = "AVA_BACK_DC";
		GUITextures_Japanese[1].Name = "ADV_WINDOW_DC";
		GUITextures_Japanese[2].Name = "AVA_CHSEL_DC";
		GUITextures_Japanese[3].Name = "AVA_SUUJI_DC";
		GUITextures_Japanese[4].Name = "AVA_CSR_DC";
		GUITextures_Japanese[5].Name = "AVA_DLG_DC";
		GUITextures_Japanese[6].Name = "AVA_FSDLG_DC";
		GUITextures_Japanese[7].Name = "AVA_FILESEL_DC";
		GUITextures_Japanese[8].Name = "AVA_FSCMN_DC";
		GUITextures_Japanese[9].Name = "AVA_SNDTEST_DC";
		GUITextures_Japanese[10].Name = "AVA_SQUARE_DC";
		GUITextures_Japanese[11].Name = "AVA_STNAM_DC";
		GUITextures_Japanese[12].Name = "AVA_TRIALACTSEL_DC";
		GUITextures_Japanese[13].Name = "AVA_VMSSEL";
		GUITextures_Japanese[14].Name = "B_CHNAM_DC";
		GUITextures_Japanese[15].Name = "M_CHNAM_DC";
		GUITextures_Japanese[16].Name = "TX_CHNAM_DC";
		GUITextures_Japanese[19].Name = "AVA_TITLE_DC";
		GUITextures_Japanese[21].Name = "AVA_OPTION_DC";
		GUITextures_Japanese[22].Name = "AVA_EMBLEM_DC";
		GUITextures_Japanese[23].Name = "AVA_NEW16NO_DC";
		GUITextures_Japanese[24].Name = "AVA_SAN_DC";
		GUITextures_Japanese[25].Name = "AVA_EMBLEMVIEW_DC";
		GUITextures_Japanese[26].Name = "AVA_INETDEMO";
		GUITextures_Japanese[27].Name = "TVSETTING";
		GUITextures_Japanese[28].Name = "AVA_METAL_SONIC";
		//English
		GUITextures_English[0].Name = "AVA_BACK_DC";
		GUITextures_English[1].Name = "ADV_WINDOW_DC";
		GUITextures_English[2].Name = "AVA_CHSEL_E_DC";
		GUITextures_English[3].Name = "AVA_SUUJI_DC";
		GUITextures_English[4].Name = "AVA_CSR_DC";
		GUITextures_English[5].Name = "AVA_DLG_E_DC";
		GUITextures_English[6].Name = "AVA_FSDLG_E_DC";
		GUITextures_English[7].Name = "AVA_FILESEL_E_DC";
		GUITextures_English[8].Name = "AVA_FSCMN_E_DC";
		GUITextures_English[9].Name = "AVA_SNDTEST_E_DC";
		GUITextures_English[10].Name = "AVA_SQUARE_DC";
		GUITextures_English[11].Name = "AVA_STNAM_E_DC";
		GUITextures_English[12].Name = "AVA_TRIALACTSEL_E_DC";
		GUITextures_English[13].Name = "AVA_VMSSEL_E";
		GUITextures_English[14].Name = "B_CHNAM_E_DC";
		GUITextures_English[15].Name = "M_CHNAM_DC";
		GUITextures_English[16].Name = "TX_CHNAM_E_DC";
		GUITextures_English[19].Name = "AVA_TITLE_E_DC";
		GUITextures_English[21].Name = "AVA_OPTION_E_DC";
		GUITextures_English[22].Name = "AVA_EMBLEM_DC";
		GUITextures_English[23].Name = "AVA_NEW16NO_DC";
		GUITextures_English[24].Name = "AVA_SAN_DC";
		GUITextures_English[25].Name = "AVA_EMBLEMVIEW_E_DC";
		GUITextures_English[26].Name = "AVA_INETDEMO";
		GUITextures_English[27].Name = "TVSETTING";
		GUITextures_English[28].Name = "AVA_METAL_SONIC";
		//French
		GUITextures_French[0].Name = "AVA_BACK_DC";
		GUITextures_French[1].Name = "ADV_WINDOW_DC";
		GUITextures_French[2].Name = "AVA_CHSEL_E_DC";
		GUITextures_French[3].Name = "AVA_SUUJI_DC";
		GUITextures_French[4].Name = "AVA_CSR_DC";
		GUITextures_French[5].Name = "AVA_DLG_E_DC";
		GUITextures_French[6].Name = "AVA_FSDLG_E_DC";
		GUITextures_French[7].Name = "AVA_FILESEL_E_DC";
		GUITextures_French[8].Name = "AVA_FSCMN_E_DC";
		GUITextures_French[9].Name = "AVA_SNDTEST_E_DC";
		GUITextures_French[10].Name = "AVA_SQUARE_DC";
		GUITextures_French[11].Name = "AVA_STNAM_E_DC";
		GUITextures_French[12].Name = "AVA_TRIALACTSEL_E_DC";
		GUITextures_French[13].Name = "AVA_VMSSEL_E";
		GUITextures_French[14].Name = "B_CHNAM_E_DC";
		GUITextures_French[15].Name = "M_CHNAM_DC";
		GUITextures_French[16].Name = "TX_CHNAM_E_DC";
		GUITextures_French[19].Name = "AVA_TITLE_E_DC";
		GUITextures_French[21].Name = "AVA_OPTION_E_DC";
		GUITextures_French[22].Name = "AVA_EMBLEM_DC";
		GUITextures_French[23].Name = "AVA_NEW16NO_DC";
		GUITextures_French[24].Name = "AVA_SAN_DC";
		GUITextures_French[25].Name = "AVA_EMBLEMVIEW_E_DC";
		GUITextures_French[26].Name = "AVA_INETDEMO";
		GUITextures_French[27].Name = "TVSETTING";
		GUITextures_French[28].Name = "AVA_METAL_SONIC";
		//Spanish
		GUITextures_Spanish[0].Name = "AVA_BACK_DC";
		GUITextures_Spanish[1].Name = "ADV_WINDOW_DC";
		GUITextures_Spanish[2].Name = "AVA_CHSEL_E_DC";
		GUITextures_Spanish[3].Name = "AVA_SUUJI_DC";
		GUITextures_Spanish[4].Name = "AVA_CSR_DC";
		GUITextures_Spanish[5].Name = "AVA_DLG_E_DC";
		GUITextures_Spanish[6].Name = "AVA_FSDLG_E_DC";
		GUITextures_Spanish[7].Name = "AVA_FILESEL_E_DC";
		GUITextures_Spanish[8].Name = "AVA_FSCMN_E_DC";
		GUITextures_Spanish[9].Name = "AVA_SNDTEST_E_DC";
		GUITextures_Spanish[10].Name = "AVA_SQUARE_DC";
		GUITextures_Spanish[11].Name = "AVA_STNAM_E_DC";
		GUITextures_Spanish[12].Name = "AVA_TRIALACTSEL_E_DC";
		GUITextures_Spanish[13].Name = "AVA_VMSSEL_E";
		GUITextures_Spanish[14].Name = "B_CHNAM_E_DC";
		GUITextures_Spanish[15].Name = "M_CHNAM_DC";
		GUITextures_Spanish[16].Name = "TX_CHNAM_E_DC";
		GUITextures_Spanish[19].Name = "AVA_TITLE_E_DC";
		GUITextures_Spanish[21].Name = "AVA_OPTION_E_DC";
		GUITextures_Spanish[22].Name = "AVA_EMBLEM_DC";
		GUITextures_Spanish[23].Name = "AVA_NEW16NO_DC";
		GUITextures_Spanish[24].Name = "AVA_SAN_DC";
		GUITextures_Spanish[25].Name = "AVA_EMBLEMVIEW_E_DC";
		GUITextures_Spanish[26].Name = "AVA_INETDEMO";
		GUITextures_Spanish[27].Name = "TVSETTING";
		GUITextures_Spanish[28].Name = "AVA_METAL_SONIC";
		//German
		GUITextures_German[0].Name = "AVA_BACK_DC";
		GUITextures_German[1].Name = "ADV_WINDOW_DC";
		GUITextures_German[2].Name = "AVA_CHSEL_E_DC";
		GUITextures_German[3].Name = "AVA_SUUJI_DC";
		GUITextures_German[4].Name = "AVA_CSR_DC";
		GUITextures_German[5].Name = "AVA_DLG_E_DC";
		GUITextures_German[6].Name = "AVA_FSDLG_E_DC";
		GUITextures_German[7].Name = "AVA_FILESEL_E_DC";
		GUITextures_German[8].Name = "AVA_FSCMN_E_DC";
		GUITextures_German[9].Name = "AVA_SNDTEST_E_DC";
		GUITextures_German[10].Name = "AVA_SQUARE_DC";
		GUITextures_German[11].Name = "AVA_STNAM_E_DC";
		GUITextures_German[12].Name = "AVA_TRIALACTSEL_E_DC";
		GUITextures_German[13].Name = "AVA_VMSSEL_E";
		GUITextures_German[14].Name = "B_CHNAM_E_DC";
		GUITextures_German[15].Name = "M_CHNAM_DC";
		GUITextures_German[16].Name = "TX_CHNAM_E_DC";
		GUITextures_German[19].Name = "AVA_TITLE_E_DC";
		GUITextures_German[21].Name = "AVA_OPTION_E_DC";
		GUITextures_German[22].Name = "AVA_EMBLEM_DC";
		GUITextures_German[23].Name = "AVA_NEW16NO_DC";
		GUITextures_German[24].Name = "AVA_SAN_DC";
		GUITextures_German[25].Name = "AVA_EMBLEMVIEW_E_DC";
		GUITextures_German[26].Name = "AVA_INETDEMO";
		GUITextures_German[27].Name = "TVSETTING";
		GUITextures_German[28].Name = "AVA_METAL_SONIC";
	}
	//File icon
	if (HD_GUI == nullptr) WriteCall((void*)0x005092A1, DrawTexture_Hook); 
	else WriteCall((void*)0x005092A1, FileIcon_Hook);
	//Various fixes already included in HD GUI
	if (HD_GUI == nullptr)
	{
		//Screen fade fixes
		WriteData((float**)0x00433385, &f480_Fixed); //Screen fade resolution
		WriteData((float**)0x004333A6, &f640_Fixed); //Screen fade resolution
		WriteData((float*)0x004333A0, -1.0f); //Screen fade for tutorials
		WriteData((float*)0x004333AE, -1.0f); //Screen fade for tutorials
		WriteCall((void*)0x0042BF52, ScreenFadeFix);
		WriteData<5>((char*)0x0040BF27, 0x90); //Disable "Now saving..."
		WriteData<5>((void*)0x0040BE0D, 0x90); //Disable "Now loading..."
		WriteData<5>((void*)0x00503438, 0x90); //Disable "Now loading..."
		WriteData<5>((void*)0x0050346D, 0x90); //Disable "Now loading..."
		//Character select screen fixes
		WriteCall((void*)0x00511AD0, RetrievePlayerSelectStuff); //Player select text in character select screen
		WriteCall((void*)0x00511C76, RetrieveBottomThingStuff); //Bottom thing in character select screen
		WriteCall((void*)0x00511B3B, RenderShittyTextures); //Render stuff that refuses to render properly otherwise
		WriteCall((void*)0x00511A8B, DisplayScreenTexture_AlwaysTop); //Move the "Select your character" text to top
		WriteData<5>((void*)0x00511C18, 0x90); //Disable ZFunc stuff to prevent character model overlap issues
		//Shadow blending fixes
		WriteCall((void*)0x0050B584, DrawShadow_Hook);
		WriteCall((void*)0x00431D37, DrawShadow_Hook);
		WriteCall((void*)0x00506EFF, DrawShadow_Hook);
		WriteCall((void*)0x0050D8B3, DrawShadow_Hook);
		WriteCall((void*)0x0050B61A, DrawShadow_Hook); //Main menu (trial) shadow
		WriteCall((void*)0x00508FFD, DrawTexture_Hook); //Sound test icon
		WriteCall((void*)0x00509130, DrawTexture_Hook); //Sonic icon background
		WriteCall((void*)0x00509191, DrawTexture_Hook); //Sonic icon
		WriteCall((void*)0x00509439, DrawTexture_Hook); //Languages icon
		WriteCall((void*)0x0050952F, DrawTexture_Hook); //Rumble icon
		WriteCall((void*)0x0050782A, DrawTexture_Hook); //AVA_SAN triangle shadow
	}
	//Set up normal/widescreen setting
	std::string SectionName;
	if (float(HorizontalResolution) / float(VerticalResolution) > 1.5f) SectionName = "Widescreen"; else SectionName = "Normal";
	if (float(HorizontalResolution) / float(VerticalResolution) >= 2.2f) SectionName = "Ultrawide";
	//Load defaults first
	const IniFile *defaults = new IniFile(std::string(path) + "\\DCBranding_default.ini");
	RipplesOn = defaults->getBool("Branding", "RippleEffect", true);
	EnableTransition = defaults->getBool("Branding", "EnableTransition", false);
	DisableFade = defaults->getBool("Branding", "DisableFade", true);
	DisableSA1Titlescreen = defaults->getBool("Branding", "DisableSA1TitleScreen", false);
	DrawOverlay = defaults->getBool("Branding", "DrawOverlay", true);
	RemoveCream = defaults->getBool("Branding", "RemoveCream", false);
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
	//If there is no DCBranding.ini, make one
	CopyFileA((std::string(path) + "\\default.ini").c_str(), (std::string(path) + "\\DCBranding.ini").c_str(), true);
	//Set up settings
	const IniFile *settings = new IniFile(std::string(path) + "\\DCBranding.ini");
	RipplesOn = settings->getBool("Branding", "RippleEffect", true);
	EnableTransition = settings->getBool("Branding", "EnableTransition", true);
	DisableSA1Titlescreen = settings->getBool("Branding", "DisableSA1TitleScreen", false);
	DrawOverlay = settings->getBool("Branding", "DrawOverlay", true);
	RemoveCream = settings->getBool("Branding", "RemoveCream", false);
	DisableFade = settings->getBool("Branding", "DisableFade", true);
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
	LogoScaleXT = LogoScaleX;
	LogoScaleYT = LogoScaleY;
	delete settings;
	//Main code
	//Kill Cream
	if (RemoveCream == true) WriteData<1>((void*)0x6353A0, 0xC3u);
	//Title screen stuff
	if (DisableSA1Titlescreen == false)
	{
		//640x480 stuff
		WriteCall((void*)0x0050E547, DrawTitleBG_640);
		WriteCall((void*)0x0050E58E, DrawLogo_640);
		WriteData<5>((void*)0x0050E659, 0x90);
		WriteData<5>((void*)0x0050E6F4, 0x90);
		WriteData<5>((void*)0x0050E754, 0x90);
		WriteData<5>((void*)0x0050E7B4, 0x90);
		WriteData<5>((void*)0x0050E814, 0x90);
		WriteData<5>((void*)0x0050EAB1, 0x90);
		WriteData<5>((void*)0x0050EB04, 0x90);
		WriteData<5>((void*)0x0050EB57, 0x90);
		WriteData<5>((void*)0x0050F1C5, 0x90);
		WriteData<5>((void*)0x0050F570, 0x90);
		WriteData<5>((void*)0x0050F5C1, 0x90);
		WriteData<5>((void*)0x0050F612, 0x90);
		WriteData<5>((void*)0x0050FF59, 0x90);
		//Kill titlescreen fade
		if (DisableFade == true) WriteData<5>((char*)0x0050E49B, 0x90);
		ResizeTextureList((NJS_TEXLIST*)0x010D7C80, 10);
		WriteJump((void*)0x505810, sub_505810);
		WriteJump((void*)0x50BA90, DrawAVA_TITLE_BACK_E_DC);
		//PVMs
		//Japanese
		GUITextures_Japanese[17].Name = "AVA_GTITLE0_ES";
		GUITextures_Japanese[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_Japanese[29].Name = "AVA_TITLE_CMN_SMALLS";
		//English
		GUITextures_English[17].Name = "AVA_GTITLE0_ES";
		GUITextures_English[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_English[29].Name = "AVA_TITLE_CMN_SMALLS";
		//French
		GUITextures_French[17].Name = "AVA_GTITLE0_ES";
		GUITextures_French[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_French[29].Name = "AVA_TITLE_CMN_SMALLS";
		//Spanish
		GUITextures_Spanish[17].Name = "AVA_GTITLE0_ES";
		GUITextures_Spanish[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_Spanish[29].Name = "AVA_TITLE_CMN_SMALLS";
		//German
		GUITextures_German[17].Name = "AVA_GTITLE0_ES";
		GUITextures_German[20].Name = "AVA_TITLE_BACK_ES";
		GUITextures_German[29].Name = "AVA_TITLE_CMN_SMALLS";
		if (RipplesOn == true)
		{
			GUITextures_Japanese[18].Name = "AVA_TITLE_CMNX";
			GUITextures_English[18].Name = "AVA_TITLE_CMNX";
			GUITextures_French[18].Name = "AVA_TITLE_CMNX";
			GUITextures_Spanish[18].Name = "AVA_TITLE_CMNX";
			GUITextures_German[18].Name = "AVA_TITLE_CMNX";
		}
		else
		{
			GUITextures_Japanese[18].Name = "AVA_TITLE_CMNS";
			GUITextures_English[18].Name = "AVA_TITLE_CMNS";
			GUITextures_French[18].Name = "AVA_TITLE_CMNS";
			GUITextures_Spanish[18].Name = "AVA_TITLE_CMNS";
			GUITextures_German[18].Name = "AVA_TITLE_CMNS";
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
		WriteData<5>((char*)0x0050E754, 0x90);
		WriteData<5>((char*)0x0050E7B4, 0x90);
		WriteData<5>((char*)0x0050E814, 0x90);
		WriteData<5>((char*)0x0050EA11, 0x90);
		WriteData<5>((char*)0x0050E99A, 0x90);
		WriteData<5>((char*)0x0050E929, 0x90);
		//Kill Sonic
		WriteData<5>((char*)0x0050EC03, 0x90);
		WriteData<5>((char*)0x0050EC6D, 0x90);
		WriteData<5>((char*)0x0050ECD7, 0x90);
		WriteData<5>((char*)0x0050ED4F, 0x90);
		WriteData<5>((char*)0x0050EDC7, 0x90);
		WriteData<5>((char*)0x0050EE31, 0x90);
		WriteData<5>((char*)0x0050EEA9, 0x90);
		WriteData<5>((char*)0x0050EF21, 0x90);
		WriteData<5>((char*)0x0050EF99, 0x90);
		WriteData<5>((char*)0x0050F003, 0x90);
		WriteData<5>((char*)0x0050F07B, 0x90);
		WriteData<5>((char*)0x0050F0F3, 0x90);
		WriteData<5>((char*)0x0050F6BA, 0x90);
		WriteData<5>((char*)0x0050F722, 0x90);
		WriteData<5>((char*)0x0050F78A, 0x90);
		WriteData<5>((char*)0x0050F800, 0x90);
		WriteData<5>((char*)0x0050F876, 0x90);
		WriteData<5>((char*)0x0050F8DE, 0x90);
		WriteData<5>((char*)0x0050F954, 0x90);
		WriteData<5>((char*)0x0050F9CA, 0x90);
		WriteData<5>((char*)0x0050FA40, 0x90);
		WriteData<5>((char*)0x0050FAA8, 0x90);
		WriteData<5>((char*)0x0050FB1E, 0x90);
		WriteData<5>((char*)0x0050FB94, 0x90);
		WriteData<5>((char*)0x0050F16B, 0x90);
		WriteData<5>((char*)0x0050FC0A, 0x90);
		//Kill Logo 1
		WriteData<5>((char*)0x0050FCAB, 0x90);
		WriteData<5>((char*)0x0050FD07, 0x90);
		WriteData<5>((char*)0x0050FD63, 0x90);
		WriteData<5>((char*)0x0050FDBF, 0x90);
		WriteData<5>((char*)0x0050FE1B, 0x90);
		WriteData<5>((char*)0x0050FE85, 0x90);
		WriteData<5>((char*)0x0050FEEF, 0x90);
		//Kill Logo 2
		WriteData<5>((char*)0x0050F1C5, 0x90);
		WriteData<5>((char*)0x0050F223, 0x90);
		WriteData<5>((char*)0x0050F281, 0x90);
		WriteData<5>((char*)0x0050F2DF, 0x90);
		WriteData<5>((char*)0x0050F33D, 0x90);
		WriteData<5>((char*)0x0050F3A9, 0x90);
		WriteData<5>((char*)0x0050F415, 0x90);
		//Kill PressEnter
		WriteData<5>((char*)0x00510085, 0x90);
		WriteData<5>((char*)0x005100EB, 0x90);
		//Some other stuff
		WriteData<1>((char*)0x0050E8BA, 0x1); //Draw logo only once
		WriteData<1>((char*)0x0050E81F, 0x1); //Draw title screen BG only once)
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
	WriteData<1>((void*)0x0042CCF3, 0x0F); //Disable Sonic Team logo
	//Pause box stuff
	WriteData((float*)0x00458501, 17.1f); //Pause box X scale
	WriteData<1>((char*)0x00459106, 0x50); //Controls X shift
	WriteData<1>((char*)0x0045917E, 0x50); //Controls X shift
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
void Branding_OnFrame()
{
	HMODULE HD_GUI = GetModuleHandle(L"HD_GUI");
	if (GameMode == GameModes_Menu && HD_GUI != nullptr)
	{
		if (Options_ArrowScale > 0.5f) Options_ArrowScaleAmount = -0.02f;
		if (Options_ArrowScale < 0.0f) Options_ArrowScaleAmount = 0.02f;
		Options_ArrowScale = Options_ArrowScale + Options_ArrowScaleAmount;
	}
	if (transitionmode != 0 && transitionframe >= 15)
	{
		transitionmode = 0;
		transitionframe = 0;
		LogoScaleXT = LogoScaleX;
		LogoScaleYT = LogoScaleY;
	}
	if (DisableSA1Titlescreen == false && GameState == 21)
	{
		if (titleframe == titledrawn) titleframe++;
		if (logoframe == logodrawn) logoframe++;
		if (startframe == startdrawn) startframe++;
	}
	if (GameState == 16)
	{
		char optionCount = GetPauseDisplayOptions(&options);
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