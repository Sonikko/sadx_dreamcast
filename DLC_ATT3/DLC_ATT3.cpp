#include "stdafx.h"
#include <SADXModLoader.h>
#include "ATT3.h"
#include <cstdio>

FunctionPointer(void, sub_595210, (ObjectMaster *a1), 0x595210);
FunctionPointer(void, sub_412D80, (int a1, int a2), 0x412D80);
FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
FunctionPointer(signed int, sub_4570B0, (), 0x4570B0);
FunctionPointer(void, sub_52F240, (), 0x52F240);
FunctionPointer(signed int, sub_49E170, (ObjectMaster *a1), 0x49E170);
FunctionPointer(signed int, sub_49CD60, (ObjectMaster *a1), 0x49CD60);
FunctionPointer(NJS_OBJECT*, sub_49D6C0, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
FunctionPointer(void, sub_425800, (int a1), 0x425800);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, FramerateSetting, 0x0389D7DC);
static bool ModFailsafe = false;
static int HintTimer = 0;
static bool Gate1 = false;
static bool Gate2 = false;
static bool Gate3 = false;
static bool Gate4 = false;
static bool Gate5 = false;
static bool Gate6 = false;
static bool Gate7 = false;
static bool Gate8 = false;
static bool Gate9 = false;
static bool Gate10 = false;
static int CollectedAll = 0;
static bool ChallengeOver = false;
static bool ObjectsLoaded = false;
static int ChallengeTimer = 0;
static int ChallengeAction = false;
char ResultText[100];
SETObjData setdata_dlc = {};

PVMEntry ATT3Textures = { "SONICADV_508", (TexList *)&texlist_att3 };
PVMEntry TimerTextures = { "CON_REGULAR_E", (TexList *)0x00912DF4 };

NJS_TEXANIM CardTenCountTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE CardTenCount = { { HorizontalStretch * 524, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &CardTenCountTexanim };

NJS_TEXANIM CardCountTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE CardCount = { { HorizontalStretch * 540, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &CardCountTexanim };

NJS_TEXANIM CardCountSlashTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE CardCountSlash = { { HorizontalStretch * 556, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &CardCountSlashTexanim };

NJS_TEXANIM CardCountTotalTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE CardCountTotal = { { HorizontalStretch * 572, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &CardCountTotalTexanim };

NJS_TEXANIM CardCountTotal2Texanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE CardCountTotal2 = { { HorizontalStretch * 588, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &CardCountTotal2Texanim };

NJS_TEXANIM TimerTenMinutesTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerTenMinutes = { { HorizontalStretch * 500, VerticalStretch * 430, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerTenMinutesTexanim };

NJS_TEXANIM TimerMinutesTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerMinutes = { { HorizontalStretch * 516, VerticalStretch * 430, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerMinutesTexanim };

NJS_TEXANIM TimerColon1Texanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerColon1 = { { HorizontalStretch * 532, VerticalStretch * 430, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerColon1Texanim };

NJS_TEXANIM TimerTenSecondsTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerTenSeconds = { { HorizontalStretch * 548, VerticalStretch * 430, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerTenSecondsTexanim };

NJS_TEXANIM TimerSecondsTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerSeconds = { { HorizontalStretch * 564, VerticalStretch * 430, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerSecondsTexanim };

NJS_TEXANIM TimerColon2Texanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerColon2 = { { HorizontalStretch * 580, VerticalStretch * 430, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerColon2Texanim };

NJS_TEXANIM TimerMTenSecondsTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerMTenSeconds = { { HorizontalStretch * 596, VerticalStretch * 430, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerMTenSecondsTexanim };

NJS_TEXANIM TimerMSecondsTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE TimerMSeconds = { { HorizontalStretch * 612, VerticalStretch * 430, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &TimerMSecondsTexanim };

char *ATT3_Message0[] = {
	"	All Gates cleared! Goal!",
	NULL,
};

char *ATT3_Message1[] = {
	"	Now saving your clear time.",
	NULL,
};

char *ATT3_Message2[] = {
	"	Time was up.\n	You have to start again.",
	NULL,
};

char *ATT3_Message3[] = {
	"	Go through 10 blue gates\n	to reach the goal!",
	NULL,
};

char *ATT3_Message4[] = {
	ResultText,
	"	The challenge is over.\n	Re-enter Sand Hill to restart.",
	NULL,
};

char *ATT3_Message5[] = {
	"	Time attack Race is\n	holding at Sand Hill!",
	NULL,
};

char *ATT3_Message6[] = {
	"	Gate 1 passed!!",
	NULL,
};

char *ATT3_Message7[] = {
	"	Gate 2 passed!!",
	NULL,
};

char *ATT3_Message8[] = {
	"	Gate 3 passed!!",
	NULL,
};

char *ATT3_Message9[] = {
	"	Gate 4 passed!!",
	NULL,
};

char *ATT3_Message10[] = {
	"	Gate 5 passed!!",
	NULL,
};

char *ATT3_Message11[] = {
	"	Gate 6 passed!!",
	NULL,
};

char *ATT3_Message12[] = {
	"	Gate 7 passed!!",
	NULL,
};

char *ATT3_Message13[] = {
	"	Gate 8 passed!!",
	NULL,
};

char *ATT3_Message14[] = {
	"	Gate 9 passed!!",
	NULL,
};

char *ATT3_Message15[] = {
	"	Gate 10 passed!!",
	NULL,
};

char *ATT3_Message16[] = {
	"	You didn't pass all 10 gates.\n	Re-enter Sand Hill to try again.",
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
		njSetTexture(&texlist_att3);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		if (v1->CharID == 1) ProcessModelNode_AB_Wrapper(&poster, v1->Scale.x);
		if (v1->CharID == 2) ProcessModelNode_AB_Wrapper(&poster_att, v1->Scale.x);
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
		if (v1->CharID == 4) ProcessModelNode_AB_Wrapper(&object_00001210, v1->Scale.x);
		if (v1->CharID == 5)
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
	if ((CurrentLevel == 26 && CurrentAct == 3) || (CurrentLevel == 38))
	{
		if (v1->Action == 1 && v1->Scale.x > 0.05f)
		{
			v1->Scale.x = v1->Scale.x*0.95f;
			v1->Scale.y = v1->Scale.y*0.95f;
			v1->Scale.z = v1->Scale.z*0.95f;
		}
		if (v1->Action != 1 && IsPlayerInsideSphere(&v1->Position, 100))
		{
			if (HintTimer <= 0)
			{
				//Gates
				if (v1->CharID == 4 && ChallengeAction == true && IsPlayerInsideSphere(&v1->Position, 35))
				{
					if (v1->CharIndex == 6 && Gate1 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message6), 120);
						Gate1 = true;
						v1->Action = 1;
					}
					if (v1->CharIndex == 7 && Gate2 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message7), 120);
						Gate2 = true;
						v1->Action = 1;
					}
					if (v1->CharIndex == 8 && Gate3 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message8), 120);
						Gate3 = true;
						v1->Action = 1;
					}
					if (v1->CharIndex == 9 && Gate4 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message9), 120);
						Gate4 = true;
						v1->Action = 1;
					}
					if (v1->CharIndex == 10 && Gate5 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message10), 120);
						Gate5 = true;
						v1->Action = 1;
					}
					if (v1->CharIndex == 11 && Gate6 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message11), 120);
						Gate6 = true;
						v1->Action = 1;
					}
					if (v1->CharIndex == 12 && Gate7 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message12), 120);
						Gate7 = true;
						v1->Action = 1;
					}
					if (v1->CharIndex == 13 && Gate8 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message13), 120);
						Gate8 = true;
						v1->Action = 1;
					}
					if (v1->CharIndex == 14 && Gate9 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message14), 120);
						Gate9 = true;
						v1->Action = 1;
					}
					if (v1->CharIndex == 15 && Gate10 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (CollectedAll >= 9) sub_4B79C0((char *)(&ATT3_Message0), 120); else sub_4B79C0((char *)(&ATT3_Message15), 120);
						Gate10 = true;
						v1->Action = 1;
					}
					HintTimer = 120;
				}
				//Poster
				if (v1->CharID == 1 && CurrentLevel == 26 && IsPlayerInsideSphere(&v1->Position, 15))
				{
					sub_4B79C0((char *)(&ATT3_Message5), 180);
					HintTimer = 180;
				}
				//Start plate
				if (v1->CharID == 3 && ChallengeAction == false)
				{
					v1->Action = 1;
					PlaySound(5, 0, 0, 0);
					ChallengeAction = true;
					sub_4B79C0((char *)(&ATT3_Message3), 120);
					HintTimer = 60;
				}
				//Goal plate (not all Gates passed)
				if (v1->CharID == 5 && CollectedAll < 10 && ChallengeOver == false)
				{
					v1->Action = 1;
					PlaySound(5, 0, 0, 0);
					sub_4B79C0((char *)(&ATT3_Message16), 180);
					Gate1 = false;
					Gate2 = false;
					Gate3 = false;
					Gate4 = false;
					Gate5 = false;
					Gate6 = false;
					Gate7 = false;
					Gate8 = false;
					Gate9 = false;
					Gate10 = false;
					CollectedAll = 0;
					ChallengeAction = false;
					ChallengeOver = false;
					ChallengeTimer = 0;
					HintTimer = 120;
				}
				//Goal plate (all Gates passed)
				if (v1->CharID == 5 && CollectedAll >= 10 && ChallengeOver == false)
				{
					v1->Action = 1;
					PlaySound(5, 0, 0, 0);
					snprintf(ResultText, 100, "Goal! Your result is:         .");
					snprintf(ResultText + 22, 100 - 22, "%d", TimerTenMinutesTexanim.texid);
					snprintf(ResultText + 23, 100 - 23, "%d", TimerMinutesTexanim.texid);
					snprintf(ResultText + 24, 100 - 24, ":");
					snprintf(ResultText + 25, 100 - 25, "%d", TimerTenSecondsTexanim.texid);
					snprintf(ResultText + 26, 100 - 26, "%d", TimerSecondsTexanim.texid);
					snprintf(ResultText + 27, 100 - 27, ":");
					snprintf(ResultText + 28, 100 - 28, "%d", TimerMTenSecondsTexanim.texid);
					snprintf(ResultText + 29, 100 - 29, "%d", TimerMSecondsTexanim.texid);
					snprintf(ResultText + 30, 100 - 30, ".");
					sub_4B79C0((char *)(&ATT3_Message4), 600);
					ChallengeAction = false;
					ChallengeOver = false;
					HintTimer = 300;
				}
				//Goal plate (time over)
				if (v1->CharID == 5 && ChallengeOver == true)
				{
					v1->Action = 1;
					PlaySound(5, 0, 0, 0);
					sub_4B79C0((char *)(&ATT3_Message2), 180);
					Gate1 = false;
					Gate2 = false;
					Gate3 = false;
					Gate4 = false;
					Gate5 = false;
					Gate6 = false;
					Gate7 = false;
					Gate8 = false;
					Gate9 = false;
					Gate10 = false;
					CollectedAll = 0;
					ChallengeAction = false;
					ChallengeOver = false;
					ChallengeTimer = 0;
					HintTimer = 300;
				}
			}
		}
		if (v1->Scale.x > 0.1f) DLCObject_Display(a1);
	}
}

void DLCObject_Load(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))DLCObject_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))DLCObject_Display;
}

void Timer_Display(ObjectMaster *a1)
{
	CardTenCountTexanim.sx = 16 * HorizontalStretch;
	CardTenCountTexanim.sy = 16 * HorizontalStretch;
	CardCountTexanim.sx = 16 * HorizontalStretch;
	CardCountTexanim.sy = 16 * HorizontalStretch;
	CardCountSlashTexanim.sx = 16 * HorizontalStretch;
	CardCountSlashTexanim.sy = 16 * HorizontalStretch;
	CardCountTotalTexanim.sx = 16 * HorizontalStretch;
	CardCountTotalTexanim.sy = 16 * HorizontalStretch;
	CardCountTotal2Texanim.sx = 16 * HorizontalStretch;
	CardCountTotal2Texanim.sy = 16 * HorizontalStretch;
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
	//Draw count 10
	if (CollectedAll < 10) CardTenCountTexanim.texid = 0; else CardTenCountTexanim.texid = 1;
	njDrawSprite2D_3(&CardTenCount, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw count
	if (CollectedAll < 10) CardCountTexanim.texid = CollectedAll; else CardCountTexanim.texid = 0;
	njDrawSprite2D_3(&CardCount, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw slash
	CardCountSlashTexanim.texid = 73;
	njDrawSprite2D_3(&CardCountSlash, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw total
	CardCountTotalTexanim.texid = 1;
	njDrawSprite2D_3(&CardCountTotal, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw total 2
	CardCountTotal2Texanim.texid = 0;
	njDrawSprite2D_3(&CardCountTotal2, 0, 22046.498f, NJD_SPRITE_ALPHA);
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
	CollectedAll = Gate1 + Gate2 + Gate3 + Gate4 + Gate5 + Gate6 + Gate7 + Gate8 + Gate9 + Gate10;
	if (ChallengeAction == true)
	{
		ChallengeTimer++;
		Timer_Display(a1);
	}
	if ((((ChallengeTimer / 3600) % 60) % 10) >= 5)
	{
		ChallengeOver = true;
	}
	if (ChallengeAction == true && ChallengeTimer % 3600 == 0)
	{
		PlaySound(4, 0, 0, 0);
	}
}

void Timer_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Timer_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Timer_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void LoadEverythingInStationSquare(ObjectMaster *a1)
{
	sub_62E980();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF1, DLCObject_Load);
	ObjectFunc(OF2, Timer_Load);
	ObjectFunc(OF3, sub_595210);
	setdata_dlc.Distance = 612800.0f;
	if (GameMode == GameModes_Adventure_Field && CurrentCharacter == 2)
	{
		if (CurrentLevel == 26)
		{
			if (ObjectsLoaded == false)
			{
				//Poster
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 44;
					ent->Position.y = 27;
					ent->Position.z = 1417;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x127D;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 5;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -5;
					ent->Position.y = 41;
					ent->Position.z = 1400;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x127D;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 5;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 57;
					ent->Position.y = 41;
					ent->Position.z = 1369;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x127D;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 5;
					ent->CharID = 1;
				}
				ObjectsLoaded = true;
			}
		}
	}
}

void LoadATT3Stuff()
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
	//Gates
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 72;
		ent->Position.y = -767;
		ent->Position.z = -1196;
		ent->Index = 0;
		ent->Rotation.x = 0xE000;
		ent->Rotation.y = 0;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 6;
		ent->CharID = 4;
		if (Gate1 == true) ent->Action = 1; else ent->Action = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 112;
		ent->Position.y = -1522;
		ent->Position.z = -2472;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 7;
		ent->CharID = 4;
		if (Gate2 == true) ent->Action = 1; else ent->Action = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1000;
		ent->Position.y = -1791;
		ent->Position.z = -3182;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 8;
		ent->CharID = 4; 
		if (Gate3 == true) ent->Action = 1; else ent->Action = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1109;
		ent->Position.y = -2694;
		ent->Position.z = -5156;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 9;
		ent->CharID = 4;
		if (Gate4 == true) ent->Action = 1; else ent->Action = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 163;
		ent->Position.y = -3177;
		ent->Position.z = -6562;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 10;
		ent->CharID = 4;
		if (Gate5 == true) ent->Action = 1; else ent->Action = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 57;
		ent->Position.y = -4515;
		ent->Position.z = -8892;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 11;
		ent->CharID = 4;
		if (Gate6 == true) ent->Action = 1; else ent->Action = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 950;
		ent->Position.y = -4726;
		ent->Position.z = -9462;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 12;
		ent->CharID = 4;
		if (Gate7 == true) ent->Action = 1; else ent->Action = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1052;
		ent->Position.y = -5329;
		ent->Position.z = -10761;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 13;
		ent->CharID = 4;
		if (Gate8 == true) ent->Action = 1; else ent->Action = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1595;
		ent->Position.y = -5981;
		ent->Position.z = -12377;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 14;
		ent->CharID = 4;
		if (Gate9 == true) ent->Action = 1; else ent->Action = 0;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 994;
		ent->Position.y = -6507;
		ent->Position.z = -13333;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 1.0f;
		ent->Scale.y = 1.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 15;
		ent->CharID = 4;
		if (Gate10 == true) ent->Action = 1; else ent->Action = 0;
	}
	//Start plate
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 86;
		ent->Position.y = -215;
		ent->Position.z = -354;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 10.0f;
		ent->Scale.y = 6.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 3;
		ent->CharID = 3;
		if (ChallengeAction == true) ent->Action = 1; else ent->Action = 0;
	}
	//Goal plate
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1302;
		ent->Position.y = -7339;
		ent->Position.z = -15126;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0;
		ent->Rotation.z = 0;
		ent->Scale.x = 10.0f;
		ent->Scale.y = 6.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 5;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 23;
		ent->Position.y = -308;
		ent->Position.z = -547;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 5;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 28;
		ent->Position.y = -371;
		ent->Position.z = -659;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 11;
		ent->Position.y = -454;
		ent->Position.z = -812;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 99;
		ent->Position.y = -766;
		ent->Position.z = -1369;
		ent->Index = 0;
		ent->Rotation.y = 0xEFA4;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 109;
		ent->Position.y = -1236;
		ent->Position.z = -2097;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 128;
		ent->Position.y = -996;
		ent->Position.z = -1686;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 227;
		ent->Position.y = -1606;
		ent->Position.z = -290;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 960;
		ent->Position.y = -1691;
		ent->Position.z = -3207;
		ent->Index = 0;
		ent->Rotation.y = 0xEFA4;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1104;
		ent->Position.y = -2376;
		ent->Position.z = -4668;
		ent->Index = 0;
		ent->Rotation.y = 0x0FA4;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 232;
		ent->Position.y = -2991;
		ent->Position.z = -6135;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = -27;
		ent->Position.y = -2991;
		ent->Position.z = -6166;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 132;
		ent->Position.y = -4091;
		ent->Position.z = -8184;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 79;
		ent->Position.y = -4336;
		ent->Position.z = -8702;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 630;
		ent->Position.y = -4656;
		ent->Position.z = -9534;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 844;
		ent->Position.y = -4656;
		ent->Position.z = -9520;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1060;
		ent->Position.y = -4656;
		ent->Position.z = -9538;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1098;
		ent->Position.y = -5566;
		ent->Position.z = -11577;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1431;
		ent->Position.y = -6151;
		ent->Position.z = -12905;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 862;
		ent->Position.y = -6636;
		ent->Position.z = -13721;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 4.0f;
		ent->Scale.y = 4.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
	obj = LoadObject((LoadObj)2, 3, OF1);
	obj->SETData.SETData = &setdata_dlc;
	if (obj)
	{
		ent = obj->Data1;
		ent->Position.x = 1243;
		ent->Position.y = -7091;
		ent->Position.z = -15799;
		ent->Index = 0;
		ent->Rotation.y = 0;
		ent->Rotation.x = 0xEFA4;
		ent->Rotation.z = 0;
		ent->Scale.x = 10.0f;
		ent->Scale.y = 10.0f;
		ent->Scale.z = 1.0f;
		ent->CharIndex = 4;
		ent->CharID = 2;
	}
}

void LoadStuffInSandHill(ObjectMaster *a1)
{
	if (CurrentCharacter == 2 && CurrentLevel == 38) LoadATT3Stuff();
	sub_4570B0();
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
		if (SONICADV_509 != nullptr) ModFailsafe = true;
		if (SONICADV_510 != nullptr) ModFailsafe = true;
		if (SONICADV_511 != nullptr) ModFailsafe = true;
		if (ModFailsafe == false)
		{
			helperFunctions.RegisterCommonObjectPVM(ATT3Textures);
			helperFunctions.RegisterCommonObjectPVM(TimerTextures);
			WriteCall((void*)0x0062F098, LoadEverythingInStationSquare);
			WriteCall((void*)0x0062F102, LoadEverythingInStationSquare);
			WriteCall((void*)0x00415A6D, LoadStuffInSandHill);
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (ModFailsafe == false && GameState != 16)
		{
			if (HintTimer > 0) HintTimer--;
			if (CurrentLevel != 38 || GameState == 21)
			{
				ChallengeAction = false;
				ChallengeOver = false;
				Gate1 = false;
				Gate2 = false;
				Gate3 = false;
				Gate4 = false;
				Gate5 = false;
				Gate6 = false;
				Gate7 = false;
				Gate8 = false;
				Gate9 = false;
				Gate10 = false;
				ChallengeTimer = 0;
			}
			if (CurrentLevel !=26 || GameState == 6)
			{
				ObjectsLoaded = false;
			}
			if (CurrentLevel == 33 && CollectedAll == 10 && ChallengeOver == false && Camera_Data1 != nullptr)
			{
				sub_4B79C0((char *)(&ATT3_Message4), 360);
				Gate1 = false;
				Gate2 = false;
				Gate3 = false;
				Gate4 = false;
				Gate5 = false;
				Gate6 = false;
				Gate7 = false;
				Gate8 = false;
				Gate9 = false;
				Gate10 = false;
				CollectedAll = 0;
				ChallengeTimer = 0;
				ChallengeOver = false;
				ChallengeAction = false;
			}
		}
	}
}