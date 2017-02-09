#include "stdafx.h"
#include "SADXModLoader.h"
#include "ADVSS00 (City Hall).h"
#include "ADVSS01 (Casino Area).h"
#include "ADVSS02 (Sewers).h"
#include "ADVSS03 (StationMainArea).h"
#include "ADVSS04 (Hotel).h"
#include "ADVSS05 (Twinkle Park Entrance).h"
#include "textures.h"
#include "SS_bluecar.h"
#include "SS_redcar.h"
#include "SS_police.h"
#include "SS_taxi.h"
#include "SS_TPBall.h"
#include "SS_train.h"
#include "SS_box.h"

static int anim1 = 46;
static int anim2 = 183;
static int anim3 = 29;
static int anim4 = 59;
static int anim5 = 60;
DataPointer(int, FramerateSetting, 0x0389D7DC);

extern "C"
{
	__declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
	{
		WriteData((void*)0x00630AE0, 0x90, 4); //Hotel door fix
		ResizeTextureList((NJS_TEXLIST*)0x2AD9F58, 31);
		//Objects
		memcpy((void*)0x02ABDF0C, &object_00172BD4, sizeof(object_00172BD4)); // Box in the sewers
		memcpy((void*)0x02AE8674, &object_00195DC0, sizeof(object_00195DC0)); // SS train
		memcpy((void*)0x02AF4FC0, &object_0019F390, sizeof(object_0019F390)); // SS Police
		memcpy((void*)0x02AF1974, &object_0019CBD8, sizeof(object_0019CBD8)); // SS Red Car
		memcpy((void*)0x02AF8400, &object_001A17C4, sizeof(object_001A17C4)); // SS Blue Car
		memcpy((void*)0x02AFBA64, &object_001A4268, sizeof(object_001A4268)); // SS Taxi
		memcpy((void*)0x02AD362C, &object_00185A20, sizeof(object_00185A20)); // SS Twinkle Park Ball
		memcpy((void*)0x02AB6900, &object_0016C3FC, sizeof(object_0016C3FC)); // SS Twinkle Park Elevator
		//Landtables
		HMODULE handle = GetModuleHandle(L"ADV00MODELS");
		LandTable **___LANDTABLESS = (LandTable **)GetProcAddress(handle, "___LANDTABLESS");
		NJS_TEXLIST **___ADV00_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle, "___ADV00_TEXLISTS");
		___ADV00_TEXLISTS[0] = &texlist1;
		___ADV00_TEXLISTS[1] = &texlist2;
		___ADV00_TEXLISTS[2] = &texlist3;
		___ADV00_TEXLISTS[3] = &texlist4;
		___ADV00_TEXLISTS[4] = &texlist5;
		___ADV00_TEXLISTS[5] = &texlist6;
		___LANDTABLESS[0] = &landtable_000157F4;
		___LANDTABLESS[1] = &landtable_000738F4;
		___LANDTABLESS[2] = &landtable_000C21F0;
		___LANDTABLESS[3] = &landtable_000DCEBC;
		___LANDTABLESS[4] = &landtable_00135A90;
		___LANDTABLESS[5] = &landtable_001573CC;
		//Fog data
		DataArray(FogData, StationSquare1Fog, 0x02AA3D10, 3);
		DataArray(FogData, StationSquare2Fog, 0x02AA3D40, 3);
		DataArray(FogData, StationSquare3Fog, 0x02AA3D70, 3);
		DataArray(FogData, StationSquare4Fog, 0x02AA3DA0, 3);
		DataArray(FogData, StationSquare5Fog, 0x02AA3DD0, 3);
		DataArray(FogData, StationSquare6Fog, 0x02AA3E00, 3);
		DataArray(DrawDistance, StationSquare6DrawDist, 0x02AA3CF8, 3);
		for (int i = 0; i < 3; i++)
		{
			StationSquare1Fog[i].Toggle = 0;
			StationSquare2Fog[i].Toggle = 0;
			StationSquare3Fog[i].Toggle = 0;
			StationSquare4Fog[i].Toggle = 0;
			StationSquare5Fog[i].Toggle = 0;
			StationSquare6Fog[i].Toggle = 0;
			StationSquare6DrawDist[i].Maximum = -600.0f;
		}

	}
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };

	__declspec(dllexport) void __cdecl OnFrame()
	{
		HMODULE handle = GetModuleHandle(L"ADV00MODELS");
		//Water animation in Act 2 (Sewers)
		if (CurrentLevel == 26 && CurrentAct == 2 && GameState == 15)
		{
			if (anim1 > 55) anim1 = 46;
			matlist_000D9890[0].attr_texId = anim1;
			if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting >= 2) anim1++;
		}
		//Night reflections Act 0
		if (CurrentLevel == 26 && CurrentAct == 0 && GetTimeOfDay() == 2)
		{
			matlist_00031C48[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00030274[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00022CC0[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00022CC0[12].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00025990[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0001E1DC[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0001E1DC[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000285A0[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0002C924[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0002C2BC[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00052FA8[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000483CC[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00042DBC[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0005AB04[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0005F744[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00061B50[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0005C6C4[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[6].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000585A4[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0002A1E4[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00046404[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00046404[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000631AC[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000631AC[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000631AC[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00063748[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00021684[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000203BC[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0002B718[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0002F984[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0003B3C4[1].attr_texId = 207;
			matlist_0003BBA4[1].attr_texId = 207;
			matlist_0003BF94[1].attr_texId = 207;
			matlist_0003C384[1].attr_texId = 207;
			matlist_0003AFD4[1].attr_texId = 207;
			matlist_0003B7B4[1].attr_texId = 207;
			matlist_0003BBA4[1].attr_texId = 207;
			matlist_000631AC[2].attr_texId = 207;
			matlist_00046404[0].attr_texId = 209;
			matlist_00046404[1].attr_texId = 209;
			matlist_0007C240[0].attr_texId = 209;
			matlist_0007C240[1].attr_texId = 209;
			matlist_0002B718[0].attr_texId = 211;
			matlist_0002F984[0].attr_texId = 211;
			matlist_000631AC[0].attr_texId = 213;
			matlist_00063748[0].attr_texId = 213;
			matlist_000203BC[0].attr_texId = 215;
			matlist_00021684[0].attr_texId = 217;
			matlist_000631AC[1].attr_texId = 219;
		}

		//Evening reflections Act 0
		if (CurrentLevel == 26 && CurrentAct == 0 && GetTimeOfDay() == 1)
		{
			matlist_00031C48[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00030274[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00022CC0[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00022CC0[12].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00025990[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0001E1DC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0001E1DC[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000285A0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002C924[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002C2BC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00052FA8[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000483CC[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00042DBC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0005AB04[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0005F744[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00061B50[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0005C6C4[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[6].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000585A4[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002A1E4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00046404[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00046404[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000631AC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000631AC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000631AC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00063748[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00021684[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000203BC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002B718[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002F984[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0003B3C4[1].attr_texId = 206;
			matlist_0003BBA4[1].attr_texId = 206;
			matlist_0003BF94[1].attr_texId = 206;
			matlist_0003C384[1].attr_texId = 206;
			matlist_0003AFD4[1].attr_texId = 206;
			matlist_0003B7B4[1].attr_texId = 206;
			matlist_0003BBA4[1].attr_texId = 206;
			matlist_000631AC[2].attr_texId = 206;
			matlist_00046404[0].attr_texId = 208;
			matlist_00046404[1].attr_texId = 208;
			matlist_0007C240[0].attr_texId = 208;
			matlist_0007C240[1].attr_texId = 208;
			matlist_0002B718[0].attr_texId = 210;
			matlist_0002F984[0].attr_texId = 210;
			matlist_000631AC[0].attr_texId = 212;
			matlist_00063748[0].attr_texId = 212;
			matlist_000203BC[0].attr_texId = 214;
			matlist_00021684[0].attr_texId = 216;
			matlist_000631AC[1].attr_texId = 218;
		}

		//Day reflections Act 0
		if (CurrentLevel == 26 && CurrentAct == 0 && GetTimeOfDay() == 0)
		{
			matlist_00031C48[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00030274[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00022CC0[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00022CC0[12].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00025990[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0001E1DC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0001E1DC[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000285A0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002C924[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002C2BC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00052FA8[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000483CC[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00042DBC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0005AB04[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0005F744[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00061B50[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0005C6C4[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000309E0[6].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000585A4[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002A1E4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00046404[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00046404[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000631AC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000631AC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000631AC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00063748[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00021684[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000203BC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002B718[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0002F984[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0003B3C4[1].attr_texId = 124;
			matlist_0003BBA4[1].attr_texId = 124;
			matlist_0003BF94[1].attr_texId = 124;
			matlist_0003C384[1].attr_texId = 124;
			matlist_0003AFD4[1].attr_texId = 124;
			matlist_0003B7B4[1].attr_texId = 124;
			matlist_0003BBA4[1].attr_texId = 124;
			matlist_000631AC[2].attr_texId = 124;
			matlist_00046404[0].attr_texId = 145;
			matlist_00046404[1].attr_texId = 145;
			matlist_0007C240[0].attr_texId = 145;
			matlist_0007C240[1].attr_texId = 145;
			matlist_0002B718[0].attr_texId = 69;
			matlist_0002F984[0].attr_texId = 69;
			matlist_000631AC[0].attr_texId = 184;
			matlist_00063748[0].attr_texId = 184;
			matlist_000203BC[0].attr_texId = 36;
			matlist_00021684[0].attr_texId = 39;
			matlist_000631AC[1].attr_texId = 185;
		}

		//Day, Night & Evening textures for Act 1 (Casino)
		if (CurrentLevel == 26 && CurrentAct == 1 && GetTimeOfDay() == 2) matlist_000B59E0[0].attr_texId = 265;
		if (CurrentLevel == 26 && CurrentAct == 1 && GetTimeOfDay() == 1) matlist_000B59E0[0].attr_texId = 264;
		if (CurrentLevel == 26 && CurrentAct == 1 && GetTimeOfDay() == 0) matlist_000B59E0[0].attr_texId = 240;

		//Day, Night & Evening textures for Act 4 (Hotel)
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 2) matlist_00151F58[0].attr_texId = 118;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 2) matlist_00152110[0].attr_texId = 117;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 1) matlist_00151F58[0].attr_texId = 116;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 1) matlist_00152110[0].attr_texId = 115;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 0) matlist_00151F58[0].attr_texId = 69;
		if (CurrentLevel == 26 && CurrentAct == 4 && GetTimeOfDay() == 0) matlist_00152110[0].attr_texId = 70;

		//Night reflections Act 3 (Main area)
		if (CurrentLevel == 26 && CurrentAct == 3 && GetTimeOfDay() == 2)
		{
			matlist_000F5934[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0012BD98[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0012BD98[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0012BD98[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_001163FC[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00115CE0[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0011EACC[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0011DEFC[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00109760[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00109378[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0010956C[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00109CCC[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000E4358[8].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000FE7A4[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000FC250[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000F7940[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000F7314[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000EF170[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_001129AC[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000F002C[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000F1C08[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000F43F0[7].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00104E6C[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00104E6C[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00102CD4[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0011ABE0[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0011ABE0[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000FA4D4[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000FBD0C[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_001209D8[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_0011BE68[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000EFA74[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000EF934[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000F062C[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00128FA8[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00128FA8[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00125408[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00125408[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00125408[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[3].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00129814[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00129814[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00124B94[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00102778[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_00102778[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			matlist_000F062C[5].attr_texId = 259;
			matlist_000EF934[0].attr_texId = 259;
			matlist_000FA4D4[0].attr_texId = 263;
			matlist_000FBD0C[0].attr_texId = 261;
			matlist_0011BE68[2].attr_texId = 257;
		}

		//Evening reflections Act 3 (Main area)
		if (CurrentLevel == 26 && CurrentAct == 3 && GetTimeOfDay() == 1)
		{
			matlist_000F5934[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0012BD98[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0012BD98[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0012BD98[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_001163FC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00115CE0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011EACC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011DEFC[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00109760[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00109378[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0010956C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00109CCC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000E4358[8].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000FE7A4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000FC250[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F7940[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F7314[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000EF170[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_001129AC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F002C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F1C08[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F43F0[7].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00104E6C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00104E6C[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00102CD4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011ABE0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011ABE0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000FA4D4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000FBD0C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_001209D8[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011BE68[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000EFA74[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000EF934[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F062C[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00128FA8[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00128FA8[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125408[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125408[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125408[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00129814[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00129814[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00124B94[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00102778[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00102778[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F062C[5].attr_texId = 258;
			matlist_000EF934[0].attr_texId = 258;
			matlist_000FA4D4[0].attr_texId = 262;
			matlist_000FBD0C[0].attr_texId = 260;
			matlist_0011BE68[2].attr_texId = 256;
		}

		//Day reflections Act 3 (Main area)
		if (CurrentLevel == 26 && CurrentAct == 3 && GetTimeOfDay() == 0)
		{
			matlist_000F5934[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0012BD98[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0012BD98[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0012BD98[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_001163FC[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00115CE0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011EACC[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011DEFC[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00109760[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00109378[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0010956C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00109CCC[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000E4358[8].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000FE7A4[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000FC250[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F7940[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F7314[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000EF170[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_001129AC[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F002C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F1C08[4].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F43F0[7].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00104E6C[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00104E6C[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00102CD4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011ABE0[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011ABE0[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000FA4D4[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000FBD0C[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_001209D8[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_0011BE68[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000EFA74[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000EF934[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000F062C[5].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00128FA8[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00128FA8[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125408[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125408[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125408[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[2].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00125038[3].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00129814[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00129814[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00124B94[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00102778[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_00102778[1].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
			matlist_000EF934[0].attr_texId = 52;
			matlist_000F062C[5].attr_texId = 60;
			matlist_000FA4D4[0].attr_texId = 89;
			matlist_000FBD0C[0].attr_texId = 94;
			matlist_0011BE68[2].attr_texId = 165;
		}

		//Sea animations Act 3 (Main area)
		if (CurrentLevel == 26 && CurrentAct == 3 && GameState == 15)
		{
				if (anim2 > 255) anim2 = 183;
				if (anim2 > 183 && anim2 < 242) anim2 = 242;
				if (anim3 > 241) anim3 = 29;
				if (anim3 > 29 && anim3 < 228) anim3 = 228;
				matlist_0012231C[0].attr_texId = anim2;
				matlist_00123620[0].attr_texId = anim2;
				matlist_000E7180[2].attr_texId = anim3;
				matlist_00122894[2].attr_texId = anim3;
				matlist_00114D80[0].attr_texId = anim3;
				if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
				{
					anim2++;
					anim3++;
				}
		}

		//Sea animations Act 4 (Hotel)
		if (CurrentLevel == 26 && CurrentAct == 4 && GameState == 15)
		{
			if (anim4 > 101) anim4 = 59;
			if (anim4 > 59 && anim4 < 88) anim4 = 88;
			if (anim5 > 115) anim5 = 60;
			if (anim5 > 60 && anim5 < 102) anim5 = 102;
			matlist_00147958[2].attr_texId = anim4;
			matlist_00150A50[3].attr_texId = anim4;
			matlist_00151E54[0].attr_texId = anim4;
			matlist_00148688[0].attr_texId = anim5;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				anim4++;
				anim5++;
			}
		}
	}
	}
