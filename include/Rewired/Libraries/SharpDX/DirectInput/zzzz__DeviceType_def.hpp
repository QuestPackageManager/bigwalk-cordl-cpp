#pragma once
// IWYU pragma private; include "Rewired/Libraries/SharpDX/DirectInput/DeviceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceType)
// Forward declare root types
namespace Rewired::Libraries::SharpDX::DirectInput {
struct DeviceType;
}
// Write type traits
MARK_VAL_T(::Rewired::Libraries::SharpDX::DirectInput::DeviceType);
DEFINE_IL2CPP_CLASS(::Rewired::Libraries::SharpDX::DirectInput::DeviceType, "Rewired.Libraries.SharpDX.DirectInput", "DeviceType");
// Dependencies 
namespace Rewired::Libraries::SharpDX::DirectInput {
// Is value type: true
// CS Name: Rewired.Libraries.SharpDX.DirectInput.DeviceType
struct CORDL_TYPE DeviceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DeviceType_Unwrapped
enum struct __DeviceType_Unwrapped : int32_t {
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
constexpr operator __DeviceType_Unwrapped () const noexcept {
return static_cast<__DeviceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeviceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DeviceType(int32_t  value__) noexcept;

/// @brief Field ControlDevice value: I32(25)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const ControlDevice;

/// @brief Field Device value: I32(17)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const Device;

/// @brief Field Driving value: I32(22)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const Driving;

/// @brief Field FirstPerson value: I32(24)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const FirstPerson;

/// @brief Field Flight value: I32(23)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const Flight;

/// @brief Field Gamepad value: I32(21)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const Gamepad;

/// @brief Field Joystick value: I32(20)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const Joystick;

/// @brief Field Keyboard value: I32(19)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const Keyboard;

/// @brief Field Mouse value: I32(18)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const Mouse;

/// @brief Field Remote value: I32(27)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const Remote;

/// @brief Field ScreenPointer value: I32(26)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const ScreenPointer;

/// @brief Field Supplemental value: I32(28)
static ::Rewired::Libraries::SharpDX::DirectInput::DeviceType const Supplemental;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6278};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Libraries::SharpDX::DirectInput::DeviceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Libraries::SharpDX::DirectInput::DeviceType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Libraries::SharpDX::DirectInput
