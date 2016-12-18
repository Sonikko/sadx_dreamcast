#include "stdafx.h"
#include "SADXModLoader.h"
#include "SSGarden.h"
#include "ECGarden.h"
#include "MRGarden_Day.h"

bool DayReplaced = false;

PointerInfo pointers[] = {
	ptrdecl(0x719619, &landtable_0300E738), //SS
	ptrdecl(0x7191E9, &landtable_03005E54) //EC
};

extern "C"

{
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl OnFrame()
	{
		HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_DAYTIME");
		if (handle !=0 && DayReplaced == false)
		{
			PrintDebug("handle = %X\n", handle);
			PrintDebug("Doing stuff");
			LandTable *objLandTableGarden02_Daytime = (LandTable *)GetProcAddress(handle, "objLandTableGarden02_Daytime");
			NJS_OBJECT **stg_garden02_mr_objects = (NJS_OBJECT **)GetProcAddress(handle, "stg_garden02_mr_objects");
			objLandTableGarden02_Daytime->COLList = collist_000348E0;
			stg_garden02_mr_objects[0] = &object_000074E4;
			stg_garden02_mr_objects[1] = &object_000089D4;
			stg_garden02_mr_objects[2] = &object_0000940C;
			stg_garden02_mr_objects[3] = &object_00009528;
			stg_garden02_mr_objects[4] = &object_00009D6C;
			stg_garden02_mr_objects[5] = &object_00009FCC;
			stg_garden02_mr_objects[6] = &object_0000A898;
			stg_garden02_mr_objects[7] = &object_0000BF58;
			stg_garden02_mr_objects[8] = &object_0000FE64;
			stg_garden02_mr_objects[9] = &object_00010698;
			stg_garden02_mr_objects[10] = &object_00010814;
			stg_garden02_mr_objects[11] = &object_000136C8;
			stg_garden02_mr_objects[12] = &object_00013AD4;
			stg_garden02_mr_objects[13] = &object_00013FFC;
			stg_garden02_mr_objects[14] = &object_000144E4;
			stg_garden02_mr_objects[15] = &object_000149E4;
			stg_garden02_mr_objects[16] = &object_00014EB4;
			stg_garden02_mr_objects[17] = &object_00015384;
			stg_garden02_mr_objects[18] = &object_000156B8;
			stg_garden02_mr_objects[19] = &object_00015C20;
			stg_garden02_mr_objects[20] = &object_0001603C;
			stg_garden02_mr_objects[21] = &object_00016584;
			stg_garden02_mr_objects[22] = &object_00017744;
			stg_garden02_mr_objects[23] = &object_00017A8C;
			stg_garden02_mr_objects[24] = &object_00017DD4;
			stg_garden02_mr_objects[25] = &object_00018754;
			stg_garden02_mr_objects[26] = &object_00018D98;
			stg_garden02_mr_objects[27] = &object_000193D8;
			stg_garden02_mr_objects[28] = &object_00019A18;
			stg_garden02_mr_objects[29] = &object_0001A058;
			stg_garden02_mr_objects[30] = &object_0001A698;
			stg_garden02_mr_objects[31] = &object_0001ACD8;
			stg_garden02_mr_objects[32] = &object_0001B318;
			stg_garden02_mr_objects[33] = &object_0001B958;
			stg_garden02_mr_objects[34] = &object_0001BF98;
			stg_garden02_mr_objects[35] = &object_0001C5D8;
			stg_garden02_mr_objects[36] = &object_0001D758;
			stg_garden02_mr_objects[37] = &object_0001E8D8;
			stg_garden02_mr_objects[38] = &object_0001FA58;
			stg_garden02_mr_objects[39] = &object_00020BD8;
			stg_garden02_mr_objects[40] = &object_00021D58;
			stg_garden02_mr_objects[41] = &object_00022ED8;
			stg_garden02_mr_objects[42] = &object_00024058;
			stg_garden02_mr_objects[43] = &object_000251D8;
			stg_garden02_mr_objects[44] = &object_00026358;
			stg_garden02_mr_objects[45] = &object_000274D8;
			stg_garden02_mr_objects[46] = &object_00028658;
			stg_garden02_mr_objects[47] = &object_000297D8;
			stg_garden02_mr_objects[48] = &object_0002A958;
			stg_garden02_mr_objects[49] = &object_0002BAD8;
			stg_garden02_mr_objects[50] = &object_0002CC58;
			stg_garden02_mr_objects[51] = &object_0002D2D4;
			stg_garden02_mr_objects[52] = &object_0002D96C;
			stg_garden02_mr_objects[53] = &object_0002E004;
			stg_garden02_mr_objects[54] = &object_0002E28C;
			stg_garden02_mr_objects[55] = &object_0002E514;
			stg_garden02_mr_objects[56] = &object_0002E79C;
			stg_garden02_mr_objects[57] = &object_0002EE6C;
			stg_garden02_mr_objects[58] = &object_0002FC54;
			stg_garden02_mr_objects[59] = &object_00030594;
			stg_garden02_mr_objects[60] = &object_00030EC4;
			stg_garden02_mr_objects[61] = &object_00032278;
			stg_garden02_mr_objects[62] = &object_00032BA8;
			stg_garden02_mr_objects[63] = &object_00033194;
			stg_garden02_mr_objects[64] = &object_000336FC;
			stg_garden02_mr_objects[65] = &object_000340F4;
			stg_garden02_mr_objects[66] = &object_00034128;
			stg_garden02_mr_objects[67] = &object_0003415C;
			stg_garden02_mr_objects[68] = &object_00034190;
			stg_garden02_mr_objects[69] = &object_000341C4;
			stg_garden02_mr_objects[70] = &object_000341F8;
			stg_garden02_mr_objects[71] = &object_0003422C;
			stg_garden02_mr_objects[72] = &object_00034260;
			stg_garden02_mr_objects[73] = &object_00034294;
			stg_garden02_mr_objects[74] = &object_000342C8;
			stg_garden02_mr_objects[75] = &object_000342FC;
			stg_garden02_mr_objects[76] = &object_00034330;
			stg_garden02_mr_objects[77] = &object_00034364;
			stg_garden02_mr_objects[78] = &object_00034398;
			stg_garden02_mr_objects[79] = &object_000343CC;
			stg_garden02_mr_objects[80] = &object_00034400;
			stg_garden02_mr_objects[81] = &object_00034434;
			stg_garden02_mr_objects[82] = &object_00034468;
			stg_garden02_mr_objects[83] = &object_0003449C;
			stg_garden02_mr_objects[84] = &object_000344D0;
			stg_garden02_mr_objects[85] = &object_00034504;
			stg_garden02_mr_objects[86] = &object_00034538;
			stg_garden02_mr_objects[87] = &object_0003456C;
			stg_garden02_mr_objects[88] = &object_000345A0;
			stg_garden02_mr_objects[89] = &object_000345D4;
			stg_garden02_mr_objects[90] = &object_00034608;
			stg_garden02_mr_objects[91] = &object_0003463C;
			stg_garden02_mr_objects[92] = &object_00034670;
			stg_garden02_mr_objects[93] = &object_000346A4;
			stg_garden02_mr_objects[94] = &object_000346D8;
			stg_garden02_mr_objects[95] = &object_0003470C;
			stg_garden02_mr_objects[96] = &object_00034740;
			stg_garden02_mr_objects[97] = &object_00034774;
			stg_garden02_mr_objects[98] = &object_000347A8;
			stg_garden02_mr_objects[99] = &object_000347DC;
			stg_garden02_mr_objects[100] = &object_00034810;
			stg_garden02_mr_objects[101] = &object_00034844;
			stg_garden02_mr_objects[102] = &object_00034878;
			stg_garden02_mr_objects[103] = &object_000348AC;
			DayReplaced = true;
		}
	}
}
