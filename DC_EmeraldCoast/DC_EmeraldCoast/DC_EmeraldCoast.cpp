#include "stdafx.h"
#include <SADXModLoader.h>
#include "EmeraldCoast1_PC.h"
#include "EmeraldCoast1.h"
#include "EmeraldCoast2.h"
#include "EmeraldCoast3.h"
#include "EC_Objects.h"

static int anim1 = 82;
static int anim2 = 67;
static int anim3 = 42;
static int anim4 = 71;
static int anim5 = 50;
static int anim6 = 65;
static int anim7 = 57;
static int anim8 = 80;
static float float1 = 0.02;
static float float2 = 66.0;
static int SkyboxHidden = 0;
static int beachsea_water = 0;
static int animframe = 0;
static int inside_secret_area = 0;
static int water_anim = 17;
static NJS_VECTOR oldpos{ 0,0,0 };
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
DataPointer(int, CurrentFogToggle, 0x03ABDC6C);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(float, EC1OceanYShift, 0x010C85A8);
DataPointer(int, DroppedFrames, 0x03B1117C);

PointerInfo pointers[] = {
	ptrdecl(0x97DA28, &landtable_00081554),
	ptrdecl(0x97DA2C, &landtable_000DEB60),
	ptrdecl(0x97DA30, &landtable_0011DD58),
};

void __cdecl Obj_EC23Water_DisplayX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	v1 = a1->Data1;
	if (!DroppedFrames && inside_secret_area == 0)
	{
		njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x10C05E8, 1.0f);
		njPopMatrix(1u);
	}
}

void __cdecl Obj_EC1Water_DisplayX(ObjectMaster *a1)
{
	DataArray(NJS_TEX, uv_00CC0530, 0x10C0530, 4);
	DataArray(NJS_TEX, uv_00CBB000, 0x10BB000, 1300);
	DataPointer(int, EffectActive, 0x3C5E4B0);
	EntityData1 *v1; // esi@1
	v1 = a1->Data1;
	int unitsize_u = 66;
	int unitsize_v = 40;
	int unitsize_u_small = 10;
	int unitsize_v_small = 10;
	int u_add;
	int v_add;
	int u2_add;
	int v2_add;
	if (!DroppedFrames)
	{
		njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
		if (oldpos.x != v1->Position.x)
		{
			u_add = int(255 * (v1->Position.x - oldpos.x) / unitsize_u) % 255;
			u2_add = int(255 * (v1->Position.x - oldpos.x) / unitsize_u_small) % 255;
			uv_00CC0530[0].u = uv_00CC0530[0].u - u_add;
			uv_00CC0530[1].u = uv_00CC0530[1].u - u_add;
			uv_00CC0530[2].u = uv_00CC0530[2].u - u_add;
			uv_00CC0530[3].u = uv_00CC0530[3].u - u_add;
			for (int u_step = 0; u_step < LengthOfArray(uv_00CBB000_d); u_step++)
			{
				uv_00CBB000[u_step].u = uv_00CBB000[u_step].u - u2_add;
			}
		}
		if (oldpos.z != v1->Position.z)
		{
			v_add = int(255 * (v1->Position.z - oldpos.z) / unitsize_v) % 255;
			v2_add = int(255 * (v1->Position.z - oldpos.z) / unitsize_v_small) % 255;
			uv_00CC0530[0].v = uv_00CC0530[0].v - v_add;
			uv_00CC0530[1].v = uv_00CC0530[1].v - v_add;
			uv_00CC0530[2].v = uv_00CC0530[2].v - v_add;
			uv_00CC0530[3].v = uv_00CC0530[3].v - v_add;
			for (int v_step = 0; v_step < 1300; v_step++)
			{
				uv_00CBB000[v_step].v = uv_00CBB000[v_step].v - v2_add;
			}
		}
		oldpos.x = v1->Position.x;
		oldpos.z = v1->Position.z;
		njPushMatrix(0);
		if (EffectActive != 0) njTranslate(0, v1->Position.x + 2475, v1->Position.y, v1->Position.z);
		else njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		ProcessModelNode_AB_Wrapper((NJS_OBJECT*)0x10C05E8, 1.0f);
		njPopMatrix(1u);
		if (EffectActive != 0)
		{
			njPushMatrix(0);
			njTranslateV(0, &v1->Position);
			ProcessModelNode_B((NJS_OBJECT*)0x010C03FC, 1.0f);
			njPopMatrix(1u);
		}
	}
}
extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) void __cdecl Init()
{
	ResizeTextureList((NJS_TEXLIST*)0xF812AC, textures_ecoast1);
	ResizeTextureList((NJS_TEXLIST*)0xEF553C, textures_ecoast2);
	ResizeTextureList((NJS_TEXLIST*)0xE9A4CC, textures_ecoast3);
	((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].diffuse.argb.a = 0x99; //Match dynamic ocean alpha with normal ocean
	*(NJS_OBJECT*)0x10A298C = object_00183CDC; //Jump panel (OJump) 
	*(NJS_OBJECT*)0x10937B4 = object_00174F68; //Pier thing
	*(NJS_OBJECT*)0x10939A4 = object_0017514C; //Log
	*(NJS_OBJECT*)0x10945EC = object_0017514C; //Log2
	*(NJS_OBJECT*)0x1097F8C = object_001795B4; //Pier edge
	*(NJS_OBJECT*)0x1049A1C = object_0012BE80; //Pier small
	*(NJS_OBJECT*)0x104C00C = object_0012E428; //Dolphin
	*(NJS_OBJECT*)0x106BB4C = object_0014DF28; //Whale
	*(NJS_MODEL_SADX*)0x010C06C8 = attach_001A1690; //Spike gate shadow
	HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
	HMODULE IamStupidAndIWantFuckedUpOcean = GetModuleHandle(L"RevertECDrawDistance");
	if (SADXStyleWater == 0)
	{
	ResizeTextureList((NJS_TEXLIST*)0x010C0508, 10); //BEACH_SEA
	//Write floats to fix buggy SADX water positioning code
	//Act 2
	WriteData((float**)0x004F7876, &float1);
	WriteData((float**)0x004F7891, &float1);
	WriteData((float**)0x004F78A4, &float2);
	WriteData((float**)0x004F78B1, &float2);
	//Act 3
	WriteData((float**)0x004F795D, &float1);
	WriteData((float**)0x004F7978, &float1);
	WriteData((float**)0x004F798B, &float2);
	WriteData((float**)0x004F7998, &float2);
	//Kill SADX shit
	WriteData((void*)0x4F8A30, 0xC3u, sizeof(char));
	//Write water rendering functions
	WriteJump((void*)0x00501130, Obj_EC1Water_DisplayX); //Act 1
	WriteJump((void*)0x004F7760, Obj_EC23Water_DisplayX); //Act 2
	WriteJump((void*)0x004F76C0, Obj_EC23Water_DisplayX); //Act 3
	}
	DataArray(PVMEntry, BeachTexlists, 0x0102F408, 25);
	DataArray(DrawDistance, DrawDist_EmeraldCoast1, 0x00E99D94, 3);
	DataArray(DrawDistance, DrawDist_EmeraldCoast2, 0x00E99DAC, 3);
	DataArray(DrawDistance, DrawDist_EmeraldCoast3, 0x00E99DC4, 3);
	DataArray(NJS_VECTOR, SkyboxScale_EmeraldCoast1, 0x00E99CE0, 3);
	DataArray(NJS_VECTOR, SkyboxScale_EmeraldCoast2, 0x00E99D04, 3);
	DataArray(NJS_VECTOR, SkyboxScale_EmeraldCoast3, 0x00E99D28, 3);
	DataArray(FogData, EmeraldCoast1Fog, 0x00E99DDC, 3);
	DataArray(FogData, EmeraldCoast2Fog, 0x00E99E0C, 3);
	DataArray(FogData, EmeraldCoast3Fog, 0x00E99E3C, 3);
	if (SADXStyleWater != 0)
	{
		WriteData((void*)0x004F7749, 0x90, 5); //Kill second water in Act 2
		WriteData((void*)0x004F77E9, 0x90, 5); //Kill second water in Act 3
		BeachTexlists[1].Name = "BEACH_SEAW";
	}
	for (int i = 0; i < 3; i++)
	{
		DrawDist_EmeraldCoast3[i].Maximum = -4000.0f;
		EmeraldCoast3Fog[i].Toggle = 0;
		EmeraldCoast3Fog[i].Layer = -1200.0f;
		EmeraldCoast3Fog[i].Distance = -3000.0f;
		EmeraldCoast3Fog[i].Color = 0xFFFFFFFF;
	}
	if (IamStupidAndIWantFuckedUpOcean == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			if (SADXStyleWater == 0)
			{
				SkyboxScale_EmeraldCoast1[i].x = 1.0f;
				SkyboxScale_EmeraldCoast1[i].y = 1.0f;
				SkyboxScale_EmeraldCoast1[i].z = 1.0f;
				SkyboxScale_EmeraldCoast2[i].x = 1.0f;
				SkyboxScale_EmeraldCoast2[i].y = 1.0f;
				SkyboxScale_EmeraldCoast2[i].z = 1.0f;
				SkyboxScale_EmeraldCoast3[i].x = 1.0f;
				SkyboxScale_EmeraldCoast3[i].y = 1.0f;
				SkyboxScale_EmeraldCoast3[i].z = 1.0f;
			}
			else
			{
				SkyboxScale_EmeraldCoast1[i].x = 1.0f;
				SkyboxScale_EmeraldCoast1[i].y = 0.8f;
				SkyboxScale_EmeraldCoast1[i].z = 0.8f;
				SkyboxScale_EmeraldCoast2[i].x = 1.0f;
				SkyboxScale_EmeraldCoast2[i].y = 1.0f;
				SkyboxScale_EmeraldCoast2[i].z = 1.0f;
				SkyboxScale_EmeraldCoast3[i].x = 0.8f;
				SkyboxScale_EmeraldCoast3[i].y = 0.8f;
				SkyboxScale_EmeraldCoast3[i].z = 0.8f;
			}
			DrawDist_EmeraldCoast1[i].Maximum = -6000.0f;
			DrawDist_EmeraldCoast2[i].Maximum = -3900.0f;
			EmeraldCoast1Fog[i].Toggle = 0;
			EmeraldCoast2Fog[i].Toggle = 0;
		}
	}
}

