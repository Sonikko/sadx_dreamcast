#include "stdafx.h"
#include "SADXModLoader.h"
#include "EggWalker.h"
#include "EggViper.h"
#include "Chaos2.h"
#include "Chaos4.h"
#include "Chaos6_Act1.h"
#include "Chaos6_Act1_PC.h"
#include "Chaos6_Act2.h"

PointerInfo pointers[] = {
	//ptrdecl(0x7D1CC0, &landtable_00D2136C), //Chaos 2
	ptrdecl(0x7D1CD6, &landtable_00000238), //Chaos 4
	ptrdecl(0x7D1CEC, &landtable_00DEDE38), //Chaos 6 Act 1
	ptrdecl(0x7D1CF6, &landtable_0000033C), //Chaos 6 Act 2
	ptrdecl(0x7D1D32, &landtable_0000022C), // Egg Walker
	ptrdecl(0x7D1D48, &landtable_000580F4), // Egg Viper
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };