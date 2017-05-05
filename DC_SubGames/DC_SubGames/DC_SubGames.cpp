#include "stdafx.h"
#include <SADXModLoader.h>
#include "SandHill.h"
#include "TwinkleCircuit.h"
#include "SkyChaseModels.h"

DataArray(FogData, FogData_SandHill, 0x0173BB74, 3);
DataPointer(float, CurrentDrawDistance, 0x03ABDC74);

PointerInfo pointers[] = {
	ptrdecl(0x7D2051, &landtable_00002DEC),
	ptrdecl(0x7D205B, &landtable_00001A3C)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
extern "C" __declspec(dllexport) void cdecl Init()
{
	*(NJS_OBJECT *)0x02982F44 = object_0003FA40; //Egg Carrier model
	*(NJS_OBJECT *)0x298A894 = object_00047110; //Hodai
	*(NJS_OBJECT *)0x2941B2C = object_0001342C; //Kirai
	*(NJS_OBJECT *)0x017424DC = object_0006EA40; //Sand Hill ramp
	((NJS_ACTION*)0x28E596C)->object = &object_0009153C; //Beam in Act 1
	((NJS_ACTION*)0x2996C74)->object = &object_0004AEE0; //Beam in Act 2
	*(NJS_OBJECT *)0x028E2C88 = object_0009153C; //Beam in Act 1
	*(NJS_OBJECT *)0x0298E7D0 = object_0004AEE0; //Beam in Act 2
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