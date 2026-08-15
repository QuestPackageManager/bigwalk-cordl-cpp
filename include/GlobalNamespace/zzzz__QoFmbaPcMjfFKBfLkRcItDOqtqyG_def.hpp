#pragma once
// IWYU pragma private; include "GlobalNamespace/QoFmbaPcMjfFKBfLkRcItDOqtqyG.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(QoFmbaPcMjfFKBfLkRcItDOqtqyG)
// Forward declare root types
namespace GlobalNamespace {
struct QoFmbaPcMjfFKBfLkRcItDOqtqyG;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG, "", "QoFmbaPcMjfFKBfLkRcItDOqtqyG");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: QoFmbaPcMjfFKBfLkRcItDOqtqyG
struct CORDL_TYPE QoFmbaPcMjfFKBfLkRcItDOqtqyG {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __QoFmbaPcMjfFKBfLkRcItDOqtqyG_Unwrapped
enum struct __QoFmbaPcMjfFKBfLkRcItDOqtqyG_Unwrapped : uint8_t {
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
constexpr operator __QoFmbaPcMjfFKBfLkRcItDOqtqyG_Unwrapped () const noexcept {
return static_cast<__QoFmbaPcMjfFKBfLkRcItDOqtqyG_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr QoFmbaPcMjfFKBfLkRcItDOqtqyG() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr QoFmbaPcMjfFKBfLkRcItDOqtqyG(uint8_t  value__) noexcept;

/// @brief Field ArcadePad value: U8(19)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const ArcadePad;

/// @brief Field ArcadeStick value: U8(3)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const ArcadeStick;

/// @brief Field DancePad value: U8(5)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const DancePad;

/// @brief Field DrumKit value: U8(8)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const DrumKit;

/// @brief Field FlightStick value: U8(4)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const FlightStick;

/// @brief Field Gamepad value: U8(1)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const Gamepad;

/// @brief Field Guitar value: U8(6)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const Guitar;

/// @brief Field GuitarAlternate value: U8(7)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const GuitarAlternate;

/// @brief Field GuitarBass value: U8(11)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const GuitarBass;

/// @brief Field Wheel value: U8(2)
static ::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG const Wheel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6125};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::QoFmbaPcMjfFKBfLkRcItDOqtqyG) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
