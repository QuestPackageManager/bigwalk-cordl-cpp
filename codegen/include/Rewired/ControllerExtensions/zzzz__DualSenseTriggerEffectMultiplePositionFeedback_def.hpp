#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectMultiplePositionFeedback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectPositionValueSet_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DualSenseTriggerEffectMultiplePositionFeedback)
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectPositionValueSet;
}
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectType;
}
namespace Rewired::ControllerExtensions {
class IDualSenseTriggerEffect;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectMultiplePositionFeedback;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback, "Rewired.ControllerExtensions", "DualSenseTriggerEffectMultiplePositionFeedback");
// Dependencies Rewired.ControllerExtensions.DualSenseTriggerEffectPositionValueSet
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffectMultiplePositionFeedback
struct CORDL_TYPE DualSenseTriggerEffectMultiplePositionFeedback {
public:
// Declarations
 __declspec(property(get=Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)) ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired_ControllerExtensions_IDualSenseTriggerEffect_triggerEffectType;

 __declspec(property(get=get_strength, put=set_strength)) ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  strength;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr operator  ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*() ;

/// @brief Method Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType, addr 0x180309580, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType() ;

/// @brief Method get_strength, addr 0x1818c88b0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet get_strength() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* i___Rewired__ControllerExtensions__IDualSenseTriggerEffect() ;

/// @brief Method set_strength, addr 0x1818cd5e0, size 0xa0, virtual false, abstract: false, final false
inline void set_strength(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffectMultiplePositionFeedback() ;

// Ctor Parameters [CppParam { name: "_strength", ty: "::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet", modifiers: "", def_value: None }]
constexpr DualSenseTriggerEffectMultiplePositionFeedback(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  _strength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2694};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa};

/// @brief Field _strength, offset: 0x0, size: 0xa, def value: None
 ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  _strength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback, _strength) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionFeedback) == 0xa, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
