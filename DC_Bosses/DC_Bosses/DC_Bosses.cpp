#include "stdafx.h"
#include "SADXModLoader.h"
#include "EggWalker.h"
#include "EggViper.h"
#include "Chaos0_Landtable.h"
#include "Chaos0_PoliceCar.h"
#include "Chaos2.h"
#include "Chaos4_water.h"
#include "Chaos4.h"
//#include "Chaos6_Act1_PC.h"
#include "Chaos6_Act1.h"
#include "Chaos6_Act2.h"
#include "Chaos7.h"
#include "E101.h"
#include "Zero.h"
#include "Zero_PC.h"
#include "EggHornet.h"

NJS_MKEY_A animation_0004CEA0_15_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0x1FFF, 0 },
	{ 2, 0, 0x3FFF, 0 },
	{ 3, 0, 0x5FFF, 0 },
	{ 4, 0, 0x7FFF, 0 },
	{ 5, 0, 0x9FFF, 0 },
	{ 6, 0, 0xBFFF, 0 },
	{ 7, 0, 0xDFFF, 0 }
};

NJS_MKEY_A animation_0004CEA0_16_rot[] = {
	{ 0, 0, 0, 0xFFFF },
	{ 1, 0, 0x1FFF, 0xFFFF },
	{ 2, 0, 0x3FFF, 0xFFFF },
	{ 3, 0, 0x5FFF, 0xFFFF },
	{ 4, 0, 0x7FFF, 0xFFFF },
	{ 5, 0, 0x9FFF, 0xFFFF },
	{ 6, 0, 0xBFFF, 0xFFFF },
	{ 7, 0, 0xDFFF, 0xFFFF }
};

NJS_MDATA2 animation_0004CEA0_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, animation_0004CEA0_15_rot, 0, LengthOfArray(animation_0004CEA0_15_rot) },
	{ NULL, animation_0004CEA0_16_rot, 0, LengthOfArray(animation_0004CEA0_16_rot) },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 }
};

NJS_MOTION animation_0004CEA0 = { animation_0004CEA0_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

PointerInfo pointers[] = {
	//ptrdecl(0x7D1CC0, &landtable_0000028C), //Chaos 2
	ptrdecl(0x7D1CD6, &landtable_00000238), //Chaos 4
	ptrdecl(0x7D1CEC, &landtable_00000318), // Chaos 6 Act 1
	ptrdecl(0x7D1CF6, &landtable_0000033C), //Chaos 6 Act 2
	ptrdecl(0x7D1D1C, &landtable_00000128), //Egg Hornet
	ptrdecl(0x7D1D32, &landtable_0000022C), //Egg Walker
	ptrdecl(0x7D1D48, &landtable_000580F4), //Egg Viper
	ptrdecl(0x7D1D7F, &landtable_00000068), //E-101
	ptrdecl(0x7D1D06, &landtable_00001214), //Perfect Chaos DC
	//ptrdecl(0x7D1D64, &landtable_00000110) //Zero

};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		WriteData((void*)0x00557009, 0x90, 16);
		ResizeTextureList((NJS_TEXLIST*)0x118FF08, textures_chaos4dc);
		ResizeTextureList((NJS_TEXLIST*)0x121FF28, textures_chaos6);
		ResizeTextureList((NJS_TEXLIST*)0x11F04A0, textures_chaos6_2);
		ResizeTextureList((NJS_TEXLIST*)0x1494FBC, textures_chaos7);
		ResizeTextureList((NJS_TEXLIST*)0x1557064, textures_egm1land);
		ResizeTextureList((NJS_TEXLIST*)0x15E99F8, textures_eggwalker);
		ResizeTextureList((NJS_TEXLIST*)0x167E5CC, textures_eggviper);
		ResizeTextureList((NJS_TEXLIST*)0x14FBFB4, textures_e101);
		//ResizeTextureList((NJS_TEXLIST*)0x16B460C, 81); //Zero texlist
		memcpy((void*)0x011C4B90, &object_000425F8, sizeof(object_000425F8)); // Chaos4 water
		((LandTable *)0x11EDE38)->COLList = collist_0014AFB4; //Chaos6 COL list
		((LandTable *)0x11EDE38)->COLCount = LengthOfArray(collist_0014AFB4); //Chaos6 COL list
		//ResizeTextureList((NJS_TEXLIST *)0x121FF28, 79); //Chaos 6 texlist
		memcpy((void*)0x011EDE20, &animlist_0014B62C, sizeof(animlist_0014B62C)); // Chaos6 animlist
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
		DataArray(FogData, EggHornetFog, 0x01556B34, 3);
		DataArray(FogData, EggWalkerFog, 0x015E87F4, 3);
		DataArray(FogData, EggViperFog, 0x0165D334, 3);
		DataArray(DrawDistance, DrawDist_Chaos7, 0x01420E00, 3);
		DataArray(DrawDistance, DrawDist_EggHornet, 0x01556B1C, 3);
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
			DrawDist_EggHornet[i].Maximum = -12500.0;
			EggHornetFog[i].Layer = -2000.0f;
			EggHornetFog[i].Distance= -8000.0f;
			EggWalkerFog[i].Toggle = 0;
			EggViperFog[i].Toggle = 0;
		}
		HMODULE handle = GetModuleHandle(L"BOSSCHAOS0MODELS");
		LandTable **___LANDTABLEBOSSCHAOS0 = (LandTable **)GetProcAddress(handle, "___LANDTABLEBOSSCHAOS0");
		___LANDTABLEBOSSCHAOS0[0] = &landtable_000001D8;
		NJS_ACTION **___BOSSCHAOS0_ACTIONS = (NJS_ACTION **)GetProcAddress(handle, "___BOSSCHAOS0_ACTIONS");
		___BOSSCHAOS0_ACTIONS[18]->object = &object_0005D234;
		___BOSSCHAOS0_ACTIONS[18]->motion = &animation_0004CEA0;
	}

}