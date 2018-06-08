#include "stdafx.h"
#include "Mountain1.h"
#include "Mountain2.h"
#include "Mountain3.h"
#include "RM_Objects.h"

DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(float, CurrentDrawDistance, 0x03ABDC74);
FunctionPointer(double, sub_789320, (float), 0x789320);
FunctionPointer(void, sub_600BF0, (ObjectMaster *a1, NJS_OBJECT *a2), 0x600BF0);
static int UVShift1 = 0;
static int UVShift2 = 0;
static double cloudcoloroffset = 0.0f;

NJS_MATERIAL* LevelSpecular_Mountain[] = {
	//OSaku2
	((NJS_MATERIAL*)0x0243C108),
	((NJS_MATERIAL*)0x0243C11C),
	((NJS_MATERIAL*)0x0243C130),
	((NJS_MATERIAL*)0x0243BB08),
	((NJS_MATERIAL*)0x0243BB1C),
};

NJS_MATERIAL* ObjectSpecular_Mountain[] = {
	//Platform Asiba01
	((NJS_MATERIAL*)0x0246AB58),
	((NJS_MATERIAL*)0x0246AB6C),
	((NJS_MATERIAL*)0x0246AB80),
	//Propeller box
	((NJS_MATERIAL*)0x02438C64),
	((NJS_MATERIAL*)0x02438C78),
};

NJS_MATERIAL* WhiteDiffuse_Mountain[] = {
	//Stand light
	((NJS_MATERIAL*)0x02439998),
	((NJS_MATERIAL*)0x024399AC),
	((NJS_MATERIAL*)0x024399C0),
	((NJS_MATERIAL*)0x024399D4),
	//Lamp1
	&matlistSTG05_02081D98[0],
	&matlistSTG05_02081D98[1],
	//Lamp2
	&matlistSTG05_020829F0[0],
	&matlistSTG05_020829F0[1],
};

void RenderRMSky1(ObjectMaster *a1, NJS_OBJECT *a2)
{
	if (EV_MainThread_ptr != nullptr) DrawQueueDepthBias = 400;
	else DrawQueueDepthBias = 8000.0f;
	sub_600BF0(a1, &objectSTG05_0206CAA8);
	DrawQueueDepthBias = 0.0f;
}

void RenderRMSky2(ObjectMaster *a1, NJS_OBJECT *a2)
{
	if (EV_MainThread_ptr != nullptr) DrawQueueDepthBias = 200;
	else DrawQueueDepthBias = 6000.0f;
	sub_600BF0(a1, &objectSTG05_0206CAA8_2);
	DrawQueueDepthBias = 0.0f;
}

void SetCloudColor(NJS_ARGB *a)
{
	SetMaterialAndSpriteColor_Float(0.2f + a->a, 0.2f + a->r, 0.2f + a->g, 0.2f + a->b);
}

void RedMountain_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
	ReplaceBIN_DC("CAM0500S");
	ReplaceBIN_DC("CAM0501E");
	ReplaceBIN_DC("CAM0501S");
	ReplaceBIN_DC("CAM0502K");
	ReplaceBIN_DC("SET0500S");
	ReplaceBIN_DC("SET0501E");
	ReplaceBIN_DC("SET0501S");
	ReplaceBIN_DC("SET0502K");

	switch (EnableSETFixes)
	{
		case SETFixes_Normal:
			AddSETFix("SET0500S");
			AddSETFix("SET0501E");
			AddSETFix("SET0501S");
			AddSETFix("SET0502K");
			break;
		case SETFixes_Extra:
			AddSETFix_Extra("SET0500S");
			AddSETFix_Extra("SET0501E");
			AddSETFix_Extra("SET0501S");
			AddSETFix_Extra("SET0502K");
			break;
		default:
			break;
	}

	ReplacePVM("MOUNTAIN01");
	ReplacePVM("MOUNTAIN02");
	ReplacePVM("MOUNTAIN03");
	ReplacePVM("MOUNTAIN_CARRIER");
	ReplacePVM("MOUNTAIN_E104");
	ReplacePVM("MOUNTAIN_MEXPLOSION");
	ReplacePVM("MOUNTAIN_STEAM");
	ReplacePVM("OBJ_MOUNTAIN");
	ReplacePVM("YOUGAN_ANIM");
	ReplaceBIN("PL_51B", "PL_51X");
	WriteData((LandTable**)0x97DAA8, &landtable_00018CB8);
	WriteData((LandTable**)0x97DAAC, &landtable_0001A8FC);
	WriteData((LandTable**)0x97DAB0, &landtable_0001E358);
	WriteData((double**)0x600C8F, &cloudcoloroffset);
	WriteCall((void*)0x006011D8, RenderRMSky1);
	WriteCall((void*)0x0060121C, RenderRMSky2);
	if (DLLLoaded_Lantern)
	{
		material_register(LevelSpecular_Mountain, LengthOfArray(LevelSpecular_Mountain), &ForceDiffuse0Specular0);
		material_register(ObjectSpecular_Mountain, LengthOfArray(ObjectSpecular_Mountain), &ForceDiffuse0Specular1);
		material_register(WhiteDiffuse_Mountain, LengthOfArray(WhiteDiffuse_Mountain), &ForceWhiteDiffuse1);
	}
	*(NJS_OBJECT*)0x248213C = objectSTG05_0208213C; //Lamp1
	*(NJS_OBJECT*)0x2482D94 = objectSTG05_02082D94; //Lamp2
	//Standing light specular
	((NJS_MATERIAL*)0x02439998)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x024399AC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x024399C0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_MATERIAL*)0x024399D4)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	*(NJS_OBJECT*)0x246A624 = objectSTG05_00181CE0; //O Bpole
	*(NJS_OBJECT*)0x246AB24 = objectSTG05_001821C0; //O Bpole 2
	*(NJS_MODEL_SADX*)0x2466818 = attachSTG05_0017DF2C; //Bridge piece
	*(NJS_MODEL_SADX*)0x2466568 = attachSTG05_0017DC94; //Bridge piece 2
	WriteData((float*)0x006011ED, 30.0f); //Cloud height (Knuckles)
	WriteData((float*)0x006011A9, 60.0f); //Cloud height (Knuckles)
	*(NJS_MODEL_SADX*)0x24390BC = attachSTG05_00151A8C; //Light thing
	*(NJS_MODEL_SADX*)0x24394CC = attachSTG05_001515D8; //Light thing propeller 1
	*(NJS_MODEL_SADX*)0x24392C4 = attachSTG05_001513C8; //Light thing propeller 2
	*(NJS_OBJECT*)0x2439964 = objectSTG05_001511FC; //Standing light thing (object)
	WriteData<1>((void*)0x0060C981, 0x03); //Light thing blending mode
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

	for (unsigned int i = 0; i < 3; i++)
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
void RedMountain_OnFrame()
{
	if (CurrentLevel == 5 && GameState != 16)
	{
		UVShift1 = (UVShift1 - 1 * FramerateSetting) % 255;
		UVShift2 = (UVShift2 - 2 * FramerateSetting) % 255;
		for (unsigned int q = 0; q < LengthOfArray(uvSTG05_0206C9F0); q++)
		{
			uvSTG05_0206C9F0[q].u = uvSTG05_0206C9F0_0[q].u + UVShift1;
			uvSTG05_0206C9F0_2[q].u = uvSTG05_0206C9F0_0[q].u + UVShift2;
		}
		if (CurrentAct == 1 && Camera_Data1 != nullptr)
		{
			if (Camera_Data1->Position.y > 900) CurrentDrawDistance = -9000.0f;
		}
	}
}
