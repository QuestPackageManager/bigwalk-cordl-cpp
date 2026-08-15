#pragma once
// IWYU pragma private; include "Rewired/InputPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputPlatform)
// Forward declare root types
namespace Rewired {
struct InputPlatform;
}
// Write type traits
MARK_VAL_T(::Rewired::InputPlatform);
DEFINE_IL2CPP_CLASS(::Rewired::InputPlatform, "Rewired", "InputPlatform");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputPlatform
struct CORDL_TYPE InputPlatform {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputPlatform_Unwrapped
enum struct __InputPlatform_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_WindowsDirectInput = static_cast<int32_t>(0x1),
__E_WindowsRawInput = static_cast<int32_t>(0x2),
__E_WindowsXInput = static_cast<int32_t>(0x3),
__E_WindowsFallback = static_cast<int32_t>(0x4),
__E_WindowsUWP = static_cast<int32_t>(0x5),
__E_WindowsUWPFallback = static_cast<int32_t>(0x6),
__E_WindowsWGI = static_cast<int32_t>(0x7),
__E_OSXNative = static_cast<int32_t>(0x8),
__E_OSXFallback = static_cast<int32_t>(0x9),
__E_LinuxNative = static_cast<int32_t>(0xa),
__E_LinuxFallback = static_cast<int32_t>(0xb),
__E_LinuxFallback_PreConfigured = static_cast<int32_t>(0xc),
__E_AndroidFallback = static_cast<int32_t>(0xd),
__E_AmazonFireTVFallback = static_cast<int32_t>(0xe),
__E_RazerForgeTVFallback = static_cast<int32_t>(0xf),
__E_iOSFallback = static_cast<int32_t>(0x10),
__E_WindowsPhone8Fallback = static_cast<int32_t>(0x11),
__E_BlackberryFallback = static_cast<int32_t>(0x12),
__E_PS3Fallback = static_cast<int32_t>(0x13),
__E_PS4Fallback = static_cast<int32_t>(0x14),
__E_PSMFallback = static_cast<int32_t>(0x15),
__E_PSVitaFallback = static_cast<int32_t>(0x16),
__E_XBox360Fallback = static_cast<int32_t>(0x17),
__E_XBoxOneFallback = static_cast<int32_t>(0x18),
__E_WiiFallback = static_cast<int32_t>(0x19),
__E_WiiUFallback = static_cast<int32_t>(0x1a),
__E_Fallback = static_cast<int32_t>(0x1b),
__E_Ouya = static_cast<int32_t>(0x1c),
__E_XboxOne = static_cast<int32_t>(0x1d),
__E_GameCore = static_cast<int32_t>(0x1e),
__E_PS4 = static_cast<int32_t>(0x1f),
__E_PS5 = static_cast<int32_t>(0x20),
__E_NintendoSwitch = static_cast<int32_t>(0x21),
__E_NintendoSwitchFallback = static_cast<int32_t>(0x22),
__E_NintendoSwitch2 = static_cast<int32_t>(0x23),
__E_Custom = static_cast<int32_t>(0x24),
__E_InternalDriver = static_cast<int32_t>(0x25),
__E_SDL2 = static_cast<int32_t>(0x26),
__E_SDL2Windows = static_cast<int32_t>(0x27),
__E_SDL2OSX = static_cast<int32_t>(0x28),
__E_SDL2Linux = static_cast<int32_t>(0x29),
__E_Steam = static_cast<int32_t>(0x2a),
__E_WebGL = static_cast<int32_t>(0x2b),
__E_AppleGameController = static_cast<int32_t>(0x2c),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputPlatform_Unwrapped () const noexcept {
return static_cast<__InputPlatform_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputPlatform() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputPlatform(int32_t  value__) noexcept;

/// @brief Field AmazonFireTVFallback value: I32(14)
static ::Rewired::InputPlatform const AmazonFireTVFallback;

/// @brief Field AndroidFallback value: I32(13)
static ::Rewired::InputPlatform const AndroidFallback;

/// @brief Field AppleGameController value: I32(44)
static ::Rewired::InputPlatform const AppleGameController;

/// @brief Field BlackberryFallback value: I32(18)
static ::Rewired::InputPlatform const BlackberryFallback;

/// @brief Field Custom value: I32(36)
static ::Rewired::InputPlatform const Custom;

/// @brief Field Fallback value: I32(27)
static ::Rewired::InputPlatform const Fallback;

/// @brief Field GameCore value: I32(30)
static ::Rewired::InputPlatform const GameCore;

/// @brief Field InternalDriver value: I32(37)
static ::Rewired::InputPlatform const InternalDriver;

/// @brief Field LinuxFallback value: I32(11)
static ::Rewired::InputPlatform const LinuxFallback;

/// @brief Field LinuxFallback_PreConfigured value: I32(12)
static ::Rewired::InputPlatform const LinuxFallback_PreConfigured;

/// @brief Field LinuxNative value: I32(10)
static ::Rewired::InputPlatform const LinuxNative;

/// @brief Field NintendoSwitch value: I32(33)
static ::Rewired::InputPlatform const NintendoSwitch;

/// @brief Field NintendoSwitch2 value: I32(35)
static ::Rewired::InputPlatform const NintendoSwitch2;

/// @brief Field NintendoSwitchFallback value: I32(34)
static ::Rewired::InputPlatform const NintendoSwitchFallback;

/// @brief Field OSXFallback value: I32(9)
static ::Rewired::InputPlatform const OSXFallback;

/// @brief Field OSXNative value: I32(8)
static ::Rewired::InputPlatform const OSXNative;

/// @brief Field Ouya value: I32(28)
static ::Rewired::InputPlatform const Ouya;

/// @brief Field PS3Fallback value: I32(19)
static ::Rewired::InputPlatform const PS3Fallback;

/// @brief Field PS4 value: I32(31)
static ::Rewired::InputPlatform const PS4;

/// @brief Field PS4Fallback value: I32(20)
static ::Rewired::InputPlatform const PS4Fallback;

/// @brief Field PS5 value: I32(32)
static ::Rewired::InputPlatform const PS5;

/// @brief Field PSMFallback value: I32(21)
static ::Rewired::InputPlatform const PSMFallback;

/// @brief Field PSVitaFallback value: I32(22)
static ::Rewired::InputPlatform const PSVitaFallback;

/// @brief Field RazerForgeTVFallback value: I32(15)
static ::Rewired::InputPlatform const RazerForgeTVFallback;

/// @brief Field SDL2 value: I32(38)
static ::Rewired::InputPlatform const SDL2;

/// @brief Field SDL2Linux value: I32(41)
static ::Rewired::InputPlatform const SDL2Linux;

/// @brief Field SDL2OSX value: I32(40)
static ::Rewired::InputPlatform const SDL2OSX;

/// @brief Field SDL2Windows value: I32(39)
static ::Rewired::InputPlatform const SDL2Windows;

/// @brief Field Steam value: I32(42)
static ::Rewired::InputPlatform const Steam;

/// @brief Field Unknown value: I32(0)
static ::Rewired::InputPlatform const Unknown;

/// @brief Field WebGL value: I32(43)
static ::Rewired::InputPlatform const WebGL;

/// @brief Field WiiFallback value: I32(25)
static ::Rewired::InputPlatform const WiiFallback;

/// @brief Field WiiUFallback value: I32(26)
static ::Rewired::InputPlatform const WiiUFallback;

/// @brief Field WindowsDirectInput value: I32(1)
static ::Rewired::InputPlatform const WindowsDirectInput;

/// @brief Field WindowsFallback value: I32(4)
static ::Rewired::InputPlatform const WindowsFallback;

/// @brief Field WindowsPhone8Fallback value: I32(17)
static ::Rewired::InputPlatform const WindowsPhone8Fallback;

/// @brief Field WindowsRawInput value: I32(2)
static ::Rewired::InputPlatform const WindowsRawInput;

/// @brief Field WindowsUWP value: I32(5)
static ::Rewired::InputPlatform const WindowsUWP;

/// @brief Field WindowsUWPFallback value: I32(6)
static ::Rewired::InputPlatform const WindowsUWPFallback;

/// @brief Field WindowsWGI value: I32(7)
static ::Rewired::InputPlatform const WindowsWGI;

/// @brief Field WindowsXInput value: I32(3)
static ::Rewired::InputPlatform const WindowsXInput;

/// @brief Field XBox360Fallback value: I32(23)
static ::Rewired::InputPlatform const XBox360Fallback;

/// @brief Field XBoxOneFallback value: I32(24)
static ::Rewired::InputPlatform const XBoxOneFallback;

/// @brief Field XboxOne value: I32(29)
static ::Rewired::InputPlatform const XboxOne;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1962};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field iOSFallback value: I32(16)
static ::Rewired::InputPlatform const iOSFallback;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputPlatform, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputPlatform) == 0x4, "Size mismatch!");

} // namespace end def Rewired
