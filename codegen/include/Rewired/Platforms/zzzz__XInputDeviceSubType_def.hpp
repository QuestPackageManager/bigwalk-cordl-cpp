#pragma once
// IWYU pragma private; include "Rewired/Platforms/XInputDeviceSubType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XInputDeviceSubType)
// Forward declare root types
namespace Rewired::Platforms {
struct XInputDeviceSubType;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::XInputDeviceSubType);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::XInputDeviceSubType, "Rewired.Platforms", "XInputDeviceSubType");
// Dependencies 
namespace Rewired::Platforms {
// Is value type: true
// CS Name: Rewired.Platforms.XInputDeviceSubType
struct CORDL_TYPE XInputDeviceSubType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XInputDeviceSubType_Unwrapped
enum struct __XInputDeviceSubType_Unwrapped : int32_t {
__E_Gamepad = static_cast<int32_t>(0x1),
__E_Wheel = static_cast<int32_t>(0x2),
__E_ArcadeStick = static_cast<int32_t>(0x3),
__E_FlightStick = static_cast<int32_t>(0x4),
__E_DancePad = static_cast<int32_t>(0x5),
__E_Guitar = static_cast<int32_t>(0x6),
__E_GuitarAlternate = static_cast<int32_t>(0x7),
__E_DrumKit = static_cast<int32_t>(0x8),
__E_GuitarBass = static_cast<int32_t>(0xb),
__E_ArcadePad = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XInputDeviceSubType_Unwrapped () const noexcept {
return static_cast<__XInputDeviceSubType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XInputDeviceSubType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XInputDeviceSubType(int32_t  value__) noexcept;

/// @brief Field ArcadePad value: I32(19)
static ::Rewired::Platforms::XInputDeviceSubType const ArcadePad;

/// @brief Field ArcadeStick value: I32(3)
static ::Rewired::Platforms::XInputDeviceSubType const ArcadeStick;

/// @brief Field DancePad value: I32(5)
static ::Rewired::Platforms::XInputDeviceSubType const DancePad;

/// @brief Field DrumKit value: I32(8)
static ::Rewired::Platforms::XInputDeviceSubType const DrumKit;

/// @brief Field FlightStick value: I32(4)
static ::Rewired::Platforms::XInputDeviceSubType const FlightStick;

/// @brief Field Gamepad value: I32(1)
static ::Rewired::Platforms::XInputDeviceSubType const Gamepad;

/// @brief Field Guitar value: I32(6)
static ::Rewired::Platforms::XInputDeviceSubType const Guitar;

/// @brief Field GuitarAlternate value: I32(7)
static ::Rewired::Platforms::XInputDeviceSubType const GuitarAlternate;

/// @brief Field GuitarBass value: I32(11)
static ::Rewired::Platforms::XInputDeviceSubType const GuitarBass;

/// @brief Field Wheel value: I32(2)
static ::Rewired::Platforms::XInputDeviceSubType const Wheel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2269};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::XInputDeviceSubType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::XInputDeviceSubType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Platforms
