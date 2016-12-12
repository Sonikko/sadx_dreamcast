#include "stdafx.h"
#include "SADXModLoader.h"
#include "SH_bus.h"
#include "SH_yellowcar.h"
#include "SH_bluecar.h"
#include "SH_redcar.h"
#include "SH_helicopter.h"
#include "SH_turnasi.h"
#include "icicle.h"
#include "SS_bluecar.h"
#include "SS_redcar.h"
#include "SS_police.h"
#include "SS_taxi.h"
#include "SH_glass.h"

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };

	__declspec(dllexport) void __cdecl Init()
	{
		memcpy((void*)0x0E537D8, &object_00162694, sizeof(object_00162694));  // Icicle
		memcpy((void*)0x267DC14, &object_0227DC14, sizeof(object_0227DC14)); // Turnasi part 1
		memcpy((void*)0x267D3B4, &object_0014ABC8, sizeof(object_0014ABC8)); // Turnasi part 2
		memcpy((void*)0x267C7AC, &object_0014A5B0, sizeof(object_0014A5B0)); // Turnasi part 3
		memcpy((void*)0x0268C058, &object_0228C058, sizeof(object_0228C058)); // SH Helicopter
		memcpy((void*)0x0266D90C, &object_0013D068, sizeof(object_0013D068)); // SH Bus
		memcpy((void*)0x0266B484, &object_0013B15C, sizeof(object_0013B15C)); // SH Red Car
		memcpy((void*)0x026682B8, &object_0013949C, sizeof(object_0013949C)); // SH Blue Car
		memcpy((void*)0x0266FC8C, &object_0013E9CC, sizeof(object_0013E9CC)); // SH Yellow Car
		memcpy((void*)0x02AF4FC0, &object_0019F390, sizeof(object_0019F390)); // SS Police
		memcpy((void*)0x02AF1974, &object_0019CBD8, sizeof(object_0019CBD8)); // SS Red Car
		memcpy((void*)0x02AF8400, &object_001A17C4, sizeof(object_001A17C4)); // SS Blue Car
		memcpy((void*)0x02AFBA64, &object_001A4268, sizeof(object_001A4268)); // SS Taxi
		memcpy((void*)0x0267A1A0, &attach_00148B24, sizeof(attach_00148B24)); //SH Glass
	}

} 
