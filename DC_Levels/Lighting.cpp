#include <SADXModLoader.h>
#include <lanternapi.h>

bool ForceWhiteDiffuse1(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceWhiteDiffuse_Night(NJS_MATERIAL* material, Uint32 flags)
{
	if (GetTimeOfDay() == 2) set_diffuse(3, false); else set_diffuse(0, false);
	use_default_diffuse(true);
	return true;
}

bool NPCModelsFunction(NJS_MATERIAL* material, Uint32 flags)
{
	use_default_diffuse(true);
	if (get_diffuse() != 2) set_diffuse(2, false);
	if (get_specular() == 0) set_specular(2, false);
	if (get_specular() == 1) set_specular(3, false);
	return true;
}

bool ForceCharacterDiffuseAndSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(2, false);
	use_default_diffuse(true);
	return true;
}

bool ForceSecondCharacterSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(3, false);
	use_default_diffuse(true);
	return true;
}

bool ForceObjectSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	set_specular(1, false);
	use_default_diffuse(true);
	return true;
}

bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(0, false);
	set_specular(0, false);
	use_default_diffuse(true);
	return true;
}

bool ForceBlackSpecular(NJS_MATERIAL* material, Uint32 flags)
{
	set_specular(3, false);
	return true;
}
