#include "stdafx.h"
#include "SADXModLoader.h"
#include "windy1.h"
#include "windy2.h"
#include "windy3.h"

DataArray(FogData, FogData_Windy1, 0x00AFEA20, 3);
DataArray(FogData, FogData_Windy2, 0x00AFEA50, 3);
DataArray(FogData, FogData_Windy3, 0x00AFEA80, 3);
DataArray(DrawDistance, DrawDist_WindyValley1, 0x00AFE9D8, 3);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);

PointerInfo pointers[] = {
	ptrdecl(0x97DA48, &landtable_0000D7E0),
	ptrdecl(0x97DA4C, &landtable_0000DB40),
	ptrdecl(0x97DA50, &landtable_0000F274),
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) void cdecl Init()
{
	for (int i = 0; i < 3; i++)
	{
		DrawDist_WindyValley1[i].Maximum = -4000.0f;
		FogData_Windy1[i].Distance = 9000.0f;
		FogData_Windy1[i].Layer = 3700.0f;
		FogData_Windy1[i].Color = 0xFFFFFFFF;
		FogData_Windy2[i].Color = 0xFFFFFFFF;
		FogData_Windy2[i].Distance = 2500.0f;
		FogData_Windy2[i].Layer = 50.0f;
		FogData_Windy2[i].Toggle = 1;
		FogData_Windy3[i].Distance = 6000.0f;
		FogData_Windy3[i].Layer = 2000.0f;
		FogData_Windy3[i].Color = 0xFFFFFFFF;
	}
	ResizeTextureList((NJS_TEXLIST *)0xB98BF8, textures_windy1);
	ResizeTextureList((NJS_TEXLIST *)0xB81304, textures_windy2);
	ResizeTextureList((NJS_TEXLIST *)0xAFEC30, textures_windy3);
};

extern "C" __declspec(dllexport) void cdecl OnFrame()
{
auto entity = CharObj1Ptrs[0];
if (CurrentCharacter == 0 && CurrentLevel == 2 && CurrentAct == 0 && GameState !=16)
{
	if (entity != nullptr && entity->Position.x > 2950 && entity->Position.z > -1520 && entity->Position.z < -1300 && entity->Position.y <= -350)
	{
		if (CurrentFogDist > 450) CurrentFogDist = CurrentFogDist - 64.0f;
		if (CurrentFogLayer >= 64) CurrentFogLayer = CurrentFogLayer - 64.0f;
	}
	if (entity != nullptr && entity->Position.y > -350)
	{
		if (CurrentFogDist < 2200) CurrentFogDist = CurrentFogDist + 32.0f;
		if (CurrentFogLayer < 400) CurrentFogLayer = CurrentFogLayer + 16.0f;
	}
}

};
extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };