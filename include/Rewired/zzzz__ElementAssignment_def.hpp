#pragma once
// IWYU pragma private; include "Rewired/ElementAssignment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ElementAssignmentType_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementAssignment)
namespace Rewired {
struct AxisRange;
}
namespace Rewired {
struct ControllerElementType;
}
namespace Rewired {
struct ControllerType;
}
namespace Rewired {
struct ElementAssignmentConflictCheck;
}
namespace Rewired {
struct ElementAssignmentType;
}
namespace Rewired {
struct ModifierKeyFlags;
}
namespace Rewired {
struct Pole;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace Rewired {
struct ElementAssignment;
}
// Write type traits
MARK_VAL_T(::Rewired::ElementAssignment);
DEFINE_IL2CPP_CLASS(::Rewired::ElementAssignment, "Rewired", "ElementAssignment");
// Dependencies Rewired.AxisRange, Rewired.ElementAssignmentType, Rewired.ModifierKeyFlags, Rewired.Pole, UnityEngine.KeyCode
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ElementAssignment
struct CORDL_TYPE ElementAssignment {
public:
// Declarations
/// @brief Method ButtonAssignment, addr 0x181842720, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment ButtonAssignment(int32_t  elementIdentifierId, int32_t  actionId, ::Rewired::Pole  axisContribution) ;

/// @brief Method ButtonAssignment, addr 0x181842760, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment ButtonAssignment(int32_t  elementIdentifierId, int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementMapId) ;

/// @brief Method CompleteAssignment, addr 0x181842880, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment CompleteAssignment(::Rewired::ControllerType  controllerType, ::Rewired::ControllerElementType  elementType, int32_t  elementIdentifierId, ::Rewired::AxisRange  axisRange, ::UnityEngine::KeyCode  keyboardKey, ::Rewired::ModifierKeyFlags  modifierKeyFlags, int32_t  actionId, ::Rewired::Pole  axisContribution, bool  invert) ;

/// @brief Method CompleteAssignment, addr 0x1818427a0, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment CompleteAssignment(::Rewired::ControllerType  controllerType, ::Rewired::ControllerElementType  elementType, int32_t  elementIdentifierId, ::Rewired::AxisRange  axisRange, ::UnityEngine::KeyCode  keyboardKey, ::Rewired::ModifierKeyFlags  modifierKeyFlags, int32_t  actionId, ::Rewired::Pole  axisContribution, bool  invert, int32_t  elementMapId) ;

/// @brief Method CompleteAssignment, addr 0x181842910, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment CompleteAssignment(::Rewired::ElementAssignmentType  elementAssignmentType, int32_t  elementIdentifierId, ::Rewired::AxisRange  axisRange, ::UnityEngine::KeyCode  keyboardKey, ::Rewired::ModifierKeyFlags  modifierKeyFlags, int32_t  actionId, ::Rewired::Pole  axisContribution, bool  invert) ;

/// @brief Method CompleteAssignment, addr 0x181842830, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment CompleteAssignment(::Rewired::ElementAssignmentType  elementAssignmentType, int32_t  elementIdentifierId, ::Rewired::AxisRange  axisRange, ::UnityEngine::KeyCode  keyboardKey, ::Rewired::ModifierKeyFlags  modifierKeyFlags, int32_t  actionId, ::Rewired::Pole  axisContribution, bool  invert, int32_t  elementMapId) ;

/// @brief Method FullAxisAssignment, addr 0x181842960, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment FullAxisAssignment(int32_t  elementIdentifierId, int32_t  actionId, bool  invert) ;

/// @brief Method FullAxisAssignment, addr 0x181842990, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment FullAxisAssignment(int32_t  elementIdentifierId, int32_t  actionId, bool  invert, int32_t  elementMapId) ;

/// @brief Method KeyboardKeyAssignment, addr 0x181842a50, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment KeyboardKeyAssignment(::UnityEngine::KeyCode  keyboardKey, ::Rewired::ModifierKeyFlags  modifierKeyFlags, int32_t  actionId, ::Rewired::Pole  axisContribution) ;

/// @brief Method KeyboardKeyAssignment, addr 0x1818429c0, size 0x90, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment KeyboardKeyAssignment(::UnityEngine::KeyCode  keyboardKey, ::Rewired::ModifierKeyFlags  modifierKeyFlags, int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementMapId) ;

/// @brief Method SplitAxisAssignment, addr 0x181842b20, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment SplitAxisAssignment(int32_t  elementIdentifierId, ::Rewired::AxisRange  axisRange, int32_t  actionId, ::Rewired::Pole  axisContribution) ;

/// @brief Method SplitAxisAssignment, addr 0x181842ae0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::ElementAssignment SplitAxisAssignment(int32_t  elementIdentifierId, ::Rewired::AxisRange  axisRange, int32_t  actionId, ::Rewired::Pole  axisContribution, int32_t  elementMapId) ;

/// @brief Method ToElementAssignmentConflictCheck, addr 0x181842b60, size 0xa0, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignmentConflictCheck ToElementAssignmentConflictCheck() ;

/// @brief Method .ctor, addr 0x181842ce0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_3, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7, bool  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method .ctor, addr 0x181842c50, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_3, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7, bool  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9) ;

/// @brief Method .ctor, addr 0x181842f80, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ElementAssignmentType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_2, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_6, bool  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method .ctor, addr 0x181842c00, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ElementAssignmentType  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_2, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_6, bool  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method .ctor, addr 0x181842e70, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method .ctor, addr 0x181842fd0, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method .ctor, addr 0x181842d70, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method .ctor, addr 0x181842df0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4) ;

/// @brief Method .ctor, addr 0x181842f00, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x181842e30, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method .ctor, addr 0x181842f40, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method .ctor, addr 0x181842db0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementAssignment() ;

// Ctor Parameters [CppParam { name: "type", ty: "::Rewired::ElementAssignmentType", modifiers: "", def_value: None }, CppParam { name: "elementMapId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementIdentifierId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "axisRange", ty: "::Rewired::AxisRange", modifiers: "", def_value: None }, CppParam { name: "keyboardKey", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: None }, CppParam { name: "modifierKeyFlags", ty: "::Rewired::ModifierKeyFlags", modifiers: "", def_value: None }, CppParam { name: "actionId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "axisContribution", ty: "::Rewired::Pole", modifiers: "", def_value: None }, CppParam { name: "invert", ty: "bool", modifiers: "", def_value: None }]
constexpr ElementAssignment(::Rewired::ElementAssignmentType  type, int32_t  elementMapId, int32_t  elementIdentifierId, ::Rewired::AxisRange  axisRange, ::UnityEngine::KeyCode  keyboardKey, ::Rewired::ModifierKeyFlags  modifierKeyFlags, int32_t  actionId, ::Rewired::Pole  axisContribution, bool  invert) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::Rewired::ElementAssignmentType  type;

/// @brief Field elementMapId, offset: 0x4, size: 0x4, def value: None
 int32_t  elementMapId;

/// @brief Field elementIdentifierId, offset: 0x8, size: 0x4, def value: None
 int32_t  elementIdentifierId;

/// @brief Field axisRange, offset: 0xc, size: 0x4, def value: None
 ::Rewired::AxisRange  axisRange;

/// @brief Field keyboardKey, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::KeyCode  keyboardKey;

/// @brief Field modifierKeyFlags, offset: 0x14, size: 0x4, def value: None
 ::Rewired::ModifierKeyFlags  modifierKeyFlags;

/// @brief Field actionId, offset: 0x18, size: 0x4, def value: None
 int32_t  actionId;

/// @brief Field axisContribution, offset: 0x1c, size: 0x4, def value: None
 ::Rewired::Pole  axisContribution;

/// @brief Field invert, offset: 0x20, size: 0x1, def value: None
 bool  invert;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ElementAssignment, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignment, elementMapId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignment, elementIdentifierId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignment, axisRange) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignment, keyboardKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignment, modifierKeyFlags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignment, actionId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignment, axisContribution) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignment, invert) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ElementAssignment) == 0x24, "Size mismatch!");

} // namespace end def Rewired
