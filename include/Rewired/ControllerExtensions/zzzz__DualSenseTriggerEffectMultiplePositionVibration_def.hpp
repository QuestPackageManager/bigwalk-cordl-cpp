#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectMultiplePositionVibration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/ControllerExtensions/zzzz__DualSenseTriggerEffectPositionValueSet_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseTriggerEffectMultiplePositionVibration)
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
struct DualSenseTriggerEffectMultiplePositionVibration;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration, "Rewired.ControllerExtensions", "DualSenseTriggerEffectMultiplePositionVibration");
// Dependencies Rewired.ControllerExtensions.DualSenseTriggerEffectPositionValueSet
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffectMultiplePositionVibration
struct CORDL_TYPE DualSenseTriggerEffectMultiplePositionVibration {
public:
// Declarations
 __declspec(property(get=Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)) ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired_ControllerExtensions_IDualSenseTriggerEffect_triggerEffectType;

 __declspec(property(get=get_amplitude, put=set_amplitude)) ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  amplitude;

 __declspec(property(get=get_frequency, put=set_frequency)) uint8_t  frequency;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr operator  ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*() ;

/// @brief Method Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType, addr 0x180908af0, size 0x30, virtual true, abstract: false, final true
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType() ;

/// @brief Method get_amplitude, addr 0x1818c88d0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet get_amplitude() ;

/// @brief Method get_frequency, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_frequency() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* i___Rewired__ControllerExtensions__IDualSenseTriggerEffect() ;

/// @brief Method set_amplitude, addr 0x1818cd680, size 0x70, virtual false, abstract: false, final false
inline void set_amplitude(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  value) ;

/// @brief Method set_frequency, addr 0x1818cd6f0, size 0x30, virtual false, abstract: false, final false
inline void set_frequency(uint8_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffectMultiplePositionVibration() ;

// Ctor Parameters [CppParam { name: "_frequency", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_amplitude", ty: "::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet", modifiers: "", def_value: None }]
constexpr DualSenseTriggerEffectMultiplePositionVibration(uint8_t  _frequency, ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  _amplitude) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2696};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb};

/// @brief Field _frequency, offset: 0x0, size: 0x1, def value: None
 uint8_t  _frequency;

/// @brief Field _amplitude, offset: 0x1, size: 0xa, def value: None
 ::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet  _amplitude;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration, _frequency) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration, _amplitude) == 0x1, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffectMultiplePositionVibration) == 0xb, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