extern "C" __declspec(dllexport) void __cdecl OnFrame()
{
	DataArray(NJS_TEX, uv_00CC0530, 0x10C0530, 4);
	DataArray(NJS_TEX, uv_00CBB000, 0x10BB000, 1300);
	//Hide skybox bottom in Act 3
	HMODULE IamStupidAndIWantFuckedUpOcean = GetModuleHandle(L"RevertECDrawDistance");
	if (IamStupidAndIWantFuckedUpOcean == 0)
	{
	if (CurrentLevel == 1 && CurrentAct == 2 && Camera_Data1 != nullptr)
	{
		if (Camera_Data1->Position.y < 50 && SkyboxHidden == 0)
		{
			((NJS_OBJECT *)0x103B37C)->evalflags |= NJD_EVAL_HIDE;
			SkyboxHidden = 1;
		}
		if (Camera_Data1->Position.y >= 50 && SkyboxHidden == 1)
		{
			((NJS_OBJECT *)0x103B37C)->evalflags &= ~NJD_EVAL_HIDE;
			SkyboxHidden = 0;
		}
	}
	}
	//Frame Counter and water animation
	if (CurrentLevel == 1 && GameState != 16)
	{
		//Restore ocean UVs on level exit/restart
		if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
		{
			for (int r = 0; r < LengthOfArray(uv_00CC0530_d); r++)
			{
				uv_00CC0530[r].u = uv_00CC0530_d[r].u;
				uv_00CC0530[r].v = uv_00CC0530_d[r].v;
			}
			for (int r2 = 0; r2 < LengthOfArray(uv_00CBB000_d); r2++)
			{
				uv_00CBB000[r2].u = uv_00CBB000_d[r2].u;
				uv_00CBB000[r2].v = uv_00CBB000_d[r2].v;
			}
		}
		animframe++;
		if (beachsea_water > 9) beachsea_water = 0;
		if (CurrentAct == 0)
		{
			((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].attr_texId = beachsea_water;
			((NJS_OBJECT*)0x10C05E8)->basicdxmodel->mats[0].attr_texId = beachsea_water;
			if (animframe % 4 == 0) beachsea_water++;
		}
	}
	if (CurrentLevel == 1 && CurrentAct == 0 && GameState != 16)
		{
			HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
			if (EC1OceanYShift > -1.4f)
			{
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 1].Flags = 0x80040002;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 2].Flags = 0x80040002;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 3].Flags = 0x80040002;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 4].Flags = 0x80040002;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 5].Flags = 0x80040002;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 6].Flags = 0x80040002;
			}
			else
			{
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 1].Flags = 0x80000402;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 2].Flags = 0x80000402;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 3].Flags = 0x80000402;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 4].Flags = 0x80000402;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 5].Flags = 0x80000402;
				collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 6].Flags = 0x80000402;
			}
			if (anim1 > 96) anim1 = 82;
			if (anim2 > 81) anim2 = 67;
			matlist_000755F8[0].attr_texId = anim1;
			matlist_000759CC[0].attr_texId = anim1;
			matlist_00075C74[0].attr_texId = anim1;
			matlist_00075F1C[0].attr_texId = anim1;
			matlist_00076278[0].attr_texId = anim1;
			matlist_00076654[0].attr_texId = anim1;
			matlist_00076FA0[0].attr_texId = anim1;
			matlist_00076B90[0].attr_texId = anim1;
			matlist_00078634[0].attr_texId = anim1;
			matlist_00078120[0].attr_texId = anim1;
			matlist_00078918[0].attr_texId = anim1;
			matlist_000783C8[0].attr_texId = anim1;
			matlist_00078C18[0].attr_texId = anim1;
			matlist_00077EB4[0].attr_texId = anim1;
			matlist_00077374[0].attr_texId = anim1;
			matlist_000776D0[0].attr_texId = anim1;
			matlist_00077A2C[0].attr_texId = anim1;
			matlist_00BAC3E8[4].attr_texId = anim2;
			matlist_00027A00[2].attr_texId = anim2;
			matlist_00026CA0[2].attr_texId = anim2;
			matlist_000246F8[0].attr_texId = anim2;
			matlist_00023628[3].attr_texId = anim2;
			matlist_0002276C[3].attr_texId = anim2;
			matlist_000216E0[3].attr_texId = anim2;
			matlist_0002091C[3].attr_texId = anim2;
			matlist_0001F254[3].attr_texId = anim2;
			matlist_0001E8C4[0].attr_texId = anim2;
			matlist_0001FFE0[2].attr_texId = anim2;
			matlist_0001FFE0[4].attr_texId = anim2;
			matlist_0001DC78[1].attr_texId = anim2;
			if (FramerateSetting < 2 && animframe % 4 == 0 || FramerateSetting == 2 && animframe % 2 == 0 || FramerateSetting > 2)
			{
				anim1++;
				anim2++;
			}
		}
	if (CurrentLevel == 1 && CurrentAct == 1 && GameState != 16)
	{
			HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
			if (anim3 > 56) anim3 = 42;
			if (anim4 > 85) anim4 = 71;
			if (anim7 > 70) anim7 = 57;
			matlist_000D7BB8[0].attr_texId = anim7;
			matlist_0008F1FC[0].attr_texId = anim3;
			matlist_0008F7CC[2].attr_texId = anim3;
			matlist_000907D4[4].attr_texId = anim3;
			matlist_00091358[3].attr_texId = anim3;
			matlist_000920EC[1].attr_texId = anim3;
			matlist_00092E40[2].attr_texId = anim3;
			matlist_00094E34[0].attr_texId = anim3;
			matlist_00095C20[0].attr_texId = anim3;
			matlist_00093FE0[3].attr_texId = anim3;
			matlist_00096A10[2].attr_texId = anim3;
			matlist_0009712C[3].attr_texId = anim3;
			matlist_000DBBA4[0].attr_texId = anim3;
			matlist_000DBBA4[1].attr_texId = anim3;
			matlist_000DBBA4[2].attr_texId = anim3;
			matlist_000DA750[0].attr_texId = anim4;
			matlist_000DA9BC[0].attr_texId = anim4;
			matlist_000DA188[0].attr_texId = anim4;
			matlist_000DA46C[0].attr_texId = anim4;
			matlist_000D9B10[0].attr_texId = anim4;
			matlist_000D9E30[0].attr_texId = anim4;
			matlist_000D9584[0].attr_texId = anim4;
			matlist_000D98A4[0].attr_texId = anim4;
			matlist_000D9084[0].attr_texId = anim4;
			matlist_000D8E18[0].attr_texId = anim4;
			matlist_000D8BA0[0].attr_texId = anim4;
			matlist_000D86A0[0].attr_texId = anim4;
			matlist_000D8254[0].attr_texId = anim4;
			matlist_000D7D64[0].attr_texId = anim4;
			if (FramerateSetting < 2 && animframe % 4 == 0 || FramerateSetting == 2 && animframe % 2 == 0 || FramerateSetting > 2)
			{
				anim3++;
				anim4++;
				anim7++;
			}
	}
	if (CurrentLevel == 1 && CurrentAct == 2 && GameState != 16)
	{
		HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
		if (GameState == 3 || GameState == 4)
		{
			inside_secret_area = 0;
			CurrentFogToggle = 0;
			if (SADXStyleWater != 0)
			{
			WriteData((void*)0x004F777E, 0xE8, 1); //Restore the ocean
			WriteData((void*)0x004F777F, 0xBD, 1); //Restore the ocean
			WriteData((void*)0x004F7780, 0xD0, 1); //Restore the ocean
			WriteData((void*)0x004F7781, 0xF0, 1); //Restore the ocean
			WriteData((void*)0x004F7782, 0xFF, 1); //Restore the ocean
			}
		}
		if (Camera_Data1 != nullptr && Camera_Data1->Position.z > 2000)
		{
			inside_secret_area = 1;
			CurrentFogToggle = 1;
			if (CurrentFogLayer < -21) CurrentFogLayer = CurrentFogLayer + 20;
			if (SADXStyleWater != 0) WriteData((void*)0x004F777E, 0x90, 5); //Kill the ocean temporarily
		}
		else
		{
			if (CurrentFogLayer > -1200) CurrentFogLayer = CurrentFogLayer - 20;
			if (CurrentFogLayer <= -1200 && CurrentFogToggle == 1)
			{
				inside_secret_area = 0;
				CurrentFogToggle = 0;
				if (SADXStyleWater != 0)
				{
				WriteData((void*)0x004F777E, 0xE8, 1); //Restore the ocean
				WriteData((void*)0x004F777F, 0xBD, 1); //Restore the ocean
				WriteData((void*)0x004F7780, 0xD0, 1); //Restore the ocean
				WriteData((void*)0x004F7781, 0xF0, 1); //Restore the ocean
				WriteData((void*)0x004F7782, 0xFF, 1); //Restore the ocean
				}
			}
		}
			if (anim5 > 64) anim5 = 50;
			if (anim6 > 79) anim6 = 65;
			if (anim8 > 93) anim8 = 80;
			matlist_00114D08[0].attr_texId = anim8;
			matlist_00117310[0].attr_texId = anim5;
			matlist_0011784C[0].attr_texId = anim5;
			matlist_00117C5C[0].attr_texId = anim5;
			matlist_00118030[0].attr_texId = anim5;
			matlist_0011829C[0].attr_texId = anim5;
			matlist_00118544[0].attr_texId = anim5;
			matlist_001187B0[0].attr_texId = anim5;
			matlist_00118A94[0].attr_texId = anim5;
			matlist_00118D94[0].attr_texId = anim5;
			matlist_000E5260[3].attr_texId = anim6;
			matlist_000E611C[3].attr_texId = anim6;
			matlist_000E71EC[0].attr_texId = anim6;
			matlist_000E97EC[2].attr_texId = anim6;
			matlist_000EA520[2].attr_texId = anim6;
			matlist_000EB0E0[0].attr_texId = anim6;
			matlist_000EF7E4[0].attr_texId = anim6;
			matlist_000EF7E4[2].attr_texId = anim6;
			matlist_000F8F6C[0].attr_texId = anim6;
			matlist_000F95F0[0].attr_texId = anim6;
			matlist_000F9D10[0].attr_texId = anim6;
			matlist_000F9D10[1].attr_texId = anim6;
			matlist_000FB004[0].attr_texId = anim6;
			matlist_000FB004[1].attr_texId = anim6;
			matlist_000FEE58[0].attr_texId = anim6;
			matlist_000FF3A0[0].attr_texId = anim6;
			matlist_000FFD48[0].attr_texId = anim6;
			matlist_00101320[0].attr_texId = anim6;
			matlist_00101E9C[0].attr_texId = anim6;
			matlist_0010280C[0].attr_texId = anim6;
			matlist_001033A8[0].attr_texId = anim6;
			matlist_00103DC8[0].attr_texId = anim6;
			matlist_00104920[0].attr_texId = anim6;
			matlist_00105630[0].attr_texId = anim6;
			matlist_00108120[0].attr_texId = anim6;
			matlist_0010C7F4[0].attr_texId = anim6;
			matlist_0010D618[0].attr_texId = anim6;
			matlist_0010E304[0].attr_texId = anim6;
			matlist_0010F148[0].attr_texId = anim6;
			matlist_00110184[0].attr_texId = anim6;
			matlist_00110184[1].attr_texId = anim6;
			matlist_00110DFC[0].attr_texId = anim6;
			matlist_0011B12C[0].attr_texId = anim6;
			matlist_0011B12C[1].attr_texId = anim6;
			if (FramerateSetting < 2 && animframe % 4 == 0 || FramerateSetting == 2 && animframe % 2 == 0 || FramerateSetting > 2)
			{
				anim5++;
				anim6++;
				anim8++;
			}
	}
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };

