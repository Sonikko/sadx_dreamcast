#include "stdafx.h"
#include <SADXModLoader.h>
#include "ChaoObjects.h"
#include "ChaoRaceFunc.h"
#include "Elevator.h"
#include "SSGarden.h"
#include "MRGarden.h"
#include "ChaoRace.h"
#include "ChaoRaceEntry.h"
#include "ECGarden_DC.h"
#include "ECGarden_func.h"
#include "SSGarden_func.h"
#include "MRGarden_func.h"
#include <stdlib.h>  

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

FunctionPointer(void, SetChaoLandTableX, (LandTable *geo), 0x0043A4C0);
FunctionPointer(void, sub_715700, (int a1), 0x00715700);
FunctionPointer(void, sub_715730, (int a1, int a2), 0x00715730);
DataPointer(EntityData1*, Camera_Data1, 0x03B2CBB0);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataArray(NJS_VECTOR, Chao_SSChaoSpawnPoints, 0x033A0AF8, 16);
DataArray(NJS_VECTOR, Chao_ECChaoSpawnPoints, 0x033A0BB8, 16);
DataArray(NJS_VECTOR, Chao_MRChaoSpawnPoints, 0x033A0C78, 16);
DataArray(ChaoTreeSpawn, ChaoTreeSpawns, 0x033A0D78, 3);
static int chaoracewater = 55;
static int ssgardenwater = 0;
static int ecgardensand = 64;
static int ecgardenwater = 54;
static int mrgardenwater = 36;

