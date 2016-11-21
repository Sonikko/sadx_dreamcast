#include "stdafx.h"
#include "SADXModLoader.h"
#include "EmeraldCoast1_PC.h"
#include "EmeraldCoast1.h"
#include "EmeraldCoast2.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA28, &landtable_00081554),
	ptrdecl(0x97DA2C, &landtable_000DEB60)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
//extern "C" __declspec(dllexport) void __cdecl Init()

//{
//	memcpy((void*)0x00F97050, &matlist_00B97050, sizeof(matlist_00B97050));
//}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };

