#include "stdafx.h"
#include "Highway1.h"
#include "Highway2.h"
#include "Highway3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA88, &landtable_0001853C),
	ptrdecl(0x97DA8C, &landtable_00019178),
	ptrdecl(0x97DA90, &landtable_0001B08C)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };

