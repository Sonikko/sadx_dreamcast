#include "stdafx.h"
#include "SADXModLoader.h"
#include "LostWorld1.h"
#include "LostWorld2.h"
#include "LostWorld3.h"
#include "LostWorld_objects.h"

DataPointer(float, CurrentDrawDist, 0x03ABDC74);

static int animw1 = 44;
static int animw2 = 81;

PointerInfo pointers[] = {
	ptrdecl(0x97DAE8, &landtable_0000D560),
	ptrdecl(0x97DAEC, &landtable_00063A6C),
	ptrdecl(0x97DAF0, &landtable_000F928C)
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		*(NJS_OBJECT*)0x1FFE9A4 = object_0012BB88; //Ashiba01
		*(NJS_OBJECT*)0x1FFF454 = object_0012C218; //Ashiba02
		*(NJS_OBJECT*)0x1FFFF04 = object_0012C8B4; //Ashiba03
		*(NJS_OBJECT*)0x2023C08 = object_00148264; //Snake head
		*(NJS_OBJECT*)0x20253BC = object_00149374; //Snake joints
		*(NJS_MODEL_SADX*)0x2026E38 = attach_00149E7C; //Fire obstacle
		((NJS_OBJECT*)0x2031810)->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE; //Ceiling light
		((NJS_OBJECT*)0x2031810)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF; //Ceiling light
		WriteData((void*)0x814CB4, 0xc1c80000, 4); //LW2 fog stuff
		ResizeTextureList((NJS_TEXLIST*)0x1F6F02C, textures_lw1);
		ResizeTextureList((NJS_TEXLIST*)0x1E9B9AC, textures_lw2);
		ResizeTextureList((NJS_TEXLIST*)0x1E79D80, textures_lw3);
		DataArray(FogData, LostWorld1Fog, 0x01E79AAC, 3);
		DataArray(FogData, LostWorld2Fog, 0x01E79ADC, 3);
		DataArray(FogData, LostWorld3Fog, 0x01E79B0C, 3);
		DataArray(DrawDistance, DrawDist_LostWorld2, 0x01E79A7C, 3);
		for (int i = 0; i < 3; i++)
		{
			LostWorld1Fog[i].Color = 0xFFFFFFFF;
			LostWorld1Fog[i].Layer = 150.0f;
			LostWorld1Fog[i].Distance = 3200.0f;
			LostWorld1Fog[i].Toggle = 1;
			LostWorld2Fog[i].Color = 0xFFFFFFFF;
			LostWorld2Fog[i].Layer = 150.0f;
			LostWorld2Fog[i].Distance = 3200.0f;
			LostWorld2Fog[i].Toggle = 1;
			LostWorld3Fog[i].Layer = 500.0f;
			LostWorld3Fog[i].Distance = 2500.0f;
			LostWorld3Fog[i].Color = 0xFFFFFFFF;
			DrawDist_LostWorld2[i].Maximum = -2700.0;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 7 && CurrentAct == 0 && GameState != 16)
		{
			if (animw1 > 57) animw1 = 44;
			((NJS_OBJECT*)0x01FE9D7C)->basicdxmodel->mats[0].attr_texId = animw1;
			matlist_000584CC[0].attr_texId = animw1;
			matlist_00057E90[0].attr_texId = animw1;
			matlist_00059BE8[0].attr_texId = animw1;
			if (LevelFrameCount % 3 == 0) animw1++;
		}
		if (CurrentLevel == 7 && CurrentAct == 1 && GameState != 16)
		{
			auto entity = CharObj1Ptrs[0];
			if (entity != nullptr && entity->Position.y < -400 && entity->Position.y > -1400) CurrentDrawDist = -6000.0f; else CurrentDrawDist = -2700.0f;
			if (animw2 > 94) animw2 = 81;
			matlist_000E924C[0].attr_texId = animw2;
			matlist_000E3610[0].attr_texId = animw2;
			matlist_000E8A20[0].attr_texId = animw2;
			matlist_000E43D0[0].attr_texId = animw2;
			matlist_000E7228[0].attr_texId = animw2;
			matlist_000EF078[0].attr_texId = animw2;
			matlist_000ECF80[0].attr_texId = animw2;
			matlist_000EABDC[0].attr_texId = animw2;
			matlist_000EBB3C[0].attr_texId = animw2;
			if (LevelFrameCount % 3 == 0) animw2++;
		}	
	}
};
