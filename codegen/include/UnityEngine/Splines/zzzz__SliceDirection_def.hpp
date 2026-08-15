#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SliceDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SliceDirection)
// Forward declare root types
namespace UnityEngine::Splines {
struct SliceDirection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SliceDirection);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SliceDirection, "UnityEngine.Splines", "SliceDirection");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SliceDirection
struct CORDL_TYPE SliceDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SliceDirection_Unwrapped
enum struct __SliceDirection_Unwrapped : int32_t {
__E_Forward = static_cast<int32_t>(0x0),
__E_Backward = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SliceDirection_Unwrapped () const noexcept {
return static_cast<__SliceDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SliceDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SliceDirection(int32_t  value__) noexcept;

/// @brief Field Backward value: I32(1)
static ::UnityEngine::Splines::SliceDirection const Backward;

/// @brief Field Forward value: I32(0)
static ::UnityEngine::Splines::SliceDirection const Forward;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SliceDirection, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SliceDirection) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