void __cdecl sub_72A790()
{
	FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_daytime, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Daytime, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_DAYTIME");
	PrintDebug("ChaoStgGarden02MR_Daytime _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_daytime = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Daytime = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x80000420;
	collist_0000F778[1].Flags = 0x00000000;
	collist_0000F778[2].Flags = 0x00000000;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

void __cdecl sub_72A820()
{
	FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_EVENING");
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_evening, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Evening, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	PrintDebug("ChaoStgGarden02MR_Evening _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_evening = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Evening = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x00000000;
	collist_0000F778[1].Flags = 0x00000000;
	collist_0000F778[2].Flags = 0x80000420;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

void __cdecl sub_72A8B0()
{
	FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_NIGHT");
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_night, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Night, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	PrintDebug("ChaoStgGarden02MR_Night _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_night = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Night = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x00000000;
	collist_0000F778[1].Flags = 0x80000420;
	collist_0000F778[2].Flags = 0x00000000;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

PointerInfo pointers[] = {
	ptrdecl(0x719DC9, &landtable_00000E64), //MR Garden
	ptrdecl(0x719619, &landtable_00011DD4), //SS Garden
	ptrdecl(0x7191E9, &landtable_0000DF3C) //EC Garden
};

void __cdecl LoadChaoRaceX()
{
	PrintDebug("SANICChaoStgRace _prolog begin.\n");
	CurrentLevel = 42;
	LoadObject(LoadObj_Data1, 2, ChaoStgRace_Main);
	LoadObjects();
	SetChaoLandTableX(&landtable_00000E64);
	PrintDebug("ChaoStgRace _prolog end.\n");
}

void __cdecl LoadECGardenX()
{
	PrintDebug("ChaoStgGarden01EC Prolog begin\n");
	CurrentLevel = 40;
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden01EC_Load);
	LoadObjects_EC();
	SetChaoLandTable(&landtable_0000DF3C);
	PrintDebug("ChaoStgGarden01EC Prolog end\n");
}

void __cdecl LoadSSGardenX()
{
	PrintDebug("ChaoStgGarden00SS Prolog begin\n");
	CurrentLevel = 39;
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden00SS_Load);
	LoadObjects_SS();
	SetChaoLandTable(&landtable_00011DD4);
	PrintDebug("ChaoStgGarden00SS Prolog end\n");
}

void __cdecl LoadMRGardenX()
{
	DataPointer(LandTable*, LandTable_ChaoGardenMR, 0x03CA6E88);
	DataArray(void*, ModuleDestructors, 0x03CA6E70, 4);
	FunctionPointer(void, ChaoGardenMR_SetLandTable_Evening, (), 0x0072A820);
	FunctionPointer(void, ChaoGardenMR_SetLandTable_Night, (), 0x0072A8B0);
	FunctionPointer(void, ChaoGardenMR_SetLandTable_Day, (), 0x0072A790);
	int v0; // eax@1
	int v1; // eax@2
	PrintDebug("ChaoStgGarden02MR Prolog\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden02MR_Load);
	v0 = GetTimeOfDay();
	CurrentLevel = 41;
	if (v0)
	{
		v1 = v0 - 1;
		if (!v1)
		{
			LoadGameDLL("ChaoStgGarden02MR_Evening", 2);
			ChaoGardenMR_SetLandTable_Evening();
			ModuleDestructors[1] = Print_ChaoStgGarden02MR_Evening_epilog;
			SetChaoLandTable(LandTable_ChaoGardenMR);
			return;
		}
		if (v1 == 1)
		{
			LoadGameDLL("ChaoStgGarden02MR_Night", 2);
			ChaoGardenMR_SetLandTable_Night();
			ModuleDestructors[1] = Print_ChaoStgGarden02MR_Night_epilog;
			SetChaoLandTable(LandTable_ChaoGardenMR);
			return;
		}
	}
	LoadGameDLL("ChaoStgGarden02MR_Daytime", 2);
	ChaoGardenMR_SetLandTable_Day();
	ModuleDestructors[1] = Print_ChaoStgGarden02MR_Daytime_epilog;
	SetChaoLandTable(LandTable_ChaoGardenMR);
	LoadObjects_MR();
}

void __cdecl LoadChaoRaceDoor(ObjectMaster *a1)
{
	ObjectMaster *v1; // eax@1
	EntityData1 *v2; // ecx@2
	ObjectMaster *v1x; // eax@1
	EntityData1 *v2x; // ecx@2
	v1 = LoadChildObject(LoadObj_Data1, OF_SS11, a1);
	if (v1)
	{
		v2 = v1->Data1;
		v2->Position.x = 0;
		v2->Position.y = 0;
		v2->Position.z = -157;
	}
	v1x = LoadChildObject(LoadObj_Data1, OF_SS11, a1);
	if (v1x)
	{
		v2x = v1x->Data1;
		v2x->Position.x = 0;
		v2x->Position.y = 0;
		v2x->Position.z = -247;
	}
}

void __cdecl sub_4145D0(unsigned __int8 a1, unsigned __int8 a2)
{
	DataPointer(int, CutsceneMode, 0x03B22E1C);
	DataPointer(int, NextAct, 0x03B22E18);
	if (CurrentLevel !=39)
	{
	CutsceneMode = 3;
	NextLevel = a1;
	NextAct = a2;
	}
	else
	{
	SetLevelEntrance(4);
	sub_715730(26, 4);
	NextLevel = 26;
	NextAct = 4;
	CutsceneMode = 3;
	}
}

void cdecl SetElevatorTexlist()
{
	if (CurrentLevel == 39)
	{
		LoadPVM("OBJ_SS", (NJS_TEXLIST*)0x02AA4BF8);
		njSetTexture((NJS_TEXLIST*)0x02AA4BF8); //OBJ_SS
	}
		else SetTextureToLevelObj();
}

void cdecl NameMachineTexlist()
{
	LoadPVM("CHAO_OBJECT", (NJS_TEXLIST*)0x033A0788);
	njSetTexture((NJS_TEXLIST*)0x033A0788); //CHAO_TEXLIST
}

void __cdecl LoadChaoNameMachineX(NJS_VECTOR *position, int yrotation)
{
	EntityData1 *ent; // eax@1
	ObjectMaster *obj;
	EntityData1 *ent2; // eax@1
	ent = LoadObject(LoadObj_Data1, 2, Chao_Name_Machine_Load)->Data1;
	if (CurrentLevel == 39)
	{
	ent->Position.x = 178.03f;
	ent->Position.y = 8.56f;
	ent->Position.z = -128.44f;
	ent->Rotation.y = 0xD7B8;
	}
	if (CurrentLevel == 40)
	{
	ent->Position.x = 131.67f;
	ent->Position.y = 2.6f;
	ent->Position.z = -204.28f;
	ent->Rotation.x = 0xFFB0;
	ent->Rotation.y = 0xAFD6;
	ent->Rotation.z = 0xFFDE;
	}
	if (CurrentLevel == 41)
	{
	ent->Position.x = 239.4137f;
	ent->Position.y = 15.10273f;
	ent->Position.z = -45.98477f;
	ent->Rotation.x = 0xFFDC;
	ent->Rotation.y = 0xC1A8;
	ent->Rotation.z = 0xFFF2;
	}
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
//General
		ResizeTextureList((NJS_TEXLIST*)0x033A1338, 31); //AL_DX_OBJ_CMN
		*(NJS_OBJECT*)0x036065B4 = object_00180454_EC; //EC garden to EC transporter
		((NJS_OBJECT*)0x036065B4)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_USE_ENV;
		((NJS_OBJECT*)0x036065B4)->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x036065B4)->basicdxmodel->mats[3].attr_texId = 23;
		((NJS_OBJECT*)0x036065B4)->basicdxmodel->mats[4].attr_texId = 24;
		*(NJS_OBJECT*)0x03604540 = object_00180454; //All other transporters
		*(NJS_MODEL_SADX*)0x036087C0 = attach_0017BAF8; //Tree trunk
		*(NJS_MODEL_SADX*)0x03608064 = attach_0017B768; //Tree leaves 1
		*(NJS_MODEL_SADX*)0x036076E4 = attach_0017B034; //Tree leaves 2
//Name Machine stuff
		*(NJS_OBJECT*)0x33CFC70 = object_001834CC; //Name Machine
		WriteCall((void*)0x00729DE9, NameMachineTexlist);
		WriteData((void*)0x00729EBB, 0x90, 5);
		WriteData((void*)0x00729E57, 0x90, 5);
		WriteJump((void*)0x00729F40, LoadChaoNameMachineX);
		DataArray(CollisionData, stru_33D0B50, 0x033D0B50, 9);
		stru_33D0B50[0].v.z = 5;
		for (int i = 1; i < 9; i++)
		{
			stru_33D0B50[i].anonymous_1 = 0;
			stru_33D0B50[i].anonymous_2 = 0;
			stru_33D0B50[i].anonymous_3 = 0;
		}
//Chao Race stuff
		WriteJump((void*)0x00719DB0, LoadChaoRaceX);
		ResizeTextureList((NJS_TEXLIST *)0x3425018, 109);
		WriteData((void*)0x0071C293, 0x90, 5); //Prevent the Cheering Omochaos from disappearing
//Chao Race entry stuff
		//WriteData((void*)0x007197E0, 0xC3u, sizeof(char));
		/*WriteData((void*)0x007198B2, 0x90, 5);
		WriteData((void*)0x00719969, 0x90, 5);
		WriteData((void*)0x0071996E, 0x90, 5);
		WriteData((void*)0x00719973, 0x90, 5);
		WriteData((void*)0x00719978, 0x90, 5);
		WriteData((void*)0x007199A0, 0x90, 5);*/
//Station Square garden stuff
		WriteJump((void*)0x4145D0, sub_4145D0); //Elevator function
		WriteJump((void*)0x0072AB80, LoadChaoRaceDoor);
		WriteCall((void*)0x00638DD7, SetElevatorTexlist);
		WriteData((void*)0x007195A3, 0x90, 5);
		ResizeTextureList((NJS_TEXLIST*)0x03406088, 32); //GARDEN00SSOBJ
		*(NJS_MODEL_SADX*)0x0340C578 = attach_00012A04; //race door wall part
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
		Chao_SSChaoSpawnPoints[12].x = -100.0f;
		Chao_SSChaoSpawnPoints[14].x = -100.0f;
		ChaoTreeSpawns[0].a.x = 129.32f; //Palm tree 1
		ChaoTreeSpawns[0].a.y = 0.56f;  //Palm tree 1
		ChaoTreeSpawns[0].a.z = 124.78f;  //Palm tree 1
		ChaoTreeSpawns[0].b.x = 177.62f; //Palm tree 1
		ChaoTreeSpawns[0].b.y = 0.56f; //Palm tree 1
		ChaoTreeSpawns[0].b.z = 62.64f;  //Palm tree 1
		ChaoTreeSpawns[0].c.x = 109.29f; //Palm tree 1
		ChaoTreeSpawns[0].c.y = 2.86f;  //Palm tree 1
		ChaoTreeSpawns[0].c.z = 2.2f;  //Palm tree 1
		ChaoTreeSpawns[0].d.x = 80.24f; //Palm tree 1
		ChaoTreeSpawns[0].d.y = 1.86f;  //Palm tree 1
		ChaoTreeSpawns[0].d.z = 52.08f;  //Palm tree 1
		ChaoTreeSpawns[0].e.x = 107.19f; //Palm tree 1
		ChaoTreeSpawns[0].e.y = 2.86f;  //Palm tree 1
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
		Chao_MRChaoSpawnPoints[0].x = 151;
		Chao_MRChaoSpawnPoints[1].x = 164;
		Chao_MRChaoSpawnPoints[2].x = 177;
		Chao_MRChaoSpawnPoints[3].z = 123.75f;
		Chao_MRChaoSpawnPoints[7].x = -58.25f;
		Chao_MRChaoSpawnPoints[7].y = 48.5f;
		Chao_MRChaoSpawnPoints[7].z = -74;
		Chao_MRChaoSpawnPoints[8].x = -209.75f;
		Chao_MRChaoSpawnPoints[8].y = 10.5f;
		Chao_MRChaoSpawnPoints[8].z = 14;
		Chao_MRChaoSpawnPoints[9].y = 3;
		Chao_MRChaoSpawnPoints[9].z = 88.85f;
		Chao_MRChaoSpawnPoints[10].x = -190.25f;
		Chao_MRChaoSpawnPoints[10].y = 2;
		Chao_MRChaoSpawnPoints[10].z = 131.85f;
		Chao_MRChaoSpawnPoints[11].x = -162;
		Chao_MRChaoSpawnPoints[11].z = 88;
		Chao_MRChaoSpawnPoints[12].y = 2;
		Chao_MRChaoSpawnPoints[12].z = 101.85f;
		Chao_MRChaoSpawnPoints[13].x = -100.25f;
		Chao_MRChaoSpawnPoints[13].y = 2;
		Chao_MRChaoSpawnPoints[13].z = 152.85f;
		Chao_MRChaoSpawnPoints[14].z = 155.85f;
		Chao_MRChaoSpawnPoints[15].y = 2;
		Chao_MRChaoSpawnPoints[15].z = 66.25f;
		ChaoTreeSpawns[2].a.x = 126.8847f; //Palm tree 1
		ChaoTreeSpawns[2].a.y = 0.2116146f;  //Palm tree 1
		ChaoTreeSpawns[2].a.z = 129.4048f;  //Palm tree 1
		ChaoTreeSpawns[2].b.x = -45.25877f; //Palm tree 2
		ChaoTreeSpawns[2].b.y = -0.7883873f;  //Palm tree 2
		ChaoTreeSpawns[2].b.z = 108.8823f;  //Palm tree 2
		ChaoTreeSpawns[2].c.x = -157.6473f; //Palm tree 3
		ChaoTreeSpawns[2].c.y = 0.2116146f;  //Palm tree 3
		ChaoTreeSpawns[2].c.z = 122.3606f;  //Palm tree 3
		ChaoTreeSpawns[2].d.x = -55.71612f; //Palm tree 4
		ChaoTreeSpawns[2].d.y = 44.21161f;  //Palm tree 4
		ChaoTreeSpawns[2].d.z = 20.53316f;  //Palm tree 4
		ChaoTreeSpawns[2].e.x = 83.6948f; //Palm tree 5
		ChaoTreeSpawns[2].e.y = 5.211613f;  //Palm tree 5
		ChaoTreeSpawns[2].e.z = -47.53315f;  //Palm tree 5
//Egg Carrier garden stuff
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
		Chao_ECChaoSpawnPoints[0].y = 73.8f;
		Chao_ECChaoSpawnPoints[1].z = -83.5f;
		Chao_ECChaoSpawnPoints[2].x = 157.5f;
		Chao_ECChaoSpawnPoints[2].y	 = 37.5f;
		Chao_ECChaoSpawnPoints[2].z = -75.5f;
		Chao_ECChaoSpawnPoints[3].z = 96.0f;
		Chao_ECChaoSpawnPoints[4].y = 32.8f;
		Chao_ECChaoSpawnPoints[7].y = 66.0f;
		Chao_ECChaoSpawnPoints[10].y = 35.5f;
		Chao_ECChaoSpawnPoints[11].y = 37.5f;
		Chao_ECChaoSpawnPoints[12].x = 198.5f;
		Chao_ECChaoSpawnPoints[12].y = 7.8f;
		Chao_ECChaoSpawnPoints[12].z = -76.0f;
		Chao_ECChaoSpawnPoints[13].z = 155.0f;
		ChaoTreeSpawns[1].a.x = -181; //Palm tree 1
		ChaoTreeSpawns[1].a.y = 1.99f;  //Palm tree 1
		ChaoTreeSpawns[1].a.z = -151.19f;  //Palm tree 1
		ChaoTreeSpawns[1].b.x = -102.76f; //Palm tree 2
		ChaoTreeSpawns[1].b.y = 1.99f;  //Palm tree 2
		ChaoTreeSpawns[1].b.z = -193.18f;  //Palm tree 2
		ChaoTreeSpawns[1].c.x = -8.89f; //Palm tree 3
		ChaoTreeSpawns[1].c.y = 1.99f;  //Palm tree 3
		ChaoTreeSpawns[1].c.z = -219.26f;  //Palm tree 3
		ChaoTreeSpawns[1].d.x = 46.81f; //Palm tree 4
		ChaoTreeSpawns[1].d.y = 1.99f;  //Palm tree 4
		ChaoTreeSpawns[1].d.z = -220.62f;  //Palm tree 4
		ChaoTreeSpawns[1].e.x = 100.89f; //Palm tree 5
		ChaoTreeSpawns[1].e.y = 67.99f;  //Palm tree 5
		ChaoTreeSpawns[1].e.z = -65.27f;  //Palm tree 5
	}
__declspec(dllexport) void __cdecl OnFrame()
	{
//Station Square garden
		if (CurrentLevel == 39 && GameState != 16)
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
		}
//Egg Carrier garden
		if (CurrentLevel == 40 && GameState != 16)
		{
			auto entity = CharObj1Ptrs[0];
			if (entity != nullptr)
			{
				if (entity->Position.y < 69 && entity->Position.x > 90 && entity->Position.x < 110 && entity->Position.z < 24 && entity->Position.z >-44)
				{
					entity->Position.y = 118;
					if (Camera_Data1 != nullptr)
					{
						Camera_Data1->Position.x = 0;
						Camera_Data1->Position.y = 0;
						Camera_Data1->Position.z = 0;
						Camera_Data1->Rotation.x = 0;
						Camera_Data1->Rotation.y = 0;
						Camera_Data1->Rotation.z = 0;
					}
				}
			}
			if (ecgardenwater > 63) ecgardenwater = 54;
			if (ecgardensand > 78) ecgardensand = 64;
			matlist_00006510[0].attr_texId = ecgardensand;
			matlist_0000C748[0].attr_texId = ecgardenwater;
			matlist_0000EF4C[0].attr_texId = ecgardenwater;
			matlist_00001D00[0].attr_texId = ecgardenwater;
			if (FramerateSetting < 2 && FrameCounter % 5 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				ecgardenwater++;
				ecgardensand++;
			}
		}
//Mystic Ruins garden
		if (CurrentLevel == 41 && GameState != 16)
		{
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
//Chao Race
		if (CurrentLevel == 42 && GameState != 16)
		{
			if (chaoracewater > 68) chaoracewater = 55;
			matlist_0002A548[0].attr_texId = chaoracewater;
			matlist_0003EFB0[0].attr_texId = chaoracewater;
			matlist_0003F2DC[0].attr_texId = chaoracewater;
			if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) chaoracewater++;
		}
	}
}
