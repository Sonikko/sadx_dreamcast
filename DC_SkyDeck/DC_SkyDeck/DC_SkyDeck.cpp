#include "stdafx.h"
#include <SADXModLoader.h>
#include <lanternapi.h>
#include "SkyDeck1.h"
#include "SkyDeck2.h"
#include "SkyDeck3.h"
#include "SkyDeck_objects.h"
#include "math.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DAC8, &landtable_0001F018),
	ptrdecl(0x97DACC, &landtable_00021094),
	ptrdecl(0x97DAD0, &landtable_00023EB4)
};

DataPointer(float, SkyDeckAltitude, 0x03C80610); //0 to 700
DataPointer(float, CurrentSkyBoxScaleX, 0x03ABDC94);
DataPointer(float, CurrentSkyBoxScaleY, 0x03ABDC98);
DataPointer(float, CurrentSkyBoxScaleZ, 0x03ABDC9C);
DataPointer(NJS_VECTOR, SkyDeck_SkyPosition, 0x03C7F038);
DataPointer(NJS_COLOR, CurrentFogColor, 0x03ABDC68);

/* Just in case I ever decide to rewrite this thing
void SkyDeckSky_original(ObjectMaster *_this)
{
	unsigned __int64 v1; // rax@6
	NJS_OBJECT *v2; // esi@7
	long double v3; // st7@9
	long double v4; // st7@13
	NJS_OBJECT *v5; // eax@13
	long double v6; // st7@15
	long double v7; // st7@19
	NJS_OBJECT *v8; // eax@19
	NJS_ARGB a1; // [sp+4h] [bp-10h]@13
	DataPointer(DrawDistance, SkyboxDrawDistance, 0x03ABDCA0);
	DataPointer(DrawDistance, LevelDrawDistance, 0x03ABDC70);
	DataPointer(Angle, SkyDeck_SkyRotationZ, 0x03C7F028);
	DataPointer(Angle, SkyDeck_SkyRotationX, 0x03C7F05C);
	DataPointer(int, dword_3C7F030, 0x3C7F030);
	DataPointer(float, flt_3C8046C, 0x3C8046C);
	DataPointer(int, MissedFrames, 0x03B1117C);
	DataPointer(NJS_OBJECT, stru_214E2A0, 0x214E2A0);
	DataPointer(NJS_OBJECT, stru_214C9E4, 0x214C9E4);
	DataPointer(NJS_OBJECT, stru_214E3AC, 0x214E3AC);
	DataPointer(NJS_OBJECT, stru_214BF20, 0x214BF20);
	DataArray(NJS_TEX, SkyDeck_SkyUVsA, 0x03C80478, 32);
	DataArray(NJS_TEX, SkyDeck_SkyUVsB, 0x03C804F8, 32);
	DataPointer(NJS_TEXLIST, OBJ_SKYDECK_TEXLIST, 0x0214BE40);
	DataPointer(NJS_VECTOR, Skybox_Scale, 0x03ABDC94);
	FunctionPointer(void, sub_408530, (NJS_OBJECT *a1), 0x408530);

	njControl3D_Backup();
	njControl3D_Add(NJD_CONTROL_3D_OFFSET_MATERIAL);
	DisableFog();
	Direct3D_SetNearFarPlanes(SkyboxDrawDistance.Minimum, SkyboxDrawDistance.Maximum);
	njPushMatrix(0);
	njTranslate(0, SkyDeck_SkyPosition.x, SkyDeck_SkyPosition.y, SkyDeck_SkyPosition.z);
	if (SkyDeck_SkyRotationZ)
	{
		njRotateZ(0, (unsigned __int16)SkyDeck_SkyRotationZ);
	}
	if (SkyDeck_SkyRotationX)
	{
		njRotateX(0, (unsigned __int16)SkyDeck_SkyRotationX);
	}
	njScale(0, 1.7, 1.0, 1.7);
	if (!dword_3C7F030)
	{
		v1 = (unsigned __int64)(flt_3C8046C * 180.0);
		SetGlobalPoint2Col_Colors(
			v1 | (((unsigned int)v1 | (((unsigned __int8)v1 | 0xFFFFFF00) << 8)) << 8),
			v1 | (((unsigned int)v1 | (((unsigned __int8)v1 | 0xFFFFFF00) << 8)) << 8),
			v1 | (((unsigned int)v1 | (((unsigned __int8)v1 | 0xFFFFFF00) << 8)) << 8));
		if (!MissedFrames)
		{
			v2 = &stru_214E2A0;
			if (SkyDeck_SkyPosition.y - 1350.0f - 50.0f <= Camera_Data1->Position.y)
			{
				v2 = &stru_214C9E4;
			}
			njSetTexture(&OBJ_SKYDECK_TEXLIST);
			njScaleEx(&Skybox_Scale);
			sub_408530(v2);
			njScale(0, 1.0, 1.0, 1.0);
			v3 = 1.0 - fabs(Camera_Data1->Position.y - (SkyDeck_SkyPosition.y - 1350.0)) * 0.025;
			if (v3 >= 0.050000001)
			{
				if (v3 > 0.89999998)
				{
					v3 = 0.89999998;
				}
			}
			else
			{
				v3 = 0.050000001;
			}
			v4 = v3 * -1.0;
			a1.b = v4;
			a1.g = v4;
			a1.r = v4;
			a1.a = v4;
			SetMaterialAndSpriteColor(&a1);
			v5 = &stru_214E3AC;
			if (SkyDeck_SkyPosition.y - 1350.0 - 100.0 <= Camera_Data1->Position.y)
			{
				v5 = &stru_214BF20;
			}
			SkyDeck_QueueDraw(v5, SkyDeck_SkyUVsB, 32);
			v6 = 1.0 - fabs(Camera_Data1->Position.y - (SkyDeck_SkyPosition.y - 1350.0 - 100.0)) * 0.025;
			if (v6 >= 0.0099999998)
			{
				if (v6 > 0.89999998)
				{
					v6 = 0.89999998;
				}
			}
			else
			{
				v6 = 0.0099999998;
			}
			v7 = v6 * -1.0;
			a1.b = v7;
			a1.g = v7;
			a1.r = v7;
			a1.a = v7;
			SetMaterialAndSpriteColor(&a1);
			njTranslate(0, 0.0, -100.0, 0.0);
			v8 = &stru_214E3AC;
			if (SkyDeck_SkyPosition.y - 1350.0 - 100.0 <= Camera_Data1->Position.y)
			{
				v8 = &stru_214BF20;
			}
			SkyDeck_QueueDraw(v8, SkyDeck_SkyUVsA, 32);
			if (SkyDeck_SkyPosition.y - 1350.0 - 100.0 > Camera_Data1->Position.y)
			{
				a1.a = a1.a - 0.25;
				SetMaterialAndSpriteColor(&a1);
				njTranslate(0, 0.0, -600.0, 0.0);
				njScaleEx(&Skybox_Scale);
				VectorMaxAbs(&Skybox_Scale);
				SkyDeck_QueueDraw(&stru_214E3AC, SkyDeck_SkyUVsA, 32);
				njScale(0, 1.0, 1.0, 1.0);
				njTranslate(0, 0.0, -100.0, 0.0);
				SkyDeck_QueueDraw(&stru_214E3AC, SkyDeck_SkyUVsB, 32);
			}
			ClampGlobalColorThing_Thing();
		}
	}
	njPopMatrix(1u);
	ToggleStageFog();
	njControl3D_Restore();
	Direct3D_SetNearFarPlanes(LevelDrawDistance.Minimum, LevelDrawDistance.Maximum);
}
*/
extern "C" __declspec(dllexport) void cdecl Init()
{
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	if (Lantern != 0)
	{
		allow_landtable_specular(true);
		allow_object_vcolor(false);
	}
	//Lol wtf is this? Disable robot underwear?
	WriteData((float*)0x005F4D20, 1.0f);
	WriteData((float*)0x005F4D28, 1.0f);
	WriteData((float*)0x005F4D30, 1.0f);
	WriteData((float*)0x005F4D38, 1.0f);
	((LandTable*)0x022369A0)->COLCount = landtable_00021094.COLCount;
	((LandTable*)0x022369A0)->Col = landtable_00021094.Col;
	((NJS_OBJECT *)0x214BF20)->basicdxmodel->meshsets->vertuv = uv_01D4E2F4_2;
	((NJS_OBJECT *)0x214E3AC)->basicdxmodel->meshsets->vertuv = uv_01D4E2F4_3;
	*(NJS_MODEL_SADX *)0x961300 = attach_001E10F8; //Aircraft pad
	*(NJS_MODEL_SADX *)0x961EF8 = attach_001E1CBC; //Aircraft pad something
	*(NJS_OBJECT *)0x21FDE74 = object_00197D2C; //Decal 1
	*(NJS_OBJECT *)0x21FE9F8 = object_00198858; //Decal 2
	*(NJS_OBJECT *)0x21FEB04 = object_0019895C; //Decal 3
	*(NJS_OBJECT *)0x21FEC10 = object_00198A60; //Decal 4
	*(NJS_OBJECT *)0x21FED1C = object_00198B64; //Decal 5 not sure
	*(NJS_OBJECT *)0x21FEE28 = object_00198C68; //Decal 6 not sure
	*(NJS_OBJECT *)0x21FEF34 = object_00198D6C; //Warning sign
	*(NJS_OBJECT *)0x214FB74 = object_000FF4A4; //Cannon in Act 1
	*(NJS_OBJECT *)0x2161F68 = object_0010EB4C; //Cannon in Act 2
	*(NJS_OBJECT *)0x21802BC = object_00126000; //Rail platform 1
	*(NJS_OBJECT *)0x218346C = object_00128644; //Rail platform 2
	*(NJS_OBJECT *)0x2186254 = object_0012A9C8; //Rail platform 3
	*(NJS_OBJECT *)0x216F67C = object_00118920; //Rail platform 4
	*(NJS_OBJECT *)0x2162D5C = object_0010FAFC; //Rail platform 5
	*(NJS_OBJECT *)0x2171694 = object_0011A3D8; //Rail platform 6
	*(NJS_OBJECT *)0x2171834 = object_0011A564; //Some ladder
	*(NJS_OBJECT *)0x216B984 = object_00115F88; //OConnect_0
	*(NJS_OBJECT *)0x21660AC = object_001118F8; //Curved platform
	*(NJS_OBJECT *)0x216E770 = object_00117D5C; //WTF is this thing?
	*(NJS_OBJECT *)0x2171D0C = object_0011AA1C; //Platform with ladder
	*(NJS_OBJECT *)0x21936AC = object_00135E10; //Small round thing
	*(NJS_OBJECT *)0x216889C = object_001138B4; //Stairs 1
	*(NJS_OBJECT *)0x216A4AC = object_00114F2C; //Stairs 2
	*(NJS_OBJECT *)0x21C4FD8 = object_00162F84; //Crane
	*(NJS_OBJECT *)0x21642D4 = object_00110634; //Talap 0
	*(NJS_OBJECT *)0x21AD794 = object_0014D990; //Trolley thing or whatever that is
	*(NJS_OBJECT *)0x21F7F8C = object_00192044; //ORoboA
	*(NJS_OBJECT *)0x21B29B4 = object_00152A40; //Another cleaning robot
	*(NJS_OBJECT *)0x21FA6F4 = object_001946BC; //ORoboB
	*(NJS_ACTION*)0x02223EF4 = action_Robo2_action; //ORoboB action
	*(NJS_OBJECT *)0x21B995C = object_001592E0; //Platform2
	*(NJS_OBJECT *)0x21CAE18 = object_00168CFC; //Another big object
	*(NJS_OBJECT *)0x2194F44 = object_001370C4; //OAnaA
	*(NJS_OBJECT *)0x218C52C = object_00130724; //ORaneA
	*(NJS_OBJECT *)0x218E0BC = object_00131D70; //ORaneC
	*(NJS_OBJECT *)0x218F7CC = object_00132DE4; //ORaneD
	*(NJS_OBJECT *)0x2190D94 = object_00133CD0; //ORaneE
	*(NJS_OBJECT *)0x2192798 = object_00134F30; //ORaneF
	*(NJS_OBJECT *)0x21BA014 = object_0015996C; //Hangar 1
	*(NJS_OBJECT *)0x21BA484 = object_00159DBC; //Hangar 2
	*(NJS_OBJECT *)0x21BCA10 = object_0015C2D0; //Radar-like thing
	*(NJS_OBJECT *)0x21BDD24 = object_0015D5B8; //Huge thing 2
	*(NJS_OBJECT *)0x21BF034 = object_0015E8A0; //Huge thing 3
	*(NJS_OBJECT *)0x214E4B8 = object_000FE140; //Target
	*(NJS_OBJECT *)0x21A34C8 = object_00144178; //Top red orb
	*(NJS_OBJECT *)0x21A4C38 = object_0014589C; //Light-like thing
	*(NJS_OBJECT *)0x21D1CC0 = object_0016FA10; //Huge Egg Carrier decoration
	*(NJS_OBJECT *)0x21D41A0 = object_00171E3C; //Another decoration
	*(NJS_OBJECT *)0x21F4EC0 = object_0018F244; //Elevator
	*(NJS_OBJECT *)0x21FBF84 = object_00195B24; //Escalator
	*(NJS_OBJECT *)0x217CFE4 = object_001238FC; //Untei
	*(NJS_OBJECT *)0x960DFC = object_001E0C04; //Aircraft lift piece
	((NJS_OBJECT *)0x21B0254)->model = &attach_00150394; //Control panel
	WriteData((NJS_OBJECT**)0x005ED3AC, (NJS_OBJECT*)&object_01D4BF20); //sky normal
	WriteData((NJS_OBJECT**)0x005ED3A5, (NJS_OBJECT*)&object_01D4E3AC_2); //sky dark top 2 
	WriteData((NJS_OBJECT**)0x005ED46D, (NJS_OBJECT*)&object_01D4E3AC); //sky dark top 1
	WriteData((NJS_OBJECT**)0x005ED4FC, (NJS_OBJECT*)&object_01D4E3AC); //sky dark bottom 1 
	ResizeTextureList((NJS_TEXLIST*)0x20E0BB0, textures_skydeck1);
	ResizeTextureList((NJS_TEXLIST*)0x20AA63C, textures_skydeck2);
	ResizeTextureList((NJS_TEXLIST*)0x203ACE0, textures_skydeck3);
	DataArray(FogData, SkyDeck1Fog, 0x0203A094, 3);
	DataArray(FogData, SkyDeck2Fog, 0x0203A0C4, 3);
	DataArray(FogData, SkyDeck3Fog, 0x0203A0F4, 3);
	DataArray(SkyboxScale, SkyDeck3SkyboxScale, 0x02039FE0, 3);
	DataArray(DrawDistance, SkyDeck1DrawDist, 0x0203A04C, 3);
	DataArray(DrawDistance, SkyDeck2DrawDist, 0x0203A064, 3);
	DataArray(DrawDistance, SkyDeck3DrawDist, 0x0203A07C, 3);
	for (int i = 0; i < 3; i++)
	{
		SkyDeck1Fog[i].Layer = 4000.0f;
		SkyDeck1Fog[i].Distance = 12000.0f;
		SkyDeck2Fog[i].Layer = 4000.0f;
		SkyDeck2Fog[i].Distance = 12000.0f;
		SkyDeck3Fog[i].Layer = 4000.0f;
		SkyDeck3Fog[i].Distance = 12000.0f;
		SkyDeck1DrawDist[i].Maximum = -20000.0f;
		SkyDeck2DrawDist[i].Maximum = -20000.0f;
		SkyDeck3DrawDist[i].Maximum = -16000.0f;
	}
}

extern "C" __declspec(dllexport) void cdecl OnFrame()
{
	if (CurrentLevel == 6)
	{
		{
			if (GameState == 3 || GameState == 4 || GameState == 7 || GameState == 21)
		for (int i = 0; i < landtable_00021094.COLCount; i++)
		{
			if (landtable_00021094.Col[i].anonymous_6 & 4)
				landtable_00021094.Col[i].Flags |= ColFlags_Solid;
		}
		}
	}
	if (CurrentLevel == 6 && CurrentAct == 2)
	{
		CurrentSkyBoxScaleX = 1.0f;
		CurrentSkyBoxScaleY = 1.0f;
		CurrentSkyBoxScaleZ = 1.0f;
	}
	if (CurrentLevel == 6 && GameState != 16)
	{
		if (SkyDeckAltitude >= 300.0f)
		{
			CurrentFogColor.argb.r = 80;
			CurrentFogColor.argb.g = 80;
			CurrentFogColor.argb.b = 112;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r = 0;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.g = 0;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.b = 0;
		}
		if (SkyDeckAltitude < 300.0f)
		{
			CurrentFogColor.argb.r = 104;
			CurrentFogColor.argb.g = 104;
			CurrentFogColor.argb.b = 128;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.r = 178;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.g = 178;
			((NJS_OBJECT *)0x0214D300)->basicdxmodel->mats[0].diffuse.argb.b = 178;
		}
		for (int q = 0; q < LengthOfArray(uv_01D4BE68); q++)
		{
			uv_01D4BE68[q].u = uv_01D4BE68[q].u - 2;
			uv_01D4E2F4[q].u = uv_01D4E2F4[q].u - 2;
			uv_01D4E2F4_2[q].u = uv_01D4E2F4_2[q].u - 4;
			uv_01D4E2F4_3[q].u = uv_01D4E2F4_3[q].u - 4;
		}
		if (uv_01D4E2F4_2[0].u <= 0) uv_01D4E2F4_2[0].u = 2040;
		if (uv_01D4E2F4_2[1].u <= 0) uv_01D4E2F4_2[1].u = 2040;
		if (uv_01D4E2F4_2[2].u <= -2040) uv_01D4E2F4_2[2].u = 0;
		if (uv_01D4E2F4_2[3].u <= -2040) uv_01D4E2F4_2[3].u = 0;
		if (uv_01D4E2F4_3[0].u <= 0) uv_01D4E2F4_3[0].u = 2040;
		if (uv_01D4E2F4_3[1].u <= 0) uv_01D4E2F4_3[1].u = 2040;
		if (uv_01D4E2F4_3[2].u <= -2040) uv_01D4E2F4_3[2].u = 0;
		if (uv_01D4E2F4_3[3].u <= -2040) uv_01D4E2F4_3[3].u = 0;
		if (uv_01D4BE68[0].u <= 0) uv_01D4BE68[0].u = 2040;
		if (uv_01D4BE68[1].u <= 0) uv_01D4BE68[1].u = 2040;
		if (uv_01D4BE68[2].u <= -2040) uv_01D4BE68[2].u = 0;
		if (uv_01D4BE68[3].u <= -2040) uv_01D4BE68[3].u = 0;
		if (uv_01D4E2F4[0].u <= 0) uv_01D4E2F4[0].u = 2040;
		if (uv_01D4E2F4[1].u <= 0) uv_01D4E2F4[1].u = 2040;
		if (uv_01D4E2F4[2].u <= -2040) uv_01D4E2F4[2].u = 0;
		if (uv_01D4E2F4[3].u <= -2040) uv_01D4E2F4[3].u = 0;
	}
}

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };


