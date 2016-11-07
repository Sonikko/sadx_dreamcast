#include "stdafx.h"
#include "SADXModLoader.h"
#include "SkyDeck1.h"
#include "SkyDeck2.h"
#include "SkyDeck3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DAC8, &landtable_0001F018),
	ptrdecl(0x97DACC, &landtable_00021094),
	ptrdecl(0x97DAD0, &landtable_00023EB4)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };


