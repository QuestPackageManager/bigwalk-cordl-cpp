#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/IDualSenseTriggerEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDualSenseTriggerEffect)
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectType;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
class IDualSenseTriggerEffect;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::IDualSenseTriggerEffect*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::IDualSenseTriggerEffect*, "Rewired.ControllerExtensions", "IDualSenseTriggerEffect");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.IDualSenseTriggerEffect
class CORDL_TYPE IDualSenseTriggerEffect {
public:
// Declarations
 __declspec(property(get=get_triggerEffectType)) ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  triggerEffectType;

/// @brief Method get_triggerEffectType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType get_triggerEffectType() ;

// Ctor Parameters [CppParam { name: "", ty: "IDualSenseTriggerEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDualSenseTriggerEffect(IDualSenseTriggerEffect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2689};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::ControllerExtensions
