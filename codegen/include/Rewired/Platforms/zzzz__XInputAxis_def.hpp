#pragma once
// IWYU pragma private; include "Rewired/Platforms/XInputAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XInputAxis)
// Forward declare root types
namespace Rewired::Platforms {
struct XInputAxis;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::XInputAxis);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XInputAxis, "Rewired.Platforms", "XInputAxis");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.XInputAxis
struct CORDL_TYPE XInputAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XInputAxis_Unwrapped
enum struct __XInputAxis_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LeftThumbX = static_cast<int32_t>(0x1),
__E_LeftThumbY = static_cast<int32_t>(0x2),
__E_RightThumbX = static_cast<int32_t>(0x3),
__E_RightThumbY = static_cast<int32_t>(0x4),
__E_LeftTrigger = static_cast<int32_t>(0x5),
__E_RightTrigger = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XInputAxis_Unwrapped () const noexcept {
return static_cast<__XInputAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XInputAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XInputAxis(int32_t  value__) noexcept;

/// @brief Field LeftThumbX value: I32(1)
static ::Rewired::Platforms::XInputAxis const LeftThumbX;

/// @brief Field LeftThumbY value: I32(2)
static ::Rewired::Platforms::XInputAxis const LeftThumbY;

/// @brief Field LeftTrigger value: I32(5)
static ::Rewired::Platforms::XInputAxis const LeftTrigger;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::XInputAxis const None;

/// @brief Field RightThumbX value: I32(3)
static ::Rewired::Platforms::XInputAxis const RightThumbX;

/// @brief Field RightThumbY value: I32(4)
static ::Rewired::Platforms::XInputAxis const RightThumbY;

/// @brief Field RightTrigger value: I32(6)
static ::Rewired::Platforms::XInputAxis const RightTrigger;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2270};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XInputAxis, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XInputAxis) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
