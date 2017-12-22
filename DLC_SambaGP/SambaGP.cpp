#include <SADXModLoader.h>
#include "SambaDLC.h"

FunctionPointer(void, sub_412D80, (int a1, int a2), 0x412D80);
FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);

HMODULE ADV00MODELS = GetModuleHandle(L"ADV00MODELS");

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

static bool MessageOn = false;
static bool ObjectsLoaded = false;
static bool ModFailsafe = false;
static int HintTimer = 0;

SETObjData setdata_dlc = {};

char *SambaGPMessage0[] = {
	"	Samba GP\n	START!",
	NULL,
};

char *SambaGPMessage1[] = {
	"	Twinkle Circuit\n	Samba GP Grand Opening!",
	NULL,
};

char *SambaGPMessage2[] = {
	"	The contest is over,\n	but you can still play the course.",
	NULL,
};

char *SambaGPMessage3[] = {
	"	Collecting the rings increases\n	bumper car acceleration.",
	NULL,
};

PVMEntry SambaGPTextures = { "SONICADV_511", (TexList *)&texlist_sambagp };

void CallSambaCircuit()
{
	int CircuitID = 0;
	if (CurrentAct == 3)
	{
		if (CurrentCharacter == 0) WriteData<1>((char*)0x004DAB4E, 0x57); else WriteData<1>((char*)0x004DAB4E, 0x19);
		if (CurrentCharacter == 0) CircuitID = 2;
		if (CurrentCharacter == 2) CircuitID = 1;
		if (CurrentCharacter == 3) CircuitID = 3;
		if (CurrentCharacter == 5) CircuitID = 4;
		if (CurrentCharacter == 6) CircuitID = 5;
		if (CurrentCharacter == 7) CircuitID = 0;
		SonicSSStartArray[11].Position.x = 635;
		SonicSSStartArray[11].Position.y = 1.4f;
		SonicSSStartArray[11].Position.z = 1570;
		SonicSSStartArray[11].YRot = NJM_DEG_ANG(180);

		TailsSSStartArray[6].Position.x = 635;
		TailsSSStartArray[6].Position.y = 1.4f;
		TailsSSStartArray[6].Position.z = 1570;
		TailsSSStartArray[6].YRot = NJM_DEG_ANG(180);

		KnucklesSSStartArray[5].Position.x = 635;
		KnucklesSSStartArray[5].Position.y = 1.4f;
		KnucklesSSStartArray[5].Position.z = 1570;
		KnucklesSSStartArray[5].YRot = NJM_DEG_ANG(180);

		AmySSStartArray[3].Position.x = 635;
		AmySSStartArray[3].Position.y = 1.4f;
		AmySSStartArray[3].Position.z = 1570;
		AmySSStartArray[3].YRot = NJM_DEG_ANG(180);

		BigSSStartArray[4].Position.x = 635;
		BigSSStartArray[4].Position.y = 1.4f;
		BigSSStartArray[4].Position.z = 1570;
		BigSSStartArray[4].YRot = NJM_DEG_ANG(180);

		E102SSStartArray[5].Position.x = 635;
		E102SSStartArray[5].Position.y = 1.4f;
		E102SSStartArray[5].Position.z = 1570;
		E102SSStartArray[5].YRot = NJM_DEG_ANG(180);
		LastLevel = 26;
		LastAct = 3;
		
		GetCharacterID(0);
		SetLevelEntrance(((unsigned int)0x2300 >> 4) & 0xF);
		camerahax_adventurefields();
		sub_412D80(LevelIDs_TwinkleCircuit, CircuitID);
	}
	else
	{
		WriteData<1>((char*)0x004DAB4E, 0x19);

		SonicSSStartArray[11].Position.x = 757.7f;
		SonicSSStartArray[11].Position.y = 50.0f;
		SonicSSStartArray[11].Position.z = 1747.0f;
		SonicSSStartArray[11].YRot = 0x4000;

		TailsSSStartArray[6].Position.x = 757.7f;;
		TailsSSStartArray[6].Position.y = 50.0f;
		TailsSSStartArray[6].Position.z = 1747.0f;
		TailsSSStartArray[6].YRot = 0x4000;

		KnucklesSSStartArray[5].Position.x = 757.7f;;
		KnucklesSSStartArray[5].Position.y = 50.0f;
		KnucklesSSStartArray[5].Position.z = 1747.0f;
		KnucklesSSStartArray[5].YRot = 0x4000;

		AmySSStartArray[3].Position.x = 757.7f;;
		AmySSStartArray[3].Position.y = 50.0f;
		AmySSStartArray[3].Position.z = 1747.0f;
		AmySSStartArray[3].YRot = 0x4000;

		BigSSStartArray[4].Position.x = 757.7f;;
		BigSSStartArray[4].Position.y = 50.0f;
		BigSSStartArray[4].Position.z = 1747.0f;
		BigSSStartArray[4].YRot = 0x4000;

		E102SSStartArray[5].Position.x = 757.7f;;
		E102SSStartArray[5].Position.y = 50.0f;
		E102SSStartArray[5].Position.z = 1747.0f;
		E102SSStartArray[5].YRot = 0x4000;

		LastLevel = 26;
		LastAct = 5;

		GetCharacterID(0);
		SetLevelEntrance((unsigned int)(0x2300 >> 4) & 0xF);
		camerahax_adventurefields();
		sub_412D80(LevelIDs_TwinkleCircuit, 0);
	}
}

void QuitTwinkleCircuit()
{
	if (CurrentAct == 0) StartLevelCutscene(1);
	else
	{
		GetCharacterID(0);
		SetLevelEntrance((unsigned int)(0x2300 >> 4) & 0xF);
		sub_412D80(26, 3);
	}
}

void SambaGate_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_sambagp);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njRotateY(0, 0xFFFFC000);
		ProcessModelNode_AB_Wrapper(&object_00000EF8, 1.0f);
		njPopMatrix(1u);
	}
}

void SambaGate_Main(ObjectMaster *a1)
{
	DataPointer(char, off_2BBF4A0, 0x02BBF450);
	NJS_VECTOR WarpPosition = { 698, 1.4f, 1600 };
	if (CurrentLevel == 26 && CurrentAct == 3)
	{
		if (MessageOn == false && IsPlayerInsideSphere(&WarpPosition, 25))
		{
			MessageOn = true;
			sub_4B79C0((char *)(&SambaGPMessage0), 180);
		}
		if (!IsPlayerInsideSphere(&WarpPosition, 25)) MessageOn = false;
		if (IsPlayerInsideSphere(&WarpPosition, 25))
		{
			CallSambaCircuit();
		}
		SambaGate_Display(a1);
	}
}

void LoadSambaGate(ObjectMaster *a1)
{
	ObjectMaster *v1; // esi@1
	EntityData1 *v3; // edi@1
	NJS_OBJECT *v4; // eax@2
	v4 = sub_49D6C0(&object_00000EF8, a1, (ColFlags)0x20001001);
	v4->scl[0] = 1.0f;
	v4->scl[1] = 1.0f;
	v4->scl[2] = 1.0f;
	a1->DeleteSub = DeleteObject_DynamicCOL;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))SambaGate_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))SambaGate_Display;
}

void Poster_Display(ObjectMaster *a1)
{
	Angle v2;
	EntityData1 *v1;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_sambagp);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		v2 = v1->Rotation.y;
		njRotateY(0, v2);
		ProcessModelNode_AB_Wrapper(&poster1, v1->Scale.x);
		njPopMatrix(1u);
	}
}

void Poster_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (v1->CharID == CurrentAct)
	{
		if (IsPlayerInsideSphere(&v1->Position, 15))
		{
			if (HintTimer <= 0)
			{
				PlaySound(6, 0, 0, 0);
				if (v1->CharIndex == 0) sub_4B79C0((char *)(&SambaGPMessage1), 180);
				if (v1->CharIndex == 1) sub_4B79C0((char *)(&SambaGPMessage2), 180);
				if (v1->CharIndex == 2) sub_4B79C0((char *)(&SambaGPMessage3), 180);
				HintTimer = 120;
			}
		}
		Poster_Display(a1);
	}
}

void LoadPoster(ObjectMaster *a1)
{
	a1->DeleteSub = DeleteObject_DynamicCOL;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Poster_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Poster_Display;
}

void LoadSambaGateEntry(ObjectMaster *a1)
{
	sub_62E980();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF1, LoadSambaGate); // Samba Gate
	ObjectFunc(OF2, LoadPoster); // Samba Poster
	setdata_dlc.Distance = 612800.0f;
	if ((GameMode == GameModes_Adventure_Field || GameMode == GameModes_Mission) && ObjectsLoaded == false)
	{
		//Act 1
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 263;
			ent->Position.y = 21;
			ent->Position.z = 832;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
			ent->CharID = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 263;
			ent->Position.y = 21;
			ent->Position.z = 773;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
			ent->CharID = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 422;
			ent->Position.y = 26;
			ent->Position.z = 730;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
			ent->CharID = 0;
		}
		//Act 2
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 126;
			ent->Position.y = 163;
			ent->Position.z = 1077;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xE16C;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
			ent->CharID = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -279;
			ent->Position.y = 163;
			ent->Position.z = 1285;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x438E;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
			ent->CharID = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -545;
			ent->Position.y = 48;
			ent->Position.z = 1226;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x4000;
			ent->Rotation.z = 0;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 2.0f;
			ent->CharIndex = 0;
			ent->CharID = 1;
		}
		//Act 4
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -175;
			ent->Position.y = 12;
			ent->Position.z = 1743;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x416C;
			ent->Rotation.z = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->CharIndex = 0;
			ent->CharID = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 698;
			ent->Position.y = 0;
			ent->Position.z = 1600;
			ent->Rotation.y = 0xC000;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 109;
			ent->Position.y = 47;
			ent->Position.z = 1344;
			ent->Rotation.y = 0x127D;
			ent->Scale.x = 1.5f;
			ent->Scale.y = 1.5f;
			ent->Scale.z = 1.5f;
			ent->CharIndex = 0;
			ent->CharID = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -54;
			ent->Position.y = 49;
			ent->Position.z = 1426;
			ent->Rotation.y = 0x127D;
			ent->Scale.x = 1.5f;
			ent->Scale.y = 1.5f;
			ent->Scale.z = 1.5f;
			ent->CharIndex = 0;
			ent->CharID = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 410;
			ent->Position.y = 23;
			ent->Position.z = 1233;
			ent->Rotation.y = 0x8B60;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 2.0f;
			ent->CharIndex = 0;
			ent->CharID = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 510;
			ent->Position.y = 17;
			ent->Position.z = 1657;
			ent->Rotation.y = 0x8000;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 2.0f;
			ent->CharIndex = 1;
			ent->CharID = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 577;
			ent->Position.y = 17;
			ent->Position.z = 1657;
			ent->Rotation.y = 0x8000;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 2.0f;
			ent->CharIndex = 2;
			ent->CharID = 3;
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
		if (SONICADV_509 != nullptr) ModFailsafe = true;
		if (SONICADV_510 != nullptr) ModFailsafe = true;
		if (ModFailsafe == false)		
		{
			helperFunctions.RegisterCommonObjectPVM(SambaGPTextures);
			WriteCall((void*)0x004DB126, QuitTwinkleCircuit);
			WriteCall((void*)0x0062F098, LoadSambaGateEntry);
			WriteCall((void*)0x0062F102, LoadSambaGateEntry);
			WriteCall((void*)0x00640684, CallSambaCircuit);
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (ModFailsafe == false && CurrentLevel == 26 && GameState != 16)
		{
			if (HintTimer > 0) HintTimer--;
		}
		if (CurrentLevel != 26 || GameState == 6 || GameState == 21 || (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Mission))
		{
			ObjectsLoaded = false;
		}
	}
}