#include "stdafx.h"
#include <SADXModLoader.h>
#include "Objects.h"

struct OceanData
{
	NJS_VECTOR Position;
	char Index;
	char OtherIndex;
	char SomeCount;
	char SomeOtherCount;
	NJS_VECTOR PositionOffset;
};

//Big ocean default UVs (Acts 2/3)
NJS_TEX uv_00CC0530_d[] = {
	{ 0, 255 },
	{ 0, -15045 },
	{ 15300, 255 },
	{ 15300, -15045 }
};

static float float1 = 0.02; //These floats are used to patch repositioning of the high-poly ocean model
static float float2 = 66.0; //These floats are used to patch repositioning of the high-poly ocean model
static int beachsea_water = 0; //Water animation
static NJS_VECTOR oldpos{ 0,0,0 }; //Vector used to calculate position difference
DataArray(NJS_TEX, uv_00CBB000_data, 0x10BB000, LengthOfArray(uv_00CBB000)); //Ocean model UVs
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(int, FrameCounterUnpaused, 0x03ABDF5C);
DataPointer(float, EC1OceanYShift, 0x010C85A8);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(OceanData, OceanDataA, 0x03D0B8F0);
DataPointer(OceanData, OceanDataB, 0x03D0B90C);

int round(float r) {
	return (r > 0.0) ? (r + 0.5) : (r - 0.5);
}

void __cdecl Obj_EC23Water_DisplayX(ObjectMaster *a1)
{
	FunctionPointer(void, DrawEmeraldCoastOcean, (OceanData *x), 0x004F8A30);
	DataArray(NJS_TEX, uv_00CC0530, 0x10C0530, 4);
	float v1x; // ST14_4@1
	double v2x; // st7@1
	double v3x; // st6@1
	int OceanUVShift1;
	EntityData1 *v1; // esi@1
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		DisableFog();
		njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
		njPushMatrix(0);
		njTranslate(0, v1->Position.x, v1->Position.y, v1->Position.z);
		OceanUVShift1 = int(njSin(FrameCounterUnpaused << 7) * 96.0f + 2.5f) % 255;
		uv_00CC0530[0].u = uv_00CC0530_d[0].u + OceanUVShift1;
		uv_00CC0530[1].u = uv_00CC0530_d[1].u + OceanUVShift1;
		uv_00CC0530[2].u = uv_00CC0530_d[2].u + OceanUVShift1;
		uv_00CC0530[3].u = uv_00CC0530_d[3].u + OceanUVShift1;
		ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x10C05E8, QueuedModelFlagsB_3, 1.0f);
		njPopMatrix(1u);
		v1x = OceanDataB.Position.x - Camera_Data1->Position.x;
		v2x = OceanDataB.Position.y - Camera_Data1->Position.y;
		v3x = OceanDataB.Position.z - Camera_Data1->Position.z;
		if (v3x * v3x + v2x * v2x + v1x * v1x < 9000000.0)
		{
			AllocateQueuedModelCallback((void(__cdecl *)(void *))DrawEmeraldCoastOcean, &OceanDataB, -17952.0, QueuedModelFlagsB_SomeTextureThing);
		}
	}
}
	void __cdecl Obj_EC1Water_DisplayX(ObjectMaster *a1)
	{
		double v2;
		DataArray(NJS_TEX, uv_00CC0530, 0x10C0530, 4);
		DataPointer(int, EffectActive, 0x3C5E4B0);
		DataPointer(int, FrameCounterUnpaused, 0x03ABDF5C);
		FunctionPointer(void, DrawEmeraldCoastOcean, (OceanData *x), 0x004F8A30);
		EntityData1 *v1; // esi@1
		v1 = a1->Data1;
		int unitsize_u_small = 10;
		int unitsize_v_small = 10;
		float u2_add;
		float v2_add;
		int u2_delta;
		int v2_delta;
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
		if (!DroppedFrames)
		{
			DisableFog();
			njSetTexture((NJS_TEXLIST*)0x010C0508); //BEACH_SEA
			if (oldpos.x != v1->Position.x)
			{
				u2_add = int(255 * (v1->Position.x - oldpos.x) / unitsize_u_small) % 255;
				u2_add = round(1.5f * u2_add);
				for (int u_step = 0; u_step < LengthOfArray(uv_00CBB000_d); u_step++)
				{
					uv_00CBB000_data[u_step].u = uv_00CBB000_data[u_step].u - u2_add;
					u2_delta = uv_00CBB000_data[u_step].u - uv_00CBB000_d[u_step].u;
					uv_00CBB000_data[u_step].u = uv_00CBB000_d[u_step].u + (u2_delta % 255);
					uv_00CBB000[u_step].u = uv_00CBB000_data[u_step].u;
				}
			}
			if (oldpos.z != v1->Position.z)
			{
				v2_add = int(255 * (v1->Position.z - oldpos.z) / unitsize_v_small) % 255;
				v2_add = round(0.5f * v2_add);
				for (int v_step = 0; v_step < LengthOfArray(uv_00CBB000_d); v_step++)
				{
					uv_00CBB000_data[v_step].v = uv_00CBB000_data[v_step].v - v2_add;
					v2_delta = uv_00CBB000_data[v_step].v - uv_00CBB000_d[v_step].v;
					uv_00CBB000_data[v_step].v = uv_00CBB000_d[v_step].v + (v2_delta % 255);
					uv_00CBB000[v_step].v = uv_00CBB000_data[v_step].v;
				}
			}
			oldpos.x = v1->Position.x;
			oldpos.z = v1->Position.z;
			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper((NJS_OBJECT*)0x010C03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 2000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 2000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 2000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z - 2000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z - 2000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z - 2000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 2000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 2000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 2000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z + 2000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z + 2000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z + 2000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x + 1000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z + 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);

			njPushMatrix(0);
			njTranslate(0, v1->Position.x - 1000, EC1OceanYShift, v1->Position.z - 1000);
			ProcessModelNode_A_Wrapper(&object_00CC03FC, QueuedModelFlagsB_3, 1.0f);
			njPopMatrix(1u);
		}
	}

	extern "C" __declspec(dllexport) void __cdecl Init()
	{
		HMODULE handle = GetModuleHandle(L"DC_EmeraldCoast");
		if (handle == 0)
		{
			WriteData((char*)0x004F7816, 0xFF, 2); //Disable built-in water animation in Act 2
			WriteData((char*)0x004F78E6, 0xFF, 2); //Disable built-in water animation in Act 3
			ResizeTextureList((NJS_TEXLIST*)0x010C0508, 32); //BEACH_SEA texlist
			DataArray(PVMEntry, BeachTexlists, 0x0102F408, 32);
			BeachTexlists[1].Name = "BEACH_SEAWX";
			for (int rq = 0; rq < LengthOfArray(uv_00CBB000_d); rq++)
			{
				uv_00CBB000_d[rq].u = round(0.5 * uv_00CBB000_d[rq].u);
				uv_00CBB000_d[rq].v = round(0.5 * uv_00CBB000_d[rq].v);
			}
			((NJS_OBJECT*)0x10C05E8)->basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
			((NJS_OBJECT*)0x10C05E8)->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
			((NJS_OBJECT*)0x10C05E8)->basicdxmodel->mats[0].attrflags |= NJD_SA_SRC;
			((NJS_OBJECT*)0x10C05E8)->basicdxmodel->mats[0].diffuse.argb.a = 0xB2;
			((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
			((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
			((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].attrflags |= NJD_SA_SRC;
			((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].diffuse.argb.a = 0xB2;
			object_00CC03FC.basicdxmodel->mats[0].attrflags &= ~NJD_DA_INV_SRC;
			object_00CC03FC.basicdxmodel->mats[0].attrflags |= NJD_DA_ONE;
			object_00CC03FC.basicdxmodel->mats[0].attrflags |= NJD_SA_SRC;
			object_00CC03FC.basicdxmodel->mats[0].diffuse.argb.a = 0xB2;
			WriteData((void*)0x004F76DE, 0x90, 5); //Kill SADX ocean water in Act 2
			WriteData((void*)0x004F777E, 0x90, 5); //Kill SADX ocean water in Act 3
			WriteData((void*)0x004F783A, 0x0F, 1); //15 animation frames for water in Act 2
			WriteData((void*)0x004F790A, 0x0F, 1); //15 animation frames for water in Act 3
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
			//Write water rendering functions
			WriteJump((void*)0x00501130, Obj_EC1Water_DisplayX); //Act 1
			WriteJump((void*)0x004F7760, Obj_EC23Water_DisplayX); //Act 2
			WriteJump((void*)0x004F76C0, Obj_EC23Water_DisplayX); //Act 3
		}
	}

	extern "C" __declspec(dllexport) void __cdecl OnFrame()
	{
		HMODULE handle = GetModuleHandle(L"DC_EmeraldCoast");
		if (handle == 0)
		{
			if (CurrentLevel == 1 && GameState != 16)
			{
				//Restore ocean UVs on level exit/restart
				if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
				{
					for (int r2 = 0; r2 < LengthOfArray(uv_00CBB000_d); r2++)
					{
						uv_00CBB000_data[r2].u = uv_00CBB000_d[r2].u;
						uv_00CBB000_data[r2].v = uv_00CBB000_d[r2].v;
						uv_00CBB000[r2].u = uv_00CBB000_d[r2].u;
						uv_00CBB000[r2].v = uv_00CBB000_d[r2].v;
					}
				}
				if (beachsea_water > 14) beachsea_water = 0;
				((NJS_OBJECT*)0x010C03FC)->basicdxmodel->mats[0].attr_texId = 17 + beachsea_water;
				((NJS_OBJECT*)0x10C05E8)->basicdxmodel->mats[0].attr_texId = 17 + beachsea_water;
				matlist_00CBA58C[0].attr_texId = 17 + beachsea_water;
				if (FramerateSetting < 2 && FrameCounterUnpaused % 4 == 0 || FramerateSetting == 2 && FrameCounterUnpaused % 2 == 0 || FramerateSetting > 2) beachsea_water++;
			}
		}

	}

	extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };