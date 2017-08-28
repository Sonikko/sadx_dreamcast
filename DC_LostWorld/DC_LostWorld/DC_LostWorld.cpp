#include "stdafx.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include "LostWorld1.h"
#include "LostWorld2.h"
#include "LostWorld3.h"
#include "LostWorld_objects.h"

DataPointer(float, CurrentDrawDist, 0x03ABDC74);

static int animw1 = 44;
static int animw2 = 81;
DataPointer(int, FramerateSetting, 0x0089295C);
DataPointer(NJS_MODEL_SADX, Hasira1Model, 0x2004E80);

PointerInfo pointers[] = {
	ptrdecl(0x97DAE8, &landtable_0000D560),
	ptrdecl(0x97DAEC, &landtable_00063A6C),
	ptrdecl(0x97DAF0, &landtable_000F928C)
};

NJS_MATERIAL* ObjectSpecular[] = {
	//OSuimen
	((NJS_MATERIAL*)0x01FE4CC8),
	//OTap
	((NJS_MATERIAL*)0x0202AA38),
	((NJS_MATERIAL*)0x0202AA4C),

};

bool ForceObjectSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
		if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
		{
			material_register(ObjectSpecular, LengthOfArray(ObjectSpecular), &ForceObjectSpecular);
		}
		((NJS_MATERIAL*)0x0201A13C)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //TurnCube
		((NJS_MATERIAL*)0x0201A150)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //TurnCube
		((NJS_MATERIAL*)0x0201A164)->attrflags |= NJD_FLAG_IGNORE_LIGHT; //TurnCube
		WriteData((void*)0x005E2090, 0xC3u, 1); //Kill water animation in Act 1
		Hasira1Model.mats[0].diffuse.color = 0x99B2B2B2;
		*(NJS_OBJECT*)0x20144CC = object_0013BB70; //Kusa02 type 1
		*(NJS_OBJECT*)0x2015968 = object_0013CA2C; //Kusa02 type 2
		*(NJS_MODEL_SADX*)0x0202FF74 = attach_00151E30; //Aokiswitch
		*(NJS_OBJECT*)0x201AF8C = object_00140C64; //Box part 1
		*(NJS_OBJECT*)0x201B1C4 = object_00140E84; //Box part 2
		*(NJS_OBJECT*)0x201B40C = object_001410B4; //Box part 3
		*(NJS_OBJECT*)0x201B6F4 = object_00141374; //Box part 4
		*(NJS_OBJECT*)0x201B93C = object_001415A4; //Box part 5
		*(NJS_OBJECT*)0x201BBBC = object_0014180C; //Box part 6

		*(NJS_MODEL_SADX*)0x20062E0 = attach_001313BC; //Hasira02
		*(NJS_MODEL_SADX*)0x201CE60 = attach_001426E8; //TPanel

		*(NJS_OBJECT*)0x201F82C = object_00144FD4; //Door front

		((NJS_OBJECT*)0x201C690)->child->model = &attach_00141B5C; //Water switch
		*(NJS_OBJECT*)0x200D9D4 = object_00135F50; //Snake gate
		*(NJS_OBJECT*)0x1FFE9A4 = object_0012BB88; //Ashiba01
		*(NJS_OBJECT*)0x1FFF454 = object_0012C218; //Ashiba02
		*(NJS_OBJECT*)0x1FFFF04 = object_0012C8B4; //Ashiba03
		*(NJS_OBJECT*)0x2023C08 = object_00148264; //Snake head
		*(NJS_OBJECT*)0x20253BC = object_00148E78; //Snake joints
		*(NJS_OBJECT*)0x2025D64 = object_00149374; //Snake joint near the tail
		*(NJS_OBJECT*)0x202670C = object_00149870; //Snake tail
		*(NJS_OBJECT*)0x2024828 = object_001487A0; //Snake tail tip
		*(NJS_MODEL_SADX*)0x2026E38 = attach_00149E7C; //Fire obstacle
		*(NJS_OBJECT*)0x2031810 = object_01C31810; //Ceiling light imitation
		((NJS_OBJECT*)0x01FE9D7C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Water in snake room
		((NJS_OBJECT*)0x01FE9D7C)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Water in snake room
		((NJS_OBJECT*)0x01FE9D7C)->basicdxmodel->mats[0].attr_texId = 44; //Water in snake room
		((NJS_OBJECT*)0x01FE9F38)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Some other water
		((NJS_OBJECT*)0x01FE9F38)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x01FEB668)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Some other water
		((NJS_OBJECT*)0x01FEB668)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x01FEC26C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Some other water
		((NJS_OBJECT*)0x01FEC26C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x1E9B594)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Some other water
		((NJS_OBJECT*)0x1E9B594)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x202E404)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Some other water
		((NJS_OBJECT*)0x202E404)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x279AC80)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Some other water
		((NJS_OBJECT*)0x279AC80)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x279B014)->basicdxmodel->mats[0].diffuse.color = 0x99B2B2B2; //Some other water
		((NJS_OBJECT*)0x279B014)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		WriteData((void*)0x814CB4, 0xc1c80000, 4); //LW2 fog stuff
		WriteData((void*)0x005E315D, 0, 1); //Prevent the mirror room from disabling character lighting
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
			LostWorld1Fog[i].Layer = 1.0f;
			LostWorld1Fog[i].Distance = 3400.0f;
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
			if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) animw1++;
		}
		if (CurrentLevel == 7 && CurrentAct == 1 && GameState != 16)
		{
			auto entity = CharObj1Ptrs[0];
			if (entity != nullptr && entity->Position.x < 7000 && entity->Position.x > 1800) CurrentDrawDist = -6000.0f; else CurrentDrawDist = -2700.0f;
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
			if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) animw2++;
		}	
	}
};
