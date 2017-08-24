#include "stdafx.h"
#include <SADXModLoader.h>

struct ChaoTreeSpawn
{
	NJS_VECTOR a;
	NJS_VECTOR b;
	NJS_VECTOR c;
	NJS_VECTOR d;
	NJS_VECTOR e;
	NJS_VECTOR f;
	NJS_VECTOR g;
	NJS_VECTOR h;
	NJS_VECTOR i;
	NJS_VECTOR j;
};

static int chaoracewater = 55;
static int ssgardenwater = 0;
static int ecgardensand = 64;
static int ecgardenwater = 54;
static int mrgardenwater = 36;
static int vmuframe = 0;
static int SkipSA1Entry = 0;
static float OpenDoorThing = 0;
static bool c1 = false;
static bool h1 = false;
static bool a1 = false;
static bool o1 = false;
static bool r2 = false;
static bool a2 = false;
static bool c2 = false;
static bool e2 = false;
static float bowchaoframe = 0;
static int letterframe = 0;
static int bowchaoanim = 0;
static bool cheerchaoanim = false;
static SecondaryEntrance BK_SSGardenStartPoint;

NJS_VECTOR racebutton{ 2020, 0, -0.68f };
NJS_VECTOR exitdoor{ 2099.42f, 13.49f, -0.8400002f };

FunctionPointer(void, SetChaoLandTableX, (LandTable *geo), 0x43A4C0);
FunctionPointer(void, sub_408530, (NJS_OBJECT *a1), 0x408530);
FunctionPointer(void, sub_715700, (int a1), 0x715700);
FunctionPointer(void, sub_715730, (int a1, int a2), 0x715730);
FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
FunctionPointer(void, sub_78A320, (int a1), 0x78A320);
FunctionPointer(void, sub_715640, (int a1), 0x715640);
FunctionPointer(void, sub_72C280, (int a1), 0x72C280);
FunctionPointer(void, sub_72C210, (int a1), 0x72C210);
FunctionPointer(void, sub_72C240, (int a1), 0x72C240);
FunctionPointer(void, sub_46C3D0, (ObjectMaster *a1), 0x46C3D0);
FunctionPointer(void, sub_7197E0, (ObjectMaster *a1), 0x7197E0);
FunctionPointer(void, sub_7197C0, (ObjectMaster *a1), 0x7197C0);
FunctionPointer(int, sub_72CC30, (), 0x72CC30);
FunctionPointer(void, sub_415210, (), 0x415210);
FunctionPointer(char, sub_72CD70, (), 0x72CD70);
FunctionPointer(int, sub_72CC00, (NJS_TEXLIST *a1, int a2, int a3, int a4), 0x72CC00);
FunctionPointer(char, sub_716A90, (), 0x716A90);
FunctionPointer(int, sub_72CBC0, (), 0x72CBC0);
FunctionPointer(signed int, sub_717160, (), 0x717160);
FunctionPointer(void, sub_72A750, (), 0x72A750);
FunctionPointer(void, sub_72A570, (), 0x72A570);
FunctionPointer(void, sub_724E60, (), 0x724E60);
FunctionPointer(void, sub_722500, (), 0x722500);
FunctionPointer(void, sub_79E400, (int ID, int a2, NJS_VECTOR *a3), 0x79E400);
FunctionPointer(ObjectMaster *, sub_72CB40, (), 0x72CB40);
FunctionPointer(ObjectMaster *, sub_72C4A0, (), 0x72C4A0);
FunctionPointer(ObjectMaster *, sub_72C3A0, (), 0x72C3A0);
FunctionPointer(ObjectMaster *, sub_72C2E0, (), 0x72C2E0);
FunctionPointer(void, sub_7153F0, (), 0x7153F0);

