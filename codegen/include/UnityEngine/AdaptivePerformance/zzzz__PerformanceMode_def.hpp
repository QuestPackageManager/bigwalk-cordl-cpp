#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/PerformanceMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceMode)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct PerformanceMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::PerformanceMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::PerformanceMode, "UnityEngine.AdaptivePerformance", "PerformanceMode");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.PerformanceMode
struct CORDL_TYPE PerformanceMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PerformanceMode_Unwrapped
enum struct __PerformanceMode_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Standard = static_cast<int32_t>(0x1),
__E_Optimize = static_cast<int32_t>(0x2),
__E_CPU = static_cast<int32_t>(0x3),
__E_GPU = static_cast<int32_t>(0x4),
__E_Battery = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PerformanceMode_Unwrapped () const noexcept {
return static_cast<__PerformanceMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PerformanceMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PerformanceMode(int32_t  value__) noexcept;

/// @brief Field Battery value: I32(5)
static ::UnityEngine::AdaptivePerformance::PerformanceMode const Battery;

/// @brief Field CPU value: I32(3)
static ::UnityEngine::AdaptivePerformance::PerformanceMode const CPU;

/// @brief Field GPU value: I32(4)
static ::UnityEngine::AdaptivePerformance::PerformanceMode const GPU;

/// @brief Field Optimize value: I32(2)
static ::UnityEngine::AdaptivePerformance::PerformanceMode const Optimize;

/// @brief Field Standard value: I32(1)
static ::UnityEngine::AdaptivePerformance::PerformanceMode const Standard;

/// @brief Field Unknown value: I32(0)
static ::UnityEngine::AdaptivePerformance::PerformanceMode const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19420};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::PerformanceMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::PerformanceMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
