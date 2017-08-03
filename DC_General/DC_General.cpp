#include "stdafx.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include "Animals.h"
#include "Itembox.h"
#include "EmeShard.h"
#include "TornadoCrash.h"

DataPointer(float, EnvMap1, 0x038A5DD0);
DataPointer(float, EnvMap2, 0x038A5DE4);
DataPointer(float, EnvMap3, 0x038A5E00);
DataPointer(float, EnvMap4, 0x038A5E04);

void __cdecl FixedBubbleRipple(ObjectMaster *a1)
{
	DataPointer(int, MissedFrames, 0x03B1117C);
	DataPointer(D3DCOLORVALUE, stru_3D0B7C8, 0x3D0B7C8);
	DataPointer(NJS_OBJECT, stru_8B22F4, 0x8B22F4);
	NJS_VECTOR *v1; // esi@1
	double v2; // st7@2
	v1 = (NJS_VECTOR *)a1->UnknownB_ptr;
	if (!MissedFrames)
	{
		SetTextureToCommon();
		njPushMatrix(0);
		njTranslateV(0, v1);
		BackupConstantAttr();
		AddConstantAttr(0, NJD_FLAG_USE_ALPHA);
		v2 = v1[1].z;
		stru_3D0B7C8.g = v1[1].z;
		stru_3D0B7C8.b = v2;
		stru_3D0B7C8.a = v2;
		SetMaterialAndSpriteColor((NJS_ARGB *)&stru_3D0B7C8);
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
		njScale(0, v1[2].z, 1.0f, v1[2].z);
		SomeDepthThing = -17952;
		ProcessModelNode_A_WrapperB(&stru_8B22F4, (QueuedModelFlagsB)0);
		SomeDepthThing = 0;
		ClampGlobalColorThing_Thing();
		njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
		njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
		RestoreConstantAttr();
		njPopMatrix(1u);
	}
}

static PointerInfo jumps[] = {
	// ItemBox
	{ ItemBox_Display_Destroyed,	ItemBox_Display_Destroyed_Rotate },
	{ ItemBox_Display_Unknown,		ItemBox_Display_Unknown_Rotate },
	{ ItemBox_Display,				ItemBox_Display_Rotate },
};

extern "C"
{
	__declspec(dllexport) PointerList Jumps[] = { { arrayptrandlength(jumps) } };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		WriteJump((void*)0x7A81A0, FixedBubbleRipple);
		HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
		if (Lantern != nullptr && GetProcAddress(Lantern, "allow_landtable_specular") != nullptr)
		{
			allow_landtable_specular(true);
			allow_object_vcolor(false);
		}
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Question mark from Character Select
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; //Question mark from Character Select
		//Item capsule lighting fixes
		((NJS_MODEL*)0x008BF260)->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BF260)->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BF260)->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BF260)->mats[3].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BEAA8)->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BE620)->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MODEL*)0x008BE620)->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //end
		//((NJS_OBJECT*)0x008BE194)->basicdxmodel->mats[0].diffuse.argb.a = 0xB2; //Balloon transparency
		//((NJS_OBJECT*)0x008BE194)->basicdxmodel->mats[1].diffuse.argb.a = 0xB2; //Balloon transparency
		WriteData((char*)0x004D7712, 2, 1); //Animal bubble blending mode
		WriteData((char*)0x004A2DBB, 1, 1); //Emerald piece blending mode
		*(NJS_OBJECT*)0x008BA6D4 = object_0019BC48; //Emerald piece
		*(NJS_OBJECT*)0x02F67B78 = object_0021BD90; //Tornado 2 crashed
		ResizeTextureList((NJS_TEXLIST*)0x0092ACE4, 5); //GOMA texlist
		((NJS_OBJECT*)0x929E1C)->model = &attach_001568D8; //Goma left whisker
		((NJS_OBJECT*)0x929FD8)->model = &attach_00156758; //Goma right whisker
		((NJS_OBJECT*)0x929760)->model = &attach_00157668; //Goma body
		((NJS_OBJECT*)0x929AA4)->model = &attach_00156CA8; //Goma left front
		((NJS_OBJECT*)0x9298B4)->model = &attach_00156E90; //Goma right front
		((NJS_OBJECT*)0x92A1CC)->model = &attach_001565D8; //Goma left back
		((NJS_OBJECT*)0x929C94)->model = &attach_00156AC0; //Goma right back
		((NJS_OBJECT*)0x948ACC)->model = &attach_0017BE24; //Rako head
		((NJS_OBJECT*)0x949068)->model = &attach_0017CCE8; //Rako body
		((NJS_OBJECT*)0x9483B4)->model = &attach_0017C980; //Rako tail
		((NJS_OBJECT*)0x948CE4)->model = &attach_0017B6C4; //Rako ear left
		((NJS_OBJECT*)0x948BD8)->model = &attach_0017BAC8; //Rako ear right
		((NJS_OBJECT*)0x948508)->model = &attach_0017B7A8; //Rako whisker left
		((NJS_OBJECT*)0x9486C4)->model = &attach_0017B928; //Rako whisker right
		((NJS_OBJECT*)0x947C78)->model = &attach_0017C2A4; //Rako hand left
		((NJS_OBJECT*)0x947A58)->model = &attach_0017C064; //Rako hand right
		((NJS_OBJECT*)0x947D98)->model = &attach_0017C388; //Rako clam shell
		((NJS_OBJECT*)0x9481A8)->model = &attach_0017C7B0; //Rako foot left
		((NJS_OBJECT*)0x947FB8)->model = &attach_0017C59C; //Rako foot right
		((NJS_OBJECT*)0x942428)->model = &attach_00174864; //Lion face
		((NJS_OBJECT*)0x9427A4)->model = &attach_001744CC; //Lion mane
		((NJS_OBJECT*)0x942EF4)->model = &attach_001756A4; //Lion body
		((NJS_OBJECT*)0x942B78)->model = &attach_00175178; //Lion tail part 1
		((NJS_OBJECT*)0x942A34)->model = &attach_001752C8; //Lion tail part 2
		((NJS_OBJECT*)0x941D08)->model = &attach_00174FD4; //Lion left front
		((NJS_OBJECT*)0x941AF0)->model = &attach_00174DF8; //Lion right front
		((NJS_OBJECT*)0x94190C)->model = &attach_00174C1C; //Lion left back
		((NJS_OBJECT*)0x941728)->model = &attach_00174A40; //Lion right back
		((NJS_OBJECT*)0x942024)->model = &attach_0017427C; //Lion left ear
		((NJS_OBJECT*)0x941EB0)->model = &attach_001740DC; //Lion right ear
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 20)
		{
			EnvMap1 = 2.0f;
			EnvMap2 = 2.0f;
			EnvMap3 = 0.5f;
			EnvMap4 = 0.5f;
		}
		else
		{
			EnvMap1 = 0.5f;
			EnvMap2 = 0.5f;
			EnvMap3 = 0.5f;
			EnvMap4 = 0.5f;
		}
	}
}


