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

		ResizeTextureList((NJS_TEXLIST*)0x26B9960, textures_twinkle1);
		ResizeTextureList((NJS_TEXLIST*)0x2721A8C, textures_twinkle2);
		ResizeTextureList((NJS_TEXLIST*)0x26FEA54, textures_twinkle3);
		ResizeTextureList((NJS_TEXLIST*)0x38AEB70, textures_tpobjects); //OBJ_TWINKLE
		((NJS_OBJECT *)0x038C214C)->basicdxmodel->mats[6].attr_texId = 96; //Neon panel
		((NJS_OBJECT *)0x038C234C)->basicdxmodel->mats[0].attr_texId = 96; //Light
		((NJS_OBJECT *)0x038BFC74)->basicdxmodel->mats[0].attr_texId = 96;  //Light 2
		*(NJS_OBJECT*)0x0279D364 = object_000A0E58; // barrel
		/**(NJS_OBJECT*)0x027B6170 = object_000B4F1C; // yellow flower pot
		*(NJS_OBJECT*)0x027B80C4 = object_000B4F1C; // yellow flower pot 2
		*(NJS_OBJECT*)0x027B6A58 = object_000B5EE8; // pink flower pot
		*(NJS_OBJECT*)0x027B972C = object_000B5EE8; // pink flower pot 2
		*(NJS_OBJECT*)0x027BAC54 = object_000B6CF8; // yellow flower bed
		*(NJS_OBJECT*)0x027BC1C4 = object_000B6CF8_2; // pink flower bed*/
		DataArray(FogData, TwinklePark1Fog, 0x026B339C, 3);
		DataArray(FogData, TwinklePark2Fog, 0x026B33CC, 3);
		DataArray(FogData, TwinklePark3Fog, 0x026B33FC, 3);
		DataArray(FogData, TwinklePark4Fog, 0x026B342C, 3);
		for (int i = 0; i < 3; i++)
		{
			TwinklePark1Fog[i].Layer = 1500.0f;
			TwinklePark2Fog[i].Layer = -1400.0f;
			TwinklePark2Fog[i].Distance = -3200.0f;
			TwinklePark2Fog[i].Color = 0xFF100428;
			TwinklePark3Fog[i].Layer = -800.0f;
			TwinklePark3Fog[i].Distance = -2200.0f;
			TwinklePark3Fog[i].Color = 0xFF100428;
			TwinklePark4Fog[i].Color = 0xFF000000;
			TwinklePark4Fog[i].Layer = 400.0f;
			TwinklePark4Fog[i].Distance = 1200.0f;
			TwinklePark4Fog[i].Toggle = 1;
		}

	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		{
			if (CurrentLevel == 3 && CurrentAct == 1 && GameState != 16)
			{
				if (LevelFrameCount % 56 == 0)
				{
					matlist_00065D8C[0].attr_texId = 74;
					matlist_0001A3A8[0].attr_texId = 74;
					matlist_000657A0[0].attr_texId = 74;
					matlist_00065A3C[0].attr_texId = 74;
				}
				if (LevelFrameCount % 56 == 4)
				{
					matlist_00065D8C[0].attr_texId = 75;
					matlist_0001A3A8[0].attr_texId = 75;
					matlist_000657A0[0].attr_texId = 75;
					matlist_00065A3C[0].attr_texId = 75;
				}
				if (LevelFrameCount % 56 == 8)
				{
					matlist_00065D8C[0].attr_texId = 76;
					matlist_0001A3A8[0].attr_texId = 76;
					matlist_000657A0[0].attr_texId = 76;
					matlist_00065A3C[0].attr_texId = 76;
				}
				if (LevelFrameCount % 56 == 12)
				{
					matlist_00065D8C[0].attr_texId = 77;
					matlist_0001A3A8[0].attr_texId = 77;
					matlist_000657A0[0].attr_texId = 77;
					matlist_00065A3C[0].attr_texId = 77;
				}
				if (LevelFrameCount % 56 == 16)
				{
					matlist_00065D8C[0].attr_texId = 78;
					matlist_0001A3A8[0].attr_texId = 78;
					matlist_000657A0[0].attr_texId = 78;
					matlist_00065A3C[0].attr_texId = 78;
				}
				if (LevelFrameCount % 56 == 20)
				{
					matlist_00065D8C[0].attr_texId = 79;
					matlist_0001A3A8[0].attr_texId = 79;
					matlist_000657A0[0].attr_texId = 79;
					matlist_00065A3C[0].attr_texId = 79;
				}
				if (LevelFrameCount % 56 == 24)
				{
					matlist_00065D8C[0].attr_texId = 80;
					matlist_0001A3A8[0].attr_texId = 80;
					matlist_000657A0[0].attr_texId = 80;
					matlist_00065A3C[0].attr_texId = 80;
				}
				if (LevelFrameCount % 56 == 28)
				{
					matlist_00065D8C[0].attr_texId = 81;
					matlist_0001A3A8[0].attr_texId = 81;
					matlist_000657A0[0].attr_texId = 81;
					matlist_00065A3C[0].attr_texId = 81;
				}
				if (LevelFrameCount % 56 == 32)
				{
					matlist_00065D8C[0].attr_texId = 82;
					matlist_0001A3A8[0].attr_texId = 82;
					matlist_000657A0[0].attr_texId = 82;
					matlist_00065A3C[0].attr_texId = 82;
				}
				if (LevelFrameCount % 56 == 36)
				{
					matlist_00065D8C[0].attr_texId = 83;
					matlist_0001A3A8[0].attr_texId = 83;
					matlist_000657A0[0].attr_texId = 83;
					matlist_00065A3C[0].attr_texId = 83;
				}
				if (LevelFrameCount % 56 == 40)
				{
					matlist_00065D8C[0].attr_texId = 84;
					matlist_0001A3A8[0].attr_texId = 84;
					matlist_000657A0[0].attr_texId = 84;
					matlist_00065A3C[0].attr_texId = 84;
				}
				if (LevelFrameCount % 56 == 44)
				{
					matlist_00065D8C[0].attr_texId = 85;
					matlist_0001A3A8[0].attr_texId = 85;
					matlist_000657A0[0].attr_texId = 85;
					matlist_00065A3C[0].attr_texId = 85;
				}
				if (LevelFrameCount % 56 == 48)
				{
					matlist_00065D8C[0].attr_texId = 86;
					matlist_0001A3A8[0].attr_texId = 86;
					matlist_000657A0[0].attr_texId = 86;
					matlist_00065A3C[0].attr_texId = 86;
				}
				if (LevelFrameCount % 56 == 52)
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