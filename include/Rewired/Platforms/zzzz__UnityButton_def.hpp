#pragma once
// IWYU pragma private; include "Rewired/Platforms/UnityButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityButton)
// Forward declare root types
namespace Rewired::Platforms {
struct UnityButton;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::UnityButton);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::UnityButton, "Rewired.Platforms", "UnityButton");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.UnityButton
struct CORDL_TYPE UnityButton {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnityButton_Unwrapped
enum struct __UnityButton_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Button0 = static_cast<int32_t>(0x1),
__E_Button1 = static_cast<int32_t>(0x2),
__E_Button2 = static_cast<int32_t>(0x3),
__E_Button3 = static_cast<int32_t>(0x4),
__E_Button4 = static_cast<int32_t>(0x5),
__E_Button5 = static_cast<int32_t>(0x6),
__E_Button6 = static_cast<int32_t>(0x7),
__E_Button7 = static_cast<int32_t>(0x8),
__E_Button8 = static_cast<int32_t>(0x9),
__E_Button9 = static_cast<int32_t>(0xa),
__E_Button10 = static_cast<int32_t>(0xb),
__E_Button11 = static_cast<int32_t>(0xc),
__E_Button12 = static_cast<int32_t>(0xd),
__E_Button13 = static_cast<int32_t>(0xe),
__E_Button14 = static_cast<int32_t>(0xf),
__E_Button15 = static_cast<int32_t>(0x10),
__E_Button16 = static_cast<int32_t>(0x11),
__E_Button17 = static_cast<int32_t>(0x12),
__E_Button18 = static_cast<int32_t>(0x13),
__E_Button19 = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityButton_Unwrapped () const noexcept {
return static_cast<__UnityButton_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityButton() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityButton(int32_t  value__) noexcept;

/// @brief Field Button0 value: I32(1)
static ::Rewired::Platforms::UnityButton const Button0;

/// @brief Field Button1 value: I32(2)
static ::Rewired::Platforms::UnityButton const Button1;

/// @brief Field Button10 value: I32(11)
static ::Rewired::Platforms::UnityButton const Button10;

/// @brief Field Button11 value: I32(12)
static ::Rewired::Platforms::UnityButton const Button11;

/// @brief Field Button12 value: I32(13)
static ::Rewired::Platforms::UnityButton const Button12;

/// @brief Field Button13 value: I32(14)
static ::Rewired::Platforms::UnityButton const Button13;

/// @brief Field Button14 value: I32(15)
static ::Rewired::Platforms::UnityButton const Button14;

/// @brief Field Button15 value: I32(16)
static ::Rewired::Platforms::UnityButton const Button15;

/// @brief Field Button16 value: I32(17)
static ::Rewired::Platforms::UnityButton const Button16;

/// @brief Field Button17 value: I32(18)
static ::Rewired::Platforms::UnityButton const Button17;

/// @brief Field Button18 value: I32(19)
static ::Rewired::Platforms::UnityButton const Button18;

/// @brief Field Button19 value: I32(20)
static ::Rewired::Platforms::UnityButton const Button19;

/// @brief Field Button2 value: I32(3)
static ::Rewired::Platforms::UnityButton const Button2;

/// @brief Field Button3 value: I32(4)
static ::Rewired::Platforms::UnityButton const Button3;

/// @brief Field Button4 value: I32(5)
static ::Rewired::Platforms::UnityButton const Button4;

/// @brief Field Button5 value: I32(6)
static ::Rewired::Platforms::UnityButton const Button5;

/// @brief Field Button6 value: I32(7)
static ::Rewired::Platforms::UnityButton const Button6;

/// @brief Field Button7 value: I32(8)
static ::Rewired::Platforms::UnityButton const Button7;

/// @brief Field Button8 value: I32(9)
static ::Rewired::Platforms::UnityButton const Button8;

/// @brief Field Button9 value: I32(10)
static ::Rewired::Platforms::UnityButton const Button9;

/// @brief Field None value: I32(0)
static ::Rewired::Platforms::UnityButton const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2274};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::UnityButton, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::UnityButton) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
