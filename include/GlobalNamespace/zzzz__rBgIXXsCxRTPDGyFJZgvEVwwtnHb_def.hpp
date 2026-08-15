#pragma once
// IWYU pragma private; include "GlobalNamespace/rBgIXXsCxRTPDGyFJZgvEVwwtnHb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(rBgIXXsCxRTPDGyFJZgvEVwwtnHb)
// Forward declare root types
namespace GlobalNamespace {
struct rBgIXXsCxRTPDGyFJZgvEVwwtnHb;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb, "", "rBgIXXsCxRTPDGyFJZgvEVwwtnHb");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: rBgIXXsCxRTPDGyFJZgvEVwwtnHb
struct CORDL_TYPE rBgIXXsCxRTPDGyFJZgvEVwwtnHb {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __rBgIXXsCxRTPDGyFJZgvEVwwtnHb_Unwrapped
enum struct __rBgIXXsCxRTPDGyFJZgvEVwwtnHb_Unwrapped : int32_t {
__E_k_EControllerActionOrigin_None = static_cast<int32_t>(0x0),
__E_k_EControllerActionOrigin_A = static_cast<int32_t>(0x1),
__E_k_EControllerActionOrigin_B = static_cast<int32_t>(0x2),
__E_k_EControllerActionOrigin_X = static_cast<int32_t>(0x3),
__E_k_EControllerActionOrigin_Y = static_cast<int32_t>(0x4),
__E_k_EControllerActionOrigin_LeftBumper = static_cast<int32_t>(0x5),
__E_k_EControllerActionOrigin_RightBumper = static_cast<int32_t>(0x6),
__E_k_EControllerActionOrigin_LeftGrip = static_cast<int32_t>(0x7),
__E_k_EControllerActionOrigin_RightGrip = static_cast<int32_t>(0x8),
__E_k_EControllerActionOrigin_Start = static_cast<int32_t>(0x9),
__E_k_EControllerActionOrigin_Back = static_cast<int32_t>(0xa),
__E_k_EControllerActionOrigin_LeftPad_Touch = static_cast<int32_t>(0xb),
__E_k_EControllerActionOrigin_LeftPad_Swipe = static_cast<int32_t>(0xc),
__E_k_EControllerActionOrigin_LeftPad_Click = static_cast<int32_t>(0xd),
__E_k_EControllerActionOrigin_LeftPad_DPadNorth = static_cast<int32_t>(0xe),
__E_k_EControllerActionOrigin_LeftPad_DPadSouth = static_cast<int32_t>(0xf),
__E_k_EControllerActionOrigin_LeftPad_DPadWest = static_cast<int32_t>(0x10),
__E_k_EControllerActionOrigin_LeftPad_DPadEast = static_cast<int32_t>(0x11),
__E_k_EControllerActionOrigin_RightPad_Touch = static_cast<int32_t>(0x12),
__E_k_EControllerActionOrigin_RightPad_Swipe = static_cast<int32_t>(0x13),
__E_k_EControllerActionOrigin_RightPad_Click = static_cast<int32_t>(0x14),
__E_k_EControllerActionOrigin_RightPad_DPadNorth = static_cast<int32_t>(0x15),
__E_k_EControllerActionOrigin_RightPad_DPadSouth = static_cast<int32_t>(0x16),
__E_k_EControllerActionOrigin_RightPad_DPadWest = static_cast<int32_t>(0x17),
__E_k_EControllerActionOrigin_RightPad_DPadEast = static_cast<int32_t>(0x18),
__E_k_EControllerActionOrigin_LeftTrigger_Pull = static_cast<int32_t>(0x19),
__E_k_EControllerActionOrigin_LeftTrigger_Click = static_cast<int32_t>(0x1a),
__E_k_EControllerActionOrigin_RightTrigger_Pull = static_cast<int32_t>(0x1b),
__E_k_EControllerActionOrigin_RightTrigger_Click = static_cast<int32_t>(0x1c),
__E_k_EControllerActionOrigin_LeftStick_Move = static_cast<int32_t>(0x1d),
__E_k_EControllerActionOrigin_LeftStick_Click = static_cast<int32_t>(0x1e),
__E_k_EControllerActionOrigin_LeftStick_DPadNorth = static_cast<int32_t>(0x1f),
__E_k_EControllerActionOrigin_LeftStick_DPadSouth = static_cast<int32_t>(0x20),
__E_k_EControllerActionOrigin_LeftStick_DPadWest = static_cast<int32_t>(0x21),
__E_k_EControllerActionOrigin_LeftStick_DPadEast = static_cast<int32_t>(0x22),
__E_k_EControllerActionOrigin_Gyro_Move = static_cast<int32_t>(0x23),
__E_k_EControllerActionOrigin_Gyro_Pitch = static_cast<int32_t>(0x24),
__E_k_EControllerActionOrigin_Gyro_Yaw = static_cast<int32_t>(0x25),
__E_k_EControllerActionOrigin_Gyro_Roll = static_cast<int32_t>(0x26),
__E_k_EControllerActionOrigin_Count = static_cast<int32_t>(0x27),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __rBgIXXsCxRTPDGyFJZgvEVwwtnHb_Unwrapped () const noexcept {
return static_cast<__rBgIXXsCxRTPDGyFJZgvEVwwtnHb_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr rBgIXXsCxRTPDGyFJZgvEVwwtnHb() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr rBgIXXsCxRTPDGyFJZgvEVwwtnHb(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6493};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EControllerActionOrigin_A value: I32(1)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_A;

/// @brief Field k_EControllerActionOrigin_B value: I32(2)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_B;

/// @brief Field k_EControllerActionOrigin_Back value: I32(10)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_Back;

/// @brief Field k_EControllerActionOrigin_Count value: I32(39)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_Count;

/// @brief Field k_EControllerActionOrigin_Gyro_Move value: I32(35)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_Gyro_Move;

/// @brief Field k_EControllerActionOrigin_Gyro_Pitch value: I32(36)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_Gyro_Pitch;

/// @brief Field k_EControllerActionOrigin_Gyro_Roll value: I32(38)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_Gyro_Roll;

/// @brief Field k_EControllerActionOrigin_Gyro_Yaw value: I32(37)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_Gyro_Yaw;

/// @brief Field k_EControllerActionOrigin_LeftBumper value: I32(5)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftBumper;

/// @brief Field k_EControllerActionOrigin_LeftGrip value: I32(7)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftGrip;

/// @brief Field k_EControllerActionOrigin_LeftPad_Click value: I32(13)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftPad_Click;

/// @brief Field k_EControllerActionOrigin_LeftPad_DPadEast value: I32(17)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftPad_DPadEast;

/// @brief Field k_EControllerActionOrigin_LeftPad_DPadNorth value: I32(14)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftPad_DPadNorth;

/// @brief Field k_EControllerActionOrigin_LeftPad_DPadSouth value: I32(15)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftPad_DPadSouth;

/// @brief Field k_EControllerActionOrigin_LeftPad_DPadWest value: I32(16)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftPad_DPadWest;

/// @brief Field k_EControllerActionOrigin_LeftPad_Swipe value: I32(12)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftPad_Swipe;

/// @brief Field k_EControllerActionOrigin_LeftPad_Touch value: I32(11)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftPad_Touch;

/// @brief Field k_EControllerActionOrigin_LeftStick_Click value: I32(30)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftStick_Click;

/// @brief Field k_EControllerActionOrigin_LeftStick_DPadEast value: I32(34)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftStick_DPadEast;

/// @brief Field k_EControllerActionOrigin_LeftStick_DPadNorth value: I32(31)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftStick_DPadNorth;

/// @brief Field k_EControllerActionOrigin_LeftStick_DPadSouth value: I32(32)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftStick_DPadSouth;

/// @brief Field k_EControllerActionOrigin_LeftStick_DPadWest value: I32(33)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftStick_DPadWest;

/// @brief Field k_EControllerActionOrigin_LeftStick_Move value: I32(29)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftStick_Move;

/// @brief Field k_EControllerActionOrigin_LeftTrigger_Click value: I32(26)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftTrigger_Click;

/// @brief Field k_EControllerActionOrigin_LeftTrigger_Pull value: I32(25)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_LeftTrigger_Pull;

/// @brief Field k_EControllerActionOrigin_None value: I32(0)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_None;

/// @brief Field k_EControllerActionOrigin_RightBumper value: I32(6)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightBumper;

/// @brief Field k_EControllerActionOrigin_RightGrip value: I32(8)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightGrip;

/// @brief Field k_EControllerActionOrigin_RightPad_Click value: I32(20)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightPad_Click;

/// @brief Field k_EControllerActionOrigin_RightPad_DPadEast value: I32(24)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightPad_DPadEast;

/// @brief Field k_EControllerActionOrigin_RightPad_DPadNorth value: I32(21)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightPad_DPadNorth;

/// @brief Field k_EControllerActionOrigin_RightPad_DPadSouth value: I32(22)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightPad_DPadSouth;

/// @brief Field k_EControllerActionOrigin_RightPad_DPadWest value: I32(23)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightPad_DPadWest;

/// @brief Field k_EControllerActionOrigin_RightPad_Swipe value: I32(19)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightPad_Swipe;

/// @brief Field k_EControllerActionOrigin_RightPad_Touch value: I32(18)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightPad_Touch;

/// @brief Field k_EControllerActionOrigin_RightTrigger_Click value: I32(28)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightTrigger_Click;

/// @brief Field k_EControllerActionOrigin_RightTrigger_Pull value: I32(27)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_RightTrigger_Pull;

/// @brief Field k_EControllerActionOrigin_Start value: I32(9)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_Start;

/// @brief Field k_EControllerActionOrigin_X value: I32(3)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_X;

/// @brief Field k_EControllerActionOrigin_Y value: I32(4)
static ::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb const k_EControllerActionOrigin_Y;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::rBgIXXsCxRTPDGyFJZgvEVwwtnHb) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