DataArray(NJS_VECTOR, Chao_SSChaoSpawnPoints, 0x033A0AF8, 16);
DataArray(NJS_VECTOR, Chao_ECChaoSpawnPoints, 0x033A0BB8, 16);
DataArray(NJS_VECTOR, Chao_MRChaoSpawnPoints, 0x033A0C78, 16);
DataArray(ChaoTreeSpawn, ChaoTreeSpawns, 0x033A0D78, 3);
DataArray(NJS_TEXLIST, ChaoTexLists, 0x033A1038, 7);
DataPointer(NJS_TEXLIST, AL_DX_ETC_TEXLIST, 0x033A1350);
DataPointer(NJS_TEXLIST, AL_OBJECT_TEXLIST, 0x033A11F0);
DataPointer(NJS_TEXLIST, AL_TOY_TEXLIST, 0x033A11F8);
DataPointer(NJS_TEXLIST, AL_DX_OBJ_CMN_TEXLIST, 0x033A1200);
DataPointer(int, CurrentChaoStage, 0x0339F87C);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, FramerateSetting, 0x0089295C);
DataPointer(SecondaryEntrance, ECGardenStartPoint, 0x0339F8E8);
DataPointer(SecondaryEntrance, SSGardenStartPoint, 0x0339F888);
DataPointer(NJS_OBJECT, ChaoNormalFruit, 0x03606D00);
DataPointer(int, dword_3CDC6B4, 0x3CDC6B4);
DataPointer(NJS_OBJECT, stru_366C124, 0x366C124);

#include <lanternapi.h>
#include "ChaoObjects.h"
#include "ChaoRaceFunc.h"
#include "Fountain.h"
#include "SSGarden.h"
#include "MRGarden.h"
#include "ChaoRace.h"
#include "ChaoRaceEntry.h"
#include "ECGarden_DC.h"
#include "ECGarden_func.h"
#include "RaceEntry_func.h"
#include "SSGarden_func.h"
#include "MRGarden_func.h"
#include "HintMessages.h"
#include "MainFunctions.h"
#include <stdlib.h>  

bool letteranims[][8] = {
	{ true, false, false, false, false,	false, false, false }, 
	{ false, true, false, false, false,	false, false, false },
	{ false, false, true, false, false,	false, false, false },
	{ false, false, false, true, false,	false, false, false },
	{ false, false, false, false, true,	false, false, false },
	{ false, false, false, false, false, true, false, false },
	{ false, false, false, false, false, false, true, false },
	{ false, false, false, false, false, false, false, true },

	{ true, false, false, false, false,	false, false, true },
	{ false, true, false, false, false,	false, false, true },
	{ false, false, true, false, false,	false, false, true },
	{ false, false, false, true, false,	false, false, true },
	{ false, false, false, false, true,	false, false, true },
	{ false, false, false, false, false, true, false, true },
	{ false, false, false, false, false, false, true, true },

	{ true, false, false, false, false,	false, true, true },
	{ false, true, false, false, false,	false, true, true },
	{ false, false, true, false, false,	false, true, true },
	{ false, false, false, true, false,	false, true, true },
	{ false, false, false, false, true,	false, true, true },
	{ false, false, false, false, false, true, true, true },

	{ true, false, false, false, false,	true, true, true },
	{ false, true, false, false, false,	true, true, true },
	{ false, false, true, false, false,	true, true, true },
	{ false, false, false, true, false,	true, true, true },
	{ false, false, false, false, true,	true, true, true },

	{ true, false, false, false, true, true, true, true },
	{ false, true, false, false, true, true, true, true },
	{ false, false, true, false, true, true, true, true },
	{ false, false, false, true, true, true, true, true },

	{ true, false, false, true, true, true, true, true },
	{ false, true, false, true, true, true, true, true },
	{ false, false, true, true, true, true, true, true },

	{ true, false, true, true, true, true, true, true },
	{ false, true, true, true, true, true, true, true },

	{ true, true, true, true, true,	true, true, true },

	{ false, false, false, false, false, false, false, false },

	{ true, true, true, true, true,	true, true, true },

	{ false, false, false, false, false, false, false, false },

	{ true, true, true, true, true,	true, true, true },

	{ false, false, false, false, false, false, false, false },

	{ true, true, true, true, true,	true, true, true },

	{ false, false, false, false, false, false, false, false },

	{ false, false, false, true, true, false, false, false },

	{ false, false, true, false, false, true, false, false },

	{ false, false, false, false, false, false, false, false },
	{ false, true, false, false, false, false, true, false },
	{ true, false, false, false, false, false, false, true },
	{ false, false, false, false, false, false, false, false },
	{ false, false, false, true, true, false, false, false },
	{ false, false, true, false, false, true, false, false },
	{ true, false, true, false, false, true, false, true },
	{ false, true, false, true, true, false, true, false },
	{ false, false, false, false, false, false, false, false },
	{ true, false, true, false, false, true, false, true },
	{ false, true, false, true, true, false, true, false },
	{ false, false, false, false, false, false, false, false },
	{ true, false, false, false, false, false, false, false },
	{ false, true, false, false, false, false, false, false },
	{ true, false, true, false, false, false, false, false },
	{ true, false, true, false, true, false, false, false },
	{ false, true, false, true, false, true, false, false },
	{ true, false, true, false, true, false, true, false },
	{ false, true, false, true, false, true, false, true },
	{ true, false, true, false, true, false, true, false },
	{ false, true, false, true, false, true, false, true },
	{ true, false, true, false, true, false, true, false },
	{ false, true, false, true, false, true, false, true },
	{ true, false, true, false, true, false, true, false },
	{ false, false, false, false, false, false, false, false },
};

PointerInfo pointers[] = {
	ptrdecl(0x9BF06C, &ChaoGardenMessages_Japanese),
	ptrdecl(0x9BF070, &ChaoGardenMessages_English),
	ptrdecl(0x9BF074, &ChaoGardenMessages_French),
	ptrdecl(0x9BF078, &ChaoGardenMessages_Spanish),
	ptrdecl(0x9BF07C, &ChaoGardenMessages_German)
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init(const char *path)
	{
//General
		HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	/*	if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
		{
		//	material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
		}*/
		//Garden transporters stuff
		*(NJS_OBJECT*)0x036065B4 = object_00134808; //EC garden to EC transporter
		*(NJS_OBJECT*)0x03604540 = object_00180454; //All other transporters
		WriteData((char*)0x00729576, 0x90, 1); //Collision struct pointer
		WriteData((char*)0x00729577, 0x8B, 1); //Collision struct pointer
		WriteData((char*)0x00729578, 0x7F, 1); //Collision struct pointer
		WriteData((char*)0x00729574, 0x04, 1); //Collision parameter for InitCollision
		WriteCall((void*)0x005262DE, SetTransporterTexture);// Garden transporter texture/texlist
		WriteJump((void*)0x729260, (void*)0x5262B0);// Garden transporter effects
		//Fruits
		*(NJS_OBJECT*)0x3606D00 = object_0017C0BC; //Coconut
		*(NJS_OBJECT*)0x3606958 = object_0017C0BC_green; //Coconut (unripe)
		WriteCall((void*)0x00722D59, ScaleFruit); //Scale normal fruit
		//Trees
		*(NJS_MODEL_SADX*)0x036087C0 = attach_0017BAF8; //Tree trunk
		*(NJS_MODEL_SADX*)0x03608064 = attach_0017B768; //Tree leaves 1
		*(NJS_MODEL_SADX*)0x036076E4 = attach_0017B034; //Tree leaves 2
		//Misc
		WriteData((void*)0x007195AE, 0x90, 5); //Don't load SADX button prompts in SS garden
		WriteData((void*)0x00719181, 0x90, 5); //Don't load SADX button prompts in EC garden
		WriteData((void*)0x00718E20, 0x90, 5); //Don't load SADX button prompts in MR garden
		WriteJump((void*)0x0078AC80, sub_78AC80X); //Eggs
		WriteData((char*)0x007151D3, 0x1A, 1);//The secret EC egg is a two-tone black egg
		ResizeTextureList(&ChaoTexLists[0], 144); //AL_BODY
		ResizeTextureList((NJS_TEXLIST*)0x033A1338, 31); //AL_DX_OBJ_CMN
		//Name Machine stuff
		*(NJS_OBJECT*)0x33CFC70 = object_001834CC; //Name Machine
		*(NJS_OBJECT*)0x33CB04C = object_001826E8; //Name machine button
		WriteCall((void*)0x00729DE9, NameMachineTexlist);
		WriteData((void*)0x00729EBB, 0x90, 5);
		WriteData((void*)0x00729E57, 0x90, 5);
		WriteJump((void*)0x00729F40, LoadChaoNameMachineX);
		DataArray(CollisionData, stru_33D0B50, 0x033D0B50, 9);
		stru_33D0B50[0].v.z = 5;
		for (int i = 1; i < 9; i++)
		{
			stru_33D0B50[i].scale.x = 0;
			stru_33D0B50[i].scale.y = 0;
			stru_33D0B50[i].scale.z = 0;
		}
//Chao Race Entry
		WriteCall((void*)0x0071C0CF, BowChaoThing);
		BK_SSGardenStartPoint.Position.x = SSGardenStartPoint.Position.x;
		BK_SSGardenStartPoint.Position.y = SSGardenStartPoint.Position.y;
		BK_SSGardenStartPoint.Position.z = SSGardenStartPoint.Position.z;
		BK_SSGardenStartPoint.YRot = SSGardenStartPoint.YRot;
		WriteJump((void*)0x007199B0, LoadRaceEntryX);
		ResizeTextureList((NJS_TEXLIST *)0x340E934, 49); //Race Entry texlist
		WriteCall((void*)0x0072C618, ExitRaceEntry);
		WriteCall((void*)0x0071D17A, LoadSADXEntry);
		WriteData((void*)0x0071D158, 0x90, 5); //Don't move Sanic
		WriteData((void*)0x0071CEE0, 0x90, 5); //Don't mess with entry button
		WriteData((void*)0x0071CEC2, 0x90, 5); //Don't mess with entry button
//Chao Race stuff
		WriteJump((void*)0x00719DB0, LoadChaoRaceX);
		WriteData((float*)0x00719D74, -16000.0f); //Draw distance
//Station Square garden stuff
		WriteJump((void*)0x4145D0, sub_4145D0); //Elevator function
		WriteJump((void*)0x0072AB80, LoadChaoRaceDoorX);
		WriteCall((void*)0x00638DD7, SetElevatorTexlist);
		WriteData((void*)0x007195A3, 0x90, 5);
		ResizeTextureList((NJS_TEXLIST*)0x03406088, 32); //GARDEN00SSOBJ
		*(NJS_OBJECT*)0x0340C5A4 = object_00012A2C; //race door wall part
		*(NJS_MOTION*)0x0340D978 = _12ADC; //race door animation
		((NJS_OBJECT*)0x0340B97C)->basicdxmodel->mats[0].attr_texId = 18; //race door left
		((NJS_OBJECT*)0x0340B97C)->basicdxmodel->mats[1].attr_texId = 18; //race door left
		((NJS_OBJECT*)0x0340B97C)->basicdxmodel->mats[2].attr_texId = 28; //race door left
		((NJS_OBJECT*)0x0340B1B4)->basicdxmodel->mats[0].attr_texId = 18; //race door right
		((NJS_OBJECT*)0x0340B1B4)->basicdxmodel->mats[1].attr_texId = 18; //race door right
		((NJS_OBJECT*)0x0340B1B4)->basicdxmodel->mats[2].attr_texId = 28; //race door right
		WriteData((void*)0x00719265, 0x7D, 1); //Exit 1
		WriteData((void*)0x00719264, 0xF2, 1); //Exit 2
		WriteData((void*)0x00719263, 0xF0, 1); //Exit 2
		WriteJump((void*)0x00719600, LoadSSGardenX);
		Chao_SSChaoSpawnPoints[0] = { 190.375f, 2.875f, 58.4f };
		Chao_SSChaoSpawnPoints[1] = { 116.25f, 4, 38 };
		Chao_SSChaoSpawnPoints[2] = { 76, 2.875f, 36 };
		Chao_SSChaoSpawnPoints[3] = { 103, 3.375f, 56 };
		Chao_SSChaoSpawnPoints[4] = { 141, 1.075f, 80 };
		Chao_SSChaoSpawnPoints[5] = { 55, 0, -104 };
		Chao_SSChaoSpawnPoints[6] = { 47,  0, -58 };
		Chao_SSChaoSpawnPoints[7] = { -4, 0, 4.36f };
		Chao_SSChaoSpawnPoints[8] = { -34, 0, 52 };
		Chao_SSChaoSpawnPoints[9] = { -100, 0, 100 };
		Chao_SSChaoSpawnPoints[10] = { -47, 0, -109 };
		Chao_SSChaoSpawnPoints[11] = { -100, 0, -88 };
		Chao_SSChaoSpawnPoints[12] = { -100, 0, -67 };
		Chao_SSChaoSpawnPoints[13] = { -165, -0.5f, -6.3f };
		Chao_SSChaoSpawnPoints[14] = { -179.625f, -1.125f, 76 };
		Chao_SSChaoSpawnPoints[15] = { -172.625f, 0.125f, 100 };
		ChaoTreeSpawns[0].a.x = 129.32f; //Palm tree 1
		ChaoTreeSpawns[0].a.y = 4.0f;  //Palm tree 1
		ChaoTreeSpawns[0].a.z = 124.78f;  //Palm tree 1
		ChaoTreeSpawns[0].b.x = 177.62f; //Palm tree 1
		ChaoTreeSpawns[0].b.y = 4.0f; //Palm tree 1
		ChaoTreeSpawns[0].b.z = 62.64f;  //Palm tree 1
		ChaoTreeSpawns[0].c.x = 109.29f; //Palm tree 1
		ChaoTreeSpawns[0].c.y = 4.0f;  //Palm tree 1
		ChaoTreeSpawns[0].c.z = 2.2f;  //Palm tree 1
		ChaoTreeSpawns[0].d.x = 80.24f; //Palm tree 1
		ChaoTreeSpawns[0].d.y = 4.0f;  //Palm tree 1
		ChaoTreeSpawns[0].d.z = 52.08f;  //Palm tree 1
		ChaoTreeSpawns[0].e.x = 107.19f; //Palm tree 1
		ChaoTreeSpawns[0].e.y = 4.0f;  //Palm tree 1
		ChaoTreeSpawns[0].e.z = 28.25f;  //Palm tree 1
		WriteData((float*)0x00719461, 184.88f); //EC Transporter X
		WriteData((float*)0x0071945C, 3.0f); //EC Transporter Y
		WriteData((float*)0x00719457, 107.09f); //EC Transporter Z
		WriteData((float*)0x00719442, 161.91f); //MR Transporter X
		WriteData((float*)0x0071943D, 3.0f); //MR Transporter Y
		WriteData((float*)0x00719438, 127.91f); //MR Transporter Z
		WriteData((float*)0x0072AFF0, 59.5f); //Black market door X (collision)
		WriteData((float*)0x0072AE8E, 59.5f); //Black market door X
		WriteData((float*)0x0072AE87, 145.0f); //Black market door Z		
		WriteData((float*)0x0072AFFA, 145.0f); //Black market door Z (collision)		
		WriteData((void*)0x007195D1, 0x90, 5); //Kill SADX water
		WriteData((void*)0x0071946E, 0x90, 5); //Kill SADX fountain
		WriteData((float*)0x0071949E, -1000.0f); //Kill hintbox
		WriteData((float*)0x00719496, -1000.0f); //Kill hintbox
//Mystic Ruins garden stuff
		WriteJump((void*)0x00718E90, LoadMRGardenX);
		WriteJump((void*)0x0072A790, sub_72A790); //Mystic Ruins garden function 1
		WriteJump((void*)0x0072A820, sub_72A820); //Mystic Ruins garden function 2
		WriteJump((void*)0x0072A8B0, sub_72A8B0); //Mystic Ruins garden function 3
		WriteData((void*)0x00718E43, 0x90, 5); //Kill SADX water
		WriteData((void*)0x00728F1E, 0x90, 5); //Kill SADX water 2
		WriteData((void*)0x00718E7F, 0xC6, 1); //Draw distance
		WriteData((void*)0x00718E7E, 0x3B, 1); //Draw distance
		WriteData((void*)0x00718E7D, 0x80, 1); //Draw distance
		Chao_MRChaoSpawnPoints[0] = { 264, 15.4f, -65.375f };
		Chao_MRChaoSpawnPoints[1] = { 138.125f, 3.4f, 26.75f };
		Chao_MRChaoSpawnPoints[2] = { 235, 15.525f, -24 };
		Chao_MRChaoSpawnPoints[3] = { 131.875f, 5.05f, 90.3f };
		Chao_MRChaoSpawnPoints[4] = { 80, 9.2f, -35 };
		Chao_MRChaoSpawnPoints[5] = { -12, 2.25f, 33.75f };
		Chao_MRChaoSpawnPoints[6] = { 18.5f, 19.2f, -11.875f };
		Chao_MRChaoSpawnPoints[7] = { -53.75f, 46.25f, -74 };
		Chao_MRChaoSpawnPoints[8] = { -139, 25.125f, 3.875f };
		Chao_MRChaoSpawnPoints[9] = { -200.625f, 10.875f, 18 };
		Chao_MRChaoSpawnPoints[10] = { -199.375f, 7.65f, 56.5f };
		Chao_MRChaoSpawnPoints[11] = { -207, 2, 154.375f };
		Chao_MRChaoSpawnPoints[12] = { -85.25f, 1.575f, 141.75f };
		Chao_MRChaoSpawnPoints[13] = { -164.75f, 1.8f, 152.5f };
		Chao_MRChaoSpawnPoints[14] = { -36, 4.6f, 148.875f };
		Chao_MRChaoSpawnPoints[15] = { 6.7f, 2, 68.5f };
		ChaoTreeSpawns[2].a.x = 126.8847f; //Palm tree 1
		ChaoTreeSpawns[2].a.y = 3.2116146f;  //Palm tree 1
		ChaoTreeSpawns[2].a.z = 129.4048f;  //Palm tree 1
		ChaoTreeSpawns[2].b.x = -45.25877f; //Palm tree 2
		ChaoTreeSpawns[2].b.y = 3.0f;  //Palm tree 2
		ChaoTreeSpawns[2].b.z = 108.8823f;  //Palm tree 2
		ChaoTreeSpawns[2].c.x = -157.6473f; //Palm tree 3
		ChaoTreeSpawns[2].c.y = 2.8f;  //Palm tree 3
		ChaoTreeSpawns[2].c.z = 122.3606f;  //Palm tree 3
		ChaoTreeSpawns[2].d.x = -55.71612f; //Palm tree 4
		ChaoTreeSpawns[2].d.y = 47.5f;  //Palm tree 4
		ChaoTreeSpawns[2].d.z = 20.53316f;  //Palm tree 4
		ChaoTreeSpawns[2].e.x = 83.6948f; //Palm tree 5
		ChaoTreeSpawns[2].e.y = 7.5f;  //Palm tree 5
		ChaoTreeSpawns[2].e.z = -47.53315f;  //Palm tree 5
//Egg Carrier garden stuff
		ECGardenStartPoint.Position.y = 71.0f;
		WriteCall((void*)0x00729289, NameMachineTexlist);
		WriteJump((void*)0x007191D0, LoadECGardenX);
		WriteData((float*)0x007191BF, -12000.0f); //Draw distance
		WriteData((void*)0x00718FE8, 0xC4, 1); //Disable Y check
		WriteData((float*)0x007190FE, 131.67f); //Name machine
		WriteData((float*)0x00719106, 2.6f); //Name machine
		WriteData((float*)0x0071910E, -204.28f); //Name machine
		WriteData((float*)0x00719147, 92.5f); //SS transporter
		WriteData((float*)0x00719142, 70.86f);  //SS transporter
		WriteData((float*)0x0071913D, -10.77f);  //SS transporter
		WriteData((float*)0x0071912B, 80.47f); //MR transporter
		WriteData((float*)0x00719126, 70.86f);  //MR transporter
		WriteData((float*)0x00719121, -41.76f);  //MR transporter
		Chao_ECChaoSpawnPoints[0] = { 102.0f, 78.375f, 29.5f };
		Chao_ECChaoSpawnPoints[1] = { 129.625f, 10.125f, 113.0f };
		Chao_ECChaoSpawnPoints[2] = { 203.625f, 11.625f, -61.975f };
		Chao_ECChaoSpawnPoints[3] = { 132.0f, 12.375f, 107.0f };
		Chao_ECChaoSpawnPoints[4] = { -37.0f, 42.95f, 135.0f };
		Chao_ECChaoSpawnPoints[5] = { -145.0f, 13.475f, 129.0f };
		Chao_ECChaoSpawnPoints[6] = { -202.875f, 13.5f, 83.0f };
		Chao_ECChaoSpawnPoints[7] = { -120.0f, 78.375f, -102.0f };
		Chao_ECChaoSpawnPoints[8] = { -83.0f, 15.55f, -232.5f };
		Chao_ECChaoSpawnPoints[9] = { 71.0f, 11.25f, -254.0f };
		Chao_ECChaoSpawnPoints[10] = { 103.0f, 41.075f, -137.0f };
		Chao_ECChaoSpawnPoints[11] = { 2.875f, 41.625f, -147.625f };
		Chao_ECChaoSpawnPoints[12] = { 202.625f, 11.25f, -76.0f };
		Chao_ECChaoSpawnPoints[13] = { 31.0f, 11.25f, 164.5f };
		Chao_ECChaoSpawnPoints[14] = { -272.0f, 12.375f, -61.0f };
		Chao_ECChaoSpawnPoints[15] = { -195.0f, 10.125f, -207.0f };
		ChaoTreeSpawns[1].a.x = -181; //Palm tree 1
		ChaoTreeSpawns[1].a.y = 4.0f;  //Palm tree 1
		ChaoTreeSpawns[1].a.z = -151.19f;  //Palm tree 1
		ChaoTreeSpawns[1].b.x = -102.76f; //Palm tree 2
		ChaoTreeSpawns[1].b.y = 4.0f;  //Palm tree 2
		ChaoTreeSpawns[1].b.z = -193.18f;  //Palm tree 2
		ChaoTreeSpawns[1].c.x = -8.89f; //Palm tree 3
		ChaoTreeSpawns[1].c.y = 4.0f;  //Palm tree 3
		ChaoTreeSpawns[1].c.z = -219.26f;  //Palm tree 3
		ChaoTreeSpawns[1].d.x = 46.81f; //Palm tree 4
		ChaoTreeSpawns[1].d.y = 4.0f;  //Palm tree 4
		ChaoTreeSpawns[1].d.z = -220.62f;  //Palm tree 4
		ChaoTreeSpawns[1].e.x = 100.89f; //Palm tree 5
		ChaoTreeSpawns[1].e.y = 72.0f;  //Palm tree 5
		ChaoTreeSpawns[1].e.z = -65.27f;  //Palm tree 5
	}

__declspec(dllexport) void __cdecl OnFrame()
	{
//All gardens VMU
	if (CurrentChaoStage >= 4 && CurrentChaoStage <= 6)
	{
		if (GameState != 16)
		{
			if (vmuframe > 4) vmuframe = 0;
			matlist_0018271C[1].attr_texId = vmuframe;
			if (FrameCounter % 120 == 0) vmuframe++;
		}
	}
//Station Square garden
		if (CurrentChaoStage == 4 && GameState != 16)
		{
			auto entity = CharObj1Ptrs[0];
			if (entity != nullptr)
			{
				if (entity->Position.z > 150 && entity->Position.x > 30.0f)
				{
				sub_715700(7);
				}
			}
			if (ssgardenwater > 9) ssgardenwater = 0;
			matlist_00011388[0].attr_texId = ssgardenwater;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) ssgardenwater++;
			for (int q = 0; q < LengthOfArray(uv_000144F0); q++)
			{
				uv_000144F0[q].v = uv_000144F0[q].v - 2;
			}
			if (uv_000144F0[0].v < 0)
			{
				for (int q2 = 0; q2 < LengthOfArray(uv_000144F0); q2++)
				{
					uv_000144F0[q2].v = uv_000144F0R[q2].v;
				}
			}

		}
//Egg Carrier garden
		if (CurrentChaoStage == 5 && GameState != 16)
		{
			if (ecgardenwater > 63) ecgardenwater = 54;
			if (ecgardensand > 78) ecgardensand = 64;
			matlist_00006510[0].attr_texId = ecgardensand;
			matlist_0000C748[0].attr_texId = ecgardenwater;
			matlist_0000EF4C[0].attr_texId = ecgardenwater;
			matlist_00001D00[0].attr_texId = ecgardenwater;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				ecgardenwater++;
				ecgardensand++;
			}
		}
//Mystic Ruins garden
		if (CurrentChaoStage == 6 && GameState != 16)
		{
			for (int q3 = 0; q3 < LengthOfArray(uv_0000F184); q3++) { uv_0000F184[q3].v--; }
			if (uv_0000F184[2].v <= -255)
			{
				for (int r5 = 0; r5 < LengthOfArray(uv_0000F184); r5++)
				{
					uv_0000F184[r5].v = uv_0000F184_R[r5].v;
				}
			}
			if (mrgardenwater > 45) mrgardenwater = 36;
			matlist_00002FF4[0].attr_texId = mrgardenwater;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) mrgardenwater++;
			if (Camera_Data1 != nullptr)
			{
				object_00013A78.pos[0] = Camera_Data1->Position.x;
				object_00013A78.pos[1] = 0;
				object_00013A78.pos[2] = Camera_Data1->Position.z;
				object_0001AD38.pos[0] = Camera_Data1->Position.x;
				object_0001AD38.pos[1] = 0;
				object_0001AD38.pos[2] = Camera_Data1->Position.z;
				object_00018AF4.pos[0] = Camera_Data1->Position.x;
				object_00018AF4.pos[1] = 0;
				object_00018AF4.pos[2] = Camera_Data1->Position.z;
			}
		}
//Chao Race Entry
		if (CurrentChaoStage == 2 && GameState != 16)
		{
			DataPointer(NJS_ACTION, xxxa, 0x33B7340);
			
			if (SkipSA1Entry == true)
			{
				((NJS_MATERIAL*)0x033AEB70)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
				((NJS_MATERIAL*)0x033AEB70)->diffuse.color=0xFFFFFFFF;
			}
			else
			{
				((NJS_MATERIAL*)0x033AEB70)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
				((NJS_MATERIAL*)0x033AEB70)->diffuse.color = 0xFFB2B2B2;
			}
			//Cheer Chao
			if (FrameCounter % (35/FramerateSetting) == 0) cheerchaoanim = !cheerchaoanim;
			if (cheerchaoanim == true)matlist_03270F10[0].attr_texId = 48; else matlist_03270F10[0].attr_texId = 39;
			//Letters
			c1 = letteranims[letterframe][0];
			h1 = letteranims[letterframe][1];
			a1 = letteranims[letterframe][2];
			o1 = letteranims[letterframe][3];
			r2 = letteranims[letterframe][4];
			a2 = letteranims[letterframe][5];
			c2 = letteranims[letterframe][6];
			e2 = letteranims[letterframe][7];
			if (c1 == true) matlist_00047DEC[0].attr_texId = 31; else matlist_00047DEC[0].attr_texId = 40;
			if (h1 == true) matlist_00047DEC[1].attr_texId = 32; else matlist_00047DEC[1].attr_texId = 41;
			if (a1 == true) matlist_00047DEC[2].attr_texId = 33; else matlist_00047DEC[2].attr_texId = 42;
			if (o1 == true) matlist_00047DEC[3].attr_texId = 34; else matlist_00047DEC[3].attr_texId = 43;
			if (r2 == true) matlist_00047DEC[6].attr_texId = 35; else matlist_00047DEC[6].attr_texId = 44;
			if (a2 == true) matlist_00047DEC[7].attr_texId = 36; else matlist_00047DEC[7].attr_texId = 45;
			if (c2 == true) matlist_00047DEC[5].attr_texId = 37; else matlist_00047DEC[5].attr_texId = 46;
			if (e2 == true) matlist_00047DEC[4].attr_texId = 38; else matlist_00047DEC[4].attr_texId = 47;
			if (FrameCounter % (10 / FramerateSetting) == 0) letterframe++;
			if (letterframe > LengthOfArray(letteranims)) letterframe = 0;
			//Exit
			auto entity = CharObj1Ptrs[0];
			if (entity != nullptr)
			{
				if (entity->Position.x > 2110 && SkipSA1Entry == 0)
				{
					sub_715700(4);
				}
			}
			if (SkipSA1Entry == 0 && IsPlayerInsideSphere(&racebutton, 5.0f))
			{
				SkipSA1Entry = 1;
				sub_715700(2);
			}
			//Door
			collist_000000E4[LengthOfArray(collist_000000E4) - 1].Model->pos[2] = OpenDoorThing;
			collist_000000E4[LengthOfArray(collist_000000E4) - 2].Model->pos[2] = -1 * OpenDoorThing;
			if (IsPlayerInsideSphere(&exitdoor, 30.0f))
			{
				if (bowchaoanim != 2 ) bowchaoanim = 1;
				if (OpenDoorThing < 25.0f) OpenDoorThing = OpenDoorThing + 0.8f;
				if (OpenDoorThing > 25.0f) OpenDoorThing = 25.0f;
			}
			else
			{
				if (bowchaoanim == 2) bowchaoanim = 0;
				if (OpenDoorThing > 0.0f) OpenDoorThing = OpenDoorThing - 0.8f;
				if (OpenDoorThing < 0) OpenDoorThing = 0;
			}
			//Chao bowing when player leaves the room
			if (bowchaoanim == 1)
			{
				bowchaoframe = bowchaoframe + (0.25f*FramerateSetting);
			}
			if (bowchaoframe >= 20)
			{
				bowchaoanim = 2;
				bowchaoframe = 0;
			}
			
		}
//Chao Race
		if (CurrentChaoStage == 1 && GameState != 16)
		{
			if (chaoracewater > 68) chaoracewater = 55;
			matlist_0002A548[0].attr_texId = chaoracewater;
			matlist_0003EFB0[0].attr_texId = chaoracewater;
			matlist_0003F2DC[0].attr_texId = chaoracewater;
			if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) chaoracewater++;
			for (int w = 0; w < LengthOfArray(uv_00045AF4); w++)
			{
				uv_00045AF4[w].v = uv_00045AF4[w].v - 6;
			}
			if (uv_00045AF4[0].v < -253)
			{
				for (int w2 = 0; w2 < LengthOfArray(uv_00045AF4); w2++)
				{
					uv_00045AF4[w2].v = uv_00045AF4R[w2].v;
				}
			}
			
		}
	}
}
