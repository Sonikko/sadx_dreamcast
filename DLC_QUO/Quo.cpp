#include "stdafx.h"
#include <SADXModLoader.h>
#include "Quo.h"
#include <cstdio>

FunctionPointer(void, sub_412D80, (int a1, int a2), 0x412D80);
FunctionPointer(void, sub_62E980, (), 0x62E980);
FunctionPointer(void, sub_52F240, (), 0x52F240);
FunctionPointer(void, sub_4B79C0, (char *a1, int a2), 0x4B79C0);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, FramerateSetting, 0x0389D7DC);

static bool ModFailsafe = false;
static int PreviousLevel = 0;
static int PreviousAct = 0;
static int HintTimer = 0;
static int CollectedAll = 0;
static bool CollectedSS1 = false;
static bool CollectedSS2 = false;
static bool CollectedSS3 = false;
static bool CollectedMR1 = false;
static bool CollectedMR2 = false;
static bool CollectedMR3 = false;
static bool ObjectsLoaded_SS = false;
static bool ObjectsLoaded_MR = false;
static bool TimerLoaded = false;
static int ChallengeTimer = 0;
static int ChallengeAction = false;
char ResultText[100];
SETObjData setdata_dlc = {};
PVMEntry QuoTextures = { "SONICADV_002", (TexList *)&texlist_quo };
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

char *QuoMessage1[] = {
	"\aRush to the Mystic Ruins goal, now!",
	NULL,
};

char *QuoMessage2[] = {
	"\aYou aren't done yet!\nFind the remaining QUO cards!",
	"\aTo quit the challenge,\npress Y in the pause menu.",
	NULL,
};

char *QuoMessage3[] = {
	"\aTime over!\nTry again from the beginning.",
	NULL,
};

char* QuoMessage4[] = {
	"\a      - Challenge start -      \nCollect 6 MD Yukawa QUO cards!",
	NULL,
};

char *QuoMessage5[] = {
	"\aOops, you've got the old man there!\n      - Hidekazu Yukawa -      ",
	NULL,
};

char *QuoMessage6[] = {
	"\aSo you found me, huh.\n      - Hidekazu Yukawa -      ",
	NULL,
};

char *QuoMessage7[] = {
	"\aThe Hidekazu Yukawa man is going\nto work even harder from now on.",
	"\a      - Hidekazu Yukawa -      ",
	NULL,
};

char *QuoMessage8[] = {
	"\aYou might break a nail\nif you fell from here.",
	"\a      - Hidekazu Yukawa -      ",
	NULL,
};

char *QuoMessage9[] = {
	"\aOoh! You've gone so far to find these!\n      - Hidekazu Yukawa -      ",
	NULL,
};

char *QuoMessage10[] = {
	"\aThe cards can be used nationwide.\nUse them well!",
	"\a      - Hidekazu Yukawa -      ",
	NULL,
};

char *QuoMessage11[] = {
	"\aCongratulations!\nYou've cleared the card hunting game!",
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
	int RotationSpeed;
	v1 = a1->Data1;
	if (!DroppedFrames && GameState != 16)
	{
		njSetTexture(&texlist_quo);
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
	Angle v3;
	int SpeedY;
	v1 = a1->Data1;
	if (v1->Action == CurrentLevel && v1->NextAction == CurrentAct)
	{
		if (ChallengeAction == false)
		{
			CollectedSS1 = false;
			CollectedSS2 = false;
			CollectedSS3 = false;
			CollectedMR1 = false;
			CollectedMR2 = false;
			CollectedMR3 = false;
		}
		else
		{
			if ((CollectedSS1 == false && v1->Index == 0) || (CollectedSS2 == false && v1->Index == 1) || (CollectedSS3 == false && v1->Index == 2) || (CollectedMR1 == false && v1->Index == 3) || (CollectedMR2 == false && v1->Index == 4) || (CollectedMR3 == false && v1->Index == 5))
			{
				v1->Scale.x = 1.0f;
				v1->Scale.y = 1.0f;
				v1->Scale.z = 1.0f;
				if (IsPlayerInsideSphere(&v1->Position, 15))
				{
					if (v1->Index == 0)
					{
						CollectedSS1 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage5), 180);
						HintTimer = 60;
					}
					if (v1->Index == 1)
					{
						CollectedSS2 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage6), 180);
						HintTimer = 60;
					}
					if (v1->Index == 2)
					{
						CollectedSS3 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage7), 180);
						HintTimer = 60;
					}
					if (v1->Index == 3)
					{
						CollectedMR1 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage10), 180);
						HintTimer = 60;
					}
					if (v1->Index == 4)
					{
						CollectedMR2 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage8), 180);
						HintTimer = 60;
					}
					if (v1->Index == 5)
					{
						CollectedMR3 = true;
						PlaySound(30, 0, 0, 0);
						if (CollectedSS1 == true && CollectedSS2 == true && CollectedSS3 == true && CollectedMR1 == true && CollectedMR2 == true && CollectedMR3 == true) sub_4B79C0((char *)(&QuoMessage1), 180); else sub_4B79C0((char *)(&QuoMessage9), 180);
						HintTimer = 60;
					}
				}
			}
			if ((CollectedSS1 == true && v1->Index == 0) || (CollectedSS2 == true && v1->Index == 1) || (CollectedSS3 == true && v1->Index == 2) || (CollectedMR1 == true && v1->Index == 3) || (CollectedMR2 == true && v1->Index == 4) || (CollectedMR3 == true && v1->Index == 5))
			{
				if (v1->Scale.x > 0.05f)
				{
					v1->Scale.x = v1->Scale.x*0.9f;
					v1->Scale.y = v1->Scale.y*0.9f;
					v1->Scale.z = v1->Scale.z*0.9f;
				}
			}
			SpeedY = v1->CharID;
			v3 = v1->Rotation.y;
			v3 = (v3 + SpeedY * 16) % 65535;
			v1->Rotation.y = v3;
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
		njSetTexture(&texlist_quo);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		njRotateXYZ(0, v2, v3, v4);
		if (v1->CharIndex == 3) ProcessModelNode_AB_Wrapper(&balloon_start, v1->Scale.x);
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
	if (v1->Action == CurrentLevel && v1->NextAction == CurrentAct)
	{
		SpeedY = (v1->CharID) * 16;
		v2 = v1->Rotation.x;
		v3 = v1->Rotation.y;
		v4 = v1->Rotation.z;
		v3 = (v3 + int(SpeedY)) % 65535;
		v1->Rotation.y = v3;
		if (v1->CharIndex == 3)
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
					sub_4B79C0((char *)(&QuoMessage4), 180);
					CollectedSS1 = false;
					CollectedSS2 = false;
					CollectedSS3 = false;
					CollectedMR1 = false;
					CollectedMR2 = false;
					CollectedMR3 = false;
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
				if (CollectedAll >= 6)
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
						sub_4B79C0((char *)(&QuoMessage11), 180);
						CollectedSS1 = false;
						CollectedSS2 = false;
						CollectedSS3 = false;
						CollectedMR1 = false;
						CollectedMR2 = false;
						CollectedMR3 = false;
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
						sub_4B79C0((char *)(&QuoMessage2), 180);
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
	CardCountTotalTexanim.texid = 6;
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
	TimerMSecondsTexanim.texid = ((ChallengeTimer *5/3) % 1000) % 10;
	njDrawSprite2D_3(&TimerMSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
	ClampGlobalColorThing_Thing();
}

void Timer_Main(ObjectMaster *a1)
{
	if (((ChallengeTimer / 3600) % 60) / 10 < 1)
	{
		if (ChallengeAction == true)
		{
			CollectedAll = CollectedSS1 + CollectedSS2 + CollectedSS3 + CollectedMR1 + CollectedMR2 + CollectedMR3;
			ChallengeTimer++;
			Timer_Display(a1);
		}
	}
	if (((ChallengeTimer / 3600) % 60) / 10 >= 1)
	{
		ChallengeAction = false;
		ChallengeTimer = 0;
		sub_4B79C0((char *)(&QuoMessage3), 180);
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

void LoadEverythingInStationSquareOrMysticRuinsActually(ObjectMaster *a1)
{
	if (CurrentLevel == 26) sub_62E980();
	if (CurrentLevel == 33) sub_52F240();
	ObjectMaster *obj;
	EntityData1 *ent;
	ObjectFunc(OF0, Balloons_Load);
	ObjectFunc(OF1, Poster_Load);
	ObjectFunc(OF2, Timer_Load);
	setdata_dlc.Distance = 612800.0f;
	if (GameMode == GameModes_Adventure_Field)
	{
		if (TimerLoaded == false)
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
			TimerLoaded = true;
		}
		//Station Square objects
		if (CurrentLevel == 26 && ObjectsLoaded_SS == false)
		{
			//Balloon
			obj = LoadObject((LoadObj)2, 3, OF0);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 44;
				ent->Position.y = 50;
				ent->Position.z = 1418;
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
				ent->CharIndex = 3;
				ent->CharID = 10;
				ent->Action = 26;
				ent->NextAction = 3;
			}
			//Cards
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -163;
				ent->Position.y = 60;
				ent->Position.z = 1788;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0x6000;
				ent->Rotation.z = 0;
				ent->CharIndex = 4;
				//ent->CharID = 10;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->Action = 26;
				ent->NextAction = 3;
				ent->Index = 0;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 540;
				ent->Position.y = -14;
				ent->Position.z = 1377;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->CharIndex = 5;
				ent->Action = 26;
				ent->NextAction = 3;
				ent->CharID = 10;
				ent->Index = 1;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 161;
				ent->Position.y = 23;
				ent->Position.z = 1260;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0x4000;
				ent->Rotation.z = 0;
				ent->CharIndex = 6;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				//ent->CharID = 0;
				ent->Action = 26;
				ent->NextAction = 3;
				ent->Index = 2;
			}
			ObjectsLoaded_SS = true;
		}
		//Mystic Ruins objects
		if (CurrentLevel == 33 && ObjectsLoaded_MR == false)
		{
			//Balloon
			obj = LoadObject((LoadObj)2, 3, OF0);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = -97;
				ent->Position.y = 107;
				ent->Position.z = 1106;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->CharIndex = 10;
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
				ent->Action = 33;
				ent->NextAction = 0;
			}
			//Cards
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 175;
				ent->Position.y = -8;
				ent->Position.z = 72;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->CharIndex = 9;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->Action = 33;
				ent->NextAction = 0;
				ent->Index = 3;
				ent->CharID = 10;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 1574;
				ent->Position.y = 12;
				ent->Position.z = 528;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->CharIndex = 5;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->Action = 33;
				ent->NextAction = 0;
				ent->Index = 4;
				ent->CharID = 10;
			}
			obj = LoadObject((LoadObj)2, 3, OF1);
			obj->SETData.SETData = &setdata_dlc;
			if (obj)
			{
				ent = obj->Data1;
				ent->Position.x = 496;
				ent->Position.y = 214;
				ent->Position.z = 502;
				ent->Rotation.x = 0;
				ent->Rotation.y = 0;
				ent->Rotation.z = 0;
				ent->CharIndex = 7;
				ent->Scale.x = 1.0f;
				ent->Scale.y = 1.0f;
				ent->Scale.z = 1.0f;
				ent->Action = 33;
				ent->NextAction = 0;
				ent->Index = 5;
				ent->CharID = 10;
			}
			ObjectsLoaded_MR = true;
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
			WriteCall((void*)0x004B793E, StopVoicesButMaybeNot);
			helperFunctions.RegisterCommonObjectPVM(QuoTextures);
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
			if (GameMode != GameModes_Adventure_Field)
			{
				CollectedAll = 0;
				CollectedSS1 = false;
				CollectedSS2 = false;
				CollectedSS3 = false;
				CollectedMR1 = false;
				CollectedMR2 = false;
				CollectedMR3 = false;
				ChallengeTimer = 0;
				ChallengeAction = false;
				ObjectsLoaded_SS = false;
				ObjectsLoaded_MR = false;
				TimerLoaded = false;
			}
			if (GameState == 6)
			{
				ObjectsLoaded_SS = false;
				ObjectsLoaded_MR = false;
				TimerLoaded = false;
			}
			if (HintTimer > 0) HintTimer--;
			if (CurrentLevel != 26)
			{
				ObjectsLoaded_SS = false;
			}
			if (CurrentLevel != 33)
			{
				ObjectsLoaded_MR = false;
			}
			if (PreviousLevel != CurrentLevel)
			{
				if (PreviousLevel == 26) ObjectsLoaded_SS = false;
				if (PreviousLevel == 33) ObjectsLoaded_MR = false;
				TimerLoaded = false;
				PreviousLevel = CurrentLevel;
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
				CollectedSS1 = false;
				CollectedSS2 = false;
				CollectedSS3 = false;
				CollectedMR1 = false;
				CollectedMR2 = false;
				CollectedMR3 = false;
				ChallengeTimer = 0;
				ChallengeAction = false;
			}
		}
	}
}