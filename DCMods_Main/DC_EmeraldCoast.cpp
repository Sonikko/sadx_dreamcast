#include "stdafx.h"
#include "EmeraldCoast1_PC.h"
#include "EmeraldCoast1.h"
#include "EmeraldCoast2.h"
#include "EmeraldCoast3.h"
#include "EmeraldCoast_Objects.h"

static int anim1 = 82;
static int anim2 = 67;
static int anim3 = 42;
static int anim4 = 71;
static int anim5 = 50;
static int anim6 = 65;
static int anim7 = 57;
static int anim8 = 80;
static float float1 = 0.02f;
static float float2 = 66.0f;
static int SkyboxHidden = 0;
static int beachsea_water = 0;
static int animframe = 0;
static int inside_secret_area = 0;
static int water_anim = 17;
static bool lilocean = false;
static bool SADXStyleWater = false;
static bool IamStupidAndIWantFuckedUpOcean = false;
static NJS_VECTOR oldpos{ 0,0,0 };

DataArray(NJS_TEX, uvSTG01_00CBB000_data, 0x10BB000, LengthOfArray(uvSTG01_00CBB000));
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
DataPointer(int, CurrentFogToggle, 0x03ABDC6C);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(float, EC1OceanYShift, 0x010C85A8);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(OceanData, OceanDataA, 0x03D0B8F0);
DataPointer(OceanData, OceanDataB, 0x03D0B90C);
FunctionPointer(void, DrawEmeraldCoastOcean, (OceanData *x), 0x004F8A30);
FunctionPointer(double, sub_789320, (float a2), 0x789320);

int roundfloat(float r) {
	return (r > 0.0) ? (r + 0.5) : (r - 0.5);
}

void __cdecl Obj_EC23Water_DisplayX(ObjectMaster *a1)
{
	DataArray(NJS_TEX, uvSTG01_00CC0530, 0x10C0530, 4);
	EntityData1 *v1; // esi@1
	v1 = a1->Data1;
	int OceanUVShift1;
	float z1; // ST14_4@1
	double z2; // st7@1
	double z3; // st6@1
	if (SADXStyleWater == false)
	{
		if (!DroppedFrames && (inside_secret_area == 0 || EV_MainThread_ptr != nullptr))
		{
			njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
			njPushMatrix(0);
			njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
			OceanUVShift1 = int(njSin(FrameCounterUnpaused << 7) * 96.0f + 2.5f) % 255;
			uvSTG01_00CC0530[0].u = uvSTG01_00CC0530_d[0].u + OceanUVShift1;
			uvSTG01_00CC0530[1].u = uvSTG01_00CC0530_d[1].u + OceanUVShift1;
			uvSTG01_00CC0530[2].u = uvSTG01_00CC0530_d[2].u + OceanUVShift1;
			uvSTG01_00CC0530[3].u = uvSTG01_00CC0530_d[3].u + OceanUVShift1;
			DrawQueueDepthBias = -25952.0f;
			ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x10C05E8, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			DrawQueueDepthBias = 0;
			njPopMatrix(1u);
		}
	}
	else
	{
		if (inside_secret_area == 0)
		{
			DisableFog();
			njSetTexture((NJS_TEXLIST*)0x010C0508);
			if (CurrentAct == 2)
			{
				OceanDataA.Position.z = -800.0f;
				OceanDataA.Position.x = 4000.0f;
			}
			DrawModelCallback_Queue((void(__cdecl *)(void *))EmeraldCoast_OceanDraw, &OceanDataA, -17952.0, (QueuedModelFlagsB)0);
		}
	}
	if (CurrentLevel == 1 && CurrentAct == 1)
	{
		njSetTexture((NJS_TEXLIST*)&texlist_ecoast2);
		njPushMatrix(0);
		njTranslate(0, 0, 0, 0);
		DrawQueueDepthBias = 1000.0f;
		ProcessModelNode_A_Wrapper(&objectSTG01_000DB618, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		ProcessModelNode_A_Wrapper(&objectSTG01_000DB64C, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		ProcessModelNode_A_Wrapper(&objectSTG01_000DB680, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		ProcessModelNode_A_Wrapper(&objectSTG01_000DB6B4, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		ProcessModelNode_A_Wrapper(&objectSTG01_000DB6E8, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		ProcessModelNode_A_Wrapper(&objectSTG01_000DB71C, QueuedModelFlagsB_SomeTextureThing, 1.0f);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
	}
}

void __cdecl Obj_EC1Water_DisplayX(ObjectMaster *a1)
{
	DataPointer(float, flt_7E00DC, 0x7E00DC);
	DataPointer(float, flt_7DF1B0, 0x7DF1B0);
	auto entity = EntityData1Ptrs[0];
	double v2;
	int OceanUVShift1;
	DataArray(NJS_TEX, uvSTG01_00CC0530, 0x10C0530, 4);
	DataPointer(int, EffectActive, 0x3C5E4B0);
	DataPointer(int, FrameCounterUnpaused, 0x03ABDF5C);
	EntityData1 *v1; // esi@1
	v1 = a1->Data1;
	int unitsize_u_small = 10;
	int unitsize_v_small = 10;
	float u2_add;
	float v2_add;
	int u2_delta;
	int v2_delta;
	DisableFog();
	if (*(signed int*)&v1->CharIndex)
	{
		v2 = njSin(FrameCounterUnpaused << 11) * 1.5f + 0.2f;
		EC1OceanYShift = v2;
	}
	else
	{
		if (EC1OceanYShift > -1.5f)
		{
			EC1OceanYShift = EC1OceanYShift - 0.1f;
		}
	}
	if (entity != nullptr)
	{
		if (entity->Position.x>1800)
		{
			lilocean = true;
			WriteData((float**)0x00501824, &flt_7E00DC);
			WriteData((float**)0x00501849, &flt_7E00DC);
			WriteData((float**)0x00501832, &flt_7DF1B0);
			WriteData((float**)0x0050185B, &flt_7DF1B0);
		}
		if (entity->Position.x < 1400) lilocean = false;
	}
	if (lilocean == false)
	{
		if (SADXStyleWater == false)
		{
			WriteData((float**)0x00501824, &float1);
			WriteData((float**)0x00501849, &float1);
			WriteData((float**)0x00501832, &float2);
			WriteData((float**)0x0050185B, &float2);
			if (!DroppedFrames);
			{
				njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
				njPushMatrix(0);
				njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
				OceanUVShift1 = int(njSin(FrameCounterUnpaused << 7) * 96.0f + 2.5f) % 255;
				uvSTG01_00CC0530[0].u = uvSTG01_00CC0530_d[0].u + OceanUVShift1;
				uvSTG01_00CC0530[1].u = uvSTG01_00CC0530_d[1].u + OceanUVShift1;
				uvSTG01_00CC0530[2].u = uvSTG01_00CC0530_d[2].u + OceanUVShift1;
				uvSTG01_00CC0530[3].u = uvSTG01_00CC0530_d[3].u + OceanUVShift1;
				DrawQueueDepthBias = -19952.0f;
				ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x10C05E8, QueuedModelFlagsB_SomeTextureThing, 1.0f);
				njPopMatrix(1u);
				DrawQueueDepthBias = 0;
			}
		}
		else
		{
			njSetTexture((NJS_TEXLIST*)0x010C0508);
			if (v1->CharIndex)
			{
				v2 = njSin(FrameCounterUnpaused << 11) * 3.0f + 2.5f;
				EC1OceanYShift = v2;
				OceanDataA.Position.y = v2;
			}
			else
			{
				if (EC1OceanYShift > -1.5f)
				{
					EC1OceanYShift = EC1OceanYShift - 0.1f;
				}
				OceanDataA.Position.y = EC1OceanYShift;
			}
			DrawModelCallback_Queue((void(__cdecl *)(void *))DrawEmeraldCoastOcean, &OceanDataA, -17952.0f, (QueuedModelFlagsB)0);
		}
	}
	else
	{
		if (!DroppedFrames)
		{
			njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
			if (oldpos.x != v1->Position.x)
			{
				u2_add = int(255 * (v1->Position.x - oldpos.x) / unitsize_u_small) % 255;
				if (SADXStyleWater == true) u2_add = roundfloat(1.5f * u2_add);
				for (unsigned int u_step = 0; u_step < LengthOfArray(uvSTG01_00CBB000_d); u_step++)
				{
					uvSTG01_00CBB000_data[u_step].u = uvSTG01_00CBB000_data[u_step].u - u2_add;
					u2_delta = uvSTG01_00CBB000_data[u_step].u - uvSTG01_00CBB000_d[u_step].u;
					uvSTG01_00CBB000_data[u_step].u = uvSTG01_00CBB000_d[u_step].u + (u2_delta % 255);
					uvSTG01_00CBB000[u_step].u = uvSTG01_00CBB000_data[u_step].u;
				}
			}
			if (oldpos.z != v1->Position.z)
			{
				v2_add = int(255 * (v1->Position.z - oldpos.z) / unitsize_v_small) % 255;
				if (SADXStyleWater == true) v2_add = roundfloat(0.5f * v2_add);
				for (unsigned int v_step = 0; v_step < LengthOfArray(uvSTG01_00CBB000_d); v_step++)
				{
					uvSTG01_00CBB000_data[v_step].v = uvSTG01_00CBB000_data[v_step].v - v2_add;
					v2_delta = uvSTG01_00CBB000_data[v_step].v - uvSTG01_00CBB000_d[v_step].v;
					uvSTG01_00CBB000_data[v_step].v = uvSTG01_00CBB000_d[v_step].v + (v2_delta % 255);
					uvSTG01_00CBB000[v_step].v = uvSTG01_00CBB000_data[v_step].v;
				}
			}
			oldpos.x = v1->Position.x;
			oldpos.z = v1->Position.z;
			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z);
			DrawQueueDepthBias = -19952.0f;
			EC1OceanYShift = -1.5f;
			if (entity->Position.x>4850.0f) ProcessModelNode_D_Wrapper((NJS_OBJECT*)0x010C03FC, 1.0f);
			else ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x010C03FC, QueuedModelFlagsB_SomeTextureThing, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 2000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 2000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 2000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z - 2000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z - 2000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z - 2000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 2000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 2000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 2000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z + 2000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z + 2000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z + 2000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&objectSTG01_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);
			DrawQueueDepthBias = 0;
		}
	}
}

void EC1WaterAnimation_SADX()
{
	if (SADXStyleWater == true && beachsea_water <= 14) njSetTextureNum(beachsea_water);
}

NJS_MATERIAL* ObjectSpecular_STG01[] = {
	((NJS_MATERIAL*)0x010C0510),
	((NJS_MATERIAL*)0x008BE2D0),
	((NJS_MATERIAL*)0x008BE2E4),
	((NJS_MATERIAL*)0x008BE1C8),
	&matlistSTG01_00CBA58C[0],
	((NJS_MATERIAL*)0x0109AF00),
	((NJS_MATERIAL*)0x0109AF14),
	((NJS_MATERIAL*)0x0109AF28),
	((NJS_MATERIAL*)0x0109AF3C),
	((NJS_MATERIAL*)0x0109AF50),
};

NJS_MATERIAL* LevelSpecular_STG01[] = {
	&matlistSTG01_0014B7BC[0],
	&matlistSTG01_0014B7BC[1],
	&matlistSTG01_0014B7BC[2],
	&matlistSTG01_0014B7BC[3],
	&matlistSTG01_0014B7BC[4],
	&matlistSTG01_00059D88[6],
	&matlistSTG01_00108488[6],
	((NJS_MATERIAL*)0x0109BB18),
	((NJS_MATERIAL*)0x0109BB2C),
	((NJS_MATERIAL*)0x0109BB40),
	((NJS_MATERIAL*)0x01043278),
	((NJS_MATERIAL*)0x0104328C),
	((NJS_MATERIAL*)0x010432A0),
	((NJS_MATERIAL*)0x010429D0),
	((NJS_MATERIAL*)0x010429E4),
	((NJS_MATERIAL*)0x010429F8),
	((NJS_MATERIAL*)0x01042A0C),
	((NJS_MATERIAL*)0x0109B388),
	((NJS_MATERIAL*)0x0109B39C),
	((NJS_MATERIAL*)0x0109B3B0),
	((NJS_MATERIAL*)0x0109B688),
	((NJS_MATERIAL*)0x0109B69C),
	((NJS_MATERIAL*)0x0109B6B0),
	((NJS_MATERIAL*)0x0109B6C4),
	((NJS_MATERIAL*)0x0109B6D8),
	((NJS_MATERIAL*)0x010A6064),
	((NJS_MATERIAL*)0x010A6078),
	((NJS_MATERIAL*)0x010A5D9C),
	((NJS_MATERIAL*)0x010A5DB0),
	((NJS_MATERIAL*)0x010A5AD8),
	((NJS_MATERIAL*)0x010A5AEC),
	&matlistSTG01_0012C6E0[0],
	&matlistSTG01_0012C6E0[1],
	&matlistSTG01_0012C6E0[2],
	&matlistSTG01_0012C6E0[3],
	((NJS_MATERIAL*)0x038CA220),
	((NJS_MATERIAL*)0x038CA234),
	((NJS_MATERIAL*)0x038C9DF8),
	((NJS_MATERIAL*)0x038C9E0C),
	&matlistSTG01_00C1AC80[4],
	&matlistSTG01_00BE30C0[16],
	&matlistSTG01_0004DB6C[11],
	((NJS_MATERIAL*)0x0108B9F0),
	((NJS_MATERIAL*)0x0108BA04),
	((NJS_MATERIAL*)0x0108BA18),
	((NJS_MATERIAL*)0x0108BA2C),
	((NJS_MATERIAL*)0x01083868),
	((NJS_MATERIAL*)0x0108387C),
	((NJS_MATERIAL*)0x01083890),
	((NJS_MATERIAL*)0x010838A4),
	((NJS_MATERIAL*)0x010840A0),
	((NJS_MATERIAL*)0x01084C8C),
	((NJS_MATERIAL*)0x01084CA0),
	((NJS_MATERIAL*)0x01084CB4),
	((NJS_MATERIAL*)0x01085478),
	((NJS_MATERIAL*)0x01087080),
	((NJS_MATERIAL*)0x01087094),
	((NJS_MATERIAL*)0x01087C88),
	((NJS_MATERIAL*)0x01087E20),
	((NJS_MATERIAL*)0x01088090),
	((NJS_MATERIAL*)0x01088328),
	((NJS_MATERIAL*)0x01088598),
	((NJS_MATERIAL*)0x01088700),
	((NJS_MATERIAL*)0x01089354),
	((NJS_MATERIAL*)0x01089670),
	((NJS_MATERIAL*)0x01089898),
	((NJS_MATERIAL*)0x01089A38),
	((NJS_MATERIAL*)0x01089DB4),
	((NJS_MATERIAL*)0x01089FD0),
	((NJS_MATERIAL*)0x0108A3A8),
	((NJS_MATERIAL*)0x0108A3BC),
	((NJS_MATERIAL*)0x0108A3D0),
	((NJS_MATERIAL*)0x0108AC94),
	((NJS_MATERIAL*)0x0108ACA8),
	((NJS_MATERIAL*)0x0108AFAC),
	((NJS_MATERIAL*)0x0108AFC0),
	((NJS_MATERIAL*)0x0108B19C),
	((NJS_MATERIAL*)0x0108B1B0),
	((NJS_MATERIAL*)0x0108B3DC),
	((NJS_MATERIAL*)0x0108B3F0),
	((NJS_MATERIAL*)0x0108B58C),
	((NJS_MATERIAL*)0x0108B6E0),
};

void WhaleSplash(NJS_OBJECT *a1)
{
	DrawQueueDepthBias = 8000.0f;
	ProcessModelNode(a1, (QueuedModelFlagsB)0, 1.0f);
}

void EmeraldCoast_Init(const IniFile *config, const HelperFunctions &helperFunctions)
{
	ReplaceBIN_DC("SET0100E");
	ReplaceBIN_DC("SET0100S");
	ReplaceBIN_DC("SET0101M");
	ReplaceBIN_DC("SET0101S");
	ReplaceBIN_DC("SET0102B");
	ReplaceBIN_DC("SET0102S");

	switch (EnableSETFixes)
	{
		case SETFixes_Normal:
			AddSETFix("SET0100S");
			AddSETFix("SET0100E");
			AddSETFix("SET0101S");
			break;
		case SETFixes_Extra:
			AddSETFix_Extra("SET0100S");
			AddSETFix_Extra("SET0100E");
			AddSETFix_Extra("SET0101S");
			break;
		default:
			break;
	}

	ReplacePVM("BEACH01");
	ReplacePVM("BEACH02");
	ReplacePVM("BEACH03");
	ReplacePVM("BG_BEACH");
	ReplacePVM("OBJ_BEACH");

	// Load configuration settings.
	SADXStyleWater = config->getBool("SADX Style Water", "EmeraldCoast", false);
	IamStupidAndIWantFuckedUpOcean = config->getBool("Miscellaneous", "RevertEmeraldCoastDrawDistance", false);

	//Landtables
	WriteData((LandTable**)0x97DA28, &landtable_00081554); //Act 1
	WriteData((LandTable**)0x97DA2C, &landtable_000DEB60); //Act 2
	WriteData((LandTable**)0x97DA30, &landtable_0011DD58); //Act 3
	WriteCall((void*)0x00502F8F, WhaleSplash);
	WriteCall((void*)0x00502F9A, WhaleSplash);
	if (DLLLoaded_Lantern)
	{
		material_register(LevelSpecular_STG01, LengthOfArray(LevelSpecular_STG01), &ForceDiffuse0Specular0);
		material_register(ObjectSpecular_STG01, LengthOfArray(ObjectSpecular_STG01), &ForceDiffuse0Specular1);
	}
	WriteData<2>((void*)0x004F8A9A, 0x90); //Disable water animation in Act 1
	WriteData<2>((char*)0x004F7816, 0xFF); //Disable water animation in Act 2
	WriteData<2>((char*)0x004F78E6, 0xFF); //Disable water animation in Act 3
	((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].diffuse.argb.a = 0x99; //Match dynamic ocean alpha with normal ocean
	if (SADXStyleWater)
	{
		ReplacePVMX_SADXStyleWater("BEACH_SEA");
		ResizeTextureList((NJS_TEXLIST*)0x010C0508, 32); //BEACH_SEA
		//Act 1
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 1].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 2].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 3].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 4].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 5].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 6].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 7].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 8].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 9].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 10].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 11].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 12].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 13].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 14].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 15].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 16].Flags = 0x80000402;
		collist_0007D6C0[LengthOfArray(collist_0007D6C0) - 17].Flags = 0x80000402;
		//Act 2
		collist_000DD600[LengthOfArray(collist_000DD600) - 1].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 2].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 3].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 4].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 5].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 6].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 7].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 8].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 9].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 10].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 11].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 12].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 13].Flags = 0x80000402;
		collist_000DD600[LengthOfArray(collist_000DD600) - 14].Flags = 0x80000402;
		//Act 3
		collist_0011C2A0[LengthOfArray(collist_0011C2A0) - 1].Flags = 0x80000402;
		collist_0011C2A0[LengthOfArray(collist_0011C2A0) - 2].Flags = 0x80000402;
		collist_0011C2A0[LengthOfArray(collist_0011C2A0) - 3].Flags = 0x80000402;
		collist_0011C2A0[LengthOfArray(collist_0011C2A0) - 4].Flags = 0x80000402;
		collist_0011C2A0[LengthOfArray(collist_0011C2A0) - 5].Flags = 0x80000402;
		collist_0011C2A0[LengthOfArray(collist_0011C2A0) - 6].Flags = 0x80000402;
		for (unsigned int rq = 0; rq < LengthOfArray(uvSTG01_00CBB000_d); rq++)
		{
			uvSTG01_00CBB000_d[rq].u = round(0.5 * uvSTG01_00CBB000_d[rq].u);
			uvSTG01_00CBB000_d[rq].v = round(0.5 * uvSTG01_00CBB000_d[rq].v);
		}
		((NJS_OBJECT*)0x10C05E8)->basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
		((NJS_OBJECT*)0x10C05E8)->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
		((NJS_OBJECT*)0x10C05E8)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
		((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
		((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
		((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
		objectSTG01_00CC03FC.basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
		objectSTG01_00CC03FC.basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
		objectSTG01_00CC03FC.basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
		WriteData<5>((void*)0x004F7749, 0x90); //Kill second water in Act 2
		WriteData<5>((void*)0x004F77E9, 0x90); //Kill second water in Act 3
		WriteData<1>((void*)0x004F783A, 0x0F); //15 animation frames for water in Act 2
		WriteData<1>((void*)0x004F790A, 0x0F); //15 animation frames for water in Act 3
		WriteCall((void*)0x004F8B23, EC1WaterAnimation_SADX); //Sea animation in Acts 1/2
	}
	else ReplacePVM("BEACH_SEA");
	ResizeTextureList((NJS_TEXLIST*)0xF812AC, textures_ecoast1);
	ResizeTextureList((NJS_TEXLIST*)0xEF553C, textures_ecoast2);
	ResizeTextureList((NJS_TEXLIST*)0xE9A4CC, textures_ecoast3);
	*(NJS_OBJECT*)0x10A298C = objectSTG01_00183CDC; //Jump panel (OJump) 
	*(NJS_OBJECT*)0x10937B4 = objectSTG01_00174F68; //Pier thing
	*(NJS_OBJECT*)0x10939A4 = objectSTG01_0017514C; //Log
	*(NJS_OBJECT*)0x10945EC = objectSTG01_0017514C; //Log2
	*(NJS_OBJECT*)0x1097F8C = objectSTG01_001795B4; //Pier edge
	*(NJS_OBJECT*)0x1049A1C = objectSTG01_0012BE80; //Pier small
	*(NJS_OBJECT*)0x104C00C = objectSTG01_0012E428; //Dolphin
	*(NJS_OBJECT*)0x106BB4C = objectSTG01_0014DF28; //Whale
	*(NJS_MODEL_SADX*)0x010C06C8 = attachSTG01_001A1690; //Spike gate shadow
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
	if (SADXStyleWater == false) WriteData<1>((void*)0x4F8A30, 0xC3u);
	//Write water rendering functions
	WriteJump((void*)0x00501130, Obj_EC1Water_DisplayX); //Act 1
	WriteJump((void*)0x004F76C0, Obj_EC23Water_DisplayX); //Act 2
	WriteJump((void*)0x004F7760, Obj_EC23Water_DisplayX); //Act 3

	DataArray(DrawDistance, DrawDist_EmeraldCoast1, 0x00E99D94, 3);
	DataArray(DrawDistance, DrawDist_EmeraldCoast2, 0x00E99DAC, 3);
	DataArray(DrawDistance, DrawDist_EmeraldCoast3, 0x00E99DC4, 3);
	DataArray(NJS_VECTOR, SkyboxScale_EmeraldCoast1, 0x00E99CE0, 3);
	DataArray(NJS_VECTOR, SkyboxScale_EmeraldCoast2, 0x00E99D04, 3);
	DataArray(NJS_VECTOR, SkyboxScale_EmeraldCoast3, 0x00E99D28, 3);
	DataArray(FogData, EmeraldCoast1Fog, 0x00E99DDC, 3);
	DataArray(FogData, EmeraldCoast2Fog, 0x00E99E0C, 3);
	DataArray(FogData, EmeraldCoast3Fog, 0x00E99E3C, 3);
	for (unsigned int i = 0; i < 3; i++)
	{
		DrawDist_EmeraldCoast3[i].Maximum = -4000.0f;
		EmeraldCoast3Fog[i].Toggle = 0;
		EmeraldCoast3Fog[i].Layer = -1200.0f;
		EmeraldCoast3Fog[i].Distance = -3000.0f;
		EmeraldCoast3Fog[i].Color = 0xFFFFFFFF;
	}

	if (!IamStupidAndIWantFuckedUpOcean)
	{
		for (unsigned int i = 0; i < 3; i++)
		{
			ReplaceBIN_DC("CAM0100E");
			ReplaceBIN_DC("CAM0100S");
			ReplaceBIN_DC("CAM0101S");
			ReplaceBIN_DC("CAM0102B");
			ReplaceBIN_DC("CAM0102S");
			SkyboxScale_EmeraldCoast1[i].x = 1.0f;
			SkyboxScale_EmeraldCoast1[i].y = 1.0f;
			SkyboxScale_EmeraldCoast1[i].z = 1.0f;
			SkyboxScale_EmeraldCoast2[i].x = 1.0f;
			SkyboxScale_EmeraldCoast2[i].y = 1.0f;
			SkyboxScale_EmeraldCoast2[i].z = 1.0f;
			SkyboxScale_EmeraldCoast3[i].x = 1.0f;
			SkyboxScale_EmeraldCoast3[i].y = 1.0f;
			SkyboxScale_EmeraldCoast3[i].z = 1.0f;
			DrawDist_EmeraldCoast1[i].Maximum = -6000.0f;
			DrawDist_EmeraldCoast2[i].Maximum = -3900.0f;
			EmeraldCoast1Fog[i].Distance = -12000.0f;
			EmeraldCoast1Fog[i].Layer = -12000.0f;
			EmeraldCoast2Fog[i].Distance = -12000.0f;
			EmeraldCoast2Fog[i].Layer = -12000.0f;
		}
	}
	else
	{
		ReplaceBIN("CAM0100E", "CAM0100E_R");
		ReplaceBIN("CAM0100S", "CAM0100S_R");
		ReplaceBIN("CAM0101S", "CAM0101S_R");
		ReplaceBIN("CAM0102S", "CAM0102S_R");
		ReplaceBIN("CAM0102B", "CAM0102B_R");
	}
}

void EmeraldCoast_OnFrame()
{
	DataArray(NJS_TEX, uvSTG01_00CC0530, 0x10C0530, 4);
	//Hide skybox bottom in Act 3
	if (IamStupidAndIWantFuckedUpOcean)
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
			for (unsigned int r = 0; r < LengthOfArray(uvSTG01_00CC0530_d); r++)
			{
				uvSTG01_00CC0530[r].u = uvSTG01_00CC0530_d[r].u;
				uvSTG01_00CC0530[r].v = uvSTG01_00CC0530_d[r].v;
			}
			for (unsigned int r2 = 0; r2 < LengthOfArray(uvSTG01_00CBB000_d); r2++)
			{
				uvSTG01_00CBB000_data[r2].u = uvSTG01_00CBB000_d[r2].u;
				uvSTG01_00CBB000_data[r2].v = uvSTG01_00CBB000_d[r2].v;
				uvSTG01_00CBB000[r2].u = uvSTG01_00CBB000_d[r2].u;
				uvSTG01_00CBB000[r2].v = uvSTG01_00CBB000_d[r2].v;
			}
		}
		animframe++;
		if (SADXStyleWater == false && beachsea_water > 9)beachsea_water = 0;
		if (beachsea_water > 14) beachsea_water = 0;
		if (SADXStyleWater == true)
		{
			((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].attr_texId = 17 + beachsea_water;
			((NJS_OBJECT*)0x010C05E8)->basicdxmodel->mats[0].attr_texId = 17 + beachsea_water;
			matlistSTG01_00CBA58C[0].attr_texId = 17 + beachsea_water;
		}
		else
		{
			((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].attr_texId = beachsea_water;
			((NJS_OBJECT*)0x010C05E8)->basicdxmodel->mats[0].attr_texId = beachsea_water;
			matlistSTG01_00CBA58C[0].attr_texId = beachsea_water;
		}
		if (FramerateSetting < 2 && animframe % 4 == 0 || FramerateSetting == 2 && animframe % 2 == 0 || FramerateSetting > 2) beachsea_water++;
	}
	if (CurrentLevel == 1 && CurrentAct == 0 && GameState != 16)
	{
		if (anim1 > 96) anim1 = 82;
		if (anim2 > 81) anim2 = 67;
		matlistSTG01_000755F8[0].attr_texId = anim1;
		matlistSTG01_000759CC[0].attr_texId = anim1;
		matlistSTG01_00075C74[0].attr_texId = anim1;
		matlistSTG01_00075F1C[0].attr_texId = anim1;
		matlistSTG01_00076278[0].attr_texId = anim1;
		matlistSTG01_00076278[1].attr_texId = anim1;
		matlistSTG01_00076654[0].attr_texId = anim1;
		matlistSTG01_00076FA0[0].attr_texId = anim1;
		matlistSTG01_00076B90[0].attr_texId = anim1;
		matlistSTG01_00078634[0].attr_texId = anim1;
		matlistSTG01_00078120[0].attr_texId = anim1;
		matlistSTG01_00078918[0].attr_texId = anim1;
		matlistSTG01_000783C8[0].attr_texId = anim1;
		matlistSTG01_00078C18[0].attr_texId = anim1;
		matlistSTG01_00077EB4[0].attr_texId = anim1;
		matlistSTG01_00077374[0].attr_texId = anim1;
		matlistSTG01_000776D0[0].attr_texId = anim1;
		matlistSTG01_00077A2C[0].attr_texId = anim1;
		matlistSTG01_00BAC3E8[4].attr_texId = anim2;
		matlistSTG01_00027A00[2].attr_texId = anim2;
		matlistSTG01_00026CA0[2].attr_texId = anim2;
		matlistSTG01_000246F8[0].attr_texId = anim2;
		matlistSTG01_00023628[3].attr_texId = anim2;
		matlistSTG01_0002276C[3].attr_texId = anim2;
		matlistSTG01_000216E0[3].attr_texId = anim2;
		matlistSTG01_0002091C[3].attr_texId = anim2;
		matlistSTG01_0001F254[3].attr_texId = anim2;
		matlistSTG01_0001E8C4[0].attr_texId = anim2;
		matlistSTG01_0001FFE0[2].attr_texId = anim2;
		matlistSTG01_0001FFE0[4].attr_texId = anim2;
		matlistSTG01_0001DC78[1].attr_texId = anim2;
		if (FramerateSetting < 2 && animframe % 4 == 0 || FramerateSetting == 2 && animframe % 2 == 0 || FramerateSetting > 2)
		{
			anim1++;
		}
		if (FramerateSetting < 2 && animframe % 2 == 0 || FramerateSetting >= 2)
		{
			anim2++;
		}
	}
	if (CurrentLevel == 1 && CurrentAct == 1 && GameState != 16)
	{
		if (anim3 > 56) anim3 = 42;
		if (anim4 > 85) anim4 = 71;
		if (anim7 > 70) anim7 = 57;
		matlistSTG01_000D7BB8[0].attr_texId = anim7;
		matlistSTG01_0008F1FC[0].attr_texId = anim3;
		matlistSTG01_0008F7CC[2].attr_texId = anim3;
		matlistSTG01_000907D4[4].attr_texId = anim3;
		matlistSTG01_00091358[3].attr_texId = anim3;
		matlistSTG01_000920EC[1].attr_texId = anim3;
		matlistSTG01_00092E40[2].attr_texId = anim3;
		matlistSTG01_00094E34[0].attr_texId = anim3;
		matlistSTG01_00095C20[0].attr_texId = anim3;
		matlistSTG01_00093FE0[3].attr_texId = anim3;
		matlistSTG01_00096A10[2].attr_texId = anim3;
		matlistSTG01_0009712C[3].attr_texId = anim3;
		matlistSTG01_000DBBA4[0].attr_texId = anim3;
		matlistSTG01_000DBBA4[1].attr_texId = anim3;
		matlistSTG01_000DBBA4[2].attr_texId = anim3;
		matlistSTG01_000DA750[0].attr_texId = anim4;
		matlistSTG01_000DA9BC[0].attr_texId = anim4;
		matlistSTG01_000DA188[0].attr_texId = anim4;
		matlistSTG01_000DA46C[0].attr_texId = anim4;
		matlistSTG01_000D9B10[0].attr_texId = anim4;
		matlistSTG01_000D9E30[0].attr_texId = anim4;
		matlistSTG01_000D9584[0].attr_texId = anim4;
		matlistSTG01_000D98A4[0].attr_texId = anim4;
		matlistSTG01_000D9084[0].attr_texId = anim4;
		matlistSTG01_000D8E18[0].attr_texId = anim4;
		matlistSTG01_000D8BA0[0].attr_texId = anim4;
		matlistSTG01_000D86A0[0].attr_texId = anim4;
		matlistSTG01_000D8254[0].attr_texId = anim4;
		matlistSTG01_000D7D64[0].attr_texId = anim4;
		if (FramerateSetting < 2 && animframe % 4 == 0 || FramerateSetting == 2 && animframe % 2 == 0 || FramerateSetting > 2)
		{
			anim4++;
		}
		if (FramerateSetting < 2 && animframe % 2 == 0 || FramerateSetting >= 2)
		{
			anim3++;
			anim7++;
		}
	}
	if (CurrentLevel == 1 && CurrentAct == 2 && GameState != 16)
	{
		if (GameState == 3 || GameState == 4)
		{
			inside_secret_area = 0;
			CurrentFogToggle = 0;
			if (SADXStyleWater == true)
			{
				WriteData<1>((void*)0x004F777E, 0xE8); //Restore the ocean
				WriteData<1>((void*)0x004F777F, 0xBD); //Restore the ocean
				WriteData<1>((void*)0x004F7780, 0xD0); //Restore the ocean
				WriteData<1>((void*)0x004F7781, 0xF0); //Restore the ocean
				WriteData<1>((void*)0x004F7782, 0xFF); //Restore the ocean
			}
		}
		if (Camera_Data1 != nullptr && Camera_Data1->Position.z > 2000)
		{
			inside_secret_area = 1;
			CurrentFogToggle = 1;
			if (CurrentFogLayer < -21) CurrentFogLayer = CurrentFogLayer + 20;
			if (SADXStyleWater == true) WriteData<5>((void*)0x004F777E, 0x90); //Kill the ocean temporarily
		}
		else
		{
			if (CurrentFogLayer > -1200) CurrentFogLayer = CurrentFogLayer - 20;
			if (CurrentFogLayer <= -1200 && CurrentFogToggle == 1)
			{
				inside_secret_area = 0;
				CurrentFogToggle = 0;
				if (SADXStyleWater == true)
				{
					WriteData<1>((void*)0x004F777E, 0xE8); //Restore the ocean
					WriteData<1>((void*)0x004F777F, 0xBD); //Restore the ocean
					WriteData<1>((void*)0x004F7780, 0xD0); //Restore the ocean
					WriteData<1>((void*)0x004F7781, 0xF0); //Restore the ocean
					WriteData<1>((void*)0x004F7782, 0xFF); //Restore the ocean
				}
			}
		}
		if (anim5 > 64) anim5 = 50;
		if (anim6 > 79) anim6 = 65;
		if (anim8 > 93) anim8 = 80;
		matlistSTG01_00114D08[0].attr_texId = anim8;
		matlistSTG01_00117310[0].attr_texId = anim5;
		matlistSTG01_0011784C[0].attr_texId = anim5;
		matlistSTG01_00117C5C[0].attr_texId = anim5;
		matlistSTG01_00118030[0].attr_texId = anim5;
		matlistSTG01_0011829C[0].attr_texId = anim5;
		matlistSTG01_00118544[0].attr_texId = anim5;
		matlistSTG01_001187B0[0].attr_texId = anim5;
		matlistSTG01_00118A94[0].attr_texId = anim5;
		matlistSTG01_00118D94[0].attr_texId = anim5;
		matlistSTG01_000E5260[3].attr_texId = anim6;
		matlistSTG01_000E611C[3].attr_texId = anim6;
		matlistSTG01_000E71EC[0].attr_texId = anim6;
		matlistSTG01_000E97EC[2].attr_texId = anim6;
		matlistSTG01_000EA520[2].attr_texId = anim6;
		matlistSTG01_000EB0E0[0].attr_texId = anim6;
		matlistSTG01_000EF7E4[0].attr_texId = anim6;
		matlistSTG01_000EF7E4[2].attr_texId = anim6;
		matlistSTG01_000F8F6C[0].attr_texId = anim6;
		matlistSTG01_000F95F0[0].attr_texId = anim6;
		matlistSTG01_000F9D10[0].attr_texId = anim6;
		matlistSTG01_000F9D10[1].attr_texId = anim6;
		matlistSTG01_000FB004[0].attr_texId = anim6;
		matlistSTG01_000FB004[1].attr_texId = anim6;
		matlistSTG01_000FEE58[0].attr_texId = anim6;
		matlistSTG01_000FF3A0[0].attr_texId = anim6;
		matlistSTG01_000FFD48[0].attr_texId = anim6;
		matlistSTG01_00101320[0].attr_texId = anim6;
		matlistSTG01_00101E9C[0].attr_texId = anim6;
		matlistSTG01_0010280C[0].attr_texId = anim6;
		matlistSTG01_001033A8[0].attr_texId = anim6;
		matlistSTG01_00103DC8[0].attr_texId = anim6;
		matlistSTG01_00104920[0].attr_texId = anim6;
		matlistSTG01_00105630[0].attr_texId = anim6;
		matlistSTG01_00108120[0].attr_texId = anim6;
		matlistSTG01_0010C7F4[0].attr_texId = anim6;
		matlistSTG01_0010D618[0].attr_texId = anim6;
		matlistSTG01_0010E304[0].attr_texId = anim6;
		matlistSTG01_0010F148[0].attr_texId = anim6;
		matlistSTG01_00110184[0].attr_texId = anim6;
		matlistSTG01_00110184[1].attr_texId = anim6;
		matlistSTG01_00110DFC[0].attr_texId = anim6;
		matlistSTG01_0011B12C[0].attr_texId = anim6;
		matlistSTG01_0011B12C[1].attr_texId = anim6;
		if (FramerateSetting < 2 && animframe % 4 == 0 || FramerateSetting == 2 && animframe % 2 == 0 || FramerateSetting > 2)
		{
			anim5++;
		}
		if (FramerateSetting < 2 && animframe % 2 == 0 || FramerateSetting >= 2)
		{
			anim6++;
			anim8++;
		}
	}
}