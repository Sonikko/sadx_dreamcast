#include "stdafx.h"
#include "SADXModLoader.h"
#include "IceCap1.h"
#include "IceCap2.h"
#include "IceCap3.h"
#include "IceCap4.h"
#include "Icicle.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB08, &landtable_00014B44),
	ptrdecl(0x97DB0C, &landtable_00015714),
	ptrdecl(0x97DB10, &landtable_000180B4),
	ptrdecl(0x97DB14, &landtable_00019950)
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
//		memcpy((void*)0x00D6B39C, &object_0007F6C4, sizeof(object_0007F6C4));
//		memcpy((void*)0x00DD3A5C, &object_000C50AC, sizeof(object_000C50AC));
		memcpy((void*)0x0E537D8, &object_00162694, sizeof(object_00162694));  // Icicle
		//memcpy((void*)0x0E76598, &object_00A76598, sizeof(object_00A76598));  // Crystal1
		DataArray(FogData, IceCap1Fog, 0x00C67EA0, 1);
		DataArray(FogData, IceCap2Fog, 0x00C67ED0, 1);
		DataArray(FogData, IceCap4Fog, 0x00C67F30, 1);
		DataArray(DrawDistance, DrawDist_IceCap1, 0x00C67E40, 3);
		DataArray(DrawDistance, DrawDist_IceCap2, 0x00C67E58, 3);
		for (int i = 0; i < 3; i++)
		{
			IceCap1Fog[i].Color = 0xFFFFFFFF;
			IceCap1Fog[i].Layer = 1500.0f;
			IceCap1Fog[i].Distance = 3800.0f;
			IceCap1Fog[i].Toggle = 1;
			DrawDist_IceCap1[i].Maximum = -4000.0;
			IceCap2Fog[i].Color = 0xFFFFFFFF;
			IceCap2Fog[i].Layer = 800.0f;
			IceCap2Fog[i].Distance = 3800.0f;
			IceCap2Fog[i].Toggle = 1;
			DrawDist_IceCap2[i].Maximum = -4000.0;
			IceCap4Fog[i].Color = 0xFF575757;
			IceCap4Fog[i].Layer = 800.0f;
			IceCap4Fog[i].Distance = 3800.0f;
			IceCap4Fog[i].Toggle = 1;
		}
	};
	__declspec(dllexport) void __cdecl OnFrame()
	{
		/*if (CurrentLevel == 8 && CurrentAct == 0)
		{
			((NJS_OBJECT*)0x00E76598)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_OBJECT*)0x00E76E78)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
			((NJS_OBJECT*)0x00E773D8)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		}*/

		if (CurrentLevel == 8 && CurrentAct == 3 && GameState == 15)
		{
			if (LevelFrameCount % 60 == 0)
			{
				matlist_Q00076DC8[0].attr_texId = 16;
				matlist_Q00077244[0].attr_texId = 16;
				matlist_Q000820E4[0].attr_texId = 16;
				matlist_Q000820E4[1].attr_texId = 16;
				matlist_Q0008E8E0[0].attr_texId = 16;
				matlist_Q0008E9E4[0].attr_texId = 16;
				matlist_Q000A4F08[0].attr_texId = 16;
				matlist_Q000A773C[0].attr_texId = 16;
				matlist_Q000A773C[1].attr_texId = 16;
				matlist_Q000A9AD8[0].attr_texId = 16;
				matlist_Q000A9AD8[1].attr_texId = 16;
				matlist_Q000A9AD8[2].attr_texId = 16;
				matlist_Q000AB4B4[0].attr_texId = 16;
				matlist_Q000AC6B4[0].attr_texId = 16;
				matlist_Q0005BB68[0].attr_texId = 16;
				matlist_Q000B624C[0].attr_texId = 16;
				matlist_Q000B624C[1].attr_texId = 16;
				matlist_Q000B84C8[0].attr_texId = 16;
				matlist_Q000BCA5C[0].attr_texId = 16;
				matlist_Q000BCA5C[1].attr_texId = 16;
				matlist_Q000BD328[0].attr_texId = 16;
				matlist_Q000BD328[1].attr_texId = 16;
				matlist_Q000C4800[0].attr_texId = 16;
				matlist_Q000C4940[0].attr_texId = 16;
				matlist_Q000C4A44[0].attr_texId = 16;
				matlist_Q000C4B84[0].attr_texId = 16;
				matlist_Q000C4C88[0].attr_texId = 16;
			}
			if (LevelFrameCount % 60 == 4)
			{
				matlist_Q00076DC8[0].attr_texId = 41;
				matlist_Q00077244[0].attr_texId = 41;
				matlist_Q000820E4[0].attr_texId = 41;
				matlist_Q000820E4[1].attr_texId = 41;
				matlist_Q0008E8E0[0].attr_texId = 41;
				matlist_Q0008E9E4[0].attr_texId = 41;
				matlist_Q000A4F08[0].attr_texId = 41;
				matlist_Q000A773C[0].attr_texId = 41;
				matlist_Q000A773C[1].attr_texId = 41;
				matlist_Q000A9AD8[0].attr_texId = 41;
				matlist_Q000A9AD8[1].attr_texId = 41;
				matlist_Q000A9AD8[2].attr_texId = 41;
				matlist_Q000AB4B4[0].attr_texId = 41;
				matlist_Q000AC6B4[0].attr_texId = 41;
				matlist_Q0005BB68[0].attr_texId = 41;
				matlist_Q000B624C[0].attr_texId = 41;
				matlist_Q000B624C[1].attr_texId = 41;
				matlist_Q000B84C8[0].attr_texId = 41;
				matlist_Q000BCA5C[0].attr_texId = 41;
				matlist_Q000BCA5C[1].attr_texId = 41;
				matlist_Q000BD328[0].attr_texId = 41;
				matlist_Q000BD328[1].attr_texId = 41;
				matlist_Q000C4800[0].attr_texId = 41;
				matlist_Q000C4940[0].attr_texId = 41;
				matlist_Q000C4A44[0].attr_texId = 41;
				matlist_Q000C4B84[0].attr_texId = 41;
				matlist_Q000C4C88[0].attr_texId = 41;
			}
			if (LevelFrameCount % 60 == 8)
			{
				matlist_Q00076DC8[0].attr_texId = 42;
				matlist_Q00077244[0].attr_texId = 42;
				matlist_Q000820E4[0].attr_texId = 42;
				matlist_Q000820E4[1].attr_texId = 42;
				matlist_Q0008E8E0[0].attr_texId = 42;
				matlist_Q0008E9E4[0].attr_texId = 42;
				matlist_Q000A4F08[0].attr_texId = 42;
				matlist_Q000A773C[0].attr_texId = 42;
				matlist_Q000A773C[1].attr_texId = 42;
				matlist_Q000A9AD8[0].attr_texId = 42;
				matlist_Q000A9AD8[1].attr_texId = 42;
				matlist_Q000A9AD8[2].attr_texId = 42;
				matlist_Q000AB4B4[0].attr_texId = 42;
				matlist_Q000AC6B4[0].attr_texId = 42;
				matlist_Q0005BB68[0].attr_texId = 42;
				matlist_Q000B624C[0].attr_texId = 42;
				matlist_Q000B624C[1].attr_texId = 42;
				matlist_Q000B84C8[0].attr_texId = 42;
				matlist_Q000BCA5C[0].attr_texId = 42;
				matlist_Q000BCA5C[1].attr_texId = 42;
				matlist_Q000BD328[0].attr_texId = 42;
				matlist_Q000BD328[1].attr_texId = 42;
				matlist_Q000C4800[0].attr_texId = 42;
				matlist_Q000C4940[0].attr_texId = 42;
				matlist_Q000C4A44[0].attr_texId = 42;
				matlist_Q000C4B84[0].attr_texId = 42;
				matlist_Q000C4C88[0].attr_texId = 42;
			}
			if (LevelFrameCount % 60 == 12)
			{
				matlist_Q00076DC8[0].attr_texId = 43;
				matlist_Q00077244[0].attr_texId = 43;
				matlist_Q000820E4[0].attr_texId = 43;
				matlist_Q000820E4[1].attr_texId = 43;
				matlist_Q0008E8E0[0].attr_texId = 43;
				matlist_Q0008E9E4[0].attr_texId = 43;
				matlist_Q000A4F08[0].attr_texId = 43;
				matlist_Q000A773C[0].attr_texId = 43;
				matlist_Q000A773C[1].attr_texId = 43;
				matlist_Q000A9AD8[0].attr_texId = 43;
				matlist_Q000A9AD8[1].attr_texId = 43;
				matlist_Q000A9AD8[2].attr_texId = 43;
				matlist_Q000AB4B4[0].attr_texId = 43;
				matlist_Q000AC6B4[0].attr_texId = 43;
				matlist_Q0005BB68[0].attr_texId = 43;
				matlist_Q000B624C[0].attr_texId = 43;
				matlist_Q000B624C[1].attr_texId = 43;
				matlist_Q000B84C8[0].attr_texId = 43;
				matlist_Q000BCA5C[0].attr_texId = 43;
				matlist_Q000BCA5C[1].attr_texId = 43;
				matlist_Q000BD328[0].attr_texId = 43;
				matlist_Q000BD328[1].attr_texId = 43;
				matlist_Q000C4800[0].attr_texId = 43;
				matlist_Q000C4940[0].attr_texId = 43;
				matlist_Q000C4A44[0].attr_texId = 43;
				matlist_Q000C4B84[0].attr_texId = 43;
				matlist_Q000C4C88[0].attr_texId = 43;
			}

			if (LevelFrameCount % 60 == 16)
			{
				matlist_Q00076DC8[0].attr_texId = 44;
				matlist_Q00077244[0].attr_texId = 44;
				matlist_Q000820E4[0].attr_texId = 44;
				matlist_Q000820E4[1].attr_texId = 44;
				matlist_Q0008E8E0[0].attr_texId = 44;
				matlist_Q0008E9E4[0].attr_texId = 44;
				matlist_Q000A4F08[0].attr_texId = 44;
				matlist_Q000A773C[0].attr_texId = 44;
				matlist_Q000A773C[1].attr_texId = 44;
				matlist_Q000A9AD8[0].attr_texId = 44;
				matlist_Q000A9AD8[1].attr_texId = 44;
				matlist_Q000A9AD8[2].attr_texId = 44;
				matlist_Q000AB4B4[0].attr_texId = 44;
				matlist_Q000AC6B4[0].attr_texId = 44;
				matlist_Q0005BB68[0].attr_texId = 44;
				matlist_Q000B624C[0].attr_texId = 44;
				matlist_Q000B624C[1].attr_texId = 44;
				matlist_Q000B84C8[0].attr_texId = 44;
				matlist_Q000BCA5C[0].attr_texId = 44;
				matlist_Q000BCA5C[1].attr_texId = 44;
				matlist_Q000BD328[0].attr_texId = 44;
				matlist_Q000BD328[1].attr_texId = 44;
				matlist_Q000C4800[0].attr_texId = 44;
				matlist_Q000C4940[0].attr_texId = 44;
				matlist_Q000C4A44[0].attr_texId = 44;
				matlist_Q000C4B84[0].attr_texId = 44;
				matlist_Q000C4C88[0].attr_texId = 44;
			}
			if (LevelFrameCount % 60 == 20)
			{
				matlist_Q00076DC8[0].attr_texId = 45;
				matlist_Q00077244[0].attr_texId = 45;
				matlist_Q000820E4[0].attr_texId = 45;
				matlist_Q000820E4[1].attr_texId = 45;
				matlist_Q0008E8E0[0].attr_texId = 45;
				matlist_Q0008E9E4[0].attr_texId = 45;
				matlist_Q000A4F08[0].attr_texId = 45;
				matlist_Q000A773C[0].attr_texId = 45;
				matlist_Q000A773C[1].attr_texId = 45;
				matlist_Q000A9AD8[0].attr_texId = 45;
				matlist_Q000A9AD8[1].attr_texId = 45;
				matlist_Q000A9AD8[2].attr_texId = 45;
				matlist_Q000AB4B4[0].attr_texId = 45;
				matlist_Q000AC6B4[0].attr_texId = 45;
				matlist_Q0005BB68[0].attr_texId = 45;
				matlist_Q000B624C[0].attr_texId = 45;
				matlist_Q000B624C[1].attr_texId = 45;
				matlist_Q000B84C8[0].attr_texId = 45;
				matlist_Q000BCA5C[0].attr_texId = 45;
				matlist_Q000BCA5C[1].attr_texId = 45;
				matlist_Q000BD328[0].attr_texId = 45;
				matlist_Q000BD328[1].attr_texId = 45;
				matlist_Q000C4800[0].attr_texId = 45;
				matlist_Q000C4940[0].attr_texId = 45;
				matlist_Q000C4A44[0].attr_texId = 45;
				matlist_Q000C4B84[0].attr_texId = 45;
				matlist_Q000C4C88[0].attr_texId = 45;
			}
			if (LevelFrameCount % 60 == 24)
			{
				matlist_Q00076DC8[0].attr_texId = 46;
				matlist_Q00077244[0].attr_texId = 46;
				matlist_Q000820E4[0].attr_texId = 46;
				matlist_Q000820E4[1].attr_texId = 46;
				matlist_Q0008E8E0[0].attr_texId = 46;
				matlist_Q0008E9E4[0].attr_texId = 46;
				matlist_Q000A4F08[0].attr_texId = 46;
				matlist_Q000A773C[0].attr_texId = 46;
				matlist_Q000A773C[1].attr_texId = 46;
				matlist_Q000A9AD8[0].attr_texId = 46;
				matlist_Q000A9AD8[1].attr_texId = 46;
				matlist_Q000A9AD8[2].attr_texId = 46;
				matlist_Q000AB4B4[0].attr_texId = 46;
				matlist_Q000AC6B4[0].attr_texId = 46;
				matlist_Q0005BB68[0].attr_texId = 46;
				matlist_Q000B624C[0].attr_texId = 46;
				matlist_Q000B624C[1].attr_texId = 46;
				matlist_Q000B84C8[0].attr_texId = 46;
				matlist_Q000BCA5C[0].attr_texId = 46;
				matlist_Q000BCA5C[1].attr_texId = 46;
				matlist_Q000BD328[0].attr_texId = 46;
				matlist_Q000BD328[1].attr_texId = 46;
				matlist_Q000C4800[0].attr_texId = 46;
				matlist_Q000C4940[0].attr_texId = 46;
				matlist_Q000C4A44[0].attr_texId = 46;
				matlist_Q000C4B84[0].attr_texId = 46;
				matlist_Q000C4C88[0].attr_texId = 46;
			}
			if (LevelFrameCount % 60 == 28)
			{
				matlist_Q00076DC8[0].attr_texId = 47;
				matlist_Q00077244[0].attr_texId = 47;
				matlist_Q000820E4[0].attr_texId = 47;
				matlist_Q000820E4[1].attr_texId = 47;
				matlist_Q0008E8E0[0].attr_texId = 47;
				matlist_Q0008E9E4[0].attr_texId = 47;
				matlist_Q000A4F08[0].attr_texId = 47;
				matlist_Q000A773C[0].attr_texId = 47;
				matlist_Q000A773C[1].attr_texId = 47;
				matlist_Q000A9AD8[0].attr_texId = 47;
				matlist_Q000A9AD8[1].attr_texId = 47;
				matlist_Q000A9AD8[2].attr_texId = 47;
				matlist_Q000AB4B4[0].attr_texId = 47;
				matlist_Q000AC6B4[0].attr_texId = 47;
				matlist_Q0005BB68[0].attr_texId = 47;
				matlist_Q000B624C[0].attr_texId = 47;
				matlist_Q000B624C[1].attr_texId = 47;
				matlist_Q000B84C8[0].attr_texId = 47;
				matlist_Q000BCA5C[0].attr_texId = 47;
				matlist_Q000BCA5C[1].attr_texId = 47;
				matlist_Q000BD328[0].attr_texId = 47;
				matlist_Q000BD328[1].attr_texId = 47;
				matlist_Q000C4800[0].attr_texId = 47;
				matlist_Q000C4940[0].attr_texId = 47;
				matlist_Q000C4A44[0].attr_texId = 47;
				matlist_Q000C4B84[0].attr_texId = 47;
				matlist_Q000C4C88[0].attr_texId = 47;
			}
			if (LevelFrameCount % 60 == 32)
			{
				matlist_Q00076DC8[0].attr_texId = 48;
				matlist_Q00077244[0].attr_texId = 48;
				matlist_Q000820E4[0].attr_texId = 48;
				matlist_Q000820E4[1].attr_texId = 48;
				matlist_Q0008E8E0[0].attr_texId = 48;
				matlist_Q0008E9E4[0].attr_texId = 48;
				matlist_Q000A4F08[0].attr_texId = 48;
				matlist_Q000A773C[0].attr_texId = 48;
				matlist_Q000A773C[1].attr_texId = 48;
				matlist_Q000A9AD8[0].attr_texId = 48;
				matlist_Q000A9AD8[1].attr_texId = 48;
				matlist_Q000A9AD8[2].attr_texId = 48;
				matlist_Q000AB4B4[0].attr_texId = 48;
				matlist_Q000AC6B4[0].attr_texId = 48;
				matlist_Q0005BB68[0].attr_texId = 48;
				matlist_Q000B624C[0].attr_texId = 48;
				matlist_Q000B624C[1].attr_texId = 48;
				matlist_Q000B84C8[0].attr_texId = 48;
				matlist_Q000BCA5C[0].attr_texId = 48;
				matlist_Q000BCA5C[1].attr_texId = 48;
				matlist_Q000BD328[0].attr_texId = 48;
				matlist_Q000BD328[1].attr_texId = 48;
				matlist_Q000C4800[0].attr_texId = 48;
				matlist_Q000C4940[0].attr_texId = 48;
				matlist_Q000C4A44[0].attr_texId = 48;
				matlist_Q000C4B84[0].attr_texId = 48;
				matlist_Q000C4C88[0].attr_texId = 48;
			}
			if (LevelFrameCount % 60 == 36)
			{
				matlist_Q00076DC8[0].attr_texId = 49;
				matlist_Q00077244[0].attr_texId = 49;
				matlist_Q000820E4[0].attr_texId = 49;
				matlist_Q000820E4[1].attr_texId = 49;
				matlist_Q0008E8E0[0].attr_texId = 49;
				matlist_Q0008E9E4[0].attr_texId = 49;
				matlist_Q000A4F08[0].attr_texId = 49;
				matlist_Q000A773C[0].attr_texId = 49;
				matlist_Q000A773C[1].attr_texId = 49;
				matlist_Q000A9AD8[0].attr_texId = 49;
				matlist_Q000A9AD8[1].attr_texId = 49;
				matlist_Q000A9AD8[2].attr_texId = 49;
				matlist_Q000AB4B4[0].attr_texId = 49;
				matlist_Q000AC6B4[0].attr_texId = 49;
				matlist_Q0005BB68[0].attr_texId = 49;
				matlist_Q000B624C[0].attr_texId = 49;
				matlist_Q000B624C[1].attr_texId = 49;
				matlist_Q000B84C8[0].attr_texId = 49;
				matlist_Q000BCA5C[0].attr_texId = 49;
				matlist_Q000BCA5C[1].attr_texId = 49;
				matlist_Q000BD328[0].attr_texId = 49;
				matlist_Q000BD328[1].attr_texId = 49;
				matlist_Q000C4800[0].attr_texId = 49;
				matlist_Q000C4940[0].attr_texId = 49;
				matlist_Q000C4A44[0].attr_texId = 49;
				matlist_Q000C4B84[0].attr_texId = 49;
				matlist_Q000C4C88[0].attr_texId = 49;
			}

			if (LevelFrameCount % 60 == 40)
			{
				matlist_Q00076DC8[0].attr_texId = 50;
				matlist_Q00077244[0].attr_texId = 50;
				matlist_Q000820E4[0].attr_texId = 50;
				matlist_Q000820E4[1].attr_texId = 50;
				matlist_Q0008E8E0[0].attr_texId = 50;
				matlist_Q0008E9E4[0].attr_texId = 50;
				matlist_Q000A4F08[0].attr_texId = 50;
				matlist_Q000A773C[0].attr_texId = 50;
				matlist_Q000A773C[1].attr_texId = 50;
				matlist_Q000A9AD8[0].attr_texId = 50;
				matlist_Q000A9AD8[1].attr_texId = 50;
				matlist_Q000A9AD8[2].attr_texId = 50;
				matlist_Q000AB4B4[0].attr_texId = 50;
				matlist_Q000AC6B4[0].attr_texId = 50;
				matlist_Q0005BB68[0].attr_texId = 50;
				matlist_Q000B624C[0].attr_texId = 50;
				matlist_Q000B624C[1].attr_texId = 50;
				matlist_Q000B84C8[0].attr_texId = 50;
				matlist_Q000BCA5C[0].attr_texId = 50;
				matlist_Q000BCA5C[1].attr_texId = 50;
				matlist_Q000BD328[0].attr_texId = 50;
				matlist_Q000BD328[1].attr_texId = 50;
				matlist_Q000C4800[0].attr_texId = 50;
				matlist_Q000C4940[0].attr_texId = 50;
				matlist_Q000C4A44[0].attr_texId = 50;
				matlist_Q000C4B84[0].attr_texId = 50;
				matlist_Q000C4C88[0].attr_texId = 50;
			}
			if (LevelFrameCount % 60 == 44)
			{
				matlist_Q00076DC8[0].attr_texId = 51;
				matlist_Q00077244[0].attr_texId = 51;
				matlist_Q000820E4[0].attr_texId = 51;
				matlist_Q000820E4[1].attr_texId = 51;
				matlist_Q0008E8E0[0].attr_texId = 51;
				matlist_Q0008E9E4[0].attr_texId = 51;
				matlist_Q000A4F08[0].attr_texId = 51;
				matlist_Q000A773C[0].attr_texId = 51;
				matlist_Q000A773C[1].attr_texId = 51;
				matlist_Q000A9AD8[0].attr_texId = 51;
				matlist_Q000A9AD8[1].attr_texId = 51;
				matlist_Q000A9AD8[2].attr_texId = 51;
				matlist_Q000AB4B4[0].attr_texId = 51;
				matlist_Q000AC6B4[0].attr_texId = 51;
				matlist_Q0005BB68[0].attr_texId = 51;
				matlist_Q000B624C[0].attr_texId = 51;
				matlist_Q000B624C[1].attr_texId = 51;
				matlist_Q000B84C8[0].attr_texId = 51;
				matlist_Q000BCA5C[0].attr_texId = 51;
				matlist_Q000BCA5C[1].attr_texId = 51;
				matlist_Q000BD328[0].attr_texId = 51;
				matlist_Q000BD328[1].attr_texId = 51;
				matlist_Q000C4800[0].attr_texId = 51;
				matlist_Q000C4940[0].attr_texId = 51;
				matlist_Q000C4A44[0].attr_texId = 51;
				matlist_Q000C4B84[0].attr_texId = 51;
				matlist_Q000C4C88[0].attr_texId = 51;
			}

			if (LevelFrameCount % 60 == 48)
			{
				matlist_Q00076DC8[0].attr_texId = 52;
				matlist_Q00077244[0].attr_texId = 52;
				matlist_Q000820E4[0].attr_texId = 52;
				matlist_Q000820E4[1].attr_texId = 52;
				matlist_Q0008E8E0[0].attr_texId = 52;
				matlist_Q0008E9E4[0].attr_texId = 52;
				matlist_Q000A4F08[0].attr_texId = 52;
				matlist_Q000A773C[0].attr_texId = 52;
				matlist_Q000A773C[1].attr_texId = 52;
				matlist_Q000A9AD8[0].attr_texId = 52;
				matlist_Q000A9AD8[1].attr_texId = 52;
				matlist_Q000A9AD8[2].attr_texId = 52;
				matlist_Q000AB4B4[0].attr_texId = 52;
				matlist_Q000AC6B4[0].attr_texId = 52;
				matlist_Q0005BB68[0].attr_texId = 52;
				matlist_Q000B624C[0].attr_texId = 52;
				matlist_Q000B624C[1].attr_texId = 52;
				matlist_Q000B84C8[0].attr_texId = 52;
				matlist_Q000BCA5C[0].attr_texId = 52;
				matlist_Q000BCA5C[1].attr_texId = 52;
				matlist_Q000BD328[0].attr_texId = 52;
				matlist_Q000BD328[1].attr_texId = 52;
				matlist_Q000C4800[0].attr_texId = 52;
				matlist_Q000C4940[0].attr_texId = 52;
				matlist_Q000C4A44[0].attr_texId = 52;
				matlist_Q000C4B84[0].attr_texId = 52;
				matlist_Q000C4C88[0].attr_texId = 52;
			}
			if (LevelFrameCount % 60 == 52)
			{
				matlist_Q00076DC8[0].attr_texId = 53;
				matlist_Q00077244[0].attr_texId = 53;
				matlist_Q000820E4[0].attr_texId = 53;
				matlist_Q000820E4[1].attr_texId = 53;
				matlist_Q0008E8E0[0].attr_texId = 53;
				matlist_Q0008E9E4[0].attr_texId = 53;
				matlist_Q000A4F08[0].attr_texId = 53;
				matlist_Q000A773C[0].attr_texId = 53;
				matlist_Q000A773C[1].attr_texId = 53;
				matlist_Q000A9AD8[0].attr_texId = 53;
				matlist_Q000A9AD8[1].attr_texId = 53;
				matlist_Q000A9AD8[2].attr_texId = 53;
				matlist_Q000AB4B4[0].attr_texId = 53;
				matlist_Q000AC6B4[0].attr_texId = 53;
				matlist_Q0005BB68[0].attr_texId = 53;
				matlist_Q000B624C[0].attr_texId = 53;
				matlist_Q000B624C[1].attr_texId = 53;
				matlist_Q000B84C8[0].attr_texId = 53;
				matlist_Q000BCA5C[0].attr_texId = 53;
				matlist_Q000BCA5C[1].attr_texId = 53;
				matlist_Q000BD328[0].attr_texId = 53;
				matlist_Q000BD328[1].attr_texId = 53;
				matlist_Q000C4800[0].attr_texId = 53;
				matlist_Q000C4940[0].attr_texId = 53;
				matlist_Q000C4A44[0].attr_texId = 53;
				matlist_Q000C4B84[0].attr_texId = 53;
				matlist_Q000C4C88[0].attr_texId = 53;
			}
			if (LevelFrameCount % 60 == 56)
			{
				matlist_Q00076DC8[0].attr_texId = 54;
				matlist_Q00077244[0].attr_texId = 54;
				matlist_Q000820E4[0].attr_texId = 54;
				matlist_Q000820E4[1].attr_texId = 54;
				matlist_Q0008E8E0[0].attr_texId = 54;
				matlist_Q0008E9E4[0].attr_texId = 54;
				matlist_Q000A4F08[0].attr_texId = 54;
				matlist_Q000A773C[0].attr_texId = 54;
				matlist_Q000A773C[1].attr_texId = 54;
				matlist_Q000A9AD8[0].attr_texId = 54;
				matlist_Q000A9AD8[1].attr_texId = 54;
				matlist_Q000A9AD8[2].attr_texId = 54;
				matlist_Q000AB4B4[0].attr_texId = 54;
				matlist_Q000AC6B4[0].attr_texId = 54;
				matlist_Q0005BB68[0].attr_texId = 54;
				matlist_Q000B624C[0].attr_texId = 54;
				matlist_Q000B624C[1].attr_texId = 54;
				matlist_Q000B84C8[0].attr_texId = 54;
				matlist_Q000BCA5C[0].attr_texId = 54;
				matlist_Q000BCA5C[1].attr_texId = 54;
				matlist_Q000BD328[0].attr_texId = 54;
				matlist_Q000BD328[1].attr_texId = 54;
				matlist_Q000C4800[0].attr_texId = 54;
				matlist_Q000C4940[0].attr_texId = 54;
				matlist_Q000C4A44[0].attr_texId = 54;
				matlist_Q000C4B84[0].attr_texId = 54;
				matlist_Q000C4C88[0].attr_texId = 54;
			}
		}
	}
}
