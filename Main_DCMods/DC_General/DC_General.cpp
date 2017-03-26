#include "stdafx.h"
#include <SADXModLoader.h>
#include "Animals.h"
#include "Itembox.h"
static PointerInfo jumps[] = {
	// ItemBox
	{ ItemBox_Display_Destroyed,	ItemBox_Display_Destroyed_Rotate },
	{ ItemBox_Display_Unknown,		ItemBox_Display_Unknown_Rotate },
	{ ItemBox_Display,				ItemBox_Display_Rotate },
};

extern "C"
{
	__declspec(dllexport) PointerList Jumps[] = { { arrayptrandlength(jumps) } };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		//Item capsule lighting fixes
		((NJS_MODEL*)0x008BF260)->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BF260)->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BF260)->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BF260)->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BEAA8)->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BE620)->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BE620)->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //end
		WriteData((char*)0x004D7712, 2, 1); //Animal bubble blending mode
		//ResizeTextureList((NJS_TEXLIST*)0x0092ACE4, 5); //GOMA texlist
		//*(NJS_OBJECT*)0x92A2D0 = object_00157760; //GOMA
		//*(NJS_ACTION*)0x949FCC = action__158830; //GOMA animation
		//*(NJS_OBJECT*)0x949104 = object_0017CDE0; //RAKO
		//*(NJS_ACTION*)0x94A03C = action__17E5E0; //RAKO animation
		//*(NJS_OBJECT*)0x942F90 = object_0017579C; //LION
		//*(NJS_ACTION*)0x94A024 = action__17725C; //LION animation
	}
}