#include "stdafx.h"
#include <SADXModLoader.h>
#include "Famitsu.h"
#include <cstdio>

HMODULE ADV00MODELS = GetModuleHandle(L"ADV00MODELS");
FunctionPointer(void, sub_412D80, (int a1, int a2), 0x412D80);
FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(COL, COL_whatever, ((size_t)ADV00MODELS + 0x001D8144));
static bool ModFailsafe = false;
static int HintTimer = 0;
static int CollectedAll = 0;
static bool Collected1 = false;
static bool Collected2 = false;
static bool Collected3 = false;
static bool Collected4 = false;
static bool Collected5 = false;
static bool ObjectsLoaded = false;
static int ChallengeTimer = 0;
static int ChallengeAction = false;
char ResultText[100];
SETObjData setdata_dlc = {};
PVMEntry FamitsuTextures = { "SONICADV_003", (TexList *)&texlist_famitsu };
PVMEntry TimerTextures = { "CON_REGULAR_E", (TexList *)0x00912DF4 };

NJS_TEXANIM HedgehogCountTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE HedgehogCount = { { HorizontalStretch * 540, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &HedgehogCountTexanim };

NJS_TEXANIM HedgehogCountSlashTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE HedgehogCountSlash = { { HorizontalStretch * 556, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &HedgehogCountSlashTexanim };

NJS_TEXANIM HedgehogCountTotalTexanim = { 16, 16, 0, 0, 0, 0, 0xFF, 0xFF, 0, 0 };
NJS_SPRITE HedgehogCountTotal = { { HorizontalStretch * 572, VerticalStretch * 455, 0.0f }, 1.0f, 1.0f, 0, (NJS_TEXLIST*)0x00912DF4, &HedgehogCountTotalTexanim };

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

char *FamitsuMessage1[] = {
	"\aOh no, I'm beaten!\nGotta rush to the goal now!",
	NULL,
};

char *FamitsuMessage2[] = {
	"\aYou aren't done yet!\nFind the remaining Sonics!",
	"\aTo quit the challenge,\npress Y in the pause menu.",
	NULL,
};

char *FamitsuMessage3[] = {
	"\aTime over!\nTry again from the beginning.",
	NULL,
};

char* FamitsuMessage4[] = {
	"\a      - Challenge start -      \nFind Sonic in 5 secret spots!",
	NULL,
};

char *FamitsuMessage5[] = {
	"\aI'm Famitsu's special hedgehog friend!",
	NULL,
};

char *FamitsuMessage6[] = {
	"\aI wanna become a blue hedgehog!",
	NULL,
};

char *FamitsuMessage7[] = {
	"\aNew Famitsu issue\nevery Friday!",
	NULL,
};

char *FamitsuMessage8[] = {
	"\aThank you for staying\nwith Sonic and Famitsu!",
	"\aLet's be good friends, alright?",
	NULL,
};

char *FamitsuMessage9[] = {
	"\aYou can meet\nme at Famitsu, too!",
	NULL,
};

char *FamitsuMessage10[] = {
	"\aCongratulations!\nYou've won the game of hide-and-seek!",
	ResultText,
	"\aThe challenge is over.\nTouch the red balloon again to restart.",
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
		njSetTexture(&texlist_famitsu);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
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
		if (ChallengeAction == false)
		{
			Collected1 = false;
			Collected2 = false;
			Collected3 = false;
			Collected4 = false;
			Collected5 = false;
		}
		else
		{
			if ((Collected1 == false && v1->CharIndex == 4) || (Collected2 == false && v1->CharIndex == 5) || (Collected3 == false && v1->CharIndex == 6) || (Collected4 == false && v1->CharIndex == 7) || (Collected5 == false && v1->CharIndex == 8))
			{
				v1->Scale.x = 1.0f;
				v1->Scale.y = 1.0f;
				v1->Scale.z = 1.0f;
				if (IsPlayerInsideSphere(&v1->Position, 15))
				{
					if (v1->CharIndex == 4)
					{
						Collected1 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage5), 180);
						HintTimer = 60;
					}
					if (v1->CharIndex == 5)
					{
						Collected2 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage6), 180);
						HintTimer = 60;
					}
					if (v1->CharIndex == 6)
					{
						Collected3 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage7), 180);
						HintTimer = 60;
					}
					if (v1->CharIndex == 7)
					{
						Collected4 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage8), 140);
						HintTimer = 60;
					}
					if (v1->CharIndex == 8)
					{
						Collected5 = true;
						PlaySound(28, 0, 0, 0);
						if (Collected1 == true && Collected2 == true && Collected3 == true && Collected4 == true && Collected5 == true) sub_4B79C0((char *)(&FamitsuMessage1), 180); else sub_4B79C0((char *)(&FamitsuMessage9), 180);
						HintTimer = 60;
					}
				}
			}
			if ((Collected1 == true && v1->CharIndex == 4) || (Collected2 == true && v1->CharIndex == 5) || (Collected3 == true && v1->CharIndex == 6) || (Collected4 == true && v1->CharIndex == 7) || (Collected5 == true && v1->CharIndex == 8))
			{
				if (v1->Scale.x > 0.05f)
				{
					v1->Scale.x = v1->Scale.x*0.9f;
					v1->Scale.y = v1->Scale.y*0.9f;
					v1->Scale.z = v1->Scale.z*0.9f;
				}
			}
			if (v1->Scale.x > 0.05f) Poster_Display(a1);
		}
	}
}

void Poster_Load(ObjectMaster *a1)
{
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Poster_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Poster_Display;
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
		njSetTexture(&texlist_famitsu);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		if (v1->CharIndex == 9) ProcessModelNode_AB_Wrapper(&balloon_start, v1->Scale.x);
		else ProcessModelNode_AB_Wrapper(&balloon_finish, v1->Scale.x);
		njPopMatrix(1u);
	}
}

void Balloons_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	int SpeedY;
	Angle v2;
	Angle v3;
	Angle v4;
	NJS_OBJECT *v5; // eax@2
	v1 = a1->Data1;
	if (v1->NextAction == CurrentAct)
	{
		SpeedY = (v1->CharID) * 16;
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		v3 = (v3 + int(SpeedY)) % 65535;
		v1->Rotation.y = v3;
		if (v1->CharIndex == 9)
		{
			if (ChallengeAction == true && v1->Scale.x > 0.05f)
			{
				v1->Scale.x = v1->Scale.x*0.95f;
				v1->Scale.y = v1->Scale.y*0.95f;
				v1->Scale.z = v1->Scale.z*0.95f;
			}
			if (ChallengeAction == false && v1->Scale.x < 1.5f)
			{
				v1->Scale.x = v1->Scale.x*1.05f;
				v1->Scale.y = v1->Scale.y*1.05f;
				v1->Scale.z = v1->Scale.z*1.05f;
				if (v1->Scale.y >= 1.5f)
				{
					v1->Scale.x = 1.5f;
					v1->Scale.y = 1.5f;
					v1->Scale.z = 1.5f;
				}
			}
			if (ChallengeAction == false && IsPlayerInsideSphere(&v1->Position, 15))
			{
				if (HintTimer <= 0)
				{
					PlaySound(12, 0, 0, 0);
					sub_4B79C0((char *)(&FamitsuMessage4), 180);
					Collected1 = false;
					Collected2 = false;
					Collected3 = false;
					Collected4 = false;
					Collected5 = false;
					CollectedAll = 0;
					ChallengeAction = true;
					HintTimer = 60;
				}		
			}
		}
		else
		{
			if (ChallengeAction == false && v1->Scale.x > 0.05f)
			{
				v1->Scale.x = v1->Scale.x*0.95f;
				v1->Scale.y = v1->Scale.y*0.95f;
				v1->Scale.z = v1->Scale.z*0.95f;
			}
			if (ChallengeAction == true && v1->Scale.x < 1.5f)
			{
				v1->Scale.x = v1->Scale.x*1.05f;
				v1->Scale.y = v1->Scale.y*1.05f;
				v1->Scale.z = v1->Scale.z*1.05f;
				if (v1->Scale.y >= 1.5f)
				{
					v1->Scale.x = 1.5f;
					v1->Scale.y = 1.5f;
					v1->Scale.z = 1.5f;
				}
			}
			if (ChallengeAction == true && IsPlayerInsideSphere(&v1->Position, 15))
			{
				if (CollectedAll >= 5)
				{
					if (HintTimer <= 0)
					{
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
						sub_4B79C0((char *)(&FamitsuMessage10), 180);
						Collected1 = false;
						Collected2 = false;
						Collected3 = false;
						Collected4 = false;
						Collected5 = false;
						CollectedAll = 0;
						ChallengeAction = false;
						ChallengeTimer = 0;
						HintTimer = 60;
					}
				}
				else
				{
					if (HintTimer <= 0)
					{
						PlaySound(6, 0, 0, 0);
						sub_4B79C0((char *)(&FamitsuMessage2), 180);
						HintTimer = 120;
					}
				}
			}
		}
		if (v1->Scale.x > 0.05f) Balloons_Display(a1);
	}
}

void Timer_Display(ObjectMaster *a1)
{
	HedgehogCountTexanim.sx = 16 * HorizontalStretch;
	HedgehogCountTexanim.sy = 16 * HorizontalStretch;
	HedgehogCountSlashTexanim.sx = 16 * HorizontalStretch;
	HedgehogCountSlashTexanim.sy = 16 * HorizontalStretch;
	HedgehogCountTotalTexanim.sx = 16 * HorizontalStretch;
	HedgehogCountTotalTexanim.sy = 16 * HorizontalStretch;
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
	HedgehogCountTexanim.texid = CollectedAll;
	njDrawSprite2D_3(&HedgehogCount, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw slash
	HedgehogCountSlashTexanim.texid = 73;
	njDrawSprite2D_3(&HedgehogCountSlash, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw total
	HedgehogCountTotalTexanim.texid = 5;
	njDrawSprite2D_3(&HedgehogCountTotal, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer tenminutes
	TimerTenMinutesTexanim.texid = (ChallengeTimer / 72000) % 10;
	njDrawSprite2D_3(&TimerTenMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer minutes
	TimerMinutesTexanim.texid = (ChallengeTimer / 7200) % 10;
	njDrawSprite2D_3(&TimerMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw minute colon
	TimerColon1Texanim.texid = 10;
	njDrawSprite2D_3(&TimerColon1, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer tenseconds
	TimerTenSecondsTexanim.texid = (ChallengeTimer / 1200) % 6;
	njDrawSprite2D_3(&TimerTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer seconds
	TimerSecondsTexanim.texid = (ChallengeTimer / 120) % 10;
	njDrawSprite2D_3(&TimerSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw minute colon
	TimerColon2Texanim.texid = 10;
	njDrawSprite2D_3(&TimerColon2, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer militenseconds
	TimerMTenSecondsTexanim.texid = (ChallengeTimer /10) % 10;
	njDrawSprite2D_3(&TimerMTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	//Draw timer miliseconds
	TimerMSecondsTexanim.texid = ChallengeTimer % 10;
	njDrawSprite2D_3(&TimerMSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	ClampGlobalColorThing_Thing();
}

void Timer_Main(ObjectMaster *a1)
{
	if (ChallengeTimer < 72000) //72000
	{
		if (ChallengeAction == true)
		{
			CollectedAll = Collected1 + Collected2 + Collected3 + Collected4 + Collected5;
			ChallengeTimer++;
			Timer_Display(a1);
		}
	}
	if (ChallengeTimer >= 72000)
	{
		ChallengeAction = false;
		ChallengeTimer = 0;
		sub_4B79C0((char *)(&FamitsuMessage3), 180);
	}
}

void Timer_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Timer_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Timer_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void Balloons_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))Balloons_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))Balloons_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void LoadEverythingInStationSquare(ObjectMaster *a1)
{
	sub_62E980();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Balloons_Load);
	ObjectFunc(OF1, Poster_Load);
	ObjectFunc(OF2, Timer_Load);
	setdata_dlc.Distance = 612800.0f;
	if (GameMode == GameModes_Adventure_Field)
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
			//Balloons
			obj = LoadObject((LoadObj)2, 3, OF0);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 102;
				ent->Position.y = 30;
				ent->Position.z = 1495;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				if (ChallengeAction == false)
				{
					ent->Scale.x = 1.5f;
					ent->Scale.y = 1.5f;
					ent->Scale.z = 1.5f;
				}
				else
				{
					ent->Scale.x = 0.05f;
					ent->Scale.y = 0.05f;
					ent->Scale.z = 0.05f;
				}
				ent->CharIndex = 9;
				ent->CharID = 10;
				ent->NextAction = 3;
			}
			obj = LoadObject((LoadObj)2, 3, OF0);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -15;
				ent->Position.y = 105;
				ent->Position.z = 1305;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->CharIndex = 1;
				ent->Rotation.z = 0;
				if (ChallengeAction == true)
				{
					ent->Scale.x = 1.5f;
					ent->Scale.y = 1.5f;
					ent->Scale.z = 1.5f;
				}
				else
				{
					ent->Scale.x = 0.05f;
					ent->Scale.y = 0.05f;
					ent->Scale.z = 0.05f;
				}
				ent->CharID = 10;
				ent->NextAction = 1;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 435;
				ent->Position.y = 26;
				ent->Position.z = 652;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0x4000;
				ent->Rotation.z = 0;
				ent->CharIndex = 5;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->NextAction = 0;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -275;
				ent->Position.y = -10;
				ent->Position.z = 1938;
				ent->Rotation.x = 0x4000;
				ent->Rotation.y = 0x4000;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 6;
				ent->NextAction = 4;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -535;
				ent->Position.y = 27;
				ent->Position.z = 1458;
				ent->Rotation.x = 0x4000;
				ent->Rotation.y = 0x4000;
				ent->Rotation.z = 0;
				ent->CharIndex = 7;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->NextAction = 1;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -66;
				ent->Position.y = 229;
				ent->Position.z = 1205;
				ent->Rotation.x = 0x4000;
				ent->Rotation.y = 0x93E9;
				ent->Rotation.z = 0;
				ent->CharIndex = 8;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->NextAction = 1;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 236;
				ent->Position.y = 18;
				ent->Position.z = 1033;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 4;
				ent->NextAction = 3;
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
			WriteCall((void*)0x004B793E, StopVoicesButMaybeNot);
			helperFunctions.RegisterCommonObjectPVM(FamitsuTextures);
			helperFunctions.RegisterCommonObjectPVM(TimerTextures);
			WriteCall((void*)0x0062F098, LoadEverythingInStationSquare);
			WriteCall((void*)0x0062F102, LoadEverythingInStationSquare);
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		HMODULE DC_ADV00MODELS = GetModuleHandle(L"DC_ADV00MODELS");
		NJS_OBJECT **___ADV00SS01_OBJECTS = (NJS_OBJECT **)GetProcAddress(ADV00MODELS, "___ADV00SS01_OBJECTS");
		if (ModFailsafe == false && GameState != 16)
		{
			if (GameState == 6)
			{
				ObjectsLoaded = false;
				Collected1 = false;
				Collected2 = false;
				Collected3 = false;
				Collected4 = false;
				Collected5 = false;
				CollectedAll = 0;
				ChallengeAction = false;
				ChallengeTimer = 0;
			}
			if (HintTimer > 0) HintTimer--;
			if (DC_ADV00MODELS == nullptr && ChallengeAction == true && ADV00MODELS!=nullptr)
			{
				COL_whatever.Flags = 0x80040000;
				___ADV00SS01_OBJECTS[28]->pos[1] = 20;
			}
			if (CurrentLevel != 26 || GameMode != GameModes_Adventure_Field)
			{
				ObjectsLoaded = false;
				Collected1 = false;
				Collected2 = false;
				Collected3 = false;
				Collected4 = false;
				Collected5 = false;
				CollectedAll = 0;
				ChallengeAction = false;
				ChallengeTimer = 0;
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
				Collected1 = false;
				Collected2 = false;
				Collected3 = false;
				Collected4 = false;
				Collected5 = false;
				ChallengeTimer = 0;
				ChallengeAction = false;
			}
		}
	}
}