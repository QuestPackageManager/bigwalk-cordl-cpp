#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseTriggerEffectType)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectType;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerEffectType);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffectType, "Rewired.ControllerExtensions", "DualSenseTriggerEffectType");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffectType
struct CORDL_TYPE DualSenseTriggerEffectType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DualSenseTriggerEffectType_Unwrapped
enum struct __DualSenseTriggerEffectType_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Feedback = static_cast<int32_t>(0x1),
__E_Weapon = static_cast<int32_t>(0x2),
__E_Vibration = static_cast<int32_t>(0x3),
__E_MultiplePositionFeedback = static_cast<int32_t>(0x4),
__E_SlopeFeedback = static_cast<int32_t>(0x5),
__E_MultiplePositionVibration = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualSenseTriggerEffectType_Unwrapped () const noexcept {
return static_cast<__DualSenseTriggerEffectType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffectType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DualSenseTriggerEffectType(int32_t  value__) noexcept;

/// @brief Field Feedback value: I32(1)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectType const Feedback;

/// @brief Field MultiplePositionFeedback value: I32(4)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectType const MultiplePositionFeedback;

/// @brief Field MultiplePositionVibration value: I32(6)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectType const MultiplePositionVibration;

/// @brief Field Off value: I32(0)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectType const Off;

/// @brief Field SlopeFeedback value: I32(5)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectType const SlopeFeedback;

/// @brief Field Vibration value: I32(3)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectType const Vibration;

/// @brief Field Weapon value: I32(2)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectType const Weapon;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2684};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffectType) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
