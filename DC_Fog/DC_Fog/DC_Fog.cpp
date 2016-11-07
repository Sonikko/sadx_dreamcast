#include "stdafx.h"
#include "SADXModLoader.h"


extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
	__declspec(dllexport) void __cdecl OnFrame()
	{
		void PreviousLevel(int& CurrentLevel);
		void PreviousAct(int& CurrentAct);
		if (PreviousLevel != CurrentLevel || PreviousAct != CurrentAct)
		{
			Uint8 FogColor[4] = { 0x00u, 0x00u, 0x00u, 0x00u };
			if (CurrentLevel == 10, CurrentAct == 0) WriteData((void*)0x03ABDC68, (void*)FogColor, sizeof(char) * 4);
			if (CurrentLevel == 4, CurrentAct == 2) WriteData((void*)0x03ABDC68, (void*)FogColor, sizeof(char) * 4);
			PreviousLevel == CurrentLevel;
			PreviousAct == CurrentAct;
		}
	}
}
