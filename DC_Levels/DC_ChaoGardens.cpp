#include "stdafx.h"
#include <SADXModLoader.h>
#include <IniFile.hpp>
#include <lanternapi.h>
#include "ChaoObjects.h"
#include "Fountain.h"
#include "SSGarden.h"
#include "MRGarden.h"
#include "ChaoRace.h"
#include "ChaoRaceEntry.h"
#include "ECGarden_DC.h"
#include "HintMessages.h"
#include <stdlib.h>  

static bool EnableSSGarden = true;
static bool EnableMRGarden = true;
static bool EnableECGarden = true;
static bool EnableLobby = true;
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
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(SecondaryEntrance, ECGardenStartPoint, 0x0339F8E8);
DataPointer(SecondaryEntrance, MRGardenReturnPoint, 0x0339F928);
DataPointer(SecondaryEntrance, SSGardenStartPoint, 0x0339F888);
DataPointer(int, dword_3CDC6B4, 0x3CDC6B4);
DataPointer(NJS_OBJECT, stru_366C124, 0x366C124);
DataPointer(CollisionData, stru_33D0B50, 0x33D0B50);

//SS garden
ObjectFunc(OF_SS0, 0x00450370); // RING   
ObjectFunc(OF_SS1, 0x007212A0); // TREE   
ObjectFunc(OF_SS2, 0xC918E36); // FLOWER 
ObjectFunc(OF_SS3, 0xC919760); // VMS 
ObjectFunc(OF_SS4, 0x004D4770); // CYLINDER
ObjectFunc(OF_SS5, 0x004D47E0); // CUBE    
ObjectFunc(OF_SS6, 0x004D4700); // SPHERE 
ObjectFunc(OF_SS7, 0xC918FC8); // WARP EC
ObjectFunc(OF_SS8, 0xC919090); // WARP MR
ObjectFunc(OF_SS9, 0x00639380); //  O AR_ELE
ObjectFunc(OF_SS10, 0xCB80760); //  O AR_FUN
ObjectFunc(OF_SS11, 0x0072AB50); //  O AR_DOOR
ObjectFunc(OF_SS12, 0x007A1AA0); // O TIKAL
ObjectFunc(OF_SS13, 0xC9089B0); // GD GRDUND
ObjectFunc(OF_SS14, 0xC9089E2); // GD_WATER
ObjectFunc(OF_SS15, 0xC908A14); // GD ROAD
ObjectFunc(OF_SS16, 0xC908A46); // GD FLY
ObjectFunc(OF_SS17, 0xC908A78); // GD CLIFF
ObjectFunc(OF_SS18, 0x007A1AA0); // O TIKAL
ObjectFunc(OF_SS19, 0xC902DD2); // CAM COLLI
ObjectFunc(OF_SS20, 0x004D4850); // WALL  
ObjectFunc(OF_SS21, 0x007A9C60); // HINT BOX

//MR
ObjectFunc(OF_MR0, 0x00450370); // RING   
ObjectFunc(OF_MR4, 0x004D4770); // CYLINDER
ObjectFunc(OF_MR5, 0x004D47E0); // CUBE    
ObjectFunc(OF_MR6, 0x004D47E0); // CUBE    
ObjectFunc(OF_MR18, 0x004D4850); // WALL  

//EC
ObjectFunc(EC_OF0, 0x00450370); // RING   
ObjectFunc(EC_OF4, 0x004D4770); // CYLINDER
ObjectFunc(EC_OF5, 0x004D47E0); // CUBE    
ObjectFunc(EC_OF6, 0x004D4700); // SPHERE  
ObjectFunc(EC_OF17, 0x004D4850); // WALL  

//Entry
ObjectFunc(OF_E0, 0x450370); // RING   
ObjectFunc(OF_E1, 0x71D230); // ENTRY BUTTON
ObjectFunc(OF_E2, 0x71CE60); // ZONE
ObjectFunc(OF_E3, 0x71CD50); // PALM
ObjectFunc(OF_E4, 0x71CBC0); // COCONUT
ObjectFunc(OF_E5, 0x71CA70); // FLAG
ObjectFunc(OF_E6, 0x71C9D0); // WHITE FLOWER
ObjectFunc(OF_E7, 0x71C9F0); // PURPLE FLOWER
ObjectFunc(OF_E8, 0x71C2E0); // START MARK
ObjectFunc(OF_E9, 0x71C7D0); // WATERING CAN
ObjectFunc(OF_E10, 0x71C5F0); // BUGLE
ObjectFunc(OF_E11, 0x71C3D0); // SCOOP
ObjectFunc(OF_E12, 0x71C300); // SMALL SCREEN
ObjectFunc(OF_E13, 0x71C320); // ISLET
ObjectFunc(OF_E14, 0x7A9C60); // HINT BOX
ObjectFunc(OF_E15, 0x71C180); // CHEER CHAO
ObjectFunc(OF_E16, 0x71BFF0); // BOW CHAO
ObjectFunc(OF_E17, 0x71BEA0); // CRACKER
ObjectFunc(OF_E18, 0x71BBB0); // BUTTERFLY

//Race
ObjectFunc(OF0, 0x450370); // RING   
ObjectFunc(OF1, 0x71D230); // ENTRY BUTTON
ObjectFunc(OF2, 0x71CE60); // ZONE
ObjectFunc(OF3, 0x71CD50); // PALM
ObjectFunc(OF4, 0x71CBC0); // COCONUT
ObjectFunc(OF5, 0x71CA70); // FLAG
ObjectFunc(OF6, 0x71C9D0); // WHITE FLOWER
ObjectFunc(OF7, 0x71C9F0); // PURPLE FLOWER
ObjectFunc(OF8, 0x71C2E0); // START MARK
ObjectFunc(OF9, 0x71C7D0); // WATERING CAN
ObjectFunc(OF10, 0x71C5F0); // BUGLE
ObjectFunc(OF11, 0x71C3D0); // SCOOP
ObjectFunc(OF12, 0x71C300); // SMALL SCREEN
ObjectFunc(OF13, 0x71C320); // ISLET
ObjectFunc(OF14, 0x7A9C60); // HINT BOX
ObjectFunc(OF15, 0x71C180); // CHEER CHAO
ObjectFunc(OF16, 0x71BFF0); // BOW CHAO
ObjectFunc(OF17, 0x71BEA0); // CRACKER
ObjectFunc(OF18, 0x71BBB0); // BUTTERFLY

SETObjData setdata_ssg = {}; //SS
SETObjData setdata = {}; //MR
SETObjData setdata_ec = {}; //EC
SETObjData setdata_e = {}; //Entry
SETObjData setdata_race = {}; //Race

void LoadObjects_SS()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	obj = LoadObject((LoadObj)6, 3, OF_SS9); //  O AR_ELE
	obj->SETData.SETData = &setdata_ssg;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -0.03f;
		ent->Position.y = 0;
		ent->Position.z = 240.02f;
		ent->Rotation.y = 0x8000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -198.53f;
		ent->Position.y = 28.2f;
		ent->Position.z = 143.8f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -0.1f;
		ent->Scale.y = 41.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -200;
		ent->Position.y = 22.4f;
		ent->Position.z = -154.68f;
		ent->Rotation.y = 0xA79D;
		ent->Scale.y = 63;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 140.1f;
		ent->Position.y = 27.57f;
		ent->Position.z = -115.15f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 9;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 159.97f;
		ent->Position.y = 25.57f;
		ent->Position.z = -94.95f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 190.26f;
		ent->Position.y = 25.57f;
		ent->Position.z = -82.9f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 127.7f;
		ent->Position.y = 28;
		ent->Position.z = -143.78f;
		ent->Rotation.y = 0xFC9F;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -149.99f;
		ent->Position.y = 19.57f;
		ent->Position.z = -68;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -150.14f;
		ent->Position.y = 24;
		ent->Position.z = -141.14f;
		ent->Rotation.y = 0xD129;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -188.91f;
		ent->Position.y = 19.1f;
		ent->Position.z = 92.19f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -161.85f;
		ent->Position.y = 19.1f;
		ent->Position.z = 107.06f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -146.93f;
		ent->Position.y = 19.1f;
		ent->Position.z = 134.07f;
		ent->Rotation.y = 0xC378;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -30.02f;
		ent->Position.y = 13.89f;
		ent->Position.z = 144.73f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 16.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -149.4f;
		ent->Position.y = 1.4f;
		ent->Position.z = -104.45f;
		ent->Rotation.y = 0x4D39;
		ent->Scale.x = -6.6f;
		ent->Scale.y = -2.8f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -113.24f;
		ent->Position.y = 19.57f;
		ent->Position.z = -104.18f;
		ent->Rotation.x = 0x210;
		ent->Rotation.y = 0x3DB0;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -187.18f;
		ent->Position.y = 20;
		ent->Position.z = -103.74f;
		ent->Rotation.y = 0xFC9F;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -30;
		ent->Position.y = 17.89f;
		ent->Position.z = -155.12f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 199.05f;
		ent->Position.y = 37.55f;
		ent->Position.z = -154.36f;
		ent->Rotation.y = 0x1F94;
		ent->Scale.x = -0.1f;
		ent->Scale.y = 30.4f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS21); // HINT BOX
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -82.32f;
		ent->Position.y = 20;
		ent->Position.z = -46.21f;
		ent->Rotation.y = 0x63ED;
		ent->Scale.x = 40;
		ent->Scale.y = 10;
		ent->Scale.z = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 197.89f;
		ent->Position.y = 32.56f;
		ent->Position.z = 141.83f;
		ent->Rotation.y = 0xD9A;
		ent->Scale.x = -0.1f;
		ent->Scale.y = 40.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -150.39f;
		ent->Position.y = -1.6f;
		ent->Position.z = -104.29f;
		ent->Rotation.y = 0x4D39;
		ent->Scale.x = -2.6f;
		ent->Scale.y = -2.8f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 29.32f;
		ent->Position.y = 17.89f;
		ent->Position.z = -154.32f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -5.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 25.32f;
		ent->Position.y = 17.89f;
		ent->Position.z = -154.32f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -5.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -27.68f;
		ent->Position.y = 17.89f;
		ent->Position.z = -156.32f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -5.4f;
		ent->Scale.y = 13.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS12); // O TIKAL
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 3.33f;
		ent->Position.y = -11;
		ent->Position.z = 94.38f;
		ent->Rotation.y = 0xC3ED;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS12); // O TIKAL
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -174.97f;
		ent->Position.y = -6;
		ent->Position.z = 126.1f;
		ent->Rotation.y = 0xC3ED;
		ent->Scale.z = 1;
	}
	obj = LoadObject((LoadObj)2, 2, OF_SS12); // O TIKAL
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 105.04f;
		ent->Position.y = -6;
		ent->Position.z = 48.67f;
		ent->Rotation.y = 0xC3ED;
		ent->Scale.z = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 30.04f;
		ent->Position.y = 13.89f;
		ent->Position.z = 144.99f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 16.2f;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 10.14f;
		ent->Position.y = 12.89f;
		ent->Position.z = 260.46f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 2;
		ent->Scale.z = -2;
	}
	obj = LoadObject((LoadObj)2, 3, OF_SS4); // CYLINDER
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -9.86f;
		ent->Position.y = 12.89f;
		ent->Position.z = 260.46f;
		ent->Rotation.y = 0xD597;
		ent->Scale.x = -6.4f;
		ent->Scale.y = 2;
		ent->Scale.z = -2;
	}
}
void LoadObjects_MR()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	setdata.Distance = 900000.0f;
	obj = LoadObject((LoadObj)2, 3, OF_MR0); // RING   
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -166.84f;
		ent->Position.y = -102.76f;
		ent->Position.z = -727.39f;
		ent->Rotation.y = 0xDFE5;
		ent->Rotation.z = 0x14FD;
	}
	obj = LoadObject((LoadObj)2, 3, OF_MR4); // CYLINDER
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -59.70407f;
		ent->Position.y = 18.73046f;
		ent->Position.z = 27.76984f;
		ent->Rotation.y = 0x7B9B;
		ent->Scale.x = 12;
		ent->Scale.y = 10;
	}
	obj = LoadObject((LoadObj)2, 3, OF_MR5); // CUBE    
	obj->SETData.SETData = &setdata;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -42.037f;
		ent->Position.y = 31.1112f;
		ent->Position.z = -123.4606f;
		ent->Rotation.x = 0xFFEE;
		ent->Rotation.y = 0xC24E;
		ent->Rotation.z = 0xFFF1;
		ent->Scale.x = 8;
		ent->Scale.y = 3;
		ent->Scale.z = 16;
	}
}
void LoadObjects_EC()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	setdata_ec.Distance = 900000.0f;
	/*
	obj = LoadObject((LoadObj)2, 5, EC_OF0); // RING
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
	ent = obj->Data1;
	ent->Position.x = -166.84f;
	ent->Position.y = -102.76f;
	ent->Position.z = -727.39f;
	ent->Rotation.y = 0xDFE5;
	ent->Rotation.z = 0x14FD;
	}
	*/
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -345.67f;
		ent->Position.y = 127.82f;
		ent->Position.z = -71.72f;
		ent->Rotation.x = 0xFFB1;
		ent->Rotation.y = 0x4000;
		ent->Rotation.z = 0xFFF9;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 390.2f;
		ent->Position.y = 127.82f;
		ent->Position.z = -7.15f;
		ent->Rotation.x = 0xFFB1;
		ent->Rotation.y = 0xC000;
		ent->Rotation.z = 0xFFF9;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -37.11f;
		ent->Position.y = 127.82f;
		ent->Position.z = 317.58f;
		ent->Rotation.x = 0xFFB1;
		ent->Rotation.y = 0x8000;
		ent->Rotation.z = 0xFFF9;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -95.87f;
		ent->Position.y = 131.76f;
		ent->Position.z = -412.96f;
		ent->Rotation.x = 0xF998;
		ent->Rotation.z = 0x39;
		ent->Scale.x = 700;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 346.28f;
		ent->Position.y = 143.29f;
		ent->Position.z = -368.84f;
		ent->Rotation.x = 0xEFE2;
		ent->Rotation.y = 0xE000;
		ent->Rotation.z = 0xF645;
		ent->Scale.x = 100;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -739.39f;
		ent->Position.y = 173.29f;
		ent->Position.z = 582.25f;
		ent->Rotation.x = 0xEFE2;
		ent->Rotation.y = 0xE000;
		ent->Rotation.z = 0xF645;
		ent->Scale.x = 100;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -310.78f;
		ent->Position.y = 123.49f;
		ent->Position.z = 307.03f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x6000;
		ent->Rotation.z = 0xD;
		ent->Scale.x = 100;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 2, EC_OF17); // WALL  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 282.64f;
		ent->Position.y = 125.94f;
		ent->Position.z = 195.99f;
		ent->Rotation.x = 3;
		ent->Rotation.y = 0xA000;
		ent->Rotation.z = 0xFFFB;
		ent->Scale.x = 200;
		ent->Scale.y = 400;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF5); // CUBE    
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 7.41f;
		ent->Position.y = 37.28f;
		ent->Position.z = -95.28f;
		ent->Rotation.x = 0xFDB2;
		ent->Rotation.y = 0xC84B;
		ent->Rotation.z = 0xF2A3;
		ent->Scale.x = 0.2f;
		ent->Scale.y = 11;
		ent->Scale.z = 16;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4.5f;
		ent->Position.y = -17.51f;
		ent->Position.z = 291.97f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 6.21f;
		ent->Position.y = -2.51f;
		ent->Position.z = 271.61f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 28;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 12.55f;
		ent->Position.y = -17.51f;
		ent->Position.z = 254.17f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 24.08f;
		ent->Position.y = -17.51f;
		ent->Position.z = 263.49f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 25.72f;
		ent->Position.y = -17.51f;
		ent->Position.z = 282.83f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -11.31f;
		ent->Position.y = -14.51f;
		ent->Position.z = 277.56f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -26.82f;
		ent->Position.y = -34.51f;
		ent->Position.z = 264.2f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -16;
		ent->Position.y = -45.51f;
		ent->Position.z = 284.2f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 0.48f;
		ent->Position.y = -45.51f;
		ent->Position.z = 303.39f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 28.48f;
		ent->Position.y = -45.51f;
		ent->Position.z = 301.81f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 41.81f;
		ent->Position.y = -45.51f;
		ent->Position.z = 287.06f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 24.55f;
		ent->Position.y = -45.51f;
		ent->Position.z = 257.45f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x692A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 20;
		ent->Scale.y = 12;
		ent->Scale.z = 24;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -27.11f;
		ent->Position.y = -10.44f;
		ent->Position.z = 246.73f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -2.56f;
		ent->Position.y = 15.56f;
		ent->Position.z = 252.81f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -5.66f;
		ent->Position.y = 1.56f;
		ent->Position.z = 244.57f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -11.54f;
		ent->Position.y = -18.44f;
		ent->Position.z = 237.08f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -1.48f;
		ent->Position.y = -39.44f;
		ent->Position.z = 236.55f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF6); // SPHERE  
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -23.27f;
		ent->Position.y = -39.44f;
		ent->Position.z = 242.14f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 10;
		ent->Scale.y = 9;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF5); // CUBE    
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -11.23f;
		ent->Position.y = 5.56f;
		ent->Position.z = 270.19f;
		ent->Rotation.x = 0x2F;
		ent->Rotation.y = 0x310A;
		ent->Rotation.z = 0xC;
		ent->Scale.x = 4;
		ent->Scale.y = 20;
		ent->Scale.z = 25;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -61.47f;
		ent->Position.y = 68.49f;
		ent->Position.z = 7.38f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x292A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 35;
		ent->Scale.y = 30;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -329.24f;
		ent->Position.y = -10.51f;
		ent->Position.z = 291.29f;
		ent->Rotation.x = 0x41;
		ent->Rotation.y = 0x292A;
		ent->Rotation.z = 0x32;
		ent->Scale.x = 70;
		ent->Scale.y = 53;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 233.22f;
		ent->Position.y = -25.39f;
		ent->Position.z = -188.52f;
		ent->Rotation.x = 0xFB2F;
		ent->Rotation.y = 0x3D61;
		ent->Rotation.z = 0xFDEC;
		ent->Scale.x = 55;
		ent->Scale.y = 30;
	}
	obj = LoadObject((LoadObj)2, 3, EC_OF4); // CYLINDER
	obj->SETData.SETData = &setdata_ec;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 288.51f;
		ent->Position.y = -4.39f;
		ent->Position.z = -211.6f;
		ent->Rotation.x = 0xFB2F;
		ent->Rotation.y = 0x3D61;
		ent->Rotation.z = 0xFDEC;
		ent->Scale.x = 45;
		ent->Scale.y = 53;
	}
}
void LoadObjects_RaceEntry()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2089.57f;
		ent->Position.y = -0.01f;
		ent->Position.z = 24.55f;
		ent->Rotation.y = 0xA000;
	}
	obj = LoadObject((LoadObj)6, 3, OF_E1); // ENTRY BUTTON
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2020.59f;
		ent->Position.z = -0.68f;
		ent->Rotation.y = 0x4000;
	}

	obj = LoadObject((LoadObj)2, 3, OF_E0); // RING   
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -166.84f;
		ent->Position.y = -102.76f;
		ent->Position.z = -727.39f;
		ent->Rotation.y = 0xDFE5;
		ent->Rotation.z = 0x14FD;
	}

	obj = LoadObject((LoadObj)2, 3, OF_E14); // HINT BOX
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2030.57f;
		ent->Position.y = 21;
		ent->Position.z = -49.3f;
		ent->Rotation.y = 0x5F46;
		ent->Scale.x = 25;//25
		ent->Scale.y = 10;//10
		ent->Scale.z = 7;//8
	}

	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2089.36f;
		ent->Position.y = -0.01f;
		ent->Position.z = -24.22f;
		ent->Rotation.y = 0xD000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2124.17f;
		ent->Position.y = -0.01f;
		ent->Position.z = -16.59f;
		ent->Rotation.y = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2123.7f;
		ent->Position.y = -0.01f;
		ent->Position.z = 15.79f;
		ent->Rotation.y = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2058.16f;
		ent->Position.y = -0.01f;
		ent->Position.z = 50.15f;
		ent->Rotation.y = 0x8FAD;
	}
	obj = LoadObject((LoadObj)2, 3, OF_E16); // BOW CHAO
	obj->SETData.SETData = &setdata_e;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2060.85f;
		ent->Position.y = -0.01f;
		ent->Position.z = -49.82f;
		ent->Rotation.y = 0xEFAD;
	}
}
void LoadObjects_Race()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	setdata_race.Distance = 612800.0f;
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -560.62f;
		ent->Position.y = 60.06f;
		ent->Position.z = 96.41f;
		ent->Rotation.y = 0x1F1E;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -553.07f;
		ent->Position.y = 62.06f;
		ent->Position.z = 88.41f;
		ent->Rotation.y = 0x4F1E;
		ent->Rotation.z = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -563.8f;
		ent->Position.y = 61.68f;
		ent->Position.z = 117.21f;
		ent->Rotation.x = 0x4000;
		ent->Rotation.y = 0x600B;
	}
	obj = LoadObject((LoadObj)2, 3, OF10); // BUGLE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -571.19f;
		ent->Position.y = 62.06f;
		ent->Position.z = 99.27f;
		ent->Rotation.x = 0x4000;
		ent->Rotation.y = 0x900B;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 357.1f;
		ent->Position.y = 84.24f;
		ent->Position.z = 313.43f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 3;
		ent->Scale.y = 1;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 359.58f;
		ent->Position.y = 84.24f;
		ent->Position.z = 310.29f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -575.26f;
		ent->Position.y = 64.24f;
		ent->Position.z = 131.18f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 2;
		ent->Scale.y = 1;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 145.95f;
		ent->Position.y = 74.52f;
		ent->Position.z = 16.97f;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 270.15f;
		ent->Position.y = 16.09f;
		ent->Position.z = 192.81f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 272.95f;
		ent->Position.y = 12.09f;
		ent->Position.z = 198.11f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 292.24f;
		ent->Position.y = 16.09f;
		ent->Position.z = 258.31f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 303.46f;
		ent->Position.y = 16.09f;
		ent->Position.z = 268.26f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -333.44f;
		ent->Position.y = 87.09f;
		ent->Position.z = 120.53f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -334.02f;
		ent->Position.y = 87.09f;
		ent->Position.z = 159.52f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -339.12f;
		ent->Position.y = 87.09f;
		ent->Position.z = 161.11f;
		ent->Rotation.y = 0x7F77;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 119.18f;
		ent->Position.y = 74.06f;
		ent->Position.z = 13.68f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 120.53f;
		ent->Position.y = 74.06f;
		ent->Position.z = -85.6f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 134.33f;
		ent->Position.y = 69.06f;
		ent->Position.z = -86.54f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 134.33f;
		ent->Position.y = 74.06f;
		ent->Position.z = -86.54f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 150.22f;
		ent->Position.y = 69.06f;
		ent->Position.z = 8.92f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 153.12f;
		ent->Position.y = 72.06f;
		ent->Position.z = 9.68f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -426.22f;
		ent->Position.y = 66.06f;
		ent->Position.z = -0.59f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -438.55f;
		ent->Position.y = 66.06f;
		ent->Position.z = -27.28f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -443.88f;
		ent->Position.y = 66.06f;
		ent->Position.z = 5.3f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -505.1f;
		ent->Position.y = 64.06f;
		ent->Position.z = 96.66f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -564.52f;
		ent->Position.y = 66.06f;
		ent->Position.z = 78.22f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -567.8f;
		ent->Position.y = 66.06f;
		ent->Position.z = 82;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -577.52f;
		ent->Position.y = 70.06f;
		ent->Position.z = 145.06f;
		ent->Rotation.y = 0x8BA1;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 169.84f;
		ent->Position.y = 72.34f;
		ent->Position.z = -82.51f;
		ent->Rotation.y = 0xE66C;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 137.06f;
		ent->Position.y = 91.32f;
		ent->Position.z = 2.56f;
		ent->Rotation.y = 0xF066;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 166.62f;
		ent->Position.y = 81.32f;
		ent->Position.z = 12.07f;
		ent->Rotation.y = 0xF066;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 327;
		ent->Position.y = 93.32f;
		ent->Position.z = 279.54f;
		ent->Rotation.y = 0xF066;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 110.78f;
		ent->Position.y = 73.24f;
		ent->Position.z = 4.63f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 133.01f;
		ent->Position.y = 81.24f;
		ent->Position.z = -86.08f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 334.55f;
		ent->Position.y = 85.24f;
		ent->Position.z = 266.41f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 335.19f;
		ent->Position.y = 85.24f;
		ent->Position.z = 273.38f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 350.48f;
		ent->Position.y = 84.24f;
		ent->Position.z = 324.19f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -447.05f;
		ent->Position.y = 67.24f;
		ent->Position.z = 4.23f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -476.47f;
		ent->Position.y = 63.24f;
		ent->Position.z = -17.07f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 2;
		ent->Scale.y = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -512.26f;
		ent->Position.y = 67.24f;
		ent->Position.z = 101.4f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 5;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF18); // BUTTERFLY
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -560.2f;
		ent->Position.y = 67.24f;
		ent->Position.z = 94.82f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 4;
		ent->Scale.y = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 241.64f;
		ent->Position.y = 77.96f;
		ent->Position.z = 324;
		ent->Rotation.y = 0x5D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -574.82f;
		ent->Position.y = 60.06f;
		ent->Position.z = 95.91f;
		ent->Rotation.y = 0x30D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -574.67f;
		ent->Position.y = 60.06f;
		ent->Position.z = 117.43f;
		ent->Rotation.y = 0x40D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -570.56f;
		ent->Position.y = 60.06f;
		ent->Position.z = 140.93f;
		ent->Rotation.y = 0x50D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 250.71f;
		ent->Position.y = 77.96f;
		ent->Position.z = 358.07f;
		ent->Rotation.y = 0x85D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 293.58f;
		ent->Position.y = 80.26f;
		ent->Position.z = 354.14f;
		ent->Rotation.y = 0x8AD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 316.52f;
		ent->Position.y = 80.26f;
		ent->Position.z = 345.95f;
		ent->Rotation.y = 0x8AD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 345.86f;
		ent->Position.y = 80.26f;
		ent->Position.z = 331.87f;
		ent->Rotation.y = 0xA0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -514.71f;
		ent->Position.y = 60.06f;
		ent->Position.z = 123.62f;
		ent->Rotation.y = 0xA0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 364.51f;
		ent->Position.y = 80.26f;
		ent->Position.z = 304.91f;
		ent->Rotation.y = 0xABD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 382.32f;
		ent->Position.y = 80.26f;
		ent->Position.z = 280.68f;
		ent->Rotation.y = 0xABD7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -212.91f;
		ent->Position.y = 19.36f;
		ent->Position.z = 233.91f;
		ent->Rotation.y = 0xB0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -215.88f;
		ent->Position.y = 20.06f;
		ent->Position.z = 245.54f;
		ent->Rotation.y = 0xB0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF15); // CHEER CHAO
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -504.34f;
		ent->Position.y = 60.06f;
		ent->Position.z = 107.87f;
		ent->Rotation.y = 0xB0D7;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -103.82f;
		ent->Position.y = 10;
		ent->Position.z = 370.34f;
		ent->Rotation.y = 0x1000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.5f;
		ent->Scale.y = 15;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -86.57f;
		ent->Position.y = 10;
		ent->Position.z = 392.97f;
		ent->Rotation.y = 0x4000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.5f;
		ent->Scale.y = 10.8f;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -52.01f;
		ent->Position.y = 10;
		ent->Position.z = 384.09f;
		ent->Rotation.y = 0x7000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.6f;
		ent->Scale.y = 20.8f;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -67.99f;
		ent->Position.y = 10;
		ent->Position.z = 337.77f;
		ent->Rotation.y = 0xD000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.6f;
		ent->Scale.y = 20.8f;
	}
	obj = LoadObject((LoadObj)2, 3, OF17); // CRACKER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -97.47f;
		ent->Position.y = 10;
		ent->Position.z = 343.87f;
		ent->Rotation.y = 0xE000;
		ent->Rotation.z = 0x3000;
		ent->Scale.x = 1.5f;
		ent->Scale.y = 10.8f;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 99.18f;
		ent->Position.y = 9.43f;
		ent->Position.z = 434.54f;
		ent->Rotation.y = 0x7A15;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 136.94f;
		ent->Position.y = 9.43f;
		ent->Position.z = 430.7f;
		ent->Rotation.y = 0x7A15;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -6.47f;
		ent->Position.y = 9.32f;
		ent->Position.z = 452.66f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 30.09f;
		ent->Position.y = 9.32f;
		ent->Position.z = 446.52f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -45.91f;
		ent->Position.y = 9.32f;
		ent->Position.z = 456.07f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -76.93f;
		ent->Position.y = 9.32f;
		ent->Position.z = 448.95f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -90.31f;
		ent->Position.y = 10.32f;
		ent->Position.z = 197.29f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 167.08f;
		ent->Position.y = 66.32f;
		ent->Position.z = 18.05f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 169.69f;
		ent->Position.y = 66.32f;
		ent->Position.z = -95.93f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 281.43f;
		ent->Position.y = 9.32f;
		ent->Position.z = 205.1f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -115.33f;
		ent->Position.y = 10.32f;
		ent->Position.z = 219.45f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -117.82f;
		ent->Position.y = 9.32f;
		ent->Position.z = 421.35f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -141.02f;
		ent->Position.y = 9.32f;
		ent->Position.z = 395.44f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -141.8f;
		ent->Position.y = 10.32f;
		ent->Position.z = 244.79f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -151.93f;
		ent->Position.y = 9.32f;
		ent->Position.z = 353.82f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -155.19f;
		ent->Position.y = 9.32f;
		ent->Position.z = 304.82f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -156.55f;
		ent->Position.y = 9.32f;
		ent->Position.z = 270.97f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -355.08f;
		ent->Position.y = 81.32f;
		ent->Position.z = 162.38f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -357.57f;
		ent->Position.y = 81.32f;
		ent->Position.z = 119.57f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 56.58f;
		ent->Position.y = 6.06f;
		ent->Position.z = 519.36f;
		ent->Rotation.y = 0x4066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 250.07f;
		ent->Position.y = 6.06f;
		ent->Position.z = 491.5f;
		ent->Rotation.y = 0x4066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 78.39f;
		ent->Position.y = 10.06f;
		ent->Position.z = 86;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -32.34f;
		ent->Position.y = 10.06f;
		ent->Position.z = 53.35f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 251.87f;
		ent->Position.y = 22.06f;
		ent->Position.z = 369.26f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF13); // ISLET
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -210.18f;
		ent->Position.y = 5.06f;
		ent->Position.z = 241.57f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -433.52f;
		ent->Position.y = 60.06f;
		ent->Position.z = -25.01f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -502.93f;
		ent->Position.y = 60.06f;
		ent->Position.z = 100.83f;
		ent->Rotation.y = 0x4000;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -506.86f;
		ent->Position.y = 60.06f;
		ent->Position.z = 98.34f;
		ent->Rotation.y = 0x4000;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -427.08f;
		ent->Position.y = 60.06f;
		ent->Position.z = -3.42f;
		ent->Rotation.y = 0x4BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -437.51f;
		ent->Position.y = 60.06f;
		ent->Position.z = -28.54f;
		ent->Rotation.y = 0x4BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -439.89f;
		ent->Position.y = 60.06f;
		ent->Position.z = -24.73f;
		ent->Rotation.y = 0x6BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -422.41f;
		ent->Position.y = 60.06f;
		ent->Position.z = -0.21f;
		ent->Rotation.y = 0x8BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -323.11f;
		ent->Position.y = 82.63f;
		ent->Position.z = 127.87f;
		ent->Rotation.y = 0xB4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -330.92f;
		ent->Position.y = 82.63f;
		ent->Position.z = 155.05f;
		ent->Rotation.y = 0xB4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -561.97f;
		ent->Position.y = 60.06f;
		ent->Position.z = 93.02f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -562.37f;
		ent->Position.y = 60.06f;
		ent->Position.z = 100.22f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -568.97f;
		ent->Position.y = 60.06f;
		ent->Position.z = 94.02f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -265.66f;
		ent->Position.y = 82.63f;
		ent->Position.z = 223.59f;
		ent->Rotation.y = 0xC4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -321.1f;
		ent->Position.y = 82.63f;
		ent->Position.z = 125.65f;
		ent->Rotation.y = 0xC4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -329.94f;
		ent->Position.y = 83.03f;
		ent->Position.z = 157.57f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -501.99f;
		ent->Position.y = 60.06f;
		ent->Position.z = 104.69f;
		ent->Rotation.y = 0xF04C;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -503.51f;
		ent->Position.y = 60.06f;
		ent->Position.z = 94.5f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -507.48f;
		ent->Position.y = 60.06f;
		ent->Position.z = 97.55f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -332.9f;
		ent->Position.y = 83.03f;
		ent->Position.z = 155.52f;
		ent->Rotation.y = 0xF4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 337.91f;
		ent->Position.y = 80.44f;
		ent->Position.z = 265.07f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0x9C3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 337.07f;
		ent->Position.y = 80.44f;
		ent->Position.z = 267.95f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xAC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF7); // PURPLE FLOWER

	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 334.64f;
		ent->Position.y = 80.44f;
		ent->Position.z = 267.68f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xEC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF11); // SCOOP
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -555.17f;
		ent->Position.y = 60.06f;
		ent->Position.z = 79.23f;
		ent->Rotation.y = 0x4F1E;
		ent->Rotation.z = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF11); // SCOOP
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -557.63f;
		ent->Position.y = 60.06f;
		ent->Position.z = 104.18f;
		ent->Rotation.y = 0x4F1E;
		ent->Rotation.z = 0xC000;
	}
	obj = LoadObject((LoadObj)2, 3, OF11); // SCOOP
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -561.71f;
		ent->Position.y = 60.68f;
		ent->Position.z = 126.16f;
		ent->Rotation.x = 0x4000;
		ent->Rotation.y = 0x600B;
	}
	obj = LoadObject((LoadObj)2, 3, OF9); // WATERING CAN
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -554.03f;
		ent->Position.y = 60.06f;
		ent->Position.z = 97.63f;
		ent->Rotation.y = 0x1F1E;
	}
	obj = LoadObject((LoadObj)2, 3, OF9); // WATERING CAN
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -565.7f;
		ent->Position.y = 60.06f;
		ent->Position.z = 109.13f;
		ent->Rotation.y = 0x8E0B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 325.75f;
		ent->Position.y = 80.44f;
		ent->Position.z = 284.61f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 357.7f;
		ent->Position.y = 80.24f;
		ent->Position.z = 312.08f;
		ent->Rotation.y = 0xC3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -453.93f;
		ent->Position.y = 60.06f;
		ent->Position.z = 0.75f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -461.8f;
		ent->Position.y = 60.06f;
		ent->Position.z = -15.1f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -474.18f;
		ent->Position.y = 60.06f;
		ent->Position.z = -17.84f;
		ent->Rotation.y = 0xC3B;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -324.56f;
		ent->Position.y = 82.98f;
		ent->Position.z = 124.2f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -336.82f;
		ent->Position.y = 81.98f;
		ent->Position.z = 126.13f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -345.83f;
		ent->Position.y = 81.98f;
		ent->Position.z = 152.45f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -348.81f;
		ent->Position.y = 81.98f;
		ent->Position.z = 156.59f;
		ent->Rotation.y = 0xDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 119.41f;
		ent->Position.y = 66.52f;
		ent->Position.z = -87.69f;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 301.31f;
		ent->Position.y = 80.24f;
		ent->Position.z = 346.04f;
		ent->Rotation.y = 0x1C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 352.41f;
		ent->Position.y = 80.24f;
		ent->Position.z = 322.5f;
		ent->Rotation.y = 0x1C3B;
		ent->Rotation.z = 0x1000;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -540.12f;
		ent->Position.y = 60.06f;
		ent->Position.z = 61.46f;
		ent->Rotation.y = 0x1F1E;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -344.42f;
		ent->Position.y = 82.03f;
		ent->Position.z = 154.74f;
		ent->Rotation.y = 0x34B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 349.32f;
		ent->Position.y = 80.24f;
		ent->Position.z = 320.12f;
		ent->Rotation.y = 0x4C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 356.18f;
		ent->Position.y = 80.24f;
		ent->Position.z = 314.67f;
		ent->Rotation.y = 0x4C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 304.46f;
		ent->Position.y = 80.24f;
		ent->Position.z = 347.8f;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -443.49f;
		ent->Position.y = 60.06f;
		ent->Position.z = 0.98f;
		ent->Rotation.y = 0x6BA1;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 323.16f;
		ent->Position.y = 80.24f;
		ent->Position.z = 343.05f;
		ent->Rotation.y = 0x6C3B;
		ent->Rotation.z = 0x1000;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 347.63f;
		ent->Position.y = 80.24f;
		ent->Position.z = 323.49f;
		ent->Rotation.y = 0x6C3B;
		ent->Rotation.z = 0x1000;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 152.16f;
		ent->Position.y = 65.33f;
		ent->Position.z = 7.23f;
		ent->Rotation.y = 0x86A8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 293.98f;
		ent->Position.y = 80.44f;
		ent->Position.z = 306.97f;
		ent->Rotation.y = 0x8E3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -452.46f;
		ent->Position.y = 60.06f;
		ent->Position.z = 1.3f;
		ent->Rotation.y = 0x9BA1;
		ent->Rotation.z = 0xF000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -469.66f;
		ent->Position.y = 60.06f;
		ent->Position.z = -14.86f;
		ent->Rotation.y = 0x9BA1;
		ent->Rotation.z = 0xF000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -342.54f;
		ent->Position.y = 81.98f;
		ent->Position.z = 124.19f;
		ent->Rotation.y = 0x9DFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 149.52f;
		ent->Position.y = 65.33f;
		ent->Position.z = 8.97f;
		ent->Rotation.y = 0xABA8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -509.37f;
		ent->Position.y = 60.06f;
		ent->Position.z = 108.93f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -512.17f;
		ent->Position.y = 60.06f;
		ent->Position.z = 99.33f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -516.63f;
		ent->Position.y = 60.06f;
		ent->Position.z = 133.05f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -561.23f;
		ent->Position.y = 60.06f;
		ent->Position.z = 140.84f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -563.03f;
		ent->Position.y = 60.06f;
		ent->Position.z = 133.25f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -566.23f;
		ent->Position.y = 60.06f;
		ent->Position.z = 150.84f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -569.42f;
		ent->Position.y = 60.06f;
		ent->Position.z = 133.44f;
		ent->Rotation.y = 0xC066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 119.37f;
		ent->Position.y = 64.33f;
		ent->Position.z = 7.11f;
		ent->Rotation.y = 0xC6A8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 154.89f;
		ent->Position.y = 65.33f;
		ent->Position.z = 8.88f;
		ent->Rotation.y = 0xC6A8;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -332.41f;
		ent->Position.y = 82.98f;
		ent->Position.z = 125.73f;
		ent->Rotation.y = 0xCDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -333.61f;
		ent->Position.y = 81.98f;
		ent->Position.z = 123.12f;
		ent->Rotation.y = 0xCDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 294.49f;
		ent->Position.y = 80.44f;
		ent->Position.z = 304.36f;
		ent->Rotation.y = 0xCE3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 318.76f;
		ent->Position.y = 80.44f;
		ent->Position.z = 289.63f;
		ent->Rotation.y = 0xCE3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -343.15f;
		ent->Position.y = 82.03f;
		ent->Position.z = 152.94f;
		ent->Rotation.y = 0xD4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -322.44f;
		ent->Position.y = 83.03f;
		ent->Position.z = 121.98f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -331.28f;
		ent->Position.y = 82.03f;
		ent->Position.z = 123.9f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -337.96f;
		ent->Position.y = 82.03f;
		ent->Position.z = 153.24f;
		ent->Rotation.y = 0xE4B5;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -338.81f;
		ent->Position.y = 81.98f;
		ent->Position.z = 121.73f;
		ent->Rotation.y = 0xEDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -342.9f;
		ent->Position.y = 81.98f;
		ent->Position.z = 121.21f;
		ent->Rotation.y = 0xEDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -353.78f;
		ent->Position.y = 81.98f;
		ent->Position.z = 155.43f;
		ent->Rotation.y = 0xEDFB;
		ent->Rotation.z = 0x15F;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -505.46f;
		ent->Position.y = 60.06f;
		ent->Position.z = 116.96f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -508.43f;
		ent->Position.y = 60.06f;
		ent->Position.z = 152.34f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -508.94f;
		ent->Position.y = 60.06f;
		ent->Position.z = 91.74f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -510.92f;
		ent->Position.y = 60.06f;
		ent->Position.z = 129.13f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -512.15f;
		ent->Position.y = 60.06f;
		ent->Position.z = 94.33f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -526.96f;
		ent->Position.y = 60.06f;
		ent->Position.z = 164.17f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -542.02f;
		ent->Position.y = 60.06f;
		ent->Position.z = 159.34f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -552.06f;
		ent->Position.y = 60.06f;
		ent->Position.z = 74.13f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -556.91f;
		ent->Position.y = 60.06f;
		ent->Position.z = 85.5f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -563.99f;
		ent->Position.y = 60.06f;
		ent->Position.z = 72.83f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -569.41f;
		ent->Position.y = 60.06f;
		ent->Position.z = 123.64f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -570.93f;
		ent->Position.y = 60.06f;
		ent->Position.z = 129.86f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 324.94f;
		ent->Position.y = 80.44f;
		ent->Position.z = 281.09f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xAC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 328.46f;
		ent->Position.y = 80.44f;
		ent->Position.z = 280.29f;
		ent->Rotation.x = 0x300;
		ent->Rotation.y = 0xCC3B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 121.59f;
		ent->Position.y = 66.52f;
		ent->Position.z = -88.68f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x359B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 132.53f;
		ent->Position.y = 64.33f;
		ent->Position.z = -84.62f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x44A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 133.47f;
		ent->Position.y = 67.33f;
		ent->Position.z = -89.7f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x54A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 129.67f;
		ent->Position.y = 64.33f;
		ent->Position.z = -83.74f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x64A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 138.2f;
		ent->Position.y = 64.33f;
		ent->Position.z = -84.16f;
		ent->Rotation.x = 0x1000;
		ent->Rotation.y = 0x64A8;
		ent->Rotation.z = 0x1000;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 137.65f;
		ent->Position.y = 64.52f;
		ent->Position.z = 7.7f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 141.72f;
		ent->Position.y = 67.52f;
		ent->Position.z = 12.16f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x159B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 123.09f;
		ent->Position.y = 64.52f;
		ent->Position.z = 8.18f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x459B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 146.45f;
		ent->Position.y = 64.52f;
		ent->Position.z = 7.6f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x459B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 114.38f;
		ent->Position.y = 66.52f;
		ent->Position.z = 11.91f;
		ent->Rotation.x = 0xF000;
		ent->Rotation.y = 0x659B;
		ent->Scale.x = 4;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 313.68f;
		ent->Position.y = 80.24f;
		ent->Position.z = 345.49f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 353.74f;
		ent->Position.y = 80.24f;
		ent->Position.z = 317.12f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF6); // WHITE FLOWER
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 366.88f;
		ent->Position.y = 80.24f;
		ent->Position.z = 300.5f;
		ent->Rotation.x = 0xF300;
		ent->Rotation.y = 0x5C3B;
		ent->Scale.x = 3;
		ent->Scale.y = 3;
	}
	obj = LoadObject((LoadObj)2, 3, OF2); // ZONE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 312.64f;
		ent->Position.y = 80.37f;
		ent->Position.z = 151.66f;
		ent->Scale.x = 30;
		ent->Scale.z = 200;
	}
	obj = LoadObject((LoadObj)2, 3, OF2); // ZONE
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -542.76f;
		ent->Position.y = 60;
		ent->Position.z = 97.08f;
		ent->Scale.x = 50;
		ent->Scale.z = 200;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -4.34f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.65f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -5.28f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.9f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 29.11f;
		ent->Position.y = 65.34f;
		ent->Position.z = -98.31f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 35.14f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.52f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 64.83f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.6f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 68.51f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.87f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -40.98f;
		ent->Position.y = 65.34f;
		ent->Position.z = 20.23f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -41.89f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.77f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 104.12f;
		ent->Position.y = 65.34f;
		ent->Position.z = -99.01f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 104.14f;
		ent->Position.y = 65.34f;
		ent->Position.z = 19.99f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 135.93f;
		ent->Position.y = 65.34f;
		ent->Position.z = 19.46f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 137.47f;
		ent->Position.y = 65.34f;
		ent->Position.z = -97.52f;
		ent->Rotation.y = 0xC331;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 64.22f;
		ent->Position.y = 9.32f;
		ent->Position.z = 442.37f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 172.18f;
		ent->Position.y = 9.32f;
		ent->Position.z = 422.01f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 213.56f;
		ent->Position.y = 9.32f;
		ent->Position.z = 414.33f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF5); // FLAG
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 296.23f;
		ent->Position.y = 9.32f;
		ent->Position.z = 257.22f;
		ent->Rotation.y = 0xF066;
	}
	obj = LoadObject((LoadObj)2, 3, OF3); // PALM
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 240.82f;
		ent->Position.y = -0.58f;
		ent->Position.z = 195.57f;
		ent->Rotation.y = 0xF581;
	}
	obj = LoadObject((LoadObj)2, 3, OF3); // PALM
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 263.54f;
		ent->Position.y = -0.58f;
		ent->Position.z = 283.33f;
		ent->Rotation.y = 0xF581;
	}
	obj = LoadObject((LoadObj)2, 3, OF8); // START MARK
	obj->SETData.SETData = &setdata_race;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 293.08f;
		ent->Position.y = 10.06f;
		ent->Position.z = 230.36f;
		ent->Rotation.y = 0x900;
	}
}

//Chao Name Machine load function
void __cdecl ChaoNameMachineCollision(ObjectMaster *a1)
{
	EntityData1* v1;
	NJS_OBJECT* v5;
	v1 = a1->Data1;
	v5 = sub_49D6C0(&objectCHAO_001834CC, a1, (ColFlags)0x20001001);
	v5->scl[0] = 1.0f;
	v5->scl[1] = 1.0f;
	v5->scl[2] = 1.0f;
	Collision_Init(a1, &stru_33D0B50, 9, 4u);
}

//MR Garden DLL functions
void __cdecl sub_72A790()
{
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_daytime, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Daytime, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_DAYTIME");
	PrintDebug("547369736F626C7961646920736F736E6F6F6C6579\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_daytime = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Daytime = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x80000001;
	collist_0000F778[1].Flags = 0x00000000;
	collist_0000F778[2].Flags = 0x00000000;
	sub_745A20((NJS_TEX*)&uvCHAO_0000EC54, 48);
}

void __cdecl sub_72A820()
{
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
	collist_0000F778[2].Flags = 0x80000001;
	sub_745A20((NJS_TEX*)&uvCHAO_0000EC54, 48);
}

void __cdecl sub_72A8B0()
{
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_NIGHT");
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_night, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Night, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	PrintDebug("ChaoStgGarden02MR_Night _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_night = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Night = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x00000000;
	collist_0000F778[1].Flags = 0x80000001;
	collist_0000F778[2].Flags = 0x00000000;
	sub_745A20((NJS_TEX*)&uvCHAO_0000EC54, 48);
}

//Garden load functions
void __cdecl LoadSSGardenX()
{
	PrintDebug("ChaoStgGarden00SS Prolog begin\n");
	LoadPVM("OBJ_SS", (NJS_TEXLIST*)0x02AA4BF8);
	SSGardenStartPoint.Position.x = BK_SSGardenStartPoint.Position.x;
	SSGardenStartPoint.Position.y = BK_SSGardenStartPoint.Position.y;
	SSGardenStartPoint.Position.z = BK_SSGardenStartPoint.Position.z;
	SSGardenStartPoint.YRot = BK_SSGardenStartPoint.YRot;
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden00SS_Load);
	LoadObjects_SS();
	SetChaoLandTable(&landtable_00011DD4);
	PrintDebug("ChaoStgGarden00SS Prolog end\n");
}

void __cdecl ECGardenWater_Display(ObjectMaster *a1)
{
	if (!DroppedFrames)
	{
		njSetTexture((NJS_TEXLIST*)&texlist_ecgarden);
		njPushMatrix(0);
		njTranslate(0, 0, -4415.8f, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)&objectCHAO_0000F01CX, QueuedModelFlagsB_3, 1.0f); //Bottom of the skybox
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, -415.8f, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)&objectCHAO_0000F01C, QueuedModelFlagsB_3, 1.0f); //Water
		njPopMatrix(1u);
	}
}

void __cdecl ECGardenWater_Main(ObjectMaster *a1)
{
	ECGardenWater_Display(a1);
}

void __cdecl ECGardenWater_Load(ObjectMaster *a1)
{
	EntityData1 *v1; // eax@1
	float *v2; // eax@1
	signed int v3; // edx@1

	v1 = a1->Data1;
	a1->MainSub = ECGardenWater_Main;
	a1->DisplaySub = ECGardenWater_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl LoadECGardenX()
{
	PrintDebug("ChaoStgGarden01EC Prolog begin\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden01EC_Load);
	LoadObject(LoadObj_Data1, 2, ECGardenWater_Load);
	LoadObjects_EC();
	SetChaoLandTable(&landtable_0000DF3C);
	PrintDebug("ChaoStgGarden01EC Prolog end\n");
}

void __cdecl LoadMRGardenX()
{
	DataPointer(LandTable*, LandTable_ChaoGardenMR, 0x03CA6E88);
	DataArray(void*, ModuleDestructors, 0x03CA6E70, 4);
	int v0; // eax@1
	int v1; // eax@2
	PrintDebug("ChaoStgGarden02MR Prolog\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden02MR_Load);
	LoadObjects_MR();
	v0 = GetTimeOfDay();
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
}

//Chao Race door
void __cdecl LoadChaoRaceDoorX(ObjectMaster *a1)
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

//Elevator
void __cdecl sub_4145D0(unsigned __int8 a1, unsigned __int8 a2)
{
	DataPointer(int, CutsceneMode, 0x03B22E1C);
	DataPointer(int, NextAct, 0x03B22E18);
	if (CurrentChaoStage == 4)
	{
		SetLevelEntrance(4);
		sub_715730(26, 4);
		NextLevel = 26;
		NextAct = 4;
		CutsceneMode = 3;
	}
	else
	{
		CutsceneMode = 3;
		NextLevel = a1;
		NextAct = a2;
	}
}

void __cdecl SetElevatorTexlist()
{
	if (CurrentChaoStage == 4)
	{
		njSetTexture((NJS_TEXLIST*)0x02AA4BF8); //OBJ_SS
	}
	else SetTextureToLevelObj();
}

//Function to set texture/texlist for garden transporters
void SetTransporterTexture()
{
	DataPointer(PVMEntry *, ADV01C_TEXLISTS, 0x038F6EC8);
	HMODULE handle = GetModuleHandle(L"ADV01CMODELS");
	NJS_MODEL_SADX **ADV01C_MODELS = (NJS_MODEL_SADX **)GetProcAddress(handle, "___ADV01C_MODELS");
	ADV01C_MODELS[32]->mats[0].diffuse.color = 0xFFFFFFFF;
	if (CurrentLevel != 32) njSetTexture((NJS_TEXLIST*)0x033A0788); //CHAO_OBJECT
	else njSetTexture(ADV01C_TEXLISTS[6].TexList);
	if (CurrentLevel != 32) ADV01C_MODELS[32]->mats[0].attr_texId = 68;
	else ADV01C_MODELS[32]->mats[0].attr_texId = 1;
}

//Name machine
void cdecl NameMachineTexlist()
{
	njSetTexture((NJS_TEXLIST*)0x033A0788); //CHAO_OBJECT
}

void __cdecl LoadChaoNameMachineX(NJS_VECTOR *position, int yrotation)
{
	EntityData1 *ent; // eax@1
	ObjectMaster *obj;
	ent = LoadObject(LoadObj_Data1, 2, Chao_Name_Machine_Load)->Data1;
	if (CurrentChaoStage == 4)
	{
		ent->Position.x = 178.03f;
		ent->Position.y = 8.56f;
		ent->Position.z = -128.44f;
		ent->Rotation.y = 0xD7B8;
	}
	if (CurrentChaoStage == 5)
	{
		ent->Position.x = 131.67f;
		ent->Position.y = 2.6f;
		ent->Position.z = -204.28f;
		ent->Rotation.x = 0xFFB0;
		ent->Rotation.y = 0xAFD6;
		ent->Rotation.z = 0xFFDE;
	}
	if (CurrentChaoStage == 6)
	{
		ent->Position.x = 239.4137f;
		ent->Position.y = 15.10273f;
		ent->Position.z = -45.98477f;
		ent->Rotation.x = 0xFFDC;
		ent->Rotation.y = 0xC1A8;
		ent->Rotation.z = 0xFFF2;
	}
}

//Chao egg coloring function

void __cdecl sub_78AC80X(NJS_CNK_MODEL *a1, int a2)
{
	__int16 v2; // ax@4
	__int16 v3; // ax@5
	int v4; // ecx@6
	__int16 v5; // ax@8
	DataArray(int, off_389D780, 0x389D780, 4);
	DataArray(int, off_389D7B8, 0x389D7B8, 4);
	DataArray(int, dword_389D7B8, 0x389D7B8, 6);
	DataPointer(D3DMATRIX, stru_389D7E8, 0x0389D7E8);
	DataArray(NJS_TEXLIST, ChaoTexLists, 0x033A1038, 7);
	DataArray(int, dword_389D828, 0x389D828, 13);
	if (a2 == SADXEggColour_Black_TwoTone || a2 == SADXEggColour_BlackShiny_TwoTone)
	{
		WriteData<1>((char*)0x03601516, 0x8F);
		WriteData<1>((char*)0x036009B6, 0x8F);
		WriteData<1>((char*)0x03600F4E, 0x8F);
	}
	else
	{
		WriteData<1>((char*)0x03601516, 0x3D);
		WriteData<1>((char*)0x036009B6, 0x3D);
		WriteData<1>((char*)0x03600F4E, 0x3D);
	}
	switch (a2)
	{
	case SADXEggColour_Black_TwoTone:
	case SADXEggColour_Normal:
		DisableChunkMaterialFlags();
		break;
	case SADXEggColour_Yellow_MonoTone:
	case SADXEggColour_White_MonoTone:
	case SADXEggColour_Brown_MonoTone:
	case SADXEggColour_Aqua_MonoTone:
	case SADXEggColour_Pink_MonoTone:
	case SADXEggColour_Blue_MonoTone:
	case SADXEggColour_Grey_MonoTone:
	case SADXEggColour_Green_MonoTone:
	case SADXEggColour_Red_MonoTone:
	case SADXEggColour_LightGreen_MonoTone:
	case SADXEggColour_Purple_MonoTone:
	case SADXEggColour_Orange_MonoTone:
	case SADXEggColour_Black_MonoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(9u);
		sub_78A320(dword_389D828[a2 - SADXEggColour_Yellow_MonoTone]);
		break;
	case SADXEggColour_Yellow_TwoTone:
	case SADXEggColour_White_TwoTone:
	case SADXEggColour_Brown_TwoTone:
	case SADXEggColour_Aqua_TwoTone:
	case SADXEggColour_Pink_TwoTone:
	case SADXEggColour_Blue_TwoTone:
	case SADXEggColour_Green_TwoTone:
	case SADXEggColour_Red_TwoTone:
	case SADXEggColour_LightGreen_TwoTone:
	case SADXEggColour_Purple_TwoTone:
	case SADXEggColour_Orange_TwoTone:
	case SADXEggColour_Grey_TwoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(8u);
		v2 = GetChunkTextureIndex(a1);
		SetChunkTextureIndexA((unsigned __int16)v2);
		sub_78A320(dword_389D828[a2 - SADXEggColour_Yellow_TwoTone]);
		break;
	case SADXEggColour_NormalShiny:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(6u);
		Direct3D_SetTexList(ChaoTexLists);
		v3 = GetChunkTextureIndex(a1);
		SetChunkTextureIndexA((unsigned __int16)v3);
		SetChunkTextureIndexB(0x22u);
		break;
	case SADXEggColour_YellowShiny_MonoTone:
	case SADXEggColour_WhiteShiny_MonoTone:
	case SADXEggColour_BrownShiny_MonoTone:
	case SADXEggColour_AquaShiny_MonoTone:
	case SADXEggColour_PinkShiny_MonoTone:
	case SADXEggColour_BlueShiny_MonoTone:
	case SADXEggColour_GreyShiny_MonoTone:
	case SADXEggColour_GreenShiny_MonoTone:
	case SADXEggColour_RedShiny_MonoTone:
	case SADXEggColour_LightGreenShiny_MonoTone:
	case SADXEggColour_PurpleShiny_MonoTone:
	case SADXEggColour_OrangeShiny_MonoTone:
	case SADXEggColour_BlackShiny_MonoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(15u);
		Direct3D_SetTexList(ChaoTexLists);
		v4 = dword_389D828[a2 - SADXEggColour_YellowShiny_MonoTone];
		goto LABEL_8;
	case SADXEggColour_YellowShiny_TwoTone:
	case SADXEggColour_WhiteShiny_TwoTone:
	case SADXEggColour_BrownShiny_TwoTone:
	case SADXEggColour_AquaShiny_TwoTone:
	case SADXEggColour_PinkShiny_TwoTone:
	case SADXEggColour_BlueShiny_TwoTone:
	case SADXEggColour_GreyShiny_TwoTone:
	case SADXEggColour_GreenShiny_TwoTone:
	case SADXEggColour_RedShiny_TwoTone:
	case SADXEggColour_LightGreenShiny_TwoTone:
	case SADXEggColour_PurpleShiny_TwoTone:
	case SADXEggColour_OrangeShiny_TwoTone:
	case SADXEggColour_BlackShiny_TwoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(0xEu);
		Direct3D_SetTexList(ChaoTexLists);
		v4 = off_389D780[a2 + 1];
	LABEL_8:
		sub_78A320((int)v4);
		v5 = GetChunkTextureIndex(a1);
		SetChunkTextureIndexA((unsigned __int16)v5);
		SetChunkTextureIndexB(0x22u);
		break;
	case SADXEggColour_YellowJewel:
	case SADXEggColour_WhiteJewel:
	case SADXEggColour_PinkJewel:
	case SADXEggColour_BlueJewel:
	case SADXEggColour_GreenJewel:
	case SADXEggColour_PurpleJewel:
	case SADXEggColour_AquaJewel:
	case SADXEggColour_RedJewel:
	case SADXEggColour_BlackJewel:
	case SADXEggColour_LightGreenJewel:
	case SADXEggColour_OrangeJewel:
	case SADXEggColour_Pearl:
	case SADXEggColour_Metal1:
	case SADXEggColour_Metal2:
	case SADXEggColour_Glass:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(4u);
		Direct3D_SetTexList(ChaoTexLists);
		sub_78A320(-1);
		SetChunkTextureIndexA(a2 - 36);
		break;
	default:
		return;
	}
}

void ScaleFruit()
{
	njScale(0, 0.7f, 0.7f, 0.7f);
	sub_408530(&ChaoNormalFruit);
}

//Chao Race Entry stuff

//Bow Chao

void __cdecl BowChaoThing(NJS_ACTION *action, float frame)
{
	if (bowchaoanim == 1) njAction(action, bowchaoframe); else njAction(action, frame);
}

int __cdecl sub_72C2E0X()
{
	ObjectMaster *v0; // eax@1
	ObjectMaster *v1; // esi@1
	LoadPVM("OBJ_AL_RACE", (NJS_TEXLIST*)0x033A6404);
	LoadObjects_RaceEntry();
	return 0;
}

void __cdecl ChaoStgEntrance_MainX(ObjectMaster *a1)
{
	DataPointer(int, TextLanguage, 0x03B0F0E8);
	DataPointer(int, dword_3CA6EB8, 0x3CA6EB8);
	DataPointer(NJS_TEXLIST, AL_TEX_ENT_COMMON_TEXLIST, 0x034232E8);
	DataPointer(NJS_TEXLIST, AL_ENT_CHAR_X_TEX_TEXLIST, 0x034232F0);
	DataPointer(NJS_TEXLIST, AL_ENT_TITLE_X_TEX_TEXLIST, 0x034232F8);
	const char *v1; // [sp-24h] [bp-24h]@5
	NJS_TEXLIST *v2; // [sp-20h] [bp-20h]@5
	unsigned __int16 v3; // [sp-1Ch] [bp-1Ch]@5
	const char *v4; // [sp-Ch] [bp-Ch]@3
	a1->MainSub = sub_7197E0;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))nullsub;
	a1->DeleteSub = sub_7197C0;
	SetGlobalPoint2Col_Colors(0xFF000000, 0xFF000000, 0xFF000000);
	sub_72A750();
	sub_72A570();
	sub_724E60();
	sub_722500();
	LoadChaoTexlist("AL_TEX_COMMON", &ChaoTexLists[1], 1u);
	sub_72C2E0X();
	InitializeSoundManager();
	PlayMusic(MusicIDs_ChaoRaceEntrance_OLD);
	DataPointer(DrawDistance, LevelDrawDistance, 0x03ABDC70);
	LevelDrawDistance.Minimum = -1.0f;
	LevelDrawDistance.Maximum = -12000.0f;
}

void __cdecl LoadRaceEntryX()
{
	if (SkipSA1Entry == 1)
	{
		LoadPVM("CHAO_ENTRANCE", (NJS_TEXLIST*)0x340E934);
		SSGardenStartPoint.Position.x = BK_SSGardenStartPoint.Position.x;
		SSGardenStartPoint.Position.y = BK_SSGardenStartPoint.Position.y;
		SSGardenStartPoint.Position.z = BK_SSGardenStartPoint.Position.z;
		SSGardenStartPoint.YRot = BK_SSGardenStartPoint.YRot;
		PrintDebug("ChaoStgEntrance _prolog begin.\n");
		LoadObject(LoadObj_Data1, 5, ChaoStgEntrance_Main);
		SetChaoLandTable((LandTable*)0x03423700); //PC
		PrintDebug("ChaoStgEntrance _prolog end.\n");
		SkipSA1Entry = 0;
	}
	else
	{
		LoadPVM("AL_RACE01", (NJS_TEXLIST*)0x340E934);
		SSGardenStartPoint.Position.x = 2052;
		SSGardenStartPoint.Position.y = 0;
		SSGardenStartPoint.Position.z = 0;
		SSGardenStartPoint.YRot = NJM_DEG_ANG(180);
		PrintDebug("ChaoStgEntrance _prolog begin.\n");
		LoadObject(LoadObj_Data1, 5, ChaoStgEntrance_MainX);
		SetChaoLandTable(&landtable_00000270); //DC
		PrintDebug("ChaoStgEntrance _prolog end.\n");
	}
}

void LoadSADXEntry()
{
	sub_79E400(2, 0, 0); //Play sound
	SkipSA1Entry = 1;
	sub_715700(2);
}

void ExitRaceEntry()
{
	SkipSA1Entry = 0;
	sub_715700(2);
}

//Chao Race stuff

void __cdecl LoadChaoRaceX()
{
	SkipSA1Entry = 0;
	PrintDebug("ChaoStgRace _prolog begin.\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgRace_Init);
	LoadObjects_Race();
	SetChaoLandTableX(&landtable_00000E64);
	PrintDebug("ChaoStgRace _prolog end.\n");
}

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

void LoadSSGardenObjectPVM(const char *filename, NJS_TEXLIST *texlist)
{
	LoadPVM("GARDEN00SSOBJ_DC", &Garden00SSObj_TEXLIST);
}

void ChaoGardens_Init(const char *path, const HelperFunctions &helperFunctions)
{
	WriteData((HintText_Entry**)0x9BF06C, &ChaoGardenMessages_Japanese[0]);
	WriteData((HintText_Entry**)0x9BF070, &ChaoGardenMessages_English[0]);
	WriteData((HintText_Entry**)0x9BF074, &ChaoGardenMessages_French[0]);
	WriteData((HintText_Entry**)0x9BF078, &ChaoGardenMessages_Spanish[0]);
	WriteData((HintText_Entry**)0x9BF07C, &ChaoGardenMessages_German[0]);
	//Config stuff
	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
	EnableSSGarden = config->getBool("Chao Gardens", "EnableStationSquareGarden", true);
	EnableMRGarden = config->getBool("Chao Gardens", "EnableMysticRuinsGarden", true);
	EnableECGarden = config->getBool("Chao Gardens", "EnableEggCarrierGarden", true);
	EnableLobby = config->getBool("Chao Gardens", "EnableChaoRaceLobby", true);
	delete config;
	//Garden transporters stuff
	*(NJS_OBJECT*)0x036065B4 = objectCHAO_00134808; //EC garden to EC transporter
	*(NJS_OBJECT*)0x03604540 = objectCHAO_00180454; //All other transporters
	WriteData<1>((char*)0x00729576, 0x90); //Collision struct pointer
	WriteData<1>((char*)0x00729577, 0x8B); //Collision struct pointer
	WriteData<1>((char*)0x00729578, 0x7F); //Collision struct pointer
	WriteData<1>((char*)0x00729574, 0x04); //Collision parameter for InitCollision
	WriteCall((void*)0x005262DE, SetTransporterTexture);// Garden transporter texture/texlist
	WriteJump((void*)0x729260, (void*)0x5262B0);// Garden transporter effects
	//Fruits
	*(NJS_OBJECT*)0x3606D00 = objectCHAO_0017C0BC; //Coconut
	*(NJS_OBJECT*)0x3606958 = objectCHAO_0017C0BC_green; //Coconut (unripe)
	WriteCall((void*)0x00722D59, ScaleFruit); //Scale normal fruit
	//Trees
	*(NJS_MODEL_SADX*)0x036087C0 = attachCHAO_0017BAF8; //Tree trunk
	*(NJS_MODEL_SADX*)0x03608064 = attachCHAO_0017B768; //Tree leaves 1
	*(NJS_MODEL_SADX*)0x036076E4 = attachCHAO_0017B034; //Tree leaves 2
	//Misc
	WriteJump((void*)0x0078AC80, sub_78AC80X); //Eggs
	WriteData<1>((char*)0x007151D3, 0x1A); //The secret EC egg is a two-tone black egg
	ResizeTextureList(&ChaoTexLists[0], 144); //AL_BODY
	ResizeTextureList((NJS_TEXLIST*)0x033A1338, 31); //AL_DX_OBJ_CMN
	//Name Machine stuff
	*(NJS_OBJECT*)0x33CFC70 = objectCHAO_001834CC; //Name Machine
	*(NJS_OBJECT*)0x33CB04C = objectCHAO_001826E8; //Name machine button
	WriteCall((void*)0x00729EEF, ChaoNameMachineCollision);
	WriteCall((void*)0x00729DE9, NameMachineTexlist);
	WriteData<5>((void*)0x00729EBB, 0x90);
	WriteData<5>((void*)0x00729E57, 0x90);
	WriteJump((void*)0x00729F40, LoadChaoNameMachineX);
	DataArray(CollisionData, stru_33D0B50, 0x033D0B50, 9);
	stru_33D0B50[0].origin.z = 5;
	for (int i = 1; i < 9; i++)
	{
		stru_33D0B50[i].scale.x = 0;
		stru_33D0B50[i].scale.y = 0;
		stru_33D0B50[i].scale.z = 0;
	}
	//Chao Race Entry
	if (EnableLobby == true)
	{
		WriteCall((void*)0x0071C0CF, BowChaoThing);
		BK_SSGardenStartPoint.Position.x = SSGardenStartPoint.Position.x;
		BK_SSGardenStartPoint.Position.y = SSGardenStartPoint.Position.y;
		BK_SSGardenStartPoint.Position.z = SSGardenStartPoint.Position.z;
		BK_SSGardenStartPoint.YRot = SSGardenStartPoint.YRot;
		WriteJump((void*)0x007199B0, LoadRaceEntryX);
		ResizeTextureList((NJS_TEXLIST *)0x340E934, 49); //Race Entry texlist
		WriteCall((void*)0x0072C618, ExitRaceEntry);
		WriteCall((void*)0x0071D17A, LoadSADXEntry);
		WriteData<5>((void*)0x0071D158, 0x90); //Don't move Sanic
		WriteData<5>((void*)0x0071CEE0, 0x90); //Don't mess with entry button
		WriteData<5>((void*)0x0071CEC2, 0x90); //Don't mess with entry button
	}
	//Chao Race stuff
	WriteJump((void*)0x00719DB0, LoadChaoRaceX);
	WriteData((float*)0x00719D74, -16000.0f); //Draw distance
	//Station Square garden stuff
	if (EnableSSGarden == true)
	{
		WriteCall((void*)0x00719597, LoadSSGardenObjectPVM);
		WriteData<5>((void*)0x007195AE, 0x90); //Don't load SADX button prompts in SS garden
		WriteData<5>((void*)0x0071957E, 0x90); //Disable the Sonic Team homepage prompt
		WriteJump((void*)0x4145D0, sub_4145D0); //Elevator function
		WriteJump((void*)0x0072AB80, LoadChaoRaceDoorX);
		WriteCall((void*)0x00638DD7, SetElevatorTexlist);
		WriteData<5>((void*)0x007195A3, 0x90);
		ResizeTextureList((NJS_TEXLIST*)0x03406088, 32); //GARDEN00SSOBJ
		*(NJS_OBJECT*)0x0340C5A4 = objectCHAO_00012A2C; //race door wall part
		*(NJS_MOTION*)0x0340D978 = _12ADC; //race door animation
		((NJS_OBJECT*)0x0340B97C)->basicdxmodel->mats[0].attr_texId = 18; //race door left
		((NJS_OBJECT*)0x0340B97C)->basicdxmodel->mats[1].attr_texId = 18; //race door left
		((NJS_OBJECT*)0x0340B97C)->basicdxmodel->mats[2].attr_texId = 28; //race door left
		((NJS_OBJECT*)0x0340B1B4)->basicdxmodel->mats[0].attr_texId = 18; //race door right
		((NJS_OBJECT*)0x0340B1B4)->basicdxmodel->mats[1].attr_texId = 18; //race door right
		((NJS_OBJECT*)0x0340B1B4)->basicdxmodel->mats[2].attr_texId = 28; //race door right
		WriteData<1>((void*)0x00719265, 0x7D); //Exit 1
		WriteData<1>((void*)0x00719264, 0xF2); //Exit 2
		WriteData<1>((void*)0x00719263, 0xF0); //Exit 2
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
		WriteData<5>((void*)0x007195D1, 0x90); //Kill SADX water
		WriteData<5>((void*)0x0071946E, 0x90); //Kill SADX fountain
		WriteData((float*)0x0071949E, -1000.0f); //Kill hintbox
		WriteData((float*)0x00719496, -1000.0f); //Kill hintbox
	}
	//Mystic Ruins garden stuff
	if (EnableMRGarden == true)
	{
		MRGardenReturnPoint.Position.x = 219;
		MRGardenReturnPoint.Position.y = 15.45f;
		MRGardenReturnPoint.Position.z = -48.5f;
		WriteData<5>((void*)0x00718E20, 0x90); //Don't load SADX button prompts in MR garden
		WriteJump((void*)0x00718E90, LoadMRGardenX);
		WriteJump((void*)0x0072A790, sub_72A790); //Mystic Ruins garden function 1
		WriteJump((void*)0x0072A820, sub_72A820); //Mystic Ruins garden function 2
		WriteJump((void*)0x0072A8B0, sub_72A8B0); //Mystic Ruins garden function 3
		WriteData<5>((void*)0x00718E43, 0x90); //Kill SADX water
		WriteData<5>((void*)0x00728F1E, 0x90); //Kill SADX water 2
		WriteData<1>((void*)0x00718E7F, 0xC6); //Draw distance
		WriteData<1>((void*)0x00718E7E, 0x3B); //Draw distance
		WriteData<1>((void*)0x00718E7D, 0x80); //Draw distance
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
	}
	//Egg Carrier garden stuff
	if (EnableECGarden == true)
	{
		WriteData<5>((void*)0x00719181, 0x90); //Don't load SADX button prompts in EC garden
		ECGardenStartPoint.Position.y = 71.0f;
		WriteCall((void*)0x00729289, NameMachineTexlist);
		WriteJump((void*)0x007191D0, LoadECGardenX);
		WriteData((float*)0x007191BF, -12000.0f); //Draw distance
		WriteData<1>((void*)0x00718FE8, 0xC4); //Disable Y check
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
}

void ChaoGardens_OnFrame()
{
	//All gardens VMU
	if (CurrentChaoStage >= 4 && CurrentChaoStage <= 6)
	{
		if (GameState != 16)
		{
			if (vmuframe > 4) vmuframe = 0;
			matlistCHAO_0018271C[1].attr_texId = vmuframe;
			if (FrameCounter % 120 == 0) vmuframe++;
		}
	}
	//Station Square garden
	if (CurrentChaoStage == 4 && GameState != 16 && EnableSSGarden == true)
	{
		auto entity = EntityData1Ptrs[0];
		if (entity != nullptr)
		{
			if (entity->Position.z > 150 && entity->Position.x > 30.0f)
			{
				sub_715700(7);
			}
		}
		if (ssgardenwater > 9) ssgardenwater = 0;
		matlistCHAO_00011388[0].attr_texId = ssgardenwater;
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) ssgardenwater++;
		for (int q = 0; q < LengthOfArray(uvCHAO_000144F0); q++)
		{
			uvCHAO_000144F0[q].v = uvCHAO_000144F0[q].v - 2;
		}
		if (uvCHAO_000144F0[0].v < 0)
		{
			for (int q2 = 0; q2 < LengthOfArray(uvCHAO_000144F0); q2++)
			{
				uvCHAO_000144F0[q2].v = uvCHAO_000144F0R[q2].v;
			}
		}

	}
	//Egg Carrier garden
	if (CurrentChaoStage == 5 && GameState != 16 && EnableECGarden == true)
	{
		if (ecgardenwater > 63) ecgardenwater = 54;
		if (ecgardensand > 78) ecgardensand = 64;
		matlistCHAO_00006510[0].attr_texId = ecgardensand;
		matlistCHAO_0000C748[0].attr_texId = ecgardenwater;
		matlistCHAO_0000EF4C[0].attr_texId = ecgardenwater;
		matlistCHAO_00001D00[0].attr_texId = ecgardenwater;
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
		{
			ecgardenwater++;
			ecgardensand++;
		}
	}
	//Mystic Ruins garden
	if (CurrentChaoStage == 6 && GameState != 16 && EnableMRGarden == true)
	{
		for (int q3 = 0; q3 < LengthOfArray(uvCHAO_0000F184); q3++) { uvCHAO_0000F184[q3].v--; }
		if (uvCHAO_0000F184[2].v <= -255)
		{
			for (int r5 = 0; r5 < LengthOfArray(uvCHAO_0000F184); r5++)
			{
				uvCHAO_0000F184[r5].v = uvCHAO_0000F184_R[r5].v;
			}
		}
		if (mrgardenwater > 45) mrgardenwater = 36;
		matlistCHAO_00002FF4[0].attr_texId = mrgardenwater;
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) mrgardenwater++;
		if (Camera_Data1 != nullptr)
		{
			objectCHAO_00013A78.pos[0] = Camera_Data1->Position.x;
			objectCHAO_00013A78.pos[1] = 0;
			objectCHAO_00013A78.pos[2] = Camera_Data1->Position.z;
			objectCHAO_0001AD38.pos[0] = Camera_Data1->Position.x;
			objectCHAO_0001AD38.pos[1] = 0;
			objectCHAO_0001AD38.pos[2] = Camera_Data1->Position.z;
			objectCHAO_00018AF4.pos[0] = Camera_Data1->Position.x;
			objectCHAO_00018AF4.pos[1] = 0;
			objectCHAO_00018AF4.pos[2] = Camera_Data1->Position.z;
		}
	}
	//Chao Race Entry
	if (CurrentChaoStage == 2 && GameState != 16 && EnableLobby == true)
	{

		if (SkipSA1Entry == true)
		{
			((NJS_MATERIAL*)0x033AEB70)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
			((NJS_MATERIAL*)0x033AEB70)->diffuse.color = 0xFFFFFFFF;
		}
		else
		{
			((NJS_MATERIAL*)0x033AEB70)->attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			((NJS_MATERIAL*)0x033AEB70)->diffuse.color = 0xFFB2B2B2;
		}
		//Cheer Chao
		if (FrameCounter % (35 / FramerateSetting) == 0) cheerchaoanim = !cheerchaoanim;
		if (cheerchaoanim == true)matlistCHAO_03270F10[0].attr_texId = 48; else matlistCHAO_03270F10[0].attr_texId = 39;
		//Letters
		c1 = letteranims[letterframe][0];
		h1 = letteranims[letterframe][1];
		a1 = letteranims[letterframe][2];
		o1 = letteranims[letterframe][3];
		r2 = letteranims[letterframe][4];
		a2 = letteranims[letterframe][5];
		c2 = letteranims[letterframe][6];
		e2 = letteranims[letterframe][7];
		if (c1 == true) matlistCHAO_00047DEC[0].attr_texId = 31; else matlistCHAO_00047DEC[0].attr_texId = 40;
		if (h1 == true) matlistCHAO_00047DEC[1].attr_texId = 32; else matlistCHAO_00047DEC[1].attr_texId = 41;
		if (a1 == true) matlistCHAO_00047DEC[2].attr_texId = 33; else matlistCHAO_00047DEC[2].attr_texId = 42;
		if (o1 == true) matlistCHAO_00047DEC[3].attr_texId = 34; else matlistCHAO_00047DEC[3].attr_texId = 43;
		if (r2 == true) matlistCHAO_00047DEC[6].attr_texId = 35; else matlistCHAO_00047DEC[6].attr_texId = 44;
		if (a2 == true) matlistCHAO_00047DEC[7].attr_texId = 36; else matlistCHAO_00047DEC[7].attr_texId = 45;
		if (c2 == true) matlistCHAO_00047DEC[5].attr_texId = 37; else matlistCHAO_00047DEC[5].attr_texId = 46;
		if (e2 == true) matlistCHAO_00047DEC[4].attr_texId = 38; else matlistCHAO_00047DEC[4].attr_texId = 47;
		if (FrameCounter % (10 / FramerateSetting) == 0) letterframe++;
		if (letterframe > LengthOfArray(letteranims)) letterframe = 0;
		//Exit
		auto entity = EntityData1Ptrs[0];
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
			if (bowchaoanim != 2) bowchaoanim = 1;
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
		matlistCHAO_0002A548[0].attr_texId = chaoracewater;
		matlistCHAO_0003EFB0[0].attr_texId = chaoracewater;
		matlistCHAO_0003F2DC[0].attr_texId = chaoracewater;
		if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) chaoracewater++;
		for (int w = 0; w < LengthOfArray(uvCHAO_00045AF4); w++)
		{
			uvCHAO_00045AF4[w].v = uvCHAO_00045AF4[w].v - 6;
		}
		if (uvCHAO_00045AF4[0].v < -253)
		{
			for (int w2 = 0; w2 < LengthOfArray(uvCHAO_00045AF4); w2++)
			{
				uvCHAO_00045AF4[w2].v = uvCHAO_00045AF4R[w2].v;
			}
		}

	}
}