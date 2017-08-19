void __cdecl LoadRaceEntryX()
{
	SSGardenStartPoint.Position.x = 2083;
	SSGardenStartPoint.Position.y = 0;
	SSGardenStartPoint.Position.z = 0;
	FunctionPointer(void, sub_72A750, (), 0x72A750);
	FunctionPointer(void, sub_72A570, (), 0x72A570);
	FunctionPointer(void, sub_724E60, (), 0x724E60);
	FunctionPointer(void, sub_722500, (), 0x722500);
	PrintDebug("ChaoStgEntrance _prolog begin.\n");
	LoadObject(LoadObj_Data1, 5, ChaoStgEntrance_Main);
	//PlayMusic(MusicIDs_c_btl_cv);
	CurrentLevel = 42;
	CurrentAct = 1;
	//sub_72A750();
	//sub_72A570();
	//sub_724E60();
	//sub_722500();
	//((LandTable*)0x03423700)->TexName = "AL_RACE01";
	//SetChaoLandTable(&landtable_03023700); //PC
	SetChaoLandTable(&landtable_00000270); //DC
	PrintDebug("ChaoStgEntrance _prolog end.\n");
}

ObjectMaster *__cdecl sub_72C2E0X()
{
	DataPointer(int, dword_3CDC6B4, 0x3CDC6B4);
	DataPointer(NJS_OBJECT, stru_366C124, 0x366C124);
	ObjectMaster *v0; // eax@1
	ObjectMaster *v1; // esi@1
	//v0 = LoadObject(LoadObj_UnknownB, 2, (void(__cdecl *)(ObjectMaster *))sub_72C280);
	//v1 = v0;
	//v0->DeleteSub = (void(__cdecl *)(ObjectMaster *))sub_72C210;
	//v0->DisplaySub = (void(__cdecl *)(ObjectMaster *))sub_72C240;
	//dword_3CDC6B4 = (int)v0;
	//InitLandTableObject(&stru_366C124);
	LoadPVM("OBJ_AL_RACE", (NJS_TEXLIST*)0x033A6404);
	LoadObjects_E();
	auto entity = CharObj1Ptrs[0];
	if (entity != nullptr)
	{
		entity->Position.x = 2083;
		entity->Position.y = 0;
		entity->Position.z = 0;
	}
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
	ChaoManager_Load();
	sub_72CD70(); //Camera stuff
	LoadChaoTexlist("AL_TEX_COMMON", &ChaoTexLists[1], 1u);
	sub_72CC30();
	if (TextLanguage)
	{
		if (TextLanguage == 2)
		{
			v4 = "AL_TEX_ENT_COMMON_FR";
		}
		else
		{
			v4 = "AL_TEX_ENT_COMMON_EN";
		}
		LoadChaoTexlist(v4, &AL_TEX_ENT_COMMON_TEXLIST, 1u);
		LoadChaoTexlist("AL_ENT_CHAR_E_TEX", &AL_ENT_CHAR_X_TEX_TEXLIST, 1u);
		v3 = 1;
		v2 = &AL_ENT_TITLE_X_TEX_TEXLIST;
		v1 = "AL_ENT_TITLE_E_TEX";
	}
	else
	{
		LoadChaoTexlist("AL_TEX_ENT_COMMON_JP", &AL_TEX_ENT_COMMON_TEXLIST, 1u);
		LoadChaoTexlist("AL_ENT_CHAR_J_TEX", &AL_ENT_CHAR_X_TEX_TEXLIST, 1u);
		v3 = 1;
		v2 = &AL_ENT_TITLE_X_TEX_TEXLIST;
		v1 = "AL_ENT_TITLE_J_TEX";
	}
	LoadChaoTexlist(v1, v2, v3);
	sub_72CC00(&AL_TEX_ENT_COMMON_TEXLIST, 3, 2, 4);
	sub_716A90();
	sub_72CBC0();
	dword_3CA6EB8 = sub_717160();
	sub_72CB40(); //Prompts
	//sub_72C4A0(); //Some decoration whatever
	//sub_72C3A0(); //Projectors
	sub_72C2E0X();
	InitializeSoundManager();
	PlayMusic(MusicIDs_c_btl_cv);
	DataPointer(DrawDistance, LevelDrawDistance, 0x03ABDC70);
	LevelDrawDistance.Minimum = -1.0f;
	LevelDrawDistance.Maximum = -12000.0f;
	//sub_7153F0();
}
