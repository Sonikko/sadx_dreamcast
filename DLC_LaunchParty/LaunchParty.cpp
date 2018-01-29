#include <SADXModLoader.h>
#include "Balloon.h"
#include <IniFile.hpp>

FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);

DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(HWND, WindowHandle, 0x03D0FD30);

static bool ModFailsafe = false;

std::string DLCMode = "US";
static int HintTimer = 0;
static bool ObjectsLoaded = false;
static bool ForceSADXMode = false;

SETObjData setdata_dlc = {};

PVMEntry LaunchPartyUSTextures = { "SONICADV_501", (TexList *)&texlist_launch };
PVMEntry LaunchPartyEUTextures = { "SONICADV_502", (TexList *)&texlist_launch };
PVMEntry LaunchPartyJPTextures = { "SONICADV_503", (TexList *)&texlist_launch };

char *LaunchPartyMessage1[] = {
	"\aThank you for choosing Sonic!\nFrom Sonic Team.",
	NULL,
};

char *LaunchPartyMessage2[] = {
	"\aWelcome to the Dreamcast Launch!\nThis is just the beginning.",
	NULL,
};

char *LaunchPartyMessage3[] = {
	"\aFrom all of us on the Sonic Team,\nThank you very much!",
	NULL,
};

char *LaunchPartyMessage4_US[] = {
	"\aUS Dreamcast Launch 9-9-99!\nThank you for supporting us! ",
	NULL,
};

char *LaunchPartyMessage4_EU[] = {
	"\aEU Dreamcast Launch 14-10-99!\nThank you for supporting us! ",
	NULL,
};

char *LaunchPartyMessage5[] = {
	"\aLook for more cool stuff online!\nYou ain't seen nothing yet!",
	NULL,
};

char *LaunchPartyMessage6[] = {
	"\aWorld Rankings, Download files\nand more only on our website.",
	NULL,
};

void Poster_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_launch);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y+0xC000;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		njScale(0, v1->Scale.z, v1->Scale.y, v1->Scale.x);
		ProcessModelNode_AB_Wrapper(&poster, v1->Scale.x);
		njPopMatrix(1u);
	}
}

void Poster_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	if (v1->NextAction == CurrentAct)
	{
		if (IsPlayerInsideSphere(&v1->Position, 15))
		{
			if (HintTimer <= 0)
			{
				if (v1->CharIndex == 0) sub_4B79C0((char *)(&LaunchPartyMessage1), 180);
				if (v1->CharIndex == 1) sub_4B79C0((char *)(&LaunchPartyMessage2), 180);
				if (v1->CharIndex == 2) sub_4B79C0((char *)(&LaunchPartyMessage3), 180);
				if (v1->CharIndex == 3 && DLCMode == "US") sub_4B79C0((char *)(&LaunchPartyMessage4_US), 180);
				if (v1->CharIndex == 3 && DLCMode == "Europe") sub_4B79C0((char *)(&LaunchPartyMessage4_EU), 180);
				if (v1->CharIndex == 3 && DLCMode == "Japan") sub_4B79C0((char *)(&LaunchPartyMessage4_US), 180);
				if (v1->CharIndex == 4) sub_4B79C0((char *)(&LaunchPartyMessage5), 180);
				if (v1->CharIndex == 5) sub_4B79C0((char *)(&LaunchPartyMessage6), 180);
				HintTimer = 120;
			}
		}
		Poster_Display(a1);
	}
}

void Poster_Load(ObjectMaster *a1)
{
	a1->DeleteSub = DeleteObject_DynamicCOL;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Poster_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Poster_Display;
}

void Poster_Colli_Load(ObjectMaster *a1)
{
	Angle Wha;
	EntityData1* v1;
	NJS_OBJECT* v5;
	v1 = a1->Data1;
	if (v1->NextAction == CurrentAct)
	{
		Wha = v1->Rotation.y + 0xC000;
		v1->Rotation.y = Wha;
		v5 = sub_49D6C0(&poster_colli, a1, (ColFlags)0x20001001);
		v5->scl[0] = 1.0f;
		v5->scl[1] = 1.0f;
		v5->scl[2] = 1.0f;
		a1->DeleteSub = DeleteObject_DynamicCOL;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))nullsub;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))nullsub;
	}
}

void Balloons_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_launch);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		ProcessModelNode_C(&object_0000180C, (QueuedModelFlagsB)4, v1->Scale.x);
		//ProcessModelNode_AB_Wrapper(&object_0000180C, v1->Scale.x);
		njPopMatrix(1u);
	}
}

void Balloons_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	int SpeedX;
	int SpeedY;
	int SpeedZ;
	Angle v2;
	Angle v3;
	Angle v4;
	NJS_OBJECT *v5; // eax@2
	v1 = a1->Data1;
	if (v1->NextAction == CurrentAct)
	{
		SpeedX = (v1->Action) * 16;
		SpeedY = (v1->CharID) * 16;
		SpeedZ = (v1->CharIndex) * 16;
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		v2 = (v2 + int(SpeedX)) % 65535;
		v3 = (v3 + int(SpeedY)) % 65535;
		v4 = (v4 + int(SpeedZ)) % 65535;
		v1->Rotation.x = v2;
		v1->Rotation.y = v3;
		v1->Rotation.z = v4;
		if (IsPlayerInsideSphere(&v1->Position, 15))
		{
			if (HintTimer <= 0)
			{
				PlaySound(23, 0, 0, 0);
				sub_4B79C0((char *)(&LaunchPartyMessage1), 180);
				HintTimer = 180;
			}
		}
		Balloons_Display(a1);
	}
}

void Balloons_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Balloons_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Balloons_Display;
	a1->DeleteSub = DeleteObject_DynamicCOL;
}

void LoadEverythingInStationSquare(ObjectMaster *a1)
{
	sub_62E980();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Balloons_Load);
	ObjectFunc(OF1, Poster_Load);
	ObjectFunc(OF2, Poster_Colli_Load);
	setdata_dlc.Distance = 612800.0f;
	if (ObjectsLoaded == false)
	{
//Act 5 (CurrentAct 4)
		//Posters
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -297;
			ent->Position.y = 19;
			ent->Position.z = 1627;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharIndex = 0;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 0.5f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 4;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -370;
			ent->Position.y = 1;
			ent->Position.z = 1617;
			ent->Rotation.x = 0x4000;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0xC000;
			ent->CharIndex = 1;
			ent->Scale.x = 2.0f;
			ent->Scale.y = 0.5f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 4;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -342;
			ent->Position.y = 26;
			ent->Position.z = 2016;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x8000;
			ent->Rotation.z = 0;
			ent->CharIndex = 2;
			ent->Scale.x = 3.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 4;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -242;
			ent->Position.y = 25;
			ent->Position.z = 2016;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x8000;
			ent->Rotation.z = 0;
			ent->CharIndex = 5;
			ent->Scale.x = 3.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 4;
		}
//Act 4 (CurrentAct 3)
		//Poster collision
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 285;
			ent->Position.y = 13;
			ent->Position.z = 1682;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x927D;
			ent->Rotation.z = 0;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF2);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 181;
			ent->Position.y = 13;
			ent->Position.z = 1731;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x927D;
			ent->Rotation.z = 0;
			ent->NextAction = 3;
		}
		//Posters
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 27;
			ent->Position.y = 91;
			ent->Position.z = 1385;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x1333;
			ent->Rotation.z = 0;
			ent->CharIndex = 1;
			ent->Scale.x = 3.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -139;
			ent->Position.y = 36;
			ent->Position.z = 1676;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x4000;
			ent->Rotation.z = 0;
			ent->CharIndex = 3;
			ent->Scale.x = 3.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 320;
			ent->Position.y = 64;
			ent->Position.z = 1365;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->CharIndex = 4;
			ent->Scale.x = 3.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 260;
			ent->Position.y = 112;
			ent->Position.z = 1040;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharIndex = 5;
			ent->Scale.x = 7.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 629;
			ent->Position.y = 128;
			ent->Position.z = 962;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->CharIndex = 1;
			ent->Scale.x = 7.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 285;
			ent->Position.y = 13;
			ent->Position.z = 1682;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x927D;
			ent->Rotation.z = 0;
			ent->CharIndex = 1;
			ent->Scale.x = 3.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 181;
			ent->Position.y = 13;
			ent->Position.z = 1731;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x927D;
			ent->Rotation.z = 0;
			ent->CharIndex = 2;
			ent->Scale.x = 3.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		//Balloons
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 150;
			ent->Position.y = 55;
			ent->Position.z = 1514;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 3;
			ent->CharID = 4;
			ent->CharIndex = 5;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 66;
			ent->Position.y = 55;
			ent->Position.z = 1560;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 1;
			ent->CharID = 0;
			ent->CharIndex = 1;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 308;
			ent->Position.y = 55;
			ent->Position.z = 1630;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 0;
			ent->CharID = 0;
			ent->CharIndex = 1;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 317;
			ent->Position.y = 55;
			ent->Position.z = 1244;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 7;
			ent->CharID = 8;
			ent->CharIndex = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 208;
			ent->Position.y = 55;
			ent->Position.z = 1120;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 1;
			ent->CharID = 0;
			ent->CharIndex = 1;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 3;
		}
