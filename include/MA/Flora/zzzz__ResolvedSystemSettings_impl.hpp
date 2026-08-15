#pragma once
// IWYU pragma private; include "MA/Flora/ResolvedSystemSettings.hpp"
#include "MA/Flora/zzzz__TerrainSystemSettings_impl.hpp"
#include "MA/Flora/zzzz__ResolvedSystemSettings_def.hpp"
inline void MA::Flora::ResolvedSystemSettings::setStaticF_Default(::MA::Flora::ResolvedSystemSettings  value)  {
::cordl_internals::setStaticField<::MA::Flora::ResolvedSystemSettings, "Default", ::MA::Flora::ResolvedSystemSettings>(std::forward<::MA::Flora::ResolvedSystemSettings>(value));
}
inline ::MA::Flora::ResolvedSystemSettings MA::Flora::ResolvedSystemSettings::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::MA::Flora::ResolvedSystemSettings, "Default", ::MA::Flora::ResolvedSystemSettings>();
}
// Ctor Parameters [CppParam { name: "IsRenderingEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsGPUOcclusionCullingEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsDensityCullingEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsLegacyLightProbesEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AllowPerObjectMotionVectors", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "AllowAdditionalLightShadows", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsTerrainFoliageEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "IsAutoRegisterTerrainsEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Terrain", ty: "::MA::Flora::TerrainSystemSettings", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::ResolvedSystemSettings::ResolvedSystemSettings(bool  IsRenderingEnabled, bool  IsGPUOcclusionCullingEnabled, bool  IsDensityCullingEnabled, bool  IsLegacyLightProbesEnabled, bool  AllowPerObjectMotionVectors, bool  AllowAdditionalLightShadows, bool  IsTerrainFoliageEnabled, bool  IsAutoRegisterTerrainsEnabled, ::MA::Flora::TerrainSystemSettings  Terrain) noexcept  {
this->IsRenderingEnabled = IsRenderingEnabled;
this->IsGPUOcclusionCullingEnabled = IsGPUOcclusionCullingEnabled;
this->IsDensityCullingEnabled = IsDensityCullingEnabled;
this->IsLegacyLightProbesEnabled = IsLegacyLightProbesEnabled;
this->AllowPerObjectMotionVectors = AllowPerObjectMotionVectors;
this->AllowAdditionalLightShadows = AllowAdditionalLightShadows;
this->IsTerrainFoliageEnabled = IsTerrainFoliageEnabled;
this->IsAutoRegisterTerrainsEnabled = IsAutoRegisterTerrainsEnabled;
this->Terrain = Terrain;
}
// Ctor Parameters []
constexpr ::MA::Flora::ResolvedSystemSettings::ResolvedSystemSettings()   {
}
