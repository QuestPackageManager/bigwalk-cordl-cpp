#pragma once
// IWYU pragma private; include "GlobalNamespace/AmbienceVegetationScalerConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AmbienceVegetationScalerConfig)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct AmbienceVegetationScalerConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AmbienceVegetationScalerConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AmbienceVegetationScalerConfig, "", "AmbienceVegetationScalerConfig");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AmbienceVegetationScalerConfig
struct CORDL_TYPE AmbienceVegetationScalerConfig {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AmbienceVegetationScalerConfig() ;

// Ctor Parameters [CppParam { name: "VegetationPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None }, CppParam { name: "IsDetail", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Importance", ty: "float_t", modifiers: "", def_value: None }]
constexpr AmbienceVegetationScalerConfig(::UnityW<::UnityEngine::GameObject>  VegetationPrefab, bool  IsDetail, float_t  Importance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4798};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field VegetationPrefab, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  VegetationPrefab;

/// @brief Field IsDetail, offset: 0x8, size: 0x1, def value: None
 bool  IsDetail;

/// @brief Field Importance, offset: 0xc, size: 0x4, def value: None
 float_t  Importance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AmbienceVegetationScalerConfig, VegetationPrefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceVegetationScalerConfig, IsDetail) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AmbienceVegetationScalerConfig, Importance) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AmbienceVegetationScalerConfig) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
