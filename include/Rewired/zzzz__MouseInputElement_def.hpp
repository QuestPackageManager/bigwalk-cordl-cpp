#pragma once
// IWYU pragma private; include "Rewired/MouseInputElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MouseInputElement)
// Forward declare root types
namespace Rewired {
struct MouseInputElement;
}
// Write type traits
MARK_VAL_T(::Rewired::MouseInputElement);
DEFINE_IL2CPP_CLASS(::Rewired::MouseInputElement, "Rewired", "MouseInputElement");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.MouseInputElement
struct CORDL_TYPE MouseInputElement {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MouseInputElement_Unwrapped
enum struct __MouseInputElement_Unwrapped : int32_t {
__E_AxisX = static_cast<int32_t>(0x0),
__E_AxisY = static_cast<int32_t>(0x1),
__E_Axis3 = static_cast<int32_t>(0x2),
__E_Button0 = static_cast<int32_t>(0x3),
__E_Button1 = static_cast<int32_t>(0x4),
__E_Button2 = static_cast<int32_t>(0x5),
__E_Button3 = static_cast<int32_t>(0x6),
__E_Button4 = static_cast<int32_t>(0x7),
__E_Button5 = static_cast<int32_t>(0x8),
__E_Button6 = static_cast<int32_t>(0x9),
__E_Axis4 = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MouseInputElement_Unwrapped () const noexcept {
return static_cast<__MouseInputElement_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MouseInputElement() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MouseInputElement(int32_t  value__) noexcept;

/// @brief Field Axis3 value: I32(2)
static ::Rewired::MouseInputElement const Axis3;

/// @brief Field Axis4 value: I32(10)
static ::Rewired::MouseInputElement const Axis4;

/// @brief Field AxisX value: I32(0)
static ::Rewired::MouseInputElement const AxisX;

/// @brief Field AxisY value: I32(1)
static ::Rewired::MouseInputElement const AxisY;

/// @brief Field Button0 value: I32(3)
static ::Rewired::MouseInputElement const Button0;

/// @brief Field Button1 value: I32(4)
static ::Rewired::MouseInputElement const Button1;

/// @brief Field Button2 value: I32(5)
static ::Rewired::MouseInputElement const Button2;

/// @brief Field Button3 value: I32(6)
static ::Rewired::MouseInputElement const Button3;

/// @brief Field Button4 value: I32(7)
static ::Rewired::MouseInputElement const Button4;

/// @brief Field Button5 value: I32(8)
static ::Rewired::MouseInputElement const Button5;

/// @brief Field Button6 value: I32(9)
static ::Rewired::MouseInputElement const Button6;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::MouseInputElement, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::MouseInputElement) == 0x4, "Size mismatch!");

} // namespace end def Rewired
