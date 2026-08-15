#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseTriggerEffectState)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectState;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerEffectState);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffectState, "Rewired.ControllerExtensions", "DualSenseTriggerEffectState");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffectState
struct CORDL_TYPE DualSenseTriggerEffectState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DualSenseTriggerEffectState_Unwrapped
enum struct __DualSenseTriggerEffectState_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0xffffffff),
__E_Off = static_cast<int32_t>(0x0),
__E_FeedbackIdle = static_cast<int32_t>(0x1),
__E_FeedbackApplyingForce = static_cast<int32_t>(0x2),
__E_WeaponIdle = static_cast<int32_t>(0x3),
__E_WeaponFiring = static_cast<int32_t>(0x4),
__E_WeaponFired = static_cast<int32_t>(0x5),
__E_VibrationIdle = static_cast<int32_t>(0x6),
__E_VibrationVibrating = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DualSenseTriggerEffectState_Unwrapped () const noexcept {
return static_cast<__DualSenseTriggerEffectState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffectState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DualSenseTriggerEffectState(int32_t  value__) noexcept;

/// @brief Field FeedbackApplyingForce value: I32(2)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectState const FeedbackApplyingForce;

/// @brief Field FeedbackIdle value: I32(1)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectState const FeedbackIdle;

/// @brief Field Off value: I32(0)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectState const Off;

/// @brief Field Unknown value: I32(-1)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectState const Unknown;

/// @brief Field VibrationIdle value: I32(6)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectState const VibrationIdle;

/// @brief Field VibrationVibrating value: I32(7)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectState const VibrationVibrating;

/// @brief Field WeaponFired value: I32(5)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectState const WeaponFired;

/// @brief Field WeaponFiring value: I32(4)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectState const WeaponFiring;

/// @brief Field WeaponIdle value: I32(3)
static ::Rewired::ControllerExtensions::DualSenseTriggerEffectState const WeaponIdle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectState, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffectState) == 0x4, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
