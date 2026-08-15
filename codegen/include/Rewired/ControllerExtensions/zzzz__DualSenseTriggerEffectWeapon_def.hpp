#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectWeapon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseTriggerEffectWeapon)
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectType;
}
namespace Rewired::ControllerExtensions {
class IDualSenseTriggerEffect;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectWeapon;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon, "Rewired.ControllerExtensions", "DualSenseTriggerEffectWeapon");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffectWeapon
struct CORDL_TYPE DualSenseTriggerEffectWeapon {
public:
// Declarations
 __declspec(property(get=Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType)) ::Rewired::ControllerExtensions::DualSenseTriggerEffectType  Rewired_ControllerExtensions_IDualSenseTriggerEffect_triggerEffectType;

 __declspec(property(get=get_endPosition, put=set_endPosition)) uint8_t  endPosition;

 __declspec(property(get=get_startPosition, put=set_startPosition)) uint8_t  startPosition;

 __declspec(property(get=get_strength, put=set_strength)) uint8_t  strength;

/// @brief Convert operator to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr operator  ::Rewired::ControllerExtensions::IDualSenseTriggerEffect*() ;

/// @brief Method Rewired.ControllerExtensions.IDualSenseTriggerEffect.get_triggerEffectType, addr 0x1802edfe0, size 0x10, virtual true, abstract: false, final true
inline ::Rewired::ControllerExtensions::DualSenseTriggerEffectType Rewired_ControllerExtensions_IDualSenseTriggerEffect_get_triggerEffectType() ;

/// @brief Method get_endPosition, addr 0x180438d00, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_endPosition() ;

/// @brief Method get_startPosition, addr 0x180311f90, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_startPosition() ;

/// @brief Method get_strength, addr 0x18175fe60, size 0x20, virtual false, abstract: false, final false
inline uint8_t get_strength() ;

/// @brief Convert to "::Rewired::ControllerExtensions::IDualSenseTriggerEffect"
constexpr ::Rewired::ControllerExtensions::IDualSenseTriggerEffect* i___Rewired__ControllerExtensions__IDualSenseTriggerEffect() ;

/// @brief Method set_endPosition, addr 0x1818cdd40, size 0x40, virtual false, abstract: false, final false
inline void set_endPosition(uint8_t  value) ;

/// @brief Method set_startPosition, addr 0x1818cdd80, size 0x30, virtual false, abstract: false, final false
inline void set_startPosition(uint8_t  value) ;

/// @brief Method set_strength, addr 0x1818cddb0, size 0x40, virtual false, abstract: false, final false
inline void set_strength(uint8_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffectWeapon() ;

// Ctor Parameters [CppParam { name: "_startPosition", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_endPosition", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_strength", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DualSenseTriggerEffectWeapon(uint8_t  _startPosition, uint8_t  _endPosition, uint8_t  _strength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2692};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field _startPosition, offset: 0x0, size: 0x1, def value: None
 uint8_t  _startPosition;

/// @brief Field _endPosition, offset: 0x1, size: 0x1, def value: None
 uint8_t  _endPosition;

/// @brief Field _strength, offset: 0x2, size: 0x1, def value: None
 uint8_t  _strength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon, _startPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon, _endPosition) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon, _strength) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffectWeapon) == 0x3, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
