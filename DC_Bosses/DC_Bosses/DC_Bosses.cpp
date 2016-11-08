#include "stdafx.h"
#include "SADXModLoader.h"
#include "Chaos4.h"
#include "Chaos6_Sonic.h"
#include "EggWalker.h"
#include "EggViper.h"
#include "EggHornet.h"
#include "Chaos7.h"

PointerInfo pointers[] = {
	//ptrdecl(0x7D1CD6, &landtable_00000238),
	//ptrdecl(0x7D1CEC, &landtable_00000318)
	ptrdecl(0x7D1D32, &landtable_0000022C), // Egg Walker
	ptrdecl(0x7D1D48, &landtable_000580F4), // Egg Viper
//	ptrdecl(0x7D1D1C, &landtable_00000128)
	//ptrdecl(0x7D1D06, &landtable_0102478C) //Chaos 7
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };


