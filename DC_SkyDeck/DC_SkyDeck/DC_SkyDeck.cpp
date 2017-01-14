#include "stdafx.h"
#include "SADXModLoader.h"
#include "SkyDeck1.h"
#include "SkyDeck2.h"
#include "SkyDeck3.h"
#include "SkyDeck_objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DAC8, &landtable_0001F018),
	ptrdecl(0x97DACC, &landtable_00021094),
	ptrdecl(0x97DAD0, &landtable_00023EB4)
};

DataPointer(float, SkyDeckAltitude, 0x03C80610); //0 to 700
DataPointer(float, CurrentSkyBoxScaleX, 0x03ABDC94);
DataPointer(float, CurrentSkyBoxScaleY, 0x03ABDC98);
DataPointer(float, CurrentSkyBoxScaleZ, 0x03ABDC9C);
DataPointer(NJS_VECTOR, SkyDeck_SkyPosition, 0x03C7F038);
DataPointer(NJS_COLOR, CurrentFogColor, 0x03ABDC68);

extern "C" __declspec(dllexport) void cdecl Init()
{
	((NJS_OBJECT *)0x214BF20)->basicdxmodel->meshsets->vertuv = uv_01D4E2F4_2;
	((NJS_OBJECT *)0x214E3AC)->basicdxmodel->meshsets->vertuv = uv_01D4E2F4_3;
	*(NJS_OBJECT *)0x214FB74 = object_000FF4A4; //Cannon in Act 1
	*(NJS_OBJECT *)0x2161F68 = object_0010EB4C; //Cannon in Act 2
	WriteData((NJS_OBJECT**)0x005ED3AC, (NJS_OBJECT*)&object_01D4BF20); //sky normal
	WriteData((NJS_OBJECT**)0x005ED3A5, (NJS_OBJECT*)&object_01D4E3AC_2); //sky dark top 2 
	WriteData((NJS_OBJECT**)0x005ED46D, (NJS_OBJECT*)&object_01D4E3AC); //sky dark top 1
	WriteData((NJS_OBJECT**)0x005ED4FC, (NJS_OBJECT*)&object_01D4E3AC); //sky dark bottom 1 
	ResizeTextureList((NJS_TEXLIST*)0x20E0BB0, textures_skydeck1);
	//ResizeTextureList((NJS_TEXLIST*)0x20AA63C, textures_skydeck2);
	ResizeTextureList((NJS_TEXLIST*)0x203ACE0, textures_skydeck3);
	DataArray(FogData, SkyDeck1Fog, 0x0203A094, 3);
	DataArray(FogData, SkyDeck2Fog, 0x0203A0C4, 3);
	DataArray(FogData, SkyDeck3Fog, 0x0203A0F4, 3);
	DataArray(SkyboxScale, SkyDeck3SkyboxScale, 0x02039FE0, 3);
	DataArray(DrawDistance, SkyDeck1DrawDist, 0x0203A04C, 3);
	DataArray(DrawDistance, SkyDeck2DrawDist, 0x0203A064, 3);
	DataArray(DrawDistance, SkyDeck3DrawDist, 0x0203A07C, 3);
	for (int i = 0; i < 3; i++)
	{
		SkyDeck1Fog[i].Layer = 4000.0f;
		SkyDeck1Fog[i].Distance = 12000.0f;
		SkyDeck2Fog[i].Layer = 4000.0f;
		SkyDeck2Fog[i].Distance = 12000.0f;
		SkyDeck3Fog[i].Layer = 4000.0f;
		SkyDeck3Fog[i].Distance = 12000.0f;
		SkyDeck1DrawDist[i].Maximum = -20000.0f;
		SkyDeck2DrawDist[i].Maximum = -20000.0f;
		SkyDeck3DrawDist[i].Maximum = -16000.0f;
	}
}

extern "C" __declspec(dllexport) void cdecl OnFrame()
{
	if (CurrentLevel == 6 && CurrentAct == 2)
	{
		CurrentSkyBoxScaleX = 1.0f;
		CurrentSkyBoxScaleY = 1.0f;
		CurrentSkyBoxScaleZ = 1.0f;
	}
	if (CurrentLevel == 6 && GameState != 16)
	{
		if (SkyDeckAltitude >= 300.0f)
		{
			CurrentFogColor.argb.r = 80;
			CurrentFogColor.argb.g = 80;
			CurrentFogColor.argb.b = 112;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r = 0;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.g = 0;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.b = 0;
		}
		if (SkyDeckAltitude < 300.0f)
		{
			CurrentFogColor.argb.r = 104;
			CurrentFogColor.argb.g = 104;
			CurrentFogColor.argb.b = 128;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r = 178;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.g = 178;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.b = 178;
		}
		for (int q = 0; q < LengthOfArray(uv_01D4BE68); q++)
		{
			uv_01D4BE68[q].u = uv_01D4BE68[q].u - 2;
			uv_01D4E2F4[q].u = uv_01D4E2F4[q].u - 2;
			uv_01D4E2F4_2[q].u = uv_01D4E2F4_2[q].u - 4;
			uv_01D4E2F4_3[q].u = uv_01D4E2F4_3[q].u - 4;
		}
		if (uv_01D4E2F4_2[0].u <= 0) uv_01D4E2F4_2[0].u = 2040;
		if (uv_01D4E2F4_2[1].u <= 0) uv_01D4E2F4_2[1].u = 2040;
		if (uv_01D4E2F4_2[2].u <= -2040) uv_01D4E2F4_2[2].u = 0;
		if (uv_01D4E2F4_2[3].u <= -2040) uv_01D4E2F4_2[3].u = 0;
		if (uv_01D4E2F4_3[0].u <= 0) uv_01D4E2F4_3[0].u = 2040;
		if (uv_01D4E2F4_3[1].u <= 0) uv_01D4E2F4_3[1].u = 2040;
		if (uv_01D4E2F4_3[2].u <= -2040) uv_01D4E2F4_3[2].u = 0;
		if (uv_01D4E2F4_3[3].u <= -2040) uv_01D4E2F4_3[3].u = 0;
		if (uv_01D4BE68[0].u <= 0) uv_01D4BE68[0].u = 2040;
		if (uv_01D4BE68[1].u <= 0) uv_01D4BE68[1].u = 2040;
		if (uv_01D4BE68[2].u <= -2040) uv_01D4BE68[2].u = 0;
		if (uv_01D4BE68[3].u <= -2040) uv_01D4BE68[3].u = 0;
		if (uv_01D4E2F4[0].u <= 0) uv_01D4E2F4[0].u = 2040;
		if (uv_01D4E2F4[1].u <= 0) uv_01D4E2F4[1].u = 2040;
		if (uv_01D4E2F4[2].u <= -2040) uv_01D4E2F4[2].u = 0;
		if (uv_01D4E2F4[3].u <= -2040) uv_01D4E2F4[3].u = 0;
	}
}

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };


