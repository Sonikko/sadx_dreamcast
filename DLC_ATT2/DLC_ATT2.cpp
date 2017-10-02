#include "stdafx.h"
#include <SADXModLoader.h>
#include "ATT2.h"
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
static int PreviousLevel = 0;
static int PreviousAct = 0;
static bool Treasure1 = false;
static bool Treasure2 = false;
static bool Treasure3 = false;
static bool Treasure4 = false;
static int CollectedAll = 0;
static bool ChallengeOver = false;
static bool ObjectsLoaded = false;
static int ChallengeTimer = 0;
static int ChallengeAction = false;
char ResultText[100];
SETObjData setdata_dlc = {};

PVMEntry ATT2Textures = { "SONICADV_506", (TexList *)&texlist_att2 };
PVMEntry TimerTextures = { "CON_REGULAR_E", (TexList *)0x00912DF4 };

NJS_TEXANIM CardCountTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE CardCount = { { HorizontalStretch * 540, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &CardCountTexanim };

NJS_TEXANIM CardCountSlashTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE CardCountSlash = { { HorizontalStretch * 556, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &CardCountSlashTexanim };

NJS_TEXANIM CardCountTotalTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE CardCountTotal = { { HorizontalStretch * 572, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &CardCountTotalTexanim };

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

void StopVoicesButMaybeNot()
{
	//004B793E
	if (ChallengeAction == false) StopVoices();
}

char *ATT2_Message0[] = {
	"	All treasures found!\n	Now, hurry to the goal!!!",
	NULL,
};

char *ATT2_Message1[] = {
	"	Results will be saved\n	on the memory card.",
	NULL,
};

char *ATT2_Message2[] = {
	"	Time's up.\n	Please try again.",
	NULL,
};

char *ATT2_Message3[] = {
	"	AT&T Treasure Hunt Time Attack\n	Start",
	NULL,
};

char *ATT2_Message4[] = {
	"	Congratulations!\n	Treasure Hunt Time Attack Cleared!",
	ResultText,
	"\a	The challenge is over.\n	Touch the Start Plate again to restart.",
	NULL,
};

char *ATT2_Message5[] = {
	"	Treasure found!\n	Good job!",
	NULL,
};

char *ATT2_Message6[] = {
	"	Treasure found!\n	Way to go!!",
	NULL,
};

char *ATT2_Message7[] = {
	"	Treasure found!\n	Great Digging!!",
	NULL,
};

char *ATT2_Message8[] = {
	"	Treasure found!\n	You're awesome!",
	NULL,
};

char *ATT2_Message9[] = {
	"	Treasure Time Attack\n	at the Mystic Ruins Now Open!",
	NULL,
};

char *ATT2_Message10[] = {
	"	Stuck? Stand in front of\n	the shack, do the dash punch.",
	NULL,
};

char *ATT2_Message11[] = {
	"	Check out where you placed\n	the windy stone.",
	NULL,
};

char *ATT2_Message12[] = {
	"	The treasure's somewhere\n	near the mine cart.",
	NULL,
};

char *ATT2_Message13[] = {
	"	The treasure's somewhere\n	in front of this sign.",
	NULL,
};

char *ATT2_Message14[] = {
	"	No treasures around here!",
	NULL,
};

char *ATT2_Message15[] = {
	"	Top Time Attack winners\n	will win a prize!!!",
	NULL,
};

char *ATT2_Message16[] = {
	"	You aren't done yet!\n	Find more treasures!",
	"\aTo quit the challenge,\npress Y in the pause menu.",
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
		njSetTexture(&texlist_att2);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		if (v1->CharID == 1) ProcessModelNode_AB_Wrapper(&object_000006D0, v1->Scale.x);
		if (v1->CharID == 2)
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
	if ((CurrentLevel == 26 && CurrentAct == 3) || (CurrentLevel == 33 && CurrentAct == 0))
	{
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
		if (v1->Action != 1 && IsPlayerInsideSphere(&v1->Position, 18))
		{
			if (HintTimer <= 0)
			{
				//Treasures
				if (v1->CharID == 4 && ChallengeAction == true)
				{
					if (v1->CharIndex == 5 && Treasure1 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (Treasure2 == true && Treasure3 == true && Treasure4 == true) sub_4B79C0((char *)(&ATT2_Message0), 120); else sub_4B79C0((char *)(&ATT2_Message5), 120);
						Treasure1 = true;
					}
					if (v1->CharIndex == 6 && Treasure2 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (Treasure1 == true && Treasure3 == true && Treasure4 == true) sub_4B79C0((char *)(&ATT2_Message0), 120); else sub_4B79C0((char *)(&ATT2_Message6), 120);
						Treasure2 = true;
					}
					if (v1->CharIndex == 7 && Treasure3 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (Treasure1 == true && Treasure2 == true && Treasure4 == true) sub_4B79C0((char *)(&ATT2_Message0), 120); else sub_4B79C0((char *)(&ATT2_Message7), 120);
						Treasure3 = true;
					}
					if (v1->CharIndex == 8 && Treasure4 == false)
					{
						PlaySound(11, 0, 0, 0);
						if (Treasure1 == true && Treasure2 == true && Treasure3 == true) sub_4B79C0((char *)(&ATT2_Message0), 120); else sub_4B79C0((char *)(&ATT2_Message8), 120);
						Treasure4 = true;
					}
					HintTimer = 120;
				}
				//Wooden thing
				if (v1->CharID == 1)
				{
					if (v1->CharIndex == 0) sub_4B79C0((char *)(&ATT2_Message0), 120);
					if (v1->CharIndex == 1) sub_4B79C0((char *)(&ATT2_Message1), 120);
					if (v1->CharIndex == 2) sub_4B79C0((char *)(&ATT2_Message2), 120);
					if (v1->CharIndex == 3) sub_4B79C0((char *)(&ATT2_Message3), 120);
					if (v1->CharIndex == 4) sub_4B79C0((char *)(&ATT2_Message4), 120);
					if (v1->CharIndex == 9) sub_4B79C0((char *)(&ATT2_Message9), 120);
					if (v1->CharIndex == 10) sub_4B79C0((char *)(&ATT2_Message10), 120);
					if (v1->CharIndex == 11) sub_4B79C0((char *)(&ATT2_Message11), 120);
					if (v1->CharIndex == 12) sub_4B79C0((char *)(&ATT2_Message12), 120);
					if (v1->CharIndex == 13) sub_4B79C0((char *)(&ATT2_Message13), 120);
					if (v1->CharIndex == 14) sub_4B79C0((char *)(&ATT2_Message14), 120);
					if (v1->CharIndex == 15) sub_4B79C0((char *)(&ATT2_Message15), 120);
					HintTimer = 120;
				}
				//Start plate
				if (v1->CharID == 3 && ChallengeAction == false)
				{
					PlaySound(5, 0, 0, 0);
					ChallengeAction = true;
					sub_4B79C0((char *)(&ATT2_Message3), 120);
					HintTimer = 120;
				}
				//Goal plate (not all treasures collected)
				if (v1->CharID == 2 && CollectedAll < 4 && ChallengeOver == false)
				{
					v1->Action = 1;
					PlaySound(23, 0, 0, 0);
					sub_4B79C0((char *)(&ATT2_Message16), 180);
					HintTimer = 360;
				}
				//Goal plate (all treasures collected)
				if (v1->CharID == 2 && CollectedAll >= 4 && ChallengeOver == false)
				{
					v1->Action = 1;
					PlaySound(5, 0, 0, 0);
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
					sub_4B79C0((char *)(&ATT2_Message4), 180);
					Treasure1 = false;
					Treasure2 = false;
					Treasure3 = false;
					Treasure4 = false;
					CollectedAll = 0;
					ChallengeAction = false;
					ChallengeOver = false;
					ChallengeTimer = 0;
					HintTimer = 500;
				}
				//Goal plate (time over)
				if (v1->CharID == 2 && ChallengeOver == true)
				{
					v1->Action = 1;
					PlaySound(5, 0, 0, 0);
					sub_4B79C0((char *)(&ATT2_Message2), 180);
					Treasure1 = false;
					Treasure2 = false;
					Treasure3 = false;
					Treasure4 = false;
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
	//Wooden thing
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))DLCObject_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))DLCObject_Display;
}

void Timer_Display(ObjectMaster *a1)
{
	CardCountTexanim.sx = 16 * HorizontalStretch;
	CardCountTexanim.sy = 16 * HorizontalStretch;
	CardCountSlashTexanim.sx = 16 * HorizontalStretch;
	CardCountSlashTexanim.sy = 16 * HorizontalStretch;
	CardCountTotalTexanim.sx = 16 * HorizontalStretch;
	CardCountTotalTexanim.sy = 16 * HorizontalStretch;
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
	//Draw count
	CardCountTexanim.texid = CollectedAll;
	njDrawSprite2D_3(&CardCount, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw slash
	CardCountSlashTexanim.texid = 73;
	njDrawSprite2D_3(&CardCountSlash, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw total
	CardCountTotalTexanim.texid = 4;
	njDrawSprite2D_3(&CardCountTotal, 0, 22046.498f, NJD_SPRITE_ALPHA);
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
	CollectedAll = Treasure1 + Treasure2 + Treasure3 + Treasure4;
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

void LoadEverythingInStationSquareOrMysticRuinsActually(ObjectMaster *a1)
{
	if (CurrentLevel == 26) sub_62E980();
	if (CurrentLevel == 33) sub_52F240();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF1, DLCObject_Load);
	ObjectFunc(OF2, Timer_Load);
	ObjectFunc(OF3, sub_595210);
	setdata_dlc.Distance = 612800.0f;
	if (GameMode == GameModes_Adventure_Field && CurrentCharacter == 3)
	{
		if (CurrentLevel == 26)
		{
			if (ObjectsLoaded == false)
			{
				//Wooden billboard
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 125;
					ent->Position.y = 15;
					ent->Position.z = 1445;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x13E9;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 9;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 356;
					ent->Position.y = 14;
					ent->Position.z = 1223;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x4000;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 9;
					ent->CharID = 1;
				}
				ObjectsLoaded = true;
			}
		}
		if (CurrentLevel == 33)
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
				//Wooden billboard
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -145;
					ent->Position.y = 70;
					ent->Position.z = 1055;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x2AAA;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 15;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -218;
					ent->Position.y = 72;
					ent->Position.z = 1140;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 15;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -330;
					ent->Position.y = 71;
					ent->Position.z = 728;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0xC000;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 15;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -93;
					ent->Position.y = 105;
					ent->Position.z = 324;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x071C;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 10;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -169;
					ent->Position.y = 74;
					ent->Position.z = 36;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 22209;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -22;
					ent->Position.y = -27;
					ent->Position.z = -150;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x8EEE;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 40;
					ent->Position.y = -15;
					ent->Position.z = -253;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x8EEE;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 10;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 166;
					ent->Position.y = -27;
					ent->Position.z = -216;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x8EEE;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 335;
					ent->Position.y = -16;
					ent->Position.z = -68;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0xA5B0;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 11;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 458;
					ent->Position.y = 77;
					ent->Position.z = 143;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x42D8;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 15;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -60;
					ent->Position.y = 75;
					ent->Position.z = 200;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x4000;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 13;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 7;
					ent->Position.y = 80;
					ent->Position.z = 137;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x8000;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 13;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 140;
					ent->Position.y = 75;
					ent->Position.z = 200;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x4000;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 13;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 7;
					ent->Position.y = 77;
					ent->Position.z = 376;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x8000;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 13;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 184;
					ent->Position.y = 200;
					ent->Position.z = 925;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0xA666;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 15;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 275;
					ent->Position.y = 200;
					ent->Position.z = 792;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0xA666;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 15;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 386;
					ent->Position.y = 200;
					ent->Position.z = 709;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0xA666;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 15;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 489;
					ent->Position.y = 200;
					ent->Position.z = 559;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0xA666;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 12;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1345;
					ent->Position.y = 220;
					ent->Position.z = 405;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x0D82;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 999;
					ent->Position.y = 140;
					ent->Position.z = 888;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x89F4;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1417;
					ent->Position.y = 190;
					ent->Position.z = 648;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x9B05;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 12;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1477;
					ent->Position.y = 205;
					ent->Position.z = 784;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x1B05;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1499;
					ent->Position.y = 200;
					ent->Position.z = 849;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x4B60;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1623;
					ent->Position.y = 195;
					ent->Position.z = 944;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x4B60;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 10;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1800;
					ent->Position.y = 193;
					ent->Position.z = 1160;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x4666;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 12;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1948;
					ent->Position.y = 191;
					ent->Position.z = 1342;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x4666;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 11;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 2061;
					ent->Position.y = 191;
					ent->Position.z = 1543;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x18E3;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1247;
					ent->Position.y = 16;
					ent->Position.z = 599;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0xA71C;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 15;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1386;
					ent->Position.y = 19;
					ent->Position.z = 400;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x6000;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 15;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1360;
					ent->Position.y = 10;
					ent->Position.z = 17;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x49F4;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 13;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1308;
					ent->Position.y = 10;
					ent->Position.z = -309;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x216C;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1452;
					ent->Position.y = 10;
					ent->Position.z = -431;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x561C;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 14;
					ent->CharID = 1;
				}
				//Treasure 1
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -16;
					ent->Position.y = 55;
					ent->Position.z = 300;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x561C;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 5;
					ent->CharID = 4;
				}
				//Treasure 2
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 617;
					ent->Position.y = 40;
					ent->Position.z = -160;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x561C;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 6;
					ent->CharID = 4;
				}
				//Treasure 3
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 7;
					ent->Position.y = 45;
					ent->Position.z = 200;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x561C;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 7;
					ent->CharID = 4;
				}
				//Treasure 4
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = 1613;
					ent->Position.y = -17;
					ent->Position.z = -59;
					ent->Index = 0;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0x561C;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.0f;
					ent->Scale.y = 1.0f;
					ent->Scale.z = 1.0f;
					ent->CharIndex = 8;
					ent->CharID = 4;
				}
				//Start plate
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -87;
					ent->Position.y = 235;
					ent->Position.z = 1145;
					ent->Index = 10;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0xA666;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.5f;
					ent->Scale.y = 1.5f;
					ent->Scale.z = 1.5f;
					ent->CharIndex = 3;
					ent->CharID = 3;
				}
				//Goal plate
				obj = LoadObject((LoadObj)2, 3, OF1);
				obj->SETData.SETData = &setdata_dlc;
				if (obj)
				{
					ent = obj->Data1;
					ent->Position.x = -62;
					ent->Position.y = 235;
					ent->Position.z = 1107;
					ent->Index = 10;
					ent->Rotation.x = 0;
					ent->Rotation.y = 0xA666;
					ent->Rotation.z = 0;
					ent->Scale.x = 1.5f;
					ent->Scale.y = 1.5f;
					ent->Scale.z = 1.5f;
					ent->CharIndex = 4;
					ent->CharID = 2;
				}
				ObjectsLoaded = true;
			}
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
		if (SONICADV_504 != nullptr) ModFailsafe = true;
		if (SONICADV_505 != nullptr) ModFailsafe = true;
		if (SONICADV_507 != nullptr) ModFailsafe = true;
		if (SONICADV_508 != nullptr) ModFailsafe = true;
		if (SONICADV_509 != nullptr) ModFailsafe = true;
		if (SONICADV_510 != nullptr) ModFailsafe = true;
		if (SONICADV_511 != nullptr) ModFailsafe = true;
		if (ModFailsafe == false)
		{
			WriteCall((void*)0x004B793E, StopVoicesButMaybeNot);
			helperFunctions.RegisterCommonObjectPVM(ATT2Textures);
			helperFunctions.RegisterCommonObjectPVM(TimerTextures);
			WriteCall((void*)0x0062F098, LoadEverythingInStationSquareOrMysticRuinsActually);
			WriteCall((void*)0x0062F102, LoadEverythingInStationSquareOrMysticRuinsActually);
			WriteCall((void*)0x0052FB82, LoadEverythingInStationSquareOrMysticRuinsActually);
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (ModFailsafe == false && GameState != 16)
		{
			if (HintTimer > 0) HintTimer--;
			if (GameMode != GameModes_Adventure_Field)
			{
				ChallengeAction = false;
				ChallengeOver = false;
				Treasure1 = false;
				Treasure2 = false;
				Treasure3 = false;
				Treasure4 = false;
				ChallengeTimer = 0;
				ObjectsLoaded = false;
			}
			if (PreviousLevel != CurrentLevel)
			{
				ObjectsLoaded = false;
				PreviousLevel = CurrentLevel;
				PreviousAct = CurrentAct;
			}
			if (GameState == 6)
			{
				ObjectsLoaded = false;
			}
		}
	}
	__declspec(dllexport) void __cdecl OnInput()
	{
		if (GameState == 16)
		{
			if (ChallengeAction == true && (ControllerPointers[0]->PressedButtons & Buttons_Y) == Buttons_Y)
			{
				CollectedAll = 0;
				Treasure1 = false;
				Treasure2 = false;
				Treasure3 = false;
				Treasure4 = false;
				ChallengeTimer = 0;
				ChallengeAction = false;
				ChallengeOver = false;
			}
		}
	}
}