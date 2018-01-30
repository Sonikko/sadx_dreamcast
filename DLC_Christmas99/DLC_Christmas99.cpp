#include <SADXModLoader.h>
#include "DLC_Christmas99.h"
#include <IniFile.hpp>

FunctionPointer(void, sub_412D80, (int a1, int a2), 0x412D80);
FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(signed int, sub_4570B0, (), 0x4570B0);
FunctionPointer(void, sub_425800, (int a1), 0x425800);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
DataPointer(HWND, WindowHandle, 0x03D0FD30);

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

static bool ForceSADXMode = false;
static bool ObjectsLoaded = false;
static bool ModFailsafe = false;
static int ChristmasMusic = 0;
static int HintTimer = 0;

SETObjData setdata_dlc = {};

char *Christmas99Message0[] = {
	"	Merry X'mas!!\n	Please keep in touch with Sonic!",
	NULL,
};

char *Christmas99Message1[] = {
	"	Merry X'mas!!\n	Best wishes!",
	NULL,
};

char *Christmas99Message2[] = {
	"	Merry X'mas!!\n	Happy New Year!",
	NULL,
};

char *Christmas99Message3[] = {
	"	Merry X'mas!!\n	Countdown to year 2000!",
	NULL,
};

PVMEntry Christmas99Textures = { "SONICADV_509", (TexList *)&texlist_christmas };

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
		ProcessModelNode_AB_Wrapper(&object_00001990_1, 1.0f);
		ProcessModelNode_AB_Wrapper(&object_00001990_2, 1.0f);
		DrawQueueDepthBias = 8000.0f;
		ProcessModelNode_A_Wrapper(&object_00001990_3, (QueuedModelFlagsB)0, 1.0f);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
	}
}

void DLCObject_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (CurrentLevel == 26)
	{
		if (v1->Action == CurrentLevel && v1->NextAction == CurrentAct)
		{
			if (IsPlayerInsideSphere(&v1->Position, 25))
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
					if (v1->Index == 70)
					{
						if (GetTimeOfDay() != 0 && ChristmasMusic != 2)
						{
							StopMusic();
							sub_425800(MusicIDs_nights_s);
							ChristmasMusic = 2;
							WriteData<1>((char*)0x0062EEF9, MusicIDs_nights_s);
						}
						if (GetTimeOfDay() == 0 && ChristmasMusic != 1)
						{
							StopMusic();
							sub_425800(MusicIDs_nights_a);
							ChristmasMusic = 1;
							WriteData<1>((char*)0x0062EEF9, MusicIDs_nights_a);
						}
					}
					if (v1->CharIndex == 0) sub_4B79C0((char *)(&Christmas99Message0), 180);
					if (v1->CharIndex == 1) sub_4B79C0((char *)(&Christmas99Message1), 180);
					if (v1->CharIndex == 2) sub_4B79C0((char *)(&Christmas99Message2), 180);
					if (v1->CharIndex == 3) sub_4B79C0((char *)(&Christmas99Message3), 180);
					HintTimer = 180;
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
	v2 = sub_49D6C0(&object_00001990, a1, (ColFlags)0x20001001);
	v2->scl[0] = 1.0f;
	v2->scl[1] = 1.0f;
	v2->scl[2] = 1.0f;
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
	if ((GameMode == GameModes_Adventure_Field || GameMode == GameModes_Mission) && ObjectsLoaded == false)
	{
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -23;
			if (ForceSADXMode == false) ent->Position.y = 2; else ent->Position.y = -1;
			ent->Position.z = 1673;
			ent->Index = 68;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
			ent->Action = 26;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -10;
			ent->Position.y = 67;
			ent->Position.z = 1306;
			ent->Index = 68;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 1;
			ent->Action = 26;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -453;
			ent->Position.y = -2;
			ent->Position.z = 1406;
			ent->Index = 70;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 2;
			ent->Action = 26;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 265;
			if (ForceSADXMode == false) ent->Position.y = 1; else ent->Position.y = -1;
			if (ForceSADXMode == false) ent->Position.z = 668; else ent->Position.z = 712;
			ent->Index = 70;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 3;
			ent->Action = 26;
			ent->NextAction = 0;
		}
		ObjectsLoaded = true;
	}
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions& helperFunctions)
	{
		//Config stuff
		const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
		ForceSADXMode = config->getBool("", "ForceSADXMode", false);
		delete config;
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
		if (SONICADV_000 != nullptr) ModFailsafe = true;
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
		if (SONICADV_510 != nullptr) ModFailsafe = true;
		if (SONICADV_511 != nullptr) ModFailsafe = true;
		if (ModFailsafe == false)
		{
			helperFunctions.RegisterCommonObjectPVM(Christmas99Textures);
			WriteCall((void*)0x0062F098, LoadStuffInStationSquare);
			WriteCall((void*)0x0062F102, LoadStuffInStationSquare);
			WriteCall((void*)0x004B793E, StopVoicesButMaybeNot);
		}
		else
		{
			MessageBoxA(WindowHandle, "Please enable only one DLC mod at a time. The DLC mod will not function.",
				"DLC mods error: more than one mod enabled", MB_OK | MB_ICONERROR);
			return;
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
