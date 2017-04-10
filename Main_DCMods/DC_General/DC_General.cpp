#include "stdafx.h"
#include <SADXModLoader.h>
#include "Animals.h"
#include "Itembox.h"
#include "EmeShard.h"

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
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Question mark from Character Select
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; //Question mark from Character Select
		//Item capsule lighting fixes
		((NJS_MODEL*)0x008BF260)->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BF260)->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BF260)->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BF260)->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BEAA8)->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BE620)->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BE620)->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //end
		//((NJS_OBJECT*)0x008BE194)->basicdxmodel->mats[0].diffuse.argb.a = 0xB2; //Balloon transparency
		//((NJS_OBJECT*)0x008BE194)->basicdxmodel->mats[1].diffuse.argb.a = 0xB2; //Balloon transparency
		WriteData((char*)0x004D7712, 2, 1); //Animal bubble blending mode
		WriteData((char*)0x004A2DBB, 1, 1); //Emerald piece blending mode
		*(NJS_OBJECT*)0x008BA6D4 = object_0019BC48; //Emerald piece
		//ResizeTextureList((NJS_TEXLIST*)0x0092ACE4, 5); //GOMA texlist
		//*(NJS_OBJECT*)0x92A2D0 = object_00157760; //GOMA
		//*(NJS_ACTION*)0x949FCC = action__158830; //GOMA animation
		//*(NJS_OBJECT*)0x949104 = object_0017CDE0; //RAKO
		//*(NJS_ACTION*)0x94A03C = action__17E5E0; //RAKO animation
		//*(NJS_OBJECT*)0x942F90 = object_0017579C; //LION
		//*(NJS_ACTION*)0x94A024 = action__17725C; //LION animation
	}
}