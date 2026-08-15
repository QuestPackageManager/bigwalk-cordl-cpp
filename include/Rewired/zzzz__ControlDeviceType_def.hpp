#pragma once
// IWYU pragma private; include "Rewired/ControlDeviceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControlDeviceType)
// Forward declare root types
namespace Rewired {
struct ControlDeviceType;
}
// Write type traits
MARK_VAL_T(::Rewired::ControlDeviceType);
DEFINE_IL2CPP_CLASS(::Rewired::ControlDeviceType, "Rewired", "ControlDeviceType");
// Dependencies 
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ControlDeviceType
struct CORDL_TYPE ControlDeviceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControlDeviceType_Unwrapped
enum struct __ControlDeviceType_Unwrapped : int32_t {
__E_Keyboard = static_cast<int32_t>(0x0),
__E_Mouse = static_cast<int32_t>(0x1),
__E_Joystick = static_cast<int32_t>(0x2),
__E_Gamepad = static_cast<int32_t>(0x3),
__E_ArcadeStick = static_cast<int32_t>(0x4),
__E_DancePad = static_cast<int32_t>(0x5),
__E_DrumKit = static_cast<int32_t>(0x6),
__E_Flight = static_cast<int32_t>(0x7),
__E_Throttle = static_cast<int32_t>(0x8),
__E_Guitar = static_cast<int32_t>(0x9),
__E_Wheel = static_cast<int32_t>(0xa),
__E_Paddle = static_cast<int32_t>(0xb),
__E_Custom = static_cast<int32_t>(0x63),
__E_Unknown = static_cast<int32_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControlDeviceType_Unwrapped () const noexcept {
return static_cast<__ControlDeviceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControlDeviceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ControlDeviceType(int32_t  value__) noexcept;

/// @brief Field ArcadeStick value: I32(4)
static ::Rewired::ControlDeviceType const ArcadeStick;

/// @brief Field Custom value: I32(99)
static ::Rewired::ControlDeviceType const Custom;

/// @brief Field DancePad value: I32(5)
static ::Rewired::ControlDeviceType const DancePad;

/// @brief Field DrumKit value: I32(6)
static ::Rewired::ControlDeviceType const DrumKit;

/// @brief Field Flight value: I32(7)
static ::Rewired::ControlDeviceType const Flight;

/// @brief Field Gamepad value: I32(3)
static ::Rewired::ControlDeviceType const Gamepad;

/// @brief Field Guitar value: I32(9)
static ::Rewired::ControlDeviceType const Guitar;

/// @brief Field Joystick value: I32(2)
static ::Rewired::ControlDeviceType const Joystick;

/// @brief Field Keyboard value: I32(0)
static ::Rewired::ControlDeviceType const Keyboard;

/// @brief Field Mouse value: I32(1)
static ::Rewired::ControlDeviceType const Mouse;

/// @brief Field Paddle value: I32(11)
static ::Rewired::ControlDeviceType const Paddle;

/// @brief Field Throttle value: I32(8)
static ::Rewired::ControlDeviceType const Throttle;

/// @brief Field Unknown value: I32(100)
static ::Rewired::ControlDeviceType const Unknown;

/// @brief Field Wheel value: I32(10)
static ::Rewired::ControlDeviceType const Wheel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1963};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControlDeviceType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControlDeviceType) == 0x4, "Size mismatch!");

} // namespace end def Rewired
