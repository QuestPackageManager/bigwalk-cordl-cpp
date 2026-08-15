#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseMicrophoneLightMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseMicrophoneLightMode)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseMicrophoneLightMode;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode, "Rewired.ControllerExtensions", "DualSenseMicrophoneLightMode");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseMicrophoneLightMode
struct CORDL_TYPE DualSenseMicrophoneLightMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DualSenseMicrophoneLightMode_Unwrapped
enum struct __DualSenseMicrophoneLightMode_Unwrapped : uint8_t {
__E_Off = static_cast<uint8_t>(0x0u),
__E_On = static_cast<uint8_t>(0x1u),
__E_Flash = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualSenseMicrophoneLightMode_Unwrapped () const noexcept {
return static_cast<__DualSenseMicrophoneLightMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseMicrophoneLightMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DualSenseMicrophoneLightMode(uint8_t  value__) noexcept;

/// @brief Field Flash value: U8(2)
static ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode const Flash;

/// @brief Field Off value: U8(0)
static ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode const Off;

/// @brief Field On value: U8(1)
static ::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode const On;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2678};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseMicrophoneLightMode) == 0x1, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
