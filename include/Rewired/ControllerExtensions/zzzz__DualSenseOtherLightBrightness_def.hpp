#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseOtherLightBrightness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseOtherLightBrightness)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseOtherLightBrightness;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseOtherLightBrightness);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseOtherLightBrightness, "Rewired.ControllerExtensions", "DualSenseOtherLightBrightness");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseOtherLightBrightness
struct CORDL_TYPE DualSenseOtherLightBrightness {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DualSenseOtherLightBrightness_Unwrapped
enum struct __DualSenseOtherLightBrightness_Unwrapped : uint8_t {
__E_Low = static_cast<uint8_t>(0x0u),
__E_Medium = static_cast<uint8_t>(0x1u),
__E_High = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualSenseOtherLightBrightness_Unwrapped () const noexcept {
return static_cast<__DualSenseOtherLightBrightness_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseOtherLightBrightness() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DualSenseOtherLightBrightness(uint8_t  value__) noexcept;

/// @brief Field High value: U8(2)
static ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness const High;

/// @brief Field Low value: U8(0)
static ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness const Low;

/// @brief Field Medium value: U8(1)
static ::Rewired::ControllerExtensions::DualSenseOtherLightBrightness const Medium;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2679};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x1, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseOtherLightBrightness, value__) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseOtherLightBrightness) == 0x1, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
