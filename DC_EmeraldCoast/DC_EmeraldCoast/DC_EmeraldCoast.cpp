#include "stdafx.h"
#include "SADXModLoader.h"
#include "EmeraldCoast1_PC.h"
#include "EmeraldCoast1.h"
#include "EmeraldCoast2.h"
#include "EmeraldCoast3.h"

static int anim1 = 82;
static int anim2 = 67;
static int anim3 = 42;
static int anim4 = 71;
static int anim5 = 50;
static int anim6 = 65;

DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);

PointerInfo pointers[] = {
	ptrdecl(0x97DA28, &landtable_00081554),
	ptrdecl(0x97DA2C, &landtable_000DEB60),
	ptrdecl(0x97DA30, &landtable_0011DD58),
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) void __cdecl Init()
{
	ResizeTextureList((NJS_TEXLIST*)0xF812AC, textures_ecoast1);
	ResizeTextureList((NJS_TEXLIST*)0xEF553C, textures_ecoast2);
	ResizeTextureList((NJS_TEXLIST*)0xE9A4CC, textures_ecoast3);
	DataArray(DrawDistance, DrawDist_EmeraldCoast1, 0x00E99D94, 3);
	DataArray(DrawDistance, DrawDist_EmeraldCoast2, 0x00E99DAC, 3);
	DataArray(DrawDistance, DrawDist_EmeraldCoast3, 0x00E99DC4, 3);
	DataArray(FogData, EmeraldCoast1Fog, 0x00E99DDC, 3);
	DataArray(FogData, EmeraldCoast2Fog, 0x00E99E0C, 3);
	DataArray(FogData, EmeraldCoast3Fog, 0x00E99E3C, 3);
	for (int i = 0; i < 3; i++)
	{
		DrawDist_EmeraldCoast1[i].Maximum = -6000.0f;
		DrawDist_EmeraldCoast2[i].Maximum = -4000.0f;
		DrawDist_EmeraldCoast3[i].Maximum = -4000.0f;
		EmeraldCoast1Fog[i].Toggle = 0;
		EmeraldCoast2Fog[i].Toggle = 0;
		EmeraldCoast3Fog[i].Toggle = 0;
	}
}

extern "C" __declspec(dllexport) void __cdecl OnFrame()
{
	if (CurrentLevel == 1 && CurrentAct == 0)
	{
		CurrentSkybox.x = 0.8f;
		CurrentSkybox.y = 0.8f;
		CurrentSkybox.z = 0.8f;
		((NJS_OBJECT *)0x103B37C)->evalflags &= ~NJD_EVAL_HIDE;
	}
	if (CurrentLevel == 1 && CurrentAct == 1)
	{
		CurrentSkybox.x = 1.0f;
		CurrentSkybox.y = 1.0f;
		CurrentSkybox.z = 1.0f;
		((NJS_OBJECT *)0x103B37C)->evalflags &= ~NJD_EVAL_HIDE;
	}
	if (CurrentLevel == 1 && CurrentAct == 2)
	{
		CurrentSkybox.x = 0.8f;
		CurrentSkybox.y = 0.8f;
		CurrentSkybox.z = 0.8f;
		((NJS_OBJECT *)0x103B37C)->evalflags |= NJD_EVAL_HIDE;
	}
	if (CurrentLevel == 1 && CurrentAct == 0 && GameState == 15)
		{
			if (anim1 > 96) anim1 = 82;
			if (anim2 > 81) anim2 = 67;
			matlist_000755F8[0].attr_texId = anim1;
			matlist_000759CC[0].attr_texId = anim1;
			matlist_00075C74[0].attr_texId = anim1;
			matlist_00075F1C[0].attr_texId = anim1;
			matlist_00076278[0].attr_texId = anim1;
			matlist_00076654[0].attr_texId = anim1;
			matlist_00076FA0[0].attr_texId = anim1;
			matlist_00076B90[0].attr_texId = anim1;
			matlist_00078634[0].attr_texId = anim1;
			matlist_00078120[0].attr_texId = anim1;
			matlist_00078918[0].attr_texId = anim1;
			matlist_000783C8[0].attr_texId = anim1;
			matlist_00078C18[0].attr_texId = anim1;
			matlist_00077EB4[0].attr_texId = anim1;
			matlist_00077374[0].attr_texId = anim1;
			matlist_000776D0[0].attr_texId = anim1;
			matlist_00077A2C[0].attr_texId = anim1;
			matlist_00BAC3E8[4].attr_texId = anim2;
			matlist_00027A00[2].attr_texId = anim2;
			matlist_00026CA0[2].attr_texId = anim2;
			matlist_000246F8[0].attr_texId = anim2;
			matlist_00023628[3].attr_texId = anim2;
			matlist_0002276C[3].attr_texId = anim2;
			matlist_000216E0[3].attr_texId = anim2;
			matlist_0002091C[3].attr_texId = anim2;
			matlist_0001F254[3].attr_texId = anim2;
			matlist_0001E8C4[0].attr_texId = anim2;
			matlist_0001FFE0[2].attr_texId = anim2;
			matlist_0001FFE0[4].attr_texId = anim2;
			matlist_0001DC78[1].attr_texId = anim2;
			if (LevelFrameCount % 4 == 0)
			{
			anim1++;
			anim2++;
			}
		}
	if (CurrentLevel == 1 && CurrentAct == 1 && GameState == 15)
	{
			if (anim3 > 56) anim3 = 42;
			if (anim4 > 85) anim4 = 71;
			matlist_0008F1FC[0].attr_texId = anim3;
			matlist_0008F7CC[2].attr_texId = anim3;
			matlist_000907D4[4].attr_texId = anim3;
			matlist_00091358[3].attr_texId = anim3;
			matlist_000920EC[1].attr_texId = anim3;
			matlist_00092E40[2].attr_texId = anim3;
			matlist_00094E34[0].attr_texId = anim3;
			matlist_00095C20[0].attr_texId = anim3;
			matlist_00093FE0[3].attr_texId = anim3;
			matlist_00096A10[2].attr_texId = anim3;
			matlist_0009712C[3].attr_texId = anim3;
			matlist_000DBBA4[0].attr_texId = anim3;
			matlist_000DBBA4[1].attr_texId = anim3;
			matlist_000DBBA4[2].attr_texId = anim3;
			matlist_000DA750[0].attr_texId = anim4;
			matlist_000DA9BC[0].attr_texId = anim4;
			matlist_000DA188[0].attr_texId = anim4;
			matlist_000DA46C[0].attr_texId = anim4;
			matlist_000D9B10[0].attr_texId = anim4;
			matlist_000D9E30[0].attr_texId = anim4;
			matlist_000D9584[0].attr_texId = anim4;
			matlist_000D98A4[0].attr_texId = anim4;
			matlist_000D9084[0].attr_texId = anim4;
			matlist_000D8E18[0].attr_texId = anim4;
			matlist_000D8BA0[0].attr_texId = anim4;
			matlist_000D86A0[0].attr_texId = anim4;
			matlist_000D8254[0].attr_texId = anim4;
			matlist_000D7D64[0].attr_texId = anim4;
			if (LevelFrameCount % 4 == 0)
			{
				anim3++;
				anim4++;
			}
	}
	if (CurrentLevel == 1 && CurrentAct == 2 && GameState != 16)
	{
			if (anim5 > 64) anim5 = 50;
			if (anim6 > 79) anim6 = 65;
			matlist_00117310[0].attr_texId = anim5;
			matlist_0011784C[0].attr_texId = anim5;
			matlist_00117C5C[0].attr_texId = anim5;
			matlist_00118030[0].attr_texId = anim5;
			matlist_0011829C[0].attr_texId = anim5;
			matlist_00118544[0].attr_texId = anim5;
			matlist_001187B0[0].attr_texId = anim5;
			matlist_00118A94[0].attr_texId = anim5;
			matlist_00118D94[0].attr_texId = anim5;
			matlist_000E5260[3].attr_texId = anim6;
			matlist_000E611C[3].attr_texId = anim6;
			matlist_000E71EC[0].attr_texId = anim6;
			matlist_000E97EC[2].attr_texId = anim6;
			matlist_000EA520[2].attr_texId = anim6;
			matlist_000EB0E0[0].attr_texId = anim6;
			matlist_000EF7E4[0].attr_texId = anim6;
			matlist_000EF7E4[2].attr_texId = anim6;
			matlist_000F8F6C[0].attr_texId = anim6;
			matlist_000F95F0[0].attr_texId = anim6;
			matlist_000F9D10[0].attr_texId = anim6;
			matlist_000F9D10[1].attr_texId = anim6;
			matlist_000FB004[0].attr_texId = anim6;
			matlist_000FB004[1].attr_texId = anim6;
			matlist_000FEE58[0].attr_texId = anim6;
			matlist_000FF3A0[0].attr_texId = anim6;
			matlist_000FFD48[0].attr_texId = anim6;
			matlist_00101320[0].attr_texId = anim6;
			matlist_00101E9C[0].attr_texId = anim6;
			matlist_0010280C[0].attr_texId = anim6;
			matlist_001033A8[0].attr_texId = anim6;
			matlist_00103DC8[0].attr_texId = anim6;
			matlist_00104920[0].attr_texId = anim6;
			matlist_00105630[0].attr_texId = anim6;
			matlist_00108120[0].attr_texId = anim6;
			matlist_0010C7F4[0].attr_texId = anim6;
			matlist_0010D618[0].attr_texId = anim6;
			matlist_0010E304[0].attr_texId = anim6;
			matlist_0010F148[0].attr_texId = anim6;
			matlist_00110184[0].attr_texId = anim6;
			matlist_00110184[1].attr_texId = anim6;
			matlist_00110DFC[0].attr_texId = anim6;
			matlist_0011B12C[0].attr_texId = anim6;
			matlist_0011B12C[1].attr_texId = anim6;
			if (LevelFrameCount % 4 == 0)
			{
				anim5++;
				anim6++;
			}
	}
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };

