#include "stdafx.h"
#include "SADXModLoader.h"
#include "Mountain1.h"
#include "Mountain2.h"
#include "Mountain3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DAA8, &landtable_00018CB8),
	ptrdecl(0x97DAAC, &landtable_0001A8FC),
	ptrdecl(0x97DAB0, &landtable_0001E358)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };
