#include "stdafx.h"
#include "SADXModLoader.h"
#include "LostWorld1.h"
#include "LostWorld2.h"
#include "LostWorld_platform.h"
#include "LostWorld3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DAE8, &landtable_0000D560),
	ptrdecl(0x97DAEC, &landtable_00063A6C),
	ptrdecl(0x97DAF0, &landtable_000F928C)
};

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) void __cdecl OnFrame()
		{

			{
				if (CurrentLevel == 7 && CurrentAct == 1 && GameState == 15)
				{
					if (LevelFrameCount % 41 == 1)
					{
						matlist_000E924C[0].attr_texId = 81;
						matlist_000E3610[0].attr_texId = 81;
						matlist_000E8A20[0].attr_texId = 81;
						matlist_000E43D0[0].attr_texId = 81;
						matlist_000E7228[0].attr_texId = 81;
						matlist_000EF078[0].attr_texId = 81;
						matlist_000ECF80[0].attr_texId = 81;
						matlist_000EABDC[0].attr_texId = 81;
						matlist_000EBB3C[0].attr_texId = 81;
					}
					if (LevelFrameCount % 41 == 4)
					{
						matlist_000E924C[0].attr_texId = 82;
						matlist_000E3610[0].attr_texId = 82;
						matlist_000E8A20[0].attr_texId = 82;
						matlist_000E43D0[0].attr_texId = 82;
						matlist_000E7228[0].attr_texId = 82;
						matlist_000EF078[0].attr_texId = 82;
						matlist_000ECF80[0].attr_texId = 82;
						matlist_000EABDC[0].attr_texId = 82;
						matlist_000EBB3C[0].attr_texId = 82;
					}
					if (LevelFrameCount % 41 == 7)
					{
						matlist_000E924C[0].attr_texId = 83;
						matlist_000E3610[0].attr_texId = 83;
						matlist_000E8A20[0].attr_texId = 83;
						matlist_000E43D0[0].attr_texId = 83;
						matlist_000E7228[0].attr_texId = 83;
						matlist_000EF078[0].attr_texId = 83;
						matlist_000ECF80[0].attr_texId = 83;
						matlist_000EABDC[0].attr_texId = 83;
						matlist_000EBB3C[0].attr_texId = 83;
					}
					if (LevelFrameCount % 41 == 10)
					{
						matlist_000E924C[0].attr_texId = 84;
						matlist_000E3610[0].attr_texId = 84;
						matlist_000E8A20[0].attr_texId = 84;
						matlist_000E43D0[0].attr_texId = 84;
						matlist_000E7228[0].attr_texId = 84;
						matlist_000EF078[0].attr_texId = 84;
						matlist_000ECF80[0].attr_texId = 84;
						matlist_000EABDC[0].attr_texId = 84;
						matlist_000EBB3C[0].attr_texId = 84;
					}
					if (LevelFrameCount % 41 == 13)
					{
						matlist_000E924C[0].attr_texId = 85;
						matlist_000E3610[0].attr_texId = 85;
						matlist_000E8A20[0].attr_texId = 85;
						matlist_000E43D0[0].attr_texId = 85;
						matlist_000E7228[0].attr_texId = 85;
						matlist_000EF078[0].attr_texId = 85;
						matlist_000ECF80[0].attr_texId = 85;
						matlist_000EABDC[0].attr_texId = 85;
						matlist_000EBB3C[0].attr_texId = 85;
					}
				}
				if (LevelFrameCount % 41 == 16)
				{
					matlist_000E924C[0].attr_texId = 86;
					matlist_000E3610[0].attr_texId = 86;
					matlist_000E8A20[0].attr_texId = 86;
					matlist_000E43D0[0].attr_texId = 86;
					matlist_000E7228[0].attr_texId = 86;
					matlist_000EF078[0].attr_texId = 86;
					matlist_000ECF80[0].attr_texId = 86;
					matlist_000EABDC[0].attr_texId = 86;
					matlist_000EBB3C[0].attr_texId = 86;
				}
				if (LevelFrameCount % 41 == 19)
				{
					matlist_000E924C[0].attr_texId = 87;
					matlist_000E3610[0].attr_texId = 87;
					matlist_000E8A20[0].attr_texId = 87;
					matlist_000E43D0[0].attr_texId = 87;
					matlist_000E7228[0].attr_texId = 87;
					matlist_000EF078[0].attr_texId = 87;
					matlist_000ECF80[0].attr_texId = 87;
					matlist_000EABDC[0].attr_texId = 87;
					matlist_000EBB3C[0].attr_texId = 87;
				}

				if (LevelFrameCount % 41 == 22)
				{
					matlist_000E924C[0].attr_texId = 88;
					matlist_000E3610[0].attr_texId = 88;
					matlist_000E8A20[0].attr_texId = 88;
					matlist_000E43D0[0].attr_texId = 88;
					matlist_000E7228[0].attr_texId = 88;
					matlist_000EF078[0].attr_texId = 88;
					matlist_000ECF80[0].attr_texId = 88;
					matlist_000EABDC[0].attr_texId = 88;
					matlist_000EBB3C[0].attr_texId = 88;
				}
				if (LevelFrameCount % 41 == 25)
				{
					matlist_000E924C[0].attr_texId = 89;
					matlist_000E3610[0].attr_texId = 89;
					matlist_000E8A20[0].attr_texId = 89;
					matlist_000E43D0[0].attr_texId = 89;
					matlist_000E7228[0].attr_texId = 89;
					matlist_000EF078[0].attr_texId = 89;
					matlist_000ECF80[0].attr_texId = 89;
					matlist_000EABDC[0].attr_texId = 89;
					matlist_000EBB3C[0].attr_texId = 89;
				}
				if (LevelFrameCount % 41 == 28)
				{
					matlist_000E924C[0].attr_texId = 90;
					matlist_000E3610[0].attr_texId = 90;
					matlist_000E8A20[0].attr_texId = 90;
					matlist_000E43D0[0].attr_texId = 90;
					matlist_000E7228[0].attr_texId = 90;
					matlist_000EF078[0].attr_texId = 90;
					matlist_000ECF80[0].attr_texId = 90;
					matlist_000EABDC[0].attr_texId = 90;
					matlist_000EBB3C[0].attr_texId = 90;
				}
				if (LevelFrameCount % 41 == 31)
				{
					matlist_000E924C[0].attr_texId = 91;
					matlist_000E3610[0].attr_texId = 91;
					matlist_000E8A20[0].attr_texId = 91;
					matlist_000E43D0[0].attr_texId = 91;
					matlist_000E7228[0].attr_texId = 91;
					matlist_000EF078[0].attr_texId = 91;
					matlist_000ECF80[0].attr_texId = 91;
					matlist_000EABDC[0].attr_texId = 91;
					matlist_000EBB3C[0].attr_texId = 91;
				}
				if (LevelFrameCount % 41 == 34)
				{
					matlist_000E924C[0].attr_texId = 92;
					matlist_000E3610[0].attr_texId = 92;
					matlist_000E8A20[0].attr_texId = 92;
					matlist_000E43D0[0].attr_texId = 92;
					matlist_000E7228[0].attr_texId = 92;
					matlist_000EF078[0].attr_texId = 92;
					matlist_000ECF80[0].attr_texId = 92;
					matlist_000EABDC[0].attr_texId = 92;
					matlist_000EBB3C[0].attr_texId = 92;
				}
				if (LevelFrameCount % 41 == 37)
				{
					matlist_000E924C[0].attr_texId = 93;
					matlist_000E3610[0].attr_texId = 93;
					matlist_000E8A20[0].attr_texId = 93;
					matlist_000E43D0[0].attr_texId = 93;
					matlist_000E7228[0].attr_texId = 93;
					matlist_000EF078[0].attr_texId = 93;
					matlist_000ECF80[0].attr_texId = 93;
					matlist_000EABDC[0].attr_texId = 93;
					matlist_000EBB3C[0].attr_texId = 93;
				}
				if (LevelFrameCount % 41 == 0)
				{
					matlist_000E924C[0].attr_texId = 94;
					matlist_000E3610[0].attr_texId = 94;
					matlist_000E8A20[0].attr_texId = 94;
					matlist_000E43D0[0].attr_texId = 94;
					matlist_000E7228[0].attr_texId = 94;
					matlist_000EF078[0].attr_texId = 94;
					matlist_000ECF80[0].attr_texId = 94;
					matlist_000EABDC[0].attr_texId = 94;
					matlist_000EBB3C[0].attr_texId = 94;
				}
			}
			if (CurrentLevel == 7 && CurrentAct == 0 && GameState == 15)
			{
				if (LevelFrameCount % 41 == 1)
				{
					matlist_000584CC[0].attr_texId = 44;
					matlist_00057E90[0].attr_texId = 44;
					matlist_00059BE8[0].attr_texId = 44;
				}
				if (LevelFrameCount % 41 == 4)
				{
					matlist_000584CC[0].attr_texId = 45;
					matlist_00057E90[0].attr_texId = 45;
					matlist_00059BE8[0].attr_texId = 45;
				}
				if (LevelFrameCount % 41 == 7)
				{
					matlist_000584CC[0].attr_texId = 46;
					matlist_00057E90[0].attr_texId = 46;
					matlist_00059BE8[0].attr_texId = 46;
				}
				if (LevelFrameCount % 41 == 10)
				{
					matlist_000584CC[0].attr_texId = 47;
					matlist_00057E90[0].attr_texId = 47;
					matlist_00059BE8[0].attr_texId = 47;
				}
				if (LevelFrameCount % 41 == 13)
				{
					matlist_000584CC[0].attr_texId = 48;
					matlist_00057E90[0].attr_texId = 48;
					matlist_00059BE8[0].attr_texId = 48;
				}
				if (LevelFrameCount % 41 == 16)
				{
					matlist_000584CC[0].attr_texId = 49;
					matlist_00057E90[0].attr_texId = 49;
					matlist_00059BE8[0].attr_texId = 49;
				}
				if (LevelFrameCount % 41 == 19)
				{
					matlist_000584CC[0].attr_texId = 50;
					matlist_00057E90[0].attr_texId = 50;
					matlist_00059BE8[0].attr_texId = 50;
				}
				if (LevelFrameCount % 41 == 22)
				{
					matlist_000584CC[0].attr_texId = 51;
					matlist_00057E90[0].attr_texId = 51;
					matlist_00059BE8[0].attr_texId = 51;
				}
				if (LevelFrameCount % 41 == 25)
				{
					matlist_000584CC[0].attr_texId = 52;
					matlist_00057E90[0].attr_texId = 52;
					matlist_00059BE8[0].attr_texId = 52;
				}
				if (LevelFrameCount % 41 == 28)
				{
					matlist_000584CC[0].attr_texId = 53;
					matlist_00057E90[0].attr_texId = 53;
					matlist_00059BE8[0].attr_texId = 53;
				}
				if (LevelFrameCount % 41 == 31)
				{
					matlist_000584CC[0].attr_texId = 54;
					matlist_00057E90[0].attr_texId = 54;
					matlist_00059BE8[0].attr_texId = 54;
				}
				if (LevelFrameCount % 41 == 34)
				{
					matlist_000584CC[0].attr_texId = 55;
					matlist_00057E90[0].attr_texId = 55;
					matlist_00059BE8[0].attr_texId = 55;
				}
				if (LevelFrameCount % 41 == 37)
				{
					matlist_000584CC[0].attr_texId = 56;
					matlist_00057E90[0].attr_texId = 56;
					matlist_00059BE8[0].attr_texId = 56;
				}
				if (LevelFrameCount % 41 == 0)
				{
					matlist_000584CC[0].attr_texId = 57;
					matlist_00057E90[0].attr_texId = 57;
					matlist_00059BE8[0].attr_texId = 57;
				}
			}
};
}

