#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/WarningLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WarningLevel)
// Forward declare root types
namespace UnityEngine::AdaptivePerformance {
struct WarningLevel;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AdaptivePerformance::WarningLevel);
DEFINE_IL2CPP_CLASS(::UnityEngine::AdaptivePerformance::WarningLevel, "UnityEngine.AdaptivePerformance", "WarningLevel");
// Dependencies 
namespace UnityEngine::AdaptivePerformance {
// Is value type: true
// CS Name: UnityEngine.AdaptivePerformance.WarningLevel
struct CORDL_TYPE WarningLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WarningLevel_Unwrapped
enum struct __WarningLevel_Unwrapped : int32_t {
__E_NoWarning = static_cast<int32_t>(0x0),
__E_ThrottlingImminent = static_cast<int32_t>(0x1),
__E_Throttling = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WarningLevel_Unwrapped () const noexcept {
return static_cast<__WarningLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WarningLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WarningLevel(int32_t  value__) noexcept;

/// @brief Field NoWarning value: I32(0)
static ::UnityEngine::AdaptivePerformance::WarningLevel const NoWarning;

/// @brief Field Throttling value: I32(2)
static ::UnityEngine::AdaptivePerformance::WarningLevel const Throttling;

/// @brief Field ThrottlingImminent value: I32(1)
static ::UnityEngine::AdaptivePerformance::WarningLevel const ThrottlingImminent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19426};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AdaptivePerformance::WarningLevel, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AdaptivePerformance::WarningLevel) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::AdaptivePerformance
