#include "stdafx.h"
#include "SADXModLoader.h"

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"CHRMODELS_orig");
	NJS_OBJECT **___SONIC_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___SONIC_OBJECTS");
	NJS_OBJECT **___MILES_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___MILES_OBJECTS");
	NJS_OBJECT **___KNUCKLES_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___KNUCKLES_OBJECTS");
	NJS_OBJECT **___AMY_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___AMY_OBJECTS");
	NJS_OBJECT **___BIG_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___BIG_OBJECTS");
	NJS_OBJECT **___E102_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___E102_OBJECTS");
	NJS_ACTION **___E102_ACTIONS = (NJS_ACTION **)GetProcAddress(handle, "___E102_ACTIONS");
	___SONIC_OBJECTS[44]->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //object_0057BC44
	___SONIC_OBJECTS[63]->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //object_00583284
	___MILES_OBJECTS[60]->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[61]->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[64]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[64]->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[64]->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[64]->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[65]->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[65]->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[65]->basicdxmodel->mats[2].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[65]->basicdxmodel->mats[3].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[64]->child->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[65]->child->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->child->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->child->basicdxmodel->mats[1].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___MILES_OBJECTS[0]->child->child->sibling->sibling->child->child->sibling->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //eye 1
	___MILES_OBJECTS[0]->child->child->sibling->sibling->child->child->sibling->child->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //eye 2
	___MILES_OBJECTS[1]->child->child->sibling->sibling->child->child->sibling->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //eye 1
	___MILES_OBJECTS[1]->child->child->sibling->sibling->child->child->sibling->child->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //eye 2
	___KNUCKLES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___KNUCKLES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___KNUCKLES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___KNUCKLES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___KNUCKLES_OBJECTS[1]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___KNUCKLES_OBJECTS[1]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___KNUCKLES_OBJECTS[1]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___KNUCKLES_OBJECTS[1]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	___AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
	___AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Rings with env map
	___AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Rings with env map
	___AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Rings with env map
	___AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->child->child->child->child->sibling->sibling->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //Rings with env map
	___AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->child->child->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->sibling->child->child->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___BIG_OBJECTS[31]->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___BIG_OBJECTS[31]->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___BIG_OBJECTS[19]->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___BIG_OBJECTS[19]->child->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___BIG_OBJECTS[19]->child->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___BIG_OBJECTS[19]->child->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___BIG_OBJECTS[19]->child->child->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
	___BIG_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->sibling->sibling->child->child->sibling->sibling->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //eye white 1
	___BIG_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->sibling->sibling->child->child->sibling->sibling->child->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //eye white 2
	___E102_OBJECTS[0]->child->child->sibling->child->child->child->child->sibling->sibling->child->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; //object_00206674
	___E102_OBJECTS[0]->child->child->sibling->child->child->child->child->sibling->child->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //object_00206BBC
	___E102_OBJECTS[0]->child->child->sibling->child->child->child->child->sibling->child->child->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //object_00206BBC
	___E102_OBJECTS[0]->child->child->sibling->sibling->child->child->child->child->sibling->child->child->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //object_00205794
	___E102_OBJECTS[0]->child->child->sibling->sibling->child->child->child->child->sibling->child->child->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //object_00205794
	___E102_OBJECTS[0]->child->child->sibling->sibling->child->child->child->child->sibling->sibling->child->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //object_0020524C
	___E102_OBJECTS[0]->child->child->sibling->sibling->sibling->child->child->sibling->child->sibling->sibling->child->child->sibling->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_LIGHT; //object_00201AE4
	___E102_OBJECTS[0]->child->child->sibling->sibling->sibling->child->child->sibling->child->sibling->sibling->child->child->sibling->child->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //object_00200D14
	___E102_OBJECTS[0]->child->child->sibling->sibling->sibling->child->child->sibling->child->sibling->sibling->child->child->sibling->child->sibling->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //object_0020098C
	___E102_OBJECTS[0]->child->child->sibling->sibling->sibling->child->child->sibling->child->sibling->sibling->child->child->sibling->child->sibling->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //object_0020098C
	___E102_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //object_001FDF7C
	___E102_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->sibling->child->sibling->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //object_001FDF7C
	___E102_ACTIONS[50]->object->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //object_0020BCAC
}

extern "C" __declspec(dllexport) void __cdecl OnFrame()
{
	HMODULE handle = GetModuleHandle(L"CHRMODELS_orig");
	NJS_OBJECT **___SONIC_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___SONIC_OBJECTS");
	NJS_OBJECT **___MILES_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___MILES_OBJECTS");
	NJS_OBJECT **___KNUCKLES_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___KNUCKLES_OBJECTS");
	NJS_OBJECT **___AMY_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___AMY_OBJECTS");
	NJS_OBJECT **___BIG_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___BIG_OBJECTS");
	___SONIC_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //nose
	___MILES_OBJECTS[0]->child->child->sibling->sibling->child->child->sibling->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //eye whites
	___MILES_OBJECTS[0]->child->child->sibling->sibling->child->child->sibling->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //nose
	___KNUCKLES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //nose
	___KNUCKLES_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //eye whites
	___KNUCKLES_OBJECTS[1]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->child->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR; //eye whites
	___AMY_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //nose
	___BIG_OBJECTS[0]->child->child->sibling->sibling->sibling->sibling->sibling->child->child->sibling->sibling->sibling->sibling->sibling->child->child->sibling->sibling->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //nose
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };
