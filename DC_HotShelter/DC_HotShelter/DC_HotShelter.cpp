#include "stdafx.h"
#include <SADXModLoader.h>
#include "HotShelter_Objects.h"
#include "HotShelter1.h"
#include "HotShelter2.h"
#include "HotShelter3.h"

DataPointer(int, FramerateSetting, 0x0389D7DC);
static float suimen_increment = 0.0f;
static int suimen_direction = 1;
static int anim = 78;
static int WaterThing_VShift = 0;
DataPointer(float, HotShelterWaterThing, 0x3C72E54);
DataArray(NJS_TEX, uv_01410790, 0x01810790, 20); //water thing UVs 1
DataArray(NJS_TEX, uv_014107E0, 0x018107E0, 56); //water thing UVs 2

PointerInfo pointers[] = {
	ptrdecl(0x97DB88, &landtable_0001970C),
	ptrdecl(0x97DB8C, &landtable_0005277C),
	ptrdecl(0x97DB90, &landtable_000B0DA4),
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl Init()
	{
		//Waterfall UV fixes
		WriteData((char*)0x005AD8EB, 0x00, 1);
		WriteData((char*)0x005AD89B, 0x00, 1);
		WriteData((char*)0x005AD9CE, 0x01, 1);
		WriteData((char*)0x005ADA7B, 0x01, 1);
		WriteData((void*)0x005AD896, 0x90, 3);
		WriteData((void*)0x005AD8E6, 0x90, 3);
		*(NJS_OBJECT*)0x18608A4 = object_0014D13C; //Broken wall (full)
		*(NJS_OBJECT*)0x1862834 = object_0014E514; //Broken wall (broken)
		*(NJS_OBJECT*)0x185F280 = object_0014C23C; //Broken wall (pieces)
		*(NJS_OBJECT*)0x1812D34 = object_00109F58; //Egghead door 1
		*(NJS_OBJECT*)0x184C22C = object_0013CDD4; //Egghead door 2 part 1
		*(NJS_OBJECT*)0x184BA64 = object_0013C6AC; //Egghead door 2 part 2
		*(NJS_OBJECT*)0x018136AC = object_0010A8AC; //Bathroom door
		*(NJS_OBJECT*)0x0185A974 = object_00148A44; //O Computer
		(*(NJS_OBJECT*)0x1810690).basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_LIGHT;
		(*(NJS_OBJECT*)0x181406C).basicdxmodel->mats[0].diffuse.color = 0xFFB2B2B2; //fix weird material colors on OUkijima
		*(NJS_OBJECT*)0x1851CA4 = object_00140EBC; //Elevator
		ResizeTextureList((NJS_TEXLIST*)0x180DFF4, textures_shelter1);
		ResizeTextureList((NJS_TEXLIST*)0x17F56F4, textures_shelter2);
		ResizeTextureList((NJS_TEXLIST*)0x17F4F74, textures_shelter3);
		memcpy((void*)0x0183C594, &attach_0012AB9C, sizeof(attach_0012AB9C));  // Bridge
		memcpy((void*)0x0187201C, &object_0015CC48, sizeof(object_0015CC48));  // Light
		DataArray(FogData, FogData_HotShelter1, 0x017C3450, 3);
		DataArray(FogData, FogData_HotShelter2, 0x017C3480, 3);
		DataArray(FogData, FogData_HotShelter3, 0x017C34B0, 3);
		DataArray(DrawDistance, DrawDist_HotShelter1, 0x017C3408, 3);
		DataArray(DrawDistance, DrawDist_HotShelter2, 0x017C3420, 3);
		for (int i = 0; i < 3; i++)
		{
			DrawDist_HotShelter1[i].Maximum = -3000.0;
			DrawDist_HotShelter2[i].Maximum = -3000.0;
			FogData_HotShelter1[i].Color = 0xFF000000;
			FogData_HotShelter1[i].Layer = 600.0f;
			FogData_HotShelter1[i].Distance = 1500.0f;
			FogData_HotShelter2[i].Color = 0xFF000000;
			FogData_HotShelter2[i].Toggle = 1;
			FogData_HotShelter2[i].Layer = 800.0f;
			FogData_HotShelter2[i].Distance = 2000.0f;
			FogData_HotShelter3[i].Color = 0xFF000000;
			FogData_HotShelter3[i].Toggle = 1;
			FogData_HotShelter3[i].Layer = 500.0f;
			FogData_HotShelter3[i].Distance = 1800.0f;
		}
	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		{
			if (CurrentLevel == 12 && CurrentAct == 0 && GameState != 16)
			{
				if (HotShelterWaterThing < 65.0f && HotShelterWaterThing > 0.0f)
				{
					WaterThing_VShift = (WaterThing_VShift - 16 * FramerateSetting) % 255;
					for (int i = 0; i < 56; i++)
					{
						uv_014107E0[i].v = uv_014107E0_0[i].v + WaterThing_VShift;
					}
					for (int i = 0; i < 20; i++)
					{
						uv_01410790[i].v = uv_01410790_0[i].v + WaterThing_VShift;
					}
				}
				//Move water up and down
				object_0140FCC0.pos[1] = -5 + suimen_increment;
				object_0140FA2C.pos[1]= 72 + suimen_increment;
				object_0140F7F0.pos[1]= 69 + suimen_increment;
				object_0140FBB4.pos[1]= 75 + suimen_increment;
				if (suimen_direction == 1)	suimen_increment = suimen_increment + 0.005f;
				if (suimen_increment >= 1.5f) suimen_direction = -1;
				if (suimen_direction == -1)	suimen_increment = suimen_increment - 0.005f;
				if (suimen_increment <= -1.5f) suimen_direction = 1;
				if (anim > 91) anim = 78;
				matlist_0140FBE8[0].attr_texId = anim;
				matlist_0140F824[0].attr_texId = anim;
				matlist_0140F608[0].attr_texId = anim;
				matlist_0140FA60[0].attr_texId = anim;
				if (FramerateSetting < 2 && FrameCounter % 3 == 0 || FramerateSetting == 2 && FrameCounter % 2 == 0 || FramerateSetting > 2)anim++;
			}
		}
	}
}