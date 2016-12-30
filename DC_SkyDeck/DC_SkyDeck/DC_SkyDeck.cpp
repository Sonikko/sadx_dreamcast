#include "stdafx.h"
#include "SADXModLoader.h"
#include "SkyDeck1.h"
#include "SkyDeck2.h"
#include "SkyDeck3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DAC8, &landtable_0001F018),
	ptrdecl(0x97DACC, &landtable_00021094),
	ptrdecl(0x97DAD0, &landtable_00023EB4)
};

extern "C" __declspec(dllexport) void cdecl Init()
{
	/*((NJS_OBJECT *)0x21FE8EC)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Decal
	((NJS_OBJECT *)0x21FE9F8)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Decal
	((NJS_OBJECT *)0x21FEB04)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Decal
	((NJS_OBJECT *)0x21FEC10)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Decal
	((NJS_OBJECT *)0x21FED1C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Decal
	((NJS_OBJECT *)0x21FEE28)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Decal
	((NJS_OBJECT *)0x21FEF34)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Decal
	((NJS_OBJECT *)0x21FF040)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Decal*/
	ResizeTextureList((NJS_TEXLIST*)0x20E0BB0, textures_skydeck1);
	//ResizeTextureList((NJS_TEXLIST*)0x20AA63C, textures_skydeck2);
	ResizeTextureList((NJS_TEXLIST*)0x203ACE0, textures_skydeck3);
	DataArray(FogData, SkyDeck1Fog, 0x0203A094, 3);
	DataArray(FogData, SkyDeck2Fog, 0x0203A0C4, 3);
	DataArray(FogData, SkyDeck3Fog, 0x0203A0F4, 3);
	for (int i = 0; i < 3; i++)
	{
		SkyDeck1Fog[i].Layer = 2500.0f;
		SkyDeck1Fog[i].Distance = 8000.0f;
		SkyDeck2Fog[i].Layer = 2500.0f;
		SkyDeck2Fog[i].Distance = 6000.0f;
		SkyDeck3Fog[i].Layer = 4000.0f;
		SkyDeck3Fog[i].Distance = 12000.0f;
	}
}

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };


