#include <SADXModLoader.h>
#include "CommonObjects.h"
#include "Objects_Shooting.h"

static float Options_ArrowScale = 0.0f;
static float Options_ArrowScaleAmount = 0.1f;

static int PSInt = 0;
static float PSsX = 0;
static float PSsY = 0;
static float PSsZ = 0;
static int BSInt = 0;
static float BSsX = 0;
static float BSsY = 0;
static float BSsZ = 0;
static float f480_Fixed = 0;
static float f640_Fixed = 0;

DataArray(PVMEntry, GUITextures_Japanese, 0x007EECF0, 30);
DataArray(PVMEntry, GUITextures_English, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITextures_French, 0x007EEED0, 30);
DataArray(PVMEntry, GUITextures_Spanish, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITextures_German, 0x007EF0B0, 30);
DataArray(PVMEntry, SKYCHASE_OBJECT_TEXLISTS, 0x90E5E8, 11);

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

void GGTEXLIST_Hook(const char *filename, NJS_TEXLIST *texlist)
{
	LoadPVM("GG_TEXLIST_US_HD", texlist);
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		//Set PVM names
		WriteCall((void*)0x006FF84D, GGTEXLIST_Hook);
		SHOOTING0_TEXLISTS[0].Name = "SHOOTING0_HD";
		SKYCHASE_OBJECT_TEXLISTS[0].Name = "SHOOTING0_HD";
		//Code stuff
		WriteData((char**)0x0042C752, (char*)"SEGALOGO_E_HD");
		WriteData((char**)0x0064221D, (char*)"ADV_WINDOW_HD");
		WriteData((char**)0x0064222E, (char*)"AVA_CSR_HD");
		WriteData((char**)0x00642249, (char*)"AVA_DLG_E_HD");
		WriteData((char**)0x00642258, (char*)"TUTO_CMN_E_HD");
		WriteData((char**)0x0064225F, (char*)"AVA_DLG_E_HD");
		WriteData((char**)0x0064226E, (char*)"TUTO_CMN_E_HD");
		WriteData((char**)0x00415A8C, (char*)"PRESSSTART_HD");
		//Tutorials
		WriteData((char**)0x02BC544C, (char*)"TUTOMSG_SONIC_E_HD");
		WriteData((char**)0x02BC5460, (char*)"TUTOMSG_SONIC_E_HD");
		WriteData((char**)0x02BC5478, (char*)"TUTOMSG_SONIC_E_HD");
		WriteData((char**)0x02BC5490, (char*)"TUTOMSG_SONIC_E_HD");
		WriteData((char**)0x02BC54A8, (char*)"TUTOMSG_SONIC_E_HD");
		WriteData((char**)0x02BC54C0, (char*)"TUTOMSG_SONIC_E_HD");
		WriteData((char**)0x02BC5464, (char*)"TUTOMSG_TAILS_E_HD");
		WriteData((char**)0x02BC547C, (char*)"TUTOMSG_KNUCKLES_E_HD");
		WriteData((char**)0x02BC5494, (char*)"TUTOMSG_AMY_E_HD");
		WriteData((char**)0x02BC54AC, (char*)"TUTOMSG_BIG_E_HD");
		WriteData((char**)0x02BC54C4, (char*)"TUTOMSG_E102_E_HD");
		//Japanese
		GUITextures_Japanese[0].Name = "AVA_BACK_HD";
		GUITextures_Japanese[1].Name = "ADV_WINDOW_HD";
		GUITextures_Japanese[2].Name = "AVA_CHSEL_E_HD";
		GUITextures_Japanese[3].Name = "AVA_SUUJI_HD";
		GUITextures_Japanese[4].Name = "AVA_CSR_HD";
		GUITextures_Japanese[5].Name = "AVA_DLG_E_HD";
		GUITextures_Japanese[6].Name = "AVA_FSDLG_E_HD";
		GUITextures_Japanese[7].Name = "AVA_FILESEL_E_HD";
		GUITextures_Japanese[8].Name = "AVA_FSCMN_E";
		GUITextures_Japanese[9].Name = "AVA_SNDTEST_E_HD";
		GUITextures_Japanese[10].Name = "AVA_SQUARE_HD";
		GUITextures_Japanese[11].Name = "AVA_STNAM_E_HD";
		GUITextures_Japanese[12].Name = "AVA_TRIALACTSEL_E_HD";
		GUITextures_Japanese[13].Name = "AVA_VMSSEL_E_HD";
		GUITextures_Japanese[14].Name = "B_CHNAM_E_HD";
		GUITextures_Japanese[15].Name = "M_CHNAM_HD";
		GUITextures_Japanese[16].Name = "TX_CHNAM_E_HD";
		GUITextures_Japanese[19].Name = "AVA_TITLE_E_HD";
		GUITextures_Japanese[21].Name = "AVA_OPTION_HD";
		GUITextures_Japanese[22].Name = "AVA_EMBLEM_HD";
		GUITextures_Japanese[23].Name = "AVA_NEW16NO_HD";
		GUITextures_Japanese[24].Name = "AVA_SAN_HD";
		GUITextures_Japanese[25].Name = "AVA_EMBLEMVIEW_E_HD";
		GUITextures_Japanese[26].Name = "AVA_INETDEMO";
		GUITextures_Japanese[27].Name = "TVSETTING";
		GUITextures_Japanese[28].Name = "AVA_METAL_SONIC_HD";
		//English
		GUITextures_English[0].Name = "AVA_BACK_HD";
		GUITextures_English[1].Name = "ADV_WINDOW_HD";
		GUITextures_English[2].Name = "AVA_CHSEL_E_HD";
		GUITextures_English[3].Name = "AVA_SUUJI_HD";
		GUITextures_English[4].Name = "AVA_CSR_HD";
		GUITextures_English[5].Name = "AVA_DLG_E_HD";
		GUITextures_English[6].Name = "AVA_FSDLG_E_HD";
		GUITextures_English[7].Name = "AVA_FILESEL_E_HD";
		GUITextures_English[8].Name = "AVA_FSCMN_E";
		GUITextures_English[9].Name = "AVA_SNDTEST_E_HD";
		GUITextures_English[10].Name = "AVA_SQUARE_HD";
		GUITextures_English[11].Name = "AVA_STNAM_E_HD";
		GUITextures_English[12].Name = "AVA_TRIALACTSEL_E_HD";
		GUITextures_English[13].Name = "AVA_VMSSEL_E_HD";
		GUITextures_English[14].Name = "B_CHNAM_E_HD";
		GUITextures_English[15].Name = "M_CHNAM_HD";
		GUITextures_English[16].Name = "TX_CHNAM_E_HD";
		GUITextures_English[19].Name = "AVA_TITLE_E_HD";
		GUITextures_English[21].Name = "AVA_OPTION_E_HD";
		GUITextures_English[22].Name = "AVA_EMBLEM_HD";
		GUITextures_English[23].Name = "AVA_NEW16NO_HD";
		GUITextures_English[24].Name = "AVA_SAN_HD";
		GUITextures_English[25].Name = "AVA_EMBLEMVIEW_E_HD";
		GUITextures_English[26].Name = "AVA_INETDEMO";
		GUITextures_English[27].Name = "TVSETTING";
		GUITextures_English[28].Name = "AVA_METAL_SONIC_HD";
		//French
		GUITextures_French[0].Name = "AVA_BACK_HD";
		GUITextures_French[1].Name = "ADV_WINDOW_HD";
		GUITextures_French[2].Name = "AVA_CHSEL_E_HD";
		GUITextures_French[3].Name = "AVA_SUUJI_HD";
		GUITextures_French[4].Name = "AVA_CSR_HD";
		GUITextures_French[5].Name = "AVA_DLG_E_HD";
		GUITextures_French[6].Name = "AVA_FSDLG_E_HD";
		GUITextures_French[7].Name = "AVA_FILESEL_E_HD";
		GUITextures_French[8].Name = "AVA_FSCMN_E";
		GUITextures_French[9].Name = "AVA_SNDTEST_E_HD";
		GUITextures_French[10].Name = "AVA_SQUARE_HD";
		GUITextures_French[11].Name = "AVA_STNAM_E_HD";
		GUITextures_French[12].Name = "AVA_TRIALACTSEL_E_HD";
		GUITextures_French[13].Name = "AVA_VMSSEL_E_HD";
		GUITextures_French[14].Name = "B_CHNAM_E_HD";
		GUITextures_French[15].Name = "M_CHNAM_HD";
		GUITextures_French[16].Name = "TX_CHNAM_E_HD";
		GUITextures_French[19].Name = "AVA_TITLE_E_HD";
		GUITextures_French[21].Name = "AVA_OPTION_E_HD";
		GUITextures_French[22].Name = "AVA_EMBLEM_HD";
		GUITextures_French[23].Name = "AVA_NEW16NO_HD";
		GUITextures_French[24].Name = "AVA_SAN_HD";
		GUITextures_French[25].Name = "AVA_EMBLEMVIEW_E_HD";
		GUITextures_French[26].Name = "AVA_INETDEMO";
		GUITextures_French[27].Name = "TVSETTING";
		GUITextures_French[28].Name = "AVA_METAL_SONIC_HD";
		//Spanish
		GUITextures_Spanish[0].Name = "AVA_BACK_HD";
		GUITextures_Spanish[1].Name = "ADV_WINDOW_HD";
		GUITextures_Spanish[2].Name = "AVA_CHSEL_E_HD";
		GUITextures_Spanish[3].Name = "AVA_SUUJI_HD";
		GUITextures_Spanish[4].Name = "AVA_CSR_HD";
		GUITextures_Spanish[5].Name = "AVA_DLG_E_HD";
		GUITextures_Spanish[6].Name = "AVA_FSDLG_E_HD";
		GUITextures_Spanish[7].Name = "AVA_FILESEL_E_HD";
		GUITextures_Spanish[8].Name = "AVA_FSCMN_E";
		GUITextures_Spanish[9].Name = "AVA_SNDTEST_E_HD";
		GUITextures_Spanish[10].Name = "AVA_SQUARE_HD";
		GUITextures_Spanish[11].Name = "AVA_STNAM_E_HD";
		GUITextures_Spanish[12].Name = "AVA_TRIALACTSEL_E_HD";
		GUITextures_Spanish[13].Name = "AVA_VMSSEL_E_HD";
		GUITextures_Spanish[14].Name = "B_CHNAM_E_HD";
		GUITextures_Spanish[15].Name = "M_CHNAM_HD";
		GUITextures_Spanish[16].Name = "TX_CHNAM_E_HD";
		GUITextures_Spanish[19].Name = "AVA_TITLE_E_HD";
		GUITextures_Spanish[21].Name = "AVA_OPTION_E_HD";
		GUITextures_Spanish[22].Name = "AVA_EMBLEM_HD";
		GUITextures_Spanish[23].Name = "AVA_NEW16NO_HD";
		GUITextures_Spanish[24].Name = "AVA_SAN_HD";
		GUITextures_Spanish[25].Name = "AVA_EMBLEMVIEW_E_HD";
		GUITextures_Spanish[26].Name = "AVA_INETDEMO";
		GUITextures_Spanish[27].Name = "TVSETTING";
		GUITextures_Spanish[28].Name = "AVA_METAL_SONIC_HD";
		//German
		GUITextures_German[0].Name = "AVA_BACK_HD";
		GUITextures_German[1].Name = "ADV_WINDOW_HD";
		GUITextures_German[2].Name = "AVA_CHSEL_E_HD";
		GUITextures_German[3].Name = "AVA_SUUJI_HD";
		GUITextures_German[4].Name = "AVA_CSR_HD";
		GUITextures_German[5].Name = "AVA_DLG_E_HD";
		GUITextures_German[6].Name = "AVA_FSDLG_E_HD";
		GUITextures_German[7].Name = "AVA_FILESEL_E_HD";
		GUITextures_German[8].Name = "AVA_FSCMN_E";
		GUITextures_German[9].Name = "AVA_SNDTEST_E_HD";
		GUITextures_German[10].Name = "AVA_SQUARE_HD";
		GUITextures_German[11].Name = "AVA_STNAM_E_HD";
		GUITextures_German[12].Name = "AVA_TRIALACTSEL_E_HD";
		GUITextures_German[13].Name = "AVA_VMSSEL_E_HD";
		GUITextures_German[14].Name = "B_CHNAM_E_HD";
		GUITextures_German[15].Name = "M_CHNAM_HD";
		GUITextures_German[16].Name = "TX_CHNAM_E_HD";
		GUITextures_German[19].Name = "AVA_TITLE_E_HD";
		GUITextures_German[21].Name = "AVA_OPTION_E_HD";
		GUITextures_German[22].Name = "AVA_EMBLEM_HD";
		GUITextures_German[23].Name = "AVA_NEW16NO_HD";
		GUITextures_German[24].Name = "AVA_SAN_HD";
		GUITextures_German[25].Name = "AVA_EMBLEMVIEW_E_HD";
		GUITextures_German[26].Name = "AVA_INETDEMO";
		GUITextures_German[27].Name = "TVSETTING";
		GUITextures_German[28].Name = "AVA_METAL_SONIC_HD";
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
		OBJ_REGULAR_TEXLISTS[0].Name = "OBJ_REGULAR_HD";
		GUITextures_English[21].Name = "AVA_OPTION_E_HD";
		GUITextures_Spanish[21].Name = "AVA_OPTION_E_HD";
		GUITextures_French[21].Name = "AVA_OPTION_E_HD";
		GUITextures_German[21].Name = "AVA_OPTION_E_HD";
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Question mark from Character Select
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; //Question mark from Character Select
		ResizeTextureList(&OBJ_REGULAR_TEXLIST, 100); //Added DC ripple texture
		WriteCall((void*)0x005092A1, FileIcon_Hook); //File icon
		*(NJS_MODEL_SADX*)0x00989384 = attach_0019D298_2; //Switch
		*(NJS_MODEL_SADX*)0x008BBD84 = attach_0019D298; //Switch (pressed)
		*(NJS_MODEL_SADX*)0x008B8438 = attach_00199A4C; //Dash panel
		*(NJS_MODEL_SADX*)0x008C5D5C = attach_001A6F74; //Star panel
		*(NJS_MODEL_SADX*)0x008C9060 = attach_001AA1B8; //Checkpoint
		*(NJS_MODEL_SADX*)0x008B6010 = attach_00197698; //Normal spring
		*(NJS_MODEL_SADX*)0x008B5498 = attach_00196B5C; //Spring B
		*(NJS_MODEL_SADX*)0x008C6624 = attach_001A7820; //Spring H
		*(NJS_MODEL_SADX*)0x008BFEC8 = attach_001A127C; //Rocket platform
		*(NJS_MODEL_SADX*)0x008BE168 = attach_0019F5CC; //Balloon
		*(NJS_MODEL_SADX*)0x008BFEC8 = attach_001A127C; //Rocket platform
		*(NJS_OBJECT *)0x02982F44 = object_0003FA40; //Egg Carrier model
		*(NJS_OBJECT *)0x298A894 = object_00047110; //Hodai
		*(NJS_OBJECT *)0x2941B2C = object_0001342C; //Kirai
		((NJS_ACTION*)0x2996C74)->object = &object_0004AEE0; //Beam in Act 2
		*(NJS_OBJECT *)0x0298E7D0 = object_0004AEE0; //Beam in Act 2
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (GameMode == GameModes_Menu)
		{
			if (Options_ArrowScale > 0.5f) Options_ArrowScaleAmount = -0.02f;
			if (Options_ArrowScale < 0.0f) Options_ArrowScaleAmount = 0.02f;
			Options_ArrowScale = Options_ArrowScale + Options_ArrowScaleAmount;
		}
	}
}




