#include <SADXModLoader.h>
#include "Icicle.h"
#include "IceCap1.h"
#include "IceCap2.h"
#include "IceCap3.h"
#include "IceCap4_PC.h"
#include "IceCap4.h"

DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(NJS_ACTION, stru_E758E4, 0xE758E4);
DataPointer(NJS_OBJECT, stru_E76598, 0xE76598);
DataPointer(NJS_OBJECT, stru_E76E78, 0xE76E78);
DataPointer(NJS_OBJECT, stru_E773D8, 0xE773D8);

DataArray(FogData, IceCap1Fog, 0x00C67EA0, 3);
DataArray(FogData, IceCap2Fog, 0x00C67ED0, 3);
DataArray(FogData, IceCap3Fog, 0x00C67F00, 3);
DataArray(FogData, IceCap4Fog, 0x00C67F30, 3);
DataArray(DrawDistance, DrawDist_IceCap1, 0x00C67E40, 3);
DataArray(DrawDistance, DrawDist_IceCap2, 0x00C67E58, 3);
DataArray(DrawDistance, DrawDist_IceCap3, 0x00C67E70, 3);

FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
FunctionPointer(void, sub_4BAD80, (NJS_VECTOR *a1, NJS_VECTOR *a2, int a3, signed int a4), 0x4BAD80);

static int animframe = 41;

PointerInfo pointers[] = {
	ptrdecl(0x97DB08, &landtable_00014B44),
	ptrdecl(0x97DB0C, &landtable_00015714),
	ptrdecl(0x97DB10, &landtable_000180B4),
	//ptrdecl(0x97DB14, &landtable_00019950)
};

void RenderSmallIcicles(NJS_OBJECT *a1, QueuedModelFlagsB blend_mode, float scale)
{
	DrawQueueDepthBias = 15000.0f;
	ProcessModelNode(a1, QueuedModelFlagsB_SomeTextureThing, scale);
	DrawQueueDepthBias = 0;
}

void RenderIcicleSpriteThing(NJS_OBJECT *a1, QueuedModelFlagsB blend_mode, float scale)
{
	DrawQueueDepthBias = -1000.0f;
	ProcessModelNode(a1, blend_mode, scale);
	DrawQueueDepthBias = 0;
}

void __cdecl sub_4EF5A0X(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	Angle v2; // eax
	Angle v3; // eax
	Angle v4; // eax

	v1 = a1->Data1;
	if (!MissedFrames)
	{
		BackupConstantAttr();
		RemoveConstantAttr(0, NJD_FLAG_IGNORE_SPECULAR);
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		DrawQueueDepthBias = -2000.0f;
		switch (v1->Action)
		{
		case 0:
			sub_405450(&stru_E758E4, *(float *)&v1->LoopData, 1.0f);
			njPopMatrix(1u);
			RestoreConstantAttr();
			return;
		case 1:
			DrawQueueDepthBias = -2000.0f;
			ProcessModelNode(&object_00A76598, QueuedModelFlagsB_EnableZWrite, 1.0f); //Start of Ice Cap 1
			DrawQueueDepthBias = -1000.0f;
			ProcessModelNode(&object_00A76598_2, QueuedModelFlagsB_EnableZWrite, 1.0f); //Start of Ice Cap 1
			break;
		case 2:
			ProcessModelNode_AB_Wrapper(&stru_E76E78, 1.0f);
			break;
		case 4:
			ProcessModelNode_AB_Wrapper(&stru_E773D8, 1.0f);
			break;
		default:
			break;
		}
		njPopMatrix(1u);
		DrawQueueDepthBias = 0;
		RestoreConstantAttr();
	}
}

void CrystalParticle(NJS_VECTOR *a1, NJS_VECTOR *a2, int a3, signed int a4)
{
	ParticleDepthOverride = 26000.0f;
	sub_4BAD80(a1, a2, a3, a4);
	ParticleDepthOverride = 0;
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		//Crystal fixes, hopefully someday
		//WriteCall((void*)0x004EF79E, CrystalParticle);
		//stru_E76598.basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ALPHA;
		//stru_E76598.basicdxmodel->mats[1].attrflags |= NJD_FLAG_USE_ALPHA;
		//stru_E76598.basicdxmodel->mats[2].attrflags |= NJD_FLAG_USE_ALPHA;
		//WriteJump((void*)0x4EF5A0, sub_4EF5A0X);
		WriteCall((void*)0x004EFEF7, RenderIcicleSpriteThing);
		WriteCall((void*)0x004EFE10, RenderSmallIcicles);
		*(NJS_OBJECT*)0x00E6FECC = object_00A6FECC; // Giant icicle
		//Snowboard fix
		HMODULE CHRMODELS = GetModuleHandle(L"CHRMODELS_orig");
		if (CHRMODELS != nullptr)
		{
			NJS_OBJECT **___SONIC_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS, "___SONIC_OBJECTS");
			NJS_OBJECT **___MILES_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS, "___MILES_OBJECTS");
			___SONIC_OBJECTS[71]->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			___SONIC_OBJECTS[71]->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			___SONIC_OBJECTS[71]->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
			___SONIC_OBJECTS[71]->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
			___MILES_OBJECTS[71]->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			___MILES_OBJECTS[71]->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
			___MILES_OBJECTS[71]->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
			___MILES_OBJECTS[71]->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
		}
		ResizeTextureList((NJS_TEXLIST*)0xDE3A74, textures_icecap1);
		ResizeTextureList((NJS_TEXLIST*)0xD39744, textures_icecap2);
		ResizeTextureList((NJS_TEXLIST*)0xC68408, textures_icecap3);
		//ResizeTextureList((NJS_TEXLIST*)0x00E48F30, 100);//OBJ_ICECAP - currently contains 3 extra textures
		LandTable *lt = (LandTable *)0x0E3E024; COL *tmp = new COL[171+LengthOfArray(collist_000180D8)];
		memcpy(tmp, lt->Col, sizeof(COL) * lt->COLCount);
		lt->Col = tmp; lt->COLCount = 171 + LengthOfArray(collist_000180D8);
		for (int inv = 0; inv < 171; inv++)
		{
			((LandTable *)0x0E3E024)->Col[inv].Flags &= ~ColFlags_Visible;
		}
		for (int c = 171; c < LengthOfArray(collist_000180D8)+171; c++)
		{
			((LandTable *)0x0E3E024)->Col[c] = collist_000180D8[c-171];
		}
		for (int inv2 = 171; inv2 < 171 + LengthOfArray(collist_000180D8); inv2++)
		{
			((LandTable *)0x0E3E024)->Col[inv2].Flags &= ~ColFlags_Solid;
		}
		*(NJS_OBJECT*)0xE537D8 = object_00162694; //Icicle inner part
		*(NJS_OBJECT*)0xE6E0E0 = object_0017BD64; //MizuIwa B
		*(NJS_OBJECT*)0xE6E694 = object_0017C308; //MizuIwa C
		*(NJS_OBJECT*)0xE52FCC = object_00161838; //OIceJmp
		for (int i = 0; i < 3; i++)
		{
			IceCap1Fog[i].Color = 0xFFFFFFFF;
			IceCap1Fog[i].Layer = 1500.0f;
			IceCap1Fog[i].Distance = 3800.0f;
			IceCap1Fog[i].Toggle = 1;
			DrawDist_IceCap1[i].Maximum = -12000.0;
			IceCap2Fog[i].Color = 0xFFFFFFFF;
			IceCap2Fog[i].Layer = 800.0f;
			IceCap2Fog[i].Distance = 3800.0f;
			IceCap2Fog[i].Toggle = 1;
			DrawDist_IceCap2[i].Maximum = -4000.0;
			DrawDist_IceCap3[i].Maximum = -8000.0;
			IceCap3Fog[i].Layer = 2500.0f;
			IceCap3Fog[i].Color = 0xFFFFFFFF;
			IceCap4Fog[i].Color = 0xFF575757;
			IceCap4Fog[i].Layer = 800.0f;
			IceCap4Fog[i].Distance = 3800.0f;
			IceCap4Fog[i].Toggle = 1;
		}
	};
	__declspec(dllexport) void __cdecl OnFrame()
	{
		auto entity = EntityData1Ptrs[0];
		if (CurrentLevel == 8 && CurrentAct == 2 && GameState != 16)
		{
			if (entity != nullptr)
			{
				if (entity->Position.x <= -8000)
				{
					if (CurrentFogLayer > 800) CurrentFogLayer = CurrentFogLayer - 16; else CurrentFogLayer = 800;
					if (CurrentFogDist > 3000) CurrentFogDist = CurrentFogDist - 8; else CurrentFogDist = 3000;
				}
				if (entity->Position.x >= -5000)
				{
					if (CurrentFogLayer < IceCap3Fog[0].Layer) CurrentFogLayer = CurrentFogLayer + 8; else CurrentFogLayer = IceCap3Fog[0].Layer;
					if (CurrentFogDist < IceCap3Fog[0].Distance) CurrentFogDist = CurrentFogDist + 16; else CurrentFogDist = IceCap3Fog[0].Distance;
				}
			}
		}
		if (CurrentLevel == 8 && CurrentAct == 3 && GameState != 16)
		{
				if (animframe > 54) animframe = 16;
				if (animframe > 16 && animframe < 41) animframe = 41;
				matlist_Q00076DC8[0].attr_texId = animframe;
				matlist_Q00077244[0].attr_texId = animframe;
				matlist_Q000820E4[0].attr_texId = animframe;
				matlist_Q000820E4[1].attr_texId = animframe;
				matlist_Q0008E8E0[0].attr_texId = animframe;
				matlist_Q0008E9E4[0].attr_texId = animframe;
				matlist_Q000A4F08[0].attr_texId = animframe;
				matlist_Q000A773C[0].attr_texId = animframe;
				matlist_Q000A773C[1].attr_texId = animframe;
				matlist_Q000A9AD8[0].attr_texId = animframe;
				matlist_Q000A9AD8[1].attr_texId = animframe;
				matlist_Q000A9AD8[2].attr_texId = animframe;
				matlist_Q000AB4B4[0].attr_texId = animframe;
				matlist_Q000AC6B4[0].attr_texId = animframe;
				matlist_Q0005BB68[0].attr_texId = animframe;
				matlist_Q000B624C[0].attr_texId = animframe;
				matlist_Q000B624C[1].attr_texId = animframe;
				matlist_Q000B84C8[0].attr_texId = animframe;
				matlist_Q000BCA5C[0].attr_texId = animframe;
				matlist_Q000BCA5C[1].attr_texId = animframe;
				matlist_Q000BD328[0].attr_texId = animframe;
				matlist_Q000BD328[1].attr_texId = animframe;
				matlist_Q000C4800[0].attr_texId = animframe;
				matlist_Q000C4940[0].attr_texId = animframe;
				matlist_Q000C4A44[0].attr_texId = animframe;
				matlist_Q000C4B84[0].attr_texId = animframe;
				matlist_Q000C4C88[0].attr_texId = animframe;
				if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) animframe++;
		}
	}
}