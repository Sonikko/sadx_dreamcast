#include "stdafx.h"
#include "SADXModLoader.h"
#include "IceCap1.h"
#include "IceCap2.h"
#include "IceCap3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB08, &landtable_00014B44),
	ptrdecl(0x97DB0C, &landtable_00015714),
	ptrdecl(0x97DB10, &landtable_000180B4)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };
