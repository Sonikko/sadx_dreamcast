#include "stdafx.h"
#include "SADXModLoader.h"
#include "FinalEgg1.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB48, &landtable_0001D108)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };



