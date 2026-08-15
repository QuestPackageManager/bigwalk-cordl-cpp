#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/SteamControllerActionOrigin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SteamControllerActionOrigin)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct SteamControllerActionOrigin;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::SteamControllerActionOrigin);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::SteamControllerActionOrigin, "Rewired.ControllerExtensions", "SteamControllerActionOrigin");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.SteamControllerActionOrigin
struct CORDL_TYPE SteamControllerActionOrigin {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SteamControllerActionOrigin_Unwrapped
enum struct __SteamControllerActionOrigin_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_A = static_cast<int32_t>(0x1),
__E_B = static_cast<int32_t>(0x2),
__E_X = static_cast<int32_t>(0x3),
__E_Y = static_cast<int32_t>(0x4),
__E_LeftBumper = static_cast<int32_t>(0x5),
__E_RightBumper = static_cast<int32_t>(0x6),
__E_LeftGrip = static_cast<int32_t>(0x7),
__E_RightGrip = static_cast<int32_t>(0x8),
__E_Start = static_cast<int32_t>(0x9),
__E_Back = static_cast<int32_t>(0xa),
__E_LeftPad_Touch = static_cast<int32_t>(0xb),
__E_LeftPad_Swipe = static_cast<int32_t>(0xc),
__E_LeftPad_Click = static_cast<int32_t>(0xd),
__E_LeftPad_DPadNorth = static_cast<int32_t>(0xe),
__E_LeftPad_DPadSouth = static_cast<int32_t>(0xf),
__E_LeftPad_DPadWest = static_cast<int32_t>(0x10),
__E_LeftPad_DPadEast = static_cast<int32_t>(0x11),
__E_RightPad_Touch = static_cast<int32_t>(0x12),
__E_RightPad_Swipe = static_cast<int32_t>(0x13),
__E_RightPad_Click = static_cast<int32_t>(0x14),
__E_RightPad_DPadNorth = static_cast<int32_t>(0x15),
__E_RightPad_DPadSouth = static_cast<int32_t>(0x16),
__E_RightPad_DPadWest = static_cast<int32_t>(0x17),
__E_RightPad_DPadEast = static_cast<int32_t>(0x18),
__E_LeftTrigger_Pull = static_cast<int32_t>(0x19),
__E_LeftTrigger_Click = static_cast<int32_t>(0x1a),
__E_RightTrigger_Pull = static_cast<int32_t>(0x1b),
__E_RightTrigger_Click = static_cast<int32_t>(0x1c),
__E_LeftStick_Move = static_cast<int32_t>(0x1d),
__E_LeftStick_Click = static_cast<int32_t>(0x1e),
__E_LeftStick_DPadNorth = static_cast<int32_t>(0x1f),
__E_LeftStick_DPadSouth = static_cast<int32_t>(0x20),
__E_LeftStick_DPadWest = static_cast<int32_t>(0x21),
__E_LeftStick_DPadEast = static_cast<int32_t>(0x22),
__E_Gyro_Move = static_cast<int32_t>(0x23),
__E_Gyro_Pitch = static_cast<int32_t>(0x24),
__E_Gyro_Yaw = static_cast<int32_t>(0x25),
__E_Gyro_Roll = static_cast<int32_t>(0x26),
__E_PS4_X = static_cast<int32_t>(0x27),
__E_PS4_Circle = static_cast<int32_t>(0x28),
__E_PS4_Triangle = static_cast<int32_t>(0x29),
__E_PS4_Square = static_cast<int32_t>(0x2a),
__E_PS4_LeftBumper = static_cast<int32_t>(0x2b),
__E_PS4_RightBumper = static_cast<int32_t>(0x2c),
__E_PS4_Options = static_cast<int32_t>(0x2d),
__E_PS4_Share = static_cast<int32_t>(0x2e),
__E_PS4_LeftPad_Touch = static_cast<int32_t>(0x2f),
__E_PS4_LeftPad_Swipe = static_cast<int32_t>(0x30),
__E_PS4_LeftPad_Click = static_cast<int32_t>(0x31),
__E_PS4_LeftPad_DPadNorth = static_cast<int32_t>(0x32),
__E_PS4_LeftPad_DPadSouth = static_cast<int32_t>(0x33),
__E_PS4_LeftPad_DPadWest = static_cast<int32_t>(0x34),
__E_PS4_LeftPad_DPadEast = static_cast<int32_t>(0x35),
__E_PS4_RightPad_Touch = static_cast<int32_t>(0x36),
__E_PS4_RightPad_Swipe = static_cast<int32_t>(0x37),
__E_PS4_RightPad_Click = static_cast<int32_t>(0x38),
__E_PS4_RightPad_DPadNorth = static_cast<int32_t>(0x39),
__E_PS4_RightPad_DPadSouth = static_cast<int32_t>(0x3a),
__E_PS4_RightPad_DPadWest = static_cast<int32_t>(0x3b),
__E_PS4_RightPad_DPadEast = static_cast<int32_t>(0x3c),
__E_PS4_CenterPad_Touch = static_cast<int32_t>(0x3d),
__E_PS4_CenterPad_Swipe = static_cast<int32_t>(0x3e),
__E_PS4_CenterPad_Click = static_cast<int32_t>(0x3f),
__E_PS4_CenterPad_DPadNorth = static_cast<int32_t>(0x40),
__E_PS4_CenterPad_DPadSouth = static_cast<int32_t>(0x41),
__E_PS4_CenterPad_DPadWest = static_cast<int32_t>(0x42),
__E_PS4_CenterPad_DPadEast = static_cast<int32_t>(0x43),
__E_PS4_LeftTrigger_Pull = static_cast<int32_t>(0x44),
__E_PS4_LeftTrigger_Click = static_cast<int32_t>(0x45),
__E_PS4_RightTrigger_Pull = static_cast<int32_t>(0x46),
__E_PS4_RightTrigger_Click = static_cast<int32_t>(0x47),
__E_PS4_LeftStick_Move = static_cast<int32_t>(0x48),
__E_PS4_LeftStick_Click = static_cast<int32_t>(0x49),
__E_PS4_LeftStick_DPadNorth = static_cast<int32_t>(0x4a),
__E_PS4_LeftStick_DPadSouth = static_cast<int32_t>(0x4b),
__E_PS4_LeftStick_DPadWest = static_cast<int32_t>(0x4c),
__E_PS4_LeftStick_DPadEast = static_cast<int32_t>(0x4d),
__E_PS4_RightStick_Move = static_cast<int32_t>(0x4e),
__E_PS4_RightStick_Click = static_cast<int32_t>(0x4f),
__E_PS4_RightStick_DPadNorth = static_cast<int32_t>(0x50),
__E_PS4_RightStick_DPadSouth = static_cast<int32_t>(0x51),
__E_PS4_RightStick_DPadWest = static_cast<int32_t>(0x52),
__E_PS4_RightStick_DPadEast = static_cast<int32_t>(0x53),
__E_PS4_DPad_North = static_cast<int32_t>(0x54),
__E_PS4_DPad_South = static_cast<int32_t>(0x55),
__E_PS4_DPad_West = static_cast<int32_t>(0x56),
__E_PS4_DPad_East = static_cast<int32_t>(0x57),
__E_PS4_Gyro_Move = static_cast<int32_t>(0x58),
__E_PS4_Gyro_Pitch = static_cast<int32_t>(0x59),
__E_PS4_Gyro_Yaw = static_cast<int32_t>(0x5a),
__E_PS4_Gyro_Roll = static_cast<int32_t>(0x5b),
__E_XBoxOne_A = static_cast<int32_t>(0x5c),
__E_XBoxOne_B = static_cast<int32_t>(0x5d),
__E_XBoxOne_X = static_cast<int32_t>(0x5e),
__E_XBoxOne_Y = static_cast<int32_t>(0x5f),
__E_XBoxOne_LeftBumper = static_cast<int32_t>(0x60),
__E_XBoxOne_RightBumper = static_cast<int32_t>(0x61),
__E_XBoxOne_Menu = static_cast<int32_t>(0x62),
__E_XBoxOne_View = static_cast<int32_t>(0x63),
__E_XBoxOne_LeftTrigger_Pull = static_cast<int32_t>(0x64),
__E_XBoxOne_LeftTrigger_Click = static_cast<int32_t>(0x65),
__E_XBoxOne_RightTrigger_Pull = static_cast<int32_t>(0x66),
__E_XBoxOne_RightTrigger_Click = static_cast<int32_t>(0x67),
__E_XBoxOne_LeftStick_Move = static_cast<int32_t>(0x68),
__E_XBoxOne_LeftStick_Click = static_cast<int32_t>(0x69),
__E_XBoxOne_LeftStick_DPadNorth = static_cast<int32_t>(0x6a),
__E_XBoxOne_LeftStick_DPadSouth = static_cast<int32_t>(0x6b),
__E_XBoxOne_LeftStick_DPadWest = static_cast<int32_t>(0x6c),
__E_XBoxOne_LeftStick_DPadEast = static_cast<int32_t>(0x6d),
__E_XBoxOne_RightStick_Move = static_cast<int32_t>(0x6e),
__E_XBoxOne_RightStick_Click = static_cast<int32_t>(0x6f),
__E_XBoxOne_RightStick_DPadNorth = static_cast<int32_t>(0x70),
__E_XBoxOne_RightStick_DPadSouth = static_cast<int32_t>(0x71),
__E_XBoxOne_RightStick_DPadWest = static_cast<int32_t>(0x72),
__E_XBoxOne_RightStick_DPadEast = static_cast<int32_t>(0x73),
__E_XBoxOne_DPad_North = static_cast<int32_t>(0x74),
__E_XBoxOne_DPad_South = static_cast<int32_t>(0x75),
__E_XBoxOne_DPad_West = static_cast<int32_t>(0x76),
__E_XBoxOne_DPad_East = static_cast<int32_t>(0x77),
__E_XBox360_A = static_cast<int32_t>(0x78),
__E_XBox360_B = static_cast<int32_t>(0x79),
__E_XBox360_X = static_cast<int32_t>(0x7a),
__E_XBox360_Y = static_cast<int32_t>(0x7b),
__E_XBox360_LeftBumper = static_cast<int32_t>(0x7c),
__E_XBox360_RightBumper = static_cast<int32_t>(0x7d),
__E_XBox360_Start = static_cast<int32_t>(0x7e),
__E_XBox360_Back = static_cast<int32_t>(0x7f),
__E_XBox360_LeftTrigger_Pull = static_cast<int32_t>(0x80),
__E_XBox360_LeftTrigger_Click = static_cast<int32_t>(0x81),
__E_XBox360_RightTrigger_Pull = static_cast<int32_t>(0x82),
__E_XBox360_RightTrigger_Click = static_cast<int32_t>(0x83),
__E_XBox360_LeftStick_Move = static_cast<int32_t>(0x84),
__E_XBox360_LeftStick_Click = static_cast<int32_t>(0x85),
__E_XBox360_LeftStick_DPadNorth = static_cast<int32_t>(0x86),
__E_XBox360_LeftStick_DPadSouth = static_cast<int32_t>(0x87),
__E_XBox360_LeftStick_DPadWest = static_cast<int32_t>(0x88),
__E_XBox360_LeftStick_DPadEast = static_cast<int32_t>(0x89),
__E_XBox360_RightStick_Move = static_cast<int32_t>(0x8a),
__E_XBox360_RightStick_Click = static_cast<int32_t>(0x8b),
__E_XBox360_RightStick_DPadNorth = static_cast<int32_t>(0x8c),
__E_XBox360_RightStick_DPadSouth = static_cast<int32_t>(0x8d),
__E_XBox360_RightStick_DPadWest = static_cast<int32_t>(0x8e),
__E_XBox360_RightStick_DPadEast = static_cast<int32_t>(0x8f),
__E_XBox360_DPad_North = static_cast<int32_t>(0x90),
__E_XBox360_DPad_South = static_cast<int32_t>(0x91),
__E_XBox360_DPad_West = static_cast<int32_t>(0x92),
__E_XBox360_DPad_East = static_cast<int32_t>(0x93),
__E_SteamV2_A = static_cast<int32_t>(0x94),
__E_SteamV2_B = static_cast<int32_t>(0x95),
__E_SteamV2_X = static_cast<int32_t>(0x96),
__E_SteamV2_Y = static_cast<int32_t>(0x97),
__E_SteamV2_LeftBumper = static_cast<int32_t>(0x98),
__E_SteamV2_RightBumper = static_cast<int32_t>(0x99),
__E_SteamV2_LeftGrip = static_cast<int32_t>(0x9a),
__E_SteamV2_RightGrip = static_cast<int32_t>(0x9b),
__E_SteamV2_LeftGrip_Upper = static_cast<int32_t>(0x9c),
__E_SteamV2_RightGrip_Upper = static_cast<int32_t>(0x9d),
__E_SteamV2_LeftBumper_Pressure = static_cast<int32_t>(0x9e),
__E_SteamV2_RightBumper_Pressure = static_cast<int32_t>(0x9f),
__E_SteamV2_LeftGrip_Pressure = static_cast<int32_t>(0xa0),
__E_SteamV2_RightGrip_Pressure = static_cast<int32_t>(0xa1),
__E_SteamV2_LeftGrip_Upper_Pressure = static_cast<int32_t>(0xa2),
__E_SteamV2_RightGrip_Upper_Pressure = static_cast<int32_t>(0xa3),
__E_SteamV2_Start = static_cast<int32_t>(0xa4),
__E_SteamV2_Back = static_cast<int32_t>(0xa5),
__E_SteamV2_LeftPad_Touch = static_cast<int32_t>(0xa6),
__E_SteamV2_LeftPad_Swipe = static_cast<int32_t>(0xa7),
__E_SteamV2_LeftPad_Click = static_cast<int32_t>(0xa8),
__E_SteamV2_LeftPad_Pressure = static_cast<int32_t>(0xa9),
__E_SteamV2_LeftPad_DPadNorth = static_cast<int32_t>(0xaa),
__E_SteamV2_LeftPad_DPadSouth = static_cast<int32_t>(0xab),
__E_SteamV2_LeftPad_DPadWest = static_cast<int32_t>(0xac),
__E_SteamV2_LeftPad_DPadEast = static_cast<int32_t>(0xad),
__E_SteamV2_RightPad_Touch = static_cast<int32_t>(0xae),
__E_SteamV2_RightPad_Swipe = static_cast<int32_t>(0xaf),
__E_SteamV2_RightPad_Click = static_cast<int32_t>(0xb0),
__E_SteamV2_RightPad_Pressure = static_cast<int32_t>(0xb1),
__E_SteamV2_RightPad_DPadNorth = static_cast<int32_t>(0xb2),
__E_SteamV2_RightPad_DPadSouth = static_cast<int32_t>(0xb3),
__E_SteamV2_RightPad_DPadWest = static_cast<int32_t>(0xb4),
__E_SteamV2_RightPad_DPadEast = static_cast<int32_t>(0xb5),
__E_SteamV2_LeftTrigger_Pull = static_cast<int32_t>(0xb6),
__E_SteamV2_LeftTrigger_Click = static_cast<int32_t>(0xb7),
__E_SteamV2_RightTrigger_Pull = static_cast<int32_t>(0xb8),
__E_SteamV2_RightTrigger_Click = static_cast<int32_t>(0xb9),
__E_SteamV2_LeftStick_Move = static_cast<int32_t>(0xba),
__E_SteamV2_LeftStick_Click = static_cast<int32_t>(0xbb),
__E_SteamV2_LeftStick_DPadNorth = static_cast<int32_t>(0xbc),
__E_SteamV2_LeftStick_DPadSouth = static_cast<int32_t>(0xbd),
__E_SteamV2_LeftStick_DPadWest = static_cast<int32_t>(0xbe),
__E_SteamV2_LeftStick_DPadEast = static_cast<int32_t>(0xbf),
__E_SteamV2_Gyro_Move = static_cast<int32_t>(0xc0),
__E_SteamV2_Gyro_Pitch = static_cast<int32_t>(0xc1),
__E_SteamV2_Gyro_Yaw = static_cast<int32_t>(0xc2),
__E_SteamV2_Gyro_Roll = static_cast<int32_t>(0xc3),
__E_Count = static_cast<int32_t>(0xc4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SteamControllerActionOrigin_Unwrapped () const noexcept {
return static_cast<__SteamControllerActionOrigin_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SteamControllerActionOrigin() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SteamControllerActionOrigin(int32_t  value__) noexcept;

/// @brief Field A value: I32(1)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const A;

/// @brief Field B value: I32(2)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const B;

/// @brief Field Back value: I32(10)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const Back;

/// @brief Field Count value: I32(196)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const Count;

/// @brief Field Gyro_Move value: I32(35)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const Gyro_Move;

/// @brief Field Gyro_Pitch value: I32(36)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const Gyro_Pitch;

/// @brief Field Gyro_Roll value: I32(38)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const Gyro_Roll;

/// @brief Field Gyro_Yaw value: I32(37)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const Gyro_Yaw;

/// @brief Field LeftBumper value: I32(5)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftBumper;

/// @brief Field LeftGrip value: I32(7)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftGrip;

/// @brief Field LeftPad_Click value: I32(13)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftPad_Click;

/// @brief Field LeftPad_DPadEast value: I32(17)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftPad_DPadEast;

/// @brief Field LeftPad_DPadNorth value: I32(14)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftPad_DPadNorth;

/// @brief Field LeftPad_DPadSouth value: I32(15)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftPad_DPadSouth;

/// @brief Field LeftPad_DPadWest value: I32(16)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftPad_DPadWest;

/// @brief Field LeftPad_Swipe value: I32(12)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftPad_Swipe;

/// @brief Field LeftPad_Touch value: I32(11)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftPad_Touch;

/// @brief Field LeftStick_Click value: I32(30)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftStick_Click;

/// @brief Field LeftStick_DPadEast value: I32(34)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftStick_DPadEast;

/// @brief Field LeftStick_DPadNorth value: I32(31)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftStick_DPadNorth;

/// @brief Field LeftStick_DPadSouth value: I32(32)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftStick_DPadSouth;

/// @brief Field LeftStick_DPadWest value: I32(33)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftStick_DPadWest;

/// @brief Field LeftStick_Move value: I32(29)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftStick_Move;

/// @brief Field LeftTrigger_Click value: I32(26)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftTrigger_Click;

/// @brief Field LeftTrigger_Pull value: I32(25)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const LeftTrigger_Pull;

/// @brief Field None value: I32(0)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const None;

/// @brief Field PS4_CenterPad_Click value: I32(63)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_CenterPad_Click;

/// @brief Field PS4_CenterPad_DPadEast value: I32(67)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_CenterPad_DPadEast;

/// @brief Field PS4_CenterPad_DPadNorth value: I32(64)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_CenterPad_DPadNorth;

/// @brief Field PS4_CenterPad_DPadSouth value: I32(65)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_CenterPad_DPadSouth;

/// @brief Field PS4_CenterPad_DPadWest value: I32(66)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_CenterPad_DPadWest;

/// @brief Field PS4_CenterPad_Swipe value: I32(62)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_CenterPad_Swipe;

/// @brief Field PS4_CenterPad_Touch value: I32(61)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_CenterPad_Touch;

/// @brief Field PS4_Circle value: I32(40)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_Circle;

/// @brief Field PS4_DPad_East value: I32(87)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_DPad_East;

/// @brief Field PS4_DPad_North value: I32(84)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_DPad_North;

/// @brief Field PS4_DPad_South value: I32(85)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_DPad_South;

/// @brief Field PS4_DPad_West value: I32(86)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_DPad_West;

/// @brief Field PS4_Gyro_Move value: I32(88)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_Gyro_Move;

/// @brief Field PS4_Gyro_Pitch value: I32(89)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_Gyro_Pitch;

/// @brief Field PS4_Gyro_Roll value: I32(91)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_Gyro_Roll;

/// @brief Field PS4_Gyro_Yaw value: I32(90)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_Gyro_Yaw;

/// @brief Field PS4_LeftBumper value: I32(43)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftBumper;

/// @brief Field PS4_LeftPad_Click value: I32(49)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftPad_Click;

/// @brief Field PS4_LeftPad_DPadEast value: I32(53)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftPad_DPadEast;

/// @brief Field PS4_LeftPad_DPadNorth value: I32(50)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftPad_DPadNorth;

/// @brief Field PS4_LeftPad_DPadSouth value: I32(51)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftPad_DPadSouth;

/// @brief Field PS4_LeftPad_DPadWest value: I32(52)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftPad_DPadWest;

/// @brief Field PS4_LeftPad_Swipe value: I32(48)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftPad_Swipe;

/// @brief Field PS4_LeftPad_Touch value: I32(47)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftPad_Touch;

/// @brief Field PS4_LeftStick_Click value: I32(73)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftStick_Click;

/// @brief Field PS4_LeftStick_DPadEast value: I32(77)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftStick_DPadEast;

/// @brief Field PS4_LeftStick_DPadNorth value: I32(74)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftStick_DPadNorth;

/// @brief Field PS4_LeftStick_DPadSouth value: I32(75)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftStick_DPadSouth;

/// @brief Field PS4_LeftStick_DPadWest value: I32(76)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftStick_DPadWest;

/// @brief Field PS4_LeftStick_Move value: I32(72)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftStick_Move;

/// @brief Field PS4_LeftTrigger_Click value: I32(69)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftTrigger_Click;

/// @brief Field PS4_LeftTrigger_Pull value: I32(68)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_LeftTrigger_Pull;

/// @brief Field PS4_Options value: I32(45)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_Options;

/// @brief Field PS4_RightBumper value: I32(44)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightBumper;

/// @brief Field PS4_RightPad_Click value: I32(56)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightPad_Click;

/// @brief Field PS4_RightPad_DPadEast value: I32(60)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightPad_DPadEast;

/// @brief Field PS4_RightPad_DPadNorth value: I32(57)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightPad_DPadNorth;

/// @brief Field PS4_RightPad_DPadSouth value: I32(58)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightPad_DPadSouth;

/// @brief Field PS4_RightPad_DPadWest value: I32(59)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightPad_DPadWest;

/// @brief Field PS4_RightPad_Swipe value: I32(55)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightPad_Swipe;

/// @brief Field PS4_RightPad_Touch value: I32(54)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightPad_Touch;

/// @brief Field PS4_RightStick_Click value: I32(79)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightStick_Click;

/// @brief Field PS4_RightStick_DPadEast value: I32(83)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightStick_DPadEast;

/// @brief Field PS4_RightStick_DPadNorth value: I32(80)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightStick_DPadNorth;

/// @brief Field PS4_RightStick_DPadSouth value: I32(81)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightStick_DPadSouth;

/// @brief Field PS4_RightStick_DPadWest value: I32(82)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightStick_DPadWest;

/// @brief Field PS4_RightStick_Move value: I32(78)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightStick_Move;

/// @brief Field PS4_RightTrigger_Click value: I32(71)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightTrigger_Click;

/// @brief Field PS4_RightTrigger_Pull value: I32(70)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_RightTrigger_Pull;

/// @brief Field PS4_Share value: I32(46)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_Share;

/// @brief Field PS4_Square value: I32(42)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_Square;

/// @brief Field PS4_Triangle value: I32(41)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_Triangle;

/// @brief Field PS4_X value: I32(39)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const PS4_X;

/// @brief Field RightBumper value: I32(6)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightBumper;

/// @brief Field RightGrip value: I32(8)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightGrip;

/// @brief Field RightPad_Click value: I32(20)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightPad_Click;

/// @brief Field RightPad_DPadEast value: I32(24)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightPad_DPadEast;

/// @brief Field RightPad_DPadNorth value: I32(21)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightPad_DPadNorth;

/// @brief Field RightPad_DPadSouth value: I32(22)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightPad_DPadSouth;

/// @brief Field RightPad_DPadWest value: I32(23)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightPad_DPadWest;

/// @brief Field RightPad_Swipe value: I32(19)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightPad_Swipe;

/// @brief Field RightPad_Touch value: I32(18)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightPad_Touch;

/// @brief Field RightTrigger_Click value: I32(28)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightTrigger_Click;

/// @brief Field RightTrigger_Pull value: I32(27)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const RightTrigger_Pull;

/// @brief Field Start value: I32(9)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const Start;

/// @brief Field SteamV2_A value: I32(148)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_A;

/// @brief Field SteamV2_B value: I32(149)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_B;

/// @brief Field SteamV2_Back value: I32(165)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_Back;

/// @brief Field SteamV2_Gyro_Move value: I32(192)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_Gyro_Move;

/// @brief Field SteamV2_Gyro_Pitch value: I32(193)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_Gyro_Pitch;

/// @brief Field SteamV2_Gyro_Roll value: I32(195)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_Gyro_Roll;

/// @brief Field SteamV2_Gyro_Yaw value: I32(194)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_Gyro_Yaw;

/// @brief Field SteamV2_LeftBumper value: I32(152)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftBumper;

/// @brief Field SteamV2_LeftBumper_Pressure value: I32(158)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftBumper_Pressure;

/// @brief Field SteamV2_LeftGrip value: I32(154)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftGrip;

/// @brief Field SteamV2_LeftGrip_Pressure value: I32(160)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftGrip_Pressure;

/// @brief Field SteamV2_LeftGrip_Upper value: I32(156)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftGrip_Upper;

/// @brief Field SteamV2_LeftGrip_Upper_Pressure value: I32(162)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftGrip_Upper_Pressure;

/// @brief Field SteamV2_LeftPad_Click value: I32(168)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftPad_Click;

/// @brief Field SteamV2_LeftPad_DPadEast value: I32(173)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftPad_DPadEast;

/// @brief Field SteamV2_LeftPad_DPadNorth value: I32(170)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftPad_DPadNorth;

/// @brief Field SteamV2_LeftPad_DPadSouth value: I32(171)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftPad_DPadSouth;

/// @brief Field SteamV2_LeftPad_DPadWest value: I32(172)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftPad_DPadWest;

/// @brief Field SteamV2_LeftPad_Pressure value: I32(169)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftPad_Pressure;

/// @brief Field SteamV2_LeftPad_Swipe value: I32(167)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftPad_Swipe;

/// @brief Field SteamV2_LeftPad_Touch value: I32(166)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftPad_Touch;

/// @brief Field SteamV2_LeftStick_Click value: I32(187)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftStick_Click;

/// @brief Field SteamV2_LeftStick_DPadEast value: I32(191)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftStick_DPadEast;

/// @brief Field SteamV2_LeftStick_DPadNorth value: I32(188)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftStick_DPadNorth;

/// @brief Field SteamV2_LeftStick_DPadSouth value: I32(189)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftStick_DPadSouth;

/// @brief Field SteamV2_LeftStick_DPadWest value: I32(190)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftStick_DPadWest;

/// @brief Field SteamV2_LeftStick_Move value: I32(186)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftStick_Move;

/// @brief Field SteamV2_LeftTrigger_Click value: I32(183)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftTrigger_Click;

/// @brief Field SteamV2_LeftTrigger_Pull value: I32(182)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_LeftTrigger_Pull;

/// @brief Field SteamV2_RightBumper value: I32(153)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightBumper;

/// @brief Field SteamV2_RightBumper_Pressure value: I32(159)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightBumper_Pressure;

/// @brief Field SteamV2_RightGrip value: I32(155)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightGrip;

/// @brief Field SteamV2_RightGrip_Pressure value: I32(161)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightGrip_Pressure;

/// @brief Field SteamV2_RightGrip_Upper value: I32(157)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightGrip_Upper;

/// @brief Field SteamV2_RightGrip_Upper_Pressure value: I32(163)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightGrip_Upper_Pressure;

/// @brief Field SteamV2_RightPad_Click value: I32(176)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightPad_Click;

/// @brief Field SteamV2_RightPad_DPadEast value: I32(181)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightPad_DPadEast;

/// @brief Field SteamV2_RightPad_DPadNorth value: I32(178)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightPad_DPadNorth;

/// @brief Field SteamV2_RightPad_DPadSouth value: I32(179)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightPad_DPadSouth;

/// @brief Field SteamV2_RightPad_DPadWest value: I32(180)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightPad_DPadWest;

/// @brief Field SteamV2_RightPad_Pressure value: I32(177)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightPad_Pressure;

/// @brief Field SteamV2_RightPad_Swipe value: I32(175)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightPad_Swipe;

/// @brief Field SteamV2_RightPad_Touch value: I32(174)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightPad_Touch;

/// @brief Field SteamV2_RightTrigger_Click value: I32(185)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightTrigger_Click;

/// @brief Field SteamV2_RightTrigger_Pull value: I32(184)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_RightTrigger_Pull;

/// @brief Field SteamV2_Start value: I32(164)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_Start;

/// @brief Field SteamV2_X value: I32(150)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_X;

/// @brief Field SteamV2_Y value: I32(151)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const SteamV2_Y;

/// @brief Field X value: I32(3)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const X;

/// @brief Field XBox360_A value: I32(120)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_A;

/// @brief Field XBox360_B value: I32(121)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_B;

/// @brief Field XBox360_Back value: I32(127)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_Back;

/// @brief Field XBox360_DPad_East value: I32(147)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_DPad_East;

/// @brief Field XBox360_DPad_North value: I32(144)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_DPad_North;

/// @brief Field XBox360_DPad_South value: I32(145)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_DPad_South;

/// @brief Field XBox360_DPad_West value: I32(146)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_DPad_West;

/// @brief Field XBox360_LeftBumper value: I32(124)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_LeftBumper;

/// @brief Field XBox360_LeftStick_Click value: I32(133)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_LeftStick_Click;

/// @brief Field XBox360_LeftStick_DPadEast value: I32(137)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_LeftStick_DPadEast;

/// @brief Field XBox360_LeftStick_DPadNorth value: I32(134)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_LeftStick_DPadNorth;

/// @brief Field XBox360_LeftStick_DPadSouth value: I32(135)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_LeftStick_DPadSouth;

/// @brief Field XBox360_LeftStick_DPadWest value: I32(136)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_LeftStick_DPadWest;

/// @brief Field XBox360_LeftStick_Move value: I32(132)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_LeftStick_Move;

/// @brief Field XBox360_LeftTrigger_Click value: I32(129)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_LeftTrigger_Click;

/// @brief Field XBox360_LeftTrigger_Pull value: I32(128)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_LeftTrigger_Pull;

/// @brief Field XBox360_RightBumper value: I32(125)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_RightBumper;

/// @brief Field XBox360_RightStick_Click value: I32(139)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_RightStick_Click;

/// @brief Field XBox360_RightStick_DPadEast value: I32(143)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_RightStick_DPadEast;

/// @brief Field XBox360_RightStick_DPadNorth value: I32(140)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_RightStick_DPadNorth;

/// @brief Field XBox360_RightStick_DPadSouth value: I32(141)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_RightStick_DPadSouth;

/// @brief Field XBox360_RightStick_DPadWest value: I32(142)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_RightStick_DPadWest;

/// @brief Field XBox360_RightStick_Move value: I32(138)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_RightStick_Move;

/// @brief Field XBox360_RightTrigger_Click value: I32(131)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_RightTrigger_Click;

/// @brief Field XBox360_RightTrigger_Pull value: I32(130)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_RightTrigger_Pull;

/// @brief Field XBox360_Start value: I32(126)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_Start;

/// @brief Field XBox360_X value: I32(122)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_X;

/// @brief Field XBox360_Y value: I32(123)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBox360_Y;

/// @brief Field XBoxOne_A value: I32(92)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_A;

/// @brief Field XBoxOne_B value: I32(93)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_B;

/// @brief Field XBoxOne_DPad_East value: I32(119)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_DPad_East;

/// @brief Field XBoxOne_DPad_North value: I32(116)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_DPad_North;

/// @brief Field XBoxOne_DPad_South value: I32(117)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_DPad_South;

/// @brief Field XBoxOne_DPad_West value: I32(118)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_DPad_West;

/// @brief Field XBoxOne_LeftBumper value: I32(96)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_LeftBumper;

/// @brief Field XBoxOne_LeftStick_Click value: I32(105)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_LeftStick_Click;

/// @brief Field XBoxOne_LeftStick_DPadEast value: I32(109)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_LeftStick_DPadEast;

/// @brief Field XBoxOne_LeftStick_DPadNorth value: I32(106)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_LeftStick_DPadNorth;

/// @brief Field XBoxOne_LeftStick_DPadSouth value: I32(107)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_LeftStick_DPadSouth;

/// @brief Field XBoxOne_LeftStick_DPadWest value: I32(108)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_LeftStick_DPadWest;

/// @brief Field XBoxOne_LeftStick_Move value: I32(104)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_LeftStick_Move;

/// @brief Field XBoxOne_LeftTrigger_Click value: I32(101)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_LeftTrigger_Click;

/// @brief Field XBoxOne_LeftTrigger_Pull value: I32(100)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_LeftTrigger_Pull;

/// @brief Field XBoxOne_Menu value: I32(98)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_Menu;

/// @brief Field XBoxOne_RightBumper value: I32(97)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_RightBumper;

/// @brief Field XBoxOne_RightStick_Click value: I32(111)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_RightStick_Click;

/// @brief Field XBoxOne_RightStick_DPadEast value: I32(115)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_RightStick_DPadEast;

/// @brief Field XBoxOne_RightStick_DPadNorth value: I32(112)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_RightStick_DPadNorth;

/// @brief Field XBoxOne_RightStick_DPadSouth value: I32(113)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_RightStick_DPadSouth;

/// @brief Field XBoxOne_RightStick_DPadWest value: I32(114)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_RightStick_DPadWest;

/// @brief Field XBoxOne_RightStick_Move value: I32(110)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_RightStick_Move;

/// @brief Field XBoxOne_RightTrigger_Click value: I32(103)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_RightTrigger_Click;

/// @brief Field XBoxOne_RightTrigger_Pull value: I32(102)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_RightTrigger_Pull;

/// @brief Field XBoxOne_View value: I32(99)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_View;

/// @brief Field XBoxOne_X value: I32(94)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_X;

/// @brief Field XBoxOne_Y value: I32(95)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const XBoxOne_Y;

/// @brief Field Y value: I32(4)
static ::Rewired::ControllerExtensions::SteamControllerActionOrigin const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2714};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::SteamControllerActionOrigin, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::SteamControllerActionOrigin) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
