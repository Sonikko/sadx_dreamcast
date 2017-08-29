#include "stdafx.h"
#include "math.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include "Mountain1.h"
#include "Mountain2.h"
#include "Mountain3.h"
#include "RM_Objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DAA8, &landtable_00018CB8),
	ptrdecl(0x97DAAC, &landtable_0001A8FC),
	ptrdecl(0x97DAB0, &landtable_0001E358)
};

DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(float, CurrentDrawDistance, 0x03ABDC74);
DataPointer(signed int, ClipLevel, 0x03ABDCF0);
DataPointer(NJS_TEXLIST, OBJ_MOUNTAIN_TEXLIST, 0x024208A8);
FunctionPointer(double, sub_789320, (float), 0x789320);

NJS_MATERIAL* LevelSpecular[] = {
	//OSaku2
	((NJS_MATERIAL*)0x0243C108),
	((NJS_MATERIAL*)0x0243C11C),
	((NJS_MATERIAL*)0x0243C130),
	((NJS_MATERIAL*)0x0243BB08),
	((NJS_MATERIAL*)0x0243BB1C),
};

NJS_MATERIAL* ObjectSpecular[] = {
	//Platform Asiba01
	((NJS_MATERIAL*)0x0246AB58),
	((NJS_MATERIAL*)0x0246AB6C),
	((NJS_MATERIAL*)0x0246AB80),
	//Propeller box
	((NJS_MATERIAL*)0x02438C64),
	((NJS_MATERIAL*)0x02438C78),
};

NJS_MATERIAL* WhiteDiffuse[] = {
	//Stand light
	((NJS_MATERIAL*)0x02439998),
	((NJS_MATERIAL*)0x024399AC),
	((NJS_MATERIAL*)0x024399C0),
	((NJS_MATERIAL*)0x024399D4),
	//Lamp1
	&matlist_02081D98[0],
	&matlist_02081D98[1],
	//Lamp2
	&matlist_020829F0[0],
	&matlist_020829F0[1],
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

bool ForceWhiteDiffuse(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(1, false);
	diffuse_override(true);
	use_default_diffuse(true);
	return true;
}

void __cdecl sub_600BF0(ObjectMaster *a1, NJS_OBJECT *a2)
{
	EntityData1 *v2; // edi@1
	long double v3; // st7@3
	double v4; // st7@7
	double v5; // st7@7
	float v6; // ST08_4@11
	float v7; // ST08_4@11
	signed int v8; // esi@12
	float z; // ST24_4@13
	float XDist; // ST00_4@13
	unsigned __int8 v11; // sf@14
	unsigned __int8 v12; // of@14
	signed int v13; // [sp+1Ch] [bp-20h]@11
	signed int v14; // [sp+20h] [bp-1Ch]@12
	float v15; // [sp+28h] [bp-14h]@11
	D3DCOLORVALUE v16; // [sp+2Ch] [bp-10h]@3
	float v17; // [sp+40h] [bp+4h]@7
	float v18; // [sp+40h] [bp+4h]@11

	v2 = a1->Data1;
	if (!DroppedFrames && ClipLevel <= 0)
	{
		v16.r = Camera_Data1->Position.x;
		v16.g = Camera_Data1->Position.y;
		v16.b = Camera_Data1->Position.z;
		v3 = 1.0f - fabs(v16.g - v2->Position.y) * 0.025f;
		v2->Scale.y = v3;
		if (v3 < 0)
		{
			v2->Scale.y = 0;
		}
		if (v2->Scale.y > 0.8f)
		{
			v2->Scale.y = 0.8f;
		}
		njSetTexture(&OBJ_MOUNTAIN_TEXLIST);
		v4 = v2->Scale.y * -0.8f - 0.2f;
		v16.a = v4;
		v16.b = v4;
		v16.g = v4;
		v16.r = v4;
		SetMaterialAndSpriteColor((NJS_ARGB *)&v16);
		v5 = Camera_Data1->Position.x;
		v17 = Camera_Data1->Position.z;
		if (v5 < 0)
		{
			v5 = v5 - 2000.0f;
		}
		if (v17 < 0)
		{
			v17 = v17 - 2000.0f;
		}
		v6 = (v5 + 1000.0f) * 0.0005f;
		v15 = sub_789320(v6) * 2000.0f;
		v7 = (v17 + 1000.0f) * 0.0005f;
		v13 = -1;
		v18 = sub_789320(v7) * 2000.0f;
		do
		{
			v8 = -1;
			v14 = -1;
			do
			{
				njPushMatrix(0);
				XDist = (double)v14 * 2000.0f + v15;
				z = (double)v13 * 2000.0f + v18;
				njTranslate(0, XDist, v2->Position.y, z);
				ProcessModelNode_A_Wrapper((NJS_OBJECT *)a2, QueuedModelFlagsB_SomeTextureThing, 1.0f);
				njPopMatrix(1u);
				v14 = ++v8;
			} while (v8 < 2);
			v12 = (v13 + 1) - 2;
			v11 = v13++ - 1 < 0;
		} while (v11 | v12);
		ClampGlobalColorThing_Thing();
	}
}

void __cdecl sub_600BF0Z(ObjectMaster *a1, NJS_OBJECT *a2)
{
	EntityData1 *v2; // edi@1
	long double v3; // st7@3
	double v4; // st7@7
	double v5; // st7@7
	float v6; // ST08_4@11
	float v7; // ST08_4@11
	signed int v8; // esi@12
	float z; // ST24_4@13
	float XDist; // ST00_4@13
	unsigned __int8 v11; // sf@14
	unsigned __int8 v12; // of@14
	signed int v13; // [sp+1Ch] [bp-20h]@11
	signed int v14; // [sp+20h] [bp-1Ch]@12
	float v15; // [sp+28h] [bp-14h]@11
	D3DCOLORVALUE v16; // [sp+2Ch] [bp-10h]@3
	float v17; // [sp+40h] [bp+4h]@7
	float v18; // [sp+40h] [bp+4h]@11
	njSetTexture(&OBJ_MOUNTAIN_TEXLIST);
	njPushMatrix(0);
	ProcessModelNode_A_Wrapper((NJS_OBJECT *)a2, QueuedModelFlagsB_SomeTextureThing, 1.0);
	njPopMatrix(1u);
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init(const char *path)
	{
		HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
		if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
		{
			material_register(LevelSpecular, LengthOfArray(LevelSpecular), &ForceLevelSpecular);
			material_register(ObjectSpecular, LengthOfArray(ObjectSpecular), &ForceObjectSpecular);
			material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
		}
		//WriteJump((void*)0x600BF0, sub_600BF0);
		*(NJS_OBJECT*)0x248213C = object_0208213C; //Lamp1
		*(NJS_OBJECT*)0x2482D94 = object_02082D94; //Lamp2
		//Standing light specular
		((NJS_MATERIAL*)0x02439998)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x024399AC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x024399C0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x024399D4)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		*(NJS_OBJECT*)0x246A624 = object_00181CE0; //O Bpole
		*(NJS_OBJECT*)0x246AB24 = object_001821C0; //O Bpole 2
		*(NJS_MODEL_SADX*)0x2466818 = attach_0017DF2C; //Bridge piece
		*(NJS_MODEL_SADX*)0x2466568 = attach_0017DC94; //Bridge piece 2
		*(NJS_OBJECT*)0x246CAA8 = object_0206CAA8_2; //Cloud
		WriteData((float*)0x006011ED, 30.0f); //Cloud height (Knuckles)
		WriteData((float*)0x006011A9, 60.0f); //Cloud height (Knuckles)
		*(NJS_MODEL_SADX*)0x24390BC = attach_00151A8C; //Light thing
		*(NJS_MODEL_SADX*)0x24394CC = attach_001515D8; //Light thing propeller 1
		*(NJS_MODEL_SADX*)0x24392C4 = attach_001513C8; //Light thing propeller 2
		*(NJS_OBJECT*)0x2439964 = object_001511FC;
		WriteData((void*)0x0060C981, 3, 1); //Light thing blending mode
		matlist_0206C9D4_2[0].diffuse.color = 0xEFFFFFFF;
		matlist_0206C9D4[0].diffuse.color = 0xEFFFFFFF;
		WriteData((void*)0x00600C8F, 0x58, sizeof(char));
		WriteData((NJS_OBJECT**)0x006011CC, (NJS_OBJECT*)&object_0206CAA8);
		ResizeTextureList((NJS_TEXLIST*)0x230FDF4, textures_mountain1);
		ResizeTextureList((NJS_TEXLIST*)0x229B8CC, textures_mountain2);
		ResizeTextureList((NJS_TEXLIST*)0x224096C, textures_mountain3);
		DataArray(NJS_VECTOR, SkyboxScale_RedMountain2, 0x02240628, 3);
		DataArray(FogData, RedMountain1Fog, 0x02240700, 3);
		DataArray(FogData, RedMountain2Fog, 0x02240730, 3);
		DataArray(FogData, RedMountain3Fog, 0x02240760, 3);
		DataArray(DrawDistance, DrawDist_RedMountain1, 0x022406B8, 3);
		DataArray(DrawDistance, DrawDist_RedMountain2, 0x022406D0, 3);
		DataArray(DrawDistance, DrawDist_RedMountain3, 0x022406E8, 3);
		for (int i = 0; i < 3; i++)
		{
			RedMountain1Fog[i].Color = 0xFFFFFFFF;
			RedMountain1Fog[i].Layer = 2000.0f;
			RedMountain1Fog[i].Distance = 16000.0f;
			RedMountain1Fog[i].Toggle = 1;
			RedMountain2Fog[i].Layer = 1000.0f;
			RedMountain2Fog[i].Color = 0xFF000000;
			RedMountain2Fog[i].Distance = 2400.0f;
			RedMountain2Fog[i].Toggle = 1;
			RedMountain3Fog[i].Color = 0xFFFFFFFF;
			RedMountain3Fog[i].Layer = 2000.0f;
			RedMountain3Fog[i].Distance = 16000.0f;
			RedMountain3Fog[i].Toggle = 1;
			DrawDist_RedMountain1[i].Maximum = -16000.0;
			DrawDist_RedMountain3[i].Maximum = -16000.0;
			SkyboxScale_RedMountain2[i].x = 1.0f;
			SkyboxScale_RedMountain2[i].y = 1.0f;
			SkyboxScale_RedMountain2[i].z = 1.0f;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 5 && GameState != 16)
		{
			for (int q = 0; q < LengthOfArray(uv_0206C9F0); q++)
			{
				uv_0206C9F0[q].u = uv_0206C9F0[q].u - 1;
			}
			if (uv_0206C9F0[3].u < -255)
			{
				uv_0206C9F0[0].u = 0;
				uv_0206C9F0[1].u = 0;
				uv_0206C9F0[2].u = 765;
				uv_0206C9F0[3].u = 765;
			}
			if (CurrentAct == 1 && Camera_Data1 != nullptr)
			{
				if (Camera_Data1->Position.y > 900) CurrentDrawDistance = -9000.0f;
			}
		}
	}
}