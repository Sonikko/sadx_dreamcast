#include "stdafx.h"
#include "SADXModLoader.h"
#include "EggWalker.h"
#include "EggViper.h"
#include "Chaos2.h"
#include "Chaos4_water.h"
#include "Chaos4.h"
#include "Chaos6_Act1_PC.h"
//#include "Chaos6_Act1.h"
#include "Chaos6_Act2.h"
#include "Chaos7.h"
#include "E101.h"
#include "Zero.h"
#include "Zero_PC.h"
#include "EggHornet.h"


PointerInfo pointers[] = {
	//ptrdecl(0x7D1CC0, &landtable_0000028C), //Chaos 2
	ptrdecl(0x7D1CD6, &landtable_00000238), //Chaos 4
	//ptrdecl(0x7D1CEC, &landtable_00000318), // Chaos 6 Act 1
	ptrdecl(0x7D1CF6, &landtable_0000033C), //Chaos 6 Act 2
	ptrdecl(0x7D1D1C, &landtable_00000128), //Egg Hornet
	ptrdecl(0x7D1D32, &landtable_0000022C), //Egg Walker
	ptrdecl(0x7D1D48, &landtable_000580F4), //Egg Viper
	ptrdecl(0x7D1D7F, &landtable_00000068), //E-101
	ptrdecl(0x7D1D06, &landtable_00001214), //Perfect Chaos DC
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		WriteData((void*)0x00557009, 0x90, 16);
		ResizeTextureList((NJS_TEXLIST*)0x1557064, textures_egm1land);
		//ResizeTextureList((NJS_TEXLIST*)0x1494FBC, textures_chaos7);
		memcpy((void*)0x011C4B90, &object_000425F8, sizeof(object_000425F8)); // Chaos4 water
		memcpy((void*)0x011EDE20, &animlist_00DEDE20, sizeof(animlist_00DEDE20)); // Chaos6 animlist
		memcpy((void*)0x016B4D20, &animlist_012B4D20, sizeof(animlist_012B4D20)); // Zero animlist
		memcpy((void*)0x01522560, &animlist_012B4D20, sizeof(animlist_012B4D20)); // E101R animlist
		memcpy((void*)0x016E3994, &object_0001C9EC, sizeof(object_0001C9EC));  // Zero 1 
		memcpy((void*)0x01550FD4, &object_0001C9EC, sizeof(object_0001C9EC));  // E101MK2 1
		memcpy((void*)0x016E3CCC, &object_0001CD18, sizeof(object_0001CD18));  // Zero 2 
		memcpy((void*)0x0155130C, &object_0001CD18, sizeof(object_0001CD18));  // E101MK2 2
		memcpy((void*)0x016E301C, &object_0001C090, sizeof(object_0001C090));  // Zero 3
		memcpy((void*)0x0155065C, &object_0001C090, sizeof(object_0001C090));  // E101MK2 3
		memcpy((void*)0x016E3354, &object_0001C3BC, sizeof(object_0001C3BC));  // Zero 4
		memcpy((void*)0x01550994, &object_0001C3BC, sizeof(object_0001C3BC));  // E101MK2 
		memcpy((void*)0x01183F04, &object_0006B438, sizeof(object_0006B438)); // Chaos2 1 
		memcpy((void*)0x0118440C, &object_0006B890, sizeof(object_0006B890)); // Chaos2 2
		object_0006B890.basicdxmodel->mats[0].attr_texId = 11; //Chaos2 BG object fixes
		object_0006B438.basicdxmodel->mats[0].attr_texId = 0; //Chaos2 BG object fixes
		((NJS_OBJECT *)0x016E3994)->basicdxmodel->mats[0].diffuse.color = 0xB2B2B2B2;
		((NJS_OBJECT *)0x016E3994)->basicdxmodel->mats[1].diffuse.color = 0x99B2B2B2;
		((NJS_OBJECT *)0x016E3CCC)->basicdxmodel->mats[0].diffuse.color = 0xB2B2B2B2;
		((NJS_OBJECT *)0x016E3CCC)->basicdxmodel->mats[1].diffuse.color = 0x99B2B2B2;
		((NJS_OBJECT *)0x016E301C)->basicdxmodel->mats[0].diffuse.color = 0xB2B2B2B2;
		((NJS_OBJECT *)0x016E301C)->basicdxmodel->mats[1].diffuse.color = 0x99B2B2B2;
		((NJS_OBJECT *)0x016E3354)->basicdxmodel->mats[0].diffuse.color = 0xB2B2B2B2;
		((NJS_OBJECT *)0x016E3354)->basicdxmodel->mats[1].diffuse.color = 0x99B2B2B2;
		DataArray(FogData, Chaos2Fog, 0x01120638, 3);
		DataArray(FogData, Chaos4Fog, 0x0118FA00, 3);
		DataArray(FogData, Chaos7Fog, 0x01420E30, 3);
		DataArray(DrawDistance, DrawDist_Chaos7, 0x01420E00, 3);
		DataArray(FogData, EggWalkerFog, 0x015E87F4, 3);
		for (int i = 0; i < 3; i++)
		{
			Chaos2Fog[i].Color = 0xFF000000;
			Chaos2Fog[i].Layer = 700.0f;
			Chaos2Fog[i].Distance = 1700.0f;
			Chaos2Fog[i].Toggle = 0;
			Chaos4Fog[i].Color = 0xFF000000;
			Chaos4Fog[i].Layer = 1.0f;
			Chaos4Fog[i].Distance = 2000.0f;
			Chaos4Fog[i].Toggle = 0;
			//Chaos7Fog[i].Color = 0xFF000000;
			Chaos7Fog[i].Layer = -4000.0f;
			Chaos7Fog[i].Distance = 11000.0f;
			Chaos7Fog[i].Toggle = 1;
			DrawDist_Chaos7[i].Maximum = -6500.0;
			EggWalkerFog[i].Toggle = 0;
		}
	}

}