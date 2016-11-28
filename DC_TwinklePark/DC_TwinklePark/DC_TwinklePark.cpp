#include "stdafx.h"
#include "SADXModLoader.h"
#include "Twinkle1.h"
#include "Twinkle2.h"
#include "Twinkle3.h"
#include "TwinklePark_objects.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA68, &landtable_0001788C),
	ptrdecl(0x97DA6C, &landtable_00019344),
	ptrdecl(0x97DA70, &landtable_00019F5C)
};


extern "C"
{
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl Init()
	{
		memcpy((void*)0x038C3C70, &attach_000F13F8, sizeof(attach_000F13F8));  // Light
		DataArray(FogData, TwinklePark1Fog, 0x026B339C, 3);
		for (int i = 0; i < 3; i++)
		{
			TwinklePark1Fog[i].Layer = 1500.0f;
		}
		DataArray(FogData, TwinklePark3Fog, 0x026B342C, 3);
		for (int i = 0; i < 3; i++)
		{
			TwinklePark3Fog[i].Color = 0xFF000000;
			TwinklePark3Fog[i].Layer = 400.0f;
			TwinklePark3Fog[i].Distance = 1200.0f;
			TwinklePark3Fog[i].Toggle = 1;
		}

	}
	__declspec(dllexport) void __cdecl OnFrame()
	{
		{
			if (CurrentLevel == 3 && CurrentAct == 1)
			{
				if (LevelFrameCount % 41 == 1)
				{
					matlist_00065D8C[0].attr_texId = 74;
					matlist_0001A3A8[0].attr_texId = 74;
					matlist_000657A0[0].attr_texId = 74;
					matlist_00065A3C[0].attr_texId = 74;
				}
				if (LevelFrameCount % 41 == 4)
				{
					matlist_00065D8C[0].attr_texId = 75;
					matlist_0001A3A8[0].attr_texId = 75;
					matlist_000657A0[0].attr_texId = 75;
					matlist_00065A3C[0].attr_texId = 75;
				}
				if (LevelFrameCount % 41 == 7)
				{
					matlist_00065D8C[0].attr_texId = 76;
					matlist_0001A3A8[0].attr_texId = 76;
					matlist_000657A0[0].attr_texId = 76;
					matlist_00065A3C[0].attr_texId = 76;
				}
				if (LevelFrameCount % 41 == 10)
				{
					matlist_00065D8C[0].attr_texId = 77;
					matlist_0001A3A8[0].attr_texId = 77;
					matlist_000657A0[0].attr_texId = 77;
					matlist_00065A3C[0].attr_texId = 77;
				}
				if (LevelFrameCount % 41 == 13)
				{
					matlist_00065D8C[0].attr_texId = 78;
					matlist_0001A3A8[0].attr_texId = 78;
					matlist_000657A0[0].attr_texId = 78;
					matlist_00065A3C[0].attr_texId = 78;
				}
				if (LevelFrameCount % 41 == 16)
				{
					matlist_00065D8C[0].attr_texId = 79;
					matlist_0001A3A8[0].attr_texId = 79;
					matlist_000657A0[0].attr_texId = 79;
					matlist_00065A3C[0].attr_texId = 79;
				}
				if (LevelFrameCount % 41 == 19)
				{
					matlist_00065D8C[0].attr_texId = 80;
					matlist_0001A3A8[0].attr_texId = 80;
					matlist_000657A0[0].attr_texId = 80;
					matlist_00065A3C[0].attr_texId = 80;
				}
				if (LevelFrameCount % 41 == 22)
				{
					matlist_00065D8C[0].attr_texId = 81;
					matlist_0001A3A8[0].attr_texId = 81;
					matlist_000657A0[0].attr_texId = 81;
					matlist_00065A3C[0].attr_texId = 81;
				}
				if (LevelFrameCount % 41 == 25)
				{
					matlist_00065D8C[0].attr_texId = 82;
					matlist_0001A3A8[0].attr_texId = 82;
					matlist_000657A0[0].attr_texId = 82;
					matlist_00065A3C[0].attr_texId = 82;
				}
				if (LevelFrameCount % 41 == 28)
				{
					matlist_00065D8C[0].attr_texId = 83;
					matlist_0001A3A8[0].attr_texId = 83;
					matlist_000657A0[0].attr_texId = 83;
					matlist_00065A3C[0].attr_texId = 83;
				}
				if (LevelFrameCount % 41 == 31)
				{
					matlist_00065D8C[0].attr_texId = 84;
					matlist_0001A3A8[0].attr_texId = 84;
					matlist_000657A0[0].attr_texId = 84;
					matlist_00065A3C[0].attr_texId = 84;
				}
				if (LevelFrameCount % 41 == 34)
				{
					matlist_00065D8C[0].attr_texId = 85;
					matlist_0001A3A8[0].attr_texId = 85;
					matlist_000657A0[0].attr_texId = 85;
					matlist_00065A3C[0].attr_texId = 85;
				}
				if (LevelFrameCount % 41 == 37)
				{
					matlist_00065D8C[0].attr_texId = 86;
					matlist_0001A3A8[0].attr_texId = 86;
					matlist_000657A0[0].attr_texId = 86;
					matlist_00065A3C[0].attr_texId = 86;
				}
				if (LevelFrameCount % 41 == 0)
				{
					matlist_00065D8C[0].attr_texId = 87;
					matlist_0001A3A8[0].attr_texId = 87;
					matlist_000657A0[0].attr_texId = 87;
					matlist_00065A3C[0].attr_texId = 87;
				}
			}
		}
	};
}