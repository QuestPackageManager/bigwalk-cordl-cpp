#pragma once
// IWYU pragma private; include "Steamworks/EXboxOrigin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EXboxOrigin)
// Forward declare root types
namespace Steamworks {
struct EXboxOrigin;
}
// Write type traits
MARK_VAL_T(::Steamworks::EXboxOrigin);
DEFINE_IL2CPP_CLASS(::Steamworks::EXboxOrigin, "Steamworks", "EXboxOrigin");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.EXboxOrigin
struct CORDL_TYPE EXboxOrigin {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EXboxOrigin_Unwrapped
enum struct __EXboxOrigin_Unwrapped : int32_t {
__E_k_EXboxOrigin_A = static_cast<int32_t>(0x0),
__E_k_EXboxOrigin_B = static_cast<int32_t>(0x1),
__E_k_EXboxOrigin_X = static_cast<int32_t>(0x2),
__E_k_EXboxOrigin_Y = static_cast<int32_t>(0x3),
__E_k_EXboxOrigin_LeftBumper = static_cast<int32_t>(0x4),
__E_k_EXboxOrigin_RightBumper = static_cast<int32_t>(0x5),
__E_k_EXboxOrigin_Menu = static_cast<int32_t>(0x6),
__E_k_EXboxOrigin_View = static_cast<int32_t>(0x7),
__E_k_EXboxOrigin_LeftTrigger_Pull = static_cast<int32_t>(0x8),
__E_k_EXboxOrigin_LeftTrigger_Click = static_cast<int32_t>(0x9),
__E_k_EXboxOrigin_RightTrigger_Pull = static_cast<int32_t>(0xa),
__E_k_EXboxOrigin_RightTrigger_Click = static_cast<int32_t>(0xb),
__E_k_EXboxOrigin_LeftStick_Move = static_cast<int32_t>(0xc),
__E_k_EXboxOrigin_LeftStick_Click = static_cast<int32_t>(0xd),
__E_k_EXboxOrigin_LeftStick_DPadNorth = static_cast<int32_t>(0xe),
__E_k_EXboxOrigin_LeftStick_DPadSouth = static_cast<int32_t>(0xf),
__E_k_EXboxOrigin_LeftStick_DPadWest = static_cast<int32_t>(0x10),
__E_k_EXboxOrigin_LeftStick_DPadEast = static_cast<int32_t>(0x11),
__E_k_EXboxOrigin_RightStick_Move = static_cast<int32_t>(0x12),
__E_k_EXboxOrigin_RightStick_Click = static_cast<int32_t>(0x13),
__E_k_EXboxOrigin_RightStick_DPadNorth = static_cast<int32_t>(0x14),
__E_k_EXboxOrigin_RightStick_DPadSouth = static_cast<int32_t>(0x15),
__E_k_EXboxOrigin_RightStick_DPadWest = static_cast<int32_t>(0x16),
__E_k_EXboxOrigin_RightStick_DPadEast = static_cast<int32_t>(0x17),
__E_k_EXboxOrigin_DPad_North = static_cast<int32_t>(0x18),
__E_k_EXboxOrigin_DPad_South = static_cast<int32_t>(0x19),
__E_k_EXboxOrigin_DPad_West = static_cast<int32_t>(0x1a),
__E_k_EXboxOrigin_DPad_East = static_cast<int32_t>(0x1b),
__E_k_EXboxOrigin_Count = static_cast<int32_t>(0x1c),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EXboxOrigin_Unwrapped () const noexcept {
return static_cast<__EXboxOrigin_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EXboxOrigin() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EXboxOrigin(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16253};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_EXboxOrigin_A value: I32(0)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_A;

/// @brief Field k_EXboxOrigin_B value: I32(1)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_B;

/// @brief Field k_EXboxOrigin_Count value: I32(28)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_Count;

/// @brief Field k_EXboxOrigin_DPad_East value: I32(27)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_DPad_East;

/// @brief Field k_EXboxOrigin_DPad_North value: I32(24)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_DPad_North;

/// @brief Field k_EXboxOrigin_DPad_South value: I32(25)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_DPad_South;

/// @brief Field k_EXboxOrigin_DPad_West value: I32(26)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_DPad_West;

/// @brief Field k_EXboxOrigin_LeftBumper value: I32(4)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_LeftBumper;

/// @brief Field k_EXboxOrigin_LeftStick_Click value: I32(13)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_LeftStick_Click;

/// @brief Field k_EXboxOrigin_LeftStick_DPadEast value: I32(17)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_LeftStick_DPadEast;

/// @brief Field k_EXboxOrigin_LeftStick_DPadNorth value: I32(14)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_LeftStick_DPadNorth;

/// @brief Field k_EXboxOrigin_LeftStick_DPadSouth value: I32(15)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_LeftStick_DPadSouth;

/// @brief Field k_EXboxOrigin_LeftStick_DPadWest value: I32(16)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_LeftStick_DPadWest;

/// @brief Field k_EXboxOrigin_LeftStick_Move value: I32(12)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_LeftStick_Move;

/// @brief Field k_EXboxOrigin_LeftTrigger_Click value: I32(9)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_LeftTrigger_Click;

/// @brief Field k_EXboxOrigin_LeftTrigger_Pull value: I32(8)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_LeftTrigger_Pull;

/// @brief Field k_EXboxOrigin_Menu value: I32(6)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_Menu;

/// @brief Field k_EXboxOrigin_RightBumper value: I32(5)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_RightBumper;

/// @brief Field k_EXboxOrigin_RightStick_Click value: I32(19)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_RightStick_Click;

/// @brief Field k_EXboxOrigin_RightStick_DPadEast value: I32(23)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_RightStick_DPadEast;

/// @brief Field k_EXboxOrigin_RightStick_DPadNorth value: I32(20)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_RightStick_DPadNorth;

/// @brief Field k_EXboxOrigin_RightStick_DPadSouth value: I32(21)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_RightStick_DPadSouth;

/// @brief Field k_EXboxOrigin_RightStick_DPadWest value: I32(22)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_RightStick_DPadWest;

/// @brief Field k_EXboxOrigin_RightStick_Move value: I32(18)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_RightStick_Move;

/// @brief Field k_EXboxOrigin_RightTrigger_Click value: I32(11)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_RightTrigger_Click;

/// @brief Field k_EXboxOrigin_RightTrigger_Pull value: I32(10)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_RightTrigger_Pull;

/// @brief Field k_EXboxOrigin_View value: I32(7)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_View;

/// @brief Field k_EXboxOrigin_X value: I32(2)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_X;

/// @brief Field k_EXboxOrigin_Y value: I32(3)
static ::Steamworks::EXboxOrigin const k_EXboxOrigin_Y;

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::EXboxOrigin, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Steamworks::EXboxOrigin) == 0x4, "Size mismatch!");

} // namespace end def Steamworks
