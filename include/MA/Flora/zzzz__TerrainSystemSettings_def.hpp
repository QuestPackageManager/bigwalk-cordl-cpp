#pragma once
// IWYU pragma private; include "MA/Flora/TerrainSystemSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainSystemSettings)
// Forward declare root types
namespace MA::Flora {
struct TerrainSystemSettings;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TerrainSystemSettings);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainSystemSettings, "MA.Flora", "TerrainSystemSettings");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainSystemSettings
struct CORDL_TYPE TerrainSystemSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TerrainSystemSettings() ;

// Ctor Parameters [CppParam { name: "AllowPerTreeMotionVectors", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AllowPerTreeLightProbes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AllowPerDetailMotionVectors", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "AllowPerDetailLightProbes", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "DetailStreamingDeltaTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DetailUnloadHysteresisSeconds", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DetailPatchLayerBudgetPerFrame", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DetailStructuralInstanceBudgetPerFrame", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainSystemSettings(bool  AllowPerTreeMotionVectors, bool  AllowPerTreeLightProbes, bool  AllowPerDetailMotionVectors, bool  AllowPerDetailLightProbes, float_t  DetailStreamingDeltaTime, float_t  DetailUnloadHysteresisSeconds, int32_t  DetailPatchLayerBudgetPerFrame, int32_t  DetailStructuralInstanceBudgetPerFrame) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13387};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field AllowPerTreeMotionVectors, offset: 0x0, size: 0x1, def value: None
 bool  AllowPerTreeMotionVectors;

/// @brief Field AllowPerTreeLightProbes, offset: 0x1, size: 0x1, def value: None
 bool  AllowPerTreeLightProbes;

/// @brief Field AllowPerDetailMotionVectors, offset: 0x2, size: 0x1, def value: None
 bool  AllowPerDetailMotionVectors;

/// @brief Field AllowPerDetailLightProbes, offset: 0x3, size: 0x1, def value: None
 bool  AllowPerDetailLightProbes;

/// @brief Field DetailStreamingDeltaTime, offset: 0x4, size: 0x4, def value: None
 float_t  DetailStreamingDeltaTime;

/// @brief Field DetailUnloadHysteresisSeconds, offset: 0x8, size: 0x4, def value: None
 float_t  DetailUnloadHysteresisSeconds;

/// @brief Field DetailPatchLayerBudgetPerFrame, offset: 0xc, size: 0x4, def value: None
 int32_t  DetailPatchLayerBudgetPerFrame;

/// @brief Field DetailStructuralInstanceBudgetPerFrame, offset: 0x10, size: 0x4, def value: None
 int32_t  DetailStructuralInstanceBudgetPerFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainSystemSettings, AllowPerTreeMotionVectors) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSystemSettings, AllowPerTreeLightProbes) == 0x1, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSystemSettings, AllowPerDetailMotionVectors) == 0x2, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSystemSettings, AllowPerDetailLightProbes) == 0x3, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSystemSettings, DetailStreamingDeltaTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSystemSettings, DetailUnloadHysteresisSeconds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSystemSettings, DetailPatchLayerBudgetPerFrame) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSystemSettings, DetailStructuralInstanceBudgetPerFrame) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainSystemSettings) == 0x14, "Size mismatch!");

} // namespace end def MA::Flora
