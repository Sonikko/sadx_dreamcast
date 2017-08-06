#include "stdafx.h"
#include <SADXModLoader.h>
#include "Palm.h"
#include "ADV03_00_PC.h"
#include "ADV03_00.h"
#include "ADV03_01.h"
#include "ADV03_02.h"
#include <lanternapi.h>

HMODULE Past = GetModuleHandle(L"ADV03MODELS");

DataPointer(int, FramerateSetting, 0x0389D7DC);
static int animframe1 = 75;
static int animframe2 = 72;
static int animframe3 = 59;
static char animframe_water = 84;
static char animframe_water2 = 86;

NJS_MATERIAL* SecondCharacterSpecular[] = {
	//Chao
	(NJS_MATERIAL*)((size_t)Past + 0x0013CA54),
};

NJS_MATERIAL* FirstCharacterSpecular[] = {
	//Tikal
	(NJS_MATERIAL*)((size_t)Past + 0x001602E0),
	(NJS_MATERIAL*)((size_t)Past + 0x001602F4),
	(NJS_MATERIAL*)((size_t)Past + 0x00160308),
	(NJS_MATERIAL*)((size_t)Past + 0x0016031C),
	(NJS_MATERIAL*)((size_t)Past + 0x001604B8),
	(NJS_MATERIAL*)((size_t)Past + 0x001604CC),
	(NJS_MATERIAL*)((size_t)Past + 0x00160668),
	(NJS_MATERIAL*)((size_t)Past + 0x0016088C),
	(NJS_MATERIAL*)((size_t)Past + 0x00160BD4),
	(NJS_MATERIAL*)((size_t)Past + 0x00160E2C),
	(NJS_MATERIAL*)((size_t)Past + 0x0016108C),
	(NJS_MATERIAL*)((size_t)Past + 0x0016126C),
	(NJS_MATERIAL*)((size_t)Past + 0x001614C4),
	(NJS_MATERIAL*)((size_t)Past + 0x0016180C),
	(NJS_MATERIAL*)((size_t)Past + 0x00161A54),
	(NJS_MATERIAL*)((size_t)Past + 0x00161CC4),
	(NJS_MATERIAL*)((size_t)Past + 0x00161EA4),
	(NJS_MATERIAL*)((size_t)Past + 0x001623FC),
	(NJS_MATERIAL*)((size_t)Past + 0x00162410),
	(NJS_MATERIAL*)((size_t)Past + 0x00162424),
	(NJS_MATERIAL*)((size_t)Past + 0x0016268C),
	(NJS_MATERIAL*)((size_t)Past + 0x001628F4),
	(NJS_MATERIAL*)((size_t)Past + 0x00164858),
	(NJS_MATERIAL*)((size_t)Past + 0x0016486C),
	(NJS_MATERIAL*)((size_t)Past + 0x00164880),
	(NJS_MATERIAL*)((size_t)Past + 0x00164894),
	(NJS_MATERIAL*)((size_t)Past + 0x001648A8),
	(NJS_MATERIAL*)((size_t)Past + 0x00164FD4),
	(NJS_MATERIAL*)((size_t)Past + 0x001651DC),
	(NJS_MATERIAL*)((size_t)Past + 0x001653E4),
	(NJS_MATERIAL*)((size_t)Past + 0x0016568C),
	(NJS_MATERIAL*)((size_t)Past + 0x00166268),
	(NJS_MATERIAL*)((size_t)Past + 0x00166548),
	(NJS_MATERIAL*)((size_t)Past + 0x0016680C),
	(NJS_MATERIAL*)((size_t)Past + 0x00166C58),
	(NJS_MATERIAL*)((size_t)Past + 0x00166C6C),
	(NJS_MATERIAL*)((size_t)Past + 0x00166EB4),
	(NJS_MATERIAL*)((size_t)Past + 0x00166EC8),
	(NJS_MATERIAL*)((size_t)Past + 0x00167104),
	(NJS_MATERIAL*)((size_t)Past + 0x00167C28),
	(NJS_MATERIAL*)((size_t)Past + 0x00167F08),
	(NJS_MATERIAL*)((size_t)Past + 0x001681BC),
	(NJS_MATERIAL*)((size_t)Past + 0x001685F8),
	(NJS_MATERIAL*)((size_t)Past + 0x0016860C),
	(NJS_MATERIAL*)((size_t)Past + 0x00168854),
	(NJS_MATERIAL*)((size_t)Past + 0x00168868),
	(NJS_MATERIAL*)((size_t)Past + 0x00168A94),
	(NJS_MATERIAL*)((size_t)Past + 0x00168C8C),
	//Chao
	(NJS_MATERIAL*)((size_t)Past + 0x0013C668),
	(NJS_MATERIAL*)((size_t)Past + 0x0013C190),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BCB8),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BB7C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BA40),
	(NJS_MATERIAL*)((size_t)Past + 0x0013B6F0),
	(NJS_MATERIAL*)((size_t)Past + 0x0013B184),
	(NJS_MATERIAL*)((size_t)Past + 0x0013ADEC),
	(NJS_MATERIAL*)((size_t)Past + 0x0013AA54),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A94C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A4DC),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A068),
	(NJS_MATERIAL*)((size_t)Past + 0x0013CA54),
	(NJS_MATERIAL*)((size_t)Past + 0x0013C668),
	(NJS_MATERIAL*)((size_t)Past + 0x0013C190),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BCB8),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BB7C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013BA40),
	(NJS_MATERIAL*)((size_t)Past + 0x0013B6F0),
	(NJS_MATERIAL*)((size_t)Past + 0x0013B184),
	(NJS_MATERIAL*)((size_t)Past + 0x0013ADEC),
	(NJS_MATERIAL*)((size_t)Past + 0x0013AA54),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A94C),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A4DC),
	(NJS_MATERIAL*)((size_t)Past + 0x0013A068),
};

bool ForceSecondCharacterSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(3, false);
	use_default_diffuse(true);
	return true;
}

bool ForceFirstCharacterSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(2, false);
	use_default_diffuse(true);
	return true;
}

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"ADV03MODELS");
	HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	if (handle != nullptr && Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
	{
		material_register(FirstCharacterSpecular, LengthOfArray(FirstCharacterSpecular), &ForceFirstCharacterSpecular);
		material_register(SecondCharacterSpecular, LengthOfArray(SecondCharacterSpecular), &ForceSecondCharacterSpecular);
	}
	if (SADXStyleWater != 0)
	{
		texlist_past01.nbTexture = 101;
		texlist_past02.nbTexture = 103;
		WriteData((char*)0x0054287B, 0x56, 1); // wave texture ID act 2
		WriteData((char*)0x00542880, 0x63, 1); // water texture ID act 2
		WriteData((char*)0x005428A0, 0x56, 1); // wave texture ID act 3
		WriteData((char*)0x005428A5, 0x65, 1); // water texture ID act 3
		collist_0006735C[0].Flags = 0x00000020;
		collist_000976C0[0].Flags = 0x00000020;
		landtable_0000029C.TexName = "PAST01W";
		landtable_000002C0.TexName = "PAST02W";
	}
	else
	{
		WriteData((void*)0x542850, 0xC3u, sizeof(char));
		collist_0006735C[0].Flags = 0x80000020;
		collist_000976C0[0].Flags = 0x80000020;
		landtable_0000029C.TexName = "PAST01";
		landtable_000002C0.TexName = "PAST02";
	}
	DataArray(DrawDistance, DrawDist_Past1, 0x0111E540, 3);
	DataArray(DrawDistance, DrawDist_Past2, 0x0111E558, 3);
	DataArray(DrawDistance, DrawDist_Past3, 0x0111E570, 3);
	DataArray(FogData, FogData_Past1, 0x0111E588, 3);
	DataArray(FogData, FogData_Past2, 0x0111E5B8, 3);
	DataArray(FogData, FogData_Past3, 0x0111E5E8, 3);
	for (int i = 0; i < 3; i++)
	{
		FogData_Past1[i].Layer = -12000.0f;
		FogData_Past1[i].Distance = -12000.0f;
		FogData_Past2[i].Layer = -12000.0f;
		FogData_Past2[i].Distance = -12000.0f;
		FogData_Past3[i].Layer = -12000.0f;
		FogData_Past3[i].Distance = -12000.0f;
		DrawDist_Past1[i].Maximum = -12000.0f;
		DrawDist_Past2[i].Maximum = -16000.0f;
		DrawDist_Past3[i].Maximum = -16000.0f;
	}
	NJS_TEXLIST **___ADV03_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle, "___ADV03_TEXLISTS");
	___ADV03_TEXLISTS[4] = &texlist_past0;
	___ADV03_TEXLISTS[5] = &texlist_past01;
	___ADV03_TEXLISTS[6] = &texlist_past02;
	LandTable **___LANDTABLEPAST = (LandTable **)GetProcAddress(handle, "___LANDTABLEPAST");
	___LANDTABLEPAST[0] = &landtable_00000278;
	___LANDTABLEPAST[1] = &landtable_0000029C;
	___LANDTABLEPAST[2] = &landtable_000002C0;
	NJS_OBJECT **___ADV03PAST01_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03PAST01_OBJECTS");
	//___ADV03PAST01_OBJECTS[211] = &object_000953F8; //water 1
	//___ADV03PAST01_OBJECTS[212] = &object_0009566C; //water 2
	___ADV03PAST01_OBJECTS[213] = &object_00095CC4;
	//___ADV03PAST01_OBJECTS[214] = &object_0009609C; //water 3
	NJS_OBJECT **___ADV03PAST02_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03PAST02_OBJECTS");
	___ADV03PAST02_OBJECTS[212] = &object_000C7BE4;
	___ADV03PAST02_OBJECTS[209] = &object_000C6F40;
	___ADV03PAST02_OBJECTS[210] = &object_000C71B4;
	___ADV03PAST02_OBJECTS[211] = &object_000FB49C;
	NJS_OBJECT **___ADV03_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___ADV03_OBJECTS");
	___ADV03_OBJECTS[16] = &object_0001EDDC; //tree 16
	___ADV03_OBJECTS[17] = &object_0001EDDC; //tree 17
	___ADV03_OBJECTS[15] = &object_00027158; //small tree shadow
	___ADV03_OBJECTS[18] = &object_00027054; //well shadow
}

extern "C" __declspec(dllexport) void __cdecl OnFrame()
{
	if (CurrentLevel == 34 && CurrentAct == 1 && GameState != 16)
	{
		if (animframe2 > 82) animframe2 = 73;
		if (animframe3 > 72) animframe3 = 59;
		if (animframe_water > 98)animframe_water = 84;
		matlist_0006DBD0[0].attr_texId = animframe2;
		matlist_00095CF8[0].attr_texId = animframe3;
		matlist_000950C4[0].attr_texId = animframe3;
		matlist_0009542C[0].attr_texId = animframe3;
		WriteData((char*)0x0054287B, animframe_water, 1);
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
		{
			animframe2++;
			animframe3++;
		}
		if (FramerateSetting < 2 && FrameCounter % 5 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2 ) animframe_water++;
	}
	if (CurrentLevel == 34 && CurrentAct == 2 && GameState != 16)
	{
		if (animframe1 > 84) animframe1 = 75;
		if (animframe_water2 > 100) animframe_water2 = 86;
		matlist_0009DEBC[0].attr_texId = animframe1;
		WriteData((char*)0x005428A0, animframe_water2, 1);
		if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) animframe1++;
		if (FramerateSetting < 2 && FrameCounter % 5 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) animframe_water2++;
	}
}
extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };