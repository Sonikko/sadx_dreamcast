#include "stdafx.h"
#include "Highway1.h"
#include "Highway2.h"
#include "Highway3.h"
#include "SH_bus.h"
#include "SH_yellowcar.h"
#include "SH_bluecar.h"
#include "SH_redcar.h"
#include "SH_helicopter.h"
#include "SH_turnasi.h"
#include "SH_glass.h"
#include "Highway_objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA88, &landtable_0001853C),
	ptrdecl(0x97DA8C, &landtable_00019178),
	ptrdecl(0x97DA90, &landtable_0001B08C)
};

extern "C"
{
	__declspec(dllexport) PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		((NJS_OBJECT*)0x026785FC)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //material fix for container A
		((NJS_OBJECT*)0x0267943C)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2; //material fix for container A
		((NJS_OBJECT*)0x02676A4C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //material fix for container B
		*(NJS_OBJECT*)0x026777D4 = object_00146254;//container B top broken 1
		*(NJS_OBJECT*)0x02677288 = object_00145D34;//container B top broken 2
		WriteData((void*)0x00619545, 1, 1); //blending mode for poster
		ResizeTextureList((NJS_TEXLIST*)0x2592E8C, textures_highway1);
		ResizeTextureList((NJS_TEXLIST*)0x2581310, textures_highway2);
		ResizeTextureList((NJS_TEXLIST*)0x24CAC94, textures_highway3);
		((NJS_OBJECT *)0x02671A20)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA; //O Crane platform alpha fix
		memcpy((void*)0x267DC14, &object_0227DC14, sizeof(object_0227DC14)); // Turnasi part 1
		memcpy((void*)0x267D3B4, &object_0014ABC8, sizeof(object_0014ABC8)); // Turnasi part 2
		memcpy((void*)0x267C7AC, &object_0014A5B0, sizeof(object_0014A5B0)); // Turnasi part 3
		memcpy((void*)0x0268C058, &object_0228C058, sizeof(object_0228C058)); // SH Helicopter
		memcpy((void*)0x0266D90C, &object_0013D068, sizeof(object_0013D068)); // SH Bus
		memcpy((void*)0x0266B484, &object_0013B15C, sizeof(object_0013B15C)); // SH Red Car
		memcpy((void*)0x026682B8, &object_0013949C, sizeof(object_0013949C)); // SH Blue Car
		memcpy((void*)0x0266FC8C, &object_0013E9CC, sizeof(object_0013E9CC)); // SH Yellow Car
		memcpy((void*)0x0267A1A0, &attach_00148B24, sizeof(attach_00148B24)); //SH Glass
		DataArray(FogData, SpeedHighway1Fog, 0x024CA4E4, 3);
		DataArray(FogData, SpeedHighway3Fog, 0x024CA544, 3);
		for (int i = 0; i < 3; i++)
		{
			SpeedHighway1Fog[i].Layer = 2000.0f;
			SpeedHighway1Fog[i].Distance = 5200.0f;
			SpeedHighway3Fog[i].Color = 0xFF6497C8;
			SpeedHighway3Fog[i].Layer = 1200.0f;
			SpeedHighway3Fog[i].Distance = 2900.0f;
			SpeedHighway3Fog[i].Toggle = 1;
		}
	}

}
