#include "stdafx.h"

static bool perform_override = false;

// The ingame function is actually __thiscall not __fastcall, but it
// only has one parameter, so we can get away with __fastcall.
static void __fastcall Direct3D_ParseMaterial_r(NJS_MATERIAL* material);
static Trampoline Direct3D_ParseMaterial_t(0x00784850, 0x00784858, Direct3D_ParseMaterial_r);
static void __fastcall Direct3D_ParseMaterial_r(NJS_MATERIAL* material)
{
	if (perform_override && material != nullptr)
	{
		Uint32& diffuse = material->diffuse.color;
		Uint32& specular = material->specular.color;

		diffuse = (diffuse & 0xFF000000) | 0x00B2B2B2;
		specular = (specular & 0xFF000000) | 0x00B2B2B2;
	}

	auto original = (decltype(Direct3D_ParseMaterial_r)*)Direct3D_ParseMaterial_t.Target();
	original(material);
}

static void __cdecl DrawLandTable_r();
static Trampoline DrawLandTable_t(0x0043A6A0, 0x0043A6A8, DrawLandTable_r);
static void __cdecl DrawLandTable_r()
{
	perform_override = false;

	auto original = (decltype(DrawLandTable_r)*)DrawLandTable_t.Target();
	original();

	perform_override = true;
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}
