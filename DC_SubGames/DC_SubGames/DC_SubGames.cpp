#include "stdafx.h"
#include "SandHill.h"
#include "TwinkleCircuit.h"
#include "SADXModLoader.h"

DataArray(FogData, FogData_SandHill, 0x0173BB74, 3);
DataPointer(float, CurrentDrawDistance, 0x03ABDC74);

PointerInfo pointers[] = {
	ptrdecl(0x7D2051, &landtable_00002DEC),
	ptrdecl(0x7D205B, &landtable_00001A3C)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
extern "C" __declspec(dllexport) void cdecl Init()
{
	for (int i = 0; i < 3; i++)
	{
		FogData_SandHill[i].Color = 0xFFAAAA8C;
	}
}
extern "C" __declspec(dllexport) void cdecl OnFrame()
{
	if (CurrentLevel == 36) CurrentDrawDistance = -100000.0f;
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };