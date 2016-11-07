// DC_WindyValley.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SADXModLoader.h"
#include "windy1.h"
#include "windy2.h"
#include "windy3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA48, &landtable_0000D7E0),
	ptrdecl(0x97DA4C, &landtable_0000DB40),
	ptrdecl(0x97DA50, &landtable_0000F274),
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };