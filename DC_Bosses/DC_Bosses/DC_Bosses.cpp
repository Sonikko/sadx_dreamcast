#include "stdafx.h"
#include <SADXModLoader.h>
#include "EggHornet.h"
#include "EggWalker.h"
#include "EggViper.h"
#include "Chaos0_Landtable.h"
#include "Chaos0_PoliceCar.h"
#include "Chaos0_Model.h"
#include "Chaos2_PC.h"
#include "Chaos4_water.h"
#include "Chaos4.h"
#include "Chaos6_Act1.h"
#include "Chaos6_Act2.h"
#include "Chaos7.h"
#include "E101.h"
#include "Zero.h"
#include "E101R.h"
//#include "EggHornet_Model.h"

DataPointer(float, Chaos4Hitpoints, 0x03C58158);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataPointer(NJS_TEXANIM, stru_149401C, 0x149401C);
DataPointer(int, DroppedFrames, 0x03B1117C);
DataPointer(NJS_ARGB, stru_1494114, 0x1494114);
DataPointer(NJS_SPRITE, stru_1494030, 0x1494030);
FunctionPointer(void, sub_5632F0, (ObjectMaster *a1), 0x5632F0);
FunctionPointer(void, sub_563370, (ObjectMaster *a1), 0x563370);

static bool Chaos4Defeated = 0;
static int anim = 27;
static int anim2 = 81;
static int anim3 = 121;
static int anim4 = 131;

//static int rot = 0;
//static int rotdir = 1;

NJS_MKEY_A animation_0004CEA0_15_rot[] = {
	{ 0, 0, 0, 0 },
	{ 1, 0, 0x1FFF, 0 },
	{ 2, 0, 0x3FFF, 0 },
	{ 3, 0, 0x5FFF, 0 },
	{ 4, 0, 0x7FFF, 0 },
	{ 5, 0, 0x9FFF, 0 },
	{ 6, 0, 0xBFFF, 0 },
	{ 7, 0, 0xDFFF, 0 }
};

NJS_MKEY_A animation_0004CEA0_16_rot[] = {
	{ 0, 0, 0, 0xFFFF },
	{ 1, 0, 0x1FFF, 0xFFFF },
	{ 2, 0, 0x3FFF, 0xFFFF },
	{ 3, 0, 0x5FFF, 0xFFFF },
	{ 4, 0, 0x7FFF, 0xFFFF },
	{ 5, 0, 0x9FFF, 0xFFFF },
	{ 6, 0, 0xBFFF, 0xFFFF },
	{ 7, 0, 0xDFFF, 0xFFFF }
};

NJS_MDATA2 animation_0004CEA0_mdat[] = {
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, animation_0004CEA0_15_rot, 0, LengthOfArray(animation_0004CEA0_15_rot) },
	{ NULL, animation_0004CEA0_16_rot, 0, LengthOfArray(animation_0004CEA0_16_rot) },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 },
	{ NULL, NULL, 0, 0 }
};

NJS_MOTION animation_0004CEA0 = { animation_0004CEA0_mdat, 8, NJD_MTYPE_POS_0 | NJD_MTYPE_ANG_1, 2 };

PointerInfo pointers[] = {
	//ptrdecl(0x7D1CC0, &landtable_0000028C), //Chaos 2 DC
	ptrdecl(0x7D1CC0, &landtable_00D2136C), //Chaos 2 PC
	ptrdecl(0x7D1CD6, &landtable_00000238), //Chaos 4
	ptrdecl(0x7D1CEC, &landtable_00000318), // Chaos 6 Act 1
	ptrdecl(0x7D1CF6, &landtable_0000033C), //Chaos 6 Act 2
	ptrdecl(0x7D1D1C, &landtable_00000128), //Egg Hornet
	ptrdecl(0x7D1D32, &landtable_0000022C), //Egg Walker
	ptrdecl(0x7D1D48, &landtable_000580F4), //Egg Viper
	ptrdecl(0x7D1D7F, &landtable_00000068), //E-101
	ptrdecl(0x7D1D06, &landtable_00001214), //Perfect Chaos DC
	ptrdecl(0x7D1D64, &landtable_00000110), //Zero
	ptrdecl(0x7D1DD1, &landtable_00000180) //E101R
};

//Perfect Chaos damage functions
void __cdecl sub_5633A0(ObjectMaster *a1)
{
	a1->Data1->field_C = FrameCounter;
	a1->MainSub = sub_563370;
	//a1->DisplaySub = sub_5632F0;
	a1->Data1->field_C = 0;
}


void __cdecl sub_5632F0X(ObjectMaster *a1)
{
	EntityData1 *v1; // esi@1
	v1 = a1->Data1;
	int v2 = a1->Data1->field_C;

}

void __cdecl sub_563370Z(ObjectMaster *a1)
{
	EntityData1 *v1; // eax@1
	int v2; // st7@1
	int v3;
	v1 = a1->Data1;
	v2 = a1->Data1->field_C;
	v3 = FrameCounter - v2;
	if (v2 >= 16) 
	{
		CheckThingButThenDeleteObject(a1);
	}
	else
	{
	if (!DroppedFrames)
	{
		DisableFog();
		SetMaterialAndSpriteColor(&stru_1494114);
		njColorBlendingMode(0, 10);
		njColorBlendingMode(1, 10);
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		stru_149401C.texid = v2;
		njDrawSprite3D_2(&stru_1494030, 0, NJD_SPRITE_ALPHA | NJD_SPRITE_SCALE, 4);
		njPopMatrix(1u);
		ToggleStageFog();
	}
	if (v3 % 2 == 0 ) v2++;
	a1->Data1->field_C = v2;
	}
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		*(NJS_OBJECT *)0x010FEF74 = *(NJS_OBJECT *)0x02EEB524; //Replace the non-updated Eggmobile model with a high-poly one
		WriteData((NJS_TEXLIST**)0x007D2B22, (NJS_TEXLIST*)0x02EE0AA4); //Replace the texlist for the above model in the NPC data array
		*(NJS_TEXLIST**)0x02BD5FE4 = (NJS_TEXLIST*)0x02EE0AA4; //Eggman Super Sonic cutscene texlist fix
		HMODULE SADXStyleWater = GetModuleHandle(L"SADXStyleWater");
		//Perfect Chaos damage functions
		/*
		WriteJump((void*)0x563370, sub_563370Z);
		WriteJump((void*)0x5632F0, sub_5632F0X);
		WriteJump((void*)0x5633A0, sub_5633A0);
		*/
		//Disable Chaos 2 columns
		((NJS_OBJECT *)0x11863EC)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C944)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C978)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C9AC)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C9E0)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CA14)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CA48)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CA7C)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CAB0)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CAE4)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CB18)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CB4C)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CB80)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CBB4)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118CBE8)->evalflags |= NJD_EVAL_HIDE;
		((NJS_OBJECT *)0x118C910)->evalflags |= NJD_EVAL_HIDE;
		//E101 Beta lighting fix
		((NJS_OBJECT*)0x014D857C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014D857C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014D887C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014D943C)->basicdxmodel->mats[7].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014DC25C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT*)0x014DD4A4)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		//Material fixes
		((NJS_OBJECT *)0x31A4DFC)->basicdxmodel->mats[11].attrflags &= ~NJD_FLAG_IGNORE_LIGHT; //Zero holding Amy lighting fix
		//Chaos 0
		((NJS_OBJECT*)0x02C65CF8)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5DD18)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5E100)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5E36C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5F12C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5EEBC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5EB8C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C66B10)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5B614)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5B884)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5C798)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5C1F4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5BF00)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5A800)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5AAF4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5B098)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5A184)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C59F14)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C600A4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C603D4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C60644)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5F884)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x02C5F618)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		//Chaos 1
		((NJS_OBJECT*)0x038DD9BC)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Chaos puddle
		((NJS_OBJECT*)0x02D6962C)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Chaos puddle
		((NJS_OBJECT*)0x03185C90)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x031854CC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x03183F64)->basicdxmodel->mats[1].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x03180C58)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x031807B4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317FB3C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317D0D4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317C830)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317C31C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317C14C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317BF04)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317BA6C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317B8A0)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317B3B0)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317B0AC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317AE78)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317AAE4)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317A914)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317A640)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317A33C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x0317A108)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x03179D4C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		((NJS_OBJECT*)0x03179B7C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		//Chaos 2
		((NJS_OBJECT*)0x011A652C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2;
		((NJS_OBJECT*)0x0114B918)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011339EC)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos2 small ball
		((NJS_OBJECT*)0x01139274)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos2 ball
		((NJS_OBJECT*)0x0113F81C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos2 ball
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01132A50)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011326E4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011324A0)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01132074)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01131E78)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01131980)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01131614)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011313D0)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113328C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01130FA4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0113091C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01130DA8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112F1A8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112ECD4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112E09C)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112B584)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112ACC0)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112A6E8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112A214)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x011295DC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01126AC4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x0112A6E8)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01126200)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01125C60)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		((NJS_OBJECT*)0x01121EE4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos2
		//Chaos 4
		((NJS_OBJECT*)0x011C1C24)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos4 ball
		((NJS_OBJECT*)0x011EC85C)->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2; //Chaos4 ball
		((NJS_OBJECT*)0x0119E1A4)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x0119CFF8)->basicdxmodel->mats[1].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01199FDC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01198F18)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01198694)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01197FFC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01196F44)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01194B34)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01194294)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01193EAC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01193B18)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01192014)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01191764)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x011913AC)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		((NJS_OBJECT*)0x01191018)->basicdxmodel->mats[0].diffuse.color = 0x65B2B2B2; //Chaos4
		//Eggman model lighting fix
		((NJS_OBJECT*)0x008961E0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x008964CC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x008980DC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x00897DE0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		//Eggman model (Eggmobile) lighting fix
		((NJS_OBJECT*)0x02EE22C0)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x02EE25AC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x02EE4194)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		((NJS_OBJECT*)0x02EE3E98)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA;
		//Battle arena fixes
		((NJS_OBJECT *)0x016E3994)->basicdxmodel->mats[0].diffuse.color = 0xB2B2B2B2; //Egg Carrier boss battle arena material fix
		((NJS_OBJECT *)0x016E3994)->basicdxmodel->mats[1].diffuse.color = 0x99B2B2B2; //Egg Carrier boss battle arena material fix
		((NJS_OBJECT *)0x016E3CCC)->basicdxmodel->mats[0].diffuse.color = 0xB2B2B2B2; //Egg Carrier boss battle arena material fix
		((NJS_OBJECT *)0x016E3CCC)->basicdxmodel->mats[1].diffuse.color = 0x99B2B2B2; //Egg Carrier boss battle arena material fix
		((NJS_OBJECT *)0x016E301C)->basicdxmodel->mats[0].diffuse.color = 0xB2B2B2B2; //Egg Carrier boss battle arena material fix
		((NJS_OBJECT *)0x016E301C)->basicdxmodel->mats[1].diffuse.color = 0x99B2B2B2; //Egg Carrier boss battle arena material fix
		((NJS_OBJECT *)0x016E3354)->basicdxmodel->mats[0].diffuse.color = 0xB2B2B2B2; //Egg Carrier boss battle arena material fix
		((NJS_OBJECT *)0x016E3354)->basicdxmodel->mats[1].diffuse.color = 0x99B2B2B2; //Egg Carrier boss battle arena material fix
		((NJS_OBJECT *)0x016E3994)->basicdxmodel->mats[0].diffuse.color = 0xB2B2B2B2; //Egg Carrier boss battle arena material fix
		//SADX style water
		if (SADXStyleWater != 0)
		{
			collist_00009FA4[LengthOfArray(collist_00009FA4) - 1].Flags = 0x00000000;
			collist_000096DC[LengthOfArray(collist_000096DC) - 1].Flags = 0x00000000;
			collist_0001E294[0].Flags = 0x00000000;
			landtable_00000128.TexName = "EGM1LANDW";
			landtable_00000110.TexName = "E101R_TIKEIW";
			landtable_00000180.TexName = "E101R_TIKEIW";
		}
		else
		{
			collist_00009FA4[LengthOfArray(collist_00009FA4) - 1].Flags = 0x80000000;
			collist_000096DC[LengthOfArray(collist_000096DC) - 1].Flags = 0x80000000;
			collist_0001E294[0].Flags = 0x80040000;
			landtable_00000128.TexName = "EGM1LAND";
			landtable_00000110.TexName = "E101R_TIKEI";
			landtable_00000180.TexName = "E101R_TIKEI";
		}
		WriteData((void*)0x00557009, 0x90, 16); //Kill Chaos 6 skybox animation
		WriteData((void*)0x00557073, 0x0, 2); // Chaos 6 skybox scale 1
		WriteData((void*)0x00557078, 0x0, 2); // Chaos 6 skybox scale 2
		WriteData((void*)0x0055707D, 0x0, 2); // Chaos 6 skybox scale 3
		ResizeTextureList((NJS_TEXLIST*)0x118FF08, textures_chaos4dc);
		ResizeTextureList((NJS_TEXLIST*)0x121FF28, textures_chaos6);
		ResizeTextureList((NJS_TEXLIST*)0x11F04A0, textures_chaos6_2);
		ResizeTextureList((NJS_TEXLIST*)0x1494FBC, textures_chaos7);
		ResizeTextureList((NJS_TEXLIST*)0x1557064, textures_egm1land);
		ResizeTextureList((NJS_TEXLIST*)0x15E99F8, textures_eggwalker);
		ResizeTextureList((NJS_TEXLIST*)0x167E5CC, textures_eggviper);
		ResizeTextureList((NJS_TEXLIST*)0x14FBFB4, textures_e101);
		ResizeTextureList((NJS_TEXLIST*)0x16B460C, 91); //Zero/E101R texlist
		memcpy((void*)0x011C4B90, &object_000425F8, sizeof(object_000425F8)); // Chaos4 swamp water
		((LandTable *)0x11EDE38)->COLList = collist_0014AFB4; //Chaos6 COL list
		((LandTable *)0x11EDE38)->COLCount = LengthOfArray(collist_0014AFB4); //Chaos6 COL list
		memcpy((void*)0x011EDE20, &animlist_0014B62C, sizeof(animlist_0014B62C)); // Chaos6 animlist
		//*(NJS_OBJECT*)0x1561A70 = object_000104E8; //Egg Hornet model
		DataArray(FogData, Chaos2Fog, 0x01120638, 3);
		DataArray(FogData, Chaos6SFog, 0x011EF0E8, 3);
		DataArray(FogData, Chaos6KFog, 0x011EF118, 3);
		DataArray(FogData, Chaos4Fog, 0x0118FA00, 3);
		DataArray(FogData, Chaos7Fog, 0x01420E30, 3);
		DataArray(FogData, EggHornetFog, 0x01556B34, 3);
		DataArray(FogData, EggWalkerFog, 0x015E87F4, 3);
		DataArray(FogData, EggViperFog, 0x0165D334, 3);
		DataArray(FogData, Fog_E101R, 0x015225F0, 3);
		DataArray(FogData, Fog_Zero, 0x016B4DB0, 3);
		DataArray(DrawDistance, DrawDist_Chaos7, 0x01420E00, 3);
		DataArray(DrawDistance, DrawDist_EggHornet, 0x01556B1C, 3);
		DataArray(DrawDistance, DrawDist_E101R, 0x015225D8, 3);
		DataArray(DrawDistance, DrawDist_Zero, 0x016B4D98, 3);
		for (int i = 0; i < 3; i++)
		{
			Chaos2Fog[i].Color = 0xFF000000;
			Chaos2Fog[i].Layer = 700.0f;
			Chaos2Fog[i].Distance = 1700.0f;
			Chaos2Fog[i].Toggle = 0;
			Chaos4Fog[i].Color = 0xFF000000;
			Chaos4Fog[i].Layer = 1.0f;
			Chaos4Fog[i].Distance = 2000.0f;
			Chaos4Fog[i].Toggle = 0;
			Chaos6SFog[i].Distance = 12000.0f;	
			Chaos6KFog[i].Distance = 12000.0f;
			//Chaos7Fog[i].Color = 0xFF000000;
			Chaos7Fog[i].Layer = -4000.0f;
			Chaos7Fog[i].Distance = 11000.0f;
			Chaos7Fog[i].Toggle = 1;
			DrawDist_Chaos7[i].Maximum = -6500.0;
			DrawDist_EggHornet[i].Maximum = -12500.0;
			EggHornetFog[i].Layer = -2000.0f;
			EggHornetFog[i].Distance= -8000.0f;
			EggHornetFog[i].Toggle = 0;
			EggWalkerFog[i].Toggle = 0;
			EggViperFog[i].Toggle = 0;
			Fog_Zero[i].Toggle = 0;
			Fog_E101R[i].Toggle = 0;
			DrawDist_Zero[i].Maximum = -9500.0f;
			DrawDist_E101R[i].Maximum = -9500.0f;
		}
		HMODULE handle = GetModuleHandle(L"BOSSCHAOS0MODELS");
		LandTable **___LANDTABLEBOSSCHAOS0 = (LandTable **)GetProcAddress(handle, "___LANDTABLEBOSSCHAOS0");
		___LANDTABLEBOSSCHAOS0[0] = &landtable_000001D8;
		NJS_ACTION **___BOSSCHAOS0_ACTIONS = (NJS_ACTION **)GetProcAddress(handle, "___BOSSCHAOS0_ACTIONS");
		NJS_OBJECT **___BOSSCHAOS0_OBJECTS = (NJS_OBJECT **)GetProcAddress(handle, "___BOSSCHAOS0_OBJECTS");
		___BOSSCHAOS0_OBJECTS[0]->child->child->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[0]->child->child->child->child->sibling->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[0]->child->child->child->child->sibling->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[0]->child->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[0]->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[5]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[6]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[7]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[8]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[9]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[10]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[10]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[10]->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[15]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[16]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[17]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[18]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[18]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[20]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[21]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[22]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[22]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[22]->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[28]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[29]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[30]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[31]->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[31]->child->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_OBJECTS[33]->child->child->sibling->basicdxmodel->mats[0].diffuse.color = 0x7FB2B2B2;
		___BOSSCHAOS0_ACTIONS[18]->object = &object_0005D234;
		___BOSSCHAOS0_ACTIONS[18]->motion = &animation_0004CEA0;

	}

	__declspec(dllexport) void __cdecl OnFrame()
	{
		//Egg Hornet rotation
		/*if (rotdir == 1) rot = rot+12;
		if (rotdir == -1) rot = rot-12;
		if (rot > 12) rotdir = -1;
		if (rot < -12) rotdir = 1;
		((NJS_OBJECT *)0x01561A70)->ang[1] = NJM_DEG_ANG(rot); //Main model
		((NJS_OBJECT *)0x015658E0)->ang[1] = NJM_DEG_ANG(rot + 90); //Eggman
		((NJS_OBJECT *)0x01567BCC)->ang[1] = NJM_DEG_ANG(rot); //Jet1
		((NJS_OBJECT *)0x01567E64)->ang[1] = NJM_DEG_ANG(rot); //Jet1
		((NJS_OBJECT *)0x015685CC)->ang[1] = NJM_DEG_ANG(rot); //Jet1
		((NJS_OBJECT *)0x015680CC)->ang[1] = NJM_DEG_ANG(rot); //Jet1
		((NJS_OBJECT *)0x01568334)->ang[1] = NJM_DEG_ANG(rot); //Jet1
		((NJS_OBJECT *)0x015688C4)->ang[1] = NJM_DEG_ANG(rot); //Jet1
		((NJS_OBJECT *)0x01568B5C)->ang[1] = NJM_DEG_ANG(rot); //Jet1
		((NJS_OBJECT *)0x0156902C)->ang[1] = NJM_DEG_ANG(rot); //Jet1
		((NJS_OBJECT *)0x015692C4)->ang[1] = NJM_DEG_ANG(rot); //Jet1
		((NJS_SPRITE *)0x3C6C884)->ang = 0xC000; //Jet*/
		//water animation
		if (CurrentLevel == 23 || CurrentLevel == 25)
		{
			if (GameState != 16)
			{
			if (anim2 > 90) anim2 = 81;
			matlist_00007B80[0].attr_texId = anim2;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2) anim2++;
			}
		}
		if (CurrentLevel == 17 && GameState != 16)
		{
			if (anim < 14) anim = 27;
			matlist_000429E8[0].attr_texId = anim;
			if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) anim--;
		}
		if (CurrentLevel == 17 && LevelFrameCount < 70)
		{
			matlist_000429E8[0].diffuse.argb.a = 0xBF; //set water alpha back to normal if level is restarted
			object_000425F8.basicdxmodel->mats[0].diffuse.argb.a = 0x65;
			Chaos4Defeated = 0;
		}
		if (CurrentLevel == 20 && GameState != 16)
		{
			if (anim3 > 130) anim3 = 121;
			if (anim4 > 145) anim4 = 131;
			matlist_00057F04[0].attr_texId = anim3;
			matlist_00048AD0[0].attr_texId = anim4;
			matlist_00048FD0[0].attr_texId = anim4;
			matlist_0004E8F8[0].attr_texId = anim4;
			matlist_0004EBA0[0].attr_texId = anim4;
			if (FramerateSetting < 2 && FrameCounter % 4 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)
			{
				anim3++;
				anim4++;
			}
		}
		if (CurrentLevel == 17 && GameState == 15 && Chaos4Hitpoints > 4 && LevelFrameCount > 70 && matlist_000429E8[0].diffuse.argb.a>3)matlist_000429E8[0].diffuse.argb.a= matlist_000429E8[0].diffuse.argb.a-4; //make water invisible when Chaos4 gets in there
		if (CurrentLevel == 17 && GameState == 15 && Chaos4Hitpoints < 1) Chaos4Defeated = 1;
		if (CurrentLevel == 17 && Chaos4Defeated == 1 && object_000425F8.basicdxmodel->mats[0].diffuse.argb.a > 0) object_000425F8.basicdxmodel->mats[0].diffuse.argb.a--;
		if (CurrentLevel == 17 && Chaos4Defeated == 1 && matlist_000429E8[0].diffuse.argb.a < 0xBF) matlist_000429E8[0].diffuse.argb.a = matlist_000429E8[0].diffuse.argb.a + 4;
	}
}