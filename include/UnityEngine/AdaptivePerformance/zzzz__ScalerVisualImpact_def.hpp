#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/ScalerVisualImpact.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScalerVisualImpact)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct ScalerVisualImpact;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::ScalerVisualImpact);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::ScalerVisualImpact, "UnityEngine.AdaptivePerformance", "ScalerVisualImpact");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.ScalerVisualImpact
struct CORDL_TYPE ScalerVisualImpact {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScalerVisualImpact_Unwrapped
enum struct __ScalerVisualImpact_Unwrapped : int32_t {
__E_Low = static_cast<int32_t>(0x0),
__E_Medium = static_cast<int32_t>(0x1),
__E_High = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScalerVisualImpact_Unwrapped () const noexcept {
return static_cast<__ScalerVisualImpact_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScalerVisualImpact() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScalerVisualImpact(int32_t  value__) noexcept;

/// @brief Field High value: I32(2)
static ::UnityEngine::AdaptivePerformance::ScalerVisualImpact const High;

/// @brief Field Low value: I32(0)
static ::UnityEngine::AdaptivePerformance::ScalerVisualImpact const Low;

/// @brief Field Medium value: I32(1)
static ::UnityEngine::AdaptivePerformance::ScalerVisualImpact const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19406};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::ScalerVisualImpact, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::ScalerVisualImpact) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
