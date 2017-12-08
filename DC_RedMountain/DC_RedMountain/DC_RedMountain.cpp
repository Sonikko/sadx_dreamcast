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

DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(float, DrawQueueDepthBias, 0x03ABD9C0);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(float, CurrentDrawDistance, 0x03ABDC74);
DataPointer(signed int, ClipLevel, 0x03ABDCF0);
DataPointer(NJS_TEXLIST, OBJ_MOUNTAIN_TEXLIST, 0x024208A8);
FunctionPointer(double, sub_789320, (float), 0x789320);
FunctionPointer(void, sub_600BF0, (ObjectMaster *a1, NJS_OBJECT *a2), 0x600BF0);

static int UVShift1 = 0;
static int UVShift2 = 0;

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

void RenderRMSky1(ObjectMaster *a1, NJS_OBJECT *a2)
{
	DrawQueueDepthBias = 8000.0f;
	sub_600BF0(a1, &object_0206CAA8);
}

void RenderRMSky2(ObjectMaster *a1, NJS_OBJECT *a2)
{
	DrawQueueDepthBias = 6000.0f;
	sub_600BF0(a1, &object_0206CAA8_2);
}

void SetCloudColor(NJS_ARGB *a)
{
	SetMaterialAndSpriteColor_Float(0.2f+a->a, 0.2f + a->r, 0.2f + a->g, 0.2f + a->b);
}
extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init(const char *path)
	{
		WriteCall((void*)0x00600CA3, SetCloudColor);
		WriteCall((void*)0x006011D8, RenderRMSky1);
		WriteCall((void*)0x0060121C, RenderRMSky2);
		HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
		if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
		{
			material_register(LevelSpecular, LengthOfArray(LevelSpecular), &ForceLevelSpecular);
			material_register(ObjectSpecular, LengthOfArray(ObjectSpecular), &ForceObjectSpecular);
			material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
		}
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
		WriteData((float*)0x006011ED, 30.0f); //Cloud height (Knuckles)
		WriteData((float*)0x006011A9, 60.0f); //Cloud height (Knuckles)
		*(NJS_MODEL_SADX*)0x24390BC = attach_00151A8C; //Light thing
		*(NJS_MODEL_SADX*)0x24394CC = attach_001515D8; //Light thing propeller 1
		*(NJS_MODEL_SADX*)0x24392C4 = attach_001513C8; //Light thing propeller 2
		*(NJS_OBJECT*)0x2439964 = object_001511FC; //Standing light thing (object)
		WriteData((void*)0x0060C981, 3, 1); //Light thing blending mode
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
			UVShift1 = (UVShift1 - 1 * FramerateSetting) % 255;
			UVShift2 = (UVShift2 - 2 * FramerateSetting) % 255;
			for (int q = 0; q < LengthOfArray(uv_0206C9F0); q++)
			{
				uv_0206C9F0[q].u = uv_0206C9F0_0[q].u + UVShift1;
				uv_0206C9F0_2[q].u = uv_0206C9F0_0[q].u + UVShift2;
			}
			if (CurrentAct == 1 && Camera_Data1 != nullptr)
			{
				if (Camera_Data1->Position.y > 900) CurrentDrawDistance = -9000.0f;
			}
		}
	}
}