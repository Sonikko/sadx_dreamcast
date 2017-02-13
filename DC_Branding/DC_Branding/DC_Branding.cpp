#include "stdafx.h"
#include "SADXModLoader.h"

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		WriteData((void*)0x007DB831, 0x20, 1); //Space
		WriteData((void*)0x007DB832, 0x41, 1); //A
		WriteData((void*)0x007DB833, 0x64, 1); //D
		WriteData((void*)0x007DB834, 0x76, 1); //V
		WriteData((void*)0x007DB835, 0x65, 1); //E
		WriteData((void*)0x007DB836, 0x6E, 1); //N
		WriteData((void*)0x007DB837, 0x74, 1); //T
		WriteData((void*)0x007DB838, 0x75, 1); //U
		WriteData((void*)0x007DB839, 0x72, 1); //R
		WriteData((void*)0x007DB83A, 0x65, 1); //E
		WriteData((void*)0x007DB83B, 0x20, 1); //Space
		WriteData((void*)0x007DB83C, 0x20, 1); //Space
		WriteData((void*)0x007DB83D, 0x20, 1); //Space
		WriteData((void*)0x007DB83E, 0x20, 1); //Space
		WriteData((void*)0x0050E83B, 0x34, 1); //Disable titlescreen scrolling 1
		WriteData((void*)0x0050E83C, 0xF9, 1); //Disable titlescreen scrolling 1
		WriteData((void*)0x0042CCF3, 0x0F, 1); //Disable Sonic Team logo
		//Selection box B
		WriteData((void*)0x00458125, 0x00, 2);
		WriteData((void*)0x00458127, 0x80, 2);
		WriteData((void*)0x00458128, 0x3F, 1);
		//Selection box G
		WriteData((void*)0x0045812A, 0x33, 3);
		WriteData((void*)0x0045812D, 0x3F, 1);
		//Selection box R
		WriteData((void*)0x0045812F, 0, 4);
	}
}

