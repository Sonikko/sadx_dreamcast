#include "stdafx.h"
#include "SADXModLoader.h"
#include "Chaos4.h"
#include "Chaos6_Sonic.h"

PointerInfo pointers[] = {
	ptrdecl(0x7D1CD6, &landtable_00000238),
	ptrdecl(0x7D1CEC, &landtable_00000318)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };


