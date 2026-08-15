#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceControlMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceControlMode)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct PerformanceControlMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::PerformanceControlMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceControlMode, "UnityEngine.AdaptivePerformance", "PerformanceControlMode");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.PerformanceControlMode
struct CORDL_TYPE PerformanceControlMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PerformanceControlMode_Unwrapped
enum struct __PerformanceControlMode_Unwrapped : int32_t {
__E_Automatic = static_cast<int32_t>(0x0),
__E_Manual = static_cast<int32_t>(0x1),
__E_System = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PerformanceControlMode_Unwrapped () const noexcept {
return static_cast<__PerformanceControlMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PerformanceControlMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PerformanceControlMode(int32_t  value__) noexcept;

/// @brief Field Automatic value: I32(0)
static ::UnityEngine::AdaptivePerformance::PerformanceControlMode const Automatic;

/// @brief Field Manual value: I32(1)
static ::UnityEngine::AdaptivePerformance::PerformanceControlMode const Manual;

/// @brief Field System value: I32(2)
static ::UnityEngine::AdaptivePerformance::PerformanceControlMode const System;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19399};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceControlMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceControlMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