//Act 1 (CurrentAct 0)
		//Posters
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 270;
			ent->Position.y = 89;
			ent->Position.z = 252;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharIndex = 1;
			ent->Scale.x = 7.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 51;
			ent->Position.y = 16;
			ent->Position.z = 727;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharIndex = 0;
			ent->Scale.x = 0.9f;
			ent->Scale.y = 0.3f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			if (ForceSADXMode == false)
			{
				ent->Position.x = 205;
				ent->Position.y = 72;
				ent->Position.z = 1011;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0x8000;
				ent->Rotation.z = 0;
			}
			else
			{
				ent->Position.x = 102;
				ent->Position.y = 79;
				ent->Position.z = 768;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0x4000;
				ent->Rotation.z = 0;
			}
			ent->CharIndex = 3;
			ent->Scale.x = 7.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 700;
			ent->Position.y = 65;
			ent->Position.z = 829;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC000;
			ent->Rotation.z = 0;
			ent->CharIndex = 4;
			ent->Scale.x = 7.0f;
			ent->Scale.y = 2.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 0;
		}
		//Balloons
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 263;
			ent->Position.y = 55;
			ent->Position.z = 670;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 1;
			ent->CharID = 2;
			ent->CharIndex = 1;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 263;
			ent->Position.y = 55;
			ent->Position.z = 803;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 3;
			ent->CharID = 2;
			ent->CharIndex = 7;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 77;
			ent->Position.y = 308;
			if (ForceSADXMode == false) ent->Position.z = 270; else ent->Position.z = 340;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 3;
			ent->CharID = 9;
			ent->CharIndex = 1;
			ent->Scale.x = 4.0f;
			ent->Scale.y = 4.0f;
			ent->Scale.z = 4.0f;
			ent->NextAction = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 458;
			ent->Position.y = 308;
			if (ForceSADXMode == false) ent->Position.z = 263; else ent->Position.z = 333;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 1;
			ent->CharID = 0;
			ent->CharIndex = 1;
			ent->Scale.x = 4.0f;
			ent->Scale.y = 4.0f;
			ent->Scale.z = 4.0f;
			ent->NextAction = 0;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = 564;
			ent->Position.y = 55;
			ent->Position.z = 758;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 1;
			ent->CharID = 2;
			ent->CharIndex = 1;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 0;
		}
//Act 2 (CurrentAct 1)
		//Posters
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -254;
			ent->Position.y = 79;
			ent->Position.z = 1239;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x2666;
			ent->Rotation.z = 0;
			ent->CharIndex = 1;
			ent->Scale.x = 1.4f;
			ent->Scale.y = 0.7f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -336;
			ent->Position.y = 20;
			ent->Position.z = 1382;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0xC16C;
			ent->Rotation.z = 0;
			ent->CharIndex = 5;
			ent->Scale.x = 1.4f;
			ent->Scale.y = 0.7f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -445;
			ent->Position.y = 42;
			ent->Position.z = 1502;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x8000;
			ent->Rotation.z = 0;
			ent->CharIndex = 4;
			ent->Scale.x = 3.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -543;
			ent->Position.y = 46;
			ent->Position.z = 1224;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0x4000;
			ent->Rotation.z = 0;
			ent->CharIndex = 3;
			ent->Scale.x = 2.1f;
			ent->Scale.y = 0.6f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -437;
			ent->Position.y = 53;
			ent->Position.z = 906;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharIndex = 2;
			ent->Scale.x = 4.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF1);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -416;
			ent->Position.y = 36;
			ent->Position.z = 2020;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->CharIndex = 3;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		//Balloons
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -78;
			ent->Position.y = 122;
			ent->Position.z = 1257;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 2;
			ent->CharID = 2;
			ent->CharIndex = 1;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -15;
			ent->Position.y = 122;
			ent->Position.z = 1223;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 2;
			ent->CharID = 0;
			ent->CharIndex = 0;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -610;
			ent->Position.y = 65;
			ent->Position.z = 979;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 0;
			ent->CharID = 1;
			ent->CharIndex = 1;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -549;
			ent->Position.y = 65;
			ent->Position.z = 908;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 3;
			ent->CharID = 1;
			ent->CharIndex = 1;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -364;
			ent->Position.y = 158;
			ent->Position.z = 810;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 3;
			ent->CharID = 1;
			ent->CharIndex = 2;
			ent->Scale.x = 5.0f;
			ent->Scale.y = 5.0f;
			ent->Scale.z = 5.0f;
			ent->NextAction = 1;
		}
		obj = LoadObject((LoadObj)2, 3, OF0);
		obj->SETData.SETData = &setdata_dlc;
		if (obj)
		{
			ent = obj->Data1;
			ent->Position.x = -416;
			ent->Position.y = 36;
			ent->Position.z = 2020;
			ent->Rotation.x = 0;
			ent->Rotation.y = 0;
			ent->Rotation.z = 0;
			ent->Action = 3;
			ent->CharID = 4;
			ent->CharIndex = 2;
			ent->Scale.x = 1.0f;
			ent->Scale.y = 1.0f;
			ent->Scale.z = 1.0f;
			ent->NextAction = 1;
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
			//Config stuff
			const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
			DLCMode = config->getString("", "Region", "US");
			ForceSADXMode = config->getBool("", "ForceSADXMode", false);
			delete config;
			if (DLCMode == "US") helperFunctions.RegisterCommonObjectPVM(LaunchPartyUSTextures);
			if (DLCMode == "Europe") helperFunctions.RegisterCommonObjectPVM(LaunchPartyEUTextures);
			if (DLCMode == "Japan") helperFunctions.RegisterCommonObjectPVM(LaunchPartyJPTextures);
			WriteCall((void*)0x0062F098, LoadEverythingInStationSquare);
			WriteCall((void*)0x0062F102, LoadEverythingInStationSquare);
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
		if (CurrentLevel != 26 || GameState == 6 || GameState == 21)
		{
			ObjectsLoaded = false;
		}
	}
}