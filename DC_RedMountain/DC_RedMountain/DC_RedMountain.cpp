#include "stdafx.h"
#include "SADXModLoader.h"
#include "Mountain1.h"
#include "Mountain2.h"
#include "Mountain3.h"
#include "RM_Objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DAA8, &landtable_00018CB8),
	ptrdecl(0x97DAAC, &landtable_0001A8FC),
	ptrdecl(0x97DAB0, &landtable_0001E358)
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		*(NJS_OBJECT*)0x246CAA8 = object_0206CAA8_2;
		WriteData((NJS_OBJECT**)0x006011CC, (NJS_OBJECT*)&object_0206CAA8);
		ResizeTextureList((NJS_TEXLIST*)0x230FDF4, textures_mountain1);
		ResizeTextureList((NJS_TEXLIST*)0x229B8CC, textures_mountain2);
		ResizeTextureList((NJS_TEXLIST*)0x224096C, textures_mountain3);
		DataArray(FogData, RedMountain1Fog, 0x02240700, 3);
		DataArray(FogData, RedMountain3Fog, 0x02240760, 3);
		DataArray(DrawDistance, DrawDist_RedMountain1, 0x022406B8, 3);
		DataArray(DrawDistance, DrawDist_RedMountain3, 0x022406E8, 3);
		for (int i = 0; i < 3; i++)
		{
			RedMountain1Fog[i].Color = 0xFFFFFFFF;
			RedMountain1Fog[i].Layer = 2000.0f;
			RedMountain1Fog[i].Distance = 16000.0f;
			RedMountain1Fog[i].Toggle = 1;
			RedMountain3Fog[i].Color = 0xFFFFFFFF;
			RedMountain3Fog[i].Layer = 2000.0f;
			RedMountain3Fog[i].Distance = 16000.0f;
			RedMountain3Fog[i].Toggle = 1;
			DrawDist_RedMountain1[i].Maximum = -16000.0;
			DrawDist_RedMountain3[i].Maximum = -16000.0;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (GameState != 16)
		{
			for (int q = 0; q < LengthOfArray(uv_0206C9F0); q++)
			{
				uv_0206C9F0[q].u = uv_0206C9F0[q].u - 1;
			}
		}
			
		if (uv_0206C9F0[0].u >= 765)
		{
			uv_0206C9F0[0].u = 0;
			uv_0206C9F0[0].u = 0;
			uv_0206C9F0[0].u = 765;
			uv_0206C9F0[0].u = 765;
		}
	}
}