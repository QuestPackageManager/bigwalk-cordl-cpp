#pragma once
// IWYU pragma private; include "Rewired/ElementAssignmentConflictCheck.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__AxisRange_def.hpp"
#include "Rewired/zzzz__ControllerType_def.hpp"
#include "Rewired/zzzz__ElementAssignmentType_def.hpp"
#include "Rewired/zzzz__ModifierKeyFlags_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementAssignmentConflictCheck)
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
struct ElementAssignmentType;
}
namespace Rewired {
struct ElementAssignment;
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
struct ElementAssignmentConflictCheck;
}
// Write type traits
MARK_VAL_T(::Rewired::ElementAssignmentConflictCheck);
DEFINE_IL2CPP_CLASS(::Rewired::ElementAssignmentConflictCheck, "Rewired", "ElementAssignmentConflictCheck");
// Dependencies Rewired.AxisRange, Rewired.ControllerType, Rewired.ElementAssignmentType, Rewired.ModifierKeyFlags, Rewired.Pole, UnityEngine.KeyCode
namespace Rewired {
// Is value type: true
// CS Name: Rewired.ElementAssignmentConflictCheck
struct CORDL_TYPE ElementAssignmentConflictCheck {
public:
// Declarations
 __declspec(property(get=get_actionId, put=set_actionId)) int32_t  actionId;

 __declspec(property(get=get_axisContribution, put=set_axisContribution)) ::Rewired::Pole  axisContribution;

 __declspec(property(get=get_axisRange, put=set_axisRange)) ::Rewired::AxisRange  axisRange;

 __declspec(property(get=get_controllerId, put=set_controllerId)) int32_t  controllerId;

 __declspec(property(get=get_controllerMapCategoryId, put=set_controllerMapCategoryId)) int32_t  controllerMapCategoryId;

 __declspec(property(get=get_controllerMapId, put=set_controllerMapId)) int32_t  controllerMapId;

 __declspec(property(get=get_controllerType, put=set_controllerType)) ::Rewired::ControllerType  controllerType;

 __declspec(property(get=get_elementAssignmentType, put=set_elementAssignmentType)) ::Rewired::ElementAssignmentType  elementAssignmentType;

 __declspec(property(get=get_elementIdentifierId, put=set_elementIdentifierId)) int32_t  elementIdentifierId;

 __declspec(property(get=get_elementMapId, put=set_elementMapId)) int32_t  elementMapId;

 __declspec(property(get=get_invert, put=set_invert)) bool  invert;

 __declspec(property(get=get_keyboardKey, put=set_keyboardKey)) ::UnityEngine::KeyCode  keyboardKey;

 __declspec(property(get=get_modifierKeyFlags, put=set_modifierKeyFlags)) ::Rewired::ModifierKeyFlags  modifierKeyFlags;

 __declspec(property(get=get_playerId, put=set_playerId)) int32_t  playerId;

/// @brief Method ToButtonAssignment, addr 0x181841190, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignment ToButtonAssignment() ;

/// @brief Method ToElementAssignment, addr 0x181841240, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignment ToElementAssignment() ;

/// @brief Method ToFullAxisAssignment, addr 0x1818412f0, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignment ToFullAxisAssignment() ;

/// @brief Method ToKeyboardKeyAssignment, addr 0x181841370, size 0xb0, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignment ToKeyboardKeyAssignment() ;

/// @brief Method ToSplitAxisAssignment, addr 0x181841420, size 0x80, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignment ToSplitAxisAssignment() ;

/// @brief Method .ctor, addr 0x1818415a0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Rewired::ElementAssignmentConflictCheck  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181841a90, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_6, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_10, bool  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method .ctor, addr 0x181841920, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ControllerElementType  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_6, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_10, bool  _cordl_fixed_empty_name_whitespace_param_11, int32_t  _cordl_fixed_empty_name_whitespace_param_12) ;

/// @brief Method .ctor, addr 0x181841b40, size 0x160, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ElementAssignmentType  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_6, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_10, bool  _cordl_fixed_empty_name_whitespace_param_11) ;

/// @brief Method .ctor, addr 0x181841640, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::Rewired::ElementAssignmentType  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_6, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_8, int32_t  _cordl_fixed_empty_name_whitespace_param_9, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_10, bool  _cordl_fixed_empty_name_whitespace_param_11, int32_t  _cordl_fixed_empty_name_whitespace_param_12) ;

/// @brief Method .ctor, addr 0x1818414a0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method .ctor, addr 0x181841a10, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, ::UnityEngine::KeyCode  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::ModifierKeyFlags  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method .ctor, addr 0x181841840, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method .ctor, addr 0x181841520, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, ::Rewired::AxisRange  _cordl_fixed_empty_name_whitespace_param_5, int32_t  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_7, int32_t  _cordl_fixed_empty_name_whitespace_param_8) ;

/// @brief Method .ctor, addr 0x1818418b0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method .ctor, addr 0x181841750, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method .ctor, addr 0x1818417d0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method .ctor, addr 0x1818416d0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ControllerType  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, bool  _cordl_fixed_empty_name_whitespace_param_6, int32_t  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method get_actionId, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_actionId() ;

/// @brief Method get_axisContribution, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Pole get_axisContribution() ;

/// @brief Method get_axisRange, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::AxisRange get_axisRange() ;

/// @brief Method get_controllerId, addr 0x1803bdb30, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerId() ;

/// @brief Method get_controllerMapCategoryId, addr 0x1803924b0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerMapCategoryId() ;

/// @brief Method get_controllerMapId, addr 0x180303b50, size 0x10, virtual false, abstract: false, final false
inline int32_t get_controllerMapId() ;

/// @brief Method get_controllerType, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ControllerType get_controllerType() ;

/// @brief Method get_elementAssignmentType, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ElementAssignmentType get_elementAssignmentType() ;

/// @brief Method get_elementIdentifierId, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementIdentifierId() ;

/// @brief Method get_elementMapId, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_elementMapId() ;

/// @brief Method get_invert, addr 0x1803e0b00, size 0x10, virtual false, abstract: false, final false
inline bool get_invert() ;

/// @brief Method get_keyboardKey, addr 0x180396ef0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::KeyCode get_keyboardKey() ;

/// @brief Method get_modifierKeyFlags, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ModifierKeyFlags get_modifierKeyFlags() ;

/// @brief Method get_playerId, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_playerId() ;

/// @brief Method set_actionId, addr 0x1803914d0, size 0x10, virtual false, abstract: false, final false
inline void set_actionId(int32_t  value) ;

/// @brief Method set_axisContribution, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_axisContribution(::Rewired::Pole  value) ;

/// @brief Method set_axisRange, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_axisRange(::Rewired::AxisRange  value) ;

/// @brief Method set_controllerId, addr 0x1804bdb30, size 0x10, virtual false, abstract: false, final false
inline void set_controllerId(int32_t  value) ;

/// @brief Method set_controllerMapCategoryId, addr 0x1803924c0, size 0x10, virtual false, abstract: false, final false
inline void set_controllerMapCategoryId(int32_t  value) ;

/// @brief Method set_controllerMapId, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_controllerMapId(int32_t  value) ;

/// @brief Method set_controllerType, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_controllerType(::Rewired::ControllerType  value) ;

/// @brief Method set_elementAssignmentType, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_elementAssignmentType(::Rewired::ElementAssignmentType  value) ;

/// @brief Method set_elementIdentifierId, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_elementIdentifierId(int32_t  value) ;

/// @brief Method set_elementMapId, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_elementMapId(int32_t  value) ;

/// @brief Method set_invert, addr 0x180c29b80, size 0x2090, virtual false, abstract: false, final false
inline void set_invert(bool  value) ;

/// @brief Method set_keyboardKey, addr 0x180396f00, size 0x10, virtual false, abstract: false, final false
inline void set_keyboardKey(::UnityEngine::KeyCode  value) ;

/// @brief Method set_modifierKeyFlags, addr 0x1803914c0, size 0x10, virtual false, abstract: false, final false
inline void set_modifierKeyFlags(::Rewired::ModifierKeyFlags  value) ;

/// @brief Method set_playerId, addr 0x1803bda60, size 0x10, virtual false, abstract: false, final false
inline void set_playerId(int32_t  value) ;

/// @brief Method uDNPqUAIidrlsbpaXTyFJTaoaKMP, addr 0x181841ca0, size 0x30, virtual false, abstract: false, final false
inline void uDNPqUAIidrlsbpaXTyFJTaoaKMP() ;

// Ctor Parameters []
// @brief default ctor
constexpr ElementAssignmentConflictCheck() ;

// Ctor Parameters [CppParam { name: "dkMhdJQRpZrjSRlJmemmClBWtLaT", ty: "::Rewired::ElementAssignmentType", modifiers: "", def_value: None }, CppParam { name: "jiJIKUsuTITuSoWODLQDNYJxhcPx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LZpuaWxPCbDrEyvZZvMvCWohPAIS", ty: "::Rewired::ControllerType", modifiers: "", def_value: None }, CppParam { name: "KcWCyEQnsZnZGiLTaRvqGhkKESkS", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reKmvergZkHGokjdEIWOdDbKvNilA", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rgDyIBzJPloAQBEEDCdaYZphiNps", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fVzADSQYCOXNXDEeKgriCzrdmTfT", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "xTrMBSAwjrAqRLcNKzTqjjFgZbby", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "BMhqWeZGQYauAsbCEAHBDQaCirsJ", ty: "::Rewired::AxisRange", modifiers: "", def_value: None }, CppParam { name: "gdwdOHJKXZdEVBvxacoWiuGdveHnB", ty: "::UnityEngine::KeyCode", modifiers: "", def_value: None }, CppParam { name: "tpQRKLttYNEEvtftGGtzafQeCagQ", ty: "::Rewired::ModifierKeyFlags", modifiers: "", def_value: None }, CppParam { name: "FdTDSQgNLlJzPTDpWQbUfiytDpjI", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ZQLpHTIXBPeOjVsSXFxlYjwTSOfs", ty: "::Rewired::Pole", modifiers: "", def_value: None }, CppParam { name: "WqLQiARnhUerXilxqXvQCIHVdYpbb", ty: "bool", modifiers: "", def_value: None }]
constexpr ElementAssignmentConflictCheck(::Rewired::ElementAssignmentType  dkMhdJQRpZrjSRlJmemmClBWtLaT, int32_t  jiJIKUsuTITuSoWODLQDNYJxhcPx, ::Rewired::ControllerType  LZpuaWxPCbDrEyvZZvMvCWohPAIS, int32_t  KcWCyEQnsZnZGiLTaRvqGhkKESkS, int32_t  reKmvergZkHGokjdEIWOdDbKvNilA, int32_t  rgDyIBzJPloAQBEEDCdaYZphiNps, int32_t  fVzADSQYCOXNXDEeKgriCzrdmTfT, int32_t  xTrMBSAwjrAqRLcNKzTqjjFgZbby, ::Rewired::AxisRange  BMhqWeZGQYauAsbCEAHBDQaCirsJ, ::UnityEngine::KeyCode  gdwdOHJKXZdEVBvxacoWiuGdveHnB, ::Rewired::ModifierKeyFlags  tpQRKLttYNEEvtftGGtzafQeCagQ, int32_t  FdTDSQgNLlJzPTDpWQbUfiytDpjI, ::Rewired::Pole  ZQLpHTIXBPeOjVsSXFxlYjwTSOfs, bool  WqLQiARnhUerXilxqXvQCIHVdYpbb) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1754};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field dkMhdJQRpZrjSRlJmemmClBWtLaT, offset: 0x0, size: 0x4, def value: None
 ::Rewired::ElementAssignmentType  dkMhdJQRpZrjSRlJmemmClBWtLaT;

/// @brief Field jiJIKUsuTITuSoWODLQDNYJxhcPx, offset: 0x4, size: 0x4, def value: None
 int32_t  jiJIKUsuTITuSoWODLQDNYJxhcPx;

/// @brief Field LZpuaWxPCbDrEyvZZvMvCWohPAIS, offset: 0x8, size: 0x4, def value: None
 ::Rewired::ControllerType  LZpuaWxPCbDrEyvZZvMvCWohPAIS;

/// @brief Field KcWCyEQnsZnZGiLTaRvqGhkKESkS, offset: 0xc, size: 0x4, def value: None
 int32_t  KcWCyEQnsZnZGiLTaRvqGhkKESkS;

/// @brief Field reKmvergZkHGokjdEIWOdDbKvNilA, offset: 0x10, size: 0x4, def value: None
 int32_t  reKmvergZkHGokjdEIWOdDbKvNilA;

/// @brief Field rgDyIBzJPloAQBEEDCdaYZphiNps, offset: 0x14, size: 0x4, def value: None
 int32_t  rgDyIBzJPloAQBEEDCdaYZphiNps;

/// @brief Field fVzADSQYCOXNXDEeKgriCzrdmTfT, offset: 0x18, size: 0x4, def value: None
 int32_t  fVzADSQYCOXNXDEeKgriCzrdmTfT;

/// @brief Field xTrMBSAwjrAqRLcNKzTqjjFgZbby, offset: 0x1c, size: 0x4, def value: None
 int32_t  xTrMBSAwjrAqRLcNKzTqjjFgZbby;

/// @brief Field BMhqWeZGQYauAsbCEAHBDQaCirsJ, offset: 0x20, size: 0x4, def value: None
 ::Rewired::AxisRange  BMhqWeZGQYauAsbCEAHBDQaCirsJ;

/// @brief Field gdwdOHJKXZdEVBvxacoWiuGdveHnB, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::KeyCode  gdwdOHJKXZdEVBvxacoWiuGdveHnB;

/// @brief Field tpQRKLttYNEEvtftGGtzafQeCagQ, offset: 0x28, size: 0x4, def value: None
 ::Rewired::ModifierKeyFlags  tpQRKLttYNEEvtftGGtzafQeCagQ;

/// @brief Field FdTDSQgNLlJzPTDpWQbUfiytDpjI, offset: 0x2c, size: 0x4, def value: None
 int32_t  FdTDSQgNLlJzPTDpWQbUfiytDpjI;

/// @brief Field ZQLpHTIXBPeOjVsSXFxlYjwTSOfs, offset: 0x30, size: 0x4, def value: None
 ::Rewired::Pole  ZQLpHTIXBPeOjVsSXFxlYjwTSOfs;

/// @brief Field WqLQiARnhUerXilxqXvQCIHVdYpbb, offset: 0x34, size: 0x1, def value: None
 bool  WqLQiARnhUerXilxqXvQCIHVdYpbb;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, dkMhdJQRpZrjSRlJmemmClBWtLaT) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, jiJIKUsuTITuSoWODLQDNYJxhcPx) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, LZpuaWxPCbDrEyvZZvMvCWohPAIS) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, KcWCyEQnsZnZGiLTaRvqGhkKESkS) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, reKmvergZkHGokjdEIWOdDbKvNilA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, rgDyIBzJPloAQBEEDCdaYZphiNps) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, fVzADSQYCOXNXDEeKgriCzrdmTfT) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, xTrMBSAwjrAqRLcNKzTqjjFgZbby) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, BMhqWeZGQYauAsbCEAHBDQaCirsJ) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, gdwdOHJKXZdEVBvxacoWiuGdveHnB) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, tpQRKLttYNEEvtftGGtzafQeCagQ) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, FdTDSQgNLlJzPTDpWQbUfiytDpjI) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, ZQLpHTIXBPeOjVsSXFxlYjwTSOfs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::ElementAssignmentConflictCheck, WqLQiARnhUerXilxqXvQCIHVdYpbb) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Rewired::ElementAssignmentConflictCheck) == 0x38, "Size mismatch!");

} // namespace end def Rewired
