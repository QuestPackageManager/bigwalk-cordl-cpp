#pragma once
// IWYU pragma private; include "MA/Flora/ResolvedSystemSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__TerrainSystemSettings_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ResolvedSystemSettings)
// Forward declare root types
namespace MA::Flora {
struct ResolvedSystemSettings;
}
// Write type traits
MARK_VAL_T(::MA::Flora::ResolvedSystemSettings);
DEFINE_IL2CPP_CLASS(::MA::Flora::ResolvedSystemSettings, "MA.Flora", "ResolvedSystemSettings");
// Dependencies MA.Flora.TerrainSystemSettings
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.ResolvedSystemSettings
struct CORDL_TYPE ResolvedSystemSettings {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x1c 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::MA::Flora::ResolvedSystemSettings  Default;

static inline ::MA::Flora::ResolvedSystemSettings getStaticF_Default() ;

static inline void setStaticF_Default(::MA::Flora::ResolvedSystemSettings  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ResolvedSystemSettings() ;

// Ctor Parameters [CppParam { name: "IsRenderingEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IsGPUOcclusionCullingEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IsDensityCullingEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IsLegacyLightProbesEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AllowPerObjectMotionVectors", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AllowAdditionalLightShadows", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IsTerrainFoliageEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IsAutoRegisterTerrainsEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Terrain", ty: "::MA::Flora::TerrainSystemSettings", modifiers: "", def_value: None }]
constexpr ResolvedSystemSettings(bool  IsRenderingEnabled, bool  IsGPUOcclusionCullingEnabled, bool  IsDensityCullingEnabled, bool  IsLegacyLightProbesEnabled, bool  AllowPerObjectMotionVectors, bool  AllowAdditionalLightShadows, bool  IsTerrainFoliageEnabled, bool  IsAutoRegisterTerrainsEnabled, ::MA::Flora::TerrainSystemSettings  Terrain) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13303};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field IsRenderingEnabled, offset: 0x0, size: 0x1, def value: None
 bool  IsRenderingEnabled;

/// @brief Field IsGPUOcclusionCullingEnabled, offset: 0x1, size: 0x1, def value: None
 bool  IsGPUOcclusionCullingEnabled;

/// @brief Field IsDensityCullingEnabled, offset: 0x2, size: 0x1, def value: None
 bool  IsDensityCullingEnabled;

/// @brief Field IsLegacyLightProbesEnabled, offset: 0x3, size: 0x1, def value: None
 bool  IsLegacyLightProbesEnabled;

/// @brief Field AllowPerObjectMotionVectors, offset: 0x4, size: 0x1, def value: None
 bool  AllowPerObjectMotionVectors;

/// @brief Field AllowAdditionalLightShadows, offset: 0x5, size: 0x1, def value: None
 bool  AllowAdditionalLightShadows;

/// @brief Field IsTerrainFoliageEnabled, offset: 0x6, size: 0x1, def value: None
 bool  IsTerrainFoliageEnabled;

/// @brief Field IsAutoRegisterTerrainsEnabled, offset: 0x7, size: 0x1, def value: None
 bool  IsAutoRegisterTerrainsEnabled;

/// @brief Field Terrain, offset: 0x8, size: 0x14, def value: None
 ::MA::Flora::TerrainSystemSettings  Terrain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::ResolvedSystemSettings, IsRenderingEnabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ResolvedSystemSettings, IsGPUOcclusionCullingEnabled) == 0x1, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ResolvedSystemSettings, IsDensityCullingEnabled) == 0x2, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ResolvedSystemSettings, IsLegacyLightProbesEnabled) == 0x3, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ResolvedSystemSettings, AllowPerObjectMotionVectors) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ResolvedSystemSettings, AllowAdditionalLightShadows) == 0x5, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ResolvedSystemSettings, IsTerrainFoliageEnabled) == 0x6, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ResolvedSystemSettings, IsAutoRegisterTerrainsEnabled) == 0x7, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::ResolvedSystemSettings, Terrain) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::ResolvedSystemSettings) == 0x1c, "Size mismatch!");

} // namespace end def MA::Flora
