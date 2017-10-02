#include "stdafx.h"
#include <SADXModLoader.h>
#include "ATT1.h"
#include <cstdio>

FunctionPointer(void, sub_412D80, (int a1, int a2), 0x412D80);
FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
FunctionPointer(signed int, sub_4570B0, (), 0x4570B0);
FunctionPointer(signed int, sub_49E170, (ObjectMaster *a1), 0x49E170);
FunctionPointer(signed int, sub_49CD60, (ObjectMaster *a1), 0x49CD60);
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
FunctionPointer(void, sub_425800, (int a1), 0x425800);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, FramerateSetting, 0x0389D7DC);
static bool ModFailsafe = false;
static int HintTimer = 0;
static bool HighwayGoal = false;
static bool ChallengeOver = false;
static bool ObjectsLoaded = false;
static int ChallengeTimer = 0;
static int ChallengeAction = false;
char ResultText[100];
SETObjData setdata_dlc = {};

PVMEntry ATT1Textures = { "SONICADV_504", (TexList *)&texlist_att1 };
PVMEntry TimerTextures = { "CON_REGULAR_E", (TexList *)0x00912DF4 };

NJS_TEXANIM TimerTenMinutesTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerTenMinutes = { { HorizontalStretch * 500, VerticalStretch * 436, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerTenMinutesTexanim };

NJS_TEXANIM TimerMinutesTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerMinutes = { { HorizontalStretch * 516, VerticalStretch * 436, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerMinutesTexanim };

NJS_TEXANIM TimerColon1Texanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerColon1 = { { HorizontalStretch * 532, VerticalStretch * 436, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerColon1Texanim };

NJS_TEXANIM TimerTenSecondsTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerTenSeconds = { { HorizontalStretch * 548, VerticalStretch * 436, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerTenSecondsTexanim };

NJS_TEXANIM TimerSecondsTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerSeconds = { { HorizontalStretch * 564, VerticalStretch * 436, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerSecondsTexanim };

NJS_TEXANIM TimerColon2Texanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerColon2 = { { HorizontalStretch * 580, VerticalStretch * 436, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerColon2Texanim };

NJS_TEXANIM TimerMTenSecondsTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerMTenSeconds = { { HorizontalStretch * 596, VerticalStretch * 436, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerMTenSecondsTexanim };

NJS_TEXANIM TimerMSecondsTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerMSeconds = { { HorizontalStretch * 612, VerticalStretch * 436, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerMSecondsTexanim };

char *ATT_Message1[] = {
	"	If you touch the Start Plate,\n	you'll go to Speed Highway!",
	NULL,
};

char *ATT_Message2[] = {
	"	Touch the Goal Plate after\n	Speed Highway is finished.",
	NULL,
};

char *ATT_Message3[] = {
	"	Time Over!\n	Please try again.",
	NULL,
};

char *ATT_Message4[] = {
	"	-CLEAR-\n	Go back to Station Square!",
	NULL,
};

char *ATT_Message5[] = {
	"	AT&T Time Attack Contest\n	-START-",
	NULL,
};

char *ATT_Message6[] = {
	"	You can't continue from here.\n	Please remove the AT&T file.",
	NULL,
};

char *ATT_Message7[] = {
	"	Congratulations!\n	Now saving your clear time.",
	ResultText,
	"\a	The challenge is over.\n	Touch the Start Plate again to restart.",
	NULL,
};

void DLCObject_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		njSetTexture(&texlist_att1);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		if (v1->CharID == 0) ProcessModelNode_AB_Wrapper(&billboard_big, v1->Scale.x);
		if (v1->CharID == 2) ProcessModelNode_AB_Wrapper(&object_00000CE4, v1->Scale.x);
		if (v1->CharID == 3)
		{
			if (v1->Action == 1)
			{
				matlist_00116FA0Z[0].attrflags |= NJD_FLAG_USE_ALPHA;
				if (matlist_00116FA0Z[0].diffuse.argb.a > 8) matlist_00116FA0Z[0].diffuse.argb.a = matlist_00116FA0Z[0].diffuse.argb.a - 8;
			}
			else
			{
				matlist_00116FA0Z[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
				if (matlist_00116FA0Z[0].diffuse.argb.a < 255) matlist_00116FA0Z[0].diffuse.argb.a = matlist_00116FA0Z[0].diffuse.argb.a + 8;
			}
			if (matlist_00116FA0Z[0].diffuse.argb.a > 255) matlist_00116FA0Z[0].diffuse.argb.a = 255;
			ProcessModelNode_AB_Wrapper(&poster_start, v1->Scale.x);
		}
		if (v1->CharID == 4 && HighwayGoal == true)
		{
			if (v1->Action == 1)
			{
				matlist_00116FA0W[0].attrflags |= NJD_FLAG_USE_ALPHA;
				if (matlist_00116FA0W[0].diffuse.argb.a > 8) matlist_00116FA0W[0].diffuse.argb.a = matlist_00116FA0W[0].diffuse.argb.a - 8;
			}
			else
			{
				matlist_00116FA0W[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
				if (matlist_00116FA0W[0].diffuse.argb.a < 255) matlist_00116FA0W[0].diffuse.argb.a = matlist_00116FA0W[0].diffuse.argb.a + 8;
			}
			if (matlist_00116FA0W[0].diffuse.argb.a > 255) matlist_00116FA0W[0].diffuse.argb.a = 255;
			ProcessModelNode_AB_Wrapper(&poster_goal, v1->Scale.x);
		}
		njPopMatrix(1u);
	}
}

void DLCObject_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	Angle v2;
	int v3;
	v3 = (v1->Index) * 16;
	v2 = (v1->Rotation.y + v3) % 65535;
	v1->Rotation.y = v2;
	if (v1->CharIndex == 3 && ChallengeAction == false) v1->Action = 0;
	if (v1->CharIndex == 3 && ChallengeAction == true) v1->Action = 1;
	if (v1->CharIndex == 4 && ChallengeAction == true) v1->Action = 0;
	if (v1->CharIndex == 4 && ChallengeAction == false) v1->Action = 1;
	if (v1->Action == 1 && v1->Scale.x > 0.05f)
	{
		v1->Scale.x = v1->Scale.x*0.95f;
		v1->Scale.y = v1->Scale.y*0.95f;
		v1->Scale.z = v1->Scale.z*0.95f;
	}
	if (v1->Action != 1 && v1->Scale.x < 1.0f)
	{
		v1->Scale.x = v1->Scale.x*1.05f;
		v1->Scale.y = v1->Scale.y*1.05f;
		v1->Scale.z = v1->Scale.z*1.05f;
		if (v1->Scale.y >= 1.0f)
		{
			v1->Scale.x = 1.0f;
			v1->Scale.y = 1.0f;
			v1->Scale.z = 1.0f;
		}
	}
	if (v1->Action != 1 && IsPlayerInsideSphere(&v1->Position, 15))
	{
		if (HintTimer <= 0)
		{
			//Go back to Station Square
			if (v1->CharIndex == 7 && ChallengeAction == true)
			{
				PlaySound(12, 0, 0, 0);
				sub_4B79C0((char *)(&ATT_Message4), 180);
				HighwayGoal = true;
				v1->Action = 1;
				sub_412D80(LevelIDs_StationSquare, 3);
				HintTimer = 120;
			}
			//Start plate
			if (v1->CharIndex == 3 && ChallengeAction == false)
			{
				PlaySound(12, 0, 0, 0);
				sub_4B79C0((char *)(&ATT_Message5), 180);
				HighwayGoal = false;
				ChallengeTimer = 0;
				ChallengeAction = true;
				ChallengeOver = false;
				v1->Action = 1;
				sub_412D80(LevelIDs_SpeedHighway, 0);
				HintTimer = 60;
			}
			//Goal plate
			if (v1->CharIndex == 4 && HighwayGoal == true && ChallengeOver == false)
			{
				v1->Action = 1;
				PlaySound(12, 0, 0, 0);
				snprintf(ResultText, 100, "Your result is:         .");
				snprintf(ResultText + 16, 100 - 16, "%d", TimerTenMinutesTexanim.texid);
				snprintf(ResultText + 17, 100 - 17, "%d", TimerMinutesTexanim.texid);
				snprintf(ResultText + 18, 100 - 18, ":");
				snprintf(ResultText + 19, 100 - 19, "%d", TimerTenSecondsTexanim.texid);
				snprintf(ResultText + 20, 100 - 20, "%d", TimerSecondsTexanim.texid);
				snprintf(ResultText + 21, 100 - 21, ":");
				snprintf(ResultText + 22, 100 - 22, "%d", TimerMTenSecondsTexanim.texid);
				snprintf(ResultText + 23, 100 - 23, "%d", TimerMSecondsTexanim.texid);
				snprintf(ResultText + 24, 100 - 24, ".");
				sub_4B79C0((char *)(&ATT_Message7), 180);
				ChallengeAction = false;
				ChallengeOver = false;
				ChallengeTimer = 0;
				HintTimer = 500;
			}
			//Goal plate (time over)
			if (v1->CharIndex == 4 && ChallengeOver == true)
			{
				v1->Action = 1;
				PlaySound(12, 0, 0, 0);
				sub_4B79C0((char *)(&ATT_Message3), 180);
				ChallengeAction = false;
				ChallengeOver = false;
				ChallengeTimer = 0;
				HintTimer = 300;
			}
			//Poster 1
			if (v1->CharIndex == 6 && CurrentLevel == 26)
			{
				PlaySound(23, 0, 0, 0);
				sub_4B79C0((char *)(&ATT_Message2), 180);
				HintTimer = 60;
			}
			//Poster 2
			if (v1->CharIndex == 5 && CurrentLevel == 26)
			{
				PlaySound(23, 0, 0, 0);
				sub_4B79C0((char *)(&ATT_Message1), 180);
				HintTimer = 60;
			}
			//You can't continue from here
			if (v1->CharIndex == 10)
			{
				PlaySound(23, 0, 0, 0);
				sub_4B79C0((char *)(&ATT_Message6), 180);
				HintTimer = 60;
			}
		}
	}
	if (v1->Scale.x > 0.1f) DLCObject_Display(a1);
}

void DLCObject_Load(ObjectMaster *a1)
{
	Angle Wha;
	NJS_OBJECT *v5;
	EntityData1 *v1;
	v1 = a1->Data1;
	v5 = nullptr;
	//Rotating platform
	if (v1->CharID == 2)
	{
		v5 = sub_49D6C0(&object_00000CE4, a1, (ColFlags)0x10001001);
		v5->scl[0] = 1.0f;
		v5->scl[1] = 1.0f;
		v5->scl[2] = 1.0f;
	}
	//Billboard
	if (v1->CharID == 0 && v1->CharIndex != 7)
	{
		v5 = sub_49D6C0(&billboard_big, a1, (ColFlags)0x20001001);
		v5->scl[0] = v1->Scale.x;
		v5->scl[1] = v1->Scale.y;
		v5->scl[2] = v1->Scale.z;
		v5->ang[0] = v1->Rotation.x;
		v5->ang[1] = v1->Rotation.y;
		v5->ang[2] = v1->Rotation.z;
	}
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))DLCObject_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))DLCObject_Display;
}

void Timer_Display(ObjectMaster *a1)
{
	TimerTenMinutesTexanim.sx = 16 * HorizontalStretch;
	TimerTenMinutesTexanim.sy = 16 * HorizontalStretch;
	TimerMinutesTexanim.sx = 16 * HorizontalStretch;
	TimerMinutesTexanim.sy = 16 * HorizontalStretch;
	TimerColon1Texanim.sx = 16 * HorizontalStretch;
	TimerColon1Texanim.sy = 16 * HorizontalStretch;
	TimerTenSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerTenSecondsTexanim.sy = 16 * HorizontalStretch;
	TimerSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerSecondsTexanim.sy = 16 * HorizontalStretch;
	TimerColon2Texanim.sx = 16 * HorizontalStretch;
	TimerColon2Texanim.sy = 16 * HorizontalStretch;
	TimerMTenSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerMTenSecondsTexanim.sy = 16 * HorizontalStretch;
	TimerMSecondsTexanim.sx = 16 * HorizontalStretch;
	TimerMSecondsTexanim.sy = 16 * HorizontalStretch;
	njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
	njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
	njSetTexture((NJS_TEXLIST*)0x00912DF4);
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
	//Draw timer tenminutes
	TimerTenMinutesTexanim.texid = (((ChallengeTimer / 3600) % 60) / 10) % 10;
	njDrawSprite2D_3(&TimerTenMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer minutes
	TimerMinutesTexanim.texid = ((ChallengeTimer / 3600) % 60) % 10;
	njDrawSprite2D_3(&TimerMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw minute colon
	TimerColon1Texanim.texid = 10;
	njDrawSprite2D_3(&TimerColon1, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer tenseconds
	TimerTenSecondsTexanim.texid = (((ChallengeTimer / 60) % 60) / 10) % 10;
	njDrawSprite2D_3(&TimerTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer seconds
	TimerSecondsTexanim.texid = ((ChallengeTimer / 60) % 60) % 10;
	njDrawSprite2D_3(&TimerSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw minute colon
	TimerColon2Texanim.texid = 10;
	njDrawSprite2D_3(&TimerColon2, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer militenseconds
	TimerMTenSecondsTexanim.texid = (((ChallengeTimer * 5 / 3) % 1000) / 10) % 10;
	njDrawSprite2D_3(&TimerMTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer miliseconds
	TimerMSecondsTexanim.texid = ((ChallengeTimer * 5 / 3) % 1000) % 10;
	njDrawSprite2D_3(&TimerMSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	ClampGlobalColorThing_Thing();
}

void Timer_Main(ObjectMaster *a1)
{
	if (ChallengeAction == true)
		{
			ChallengeTimer++;
			Timer_Display(a1);
		}
		if (((((ChallengeTimer / 3600) % 60) / 10) % 10) >= 1)
		{
		ChallengeOver = true;
		}
}

void Timer_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Timer_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Timer_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void LoadATT1Stuff()
{
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF1, DLCObject_Load);
	ObjectFunc(OF2, Timer_Load);
	setdata_dlc.Distance = 612800.0f;
	//Timer
	obj = LoadObject((LoadObj)2, 3, OF2);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 64;
		ent->Position.y = 64;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
	}
	//Big billboard
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -292;
		ent->Position.y = 50;
		ent->Position.z = 4;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0xC000;
		ent->Rotation.z = 0;
		ent->Scale.x = 3.0f;
		ent->Scale.y = 3.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1848;
		ent->Position.y = -1332;
		ent->Position.z = 385;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x982D;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2382;
		ent->Position.y = -1261;
		ent->Position.z = 902;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x8000;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 3069;
		ent->Position.y = -1122;
		ent->Position.z = 679;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0xC000;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 3883;
		ent->Position.y = -786;
		ent->Position.z = -283;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0xC000;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4405;
		ent->Position.y = -1077;
		ent->Position.z = 773;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x4FA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4167;
		ent->Position.y = -1285;
		ent->Position.z = 261;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 5.0f;
		ent->Scale.y = 5.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 3813;
		ent->Position.y = -1626;
		ent->Position.z = 1710;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x4000;
		ent->Rotation.z = 0;
		ent->Scale.x = 5.0f;
		ent->Scale.y = 5.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 3773;
		ent->Position.y = -1431;
		ent->Position.z = 1710;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x4000;
		ent->Rotation.z = 0;
		ent->Scale.x = 5.0f;
		ent->Scale.y = 5.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1413;
		ent->Position.y = -1203;
		ent->Position.z = 2246;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x4000;
		ent->Rotation.z = 0;
		ent->Scale.x = 11.0f;
		ent->Scale.y = 11.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2950;
		ent->Position.y = -1176;
		ent->Position.z = 3669;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0xC000;
		ent->Rotation.z = 0;
		ent->Scale.x = 5.0f;
		ent->Scale.y = 5.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 767;
		ent->Position.y = -376;
		ent->Position.z = 118;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0xC000;
		ent->Rotation.z = 0;
		ent->Scale.x = 9.0f;
		ent->Scale.y = 9.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4083;
		ent->Position.y = -1458;
		ent->Position.z = 4617;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x69F4;
		ent->Rotation.z = 0;
		ent->Scale.x = 5.0f;
		ent->Scale.y = 5.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4085;
		ent->Position.y = -1478;
		ent->Position.z = 4621;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x69F4;
		ent->Rotation.z = 0;
		ent->Scale.x = 5.0f;
		ent->Scale.y = 5.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 10;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4040;
		ent->Position.y = -1478;
		ent->Position.z = 4595;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x69F4;
		ent->Rotation.z = 0;
		ent->Scale.x = 3.0f;
		ent->Scale.y = 3.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 10;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4125;
		ent->Position.y = -1478;
		ent->Position.z = 4646;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x69F4;
		ent->Rotation.z = 0;
		ent->Scale.x = 3.0f;
		ent->Scale.y = 3.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 10;
		ent->CharID = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4114;
		ent->Position.y = -1500;
		ent->Position.z = 4574;
		ent->Index = 0;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0x69F4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 7;
		ent->CharID = 0;
	}
	//Platform
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4622;
		ent->Position.y = -1340;
		ent->Position.z = -216;
		ent->Index = 2;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 6;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4486;
		ent->Position.y = -1460;
		ent->Position.z = 1668;
		ent->Index = 2;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 6;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 3844;
		ent->Position.y = -1423;
		ent->Position.z = 1696;
		ent->Index = 2;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 6;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 3840;
		ent->Position.y = -1380;
		ent->Position.z = 1640;
		ent->Index = 2;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 6;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 4350;
		ent->Position.y = -1907;
		ent->Position.z = 3987;
		ent->Index = 2;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 6;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 717;
		ent->Position.y = 535;
		ent->Position.z = 18;
		ent->Index = 2;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 6;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 2955;
		ent->Position.y = -1190;
		ent->Position.z = 696;
		ent->Index = 2;
		ent->Rotation.x = 0;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 6;
		ent->CharID = 2;
	}
}

void LoadStuffInSpeedHighway(ObjectMaster *a1)
{
	if (ChallengeAction == true && ChallengeOver == false && CurrentLevel == 4 && CurrentAct == 0 && CurrentCharacter == 0) LoadATT1Stuff();
	sub_4570B0();
}

void LoadEverythingInStationSquare(ObjectMaster *a1)
{
	sub_62E980();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF1, DLCObject_Load);
	ObjectFunc(OF2, Timer_Load);
	setdata_dlc.Distance = 612800.0f;
	if (GameMode == GameModes_Adventure_Field && CurrentCharacter == 0)
	{
		if (ObjectsLoaded == false)
		{
			//Timer
			obj = LoadObject((LoadObj)2, 3, OF2);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 64;
				ent->Position.y = 64;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
			}
			//Poster 1
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 366;
				ent->Position.y = 26;
				ent->Position.z = 1303;
				ent->Index = 0;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0xC000;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.3f;
				ent->Scale.y = 1.3f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 6;
				ent->CharID = 0;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 366;
				ent->Position.y = 26;
				ent->Position.z = 1435;
				ent->Index = 0;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0xC000;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.3f;
				ent->Scale.y = 1.3f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 5;
				ent->CharID = 0;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 347;
				ent->Position.y = 38;
				ent->Position.z = 1370;
				ent->Index = 0;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0xC000;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.3f;
				ent->Scale.y = 1.3f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 3;
				ent->CharID = 3;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 327;
				ent->Position.y = 38;
				ent->Position.z = 1370;
				ent->Index = 0;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0xC000;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.3f;
				ent->Scale.y = 1.3f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 4;
				ent->CharID = 4;
			}
			ObjectsLoaded = true;
		}
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
		if (SONICADV_505 != nullptr) ModFailsafe = true;
		if (SONICADV_506 != nullptr) ModFailsafe = true;
		if (SONICADV_507 != nullptr) ModFailsafe = true;
		if (SONICADV_508 != nullptr) ModFailsafe = true;
		if (SONICADV_509 != nullptr) ModFailsafe = true;
		if (SONICADV_510 != nullptr) ModFailsafe = true;
		if (SONICADV_511 != nullptr) ModFailsafe = true;
		if (ModFailsafe == false)
		{
			helperFunctions.RegisterCommonObjectPVM(ATT1Textures);
			helperFunctions.RegisterCommonObjectPVM(TimerTextures);
			WriteCall((void*)0x00415A6D, LoadStuffInSpeedHighway);
			WriteCall((void*)0x0062F098, LoadEverythingInStationSquare);
			WriteCall((void*)0x0062F102, LoadEverythingInStationSquare);
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (ModFailsafe == false && GameState != 16)
		{
			if (HintTimer > 0) HintTimer--;
			if (GameState == 6 || CurrentLevel != 26 || GameMode != GameModes_Adventure_Field)
			{
				ObjectsLoaded = false;
			}
			if (GameMode != GameModes_Adventure_Field && GameMode != GameModes_Adventure_ActionStg)
			{
				HighwayGoal = false;
				ChallengeAction = false;
				ChallengeOver = false;
				ChallengeTimer = 0;
				ObjectsLoaded = false;
			}
			if (CurrentLevel == 4 && GameState == 9 && HighwayGoal == false)
			{
				ChallengeAction = false;
				ChallengeOver = false;
				ChallengeTimer = 0;
				ObjectsLoaded = false;
			}
		}
	}
}