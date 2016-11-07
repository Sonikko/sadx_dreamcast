#include "stdafx.h"
#include "SADXModLoader.h"
#include "ChaoRace.h"
#include "ChaoRaceEntry.h"
PointerInfo pointers[] = {
	ptrdecl(0x719DC9, &landtable_00000E64),
	ptrdecl(0x7199C9, &landtable_00000270)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };


