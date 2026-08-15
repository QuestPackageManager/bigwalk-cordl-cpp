#pragma once
// IWYU pragma private; include "Steamworks/EInputSourceMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EInputSourceMode)
// Forward declare root types
namespace Steamworks {
struct EInputSourceMode;
}
// Write type traits
MARK_VAL_T(::Steamworks::EInputSourceMode);
DEFINE_IL2CPP_CLASS(::Steamworks::EInputSourceMode, "Steamworks", "EInputSourceMode");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EInputSourceMode
struct CORDL_TYPE EInputSourceMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EInputSourceMode_Unwrapped
enum struct __EInputSourceMode_Unwrapped : int32_t {
__E_k_EInputSourceMode_None = static_cast<int32_t>(0x0),
__E_k_EInputSourceMode_Dpad = static_cast<int32_t>(0x1),
__E_k_EInputSourceMode_Buttons = static_cast<int32_t>(0x2),
__E_k_EInputSourceMode_FourButtons = static_cast<int32_t>(0x3),
__E_k_EInputSourceMode_AbsoluteMouse = static_cast<int32_t>(0x4),
__E_k_EInputSourceMode_RelativeMouse = static_cast<int32_t>(0x5),
__E_k_EInputSourceMode_JoystickMove = static_cast<int32_t>(0x6),
__E_k_EInputSourceMode_JoystickMouse = static_cast<int32_t>(0x7),
__E_k_EInputSourceMode_JoystickCamera = static_cast<int32_t>(0x8),
__E_k_EInputSourceMode_ScrollWheel = static_cast<int32_t>(0x9),
__E_k_EInputSourceMode_Trigger = static_cast<int32_t>(0xa),
__E_k_EInputSourceMode_TouchMenu = static_cast<int32_t>(0xb),
__E_k_EInputSourceMode_MouseJoystick = static_cast<int32_t>(0xc),
__E_k_EInputSourceMode_MouseRegion = static_cast<int32_t>(0xd),
__E_k_EInputSourceMode_RadialMenu = static_cast<int32_t>(0xe),
__E_k_EInputSourceMode_SingleButton = static_cast<int32_t>(0xf),
__E_k_EInputSourceMode_Switches = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EInputSourceMode_Unwrapped () const noexcept {
return static_cast<__EInputSourceMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EInputSourceMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EInputSourceMode(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16251};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EInputSourceMode_AbsoluteMouse value: I32(4)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_AbsoluteMouse;

/// @brief Field k_EInputSourceMode_Buttons value: I32(2)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_Buttons;

/// @brief Field k_EInputSourceMode_Dpad value: I32(1)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_Dpad;

/// @brief Field k_EInputSourceMode_FourButtons value: I32(3)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_FourButtons;

/// @brief Field k_EInputSourceMode_JoystickCamera value: I32(8)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_JoystickCamera;

/// @brief Field k_EInputSourceMode_JoystickMouse value: I32(7)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_JoystickMouse;

/// @brief Field k_EInputSourceMode_JoystickMove value: I32(6)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_JoystickMove;

/// @brief Field k_EInputSourceMode_MouseJoystick value: I32(12)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_MouseJoystick;

/// @brief Field k_EInputSourceMode_MouseRegion value: I32(13)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_MouseRegion;

/// @brief Field k_EInputSourceMode_None value: I32(0)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_None;

/// @brief Field k_EInputSourceMode_RadialMenu value: I32(14)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_RadialMenu;

/// @brief Field k_EInputSourceMode_RelativeMouse value: I32(5)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_RelativeMouse;

/// @brief Field k_EInputSourceMode_ScrollWheel value: I32(9)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_ScrollWheel;

/// @brief Field k_EInputSourceMode_SingleButton value: I32(15)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_SingleButton;

/// @brief Field k_EInputSourceMode_Switches value: I32(16)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_Switches;

/// @brief Field k_EInputSourceMode_TouchMenu value: I32(11)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_TouchMenu;

/// @brief Field k_EInputSourceMode_Trigger value: I32(10)
static ::Steamworks::EInputSourceMode const k_EInputSourceMode_Trigger;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EInputSourceMode, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EInputSourceMode) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
