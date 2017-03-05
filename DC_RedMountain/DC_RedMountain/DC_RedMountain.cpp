#include "stdafx.h"
#include "math.h"
#include <SADXModLoader.h>
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
DataPointer(signed int, ClipLevel, 0x03ABDCF0);
DataPointer(EntityData1*, Camera_Data1, 0x03B2CBB0);
DataPointer(NJS_TEXLIST, OBJ_MOUNTAIN_TEXLIST, 0x024208A8);
FunctionPointer(double, sub_789320, (float), 0x789320);

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
				ProcessModelNode_A_Wrapper((NJS_OBJECT *)a2, 0, 1.0f);
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
	ProcessModelNode_A_Wrapper((NJS_OBJECT *)a2, 0, 1.0);
	njPopMatrix(1u);
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		//WriteJump((void*)0x600BF0, sub_600BF0);
		*(NJS_OBJECT*)0x246CAA8 = object_0206CAA8_2;
		((NJS_OBJECT*)0x243A220)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //that standing light thing
		((NJS_OBJECT*)0x243A220)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //that standing light thing
		((NJS_OBJECT*)0x243A220)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //that standing light thing
		((NJS_OBJECT*)0x243A220)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; //that standing light thing
		matlist_0206C9D4_2[0].diffuse.color = 0xEFFFFFFF;
		matlist_0206C9D4[0].diffuse.color = 0xEFFFFFFF;
		WriteData((void*)0x00600C8F, 0x58, sizeof(char));
		WriteData((NJS_OBJECT**)0x006011CC, (NJS_OBJECT*)&object_0206CAA8);
		ResizeTextureList((NJS_TEXLIST*)0x230FDF4, textures_mountain1);
		ResizeTextureList((NJS_TEXLIST*)0x229B8CC, textures_mountain2);
		ResizeTextureList((NJS_TEXLIST*)0x224096C, textures_mountain3);
		DataArray(FogData, RedMountain1Fog, 0x02240700, 3);
		DataArray(FogData, RedMountain2Fog, 0x02240730, 3);
		DataArray(FogData, RedMountain3Fog, 0x02240760, 3);
		DataArray(DrawDistance, DrawDist_RedMountain1, 0x022406B8, 3);
		DataArray(DrawDistance, DrawDist_RedMountain3, 0x022406E8, 3);
		for (int i = 0; i < 3; i++)
		{
			RedMountain1Fog[i].Color = 0xFFFFFFFF;
			RedMountain1Fog[i].Layer = 2000.0f;
			RedMountain1Fog[i].Distance = 16000.0f;
			RedMountain1Fog[i].Toggle = 1;
			RedMountain2Fog[i].Layer = 1000.0f;
			RedMountain2Fog[i].Distance = 2400.0f;
			RedMountain2Fog[i].Toggle = 1;
			RedMountain3Fog[i].Color = 0xFFFFFFFF;
			RedMountain3Fog[i].Layer = 2000.0f;
			RedMountain3Fog[i].Distance = 16000.0f;
			RedMountain3Fog[i].Toggle = 1;
			DrawDist_RedMountain1[i].Maximum = -16000.0;
			DrawDist_RedMountain3[i].Maximum = -16000.0;
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
		}
	}
}