#include "stdafx.h"
#include <SADXModLoader.h>
#include "OFinalEgg.h"

HMODULE ADV02MODELS = GetModuleHandle(L"ADV02MODELS");
NJS_TEXLIST **___ADV02_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(ADV02MODELS, "___ADV02_TEXLISTS");
NJS_ACTION **___ADV02_ACTIONS = (NJS_ACTION **)GetProcAddress(ADV02MODELS, "___ADV02_ACTIONS");

FunctionPointer(void, sub_405450, (NJS_ACTION *a1, float frame, float scale), 0x405450);
DataPointer(DrawDistance, LevelDrawDistance, 0x03ABDC70);
DataArray(DrawDistance, MR3DrawDist, 0x01103418, 3);

void FixMRBase(ObjectMaster *a1)
{
	Angle v1; // eax
	EntityData1 *v2; // esi
	v2 = a1->Data1;
	Direct3D_SetNearFarPlanes(-1.0f, -100000.0f);
	DisableFog();
	njSetTexture(___ADV02_TEXLISTS[1]);
	njPushMatrix(0);
	njTranslateV(0, &v2->Position);
	v1 = v2->Rotation.y;
	if (v1)
	{
		njRotateY(0, (unsigned __int16)v1);
	}
	//Render the FinalWay
	sub_405450(___ADV02_ACTIONS[30], v2->Scale.y, 1.0);
	//Render the animation without the lights
	sub_405450(*___ADV02_ACTIONS, v2->Scale.x, 1.0f);
	//Render the lights
	DisplayAnimationFrame(&MRBase_LightsOnly, v2->Scale.x, 4, 1.0f, (void(__cdecl *)(NJS_MODEL_SADX *, int, int))DrawModel_Queue);
	//Render the EfHikari thing
	ProcessModelNode(&object2_002062F3, QueuedModelFlagsB_3, 1.0f);
	njPopMatrix(1u);
	ToggleStageFog();
	Direct3D_SetNearFarPlanes(LevelDrawDistance.Minimum, LevelDrawDistance.Maximum);
}

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE ADV02MODELS = GetModuleHandle(L"ADV02MODELS");
	NJS_ACTION **___ADV02_ACTIONS = (NJS_ACTION **)GetProcAddress(ADV02MODELS, "___ADV02_ACTIONS");
	HMODULE DC_ADV02MODELS = GetModuleHandle(L"DC_ADV02MODELS");
	if (DC_ADV02MODELS == 0)
	{
		for (int i = 0; i < 3; i++)
		{
			MR3DrawDist[i].Maximum = -10000.0f;
		}
		object_0020454C.evalflags |= NJD_EVAL_HIDE;
		object_002046C8.evalflags |= NJD_EVAL_HIDE;
		object_00204BC4.evalflags |= NJD_EVAL_HIDE;
		object_00204D40.evalflags |= NJD_EVAL_HIDE;
		object_0020523C.evalflags |= NJD_EVAL_HIDE;
		object_002053B8.evalflags |= NJD_EVAL_HIDE;
		object_002058B4.evalflags |= NJD_EVAL_HIDE;
		object_00205A30.evalflags |= NJD_EVAL_HIDE;
		___ADV02_ACTIONS[0]->object = &object_0020C3B0; //OFinalEgg
		___ADV02_ACTIONS[0]->motion = &animation_000862E8; //OFinalEgg animation
		WriteJump((void*)0x538430, FixMRBase);
	}
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };