#include "stdafx.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include "Casino_objects.h"
#include "Casino1.h"
#include "Casino2.h"
#include "Casino3.h"
#include "Casino4.h"
#include "stdlib.h"
#include "Cowgirl.h"
#include <IniFile.hpp>

static short CurrentPlayer = -1;
static float distance_float;
static int anim1 = 75;
static int anim2 = 7;
static int anim1_actual = 0;
static int monitorimage = 0;
static float gearframe1 = 0;
static int anim2_actual = 0;
static int LoopDelay = 0;
static int CowgirlDelay = 0;
static int RotationAngle1 = 0;
static int RotationAngle2 = 0;
static int SoundPlayed = 0;
static int shift1 = 65;
static int shift2 = -10;
static int carduv_reala = 1;
static float cowgirlframe = 0;
static int cowgirl_shift1 = 65;
static int cowgirl_shift2 = 0;
static bool CowgirlOn = true;
FunctionPointer(void, sub_5DD900, (int a1, int a2), 0x5DD900);
FunctionPointer(void, sub_5DD920, (int a1, int a2), 0x5DD920);
FunctionPointer(void, sub_5D04C0, (ObjectMaster *a1), 0x5D04C0);
FunctionPointer(double, sub_789320, (float a2), 0x789320);
FunctionPointer(void, sub_5C09D0, (int a1), 0x5C09D0);
FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(bool, IsVisible2, (NJS_VECTOR *center, float radius), 0x00403330);
FunctionPointer(void, sub_5D4230, (int a1, int a2, int a3, float a4), 0x5D4230);
FunctionPointer(int, sub_5D4600, (int a1, int a2, float a3, int a4), 0x5D4600);
FunctionPointer(int, sub_5D4300, (int result, float a2), 0x5D4300);
FunctionPointer(void, sub_407870, (NJS_MODEL_SADX *model, char blend, float radius_scale), 0x407870);
FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
NJS_VECTOR Cowgirl1{ 457.6972f, 45.06788f, 390 };
NJS_VECTOR Cowgirl2{ 340.3949, 51.20071, 480 };
DataArray(CollisionData, stru_1E763B8, 0x1E763B8, 3);
DataPointer(ObjectMaster*, off_1E75DC8, 0x01E75DC8);
DataPointer(ObjectMaster*, off_1E75DE0, 0x01E75DE0);
DataPointer(NJS_OBJECT, stru_1E5EC4C, 0x01E5EC4C);
DataPointer(NJS_OBJECT, stru_1E5E7BC, 0x01E5E7BC);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, dword_1E77568, 0x1E77568);
DataPointer(int, MissedFrames, 0x03B1117C);

PointerInfo pointers[] = {
	ptrdecl(0x97DB28, &landtable_00025EAC),
	ptrdecl(0x97DB2C, &landtable_0006C0B4),
	ptrdecl(0x97DB30, &landtable_000AF120),
	ptrdecl(0x97DB34, &landtable_000D8440),
};

void __cdecl Loop_Display(ObjectMaster *a1)
{
	DataPointer(NJS_TEXLIST, stru_1D8B384, 0x1D8B384);
	DataPointer(NJS_SPRITE, stru_3C75098, 0x3C75098);
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6
	Angle v5; // edi@8
	double v6; // st7@9
	float v7; // [sp+8h] [bp+4h]@9

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		njSetTexture(&stru_1D8B384 + 1);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (IsPlayerInsideSphere(&v1->Position, 10.0f))
		{
			if (LoopDelay <= 0) 
			{
				PlaySound(239, 0, 0, 0);
				LoopDelay = 5;
			}
		}
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		v5 = 0;
		do
		{
			v7 = njSin(v5) * *(float *)&v1->CharIndex;
			v6 = njCos(v5) * *(float *)&v1->CharIndex;
			stru_3C75098.p.x = v7;
			stru_3C75098.p.z = 0;
			stru_3C75098.p.y = v6;
			njDrawSprite3D(&stru_3C75098, v1->Action, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE);
			v5 += 4096;
		} while (v5 < 0x10000);
		njPopMatrix(1u);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
	}
}

void __cdecl Cowgirl_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int cowgirlthing;
	char v2; // al@3
	Angle v3; // eax@5
	NJS_OBJECT *v4; // edi@7
	NJS_OBJECT *v5; // edi@7
	Sint16 v6; // ax@7
	NJS_OBJECT *v7; // edi@9
	Sint16 v8; // ax@9
	NJS_VECTOR distance_vector;
	v1 = a1->Data1;
	if (!ClipObject(a1, 640010.0) && IsVisible(&v1->Position, 280.0))
	{
		auto entity = CharObj1Ptrs[0];
		njSetTexture((NJS_TEXLIST*)0x01DF0920); //OBJ_CASINO9
		njPushMatrix(0);
		njTranslate(0, 311.62f, 0, 338.93f);
		njRotateXYZ(0, 0, 0x1E00, 0);
		sub_405450(&action_cowgirl_anim, cowgirlframe, 1.0f);
		njPopMatrix(1u);
	}
}


void __cdecl sub_5D0560(ObjectMaster *obj)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@3
	Angle v7;
	Sint16 v3; // ax@5
	char *v4; // eax@12
	double v5; // st7@14
	Sint16 v6; // di@15
	v1 = obj->Data1;
	if (v1->Scale.x == 1.0f) v7 = RotationAngle1; else v7 = RotationAngle2;
	v1->Rotation.z = v7;
	if (!ClipObject(obj, 62510.0))
	{
		if (!MissedFrames)
		{
			sub_5C09D0(12);
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.y;
			if (v2)
			{
				njRotateY(0, (unsigned __int16)v2);
			}
			v7 = v1->Rotation.z;
			if (v7)
			{
				njRotateZ(0, (unsigned __int16)v7);
			}
			DrawModel((NJS_MODEL_SADX *)v1->Object);
			njPopMatrix(1u);
		}
		if (ObjectSelectedDebug(obj))
		{
			v4 = "RotDir:Migi";
			if (!((unsigned __int64)v1->Scale.x & 1))
			{
				v4 = "RotDir:Hidari";
			}
			DisplayDebugString(1179667, v4);
			DisplayDebugString(1179668, "RotSpd:");
			v5 = sub_789320(v1->Scale.y);
			PrintDebugNumber(1703956, (unsigned __int64)v5, 4);
		}
		else
		{
			AddToCollisionList(v1);
			v6 = dword_1E77568;
			sub_789320(v1->Scale.y);
			++v1->InvulnerableTime;
			((short *)&v1->CharIndex)[0] = v6;
		}
	}
}

void __cdecl sub_5D0560_KazB(ObjectMaster *obj)
{
	DataPointer(int, dword_1E77568, 0x1E77568);
	DataPointer(int, MissedFrames, 0x03B1117C);
	EntityData1 *v1; // esi@1
	Angle v2; // eax@3
	Angle v7;
	Sint16 v3; // ax@5
	char *v4; // eax@12
	double v5; // st7@14
	Sint16 v6; // di@15
	v1 = obj->Data1;
	if (v1->Scale.x == 0.0f) v7 = RotationAngle1; else v7 = RotationAngle2;
	v1->Rotation.z = v7;
	if (!ClipObject(obj, 62510.0))
	{
		if (!MissedFrames)
		{
			sub_5C09D0(12);
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			v2 = v1->Rotation.y;
			if (v2)
			{
				njRotateY(0, (unsigned __int16)v2);
			}
			v7 = v1->Rotation.z;
			if (v7)
			{
				njRotateZ(0, (unsigned __int16)v7);
			}
			DrawModel((NJS_MODEL_SADX *)v1->Object);
			njPopMatrix(1u);
		}
		if (ObjectSelectedDebug(obj))
		{
			v4 = "RotDir:Migi";
			if (!((unsigned __int64)v1->Scale.x & 1))
			{
				v4 = "RotDir:Hidari";
			}
			DisplayDebugString(1179667, v4);
			DisplayDebugString(1179668, "RotSpd:");
			v5 = sub_789320(v1->Scale.y);
			PrintDebugNumber(1703956, (unsigned __int64)v5, 4);
		}
		else
		{
			AddToCollisionList(v1);
			v6 = dword_1E77568;
			sub_789320(v1->Scale.y);
			++v1->InvulnerableTime;
			((short *)&v1->CharIndex)[0] = v6;
		}
	}
}

void __cdecl OKazeX(ObjectMaster *a1)
{
	EntityData1 *v4; // esi@1
	DataPointer(NJS_OBJECT*, unk_1E05954, 0x1E05954);
	DataPointer(CollisionData, stru_1E77604, 0x1E77604);
	signed int result; // eax@1
	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			InitCollision(a1, &stru_1E77604, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560;
		v4->Object = unk_1E05954;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void __cdecl OKazcX(ObjectMaster *a1)
{
	EntityData1 *v4; // esi@1
	DataPointer(NJS_OBJECT*, unk_1E04CDC, 0x1E04CDC);
	DataPointer(CollisionData, stru_1E775A4, 0x1E775A4);
	signed int result; // eax@1
	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			InitCollision(a1, &stru_1E775A4, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560;
		v4->Object = unk_1E04CDC;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void __cdecl OKazdX(ObjectMaster *a1)
{
	EntityData1 *v4; // esi@1
	DataPointer(NJS_OBJECT*, unk_1E050FC, 0x1E050FC);
	DataPointer(CollisionData, stru_1E775D4, 0x1E775D4);
	signed int result; // eax@1
	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			InitCollision(a1, &stru_1E775D4, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560;
		v4->Object = unk_1E050FC;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void __cdecl OKazbX(ObjectMaster *a1)
{
	DataPointer(NJS_OBJECT*, stru_1E03AB8, 0x01E03AB8);
	DataPointer(CollisionData, stru_1E77574, 0x1E77574);
	EntityData1 *v4; // esi@1
	signed int result; // eax@1

	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			InitCollision(a1, &stru_1E77574, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560_KazB;
		v4->Object = stru_1E03AB8;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void __cdecl OKazfX(ObjectMaster *a1)
{
	EntityData1 *v4; // esi@1
	DataPointer(NJS_OBJECT*, unk_1E06274, 0x1E06274);
	DataPointer(CollisionData, stru_1E77638, 0x1E77638);
	signed int result; // eax@1
	v4 = a1->Data1;
	result = ClipObject(a1, 62510.0);
	if (!result)
	{
		if (!ObjectSelectedDebug(a1))
		{
			InitCollision(a1, &stru_1E77638, 1, 4u);
		}
		a1->DisplaySub = sub_5D04C0;
		a1->MainSub = sub_5D0560;
		v4->Object = unk_1E06274;
		v4->NextAction = 0;
		v4->CharIndex = 0;
		v4->InvulnerableTime = 0;
	}
}

void FixedGear1()
{
//	005D09C7
	DataPointer(NJS_ACTION, off_1E06634, 0x1E06634);
	njAction(&off_1E06634, gearframe1);
}

void __cdecl sub_5D43F0(int a2)
{
	DataPointer(int, MissedFrames, 0x03B1117C);
	DataPointer(NJS_MODEL_SADX, stru_1DF2570, 0x01DF2570);
	DataPointer(NJS_OBJECT, stru_1DF230C, 0x1DF230C);
	EntityData1 *v1; // esi@1
	unsigned __int16 v2; // ax@3
	int GearRotationDirection;
	Angle v3;
	v1 = *(EntityData1 **)(a2 + 32);
	if (v1->Scale.x == 0) GearRotationDirection = -1; else GearRotationDirection = 1;
	if (GearRotationDirection == 1) v3 = RotationAngle1; else v3 = RotationAngle2;
	v1->Rotation.y = ((unsigned __int16)(LOWORD(v1->Rotation.y) + ((unsigned short *)&v1->LoopData)[0]));
	if (!ClipObject((ObjectMaster *)a2, 62510.0) && !MissedFrames)
	{
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = ((unsigned short *)&v1->LoopData)[0];
		if (v2)
		{
			njRotateY(0, v2);
		}
		sub_407A00(&stru_1DF2570, 1.0f);
		v1->Rotation.y = (v1->Rotation.y + 128) % 65535;
		if (v1->Rotation.y != ((unsigned short *)&v1->LoopData)[0])
		{
			//njRotateY(0, (unsigned __int16)(LOWORD(v1->Rotation.y) - ((unsigned short *)&v1->LoopData)[0]));
			njRotateY(0, v3);
		}
		ProcessModelNode_AB_Wrapper(&stru_1DF230C, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl sub_5D44A0(int a2)
{
	DataPointer(int, MissedFrames, 0x03B1117C);
	DataPointer(NJS_MODEL_SADX, stru_1DF2B60, 0x1DF2B60);
	DataPointer(NJS_OBJECT, stru_1DF2908, 0x1DF2908);
	EntityData1 *v1; // esi@1
	unsigned __int16 v2; // ax@3
	int GearRotationDirection;
	Angle v3;
	v1 = *(EntityData1 **)(a2 + 32);
	if (v1->Scale.x == 0) GearRotationDirection = -1; else GearRotationDirection = 1;
	if (GearRotationDirection == 1) v3 = RotationAngle1; else v3 = RotationAngle2;
	v1->Rotation.y = ((unsigned __int16)(LOWORD(v1->Rotation.y) + ((unsigned short *)&v1->LoopData)[0]));
	if (!ClipObject((ObjectMaster *)a2, 62510.0) && !MissedFrames)
	{
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = ((unsigned short *)&v1->LoopData)[0];
		if (v2)
		{
			njRotateY(0, v2);
		}
		sub_407A00(&stru_1DF2B60, 1.0f);
		v1->Rotation.y = (v1->Rotation.y - 128) % 65535;
		njRotateY(0, v3);
		ProcessModelNode_AB_Wrapper(&stru_1DF2908, 1.0f);
		njPopMatrix(1u);
	}
}


void __cdecl sub_5D4550(int a2)
{
	DataPointer(int, MissedFrames, 0x03B1117C);
	DataPointer(NJS_MODEL_SADX, stru_1DF3160, 0x1DF3160);
	DataPointer(NJS_OBJECT, stru_1DF2EF8, 0x1DF2EF8);
	EntityData1 *v1; // esi@1
	unsigned __int16 v2; // ax@3
	int GearRotationDirection;
	Angle v3;
	v1 = *(EntityData1 **)(a2 + 32);
	if (v1->Scale.x == 0) GearRotationDirection = -1; else GearRotationDirection = 1;
	if (GearRotationDirection == 1) v3 = RotationAngle1; else v3 = RotationAngle2;
	v1->Rotation.y = ((unsigned __int16)(LOWORD(v1->Rotation.y) + ((unsigned short *)&v1->LoopData)[0]));
	if (!ClipObject((ObjectMaster *)a2, 62510.0) && !MissedFrames)
	{
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = ((unsigned short *)&v1->LoopData)[0];
		if (v2)
		{
			njRotateY(0, v2);
		}
		sub_407A00(&stru_1DF3160, 1.0f);
		v1->Rotation.y = (v1->Rotation.y + 128) % 65535;
		njRotateY(0, v3);
		ProcessModelNode_AB_Wrapper(&stru_1DF2EF8, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl sub_5D3A90(int a2)
{
	DataPointer(int, MissedFrames, 0x03B1117C);
	DataPointer(NJS_OBJECT, stru_1DF198C, 0x1DF198C);
	EntityData1 *v1; // esi@1
	Angle v2; // eax@3
	Angle v3;
	int GearRotationDirection;
	v1 = *(EntityData1 **)(a2 + 32);
	if (v1->Scale.x == 0) GearRotationDirection = -1; else GearRotationDirection = 1;
	if (GearRotationDirection == 1) v2 = RotationAngle1; else v2 = RotationAngle2;
	if (!MissedFrames && !ClipObject((ObjectMaster *)a2, 62510.0))
	{
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		njRotateY(0, v2);
		sub_5C09D0(12);
		ProcessModelNode_AB_Wrapper(&stru_1DF198C, 1.0);
		v3 = v1->Rotation.y;
		v1->Rotation.y = (v3 + GearRotationDirection*-128) % 65535;
		njPopMatrix(1u);
	}
}

void __cdecl OLhtr_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@3
	int v3; // eax@5
	int v4; // eax@7
	int v5;
	v1 = a1->Data1;
	if (!ClipObject(a1, 360010.0) && IsVisible2(&v1->Position, 30.0))
	{
		sub_5DD900(12 * (v1->Action == 0) + 31940064, 1);
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		ProcessModelNode_A_Wrapper(&stru_1E5E7BC, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		if (LevelFrameCount % 3 != 0) stru_1E5E7BC.basicdxmodel->mats[2].diffuse.color = 0xFFFFFFFF;
		if (LevelFrameCount % 3 == 0)
		{
		v5 = rand() % 60;
		if (v5 > 50) stru_1E5E7BC.basicdxmodel->mats[2].diffuse.color = 0xFF4F4F4F;
		if (v5 <= 50) stru_1E5E7BC.basicdxmodel->mats[2].diffuse.color = 0xFFFFFFFF;
		}
		njPopMatrix(1u);
		sub_5DD920((int)&off_1E75DE0, 2);
	}
}

void __cdecl OLhtg_Display(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@3
	int v3; // eax@5
	int v4; // eax@7
	int v5;
	v1 = a1->Data1;
	if (!ClipObject(a1, 360010.0) && IsVisible2(&v1->Position, 105.0))
	{
		sub_5DD900(12 * (v1->Action == 0) + 31940040, 1);
		sub_5C09D0(12);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		ProcessModelNode_A_Wrapper(&stru_1E5EC4C, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		if (LevelFrameCount % 3 != 0) stru_1E5EC4C.basicdxmodel->mats[4].diffuse.color = 0xFFFFFFFF;
		if (LevelFrameCount % 3 == 0)
		{
			v5 = rand() % 60;
			if (v5 > 50) stru_1E5EC4C.basicdxmodel->mats[4].diffuse.color = 0xFF4F4F4F;
			if (v5 <= 50) stru_1E5EC4C.basicdxmodel->mats[4].diffuse.color = 0xFFFFFFFF;
		}
		njPopMatrix(1u);
		sub_5DD920((int)&off_1E75DC8, 2);
	}
}


bool ForceObjectSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(1, false);
	diffuse_override(true);
	use_default_diffuse(true);
	return true;
}

NJS_MATERIAL* WhiteDiffuse[] = {
	//OSlotkan
	((NJS_MATERIAL*)0x01E4D6B4),
	//OCardkan
	((NJS_MATERIAL*)0x01E4D144),
	((NJS_MATERIAL*)0x01E4D16C),
	((NJS_MATERIAL*)0x01E4D194),
};

NJS_MATERIAL* ObjectSpecular[] = {
	//OFanfan
	((NJS_MATERIAL*)0x01E4FDC8),
	((NJS_MATERIAL*)0x01E4FDDC),
	((NJS_MATERIAL*)0x01E4FDF0),
	((NJS_MATERIAL*)0x01E4FE04),
	((NJS_MATERIAL*)0x01E4FE18),
	//Slot machine red
	((NJS_MATERIAL*)0x01DF5198),
	((NJS_MATERIAL*)0x01DF51C0),
	//Slot machine blue
	((NJS_MATERIAL*)0x01DF31C0),
	((NJS_MATERIAL*)0x01DF31E8),
	//Rotating medal
	((NJS_MATERIAL*)0x01E0CA7C),
	((NJS_MATERIAL*)0x01E0CA90),
	//Slot machine
	((NJS_MATERIAL*)0x01E49898),
	((NJS_MATERIAL*)0x01E498AC),
	((NJS_MATERIAL*)0x01E498C0),
	((NJS_MATERIAL*)0x01E498D4),
	((NJS_MATERIAL*)0x01E498E8),
	//Card machine
	((NJS_MATERIAL*)0x01E47CD8),
	((NJS_MATERIAL*)0x01E47CEC),
	((NJS_MATERIAL*)0x01E47D00),
	((NJS_MATERIAL*)0x01E47D14),
	((NJS_MATERIAL*)0x01E47D28),
	//OLion
	((NJS_MATERIAL*)0x01E01270),
	((NJS_MATERIAL*)0x01E01284),
	((NJS_MATERIAL*)0x01E01298),
	((NJS_MATERIAL*)0x01E012AC),
	((NJS_MATERIAL*)0x01E00364),
	((NJS_MATERIAL*)0x01E00378),
	((NJS_MATERIAL*)0x01E0038C),
	((NJS_MATERIAL*)0x01DFCF7C),
	((NJS_MATERIAL*)0x01DFCF90),
	((NJS_MATERIAL*)0x01DFCFA4),
	((NJS_MATERIAL*)0x01DF9718),
	((NJS_MATERIAL*)0x01DF972C),
	((NJS_MATERIAL*)0x01DF9740),
	((NJS_MATERIAL*)0x01DF9754),
	((NJS_MATERIAL*)0x01DF9768),
	((NJS_MATERIAL*)0x01DF977C),
};

NJS_MATERIAL* LevelSpecular[] = {
//OLion
	((NJS_MATERIAL*)0x01DFDE88),
	((NJS_MATERIAL*)0x01DFDE9C),
	((NJS_MATERIAL*)0x01DFDEB0),
	((NJS_MATERIAL*)0x01DFDEC4),
	((NJS_MATERIAL*)0x01DFDED8),
	((NJS_MATERIAL*)0x01DFDEEC),
	((NJS_MATERIAL*)0x01DFDF00),
	((NJS_MATERIAL*)0x01DFDF14),
	((NJS_MATERIAL*)0x01DFDF28),
	((NJS_MATERIAL*)0x01DFDF3C),
	((NJS_MATERIAL*)0x01DFDF50),
	((NJS_MATERIAL*)0x01DFDF64),
	((NJS_MATERIAL*)0x01DFDF78),
};

extern "C"
{
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void Init(const char *path, const HelperFunctions &helperFunctions)
	{
		WriteJump((void*)0x5D5E50, Loop_Display); //Add sound
		//Fixed gears
		WriteCall((void*)0x005D09C7, FixedGear1);
		WriteJump((void*)0x5D3A90, sub_5D3A90); //Gears main
		WriteJump((void*)0x005D0C60, OKazeX);
		WriteJump((void*)0x005D0C20, OKazcX);
		WriteJump((void*)0x005D0C40, OKazdX);
		WriteJump((void*)0x005D0C00, OKazbX);
		WriteJump((void*)0x005D0C80, OKazfX);
		WriteJump((void*)0x5D43F0, sub_5D43F0); //OTutuA display
		WriteJump((void*)0x5D44A0, sub_5D44A0); //OTutuB display
		WriteJump((void*)0x5D4550, sub_5D4550); //OTutuC display
		//Config stuff
		//If there is no config.ini, make one
		CopyFileA((std::string(path) + "\\default.ini").c_str(), (std::string(path) + "\\config.ini").c_str(), true);
		//Config stuff
		const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
		CowgirlOn = config->getBool("", "Cowgirl", true);
		delete config;
		HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
		if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
		{
			material_register(LevelSpecular, LengthOfArray(LevelSpecular), &ForceLevelSpecular);
			material_register(ObjectSpecular, LengthOfArray(ObjectSpecular), &ForceObjectSpecular);
			material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
		}
		if (CowgirlOn == true)
		{
			stru_1E763B8[0].scale.y = stru_1E763B8[0].scale.y * 4;
			stru_1E763B8[1].scale.y = stru_1E763B8[1].scale.y * 4;
			stru_1E763B8[2].scale.y = stru_1E763B8[2].scale.y * 4;
			stru_1E763B8[0].v.y = stru_1E763B8[0].v.y + 20;
			stru_1E763B8[1].v.y = stru_1E763B8[1].v.y + 20;
			stru_1E763B8[2].v.y = stru_1E763B8[2].v.y + 20;
			stru_1E763B8[0].v.z = stru_1E763B8[0].v.z - 14;
			stru_1E763B8[1].v.z = stru_1E763B8[1].v.z - 14;
			stru_1E763B8[2].v.z = stru_1E763B8[2].v.z - 14;
			collist_00023DA0K[LengthOfArray(collist_00023DA0K) - 4].Flags = 0x00000000;
			WriteJump((void*)0x5CAA90, Cowgirl_Display);
		}
		DataArray(NJS_TEX, uv_01A4BD38, 0x01E4BD38, LengthOfArray(uv_001C8C9C));
		DataArray(NJS_TEX, uv_01A4BD98, 0x01E4BD98, LengthOfArray(uv_001C8CFC));
		*(NJS_MODEL_SADX*)0x01DF7140 = attach_00177188; //Slot red
		*(NJS_MODEL_SADX*)0x01DF5138 = attach_00175E44; //Slot blue
		*(NJS_MODEL_SADX*)0x01D8BC10 = attach_0010E984; //FlipperL
		*(NJS_MODEL_SADX*)0x01D8BED8 = attach_0010EC3C; //FlipperR
		*(NJS_MODEL_SADX*)0x01DDE898 = attach_00160358; //BanjuDoor
		*(NJS_MODEL_SADX*)0x01D8E1B8 = attach_00110E9C; //Dtarget
		*(NJS_MODEL_SADX*)0x01DCF690 = attach_00151610; //Kazariyaji
		*(NJS_MODEL_SADX*)0x01DCF970 = attach_001518D4; //Kazariyaji2
		*(NJS_MODEL_SADX*)0x01DCFC50 = attach_00151B98; //Kazariyaji green 2
		*(NJS_MODEL_SADX*)0x01DCFF30 = attach_00151E5C; //Kazariyaji pink 2
		*(NJS_MODEL_SADX*)0x01D9C72C = attach_0011F050; //Bottom decoration in Act 3 (bright)
		*(NJS_MODEL_SADX*)0x01D9CB7C = attach_0011F490; //Bottom decoration in Act 3 (dark)
		*(NJS_MODEL_SADX*)0x01DDF318 = attach_00160DA4; //CardUV 1
		*(NJS_MODEL_SADX*)0x01DDF180 = attach_00160C14_2; //CardUV 2
		*(NJS_MODEL_SADX*)0x01E5DBC8 = attach_001DA2E0; //OKDAnm
		//UV fixes
		memcpy((void*)0x1E3C3C8, uv_001BA8B0, sizeof(uv_001BA8B0)); //O KBB
		memcpy((void*)0x1E3C868, uv_001BAD3C, sizeof(uv_001BAD3C)); //O KBR
		memcpy((void*)0x1E46FF8, uv_001C4E90, sizeof(uv_001C4E90)); //SDFUTIR
		memcpy((void*)0x1E471C8, uv_001C5054, sizeof(uv_001C5054)); //SDFUTIB
		memcpy((void*)0x1E4BD38, uv_001C8C9C, sizeof(uv_001C8C9C)); //Wall marquee
		memcpy((void*)0x1E4BD98, uv_001C8CFC, sizeof(uv_001C8CFC)); //Wall marquee
		memcpy((void*)0x1E3BAC8, uv_001B9FC4, sizeof(uv_001B9FC4)); //ORlti
		memcpy((void*)0x1E3BBC8, uv_001BA0C4, sizeof(uv_001BA0C4)); //ORlti
		memcpy((void*)0x1E3BC08, uv_001BA104, sizeof(uv_001BA104)); //ORlti
		*(NJS_MODEL_SADX*)0x01E49838 = attach_001C6E74; //Card pinball machine
		*(NJS_MODEL_SADX*)0x01E4B17C = attach_001C8128; //Slot pinball machine
		memcpy((void*)0x01E4D298, uv_001CA184, sizeof(uv_001CA184)); //Card pinball spinning ad
		memcpy((void*)0x1E4DFD8, uv_001CAE80, sizeof(uv_001CAE80)); //Slot pinball spinning ad
		((NJS_ACTION*)0x01DE120C)->object = &object_00155E04; //Pianpach
		((NJS_ACTION*)0x01DE223C)->object = &object_001594F4; //Pianwalk
		((NJS_ACTION*)0x01DE23C4)->object = &object_0015B34C; //Pianfish
		((NJS_ACTION*)0x01DE2A5C)->object = &object_0015CEC4; //Pianwhatever
		((NJS_ACTION*)0x01DE084C)->object = &object_00153688; //Flying clock
		*(NJS_MODEL_SADX*)0x1E5D8D8 = attach_001DA00C; //Wht
		*(NJS_OBJECT*)0x1DC2B74 = object_00144F38; //Reala thing 1
		*(NJS_OBJECT*)0x1DC4644 = object_00146978; //Reala thing 2
		*(NJS_OBJECT*)0x1DC6114 = object_001483B8; //Reala thing 3
		*(NJS_OBJECT*)0x1DC7BE4 = object_00149DF8; //Reala thing 4
		//Yaji (arrow object) fixes
		DataArray(NJS_TEX, yajitex, 0x01DDB544, 4);
		yajitex[0].u = 509;
		yajitex[1].u = 510;
		((NJS_MODEL_SADX*)0x01DDB5D0)->mats[0].attrflags |= NJD_FLAG_FLIP_U;
		//Bumper1 fixes
		((NJS_MODEL_SADX*)0x01D98CE8)->mats[0].attrflags |= NJD_FLAG_FLIP_U;
		((NJS_MODEL_SADX*)0x01D99790)->mats[0].attrflags |= NJD_FLAG_FLIP_U;
		DataArray(NJS_TEX, bumpertex, 0x01D98418, LengthOfArray(uv_01998418));
		DataArray(NJS_TEX, bumpertex2, 0x01D98EC0, LengthOfArray(uv_0011B8B4));
		DataArray(NJS_TEX, bill1, 0x01E6D7C8, LengthOfArray(uv_001E9ABC));
		DataArray(NJS_TEX, bill2, 0x01E6D900, LengthOfArray(uv_001E9BF4));
		for (int uv_bill1 = 0; uv_bill1 < LengthOfArray(uv_001E9ABC); uv_bill1++)
		{
			bill1[uv_bill1].u = uv_001E9ABC[uv_bill1].u;
			bill1[uv_bill1].v = uv_001E9ABC[uv_bill1].v;
		}
		for (int uv_bill2 = 0; uv_bill2 < LengthOfArray(uv_001E9BF4); uv_bill2++)
		{
			bill2[uv_bill2].u = uv_001E9BF4[uv_bill2].u;
			bill2[uv_bill2].v = uv_001E9BF4[uv_bill2].v;
		}
		for (int uv_bump = 0; uv_bump < LengthOfArray(uv_01998418); uv_bump++)
		{
			bumpertex[uv_bump].u = uv_01998418[uv_bump].u;
			bumpertex[uv_bump].v = uv_01998418[uv_bump].v;
		}
		for (int uv_bump = 0; uv_bump < LengthOfArray(uv_01998418); uv_bump++)
		{
			bumpertex[uv_bump].u = uv_01998418[uv_bump].u;
			bumpertex[uv_bump].v = uv_01998418[uv_bump].v;
		}
		for (int uv_bump2 = 0; uv_bump2 < LengthOfArray(uv_0011B8B4); uv_bump2++)
		{
			bumpertex2[uv_bump2].u = uv_01998418[uv_bump2].u;
			bumpertex2[uv_bump2].v = uv_01998418[uv_bump2].v;
		}
		//((NJS_OBJECT*)0x01E5E4A8)->evalflags |= NJD_EVAL_HIDE; //O LIGHTB
		//((NJS_OBJECT*)0x1E5E39C)->evalflags |= NJD_EVAL_HIDE; //O LIGHTA
		memcpy((void*)0x1E5E39C, &object_01A5E39CK, sizeof(object_01A5E39CK)); //O LIGHTA model
		WriteData((char*)0x005DDBE2, 0x08, 1); //O LIGHTA blending mode
		//Lion top animation
		DataArray(NJS_MESHSET_SADX, lionmesh, 0x1DFF0F8, 13);
		lionmesh[0].vertuv = uv_019FEA58;
		((NJS_OBJECT*)0x01E47B1C)->evalflags |= NJD_EVAL_HIDE; //Hide MizuA
		((NJS_OBJECT*)0x01E47CA4)->evalflags |= NJD_EVAL_HIDE; //Hide MizuB
		((NJS_OBJECT*)0x01E3FD04)->evalflags |= NJD_EVAL_HIDE; //Hide OKbS
		((NJS_OBJECT*)0x01E3D734)->evalflags |= NJD_EVAL_HIDE; //Hide OKbC
		WriteJump((void*)0x5C9980, OLhtg_Display);
		WriteJump((void*)0x5C9BA0, OLhtr_Display);
		ResizeTextureList((NJS_TEXLIST*)0x1D1B050, textures_casino1);
		ResizeTextureList((NJS_TEXLIST*)0x1CBD1C4, textures_casino2);
		ResizeTextureList((NJS_TEXLIST*)0x1C8AF04, textures_casino3);
		ResizeTextureList((NJS_TEXLIST*)0x1C47004, textures_casino4);
		*(NJS_MODEL_SADX*)0x01E74A68 = attach_01A74A68; //billboard
		*(NJS_MODEL_SADX*)0x01E46F30 = attach_001C4DCC; //OCfa rotating thing
		DataArray(FogData, Casino1Fog, 0x01C46990, 3);
		DataArray(FogData, Casino2Fog, 0x01C469C0, 3);
		DataArray(DrawDistance, DrawDist_Casino2, 0x01C46948, 3);
		for (int i = 0; i < 3; i++)
		{
			Casino1Fog[i].Color = 0xFF000000;
			Casino1Fog[i].Layer = 600.0f;
			Casino1Fog[i].Toggle = 1;
			Casino1Fog[i].Distance = 1700.0f;
			Casino2Fog[i].Color = 0xFF646400;
			Casino2Fog[i].Layer = 1.0f;
			Casino2Fog[i].Distance = 4000.0f;
			Casino2Fog[i].Toggle = 1;
			DrawDist_Casino2[i].Maximum = -2000.0;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		//Loop sound
		if (CurrentLevel == 9 && CurrentAct == 3 && GameState != 16)
		{
			if (LoopDelay > 0) LoopDelay=LoopDelay - FramerateSetting;
		}
		//Gears
		if (CurrentLevel == 9 && CurrentCharacter == 3 && GameState != 16)
		{
			gearframe1 = gearframe1 + 0.1f;
			if (gearframe1 > 15) gearframe1 = 0;
			RotationAngle1 = (RotationAngle1 + 128) % 65536;
			RotationAngle2 = (RotationAngle2 - 128) % 65536;
		}
		//Cowgirl
		if (CurrentLevel == 9 && CurrentCharacter == 3 && CowgirlOn == true && GameState != 16)
		{
		if (cowgirlframe > 30) cowgirlframe = 0;
		cowgirlframe = cowgirlframe + 0.08f;
		//Cowgirl UVs
		if (FrameCounter % 16 == 0)
		{
			cowgirl_shift1 = (cowgirl_shift1 + 65) % 255;
			cowgirl_shift2 = (cowgirl_shift2 + 100) % 510;

			for (int slot_cow1 = 0; slot_cow1 < LengthOfArray(uv_001CF84C); slot_cow1++)
			{
				uv_001CF84C[slot_cow1].u = uv_001CF84C_0[slot_cow1].u + cowgirl_shift1;
			}
			for (int slot_cow2 = 0; slot_cow2 < LengthOfArray(uv_001D6728); slot_cow2++)
			{
				uv_001D6728[slot_cow2].u = uv_001D6728_0[slot_cow2].u + cowgirl_shift2;
			}
			for (int slot_cow3 = 0; slot_cow3 < LengthOfArray(uv_001D6040); slot_cow3++)
			{
				uv_001D6040[slot_cow3].u = uv_001D6040_0[slot_cow3].u + cowgirl_shift2;
			}
			for (int slot_cow4 = 0; slot_cow4 < LengthOfArray(uv_001D6794); slot_cow4++)
			{
				uv_001D6794[slot_cow4].u = uv_001D6794_0[slot_cow4].u + cowgirl_shift2;
			}
			for (int slot_cow5 = 0; slot_cow5 < LengthOfArray(uv_001D67BC); slot_cow5++)
			{
				uv_001D67BC[slot_cow5].u = uv_001D67BC_0[slot_cow5].u + cowgirl_shift2;
			}
			for (int slot_cow6 = 0; slot_cow6 < LengthOfArray(uv_001D2F74); slot_cow6++)
			{
				uv_001D2F74[slot_cow6].u = uv_001D2F74_0[slot_cow6].u + cowgirl_shift2;
			}
			for (int slot_cow7 = 0; slot_cow7 < LengthOfArray(uv_001D308C); slot_cow7++)
			{
				uv_001D308C[slot_cow7].u = uv_001D308C_0[slot_cow7].u + cowgirl_shift2;
			}
			for (int slot_cow8 = 0; slot_cow8 < LengthOfArray(uv_001D333C); slot_cow8++)
			{
				uv_001D333C[slot_cow8].u = uv_001D333C_0[slot_cow8].u + cowgirl_shift2;
			}
			for (int slot_cow9 = 0; slot_cow9 < LengthOfArray(uv_001D4868); slot_cow9++)
			{
				uv_001D4868[slot_cow9].u = uv_001D4868_0[slot_cow9].u + cowgirl_shift2;
			}
			for (int slot_cow10 = 0; slot_cow10 < LengthOfArray(uv_001D16E4); slot_cow10++)
			{
				uv_001D16E4[slot_cow10].u = uv_001D16E4_0[slot_cow10].u + cowgirl_shift2;
			}
			for (int slot_cow11 = 0; slot_cow11 < LengthOfArray(uv_001D02D0); slot_cow11++)
			{
				uv_001D02D0[slot_cow11].u = uv_001D02D0_0[slot_cow11].u + cowgirl_shift2;
			}
			for (int slot_cow12 = 0; slot_cow12 < LengthOfArray(uv_001D043C); slot_cow12++)
			{
				uv_001D043C[slot_cow12].u = uv_001D043C_0[slot_cow12].u + cowgirl_shift2;
			}
			for (int slot_cow13 = 0; slot_cow13 < LengthOfArray(uv_001D1F60); slot_cow13++)
			{
				uv_001D1F60[slot_cow13].u = uv_001D1F60_0[slot_cow13].u + cowgirl_shift2;
			}
			for (int slot_cow14 = 0; slot_cow14 < LengthOfArray(uv_001D1F78); slot_cow14++)
			{
				uv_001D1F78[slot_cow14].u = uv_001D1F78_0[slot_cow14].u + cowgirl_shift2;
			}
		}
		//Cowgirl action
		if (CowgirlDelay < 100) CowgirlDelay++;
		auto entity = CharObj1Ptrs[0];
		if (CowgirlDelay >= 100 && entity != nullptr && entity->Status & Status_Attack)
		{
			if (IsPlayerInsideSphere(&Cowgirl1, 180.0f) || IsPlayerInsideSphere(&Cowgirl2, 180.0f))
			{
					PlaySound(278, 0, 0, 0);
					CowgirlDelay = 0;
			}
		}
		}
		if (CurrentLevel == 9 && CurrentAct == 0 && CurrentPlayer != CurrentCharacter)
		{
			if (CurrentCharacter == 0)
			{
				landtable_00025EAC.Col = collist_00023DA0S;
				landtable_00025EAC.COLCount = LengthOfArray(collist_00023DA0S);
			}
			if (CurrentCharacter == 3)
			{
			landtable_00025EAC.Col = collist_00023DA0K;
			landtable_00025EAC.COLCount = LengthOfArray(collist_00023DA0K);
			}
			CurrentPlayer = CurrentCharacter;
		}
		if (CurrentLevel == 9 && GameState != 16)
		{
			if (CurrentAct != 1) SoundPlayed = 0;
			if (CurrentAct == 1)
			{
				auto entity = CharObj1Ptrs[0];
				if (SoundPlayed == 0 && entity != nullptr && entity->Position.y > -1698)
				{
					PlaySound(249, 0, 0, 0);
					SoundPlayed = 1;
				}
			}
		}
		if (CurrentLevel == 9 && CurrentAct == 0 && GameState != 16)
		{
			//Rotating thing
			matlist_001C448C[3].attr_texId = monitorimage + 140;
			if (FrameCounter % (240 / FramerateSetting) == 0)
			{
				monitorimage++;
				if (monitorimage > 7) monitorimage = 0;
			}
			//Water
			if (anim1_actual == 0) anim1 = 75;
			if (anim1_actual == 1) anim1 = 68;
			if (anim1_actual == 2) anim1 = 69;
			if (anim1_actual == 3) anim1 = 70;
			if (anim1_actual == 4) anim1 = 71;
			if (anim1_actual == 5) anim1 = 72;
			if (anim1_actual == 6) anim1 = 73;
			if (anim1_actual == 7) anim1 = 74;
			if (anim1_actual == 8) anim1 = 67;
			if (anim1_actual == 9) anim1 = 76;
			if (anim1_actual == 10) anim1 = 77;
			if (anim1_actual == 11) anim1 = 78;
			if (anim1_actual == 12) anim1 = 79;
			if (anim1_actual == 13) anim1 = 80;
			if (anim1_actual > 13) anim1_actual = 0;
			matlist_00066F5C[1].attr_texId = anim1;
			matlist_01979784[0].attr_texId = anim1;
			if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) anim1_actual++;
			//Card machine and lion top animation
			if (FrameCounter % 12 == 0)
			{
				shift1 = (shift1 + 65) % 255;
				for (int slot_uv1 = 0; slot_uv1 < LengthOfArray(uv_001C7570); slot_uv1++)
				{
					uv_001C7570[slot_uv1].u = uv_001C7570_0[slot_uv1].u + shift1;
				}
				for (int slot_uv2 = 0; slot_uv2 < LengthOfArray(uv_001C75E0); slot_uv2++)
				{
					uv_001C75E0[slot_uv2].u = uv_001C75E0_0[slot_uv2].u + shift1;
				}
				for (int slot_uv3 = 0; slot_uv3 < LengthOfArray(uv_001C7748); slot_uv3++)
				{
					uv_001C7748[slot_uv3].u = uv_001C7748_0[slot_uv3].u + shift1;
				}
				for (int slotmachine1 = 0; slotmachine1 < LengthOfArray(uv_001767D8); slotmachine1++)
				{
					uv_001767D8[slotmachine1].u = uv_001767D8_0[slotmachine1].u + shift1;
				}
				for (int slotmachine2 = 0; slotmachine2 < LengthOfArray(uv_00175494); slotmachine2++)
				{
					uv_00175494[slotmachine2].u = uv_00175494_0[slotmachine2].u + shift1;
				}
				
				for (int card_uv1 = 0; card_uv1 < LengthOfArray(uv_001C6200); card_uv1++)
				{
					uv_001C6200[card_uv1].u = uv_001C6200_0[card_uv1].u + shift1;
				}
				for (int card_uv1 = 0; card_uv1 < LengthOfArray(uv_001C6200); card_uv1++)
				{
					uv_001C6200[card_uv1].u = uv_001C6200_0[card_uv1].u + shift1;
				}
				for (int card_uv2 = 0; card_uv2 < LengthOfArray(uv_001C63EC); card_uv2++)
				{
					uv_001C63EC[card_uv2].u =uv_001C63EC_0[card_uv2].u + shift1;
				}
				for (int card_uv3 = 0; card_uv3 < LengthOfArray(uv_001C646C); card_uv3++)
				{
					uv_001C646C[card_uv3].u = uv_001C646C_0[card_uv3].u + shift1;
				}
				for (int xz = 0; xz < LengthOfArray(uv_01A48AD8); xz++)
				{
					uv_01A48AD8[xz].u = (uv_01A48AD8_0[xz].u + shift1);
				}
				for (int xz2 = 0; xz2 < LengthOfArray(uv_019FEA58); xz2++)
				{
					uv_019FEA58[xz2].u = (uv_019FEA58_0[xz2].u - shift1);
				}
			}
			//Waterfalls
				shift2 = (shift2 - 10) % 255;
				for (int q = 0; q < LengthOfArray(uv_01A47B78); q++)
				{
					uv_01A47B78[q].v = uv_01A47B78_0[q].v + shift2;
				}

				for (int q2 = 0; q2 < LengthOfArray(uv_01A47468); q2++)
				{
					uv_01A47468[q2].v = uv_01A47468_0[q2].v + shift2;
				}

				for (int q3 = 0; q3 < LengthOfArray(uv_01A474F8); q3++)
				{
					uv_01A474F8[q3].v = uv_01A474F8_0[q3].v + shift2;
				}
			
		}
		if (CurrentLevel == 9 && CurrentAct == 1 && GameState != 16)
		{
			if (anim2_actual == 0) anim2 = 7;
			if (anim2_actual == 1) anim2 = 10;
			if (anim2_actual == 2) anim2 = 11;
			if (anim2_actual == 3) anim2 = 12;
			if (anim2_actual == 4) anim2 = 13;
			if (anim2_actual == 5) anim2 = 14;
			if (anim2_actual == 6) anim2 = 9;
			if (anim2_actual == 7) anim2 = 15;
			if (anim2_actual == 8) anim2 = 16;
			if (anim2_actual == 9) anim2 = 17;
			if (anim2_actual == 10) anim2 = 18;
			if (anim2_actual == 11) anim2 = 19;
			if (anim2_actual == 12) anim2 = 20;
			if (anim2_actual == 13) anim2 = 21;
			if (anim2_actual > 13) anim2_actual = 0;
			matlist_000ACC44[0].attr_texId = anim2;
			matlist_000ACB40[0].attr_texId = anim2;
			if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) anim2_actual++;
		}
		if (CurrentLevel == 9 && CurrentAct == 3 && GameState != 16)
		{
			carduv_reala = (carduv_reala + 4) % 255;
			for (int rl = 0; rl < LengthOfArray(uv_00160A9C); rl++)
			{
				uv_00160A9C[rl].v = uv_00160A9C_0[rl].v + carduv_reala;
			}
		}
	}
}