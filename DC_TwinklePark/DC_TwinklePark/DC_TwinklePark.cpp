#include "stdafx.h"
#include "SADXModLoader.h"
#include "Twinkle1.h"
#include "Twinkle2.h"
#include "Twinkle3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA68, &landtable_0001788C),
	ptrdecl(0x97DA6C, &landtable_00019344),
	ptrdecl(0x97DA70, &landtable_00019F5C)
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
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 74;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 74;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 74;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 74;
			}
			if (LevelFrameCount % 41 == 4) 
			{ 
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 75; 
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 75;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 75;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 75;
			}
			if (LevelFrameCount % 41 == 7)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 76;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 76;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 76;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 76;
			}
			if (LevelFrameCount % 41 == 10)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 77;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 77;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 77;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 77;
			}
			if (LevelFrameCount % 41 == 13) 
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 78;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 78;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 78;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 78;
			}
			if (LevelFrameCount % 41 == 16)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 79;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 79;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 79;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 79;
			}
			if (LevelFrameCount % 41 == 19)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 80;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 80;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 80;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 80;
			}
			if (LevelFrameCount % 41 == 22)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 81;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 81;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 81;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 81;
			}
			if (LevelFrameCount % 41 == 25)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 82;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 82;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 82;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 82;
			}
			if (LevelFrameCount % 41 == 28)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 83;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 83;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 83;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 83;
			}
			if (LevelFrameCount % 41 == 31)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 84;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 84;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 84;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 84;
			}
			if (LevelFrameCount % 41 == 34)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 85;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 85;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 85;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 85;
			}
			if (LevelFrameCount % 41 == 37)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 86;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 86;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 86;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 86;
			}
			if (LevelFrameCount % 41 == 0)
			{
				((NJS_OBJECT *)&object_000660E0)->basicdxmodel->mats[0].attr_texId = 87;
				((NJS_OBJECT *)&object_0001A994)->basicdxmodel->mats[0].attr_texId = 87;
				((NJS_OBJECT *)&object_00065A08)->basicdxmodel->mats[0].attr_texId = 87;
				((NJS_OBJECT *)&object_00065D58)->basicdxmodel->mats[0].attr_texId = 87;
			}
		}
	};
}