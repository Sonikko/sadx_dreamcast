#include "stdafx.h"
#include "SADXModLoader.h"
#include "Casino_objects.h"
#include "Casino1.h"
#include "Casino2.h"
#include "Casino3.h"
#include "Casino4.h"

static short CurrentPlayer = -1;
static int anim1 = 67;
static int anim2 = 7;

PointerInfo pointers[] = {
	ptrdecl(0x97DB28, &landtable_00025EAC),
	ptrdecl(0x97DB2C, &landtable_0006C0B4),
	ptrdecl(0x97DB30, &landtable_000AF120),
	ptrdecl(0x97DB34, &landtable_000D8440),
};

extern "C"
{
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
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
				landtable_00025EAC.COLList = collist_00023DA0S;
				landtable_00025EAC.COLCount = LengthOfArray(collist_00023DA0S);
			}
			if (CurrentCharacter == 3)
			{
			landtable_00025EAC.COLList = collist_00023DA0K;
			landtable_00025EAC.COLCount = LengthOfArray(collist_00023DA0K);
			}
			CurrentPlayer = CurrentCharacter;
		}
		if (CurrentLevel == 9 && CurrentAct == 0 && GameState != 16)
		{
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
			if (anim1 > 80) anim1 = 67;
			matlist_00066F5C[1].attr_texId = anim1;
			matlist_01979784[0].attr_texId = anim1;
			if (LevelFrameCount % 3 == 0) anim1++;	
		}
		if (CurrentLevel == 9 && CurrentAct == 1 && GameState != 16)
		{
			if (anim2 > 7 && anim2 < 9) anim2 = 9;
			if (anim2 > 21) anim2 = 7;
			matlist_000ACC44[0].attr_texId = anim2;
			matlist_000ACB40[0].attr_texId = anim2;
			if (LevelFrameCount % 3 == 0) anim2++;
		}
	}
}