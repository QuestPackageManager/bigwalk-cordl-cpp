#pragma once
// IWYU pragma private; include "Rewired/Platforms/Microsoft/WindowsGamingInput/GamepadButtons.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GamepadButtons)
// Forward declare root types
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
struct GamepadButtons;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons, "Rewired.Platforms.Microsoft.WindowsGamingInput", "GamepadButtons");
// Dependencies 
namespace Rewired::Platforms::Microsoft::WindowsGamingInput {
// Is value type: true
// CS Name: Rewired.Platforms.Microsoft.WindowsGamingInput.GamepadButtons
struct CORDL_TYPE GamepadButtons {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __GamepadButtons_Unwrapped
enum struct __GamepadButtons_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_Menu = static_cast<uint32_t>(0x1u),
__E_View = static_cast<uint32_t>(0x2u),
__E_A = static_cast<uint32_t>(0x4u),
__E_B = static_cast<uint32_t>(0x8u),
__E_X = static_cast<uint32_t>(0x10u),
__E_Y = static_cast<uint32_t>(0x20u),
__E_DPadUp = static_cast<uint32_t>(0x40u),
__E_DPadDown = static_cast<uint32_t>(0x80u),
__E_DPadLeft = static_cast<uint32_t>(0x100u),
__E_DPadRight = static_cast<uint32_t>(0x200u),
__E_LeftShoulder = static_cast<uint32_t>(0x400u),
__E_RightShoulder = static_cast<uint32_t>(0x800u),
__E_LeftThumbstick = static_cast<uint32_t>(0x1000u),
__E_RightThumbstick = static_cast<uint32_t>(0x2000u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GamepadButtons_Unwrapped () const noexcept {
return static_cast<__GamepadButtons_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GamepadButtons() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GamepadButtons(uint32_t  value__) noexcept;

/// @brief Field A value: U32(4)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const A;

/// @brief Field B value: U32(8)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const B;

/// @brief Field DPadDown value: U32(128)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const DPadDown;

/// @brief Field DPadLeft value: U32(256)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const DPadLeft;

/// @brief Field DPadRight value: U32(512)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const DPadRight;

/// @brief Field DPadUp value: U32(64)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const DPadUp;

/// @brief Field LeftShoulder value: U32(1024)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const LeftShoulder;

/// @brief Field LeftThumbstick value: U32(4096)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const LeftThumbstick;

/// @brief Field Menu value: U32(1)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const Menu;

/// @brief Field None value: U32(0)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const None;

/// @brief Field RightShoulder value: U32(2048)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const RightShoulder;

/// @brief Field RightThumbstick value: U32(8192)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const RightThumbstick;

/// @brief Field View value: U32(2)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const View;

/// @brief Field X value: U32(16)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const X;

/// @brief Field Y value: U32(32)
static ::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Microsoft::WindowsGamingInput::GamepadButtons) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms::Microsoft::WindowsGamingInput
