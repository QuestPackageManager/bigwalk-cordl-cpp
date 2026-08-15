#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectVibration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseTriggerEffectVibration)
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectType;
}
namespace Rewired::ControllerExtensions {
class IDualSenseTriggerEffect;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectVibration;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration, "Rewired.ControllerExtensions", "DualSenseTriggerEffectVibration");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffectVibration
struct CORDL_TYPE DualSenseTriggerEffectVibration {
public:
// Declarations
 __declspec(property(get=Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)) ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired_ControllerExtensions_IDualSenseTriggerEffect_triggerEffectType;

 __declspec(property(get=get_amplitude, put=set_amplitude)) uint8_t  amplitude;

 __declspec(property(get=get_frequency, put=set_frequency)) uint8_t  frequency;

 __declspec(property(get=get_position, put=set_position)) uint8_t  position;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr operator  ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*() ;

/// @brief Method Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType, addr 0x1802ee400, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType() ;

/// @brief Method get_amplitude, addr 0x180438d00, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_amplitude() ;

/// @brief Method get_frequency, addr 0x18175fe60, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_frequency() ;

/// @brief Method get_position, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_position() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* i___Rewired__ControllerExtensions__IDualSenseTriggerEffect() ;

/// @brief Method set_amplitude, addr 0x1818cd570, size 0x70, virtual false, abstract: false, final false
inline void set_amplitude(uint8_t  value) ;

/// @brief Method set_frequency, addr 0x1818cdd00, size 0x40, virtual false, abstract: false, final false
inline void set_frequency(uint8_t  value) ;

/// @brief Method set_position, addr 0x1818cd540, size 0x30, virtual false, abstract: false, final false
inline void set_position(uint8_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffectVibration() ;

// Ctor Parameters [CppParam { name: "_position", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_amplitude", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_frequency", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DualSenseTriggerEffectVibration(uint8_t  _position, uint8_t  _amplitude, uint8_t  _frequency) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2693};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field _position, offset: 0x0, size: 0x1, def value: None
 uint8_t  _position;

/// @brief Field _amplitude, offset: 0x1, size: 0x1, def value: None
 uint8_t  _amplitude;

/// @brief Field _frequency, offset: 0x2, size: 0x1, def value: None
 uint8_t  _frequency;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration, _position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration, _amplitude) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration, _frequency) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffectVibration) == 0x3, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
