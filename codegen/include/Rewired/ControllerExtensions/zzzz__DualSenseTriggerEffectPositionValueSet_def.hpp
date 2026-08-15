#pragma once
// IWYU pragma private; include "Rewired/ControllerExtensions/DualSenseTriggerEffectPositionValueSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DualSenseTriggerEffectPositionValueSet)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace Rewired::ControllerExtensions {
struct DualSenseTriggerEffectPositionValueSet;
}
// Write type traits
MARK_VAL_T(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, "Rewired.ControllerExtensions", "DualSenseTriggerEffectPositionValueSet");
// Dependencies 
namespace Rewired::ControllerExtensions {
// Is value type: true
// CS Name: Rewired.ControllerExtensions.DualSenseTriggerEffectPositionValueSet
struct CORDL_TYPE DualSenseTriggerEffectPositionValueSet {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) uint8_t  Item[];

/// @brief Method CopyTo, addr 0x1818cd720, size 0xe0, virtual false, abstract: false, final false
inline void CopyTo(::ArrayW<uint8_t>  destination) ;

/// @brief Method ToArray, addr 0x1818cd800, size 0x50, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToArray() ;

/// @brief Method .ctor, addr 0x1818cd850, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IList_1<uint8_t>*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method aXkPokVaCtUDMJyNzbcBHbfZInZE, addr 0x1818cda00, size 0xc0, virtual false, abstract: false, final false
inline void aXkPokVaCtUDMJyNzbcBHbfZInZE(uint8_t  _cordl_fixed_empty_name_whitespace, uint8_t  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method get_Item, addr 0x1818cdac0, size 0xc0, virtual false, abstract: false, final false
inline uint8_t get_Item(int32_t  index) ;

/// @brief Method set_Item, addr 0x1818cdb80, size 0xc0, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, uint8_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DualSenseTriggerEffectPositionValueSet() ;

// Ctor Parameters [CppParam { name: "_position0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_position1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_position2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_position3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_position4", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_position5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_position6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_position7", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_position8", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "_position9", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr DualSenseTriggerEffectPositionValueSet(uint8_t  _position0, uint8_t  _position1, uint8_t  _position2, uint8_t  _position3, uint8_t  _position4, uint8_t  _position5, uint8_t  _position6, uint8_t  _position7, uint8_t  _position8, uint8_t  _position9) noexcept;

/// @brief Field Count offset 0xffffffff size 0x4
static constexpr int32_t  Count{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2688};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa};

/// @brief Field _position0, offset: 0x0, size: 0x1, def value: None
 uint8_t  _position0;

/// @brief Field _position1, offset: 0x1, size: 0x1, def value: None
 uint8_t  _position1;

/// @brief Field _position2, offset: 0x2, size: 0x1, def value: None
 uint8_t  _position2;

/// @brief Field _position3, offset: 0x3, size: 0x1, def value: None
 uint8_t  _position3;

/// @brief Field _position4, offset: 0x4, size: 0x1, def value: None
 uint8_t  _position4;

/// @brief Field _position5, offset: 0x5, size: 0x1, def value: None
 uint8_t  _position5;

/// @brief Field _position6, offset: 0x6, size: 0x1, def value: None
 uint8_t  _position6;

/// @brief Field _position7, offset: 0x7, size: 0x1, def value: None
 uint8_t  _position7;

/// @brief Field _position8, offset: 0x8, size: 0x1, def value: None
 uint8_t  _position8;

/// @brief Field _position9, offset: 0x9, size: 0x1, def value: None
 uint8_t  _position9;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position1) == 0x1, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position2) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position3) == 0x3, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position4) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position5) == 0x5, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position6) == 0x6, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position7) == 0x7, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position8) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet, _position9) == 0x9, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerExtensions::DualSenseTriggerEffectPositionValueSet) == 0xa, "Size mismatch!");

} // namespace end def Rewired::ControllerExtensions
