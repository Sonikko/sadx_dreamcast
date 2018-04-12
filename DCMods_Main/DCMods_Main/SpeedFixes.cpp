#include "stdafx.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>

DataPointer(int, FramerateSetting, 0x0389D7DC);

static int FramerateSettingOld = 0;
static bool FixesApplied = false;

//General
float DashPanelAnimationSpeedOverride = 0.25f;
short SpinnerYAnimationSpeedOverride = 384;
short SpinnerXAnimationSpeedOverride = 288;
short SpinnerZAnimationSpeedOverride = 416;
short SpinnerBladesAnimationSpeedOverride = 6144;
short EmeraldPieceAnimationSpeedOverride = 128;
float TailsWiggleSpeed_Run = 0.005;
float TailsWiggleSpeed_RunX2 = 0.01;
float TailsWiggleSpeed_Rotation = 2048.0f;
float TailsWiggleSpeed_RotationX2 = 4096.0f;
short Tails_819 = 819;
short Tails_20480 = 20480;
short Tails_2048 = 2048;
short Tails_1792 = 1792;
short Tails_1280 = 1280;
short Tails_1536 = 1536;
short HintMonitorAnimationSpeedOverride = 364;
char LeonTimer1 = 20;
char LeonTimer2 = 60;
//Emerald Coast
char TakiSpeed = 8;

//Windy Valley
short TornadoSpeed = 345;
double OHaneaSpeedOverride = 0.0013888885f;

//Red Mountain
float OGLSpeedOverride = 0.25f;

//Sky Deck
float OMekaSpeedOverride = 0.5f;
float TankhSpeedOverride = 0.25f;

//Casinopolis
double OKaizAnimationSpeedOverride = 0.001388885f;
int OCrystalAnimationSpeedOverride = 168;

void SpeedFixes_Init()
{
	//General
	WriteData((float**)0x007A441B, &DashPanelAnimationSpeedOverride);
	WriteData((short*)0x4AFB90, SpinnerYAnimationSpeedOverride);
	WriteData((short*)0x4AFB8A, SpinnerXAnimationSpeedOverride);
	WriteData((short*)0x4AFB85, SpinnerZAnimationSpeedOverride);
	WriteData((short*)0x4AFD67, SpinnerBladesAnimationSpeedOverride);
	WriteData((short*)0x7A9BFF, HintMonitorAnimationSpeedOverride);
	WriteData<1>((char*)0x004A6B8C, LeonTimer1); //Leon timer 1
	WriteData<1>((char*)0x004A81C1, LeonTimer2); //Leon timer 2
	WriteData((short*)0x4A2CA6, EmeraldPieceAnimationSpeedOverride);
	//Tails
	WriteData((float**)0x461284, &TailsWiggleSpeed_Run);
	WriteData((float**)0x461276, &TailsWiggleSpeed_Run);
	WriteData((float**)0x4613C0, &TailsWiggleSpeed_Rotation);
	WriteData((short*)0x0045DA2C, Tails_1536); //1 
	WriteData((short*)0x0045DA0C, Tails_1280); //2
	WriteData((short*)0x0045DA14, Tails_1792); //3
	WriteData((short*)0x0045DA1C, Tails_2048); //4
	WriteData((short*)0x0045DA7D, Tails_20480); //5
	WriteData((short*)0x004612DA, Tails_819); //6
	WriteData((short*)0x004612ED, Tails_819); //7
	//Emerald Coast
	WriteData((char*)0x004FB8BE, TakiSpeed);
	//Windy Valley
	WriteData((short*)0x004DD8C8, TornadoSpeed);
	WriteData((double**)0x004E1169, &OHaneaSpeedOverride);
	WriteData((double**)0x004E113E, &OHaneaSpeedOverride);
	WriteData((double**)0x004E1194, &OHaneaSpeedOverride);
	//Red Mountain
	WriteData((float**)0x0060C885, &OGLSpeedOverride);	//OGL Speed Tweak
	WriteData((float**)0x0060B361, &OGLSpeedOverride);	//O Gear Speed Tweak
	//Sky Deck
	WriteData((float**)0x005F4146, &OMekaSpeedOverride);//OMeka OTutu	
	WriteData((float**)0x005EE248, &TankhSpeedOverride);//Tank h	
	//Casinopolis
	WriteData((double**)0x5C802C, &OKaizAnimationSpeedOverride); //OKaiza Animation Speed Tweak
	WriteData((double**)0x5C747C, &OKaizAnimationSpeedOverride); //OKaizb Animation Speed Tweak
	WriteData((double**)0x5C698C, &OKaizAnimationSpeedOverride); //Green Pirate / KaizC Animation Speed Tweak
	WriteData((double**)0x5C5E9C, &OKaizAnimationSpeedOverride); //Captain Pirate / KaizS Animation Speed Tweak
	WriteData((double**)0x5D3F90, &OKaizAnimationSpeedOverride); //Captain Pirate / KaizS Animation Speed Tweak
	WriteData((int**)0x5D3D68, &OCrystalAnimationSpeedOverride); //Spinning golden emerald Animation Speed Tweak	
}

void SpeedFixes_OnFrame()
{
	if (FramerateSettingOld != FramerateSetting)
	{
		//Original values for 30 FPS
		if (FramerateSetting >= 2)
		{
			//General
			DashPanelAnimationSpeedOverride = 1.0f;
			SpinnerYAnimationSpeedOverride = 768;
			SpinnerXAnimationSpeedOverride = 576;
			SpinnerZAnimationSpeedOverride = 832;
			SpinnerBladesAnimationSpeedOverride = 12288;
			HintMonitorAnimationSpeedOverride = 728;
			LeonTimer1 = 20;
			LeonTimer2 = 60;
			EmeraldPieceAnimationSpeedOverride = 256;
			//Tails
			TailsWiggleSpeed_Run = 0.01f;
			TailsWiggleSpeed_Rotation = 4096.0f;
			Tails_1536 = 1536;
			Tails_1280 = 1280;
			Tails_1792 = 1792;
			Tails_2048 = 2048;
			Tails_20480 = 20480;
			Tails_819 = 819;
			//Emerald Coast
			TakiSpeed = 8;
			//Windy Valley
			TornadoSpeed = 345;
			OHaneaSpeedOverride = 0.002777777f;
			//Sky Deck
			OMekaSpeedOverride = 1.0f;
			TankhSpeedOverride = 1.0f;
			//Red Mountain
			OGLSpeedOverride = 0.5f;
			//Casinopolis
			OKaizAnimationSpeedOverride = 0.00277777f;
			OCrystalAnimationSpeedOverride = 336;
		}
		//60 FPS values
		else
		{
			//General
			DashPanelAnimationSpeedOverride = 0.25f;
			SpinnerYAnimationSpeedOverride = 384;
			SpinnerXAnimationSpeedOverride = 288;
			SpinnerZAnimationSpeedOverride = 416;
			SpinnerBladesAnimationSpeedOverride = 6144;
			HintMonitorAnimationSpeedOverride = 364;
			LeonTimer1 = 10;
			LeonTimer2 = 30;
			EmeraldPieceAnimationSpeedOverride = 128;
			//Tails
			TailsWiggleSpeed_Run = 0.005f;
			TailsWiggleSpeed_Rotation = 2048.0f;
			Tails_1536 = 768;
			Tails_1280 = 640;
			Tails_1792 = 896;
			Tails_2048 = 1024;
			Tails_20480 = 10240;
			Tails_819 = 409;
			//Emerald Coast
			TakiSpeed = 0;
			//Windy Valley
			TornadoSpeed = 172;
			OHaneaSpeedOverride = 0.0013888885f;
			//Red Mountain
			OGLSpeedOverride = 0.25f;
			//Sky Deck
			OMekaSpeedOverride = 0.5f;
			TankhSpeedOverride = 0.25f;
			//Casinopolis
			OKaizAnimationSpeedOverride = 0.001388885f;
			OCrystalAnimationSpeedOverride = 168;
		}
		SpeedFixes_Init();
		FramerateSettingOld = FramerateSetting;
	}
}