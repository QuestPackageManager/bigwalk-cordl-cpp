#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectState_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DualSenseTriggerEffectStates)
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectStates;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerEffectStates);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffectStates, "Rewired.ControllerExtensions", "DualSenseTriggerEffectStates");
// Dependencies Rewired.ControllerExtensions.DualSenseTriggerEffectState
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffectStates
struct CORDL_TYPE DualSenseTriggerEffectStates {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffectStates() ;

// Ctor Parameters [CppParam { name: "leftTrigger", ty: "::Rewired::ControllerExtensions::DualSenseTriggerEffectState", modifiers: "", def_value: None }, CppParam { name: "rightTrigger", ty: "::Rewired::ControllerExtensions::DualSenseTriggerEffectState", modifiers: "", def_value: None }]
constexpr DualSenseTriggerEffectStates(::Rewired::ControllerExtensions::DualSenseTriggerEffectState  leftTrigger, ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  rightTrigger) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field leftTrigger, offset: 0x0, size: 0x4, def value: None
 ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  leftTrigger;

/// @brief Field rightTrigger, offset: 0x4, size: 0x4, def value: None
 ::Rewired::ControllerExtensions::DualSenseTriggerEffectState  rightTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectStates, leftTrigger) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectStates, rightTrigger) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffectStates) == 0x8, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
