#pragma once
// IWYU pragma private; include "Steamworks/EInputActionOrigin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EInputActionOrigin)
// Forward declare root types
namespace Steamworks {
struct EInputActionOrigin;
}
// Write type traits
MARK_VAL_T(::Steamworks::EInputActionOrigin);
DEFINE_IL2CPP_CLASS(::Steamworks::EInputActionOrigin, "Steamworks", "EInputActionOrigin");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EInputActionOrigin
struct CORDL_TYPE EInputActionOrigin {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EInputActionOrigin_Unwrapped
enum struct __EInputActionOrigin_Unwrapped : int32_t {
__E_k_EInputActionOrigin_None = static_cast<int32_t>(0x0),
__E_k_EInputActionOrigin_SteamController_A = static_cast<int32_t>(0x1),
__E_k_EInputActionOrigin_SteamController_B = static_cast<int32_t>(0x2),
__E_k_EInputActionOrigin_SteamController_X = static_cast<int32_t>(0x3),
__E_k_EInputActionOrigin_SteamController_Y = static_cast<int32_t>(0x4),
__E_k_EInputActionOrigin_SteamController_LeftBumper = static_cast<int32_t>(0x5),
__E_k_EInputActionOrigin_SteamController_RightBumper = static_cast<int32_t>(0x6),
__E_k_EInputActionOrigin_SteamController_LeftGrip = static_cast<int32_t>(0x7),
__E_k_EInputActionOrigin_SteamController_RightGrip = static_cast<int32_t>(0x8),
__E_k_EInputActionOrigin_SteamController_Start = static_cast<int32_t>(0x9),
__E_k_EInputActionOrigin_SteamController_Back = static_cast<int32_t>(0xa),
__E_k_EInputActionOrigin_SteamController_LeftPad_Touch = static_cast<int32_t>(0xb),
__E_k_EInputActionOrigin_SteamController_LeftPad_Swipe = static_cast<int32_t>(0xc),
__E_k_EInputActionOrigin_SteamController_LeftPad_Click = static_cast<int32_t>(0xd),
__E_k_EInputActionOrigin_SteamController_LeftPad_DPadNorth = static_cast<int32_t>(0xe),
__E_k_EInputActionOrigin_SteamController_LeftPad_DPadSouth = static_cast<int32_t>(0xf),
__E_k_EInputActionOrigin_SteamController_LeftPad_DPadWest = static_cast<int32_t>(0x10),
__E_k_EInputActionOrigin_SteamController_LeftPad_DPadEast = static_cast<int32_t>(0x11),
__E_k_EInputActionOrigin_SteamController_RightPad_Touch = static_cast<int32_t>(0x12),
__E_k_EInputActionOrigin_SteamController_RightPad_Swipe = static_cast<int32_t>(0x13),
__E_k_EInputActionOrigin_SteamController_RightPad_Click = static_cast<int32_t>(0x14),
__E_k_EInputActionOrigin_SteamController_RightPad_DPadNorth = static_cast<int32_t>(0x15),
__E_k_EInputActionOrigin_SteamController_RightPad_DPadSouth = static_cast<int32_t>(0x16),
__E_k_EInputActionOrigin_SteamController_RightPad_DPadWest = static_cast<int32_t>(0x17),
__E_k_EInputActionOrigin_SteamController_RightPad_DPadEast = static_cast<int32_t>(0x18),
__E_k_EInputActionOrigin_SteamController_LeftTrigger_Pull = static_cast<int32_t>(0x19),
__E_k_EInputActionOrigin_SteamController_LeftTrigger_Click = static_cast<int32_t>(0x1a),
__E_k_EInputActionOrigin_SteamController_RightTrigger_Pull = static_cast<int32_t>(0x1b),
__E_k_EInputActionOrigin_SteamController_RightTrigger_Click = static_cast<int32_t>(0x1c),
__E_k_EInputActionOrigin_SteamController_LeftStick_Move = static_cast<int32_t>(0x1d),
__E_k_EInputActionOrigin_SteamController_LeftStick_Click = static_cast<int32_t>(0x1e),
__E_k_EInputActionOrigin_SteamController_LeftStick_DPadNorth = static_cast<int32_t>(0x1f),
__E_k_EInputActionOrigin_SteamController_LeftStick_DPadSouth = static_cast<int32_t>(0x20),
__E_k_EInputActionOrigin_SteamController_LeftStick_DPadWest = static_cast<int32_t>(0x21),
__E_k_EInputActionOrigin_SteamController_LeftStick_DPadEast = static_cast<int32_t>(0x22),
__E_k_EInputActionOrigin_SteamController_Gyro_Move = static_cast<int32_t>(0x23),
__E_k_EInputActionOrigin_SteamController_Gyro_Pitch = static_cast<int32_t>(0x24),
__E_k_EInputActionOrigin_SteamController_Gyro_Yaw = static_cast<int32_t>(0x25),
__E_k_EInputActionOrigin_SteamController_Gyro_Roll = static_cast<int32_t>(0x26),
__E_k_EInputActionOrigin_SteamController_Reserved0 = static_cast<int32_t>(0x27),
__E_k_EInputActionOrigin_SteamController_Reserved1 = static_cast<int32_t>(0x28),
__E_k_EInputActionOrigin_SteamController_Reserved2 = static_cast<int32_t>(0x29),
__E_k_EInputActionOrigin_SteamController_Reserved3 = static_cast<int32_t>(0x2a),
__E_k_EInputActionOrigin_SteamController_Reserved4 = static_cast<int32_t>(0x2b),
__E_k_EInputActionOrigin_SteamController_Reserved5 = static_cast<int32_t>(0x2c),
__E_k_EInputActionOrigin_SteamController_Reserved6 = static_cast<int32_t>(0x2d),
__E_k_EInputActionOrigin_SteamController_Reserved7 = static_cast<int32_t>(0x2e),
__E_k_EInputActionOrigin_SteamController_Reserved8 = static_cast<int32_t>(0x2f),
__E_k_EInputActionOrigin_SteamController_Reserved9 = static_cast<int32_t>(0x30),
__E_k_EInputActionOrigin_SteamController_Reserved10 = static_cast<int32_t>(0x31),
__E_k_EInputActionOrigin_PS4_X = static_cast<int32_t>(0x32),
__E_k_EInputActionOrigin_PS4_Circle = static_cast<int32_t>(0x33),
__E_k_EInputActionOrigin_PS4_Triangle = static_cast<int32_t>(0x34),
__E_k_EInputActionOrigin_PS4_Square = static_cast<int32_t>(0x35),
__E_k_EInputActionOrigin_PS4_LeftBumper = static_cast<int32_t>(0x36),
__E_k_EInputActionOrigin_PS4_RightBumper = static_cast<int32_t>(0x37),
__E_k_EInputActionOrigin_PS4_Options = static_cast<int32_t>(0x38),
__E_k_EInputActionOrigin_PS4_Share = static_cast<int32_t>(0x39),
__E_k_EInputActionOrigin_PS4_LeftPad_Touch = static_cast<int32_t>(0x3a),
__E_k_EInputActionOrigin_PS4_LeftPad_Swipe = static_cast<int32_t>(0x3b),
__E_k_EInputActionOrigin_PS4_LeftPad_Click = static_cast<int32_t>(0x3c),
__E_k_EInputActionOrigin_PS4_LeftPad_DPadNorth = static_cast<int32_t>(0x3d),
__E_k_EInputActionOrigin_PS4_LeftPad_DPadSouth = static_cast<int32_t>(0x3e),
__E_k_EInputActionOrigin_PS4_LeftPad_DPadWest = static_cast<int32_t>(0x3f),
__E_k_EInputActionOrigin_PS4_LeftPad_DPadEast = static_cast<int32_t>(0x40),
__E_k_EInputActionOrigin_PS4_RightPad_Touch = static_cast<int32_t>(0x41),
__E_k_EInputActionOrigin_PS4_RightPad_Swipe = static_cast<int32_t>(0x42),
__E_k_EInputActionOrigin_PS4_RightPad_Click = static_cast<int32_t>(0x43),
__E_k_EInputActionOrigin_PS4_RightPad_DPadNorth = static_cast<int32_t>(0x44),
__E_k_EInputActionOrigin_PS4_RightPad_DPadSouth = static_cast<int32_t>(0x45),
__E_k_EInputActionOrigin_PS4_RightPad_DPadWest = static_cast<int32_t>(0x46),
__E_k_EInputActionOrigin_PS4_RightPad_DPadEast = static_cast<int32_t>(0x47),
__E_k_EInputActionOrigin_PS4_CenterPad_Touch = static_cast<int32_t>(0x48),
__E_k_EInputActionOrigin_PS4_CenterPad_Swipe = static_cast<int32_t>(0x49),
__E_k_EInputActionOrigin_PS4_CenterPad_Click = static_cast<int32_t>(0x4a),
__E_k_EInputActionOrigin_PS4_CenterPad_DPadNorth = static_cast<int32_t>(0x4b),
__E_k_EInputActionOrigin_PS4_CenterPad_DPadSouth = static_cast<int32_t>(0x4c),
__E_k_EInputActionOrigin_PS4_CenterPad_DPadWest = static_cast<int32_t>(0x4d),
__E_k_EInputActionOrigin_PS4_CenterPad_DPadEast = static_cast<int32_t>(0x4e),
__E_k_EInputActionOrigin_PS4_LeftTrigger_Pull = static_cast<int32_t>(0x4f),
__E_k_EInputActionOrigin_PS4_LeftTrigger_Click = static_cast<int32_t>(0x50),
__E_k_EInputActionOrigin_PS4_RightTrigger_Pull = static_cast<int32_t>(0x51),
__E_k_EInputActionOrigin_PS4_RightTrigger_Click = static_cast<int32_t>(0x52),
__E_k_EInputActionOrigin_PS4_LeftStick_Move = static_cast<int32_t>(0x53),
__E_k_EInputActionOrigin_PS4_LeftStick_Click = static_cast<int32_t>(0x54),
__E_k_EInputActionOrigin_PS4_LeftStick_DPadNorth = static_cast<int32_t>(0x55),
__E_k_EInputActionOrigin_PS4_LeftStick_DPadSouth = static_cast<int32_t>(0x56),
__E_k_EInputActionOrigin_PS4_LeftStick_DPadWest = static_cast<int32_t>(0x57),
__E_k_EInputActionOrigin_PS4_LeftStick_DPadEast = static_cast<int32_t>(0x58),
__E_k_EInputActionOrigin_PS4_RightStick_Move = static_cast<int32_t>(0x59),
__E_k_EInputActionOrigin_PS4_RightStick_Click = static_cast<int32_t>(0x5a),
__E_k_EInputActionOrigin_PS4_RightStick_DPadNorth = static_cast<int32_t>(0x5b),
__E_k_EInputActionOrigin_PS4_RightStick_DPadSouth = static_cast<int32_t>(0x5c),
__E_k_EInputActionOrigin_PS4_RightStick_DPadWest = static_cast<int32_t>(0x5d),
__E_k_EInputActionOrigin_PS4_RightStick_DPadEast = static_cast<int32_t>(0x5e),
__E_k_EInputActionOrigin_PS4_DPad_North = static_cast<int32_t>(0x5f),
__E_k_EInputActionOrigin_PS4_DPad_South = static_cast<int32_t>(0x60),
__E_k_EInputActionOrigin_PS4_DPad_West = static_cast<int32_t>(0x61),
__E_k_EInputActionOrigin_PS4_DPad_East = static_cast<int32_t>(0x62),
__E_k_EInputActionOrigin_PS4_Gyro_Move = static_cast<int32_t>(0x63),
__E_k_EInputActionOrigin_PS4_Gyro_Pitch = static_cast<int32_t>(0x64),
__E_k_EInputActionOrigin_PS4_Gyro_Yaw = static_cast<int32_t>(0x65),
__E_k_EInputActionOrigin_PS4_Gyro_Roll = static_cast<int32_t>(0x66),
__E_k_EInputActionOrigin_PS4_DPad_Move = static_cast<int32_t>(0x67),
__E_k_EInputActionOrigin_PS4_Reserved1 = static_cast<int32_t>(0x68),
__E_k_EInputActionOrigin_PS4_Reserved2 = static_cast<int32_t>(0x69),
__E_k_EInputActionOrigin_PS4_Reserved3 = static_cast<int32_t>(0x6a),
__E_k_EInputActionOrigin_PS4_Reserved4 = static_cast<int32_t>(0x6b),
__E_k_EInputActionOrigin_PS4_Reserved5 = static_cast<int32_t>(0x6c),
__E_k_EInputActionOrigin_PS4_Reserved6 = static_cast<int32_t>(0x6d),
__E_k_EInputActionOrigin_PS4_Reserved7 = static_cast<int32_t>(0x6e),
__E_k_EInputActionOrigin_PS4_Reserved8 = static_cast<int32_t>(0x6f),
__E_k_EInputActionOrigin_PS4_Reserved9 = static_cast<int32_t>(0x70),
__E_k_EInputActionOrigin_PS4_Reserved10 = static_cast<int32_t>(0x71),
__E_k_EInputActionOrigin_XBoxOne_A = static_cast<int32_t>(0x72),
__E_k_EInputActionOrigin_XBoxOne_B = static_cast<int32_t>(0x73),
__E_k_EInputActionOrigin_XBoxOne_X = static_cast<int32_t>(0x74),
__E_k_EInputActionOrigin_XBoxOne_Y = static_cast<int32_t>(0x75),
__E_k_EInputActionOrigin_XBoxOne_LeftBumper = static_cast<int32_t>(0x76),
__E_k_EInputActionOrigin_XBoxOne_RightBumper = static_cast<int32_t>(0x77),
__E_k_EInputActionOrigin_XBoxOne_Menu = static_cast<int32_t>(0x78),
__E_k_EInputActionOrigin_XBoxOne_View = static_cast<int32_t>(0x79),
__E_k_EInputActionOrigin_XBoxOne_LeftTrigger_Pull = static_cast<int32_t>(0x7a),
__E_k_EInputActionOrigin_XBoxOne_LeftTrigger_Click = static_cast<int32_t>(0x7b),
__E_k_EInputActionOrigin_XBoxOne_RightTrigger_Pull = static_cast<int32_t>(0x7c),
__E_k_EInputActionOrigin_XBoxOne_RightTrigger_Click = static_cast<int32_t>(0x7d),
__E_k_EInputActionOrigin_XBoxOne_LeftStick_Move = static_cast<int32_t>(0x7e),
__E_k_EInputActionOrigin_XBoxOne_LeftStick_Click = static_cast<int32_t>(0x7f),
__E_k_EInputActionOrigin_XBoxOne_LeftStick_DPadNorth = static_cast<int32_t>(0x80),
__E_k_EInputActionOrigin_XBoxOne_LeftStick_DPadSouth = static_cast<int32_t>(0x81),
__E_k_EInputActionOrigin_XBoxOne_LeftStick_DPadWest = static_cast<int32_t>(0x82),
__E_k_EInputActionOrigin_XBoxOne_LeftStick_DPadEast = static_cast<int32_t>(0x83),
__E_k_EInputActionOrigin_XBoxOne_RightStick_Move = static_cast<int32_t>(0x84),
__E_k_EInputActionOrigin_XBoxOne_RightStick_Click = static_cast<int32_t>(0x85),
__E_k_EInputActionOrigin_XBoxOne_RightStick_DPadNorth = static_cast<int32_t>(0x86),
__E_k_EInputActionOrigin_XBoxOne_RightStick_DPadSouth = static_cast<int32_t>(0x87),
__E_k_EInputActionOrigin_XBoxOne_RightStick_DPadWest = static_cast<int32_t>(0x88),
__E_k_EInputActionOrigin_XBoxOne_RightStick_DPadEast = static_cast<int32_t>(0x89),
__E_k_EInputActionOrigin_XBoxOne_DPad_North = static_cast<int32_t>(0x8a),
__E_k_EInputActionOrigin_XBoxOne_DPad_South = static_cast<int32_t>(0x8b),
__E_k_EInputActionOrigin_XBoxOne_DPad_West = static_cast<int32_t>(0x8c),
__E_k_EInputActionOrigin_XBoxOne_DPad_East = static_cast<int32_t>(0x8d),
__E_k_EInputActionOrigin_XBoxOne_DPad_Move = static_cast<int32_t>(0x8e),
__E_k_EInputActionOrigin_XBoxOne_LeftGrip_Lower = static_cast<int32_t>(0x8f),
__E_k_EInputActionOrigin_XBoxOne_LeftGrip_Upper = static_cast<int32_t>(0x90),
__E_k_EInputActionOrigin_XBoxOne_RightGrip_Lower = static_cast<int32_t>(0x91),
__E_k_EInputActionOrigin_XBoxOne_RightGrip_Upper = static_cast<int32_t>(0x92),
__E_k_EInputActionOrigin_XBoxOne_Share = static_cast<int32_t>(0x93),
__E_k_EInputActionOrigin_XBoxOne_Reserved6 = static_cast<int32_t>(0x94),
__E_k_EInputActionOrigin_XBoxOne_Reserved7 = static_cast<int32_t>(0x95),
__E_k_EInputActionOrigin_XBoxOne_Reserved8 = static_cast<int32_t>(0x96),
__E_k_EInputActionOrigin_XBoxOne_Reserved9 = static_cast<int32_t>(0x97),
__E_k_EInputActionOrigin_XBoxOne_Reserved10 = static_cast<int32_t>(0x98),
__E_k_EInputActionOrigin_XBox360_A = static_cast<int32_t>(0x99),
__E_k_EInputActionOrigin_XBox360_B = static_cast<int32_t>(0x9a),
__E_k_EInputActionOrigin_XBox360_X = static_cast<int32_t>(0x9b),
__E_k_EInputActionOrigin_XBox360_Y = static_cast<int32_t>(0x9c),
__E_k_EInputActionOrigin_XBox360_LeftBumper = static_cast<int32_t>(0x9d),
__E_k_EInputActionOrigin_XBox360_RightBumper = static_cast<int32_t>(0x9e),
__E_k_EInputActionOrigin_XBox360_Start = static_cast<int32_t>(0x9f),
__E_k_EInputActionOrigin_XBox360_Back = static_cast<int32_t>(0xa0),
__E_k_EInputActionOrigin_XBox360_LeftTrigger_Pull = static_cast<int32_t>(0xa1),
__E_k_EInputActionOrigin_XBox360_LeftTrigger_Click = static_cast<int32_t>(0xa2),
__E_k_EInputActionOrigin_XBox360_RightTrigger_Pull = static_cast<int32_t>(0xa3),
__E_k_EInputActionOrigin_XBox360_RightTrigger_Click = static_cast<int32_t>(0xa4),
__E_k_EInputActionOrigin_XBox360_LeftStick_Move = static_cast<int32_t>(0xa5),
__E_k_EInputActionOrigin_XBox360_LeftStick_Click = static_cast<int32_t>(0xa6),
__E_k_EInputActionOrigin_XBox360_LeftStick_DPadNorth = static_cast<int32_t>(0xa7),
__E_k_EInputActionOrigin_XBox360_LeftStick_DPadSouth = static_cast<int32_t>(0xa8),
__E_k_EInputActionOrigin_XBox360_LeftStick_DPadWest = static_cast<int32_t>(0xa9),
__E_k_EInputActionOrigin_XBox360_LeftStick_DPadEast = static_cast<int32_t>(0xaa),
__E_k_EInputActionOrigin_XBox360_RightStick_Move = static_cast<int32_t>(0xab),
__E_k_EInputActionOrigin_XBox360_RightStick_Click = static_cast<int32_t>(0xac),
__E_k_EInputActionOrigin_XBox360_RightStick_DPadNorth = static_cast<int32_t>(0xad),
__E_k_EInputActionOrigin_XBox360_RightStick_DPadSouth = static_cast<int32_t>(0xae),
__E_k_EInputActionOrigin_XBox360_RightStick_DPadWest = static_cast<int32_t>(0xaf),
__E_k_EInputActionOrigin_XBox360_RightStick_DPadEast = static_cast<int32_t>(0xb0),
__E_k_EInputActionOrigin_XBox360_DPad_North = static_cast<int32_t>(0xb1),
__E_k_EInputActionOrigin_XBox360_DPad_South = static_cast<int32_t>(0xb2),
__E_k_EInputActionOrigin_XBox360_DPad_West = static_cast<int32_t>(0xb3),
__E_k_EInputActionOrigin_XBox360_DPad_East = static_cast<int32_t>(0xb4),
__E_k_EInputActionOrigin_XBox360_DPad_Move = static_cast<int32_t>(0xb5),
__E_k_EInputActionOrigin_XBox360_Reserved1 = static_cast<int32_t>(0xb6),
__E_k_EInputActionOrigin_XBox360_Reserved2 = static_cast<int32_t>(0xb7),
__E_k_EInputActionOrigin_XBox360_Reserved3 = static_cast<int32_t>(0xb8),
__E_k_EInputActionOrigin_XBox360_Reserved4 = static_cast<int32_t>(0xb9),
__E_k_EInputActionOrigin_XBox360_Reserved5 = static_cast<int32_t>(0xba),
__E_k_EInputActionOrigin_XBox360_Reserved6 = static_cast<int32_t>(0xbb),
__E_k_EInputActionOrigin_XBox360_Reserved7 = static_cast<int32_t>(0xbc),
__E_k_EInputActionOrigin_XBox360_Reserved8 = static_cast<int32_t>(0xbd),
__E_k_EInputActionOrigin_XBox360_Reserved9 = static_cast<int32_t>(0xbe),
__E_k_EInputActionOrigin_XBox360_Reserved10 = static_cast<int32_t>(0xbf),
__E_k_EInputActionOrigin_Switch_A = static_cast<int32_t>(0xc0),
__E_k_EInputActionOrigin_Switch_B = static_cast<int32_t>(0xc1),
__E_k_EInputActionOrigin_Switch_X = static_cast<int32_t>(0xc2),
__E_k_EInputActionOrigin_Switch_Y = static_cast<int32_t>(0xc3),
__E_k_EInputActionOrigin_Switch_LeftBumper = static_cast<int32_t>(0xc4),
__E_k_EInputActionOrigin_Switch_RightBumper = static_cast<int32_t>(0xc5),
__E_k_EInputActionOrigin_Switch_Plus = static_cast<int32_t>(0xc6),
__E_k_EInputActionOrigin_Switch_Minus = static_cast<int32_t>(0xc7),
__E_k_EInputActionOrigin_Switch_Capture = static_cast<int32_t>(0xc8),
__E_k_EInputActionOrigin_Switch_LeftTrigger_Pull = static_cast<int32_t>(0xc9),
__E_k_EInputActionOrigin_Switch_LeftTrigger_Click = static_cast<int32_t>(0xca),
__E_k_EInputActionOrigin_Switch_RightTrigger_Pull = static_cast<int32_t>(0xcb),
__E_k_EInputActionOrigin_Switch_RightTrigger_Click = static_cast<int32_t>(0xcc),
__E_k_EInputActionOrigin_Switch_LeftStick_Move = static_cast<int32_t>(0xcd),
__E_k_EInputActionOrigin_Switch_LeftStick_Click = static_cast<int32_t>(0xce),
__E_k_EInputActionOrigin_Switch_LeftStick_DPadNorth = static_cast<int32_t>(0xcf),
__E_k_EInputActionOrigin_Switch_LeftStick_DPadSouth = static_cast<int32_t>(0xd0),
__E_k_EInputActionOrigin_Switch_LeftStick_DPadWest = static_cast<int32_t>(0xd1),
__E_k_EInputActionOrigin_Switch_LeftStick_DPadEast = static_cast<int32_t>(0xd2),
__E_k_EInputActionOrigin_Switch_RightStick_Move = static_cast<int32_t>(0xd3),
__E_k_EInputActionOrigin_Switch_RightStick_Click = static_cast<int32_t>(0xd4),
__E_k_EInputActionOrigin_Switch_RightStick_DPadNorth = static_cast<int32_t>(0xd5),
__E_k_EInputActionOrigin_Switch_RightStick_DPadSouth = static_cast<int32_t>(0xd6),
__E_k_EInputActionOrigin_Switch_RightStick_DPadWest = static_cast<int32_t>(0xd7),
__E_k_EInputActionOrigin_Switch_RightStick_DPadEast = static_cast<int32_t>(0xd8),
__E_k_EInputActionOrigin_Switch_DPad_North = static_cast<int32_t>(0xd9),
__E_k_EInputActionOrigin_Switch_DPad_South = static_cast<int32_t>(0xda),
__E_k_EInputActionOrigin_Switch_DPad_West = static_cast<int32_t>(0xdb),
__E_k_EInputActionOrigin_Switch_DPad_East = static_cast<int32_t>(0xdc),
__E_k_EInputActionOrigin_Switch_ProGyro_Move = static_cast<int32_t>(0xdd),
__E_k_EInputActionOrigin_Switch_ProGyro_Pitch = static_cast<int32_t>(0xde),
__E_k_EInputActionOrigin_Switch_ProGyro_Yaw = static_cast<int32_t>(0xdf),
__E_k_EInputActionOrigin_Switch_ProGyro_Roll = static_cast<int32_t>(0xe0),
__E_k_EInputActionOrigin_Switch_DPad_Move = static_cast<int32_t>(0xe1),
__E_k_EInputActionOrigin_Switch_Reserved1 = static_cast<int32_t>(0xe2),
__E_k_EInputActionOrigin_Switch_Reserved2 = static_cast<int32_t>(0xe3),
__E_k_EInputActionOrigin_Switch_Reserved3 = static_cast<int32_t>(0xe4),
__E_k_EInputActionOrigin_Switch_Reserved4 = static_cast<int32_t>(0xe5),
__E_k_EInputActionOrigin_Switch_Reserved5 = static_cast<int32_t>(0xe6),
__E_k_EInputActionOrigin_Switch_Reserved6 = static_cast<int32_t>(0xe7),
__E_k_EInputActionOrigin_Switch_Reserved7 = static_cast<int32_t>(0xe8),
__E_k_EInputActionOrigin_Switch_Reserved8 = static_cast<int32_t>(0xe9),
__E_k_EInputActionOrigin_Switch_Reserved9 = static_cast<int32_t>(0xea),
__E_k_EInputActionOrigin_Switch_Reserved10 = static_cast<int32_t>(0xeb),
__E_k_EInputActionOrigin_Switch_RightGyro_Move = static_cast<int32_t>(0xec),
__E_k_EInputActionOrigin_Switch_RightGyro_Pitch = static_cast<int32_t>(0xed),
__E_k_EInputActionOrigin_Switch_RightGyro_Yaw = static_cast<int32_t>(0xee),
__E_k_EInputActionOrigin_Switch_RightGyro_Roll = static_cast<int32_t>(0xef),
__E_k_EInputActionOrigin_Switch_LeftGyro_Move = static_cast<int32_t>(0xf0),
__E_k_EInputActionOrigin_Switch_LeftGyro_Pitch = static_cast<int32_t>(0xf1),
__E_k_EInputActionOrigin_Switch_LeftGyro_Yaw = static_cast<int32_t>(0xf2),
__E_k_EInputActionOrigin_Switch_LeftGyro_Roll = static_cast<int32_t>(0xf3),
__E_k_EInputActionOrigin_Switch_LeftGrip_Lower = static_cast<int32_t>(0xf4),
__E_k_EInputActionOrigin_Switch_LeftGrip_Upper = static_cast<int32_t>(0xf5),
__E_k_EInputActionOrigin_Switch_RightGrip_Lower = static_cast<int32_t>(0xf6),
__E_k_EInputActionOrigin_Switch_RightGrip_Upper = static_cast<int32_t>(0xf7),
__E_k_EInputActionOrigin_Switch_Reserved11 = static_cast<int32_t>(0xf8),
__E_k_EInputActionOrigin_Switch_Reserved12 = static_cast<int32_t>(0xf9),
__E_k_EInputActionOrigin_Switch_Reserved13 = static_cast<int32_t>(0xfa),
__E_k_EInputActionOrigin_Switch_Reserved14 = static_cast<int32_t>(0xfb),
__E_k_EInputActionOrigin_Switch_Reserved15 = static_cast<int32_t>(0xfc),
__E_k_EInputActionOrigin_Switch_Reserved16 = static_cast<int32_t>(0xfd),
__E_k_EInputActionOrigin_Switch_Reserved17 = static_cast<int32_t>(0xfe),
__E_k_EInputActionOrigin_Switch_Reserved18 = static_cast<int32_t>(0xff),
__E_k_EInputActionOrigin_Switch_Reserved19 = static_cast<int32_t>(0x100),
__E_k_EInputActionOrigin_Switch_Reserved20 = static_cast<int32_t>(0x101),
__E_k_EInputActionOrigin_PS5_X = static_cast<int32_t>(0x102),
__E_k_EInputActionOrigin_PS5_Circle = static_cast<int32_t>(0x103),
__E_k_EInputActionOrigin_PS5_Triangle = static_cast<int32_t>(0x104),
__E_k_EInputActionOrigin_PS5_Square = static_cast<int32_t>(0x105),
__E_k_EInputActionOrigin_PS5_LeftBumper = static_cast<int32_t>(0x106),
__E_k_EInputActionOrigin_PS5_RightBumper = static_cast<int32_t>(0x107),
__E_k_EInputActionOrigin_PS5_Option = static_cast<int32_t>(0x108),
__E_k_EInputActionOrigin_PS5_Create = static_cast<int32_t>(0x109),
__E_k_EInputActionOrigin_PS5_Mute = static_cast<int32_t>(0x10a),
__E_k_EInputActionOrigin_PS5_LeftPad_Touch = static_cast<int32_t>(0x10b),
__E_k_EInputActionOrigin_PS5_LeftPad_Swipe = static_cast<int32_t>(0x10c),
__E_k_EInputActionOrigin_PS5_LeftPad_Click = static_cast<int32_t>(0x10d),
__E_k_EInputActionOrigin_PS5_LeftPad_DPadNorth = static_cast<int32_t>(0x10e),
__E_k_EInputActionOrigin_PS5_LeftPad_DPadSouth = static_cast<int32_t>(0x10f),
__E_k_EInputActionOrigin_PS5_LeftPad_DPadWest = static_cast<int32_t>(0x110),
__E_k_EInputActionOrigin_PS5_LeftPad_DPadEast = static_cast<int32_t>(0x111),
__E_k_EInputActionOrigin_PS5_RightPad_Touch = static_cast<int32_t>(0x112),
__E_k_EInputActionOrigin_PS5_RightPad_Swipe = static_cast<int32_t>(0x113),
__E_k_EInputActionOrigin_PS5_RightPad_Click = static_cast<int32_t>(0x114),
__E_k_EInputActionOrigin_PS5_RightPad_DPadNorth = static_cast<int32_t>(0x115),
__E_k_EInputActionOrigin_PS5_RightPad_DPadSouth = static_cast<int32_t>(0x116),
__E_k_EInputActionOrigin_PS5_RightPad_DPadWest = static_cast<int32_t>(0x117),
__E_k_EInputActionOrigin_PS5_RightPad_DPadEast = static_cast<int32_t>(0x118),
__E_k_EInputActionOrigin_PS5_CenterPad_Touch = static_cast<int32_t>(0x119),
__E_k_EInputActionOrigin_PS5_CenterPad_Swipe = static_cast<int32_t>(0x11a),
__E_k_EInputActionOrigin_PS5_CenterPad_Click = static_cast<int32_t>(0x11b),
__E_k_EInputActionOrigin_PS5_CenterPad_DPadNorth = static_cast<int32_t>(0x11c),
__E_k_EInputActionOrigin_PS5_CenterPad_DPadSouth = static_cast<int32_t>(0x11d),
__E_k_EInputActionOrigin_PS5_CenterPad_DPadWest = static_cast<int32_t>(0x11e),
__E_k_EInputActionOrigin_PS5_CenterPad_DPadEast = static_cast<int32_t>(0x11f),
__E_k_EInputActionOrigin_PS5_LeftTrigger_Pull = static_cast<int32_t>(0x120),
__E_k_EInputActionOrigin_PS5_LeftTrigger_Click = static_cast<int32_t>(0x121),
__E_k_EInputActionOrigin_PS5_RightTrigger_Pull = static_cast<int32_t>(0x122),
__E_k_EInputActionOrigin_PS5_RightTrigger_Click = static_cast<int32_t>(0x123),
__E_k_EInputActionOrigin_PS5_LeftStick_Move = static_cast<int32_t>(0x124),
__E_k_EInputActionOrigin_PS5_LeftStick_Click = static_cast<int32_t>(0x125),
__E_k_EInputActionOrigin_PS5_LeftStick_DPadNorth = static_cast<int32_t>(0x126),
__E_k_EInputActionOrigin_PS5_LeftStick_DPadSouth = static_cast<int32_t>(0x127),
__E_k_EInputActionOrigin_PS5_LeftStick_DPadWest = static_cast<int32_t>(0x128),
__E_k_EInputActionOrigin_PS5_LeftStick_DPadEast = static_cast<int32_t>(0x129),
__E_k_EInputActionOrigin_PS5_RightStick_Move = static_cast<int32_t>(0x12a),
__E_k_EInputActionOrigin_PS5_RightStick_Click = static_cast<int32_t>(0x12b),
__E_k_EInputActionOrigin_PS5_RightStick_DPadNorth = static_cast<int32_t>(0x12c),
__E_k_EInputActionOrigin_PS5_RightStick_DPadSouth = static_cast<int32_t>(0x12d),
__E_k_EInputActionOrigin_PS5_RightStick_DPadWest = static_cast<int32_t>(0x12e),
__E_k_EInputActionOrigin_PS5_RightStick_DPadEast = static_cast<int32_t>(0x12f),
__E_k_EInputActionOrigin_PS5_DPad_North = static_cast<int32_t>(0x130),
__E_k_EInputActionOrigin_PS5_DPad_South = static_cast<int32_t>(0x131),
__E_k_EInputActionOrigin_PS5_DPad_West = static_cast<int32_t>(0x132),
__E_k_EInputActionOrigin_PS5_DPad_East = static_cast<int32_t>(0x133),
__E_k_EInputActionOrigin_PS5_Gyro_Move = static_cast<int32_t>(0x134),
__E_k_EInputActionOrigin_PS5_Gyro_Pitch = static_cast<int32_t>(0x135),
__E_k_EInputActionOrigin_PS5_Gyro_Yaw = static_cast<int32_t>(0x136),
__E_k_EInputActionOrigin_PS5_Gyro_Roll = static_cast<int32_t>(0x137),
__E_k_EInputActionOrigin_PS5_DPad_Move = static_cast<int32_t>(0x138),
__E_k_EInputActionOrigin_PS5_Reserved1 = static_cast<int32_t>(0x139),
__E_k_EInputActionOrigin_PS5_Reserved2 = static_cast<int32_t>(0x13a),
__E_k_EInputActionOrigin_PS5_Reserved3 = static_cast<int32_t>(0x13b),
__E_k_EInputActionOrigin_PS5_Reserved4 = static_cast<int32_t>(0x13c),
__E_k_EInputActionOrigin_PS5_Reserved5 = static_cast<int32_t>(0x13d),
__E_k_EInputActionOrigin_PS5_Reserved6 = static_cast<int32_t>(0x13e),
__E_k_EInputActionOrigin_PS5_Reserved7 = static_cast<int32_t>(0x13f),
__E_k_EInputActionOrigin_PS5_Reserved8 = static_cast<int32_t>(0x140),
__E_k_EInputActionOrigin_PS5_Reserved9 = static_cast<int32_t>(0x141),
__E_k_EInputActionOrigin_PS5_Reserved10 = static_cast<int32_t>(0x142),
__E_k_EInputActionOrigin_PS5_Reserved11 = static_cast<int32_t>(0x143),
__E_k_EInputActionOrigin_PS5_Reserved12 = static_cast<int32_t>(0x144),
__E_k_EInputActionOrigin_PS5_Reserved13 = static_cast<int32_t>(0x145),
__E_k_EInputActionOrigin_PS5_Reserved14 = static_cast<int32_t>(0x146),
__E_k_EInputActionOrigin_PS5_Reserved15 = static_cast<int32_t>(0x147),
__E_k_EInputActionOrigin_PS5_Reserved16 = static_cast<int32_t>(0x148),
__E_k_EInputActionOrigin_PS5_Reserved17 = static_cast<int32_t>(0x149),
__E_k_EInputActionOrigin_PS5_Reserved18 = static_cast<int32_t>(0x14a),
__E_k_EInputActionOrigin_PS5_Reserved19 = static_cast<int32_t>(0x14b),
__E_k_EInputActionOrigin_PS5_Reserved20 = static_cast<int32_t>(0x14c),
__E_k_EInputActionOrigin_SteamDeck_A = static_cast<int32_t>(0x14d),
__E_k_EInputActionOrigin_SteamDeck_B = static_cast<int32_t>(0x14e),
__E_k_EInputActionOrigin_SteamDeck_X = static_cast<int32_t>(0x14f),
__E_k_EInputActionOrigin_SteamDeck_Y = static_cast<int32_t>(0x150),
__E_k_EInputActionOrigin_SteamDeck_L1 = static_cast<int32_t>(0x151),
__E_k_EInputActionOrigin_SteamDeck_R1 = static_cast<int32_t>(0x152),
__E_k_EInputActionOrigin_SteamDeck_Menu = static_cast<int32_t>(0x153),
__E_k_EInputActionOrigin_SteamDeck_View = static_cast<int32_t>(0x154),
__E_k_EInputActionOrigin_SteamDeck_LeftPad_Touch = static_cast<int32_t>(0x155),
__E_k_EInputActionOrigin_SteamDeck_LeftPad_Swipe = static_cast<int32_t>(0x156),
__E_k_EInputActionOrigin_SteamDeck_LeftPad_Click = static_cast<int32_t>(0x157),
__E_k_EInputActionOrigin_SteamDeck_LeftPad_DPadNorth = static_cast<int32_t>(0x158),
__E_k_EInputActionOrigin_SteamDeck_LeftPad_DPadSouth = static_cast<int32_t>(0x159),
__E_k_EInputActionOrigin_SteamDeck_LeftPad_DPadWest = static_cast<int32_t>(0x15a),
__E_k_EInputActionOrigin_SteamDeck_LeftPad_DPadEast = static_cast<int32_t>(0x15b),
__E_k_EInputActionOrigin_SteamDeck_RightPad_Touch = static_cast<int32_t>(0x15c),
__E_k_EInputActionOrigin_SteamDeck_RightPad_Swipe = static_cast<int32_t>(0x15d),
__E_k_EInputActionOrigin_SteamDeck_RightPad_Click = static_cast<int32_t>(0x15e),
__E_k_EInputActionOrigin_SteamDeck_RightPad_DPadNorth = static_cast<int32_t>(0x15f),
__E_k_EInputActionOrigin_SteamDeck_RightPad_DPadSouth = static_cast<int32_t>(0x160),
__E_k_EInputActionOrigin_SteamDeck_RightPad_DPadWest = static_cast<int32_t>(0x161),
__E_k_EInputActionOrigin_SteamDeck_RightPad_DPadEast = static_cast<int32_t>(0x162),
__E_k_EInputActionOrigin_SteamDeck_L2_SoftPull = static_cast<int32_t>(0x163),
__E_k_EInputActionOrigin_SteamDeck_L2 = static_cast<int32_t>(0x164),
__E_k_EInputActionOrigin_SteamDeck_R2_SoftPull = static_cast<int32_t>(0x165),
__E_k_EInputActionOrigin_SteamDeck_R2 = static_cast<int32_t>(0x166),
__E_k_EInputActionOrigin_SteamDeck_LeftStick_Move = static_cast<int32_t>(0x167),
__E_k_EInputActionOrigin_SteamDeck_L3 = static_cast<int32_t>(0x168),
__E_k_EInputActionOrigin_SteamDeck_LeftStick_DPadNorth = static_cast<int32_t>(0x169),
__E_k_EInputActionOrigin_SteamDeck_LeftStick_DPadSouth = static_cast<int32_t>(0x16a),
__E_k_EInputActionOrigin_SteamDeck_LeftStick_DPadWest = static_cast<int32_t>(0x16b),
__E_k_EInputActionOrigin_SteamDeck_LeftStick_DPadEast = static_cast<int32_t>(0x16c),
__E_k_EInputActionOrigin_SteamDeck_LeftStick_Touch = static_cast<int32_t>(0x16d),
__E_k_EInputActionOrigin_SteamDeck_RightStick_Move = static_cast<int32_t>(0x16e),
__E_k_EInputActionOrigin_SteamDeck_R3 = static_cast<int32_t>(0x16f),
__E_k_EInputActionOrigin_SteamDeck_RightStick_DPadNorth = static_cast<int32_t>(0x170),
__E_k_EInputActionOrigin_SteamDeck_RightStick_DPadSouth = static_cast<int32_t>(0x171),
__E_k_EInputActionOrigin_SteamDeck_RightStick_DPadWest = static_cast<int32_t>(0x172),
__E_k_EInputActionOrigin_SteamDeck_RightStick_DPadEast = static_cast<int32_t>(0x173),
__E_k_EInputActionOrigin_SteamDeck_RightStick_Touch = static_cast<int32_t>(0x174),
__E_k_EInputActionOrigin_SteamDeck_L4 = static_cast<int32_t>(0x175),
__E_k_EInputActionOrigin_SteamDeck_R4 = static_cast<int32_t>(0x176),
__E_k_EInputActionOrigin_SteamDeck_L5 = static_cast<int32_t>(0x177),
__E_k_EInputActionOrigin_SteamDeck_R5 = static_cast<int32_t>(0x178),
__E_k_EInputActionOrigin_SteamDeck_DPad_Move = static_cast<int32_t>(0x179),
__E_k_EInputActionOrigin_SteamDeck_DPad_North = static_cast<int32_t>(0x17a),
__E_k_EInputActionOrigin_SteamDeck_DPad_South = static_cast<int32_t>(0x17b),
__E_k_EInputActionOrigin_SteamDeck_DPad_West = static_cast<int32_t>(0x17c),
__E_k_EInputActionOrigin_SteamDeck_DPad_East = static_cast<int32_t>(0x17d),
__E_k_EInputActionOrigin_SteamDeck_Gyro_Move = static_cast<int32_t>(0x17e),
__E_k_EInputActionOrigin_SteamDeck_Gyro_Pitch = static_cast<int32_t>(0x17f),
__E_k_EInputActionOrigin_SteamDeck_Gyro_Yaw = static_cast<int32_t>(0x180),
__E_k_EInputActionOrigin_SteamDeck_Gyro_Roll = static_cast<int32_t>(0x181),
__E_k_EInputActionOrigin_SteamDeck_Reserved1 = static_cast<int32_t>(0x182),
__E_k_EInputActionOrigin_SteamDeck_Reserved2 = static_cast<int32_t>(0x183),
__E_k_EInputActionOrigin_SteamDeck_Reserved3 = static_cast<int32_t>(0x184),
__E_k_EInputActionOrigin_SteamDeck_Reserved4 = static_cast<int32_t>(0x185),
__E_k_EInputActionOrigin_SteamDeck_Reserved5 = static_cast<int32_t>(0x186),
__E_k_EInputActionOrigin_SteamDeck_Reserved6 = static_cast<int32_t>(0x187),
__E_k_EInputActionOrigin_SteamDeck_Reserved7 = static_cast<int32_t>(0x188),
__E_k_EInputActionOrigin_SteamDeck_Reserved8 = static_cast<int32_t>(0x189),
__E_k_EInputActionOrigin_SteamDeck_Reserved9 = static_cast<int32_t>(0x18a),
__E_k_EInputActionOrigin_SteamDeck_Reserved10 = static_cast<int32_t>(0x18b),
__E_k_EInputActionOrigin_SteamDeck_Reserved11 = static_cast<int32_t>(0x18c),
__E_k_EInputActionOrigin_SteamDeck_Reserved12 = static_cast<int32_t>(0x18d),
__E_k_EInputActionOrigin_SteamDeck_Reserved13 = static_cast<int32_t>(0x18e),
__E_k_EInputActionOrigin_SteamDeck_Reserved14 = static_cast<int32_t>(0x18f),
__E_k_EInputActionOrigin_SteamDeck_Reserved15 = static_cast<int32_t>(0x190),
__E_k_EInputActionOrigin_SteamDeck_Reserved16 = static_cast<int32_t>(0x191),
__E_k_EInputActionOrigin_SteamDeck_Reserved17 = static_cast<int32_t>(0x192),
__E_k_EInputActionOrigin_SteamDeck_Reserved18 = static_cast<int32_t>(0x193),
__E_k_EInputActionOrigin_SteamDeck_Reserved19 = static_cast<int32_t>(0x194),
__E_k_EInputActionOrigin_SteamDeck_Reserved20 = static_cast<int32_t>(0x195),
__E_k_EInputActionOrigin_Count = static_cast<int32_t>(0x196),
__E_k_EInputActionOrigin_MaximumPossibleValue = static_cast<int32_t>(0x7fff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EInputActionOrigin_Unwrapped () const noexcept {
return static_cast<__EInputActionOrigin_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EInputActionOrigin() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EInputActionOrigin(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16252};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EInputActionOrigin_Count value: I32(406)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Count;

/// @brief Field k_EInputActionOrigin_MaximumPossibleValue value: I32(32767)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_MaximumPossibleValue;

/// @brief Field k_EInputActionOrigin_None value: I32(0)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_None;

/// @brief Field k_EInputActionOrigin_PS4_CenterPad_Click value: I32(74)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_CenterPad_Click;

/// @brief Field k_EInputActionOrigin_PS4_CenterPad_DPadEast value: I32(78)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_CenterPad_DPadEast;

/// @brief Field k_EInputActionOrigin_PS4_CenterPad_DPadNorth value: I32(75)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_CenterPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS4_CenterPad_DPadSouth value: I32(76)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_CenterPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS4_CenterPad_DPadWest value: I32(77)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_CenterPad_DPadWest;

/// @brief Field k_EInputActionOrigin_PS4_CenterPad_Swipe value: I32(73)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_CenterPad_Swipe;

/// @brief Field k_EInputActionOrigin_PS4_CenterPad_Touch value: I32(72)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_CenterPad_Touch;

/// @brief Field k_EInputActionOrigin_PS4_Circle value: I32(51)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Circle;

/// @brief Field k_EInputActionOrigin_PS4_DPad_East value: I32(98)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_DPad_East;

/// @brief Field k_EInputActionOrigin_PS4_DPad_Move value: I32(103)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_DPad_Move;

/// @brief Field k_EInputActionOrigin_PS4_DPad_North value: I32(95)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_DPad_North;

/// @brief Field k_EInputActionOrigin_PS4_DPad_South value: I32(96)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_DPad_South;

/// @brief Field k_EInputActionOrigin_PS4_DPad_West value: I32(97)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_DPad_West;

/// @brief Field k_EInputActionOrigin_PS4_Gyro_Move value: I32(99)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Gyro_Move;

/// @brief Field k_EInputActionOrigin_PS4_Gyro_Pitch value: I32(100)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Gyro_Pitch;

/// @brief Field k_EInputActionOrigin_PS4_Gyro_Roll value: I32(102)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Gyro_Roll;

/// @brief Field k_EInputActionOrigin_PS4_Gyro_Yaw value: I32(101)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Gyro_Yaw;

/// @brief Field k_EInputActionOrigin_PS4_LeftBumper value: I32(54)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftBumper;

/// @brief Field k_EInputActionOrigin_PS4_LeftPad_Click value: I32(60)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftPad_Click;

/// @brief Field k_EInputActionOrigin_PS4_LeftPad_DPadEast value: I32(64)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftPad_DPadEast;

/// @brief Field k_EInputActionOrigin_PS4_LeftPad_DPadNorth value: I32(61)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS4_LeftPad_DPadSouth value: I32(62)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS4_LeftPad_DPadWest value: I32(63)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftPad_DPadWest;

/// @brief Field k_EInputActionOrigin_PS4_LeftPad_Swipe value: I32(59)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftPad_Swipe;

/// @brief Field k_EInputActionOrigin_PS4_LeftPad_Touch value: I32(58)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftPad_Touch;

/// @brief Field k_EInputActionOrigin_PS4_LeftStick_Click value: I32(84)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftStick_Click;

/// @brief Field k_EInputActionOrigin_PS4_LeftStick_DPadEast value: I32(88)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftStick_DPadEast;

/// @brief Field k_EInputActionOrigin_PS4_LeftStick_DPadNorth value: I32(85)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS4_LeftStick_DPadSouth value: I32(86)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS4_LeftStick_DPadWest value: I32(87)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftStick_DPadWest;

/// @brief Field k_EInputActionOrigin_PS4_LeftStick_Move value: I32(83)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftStick_Move;

/// @brief Field k_EInputActionOrigin_PS4_LeftTrigger_Click value: I32(80)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftTrigger_Click;

/// @brief Field k_EInputActionOrigin_PS4_LeftTrigger_Pull value: I32(79)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_LeftTrigger_Pull;

/// @brief Field k_EInputActionOrigin_PS4_Options value: I32(56)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Options;

/// @brief Field k_EInputActionOrigin_PS4_Reserved1 value: I32(104)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved1;

/// @brief Field k_EInputActionOrigin_PS4_Reserved10 value: I32(113)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved10;

/// @brief Field k_EInputActionOrigin_PS4_Reserved2 value: I32(105)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved2;

/// @brief Field k_EInputActionOrigin_PS4_Reserved3 value: I32(106)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved3;

/// @brief Field k_EInputActionOrigin_PS4_Reserved4 value: I32(107)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved4;

/// @brief Field k_EInputActionOrigin_PS4_Reserved5 value: I32(108)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved5;

/// @brief Field k_EInputActionOrigin_PS4_Reserved6 value: I32(109)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved6;

/// @brief Field k_EInputActionOrigin_PS4_Reserved7 value: I32(110)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved7;

/// @brief Field k_EInputActionOrigin_PS4_Reserved8 value: I32(111)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved8;

/// @brief Field k_EInputActionOrigin_PS4_Reserved9 value: I32(112)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Reserved9;

/// @brief Field k_EInputActionOrigin_PS4_RightBumper value: I32(55)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightBumper;

/// @brief Field k_EInputActionOrigin_PS4_RightPad_Click value: I32(67)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightPad_Click;

/// @brief Field k_EInputActionOrigin_PS4_RightPad_DPadEast value: I32(71)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightPad_DPadEast;

/// @brief Field k_EInputActionOrigin_PS4_RightPad_DPadNorth value: I32(68)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS4_RightPad_DPadSouth value: I32(69)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS4_RightPad_DPadWest value: I32(70)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightPad_DPadWest;

/// @brief Field k_EInputActionOrigin_PS4_RightPad_Swipe value: I32(66)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightPad_Swipe;

/// @brief Field k_EInputActionOrigin_PS4_RightPad_Touch value: I32(65)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightPad_Touch;

/// @brief Field k_EInputActionOrigin_PS4_RightStick_Click value: I32(90)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightStick_Click;

/// @brief Field k_EInputActionOrigin_PS4_RightStick_DPadEast value: I32(94)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightStick_DPadEast;

/// @brief Field k_EInputActionOrigin_PS4_RightStick_DPadNorth value: I32(91)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS4_RightStick_DPadSouth value: I32(92)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS4_RightStick_DPadWest value: I32(93)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightStick_DPadWest;

/// @brief Field k_EInputActionOrigin_PS4_RightStick_Move value: I32(89)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightStick_Move;

/// @brief Field k_EInputActionOrigin_PS4_RightTrigger_Click value: I32(82)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightTrigger_Click;

/// @brief Field k_EInputActionOrigin_PS4_RightTrigger_Pull value: I32(81)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_RightTrigger_Pull;

/// @brief Field k_EInputActionOrigin_PS4_Share value: I32(57)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Share;

/// @brief Field k_EInputActionOrigin_PS4_Square value: I32(53)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Square;

/// @brief Field k_EInputActionOrigin_PS4_Triangle value: I32(52)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_Triangle;

/// @brief Field k_EInputActionOrigin_PS4_X value: I32(50)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS4_X;

/// @brief Field k_EInputActionOrigin_PS5_CenterPad_Click value: I32(283)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_CenterPad_Click;

/// @brief Field k_EInputActionOrigin_PS5_CenterPad_DPadEast value: I32(287)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_CenterPad_DPadEast;

/// @brief Field k_EInputActionOrigin_PS5_CenterPad_DPadNorth value: I32(284)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_CenterPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS5_CenterPad_DPadSouth value: I32(285)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_CenterPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS5_CenterPad_DPadWest value: I32(286)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_CenterPad_DPadWest;

/// @brief Field k_EInputActionOrigin_PS5_CenterPad_Swipe value: I32(282)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_CenterPad_Swipe;

/// @brief Field k_EInputActionOrigin_PS5_CenterPad_Touch value: I32(281)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_CenterPad_Touch;

/// @brief Field k_EInputActionOrigin_PS5_Circle value: I32(259)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Circle;

/// @brief Field k_EInputActionOrigin_PS5_Create value: I32(265)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Create;

/// @brief Field k_EInputActionOrigin_PS5_DPad_East value: I32(307)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_DPad_East;

/// @brief Field k_EInputActionOrigin_PS5_DPad_Move value: I32(312)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_DPad_Move;

/// @brief Field k_EInputActionOrigin_PS5_DPad_North value: I32(304)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_DPad_North;

/// @brief Field k_EInputActionOrigin_PS5_DPad_South value: I32(305)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_DPad_South;

/// @brief Field k_EInputActionOrigin_PS5_DPad_West value: I32(306)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_DPad_West;

/// @brief Field k_EInputActionOrigin_PS5_Gyro_Move value: I32(308)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Gyro_Move;

/// @brief Field k_EInputActionOrigin_PS5_Gyro_Pitch value: I32(309)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Gyro_Pitch;

/// @brief Field k_EInputActionOrigin_PS5_Gyro_Roll value: I32(311)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Gyro_Roll;

/// @brief Field k_EInputActionOrigin_PS5_Gyro_Yaw value: I32(310)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Gyro_Yaw;

/// @brief Field k_EInputActionOrigin_PS5_LeftBumper value: I32(262)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftBumper;

/// @brief Field k_EInputActionOrigin_PS5_LeftPad_Click value: I32(269)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftPad_Click;

/// @brief Field k_EInputActionOrigin_PS5_LeftPad_DPadEast value: I32(273)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftPad_DPadEast;

/// @brief Field k_EInputActionOrigin_PS5_LeftPad_DPadNorth value: I32(270)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS5_LeftPad_DPadSouth value: I32(271)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS5_LeftPad_DPadWest value: I32(272)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftPad_DPadWest;

/// @brief Field k_EInputActionOrigin_PS5_LeftPad_Swipe value: I32(268)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftPad_Swipe;

/// @brief Field k_EInputActionOrigin_PS5_LeftPad_Touch value: I32(267)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftPad_Touch;

/// @brief Field k_EInputActionOrigin_PS5_LeftStick_Click value: I32(293)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftStick_Click;

/// @brief Field k_EInputActionOrigin_PS5_LeftStick_DPadEast value: I32(297)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftStick_DPadEast;

/// @brief Field k_EInputActionOrigin_PS5_LeftStick_DPadNorth value: I32(294)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS5_LeftStick_DPadSouth value: I32(295)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS5_LeftStick_DPadWest value: I32(296)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftStick_DPadWest;

/// @brief Field k_EInputActionOrigin_PS5_LeftStick_Move value: I32(292)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftStick_Move;

/// @brief Field k_EInputActionOrigin_PS5_LeftTrigger_Click value: I32(289)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftTrigger_Click;

/// @brief Field k_EInputActionOrigin_PS5_LeftTrigger_Pull value: I32(288)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_LeftTrigger_Pull;

/// @brief Field k_EInputActionOrigin_PS5_Mute value: I32(266)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Mute;

/// @brief Field k_EInputActionOrigin_PS5_Option value: I32(264)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Option;

/// @brief Field k_EInputActionOrigin_PS5_Reserved1 value: I32(313)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved1;

/// @brief Field k_EInputActionOrigin_PS5_Reserved10 value: I32(322)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved10;

/// @brief Field k_EInputActionOrigin_PS5_Reserved11 value: I32(323)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved11;

/// @brief Field k_EInputActionOrigin_PS5_Reserved12 value: I32(324)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved12;

/// @brief Field k_EInputActionOrigin_PS5_Reserved13 value: I32(325)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved13;

/// @brief Field k_EInputActionOrigin_PS5_Reserved14 value: I32(326)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved14;

/// @brief Field k_EInputActionOrigin_PS5_Reserved15 value: I32(327)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved15;

/// @brief Field k_EInputActionOrigin_PS5_Reserved16 value: I32(328)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved16;

/// @brief Field k_EInputActionOrigin_PS5_Reserved17 value: I32(329)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved17;

/// @brief Field k_EInputActionOrigin_PS5_Reserved18 value: I32(330)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved18;

/// @brief Field k_EInputActionOrigin_PS5_Reserved19 value: I32(331)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved19;

/// @brief Field k_EInputActionOrigin_PS5_Reserved2 value: I32(314)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved2;

/// @brief Field k_EInputActionOrigin_PS5_Reserved20 value: I32(332)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved20;

/// @brief Field k_EInputActionOrigin_PS5_Reserved3 value: I32(315)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved3;

/// @brief Field k_EInputActionOrigin_PS5_Reserved4 value: I32(316)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved4;

/// @brief Field k_EInputActionOrigin_PS5_Reserved5 value: I32(317)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved5;

/// @brief Field k_EInputActionOrigin_PS5_Reserved6 value: I32(318)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved6;

/// @brief Field k_EInputActionOrigin_PS5_Reserved7 value: I32(319)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved7;

/// @brief Field k_EInputActionOrigin_PS5_Reserved8 value: I32(320)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved8;

/// @brief Field k_EInputActionOrigin_PS5_Reserved9 value: I32(321)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Reserved9;

/// @brief Field k_EInputActionOrigin_PS5_RightBumper value: I32(263)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightBumper;

/// @brief Field k_EInputActionOrigin_PS5_RightPad_Click value: I32(276)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightPad_Click;

/// @brief Field k_EInputActionOrigin_PS5_RightPad_DPadEast value: I32(280)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightPad_DPadEast;

/// @brief Field k_EInputActionOrigin_PS5_RightPad_DPadNorth value: I32(277)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS5_RightPad_DPadSouth value: I32(278)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS5_RightPad_DPadWest value: I32(279)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightPad_DPadWest;

/// @brief Field k_EInputActionOrigin_PS5_RightPad_Swipe value: I32(275)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightPad_Swipe;

/// @brief Field k_EInputActionOrigin_PS5_RightPad_Touch value: I32(274)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightPad_Touch;

/// @brief Field k_EInputActionOrigin_PS5_RightStick_Click value: I32(299)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightStick_Click;

/// @brief Field k_EInputActionOrigin_PS5_RightStick_DPadEast value: I32(303)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightStick_DPadEast;

/// @brief Field k_EInputActionOrigin_PS5_RightStick_DPadNorth value: I32(300)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_PS5_RightStick_DPadSouth value: I32(301)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_PS5_RightStick_DPadWest value: I32(302)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightStick_DPadWest;

/// @brief Field k_EInputActionOrigin_PS5_RightStick_Move value: I32(298)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightStick_Move;

/// @brief Field k_EInputActionOrigin_PS5_RightTrigger_Click value: I32(291)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightTrigger_Click;

/// @brief Field k_EInputActionOrigin_PS5_RightTrigger_Pull value: I32(290)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_RightTrigger_Pull;

/// @brief Field k_EInputActionOrigin_PS5_Square value: I32(261)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Square;

/// @brief Field k_EInputActionOrigin_PS5_Triangle value: I32(260)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_Triangle;

/// @brief Field k_EInputActionOrigin_PS5_X value: I32(258)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_PS5_X;

/// @brief Field k_EInputActionOrigin_SteamController_A value: I32(1)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_A;

/// @brief Field k_EInputActionOrigin_SteamController_B value: I32(2)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_B;

/// @brief Field k_EInputActionOrigin_SteamController_Back value: I32(10)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Back;

/// @brief Field k_EInputActionOrigin_SteamController_Gyro_Move value: I32(35)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Gyro_Move;

/// @brief Field k_EInputActionOrigin_SteamController_Gyro_Pitch value: I32(36)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Gyro_Pitch;

/// @brief Field k_EInputActionOrigin_SteamController_Gyro_Roll value: I32(38)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Gyro_Roll;

/// @brief Field k_EInputActionOrigin_SteamController_Gyro_Yaw value: I32(37)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Gyro_Yaw;

/// @brief Field k_EInputActionOrigin_SteamController_LeftBumper value: I32(5)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftBumper;

/// @brief Field k_EInputActionOrigin_SteamController_LeftGrip value: I32(7)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftGrip;

/// @brief Field k_EInputActionOrigin_SteamController_LeftPad_Click value: I32(13)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftPad_Click;

/// @brief Field k_EInputActionOrigin_SteamController_LeftPad_DPadEast value: I32(17)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftPad_DPadEast;

/// @brief Field k_EInputActionOrigin_SteamController_LeftPad_DPadNorth value: I32(14)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_SteamController_LeftPad_DPadSouth value: I32(15)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_SteamController_LeftPad_DPadWest value: I32(16)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftPad_DPadWest;

/// @brief Field k_EInputActionOrigin_SteamController_LeftPad_Swipe value: I32(12)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftPad_Swipe;

/// @brief Field k_EInputActionOrigin_SteamController_LeftPad_Touch value: I32(11)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftPad_Touch;

/// @brief Field k_EInputActionOrigin_SteamController_LeftStick_Click value: I32(30)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftStick_Click;

/// @brief Field k_EInputActionOrigin_SteamController_LeftStick_DPadEast value: I32(34)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftStick_DPadEast;

/// @brief Field k_EInputActionOrigin_SteamController_LeftStick_DPadNorth value: I32(31)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_SteamController_LeftStick_DPadSouth value: I32(32)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_SteamController_LeftStick_DPadWest value: I32(33)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftStick_DPadWest;

/// @brief Field k_EInputActionOrigin_SteamController_LeftStick_Move value: I32(29)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftStick_Move;

/// @brief Field k_EInputActionOrigin_SteamController_LeftTrigger_Click value: I32(26)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftTrigger_Click;

/// @brief Field k_EInputActionOrigin_SteamController_LeftTrigger_Pull value: I32(25)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_LeftTrigger_Pull;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved0 value: I32(39)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved0;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved1 value: I32(40)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved1;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved10 value: I32(49)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved10;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved2 value: I32(41)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved2;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved3 value: I32(42)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved3;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved4 value: I32(43)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved4;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved5 value: I32(44)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved5;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved6 value: I32(45)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved6;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved7 value: I32(46)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved7;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved8 value: I32(47)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved8;

/// @brief Field k_EInputActionOrigin_SteamController_Reserved9 value: I32(48)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Reserved9;

/// @brief Field k_EInputActionOrigin_SteamController_RightBumper value: I32(6)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightBumper;

/// @brief Field k_EInputActionOrigin_SteamController_RightGrip value: I32(8)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightGrip;

/// @brief Field k_EInputActionOrigin_SteamController_RightPad_Click value: I32(20)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightPad_Click;

/// @brief Field k_EInputActionOrigin_SteamController_RightPad_DPadEast value: I32(24)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightPad_DPadEast;

/// @brief Field k_EInputActionOrigin_SteamController_RightPad_DPadNorth value: I32(21)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_SteamController_RightPad_DPadSouth value: I32(22)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_SteamController_RightPad_DPadWest value: I32(23)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightPad_DPadWest;

/// @brief Field k_EInputActionOrigin_SteamController_RightPad_Swipe value: I32(19)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightPad_Swipe;

/// @brief Field k_EInputActionOrigin_SteamController_RightPad_Touch value: I32(18)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightPad_Touch;

/// @brief Field k_EInputActionOrigin_SteamController_RightTrigger_Click value: I32(28)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightTrigger_Click;

/// @brief Field k_EInputActionOrigin_SteamController_RightTrigger_Pull value: I32(27)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_RightTrigger_Pull;

/// @brief Field k_EInputActionOrigin_SteamController_Start value: I32(9)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Start;

/// @brief Field k_EInputActionOrigin_SteamController_X value: I32(3)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_X;

/// @brief Field k_EInputActionOrigin_SteamController_Y value: I32(4)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamController_Y;

/// @brief Field k_EInputActionOrigin_SteamDeck_A value: I32(333)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_A;

/// @brief Field k_EInputActionOrigin_SteamDeck_B value: I32(334)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_B;

/// @brief Field k_EInputActionOrigin_SteamDeck_DPad_East value: I32(381)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_DPad_East;

/// @brief Field k_EInputActionOrigin_SteamDeck_DPad_Move value: I32(377)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_DPad_Move;

/// @brief Field k_EInputActionOrigin_SteamDeck_DPad_North value: I32(378)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_DPad_North;

/// @brief Field k_EInputActionOrigin_SteamDeck_DPad_South value: I32(379)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_DPad_South;

/// @brief Field k_EInputActionOrigin_SteamDeck_DPad_West value: I32(380)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_DPad_West;

/// @brief Field k_EInputActionOrigin_SteamDeck_Gyro_Move value: I32(382)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Gyro_Move;

/// @brief Field k_EInputActionOrigin_SteamDeck_Gyro_Pitch value: I32(383)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Gyro_Pitch;

/// @brief Field k_EInputActionOrigin_SteamDeck_Gyro_Roll value: I32(385)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Gyro_Roll;

/// @brief Field k_EInputActionOrigin_SteamDeck_Gyro_Yaw value: I32(384)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Gyro_Yaw;

/// @brief Field k_EInputActionOrigin_SteamDeck_L1 value: I32(337)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_L1;

/// @brief Field k_EInputActionOrigin_SteamDeck_L2 value: I32(356)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_L2;

/// @brief Field k_EInputActionOrigin_SteamDeck_L2_SoftPull value: I32(355)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_L2_SoftPull;

/// @brief Field k_EInputActionOrigin_SteamDeck_L3 value: I32(360)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_L3;

/// @brief Field k_EInputActionOrigin_SteamDeck_L4 value: I32(373)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_L4;

/// @brief Field k_EInputActionOrigin_SteamDeck_L5 value: I32(375)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_L5;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftPad_Click value: I32(343)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftPad_Click;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftPad_DPadEast value: I32(347)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftPad_DPadEast;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftPad_DPadNorth value: I32(344)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftPad_DPadSouth value: I32(345)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftPad_DPadWest value: I32(346)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftPad_DPadWest;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftPad_Swipe value: I32(342)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftPad_Swipe;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftPad_Touch value: I32(341)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftPad_Touch;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftStick_DPadEast value: I32(364)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftStick_DPadEast;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftStick_DPadNorth value: I32(361)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftStick_DPadSouth value: I32(362)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftStick_DPadWest value: I32(363)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftStick_DPadWest;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftStick_Move value: I32(359)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftStick_Move;

/// @brief Field k_EInputActionOrigin_SteamDeck_LeftStick_Touch value: I32(365)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_LeftStick_Touch;

/// @brief Field k_EInputActionOrigin_SteamDeck_Menu value: I32(339)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Menu;

/// @brief Field k_EInputActionOrigin_SteamDeck_R1 value: I32(338)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_R1;

/// @brief Field k_EInputActionOrigin_SteamDeck_R2 value: I32(358)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_R2;

/// @brief Field k_EInputActionOrigin_SteamDeck_R2_SoftPull value: I32(357)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_R2_SoftPull;

/// @brief Field k_EInputActionOrigin_SteamDeck_R3 value: I32(367)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_R3;

/// @brief Field k_EInputActionOrigin_SteamDeck_R4 value: I32(374)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_R4;

/// @brief Field k_EInputActionOrigin_SteamDeck_R5 value: I32(376)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_R5;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved1 value: I32(386)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved1;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved10 value: I32(395)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved10;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved11 value: I32(396)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved11;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved12 value: I32(397)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved12;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved13 value: I32(398)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved13;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved14 value: I32(399)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved14;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved15 value: I32(400)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved15;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved16 value: I32(401)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved16;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved17 value: I32(402)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved17;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved18 value: I32(403)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved18;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved19 value: I32(404)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved19;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved2 value: I32(387)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved2;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved20 value: I32(405)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved20;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved3 value: I32(388)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved3;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved4 value: I32(389)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved4;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved5 value: I32(390)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved5;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved6 value: I32(391)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved6;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved7 value: I32(392)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved7;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved8 value: I32(393)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved8;

/// @brief Field k_EInputActionOrigin_SteamDeck_Reserved9 value: I32(394)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Reserved9;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightPad_Click value: I32(350)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightPad_Click;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightPad_DPadEast value: I32(354)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightPad_DPadEast;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightPad_DPadNorth value: I32(351)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightPad_DPadNorth;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightPad_DPadSouth value: I32(352)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightPad_DPadSouth;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightPad_DPadWest value: I32(353)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightPad_DPadWest;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightPad_Swipe value: I32(349)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightPad_Swipe;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightPad_Touch value: I32(348)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightPad_Touch;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightStick_DPadEast value: I32(371)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightStick_DPadEast;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightStick_DPadNorth value: I32(368)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightStick_DPadSouth value: I32(369)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightStick_DPadWest value: I32(370)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightStick_DPadWest;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightStick_Move value: I32(366)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightStick_Move;

/// @brief Field k_EInputActionOrigin_SteamDeck_RightStick_Touch value: I32(372)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_RightStick_Touch;

/// @brief Field k_EInputActionOrigin_SteamDeck_View value: I32(340)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_View;

/// @brief Field k_EInputActionOrigin_SteamDeck_X value: I32(335)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_X;

/// @brief Field k_EInputActionOrigin_SteamDeck_Y value: I32(336)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_SteamDeck_Y;

/// @brief Field k_EInputActionOrigin_Switch_A value: I32(192)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_A;

/// @brief Field k_EInputActionOrigin_Switch_B value: I32(193)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_B;

/// @brief Field k_EInputActionOrigin_Switch_Capture value: I32(200)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Capture;

/// @brief Field k_EInputActionOrigin_Switch_DPad_East value: I32(220)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_DPad_East;

/// @brief Field k_EInputActionOrigin_Switch_DPad_Move value: I32(225)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_DPad_Move;

/// @brief Field k_EInputActionOrigin_Switch_DPad_North value: I32(217)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_DPad_North;

/// @brief Field k_EInputActionOrigin_Switch_DPad_South value: I32(218)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_DPad_South;

/// @brief Field k_EInputActionOrigin_Switch_DPad_West value: I32(219)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_DPad_West;

/// @brief Field k_EInputActionOrigin_Switch_LeftBumper value: I32(196)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftBumper;

/// @brief Field k_EInputActionOrigin_Switch_LeftGrip_Lower value: I32(244)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftGrip_Lower;

/// @brief Field k_EInputActionOrigin_Switch_LeftGrip_Upper value: I32(245)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftGrip_Upper;

/// @brief Field k_EInputActionOrigin_Switch_LeftGyro_Move value: I32(240)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftGyro_Move;

/// @brief Field k_EInputActionOrigin_Switch_LeftGyro_Pitch value: I32(241)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftGyro_Pitch;

/// @brief Field k_EInputActionOrigin_Switch_LeftGyro_Roll value: I32(243)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftGyro_Roll;

/// @brief Field k_EInputActionOrigin_Switch_LeftGyro_Yaw value: I32(242)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftGyro_Yaw;

/// @brief Field k_EInputActionOrigin_Switch_LeftStick_Click value: I32(206)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftStick_Click;

/// @brief Field k_EInputActionOrigin_Switch_LeftStick_DPadEast value: I32(210)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftStick_DPadEast;

/// @brief Field k_EInputActionOrigin_Switch_LeftStick_DPadNorth value: I32(207)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_Switch_LeftStick_DPadSouth value: I32(208)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_Switch_LeftStick_DPadWest value: I32(209)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftStick_DPadWest;

/// @brief Field k_EInputActionOrigin_Switch_LeftStick_Move value: I32(205)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftStick_Move;

/// @brief Field k_EInputActionOrigin_Switch_LeftTrigger_Click value: I32(202)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftTrigger_Click;

/// @brief Field k_EInputActionOrigin_Switch_LeftTrigger_Pull value: I32(201)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_LeftTrigger_Pull;

/// @brief Field k_EInputActionOrigin_Switch_Minus value: I32(199)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Minus;

/// @brief Field k_EInputActionOrigin_Switch_Plus value: I32(198)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Plus;

/// @brief Field k_EInputActionOrigin_Switch_ProGyro_Move value: I32(221)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_ProGyro_Move;

/// @brief Field k_EInputActionOrigin_Switch_ProGyro_Pitch value: I32(222)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_ProGyro_Pitch;

/// @brief Field k_EInputActionOrigin_Switch_ProGyro_Roll value: I32(224)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_ProGyro_Roll;

/// @brief Field k_EInputActionOrigin_Switch_ProGyro_Yaw value: I32(223)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_ProGyro_Yaw;

/// @brief Field k_EInputActionOrigin_Switch_Reserved1 value: I32(226)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved1;

/// @brief Field k_EInputActionOrigin_Switch_Reserved10 value: I32(235)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved10;

/// @brief Field k_EInputActionOrigin_Switch_Reserved11 value: I32(248)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved11;

/// @brief Field k_EInputActionOrigin_Switch_Reserved12 value: I32(249)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved12;

/// @brief Field k_EInputActionOrigin_Switch_Reserved13 value: I32(250)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved13;

/// @brief Field k_EInputActionOrigin_Switch_Reserved14 value: I32(251)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved14;

/// @brief Field k_EInputActionOrigin_Switch_Reserved15 value: I32(252)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved15;

/// @brief Field k_EInputActionOrigin_Switch_Reserved16 value: I32(253)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved16;

/// @brief Field k_EInputActionOrigin_Switch_Reserved17 value: I32(254)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved17;

/// @brief Field k_EInputActionOrigin_Switch_Reserved18 value: I32(255)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved18;

/// @brief Field k_EInputActionOrigin_Switch_Reserved19 value: I32(256)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved19;

/// @brief Field k_EInputActionOrigin_Switch_Reserved2 value: I32(227)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved2;

/// @brief Field k_EInputActionOrigin_Switch_Reserved20 value: I32(257)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved20;

/// @brief Field k_EInputActionOrigin_Switch_Reserved3 value: I32(228)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved3;

/// @brief Field k_EInputActionOrigin_Switch_Reserved4 value: I32(229)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved4;

/// @brief Field k_EInputActionOrigin_Switch_Reserved5 value: I32(230)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved5;

/// @brief Field k_EInputActionOrigin_Switch_Reserved6 value: I32(231)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved6;

/// @brief Field k_EInputActionOrigin_Switch_Reserved7 value: I32(232)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved7;

/// @brief Field k_EInputActionOrigin_Switch_Reserved8 value: I32(233)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved8;

/// @brief Field k_EInputActionOrigin_Switch_Reserved9 value: I32(234)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Reserved9;

/// @brief Field k_EInputActionOrigin_Switch_RightBumper value: I32(197)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightBumper;

/// @brief Field k_EInputActionOrigin_Switch_RightGrip_Lower value: I32(246)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightGrip_Lower;

/// @brief Field k_EInputActionOrigin_Switch_RightGrip_Upper value: I32(247)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightGrip_Upper;

/// @brief Field k_EInputActionOrigin_Switch_RightGyro_Move value: I32(236)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightGyro_Move;

/// @brief Field k_EInputActionOrigin_Switch_RightGyro_Pitch value: I32(237)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightGyro_Pitch;

/// @brief Field k_EInputActionOrigin_Switch_RightGyro_Roll value: I32(239)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightGyro_Roll;

/// @brief Field k_EInputActionOrigin_Switch_RightGyro_Yaw value: I32(238)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightGyro_Yaw;

/// @brief Field k_EInputActionOrigin_Switch_RightStick_Click value: I32(212)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightStick_Click;

/// @brief Field k_EInputActionOrigin_Switch_RightStick_DPadEast value: I32(216)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightStick_DPadEast;

/// @brief Field k_EInputActionOrigin_Switch_RightStick_DPadNorth value: I32(213)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_Switch_RightStick_DPadSouth value: I32(214)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_Switch_RightStick_DPadWest value: I32(215)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightStick_DPadWest;

/// @brief Field k_EInputActionOrigin_Switch_RightStick_Move value: I32(211)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightStick_Move;

/// @brief Field k_EInputActionOrigin_Switch_RightTrigger_Click value: I32(204)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightTrigger_Click;

/// @brief Field k_EInputActionOrigin_Switch_RightTrigger_Pull value: I32(203)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_RightTrigger_Pull;

/// @brief Field k_EInputActionOrigin_Switch_X value: I32(194)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_X;

/// @brief Field k_EInputActionOrigin_Switch_Y value: I32(195)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_Switch_Y;

/// @brief Field k_EInputActionOrigin_XBox360_A value: I32(153)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_A;

/// @brief Field k_EInputActionOrigin_XBox360_B value: I32(154)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_B;

/// @brief Field k_EInputActionOrigin_XBox360_Back value: I32(160)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Back;

/// @brief Field k_EInputActionOrigin_XBox360_DPad_East value: I32(180)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_DPad_East;

/// @brief Field k_EInputActionOrigin_XBox360_DPad_Move value: I32(181)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_DPad_Move;

/// @brief Field k_EInputActionOrigin_XBox360_DPad_North value: I32(177)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_DPad_North;

/// @brief Field k_EInputActionOrigin_XBox360_DPad_South value: I32(178)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_DPad_South;

/// @brief Field k_EInputActionOrigin_XBox360_DPad_West value: I32(179)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_DPad_West;

/// @brief Field k_EInputActionOrigin_XBox360_LeftBumper value: I32(157)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_LeftBumper;

/// @brief Field k_EInputActionOrigin_XBox360_LeftStick_Click value: I32(166)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_LeftStick_Click;

/// @brief Field k_EInputActionOrigin_XBox360_LeftStick_DPadEast value: I32(170)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_LeftStick_DPadEast;

/// @brief Field k_EInputActionOrigin_XBox360_LeftStick_DPadNorth value: I32(167)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_LeftStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_XBox360_LeftStick_DPadSouth value: I32(168)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_LeftStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_XBox360_LeftStick_DPadWest value: I32(169)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_LeftStick_DPadWest;

/// @brief Field k_EInputActionOrigin_XBox360_LeftStick_Move value: I32(165)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_LeftStick_Move;

/// @brief Field k_EInputActionOrigin_XBox360_LeftTrigger_Click value: I32(162)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_LeftTrigger_Click;

/// @brief Field k_EInputActionOrigin_XBox360_LeftTrigger_Pull value: I32(161)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_LeftTrigger_Pull;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved1 value: I32(182)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved1;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved10 value: I32(191)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved10;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved2 value: I32(183)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved2;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved3 value: I32(184)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved3;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved4 value: I32(185)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved4;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved5 value: I32(186)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved5;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved6 value: I32(187)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved6;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved7 value: I32(188)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved7;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved8 value: I32(189)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved8;

/// @brief Field k_EInputActionOrigin_XBox360_Reserved9 value: I32(190)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Reserved9;

/// @brief Field k_EInputActionOrigin_XBox360_RightBumper value: I32(158)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_RightBumper;

/// @brief Field k_EInputActionOrigin_XBox360_RightStick_Click value: I32(172)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_RightStick_Click;

/// @brief Field k_EInputActionOrigin_XBox360_RightStick_DPadEast value: I32(176)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_RightStick_DPadEast;

/// @brief Field k_EInputActionOrigin_XBox360_RightStick_DPadNorth value: I32(173)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_RightStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_XBox360_RightStick_DPadSouth value: I32(174)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_RightStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_XBox360_RightStick_DPadWest value: I32(175)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_RightStick_DPadWest;

/// @brief Field k_EInputActionOrigin_XBox360_RightStick_Move value: I32(171)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_RightStick_Move;

/// @brief Field k_EInputActionOrigin_XBox360_RightTrigger_Click value: I32(164)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_RightTrigger_Click;

/// @brief Field k_EInputActionOrigin_XBox360_RightTrigger_Pull value: I32(163)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_RightTrigger_Pull;

/// @brief Field k_EInputActionOrigin_XBox360_Start value: I32(159)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Start;

/// @brief Field k_EInputActionOrigin_XBox360_X value: I32(155)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_X;

/// @brief Field k_EInputActionOrigin_XBox360_Y value: I32(156)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBox360_Y;

/// @brief Field k_EInputActionOrigin_XBoxOne_A value: I32(114)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_A;

/// @brief Field k_EInputActionOrigin_XBoxOne_B value: I32(115)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_B;

/// @brief Field k_EInputActionOrigin_XBoxOne_DPad_East value: I32(141)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_DPad_East;

/// @brief Field k_EInputActionOrigin_XBoxOne_DPad_Move value: I32(142)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_DPad_Move;

/// @brief Field k_EInputActionOrigin_XBoxOne_DPad_North value: I32(138)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_DPad_North;

/// @brief Field k_EInputActionOrigin_XBoxOne_DPad_South value: I32(139)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_DPad_South;

/// @brief Field k_EInputActionOrigin_XBoxOne_DPad_West value: I32(140)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_DPad_West;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftBumper value: I32(118)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftBumper;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftGrip_Lower value: I32(143)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftGrip_Lower;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftGrip_Upper value: I32(144)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftGrip_Upper;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftStick_Click value: I32(127)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftStick_Click;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftStick_DPadEast value: I32(131)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftStick_DPadEast;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftStick_DPadNorth value: I32(128)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftStick_DPadSouth value: I32(129)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftStick_DPadWest value: I32(130)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftStick_DPadWest;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftStick_Move value: I32(126)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftStick_Move;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftTrigger_Click value: I32(123)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftTrigger_Click;

/// @brief Field k_EInputActionOrigin_XBoxOne_LeftTrigger_Pull value: I32(122)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_LeftTrigger_Pull;

/// @brief Field k_EInputActionOrigin_XBoxOne_Menu value: I32(120)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_Menu;

/// @brief Field k_EInputActionOrigin_XBoxOne_Reserved10 value: I32(152)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_Reserved10;

/// @brief Field k_EInputActionOrigin_XBoxOne_Reserved6 value: I32(148)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_Reserved6;

/// @brief Field k_EInputActionOrigin_XBoxOne_Reserved7 value: I32(149)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_Reserved7;

/// @brief Field k_EInputActionOrigin_XBoxOne_Reserved8 value: I32(150)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_Reserved8;

/// @brief Field k_EInputActionOrigin_XBoxOne_Reserved9 value: I32(151)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_Reserved9;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightBumper value: I32(119)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightBumper;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightGrip_Lower value: I32(145)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightGrip_Lower;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightGrip_Upper value: I32(146)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightGrip_Upper;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightStick_Click value: I32(133)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightStick_Click;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightStick_DPadEast value: I32(137)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightStick_DPadEast;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightStick_DPadNorth value: I32(134)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightStick_DPadNorth;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightStick_DPadSouth value: I32(135)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightStick_DPadSouth;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightStick_DPadWest value: I32(136)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightStick_DPadWest;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightStick_Move value: I32(132)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightStick_Move;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightTrigger_Click value: I32(125)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightTrigger_Click;

/// @brief Field k_EInputActionOrigin_XBoxOne_RightTrigger_Pull value: I32(124)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_RightTrigger_Pull;

/// @brief Field k_EInputActionOrigin_XBoxOne_Share value: I32(147)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_Share;

/// @brief Field k_EInputActionOrigin_XBoxOne_View value: I32(121)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_View;

/// @brief Field k_EInputActionOrigin_XBoxOne_X value: I32(116)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_X;

/// @brief Field k_EInputActionOrigin_XBoxOne_Y value: I32(117)
static ::Steamworks::EInputActionOrigin const k_EInputActionOrigin_XBoxOne_Y;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EInputActionOrigin, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EInputActionOrigin) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
