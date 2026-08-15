#pragma once
// IWYU pragma private; include "Rewired/Platforms/Windows/XInput/DeviceSubType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceSubType)
// Forward declare root types
namespace Rewired::Platforms::Windows::XInput {
struct DeviceSubType;
}
// Write type traits
MARK_VAL_T(::Rewired::Platforms::Windows::XInput::DeviceSubType);
DEFINE_IL2CPP_CLASS(::Rewired::Platforms::Windows::XInput::DeviceSubType, "Rewired.Platforms.Windows.XInput", "DeviceSubType");
// Dependencies 
namespace Rewired::Platforms::Windows::XInput {
// Is value type: true
// CS Name: Rewired.Platforms.Windows.XInput.DeviceSubType
struct CORDL_TYPE DeviceSubType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DeviceSubType_Unwrapped
enum struct __DeviceSubType_Unwrapped : uint8_t {
__E_Gamepad = static_cast<uint8_t>(0x1u),
__E_Wheel = static_cast<uint8_t>(0x2u),
__E_ArcadeStick = static_cast<uint8_t>(0x3u),
__E_FlightStick = static_cast<uint8_t>(0x4u),
__E_DancePad = static_cast<uint8_t>(0x5u),
__E_Guitar = static_cast<uint8_t>(0x6u),
__E_GuitarAlternate = static_cast<uint8_t>(0x7u),
__E_DrumKit = static_cast<uint8_t>(0x8u),
__E_GuitarBass = static_cast<uint8_t>(0xbu),
__E_ArcadePad = static_cast<uint8_t>(0x13u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DeviceSubType_Unwrapped () const noexcept {
return static_cast<__DeviceSubType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DeviceSubType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DeviceSubType(uint8_t  value__) noexcept;

/// @brief Field ArcadePad value: U8(19)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const ArcadePad;

/// @brief Field ArcadeStick value: U8(3)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const ArcadeStick;

/// @brief Field DancePad value: U8(5)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const DancePad;

/// @brief Field DrumKit value: U8(8)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const DrumKit;

/// @brief Field FlightStick value: U8(4)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const FlightStick;

/// @brief Field Gamepad value: U8(1)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const Gamepad;

/// @brief Field Guitar value: U8(6)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const Guitar;

/// @brief Field GuitarAlternate value: U8(7)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const GuitarAlternate;

/// @brief Field GuitarBass value: U8(11)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const GuitarBass;

/// @brief Field Wheel value: U8(2)
static ::Rewired::Platforms::Windows::XInput::DeviceSubType const Wheel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5923};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Platforms::Windows::XInput::DeviceSubType, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Rewired::Platforms::Windows::XInput::DeviceSubType) == 0x1, "Size mismatch!");

} // namespace end def Rewired::Platforms::Windows::XInput
