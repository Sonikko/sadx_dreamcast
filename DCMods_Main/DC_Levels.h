#pragma once

#include <stdlib.h>
#include <stdio.h>
DataPointer(HWND, WindowHandle, 0x03D0FD30);

void DisableSADXWaterFog();
void Branding_Init(const char *path, const HelperFunctions &helperFunctions);
void Branding_OnFrame();
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
void WindyValley_Init(const char *path, const HelperFunctions &helperFunctions);
void WindyValley_OnFrame();
void TwinklePark_Init(const char *path, const HelperFunctions &helperFunctions);
void TwinklePark_OnFrame();
void SpeedHighway_Init(const char *path, const HelperFunctions &helperFunctions);
void SpeedHighway_OnFrame();
void RedMountain_Init(const char *path, const HelperFunctions &helperFunctions);
void RedMountain_OnFrame();
void SkyDeck_Init(const char *path, const HelperFunctions &helperFunctions);
void SkyDeck_OnFrame();
void LostWorld_Init(const char *path, const HelperFunctions &helperFunctions);
void LostWorld_OnFrame();
void IceCap_Init(const char *path, const HelperFunctions &helperFunctions);
void IceCap_OnFrame();
void Casinopolis_Init(const char *path, const HelperFunctions &helperFunctions);
void Casinopolis_OnFrame();
void FinalEgg_Init(const char *path, const HelperFunctions &helperFunctions);
void FinalEgg_OnFrame();
void HotShelter_Init(const char *path, const HelperFunctions &helperFunctions);
void HotShelter_OnFrame();
void Subgames_Init(const char *path, const HelperFunctions &helperFunctions);
//void Subgames_OnFrame();
void ChaoGardens_Init(const char *path, const HelperFunctions &helperFunctions);
void ChaoGardens_OnFrame();
void General_Init(const char *path, const HelperFunctions &helperFunctions);
void General_OnFrame();

bool ForceWhiteDiffuse1(NJS_MATERIAL* material, Uint32 flags);
bool ForceWhiteDiffuse3_Night(NJS_MATERIAL* material, Uint32 flags);
bool ForceWhiteDiffuse3Specular1(NJS_MATERIAL* material, Uint32 flags);
bool NPCModelsFunction(NJS_MATERIAL* material, Uint32 flags);
bool ChaosPuddleFunc(NJS_MATERIAL* material, Uint32 flags);
bool Chaos2Function(NJS_MATERIAL* material, Uint32 flags);

bool ForceDiffuse0Specular0(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse0Specular1(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse0Specular0or1(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse2Specular2(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse2Specular3(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse4Specular5(NJS_MATERIAL* material, Uint32 flags);

#define ReplacePVM(a) _snprintf_s(pathbuf, MAX_PATH, "%s\\system\\" a "_DC.PVM", path); helperFunctions.ReplaceFile("system\\" a ".PVM", pathbuf);
#define ReplacePVR(a) _snprintf_s(pathbuf, MAX_PATH, "%s\\system\\" a "_DC.PVR", path); helperFunctions.ReplaceFile("system\\" a ".PVR", pathbuf);
#define ReplacePVMX(a) _snprintf_s(pathbuf, MAX_PATH, "%s\\textures\\" a "_DC.PVMX", path); helperFunctions.ReplaceFile("system\\" a ".PVM", pathbuf);
#define ReplacePVMX_SADXStyleWater(a) _snprintf_s(pathbuf, MAX_PATH, "%s\\textures\\" a "W.PVMX", path); helperFunctions.ReplaceFile("system\\" a ".PVM", pathbuf);