#include <SADXModLoader.h>
#include "CommonObjects.h"
#include "Objects_Shooting.h"

static float Options_ArrowScale = 0.0f;
static float Options_ArrowScaleAmount = 0.1f;

DataArray(PVMEntry, GUITexturePVMs2, 0x007EEDE0, 30);
DataArray(PVMEntry, GUITexturePVMs3, 0x007EEED0, 30);
DataArray(PVMEntry, GUITexturePVMs4, 0x007EEFC0, 30);
DataArray(PVMEntry, GUITexturePVMs5, 0x007EF0B0, 30);

void FileIcon_Hook(int that_cant_be_right, float Texture_X, float Texture_Y, float Texture_Z)
{
	float Arrow1_X;
	float Arrow1_Y;
	float Arrow2_X;
	float Arrow2_Y;
	float Arrow1Center_X = 251.0f;
	float Arrow1Center_Y = 268.0f;
	float Arrow2Center_X = 218.0f;
	float Arrow2Center_Y = 322.0f;
	float Arrow1Scale = 0.0f + Options_ArrowScale;
	float Arrow2Scale = 0.5f - Options_ArrowScale;
	Arrow1_X = (Arrow1Center_X - 64 * Arrow1Scale) - 320.0f + HorizontalStretch * 320.0f;
	Arrow1_Y = (Arrow1Center_Y - 64 * Arrow1Scale) - 240.0f + VerticalStretch * 240.0f;
	Arrow2_X = (Arrow2Center_X - 64 * Arrow2Scale) - 320.0f + HorizontalStretch * 320.0f;
	Arrow2_Y = (Arrow2Center_Y - 64 * Arrow2Scale) - 240.0f + VerticalStretch * 240.0f;
	njTextureShadingMode(1);
	DisplayScreenTexture(44, Texture_X, Texture_Y, Texture_Z);
	DrawBG(45, Arrow1_X, Arrow1_Y, Texture_Z, Arrow1Scale, Arrow1Scale);
	DrawBG(46, Arrow2_X, Arrow2_Y, Texture_Z, Arrow2Scale, Arrow2Scale);
	njTextureShadingMode(2);
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		GUITexturePVMs2[21].Name = "AVA_OPTION_H";
		GUITexturePVMs3[21].Name = "AVA_OPTION_H";
		GUITexturePVMs4[21].Name = "AVA_OPTION_H";
		GUITexturePVMs5[21].Name = "AVA_OPTION_H";
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //Question mark from Character Select
		((NJS_OBJECT*)0x10D7774)->basicdxmodel->mats[0].attr_texId = 10; //Question mark from Character Select
		ResizeTextureList(&OBJ_REGULAR_TEXLIST, 100); //Added DC ripple texture
		HMODULE DC_Branding = GetModuleHandle(L"DC_Branding");
		HMODULE DC_SubGames = GetModuleHandle(L"DC_SubGames");
		if (DC_Branding == nullptr)
		{
			WriteData<1>((char*)0x007DDB2C, 0x44); //Load CON_REGULAR_D with DX texture
			WriteCall((void*)0x005092A1, FileIcon_Hook); //File icon
		}
		*(NJS_MODEL_SADX*)0x00989384 = attach_0019D298_2; //Switch
		*(NJS_MODEL_SADX*)0x008BBD84 = attach_0019D298; //Switch (pressed)
		*(NJS_MODEL_SADX*)0x008B8438 = attach_00199A4C; //Dash panel
		*(NJS_MODEL_SADX*)0x008C5D5C = attach_001A6F74; //Star panel
		*(NJS_MODEL_SADX*)0x008C9060 = attach_001AA1B8; //Checkpoint
		*(NJS_MODEL_SADX*)0x008B6010 = attach_00197698; //Normal spring
		*(NJS_MODEL_SADX*)0x008B5498 = attach_00196B5C; //Spring B
		*(NJS_MODEL_SADX*)0x008C6624 = attach_001A7820; //Spring H
		*(NJS_MODEL_SADX*)0x008BFEC8 = attach_001A127C; //Rocket platform
		*(NJS_MODEL_SADX*)0x008BE168 = attach_0019F5CC; //Balloon
		*(NJS_MODEL_SADX*)0x008BFEC8 = attach_001A127C; //Rocket platform
		if (DC_SubGames == 0)
		{
		*(NJS_OBJECT *)0x02982F44 = object_0003FA40; //Egg Carrier model
		*(NJS_OBJECT *)0x298A894 = object_00047110; //Hodai
		*(NJS_OBJECT *)0x2941B2C = object_0001342C; //Kirai
		((NJS_ACTION*)0x2996C74)->object = &object_0004AEE0; //Beam in Act 2
		*(NJS_OBJECT *)0x0298E7D0 = object_0004AEE0; //Beam in Act 2
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (GameMode == GameModes_Menu)
		{
			if (Options_ArrowScale > 0.5f) Options_ArrowScaleAmount = -0.02f;
			if (Options_ArrowScale < 0.0f) Options_ArrowScaleAmount = 0.02f;
			Options_ArrowScale = Options_ArrowScale + Options_ArrowScaleAmount;
		}
	}
}




