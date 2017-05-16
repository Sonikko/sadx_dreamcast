#include "stdafx.h"
#include "Highway1.h"
#include "Highway2.h"
#include "Highway3.h"
#include "SH_bus.h"
#include "SH_yellowcar.h"
#include "SH_bluecar.h"
#include "SH_redcar.h"
#include "SH_helicopter.h"
#include "SH_turnasi.h"
#include "SH_glass.h"
#include "Highway_objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA88, &landtable_0001853C),
	ptrdecl(0x97DA8C, &landtable_00019178),
	ptrdecl(0x97DA90, &landtable_0001B08C)
};

void __cdecl sub_61BA10(int a1)
{
	DataPointer(int, MissedFrames, 0x03B1117C);
	DataPointer(int, FrameCounterUnpaused, 0x03ABDF5C);
	DataArray(NJS_MATERIAL, stru_25802C0, 0x025802C0, 2);
	FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
	FunctionPointer(long double, sub_49CC70, (float a1, float a2, float a3), 0x49CC70);
	int v1; // esi@1
	int v2; // ebx@1
	NJS_TEXLIST *v3; // ST1C_4@2
	int v4; // eax@2
	float a3; // ST14_4@4
	int v6; // esi@4
	float v7; // edi@4
	int v8; // esi@4
	float sy; // [sp+14h] [bp-4h]@2
	float XScale; // [sp+1Ch] [bp+4h]@2
	float XScalea; // [sp+1Ch] [bp+4h]@4

	v1 = *(_DWORD *)(a1 + 32);
	v2 = *(_DWORD *)(v1 + 8);
	if (!MissedFrames)
	{
		njSetTexture((NJS_TEXLIST*)0x026706AC);
		njPushMatrix(0);
		sy = 1.0f / *(float *)(v1 + 48);
		XScale = *(float *)(v1 + 48) * 0.6f + 0.4f;
		njTranslateV(0, (NJS_VECTOR *)(v1 + 32));
		v4 = *(_DWORD *)(v1 + 24);
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		njScaleV(0, (NJS_VECTOR *)(v1 + 44));
		a3 = VectorMaxAbs((NJS_VECTOR *)(v1 + 44));
		sub_409E70(&attach_00135B64, 0, a3);
		njPushMatrix(0);
		v6 = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 44);
		njTranslate(0, *(Float *)(v6 + 8), *(Float *)(v6 + 12), *(Float *)(v6 + 16));
		v7 = XScale;
		njScale(0, XScale, sy, XScale);
		XScalea = sub_49CC70(v7, sy, v7);
		sub_409E70(&attach_00135920, 0, XScalea);
		njPopMatrix(1u);
		njPushMatrix(0);
		v8 = *(_DWORD *)(v6 + 48);
		njTranslate(0, *(Float *)(v8 + 8), *(Float *)(v8 + 12), *(Float *)(v8 + 16));
		njScale(0, v7, sy, v7);
		sub_409E70(&attach_00135454, 0, XScalea);
		njPopMatrix(1u);
		njPopMatrix(1u);
		if (GameState != 16 && !(FrameCounterUnpaused & 3) && ++stru_25802C0[0].attr_texId > 0x68)
		{
			stru_25802C0[0].attr_texId = 89;
		}
	}
}

extern "C"
{
	__declspec(dllexport) PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		//WriteJump((void*)0x61BA10, sub_61BA10); //Fountain function
		*(NJS_OBJECT*)0x0268843C = object_001554A8; //Cone
		*(NJS_OBJECT*)0x0267497C = object_001434F4; //Platform
		*(NJS_OBJECT*)0x02687284 = object_02287284; //Small plant in Act 3
		*(NJS_ACTION*)0x02674424 = action_Platform2_action;
		*(NJS_OBJECT*)0x02679ECC = object_00148880; //Platform (Tails)
		//*(NJS_OBJECT*)0x026A0008 = object_0016B6FC; //Missile (Tails)
		*(NJS_OBJECT*)0x0267225C = object_00140EA4; //OCrane
		*(NJS_OBJECT*)0x02690DCC = object_0015C898; //Escalator2
		*(NJS_OBJECT*)0x0268F054 = object_0015B100; //Escalator1
		//*(NJS_OBJECT*)0x0266387C = object_00135B8C; //Fountain top
		*(NJS_MODEL_SADX*)0x02696630 = attach_00161F5C; //Clock tower
		WriteData((char*)0x006165DF, 0x04, 1); //Cone blending mode
		((NJS_OBJECT*)0x026785FC)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //material fix for container A
		((NJS_OBJECT*)0x0267943C)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2; //material fix for container A
		((NJS_OBJECT*)0x02676A4C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //material fix for container B
		*(NJS_OBJECT*)0x026777D4 = object_00146254;//container B top broken 1
		*(NJS_OBJECT*)0x02677288 = object_00145D34;//container B top broken 2
		WriteData((void*)0x00619545, 1, 1); //blending mode for poster
		WriteData((void*)0x0061A8EA, 0, 1); //blending mode for glass
		WriteData((void*)0x0061A8EA, 0, 1); //blending mode for glass 2
		WriteData((void*)0x0061A951, 0, 1); //blending mode for glass 3
		ResizeTextureList((NJS_TEXLIST*)0x2592E8C, textures_highway1);
		ResizeTextureList((NJS_TEXLIST*)0x2581310, textures_highway2);
		ResizeTextureList((NJS_TEXLIST*)0x24CAC94, textures_highway3);
		((NJS_OBJECT *)0x02671A20)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA; //O Crane platform alpha fix
		memcpy((void*)0x267DC14, &object_0227DC14, sizeof(object_0227DC14)); // Turnasi part 1
		memcpy((void*)0x267D3B4, &object_0014ABC8, sizeof(object_0014ABC8)); // Turnasi part 2
		memcpy((void*)0x267C7AC, &object_0014A5B0, sizeof(object_0014A5B0)); // Turnasi part 3
		memcpy((void*)0x0268C058, &object_0228C058, sizeof(object_0228C058)); // SH Helicopter
		memcpy((void*)0x0266D90C, &object_0013D068, sizeof(object_0013D068)); // SH Bus
		memcpy((void*)0x0266B484, &object_0013B15C, sizeof(object_0013B15C)); // SH Red Car
		memcpy((void*)0x026682B8, &object_0013949C, sizeof(object_0013949C)); // SH Blue Car
		memcpy((void*)0x0266FC8C, &object_0013E9CC, sizeof(object_0013E9CC)); // SH Yellow Car
		memcpy((void*)0x0267A1A0, &attach_00148B24, sizeof(attach_00148B24)); //SH Glass
		((NJS_OBJECT*)0x02679FDC)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267A2DC)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267A410)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267A56C)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267A67C)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267A7B0)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267A8C0)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267AA7C)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267ABB0)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267ACC0)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267ADD0)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267AF14)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x0267B06C)->basicdxmodel->mats[0].attr_texId = 13;
		((NJS_OBJECT*)0x02679FDC)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267A2DC)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267A410)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267A56C)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267A67C)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267A7B0)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267A8C0)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267AA7C)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267ABB0)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267ACC0)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267ADD0)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267AF14)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		((NJS_OBJECT*)0x0267B06C)->basicdxmodel->mats[0].diffuse.color = 0x4CB2B2B2;
		//Fountain materials
		((NJS_OBJECT*)0x0266387C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
		((NJS_OBJECT*)0x0266387C)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
		((NJS_OBJECT*)0x02663488)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
		((NJS_OBJECT*)0x02663488)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
		((NJS_OBJECT*)0x02662D68)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2;
		((NJS_OBJECT*)0x02662D68)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2;
		/*(NJS_OBJECT*)0x02679FDC = object_00148C50;
		*(NJS_OBJECT*)0x0267A2DC = object_001495DC;
		*(NJS_OBJECT*)0x0267A410 = object_00148D54;
		*(NJS_OBJECT*)0x0267A56C = object_00148E5C;
		*(NJS_OBJECT*)0x0267A67C = object_0014906C;
		*(NJS_OBJECT*)0x0267A7B0 = object_00149174;
		*(NJS_OBJECT*)0x0267A8C0 = object_001492CC;
		*(NJS_OBJECT*)0x0267AA7C = object_001493D4;
		*(NJS_OBJECT*)0x0267ABB0 = object_001494D8;
		*(NJS_OBJECT*)0x0267ACC0 = object_001495DC;
		*(NJS_OBJECT*)0x0267ADD0 = object_001496F4;
		*(NJS_OBJECT*)0x0267AF14 = object_001497F8;
		//*(NJS_OBJECT*)0x0267B06C =*/
		DataArray(FogData, SpeedHighway1Fog, 0x024CA4E4, 3);
		DataArray(FogData, SpeedHighway2Fog, 0x024CA514, 3);
		DataArray(FogData, SpeedHighway3Fog, 0x024CA544, 3);
		for (int i = 0; i < 3; i++)
		{
			SpeedHighway1Fog[i].Layer = 2000.0f;
			SpeedHighway1Fog[i].Distance = 5200.0f;
			SpeedHighway3Fog[i].Color = 0xFF6497C8;
			SpeedHighway3Fog[i].Layer = 1200.0f;
			SpeedHighway3Fog[i].Distance = 2900.0f;
			SpeedHighway3Fog[i].Toggle = 1;
			SpeedHighway2Fog[i].Layer = 1600.0f;
			SpeedHighway2Fog[i].Distance = 4800.0f;
			SpeedHighway2Fog[i].Color = 0xFF300020;
		}
	}

}
