#pragma once
// IWYU pragma private; include "GlobalNamespace/ScatterFrequencyMultiplierData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ScatterFrequencyMultiplierData)
namespace GlobalNamespace {
class AudioScatterContainer;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
struct ScatterFrequencyMultiplierData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScatterFrequencyMultiplierData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScatterFrequencyMultiplierData, "", "ScatterFrequencyMultiplierData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ScatterFrequencyMultiplierData
struct CORDL_TYPE ScatterFrequencyMultiplierData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScatterFrequencyMultiplierData() ;

// Ctor Parameters [CppParam { name: "ScatterContainer", ty: "::UnityW<::GlobalNamespace::AudioScatterContainer>", modifiers: "", def_value: None }, CppParam { name: "Curve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: None }, CppParam { name: "LPMin", ty: "float_t", modifiers: "", def_value: None }]
constexpr ScatterFrequencyMultiplierData(::UnityW<::GlobalNamespace::AudioScatterContainer>  ScatterContainer, ::UnityEngine::AnimationCurve*  Curve, float_t  LPMin) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4800};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field ScatterContainer, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioScatterContainer>  ScatterContainer;

/// @brief Field Curve, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  Curve;

/// @brief Field LPMin, offset: 0x10, size: 0x4, def value: None
 float_t  LPMin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScatterFrequencyMultiplierData, ScatterContainer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScatterFrequencyMultiplierData, Curve) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScatterFrequencyMultiplierData, LPMin) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScatterFrequencyMultiplierData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
