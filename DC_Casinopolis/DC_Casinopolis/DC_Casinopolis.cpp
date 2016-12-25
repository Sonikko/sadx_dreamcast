#include "stdafx.h"
#include "SADXModLoader.h"
#include "Casino_objects.h"
#include "Casino1.h"
#include "Casino2.h"
#include "Casino3.h"
#include "Casino4.h"

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
		//memcpy((void*)0x1E74A94, &object_001D98C8, sizeof(object_001D98C8)); //billboard
		memcpy((void*)0x1E5E39C, &object_01A5E39CK, sizeof(object_01A5E39CK)); //light
		DataArray(FogData, Casino2Fog, 0x01C469C0, 3);
		DataArray(DrawDistance, DrawDist_Casino2, 0x01C46948, 3);
		for (int i = 0; i < 3; i++)
		{
			Casino2Fog[i].Color = 0xFF646400;
			Casino2Fog[i].Layer = 1.0f;
			Casino2Fog[i].Distance = 4000.0f;
			Casino2Fog[i].Toggle = 1;
			DrawDist_Casino2[i].Maximum = -2000.0;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 9 && CurrentAct == 0 && GameState != 16)
		{
			for (int q = 0; q < LengthOfArray(uv_01A47B78); q++)
			{
				uv_01A47B78[q].v = uv_01A47B78[q].v - 10;
			}
			for (int q2 = 0; q2 < LengthOfArray(uv_01A47468); q2++)
			{
				uv_01A47468[q2].v = uv_01A47468[q2].v - 10;
			}
			for (int q3 = 0; q3 < LengthOfArray(uv_01A474F8); q3++)
			{
				uv_01A474F8[q3].v = uv_01A474F8[q3].v - 10;
			}
			if (LevelFrameCount % 41 == 1)
			{
				matlist_00066F5C[1].attr_texId = 75;
				matlist_01979784[0].attr_texId = 75;
			}
			if (LevelFrameCount % 41 == 4)
			{
				matlist_00066F5C[1].attr_texId = 68;
				matlist_01979784[0].attr_texId = 68;
			}
			if (LevelFrameCount % 41 == 7)
			{
				matlist_00066F5C[1].attr_texId = 69;
				matlist_01979784[0].attr_texId = 69;
			}
			if (LevelFrameCount % 41 == 10)
			{
				matlist_00066F5C[1].attr_texId = 70;
				matlist_01979784[0].attr_texId = 70;
			}
			if (LevelFrameCount % 41 == 13)
			{
				matlist_00066F5C[1].attr_texId = 71;
				matlist_01979784[0].attr_texId = 71;
			}
			if (LevelFrameCount % 41 == 16)
			{
				matlist_00066F5C[1].attr_texId = 72;
				matlist_01979784[0].attr_texId = 72;
			}
			if (LevelFrameCount % 41 == 19)
			{
				matlist_00066F5C[1].attr_texId = 73;
				matlist_01979784[0].attr_texId = 73;
			}
			if (LevelFrameCount % 41 == 22)
			{
				matlist_00066F5C[1].attr_texId = 74;
				matlist_01979784[0].attr_texId = 74;
			}
			if (LevelFrameCount % 41 == 25)
			{
				matlist_00066F5C[1].attr_texId = 67;
				matlist_01979784[0].attr_texId = 67;
			}
			if (LevelFrameCount % 41 == 28)
			{
				matlist_00066F5C[1].attr_texId = 76;
				matlist_01979784[0].attr_texId = 76;
			}
			if (LevelFrameCount % 41 == 31)
			{
				matlist_00066F5C[1].attr_texId = 77;
				matlist_01979784[0].attr_texId = 77;
			}
			if (LevelFrameCount % 41 == 34)
			{
				matlist_00066F5C[1].attr_texId = 78;
				matlist_01979784[0].attr_texId = 78;
			}
			if (LevelFrameCount % 41 == 37)
			{
				matlist_00066F5C[1].attr_texId = 79;
				matlist_01979784[0].attr_texId = 79;
			}
			if (LevelFrameCount % 41 == 0)
			{
				matlist_00066F5C[1].attr_texId = 80;
				matlist_01979784[0].attr_texId = 80;
			}
		}
		if (CurrentLevel == 9 && CurrentAct == 1)
		{
			if (LevelFrameCount % 41 == 1)
			{
				matlist_000ACC44[0].attr_texId = 7;
				matlist_000ACB40[0].attr_texId = 7;
			}
			if (LevelFrameCount % 41 == 4)
			{
				matlist_000ACC44[0].attr_texId = 10;
				matlist_000ACB40[0].attr_texId = 10;
			}
			if (LevelFrameCount % 41 == 7)
			{
				matlist_000ACC44[0].attr_texId = 11;
				matlist_000ACB40[0].attr_texId = 11;
			}
			if (LevelFrameCount % 41 == 10)
			{
				matlist_000ACC44[0].attr_texId = 12;
				matlist_000ACB40[0].attr_texId = 12;
			}
			if (LevelFrameCount % 41 == 13)
			{
				matlist_000ACC44[0].attr_texId = 13;
				matlist_000ACB40[0].attr_texId = 13;
			}
			if (LevelFrameCount % 41 == 16)
			{
				matlist_000ACC44[0].attr_texId = 14;
				matlist_000ACB40[0].attr_texId = 14;
			}
			if (LevelFrameCount % 41 == 19)
			{
				matlist_000ACC44[0].attr_texId = 9;
				matlist_000ACB40[0].attr_texId = 9;
			}
			if (LevelFrameCount % 41 == 22)
			{
				matlist_000ACC44[0].attr_texId = 15;
				matlist_000ACB40[0].attr_texId = 15;
			}
			if (LevelFrameCount % 41 == 25)
			{
				matlist_000ACC44[0].attr_texId = 16;
				matlist_000ACB40[0].attr_texId = 16;
			}
			if (LevelFrameCount % 41 == 28)
			{
				matlist_000ACC44[0].attr_texId = 17;
				matlist_000ACB40[0].attr_texId = 17;
			}
			if (LevelFrameCount % 41 == 31)
			{
				matlist_000ACC44[0].attr_texId = 18;
				matlist_000ACB40[0].attr_texId = 18;
			}
			if (LevelFrameCount % 41 == 34)
			{
				matlist_000ACC44[0].attr_texId = 19;
				matlist_000ACB40[0].attr_texId = 19;
			}
			if (LevelFrameCount % 41 == 37)
			{
				matlist_000ACC44[0].attr_texId = 20;
				matlist_000ACB40[0].attr_texId = 20;
			}
			if (LevelFrameCount % 41 == 0)
			{
				matlist_000ACC44[0].attr_texId = 21;
				matlist_000ACB40[0].attr_texId = 21;
			}
		}
	}
}