#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectFeedback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseTriggerEffectFeedback)
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectType;
}
namespace Rewired::ControllerExtensions {
class IDualSenseTriggerEffect;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectFeedback;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback, "Rewired.ControllerExtensions", "DualSenseTriggerEffectFeedback");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffectFeedback
struct CORDL_TYPE DualSenseTriggerEffectFeedback {
public:
// Declarations
 __declspec(property(get=Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)) ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired_ControllerExtensions_IDualSenseTriggerEffect_triggerEffectType;

 __declspec(property(get=get_position, put=set_position)) uint8_t  position;

 __declspec(property(get=get_strength, put=set_strength)) uint8_t  strength;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr operator  ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*() ;

/// @brief Method Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType, addr 0x1802edd00, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType() ;

/// @brief Method get_position, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_position() ;

/// @brief Method get_strength, addr 0x180438d00, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_strength() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* i___Rewired__ControllerExtensions__IDualSenseTriggerEffect() ;

/// @brief Method set_position, addr 0x1818cd540, size 0x30, virtual false, abstract: false, final false
inline void set_position(uint8_t  value) ;

/// @brief Method set_strength, addr 0x1818cd570, size 0x70, virtual false, abstract: false, final false
inline void set_strength(uint8_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffectFeedback() ;

// Ctor Parameters [CppParam { name: "_position", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_strength", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DualSenseTriggerEffectFeedback(uint8_t  _position, uint8_t  _strength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2691};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field _position, offset: 0x0, size: 0x1, def value: None
 uint8_t  _position;

/// @brief Field _strength, offset: 0x1, size: 0x1, def value: None
 uint8_t  _strength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback, _position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback, _strength) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffectFeedback) == 0x2, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
