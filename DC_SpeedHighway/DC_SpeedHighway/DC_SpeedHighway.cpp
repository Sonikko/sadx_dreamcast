#include <SADXModLoader.h>
#include <lanternapi.h>
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

DataPointer(int, FramerateSetting, 0x0389D7DC);

FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(long double, sub_49CC70, (float a1, float a2, float a3), 0x49CC70);
FunctionPointer(void, sub_408530, (NJS_OBJECT *obj), 0x408530);

static int RocketAlpha = 255;
static int AntennaAlpha = 255;
static int RocketAlphaDir = 4;
static int shwwater = 106;

PointerInfo pointers[] = {
	ptrdecl(0x97DA88, &landtable_0001853C),
	ptrdecl(0x97DA8C, &landtable_00019178),
	ptrdecl(0x97DA90, &landtable_0001B08C)
};

void FountainPart1(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawQueueDepthBias = 2000.0f;
	sub_409E70(&attach_00135B64, 4, a3);
}

void FountainPart2(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawQueueDepthBias = 4000.0f;
	sub_409E70(&attach_00135920, 4, a3);
}

void FountainPart3(NJS_MODEL_SADX *a1, int a2, float a3)
{
	DrawQueueDepthBias = 6000.0f;
	sub_409E70(&attach_00135454, 4, a3);
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(1, false);
	diffuse_override(true);
	use_default_diffuse(true);
	return true;
}

NJS_MATERIAL* WhiteDiffuse[] = {
	//Level stuff
	&matlist_000774B8[0],
	&matlist_000774B8[1],
	&matlist_000774B8[2],
	&matlist_000774B8[3],
	&matlist_000774B8[4],
	&matlist_000774B8[5],
	&matlist_000774B8[6],
	&matlist_000774B8[7],
	&matlist_000774B8[8],
	&matlist_000774B8[9],
	//OAntena
	((NJS_MATERIAL*)0x02691188),
	((NJS_MATERIAL*)0x0269119C),
	//Helicopter
	((NJS_MATERIAL*)0x0268CB54),
	((NJS_MATERIAL*)0x0268CB68),
	((NJS_MATERIAL*)0x0268CB7C),
	&matlist_001591D8[0],
	&matlist_001591D8[1],
	&matlist_001591D8[2],
	//Cone
	&matlist_001552C0[0],
	//Cop speeder
	((NJS_MATERIAL*)0x00971AA0),
	((NJS_MATERIAL*)0x00971AB4),
	((NJS_MATERIAL*)0x00971AF0),
};

void RocketSprite()
{
	if (RocketAlpha < 0) RocketAlpha = 0;
	if (RocketAlpha > 255) RocketAlpha = 255;
	SetMaterialAndSpriteColor_Float(RocketAlpha/255.0f, 1.0f, 1.0f, 1.0f);
}

void AntennaModel(NJS_OBJECT *obj)
{
	sub_408530(&object_022919C0);
	ProcessModelNode(&object_022919C0_2, (QueuedModelFlagsB)0, 1.0f);
}

void AntennaSprite()
{
	if (AntennaAlpha < 0) AntennaAlpha = 0;
	if (AntennaAlpha > 255) AntennaAlpha = 255;
	SetMaterialAndSpriteColor_Float(AntennaAlpha / 255.0f, 1.0f, 1.0f, 1.0f);
}

extern "C"
{
	__declspec(dllexport) PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init(const char *path)
	{
		//Fountain fixes
		WriteCall((void*)0x0061BAA0, FountainPart1);
		WriteCall((void*)0x0061BAF1, FountainPart2);
		WriteCall((void*)0x0061BB31, FountainPart3);
		WriteData((NJS_OBJECT**)0x0061BC4C, &object_00134B34); //Fountain bottom
		WriteData((NJS_OBJECT**)0x026B3150, &object_001350C8); //Fountain side
		//Fix rocket/antenna sprite
		*(NJS_OBJECT*)0x026919C0 = object_022919C0; //Antenna model
		WriteCall((void*)0x00615D60, AntennaModel);
		WriteCall((void*)0x00615DB5, AntennaSprite);
		WriteData<1>((char*)0x00615DBB, 0x8); //Antenna sprite blending SA_SRC
		WriteCall((void*)0x00614122, RocketSprite);
		HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
		if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
		{
			material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
		}
		//Helicopter light
		((NJS_OBJECT*)0x268CF20)->child->sibling->evalflags |= NJD_EVAL_HIDE;
		*(NJS_MODEL_SADX*)0x268CEF4 = attach_00159560;
		((NJS_OBJECT*)0x268CF20)->model = &attach_00159560;
		//WriteData((char*)0x00613787, 0x01, 1); //Light blending mode
		((NJS_MATERIAL*)0x0268C98C)->diffuse.color = 0xB2B2B2B2;
		//OJamer lighting
		((NJS_MATERIAL*)0x0266390C)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x02663920)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_MATERIAL*)0x02663948)->attrflags |= NJD_FLAG_IGNORE_LIGHT;
		//NBox1 specular
		((NJS_MATERIAL*)0x0267F418)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267F42C)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267F440)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267F454)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267F468)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267F47C)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267F490)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267F4A4)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267FDD0)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267FDE4)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267FDF8)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267FE0C)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267FE20)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267FE34)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267FE48)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0267FE5C)->attrflags |= NJD_FLAG_IGNORE_SPECULAR;
		//Nbox2 specular
		((NJS_MATERIAL*)0x02680788)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0268079C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x026807B0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x026807C4)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x026807D8)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x026807EC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x02680800)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x026812B8)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x026812CC)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x026812E0)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x026812F4)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x02681308)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x0268131C)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		((NJS_MATERIAL*)0x02681330)->attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
		*(NJS_OBJECT*)0x0268843C = object_001554A8; //Cone
		WriteData((char*)0x006165DF, 0x00, 1); //Cone blending mode
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
		((NJS_OBJECT*)0x026785FC)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //material fix for container A
		((NJS_OBJECT*)0x0267943C)->basicdxmodel->mats[1].diffuse.color = 0xFFB2B2B2; //material fix for container A
		((NJS_OBJECT*)0x02676A4C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //material fix for container B
		*(NJS_OBJECT*)0x026777D4 = object_00146254;//container B top broken 1
		*(NJS_OBJECT*)0x02677288 = object_00145D34;//container B top broken 2
		WriteData<1>((void*)0x00619545, 1); //blending mode for poster
		WriteData<1>((void*)0x0061A8EA, 0); //blending mode for glass
		WriteData<1>((void*)0x0061A8EA, 0); //blending mode for glass 2
		WriteData<1>((void*)0x0061A951, 0); //blending mode for glass 3
		ResizeTextureList((NJS_TEXLIST*)0x2592E8C, textures_highway1);
		ResizeTextureList((NJS_TEXLIST*)0x2581310, textures_highway2);
		ResizeTextureList((NJS_TEXLIST*)0x24CAC94, textures_highway3);
		((NJS_OBJECT *)0x02671A20)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA; //O Crane platform alpha fix
		((NJS_OBJECT *)0x02671A20)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_SPECULAR; //O Crane platform specular
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
			SpeedHighway3Fog[i].Color = 0xFF7FB2E5;
			SpeedHighway3Fog[i].Layer = 1200.0f;
			SpeedHighway3Fog[i].Distance = 2900.0f;
			SpeedHighway3Fog[i].Toggle = 1;
			SpeedHighway2Fog[i].Layer = 1600.0f;
			SpeedHighway2Fog[i].Distance = 4800.0f;
			SpeedHighway2Fog[i].Color = 0xFF300020;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 4)
		{
			if (RocketAlphaDir == 4 && RocketAlpha >= 255) RocketAlphaDir = -4;
			if (RocketAlphaDir == -4 && RocketAlpha <= 0) RocketAlphaDir = 4;
			RocketAlpha = RocketAlpha + RocketAlphaDir;
			AntennaAlpha = RocketAlpha;
			if (CurrentAct == 2)
			{
				if ((FramerateSetting < 2 && FrameCounterUnpaused % 4 == 0) || (FramerateSetting >= 2 && FrameCounterUnpaused % 2 == 0)) shwwater++;
				if (shwwater > 119) shwwater = 106;
				matlist_001338A0[0].attr_texId = shwwater;
			}
		}
	}
}
