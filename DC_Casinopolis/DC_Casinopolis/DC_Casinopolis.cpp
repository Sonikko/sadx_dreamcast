#include "stdafx.h"
#include "SADXModLoader.h"
#include "Casino1.h"
#include "Casino2.h"
#include "Casino3.h"
#include "Casino4.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DB28, &landtable_00025EAC),
	ptrdecl(0x97DB2C, &landtable_0006C0B4),
	ptrdecl(0x97DB30, &landtable_000AF120),
	ptrdecl(0x97DB34, &landtable_000D8440)
};

extern "C"
{
	__declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl OnFrame()
	{
		{
			if (LevelFrameCount % 41 == 1)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 75;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 7;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 7;
			}
			if (LevelFrameCount % 41 == 4)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 68;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 10;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 10;
			}
			if (LevelFrameCount % 41 == 7)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 69;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 11;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 11;
			}
			if (LevelFrameCount % 41 == 10)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 70;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 12;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 12;
			}
			if (LevelFrameCount % 41 == 13)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 71;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 13;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 13;
			}
			if (LevelFrameCount % 41 == 16)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 72;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 14;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 14;
			}
			if (LevelFrameCount % 41 == 19)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 73;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 9;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 9;
			}
			if (LevelFrameCount % 41 == 22)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 74;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 15;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 15;
			}
			if (LevelFrameCount % 41 == 25)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 67;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 16;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 16;
			}
			if (LevelFrameCount % 41 == 28)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 76;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 17;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 17;
			}
			if (LevelFrameCount % 41 == 31)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 77;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 18;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 18;
			}
			if (LevelFrameCount % 41 == 34)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 78;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 19;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 19;
			}
			if (LevelFrameCount % 41 == 37)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 79;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 20;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 20;
			}
			if (LevelFrameCount % 41 == 0)
			{
				((NJS_OBJECT *)&object_000670B8)->basicdxmodel->mats[1].attr_texId = 80;
				((NJS_OBJECT *)&object_000ACD14)->basicdxmodel->mats[0].attr_texId = 21;
				((NJS_OBJECT *)&object_000ACC10)->basicdxmodel->mats[0].attr_texId = 21;
			}
		}
	};
}