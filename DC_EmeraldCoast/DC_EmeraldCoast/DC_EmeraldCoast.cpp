#include "stdafx.h"
#include "SADXModLoader.h"
#include "EmeraldCoast1_PC.h"
#include "EmeraldCoast1.h"
#include "EmeraldCoast2.h"
#include "EmeraldCoast3.h"

PointerInfo pointers[] = {
	ptrdecl(0x97DA28, &landtable_00081554),
	ptrdecl(0x97DA2C, &landtable_000DEB60),
	ptrdecl(0x97DA30, &landtable_0011DD58)
};

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
extern "C" __declspec(dllexport) void __cdecl OnFrame()
{
	{
		if (CurrentLevel == 1 && CurrentAct == 0 && GameState == 15)
		{
			if (LevelFrameCount % 45 == 2)
			{
				matlist_000755F8[0].attr_texId = 82;
				matlist_000759CC[0].attr_texId = 82;
				matlist_00075C74[0].attr_texId = 82;
				matlist_00075F1C[0].attr_texId = 82;
				matlist_00076278[0].attr_texId = 82;
				matlist_00076654[0].attr_texId = 82;
				matlist_00076FA0[0].attr_texId = 82;
				matlist_00076B90[0].attr_texId = 82;
				matlist_00078634[0].attr_texId = 82;
				matlist_00078120[0].attr_texId = 82;
				matlist_00078918[0].attr_texId = 82;
				matlist_000783C8[0].attr_texId = 82;
				matlist_00078C18[0].attr_texId = 82;
				matlist_00077EB4[0].attr_texId = 82;
				matlist_00077374[0].attr_texId = 82;
				matlist_000776D0[0].attr_texId = 82;
				matlist_00077A2C[0].attr_texId = 82;
				matlist_00BAC3E8[4].attr_texId = 68;
				matlist_00027A00[2].attr_texId = 68;
				matlist_00026CA0[2].attr_texId = 68;
				matlist_000246F8[0].attr_texId = 68;
				matlist_00023628[3].attr_texId = 68;
				matlist_0002276C[3].attr_texId = 68;
				matlist_000216E0[3].attr_texId = 68;
				matlist_0002091C[3].attr_texId = 68;
				matlist_0001F254[3].attr_texId = 68;
				matlist_0001E8C4[0].attr_texId = 68;
				matlist_0001FFE0[2].attr_texId = 68;
				matlist_0001FFE0[4].attr_texId = 68;
				matlist_0001DC78[1].attr_texId = 68;
			}
			if (LevelFrameCount % 45 == 5)
			{
				matlist_000755F8[0].attr_texId = 83;
				matlist_000759CC[0].attr_texId = 83;
				matlist_00075C74[0].attr_texId = 83;
				matlist_00075F1C[0].attr_texId = 83;
				matlist_00076278[0].attr_texId = 83;
				matlist_00076654[0].attr_texId = 83;
				matlist_00076FA0[0].attr_texId = 83;
				matlist_00076B90[0].attr_texId = 83;
				matlist_00078634[0].attr_texId = 83;
				matlist_00078120[0].attr_texId = 83;
				matlist_00078918[0].attr_texId = 83;
				matlist_000783C8[0].attr_texId = 83;
				matlist_00078C18[0].attr_texId = 83;
				matlist_00077EB4[0].attr_texId = 83;
				matlist_00077374[0].attr_texId = 83;
				matlist_000776D0[0].attr_texId = 83;
				matlist_00077A2C[0].attr_texId = 83;
				matlist_00BAC3E8[4].attr_texId = 69;
				matlist_00027A00[2].attr_texId = 69;
				matlist_00026CA0[2].attr_texId = 69;
				matlist_000246F8[0].attr_texId = 69;
				matlist_00023628[3].attr_texId = 69;
				matlist_0002276C[3].attr_texId = 69;
				matlist_000216E0[3].attr_texId = 69;
				matlist_0002091C[3].attr_texId = 69;
				matlist_0001F254[3].attr_texId = 69;
				matlist_0001E8C4[0].attr_texId = 69;
				matlist_0001FFE0[2].attr_texId = 69;
				matlist_0001FFE0[4].attr_texId = 69;
				matlist_0001DC78[1].attr_texId = 69;
			}
			if (LevelFrameCount % 45 == 8)
			{
				matlist_000755F8[0].attr_texId = 84;
				matlist_000759CC[0].attr_texId = 84;
				matlist_00075C74[0].attr_texId = 84;
				matlist_00075F1C[0].attr_texId = 84;
				matlist_00076278[0].attr_texId = 84;
				matlist_00076654[0].attr_texId = 84;
				matlist_00076FA0[0].attr_texId = 84;
				matlist_00076B90[0].attr_texId = 84;
				matlist_00078634[0].attr_texId = 84;
				matlist_00078120[0].attr_texId = 84;
				matlist_00078918[0].attr_texId = 84;
				matlist_000783C8[0].attr_texId = 84;
				matlist_00078C18[0].attr_texId = 84;
				matlist_00077EB4[0].attr_texId = 84;
				matlist_00077374[0].attr_texId = 84;
				matlist_000776D0[0].attr_texId = 84;
				matlist_00077A2C[0].attr_texId = 84;
				matlist_00BAC3E8[4].attr_texId = 70;
				matlist_00027A00[2].attr_texId = 70;
				matlist_00026CA0[2].attr_texId = 70;
				matlist_000246F8[0].attr_texId = 70;
				matlist_00023628[3].attr_texId = 70;
				matlist_0002276C[3].attr_texId = 70;
				matlist_000216E0[3].attr_texId = 70;
				matlist_0002091C[3].attr_texId = 70;
				matlist_0001F254[3].attr_texId = 70;
				matlist_0001E8C4[0].attr_texId = 70;
				matlist_0001FFE0[2].attr_texId = 70;
				matlist_0001FFE0[4].attr_texId = 70;
				matlist_0001DC78[1].attr_texId = 70;
			}
			if (LevelFrameCount % 45 == 11)
			{
				matlist_000755F8[0].attr_texId = 85;
				matlist_000759CC[0].attr_texId = 85;
				matlist_00075C74[0].attr_texId = 85;
				matlist_00075F1C[0].attr_texId = 85;
				matlist_00076278[0].attr_texId = 85;
				matlist_00076654[0].attr_texId = 85;
				matlist_00076FA0[0].attr_texId = 85;
				matlist_00076B90[0].attr_texId = 85;
				matlist_00078634[0].attr_texId = 85;
				matlist_00078120[0].attr_texId = 85;
				matlist_00078918[0].attr_texId = 85;
				matlist_000783C8[0].attr_texId = 85;
				matlist_00078C18[0].attr_texId = 85;
				matlist_00077EB4[0].attr_texId = 85;
				matlist_00077374[0].attr_texId = 85;
				matlist_000776D0[0].attr_texId = 85;
				matlist_00077A2C[0].attr_texId = 85;
				matlist_00BAC3E8[4].attr_texId = 71;
				matlist_00027A00[2].attr_texId = 71;
				matlist_00026CA0[2].attr_texId = 71;
				matlist_000246F8[0].attr_texId = 71;
				matlist_00023628[3].attr_texId = 71;
				matlist_0002276C[3].attr_texId = 71;
				matlist_000216E0[3].attr_texId = 71;
				matlist_0002091C[3].attr_texId = 71;
				matlist_0001F254[3].attr_texId = 71;
				matlist_0001E8C4[0].attr_texId = 71;
				matlist_0001FFE0[2].attr_texId = 71;
				matlist_0001FFE0[4].attr_texId = 71;
				matlist_0001DC78[1].attr_texId = 71;
			}
			if (LevelFrameCount % 45 == 14)
			{
				matlist_000755F8[0].attr_texId = 86;
				matlist_000759CC[0].attr_texId = 86;
				matlist_00075C74[0].attr_texId = 86;
				matlist_00075F1C[0].attr_texId = 86;
				matlist_00076278[0].attr_texId = 86;
				matlist_00076654[0].attr_texId = 86;
				matlist_00076FA0[0].attr_texId = 86;
				matlist_00076B90[0].attr_texId = 86;
				matlist_00078634[0].attr_texId = 86;
				matlist_00078120[0].attr_texId = 86;
				matlist_00078918[0].attr_texId = 86;
				matlist_000783C8[0].attr_texId = 86;
				matlist_00078C18[0].attr_texId = 86;
				matlist_00077EB4[0].attr_texId = 86;
				matlist_00077374[0].attr_texId = 86;
				matlist_000776D0[0].attr_texId = 86;
				matlist_00077A2C[0].attr_texId = 86;
				matlist_00BAC3E8[4].attr_texId = 72;
				matlist_00027A00[2].attr_texId = 72;
				matlist_00026CA0[2].attr_texId = 72;
				matlist_000246F8[0].attr_texId = 72;
				matlist_00023628[3].attr_texId = 72;
				matlist_0002276C[3].attr_texId = 72;
				matlist_000216E0[3].attr_texId = 72;
				matlist_0002091C[3].attr_texId = 72;
				matlist_0001F254[3].attr_texId = 72;
				matlist_0001E8C4[0].attr_texId = 72;
				matlist_0001FFE0[2].attr_texId = 72;
				matlist_0001FFE0[4].attr_texId = 72;
				matlist_0001DC78[1].attr_texId = 72;
			}
			if (LevelFrameCount % 45 == 17)
			{
				matlist_000755F8[0].attr_texId = 87;
				matlist_000759CC[0].attr_texId = 87;
				matlist_00075C74[0].attr_texId = 87;
				matlist_00075F1C[0].attr_texId = 87;
				matlist_00076278[0].attr_texId = 87;
				matlist_00076654[0].attr_texId = 87;
				matlist_00076FA0[0].attr_texId = 87;
				matlist_00076B90[0].attr_texId = 87;
				matlist_00078634[0].attr_texId = 87;
				matlist_00078120[0].attr_texId = 87;
				matlist_00078918[0].attr_texId = 87;
				matlist_000783C8[0].attr_texId = 87;
				matlist_00078C18[0].attr_texId = 87;
				matlist_00077EB4[0].attr_texId = 87;
				matlist_00077374[0].attr_texId = 87;
				matlist_000776D0[0].attr_texId = 87;
				matlist_00077A2C[0].attr_texId = 87;
				matlist_00BAC3E8[4].attr_texId = 73;
				matlist_00027A00[2].attr_texId = 73;
				matlist_00026CA0[2].attr_texId = 73;
				matlist_000246F8[0].attr_texId = 73;
				matlist_00023628[3].attr_texId = 73;
				matlist_0002276C[3].attr_texId = 73;
				matlist_000216E0[3].attr_texId = 73;
				matlist_0002091C[3].attr_texId = 73;
				matlist_0001F254[3].attr_texId = 73;
				matlist_0001E8C4[0].attr_texId = 73;
				matlist_0001FFE0[2].attr_texId = 73;
				matlist_0001FFE0[4].attr_texId = 73;
				matlist_0001DC78[1].attr_texId = 73;
			}
			if (LevelFrameCount % 45 == 20)
			{
				matlist_000755F8[0].attr_texId = 88;
				matlist_000759CC[0].attr_texId = 88;
				matlist_00075C74[0].attr_texId = 88;
				matlist_00075F1C[0].attr_texId = 88;
				matlist_00076278[0].attr_texId = 88;
				matlist_00076654[0].attr_texId = 88;
				matlist_00076FA0[0].attr_texId = 88;
				matlist_00076B90[0].attr_texId = 88;
				matlist_00078634[0].attr_texId = 88;
				matlist_00078120[0].attr_texId = 88;
				matlist_00078918[0].attr_texId = 88;
				matlist_000783C8[0].attr_texId = 88;
				matlist_00078C18[0].attr_texId = 88;
				matlist_00077EB4[0].attr_texId = 88;
				matlist_00077374[0].attr_texId = 88;
				matlist_000776D0[0].attr_texId = 88;
				matlist_00077A2C[0].attr_texId = 88;
				matlist_00BAC3E8[4].attr_texId = 74;
				matlist_00027A00[2].attr_texId = 74;
				matlist_00026CA0[2].attr_texId = 74;
				matlist_000246F8[0].attr_texId = 74;
				matlist_00023628[3].attr_texId = 74;
				matlist_0002276C[3].attr_texId = 74;
				matlist_000216E0[3].attr_texId = 74;
				matlist_0002091C[3].attr_texId = 74;
				matlist_0001F254[3].attr_texId = 74;
				matlist_0001E8C4[0].attr_texId = 74;
				matlist_0001FFE0[2].attr_texId = 74;
				matlist_0001FFE0[4].attr_texId = 74;
				matlist_0001DC78[1].attr_texId = 74;
			}
			if (LevelFrameCount % 45 == 23)
			{
				matlist_000755F8[0].attr_texId = 89;
				matlist_000759CC[0].attr_texId = 89;
				matlist_00075C74[0].attr_texId = 89;
				matlist_00075F1C[0].attr_texId = 89;
				matlist_00076278[0].attr_texId = 89;
				matlist_00076654[0].attr_texId = 89;
				matlist_00076FA0[0].attr_texId = 89;
				matlist_00076B90[0].attr_texId = 89;
				matlist_00078634[0].attr_texId = 89;
				matlist_00078120[0].attr_texId = 89;
				matlist_00078918[0].attr_texId = 89;
				matlist_000783C8[0].attr_texId = 89;
				matlist_00078C18[0].attr_texId = 89;
				matlist_00077EB4[0].attr_texId = 89;
				matlist_00077374[0].attr_texId = 89;
				matlist_000776D0[0].attr_texId = 89;
				matlist_00077A2C[0].attr_texId = 89;
				matlist_00BAC3E8[4].attr_texId = 75;
				matlist_00027A00[2].attr_texId = 75;
				matlist_00026CA0[2].attr_texId = 75;
				matlist_000246F8[0].attr_texId = 75;
				matlist_00023628[3].attr_texId = 75;
				matlist_0002276C[3].attr_texId = 75;
				matlist_000216E0[3].attr_texId = 75;
				matlist_0002091C[3].attr_texId = 75;
				matlist_0001F254[3].attr_texId = 75;
				matlist_0001E8C4[0].attr_texId = 75;
				matlist_0001FFE0[2].attr_texId = 75;
				matlist_0001FFE0[4].attr_texId = 75;
				matlist_0001DC78[1].attr_texId = 75;
			}
			if (LevelFrameCount % 45 == 26)
			{
				matlist_000755F8[0].attr_texId = 90;
				matlist_000759CC[0].attr_texId = 90;
				matlist_00075C74[0].attr_texId = 90;
				matlist_00075F1C[0].attr_texId = 90;
				matlist_00076278[0].attr_texId = 90;
				matlist_00076654[0].attr_texId = 90;
				matlist_00076FA0[0].attr_texId = 90;
				matlist_00076B90[0].attr_texId = 90;
				matlist_00078634[0].attr_texId = 90;
				matlist_00078120[0].attr_texId = 90;
				matlist_00078918[0].attr_texId = 90;
				matlist_000783C8[0].attr_texId = 90;
				matlist_00078C18[0].attr_texId = 90;
				matlist_00077EB4[0].attr_texId = 90;
				matlist_00077374[0].attr_texId = 90;
				matlist_000776D0[0].attr_texId = 90;
				matlist_00077A2C[0].attr_texId = 90;
				matlist_00BAC3E8[4].attr_texId = 76;
				matlist_00027A00[2].attr_texId = 76;
				matlist_00026CA0[2].attr_texId = 76;
				matlist_000246F8[0].attr_texId = 76;
				matlist_00023628[3].attr_texId = 76;
				matlist_0002276C[3].attr_texId = 76;
				matlist_000216E0[3].attr_texId = 76;
				matlist_0002091C[3].attr_texId = 76;
				matlist_0001F254[3].attr_texId = 76;
				matlist_0001E8C4[0].attr_texId = 76;
				matlist_0001FFE0[2].attr_texId = 76;
				matlist_0001FFE0[4].attr_texId = 76;
				matlist_0001DC78[1].attr_texId = 76;
			}
			if (LevelFrameCount % 45 == 29)
			{
				matlist_000755F8[0].attr_texId = 91;
				matlist_000759CC[0].attr_texId = 91;
				matlist_00075C74[0].attr_texId = 91;
				matlist_00075F1C[0].attr_texId = 91;
				matlist_00076278[0].attr_texId = 91;
				matlist_00076654[0].attr_texId = 91;
				matlist_00076FA0[0].attr_texId = 91;
				matlist_00076B90[0].attr_texId = 91;
				matlist_00078634[0].attr_texId = 91;
				matlist_00078120[0].attr_texId = 91;
				matlist_00078918[0].attr_texId = 91;
				matlist_000783C8[0].attr_texId = 91;
				matlist_00078C18[0].attr_texId = 91;
				matlist_00077EB4[0].attr_texId = 91;
				matlist_00077374[0].attr_texId = 91;
				matlist_000776D0[0].attr_texId = 91;
				matlist_00077A2C[0].attr_texId = 91;
				matlist_00BAC3E8[4].attr_texId = 77;
				matlist_00027A00[2].attr_texId = 77;
				matlist_00026CA0[2].attr_texId = 77;
				matlist_000246F8[0].attr_texId = 77;
				matlist_00023628[3].attr_texId = 77;
				matlist_0002276C[3].attr_texId = 77;
				matlist_000216E0[3].attr_texId = 77;
				matlist_0002091C[3].attr_texId = 77;
				matlist_0001F254[3].attr_texId = 77;
				matlist_0001E8C4[0].attr_texId = 77;
				matlist_0001FFE0[2].attr_texId = 77;
				matlist_0001FFE0[4].attr_texId = 77;
				matlist_0001DC78[1].attr_texId = 77;
			}
			if (LevelFrameCount % 45 == 32)
			{
				matlist_000755F8[0].attr_texId = 92;
				matlist_000759CC[0].attr_texId = 92;
				matlist_00075C74[0].attr_texId = 92;
				matlist_00075F1C[0].attr_texId = 92;
				matlist_00076278[0].attr_texId = 92;
				matlist_00076654[0].attr_texId = 92;
				matlist_00076FA0[0].attr_texId = 92;
				matlist_00076B90[0].attr_texId = 92;
				matlist_00078634[0].attr_texId = 92;
				matlist_00078120[0].attr_texId = 92;
				matlist_00078918[0].attr_texId = 92;
				matlist_000783C8[0].attr_texId = 92;
				matlist_00078C18[0].attr_texId = 92;
				matlist_00077EB4[0].attr_texId = 92;
				matlist_00077374[0].attr_texId = 92;
				matlist_000776D0[0].attr_texId = 92;
				matlist_00077A2C[0].attr_texId = 92;
				matlist_00BAC3E8[4].attr_texId = 78;
				matlist_00027A00[2].attr_texId = 78;
				matlist_00026CA0[2].attr_texId = 78;
				matlist_000246F8[0].attr_texId = 78;
				matlist_00023628[3].attr_texId = 78;
				matlist_0002276C[3].attr_texId = 78;
				matlist_000216E0[3].attr_texId = 78;
				matlist_0002091C[3].attr_texId = 78;
				matlist_0001F254[3].attr_texId = 78;
				matlist_0001E8C4[0].attr_texId = 78;
				matlist_0001FFE0[2].attr_texId = 78;
				matlist_0001FFE0[4].attr_texId = 78;
				matlist_0001DC78[1].attr_texId = 78;
			}
			if (LevelFrameCount % 45 == 35)
			{
				matlist_000755F8[0].attr_texId = 93;
				matlist_000759CC[0].attr_texId = 93;
				matlist_00075C74[0].attr_texId = 93;
				matlist_00075F1C[0].attr_texId = 93;
				matlist_00076278[0].attr_texId = 93;
				matlist_00076654[0].attr_texId = 93;
				matlist_00076FA0[0].attr_texId = 93;
				matlist_00076B90[0].attr_texId = 93;
				matlist_00078634[0].attr_texId = 93;
				matlist_00078120[0].attr_texId = 93;
				matlist_00078918[0].attr_texId = 93;
				matlist_000783C8[0].attr_texId = 93;
				matlist_00078C18[0].attr_texId = 93;
				matlist_00077EB4[0].attr_texId = 93;
				matlist_00077374[0].attr_texId = 93;
				matlist_000776D0[0].attr_texId = 93;
				matlist_00077A2C[0].attr_texId = 93;
				matlist_00BAC3E8[4].attr_texId = 79;
				matlist_00027A00[2].attr_texId = 79;
				matlist_00026CA0[2].attr_texId = 79;
				matlist_000246F8[0].attr_texId = 79;
				matlist_00023628[3].attr_texId = 79;
				matlist_0002276C[3].attr_texId = 79;
				matlist_000216E0[3].attr_texId = 79;
				matlist_0002091C[3].attr_texId = 79;
				matlist_0001F254[3].attr_texId = 79;
				matlist_0001E8C4[0].attr_texId = 79;
				matlist_0001FFE0[2].attr_texId = 79;
				matlist_0001FFE0[4].attr_texId = 79;
				matlist_0001DC78[1].attr_texId = 79;
			}
			if (LevelFrameCount % 45 == 38)
			{
				matlist_000755F8[0].attr_texId = 94;
				matlist_000759CC[0].attr_texId = 94;
				matlist_00075C74[0].attr_texId = 94;
				matlist_00075F1C[0].attr_texId = 94;
				matlist_00076278[0].attr_texId = 94;
				matlist_00076654[0].attr_texId = 94;
				matlist_00076FA0[0].attr_texId = 94;
				matlist_00076B90[0].attr_texId = 94;
				matlist_00078634[0].attr_texId = 94;
				matlist_00078120[0].attr_texId = 94;
				matlist_00078918[0].attr_texId = 94;
				matlist_000783C8[0].attr_texId = 94;
				matlist_00078C18[0].attr_texId = 94;
				matlist_00077EB4[0].attr_texId = 94;
				matlist_00077374[0].attr_texId = 94;
				matlist_000776D0[0].attr_texId = 94;
				matlist_00077A2C[0].attr_texId = 94;
				matlist_00BAC3E8[4].attr_texId = 80;
				matlist_00027A00[2].attr_texId = 80;
				matlist_00026CA0[2].attr_texId = 80;
				matlist_000246F8[0].attr_texId = 80;
				matlist_00023628[3].attr_texId = 80;
				matlist_0002276C[3].attr_texId = 80;
				matlist_000216E0[3].attr_texId = 80;
				matlist_0002091C[3].attr_texId = 80;
				matlist_0001F254[3].attr_texId = 80;
				matlist_0001E8C4[0].attr_texId = 80;
				matlist_0001FFE0[2].attr_texId = 80;
				matlist_0001FFE0[4].attr_texId = 80;
				matlist_0001DC78[1].attr_texId = 80;
			}
			if (LevelFrameCount % 45 == 41)
			{
				matlist_000755F8[0].attr_texId = 95;
				matlist_000759CC[0].attr_texId = 95;
				matlist_00075C74[0].attr_texId = 95;
				matlist_00075F1C[0].attr_texId = 95;
				matlist_00076278[0].attr_texId = 95;
				matlist_00076654[0].attr_texId = 95;
				matlist_00076FA0[0].attr_texId = 95;
				matlist_00076B90[0].attr_texId = 95;
				matlist_00078634[0].attr_texId = 95;
				matlist_00078120[0].attr_texId = 95;
				matlist_00078918[0].attr_texId = 95;
				matlist_000783C8[0].attr_texId = 95;
				matlist_00078C18[0].attr_texId = 95;
				matlist_00077EB4[0].attr_texId = 95;
				matlist_00077374[0].attr_texId = 95;
				matlist_000776D0[0].attr_texId = 95;
				matlist_00077A2C[0].attr_texId = 95;
				matlist_00BAC3E8[4].attr_texId = 81;
				matlist_00027A00[2].attr_texId = 81;
				matlist_00026CA0[2].attr_texId = 81;
				matlist_000246F8[0].attr_texId = 81;
				matlist_00023628[3].attr_texId = 81;
				matlist_0002276C[3].attr_texId = 81;
				matlist_000216E0[3].attr_texId = 81;
				matlist_0002091C[3].attr_texId = 81;
				matlist_0001F254[3].attr_texId = 81;
				matlist_0001E8C4[0].attr_texId = 81;
				matlist_0001FFE0[2].attr_texId = 81;
				matlist_0001FFE0[4].attr_texId = 81;
				matlist_0001DC78[1].attr_texId = 81;
			}
			if (LevelFrameCount % 45 == 44)
			{
				matlist_000755F8[0].attr_texId = 96;
				matlist_000759CC[0].attr_texId = 96;
				matlist_00075C74[0].attr_texId = 96;
				matlist_00075F1C[0].attr_texId = 96;
				matlist_00076278[0].attr_texId = 96;
				matlist_00076654[0].attr_texId = 96;
				matlist_00076FA0[0].attr_texId = 96;
				matlist_00076B90[0].attr_texId = 96;
				matlist_00078634[0].attr_texId = 96;
				matlist_00078120[0].attr_texId = 96;
				matlist_00078918[0].attr_texId = 96;
				matlist_000783C8[0].attr_texId = 96;
				matlist_00078C18[0].attr_texId = 96;
				matlist_00077EB4[0].attr_texId = 96;
				matlist_00077374[0].attr_texId = 96;
				matlist_000776D0[0].attr_texId = 96;
				matlist_00077A2C[0].attr_texId = 96;
				matlist_00BAC3E8[4].attr_texId = 67;
				matlist_00027A00[2].attr_texId = 67;
				matlist_00026CA0[2].attr_texId = 67;
				matlist_000246F8[0].attr_texId = 67;
				matlist_00023628[3].attr_texId = 67;
				matlist_0002276C[3].attr_texId = 67;
				matlist_000216E0[3].attr_texId = 67;
				matlist_0002091C[3].attr_texId = 67;
				matlist_0001F254[3].attr_texId = 67;
				matlist_0001E8C4[0].attr_texId = 67;
				matlist_0001FFE0[2].attr_texId = 67;
				matlist_0001FFE0[4].attr_texId = 67;
				matlist_0001DC78[1].attr_texId = 67;
			}
		}
	}
}
//{
//	memcpy((void*)0x00F97050, &matlist_00B97050, sizeof(matlist_00B97050));
//}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };

