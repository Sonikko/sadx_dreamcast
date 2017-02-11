#include "stdafx.h"
#include "SADXModLoader.h"
#include "Twinkle1.h"
#include "Twinkle2.h"
#include "Twinkle3.h"
#include "TwinklePark_objects.h"

DataPointer(int, FramerateSetting, 0x0389D7DC);

static int anim = 74;
static int animlight = 95;
static int animtimer = 0;

PointerInfo pointers[] = {
	ptrdecl(0x97DA68, &landtable_0001788C),
	ptrdecl(0x97DA6C, &landtable_00019344),
	ptrdecl(0x97DA70, &landtable_00019F5C)
};

NJS_MATERIAL matlist_034C3AD0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

NJS_TEXNAME textures_tpobjects[97];

extern "C"
{
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		ResizeTextureList((NJS_TEXLIST*)0x26B9960, textures_twinkle1);
		ResizeTextureList((NJS_TEXLIST*)0x2721A8C, textures_twinkle2);
		ResizeTextureList((NJS_TEXLIST*)0x26FEA54, textures_twinkle3);
		ResizeTextureList((NJS_TEXLIST*)0x38AEB70, textures_tpobjects); //OBJ_TWINKLE
		*(NJS_OBJECT*)0x0279D364 = object_000A0E58; // barrel
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[8].attrflags |= NJD_FLAG_IGNORE_LIGHT;
		*(NJS_OBJECT*)0x027AAFF4 = object_000AA710; // pirate ship
		//*(NJS_OBJECT*)0x027AC44C = object_000AB6DC; // pirate ship
		//*(NJS_OBJECT*)0x027AB6E0 = object_000AACC8; // pirate ship
		//*(NJS_OBJECT*)0x027A6EA0 = object_000A9318; // pirate ship
		*(NJS_OBJECT*)0x027BF9DC = object_000B9E98; // spinning roof
		*(NJS_OBJECT*)0x027BCD7C = object_000B812C; // lilypad
		((NJS_OBJECT *)0x038C214C)->basicdxmodel->mats[6].attr_texId = 96; //Neon panel
		((NJS_OBJECT *)0x027C05FC)->child->basicdxmodel->mats[0].attr_texId = 89; //Monitor thing in Act 1
		((NJS_OBJECT *)0x027B0708)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Merry-go-round floor
		((NJS_OBJECT *)0x027BEA34)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Horsies
		((NJS_OBJECT *)0x027BEA34)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Horsies
		((NJS_OBJECT *)0x027BEA34)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Horsies
		((NJS_OBJECT *)0x027BEA34)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Horsies
		((NJS_OBJECT *)0x027BEA34)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Horsies
		((NJS_OBJECT *)0x027AD86C)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling door
		((NJS_OBJECT *)0x027AD86C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling door
		((NJS_OBJECT *)0x027AD86C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling door
		((NJS_OBJECT *)0x027AD86C)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling door
		((NJS_OBJECT *)0x027AD86C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling door
		((NJS_OBJECT *)0x027B3DB8)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling pin
		((NJS_OBJECT *)0x027B3DB8)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling pin
		((NJS_OBJECT *)0x027B3DB8)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Bowling pin
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Pirate ship
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Pirate ship
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[4].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Pirate ship
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[5].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Pirate ship
		((NJS_OBJECT *)0x027AC44C)->basicdxmodel->mats[8].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Pirate ship
		((NJS_OBJECT *)0x027AB6E0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Pirate ship
		((NJS_OBJECT *)0x027AB6E0)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Pirate ship
		((NJS_OBJECT *)0x027A6EA0)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Pirate ship
		((NJS_OBJECT *)0x027A6EA0)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Pirate ship
		((NJS_OBJECT *)0x038C234C)->basicdxmodel->mats[0].attr_texId = 96; //Light
		((NJS_OBJECT *)0x038BFC74)->basicdxmodel->mats[0].attr_texId = 96;  //Light 2
		((NJS_OBJECT *)0x0279D364)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Barrel
		((NJS_OBJECT *)0x0279D364)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Barrel
		((NJS_OBJECT *)0x0279D364)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Barrel
		((NJS_OBJECT *)0x0279D364)->basicdxmodel->mats[3].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Barrel
		((NJS_OBJECT *)0x027A4AD0)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag1 1
		((NJS_OBJECT *)0x027A466C)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag1 2
		((NJS_OBJECT *)0x027A466C)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag1 3
		((NJS_OBJECT *)0x027A5024)->basicdxmodel->mats[0].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag2 1
		((NJS_OBJECT *)0x027A5024)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag2 2
		((NJS_OBJECT *)0x027A5024)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag2 3
		((NJS_OBJECT *)0x027A3358)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Fence2
		((NJS_OBJECT *)0x027A5464)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag with lamp 1
		((NJS_OBJECT *)0x027A5464)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag with lamp 2
		((NJS_OBJECT *)0x027A58A4)->basicdxmodel->mats[1].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag with lamp 3
		((NJS_OBJECT *)0x027A58A4)->basicdxmodel->mats[2].attrflags |= NJD_FLAG_IGNORE_LIGHT; //Flag with lamp 4
		/**(NJS_OBJECT*)0x027B6170 = object_000B4F1C; // yellow flower pot
		*(NJS_OBJECT*)0x027B80C4 = object_000B4F1C; // yellow flower pot 2
		*(NJS_OBJECT*)0x027B6A58 = object_000B5EE8; // pink flower pot
		*(NJS_OBJECT*)0x027B972C = object_000B5EE8; // pink flower pot 2
		*(NJS_OBJECT*)0x027BAC54 = object_000B6CF8; // yellow flower bed
		*(NJS_OBJECT*)0x027BC1C4 = object_000B6CF8_2; // pink flower bed*/
		DataArray(FogData, TwinklePark1Fog, 0x026B339C, 3);
		DataArray(FogData, TwinklePark2Fog, 0x026B33CC, 3);
		DataArray(FogData, TwinklePark3Fog, 0x026B33FC, 3);
		DataArray(FogData, TwinklePark4Fog, 0x026B342C, 3);
		for (int i = 0; i < 3; i++)
		{
			TwinklePark1Fog[i].Layer = 1500.0f;
			TwinklePark2Fog[i].Layer = -1400.0f;
			TwinklePark2Fog[i].Distance = -3200.0f;
			TwinklePark2Fog[i].Color = 0xFF100428;
			TwinklePark3Fog[i].Layer = -800.0f;
			TwinklePark3Fog[i].Distance = -2200.0f;
			TwinklePark3Fog[i].Color = 0xFF100428;
			TwinklePark4Fog[i].Color = 0xFF000000;
			TwinklePark4Fog[i].Layer = 1.0f;
			TwinklePark4Fog[i].Distance = 1200.0f;
			TwinklePark4Fog[i].Toggle = 1;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		{
			if (CurrentLevel == 3 && CurrentAct == 1 && GameState != 16)
			{
				if (anim > 87) anim = 74;
				matlist_00065D8C[0].attr_texId = anim;
				matlist_0001A3A8[0].attr_texId = anim;
				matlist_000657A0[0].attr_texId = anim;
				matlist_00065A3C[0].attr_texId = anim;
				if (FramerateSetting < 2 && FrameCounter % 2 == 0 || FramerateSetting >= 2) anim++;
				object_000AA710.basicdxmodel->mats[14].attr_texId = animlight;
				object_000AA710.basicdxmodel->mats[3].attr_texId = animlight;
				object_000AA710.basicdxmodel->mats[8].attr_texId = animlight;
				object_000AA710.basicdxmodel->mats[12].attr_texId = animlight;
				if (animtimer >= 30 && animlight == 95)
				{
					animlight = 28;
					animtimer = 0;
				}
				if (animtimer >= 30 && animlight == 28)
				{
					animlight = 95;
					animtimer = 0;
				}
				animtimer++;
			}
		}
	};
}