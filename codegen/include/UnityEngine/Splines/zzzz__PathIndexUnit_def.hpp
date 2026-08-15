#pragma once
// IWYU pragma private; include "UnityEngine/Splines/PathIndexUnit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PathIndexUnit)
// Forward declare root types
namespace UnityEngine::Splines {
struct PathIndexUnit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::PathIndexUnit);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::PathIndexUnit, "UnityEngine.Splines", "PathIndexUnit");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.PathIndexUnit
struct CORDL_TYPE PathIndexUnit {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PathIndexUnit_Unwrapped
enum struct __PathIndexUnit_Unwrapped : int32_t {
__E_Distance = static_cast<int32_t>(0x0),
__E_Normalized = static_cast<int32_t>(0x1),
__E_Knot = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PathIndexUnit_Unwrapped () const noexcept {
return static_cast<__PathIndexUnit_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PathIndexUnit() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PathIndexUnit(int32_t  value__) noexcept;

/// @brief Field Distance value: I32(0)
static ::UnityEngine::Splines::PathIndexUnit const Distance;

/// @brief Field Knot value: I32(2)
static ::UnityEngine::Splines::PathIndexUnit const Knot;

/// @brief Field Normalized value: I32(1)
static ::UnityEngine::Splines::PathIndexUnit const Normalized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18719};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::PathIndexUnit, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::PathIndexUnit) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
