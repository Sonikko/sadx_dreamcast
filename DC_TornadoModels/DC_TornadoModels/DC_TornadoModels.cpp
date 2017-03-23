#include "stdafx.h"
#include <SADXModLoader.h>
#include "Tornado1.h"
#include "Tornado1hit.h"
#include "Tornado2.h"
#include "Tornado2_Trans.h"
#include "Tornado2_Trans2.h"

extern "C" __declspec(dllexport) void cdecl Init()
{
	*(NJS_OBJECT *)0x028B1DA0 = object_00060C40; //Tornado model 1
	//*(NJS_OBJECT *)0x02920F8C = object_000C8650; //Tornado model 1 hit
	*(NJS_OBJECT *)0x027EB198 = object_000E95C8; //Tornado model 2
	*(NJS_OBJECT *)0x0280C158 = object_0010003C; //Tornado model 2 transformed
	//*(NJS_OBJECT *)0x02863DEC = object_001506C8; //Tornado transformation
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };