#pragma once
// IWYU pragma private; include "Rewired/InputSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputSource)
// Forward declare root types
namespace Rewired {
struct InputSource;
}
// Write type traits
MARK_VAL_T(::Rewired::InputSource);
DEFINE_IL2CPP_CLASS(::Rewired::InputSource, "Rewired", "InputSource");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.InputSource
struct CORDL_TYPE InputSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputSource_Unwrapped
enum struct __InputSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DirectInput = static_cast<int32_t>(0x1),
__E_XInput = static_cast<int32_t>(0x2),
__E_OSX = static_cast<int32_t>(0x3),
__E_Fallback = static_cast<int32_t>(0x4),
__E_RawInput = static_cast<int32_t>(0x5),
__E_Fallback_PreConfigured = static_cast<int32_t>(0x6),
__E_Linux = static_cast<int32_t>(0x7),
__E_WindowsUWP = static_cast<int32_t>(0x8),
__E_WebGL = static_cast<int32_t>(0x9),
__E_Steam = static_cast<int32_t>(0x12),
__E_SDL2 = static_cast<int32_t>(0x13),
__E_Ouya = static_cast<int32_t>(0x14),
__E_XboxOne = static_cast<int32_t>(0x15),
__E_PS4 = static_cast<int32_t>(0x16),
__E_NintendoSwitch = static_cast<int32_t>(0x18),
__E_GameCoreXboxOne = static_cast<int32_t>(0x1a),
__E_GameCoreScarlett = static_cast<int32_t>(0x1b),
__E_PS5 = static_cast<int32_t>(0x1c),
__E_AppleGameController = static_cast<int32_t>(0x1d),
__E_WindowsGamingInput = static_cast<int32_t>(0x1e),
__E_NintendoSwitch2 = static_cast<int32_t>(0x1f),
__E_InternalDriver = static_cast<int32_t>(0x31),
__E_UnityKeyboardAndMouse = static_cast<int32_t>(0x32),
__E_Custom = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputSource_Unwrapped () const noexcept {
return static_cast<__InputSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputSource(int32_t  value__) noexcept;

/// @brief Field AppleGameController value: I32(29)
static ::Rewired::InputSource const AppleGameController;

/// @brief Field Custom value: I32(100)
static ::Rewired::InputSource const Custom;

/// @brief Field DirectInput value: I32(1)
static ::Rewired::InputSource const DirectInput;

/// @brief Field Fallback value: I32(4)
static ::Rewired::InputSource const Fallback;

/// @brief Field Fallback_PreConfigured value: I32(6)
static ::Rewired::InputSource const Fallback_PreConfigured;

/// @brief Field GameCoreScarlett value: I32(27)
static ::Rewired::InputSource const GameCoreScarlett;

/// @brief Field GameCoreXboxOne value: I32(26)
static ::Rewired::InputSource const GameCoreXboxOne;

/// @brief Field InternalDriver value: I32(49)
static ::Rewired::InputSource const InternalDriver;

/// @brief Field Linux value: I32(7)
static ::Rewired::InputSource const Linux;

/// @brief Field NintendoSwitch value: I32(24)
static ::Rewired::InputSource const NintendoSwitch;

/// @brief Field NintendoSwitch2 value: I32(31)
static ::Rewired::InputSource const NintendoSwitch2;

/// @brief Field None value: I32(0)
static ::Rewired::InputSource const None;

/// @brief Field OSX value: I32(3)
static ::Rewired::InputSource const OSX;

/// @brief Field Ouya value: I32(20)
static ::Rewired::InputSource const Ouya;

/// @brief Field PS4 value: I32(22)
static ::Rewired::InputSource const PS4;

/// @brief Field PS5 value: I32(28)
static ::Rewired::InputSource const PS5;

/// @brief Field RawInput value: I32(5)
static ::Rewired::InputSource const RawInput;

/// @brief Field SDL2 value: I32(19)
static ::Rewired::InputSource const SDL2;

/// @brief Field Steam value: I32(18)
static ::Rewired::InputSource const Steam;

/// @brief Field UnityKeyboardAndMouse value: I32(50)
static ::Rewired::InputSource const UnityKeyboardAndMouse;

/// @brief Field WebGL value: I32(9)
static ::Rewired::InputSource const WebGL;

/// @brief Field WindowsGamingInput value: I32(30)
static ::Rewired::InputSource const WindowsGamingInput;

/// @brief Field WindowsUWP value: I32(8)
static ::Rewired::InputSource const WindowsUWP;

/// @brief Field XInput value: I32(2)
static ::Rewired::InputSource const XInput;

/// @brief Field XboxOne value: I32(21)
static ::Rewired::InputSource const XboxOne;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1961};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::InputSource, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::InputSource) == 0x4, "Size mismatch!");

} // namespace end def Rewired
