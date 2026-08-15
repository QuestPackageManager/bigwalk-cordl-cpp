#pragma once
// IWYU pragma private; include "Rewired/JoystickType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JoystickType)
// Forward declare root types
namespace Rewired {
struct JoystickType;
}
// Write type traits
MARK_VAL_T(::Rewired::JoystickType);
DEFINE_IL2CPP_CLASS(::Rewired::JoystickType, "Rewired", "JoystickType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.JoystickType
struct CORDL_TYPE JoystickType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JoystickType_Unwrapped
enum struct __JoystickType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Gamepad = static_cast<int32_t>(0x1),
__E_DualAnalogGamepad = static_cast<int32_t>(0x2),
__E_SingleAnalogGamepad = static_cast<int32_t>(0x3),
__E_DigitalGamepad = static_cast<int32_t>(0x4),
__E_Joystick = static_cast<int32_t>(0xa),
__E_AnalogJoystick = static_cast<int32_t>(0xb),
__E_DigitalJoystick = static_cast<int32_t>(0xc),
__E_Throttle = static_cast<int32_t>(0x14),
__E_HOTAS = static_cast<int32_t>(0x15),
__E_FlightYoke = static_cast<int32_t>(0x16),
__E_FlightPedals = static_cast<int32_t>(0x17),
__E_ThrottleQuadrant = static_cast<int32_t>(0x18),
__E_TrimWheel = static_cast<int32_t>(0x19),
__E_DrivingWheel = static_cast<int32_t>(0x28),
__E_Pedals = static_cast<int32_t>(0x29),
__E_GearShifter = static_cast<int32_t>(0x2a),
__E_Guitar = static_cast<int32_t>(0x32),
__E_Drums = static_cast<int32_t>(0x33),
__E_DancePad = static_cast<int32_t>(0x46),
__E_Paddle = static_cast<int32_t>(0x50),
__E_Spinner = static_cast<int32_t>(0x51),
__E_Trackball = static_cast<int32_t>(0x52),
__E_Gun = static_cast<int32_t>(0x53),
__E_RemoteControl = static_cast<int32_t>(0x64),
__E_PointingDevice = static_cast<int32_t>(0x65),
__E_ShipController = static_cast<int32_t>(0x78),
__E_TrainController = static_cast<int32_t>(0x79),
__E_HelicopterController = static_cast<int32_t>(0x7a),
__E_FootController = static_cast<int32_t>(0x7b),
__E_ControlPanel = static_cast<int32_t>(0x8c),
__E_Keypad = static_cast<int32_t>(0x8d),
__E_VRController = static_cast<int32_t>(0x96),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JoystickType_Unwrapped () const noexcept {
return static_cast<__JoystickType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JoystickType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr JoystickType(int32_t  value__) noexcept;

/// @brief Field AnalogJoystick value: I32(11)
static ::Rewired::JoystickType const AnalogJoystick;

/// @brief Field ControlPanel value: I32(140)
static ::Rewired::JoystickType const ControlPanel;

/// @brief Field DancePad value: I32(70)
static ::Rewired::JoystickType const DancePad;

/// @brief Field DigitalGamepad value: I32(4)
static ::Rewired::JoystickType const DigitalGamepad;

/// @brief Field DigitalJoystick value: I32(12)
static ::Rewired::JoystickType const DigitalJoystick;

/// @brief Field DrivingWheel value: I32(40)
static ::Rewired::JoystickType const DrivingWheel;

/// @brief Field Drums value: I32(51)
static ::Rewired::JoystickType const Drums;

/// @brief Field DualAnalogGamepad value: I32(2)
static ::Rewired::JoystickType const DualAnalogGamepad;

/// @brief Field FlightPedals value: I32(23)
static ::Rewired::JoystickType const FlightPedals;

/// @brief Field FlightYoke value: I32(22)
static ::Rewired::JoystickType const FlightYoke;

/// @brief Field FootController value: I32(123)
static ::Rewired::JoystickType const FootController;

/// @brief Field Gamepad value: I32(1)
static ::Rewired::JoystickType const Gamepad;

/// @brief Field GearShifter value: I32(42)
static ::Rewired::JoystickType const GearShifter;

/// @brief Field Guitar value: I32(50)
static ::Rewired::JoystickType const Guitar;

/// @brief Field Gun value: I32(83)
static ::Rewired::JoystickType const Gun;

/// @brief Field HOTAS value: I32(21)
static ::Rewired::JoystickType const HOTAS;

/// @brief Field HelicopterController value: I32(122)
static ::Rewired::JoystickType const HelicopterController;

/// @brief Field Joystick value: I32(10)
static ::Rewired::JoystickType const Joystick;

/// @brief Field Keypad value: I32(141)
static ::Rewired::JoystickType const Keypad;

/// @brief Field Paddle value: I32(80)
static ::Rewired::JoystickType const Paddle;

/// @brief Field Pedals value: I32(41)
static ::Rewired::JoystickType const Pedals;

/// @brief Field PointingDevice value: I32(101)
static ::Rewired::JoystickType const PointingDevice;

/// @brief Field RemoteControl value: I32(100)
static ::Rewired::JoystickType const RemoteControl;

/// @brief Field ShipController value: I32(120)
static ::Rewired::JoystickType const ShipController;

/// @brief Field SingleAnalogGamepad value: I32(3)
static ::Rewired::JoystickType const SingleAnalogGamepad;

/// @brief Field Spinner value: I32(81)
static ::Rewired::JoystickType const Spinner;

/// @brief Field Throttle value: I32(20)
static ::Rewired::JoystickType const Throttle;

/// @brief Field ThrottleQuadrant value: I32(24)
static ::Rewired::JoystickType const ThrottleQuadrant;

/// @brief Field Trackball value: I32(82)
static ::Rewired::JoystickType const Trackball;

/// @brief Field TrainController value: I32(121)
static ::Rewired::JoystickType const TrainController;

/// @brief Field TrimWheel value: I32(25)
static ::Rewired::JoystickType const TrimWheel;

/// @brief Field Unknown value: I32(0)
static ::Rewired::JoystickType const Unknown;

/// @brief Field VRController value: I32(150)
static ::Rewired::JoystickType const VRController;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::JoystickType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::JoystickType) == 0x4, "Size mismatch!");

} // namespace end def Rewired
