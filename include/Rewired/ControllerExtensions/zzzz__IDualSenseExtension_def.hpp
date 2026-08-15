#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/IDualSenseExtension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDualSenseExtension)
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectStates;
}
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerType;
}
namespace Rewired::ControllerExtensions {
class IDualSenseTriggerEffect;
}
namespace Rewired::ControllerExtensions {
class IDualShock4Extension;
}
namespace Rewired::Interfaces {
class IControllerVibrator;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
class IDualSenseExtension;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerExtensions::IDualSenseExtension*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::IDualSenseExtension*, "Rewired.ControllerExtensions", "IDualSenseExtension");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: false
// CS Name: Rewired.ControllerExtensions.IDualSenseExtension
class CORDL_TYPE IDualSenseExtension {
public:
// Declarations
/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr operator  ::Rewired::ControllerExtensions::IDualShock4Extension*() noexcept;

/// @brief Convert operator to "::Rewired::Interfaces::IControllerVibrator"
constexpr operator  ::Rewired::Interfaces::IControllerVibrator*() noexcept;

/// @brief Method GetTriggerEffectStates, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectStates GetTriggerEffectStates() ;

/// @brief Method SetTriggerEffect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool SetTriggerEffect(::Rewired::ControllerExtensions::DualSenseTriggerType  trigger, ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*  effect) ;

/// @brief Convert to "::Rewired::ControllerExtensions::IDualShock4Extension"
constexpr ::Rewired::ControllerExtensions::IDualShock4Extension* i___Rewired__ControllerExtensions__IDualShock4Extension() noexcept;

/// @brief Convert to "::Rewired::Interfaces::IControllerVibrator"
constexpr ::Rewired::Interfaces::IControllerVibrator* i___Rewired__Interfaces__IControllerVibrator() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IDualSenseExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDualSenseExtension(IDualSenseExtension const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2676};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Rewired::ControllerExtensions
