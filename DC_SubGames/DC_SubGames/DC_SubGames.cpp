#include "stdafx.h"
#include <SADXModLoader.h>
#include "SandHill.h"
#include "TwinkleCircuit.h"
#include "ECModel.h"
//#include "Tornado1.h"
//#include "Tornado2.h"
//#include "Tornado2_Trans.h"
//#include "Tornado2_Trans2.h"

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
	//*(NJS_OBJECT *)0x028B1DA0 = object_00060C40; //Tornado model 1
	//*(NJS_OBJECT *)0x027EB198 = object_000E95C8; //Tornado model 2
	//*(NJS_OBJECT *)0x0280C158 = object_0010003C; //Tornado model 2 transformed
	//*(NJS_OBJECT *)0x2863DEC = object_001506C8; //Tornado transformation
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