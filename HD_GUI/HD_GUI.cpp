#include <SADXModLoader.h>
#include "CommonObjects.h"
#include "Objects_Shooting.h"
#include <stdlib.h>
#include <stdio.h>

#define ReplacePVMX(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_HD.PVM");
#define ReplacePNG(a) _snprintf_s(pathbuf, MAX_PATH, "%s\\textures\\pvr\\index.txt", path); helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf);
#define ReplacePNG_GoalRing(a) _snprintf_s(pathbuf, MAX_PATH, "%s\\textures\\m_goalring\\index.txt", path); helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf);

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

DataPointer(HWND, WindowHandle, 0x03D0FD30);

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

void ScaleCharselJapaneseText_LikeSeriouslyWTF(int that_cant_be_right, float x, float y, float z)
{
	DrawBG(that_cant_be_right, x+5.0f, y, z, 0.77999997f, 0.77999997f);
}

void HelpAvaSquareThing(unsigned __int8 n, float x, float y, float z, float scaleX, float scaleY)
{
	Direct3D_EnableZWrite(0);
	DrawBG_ava_square_a(n, x, y, z, scaleX, scaleY);
	Direct3D_EnableZWrite(1);
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		HMODULE GoalRing = GetModuleHandle(L"GoalRing");
		if (helperFunctions.Version < 6)
		{
			MessageBoxA(WindowHandle, "Mod Loader out of date. HD GUI requires API version 6 or newer.",
				"HD GUI error: Mod loader out of date", MB_OK | MB_ICONERROR);
			return;
		}
		WriteCall((void*)0x00504DC4, HelpAvaSquareThing);
		WriteCall((void*)0x0050717E, ScaleCharselJapaneseText_LikeSeriouslyWTF);
		WriteCall((void*)0x005070E2, ScaleCharselJapaneseText_LikeSeriouslyWTF);
		WriteData<1>((char*)0x0091C00C, 0i8); //You win/lose text alignment
		WriteData<1>((char*)0x0091C00E, 0i8); //You win/lose text alignment
		WriteData<1>((char*)0x0091C020, 0i8); //You win/lose text alignment
		WriteData<1>((char*)0x0091C022, 0i8); //You win/lose text alignment
		WriteData<1>((char*)0x0091C034, 0i8); //You win/lose text alignment
		WriteData<1>((char*)0x0091C048, 0i8); //You win/lose text alignment
		char pathbuf[MAX_PATH];
		ReplacePVMX("ADV_WINDOW");
		ReplacePVMX("AVA_BACK");
		ReplacePVMX("AVA_CHSEL");
		ReplacePVMX("AVA_CHSEL_E");
		ReplacePVMX("AVA_CSR");
		ReplacePVMX("AVA_DLG");
		ReplacePVMX("AVA_DLG_E");
		ReplacePVMX("AVA_EMBLEMVIEW");
		ReplacePVMX("AVA_EMBLEMVIEW_E");
		ReplacePVMX("AVA_EMBLEM");
		ReplacePVMX("AVA_FILESEL");
		ReplacePVMX("AVA_FILESEL_E");
		ReplacePVMX("AVA_FSDLG");
		ReplacePVMX("AVA_FSDLG_E");
		ReplacePVMX("AVA_METAL_SONIC");
		ReplacePVMX("AVA_NEW16NO");
		ReplacePVMX("AVA_OPTION")
		ReplacePVMX("AVA_OPTION_E");
		ReplacePVMX("AVA_SAN");
		ReplacePVMX("AVA_SNDTEST");
		ReplacePVMX("AVA_SNDTEST_E");
		ReplacePVMX("AVA_SQUARE");
		ReplacePVMX("AVA_STNAM");
		ReplacePVMX("AVA_STNAM_E");
		ReplacePVMX("AVA_SUUJI");
		//ReplacePVMX("AVA_TITLE_BACK"); - not used
		ReplacePVMX("AVA_TITLE_BACK_E");
		ReplacePVMX("AVA_TITLE");
		ReplacePVMX("AVA_TITLE_E");
		ReplacePVMX("AVA_TRIALACTSEL");
		ReplacePVMX("AVA_TRIALACTSEL_E");
		ReplacePVMX("AVA_VMSSEL");
		ReplacePVMX("AVA_VMSSEL_E");
		ReplacePVMX("BOARD_SCORE");
		ReplacePVMX("B_CHNAM");
		ReplacePVMX("B_CHNAM_E");
		ReplacePVMX("CHAOS_LIFEGAUGE");
		ReplacePVMX("CON_REGULAR");
		ReplacePVMX("CON_REGULAR_E");
		ReplacePVMX("E102TIME");
		ReplacePVMX("EMBLEM");
		ReplacePVMX("EXTRA");
		ReplacePVMX("FISHING");
		ReplacePVMX("GAMEOVER");
		ReplacePVMX("GAMEOVER_E");
		//ReplacePVMX("GG_TEXLIST_US");
		ReplacePVMX("KNU_EFF");
		ReplacePVMX("MAP_EC_A");
		ReplacePVMX("MAP_EC_B");
		ReplacePVMX("MAP_EC_H");
		ReplacePVMX("MAP_ICON");
		ReplacePVMX("MAP_MR_A");
		ReplacePVMX("MAP_MR_J");
		ReplacePVMX("MAP_MR_S");
		ReplacePVMX("MAP_PAST_E");
		ReplacePVMX("MAP_PAST_S");
		ReplacePVMX("MAP_SS");
		ReplacePVMX("MILESRACE");
		ReplacePVMX("MISSION_TUTO");
		ReplacePVMX("MIS_C_EN");
		ReplacePVMX("MIS_C_J");
		ReplacePVMX("MIS_P");
		ReplacePVMX("M_CHNAM");
		ReplacePVMX("OBJ_MINI_CART");
		ReplacePVMX("OBJ_REGULAR");
		ReplacePVMX("PRESSSTART");
		ReplacePVMX("SCORE_ACT");
		ReplacePVMX("SCORE_ACT_E");
		ReplacePVMX("SCORE_BACK");
		ReplacePVMX("SCORE_BOARD");
		ReplacePVMX("SCORE_BOARD_E");
		ReplacePVMX("SCORE_BOSS");
		ReplacePVMX("SCORE_BOSS_E");
		ReplacePVMX("SCORE_CART");
		ReplacePVMX("SCORE_CART_E");
		ReplacePVMX("SCORE_MOLE");
		ReplacePVMX("SCORE_MOLE_E");
		ReplacePVMX("SCORE_RESULT");
		ReplacePVMX("SCORE_RESULT_E");
		ReplacePVMX("SCORE_SHOOT");
		ReplacePVMX("SCORE_SHOOT_E");
		ReplacePVMX("SEGALOGO");
		ReplacePVMX("SEGALOGO_E");
		ReplacePVMX("SHOOTING0");
		ReplacePVMX("SMRYBG_AMY");
		ReplacePVMX("SMRYBG_BIG");
		ReplacePVMX("SMRYBG_E102");
		ReplacePVMX("SMRYBG_KNUCKLES");
		ReplacePVMX("SMRYBG_SONIC");
		ReplacePVMX("SMRYBG_SUPERSONIC");
		ReplacePVMX("SMRYBG_TAILS");
		ReplacePVMX("TUTOMSG_AMY");
		ReplacePVMX("TUTOMSG_AMY_E");
		ReplacePVMX("TUTOMSG_BIG");
		ReplacePVMX("TUTOMSG_BIG_E");
		ReplacePVMX("TUTOMSG_E102");
		ReplacePVMX("TUTOMSG_E102_E");
		ReplacePVMX("TUTOMSG_KNUCKLES");
		ReplacePVMX("TUTOMSG_KNUCKLES_E");
		ReplacePVMX("TUTOMSG_SONIC");
		ReplacePVMX("TUTOMSG_SONIC_E");
		ReplacePVMX("TUTOMSG_TAILS");
		ReplacePVMX("TUTOMSG_TAILS_E");
		ReplacePVMX("TUTO_CMN");
		ReplacePVMX("TUTO_CMN_E");
		ReplacePVMX("TX_CHNAM");
		ReplacePVMX("TX_CHNAM_E");
		ReplacePNG("ABC_TXT");
		ReplacePNG("A_STAGE01");
		ReplacePNG("A_STAGE01_E");
		ReplacePNG("A_STAGE02");
		ReplacePNG("A_STAGE02_E");
		ReplacePNG("A_STAGE03");
		ReplacePNG("A_STAGE03_E");
		ReplacePNG("B32ASCII");
		ReplacePNG("B32ASCII_J");
		ReplacePNG("B_STAGE01");
		ReplacePNG("B_STAGE01_E");
		ReplacePNG("B_STAGE02");
		ReplacePNG("B_STAGE02_E");
		ReplacePNG("B_STAGE03");
		ReplacePNG("B_STAGE03_E");
		ReplacePNG("B_STAGE04");
		ReplacePNG("B_STAGE04_E");
		ReplacePNG("E_STAGE01");
		ReplacePNG("E_STAGE01_E");
		ReplacePNG("E_STAGE02");
		ReplacePNG("E_STAGE02_E");
		ReplacePNG("E_STAGE03");
		ReplacePNG("E_STAGE03_E");
		ReplacePNG("E_STAGE04");
		ReplacePNG("E_STAGE04_E");
		ReplacePNG("E_STAGE05");
		ReplacePNG("E_STAGE05_E");
		ReplacePNG("HYOJI_BALLS_E");
		ReplacePNG("HYOJI_EMBLEM0");
		ReplacePNG("HYOJI_EMBLEM1");
		ReplacePNG("K_STAGE01");
		ReplacePNG("K_STAGE01_E");
		ReplacePNG("K_STAGE02");
		ReplacePNG("K_STAGE02_E");
		ReplacePNG("K_STAGE03");
		ReplacePNG("K_STAGE03_E");
		ReplacePNG("K_STAGE04");
		ReplacePNG("K_STAGE04_E");
		ReplacePNG("K_STAGE05");
		ReplacePNG("K_STAGE05_E");
		ReplacePNG("MISSION_A_AFIN");
		ReplacePNG("MISSION_A_AHOT");
		ReplacePNG("MISSION_A_ATWI");
		ReplacePNG("MISSION_A_BALMIN");
		ReplacePNG("MISSION_A_BALRING");
		ReplacePNG("MISSION_A_BALRING_E");
		ReplacePNG("MISSION_A_BALZERO");
		ReplacePNG("MISSION_A_BALZERO_E");
		ReplacePNG("MISSION_A_FIN_E");
		ReplacePNG("MISSION_A_HOT_E");
		ReplacePNG("MISSION_A_TWIN_E");
		ReplacePNG("MISSION_BIG_1K");
		ReplacePNG("MISSION_BIG_1K_E");
		ReplacePNG("MISSION_BIG_2K");
		ReplacePNG("MISSION_BIG_2K_E");
		ReplacePNG("MISSION_BIG_FROG");
		ReplacePNG("MISSION_BIG_FROG_E");
		ReplacePNG("MISSION_G_103");
		ReplacePNG("MISSION_G_103RING");
		ReplacePNG("MISSION_G_103RING_E");
		ReplacePNG("MISSION_G_103SEC");
		ReplacePNG("MISSION_G_103_E");
		ReplacePNG("MISSION_G_104");
		ReplacePNG("MISSION_G_104RING");
		ReplacePNG("MISSION_G_104RING_E");
		ReplacePNG("MISSION_G_104_E");
		ReplacePNG("MISSION_G_105");
		ReplacePNG("MISSION_G_105RING");
		ReplacePNG("MISSION_G_105RING_E");
		ReplacePNG("MISSION_G_105SEC");
		ReplacePNG("MISSION_G_105_E");
		ReplacePNG("MISSION_G_AEME");
		ReplacePNG("MISSION_G_AFIN");
		ReplacePNG("MISSION_G_AHOT");
		ReplacePNG("MISSION_G_ARED");
		ReplacePNG("MISSION_G_AWIN");
		ReplacePNG("MISSION_G_BEME");
		ReplacePNG("MISSION_G_BFIN");
		ReplacePNG("MISSION_G_BHOT");
		ReplacePNG("MISSION_G_BRED");
		ReplacePNG("MISSION_G_BWIN");
		ReplacePNG("MISSION_G_EME_E");
		ReplacePNG("MISSION_G_FIN_E");
		ReplacePNG("MISSION_G_FROG");
		ReplacePNG("MISSION_G_FROGRING");
		ReplacePNG("MISSION_G_FROGRING_E");
		ReplacePNG("MISSION_G_FROGSEC");
		ReplacePNG("MISSION_G_FROG_E");
		ReplacePNG("MISSION_G_HOT_E");
		ReplacePNG("MISSION_G_RED_E");
		ReplacePNG("MISSION_G_SONICD");
		ReplacePNG("MISSION_G_SONICDRING");
		ReplacePNG("MISSION_G_SONICDRING_E");
		ReplacePNG("MISSION_G_SONICDSEC");
		ReplacePNG("MISSION_G_SONICD_E");
		ReplacePNG("MISSION_G_WIN_E");
		ReplacePNG("MISSION_K_1MIN");
		ReplacePNG("MISSION_K_1MIN_E");
		ReplacePNG("MISSION_K_2MIN");
		ReplacePNG("MISSION_K_2MIN_E");
		ReplacePNG("MISSION_K_3EME");
		ReplacePNG("MISSION_K_3EME_E");
		ReplacePNG("MISSION_K_NOHINT");
		ReplacePNG("MISSION_K_NOHINT_E");
		ReplacePNG("MISSION_S_2MIN");
		ReplacePNG("MISSION_S_2MINH");
		ReplacePNG("MISSION_S_3MIN");
		ReplacePNG("MISSION_S_4MIN");
		ReplacePNG("MISSION_S_4MINH");
		ReplacePNG("MISSION_S_5MIN");
		ReplacePNG("MISSION_S_BOX");
		ReplacePNG("MISSION_S_BOXMIN");
		ReplacePNG("MISSION_S_EGGC");
		ReplacePNG("MISSION_S_EGGC_E");
		ReplacePNG("MISSION_S_EMECASINO");
		ReplacePNG("MISSION_S_EMECASINO_E");
		ReplacePNG("MISSION_S_EMESNOW");
		ReplacePNG("MISSION_S_EMESNOW_E");
		ReplacePNG("MISSION_S_EMEWIND");
		ReplacePNG("MISSION_S_EMEWIND_E");
		ReplacePNG("MISSION_S_FEGG");
		ReplacePNG("MISSION_S_FEGG_E");
		ReplacePNG("MISSION_S_ISEKI");
		ReplacePNG("MISSION_S_ISEKI_E");
		ReplacePNG("MISSION_S_RINGBOX");
		ReplacePNG("MISSION_S_TAILS");
		ReplacePNG("MISSION_S_TAILS_E");
		ReplacePNG("MISSION_T_BOX");
		ReplacePNG("MISSION_T_EMECASINO");
		ReplacePNG("MISSION_T_EMECASINO_E");
		ReplacePNG("MISSION_T_EMESNOW");
		ReplacePNG("MISSION_T_EMESNOW_E");
		ReplacePNG("MISSION_T_EMEWIND");
		ReplacePNG("MISSION_T_EMEWIND_E");
		ReplacePNG("MISSION_T_FASTEGG");
		ReplacePNG("MISSION_T_FASTEGG_E");
		ReplacePNG("MISSION_T_FASTSONIC");
		ReplacePNG("MISSION_T_FASTSONIC_E");
		ReplacePNG("MISSION_T_MISS");
		ReplacePNG("MISSION_T_MISS_E");
		ReplacePNG("MISSION_T_RINGEGG");
		ReplacePNG("MISSION_T_RINGEGG_E");
		ReplacePNG("MISSION_T_RINGSONIC");
		ReplacePNG("MISSION_T_RINGSONIC_E");
		ReplacePNG("M_STAGE01");
		ReplacePNG("M_STAGE01_E");
		ReplacePNG("M_STAGE02");
		ReplacePNG("M_STAGE02_E");
		ReplacePNG("M_STAGE03");
		ReplacePNG("M_STAGE03_E");
		ReplacePNG("M_STAGE04");
		ReplacePNG("M_STAGE04_E");
		ReplacePNG("M_STAGE05");
		ReplacePNG("M_STAGE05_E");
		ReplacePNG("s.txt");
		ReplacePNG("STAFFROLL_TXT");
		ReplacePNG("ST_064S_LOCKA");
		ReplacePNG("ST_064S_LOCKB");
		ReplacePNG("ST_064S_LOCKC");
		ReplacePNG("ST_064S_SCORE");
		ReplacePNG("ST_STAGE01");
		ReplacePNG("ST_STAGE01_E");
		ReplacePNG("ST_STAGE02");
		ReplacePNG("ST_STAGE02_E");
		ReplacePNG("ST_STAGE03");
		ReplacePNG("ST_STAGE03_E");
		ReplacePNG("ST_STAGE04");
		ReplacePNG("ST_STAGE04_E");
		ReplacePNG("ST_STAGE05");
		ReplacePNG("ST_STAGE05_E");
		ReplacePNG("S_STAGE01");
		ReplacePNG("S_STAGE01_E");
		ReplacePNG("S_STAGE02");
		ReplacePNG("S_STAGE02_E");
		ReplacePNG("S_STAGE03");
		ReplacePNG("S_STAGE03_E");
		ReplacePNG("S_STAGE04");
		ReplacePNG("S_STAGE04_E");
		ReplacePNG("S_STAGE05");
		ReplacePNG("S_STAGE05_E");
		ReplacePNG("S_STAGE06");
		ReplacePNG("S_STAGE06_E");
		ReplacePNG("S_STAGE07");
		ReplacePNG("S_STAGE07_E");
		ReplacePNG("S_STAGE08");
		ReplacePNG("S_STAGE08_E");
		ReplacePNG("S_STAGE09");
		ReplacePNG("S_STAGE09_E");
		ReplacePNG("S_STAGE10");
		ReplacePNG("S_STAGE10_E");
		ReplacePNG("T_EGGCARRIER");
		ReplacePNG("T_EGGCARRIER_E");
		ReplacePNG("T_MISTICRUIN");
		ReplacePNG("T_MISTICRUIN_E");
		ReplacePNG("T_STATIONSQUARE");
		ReplacePNG("T_STATIONSQUARE_E");
		if (GoalRing == nullptr)
		{
			ReplacePNG("MISSION_S_2MIN");
			ReplacePNG("MISSION_S_2MINH");
			ReplacePNG("MISSION_S_3MIN");
			ReplacePNG("MISSION_S_4MIN");
			ReplacePNG("MISSION_S_4MINH");
			ReplacePNG("MISSION_S_5MIN");
			ReplacePNG("MISSION_S_BOX");
			ReplacePNG("MISSION_S_RINGBOX");
			ReplacePNG("MISSION_T_BOX");
			ReplacePNG("MISSION_S_BOX_E");
			ReplacePNG("MISSION_S_BOX25MIN_E");
			ReplacePNG("MISSION_S_BOX2MIN_E");
			ReplacePNG("MISSION_S_BOX3MIN_E");
			ReplacePNG("MISSION_S_BOX45MIN_E");
			ReplacePNG("MISSION_S_BOX4MIN_E");
			ReplacePNG("MISSION_S_BOX5MIN_E");
			ReplacePNG("MISSION_S_RINGBOX_E");
			ReplacePNG("MISSION_T_BOX_E");
		}
		else
		{
			ReplacePNG_GoalRing("MISSION_S_2MIN");
			ReplacePNG_GoalRing("MISSION_S_2MINH");
			ReplacePNG_GoalRing("MISSION_S_3MIN");
			ReplacePNG_GoalRing("MISSION_S_4MIN");
			ReplacePNG_GoalRing("MISSION_S_4MINH");
			ReplacePNG_GoalRing("MISSION_S_5MIN");
			ReplacePNG_GoalRing("MISSION_S_BOX");
			ReplacePNG_GoalRing("MISSION_S_RINGBOX");
			ReplacePNG_GoalRing("MISSION_T_BOX");
			ReplacePNG_GoalRing("MISSION_S_BOX_E");
			ReplacePNG_GoalRing("MISSION_S_BOX25MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX2MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX3MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX45MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX4MIN_E");
			ReplacePNG_GoalRing("MISSION_S_BOX5MIN_E");
			ReplacePNG_GoalRing("MISSION_S_RINGBOX_E");
			ReplacePNG_GoalRing("MISSION_T_BOX_E");
		}
		ReplacePNG("MISSION_S_EGGC_E");
		ReplacePNG("MISSION_S_EMECASINO_E");
		ReplacePNG("MISSION_S_EMESNOW_E");
		ReplacePNG("MISSION_S_EMEWIND_E");
		ReplacePNG("MISSION_S_FEGG_E");
		ReplacePNG("MISSION_S_ISEKI_E");
		ReplacePNG("MISSION_S_TAILS_E");
		ReplacePNG("MISSION_T_EMECASINO_E");
		ReplacePNG("MISSION_T_EMESNOW_E");
		ReplacePNG("MISSION_T_EMEWIND_E");
		ReplacePNG("MISSION_T_FASTEGG_E");
		ReplacePNG("MISSION_T_FASTSONIC_E");
		ReplacePNG("MISSION_T_MISS_E");
		ReplacePNG("MISSION_T_RINGEGG_E");
		ReplacePNG("MISSION_T_RINGSONIC_E");
		ReplacePNG("M_STAGE01_E");
		ReplacePNG("M_STAGE02_E");
		ReplacePNG("M_STAGE03_E");
		ReplacePNG("M_STAGE04_E");
		ReplacePNG("M_STAGE05_E");
		ReplacePNG("STAFFROLL_TXT");
		ReplacePNG("ST_064S_LOCKA");
		ReplacePNG("ST_064S_LOCKB");
		ReplacePNG("ST_064S_LOCKC");
		ReplacePNG("ST_064S_SCORE");
		ReplacePNG("ST_128S_HPGEJI");
		ReplacePNG("ST_STAGE01_E");
		ReplacePNG("ST_STAGE02_E");
		ReplacePNG("ST_STAGE03_E");
		ReplacePNG("ST_STAGE04_E");
		ReplacePNG("ST_STAGE05_E");
		ReplacePNG("S_STAGE01_E");
		ReplacePNG("S_STAGE02_E");
		ReplacePNG("S_STAGE03_E");
		ReplacePNG("S_STAGE04_E");
		ReplacePNG("S_STAGE05_E");
		ReplacePNG("S_STAGE06_E");
		ReplacePNG("S_STAGE07_E");
		ReplacePNG("S_STAGE08_E");
		ReplacePNG("S_STAGE09_E");
		ReplacePNG("S_STAGE10_E");
		ReplacePNG("T_EGGCARRIER_E");
		ReplacePNG("T_MISTICRUIN_E");
		ReplacePNG("T_STATIONSQUARE_E");
		//Screen fade fixes
		f480_Fixed = 1.0f + VerticalResolution;
		f640_Fixed = 1.0f + HorizontalResolution;
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