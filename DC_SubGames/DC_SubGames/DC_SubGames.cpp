#include <SADXModLoader.h>
#include "SandHill.h"
#include <lanternapi.h>
#include <math.h>
#include "TwinkleCircuit.h"
#include "SkyChaseModels.h"

DataArray(FogData, FogData_SandHill, 0x0173BB74, 3);
DataArray(FogData, FogData_HedgehogHammer, 0x027C69C4, 3);
DataArray(SkyboxScale, SkyboxScale_SkyChase1, 0x027D6CE0, 3);
DataArray(DrawDistance, DrawDist_SkyChase1, 0x027D6D58, 3);
DataPointer(float, CurrentDrawDistance, 0x03ABDC74);
DataPointer(float, SomeDepthThing, 0x03ABD9C0);

static float float_one = 1.0f;
static float float_tornadospeed = 1.0f;
static float float_targetsize = 1;
static float float_reticlespeedmultiplier = 2.0f;
static float HorizontalResolution_float = 640.0f;
static float VerticalResolution_float = 480.0f;
static float VerticalResolutionHalf_float = 240.0f;
static double SkyChaseSkyRotationMultiplier = -0.5f;
static float SkyChaseLimit_Right = 560.0f;
static float SkyChaseLimit_Left = 80.0f;
static float SkyChaseLimit_Top = 400.0f;
static float SkyChaseLimit_Bottom = 80.0f;
static float widescreenthing = 103.0f;

PointerInfo pointers[] = {
	ptrdecl(0x7D2051, &landtable_00002DEC),
	ptrdecl(0x7D205B, &landtable_00001A3C)
};

NJS_MATERIAL* LevelSpecular[] = {
	//Tornado 2 transformation cutscene
	((NJS_MATERIAL*)0x0285F230),
	((NJS_MATERIAL*)0x0285F028),
	((NJS_MATERIAL*)0x0285EC58),
	((NJS_MATERIAL*)0x0285EC6C),
	((NJS_MATERIAL*)0x0285EA5C),
	((NJS_MATERIAL*)0x0285E828),
	((NJS_MATERIAL*)0x0285E638),
	((NJS_MATERIAL*)0x0285E278),
	((NJS_MATERIAL*)0x0285E28C),
	((NJS_MATERIAL*)0x0285E06C),
	((NJS_MATERIAL*)0x0285BC18),
	((NJS_MATERIAL*)0x0285BC2C),
	((NJS_MATERIAL*)0x0285BC40),
	((NJS_MATERIAL*)0x0285BC54),
	((NJS_MATERIAL*)0x0285B9B0),
	((NJS_MATERIAL*)0x0285B9C4),
	((NJS_MATERIAL*)0x0285CF20),
	((NJS_MATERIAL*)0x0285EE2C),
	((NJS_MATERIAL*)0x0285E44C),
	((NJS_MATERIAL*)0x028535B8),
	((NJS_MATERIAL*)0x028535CC),
	((NJS_MATERIAL*)0x028535E0),
	((NJS_MATERIAL*)0x028535F4),
	((NJS_MATERIAL*)0x02853608),
	((NJS_MATERIAL*)0x02852FE0),
	((NJS_MATERIAL*)0x028529E4),
	((NJS_MATERIAL*)0x028529F8),
	((NJS_MATERIAL*)0x028522E0),
	((NJS_MATERIAL*)0x028522F4),
	((NJS_MATERIAL*)0x02852308),
	((NJS_MATERIAL*)0x0285214C),
	((NJS_MATERIAL*)0x02851B88),
	((NJS_MATERIAL*)0x0285157C),
	((NJS_MATERIAL*)0x02851590),
	((NJS_MATERIAL*)0x02850E90),
	((NJS_MATERIAL*)0x02850EA4),
	((NJS_MATERIAL*)0x02850EB8),
	((NJS_MATERIAL*)0x02850CFC),
	((NJS_MATERIAL*)0x02850158),
	((NJS_MATERIAL*)0x0285016C),
	((NJS_MATERIAL*)0x0284FAD8),
	((NJS_MATERIAL*)0x0284FAEC),
	((NJS_MATERIAL*)0x0284FB00),
	((NJS_MATERIAL*)0x0284F92C),
	((NJS_MATERIAL*)0x0284ED88),
	((NJS_MATERIAL*)0x0284ED9C),
	((NJS_MATERIAL*)0x0284E708),
	((NJS_MATERIAL*)0x0284E71C),
	((NJS_MATERIAL*)0x0284E730),
	((NJS_MATERIAL*)0x0284E560),
	((NJS_MATERIAL*)0x0284E330),
	((NJS_MATERIAL*)0x0284D738),
	((NJS_MATERIAL*)0x0284D74C),
	((NJS_MATERIAL*)0x0284A340),
	((NJS_MATERIAL*)0x0284A354),
	((NJS_MATERIAL*)0x0284A368),
	((NJS_MATERIAL*)0x0284A37C),
	((NJS_MATERIAL*)0x028497B8),
	((NJS_MATERIAL*)0x028491A0),
	((NJS_MATERIAL*)0x028491B4),
	((NJS_MATERIAL*)0x02848FF4),
	((NJS_MATERIAL*)0x02848490),
	((NJS_MATERIAL*)0x02847E78),
	((NJS_MATERIAL*)0x02847E8C),
	((NJS_MATERIAL*)0x02847CCC),
	((NJS_MATERIAL*)0x028472DC),
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
	//Tornado 2 transformation cutscene
	((NJS_MATERIAL*)0x028634D8),
	((NJS_MATERIAL*)0x028634EC),
	((NJS_MATERIAL*)0x02863500),
	((NJS_MATERIAL*)0x02863514),
	((NJS_MATERIAL*)0x02863528),
	((NJS_MATERIAL*)0x0286353C),
	((NJS_MATERIAL*)0x02862948),
	((NJS_MATERIAL*)0x0286295C),
	((NJS_MATERIAL*)0x02862970),
	((NJS_MATERIAL*)0x02862984),
	((NJS_MATERIAL*)0x028626C0),
	((NJS_MATERIAL*)0x028626D4),
	((NJS_MATERIAL*)0x02862428),
	((NJS_MATERIAL*)0x0286243C),
	((NJS_MATERIAL*)0x02862280),
	((NJS_MATERIAL*)0x028620F0),
	((NJS_MATERIAL*)0x02861F30),
	((NJS_MATERIAL*)0x02861C98),
	((NJS_MATERIAL*)0x02861CAC),
	((NJS_MATERIAL*)0x02861AF0),
	((NJS_MATERIAL*)0x02861960),
	((NJS_MATERIAL*)0x028616D8),
	((NJS_MATERIAL*)0x028616EC),
	((NJS_MATERIAL*)0x02861420),
	((NJS_MATERIAL*)0x02861434),
	((NJS_MATERIAL*)0x02860E40),
	((NJS_MATERIAL*)0x02860E54),
	((NJS_MATERIAL*)0x02860E68),
	((NJS_MATERIAL*)0x02860CB0),
	((NJS_MATERIAL*)0x02860B20),
	((NJS_MATERIAL*)0x02860538),
	((NJS_MATERIAL*)0x0286054C),
	((NJS_MATERIAL*)0x02860560),
	((NJS_MATERIAL*)0x02860574),
	((NJS_MATERIAL*)0x02860588),
	((NJS_MATERIAL*)0x02860428),
	((NJS_MATERIAL*)0x02860070),
	((NJS_MATERIAL*)0x02860084),
	((NJS_MATERIAL*)0x02860098),
	((NJS_MATERIAL*)0x0285FCB4),
	((NJS_MATERIAL*)0x0285FCC8),
	((NJS_MATERIAL*)0x0285FCDC),
	((NJS_MATERIAL*)0x0285FB78),
	((NJS_MATERIAL*)0x0285F804),
	((NJS_MATERIAL*)0x0285F818),
	((NJS_MATERIAL*)0x0285F468),
	((NJS_MATERIAL*)0x0285F47C),
	((NJS_MATERIAL*)0x0285F490),
	((NJS_MATERIAL*)0x0285F4A4),
	((NJS_MATERIAL*)0x0285DEB0),
	((NJS_MATERIAL*)0x0285DD28),
	((NJS_MATERIAL*)0x0285DBA0),
	((NJS_MATERIAL*)0x0285DA18),
	((NJS_MATERIAL*)0x0285D890),
	((NJS_MATERIAL*)0x0285D708),
	((NJS_MATERIAL*)0x0285D580),
	((NJS_MATERIAL*)0x0285D3F8),
	((NJS_MATERIAL*)0x0285D270),
	((NJS_MATERIAL*)0x0285C8B0),
	((NJS_MATERIAL*)0x0285C8C4),
	((NJS_MATERIAL*)0x0285C8D8),
	((NJS_MATERIAL*)0x0285C8EC),
	((NJS_MATERIAL*)0x0285C6E0),
	((NJS_MATERIAL*)0x0285C3F8),
	((NJS_MATERIAL*)0x0285C40C),
	((NJS_MATERIAL*)0x0285C420),
	((NJS_MATERIAL*)0x0285B550),
	((NJS_MATERIAL*)0x0285B564),
	((NJS_MATERIAL*)0x0285B268),
	((NJS_MATERIAL*)0x0285ADA0),
	((NJS_MATERIAL*)0x0285ADB4),
	((NJS_MATERIAL*)0x0285ADC8),
	((NJS_MATERIAL*)0x0285ADDC),
	((NJS_MATERIAL*)0x0285AA48),
	((NJS_MATERIAL*)0x0285AA5C),
	((NJS_MATERIAL*)0x0285A820),
	((NJS_MATERIAL*)0x0285A5F4),
	((NJS_MATERIAL*)0x0285A448),
	((NJS_MATERIAL*)0x0285A21C),
	((NJS_MATERIAL*)0x02859FB4),
	((NJS_MATERIAL*)0x02859FC8),
	((NJS_MATERIAL*)0x02859C5C),
	((NJS_MATERIAL*)0x02859C70),
	((NJS_MATERIAL*)0x02859AB4),
	((NJS_MATERIAL*)0x02859898),
	((NJS_MATERIAL*)0x0285965C),
	((NJS_MATERIAL*)0x02859484),
	((NJS_MATERIAL*)0x02859268),
	((NJS_MATERIAL*)0x02858D90),
	((NJS_MATERIAL*)0x02858DA4),
	((NJS_MATERIAL*)0x02858DB8),
	((NJS_MATERIAL*)0x02858DCC),
	((NJS_MATERIAL*)0x02858A48),
	((NJS_MATERIAL*)0x02858A5C),
	((NJS_MATERIAL*)0x02858820),
	((NJS_MATERIAL*)0x028585E4),
	((NJS_MATERIAL*)0x02858438),
	((NJS_MATERIAL*)0x0285820C),
	((NJS_MATERIAL*)0x02857FA4),
	((NJS_MATERIAL*)0x02857FB8),
	((NJS_MATERIAL*)0x02857C4C),
	((NJS_MATERIAL*)0x02857C60),
	((NJS_MATERIAL*)0x02857AA4),
	((NJS_MATERIAL*)0x02857888),
	((NJS_MATERIAL*)0x0285764C),
	((NJS_MATERIAL*)0x02857474),
	((NJS_MATERIAL*)0x02857268),
	((NJS_MATERIAL*)0x028570A4),
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
	((NJS_MATERIAL*)0x027F8CB8),
	((NJS_MATERIAL*)0x027F8CCC),
	((NJS_MATERIAL*)0x027F8CE0),
	((NJS_MATERIAL*)0x027F8CF4),
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

bool ForceObjectBaseAndSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(1, false);
	diffuse_override(true);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

void FixSky1(NJS_OBJECT *a1, float scale)
{
	SomeDepthThing = -12000;
	ProcessModelNode(a1, QueuedModelFlagsB_3, scale);
	SomeDepthThing = 0;
}

void FixSky2(NJS_OBJECT *a1, float scale)
{
	SomeDepthThing = -13000;
	if (CurrentLevel == 36) ProcessModelNode(a1, QueuedModelFlagsB_3, scale);
	else ProcessModelNode(a1, (QueuedModelFlagsB)0, scale);
	SomeDepthThing = 0;
}

void FixSkybox(NJS_OBJECT *a1, float scale)
{
	if (CurrentLevel == 36)
	{
		SomeDepthThing = -10000;
		ProcessModelNode(&object_024E0CD8_2, (QueuedModelFlagsB)0, scale); //Skybox top and middle
		SomeDepthThing = -15000;
		ProcessModelNode(&object_024E0CD8, (QueuedModelFlagsB)0, scale); //Skybox bottom
		SomeDepthThing = 0;
	}
	else
	{
		SomeDepthThing = -30000;
		ProcessModelNode(&object_02418598_2, (QueuedModelFlagsB)0, scale); //Skybox top and middle
		SomeDepthThing = -15000;
		ProcessModelNode(&object_02418598, (QueuedModelFlagsB)0, scale); //Skybox bottom
		SomeDepthThing = 0;
	}
}

void __cdecl TornadoTargetSprite_TargetLock_DisplayX(ObjectMaster *a1)
{
	EntityData1 *v1; // esi
	NJS_POINT2 position; // [esp+4h] [ebp-8h]

	v1 = a1->Data1;	
		if (!MissedFrames && !CheckSkyChaseActionThing())
		{
			njPushMatrix(0);
			njColorBlendingMode(0, NJD_COLOR_BLENDING_ONE);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_ONE);
			SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
			njSetTexture(&TARGET_TEXLIST);
			njProjectScreen(0, &v1->Position, &position);
			*(NJS_POINT2 *)&TornadoTarget_SPRITE.p.x = position;
			TornadoTarget_SPRITE.sy = v1->Scale.y * (VerticalResolution / 480.0f);
			njTextureShadingMode(1);
			if (GameState != 16) njDrawSprite2D_ForcePriority(&TornadoTarget_SPRITE, 2, 1000.0f, NJD_SPRITE_ALPHA | NJD_SPRITE_COLOR);
			njPopMatrix(1u);
			njColorBlendingMode(0, NJD_COLOR_BLENDING_SRCALPHA);
			njColorBlendingMode(NJD_DESTINATION_COLOR, NJD_COLOR_BLENDING_INVSRCALPHA);
			ClampGlobalColorThing_Thing();
			njTextureShadingMode(2);
	}
}

void TornadoTarget_Render(NJS_SPRITE *sp, Int n, Float pri, NJD_SPRITE attr, QueuedModelFlagsB queue_flags)
{
		njTextureShadingMode(1);
		njDrawSprite2D_Queue(sp, n, pri, attr, queue_flags);
		njTextureShadingMode(2);
}

void RenderSkyChaseRocket(NJS_POINT3COL *a1, int texnum, NJD_DRAW n, QueuedModelFlagsB a4)
{
	DrawQueueDepthBias = 20000.0f;
	DrawTriFanThing_Queue(a1, texnum, n, QueuedModelFlagsB_SomeTextureThing);
	DrawQueueDepthBias = 0;
}

void SetSkyChaseRocketColor(float a, float r, float g, float b)
{
	AddConstantAttr(0, NJD_FLAG_IGNORE_LIGHT);
	SetMaterialAndSpriteColor_Float(1.0f, 1.0f, 1.0f, 1.0f);
}

void __cdecl TornadoCalculateCenterPoint(ObjectMaster *a1)
{
	EntityData1 *data1; // eax
	EntityData1 *parent_data1; // ecx
	NJS_VECTOR *position; // esi
	double y; // st7

	data1 = a1->Data1;
	parent_data1 = a1->Parent->Data1;
	position = &data1->Position;
	data1->Position.x = parent_data1->Position.x - (HorizontalResolution_float * 0.5f);
	y = parent_data1->Position.y - (VerticalResolution_float * 0.5f);
	data1->Position.z = 1000.0f * (VerticalResolution_float/480.0f);
	data1->Position.y = y;
	njPushMatrix(0);
	njInvertMatrix(0);
	njCalcPoint(0, position, position);
	njPopMatrix(1u);
}

extern "C" __declspec(dllexport) const PointerList Pointers = { arrayptrandlength(pointers) };
extern "C" __declspec(dllexport) void cdecl Init(const char *path)
{
	HorizontalResolution_float = HorizontalResolution;
	VerticalResolution_float = VerticalResolution;
	VerticalResolutionHalf_float = VerticalResolution_float / 2.0f;
	//Resolution related fixes
	WriteJump((void*)0x628D50, TornadoCalculateCenterPoint); //Calculate center for bullets
	if (HorizontalResolution_float / VerticalResolution_float > 1.4f)
	{
		if (HorizontalResolution_float / VerticalResolution_float > 2.2f) widescreenthing = 240.0f;
		SkyChaseLimit_Left = 80.0f + widescreenthing;
		SkyChaseLimit_Right = 560.0f + widescreenthing;
	}
	WriteData((float**)0x00627F4D, &float_tornadospeed); //Tornado Speed (always 1)
	WriteData((float**)0x00627F60, &float_one); //Horizontal limit
	WriteData((float**)0x00627F72, &float_one); //Vertical limit
	//Hodai fixes
	WriteData((float**)0x0043854D, &HorizontalResolution_float);
	WriteData((float**)0x00438571, &VerticalResolutionHalf_float);
	WriteData((float**)0x0043857F, &VerticalResolutionHalf_float);
	WriteCall((void*)0x0062C764, SetSkyChaseRocketColor);
	WriteCall((void*)0x0062C704, RenderSkyChaseRocket);
	//Sky Chase reticle and multiplier fixes
	float_reticlespeedmultiplier = VerticalResolution / 480.0f;
	float_targetsize = pow(VerticalResolution/15.0f, 2);
	WriteData((float**)0x628AF7, &float_targetsize); //Target size
	WriteData((float**)0x00629472, &float_reticlespeedmultiplier); //Target speed
	//Limits for reticle
	WriteData((float**)0x00628994, &float_reticlespeedmultiplier); //right
	WriteData((float**)0x006289B6, &float_reticlespeedmultiplier); //left
	WriteData((float**)0x006289F1, &float_reticlespeedmultiplier); //top
	WriteData((float**)0x00628A13, &float_reticlespeedmultiplier); //bottom
	WriteData((float**)0x0062899A, &SkyChaseLimit_Right);
	WriteData((float**)0x006289BC, &SkyChaseLimit_Left);
	WriteData((float**)0x006289F7, &SkyChaseLimit_Top);
	WriteData((float**)0x00628A19, &SkyChaseLimit_Bottom);
	//Visual stuff
	WriteCall((void*)0x00629004, TornadoTarget_Render);
	WriteCall((void*)0x00628FE5, TornadoTarget_Render);
	WriteJump((void*)0x00628DB0, TornadoTargetSprite_TargetLock_DisplayX);
	WriteData((double**)0x00627D14, &SkyChaseSkyRotationMultiplier); //Rotate the sky in the opposite direction
	WriteData((float*)0x00628951, VerticalResolution / 480.0f); //Reticle scale X
	WriteData((float*)0x0062895B, VerticalResolution / 480.0f); //Reticle scale Y
	//Sky Chase fixes
	((NJS_OBJECT*)0x028DFD34)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF; //Sky materials in Act 1
	((NJS_OBJECT*)0x028175F4)->basicdxmodel->mats[0].diffuse.color = 0xFFFFFFFF; //Sky materials in Act 1
	SkyboxScale_SkyChase1->Far.x = 4.0f;
	SkyboxScale_SkyChase1->Far.y = 4.0f;
	SkyboxScale_SkyChase1->Far.z = 4.0f;
	SkyboxScale_SkyChase1->Near.x = 4.0f;
	SkyboxScale_SkyChase1->Near.y = 4.0f;
	SkyboxScale_SkyChase1->Near.z = 4.0f;
	SkyboxScale_SkyChase1->Normal.x = 4.0f;
	SkyboxScale_SkyChase1->Normal.y = 4.0f;
	SkyboxScale_SkyChase1->Normal.z = 4.0f;
	WriteCall((void*)0x0062BF35, FixSky1); //Sky piece 1
	WriteCall((void*)0x0062C01D, FixSky2);  //Sky piece 2
	WriteCall((void*)0x0062C161, FixSkybox); //Skybox rendering function for both acts
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");
	if (Lantern != nullptr && GetProcAddress(Lantern, "material_register") != nullptr)
	{
		material_register(ObjectBaseAndSpecular, LengthOfArray(ObjectBaseAndSpecular), &ForceObjectBaseAndSpecular);
		material_register(LevelSpecular, LengthOfArray(LevelSpecular), &ForceLevelSpecular);
		material_register(WhiteDiffuse, LengthOfArray(WhiteDiffuse), &ForceWhiteDiffuse);
	}
	//Tornado hit specular
	((NJS_OBJECT*)0x02916F9C)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x02916ADC)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x02918404)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
	((NJS_OBJECT*)0x02917F34)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
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
		DrawDist_SkyChase1[i].Maximum = -60000.0f;
		FogData_SandHill[i].Color = 0xFFAAAA8C;
		FogData_HedgehogHammer[i].Distance = 16000.0f;
		FogData_HedgehogHammer[i].Layer = 5000.0f;
	}
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };