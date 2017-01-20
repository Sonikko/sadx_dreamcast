#include "stdafx.h"
#include "SADXModLoader.h"
#include "SSGarden.h"
#include "ECGarden.h"
#include "MRGarden_Day.h"
#include "MRGarden_Evening.h"
#include "MRGarden_Night.h"

void __cdecl sub_72A790()
{
	FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_daytime, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Daytime, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_DAYTIME");
	PrintDebug("ChaoStgGarden02MR_Daytime _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_daytime = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Daytime = (LandTable *)&landtable_00035780;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

void __cdecl sub_72A820()
{
	FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_EVENING");
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_evening, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Evening, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	PrintDebug("ChaoStgGarden02MR_Evening _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_evening = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Evening = (LandTable *)&landtableE_00035780;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

void __cdecl sub_72A8B0()
{
	FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_NIGHT");
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_night, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Night, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	PrintDebug("ChaoStgGarden02MR_Night _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_night = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Night = (LandTable *)&landtableN_00035928;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}
//PointerInfo pointers[] = {
	//ptrdecl(0x719619, &landtable_0300E738), //SS
	//ptrdecl(0x7191E9, &landtable_03005E54) //EC
//};

extern "C"

{
	//__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		((LandTable *)0x3405E54)->COLList[74].Flags = 0x84000002; //EC garden ocean animation
		WriteJump((void*)0x0072A790, sub_72A790);
		WriteJump((void*)0x0072A820, sub_72A820);
		WriteJump((void*)0x0072A8B0, sub_72A8B0);
	}
}