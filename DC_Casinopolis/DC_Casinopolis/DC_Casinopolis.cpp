#include "stdafx.h"
#include <SADXModLoader.h>
#include "Casino_objects.h"
#include "Casino1.h"
#include "Casino2.h"
#include "Casino3.h"
#include "Casino4.h"
#include "stdlib.h"

static short CurrentPlayer = -1;
static int anim1 = 75;
static int anim2 = 7;
static int anim1_actual = 0;
static int anim2_actual = 0;
static int delayX = 0;
static int ang = 0;
static int SoundPlayed = 0;
FunctionPointer(void, sub_5DD900, (int a1, int a2), 0x5DD900);
FunctionPointer(void, sub_5DD920, (int a1, int a2), 0x5DD920);
FunctionPointer(void, sub_5C09D0, (int a1), 0x5C09D0);
FunctionPointer(bool, IsVisible2, (NJS_VECTOR *center, float radius), 0x00403330);

DataPointer(ObjectMaster*, off_1E75DC8, 0x01E75DC8);
DataPointer(ObjectMaster*, off_1E75DE0, 0x01E75DE0);
DataPointer(NJS_OBJECT, stru_1E5EC4C, 0x01E5EC4C);
DataPointer(NJS_OBJECT, stru_1E5E7BC, 0x01E5E7BC);
DataPointer(int, FramerateSetting, 0x0389D7DC);

PointerInfo pointers[] = {
	ptrdecl(0x97DB28, &landtable_00025EAC),
	ptrdecl(0x97DB2C, &landtable_0006C0B4),
	ptrdecl(0x97DB30, &landtable_000AF120),
	ptrdecl(0x97DB34, &landtable_000D8440),
};

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

extern "C"
{
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		((NJS_OBJECT*)0x01DF259C)->evalflags |= NJD_EVAL_HIDE; //O TUTUA
		((NJS_OBJECT*)0x01DF230C)->evalflags |= NJD_EVAL_HIDE; //O TUTUA
		//Card machine top animation
		DataArray(NJS_MESHSET_SADX, cardmachinemesh, 0x01E48E28, 13);
		cardmachinemesh[3].vertuv = uv_01A48AD8;
		//Lion top animation
		DataArray(NJS_MESHSET_SADX, lionmesh, 0x1DFF0F8, 13);
		lionmesh[0].vertuv = uv_019FEA58;
		WriteData((void*)0x005D4456, 0x90, 5); //O TUTUA
		((NJS_OBJECT*)0x01E47B1C)->evalflags |= NJD_EVAL_HIDE; //Hide MizuB
		((NJS_OBJECT*)0x01E47CA4)->evalflags |= NJD_EVAL_HIDE; //Hide MizuA
		((NJS_OBJECT*)0x01E3FD04)->evalflags |= NJD_EVAL_HIDE; //Hide OKbS
		((NJS_OBJECT*)0x01E3D734)->evalflags |= NJD_EVAL_HIDE; //Hide OKbC
		WriteJump((void*)0x5C9980, OLhtg_Display);
		WriteJump((void*)0x5C9BA0, OLhtr_Display);
		ResizeTextureList((NJS_TEXLIST*)0x1D1B050, textures_casino1);
		ResizeTextureList((NJS_TEXLIST*)0x1CBD1C4, textures_casino2);
		ResizeTextureList((NJS_TEXLIST*)0x1C8AF04, textures_casino3);
		ResizeTextureList((NJS_TEXLIST*)0x1C47004, textures_casino4);
		*(NJS_MODEL_SADX*)0x01E74A68 = attach_01A74A68; //billboard
		*(NJS_MODEL_SADX*)0x01E46F30 = attach_001C4DCC; //rotating thing
		memcpy((void*)0x1E5E39C, &object_01A5E39CK, sizeof(object_01A5E39CK)); //light
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
				if (SoundPlayed == 0 && entity != nullptr && entity->Position.y > -1696)
				{
					PlaySound(249, 0, 0, 0);
					SoundPlayed = 1;
				}
			}
		}
		if (CurrentLevel == 9 && CurrentAct == 0 && GameState != 16)
		{
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
			//OTUTUA animation
			object_019F230C.ang[1] = ang;
			ang = (ang + 32) % 65536;
			//Card machine and lion top animation
			if (FrameCounter % 16 == 0)
			{
				for (int xz = 0; xz < LengthOfArray(uv_01A48AD8); xz++)
				{
					uv_01A48AD8[xz].u = (uv_01A48AD8[xz].u + 320);
				}
				for (int xz2 = 0; xz2 < LengthOfArray(uv_019FEA58); xz2++)
				{
					uv_019FEA58[xz2].u = (uv_019FEA58[xz2].u - 320);
				}
			if (FrameCounter % 128 == 0)
			{
				for (int xz3 = 0; xz3 < LengthOfArray(uv_01A48AD8); xz3++)
				{
					uv_01A48AD8[xz3].u = (uv_01A48AD8_R[xz3].u);
				}
				for (int xz4 = 0; xz4 < LengthOfArray(uv_019FEA58); xz4++)
				{
					uv_019FEA58[xz4].u = (uv_019FEA58_R[xz4].u);
				}
			}
			}
			for (int q = 0; q < LengthOfArray(uv_01A47B78); q++)
			{
				uv_01A47B78[q].v = uv_01A47B78[q].v - 10;
			}
			if (uv_01A47B78[0].v < -255)
			{
				uv_01A47B78[0].v = 255;
				uv_01A47B78[1].v = 255;
				uv_01A47B78[2].v = -590;
				uv_01A47B78[3].v = -590;
				uv_01A47B78[4].v = -797;
				uv_01A47B78[5].v = -797;
				uv_01A47B78[6].v = -901;
				uv_01A47B78[7].v = -901;
			}
			for (int q2 = 0; q2 < LengthOfArray(uv_01A47468); q2++)
			{
				uv_01A47468[q2].v = uv_01A47468[q2].v - 10;
			}
			if (uv_01A47468[0].v < -1020)
			{
				for (int r1 = 0; r1 < LengthOfArray(uv_01A47468); r1++)
				uv_01A47468[r1].v = uv_01A47468_0[r1].v;
			}
			for (int q3 = 0; q3 < LengthOfArray(uv_01A474F8); q3++)
			{
				uv_01A474F8[q3].v = uv_01A474F8[q3].v - 10;
			}
			if (uv_01A474F8[0].v < -2040)
			{
				for (int r2 = 0; r2 < LengthOfArray(uv_01A474F8); r2++)
				uv_01A474F8[r2].v = uv_01A474F8_0[r2].v;
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
	}
}