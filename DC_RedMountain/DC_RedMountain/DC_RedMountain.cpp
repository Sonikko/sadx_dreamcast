#include "stdafx.h"
#include "SADXModLoader.h"
#include "Mountain1.h"
#include "Mountain2.h"
#include "Mountain3.h"
#include "Skull.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DAA8, &landtable_00018CB8),
	ptrdecl(0x97DAAC, &landtable_0001A8FC),
	ptrdecl(0x97DAB0, &landtable_0001E358)
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		memcpy((void*)0x024364C0, &attach_0014E8FC, sizeof(attach_0014E8FC));  // Skull
	}

}