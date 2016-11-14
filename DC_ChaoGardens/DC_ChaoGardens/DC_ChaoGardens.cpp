#include "stdafx.h"
#include "SADXModLoader.h"
#include "SSGarden.h"
#include "ECGarden.h"

PointerInfo pointers[] = {
	ptrdecl(0x719619, &landtable_0300E738), //SS
	ptrdecl(0x7191E9, &landtable_03005E54) //EC
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };
