#include <SADXModLoader.h>

//Chao Name Machine load function

void __cdecl ChaoNameMachineCollision(ObjectMaster *a1)
{
	EntityData1* v1;
	NJS_OBJECT* v5;
	v1 = a1->Data1;
	v5 = sub_49D6C0(&object_001834CC, a1, (ColFlags)0x20001001);
	v5->scl[0] = 1.0f;
	v5->scl[1] = 1.0f;
	v5->scl[2] = 1.0f;
	Collision_Init(a1, &stru_33D0B50, 9, 4u);
}

//MR Garden DLL functions
void __cdecl sub_72A790()
{
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_daytime, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Daytime, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_DAYTIME");
	PrintDebug("547369736F626C7961646920736F736E6F6F6C6579\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_daytime = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Daytime = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x80000001;
	collist_0000F778[1].Flags = 0x00000000;
	collist_0000F778[2].Flags = 0x00000000;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

void __cdecl sub_72A820()
{
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
	collist_0000F778[2].Flags = 0x80000001;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

void __cdecl sub_72A8B0()
{
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_NIGHT");
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_night, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Night, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	PrintDebug("ChaoStgGarden02MR_Night _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_night = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Night = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x00000000;
	collist_0000F778[1].Flags = 0x80000001;
	collist_0000F778[2].Flags = 0x00000000;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

//Garden load functions
void __cdecl LoadSSGardenX()
{
	PrintDebug("ChaoStgGarden00SS Prolog begin\n");
	LoadPVM("OBJ_SS", (NJS_TEXLIST*)0x02AA4BF8);
	SSGardenStartPoint.Position.x = BK_SSGardenStartPoint.Position.x;
	SSGardenStartPoint.Position.y = BK_SSGardenStartPoint.Position.y;
	SSGardenStartPoint.Position.z = BK_SSGardenStartPoint.Position.z;
	SSGardenStartPoint.YRot = BK_SSGardenStartPoint.YRot;
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden00SS_Load);
	LoadObjects_SS();
	SetChaoLandTable(&landtable_00011DD4);
	PrintDebug("ChaoStgGarden00SS Prolog end\n");
}

void __cdecl ECGardenWater_Display(ObjectMaster *a1)
{
	if (!DroppedFrames)
	{
		njSetTexture((NJS_TEXLIST*)&texlist_ecgarden);
		njPushMatrix(0);
		njTranslate(0, 0, -4415.8f, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)&object_0000F01CX, QueuedModelFlagsB_3, 1.0f); //Bottom of the skybox
		njPopMatrix(1u);
		njPushMatrix(0);
		njTranslate(0, 0, -415.8f, 0);
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)&object_0000F01C, QueuedModelFlagsB_3, 1.0f); //Water
		njPopMatrix(1u);
	}
}

void __cdecl ECGardenWater_Main(ObjectMaster *a1)
{
	ECGardenWater_Display(a1);
}

void __cdecl ECGardenWater_Load(ObjectMaster *a1)
{
	EntityData1 *v1; // eax@1
	float *v2; // eax@1
	signed int v3; // edx@1

	v1 = a1->Data1;
	a1->MainSub = ECGardenWater_Main;
	a1->DisplaySub = ECGardenWater_Display;
	a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
}

void __cdecl LoadECGardenX()
{
	PrintDebug("ChaoStgGarden01EC Prolog begin\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden01EC_Load);
	LoadObject(LoadObj_Data1, 2, ECGardenWater_Load);
	LoadObjects_EC();
	SetChaoLandTable(&landtable_0000DF3C);
	PrintDebug("ChaoStgGarden01EC Prolog end\n");
}

void __cdecl LoadMRGardenX()
{
	DataPointer(LandTable*, LandTable_ChaoGardenMR, 0x03CA6E88);
	DataArray(void*, ModuleDestructors, 0x03CA6E70, 4);
	int v0; // eax@1
	int v1; // eax@2
	PrintDebug("ChaoStgGarden02MR Prolog\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden02MR_Load);
	LoadObjects_MR();
	v0 = GetTimeOfDay();
	if (v0)
	{
		v1 = v0 - 1;
		if (!v1)
		{
			LoadGameDLL("ChaoStgGarden02MR_Evening", 2);
			ChaoGardenMR_SetLandTable_Evening();
			ModuleDestructors[1] = Print_ChaoStgGarden02MR_Evening_epilog;
			SetChaoLandTable(LandTable_ChaoGardenMR);
			return;
		}
		if (v1 == 1)
		{
			LoadGameDLL("ChaoStgGarden02MR_Night", 2);
			ChaoGardenMR_SetLandTable_Night();
			ModuleDestructors[1] = Print_ChaoStgGarden02MR_Night_epilog;
			SetChaoLandTable(LandTable_ChaoGardenMR);
			return;
		}
	}
	LoadGameDLL("ChaoStgGarden02MR_Daytime", 2);
	ChaoGardenMR_SetLandTable_Day();
	ModuleDestructors[1] = Print_ChaoStgGarden02MR_Daytime_epilog;
	SetChaoLandTable(LandTable_ChaoGardenMR);
}

//Chao Race door
void __cdecl LoadChaoRaceDoorX(ObjectMaster *a1)
{
	ObjectMaster *v1; // eax@1
	EntityData1 *v2; // ecx@2
	ObjectMaster *v1x; // eax@1
	EntityData1 *v2x; // ecx@2
	v1 = LoadChildObject(LoadObj_Data1, OF_SS11, a1);
	if (v1)
	{
		v2 = v1->Data1;
		v2->Position.x = 0;
		v2->Position.y = 0;
		v2->Position.z = -157;
	}
	v1x = LoadChildObject(LoadObj_Data1, OF_SS11, a1);
	if (v1x)
	{
		v2x = v1x->Data1;
		v2x->Position.x = 0;
		v2x->Position.y = 0;
		v2x->Position.z = -247;
	}
}

//Elevator
void __cdecl sub_4145D0(unsigned __int8 a1, unsigned __int8 a2)
{
	DataPointer(int, CutsceneMode, 0x03B22E1C);
	DataPointer(int, NextAct, 0x03B22E18);
	if (CurrentChaoStage == 4)
	{
		SetLevelEntrance(4);
		sub_715730(26, 4);
		NextLevel = 26;
		NextAct = 4;
		CutsceneMode = 3;
	}
	else
	{
		CutsceneMode = 3;
		NextLevel = a1;
		NextAct = a2;
	}
}

void cdecl SetElevatorTexlist()
{
	if (CurrentChaoStage == 4)
	{
		njSetTexture((NJS_TEXLIST*)0x02AA4BF8); //OBJ_SS
	}
	else SetTextureToLevelObj();
}

//Function to set texture/texlist for garden transporters
void SetTransporterTexture()
{
	DataPointer(PVMEntry *, ADV01C_TEXLISTS, 0x038F6EC8);
	HMODULE handle = GetModuleHandle(L"ADV01CMODELS");
	NJS_MODEL_SADX **ADV01C_MODELS = (NJS_MODEL_SADX **)GetProcAddress(handle, "___ADV01C_MODELS");
	ADV01C_MODELS[32]->mats[0].diffuse.color = 0xFFFFFFFF;
	if (CurrentLevel != 32) njSetTexture((NJS_TEXLIST*)0x033A0788); //CHAO_OBJECT
	else njSetTexture(ADV01C_TEXLISTS[6].TexList);
	if (CurrentLevel != 32) ADV01C_MODELS[32]->mats[0].attr_texId = 68;
	else ADV01C_MODELS[32]->mats[0].attr_texId = 1;
}

//Name machine
void cdecl NameMachineTexlist()
{
	njSetTexture((NJS_TEXLIST*)0x033A0788); //CHAO_OBJECT
}

void __cdecl LoadChaoNameMachineX(NJS_VECTOR *position, int yrotation)
{
	EntityData1 *ent; // eax@1
	ObjectMaster *obj;
	ent = LoadObject(LoadObj_Data1, 2, Chao_Name_Machine_Load)->Data1;
	if (CurrentChaoStage == 4)
	{
		ent->Position.x = 178.03f;
		ent->Position.y = 8.56f;
		ent->Position.z = -128.44f;
		ent->Rotation.y = 0xD7B8;
	}
	if (CurrentChaoStage == 5)
	{
		ent->Position.x = 131.67f;
		ent->Position.y = 2.6f;
		ent->Position.z = -204.28f;
		ent->Rotation.x = 0xFFB0;
		ent->Rotation.y = 0xAFD6;
		ent->Rotation.z = 0xFFDE;
	}
	if (CurrentChaoStage == 6)
	{
		ent->Position.x = 239.4137f;
		ent->Position.y = 15.10273f;
		ent->Position.z = -45.98477f;
		ent->Rotation.x = 0xFFDC;
		ent->Rotation.y = 0xC1A8;
		ent->Rotation.z = 0xFFF2;
	}
}

//Chao egg coloring function

void __cdecl sub_78AC80X(NJS_CNK_MODEL *a1, int a2)
{
	__int16 v2; // ax@4
	__int16 v3; // ax@5
	int v4; // ecx@6
	__int16 v5; // ax@8
	DataArray(int, off_389D780, 0x389D780, 4);
	DataArray(int, off_389D7B8, 0x389D7B8, 4);
	DataArray(int, dword_389D7B8, 0x389D7B8, 6);
	DataPointer(D3DMATRIX, stru_389D7E8, 0x0389D7E8);
	DataArray(NJS_TEXLIST, ChaoTexLists, 0x033A1038, 7);
	DataArray(int, dword_389D828, 0x389D828, 13);
	if (a2 == SADXEggColour_Black_TwoTone || a2 == SADXEggColour_BlackShiny_TwoTone)
	{
		WriteData<1>((char*)0x03601516, 0x8F);
		WriteData<1>((char*)0x036009B6, 0x8F);
		WriteData<1>((char*)0x03600F4E, 0x8F);
	}
	else
	{
		WriteData<1>((char*)0x03601516, 0x3D);
		WriteData<1>((char*)0x036009B6, 0x3D);
		WriteData<1>((char*)0x03600F4E, 0x3D);
	}
	switch (a2)
	{
	case SADXEggColour_Black_TwoTone:
	case SADXEggColour_Normal:
		DisableChunkMaterialFlags();
		break;
	case SADXEggColour_Yellow_MonoTone:
	case SADXEggColour_White_MonoTone:
	case SADXEggColour_Brown_MonoTone:
	case SADXEggColour_Aqua_MonoTone:
	case SADXEggColour_Pink_MonoTone:
	case SADXEggColour_Blue_MonoTone:
	case SADXEggColour_Grey_MonoTone:
	case SADXEggColour_Green_MonoTone:
	case SADXEggColour_Red_MonoTone:
	case SADXEggColour_LightGreen_MonoTone:
	case SADXEggColour_Purple_MonoTone:
	case SADXEggColour_Orange_MonoTone:
	case SADXEggColour_Black_MonoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(9u);
		sub_78A320(dword_389D828[a2 - SADXEggColour_Yellow_MonoTone]);
		break;
	case SADXEggColour_Yellow_TwoTone:
	case SADXEggColour_White_TwoTone:
	case SADXEggColour_Brown_TwoTone:
	case SADXEggColour_Aqua_TwoTone:
	case SADXEggColour_Pink_TwoTone:
	case SADXEggColour_Blue_TwoTone:
	case SADXEggColour_Green_TwoTone:
	case SADXEggColour_Red_TwoTone:
	case SADXEggColour_LightGreen_TwoTone:
	case SADXEggColour_Purple_TwoTone:
	case SADXEggColour_Orange_TwoTone:
	case SADXEggColour_Grey_TwoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(8u);
		v2 = GetChunkTextureIndex(a1);
		SetChunkTextureIndexA((unsigned __int16)v2);
		sub_78A320(dword_389D828[a2 - SADXEggColour_Yellow_TwoTone]);
		break;
	case SADXEggColour_NormalShiny:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(6u);
		Direct3D_SetTexList(ChaoTexLists);
		v3 = GetChunkTextureIndex(a1);
		SetChunkTextureIndexA((unsigned __int16)v3);
		SetChunkTextureIndexB(0x22u);
		break;
	case SADXEggColour_YellowShiny_MonoTone:
	case SADXEggColour_WhiteShiny_MonoTone:
	case SADXEggColour_BrownShiny_MonoTone:
	case SADXEggColour_AquaShiny_MonoTone:
	case SADXEggColour_PinkShiny_MonoTone:
	case SADXEggColour_BlueShiny_MonoTone:
	case SADXEggColour_GreyShiny_MonoTone:
	case SADXEggColour_GreenShiny_MonoTone:
	case SADXEggColour_RedShiny_MonoTone:
	case SADXEggColour_LightGreenShiny_MonoTone:
	case SADXEggColour_PurpleShiny_MonoTone:
	case SADXEggColour_OrangeShiny_MonoTone:
	case SADXEggColour_BlackShiny_MonoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(15u);
		Direct3D_SetTexList(ChaoTexLists);
		v4 = dword_389D828[a2 - SADXEggColour_YellowShiny_MonoTone];
		goto LABEL_8;
	case SADXEggColour_YellowShiny_TwoTone:
	case SADXEggColour_WhiteShiny_TwoTone:
	case SADXEggColour_BrownShiny_TwoTone:
	case SADXEggColour_AquaShiny_TwoTone:
	case SADXEggColour_PinkShiny_TwoTone:
	case SADXEggColour_BlueShiny_TwoTone:
	case SADXEggColour_GreyShiny_TwoTone:
	case SADXEggColour_GreenShiny_TwoTone:
	case SADXEggColour_RedShiny_TwoTone:
	case SADXEggColour_LightGreenShiny_TwoTone:
	case SADXEggColour_PurpleShiny_TwoTone:
	case SADXEggColour_OrangeShiny_TwoTone:
	case SADXEggColour_BlackShiny_TwoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(0xEu);
		Direct3D_SetTexList(ChaoTexLists);
		v4 = off_389D780[a2 + 1];
	LABEL_8:
		sub_78A320((int)v4);
		v5 = GetChunkTextureIndex(a1);
		SetChunkTextureIndexA((unsigned __int16)v5);
		SetChunkTextureIndexB(0x22u);
		break;
	case SADXEggColour_YellowJewel:
	case SADXEggColour_WhiteJewel:
	case SADXEggColour_PinkJewel:
	case SADXEggColour_BlueJewel:
	case SADXEggColour_GreenJewel:
	case SADXEggColour_PurpleJewel:
	case SADXEggColour_AquaJewel:
	case SADXEggColour_RedJewel:
	case SADXEggColour_BlackJewel:
	case SADXEggColour_LightGreenJewel:
	case SADXEggColour_OrangeJewel:
	case SADXEggColour_Pearl:
	case SADXEggColour_Metal1:
	case SADXEggColour_Metal2:
	case SADXEggColour_Glass:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(4u);
		Direct3D_SetTexList(ChaoTexLists);
		sub_78A320(-1);
		SetChunkTextureIndexA(a2 - 36);
		break;
	default:
		return;
	}
}

void ScaleFruit()
{
	njScale(0, 0.7f, 0.7f, 0.7f);
	sub_408530(&ChaoNormalFruit);
}

//Chao Race Entry stuff

//Bow Chao

void __cdecl BowChaoThing(NJS_ACTION *action, float frame)
{
	if (bowchaoanim == 1) njAction(action, bowchaoframe); else njAction(action, frame);
}

ObjectMaster *__cdecl sub_72C2E0X()
{
	ObjectMaster *v0; // eax@1
	ObjectMaster *v1; // esi@1
	LoadPVM("OBJ_AL_RACE", (NJS_TEXLIST*)0x033A6404);
	LoadObjects_E();
	return v1;
}

void __cdecl ChaoStgEntrance_MainX(ObjectMaster *a1)
{
	DataPointer(int, TextLanguage, 0x03B0F0E8);
	DataPointer(int, dword_3CA6EB8, 0x3CA6EB8);
	DataPointer(NJS_TEXLIST, AL_TEX_ENT_COMMON_TEXLIST, 0x034232E8);
	DataPointer(NJS_TEXLIST, AL_ENT_CHAR_X_TEX_TEXLIST, 0x034232F0);
	DataPointer(NJS_TEXLIST, AL_ENT_TITLE_X_TEX_TEXLIST, 0x034232F8);
	const char *v1; // [sp-24h] [bp-24h]@5
	NJS_TEXLIST *v2; // [sp-20h] [bp-20h]@5
	unsigned __int16 v3; // [sp-1Ch] [bp-1Ch]@5
	const char *v4; // [sp-Ch] [bp-Ch]@3
	a1->MainSub = sub_7197E0;
	a1->DisplaySub = (void(__cdecl *)(ObjectMaster *))nullsub;
	a1->DeleteSub = sub_7197C0;
	SetGlobalPoint2Col_Colors(0xFF000000, 0xFF000000, 0xFF000000);
	sub_72A750();
	sub_72A570();
	sub_724E60();
	sub_722500();
	LoadChaoTexlist("AL_TEX_COMMON", &ChaoTexLists[1], 1u);
	sub_72C2E0X();
	InitializeSoundManager();
	PlayMusic(MusicIDs_ChaoRaceEntrance_OLD);
	DataPointer(DrawDistance, LevelDrawDistance, 0x03ABDC70);
	LevelDrawDistance.Minimum = -1.0f;
	LevelDrawDistance.Maximum = -12000.0f;
}

void __cdecl LoadRaceEntryX()
{
	if (SkipSA1Entry == 1)
	{
		LoadPVM("CHAO_ENTRANCE", (NJS_TEXLIST*)0x340E934);
		SSGardenStartPoint.Position.x = BK_SSGardenStartPoint.Position.x;
		SSGardenStartPoint.Position.y = BK_SSGardenStartPoint.Position.y;
		SSGardenStartPoint.Position.z = BK_SSGardenStartPoint.Position.z;
		SSGardenStartPoint.YRot = BK_SSGardenStartPoint.YRot;
		PrintDebug("ChaoStgEntrance _prolog begin.\n");
		LoadObject(LoadObj_Data1, 5, ChaoStgEntrance_Main);
		SetChaoLandTable((LandTable*)0x03423700); //PC
		PrintDebug("ChaoStgEntrance _prolog end.\n");
		SkipSA1Entry = 0;
	}
	else
	{
		LoadPVM("AL_RACE01", (NJS_TEXLIST*)0x340E934);
		SSGardenStartPoint.Position.x = 2052;
		SSGardenStartPoint.Position.y = 0;
		SSGardenStartPoint.Position.z = 0;
		SSGardenStartPoint.YRot = NJM_DEG_ANG(180);
		PrintDebug("ChaoStgEntrance _prolog begin.\n");
		LoadObject(LoadObj_Data1, 5, ChaoStgEntrance_MainX);
		SetChaoLandTable(&landtable_00000270); //DC
		PrintDebug("ChaoStgEntrance _prolog end.\n");
	}
}

void LoadSADXEntry()
{
	sub_79E400(2, 0, 0); //Play sound
	SkipSA1Entry = 1;
	sub_715700(2);
}

void ExitRaceEntry()
{
	SkipSA1Entry = 0;
	sub_715700(2);
}

//Chao Race stuff

void __cdecl LoadChaoRaceX()
{
	SkipSA1Entry = 0;
	PrintDebug("ChaoStgRace _prolog begin.\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgRace_Main);
	LoadObjects();
	SetChaoLandTableX(&landtable_00000E64);
	PrintDebug("ChaoStgRace _prolog end.\n");
}