#include "stdafx.h"
#include "SADXModLoader.h"
#include "HotShelter1.h"
#include "HotShelter2.h"
#include "HotShelter3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB88, &landtable_0001970C),
	ptrdecl(0x97DB8C, &landtable_0005277C),
	ptrdecl(0x97DB90, &landtable_000B0DA4)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };

