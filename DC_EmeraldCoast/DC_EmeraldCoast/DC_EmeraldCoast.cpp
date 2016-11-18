#include "stdafx.h"
#include "SADXModLoader.h"
#include "EmeraldCoast1_PC.h"
#include "EmeraldCoast1.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA28, &landtable_00081554)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };

