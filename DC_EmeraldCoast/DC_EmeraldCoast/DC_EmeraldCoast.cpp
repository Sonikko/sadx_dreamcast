#include "stdafx.h"
#include "SADXModLoader.h"
#include "EmeraldCoast1_PC.h"
#include "EmeraldCoast1.h"
#include "EmeraldCoast2.h"
#include "EmeraldCoast3.h"

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
	//DataArray(DrawDistance, DrawDist_EmeraldCoast3, 0x00E99DC4, 3);
	DataArray(FogData, EmeraldCoast1Fog, 0x00E99DDC, 3);
	DataArray(FogData, EmeraldCoast2Fog, 0x00E99E0C, 3);
	DataArray(FogData, EmeraldCoast3Fog, 0x00E99E3C, 3);

	DataArray(SkyboxScale, EmeraldCoast1Skybox, 0x00E99CE0, 3);
	for (int i = 0; i < 3; i++)
	{
		DrawDist_EmeraldCoast1[i].Maximum = -12000.0f;
		DrawDist_EmeraldCoast2[i].Maximum = -4000.0f;
		EmeraldCoast1Fog[i].Layer = -1200.0f;
		EmeraldCoast1Fog[i].Distance = -8000.0f;
		EmeraldCoast2Fog[i].Layer = -1500.0f;
		EmeraldCoast3Fog[i].Layer = -1500.0f;
	}
}

extern "C" __declspec(dllexport) void __cdecl OnFrame()
{
	{
	if (CurrentLevel == 1 && CurrentAct == 0 && GameState == 15)
		{
			if (LevelFrameCount % 60 == 0)
		{
			matlist_000755F8[0].attr_texId = 96;
			matlist_000759CC[0].attr_texId = 96;
			matlist_00075C74[0].attr_texId = 96;
			matlist_00075F1C[0].attr_texId = 96;
			matlist_00076278[0].attr_texId = 96;
			matlist_00076654[0].attr_texId = 96;
			matlist_00076FA0[0].attr_texId = 96;
			matlist_00076B90[0].attr_texId = 96;
			matlist_00078634[0].attr_texId = 96;
			matlist_00078120[0].attr_texId = 96;
			matlist_00078918[0].attr_texId = 96;
			matlist_000783C8[0].attr_texId = 96;
			matlist_00078C18[0].attr_texId = 96;
			matlist_00077EB4[0].attr_texId = 96;
			matlist_00077374[0].attr_texId = 96;
			matlist_000776D0[0].attr_texId = 96;
			matlist_00077A2C[0].attr_texId = 96;
			matlist_00BAC3E8[4].attr_texId = 67;
			matlist_00027A00[2].attr_texId = 67;
			matlist_00026CA0[2].attr_texId = 67;
			matlist_000246F8[0].attr_texId = 67;
			matlist_00023628[3].attr_texId = 67;
			matlist_0002276C[3].attr_texId = 67;
			matlist_000216E0[3].attr_texId = 67;
			matlist_0002091C[3].attr_texId = 67;
			matlist_0001F254[3].attr_texId = 67;
			matlist_0001E8C4[0].attr_texId = 67;
			matlist_0001FFE0[2].attr_texId = 67;
			matlist_0001FFE0[4].attr_texId = 67;
			matlist_0001DC78[1].attr_texId = 67;
		}
			if (LevelFrameCount % 60 == 4)
			{
				matlist_000755F8[0].attr_texId = 82;
				matlist_000759CC[0].attr_texId = 82;
				matlist_00075C74[0].attr_texId = 82;
				matlist_00075F1C[0].attr_texId = 82;
				matlist_00076278[0].attr_texId = 82;
				matlist_00076654[0].attr_texId = 82;
				matlist_00076FA0[0].attr_texId = 82;
				matlist_00076B90[0].attr_texId = 82;
				matlist_00078634[0].attr_texId = 82;
				matlist_00078120[0].attr_texId = 82;
				matlist_00078918[0].attr_texId = 82;
				matlist_000783C8[0].attr_texId = 82;
				matlist_00078C18[0].attr_texId = 82;
				matlist_00077EB4[0].attr_texId = 82;
				matlist_00077374[0].attr_texId = 82;
				matlist_000776D0[0].attr_texId = 82;
				matlist_00077A2C[0].attr_texId = 82;
				matlist_00BAC3E8[4].attr_texId = 68;
				matlist_00027A00[2].attr_texId = 68;
				matlist_00026CA0[2].attr_texId = 68;
				matlist_000246F8[0].attr_texId = 68;
				matlist_00023628[3].attr_texId = 68;
				matlist_0002276C[3].attr_texId = 68;
				matlist_000216E0[3].attr_texId = 68;
				matlist_0002091C[3].attr_texId = 68;
				matlist_0001F254[3].attr_texId = 68;
				matlist_0001E8C4[0].attr_texId = 68;
				matlist_0001FFE0[2].attr_texId = 68;
				matlist_0001FFE0[4].attr_texId = 68;
				matlist_0001DC78[1].attr_texId = 68;
			}
			if (LevelFrameCount % 60 == 8)
			{
				matlist_000755F8[0].attr_texId = 83;
				matlist_000759CC[0].attr_texId = 83;
				matlist_00075C74[0].attr_texId = 83;
				matlist_00075F1C[0].attr_texId = 83;
				matlist_00076278[0].attr_texId = 83;
				matlist_00076654[0].attr_texId = 83;
				matlist_00076FA0[0].attr_texId = 83;
				matlist_00076B90[0].attr_texId = 83;
				matlist_00078634[0].attr_texId = 83;
				matlist_00078120[0].attr_texId = 83;
				matlist_00078918[0].attr_texId = 83;
				matlist_000783C8[0].attr_texId = 83;
				matlist_00078C18[0].attr_texId = 83;
				matlist_00077EB4[0].attr_texId = 83;
				matlist_00077374[0].attr_texId = 83;
				matlist_000776D0[0].attr_texId = 83;
				matlist_00077A2C[0].attr_texId = 83;
				matlist_00BAC3E8[4].attr_texId = 69;
				matlist_00027A00[2].attr_texId = 69;
				matlist_00026CA0[2].attr_texId = 69;
				matlist_000246F8[0].attr_texId = 69;
				matlist_00023628[3].attr_texId = 69;
				matlist_0002276C[3].attr_texId = 69;
				matlist_000216E0[3].attr_texId = 69;
				matlist_0002091C[3].attr_texId = 69;
				matlist_0001F254[3].attr_texId = 69;
				matlist_0001E8C4[0].attr_texId = 69;
				matlist_0001FFE0[2].attr_texId = 69;
				matlist_0001FFE0[4].attr_texId = 69;
				matlist_0001DC78[1].attr_texId = 69;
			}
			if (LevelFrameCount % 60 == 12)
			{
				matlist_000755F8[0].attr_texId = 84;
				matlist_000759CC[0].attr_texId = 84;
				matlist_00075C74[0].attr_texId = 84;
				matlist_00075F1C[0].attr_texId = 84;
				matlist_00076278[0].attr_texId = 84;
				matlist_00076654[0].attr_texId = 84;
				matlist_00076FA0[0].attr_texId = 84;
				matlist_00076B90[0].attr_texId = 84;
				matlist_00078634[0].attr_texId = 84;
				matlist_00078120[0].attr_texId = 84;
				matlist_00078918[0].attr_texId = 84;
				matlist_000783C8[0].attr_texId = 84;
				matlist_00078C18[0].attr_texId = 84;
				matlist_00077EB4[0].attr_texId = 84;
				matlist_00077374[0].attr_texId = 84;
				matlist_000776D0[0].attr_texId = 84;
				matlist_00077A2C[0].attr_texId = 84;
				matlist_00BAC3E8[4].attr_texId = 70;
				matlist_00027A00[2].attr_texId = 70;
				matlist_00026CA0[2].attr_texId = 70;
				matlist_000246F8[0].attr_texId = 70;
				matlist_00023628[3].attr_texId = 70;
				matlist_0002276C[3].attr_texId = 70;
				matlist_000216E0[3].attr_texId = 70;
				matlist_0002091C[3].attr_texId = 70;
				matlist_0001F254[3].attr_texId = 70;
				matlist_0001E8C4[0].attr_texId = 70;
				matlist_0001FFE0[2].attr_texId = 70;
				matlist_0001FFE0[4].attr_texId = 70;
				matlist_0001DC78[1].attr_texId = 70;
			}
			if (LevelFrameCount % 60 == 16)
			{
				matlist_000755F8[0].attr_texId = 85;
				matlist_000759CC[0].attr_texId = 85;
				matlist_00075C74[0].attr_texId = 85;
				matlist_00075F1C[0].attr_texId = 85;
				matlist_00076278[0].attr_texId = 85;
				matlist_00076654[0].attr_texId = 85;
				matlist_00076FA0[0].attr_texId = 85;
				matlist_00076B90[0].attr_texId = 85;
				matlist_00078634[0].attr_texId = 85;
				matlist_00078120[0].attr_texId = 85;
				matlist_00078918[0].attr_texId = 85;
				matlist_000783C8[0].attr_texId = 85;
				matlist_00078C18[0].attr_texId = 85;
				matlist_00077EB4[0].attr_texId = 85;
				matlist_00077374[0].attr_texId = 85;
				matlist_000776D0[0].attr_texId = 85;
				matlist_00077A2C[0].attr_texId = 85;
				matlist_00BAC3E8[4].attr_texId = 71;
				matlist_00027A00[2].attr_texId = 71;
				matlist_00026CA0[2].attr_texId = 71;
				matlist_000246F8[0].attr_texId = 71;
				matlist_00023628[3].attr_texId = 71;
				matlist_0002276C[3].attr_texId = 71;
				matlist_000216E0[3].attr_texId = 71;
				matlist_0002091C[3].attr_texId = 71;
				matlist_0001F254[3].attr_texId = 71;
				matlist_0001E8C4[0].attr_texId = 71;
				matlist_0001FFE0[2].attr_texId = 71;
				matlist_0001FFE0[4].attr_texId = 71;
				matlist_0001DC78[1].attr_texId = 71;
			}
			if (LevelFrameCount % 60 == 20)
			{
				matlist_000755F8[0].attr_texId = 86;
				matlist_000759CC[0].attr_texId = 86;
				matlist_00075C74[0].attr_texId = 86;
				matlist_00075F1C[0].attr_texId = 86;
				matlist_00076278[0].attr_texId = 86;
				matlist_00076654[0].attr_texId = 86;
				matlist_00076FA0[0].attr_texId = 86;
				matlist_00076B90[0].attr_texId = 86;
				matlist_00078634[0].attr_texId = 86;
				matlist_00078120[0].attr_texId = 86;
				matlist_00078918[0].attr_texId = 86;
				matlist_000783C8[0].attr_texId = 86;
				matlist_00078C18[0].attr_texId = 86;
				matlist_00077EB4[0].attr_texId = 86;
				matlist_00077374[0].attr_texId = 86;
				matlist_000776D0[0].attr_texId = 86;
				matlist_00077A2C[0].attr_texId = 86;
				matlist_00BAC3E8[4].attr_texId = 72;
				matlist_00027A00[2].attr_texId = 72;
				matlist_00026CA0[2].attr_texId = 72;
				matlist_000246F8[0].attr_texId = 72;
				matlist_00023628[3].attr_texId = 72;
				matlist_0002276C[3].attr_texId = 72;
				matlist_000216E0[3].attr_texId = 72;
				matlist_0002091C[3].attr_texId = 72;
				matlist_0001F254[3].attr_texId = 72;
				matlist_0001E8C4[0].attr_texId = 72;
				matlist_0001FFE0[2].attr_texId = 72;
				matlist_0001FFE0[4].attr_texId = 72;
				matlist_0001DC78[1].attr_texId = 72;
			}
			if (LevelFrameCount % 60 == 24)
			{
				matlist_000755F8[0].attr_texId = 87;
				matlist_000759CC[0].attr_texId = 87;
				matlist_00075C74[0].attr_texId = 87;
				matlist_00075F1C[0].attr_texId = 87;
				matlist_00076278[0].attr_texId = 87;
				matlist_00076654[0].attr_texId = 87;
				matlist_00076FA0[0].attr_texId = 87;
				matlist_00076B90[0].attr_texId = 87;
				matlist_00078634[0].attr_texId = 87;
				matlist_00078120[0].attr_texId = 87;
				matlist_00078918[0].attr_texId = 87;
				matlist_000783C8[0].attr_texId = 87;
				matlist_00078C18[0].attr_texId = 87;
				matlist_00077EB4[0].attr_texId = 87;
				matlist_00077374[0].attr_texId = 87;
				matlist_000776D0[0].attr_texId = 87;
				matlist_00077A2C[0].attr_texId = 87;
				matlist_00BAC3E8[4].attr_texId = 73;
				matlist_00027A00[2].attr_texId = 73;
				matlist_00026CA0[2].attr_texId = 73;
				matlist_000246F8[0].attr_texId = 73;
				matlist_00023628[3].attr_texId = 73;
				matlist_0002276C[3].attr_texId = 73;
				matlist_000216E0[3].attr_texId = 73;
				matlist_0002091C[3].attr_texId = 73;
				matlist_0001F254[3].attr_texId = 73;
				matlist_0001E8C4[0].attr_texId = 73;
				matlist_0001FFE0[2].attr_texId = 73;
				matlist_0001FFE0[4].attr_texId = 73;
				matlist_0001DC78[1].attr_texId = 73;
			}
			if (LevelFrameCount % 60 == 28)
			{
				matlist_000755F8[0].attr_texId = 88;
				matlist_000759CC[0].attr_texId = 88;
				matlist_00075C74[0].attr_texId = 88;
				matlist_00075F1C[0].attr_texId = 88;
				matlist_00076278[0].attr_texId = 88;
				matlist_00076654[0].attr_texId = 88;
				matlist_00076FA0[0].attr_texId = 88;
				matlist_00076B90[0].attr_texId = 88;
				matlist_00078634[0].attr_texId = 88;
				matlist_00078120[0].attr_texId = 88;
				matlist_00078918[0].attr_texId = 88;
				matlist_000783C8[0].attr_texId = 88;
				matlist_00078C18[0].attr_texId = 88;
				matlist_00077EB4[0].attr_texId = 88;
				matlist_00077374[0].attr_texId = 88;
				matlist_000776D0[0].attr_texId = 88;
				matlist_00077A2C[0].attr_texId = 88;
				matlist_00BAC3E8[4].attr_texId = 74;
				matlist_00027A00[2].attr_texId = 74;
				matlist_00026CA0[2].attr_texId = 74;
				matlist_000246F8[0].attr_texId = 74;
				matlist_00023628[3].attr_texId = 74;
				matlist_0002276C[3].attr_texId = 74;
				matlist_000216E0[3].attr_texId = 74;
				matlist_0002091C[3].attr_texId = 74;
				matlist_0001F254[3].attr_texId = 74;
				matlist_0001E8C4[0].attr_texId = 74;
				matlist_0001FFE0[2].attr_texId = 74;
				matlist_0001FFE0[4].attr_texId = 74;
				matlist_0001DC78[1].attr_texId = 74;
			}
			if (LevelFrameCount % 60 == 32)
			{
				matlist_000755F8[0].attr_texId = 89;
				matlist_000759CC[0].attr_texId = 89;
				matlist_00075C74[0].attr_texId = 89;
				matlist_00075F1C[0].attr_texId = 89;
				matlist_00076278[0].attr_texId = 89;
				matlist_00076654[0].attr_texId = 89;
				matlist_00076FA0[0].attr_texId = 89;
				matlist_00076B90[0].attr_texId = 89;
				matlist_00078634[0].attr_texId = 89;
				matlist_00078120[0].attr_texId = 89;
				matlist_00078918[0].attr_texId = 89;
				matlist_000783C8[0].attr_texId = 89;
				matlist_00078C18[0].attr_texId = 89;
				matlist_00077EB4[0].attr_texId = 89;
				matlist_00077374[0].attr_texId = 89;
				matlist_000776D0[0].attr_texId = 89;
				matlist_00077A2C[0].attr_texId = 89;
				matlist_00BAC3E8[4].attr_texId = 75;
				matlist_00027A00[2].attr_texId = 75;
				matlist_00026CA0[2].attr_texId = 75;
				matlist_000246F8[0].attr_texId = 75;
				matlist_00023628[3].attr_texId = 75;
				matlist_0002276C[3].attr_texId = 75;
				matlist_000216E0[3].attr_texId = 75;
				matlist_0002091C[3].attr_texId = 75;
				matlist_0001F254[3].attr_texId = 75;
				matlist_0001E8C4[0].attr_texId = 75;
				matlist_0001FFE0[2].attr_texId = 75;
				matlist_0001FFE0[4].attr_texId = 75;
				matlist_0001DC78[1].attr_texId = 75;
			}
			if (LevelFrameCount % 60 == 36)
			{
				matlist_000755F8[0].attr_texId = 90;
				matlist_000759CC[0].attr_texId = 90;
				matlist_00075C74[0].attr_texId = 90;
				matlist_00075F1C[0].attr_texId = 90;
				matlist_00076278[0].attr_texId = 90;
				matlist_00076654[0].attr_texId = 90;
				matlist_00076FA0[0].attr_texId = 90;
				matlist_00076B90[0].attr_texId = 90;
				matlist_00078634[0].attr_texId = 90;
				matlist_00078120[0].attr_texId = 90;
				matlist_00078918[0].attr_texId = 90;
				matlist_000783C8[0].attr_texId = 90;
				matlist_00078C18[0].attr_texId = 90;
				matlist_00077EB4[0].attr_texId = 90;
				matlist_00077374[0].attr_texId = 90;
				matlist_000776D0[0].attr_texId = 90;
				matlist_00077A2C[0].attr_texId = 90;
				matlist_00BAC3E8[4].attr_texId = 76;
				matlist_00027A00[2].attr_texId = 76;
				matlist_00026CA0[2].attr_texId = 76;
				matlist_000246F8[0].attr_texId = 76;
				matlist_00023628[3].attr_texId = 76;
				matlist_0002276C[3].attr_texId = 76;
				matlist_000216E0[3].attr_texId = 76;
				matlist_0002091C[3].attr_texId = 76;
				matlist_0001F254[3].attr_texId = 76;
				matlist_0001E8C4[0].attr_texId = 76;
				matlist_0001FFE0[2].attr_texId = 76;
				matlist_0001FFE0[4].attr_texId = 76;
				matlist_0001DC78[1].attr_texId = 76;
			}
			if (LevelFrameCount % 60 == 40)
			{
				matlist_000755F8[0].attr_texId = 91;
				matlist_000759CC[0].attr_texId = 91;
				matlist_00075C74[0].attr_texId = 91;
				matlist_00075F1C[0].attr_texId = 91;
				matlist_00076278[0].attr_texId = 91;
				matlist_00076654[0].attr_texId = 91;
				matlist_00076FA0[0].attr_texId = 91;
				matlist_00076B90[0].attr_texId = 91;
				matlist_00078634[0].attr_texId = 91;
				matlist_00078120[0].attr_texId = 91;
				matlist_00078918[0].attr_texId = 91;
				matlist_000783C8[0].attr_texId = 91;
				matlist_00078C18[0].attr_texId = 91;
				matlist_00077EB4[0].attr_texId = 91;
				matlist_00077374[0].attr_texId = 91;
				matlist_000776D0[0].attr_texId = 91;
				matlist_00077A2C[0].attr_texId = 91;
				matlist_00BAC3E8[4].attr_texId = 77;
				matlist_00027A00[2].attr_texId = 77;
				matlist_00026CA0[2].attr_texId = 77;
				matlist_000246F8[0].attr_texId = 77;
				matlist_00023628[3].attr_texId = 77;
				matlist_0002276C[3].attr_texId = 77;
				matlist_000216E0[3].attr_texId = 77;
				matlist_0002091C[3].attr_texId = 77;
				matlist_0001F254[3].attr_texId = 77;
				matlist_0001E8C4[0].attr_texId = 77;
				matlist_0001FFE0[2].attr_texId = 77;
				matlist_0001FFE0[4].attr_texId = 77;
				matlist_0001DC78[1].attr_texId = 77;
			}
			if (LevelFrameCount % 60 == 44)
			{
				matlist_000755F8[0].attr_texId = 92;
				matlist_000759CC[0].attr_texId = 92;
				matlist_00075C74[0].attr_texId = 92;
				matlist_00075F1C[0].attr_texId = 92;
				matlist_00076278[0].attr_texId = 92;
				matlist_00076654[0].attr_texId = 92;
				matlist_00076FA0[0].attr_texId = 92;
				matlist_00076B90[0].attr_texId = 92;
				matlist_00078634[0].attr_texId = 92;
				matlist_00078120[0].attr_texId = 92;
				matlist_00078918[0].attr_texId = 92;
				matlist_000783C8[0].attr_texId = 92;
				matlist_00078C18[0].attr_texId = 92;
				matlist_00077EB4[0].attr_texId = 92;
				matlist_00077374[0].attr_texId = 92;
				matlist_000776D0[0].attr_texId = 92;
				matlist_00077A2C[0].attr_texId = 92;
				matlist_00BAC3E8[4].attr_texId = 78;
				matlist_00027A00[2].attr_texId = 78;
				matlist_00026CA0[2].attr_texId = 78;
				matlist_000246F8[0].attr_texId = 78;
				matlist_00023628[3].attr_texId = 78;
				matlist_0002276C[3].attr_texId = 78;
				matlist_000216E0[3].attr_texId = 78;
				matlist_0002091C[3].attr_texId = 78;
				matlist_0001F254[3].attr_texId = 78;
				matlist_0001E8C4[0].attr_texId = 78;
				matlist_0001FFE0[2].attr_texId = 78;
				matlist_0001FFE0[4].attr_texId = 78;
				matlist_0001DC78[1].attr_texId = 78;
			}
			if (LevelFrameCount % 60 == 48)
			{
				matlist_000755F8[0].attr_texId = 93;
				matlist_000759CC[0].attr_texId = 93;
				matlist_00075C74[0].attr_texId = 93;
				matlist_00075F1C[0].attr_texId = 93;
				matlist_00076278[0].attr_texId = 93;
				matlist_00076654[0].attr_texId = 93;
				matlist_00076FA0[0].attr_texId = 93;
				matlist_00076B90[0].attr_texId = 93;
				matlist_00078634[0].attr_texId = 93;
				matlist_00078120[0].attr_texId = 93;
				matlist_00078918[0].attr_texId = 93;
				matlist_000783C8[0].attr_texId = 93;
				matlist_00078C18[0].attr_texId = 93;
				matlist_00077EB4[0].attr_texId = 93;
				matlist_00077374[0].attr_texId = 93;
				matlist_000776D0[0].attr_texId = 93;
				matlist_00077A2C[0].attr_texId = 93;
				matlist_00BAC3E8[4].attr_texId = 79;
				matlist_00027A00[2].attr_texId = 79;
				matlist_00026CA0[2].attr_texId = 79;
				matlist_000246F8[0].attr_texId = 79;
				matlist_00023628[3].attr_texId = 79;
				matlist_0002276C[3].attr_texId = 79;
				matlist_000216E0[3].attr_texId = 79;
				matlist_0002091C[3].attr_texId = 79;
				matlist_0001F254[3].attr_texId = 79;
				matlist_0001E8C4[0].attr_texId = 79;
				matlist_0001FFE0[2].attr_texId = 79;
				matlist_0001FFE0[4].attr_texId = 79;
				matlist_0001DC78[1].attr_texId = 79;
			}
			if (LevelFrameCount % 60 == 52)
			{
				matlist_000755F8[0].attr_texId = 94;
				matlist_000759CC[0].attr_texId = 94;
				matlist_00075C74[0].attr_texId = 94;
				matlist_00075F1C[0].attr_texId = 94;
				matlist_00076278[0].attr_texId = 94;
				matlist_00076654[0].attr_texId = 94;
				matlist_00076FA0[0].attr_texId = 94;
				matlist_00076B90[0].attr_texId = 94;
				matlist_00078634[0].attr_texId = 94;
				matlist_00078120[0].attr_texId = 94;
				matlist_00078918[0].attr_texId = 94;
				matlist_000783C8[0].attr_texId = 94;
				matlist_00078C18[0].attr_texId = 94;
				matlist_00077EB4[0].attr_texId = 94;
				matlist_00077374[0].attr_texId = 94;
				matlist_000776D0[0].attr_texId = 94;
				matlist_00077A2C[0].attr_texId = 94;
				matlist_00BAC3E8[4].attr_texId = 80;
				matlist_00027A00[2].attr_texId = 80;
				matlist_00026CA0[2].attr_texId = 80;
				matlist_000246F8[0].attr_texId = 80;
				matlist_00023628[3].attr_texId = 80;
				matlist_0002276C[3].attr_texId = 80;
				matlist_000216E0[3].attr_texId = 80;
				matlist_0002091C[3].attr_texId = 80;
				matlist_0001F254[3].attr_texId = 80;
				matlist_0001E8C4[0].attr_texId = 80;
				matlist_0001FFE0[2].attr_texId = 80;
				matlist_0001FFE0[4].attr_texId = 80;
				matlist_0001DC78[1].attr_texId = 80;
			}
			if (LevelFrameCount % 60 == 56)
			{
				matlist_000755F8[0].attr_texId = 95;
				matlist_000759CC[0].attr_texId = 95;
				matlist_00075C74[0].attr_texId = 95;
				matlist_00075F1C[0].attr_texId = 95;
				matlist_00076278[0].attr_texId = 95;
				matlist_00076654[0].attr_texId = 95;
				matlist_00076FA0[0].attr_texId = 95;
				matlist_00076B90[0].attr_texId = 95;
				matlist_00078634[0].attr_texId = 95;
				matlist_00078120[0].attr_texId = 95;
				matlist_00078918[0].attr_texId = 95;
				matlist_000783C8[0].attr_texId = 95;
				matlist_00078C18[0].attr_texId = 95;
				matlist_00077EB4[0].attr_texId = 95;
				matlist_00077374[0].attr_texId = 95;
				matlist_000776D0[0].attr_texId = 95;
				matlist_00077A2C[0].attr_texId = 95;
				matlist_00BAC3E8[4].attr_texId = 81;
				matlist_00027A00[2].attr_texId = 81;
				matlist_00026CA0[2].attr_texId = 81;
				matlist_000246F8[0].attr_texId = 81;
				matlist_00023628[3].attr_texId = 81;
				matlist_0002276C[3].attr_texId = 81;
				matlist_000216E0[3].attr_texId = 81;
				matlist_0002091C[3].attr_texId = 81;
				matlist_0001F254[3].attr_texId = 81;
				matlist_0001E8C4[0].attr_texId = 81;
				matlist_0001FFE0[2].attr_texId = 81;
				matlist_0001FFE0[4].attr_texId = 81;
				matlist_0001DC78[1].attr_texId = 81;
			}
		}
	if (CurrentLevel == 1 && CurrentAct == 1 && GameState == 15)
	{
		if (LevelFrameCount % 60 == 0)
		{
			matlist_0008F1FC[0].attr_texId = 42;
			matlist_0008F7CC[2].attr_texId = 42;
			matlist_000907D4[4].attr_texId = 42;
			matlist_00091358[3].attr_texId = 42;
			matlist_000920EC[1].attr_texId = 42;
			matlist_00092E40[2].attr_texId = 42;
			matlist_00094E34[0].attr_texId = 42;
			matlist_00095C20[0].attr_texId = 42;
			matlist_00093FE0[3].attr_texId = 42;
			matlist_00096A10[2].attr_texId = 42;
			matlist_0009712C[3].attr_texId = 42;
			matlist_000DBBA4[0].attr_texId = 42;
			matlist_000DBBA4[1].attr_texId = 42;
			matlist_000DBBA4[2].attr_texId = 42;
			matlist_000DA750[0].attr_texId = 71;
			matlist_000DA9BC[0].attr_texId = 71;
			matlist_000DA188[0].attr_texId = 71;
			matlist_000DA46C[0].attr_texId = 71;
			matlist_000D9B10[0].attr_texId = 71;
			matlist_000D9E30[0].attr_texId = 71;
			matlist_000D9584[0].attr_texId = 71;
			matlist_000D98A4[0].attr_texId = 71;
			matlist_000D9084[0].attr_texId = 71;
			matlist_000D8E18[0].attr_texId = 71;
			matlist_000D8BA0[0].attr_texId = 71;
			matlist_000D86A0[0].attr_texId = 71;
			matlist_000D8254[0].attr_texId = 71;
			matlist_000D7D64[0].attr_texId = 71;
		}
		if (LevelFrameCount % 60 == 4)
		{
			matlist_0008F1FC[0].attr_texId = 43;
			matlist_0008F7CC[2].attr_texId = 43;
			matlist_000907D4[4].attr_texId = 43;
			matlist_00091358[3].attr_texId = 43;
			matlist_000920EC[1].attr_texId = 43;
			matlist_00092E40[2].attr_texId = 43;
			matlist_00094E34[0].attr_texId = 43;
			matlist_00095C20[0].attr_texId = 43;
			matlist_00093FE0[3].attr_texId = 43;
			matlist_00096A10[2].attr_texId = 43;
			matlist_0009712C[3].attr_texId = 43;
			matlist_000DBBA4[0].attr_texId = 43;
			matlist_000DBBA4[1].attr_texId = 43;
			matlist_000DBBA4[2].attr_texId = 43;
			matlist_000DA750[0].attr_texId = 72;
			matlist_000DA9BC[0].attr_texId = 72;
			matlist_000DA188[0].attr_texId = 72;
			matlist_000DA46C[0].attr_texId = 72;
			matlist_000D9B10[0].attr_texId = 72;
			matlist_000D9E30[0].attr_texId = 72;
			matlist_000D9584[0].attr_texId = 72;
			matlist_000D98A4[0].attr_texId = 72;
			matlist_000D9084[0].attr_texId = 72;
			matlist_000D8E18[0].attr_texId = 72;
			matlist_000D8BA0[0].attr_texId = 72;
			matlist_000D86A0[0].attr_texId = 72;
			matlist_000D8254[0].attr_texId = 72;
			matlist_000D7D64[0].attr_texId = 72;
		}
		if (LevelFrameCount % 60 == 8)
		{
			matlist_0008F1FC[0].attr_texId = 44;
			matlist_0008F7CC[2].attr_texId = 44;
			matlist_000907D4[4].attr_texId = 44;
			matlist_00091358[3].attr_texId = 44;
			matlist_000920EC[1].attr_texId = 44;
			matlist_00092E40[2].attr_texId = 44;
			matlist_00094E34[0].attr_texId = 44;
			matlist_00095C20[0].attr_texId = 44;
			matlist_00093FE0[3].attr_texId = 44;
			matlist_00096A10[2].attr_texId = 44;
			matlist_0009712C[3].attr_texId = 44;
			matlist_000DBBA4[0].attr_texId = 44;
			matlist_000DBBA4[1].attr_texId = 44;
			matlist_000DBBA4[2].attr_texId = 44;
			matlist_000DA750[0].attr_texId = 73;
			matlist_000DA9BC[0].attr_texId = 73;
			matlist_000DA188[0].attr_texId = 73;
			matlist_000DA46C[0].attr_texId = 73;
			matlist_000D9B10[0].attr_texId = 73;
			matlist_000D9E30[0].attr_texId = 73;
			matlist_000D9584[0].attr_texId = 73;
			matlist_000D98A4[0].attr_texId = 73;
			matlist_000D9084[0].attr_texId = 73;
			matlist_000D8E18[0].attr_texId = 73;
			matlist_000D8BA0[0].attr_texId = 73;
			matlist_000D86A0[0].attr_texId = 73;
			matlist_000D8254[0].attr_texId = 73;
			matlist_000D7D64[0].attr_texId = 73;
		}
		if (LevelFrameCount % 60 == 12)
		{
			matlist_0008F1FC[0].attr_texId = 45;
			matlist_0008F7CC[2].attr_texId = 45;
			matlist_000907D4[4].attr_texId = 45;
			matlist_00091358[3].attr_texId = 45;
			matlist_000920EC[1].attr_texId = 45;
			matlist_00092E40[2].attr_texId = 45;
			matlist_00094E34[0].attr_texId = 45;
			matlist_00095C20[0].attr_texId = 45;
			matlist_00093FE0[3].attr_texId = 45;
			matlist_00096A10[2].attr_texId = 45;
			matlist_0009712C[3].attr_texId = 45;
			matlist_000DBBA4[0].attr_texId = 45;
			matlist_000DBBA4[1].attr_texId = 45;
			matlist_000DBBA4[2].attr_texId = 45;
			matlist_000DA750[0].attr_texId = 74;
			matlist_000DA9BC[0].attr_texId = 74;
			matlist_000DA188[0].attr_texId = 74;
			matlist_000DA46C[0].attr_texId = 74;
			matlist_000D9B10[0].attr_texId = 74;
			matlist_000D9E30[0].attr_texId = 74;
			matlist_000D9584[0].attr_texId = 74;
			matlist_000D98A4[0].attr_texId = 74;
			matlist_000D9084[0].attr_texId = 74;
			matlist_000D8E18[0].attr_texId = 74;
			matlist_000D8BA0[0].attr_texId = 74;
			matlist_000D86A0[0].attr_texId = 74;
			matlist_000D8254[0].attr_texId = 74;
			matlist_000D7D64[0].attr_texId = 74;
		}
		if (LevelFrameCount % 60 == 16)
		{
			matlist_0008F1FC[0].attr_texId = 46;
			matlist_0008F7CC[2].attr_texId = 46;
			matlist_000907D4[4].attr_texId = 46;
			matlist_00091358[3].attr_texId = 46;
			matlist_000920EC[1].attr_texId = 46;
			matlist_00092E40[2].attr_texId = 46;
			matlist_00094E34[0].attr_texId = 46;
			matlist_00095C20[0].attr_texId = 46;
			matlist_00093FE0[3].attr_texId = 46;
			matlist_00096A10[2].attr_texId = 46;
			matlist_0009712C[3].attr_texId = 46;
			matlist_000DBBA4[0].attr_texId = 46;
			matlist_000DBBA4[1].attr_texId = 46;
			matlist_000DBBA4[2].attr_texId = 46;
			matlist_000DA750[0].attr_texId = 75;
			matlist_000DA9BC[0].attr_texId = 75;
			matlist_000DA188[0].attr_texId = 75;
			matlist_000DA46C[0].attr_texId = 75;
			matlist_000D9B10[0].attr_texId = 75;
			matlist_000D9E30[0].attr_texId = 75;
			matlist_000D9584[0].attr_texId = 75;
			matlist_000D98A4[0].attr_texId = 75;
			matlist_000D9084[0].attr_texId = 75;
			matlist_000D8E18[0].attr_texId = 75;
			matlist_000D8BA0[0].attr_texId = 75;
			matlist_000D86A0[0].attr_texId = 75;
			matlist_000D8254[0].attr_texId = 75;
			matlist_000D7D64[0].attr_texId = 75;
		}
		if (LevelFrameCount % 60 == 20)
		{
			matlist_0008F1FC[0].attr_texId = 47;
			matlist_0008F7CC[2].attr_texId = 47;
			matlist_000907D4[4].attr_texId = 47;
			matlist_00091358[3].attr_texId = 47;
			matlist_000920EC[1].attr_texId = 47;
			matlist_00092E40[2].attr_texId = 47;
			matlist_00094E34[0].attr_texId = 47;
			matlist_00095C20[0].attr_texId = 47;
			matlist_00093FE0[3].attr_texId = 47;
			matlist_00096A10[2].attr_texId = 47;
			matlist_0009712C[3].attr_texId = 47;
			matlist_000DBBA4[0].attr_texId = 47;
			matlist_000DBBA4[1].attr_texId = 47;
			matlist_000DBBA4[2].attr_texId = 47;
			matlist_000DA750[0].attr_texId = 76;
			matlist_000DA9BC[0].attr_texId = 76;
			matlist_000DA188[0].attr_texId = 76;
			matlist_000DA46C[0].attr_texId = 76;
			matlist_000D9B10[0].attr_texId = 76;
			matlist_000D9E30[0].attr_texId = 76;
			matlist_000D9584[0].attr_texId = 76;
			matlist_000D98A4[0].attr_texId = 76;
			matlist_000D9084[0].attr_texId = 76;
			matlist_000D8E18[0].attr_texId = 76;
			matlist_000D8BA0[0].attr_texId = 76;
			matlist_000D86A0[0].attr_texId = 76;
			matlist_000D8254[0].attr_texId = 76;
			matlist_000D7D64[0].attr_texId = 76;
		}
		if (LevelFrameCount % 60 == 24)
		{
			matlist_0008F1FC[0].attr_texId = 48;
			matlist_0008F7CC[2].attr_texId = 48;
			matlist_000907D4[4].attr_texId = 48;
			matlist_00091358[3].attr_texId = 48;
			matlist_000920EC[1].attr_texId = 48;
			matlist_00092E40[2].attr_texId = 48;
			matlist_00094E34[0].attr_texId = 48;
			matlist_00095C20[0].attr_texId = 48;
			matlist_00093FE0[3].attr_texId = 48;
			matlist_00096A10[2].attr_texId = 48;
			matlist_0009712C[3].attr_texId = 48;
			matlist_000DBBA4[0].attr_texId = 48;
			matlist_000DBBA4[1].attr_texId = 48;
			matlist_000DBBA4[2].attr_texId = 48;
			matlist_000DA750[0].attr_texId = 77;
			matlist_000DA9BC[0].attr_texId = 77;
			matlist_000DA188[0].attr_texId = 77;
			matlist_000DA46C[0].attr_texId = 77;
			matlist_000D9B10[0].attr_texId = 77;
			matlist_000D9E30[0].attr_texId = 77;
			matlist_000D9584[0].attr_texId = 77;
			matlist_000D98A4[0].attr_texId = 77;
			matlist_000D9084[0].attr_texId = 77;
			matlist_000D8E18[0].attr_texId = 77;
			matlist_000D8BA0[0].attr_texId = 77;
			matlist_000D86A0[0].attr_texId = 77;
			matlist_000D8254[0].attr_texId = 77;
			matlist_000D7D64[0].attr_texId = 77;
		}
		if (LevelFrameCount % 60 == 28)
		{
			matlist_0008F1FC[0].attr_texId = 49;
			matlist_0008F7CC[2].attr_texId = 49;
			matlist_000907D4[4].attr_texId = 49;
			matlist_00091358[3].attr_texId = 49;
			matlist_000920EC[1].attr_texId = 49;
			matlist_00092E40[2].attr_texId = 49;
			matlist_00094E34[0].attr_texId = 49;
			matlist_00095C20[0].attr_texId = 49;
			matlist_00093FE0[3].attr_texId = 49;
			matlist_00096A10[2].attr_texId = 49;
			matlist_0009712C[3].attr_texId = 49;
			matlist_000DBBA4[0].attr_texId = 49;
			matlist_000DBBA4[1].attr_texId = 49;
			matlist_000DBBA4[2].attr_texId = 49;
			matlist_000DA750[0].attr_texId = 78;
			matlist_000DA9BC[0].attr_texId = 78;
			matlist_000DA188[0].attr_texId = 78;
			matlist_000DA46C[0].attr_texId = 78;
			matlist_000D9B10[0].attr_texId = 78;
			matlist_000D9E30[0].attr_texId = 78;
			matlist_000D9584[0].attr_texId = 78;
			matlist_000D98A4[0].attr_texId = 78;
			matlist_000D9084[0].attr_texId = 78;
			matlist_000D8E18[0].attr_texId = 78;
			matlist_000D8BA0[0].attr_texId = 78;
			matlist_000D86A0[0].attr_texId = 78;
			matlist_000D8254[0].attr_texId = 78;
			matlist_000D7D64[0].attr_texId = 78;
		}
		if (LevelFrameCount % 60 == 32)
		{
			matlist_0008F1FC[0].attr_texId = 50;
			matlist_0008F7CC[2].attr_texId = 50;
			matlist_000907D4[4].attr_texId = 50;
			matlist_00091358[3].attr_texId = 50;
			matlist_000920EC[1].attr_texId = 50;
			matlist_00092E40[2].attr_texId = 50;
			matlist_00094E34[0].attr_texId = 50;
			matlist_00095C20[0].attr_texId = 50;
			matlist_00093FE0[3].attr_texId = 50;
			matlist_00096A10[2].attr_texId = 50;
			matlist_0009712C[3].attr_texId = 50;
			matlist_000DBBA4[0].attr_texId = 50;
			matlist_000DBBA4[1].attr_texId = 50;
			matlist_000DBBA4[2].attr_texId = 50;
			matlist_000DA750[0].attr_texId = 79;
			matlist_000DA9BC[0].attr_texId = 79;
			matlist_000DA188[0].attr_texId = 79;
			matlist_000DA46C[0].attr_texId = 79;
			matlist_000D9B10[0].attr_texId = 79;
			matlist_000D9E30[0].attr_texId = 79;
			matlist_000D9584[0].attr_texId = 79;
			matlist_000D98A4[0].attr_texId = 79;
			matlist_000D9084[0].attr_texId = 79;
			matlist_000D8E18[0].attr_texId = 79;
			matlist_000D8BA0[0].attr_texId = 79;
			matlist_000D86A0[0].attr_texId = 79;
			matlist_000D8254[0].attr_texId = 79;
			matlist_000D7D64[0].attr_texId = 79;
		}
		if (LevelFrameCount % 60 == 36)
		{
			matlist_0008F1FC[0].attr_texId = 51;
			matlist_0008F7CC[2].attr_texId = 51;
			matlist_000907D4[4].attr_texId = 51;
			matlist_00091358[3].attr_texId = 51;
			matlist_000920EC[1].attr_texId = 51;
			matlist_00092E40[2].attr_texId = 51;
			matlist_00094E34[0].attr_texId = 51;
			matlist_00095C20[0].attr_texId = 51;
			matlist_00093FE0[3].attr_texId = 51;
			matlist_00096A10[2].attr_texId = 51;
			matlist_0009712C[3].attr_texId = 51;
			matlist_000DBBA4[0].attr_texId = 51;
			matlist_000DBBA4[1].attr_texId = 51;
			matlist_000DBBA4[2].attr_texId = 51;
			matlist_000DA750[0].attr_texId = 80;
			matlist_000DA9BC[0].attr_texId = 80;
			matlist_000DA188[0].attr_texId = 80;
			matlist_000DA46C[0].attr_texId = 80;
			matlist_000D9B10[0].attr_texId = 80;
			matlist_000D9E30[0].attr_texId = 80;
			matlist_000D9584[0].attr_texId = 80;
			matlist_000D98A4[0].attr_texId = 80;
			matlist_000D9084[0].attr_texId = 80;
			matlist_000D8E18[0].attr_texId = 80;
			matlist_000D8BA0[0].attr_texId = 80;
			matlist_000D86A0[0].attr_texId = 80;
			matlist_000D8254[0].attr_texId = 80;
			matlist_000D7D64[0].attr_texId = 80;
		}
		if (LevelFrameCount % 60 == 40)
		{
			matlist_0008F1FC[0].attr_texId = 52;
			matlist_0008F7CC[2].attr_texId = 52;
			matlist_000907D4[4].attr_texId = 52;
			matlist_00091358[3].attr_texId = 52;
			matlist_000920EC[1].attr_texId = 52;
			matlist_00092E40[2].attr_texId = 52;
			matlist_00094E34[0].attr_texId = 52;
			matlist_00095C20[0].attr_texId = 52;
			matlist_00093FE0[3].attr_texId = 52;
			matlist_00096A10[2].attr_texId = 52;
			matlist_0009712C[3].attr_texId = 52;
			matlist_000DBBA4[0].attr_texId = 52;
			matlist_000DBBA4[1].attr_texId = 52;
			matlist_000DBBA4[2].attr_texId = 52;
			matlist_000DA750[0].attr_texId = 81;
			matlist_000DA9BC[0].attr_texId = 81;
			matlist_000DA188[0].attr_texId = 81;
			matlist_000DA46C[0].attr_texId = 81;
			matlist_000D9B10[0].attr_texId = 81;
			matlist_000D9E30[0].attr_texId = 81;
			matlist_000D9584[0].attr_texId = 81;
			matlist_000D98A4[0].attr_texId = 81;
			matlist_000D9084[0].attr_texId = 81;
			matlist_000D8E18[0].attr_texId = 81;
			matlist_000D8BA0[0].attr_texId = 81;
			matlist_000D86A0[0].attr_texId = 81;
			matlist_000D8254[0].attr_texId = 81;
			matlist_000D7D64[0].attr_texId = 81;
		}
		if (LevelFrameCount % 60 == 44)
		{
			matlist_0008F1FC[0].attr_texId = 53;
			matlist_0008F7CC[2].attr_texId = 53;
			matlist_000907D4[4].attr_texId = 53;
			matlist_00091358[3].attr_texId = 53;
			matlist_000920EC[1].attr_texId = 53;
			matlist_00092E40[2].attr_texId = 53;
			matlist_00094E34[0].attr_texId = 53;
			matlist_00095C20[0].attr_texId = 53;
			matlist_00093FE0[3].attr_texId = 53;
			matlist_00096A10[2].attr_texId = 53;
			matlist_0009712C[3].attr_texId = 53;
			matlist_000DBBA4[0].attr_texId = 53;
			matlist_000DBBA4[1].attr_texId = 53;
			matlist_000DBBA4[2].attr_texId = 53;
			matlist_000DA750[0].attr_texId = 82;
			matlist_000DA9BC[0].attr_texId = 82;
			matlist_000DA188[0].attr_texId = 82;
			matlist_000DA46C[0].attr_texId = 82;
			matlist_000D9B10[0].attr_texId = 82;
			matlist_000D9E30[0].attr_texId = 82;
			matlist_000D9584[0].attr_texId = 82;
			matlist_000D98A4[0].attr_texId = 82;
			matlist_000D9084[0].attr_texId = 82;
			matlist_000D8E18[0].attr_texId = 82;
			matlist_000D8BA0[0].attr_texId = 82;
			matlist_000D86A0[0].attr_texId = 82;
			matlist_000D8254[0].attr_texId = 82;
			matlist_000D7D64[0].attr_texId = 82;
		}
		if (LevelFrameCount % 60 == 48)
		{
			matlist_0008F1FC[0].attr_texId = 54;
			matlist_0008F7CC[2].attr_texId = 54;
			matlist_000907D4[4].attr_texId = 54;
			matlist_00091358[3].attr_texId = 54;
			matlist_000920EC[1].attr_texId = 54;
			matlist_00092E40[2].attr_texId = 54;
			matlist_00094E34[0].attr_texId = 54;
			matlist_00095C20[0].attr_texId = 54;
			matlist_00093FE0[3].attr_texId = 54;
			matlist_00096A10[2].attr_texId = 54;
			matlist_0009712C[3].attr_texId = 54;
			matlist_000DBBA4[0].attr_texId = 54;
			matlist_000DBBA4[1].attr_texId = 54;
			matlist_000DBBA4[2].attr_texId = 54;
			matlist_000DA750[0].attr_texId = 83;
			matlist_000DA9BC[0].attr_texId = 83;
			matlist_000DA188[0].attr_texId = 83;
			matlist_000DA46C[0].attr_texId = 83;
			matlist_000D9B10[0].attr_texId = 83;
			matlist_000D9E30[0].attr_texId = 83;
			matlist_000D9584[0].attr_texId = 83;
			matlist_000D98A4[0].attr_texId = 83;
			matlist_000D9084[0].attr_texId = 83;
			matlist_000D8E18[0].attr_texId = 83;
			matlist_000D8BA0[0].attr_texId = 83;
			matlist_000D86A0[0].attr_texId = 83;
			matlist_000D8254[0].attr_texId = 83;
			matlist_000D7D64[0].attr_texId = 83;
		}
		if (LevelFrameCount % 60 == 52)
		{
			matlist_0008F1FC[0].attr_texId = 55;
			matlist_0008F7CC[2].attr_texId = 55;
			matlist_000907D4[4].attr_texId = 55;
			matlist_00091358[3].attr_texId = 55;
			matlist_000920EC[1].attr_texId = 55;
			matlist_00092E40[2].attr_texId = 55;
			matlist_00094E34[0].attr_texId = 55;
			matlist_00095C20[0].attr_texId = 55;
			matlist_00093FE0[3].attr_texId = 55;
			matlist_00096A10[2].attr_texId = 55;
			matlist_0009712C[3].attr_texId = 55;
			matlist_000DBBA4[0].attr_texId = 55;
			matlist_000DBBA4[1].attr_texId = 55;
			matlist_000DBBA4[2].attr_texId = 55;
			matlist_000DA750[0].attr_texId = 84;
			matlist_000DA9BC[0].attr_texId = 84;
			matlist_000DA188[0].attr_texId = 84;
			matlist_000DA46C[0].attr_texId = 84;
			matlist_000D9B10[0].attr_texId = 84;
			matlist_000D9E30[0].attr_texId = 84;
			matlist_000D9584[0].attr_texId = 84;
			matlist_000D98A4[0].attr_texId = 84;
			matlist_000D9084[0].attr_texId = 84;
			matlist_000D8E18[0].attr_texId = 84;
			matlist_000D8BA0[0].attr_texId = 84;
			matlist_000D86A0[0].attr_texId = 84;
			matlist_000D8254[0].attr_texId = 84;
			matlist_000D7D64[0].attr_texId = 84;
		}
		if (LevelFrameCount % 60 == 56)
		{
			matlist_0008F1FC[0].attr_texId = 56;
			matlist_0008F7CC[2].attr_texId = 56;
			matlist_000907D4[4].attr_texId = 56;
			matlist_00091358[3].attr_texId = 56;
			matlist_000920EC[1].attr_texId = 56;
			matlist_00092E40[2].attr_texId = 56;
			matlist_00094E34[0].attr_texId = 56;
			matlist_00095C20[0].attr_texId = 56;
			matlist_00093FE0[3].attr_texId = 56;
			matlist_00096A10[2].attr_texId = 56;
			matlist_0009712C[3].attr_texId = 56;
			matlist_000DBBA4[0].attr_texId = 56;
			matlist_000DBBA4[1].attr_texId = 56;
			matlist_000DBBA4[2].attr_texId = 56;
			matlist_000DA750[0].attr_texId = 85;
			matlist_000DA9BC[0].attr_texId = 85;
			matlist_000DA188[0].attr_texId = 85;
			matlist_000DA46C[0].attr_texId = 85;
			matlist_000D9B10[0].attr_texId = 85;
			matlist_000D9E30[0].attr_texId = 85;
			matlist_000D9584[0].attr_texId = 85;
			matlist_000D98A4[0].attr_texId = 85;
			matlist_000D9084[0].attr_texId = 85;
			matlist_000D8E18[0].attr_texId = 85;
			matlist_000D8BA0[0].attr_texId = 85;
			matlist_000D86A0[0].attr_texId = 85;
			matlist_000D8254[0].attr_texId = 85;
			matlist_000D7D64[0].attr_texId = 85;
		}
	}
	if (CurrentLevel == 1 && CurrentAct == 2 && GameState != 16)
	{
		if (LevelFrameCount % 60 == 0)
		{
			matlist_00117310[0].attr_texId = 64;
			matlist_0011784C[0].attr_texId = 64;
			matlist_00117C5C[0].attr_texId = 64;
			matlist_00118030[0].attr_texId = 64;
			matlist_0011829C[0].attr_texId = 64;
			matlist_00118544[0].attr_texId = 64;
			matlist_001187B0[0].attr_texId = 64;
			matlist_00118A94[0].attr_texId = 64;
			matlist_00118D94[0].attr_texId = 64;
			matlist_000E5260[3].attr_texId = 79;
			matlist_000E611C[3].attr_texId = 79;
			matlist_000E71EC[0].attr_texId = 79;
			matlist_000E97EC[2].attr_texId = 79;
			matlist_000EA520[2].attr_texId = 79;
			matlist_000EB0E0[0].attr_texId = 79;
			matlist_000EF7E4[0].attr_texId = 79;
			matlist_000EF7E4[2].attr_texId = 79;
			matlist_000F8F6C[0].attr_texId = 79;
			matlist_000F95F0[0].attr_texId = 79;
			matlist_000F9D10[0].attr_texId = 79;
			matlist_000F9D10[1].attr_texId = 79;
			matlist_000FB004[0].attr_texId = 79;
			matlist_000FB004[1].attr_texId = 79;
			matlist_000FEE58[0].attr_texId = 79;
			matlist_000FF3A0[0].attr_texId = 79;
			matlist_000FFD48[0].attr_texId = 79;
			matlist_00101320[0].attr_texId = 79;
			matlist_00101E9C[0].attr_texId = 79;
			matlist_0010280C[0].attr_texId = 79;
			matlist_001033A8[0].attr_texId = 79;
			matlist_00103DC8[0].attr_texId = 79;
			matlist_00104920[0].attr_texId = 79;
			matlist_00105630[0].attr_texId = 79;
			matlist_00108120[0].attr_texId = 79;
			matlist_0010C7F4[0].attr_texId = 79;
			matlist_0010D618[0].attr_texId = 79;
			matlist_0010E304[0].attr_texId = 79;
			matlist_0010F148[0].attr_texId = 79;
			matlist_00110184[0].attr_texId = 79;
			matlist_00110184[1].attr_texId = 79;
			matlist_00110DFC[0].attr_texId = 79;
			matlist_0011B12C[0].attr_texId = 79;
			matlist_0011B12C[1].attr_texId = 79;
		}
		if (LevelFrameCount % 60 == 4)
		{
			matlist_00117310[0].attr_texId = 50;
			matlist_0011784C[0].attr_texId = 50;
			matlist_00117C5C[0].attr_texId = 50;
			matlist_00118030[0].attr_texId = 50;
			matlist_0011829C[0].attr_texId = 50;
			matlist_00118544[0].attr_texId = 50;
			matlist_001187B0[0].attr_texId = 50;
			matlist_00118A94[0].attr_texId = 50;
			matlist_00118D94[0].attr_texId = 50;
			matlist_000E5260[3].attr_texId = 65;
			matlist_000E611C[3].attr_texId = 65;
			matlist_000E71EC[0].attr_texId = 65;
			matlist_000E97EC[2].attr_texId = 65;
			matlist_000EA520[2].attr_texId = 65;
			matlist_000EB0E0[0].attr_texId = 65;
			matlist_000EF7E4[0].attr_texId = 65;
			matlist_000EF7E4[2].attr_texId = 65;
			matlist_000F8F6C[0].attr_texId = 65;
			matlist_000F95F0[0].attr_texId = 65;
			matlist_000F9D10[0].attr_texId = 65;
			matlist_000F9D10[1].attr_texId = 65;
			matlist_000FB004[0].attr_texId = 65;
			matlist_000FB004[1].attr_texId = 65;
			matlist_000FEE58[0].attr_texId = 65;
			matlist_000FF3A0[0].attr_texId = 65;
			matlist_000FFD48[0].attr_texId = 65;
			matlist_00101320[0].attr_texId = 65;
			matlist_00101E9C[0].attr_texId = 65;
			matlist_0010280C[0].attr_texId = 65;
			matlist_001033A8[0].attr_texId = 65;
			matlist_00103DC8[0].attr_texId = 65;
			matlist_00104920[0].attr_texId = 65;
			matlist_00105630[0].attr_texId = 65;
			matlist_00108120[0].attr_texId = 65;
			matlist_0010C7F4[0].attr_texId = 65;
			matlist_0010D618[0].attr_texId = 65;
			matlist_0010E304[0].attr_texId = 65;
			matlist_0010F148[0].attr_texId = 65;
			matlist_00110184[0].attr_texId = 65;
			matlist_00110184[1].attr_texId = 65;
			matlist_00110DFC[0].attr_texId = 65;
			matlist_0011B12C[0].attr_texId = 65;
			matlist_0011B12C[1].attr_texId = 65;
		}
		if (LevelFrameCount % 60 == 8)
		{
			matlist_00117310[0].attr_texId = 51;
			matlist_0011784C[0].attr_texId = 51;
			matlist_00117C5C[0].attr_texId = 51;
			matlist_00118030[0].attr_texId = 51;
			matlist_0011829C[0].attr_texId = 51;
			matlist_00118544[0].attr_texId = 51;
			matlist_001187B0[0].attr_texId = 51;
			matlist_00118A94[0].attr_texId = 51;
			matlist_00118D94[0].attr_texId = 51;
			matlist_000E5260[3].attr_texId = 66;
			matlist_000E611C[3].attr_texId = 66;
			matlist_000E71EC[0].attr_texId = 66;
			matlist_000E97EC[2].attr_texId = 66;
			matlist_000EA520[2].attr_texId = 66;
			matlist_000EB0E0[0].attr_texId = 66;
			matlist_000EF7E4[0].attr_texId = 66;
			matlist_000EF7E4[2].attr_texId = 66;
			matlist_000F8F6C[0].attr_texId = 66;
			matlist_000F95F0[0].attr_texId = 66;
			matlist_000F9D10[0].attr_texId = 66;
			matlist_000F9D10[1].attr_texId = 66;
			matlist_000FB004[0].attr_texId = 66;
			matlist_000FB004[1].attr_texId = 66;
			matlist_000FEE58[0].attr_texId = 66;
			matlist_000FF3A0[0].attr_texId = 66;
			matlist_000FFD48[0].attr_texId = 66;
			matlist_00101320[0].attr_texId = 66;
			matlist_00101E9C[0].attr_texId = 66;
			matlist_0010280C[0].attr_texId = 66;
			matlist_001033A8[0].attr_texId = 66;
			matlist_00103DC8[0].attr_texId = 66;
			matlist_00104920[0].attr_texId = 66;
			matlist_00105630[0].attr_texId = 66;
			matlist_00108120[0].attr_texId = 66;
			matlist_0010C7F4[0].attr_texId = 66;
			matlist_0010D618[0].attr_texId = 66;
			matlist_0010E304[0].attr_texId = 66;
			matlist_0010F148[0].attr_texId = 66;
			matlist_00110184[0].attr_texId = 66;
			matlist_00110184[1].attr_texId = 66;
			matlist_00110DFC[0].attr_texId = 66;
			matlist_0011B12C[0].attr_texId = 66;
			matlist_0011B12C[1].attr_texId = 66;
		}
		if (LevelFrameCount % 60 == 12)
		{
			matlist_00117310[0].attr_texId = 52;
			matlist_0011784C[0].attr_texId = 52;
			matlist_00117C5C[0].attr_texId = 52;
			matlist_00118030[0].attr_texId = 52;
			matlist_0011829C[0].attr_texId = 52;
			matlist_00118544[0].attr_texId = 52;
			matlist_001187B0[0].attr_texId = 52;
			matlist_00118A94[0].attr_texId = 52;
			matlist_00118D94[0].attr_texId = 52;
			matlist_000E5260[3].attr_texId = 67;
			matlist_000E611C[3].attr_texId = 67;
			matlist_000E71EC[0].attr_texId = 67;
			matlist_000E97EC[2].attr_texId = 67;
			matlist_000EA520[2].attr_texId = 67;
			matlist_000EB0E0[0].attr_texId = 67;
			matlist_000EF7E4[0].attr_texId = 67;
			matlist_000EF7E4[2].attr_texId = 67;
			matlist_000F8F6C[0].attr_texId = 67;
			matlist_000F95F0[0].attr_texId = 67;
			matlist_000F9D10[0].attr_texId = 67;
			matlist_000F9D10[1].attr_texId = 67;
			matlist_000FB004[0].attr_texId = 67;
			matlist_000FB004[1].attr_texId = 67;
			matlist_000FEE58[0].attr_texId = 67;
			matlist_000FF3A0[0].attr_texId = 67;
			matlist_000FFD48[0].attr_texId = 67;
			matlist_00101320[0].attr_texId = 67;
			matlist_00101E9C[0].attr_texId = 67;
			matlist_0010280C[0].attr_texId = 67;
			matlist_001033A8[0].attr_texId = 67;
			matlist_00103DC8[0].attr_texId = 67;
			matlist_00104920[0].attr_texId = 67;
			matlist_00105630[0].attr_texId = 67;
			matlist_00108120[0].attr_texId = 67;
			matlist_0010C7F4[0].attr_texId = 67;
			matlist_0010D618[0].attr_texId = 67;
			matlist_0010E304[0].attr_texId = 67;
			matlist_0010F148[0].attr_texId = 67;
			matlist_00110184[0].attr_texId = 67;
			matlist_00110184[1].attr_texId = 67;
			matlist_00110DFC[0].attr_texId = 67;
			matlist_0011B12C[0].attr_texId = 67;
			matlist_0011B12C[1].attr_texId = 67;
		}
		if (LevelFrameCount % 60 == 16)
		{
			matlist_00117310[0].attr_texId = 53;
			matlist_0011784C[0].attr_texId = 53;
			matlist_00117C5C[0].attr_texId = 53;
			matlist_00118030[0].attr_texId = 53;
			matlist_0011829C[0].attr_texId = 53;
			matlist_00118544[0].attr_texId = 53;
			matlist_001187B0[0].attr_texId = 53;
			matlist_00118A94[0].attr_texId = 53;
			matlist_00118D94[0].attr_texId = 53;
			matlist_000E5260[3].attr_texId = 68;
			matlist_000E611C[3].attr_texId = 68;
			matlist_000E71EC[0].attr_texId = 68;
			matlist_000E97EC[2].attr_texId = 68;
			matlist_000EA520[2].attr_texId = 68;
			matlist_000EB0E0[0].attr_texId = 68;
			matlist_000EF7E4[0].attr_texId = 68;
			matlist_000EF7E4[2].attr_texId = 68;
			matlist_000F8F6C[0].attr_texId = 68;
			matlist_000F95F0[0].attr_texId = 68;
			matlist_000F9D10[0].attr_texId = 68;
			matlist_000F9D10[1].attr_texId = 68;
			matlist_000FB004[0].attr_texId = 68;
			matlist_000FB004[1].attr_texId = 68;
			matlist_000FEE58[0].attr_texId = 68;
			matlist_000FF3A0[0].attr_texId = 68;
			matlist_000FFD48[0].attr_texId = 68;
			matlist_00101320[0].attr_texId = 68;
			matlist_00101E9C[0].attr_texId = 68;
			matlist_0010280C[0].attr_texId = 68;
			matlist_001033A8[0].attr_texId = 68;
			matlist_00103DC8[0].attr_texId = 68;
			matlist_00104920[0].attr_texId = 68;
			matlist_00105630[0].attr_texId = 68;
			matlist_00108120[0].attr_texId = 68;
			matlist_0010C7F4[0].attr_texId = 68;
			matlist_0010D618[0].attr_texId = 68;
			matlist_0010E304[0].attr_texId = 68;
			matlist_0010F148[0].attr_texId = 68;
			matlist_00110184[0].attr_texId = 68;
			matlist_00110184[1].attr_texId = 68;
			matlist_00110DFC[0].attr_texId = 68;
			matlist_0011B12C[0].attr_texId = 68;
			matlist_0011B12C[1].attr_texId = 68;
		}
		if (LevelFrameCount % 60 == 20)
		{
			matlist_00117310[0].attr_texId = 54;
			matlist_0011784C[0].attr_texId = 54;
			matlist_00117C5C[0].attr_texId = 54;
			matlist_00118030[0].attr_texId = 54;
			matlist_0011829C[0].attr_texId = 54;
			matlist_00118544[0].attr_texId = 54;
			matlist_001187B0[0].attr_texId = 54;
			matlist_00118A94[0].attr_texId = 54;
			matlist_00118D94[0].attr_texId = 54;
			matlist_000E5260[3].attr_texId = 69;
			matlist_000E611C[3].attr_texId = 69;
			matlist_000E71EC[0].attr_texId = 69;
			matlist_000E97EC[2].attr_texId = 69;
			matlist_000EA520[2].attr_texId = 69;
			matlist_000EB0E0[0].attr_texId = 69;
			matlist_000EF7E4[0].attr_texId = 69;
			matlist_000EF7E4[2].attr_texId = 69;
			matlist_000F8F6C[0].attr_texId = 69;
			matlist_000F95F0[0].attr_texId = 69;
			matlist_000F9D10[0].attr_texId = 69;
			matlist_000F9D10[1].attr_texId = 69;
			matlist_000FB004[0].attr_texId = 69;
			matlist_000FB004[1].attr_texId = 69;
			matlist_000FEE58[0].attr_texId = 69;
			matlist_000FF3A0[0].attr_texId = 69;
			matlist_000FFD48[0].attr_texId = 69;
			matlist_00101320[0].attr_texId = 69;
			matlist_00101E9C[0].attr_texId = 69;
			matlist_0010280C[0].attr_texId = 69;
			matlist_001033A8[0].attr_texId = 69;
			matlist_00103DC8[0].attr_texId = 69;
			matlist_00104920[0].attr_texId = 69;
			matlist_00105630[0].attr_texId = 69;
			matlist_00108120[0].attr_texId = 69;
			matlist_0010C7F4[0].attr_texId = 69;
			matlist_0010D618[0].attr_texId = 69;
			matlist_0010E304[0].attr_texId = 69;
			matlist_0010F148[0].attr_texId = 69;
			matlist_00110184[0].attr_texId = 69;
			matlist_00110184[1].attr_texId = 69;
			matlist_00110DFC[0].attr_texId = 69;
			matlist_0011B12C[0].attr_texId = 69;
			matlist_0011B12C[1].attr_texId = 69;
		}
		if (LevelFrameCount % 60 == 24)
		{
			matlist_00117310[0].attr_texId = 55;
			matlist_0011784C[0].attr_texId = 55;
			matlist_00117C5C[0].attr_texId = 55;
			matlist_00118030[0].attr_texId = 55;
			matlist_0011829C[0].attr_texId = 55;
			matlist_00118544[0].attr_texId = 55;
			matlist_001187B0[0].attr_texId = 55;
			matlist_00118A94[0].attr_texId = 55;
			matlist_00118D94[0].attr_texId = 55;
			matlist_000E5260[3].attr_texId = 70;
			matlist_000E611C[3].attr_texId = 70;
			matlist_000E71EC[0].attr_texId = 70;
			matlist_000E97EC[2].attr_texId = 70;
			matlist_000EA520[2].attr_texId = 70;
			matlist_000EB0E0[0].attr_texId = 70;
			matlist_000EF7E4[0].attr_texId = 70;
			matlist_000EF7E4[2].attr_texId = 70;
			matlist_000F8F6C[0].attr_texId = 70;
			matlist_000F95F0[0].attr_texId = 70;
			matlist_000F9D10[0].attr_texId = 70;
			matlist_000F9D10[1].attr_texId = 70;
			matlist_000FB004[0].attr_texId = 70;
			matlist_000FB004[1].attr_texId = 70;
			matlist_000FEE58[0].attr_texId = 70;
			matlist_000FF3A0[0].attr_texId = 70;
			matlist_000FFD48[0].attr_texId = 70;
			matlist_00101320[0].attr_texId = 70;
			matlist_00101E9C[0].attr_texId = 70;
			matlist_0010280C[0].attr_texId = 70;
			matlist_001033A8[0].attr_texId = 70;
			matlist_00103DC8[0].attr_texId = 70;
			matlist_00104920[0].attr_texId = 70;
			matlist_00105630[0].attr_texId = 70;
			matlist_00108120[0].attr_texId = 70;
			matlist_0010C7F4[0].attr_texId = 70;
			matlist_0010D618[0].attr_texId = 70;
			matlist_0010E304[0].attr_texId = 70;
			matlist_0010F148[0].attr_texId = 70;
			matlist_00110184[0].attr_texId = 70;
			matlist_00110184[1].attr_texId = 70;
			matlist_00110DFC[0].attr_texId = 70;
			matlist_0011B12C[0].attr_texId = 70;
			matlist_0011B12C[1].attr_texId = 70;
		}
		if (LevelFrameCount % 60 == 28) {
			matlist_00117310[0].attr_texId = 56;
			matlist_0011784C[0].attr_texId = 56;
			matlist_00117C5C[0].attr_texId = 56;
			matlist_00118030[0].attr_texId = 56;
			matlist_0011829C[0].attr_texId = 56;
			matlist_00118544[0].attr_texId = 56;
			matlist_001187B0[0].attr_texId = 56;
			matlist_00118A94[0].attr_texId = 56;
			matlist_00118D94[0].attr_texId = 56;
			matlist_000E5260[3].attr_texId = 71;
			matlist_000E611C[3].attr_texId = 71;
			matlist_000E71EC[0].attr_texId = 71;
			matlist_000E97EC[2].attr_texId = 71;
			matlist_000EA520[2].attr_texId = 71;
			matlist_000EB0E0[0].attr_texId = 71;
			matlist_000EF7E4[0].attr_texId = 71;
			matlist_000EF7E4[2].attr_texId = 71;
			matlist_000F8F6C[0].attr_texId = 71;
			matlist_000F95F0[0].attr_texId = 71;
			matlist_000F9D10[0].attr_texId = 71;
			matlist_000F9D10[1].attr_texId = 71;
			matlist_000FB004[0].attr_texId = 71;
			matlist_000FB004[1].attr_texId = 71;
			matlist_000FEE58[0].attr_texId = 71;
			matlist_000FF3A0[0].attr_texId = 71;
			matlist_000FFD48[0].attr_texId = 71;
			matlist_00101320[0].attr_texId = 71;
			matlist_00101E9C[0].attr_texId = 71;
			matlist_0010280C[0].attr_texId = 71;
			matlist_001033A8[0].attr_texId = 71;
			matlist_00103DC8[0].attr_texId = 71;
			matlist_00104920[0].attr_texId = 71;
			matlist_00105630[0].attr_texId = 71;
			matlist_00108120[0].attr_texId = 71;
			matlist_0010C7F4[0].attr_texId = 71;
			matlist_0010D618[0].attr_texId = 71;
			matlist_0010E304[0].attr_texId = 71;
			matlist_0010F148[0].attr_texId = 71;
			matlist_00110184[0].attr_texId = 71;
			matlist_00110184[1].attr_texId = 71;
			matlist_00110DFC[0].attr_texId = 71;
			matlist_0011B12C[0].attr_texId = 71;
			matlist_0011B12C[1].attr_texId = 71;
		}
		if (LevelFrameCount % 60 == 32)
		{
			matlist_00117310[0].attr_texId = 57;
			matlist_0011784C[0].attr_texId = 57;
			matlist_00117C5C[0].attr_texId = 57;
			matlist_00118030[0].attr_texId = 57;
			matlist_0011829C[0].attr_texId = 57;
			matlist_00118544[0].attr_texId = 57;
			matlist_001187B0[0].attr_texId = 57;
			matlist_00118A94[0].attr_texId = 57;
			matlist_00118D94[0].attr_texId = 57;
			matlist_000E5260[3].attr_texId = 72;
			matlist_000E611C[3].attr_texId = 72;
			matlist_000E71EC[0].attr_texId = 72;
			matlist_000E97EC[2].attr_texId = 72;
			matlist_000EA520[2].attr_texId = 72;
			matlist_000EB0E0[0].attr_texId = 72;
			matlist_000EF7E4[0].attr_texId = 72;
			matlist_000EF7E4[2].attr_texId = 72;
			matlist_000F8F6C[0].attr_texId = 72;
			matlist_000F95F0[0].attr_texId = 72;
			matlist_000F9D10[0].attr_texId = 72;
			matlist_000F9D10[1].attr_texId = 72;
			matlist_000FB004[0].attr_texId = 72;
			matlist_000FB004[1].attr_texId = 72;
			matlist_000FEE58[0].attr_texId = 72;
			matlist_000FF3A0[0].attr_texId = 72;
			matlist_000FFD48[0].attr_texId = 72;
			matlist_00101320[0].attr_texId = 72;
			matlist_00101E9C[0].attr_texId = 72;
			matlist_0010280C[0].attr_texId = 72;
			matlist_001033A8[0].attr_texId = 72;
			matlist_00103DC8[0].attr_texId = 72;
			matlist_00104920[0].attr_texId = 72;
			matlist_00105630[0].attr_texId = 72;
			matlist_00108120[0].attr_texId = 72;
			matlist_0010C7F4[0].attr_texId = 72;
			matlist_0010D618[0].attr_texId = 72;
			matlist_0010E304[0].attr_texId = 72;
			matlist_0010F148[0].attr_texId = 72;
			matlist_00110184[0].attr_texId = 72;
			matlist_00110184[1].attr_texId = 72;
			matlist_00110DFC[0].attr_texId = 72;
			matlist_0011B12C[0].attr_texId = 72;
			matlist_0011B12C[1].attr_texId = 72;
		}
		if (LevelFrameCount % 60 == 36)
		{
			matlist_00117310[0].attr_texId = 58;
			matlist_0011784C[0].attr_texId = 58;
			matlist_00117C5C[0].attr_texId = 58;
			matlist_00118030[0].attr_texId = 58;
			matlist_0011829C[0].attr_texId = 58;
			matlist_00118544[0].attr_texId = 58;
			matlist_001187B0[0].attr_texId = 58;
			matlist_00118A94[0].attr_texId = 58;
			matlist_00118D94[0].attr_texId = 58;
			matlist_000E5260[3].attr_texId = 73;
			matlist_000E611C[3].attr_texId = 73;
			matlist_000E71EC[0].attr_texId = 73;
			matlist_000E97EC[2].attr_texId = 73;
			matlist_000EA520[2].attr_texId = 73;
			matlist_000EB0E0[0].attr_texId = 73;
			matlist_000EF7E4[0].attr_texId = 73;
			matlist_000EF7E4[2].attr_texId = 73;
			matlist_000F8F6C[0].attr_texId = 73;
			matlist_000F95F0[0].attr_texId = 73;
			matlist_000F9D10[0].attr_texId = 73;
			matlist_000F9D10[1].attr_texId = 73;
			matlist_000FB004[0].attr_texId = 73;
			matlist_000FB004[1].attr_texId = 73;
			matlist_000FEE58[0].attr_texId = 73;
			matlist_000FF3A0[0].attr_texId = 73;
			matlist_000FFD48[0].attr_texId = 73;
			matlist_00101320[0].attr_texId = 73;
			matlist_00101E9C[0].attr_texId = 73;
			matlist_0010280C[0].attr_texId = 73;
			matlist_001033A8[0].attr_texId = 73;
			matlist_00103DC8[0].attr_texId = 73;
			matlist_00104920[0].attr_texId = 73;
			matlist_00105630[0].attr_texId = 73;
			matlist_00108120[0].attr_texId = 73;
			matlist_0010C7F4[0].attr_texId = 73;
			matlist_0010D618[0].attr_texId = 73;
			matlist_0010E304[0].attr_texId = 73;
			matlist_0010F148[0].attr_texId = 73;
			matlist_00110184[0].attr_texId = 73;
			matlist_00110184[1].attr_texId = 73;
			matlist_00110DFC[0].attr_texId = 73;
			matlist_0011B12C[0].attr_texId = 73;
			matlist_0011B12C[1].attr_texId = 73;
		}
		if (LevelFrameCount % 60 == 40)
		{
			matlist_00117310[0].attr_texId = 59;
			matlist_0011784C[0].attr_texId = 59;
			matlist_00117C5C[0].attr_texId = 59;
			matlist_00118030[0].attr_texId = 59;
			matlist_0011829C[0].attr_texId = 59;
			matlist_00118544[0].attr_texId = 59;
			matlist_001187B0[0].attr_texId = 59;
			matlist_00118A94[0].attr_texId = 59;
			matlist_00118D94[0].attr_texId = 59;
			matlist_000E5260[3].attr_texId = 74;
			matlist_000E611C[3].attr_texId = 74;
			matlist_000E71EC[0].attr_texId = 74;
			matlist_000E97EC[2].attr_texId = 74;
			matlist_000EA520[2].attr_texId = 74;
			matlist_000EB0E0[0].attr_texId = 74;
			matlist_000EF7E4[0].attr_texId = 74;
			matlist_000EF7E4[2].attr_texId = 74;
			matlist_000F8F6C[0].attr_texId = 74;
			matlist_000F95F0[0].attr_texId = 74;
			matlist_000F9D10[0].attr_texId = 74;
			matlist_000F9D10[1].attr_texId = 74;
			matlist_000FB004[0].attr_texId = 74;
			matlist_000FB004[1].attr_texId = 74;
			matlist_000FEE58[0].attr_texId = 74;
			matlist_000FF3A0[0].attr_texId = 74;
			matlist_000FFD48[0].attr_texId = 74;
			matlist_00101320[0].attr_texId = 74;
			matlist_00101E9C[0].attr_texId = 74;
			matlist_0010280C[0].attr_texId = 74;
			matlist_001033A8[0].attr_texId = 74;
			matlist_00103DC8[0].attr_texId = 74;
			matlist_00104920[0].attr_texId = 74;
			matlist_00105630[0].attr_texId = 74;
			matlist_00108120[0].attr_texId = 74;
			matlist_0010C7F4[0].attr_texId = 74;
			matlist_0010D618[0].attr_texId = 74;
			matlist_0010E304[0].attr_texId = 74;
			matlist_0010F148[0].attr_texId = 74;
			matlist_00110184[0].attr_texId = 74;
			matlist_00110184[1].attr_texId = 74;
			matlist_00110DFC[0].attr_texId = 74;
			matlist_0011B12C[0].attr_texId = 74;
			matlist_0011B12C[1].attr_texId = 74;
		}
		if (LevelFrameCount % 60 == 44)
		{
			matlist_00117310[0].attr_texId = 60;
			matlist_0011784C[0].attr_texId = 60;
			matlist_00117C5C[0].attr_texId = 60;
			matlist_00118030[0].attr_texId = 60;
			matlist_0011829C[0].attr_texId = 60;
			matlist_00118544[0].attr_texId = 60;
			matlist_001187B0[0].attr_texId = 60;
			matlist_00118A94[0].attr_texId = 60;
			matlist_00118D94[0].attr_texId = 60;
			matlist_000E5260[3].attr_texId = 75;
			matlist_000E611C[3].attr_texId = 75;
			matlist_000E71EC[0].attr_texId = 75;
			matlist_000E97EC[2].attr_texId = 75;
			matlist_000EA520[2].attr_texId = 75;
			matlist_000EB0E0[0].attr_texId = 75;
			matlist_000EF7E4[0].attr_texId = 75;
			matlist_000EF7E4[2].attr_texId = 75;
			matlist_000F8F6C[0].attr_texId = 75;
			matlist_000F95F0[0].attr_texId = 75;
			matlist_000F9D10[0].attr_texId = 75;
			matlist_000F9D10[1].attr_texId = 75;
			matlist_000FB004[0].attr_texId = 75;
			matlist_000FB004[1].attr_texId = 75;
			matlist_000FEE58[0].attr_texId = 75;
			matlist_000FF3A0[0].attr_texId = 75;
			matlist_000FFD48[0].attr_texId = 75;
			matlist_00101320[0].attr_texId = 75;
			matlist_00101E9C[0].attr_texId = 75;
			matlist_0010280C[0].attr_texId = 75;
			matlist_001033A8[0].attr_texId = 75;
			matlist_00103DC8[0].attr_texId = 75;
			matlist_00104920[0].attr_texId = 75;
			matlist_00105630[0].attr_texId = 75;
			matlist_00108120[0].attr_texId = 75;
			matlist_0010C7F4[0].attr_texId = 75;
			matlist_0010D618[0].attr_texId = 75;
			matlist_0010E304[0].attr_texId = 75;
			matlist_0010F148[0].attr_texId = 75;
			matlist_00110184[0].attr_texId = 75;
			matlist_00110184[1].attr_texId = 75;
			matlist_00110DFC[0].attr_texId = 75;
			matlist_0011B12C[0].attr_texId = 75;
			matlist_0011B12C[1].attr_texId = 75;
		}
		if (LevelFrameCount % 60 == 48)
		{
			matlist_00117310[0].attr_texId = 61;
			matlist_0011784C[0].attr_texId = 61;
			matlist_00117C5C[0].attr_texId = 61;
			matlist_00118030[0].attr_texId = 61;
			matlist_0011829C[0].attr_texId = 61;
			matlist_00118544[0].attr_texId = 61;
			matlist_001187B0[0].attr_texId = 61;
			matlist_00118A94[0].attr_texId = 61;
			matlist_00118D94[0].attr_texId = 61;
			matlist_000E5260[3].attr_texId = 76;
			matlist_000E611C[3].attr_texId = 76;
			matlist_000E71EC[0].attr_texId = 76;
			matlist_000E97EC[2].attr_texId = 76;
			matlist_000EA520[2].attr_texId = 76;
			matlist_000EB0E0[0].attr_texId = 76;
			matlist_000EF7E4[0].attr_texId = 76;
			matlist_000EF7E4[2].attr_texId = 76;
			matlist_000F8F6C[0].attr_texId = 76;
			matlist_000F95F0[0].attr_texId = 76;
			matlist_000F9D10[0].attr_texId = 76;
			matlist_000F9D10[1].attr_texId = 76;
			matlist_000FB004[0].attr_texId = 76;
			matlist_000FB004[1].attr_texId = 76;
			matlist_000FEE58[0].attr_texId = 76;
			matlist_000FF3A0[0].attr_texId = 76;
			matlist_000FFD48[0].attr_texId = 76;
			matlist_00101320[0].attr_texId = 76;
			matlist_00101E9C[0].attr_texId = 76;
			matlist_0010280C[0].attr_texId = 76;
			matlist_001033A8[0].attr_texId = 76;
			matlist_00103DC8[0].attr_texId = 76;
			matlist_00104920[0].attr_texId = 76;
			matlist_00105630[0].attr_texId = 76;
			matlist_00108120[0].attr_texId = 76;
			matlist_0010C7F4[0].attr_texId = 76;
			matlist_0010D618[0].attr_texId = 76;
			matlist_0010E304[0].attr_texId = 76;
			matlist_0010F148[0].attr_texId = 76;
			matlist_00110184[0].attr_texId = 76;
			matlist_00110184[1].attr_texId = 76;
			matlist_00110DFC[0].attr_texId = 76;
			matlist_0011B12C[0].attr_texId = 76;
			matlist_0011B12C[1].attr_texId = 76;
		}
		if (LevelFrameCount % 60 == 52)
		{
			matlist_00117310[0].attr_texId = 62;
			matlist_0011784C[0].attr_texId = 62;
			matlist_00117C5C[0].attr_texId = 62;
			matlist_00118030[0].attr_texId = 62;
			matlist_0011829C[0].attr_texId = 62;
			matlist_00118544[0].attr_texId = 62;
			matlist_001187B0[0].attr_texId = 62;
			matlist_00118A94[0].attr_texId = 62;
			matlist_00118D94[0].attr_texId = 62;
			matlist_000E5260[3].attr_texId = 77;
			matlist_000E611C[3].attr_texId = 77;
			matlist_000E71EC[0].attr_texId = 77;
			matlist_000E97EC[2].attr_texId = 77;
			matlist_000EA520[2].attr_texId = 77;
			matlist_000EB0E0[0].attr_texId = 77;
			matlist_000EF7E4[0].attr_texId = 77;
			matlist_000EF7E4[2].attr_texId = 77;
			matlist_000F8F6C[0].attr_texId = 77;
			matlist_000F95F0[0].attr_texId = 77;
			matlist_000F9D10[0].attr_texId = 77;
			matlist_000F9D10[1].attr_texId = 77;
			matlist_000FB004[0].attr_texId = 77;
			matlist_000FB004[1].attr_texId = 77;
			matlist_000FEE58[0].attr_texId = 77;
			matlist_000FF3A0[0].attr_texId = 77;
			matlist_000FFD48[0].attr_texId = 77;
			matlist_00101320[0].attr_texId = 77;
			matlist_00101E9C[0].attr_texId = 77;
			matlist_0010280C[0].attr_texId = 77;
			matlist_001033A8[0].attr_texId = 77;
			matlist_00103DC8[0].attr_texId = 77;
			matlist_00104920[0].attr_texId = 77;
			matlist_00105630[0].attr_texId = 77;
			matlist_00108120[0].attr_texId = 77;
			matlist_0010C7F4[0].attr_texId = 77;
			matlist_0010D618[0].attr_texId = 77;
			matlist_0010E304[0].attr_texId = 77;
			matlist_0010F148[0].attr_texId = 77;
			matlist_00110184[0].attr_texId = 77;
			matlist_00110184[1].attr_texId = 77;
			matlist_00110DFC[0].attr_texId = 77;
			matlist_0011B12C[0].attr_texId = 77;
			matlist_0011B12C[1].attr_texId = 77;
		}
		if (LevelFrameCount % 60 == 56)
		{
			matlist_00117310[0].attr_texId = 63;
			matlist_0011784C[0].attr_texId = 63;
			matlist_00117C5C[0].attr_texId = 63;
			matlist_00118030[0].attr_texId = 63;
			matlist_0011829C[0].attr_texId = 63;
			matlist_00118544[0].attr_texId = 63;
			matlist_001187B0[0].attr_texId = 63;
			matlist_00118A94[0].attr_texId = 63;
			matlist_00118D94[0].attr_texId = 63;
			matlist_000E5260[3].attr_texId = 78;
			matlist_000E611C[3].attr_texId = 78;
			matlist_000E71EC[0].attr_texId = 78;
			matlist_000E97EC[2].attr_texId = 78;
			matlist_000EA520[2].attr_texId = 78;
			matlist_000EB0E0[0].attr_texId = 78;
			matlist_000EF7E4[0].attr_texId = 78;
			matlist_000EF7E4[2].attr_texId = 78;
			matlist_000F8F6C[0].attr_texId = 78;
			matlist_000F95F0[0].attr_texId = 78;
			matlist_000F9D10[0].attr_texId = 78;
			matlist_000F9D10[1].attr_texId = 78;
			matlist_000FB004[0].attr_texId = 78;
			matlist_000FB004[1].attr_texId = 78;
			matlist_000FEE58[0].attr_texId = 78;
			matlist_000FF3A0[0].attr_texId = 78;
			matlist_000FFD48[0].attr_texId = 78;
			matlist_00101320[0].attr_texId = 78;
			matlist_00101E9C[0].attr_texId = 78;
			matlist_0010280C[0].attr_texId = 78;
			matlist_001033A8[0].attr_texId = 78;
			matlist_00103DC8[0].attr_texId = 78;
			matlist_00104920[0].attr_texId = 78;
			matlist_00105630[0].attr_texId = 78;
			matlist_00108120[0].attr_texId = 78;
			matlist_0010C7F4[0].attr_texId = 78;
			matlist_0010D618[0].attr_texId = 78;
			matlist_0010E304[0].attr_texId = 78;
			matlist_0010F148[0].attr_texId = 78;
			matlist_00110184[0].attr_texId = 78;
			matlist_00110184[1].attr_texId = 78;
			matlist_00110DFC[0].attr_texId = 78;
			matlist_0011B12C[0].attr_texId = 78;
			matlist_0011B12C[1].attr_texId = 78;
		}
	}
	}
}
extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };

