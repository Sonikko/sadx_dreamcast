#include "stdafx.h"
#include "SADXModLoader.h"
#include "Twinkle1.h"
#include "Twinkle2.h"
#include "Twinkle3.h"
#include "TwinklePark_objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA68, &landtable_0001788C),
	ptrdecl(0x97DA6C, &landtable_00019344),
	ptrdecl(0x97DA70, &landtable_00019F5C)
};

NJS_MATERIAL matlist_034C3AD0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

NJS_TEXNAME textures_tpobjects[97];

extern "C"
{
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		ResizeTextureList((NJS_TEXLIST*)0x38AEB70, textures_tpobjects);
		((NJS_OBJECT *)0x038C234C)->basicdxmodel->mats[0].attr_texId = 96;
		((NJS_OBJECT *)0x038BFC74)->basicdxmodel->mats[0].attr_texId = 96;
		DataArray(FogData, TwinklePark1Fog, 0x026B339C, 3);
		for (int i = 0; i < 3; i++)
		{
			TwinklePark1Fog[i].Layer = 1500.0f;
		}
		DataArray(FogData, TwinklePark3Fog, 0x026B342C, 3);
		for (int i = 0; i < 3; i++)
		{
			TwinklePark3Fog[i].Color = 0xFF000000;
			TwinklePark3Fog[i].Layer = 400.0f;
			TwinklePark3Fog[i].Distance = 1200.0f;
			TwinklePark3Fog[i].Toggle = 1;
		}

	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		{
			if (CurrentLevel == 3 && CurrentAct == 1)
			{
				if (LevelFrameCount % 41 == 1)
				{
					matlist_00065D8C[0].attr_texId = 74;
					matlist_0001A3A8[0].attr_texId = 74;
					matlist_000657A0[0].attr_texId = 74;
					matlist_00065A3C[0].attr_texId = 74;
				}
				if (LevelFrameCount % 41 == 4)
				{
					matlist_00065D8C[0].attr_texId = 75;
					matlist_0001A3A8[0].attr_texId = 75;
					matlist_000657A0[0].attr_texId = 75;
					matlist_00065A3C[0].attr_texId = 75;
				}
				if (LevelFrameCount % 41 == 7)
				{
					matlist_00065D8C[0].attr_texId = 76;
					matlist_0001A3A8[0].attr_texId = 76;
					matlist_000657A0[0].attr_texId = 76;
					matlist_00065A3C[0].attr_texId = 76;
				}
				if (LevelFrameCount % 41 == 10)
				{
					matlist_00065D8C[0].attr_texId = 77;
					matlist_0001A3A8[0].attr_texId = 77;
					matlist_000657A0[0].attr_texId = 77;
					matlist_00065A3C[0].attr_texId = 77;
				}
				if (LevelFrameCount % 41 == 13)
				{
					matlist_00065D8C[0].attr_texId = 78;
					matlist_0001A3A8[0].attr_texId = 78;
					matlist_000657A0[0].attr_texId = 78;
					matlist_00065A3C[0].attr_texId = 78;
				}
				if (LevelFrameCount % 41 == 16)
				{
					matlist_00065D8C[0].attr_texId = 79;
					matlist_0001A3A8[0].attr_texId = 79;
					matlist_000657A0[0].attr_texId = 79;
					matlist_00065A3C[0].attr_texId = 79;
				}
				if (LevelFrameCount % 41 == 19)
				{
					matlist_00065D8C[0].attr_texId = 80;
					matlist_0001A3A8[0].attr_texId = 80;
					matlist_000657A0[0].attr_texId = 80;
					matlist_00065A3C[0].attr_texId = 80;
				}
				if (LevelFrameCount % 41 == 22)
				{
					matlist_00065D8C[0].attr_texId = 81;
					matlist_0001A3A8[0].attr_texId = 81;
					matlist_000657A0[0].attr_texId = 81;
					matlist_00065A3C[0].attr_texId = 81;
				}
				if (LevelFrameCount % 41 == 25)
				{
					matlist_00065D8C[0].attr_texId = 82;
					matlist_0001A3A8[0].attr_texId = 82;
					matlist_000657A0[0].attr_texId = 82;
					matlist_00065A3C[0].attr_texId = 82;
				}
				if (LevelFrameCount % 41 == 28)
				{
					matlist_00065D8C[0].attr_texId = 83;
					matlist_0001A3A8[0].attr_texId = 83;
					matlist_000657A0[0].attr_texId = 83;
					matlist_00065A3C[0].attr_texId = 83;
				}
				if (LevelFrameCount % 41 == 31)
				{
					matlist_00065D8C[0].attr_texId = 84;
					matlist_0001A3A8[0].attr_texId = 84;
					matlist_000657A0[0].attr_texId = 84;
					matlist_00065A3C[0].attr_texId = 84;
				}
				if (LevelFrameCount % 41 == 34)
				{
					matlist_00065D8C[0].attr_texId = 85;
					matlist_0001A3A8[0].attr_texId = 85;
					matlist_000657A0[0].attr_texId = 85;
					matlist_00065A3C[0].attr_texId = 85;
				}
				if (LevelFrameCount % 41 == 37)
				{
					matlist_00065D8C[0].attr_texId = 86;
					matlist_0001A3A8[0].attr_texId = 86;
					matlist_000657A0[0].attr_texId = 86;
					matlist_00065A3C[0].attr_texId = 86;
				}
				if (LevelFrameCount % 41 == 0)
				{
					matlist_00065D8C[0].attr_texId = 87;
					matlist_0001A3A8[0].attr_texId = 87;
					matlist_000657A0[0].attr_texId = 87;
					matlist_00065A3C[0].attr_texId = 87;
				}
			}
		}
	};
}