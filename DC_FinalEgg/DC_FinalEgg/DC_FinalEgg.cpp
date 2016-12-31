#include "stdafx.h"
#include "SADXModLoader.h"
#include "FinalEgg1.h"
#include "FinalEgg2.h"
#include "FinalEgg3.h"
#include "FinalEgg_objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB48, &landtable_0001D108), //Act 1
	ptrdecl(0x97DB50, &landtable_000E67D0) //Act 3
};

//Final Egg 2 clip function
void __cdecl SetClip_FEgg2_r(signed int a1)
{
	if (a1 >= 2)
	{
		for (int i = 0; i < object_016C017C.basicdxmodel->nbMat; i++)
			object_016C017C.basicdxmodel->mats[i].attrflags &= 0xFFEFFFFF;
		for (int i = 0; i < object_016C1DD0.basicdxmodel->nbMat; i++)
			object_016C1DD0.basicdxmodel->mats[i].attrflags &= 0xFFEFFFFF;
		for (int i = 0; i < object_016C2D94.basicdxmodel->nbMat; i++)
			object_016C2D94.basicdxmodel->mats[i].attrflags &= 0xFFEFFFFF;
	}
	else
	((LandTable *)0x19C8ED0)->COLList = &collist_00081980[3];
	((LandTable *)0x19C8ED0)->COLCount -= 3;
}

//O Tatekan
FunctionPointer(void, sub_408530, (NJS_OBJECT*), 0x408530);
DataPointer(NJS_TEXLIST, dword_1AC3F30, 0x1AC3F30);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(int, LastRenderFlags, 0x03D08498);

static Angle angle = 0;
static float trans = 0;
static NJS_MATRIX backup;

void __cdecl sub_5B4690(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@2
	int v3; // eax@4
	float YDist; // ST04_4@6
	int v5; // eax@6
	float scale; // [sp+10h] [bp+4h]@9

	v1 = a1->Data1;

	if (!DroppedFrames)
	{
		if (trans > 1.0f) trans = 0;
		// backup environment map matrix
		memcpy(&backup, (NJS_MATRIX*)0x038A5DD0, sizeof(NJS_MATRIX));

		// make & apply our transformation matrix
		njPushMatrix(nullptr);

		angle = (angle + 128) % 65536; // <- rotate
		njUnitMatrix(nullptr);
		//njRotateZ(nullptr, angle);
		njRotateY(nullptr, angle);
		njTranslate(nullptr, trans, trans, 0.0f);
		trans = trans + 0.005f;

		njGetMatrix((NJS_MATRIX*)0x038A5DD0);

		njPopMatrix(1);

		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);

		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}

		njPushMatrix(0);
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateY(0, (unsigned __int16)v3);
		}

		sub_408530((NJS_OBJECT*)0x1A45500);
		njPopMatrix(1u);
		njPushMatrix(0);
		YDist = v1->Scale.y * 22.0;
		njTranslate(0, 0.0, YDist, 0.0);
		v5 = v1->Rotation.z;

		if (v5)
		{
			njRotateY(0, (unsigned __int16)v5);
		}

		ProcessModelNode_AB_Wrapper(&object_01644A40, 1.0);
		njPopMatrix(1u);
		((NJS_OBJECT*)0x01A4583C)->basicdxmodel->mats[0].attr_texId = 176;
		((NJS_OBJECT*)0x01A4583C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ENV;
		((NJS_OBJECT*)0x01A4425C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_USE_ENV;
		njPushMatrix(0);
		njTranslate(0, 0.0, 4.0, 0.0);
		njScale(0, 1.0, v1->Scale.y, 1.0);
		sub_408530((NJS_OBJECT*)0x01A4425C);
		//njSetTexture(&dword_1AC3F30);

		if (v1->Scale.y >= 1.0)
		{
			scale = v1->Scale.y;
		}
		else
		{
			scale = 1.0;
		}

		LastRenderFlags &= ~1;
		ProcessModelNode_AB_Wrapper(&object_0164583C, scale);

		njPopMatrix(1u);
		njPopMatrix(1u);

		// restore environment map matrix
		memcpy((NJS_MATRIX*)0x038A5DD0, &backup, sizeof(NJS_MATRIX));
		LastRenderFlags &= ~1;
	}
}

