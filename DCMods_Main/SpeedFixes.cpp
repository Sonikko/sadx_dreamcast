#include "stdafx.h"
#include <SADXModLoader.h>
#include <Trampoline.h>
#include "DC_Levels.h"
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
short TornadoSpeed = 172;
float TornadoCenterLayer = 1.5f;
double OHaneaSpeedOverride = 0.0013888885f;
double OSetiffNegativeSpeedOverride = -0.0013888885f; //Debris
float LeafPathRotxyOverride = 512.0f;
float LeafPathPositionOverride = 0.444999995f; 
float WCWindSpeedOverride = 0.05f;

//Twinkle Park
float Flag1AnimationSpeedOverride = 0.2f;

//Red Mountain
float OGLSpeedOverride = 0.25f;
float OLampSpeedOverride = 0.1f;

//Sky Deck
float OMekaSpeedOverride = 0.5f;
float TankhSpeedOverride = 0.25f;

//Casinopolis
double OKaizAnimationSpeedOverride = 0.001388885f;
int OCrystalAnimationSpeedOverride = 168;

//Lost World
float OTPanel1SpeedOverride = 0.0084745765f;
char OTPanelTimer = 120;
char LostWorldDoorFix = 34;
char LostWorldDoorFix1 = 6;

//Spike balls slowdown

static void __cdecl SwingSpikeBall_Main_r(ObjectMaster *a1);
static Trampoline SwingSpikeBall_Main_t(0x7A3F00, 0x7A3F07, SwingSpikeBall_Main_r);
static void __cdecl SwingSpikeBall_Main_r(ObjectMaster *a1)
{
	auto original = reinterpret_cast<decltype(SwingSpikeBall_Main_r)*>(SwingSpikeBall_Main_t.Target());
	if (EnableSpeedFixes == true && CurrentLevel == 6 && FramerateSetting < 2)
	{
		a1->Data1->Scale.z = a1->Data1->Scale.z * 0.5f;
	}
	original(a1);
}

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
	WriteData((float**)0x004DD8E7, &TornadoCenterLayer);
	WriteData((double**)0x004DF63E, &OHaneaSpeedOverride); //O Setiff Debris inside tornado
	WriteData((double**)0x004DF6C6, &OHaneaSpeedOverride); //O Setiff Debris inside tornado
	WriteData((double**)0x004DF6A2, &OSetiffNegativeSpeedOverride); //O Setiff Debris inside tornado
	WriteData((double**)0x004E1169, &OHaneaSpeedOverride); //Fans
	WriteData((double**)0x004E113E, &OHaneaSpeedOverride); //Fans
	WriteData((double**)0x004E1194, &OHaneaSpeedOverride); //Fans
	//Windpath Position 0.899
	WriteData((float**)0x004E4714, &LeafPathPositionOverride);
	WriteData((float**)0x004E471C, &LeafPathPositionOverride);
	WriteData((float**)0x004E4736, &LeafPathPositionOverride);
	WriteData((float**)0x004E473E, &LeafPathPositionOverride);
	WriteData((float**)0x004E4758, &LeafPathPositionOverride);
	WriteData((float**)0x004E4760, &LeafPathPositionOverride);
	WriteData((float**)0x004E44C3, &LeafPathPositionOverride);
	WriteData((float**)0x004E44BB, &LeafPathPositionOverride);
	WriteData((float**)0x004E44DD, &LeafPathPositionOverride);
	WriteData((float**)0x004E44E5, &LeafPathPositionOverride);
	WriteData((float**)0x004E44FF, &LeafPathPositionOverride);
	WriteData((float**)0x004E4507, &LeafPathPositionOverride);
	//Rotation 1024
	WriteData((float**)0x004E478D, &LeafPathRotxyOverride);//Windpath Rx 
	WriteData((float**)0x004E47A6, &LeafPathRotxyOverride);//Windpath Ry
	WriteData((float**)0x004E422B, &WCWindSpeedOverride);
	//Twinkle Park
	WriteData((float**)0x6201FD, &Flag1AnimationSpeedOverride);//Flag1
	WriteData((float**)0x62028D, &Flag1AnimationSpeedOverride);//Flag2
	WriteData((float**)0x62059D, &Flag1AnimationSpeedOverride);//OFlagWLamp
	//Red Mountain
	WriteData((float**)0x0060C885, &OGLSpeedOverride);	//OGL Speed Tweak
	WriteData((float**)0x0060B361, &OGLSpeedOverride);	//O Gear Speed Tweak
	WriteData((float**)0x00606676, &OLampSpeedOverride);
	//Sky Deck
	WriteData((float**)0x005F4146, &OMekaSpeedOverride);//OMeka OTutu	
	WriteData((float**)0x005EE248, &TankhSpeedOverride);//Tank h	
	//Casinopolis
	WriteData((double**)0x5C802C, &OKaizAnimationSpeedOverride); //OKaiza Animation Speed Tweak
	WriteData((double**)0x5C747C, &OKaizAnimationSpeedOverride); //OKaizb Animation Speed Tweak
	WriteData((double**)0x5C698C, &OKaizAnimationSpeedOverride); //Green Pirate / KaizC Animation Speed Tweak
	WriteData((double**)0x5C5E9C, &OKaizAnimationSpeedOverride); //Captain Pirate / KaizS Animation Speed Tweak
	WriteData((int**)0x5D3D68, &OCrystalAnimationSpeedOverride); //Spinning golden emerald Animation Speed Tweak	
	//Lost World
	WriteData((float**)0x005E8F37, &OTPanel1SpeedOverride); //multiplier
	WriteData((char*)0x005E8BBD, OTPanelTimer);
	WriteData((char*)0x005E7C3A, LostWorldDoorFix);
	WriteData((char*)0x005E78E1, LostWorldDoorFix);
	WriteData((char*)0x005E7C63, LostWorldDoorFix1);
	WriteData((char*)0x005E7841, LostWorldDoorFix1);

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
			TornadoCenterLayer = 3.0f;
			OHaneaSpeedOverride = 0.002777777f;
			OSetiffNegativeSpeedOverride = -0.002777777f;
			LeafPathRotxyOverride = 1024.0f;
			LeafPathPositionOverride = 0.88999999f;
			WCWindSpeedOverride = 0.05f;
			//Twinkle Park
			Flag1AnimationSpeedOverride = 0.4f;
			//Sky Deck
			OMekaSpeedOverride = 1.0f;
			TankhSpeedOverride = 1.0f;
			//Red Mountain
			OGLSpeedOverride = 0.5f;
			OLampSpeedOverride = 0.05f;
			//Casinopolis
			OKaizAnimationSpeedOverride = 0.00277777f;
			OCrystalAnimationSpeedOverride = 336;
			//LostWorld
			OTPanel1SpeedOverride = 0.016949153f;
			OTPanelTimer = 60;
			LostWorldDoorFix = 17;
			LostWorldDoorFix1 = 3;
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
			TornadoCenterLayer = 1.5f;
			OHaneaSpeedOverride = 0.0013888885f;
			OSetiffNegativeSpeedOverride = -0.0013888885f; //Debris
			LeafPathRotxyOverride = 512.0f;
			LeafPathPositionOverride = 0.444999995f;
			WCWindSpeedOverride = 0.05f;
			//Twinkle Park
			Flag1AnimationSpeedOverride = 0.2f;
			//Red Mountain
			OGLSpeedOverride = 0.25f;
			OLampSpeedOverride = 0.1f;
			//Sky Deck
			OMekaSpeedOverride = 0.5f;
			TankhSpeedOverride = 0.25f;
			//Casinopolis
			OKaizAnimationSpeedOverride = 0.001388885f;
			OCrystalAnimationSpeedOverride = 168;
			//LostWorld
			OTPanel1SpeedOverride = 0.0084745765f;
			OTPanelTimer = 120;
			LostWorldDoorFix = 34;
			LostWorldDoorFix1 = 6;
			}
		SpeedFixes_Init();
		FramerateSettingOld = FramerateSetting;
	}
}