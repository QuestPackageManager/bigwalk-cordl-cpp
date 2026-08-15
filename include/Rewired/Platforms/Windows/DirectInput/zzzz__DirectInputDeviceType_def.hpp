#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/DirectInput/DirectInputDeviceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectInputDeviceType)
// Forward declare root types
namespace Rewired::Platforms::Windows::DirectInput {
struct DirectInputDeviceType;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType, "Rewired.Platforms.Windows.DirectInput", "DirectInputDeviceType");
// Dependencies 
namespace Rewired::Platforms::Windows::DirectInput {
// Is value type: true
// CS Name: Rewired.Platforms.Windows.DirectInput.DirectInputDeviceType
struct CORDL_TYPE DirectInputDeviceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DirectInputDeviceType_Unwrapped
enum struct __DirectInputDeviceType_Unwrapped : int32_t {
__E_Device = static_cast<int32_t>(0x11),
__E_Mouse = static_cast<int32_t>(0x12),
__E_Keyboard = static_cast<int32_t>(0x13),
__E_Joystick = static_cast<int32_t>(0x14),
__E_Gamepad = static_cast<int32_t>(0x15),
__E_Driving = static_cast<int32_t>(0x16),
__E_Flight = static_cast<int32_t>(0x17),
__E_FirstPerson = static_cast<int32_t>(0x18),
__E_ControlDevice = static_cast<int32_t>(0x19),
__E_ScreenPointer = static_cast<int32_t>(0x1a),
__E_Remote = static_cast<int32_t>(0x1b),
__E_Supplemental = static_cast<int32_t>(0x1c),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DirectInputDeviceType_Unwrapped () const noexcept {
return static_cast<__DirectInputDeviceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DirectInputDeviceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DirectInputDeviceType(int32_t  value__) noexcept;

/// @brief Field ControlDevice value: I32(25)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const ControlDevice;

/// @brief Field Device value: I32(17)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const Device;

/// @brief Field Driving value: I32(22)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const Driving;

/// @brief Field FirstPerson value: I32(24)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const FirstPerson;

/// @brief Field Flight value: I32(23)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const Flight;

/// @brief Field Gamepad value: I32(21)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const Gamepad;

/// @brief Field Joystick value: I32(20)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const Joystick;

/// @brief Field Keyboard value: I32(19)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const Keyboard;

/// @brief Field Mouse value: I32(18)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const Mouse;

/// @brief Field Remote value: I32(27)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const Remote;

/// @brief Field ScreenPointer value: I32(26)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const ScreenPointer;

/// @brief Field Supplemental value: I32(28)
static ::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType const Supplemental;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5976};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::DirectInput::DirectInputDeviceType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::DirectInput