/*FunctionPointer(void, sub_407A00, (NJS_MODEL_SADX *model, float a2), 0x407A00);
FunctionPointer(void, sub_4094D0, (NJS_MODEL_SADX *model, char blend, float radius_scale), 0x4094D0);

void __cdecl OStandLight_DisplayFixed(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	int v2; // eax@2
	NJS_OBJECT* v3; // eax@4
	NJS_OBJECT* v4; // eax@4
	v1 = a1->Data1;
	if (!DroppedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.y;
		if (v2)
		{
			njRotateY(0, (unsigned __int16)v2);
		}
		sub_407A00(((NJS_MODEL_SADX*)0x1C28C4C), 1.0);
		v3 = ((NJS_OBJECT*)0x1C28C78)->child;
		njTranslate(0, ((NJS_OBJECT*)0x1C28C78)->child->pos[0], ((NJS_OBJECT*)0x1C28C78)->child->pos[1], ((NJS_OBJECT*)0x1C28C78)->child->pos[2]);
		njRotateXYZ(0, v3->ang[0] + *(int*)&v1->CharIndex, v3->ang[1], v3->ang[2]);
		sub_4094D0((NJS_MODEL_SADX*)v3->model, 4, 1.0f);
		v4 = ((NJS_OBJECT*)0x1C28C78)->child->child;
		//njTranslate(0, ((NJS_OBJECT*)0x1C28C78)->child->child->pos[0], ((NJS_OBJECT*)0x1C28C78)->child->child->pos[1], ((NJS_OBJECT*)0x1C28C78)->child->child->pos[2]);
		njScale(nullptr, 1.0f + a1->SETData->SETEntry->Properties.z / 10, 1.0f+ a1->SETData->SETEntry->Properties.y / 12, 1.0f + a1->SETData->SETEntry->Properties.x / 12);
		sub_4094D0((NJS_MODEL_SADX*)v4->model, 4, 1.0f);
		njPopMatrix(1u);
	}
}*/
extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		//*(NJS_OBJECT*)0x01C28C78 = object_01828C78; // O Stand Light
		//WriteJump(OStandLight_Display, OStandLight_DisplayFixed); //O Stand Light function
		HMODULE palettelighting = GetModuleHandle(L"sadx-dc-lighting");
		if (palettelighting == 0)
		{
			WriteJump((void*)0x5B4690, sub_5B4690); //Cylinder function
			WriteData((void*)0x005B47A1, 0x90i8, 5); //Kill specialized texlist for cylinder
			memcpy((void*)0x1A44230, &attach_01644230, sizeof(attach_01644230));  // Cylinder
			memcpy((void*)0x01A45810, &attach_01645810, sizeof(attach_01645810));  // Cylinder
		}
		ResizeTextureList((NJS_TEXLIST*)0x1B98518, textures_finalegg1);
		ResizeTextureList((NJS_TEXLIST*)0x1A60488, textures_finalegg2);
		ResizeTextureList((NJS_TEXLIST*)0x1AC5780, textures_finalegg3);
		ResizeTextureList((NJS_TEXLIST*)0x19CC1C0, 177); //Final Egg object texture list
		((LandTable *)0x19C8ED0)->COLCount = LengthOfArray(collist_00081980); //Final Egg 2 COL list
		((LandTable *)0x19C8ED0)->COLList = collist_00081980; //Final Egg 2 COL list
		WriteJump((void*)0x5ADC40, SetClip_FEgg2_r); //Final Egg 2 clip function
		DataArray(FogData, FinalEgg1Fog, 0x019C8FF0, 3);
		DataArray(FogData, FinalEgg2Fog, 0x019C9020, 3);
		DataArray(FogData, FinalEgg3Fog, 0x019C9050, 3);
		for (int i = 0; i < 3; i++)
		{
			FinalEgg1Fog[i].Color = 0xFF000000;
			if (palettelighting != 0)
			{
				FinalEgg1Fog[i].Layer = 1200.0f;
				FinalEgg1Fog[i].Distance = 3000.0f;
			}
			FinalEgg2Fog[i].Color = 0xFF000000;
			FinalEgg2Fog[i].Layer = 650.0f;
			FinalEgg2Fog[i].Distance = 2000.0f;
			FinalEgg2Fog[i].Toggle = 1;
			FinalEgg3Fog[i].Color = 0xFF000000;
			FinalEgg3Fog[i].Layer = 650.0f;
			FinalEgg3Fog[i].Distance = 2000.0f;
		}
		memcpy((void*)0x19FEFE4, &object_001AEDFC, sizeof(object_001AEDFC));  // Light
		memcpy((void*)0x19D8BC0, &attach_015D8BC0, sizeof(attach_015D8BC0));  // Laser
	}
}