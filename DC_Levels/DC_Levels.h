#pragma once

void ADV00_Init(const char *path, const HelperFunctions &helperFunctions);
void ADV00_OnFrame();
void ADV01_Init(const char *path, const HelperFunctions &helperFunctions);
void ADV01_OnFrame();
void ADV02_Init(const char *path, const HelperFunctions &helperFunctions);
void ADV02_OnFrame();
void ADV03_Init(const char *path, const HelperFunctions &helperFunctions);
void ADV03_OnFrame();
void Bosses_Init(const char *path, const HelperFunctions &helperFunctions);
void Bosses_OnFrame();
void EmeraldCoast_Init(const char *path, const HelperFunctions &helperFunctions);
void EmeraldCoast_OnFrame();
void DisableSADXWaterFog();

bool ForceWhiteDiffuse1(NJS_MATERIAL* material, Uint32 flags);
bool ForceWhiteDiffuse_Night(NJS_MATERIAL* material, Uint32 flags);
bool NPCModelsFunction(NJS_MATERIAL* material, Uint32 flags);
bool ForceCharacterDiffuseAndSpecular(NJS_MATERIAL* material, Uint32 flags);
bool ForceSecondCharacterSpecular(NJS_MATERIAL* material, Uint32 flags);
bool ForceObjectSpecular(NJS_MATERIAL* material, Uint32 flags);
bool ForceLevelSpecular(NJS_MATERIAL* material, Uint32 flags);