#include <SADXModLoader.h>
#include "DLC_Christmas98.h"

FunctionPointer(void, sub_412D80, (int a1, int a2), 0x412D80);
FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(signed int, sub_4570B0, (), 0x4570B0);
FunctionPointer(void, sub_425800, (int a1), 0x425800);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);

HMODULE DC_ADV00MODELS = GetModuleHandle(L"DC_ADV00MODELS");
HMODULE SONICADV_000 = GetModuleHandle(L"SONICADV_000");
HMODULE SONICADV_001 = GetModuleHandle(L"SONICADV_001");
HMODULE SONICADV_002 = GetModuleHandle(L"SONICADV_002");
HMODULE SONICADV_003 = GetModuleHandle(L"SONICADV_003");
HMODULE SONICADV_501 = GetModuleHandle(L"SONICADV_501");
HMODULE SONICADV_502 = GetModuleHandle(L"SONICADV_502");
HMODULE SONICADV_503 = GetModuleHandle(L"SONICADV_503");
HMODULE SONICADV_504 = GetModuleHandle(L"SONICADV_504");
HMODULE SONICADV_505 = GetModuleHandle(L"SONICADV_505");
HMODULE SONICADV_506 = GetModuleHandle(L"SONICADV_506");
HMODULE SONICADV_507 = GetModuleHandle(L"SONICADV_507");
HMODULE SONICADV_508 = GetModuleHandle(L"SONICADV_508");
HMODULE SONICADV_509 = GetModuleHandle(L"SONICADV_509");
HMODULE SONICADV_510 = GetModuleHandle(L"SONICADV_510");
HMODULE SONICADV_511 = GetModuleHandle(L"SONICADV_511");

DataArray(FieldStartPosition, SonicSSStartArray, 0x0090BB58, 13);
DataArray(FieldStartPosition, TailsSSStartArray, 0x0090BC60, 8);
DataArray(FieldStartPosition, KnucklesSSStartArray, 0x0090BD00, 7);
DataArray(FieldStartPosition, AmySSStartArray, 0x0090BD90, 5);
DataArray(FieldStartPosition, BigSSStartArray, 0x0090BDF8, 6);
DataArray(FieldStartPosition, E102SSStartArray, 0x0090BE70, 7);
DataPointer(int, DroppedFrames, 0x03B1117C);

static bool ObjectsLoaded = false;
static bool ModFailsafe = false;
static int ChristmasMusic = 0;
static int HintTimer = 0;

SETObjData setdata_dlc = {};

char *Christmas98Message0[] = {
	"	Here's wishing you a romantic X'mas!\n	-Hotel manager-",
	NULL,
};

char *Christmas98Message1[] = {
	"	Be careful not to eat too much cake!",
	NULL,
};

char *Christmas98Message2[] = {
	"	Santa will bring gifts to\n	all the good boys and girls!",
	NULL,
};

char *Christmas98Message3[] = {
	"	Let's spend this X'mas\n	going out together with our Chao.",
	NULL,
};

char *Christmas98Message4[] = {
	"	Two lovers are playing\n	Sonic Adventure on a holy night.",
	NULL,
};
char *Christmas98Message5[] = {
	"	Christmas sale now on!\n	-Central Department Store-",
	NULL,
};
char *Christmas98Message6[] = {
	"	Merry X'mas to all our fellow citizens!\n	-Station Square Mayor-",
	NULL,
};
char *Christmas98Message7[] = {
	"	May this Christmas become\n	your greatest day!",
	NULL,
};

PVMEntry Christmas98Textures = { "SONICADV_000", (TexList *)&texlist_christmas };

void StopVoicesButMaybeNot()
{
	//004B793E
	if (ChristmasMusic == 0) StopVoices();
}

void DLCObject_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_christmas);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njRotateXYZ(0, v1->Rotation.x, v1->Rotation.y, v1->Rotation.z);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		ProcessModelNode_AB_Wrapper(&object_00000F9C, 1.0f);
		njPopMatrix(1u);
	}
}

void DLCObject_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	int CollisionRadius;
	v1 = a1->Data1;
	CollisionRadius = v1->Action;
	if (CurrentLevel == 26)
	{
		if (v1->NextAction == CurrentAct)
		{
			if (IsPlayerInsideSphere(&v1->Position, CollisionRadius))
			{
				if (HintTimer <= 0)
				{
					if (v1->Index == 68 && ChristmasMusic != 1)
					{
						StopMusic();
						sub_425800(MusicIDs_nights_a);
						ChristmasMusic = 1;
						WriteData<1>((char*)0x0062EEF9, MusicIDs_nights_a);
					}
					if (v1->Index == 69 && ChristmasMusic != 2)
					{
						StopMusic();
						sub_425800(MusicIDs_nights_k);
						ChristmasMusic = 2;
						WriteData<1>((char*)0x0062EEF9, MusicIDs_nights_k);
					}
					if (v1->Index == 70 && ChristmasMusic != 3)
					{
						StopMusic();
						sub_425800(MusicIDs_nights_s);
						ChristmasMusic = 3;
						WriteData<1>((char*)0x0062EEF9, MusicIDs_nights_s);
					}
					if (v1->CharIndex == 0) sub_4B79C0((char *)(&Christmas98Message0), 240);
					if (v1->CharIndex == 1) sub_4B79C0((char *)(&Christmas98Message1), 240);
					if (v1->CharIndex == 2) sub_4B79C0((char *)(&Christmas98Message2), 240);
					if (v1->CharIndex == 3) sub_4B79C0((char *)(&Christmas98Message3), 240);
					if (v1->CharIndex == 4) sub_4B79C0((char *)(&Christmas98Message4), 240);
					if (v1->CharIndex == 5) sub_4B79C0((char *)(&Christmas98Message5), 240);
					if (v1->CharIndex == 6) sub_4B79C0((char *)(&Christmas98Message6), 240);
					if (v1->CharIndex == 7) sub_4B79C0((char *)(&Christmas98Message7), 240);
					HintTimer = 240;
				}
			}
			DLCObject_Display(a1);
		}
	}
}

void DLCObject_Load(ObjectMaster *a1)
{
	EntityData1 *v1; // edi@1
	NJS_OBJECT *v2; // eax@2
	v1 = a1->Data1;
	v2 = sub_49D6C0(&object_00000F9C, a1, (ColFlags)0x20001001);
	v2->scl[0] = v1->Scale.x;
	v2->scl[1] = v1->Scale.y;
	v2->scl[2] = v1->Scale.z;
	v2->ang[0] = v1->Rotation.x;
	v2->ang[1] = v1->Rotation.y;
	v2->ang[2] = v1->Rotation.z;
	v2->pos[0] = v1->Position.x;
	v2->pos[1] = v1->Position.y;
	v2->pos[2] = v1->Position.z;
	a1->DeleteSub = DeleteObject_DynamicCOL;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))DLCObject_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))DLCObject_Display;
}

void LoadStuffInStationSquare(ObjectMaster *a1)
{
	sub_62E980();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, DLCObject_Load);
	setdata_dlc.Distance = 612800.0f;
	if (ObjectsLoaded == false)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -330;
			ent->Position.y = 0;
			ent->Position.z = 1720;
			ent->Index = 70;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.2f;
			ent->Scale.y = 1.2f;
			ent->Scale.z = 1.2f;
			ent->CharIndex = 0;
			ent->NextAction = 4;
			ent->Action = 20;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 317;
			ent->Position.y = 4;
			ent->Position.z = 282;
			ent->Index = 68;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x4000;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.2f;
			ent->Scale.y = 1.2f;
			ent->Scale.z = 1.2f;
			ent->CharIndex = 1;
			ent->Action = 20;
			ent->NextAction = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 224;
			ent->Position.y = 4;
			ent->Position.z = 282;
			ent->Index = 69;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x4000;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.2f;
			ent->Scale.y = 1.2f;
			ent->Scale.z = 1.2f;
			ent->CharIndex = 2;
			ent->NextAction = 0;
			ent->Action = 20;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -525;
			ent->Position.y = 0;
			ent->Position.z = 1500;
			ent->Index = 68;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x4000;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.2f;
			ent->Scale.y = 1.2f;
			ent->Scale.z = 1.2f;
			ent->CharIndex = 3;
			ent->NextAction = 1;
			ent->Action = 20;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -365;
			ent->Position.y = 0;
			ent->Position.z = 1500;
			ent->Index = 70;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x4000;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.2f;
			ent->Scale.y = 1.2f;
			ent->Scale.z = 1.2f;
			ent->CharIndex = 4;
			ent->NextAction = 1;
			ent->Action = 20;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -81;
			ent->Position.y = 65;
			ent->Position.z = 1274;
			ent->Index = 68;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x5555;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.2f;
			ent->Scale.y = 1.2f;
			ent->Scale.z = 1.2f;
			ent->CharIndex = 5;
			ent->NextAction = 1;
			ent->Action = 30;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -1;
			ent->Position.y = 65;
			ent->Position.z = 1231;
			ent->Index = 69;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x5555;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.2f;
			ent->Scale.y = 1.2f;
			ent->Scale.z = 1.2f;
			ent->CharIndex = 6;
			ent->NextAction = 1;
			ent->Action = 30;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -2;
			ent->Position.y = -2;
			ent->Position.z = 1672;
			ent->Index = 68;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x5555;
			ent->Rotation.z = 0;
			ent->Scale.x = 2.4f;
			ent->Scale.y = 2.4f;
			ent->Scale.z = 2.4f;
			ent->CharIndex = 7;
			ent->NextAction = 3;
			ent->Action = 30;
		}
		ObjectsLoaded = true;
	}
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		HMODULE SONICADV_000 = GetModuleHandle(L"SONICADV_000");
		HMODULE SONICADV_001 = GetModuleHandle(L"SONICADV_001");
		HMODULE SONICADV_002 = GetModuleHandle(L"SONICADV_002");
		HMODULE SONICADV_003 = GetModuleHandle(L"SONICADV_003");
		HMODULE SONICADV_501 = GetModuleHandle(L"SONICADV_501");
		HMODULE SONICADV_502 = GetModuleHandle(L"SONICADV_502");
		HMODULE SONICADV_503 = GetModuleHandle(L"SONICADV_503");
		HMODULE SONICADV_504 = GetModuleHandle(L"SONICADV_504");
		HMODULE SONICADV_505 = GetModuleHandle(L"SONICADV_505");
		HMODULE SONICADV_506 = GetModuleHandle(L"SONICADV_506");
		HMODULE SONICADV_507 = GetModuleHandle(L"SONICADV_507");
		HMODULE SONICADV_508 = GetModuleHandle(L"SONICADV_508");
		HMODULE SONICADV_509 = GetModuleHandle(L"SONICADV_509");
		HMODULE SONICADV_510 = GetModuleHandle(L"SONICADV_510");
		HMODULE SONICADV_511 = GetModuleHandle(L"SONICADV_511");
		if (SONICADV_001 != nullptr) ModFailsafe = true;
		if (SONICADV_002 != nullptr) ModFailsafe = true;
		if (SONICADV_003 != nullptr) ModFailsafe = true;
		if (SONICADV_501 != nullptr) ModFailsafe = true;
		if (SONICADV_502 != nullptr) ModFailsafe = true;
		if (SONICADV_503 != nullptr) ModFailsafe = true;
		if (SONICADV_504 != nullptr) ModFailsafe = true;
		if (SONICADV_505 != nullptr) ModFailsafe = true;
		if (SONICADV_506 != nullptr) ModFailsafe = true;
		if (SONICADV_507 != nullptr) ModFailsafe = true;
		if (SONICADV_508 != nullptr) ModFailsafe = true;
		if (SONICADV_509 != nullptr) ModFailsafe = true;
		if (SONICADV_510 != nullptr) ModFailsafe = true;
		if (SONICADV_511 != nullptr) ModFailsafe = true;
		if (ModFailsafe == false)
		{
			MusicList[68].Name = "Xmas98_1";
			MusicList[69].Name = "Xmas98_2";
			MusicList[70].Name = "Xmas98_3";
			helperFunctions.RegisterCommonObjectPVM(Christmas98Textures);
			WriteCall((void*)0x0062F098, LoadStuffInStationSquare);
			WriteCall((void*)0x0062F102, LoadStuffInStationSquare);
			WriteCall((void*)0x004B793E, StopVoicesButMaybeNot);
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (ModFailsafe == false && GameState != 16)
		{
			if (HintTimer > 0) HintTimer--;
		}
		if (CurrentLevel != 26 || GameState == 6 || GameState == 21 || (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission))
		{
			ObjectsLoaded = false;
			ChristmasMusic = 0;
			WriteData<1>((char*)0x0062EEF9, MusicIDs_StationSquare);
		}
	}
}
