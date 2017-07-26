#include "stdafx.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include <string>
#include "ADV01_0_animlist.h"
#include "ADV01_0.h"
#include "ADV01_1.h"
#include "ADV01_2.h"
#include "ADV01_3.h"
#include "ADV01_4.h"
#include "ADV01_5.h"
#include "EC_Objects.h"
#include "ADV01C_00.h"
#include "ADV01C_01.h"
#include "ADV01C_02.h"
#include "ADV01C_03.h"
#include "ADV01C_04.h"
#include "ADV01C_05.h"
FunctionPointer(void, sub_6F4570, (ObjectMaster *a1), 0x6F4570);
DataPointer(ObjectMaster*, dword_3C85138, 0x3C85138);
HMODULE handle2 = GetModuleHandle(L"ADV01MODELS");
std::string plw1xbin;
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(__int16, EggCarrierSunk_CharacterFlag, 0x0090A41C);

static int water1 = 98;
static int water2 = 90;
static int water3 = 66;
static char water_sadx1 = 108;
static char water_sadx2 = 100;
static char water_sadx3 = 76;

DataArray(DrawDistance, EggCarrierOutsideDrawDist1, 0x010F2264, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist2, 0x010F227C, 3);
DataArray(DrawDistance, EggCarrierOutsideDrawDist3, 0x010F2294, 3);
DataArray(DrawDistance, EggCarrierOutsideSkyDrawDist3, 0x010F2204, 3);
DataArray(FogData, EggCarrierOutside2Fog, 0x010F233C, 3);
DataArray(FogData, EggCarrierOutside3Fog, 0x010F236C, 3);
DataArray(FogData, EggCarrierOutside4Fog, 0x010F239C, 3);
DataArray(FogData, EggCarrierOutside5Fog, 0x010F23CC, 3);
DataArray(FogData, EggCarrierOutside6Fog, 0x010F23FC, 3);
DataArray(FogData, EggCarrierOutside7Fog, 0x010F242C, 3);
DataArray(FogData, EggCarrierInside1Fog, 0x01100C18, 3);
DataArray(FogData, EggCarrierInside2Fog, 0x01100C48, 3);
DataArray(FogData, EggCarrierInside3Fog, 0x01100C78, 3);
DataArray(FogData, EggCarrierInside4Fog, 0x01100CA8, 3);
DataArray(FogData, EggCarrierInside5Fog, 0x01100CD8, 3);
DataArray(FogData, EggCarrierInside6Fog, 0x01100D08, 3);
DataArray(NJS_VECTOR, SkyboxScale_EggCarrier4, 0x010F212C, 3);
DataArray(PVMEntry, EggCarrierObjectTexlist_Sea, 0x010F34A8, 6);
DataPointer(int, DroppedFrames, 0x03B1117C);
HMODULE handle3 = GetModuleHandle(L"ADV01CMODELS");
HMODULE CHRMODELS = GetModuleHandle(L"CHRMODELS");
NJS_OBJECT **___MILES_OBJECTS = (NJS_OBJECT **)GetProcAddress(CHRMODELS, "___MILES_OBJECTS");
NJS_TEXLIST **___ADV01_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle2, "___ADV01_TEXLISTS");
NJS_TEXLIST **___ADV01C_TEXLISTS = (NJS_TEXLIST **)GetProcAddress(handle3, "___ADV01C_TEXLISTS");
LandTable **___LANDTABLEEC = (LandTable **)GetProcAddress(handle2, "___LANDTABLEEC");
LandTable **___LANDTABLEECC = (LandTable **)GetProcAddress(handle3, "___LANDTABLEEC");
NJS_OBJECT **___ADV01C_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle3, "___ADV01C_OBJECTS");
NJS_ACTION **___ADV01C_ACTIONS = (NJS_ACTION **)GetProcAddress(handle3, "___ADV01C_ACTIONS");
NJS_ACTION **___ADV01_ACTIONS = (NJS_ACTION **)GetProcAddress(handle2, "___ADV01_ACTIONS");
NJS_OBJECT **___ADV01_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle2, "___ADV01_OBJECTS");
NJS_OBJECT **___ADV01EC00_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle2, "___ADV01EC00_OBJECTS");
NJS_MODEL_SADX **___ADV01C_MODELS = (NJS_MODEL_SADX **)GetProcAddress(handle3, "___ADV01C_MODELS");

const char* __cdecl SetPLW1X(int level, int act)
{
	if (level == 32 && act == 1)
	{
		return plw1xbin.c_str();
	}
	else { return nullptr; }
}


bool ForceObjectSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(3, false);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

NJS_MATERIAL* ObjectSpecular[] = {
//OMast
	(NJS_MATERIAL*)((size_t)handle2 + 0x00216050),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00216050),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00216064),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00216078),
	(NJS_MATERIAL*)((size_t)handle2 + 0x0021608C),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002160A0),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002160B4),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002160C8),
//OBChair
	(NJS_MATERIAL*)((size_t)handle2 + 0x00243B98),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00243BAC),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00243BC0),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00243BD4),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00243BE8),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00243BFC),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00243C10),
	(NJS_MATERIAL*)((size_t)handle2 + 0x0024398C),
//Gunsight
	(NJS_MATERIAL*)((size_t)handle2 + 0x002336A0),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00233160),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00233174),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00231358),
	(NJS_MATERIAL*)((size_t)handle2 + 0x0023136C),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00231380),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00231394),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002313A8),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002313BC),
//OEggmanBed
	(NJS_MATERIAL*)((size_t)handle2 + 0x002380D8),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002380EC),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00238100),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00238114),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00238128),
	(NJS_MATERIAL*)((size_t)handle2 + 0x0023813C),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00238150),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00238164),
	(NJS_MATERIAL*)((size_t)handle2 + 0x00238178),
	(NJS_MATERIAL*)((size_t)handle2 + 0x0023818C),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002381A0),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002381B4),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002381C8),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002381DC),
	(NJS_MATERIAL*)((size_t)handle2 + 0x002381F0),
};

NJS_MATERIAL* WhiteDiffuse[] = {
	//OTarai button
	&matlist_0011154C[0],
	&matlist_0011154C[1],
	&matlist_0011154C[2],
	&matlist_00111440[0],
//OTaihou Cannon
	&matlist_0017C018[3],
	&matlist_0017C018[4],
	&matlist_0017C018[5],
	&matlist_0017C018[6],
	&matlist_0017C018[7],
//Captain room
&matlist_000CB0BC[4],
&matlist_000CB0BC[7],
&matlist_000165BC[0],
&matlist_000165BC[1],
&matlist_000165BC[2],
&matlist_000165BC[3],
&matlist_000165BC[5],
&matlist_000165BC[6],
&matlist_000165BC[7],
&matlist_000165BC[8],
&matlist_000165BC[9],
};

void sub_10001050(NJS_OBJECT *a1)
{
	NJS_MODEL_SADX *v1; // edx@1
	signed int v2; // ecx@1
	__int16 *v3; // eax@2

	v1 = (NJS_MODEL_SADX*)a1->model;
	v2 = 0;
	if (v1->nbMat)
	{
		v3 = (__int16*)&v1->mats->attrflags;
		do
		{
			*(_DWORD *)v3 &= 0xFFEFFFFF;
			++v2;
			v3 += 10;
		} while (v2 < v1->nbMat);
	}
}

void __cdecl SetClip_EC00(signed int cliplevel)
{
	if (cliplevel >= 2)
	{
		sub_10001050(&object_00032A00);
		sub_10001050(&object_00032D2C);
		sub_10001050(&object_0003335C);
		sub_10001050(&object_00033688);
		landtable_00162260.COLCount -= 4;
	}
	else
	{
		landtable_00162260.Col = &collist_0015F764[4];
		landtable_00162260.COLCount -= 4;
	}
}

void __cdecl SetClip_EC01(signed int cliplevel)
{
	if (cliplevel >= 2)
	{
		sub_10001050(&object_0007F56C);
		sub_10001050(&object_0007F898);
		sub_10001050(&object_0007EF3C);
		sub_10001050(&object_0007EC10);
		sub_10001050(&object_0008241C_2);
		sub_10001050(&object_00082A7C_2);
		landtable_001631F0.COLCount -= 6;
	}
	else
	{
		landtable_001631F0.Col = &collist_00162284[6];
		landtable_001631F0.COLCount -= 6;
	}
}

ObjectMaster *__cdecl TurnLightsOff()
{
	set_shader_flags(ShaderFlags_Blend, true);
	set_diffuse_blend(4);
	set_specular_blend(3);
	set_blend_factor(1.0f);
	ObjectMaster *result; // eax@1
	result = LoadObject((LoadObj)0, 1, sub_6F4570);
	dword_3C85138 = result;
	return result;
}

void TurnLightsOn()
{
	if (dword_3C85138)
	{
		CheckThingButThenDeleteObject(dword_3C85138);
		dword_3C85138 = 0;
	}

	set_blend_factor(0.0f);
	set_shader_flags(ShaderFlags_Blend, false);
}

extern "C" __declspec(dllexport) void __cdecl Init(const char *path, const HelperFunctions &helperFunctions)
{
	plw1xbin = path;
	plw1xbin.append("\\system\\PL_W1X.BIN");
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
	{
		typedef const char* (__cdecl* lantern_load_cb)(int level, int act);
		pl_load_register(SetPLW1X);
		material_register(ObjectSpecular, LengthOfArray(ObjectSpecular), &ForceObjectSpecular);
		//material_register(LevelSpecular, LengthOfArray(LevelSpecular), &ForceLevelSpecular);
		material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
		WriteCall((void*)0x006F4577, TurnLightsOff); //Turn the lights off
		WriteCall((void*)0x006F4620, TurnLightsOn); //Turn the lights on
	}
	HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
	if (SADXStyleWater != 0)
	{
		EggCarrierObjectTexlist_Sea[1].Name = "EC_SEAW";
		landtable_00162260.TexName = "ADV_EC00W";
		landtable_001631F0.TexName = "ADV_EC01W";
		landtable_00163CE8.TexName = "ADV_EC02W";
		texlist_ec00.nbTexture = 125;
		texlist_ec01.nbTexture = 117;
		texlist_ec02.nbTexture = 93;
		WriteData((char*)0x0051C4E8, 0x7B, 1); //act 1 water
		WriteData((char*)0x0051C50B, 0x73, 1); //act 2 water
		WriteData((char*)0x0051C529, 0x5B, 1); //act 3 water
		WriteData((float*)0x0051C5EC, 2.5f); //Z fighting fix
	}
	else
	{
		WriteData((void*)0x0051C440, 0xC3u, 1);
		EggCarrierObjectTexlist_Sea[1].Name = "EC_SEA";
		landtable_00162260.TexName = "ADV_EC00";
		landtable_001631F0.TexName = "ADV_EC01";
		landtable_00163CE8.TexName = "ADV_EC02";
	}
	WriteJump((char *)GetProcAddress(handle2, "SetClip_EC00"), SetClip_EC00);
	WriteJump((char *)GetProcAddress(handle2, "SetClip_EC01"), SetClip_EC01);
	WriteData((void *)0x0051BB8C, 0x90, 5); //disable that stupid DisableFog thing
	((NJS_OBJECT*)0x03104130)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF;
	___ADV01_TEXLISTS[0] = &texlist_ec00;
	___ADV01_TEXLISTS[1] = &texlist_ec01;
	___ADV01_TEXLISTS[2] = &texlist_ec02;
	___ADV01_TEXLISTS[3] = &texlist_ec03;
	___ADV01_TEXLISTS[4] = &texlist_ec04;
	___ADV01_TEXLISTS[5] = &texlist_ec05;
	___LANDTABLEEC[0] = &landtable_00162260;
	___LANDTABLEEC[1] = &landtable_001631F0;
	___LANDTABLEEC[2] = &landtable_00163CE8;
	___LANDTABLEEC[3] = &landtable_001650C8;
	___LANDTABLEEC[4] = &landtable_00165830;
	___LANDTABLEEC[5] = &landtable_001666F4;
	___LANDTABLEECC[0] = &landtable_0000C64C;
	___LANDTABLEECC[1] = &landtable_0000D7B0;
	___LANDTABLEECC[2] = &landtable_0000E1D0;
	___LANDTABLEECC[3] = &landtable_0000EDB8;
	___LANDTABLEECC[4] = &landtable_0000F7A8;
	___LANDTABLEECC[5] = &landtable_0000FE44;
	___ADV01C_TEXLISTS[15] = &texlist_ec30;
	___ADV01C_TEXLISTS[16] = &texlist_ec31;
	___ADV01C_TEXLISTS[17] = &texlist_ec32;
	___ADV01C_TEXLISTS[18] = &texlist_ec33;
	___ADV01C_TEXLISTS[19] = &texlist_ec34;
	___ADV01C_TEXLISTS[20] = &texlist_ec35;
	___ADV01C_MODELS[28] = &attach_00111938;
	___ADV01C_MODELS[27] = &attach_001114EC;
	___ADV01C_OBJECTS[7] = &object_00111964; //tarai button
	___ADV01C_OBJECTS[7]->child = &object_00111518;
	___ADV01C_OBJECTS[8] = &object_000D243C; //tarai
	___ADV01_ACTIONS[2]->object = &object_0019795C; //OEggChair
	___ADV01_ACTIONS[2]->motion = &_197dbc; //OEggChair
	___ADV01_OBJECTS[21] = &object_001972E4;
	___ADV01_OBJECTS[22] = &object_0018C098;
	___ADV01_OBJECTS[23] = &object_0018BD3C;
	___ADV01_OBJECTS[24] = &object_0018B9E0;
	___ADV01_OBJECTS[0] = &object_00182160; //SideLift
	___ADV01_OBJECTS[1] = &object_00181DBC; //SideLift
	___ADV01_OBJECTS[2] = &object_00181684; //SideLift
	___ADV01_OBJECTS[55] = &object_0017D82C; //OSLight
	___ADV01_OBJECTS[56] = &object_0017CBA0; //OSLight
	___ADV01_OBJECTS[57] = &object_0017C970; //OSLight
	___ADV01_OBJECTS[58] = &object_0017BFE4; //OSLight
	___ADV01_ACTIONS[0]->object = &object_00178BC4; //This thing is stupid
	___ADV01_OBJECTS[5] = &object_00178BC4; //This thing is stupid
	___ADV01_OBJECTS[13] = &object_001A85F0; //OParasol
	___ADV01_OBJECTS[27] = &object_001782D4; //Door top
	___ADV01_OBJECTS[14]->model = &attach_0017FD8C; //OTaihou (Cannon)
	___ADV01_OBJECTS[14]->child->model = &attach_0017F618; //OTaihou (Cannon)
	___ADV01_OBJECTS[14]->child->child->model = &attach_0017E110; //OTaihou (Cannon)
	___ADV01_OBJECTS[14]->child->child->sibling->model = &attach_0017DC48; //OTaihou (Cannon)
	___ADV01_OBJECTS[28] = &object_001777B4; //Door 2
	___ADV01_OBJECTS[18] = &object_00189EA0; //Eggcap
	___ADV01_OBJECTS[19] = &object_001760A0; //Egglift
	___ADV01_OBJECTS[69]->child->child->model = &attach_0016CD90; //Monorail front
	___ADV01_OBJECTS[69]->child->model = &attach_0016D524; //Monorail front
	___ADV01_OBJECTS[70]->child->child->model = &attach_00170CFC; //Monorail back
	___ADV01_OBJECTS[70]->child->model = &attach_001714D8; //Monorail back
	___ADV01C_OBJECTS[43]->child->child->model = &attach_000AEDD0; //Monorail 1 door
	___ADV01C_OBJECTS[43]->child->model = &attach_000AF564; //Monorail 1 door thing
	___ADV01C_OBJECTS[44]->child->child->model = &attach_000B2D3C; //Monorail 2 door 
	___ADV01C_OBJECTS[44]->child->model = &attach_000B3518; //Monorail 2 door thing
	___ADV01C_OBJECTS[29] = &object_000ADCD8; //Monorail station
	___ADV01C_ACTIONS[7]->object = &object_000B8CD4; //Egglift
	___ADV01C_OBJECTS[23] = &object_000B8CD4; //Egglift
	___ADV01C_ACTIONS[6]->object = &object_000BAF48; //Door
	___ADV01C_MODELS[27]->mats[0].diffuse.color = 0xFFFFFFFF;
	WriteData((void*)0x005244D6, 0x90, 5); //Disable light flickering
	for (int i = 0; i < 3; i++)
	{
		SkyboxScale_EggCarrier4[i].x = 1.0f;
		SkyboxScale_EggCarrier4[i].y = 1.0f;
		SkyboxScale_EggCarrier4[i].z = 1.0f;
		EggCarrierOutsideSkyDrawDist3[i].Maximum = -7000;
		EggCarrierOutsideDrawDist1[i].Maximum = -11000;
		EggCarrierOutsideDrawDist2[i].Maximum = -11000;
		EggCarrierOutsideDrawDist3[i].Maximum = -11000;
		EggCarrierOutside2Fog[i].Distance = -12000;
		EggCarrierOutside2Fog[i].Layer = -12000;
		EggCarrierOutside3Fog[i].Distance = -12000;
		EggCarrierOutside3Fog[i].Layer = -12000;
		EggCarrierOutside4Fog[i].Distance = -12000;
		EggCarrierOutside4Fog[i].Layer = -12000;
		EggCarrierOutside5Fog[i].Distance = -12000;
		EggCarrierOutside5Fog[i].Layer = -12000;
		EggCarrierOutside6Fog[i].Distance = -12000;
		EggCarrierOutside6Fog[i].Layer = -12000;
		EggCarrierOutside7Fog[i].Toggle = 1;
		EggCarrierOutside7Fog[i].Layer = 3000;
		EggCarrierOutside7Fog[i].Color = 0xFF000000;
		EggCarrierOutside7Fog[i].Distance = 21500;
		EggCarrierInside1Fog[i].Distance = -12000;
		EggCarrierInside1Fog[i].Layer = -12000;
		EggCarrierInside2Fog[i].Toggle = 1;
		EggCarrierInside2Fog[i].Distance = 4000.0f;
		EggCarrierInside2Fog[i].Layer = 800.0f;
		EggCarrierInside2Fog[i].Color = 0xFFC6C9A8;
		EggCarrierInside3Fog[i].Distance = -12000;
		EggCarrierInside3Fog[i].Layer = -12000;
		EggCarrierInside4Fog[i].Toggle = 1;
		EggCarrierInside4Fog[i].Distance = 1216.0f;
		EggCarrierInside4Fog[i].Layer = 139.0f;
		EggCarrierInside4Fog[i].Color = 0xFFC8C864;
		EggCarrierInside5Fog[i].Distance = -12000;
		EggCarrierInside5Fog[i].Layer = -12000;
		EggCarrierInside6Fog[i].Distance = -12000;
		EggCarrierInside6Fog[i].Layer = -12000;
	}
}

extern "C" __declspec(dllexport)  void __cdecl OnFrame()
{
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	if (CurrentLevel == 32 && GameState != 16)
	{
		if (Lantern != nullptr && dword_3C85138 == 0)
		{
			set_blend_factor(0.0f);
			set_shader_flags(ShaderFlags_Blend, false);
		}
		//EC Interior barrier stuff
		//Water reservoir and Ammunition Room
		if (CurrentCharacter == 6)
		{
		collist_0000C670[LengthOfArray(collist_0000C670) - 4].Flags = 0x00000000;
		collist_0000C670[LengthOfArray(collist_0000C670) - 5].Flags = 0x00000000;
		}
		else
		{
		collist_0000C670[LengthOfArray(collist_0000C670) - 4].Flags = 0x80040000;
		collist_0000C670[LengthOfArray(collist_0000C670) - 5].Flags = 0x80040000;
		}
		//Hot Shelter room
		if (CurrentCharacter != 5 && CurrentCharacter != 6 && CurrentCharacter != 7) collist_0000C670[LengthOfArray(collist_0000C670) - 2].Flags = 0x80040000; //Lock Hot Shelter room for everyone but Amy, Big and Gamma
		if (CurrentCharacter == 5 || CurrentCharacter == 7) collist_0000C670[LengthOfArray(collist_0000C670) - 2].Flags = 0x00000000; //Unlock Hot Shelter room for Amy and Big
		if (CurrentCharacter == 6 && !GetEventFlag(EventFlags_Gamma_RedMountainClear)) collist_0000C670[LengthOfArray(collist_0000C670) - 2].Flags = 0x80040000; //Lock Hot Shelter room for Gamma
		if (CurrentCharacter == 6 && GetEventFlag(EventFlags_Gamma_RedMountainClear)) collist_0000C670[LengthOfArray(collist_0000C670) - 2].Flags = 0x00000000; //Unlock Hot Shelter room for Gamma
		//Hedgehog Hammer room
		if (CurrentCharacter == 5 || CurrentCharacter == 6 || CurrentCharacter == 7) collist_0000C670[LengthOfArray(collist_0000C670) - 3].Flags = 0x00000000; //Unlock prison room for Amy, Big and Gamma
		else collist_0000C670[LengthOfArray(collist_0000C670) - 3].Flags = 0x80040000; //Lock prison room for everyone else
		//E101 Beta room
		if (CurrentCharacter != 6) collist_0000C670[LengthOfArray(collist_0000C670) - 1].Flags = 0x80040000; //Lock E101 Beta room for everyone but Gamma
		if (CurrentCharacter == 6 && GetEventFlag(EventFlags_Gamma_JetBooster))	collist_0000C670[LengthOfArray(collist_0000C670) - 1].Flags = 0x80040000; //Lock E101 Beta room for Gamma
		if (CurrentCharacter == 6 && !GetEventFlag(EventFlags_Gamma_JetBooster)) collist_0000C670[LengthOfArray(collist_0000C670) - 1].Flags = 0x00000000; //Unlock E101 Beta room for Gamma
	}
	HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
	if (CurrentLevel == 29 && CurrentAct == 0)
	{
		if (GameState != 16)
		{
			if (water1 > 107) water1 = 98;
			if (water_sadx1 > 122) water_sadx1 = 108;
			matlist_00007B80[0].attr_texId = water1;
			if (Camera_Data1 != nullptr)
			{
				object_00007C50.pos[0] = Camera_Data1->Position.x;
				object_00007C50.pos[2] = Camera_Data1->Position.z;
			}
			if (SADXStyleWater != 0) WriteData((char*)0x0051C4E0, water_sadx1, 1);
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				water1++;
				water_sadx1++;
			}
		}
		if (IsEggCarrierSunk() && SADXStyleWater == 0) collist_0015F764[LengthOfArray(collist_0015F764)-1].Flags = 0x80000000; else collist_0015F764[LengthOfArray(collist_0015F764) - 1].Flags = 0x00000000;
	}
	if (CurrentLevel == 29 && CurrentAct == 1)
	{
		if (GameState != 16)
		{
			if (water_sadx2 > 114) water_sadx2 = 100;
			if (water2 > 99) water2 = 90;
			matlist_00007B80_1[0].attr_texId = water2;
			if (Camera_Data1 != nullptr)
			{
				object_00007C50_1.pos[0] = Camera_Data1->Position.x;
				object_00007C50_1.pos[2] = Camera_Data1->Position.z;
			}
			if (SADXStyleWater != 0) WriteData((char*)0x0051C503, water_sadx2, 1);
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				water2++;
				water_sadx2++;
			}
		}
		if (IsEggCarrierSunk() && SADXStyleWater == 0) collist_00162284[LengthOfArray(collist_00162284) - 1].Flags = 0x80000000; else collist_00162284[LengthOfArray(collist_00162284) - 1].Flags = 0x00000000;
	}
	if (CurrentLevel == 29 && CurrentAct == 2)
	{
		if (GameState != 16)
		{
			if (water3 > 75) water3 = 66;
			if (water_sadx3 > 90) water_sadx3 = 76;
			matlist_00007B80_2[0].attr_texId = water3;
			if (Camera_Data1 != nullptr)
			{
				object_00007C50_2.pos[0] = Camera_Data1->Position.x;
				object_00007C50_2.pos[2] = Camera_Data1->Position.z;
			}
			if (SADXStyleWater != 0) WriteData((char*)0x0051C521, water_sadx3, 1);
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				water3++;
				water_sadx3++;
			}
		}
		if (IsEggCarrierSunk() && SADXStyleWater == 0) collist_00163214[LengthOfArray(collist_00163214) - 1].Flags = 0x80000000; else collist_00163214[LengthOfArray(collist_00163214) - 1].Flags = 0x00000000;
	}
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };