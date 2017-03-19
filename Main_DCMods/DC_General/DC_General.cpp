#include "stdafx.h"
#include <SADXModLoader.h>
#include "Animals.h"

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		ResizeTextureList((NJS_TEXLIST*)0x0092ACE4, 5); //GOMA texlist
		*(NJS_OBJECT*)0x92A2D0 = object_00157760; //GOMA
		*(NJS_ACTION*)0x949FCC = action__158830; //GOMA animation
		*(NJS_OBJECT*)0x949104 = object_0017CDE0; //RAKO
		*(NJS_ACTION*)0x94A03C = action__17E5E0; //RAKO animation
		*(NJS_OBJECT*)0x942F90 = object_0017579C; //LION
		*(NJS_ACTION*)0x94A024 = action__17725C; //LION animation
	}
}