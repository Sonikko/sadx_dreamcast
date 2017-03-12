#include "stdafx.h"
#include <SADXModLoader.h>
#include "ChaoRaceFunc.h"
#include "SSGarden.h"
#include "MRGarden.h"
#include "ChaoRace.h"
#include "ChaoRaceEntry.h"
#include "ECGarden_DC.h"
#include <stdlib.h>  

DataPointer(EntityData1*, Camera_Data1, 0x03B2CBB0);
static int waterframe = 55;
static int ssgardenwater = 0;
DataPointer(int, FramerateSetting, 0x0389D7DC);
//DataPointer(char, LoadingFile, 0x03ABDF68);
FunctionPointer(void, SetCurrentSetData, (int Level), 0x004B4BF0);
FunctionPointer(void, SetChaoLandTableX, (LandTable *geo), 0x0043A4C0);
DataArray(NJS_VECTOR, Chao_MRChaoSpawnPoints, 0x033A0C78, 16);
DataPointer(float, ECGarden_WarpSS_X, 0x00719147);
DataPointer(float, ECGarden_WarpSS_Y, 0x00719142);
DataPointer(float, ECGarden_WarpSS_Z, 0x0071913D);



struct ChaoTreeSpawn
{
	NJS_VECTOR a;
	NJS_VECTOR b;
	NJS_VECTOR c;
	NJS_VECTOR d;
	NJS_VECTOR e;
	NJS_VECTOR f;
	NJS_VECTOR g;
	NJS_VECTOR h;
	NJS_VECTOR i;
	NJS_VECTOR j;
};

DataArray(ChaoTreeSpawn, ChaoTreeSpawns, 0x033A0D78, 3);

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
	objLandTableGarden02_Daytime = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x80000420;
	collist_0000F778[1].Flags = 0x00000000;
	collist_0000F778[2].Flags = 0x00000000;
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
	objLandTableGarden02_Evening = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x00000000;
	collist_0000F778[1].Flags = 0x00000000;
	collist_0000F778[2].Flags = 0x80000420;
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
	objLandTableGarden02_Night = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x00000000;
	collist_0000F778[1].Flags = 0x80000420;
	collist_0000F778[2].Flags = 0x00000000;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

PointerInfo pointers[] = {
	ptrdecl(0x719DC9, &landtable_00000E64), //MR Garden
	ptrdecl(0x719619, &landtable_00011DD4), //SS Garden
	ptrdecl(0x7191E9, &landtable_0000DF3C) //EC Garden
};

void __cdecl LoadChaoRaceX()
{
	PrintDebug("SANICChaoStgRace _prolog begin.\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgRace_Main);
	LoadObjects();
	SetChaoLandTableX(&landtable_00000E64);
	PrintDebug("ChaoStgRace _prolog end.\n");
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
//Chao Race entry stuff
		//WriteData((void*)0x007197E0, 0xC3u, sizeof(char));
		/*WriteData((void*)0x007198B2, 0x90, 5);
		WriteData((void*)0x00719969, 0x90, 5);
		WriteData((void*)0x0071996E, 0x90, 5);
		WriteData((void*)0x00719973, 0x90, 5);
		WriteData((void*)0x00719978, 0x90, 5);
		WriteData((void*)0x007199A0, 0x90, 5);*/
//Station Square garden stuff
		ChaoTreeSpawns[0].a.x = 110; //Palm tree 1
		ChaoTreeSpawns[0].a.y = 3;  //Palm tree 1
		ChaoTreeSpawns[0].a.z = 32;  //Palm tree 1
		ChaoTreeSpawns[0].e.x = 190;  //Palm tree 2
		ChaoTreeSpawns[0].e.y = 3;  //Palm tree 2
		ChaoTreeSpawns[0].e.z = 49.5f;  //Palm tree 2
		WriteData((void*)0x0072AE89, 0x11, 1); //Black Market door position patch
		WriteData((void*)0x0072AE90, 0x61, 1); //Black Market door position patch
		WriteData((void*)0x0072AE91, 0x42, 1); //Black Market door position patch
		WriteData((void*)0x0072AFFC, 0x11, 1); //Black Market door position patch
		WriteData((void*)0x0072AFF2, 0x61, 1); //Black Market door position patch
		WriteData((void*)0x0072AFF3, 0x42, 1); //Black Market door position patch
		WriteData((void*)0x007195D1, 0x90, 5); //Kill SADX water
		WriteData((void*)0x0071946E, 0x90, 5); //Kill SADX fountain
//Chao Race stuff
		WriteJump((void*)0x00719DB0, LoadChaoRaceX);
		ResizeTextureList((NJS_TEXLIST *)0x3425018, 109);
		WriteData((void*)0x0071C293, 0x90, 5); //Prevent the Cheering Omochaos from disappearing
//Mystic Ruins garden stuff
		WriteJump((void*)0x0072A790, sub_72A790); //Mystic Ruins garden function 1
		WriteJump((void*)0x0072A820, sub_72A820); //Mystic Ruins garden function 2
		WriteJump((void*)0x0072A8B0, sub_72A8B0); //Mystic Ruins garden function 3
		WriteData((void*)0x00718E43, 0x90, 5); //Kill SADX water
		WriteData((void*)0x00728F1E, 0x90, 5); //Kill SADX water 2
		WriteData((void*)0x00718E7F, 0xC6, 1); //Draw distance
		WriteData((void*)0x00718E7E, 0x3B, 1); //Draw distance
		WriteData((void*)0x00718E7D, 0x80, 1); //Draw distance
		Chao_MRChaoSpawnPoints[0].x = 151;
		Chao_MRChaoSpawnPoints[1].x = 164;
		Chao_MRChaoSpawnPoints[2].x = 177;
		Chao_MRChaoSpawnPoints[3].z = 123.75f;
		Chao_MRChaoSpawnPoints[7].x = -58.25f;
		Chao_MRChaoSpawnPoints[7].y = 48.5f;
		Chao_MRChaoSpawnPoints[7].z = -74;
		Chao_MRChaoSpawnPoints[8].x = -209.75f;
		Chao_MRChaoSpawnPoints[8].y = 10.5f;
		Chao_MRChaoSpawnPoints[8].z = 14;
		Chao_MRChaoSpawnPoints[9].y = 3;
		Chao_MRChaoSpawnPoints[9].z = 88.85f;
		Chao_MRChaoSpawnPoints[10].x = -190.25f;
		Chao_MRChaoSpawnPoints[10].y = 2;
		Chao_MRChaoSpawnPoints[10].z = 131.85f;
		Chao_MRChaoSpawnPoints[11].x = -162;
		Chao_MRChaoSpawnPoints[11].z = 88;
		Chao_MRChaoSpawnPoints[12].y = 2;
		Chao_MRChaoSpawnPoints[12].z = 101.85f;
		Chao_MRChaoSpawnPoints[13].x = -100.25f;
		Chao_MRChaoSpawnPoints[13].y = 2;
		Chao_MRChaoSpawnPoints[13].z = 152.85f;
		Chao_MRChaoSpawnPoints[14].z = 155.85f;
		Chao_MRChaoSpawnPoints[15].y = 2;
		Chao_MRChaoSpawnPoints[15].z = 66.25f;
		ChaoTreeSpawns[2].a.x = 126.8847f; //Palm tree 1
		ChaoTreeSpawns[2].a.y = 0.2116146f;  //Palm tree 1
		ChaoTreeSpawns[2].a.z = 129.4048f;  //Palm tree 1
		ChaoTreeSpawns[2].b.x = -45.25877f; //Palm tree 2
		ChaoTreeSpawns[2].b.y = -0.7883873f;  //Palm tree 2
		ChaoTreeSpawns[2].b.z = 108.8823f;  //Palm tree 2
		ChaoTreeSpawns[2].c.x = -157.6473f; //Palm tree 3
		ChaoTreeSpawns[2].c.y = 0.2116146f;  //Palm tree 3
		ChaoTreeSpawns[2].c.z = 122.3606f;  //Palm tree 3
		ChaoTreeSpawns[2].d.x = -55.71612f; //Palm tree 4
		ChaoTreeSpawns[2].d.y = 44.21161f;  //Palm tree 4
		ChaoTreeSpawns[2].d.z = 20.53316f;  //Palm tree 4
		ChaoTreeSpawns[2].d.x = 83.6948f; //Palm tree 5
		ChaoTreeSpawns[2].d.y = 5.211613f;  //Palm tree 5
		ChaoTreeSpawns[2].d.z = -47.53315f;  //Palm tree 5
		//Egg Carrier garden stuff
		WriteData((float*)0x007191BF, -12000.0f); //Draw distance
		WriteData((void*)0x00718FE8, 0xC4, 1); //Disable Y check
		WriteData((float*)0x007190FE, 131.67f); //Name machine
		WriteData((float*)0x00719106, 2.6f); //Name machine
		WriteData((float*)0x0071910E, -204.28f); //Name machine
		WriteData((float*)0x00719147, 92.5f); //SS transporter
		WriteData((float*)0x00719142, 70.86f);  //SS transporter
		WriteData((float*)0x0071913D, -10.77f);  //SS transporter
		WriteData((float*)0x0071912B, 80.47f); //MR transporter
		WriteData((float*)0x00719126, 70.86f);  //MR transporter
		WriteData((float*)0x00719121, -41.76f);  //MR transporter
		ChaoTreeSpawns[1].a.x = -181; //Palm tree 1
		ChaoTreeSpawns[1].a.y = 1.99f;  //Palm tree 1
		ChaoTreeSpawns[1].a.z = -151.19f;  //Palm tree 1
		ChaoTreeSpawns[1].b.x = -102.76f; //Palm tree 2
		ChaoTreeSpawns[1].b.y = 1.99f;  //Palm tree 2
		ChaoTreeSpawns[1].b.z = -193.18f;  //Palm tree 2
		ChaoTreeSpawns[1].c.x = -8.89f; //Palm tree 3
		ChaoTreeSpawns[1].c.y = 1.99f;  //Palm tree 3
		ChaoTreeSpawns[1].c.z = -219.26f;  //Palm tree 3
		ChaoTreeSpawns[1].d.x = 46.81f; //Palm tree 4
		ChaoTreeSpawns[1].d.y = 1.99f;  //Palm tree 4
		ChaoTreeSpawns[1].d.z = -220.62f;  //Palm tree 4
		ChaoTreeSpawns[1].e.x = 100.89f; //Palm tree 5
		ChaoTreeSpawns[1].e.y = 67.99f;  //Palm tree 5
		ChaoTreeSpawns[1].e.z = -65.27f;  //Palm tree 5

	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 40 && GameState != 16)
		{
			if (Camera_Data1 != nullptr)
			{
				//object_000105E4.pos[0] = Camera_Data1->Position.x;
				//object_000105E4.pos[1] = Camera_Data1->Position.y-500;
				//object_000105E4.pos[2] = Camera_Data1->Position.z;
				//object_00001F6C.pos[0] = Camera_Data1->Position.x;
				//object_00001F6C.pos[1] = ;
				//object_00001F6C.pos[2] = Camera_Data1->Position.z;
			}
		}
		if (CurrentLevel == 39 && GameState != 16)
		{
			if (ssgardenwater > 9) ssgardenwater = 0;
			//matlist_000111CC[0].attr_texId = ssgardenwater;
			matlist_00011388[0].attr_texId = ssgardenwater;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) ssgardenwater++;
		}
		if (GameState != 16)
		{
			if (waterframe > 68) waterframe = 55;
			matlist_0002A548[0].attr_texId = waterframe;
			matlist_0003EFB0[0].attr_texId = waterframe;
			matlist_0003F2DC[0].attr_texId = waterframe;
			if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) waterframe++;
			/*if (Camera_Data1 != nullptr)
			{
			object_03028784.pos[0] = Camera_Data1->Position.x;
			object_03028784.pos[1] = 0;
			object_03028784.pos[2] = Camera_Data1->Position.z;
			}*/
		}
	}
}
