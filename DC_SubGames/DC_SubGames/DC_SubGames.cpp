#include "stdafx.h"
#include <SADXModLoader.h>
#include "SandHill.h"
#include <lanternapi.h>
#include <string>
#include "TwinkleCircuit.h"
#include "SkyChaseModels.h"

std::string plz0xbin;

DataArray(FogData, FogData_SandHill, 0x0173BB74, 3);
DataPointer(float, CurrentDrawDistance, 0x03ABDC74);
DataPointer(float, SkyChase1_SkyboxScaleX, 0x027D6CE0);
DataPointer(float, SkyChase1_SkyboxScaleY, 0x027D6CE4);
DataPointer(float, SkyChase1_SkyboxScaleZ, 0x027D6CE8);

PointerInfo pointers[] = {
	ptrdecl(0x7D2051, &landtable_00002DEC),
	ptrdecl(0x7D205B, &landtable_00001A3C)
};

NJS_MATERIAL* WhiteDiffuse[] = {
	//Start and goal robot (Twinkle Circuit)
	((NJS_MATERIAL*)0x009CC010),
	((NJS_MATERIAL*)0x009CC024),
	((NJS_MATERIAL*)0x009CC038),
	((NJS_MATERIAL*)0x009CC04C),
	((NJS_MATERIAL*)0x009CC060),
	((NJS_MATERIAL*)0x009CC074),
	((NJS_MATERIAL*)0x009CC088),
	((NJS_MATERIAL*)0x009CC09C),
	&matlist_000293DC[33],
	&matlist_000293DC[34],
	&matlist_000293DC[35],
	&matlist_000293DC[36],
	&matlist_000293DC[37],
	&matlist_000293DC[38],
	&matlist_000293DC[39],
	&matlist_000293DC[40],
	&matlist_000293DC[41],
	&matlist_000293DC[42],
	&matlist_000293DC[43],
	&matlist_000293DC[44],
	&matlist_000293DC[45],
	&matlist_000293DC[46],
	&matlist_000293DC[47],
	&matlist_000293DC[48],
	&matlist_000293DC[49],
	&matlist_000293DC[50],
	&matlist_000293DC[51],
	&matlist_000293DC[52],
	&matlist_000293DC[53],
	&matlist_000293DC[54],
	&matlist_000293DC[55],
	&matlist_000293DC[56],
	&matlist_000293DC[57],
	&matlist_000293DC[58],
	&matlist_000293DC[59],
	&matlist_000293DC[60],
	&matlist_000293DC[61],
	&matlist_000293DC[62],
	&matlist_000293DC[63],
	&matlist_000293DC[64],
	&matlist_000293DC[65],
	&matlist_000293DC[66],
	&matlist_000293DC[67],
	&matlist_000293DC[68],
	&matlist_000293DC[69],
	&matlist_000293DC[70],
	&matlist_000293DC[71],
	&matlist_000293DC[72],
	&matlist_000293DC[73],
	&matlist_000293DC[74],
	&matlist_000293DC[75],
	&matlist_000293DC[76],
	&matlist_000293DC[77],
	&matlist_000293DC[78],
	&matlist_000293DC[79],
	&matlist_000293DC[80],
	&matlist_000293DC[81],
	&matlist_000293DC[82],
	&matlist_000293DC[83],
	&matlist_000293DC[84],
	&matlist_000293DC[85],
	&matlist_000293DC[86],
	&matlist_000293DC[87],
	&matlist_000293DC[88],
	&matlist_000293DC[89],
	&matlist_000293DC[90],
	&matlist_000293DC[91],
	&matlist_000293DC[92],
	&matlist_000293DC[93],
	&matlist_000293DC[94],
	&matlist_000293DC[95],
	&matlist_000293DC[96],
	&matlist_000293DC[97],
	&matlist_000293DC[98],
	&matlist_000293DC[99],
	&matlist_000293DC[100],
	&matlist_000293DC[101],
	&matlist_000293DC[102],
	/*
		&matlist_000337B4[0],
		&matlist_000337B4[1],
		&matlist_000337B4[2],
		&matlist_000337B4[3],
		&matlist_000337B4[4],
		&matlist_000337B4[5],
		&matlist_000337B4[6],
		&matlist_000337B4[7],
		&matlist_000337B4[8],
		&matlist_000337B4[9],
		&matlist_000337B4[10],
		&matlist_000337B4[11],
		&matlist_000337B4[12],
		&matlist_000337B4[13],
		&matlist_000337B4[14],
		&matlist_000337B4[15],
		&matlist_000337B4[16],
		&matlist_000337B4[17],
		&matlist_000337B4[18],*/
		&matlist_000337B4[19],
		&matlist_000337B4[20],
		&matlist_000337B4[21],
		&matlist_000337B4[22],
		&matlist_000337B4[23],
		&matlist_000337B4[24],
		&matlist_000337B4[25],
		&matlist_000337B4[26],
		&matlist_000337B4[27],
		&matlist_000337B4[28],
		&matlist_000337B4[29],
		&matlist_000337B4[30],
		&matlist_000337B4[31],
		&matlist_000337B4[32],
		&matlist_000337B4[33],
		&matlist_000337B4[34],
		&matlist_000337B4[35],
		&matlist_000337B4[36],
		&matlist_000337B4[37],
		&matlist_000337B4[38],
		&matlist_000337B4[39],
		&matlist_000337B4[40],
		&matlist_000337B4[41],
		&matlist_000337B4[42],
		&matlist_000337B4[43],
		&matlist_000337B4[44],
		&matlist_000337B4[45],
		&matlist_000337B4[46],
		&matlist_000337B4[47],
		&matlist_000337B4[48],
		&matlist_000337B4[49],
		&matlist_000337B4[50],
		&matlist_000337B4[51],
		&matlist_000337B4[52],
		&matlist_000337B4[53],
		&matlist_000337B4[54],
		&matlist_000337B4[55],
		&matlist_000337B4[56],
		&matlist_000337B4[57],
		&matlist_000337B4[58],
		&matlist_000337B4[59],
		&matlist_000337B4[60],
		&matlist_000337B4[61],
		&matlist_000337B4[62],
		&matlist_000337B4[63],
		&matlist_000337B4[64],
		&matlist_000337B4[65],
		&matlist_000337B4[66],
		&matlist_000337B4[67],
		&matlist_000337B4[68],
		&matlist_000337B4[69],
		&matlist_000337B4[70],
		&matlist_000337B4[71],
		&matlist_000337B4[72],
		&matlist_000337B4[73],
		&matlist_000337B4[74],
		&matlist_000337B4[75],
		&matlist_000337B4[76],
		&matlist_000337B4[77],
		&matlist_000337B4[78],
		&matlist_000337B4[79],
		&matlist_000337B4[80],
		&matlist_000337B4[81],
		&matlist_000337B4[82],
		&matlist_000337B4[83],
		&matlist_000337B4[84],
		&matlist_000337B4[85],
		&matlist_000337B4[86],
		&matlist_000337B4[87],
		&matlist_000337B4[88],
		&matlist_000337B4[89],
		&matlist_000337B4[90],
		&matlist_000337B4[91],
		&matlist_000337B4[92],
		&matlist_000337B4[93],
		&matlist_000337B4[94],
		&matlist_000337B4[95],
		&matlist_000337B4[96],
		//Part 3
		&matlist_0002EB04[37],
		&matlist_0002EB04[38],
		&matlist_0002EB04[39],
		&matlist_0002EB04[40],
		&matlist_0002EB04[41],
		&matlist_0002EB04[42],
		&matlist_0002EB04[43],
		&matlist_0002EB04[44],
		&matlist_0002EB04[45],
		&matlist_0002EB04[46],
		&matlist_0002EB04[47],
		&matlist_0002EB04[48],
		&matlist_0002EB04[49],
		&matlist_0002EB04[50],
		&matlist_0002EB04[51],
		&matlist_0002EB04[52],
		&matlist_0002EB04[53],
		&matlist_0002EB04[54],
		&matlist_0002EB04[55],
		&matlist_0002EB04[56],
		&matlist_0002EB04[57],
		&matlist_0002EB04[58],
		&matlist_0002EB04[59],
		&matlist_0002EB04[60],
		&matlist_0002EB04[61],
		&matlist_0002EB04[62],
		&matlist_0002EB04[63],
		&matlist_0002EB04[64],
		&matlist_0002EB04[65],
		&matlist_0002EB04[66],
		&matlist_0002EB04[67],
		&matlist_0002EB04[68],
		&matlist_0002EB04[69],
		&matlist_0002EB04[70],
		&matlist_0002EB04[71],
		&matlist_0002EB04[72],
		&matlist_0002EB04[73],
		&matlist_0002EB04[74],
		&matlist_0002EB04[75],
		&matlist_0002EB04[76],
		&matlist_0002EB04[77],
		&matlist_0002EB04[78],
		&matlist_0002EB04[79],
		&matlist_0002EB04[80],
		&matlist_0002EB04[81],
		&matlist_0002EB04[82],
		&matlist_0002EB04[83],
		&matlist_0002EB04[84],
		&matlist_0002EB04[85],
		&matlist_0002EB04[86],
		&matlist_0002EB04[87],
		&matlist_0002EB04[88],
		&matlist_0002EB04[89],
		&matlist_0002EB04[90],
		&matlist_0002EB04[91],
		&matlist_0002EB04[92],
		&matlist_0002EB04[93],
		&matlist_0002EB04[94],
		&matlist_0002EB04[95],
		&matlist_0002EB04[96],
		&matlist_0002EB04[97],
		&matlist_0002EB04[98],
		&matlist_0002EB04[99],
		&matlist_0002EB04[100],
		&matlist_0002EB04[101],
		&matlist_0002EB04[102],
		&matlist_0002EB04[103],
		&matlist_0002EB04[104],
		&matlist_0002EB04[105],
};

NJS_MATERIAL* ObjectBaseAndSpecular[] = {
	//Tornado model 1
	((NJS_MATERIAL*)0x028ADD58),
	((NJS_MATERIAL*)0x028ADD6C),
	((NJS_MATERIAL*)0x028ADD80),
	((NJS_MATERIAL*)0x028ADD94),
	((NJS_MATERIAL*)0x028ADDA8),
	((NJS_MATERIAL*)0x028ADDBC),
	((NJS_MATERIAL*)0x028ADDD0),
	((NJS_MATERIAL*)0x028ADDE4),
	((NJS_MATERIAL*)0x028ADDF8),
	((NJS_MATERIAL*)0x028ADE0C),
	((NJS_MATERIAL*)0x028ADE20),
	((NJS_MATERIAL*)0x028ADE34),
	((NJS_MATERIAL*)0x028ADE48),
	((NJS_MATERIAL*)0x028ADE5C),
	((NJS_MATERIAL*)0x028ADE70),
	((NJS_MATERIAL*)0x028ADE84),
	((NJS_MATERIAL*)0x028ADE98),
	((NJS_MATERIAL*)0x028ADEAC),
	((NJS_MATERIAL*)0x028ADEC0),
	((NJS_MATERIAL*)0x028ADED4),
	((NJS_MATERIAL*)0x028ADEE8),
	((NJS_MATERIAL*)0x028ADEFC),
	((NJS_MATERIAL*)0x028ADF10),
	((NJS_MATERIAL*)0x028ADF24),
	((NJS_MATERIAL*)0x028ADF38),
	((NJS_MATERIAL*)0x028ADF4C),
	((NJS_MATERIAL*)0x028ADF60),
	((NJS_MATERIAL*)0x028ADF74),
	((NJS_MATERIAL*)0x028ADF88),
	((NJS_MATERIAL*)0x028ADF9C),
	((NJS_MATERIAL*)0x028ADFB0),
	((NJS_MATERIAL*)0x028ADFC4),
	((NJS_MATERIAL*)0x028ADFD8),
	((NJS_MATERIAL*)0x028ADFEC),
	((NJS_MATERIAL*)0x028AE000),
	((NJS_MATERIAL*)0x028AE014),
	((NJS_MATERIAL*)0x028AE028),
	((NJS_MATERIAL*)0x028AE03C),
	((NJS_MATERIAL*)0x028AE050),
	((NJS_MATERIAL*)0x028AE064),
	((NJS_MATERIAL*)0x028AD118),
	((NJS_MATERIAL*)0x028AD12C),
	//Tornado 1 hit
	((NJS_MATERIAL*)0x0291DAB0),
	((NJS_MATERIAL*)0x0291DAC4),
	((NJS_MATERIAL*)0x0291DAD8),
	((NJS_MATERIAL*)0x0291DAEC),
	((NJS_MATERIAL*)0x0291DB00),
	((NJS_MATERIAL*)0x0291DB14),
	((NJS_MATERIAL*)0x0291DB28),
	((NJS_MATERIAL*)0x0291DB3C),
	((NJS_MATERIAL*)0x0291DB50),
	((NJS_MATERIAL*)0x0291DB64),
	((NJS_MATERIAL*)0x0291DB78),
	((NJS_MATERIAL*)0x0291DB8C),
	((NJS_MATERIAL*)0x0291DBA0),
	((NJS_MATERIAL*)0x0291DBB4),
	((NJS_MATERIAL*)0x0291DBC8),
	((NJS_MATERIAL*)0x0291DBDC),
	((NJS_MATERIAL*)0x0291DBF0),
	((NJS_MATERIAL*)0x0291DC04),
	((NJS_MATERIAL*)0x0291DC18),
	((NJS_MATERIAL*)0x0291DC2C),
	((NJS_MATERIAL*)0x0291DC40),
	((NJS_MATERIAL*)0x0291DC54),
	((NJS_MATERIAL*)0x0291DC68),
	((NJS_MATERIAL*)0x0291DC7C),
	((NJS_MATERIAL*)0x0291DC90),
	((NJS_MATERIAL*)0x0291DCA4),
	((NJS_MATERIAL*)0x0291DCB8),
	((NJS_MATERIAL*)0x0291DCCC),
	((NJS_MATERIAL*)0x0291DCE0),
	((NJS_MATERIAL*)0x0291DCF4),
	((NJS_MATERIAL*)0x0291DD08),
	((NJS_MATERIAL*)0x0291C540),
	((NJS_MATERIAL*)0x0291C554),
	((NJS_MATERIAL*)0x0291C568),
	((NJS_MATERIAL*)0x0291C57C),
	((NJS_MATERIAL*)0x0291C590),
	((NJS_MATERIAL*)0x0291C5A4),
	((NJS_MATERIAL*)0x0291C5B8),
	((NJS_MATERIAL*)0x0291C5CC),
	((NJS_MATERIAL*)0x0291C5E0),
	((NJS_MATERIAL*)0x0291C5F4),
	((NJS_MATERIAL*)0x0291C608),
	((NJS_MATERIAL*)0x0291C61C),
	((NJS_MATERIAL*)0x0291C630),
	((NJS_MATERIAL*)0x0291C644),
	((NJS_MATERIAL*)0x0291C658),
	((NJS_MATERIAL*)0x0291C66C),
	((NJS_MATERIAL*)0x0291C680),
	((NJS_MATERIAL*)0x0291C694),
	((NJS_MATERIAL*)0x0291C6A8),
	((NJS_MATERIAL*)0x0291C6BC),
	((NJS_MATERIAL*)0x0291C6D0),
	((NJS_MATERIAL*)0x0291C6E4),
	((NJS_MATERIAL*)0x0291C6F8),
	((NJS_MATERIAL*)0x0291C70C),
	((NJS_MATERIAL*)0x0291C720),
	((NJS_MATERIAL*)0x0291C734),
	((NJS_MATERIAL*)0x0291C748),
	((NJS_MATERIAL*)0x0291C75C),
	((NJS_MATERIAL*)0x0291C770),
	((NJS_MATERIAL*)0x0291C784),
	((NJS_MATERIAL*)0x0291C798),
		((NJS_MATERIAL*)0x0291D088),
		((NJS_MATERIAL*)0x0291D09C),
		((NJS_MATERIAL*)0x0291D0B0),
		((NJS_MATERIAL*)0x0291D0C4),
		((NJS_MATERIAL*)0x0291D0D8),
		((NJS_MATERIAL*)0x0291D0EC),
		((NJS_MATERIAL*)0x0291D100),
		((NJS_MATERIAL*)0x0291D114),
		((NJS_MATERIAL*)0x0291D128),
		((NJS_MATERIAL*)0x0291D13C),
		((NJS_MATERIAL*)0x0291D150),
		((NJS_MATERIAL*)0x0291D164),
		((NJS_MATERIAL*)0x0291D178),
		((NJS_MATERIAL*)0x0291D18C),
		((NJS_MATERIAL*)0x0291D1A0),
		((NJS_MATERIAL*)0x0291D1B4),
		((NJS_MATERIAL*)0x0291D1C8),
		((NJS_MATERIAL*)0x0291D1DC),
		((NJS_MATERIAL*)0x0291D1F0),
		((NJS_MATERIAL*)0x0291D204),
		((NJS_MATERIAL*)0x0291D218),
		((NJS_MATERIAL*)0x0291D22C),
		((NJS_MATERIAL*)0x0291D240),
		((NJS_MATERIAL*)0x0291D254),
		((NJS_MATERIAL*)0x0291D268),
		((NJS_MATERIAL*)0x0291D27C),
		((NJS_MATERIAL*)0x0291D290),
		((NJS_MATERIAL*)0x0291D2A4),
		((NJS_MATERIAL*)0x0291D2B8),
		((NJS_MATERIAL*)0x0291D2CC),
		((NJS_MATERIAL*)0x0291D2E0),
		((NJS_MATERIAL*)0x0290BDF8),
		((NJS_MATERIAL*)0x0290BE0C),
		//Tornado 1 hit Sonic shoes
		((NJS_MATERIAL*)0x02916B10),
		((NJS_MATERIAL*)0x02916504),
		((NJS_MATERIAL*)0x02916518),
		((NJS_MATERIAL*)0x02917F68),
		((NJS_MATERIAL*)0x0291796C),
		((NJS_MATERIAL*)0x02917980),
		//Tornado model 2
		((NJS_MATERIAL*)0x027E8AA0),
		((NJS_MATERIAL*)0x027E8AB4),
		((NJS_MATERIAL*)0x027E8AC8),
		((NJS_MATERIAL*)0x027E8ADC),
		((NJS_MATERIAL*)0x027E8AF0),
		((NJS_MATERIAL*)0x027E8B04),
		((NJS_MATERIAL*)0x027E8B18),
		((NJS_MATERIAL*)0x027E8B2C),
		((NJS_MATERIAL*)0x027E8B40),
		((NJS_MATERIAL*)0x027E8B54),
		((NJS_MATERIAL*)0x027E8B68),
		((NJS_MATERIAL*)0x027E8B7C),
		((NJS_MATERIAL*)0x027E8B90),
		((NJS_MATERIAL*)0x027E8BA4),
		((NJS_MATERIAL*)0x027E8BB8),
		((NJS_MATERIAL*)0x027E8BCC),
		((NJS_MATERIAL*)0x027E8BE0),
		((NJS_MATERIAL*)0x027E8BF4),
		((NJS_MATERIAL*)0x027E8C08),
		((NJS_MATERIAL*)0x027E8C1C),
		((NJS_MATERIAL*)0x027E8C30),
		((NJS_MATERIAL*)0x027E8C44),
		((NJS_MATERIAL*)0x027E8C58),
		((NJS_MATERIAL*)0x027E82D8),
		((NJS_MATERIAL*)0x027E82EC),
		((NJS_MATERIAL*)0x027D793C),
		((NJS_MATERIAL*)0x027D7950),
		((NJS_MATERIAL*)0x027D7964),
		((NJS_MATERIAL*)0x027D8038),
		((NJS_MATERIAL*)0x027D804C),
		((NJS_MATERIAL*)0x027D8060),
		((NJS_MATERIAL*)0x027D8074),
		((NJS_MATERIAL*)0x027D8088),
		((NJS_MATERIAL*)0x027D809C),
		((NJS_MATERIAL*)0x027D80B0),
		((NJS_MATERIAL*)0x027D80C4),
		//Tornado 2 transformed
		((NJS_MATERIAL*)0x02809E78),
		((NJS_MATERIAL*)0x02809E8C),
		((NJS_MATERIAL*)0x02809EA0),
		((NJS_MATERIAL*)0x02809EB4),
		((NJS_MATERIAL*)0x02809EC8),
		((NJS_MATERIAL*)0x02809EDC),
		((NJS_MATERIAL*)0x02809EF0),
		((NJS_MATERIAL*)0x02809F04),
		((NJS_MATERIAL*)0x02809F18),
		((NJS_MATERIAL*)0x02809F2C),
		((NJS_MATERIAL*)0x02809F40),
		((NJS_MATERIAL*)0x02809F54),
		((NJS_MATERIAL*)0x02809F68),
		((NJS_MATERIAL*)0x02809F7C),
		((NJS_MATERIAL*)0x02809F90),
		((NJS_MATERIAL*)0x02809FA4),
		((NJS_MATERIAL*)0x02809FB8),
		((NJS_MATERIAL*)0x02809FCC),
		((NJS_MATERIAL*)0x028097A0),
		((NJS_MATERIAL*)0x028097B4),
		((NJS_MATERIAL*)0x028097C8),
		((NJS_MATERIAL*)0x028097DC),
		((NJS_MATERIAL*)0x028092C0),
};

bool ForceObjectorLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	if (material->attrflags & NJD_FLAG_IGNORE_SPECULAR) set_specular(1, false); else set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

bool ForceObjectBaseAndSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(3, false);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

const char* __cdecl SetPLZ0X(int level, int act)
{
	if (level == 35)
	{
		return plz0xbin.c_str();
	}
	else { return nullptr; }
}

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
extern "C" __declspec(dllexport) void cdecl Init(const char *path)
{
	plz0xbin = path;
	plz0xbin.append("\\system\\PL_Z0X.BIN");
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
	{
		typedef const char* (__cdecl* lantern_load_cb)(int level, int act);
		pl_load_register(SetPLZ0X);
		material_register(ObjectBaseAndSpecular, LengthOfArray(ObjectBaseAndSpecular), &ForceObjectBaseAndSpecular);
//		material_register(LevelSpecular, LengthOfArray(LevelSpecular), &ForceLevelSpecular);
		material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
	}
	//Tornado hit specular
	((NJS_OBJECT*)0x02916F9C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x02916ADC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x02918404)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x02917F34)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;


	SkyChase1_SkyboxScaleX = 5.0f;
	SkyChase1_SkyboxScaleY = 5.0f;
	SkyChase1_SkyboxScaleZ = 5.0f;
	WriteData((char*)0x0062751B, 0x00, 1); //Force Tornado light type
	WriteData((char*)0x0062AC1F, 0x00, 1); //Force Tornado light type (transformation cutscene)
	*(NJS_OBJECT *)0x02982F44 = object_0003FA40; //Egg Carrier model
	*(NJS_OBJECT *)0x298A894 = object_00047110; //Hodai
	*(NJS_OBJECT *)0x2941B2C = object_0001342C; //Kirai
	*(NJS_OBJECT *)0x017424DC = object_0006EA40; //Sand Hill ramp
	((NJS_ACTION*)0x28E596C)->object = &object_0009153C; //Beam in Act 1
	((NJS_ACTION*)0x2996C74)->object = &object_0004AEE0; //Beam in Act 2
	*(NJS_OBJECT *)0x028E2C88 = object_0009153C; //Beam in Act 1
	*(NJS_OBJECT *)0x0298E7D0 = object_0004AEE0; //Beam in Act 2
	for (int i = 0; i < 3; i++)
	{
		FogData_SandHill[i].Color = 0xFFAAAA8C;
	}
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };