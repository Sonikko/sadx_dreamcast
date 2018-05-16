// AT&T DLC functions.
#include <stdafx.h>
#include "ATT.h"
#include "Data/DLC_ATT.h"

const PVMEntry ATT1Textures = { "SONICADV_504", (TexList *)&texlist_att1 };
const PVMEntry ATT2Textures = { "SONICADV_506", (TexList *)&texlist_att2 };
const PVMEntry ATT3Textures = { "SONICADV_508", (TexList *)&texlist_att3 };

static void ATTTimer_Display(ObjectMaster *a1)
{
	if (CurrentCharacter == 0)
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
		njDrawSprite2D_ForcePriority(&TimerTenMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer minutes
		TimerMinutesTexanim.texid = ((ChallengeTimer / 3600) % 60) % 10;
		njDrawSprite2D_ForcePriority(&TimerMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw minute colon
		TimerColon1Texanim.texid = 10;
		njDrawSprite2D_ForcePriority(&TimerColon1, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer tenseconds
		TimerTenSecondsTexanim.texid = (((ChallengeTimer / 60) % 60) / 10) % 10;
		njDrawSprite2D_ForcePriority(&TimerTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer seconds
		TimerSecondsTexanim.texid = ((ChallengeTimer / 60) % 60) % 10;
		njDrawSprite2D_ForcePriority(&TimerSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw minute colon
		TimerColon2Texanim.texid = 10;
		njDrawSprite2D_ForcePriority(&TimerColon2, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer militenseconds
		TimerMTenSecondsTexanim.texid = (((ChallengeTimer * 5 / 3) % 1000) / 10) % 10;
		njDrawSprite2D_ForcePriority(&TimerMTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer miliseconds
		TimerMSecondsTexanim.texid = ((ChallengeTimer * 5 / 3) % 1000) % 10;
		njDrawSprite2D_ForcePriority(&TimerMSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		ClampGlobalColorThing_Thing();
	}
	if (CurrentCharacter == 3)
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
		njDrawSprite2D_ForcePriority(&CardCount, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw slash
		CardCountSlashTexanim.texid = 73;
		njDrawSprite2D_ForcePriority(&CardCountSlash, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw total
		CardCountTotalTexanim.texid = 4;
		njDrawSprite2D_ForcePriority(&CardCountTotal, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer tenminutes
		TimerTenMinutesTexanim.texid = (((ChallengeTimer / 3600) % 60) / 10) % 10;
		njDrawSprite2D_ForcePriority(&TimerTenMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer minutes
		TimerMinutesTexanim.texid = ((ChallengeTimer / 3600) % 60) % 10;
		njDrawSprite2D_ForcePriority(&TimerMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw minute colon
		TimerColon1Texanim.texid = 10;
		njDrawSprite2D_ForcePriority(&TimerColon1, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer tenseconds
		TimerTenSecondsTexanim.texid = (((ChallengeTimer / 60) % 60) / 10) % 10;
		njDrawSprite2D_ForcePriority(&TimerTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer seconds
		TimerSecondsTexanim.texid = ((ChallengeTimer / 60) % 60) % 10;
		njDrawSprite2D_ForcePriority(&TimerSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw minute colon
		TimerColon2Texanim.texid = 10;
		njDrawSprite2D_ForcePriority(&TimerColon2, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer militenseconds
		TimerMTenSecondsTexanim.texid = (((ChallengeTimer * 5 / 3) % 1000) / 10) % 10;
		njDrawSprite2D_ForcePriority(&TimerMTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer miliseconds
		TimerMSecondsTexanim.texid = ((ChallengeTimer * 5 / 3) % 1000) % 10;
		njDrawSprite2D_ForcePriority(&TimerMSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		ClampGlobalColorThing_Thing();
	}
	if (CurrentCharacter == 2)
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
		njDrawSprite2D_ForcePriority(&CardTenCount, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw count
		if (CollectedAll < 10) CardCountTexanim.texid = CollectedAll; else CardCountTexanim.texid = 0;
		njDrawSprite2D_ForcePriority(&CardCount, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw slash
		CardCountSlashTexanim.texid = 73;
		njDrawSprite2D_ForcePriority(&CardCountSlash, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw total
		CardCountTotalTexanim.texid = 1;
		njDrawSprite2D_ForcePriority(&CardCountTotal, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw total 2
		CardCountTotal2Texanim.texid = 0;
		njDrawSprite2D_ForcePriority(&CardCountTotal2, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer tenminutes
		TimerTenMinutesTexanim.texid = (((ChallengeTimer / 3600) % 60) / 10) % 10;
		njDrawSprite2D_ForcePriority(&TimerTenMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer minutes
		TimerMinutesTexanim.texid = ((ChallengeTimer / 3600) % 60) % 10;
		njDrawSprite2D_ForcePriority(&TimerMinutes, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw minute colon
		TimerColon1Texanim.texid = 10;
		njDrawSprite2D_ForcePriority(&TimerColon1, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer tenseconds
		TimerTenSecondsTexanim.texid = (((ChallengeTimer / 60) % 60) / 10) % 10;
		njDrawSprite2D_ForcePriority(&TimerTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer seconds
		TimerSecondsTexanim.texid = ((ChallengeTimer / 60) % 60) % 10;
		njDrawSprite2D_ForcePriority(&TimerSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw minute colon
		TimerColon2Texanim.texid = 10;
		njDrawSprite2D_ForcePriority(&TimerColon2, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer militenseconds
		TimerMTenSecondsTexanim.texid = (((ChallengeTimer * 5 / 3) % 1000) / 10) % 10;
		njDrawSprite2D_ForcePriority(&TimerMTenSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		//Draw timer miliseconds
		TimerMSecondsTexanim.texid = ((ChallengeTimer * 5 / 3) % 1000) % 10;
		njDrawSprite2D_ForcePriority(&TimerMSeconds, 0, 22046.498f, NJD_SPRITE_ALPHA);
		ClampGlobalColorThing_Thing();
	}
}

static void ATTTimer_Main(ObjectMaster *a1)
{
	if (CurrentCharacter == 0)
	{
		if (ChallengeAction == true)
		{
			ChallengeTimer++;
			ATTTimer_Display(a1);
		}
		if (((((ChallengeTimer / 3600) % 60) / 10) % 10) >= 1)
		{
			ChallengeOver = true;
		}
	}
	if (CurrentCharacter == 3)
	{
		CollectedAll = Treasure1 + Treasure2 + Treasure3 + Treasure4;
		if (ChallengeAction == true)
		{
			ChallengeTimer++;
			ATTTimer_Display(a1);
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
	if (CurrentCharacter == 2)
	{
		CollectedAll = Gate1 + Gate2 + Gate3 + Gate4 + Gate5 + Gate6 + Gate7 + Gate8 + Gate9 + Gate10;
		if (ChallengeAction == true)
		{
			ChallengeTimer++;
			ATTTimer_Display(a1);
		}
		if ((((ChallengeTimer / 3600) % 60) % 10) >= 3 && ChallengeOver == false)
		{
			ChallengeOver = true;
			sub_4B79C0((char *)(&ATT3_Message2), 120);
		}
		if (ChallengeAction == true && ChallengeTimer % 3600 == 0)
		{
			PlaySound(4, 0, 0, 0);
		}
	}
}

void ATTTimer_Load(ObjectMaster *a1)
{
	a1->MainSub = (void(__cdecl *)(ObjectMaster *))ATTTimer_Main;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ATTTimer_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

static void ATTObject_Display(ObjectMaster *a1)
{
	EntityData1 *v1;
	Angle v2;
	Angle v3;
	Angle v4;
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		if (CurrentCharacter == 0)
		{
			njSetTexture(&texlist_att1);
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.x;
			v3 = v1->Rotation.y;
			v4 = v1->Rotation.z;
			njRotateXYZ(0, v2, v3, v4);
			njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
			if (v1->CharID == 10) ProcessModelNode_AB_Wrapper(&poster_att1_big, v1->Scale.x);
			if (v1->CharID == 12) ProcessModelNode_AB_Wrapper(&object_00000CE4, v1->Scale.x);
			if (v1->CharID == 13)
			{
				if (v1->Action == 1)
				{
					matlist_att1Z[0].attrflags |= NJD_FLAG_USE_ALPHA;
					if (matlist_att1Z[0].diffuse.argb.a > 8) matlist_att1Z[0].diffuse.argb.a = matlist_att1Z[0].diffuse.argb.a - 8;
				}
				else
				{
					matlist_att1Z[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
					if (matlist_att1Z[0].diffuse.argb.a < 255) matlist_att1Z[0].diffuse.argb.a = matlist_att1Z[0].diffuse.argb.a + 8;
				}
				if (matlist_att1Z[0].diffuse.argb.a > 255) matlist_att1Z[0].diffuse.argb.a = 255;
				ProcessModelNode_AB_Wrapper(&poster_att1_start, v1->Scale.x);
			}
			if (v1->CharID == 14 && HighwayGoal == true)
			{
				if (v1->Action == 1)
				{
					matlist_att1W[0].attrflags |= NJD_FLAG_USE_ALPHA;
					if (matlist_att1W[0].diffuse.argb.a > 8) matlist_att1W[0].diffuse.argb.a = matlist_att1W[0].diffuse.argb.a - 8;
				}
				else
				{
					matlist_att1W[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
					if (matlist_att1W[0].diffuse.argb.a < 255) matlist_att1W[0].diffuse.argb.a = matlist_att1W[0].diffuse.argb.a + 8;
				}
				if (matlist_att1W[0].diffuse.argb.a > 255) matlist_att1W[0].diffuse.argb.a = 255;
				ProcessModelNode_AB_Wrapper(&poster_att1_goal, v1->Scale.x);
			}
			njPopMatrix(1u);
		}
		if (CurrentCharacter == 3)
		{
			njSetTexture(&texlist_att2);
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.x;
			v3 = v1->Rotation.y;
			v4 = v1->Rotation.z;
			njRotateXYZ(0, v2, v3, v4);
			njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
			if (v1->CharID == 21) ProcessModelNode_AB_Wrapper(&object_000006D0, v1->Scale.x);
			if (v1->CharID == 22)
			{
				if (v1->Action == 1)
				{
					matlist_att2W[0].attrflags |= NJD_FLAG_USE_ALPHA;
					if (matlist_att2W[0].diffuse.argb.a > 8) matlist_att2W[0].diffuse.argb.a = matlist_att2W[0].diffuse.argb.a - 8;
				}
				else
				{
					matlist_att2W[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
					if (matlist_att2W[0].diffuse.argb.a < 255) matlist_att2W[0].diffuse.argb.a = matlist_att2W[0].diffuse.argb.a + 8;
				}
				if (matlist_att2W[0].diffuse.argb.a > 255) matlist_att2W[0].diffuse.argb.a = 255;
				ProcessModelNode_AB_Wrapper(&poster_att2_goal, v1->Scale.x);
			}
			if (v1->CharID == 23)
			{
				if (v1->Action == 1)
				{
					matlist_att2Z[0].attrflags |= NJD_FLAG_USE_ALPHA;
					if (matlist_att2Z[0].diffuse.argb.a > 8) matlist_att2Z[0].diffuse.argb.a = matlist_att2Z[0].diffuse.argb.a - 8;
				}
				else
				{
					matlist_att2Z[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
					if (matlist_att2Z[0].diffuse.argb.a < 255) matlist_att2Z[0].diffuse.argb.a = matlist_att2Z[0].diffuse.argb.a + 8;
				}
				if (matlist_att2Z[0].diffuse.argb.a > 255) matlist_att2Z[0].diffuse.argb.a = 255;
				ProcessModelNode_AB_Wrapper(&poster_att2_start, v1->Scale.x);
			}
			njPopMatrix(1u);
		}
		if (CurrentCharacter == 2)
		{
			njSetTexture(&texlist_att3);
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.x;
			v3 = v1->Rotation.y;
			v4 = v1->Rotation.z;
			njRotateXYZ(0, v2, v3, v4);
			njScale(0, v1->Scale.x, v1->Scale.y, v1->Scale.z);
			if (v1->CharID == 31) ProcessModelNode_AB_Wrapper(&poster_att3, v1->Scale.x);
			if (v1->CharID == 32) ProcessModelNode_AB_Wrapper(&poster_att3_att, v1->Scale.x);
			if (v1->CharID == 33)
			{
				if (v1->Action == 1)
				{
					matlist_att3Z[0].attrflags |= NJD_FLAG_USE_ALPHA;
					if (matlist_att3Z[0].diffuse.argb.a > 8) matlist_att3Z[0].diffuse.argb.a = matlist_att3Z[0].diffuse.argb.a - 8;
				}
				else
				{
					matlist_att3Z[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
					if (matlist_att3Z[0].diffuse.argb.a < 255) matlist_att3Z[0].diffuse.argb.a = matlist_att3Z[0].diffuse.argb.a + 8;
				}
				if (matlist_att3Z[0].diffuse.argb.a > 255) matlist_att3Z[0].diffuse.argb.a = 255;
				ProcessModelNode_AB_Wrapper(&poster_att3_start, v1->Scale.x);
			}
			if (v1->CharID == 34) ProcessModelNode_AB_Wrapper(&object_00001210, v1->Scale.x);
			if (v1->CharID == 35)
			{
				if (v1->Action == 1)
				{
					matlist_att3W[0].attrflags |= NJD_FLAG_USE_ALPHA;
					if (matlist_att3W[0].diffuse.argb.a > 8) matlist_att3W[0].diffuse.argb.a = matlist_att3W[0].diffuse.argb.a - 8;
				}
				else
				{
					matlist_att3W[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
					if (matlist_att3W[0].diffuse.argb.a < 255) matlist_att3W[0].diffuse.argb.a = matlist_att3W[0].diffuse.argb.a + 8;
				}
				if (matlist_att3W[0].diffuse.argb.a > 255) matlist_att3W[0].diffuse.argb.a = 255;
				ProcessModelNode_AB_Wrapper(&poster_att3_goal, v1->Scale.x);
			}
			njPopMatrix(1u);
		}
	}
}

static void ATTObject_Main(ObjectMaster *a1)
{
	EntityData1 *v1;
	v1 = a1->Data1;
	Angle v2;
	int v3;
	v3 = (v1->Index) * 16;
	v2 = (v1->Rotation.y + v3) % 65535;
	v1->Rotation.y = v2;
	if (CurrentCharacter == 0)
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
		if (v1->Action != 1 && IsPlayerInsideSphere(&v1->Position, 15))
		{
			if (HintTimer <= 0)
			{
				//Go back to Station Square
				if (v1->CharIndex == 7 && ChallengeAction == true)
				{
					PlaySound(12, 0, 0, 0);
					sub_4B79C0((char *)(&ATT1_Message4), 180);
					HighwayGoal = true;
					v1->Action = 1;
					sub_412D80(LevelIDs_StationSquare, 3);
					HintTimer = 120;
				}
				//Start plate
				if (v1->CharIndex == 3 && ChallengeAction == false)
				{
					PlaySound(12, 0, 0, 0);
					sub_4B79C0((char *)(&ATT1_Message5), 180);
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
					sub_4B79C0((char *)(&ATT1_Message7), 180);
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
					sub_4B79C0((char *)(&ATT1_Message3), 180);
					ChallengeAction = false;
					ChallengeOver = false;
					ChallengeTimer = 0;
					HintTimer = 300;
				}
				//Poster 1
				if (v1->CharIndex == 6 && CurrentLevel == 26)
				{
					PlaySound(23, 0, 0, 0);
					sub_4B79C0((char *)(&ATT1_Message2), 180);
					HintTimer = 60;
				}
				//Poster 2
				if (v1->CharIndex == 5 && CurrentLevel == 26)
				{
					PlaySound(23, 0, 0, 0);
					sub_4B79C0((char *)(&ATT1_Message1), 180);
					HintTimer = 60;
				}
				//You can't continue from here
				if (v1->CharIndex == 10)
				{
					PlaySound(23, 0, 0, 0);
					sub_4B79C0((char *)(&ATT1_Message6), 180);
					HintTimer = 60;
				}
			}
		}
		if (v1->Scale.x > 0.1f) ATTObject_Display(a1);
	}
	if (CurrentCharacter == 3)
	{
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
					if (v1->CharID == 24 && ChallengeAction == true)
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
					if (v1->CharID == 21)
					{
						switch (v1->CharIndex)
						{
						case 0:
							sub_4B79C0((char *)(&ATT2_Message0), 120);
							break;
						case 1:
							sub_4B79C0((char *)(&ATT2_Message1), 120);
							break;
						case 2:
							sub_4B79C0((char *)(&ATT2_Message2), 120);
							break;
						case 3:
							sub_4B79C0((char *)(&ATT2_Message3), 120);
							break;
						case 4:
							sub_4B79C0((char *)(&ATT2_Message4), 120);
							break;
						case 9:
							sub_4B79C0((char *)(&ATT2_Message9), 120);
							break;
						case 10:
							sub_4B79C0((char *)(&ATT2_Message10), 120);
							break;
						case 11:
							sub_4B79C0((char *)(&ATT2_Message11), 120);
							break;
						case 12:
							sub_4B79C0((char *)(&ATT2_Message12), 120);
							break;
						case 13:
							sub_4B79C0((char *)(&ATT2_Message13), 120);
							break;
						case 14:
							sub_4B79C0((char *)(&ATT2_Message14), 120);
							break;
						case 15:
							sub_4B79C0((char *)(&ATT2_Message15), 120);
							break;
						default:
							break;
						}
						HintTimer = 120;
					}
					//Start plate
					if (v1->CharID == 23 && ChallengeAction == false)
					{
						PlaySound(5, 0, 0, 0);
						ChallengeAction = true;
						sub_4B79C0((char *)(&ATT2_Message3), 120);
						HintTimer = 120;
					}
					//Goal plate (not all treasures collected)
					if (v1->CharID == 22 && CollectedAll < 4 && ChallengeOver == false)
					{
						v1->Action = 1;
						PlaySound(23, 0, 0, 0);
						sub_4B79C0((char *)(&ATT2_Message16), 180);
						HintTimer = 360;
					}
					//Goal plate (all treasures collected)
					if (v1->CharID == 22 && CollectedAll >= 4 && ChallengeOver == false)
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
					if (v1->CharID == 22 && ChallengeOver == true)
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
			if (v1->Scale.x > 0.1f) ATTObject_Display(a1);
		}
	}
	if (CurrentCharacter == 2)
	{
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
					if (v1->CharID == 34 && ChallengeAction == true && IsPlayerInsideSphere(&v1->Position, 35))
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
					if (v1->CharID == 31 && CurrentLevel == 26 && IsPlayerInsideSphere(&v1->Position, 15))
					{
						sub_4B79C0((char *)(&ATT3_Message5), 180);
						HintTimer = 180;
					}
					//Start plate
					if (v1->CharID == 33 && ChallengeAction == false)
					{
						v1->Action = 1;
						PlaySound(5, 0, 0, 0);
						ChallengeAction = true;
						sub_4B79C0((char *)(&ATT3_Message3), 120);
						HintTimer = 60;
					}
					//Goal plate (not all Gates passed)
					if (v1->CharID == 35 && CollectedAll < 10 && ChallengeOver == false)
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
					if (v1->CharID == 35 && CollectedAll >= 10 && ChallengeOver == false)
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
					if (v1->CharID == 35 && ChallengeOver == true)
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
			if (v1->Scale.x > 0.1f) ATTObject_Display(a1);
		}
	}
}

void ATTObject_Load(ObjectMaster *a1)
{
	Angle Wha;
	NJS_OBJECT *v5;
	EntityData1 *v1;
	v1 = a1->Data1;
	v5 = nullptr;
	if (CurrentCharacter == 0)
	{
		//Rotating platform
		if (v1->CharID == 12)
		{
			v5 = sub_49D6C0(&object_00000CE4, a1, (ColFlags)0x10001001);
			v5->scl[0] = 1.0f;
			v5->scl[1] = 1.0f;
			v5->scl[2] = 1.0f;
		}
		//Billboard
		if (v1->CharID == 10 && v1->CharIndex != 7)
		{
			v5 = sub_49D6C0(&poster_att1_big, a1, (ColFlags)0x20001001);
			v5->scl[0] = v1->Scale.x;
			v5->scl[1] = v1->Scale.y;
			v5->scl[2] = v1->Scale.z;
			v5->ang[0] = v1->Rotation.x;
			v5->ang[1] = v1->Rotation.y;
			v5->ang[2] = v1->Rotation.z;
		}
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))ATTObject_Main;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ATTObject_Display;
	}
	if (CurrentCharacter == 3)
	{
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))ATTObject_Main;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ATTObject_Display;
	}
	if (CurrentCharacter == 2)
	{
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
		a1->MainSub = (void(__cdecl *)(ObjectMaster *))ATTObject_Main;
		a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))ATTObject_Display;
	}
}
