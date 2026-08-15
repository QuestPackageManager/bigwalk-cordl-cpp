#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNodeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Accessibility/zzzz__AccessibilityRole_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityNodeData)
namespace UnityEngine::Accessibility {
struct AccessibilityRole;
}
namespace UnityEngine::Accessibility {
struct AccessibilityState;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
struct AccessibilityNodeData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Accessibility::AccessibilityNodeData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityNodeData, "UnityEngine.Accessibility", "AccessibilityNodeData");
// Dependencies UnityEngine.Accessibility.AccessibilityRole, UnityEngine.Accessibility.AccessibilityState, UnityEngine.Rect
namespace UnityEngine::Accessibility {
// Is value type: true
// CS Name: UnityEngine.Accessibility.AccessibilityNodeData
struct CORDL_TYPE AccessibilityNodeData {
public:
// Declarations
 __declspec(property(put=set_allowsDirectInteraction)) bool  allowsDirectInteraction;

 __declspec(property(put=set_childIds)) ::ArrayW<int32_t>  childIds;

 __declspec(property(put=set_frame)) ::UnityEngine::Rect  frame;

 __declspec(property(put=set_hint)) ::StringW  hint;

 __declspec(property(put=set_implementsDismissed)) bool  implementsDismissed;

 __declspec(property(put=set_implementsInvoked)) bool  implementsInvoked;

 __declspec(property(put=set_implementsScrolled)) bool  implementsScrolled;

 __declspec(property(put=set_isActive)) bool  isActive;

 __declspec(property(put=set_label)) ::StringW  label;

 __declspec(property(get=get_nodeId, put=set_nodeId)) int32_t  nodeId;

 __declspec(property(put=set_parentId)) int32_t  parentId;

 __declspec(property(put=set_role)) ::UnityEngine::Accessibility::AccessibilityRole  role;

 __declspec(property(put=set_state)) ::UnityEngine::Accessibility::AccessibilityState  state;

 __declspec(property(put=set_value)) ::StringW  value;

/// @brief Method .ctor, addr 0x1822143e0, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_nodeId, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_nodeId() ;

/// @brief Method set_allowsDirectInteraction, addr 0x1822124b0, size 0x10, virtual false, abstract: false, final false
inline void set_allowsDirectInteraction(bool  value) ;

/// @brief Method set_childIds, addr 0x180378fd0, size 0x10, virtual false, abstract: false, final false
inline void set_childIds(::ArrayW<int32_t>  value) ;

/// @brief Method set_frame, addr 0x1815b93b0, size 0x10, virtual false, abstract: false, final false
inline void set_frame(::UnityEngine::Rect  value) ;

/// @brief Method set_hint, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_hint(::StringW  value) ;

/// @brief Method set_implementsDismissed, addr 0x1822124c0, size 0x10, virtual false, abstract: false, final false
inline void set_implementsDismissed(bool  value) ;

/// @brief Method set_implementsInvoked, addr 0x1803cbfc0, size 0x10, virtual false, abstract: false, final false
inline void set_implementsInvoked(bool  value) ;

/// @brief Method set_implementsScrolled, addr 0x18049d340, size 0x10, virtual false, abstract: false, final false
inline void set_implementsScrolled(bool  value) ;

/// @brief Method set_isActive, addr 0x181636f10, size 0x40, virtual false, abstract: false, final false
inline void set_isActive(bool  value) ;

/// @brief Method set_label, addr 0x180378fe0, size 0x10, virtual false, abstract: false, final false
inline void set_label(::StringW  value) ;

/// @brief Method set_nodeId, addr 0x1802e2f70, size 0x10, virtual false, abstract: false, final false
inline void set_nodeId(int32_t  value) ;

/// @brief Method set_parentId, addr 0x180393010, size 0x10, virtual false, abstract: false, final false
inline void set_parentId(int32_t  value) ;

/// @brief Method set_role, addr 0x180323260, size 0x10, virtual false, abstract: false, final false
inline void set_role(::UnityEngine::Accessibility::AccessibilityRole  value) ;

/// @brief Method set_state, addr 0x18049a540, size 0x10, virtual false, abstract: false, final false
inline void set_state(::UnityEngine::Accessibility::AccessibilityState  value) ;

/// @brief Method set_value, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_value(::StringW  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNodeData() ;

// Ctor Parameters [CppParam { name: "_childIds_k__BackingField", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "_label_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_value_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_hint_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_frame_k__BackingField", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "_nodeId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_parentId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_role_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityRole", modifiers: "", def_value: None }, CppParam { name: "_state_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityState", modifiers: "", def_value: None }, CppParam { name: "_isActive_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_allowsDirectInteraction_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_implementsInvoked_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_implementsScrolled_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_implementsDismissed_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
constexpr AccessibilityNodeData(::ArrayW<int32_t>  _childIds_k__BackingField, ::StringW  _label_k__BackingField, ::StringW  _value_k__BackingField, ::StringW  _hint_k__BackingField, ::UnityEngine::Rect  _frame_k__BackingField, int32_t  _nodeId_k__BackingField, int32_t  _parentId_k__BackingField, ::UnityEngine::Accessibility::AccessibilityRole  _role_k__BackingField, ::UnityEngine::Accessibility::AccessibilityState  _state_k__BackingField, bool  _isActive_k__BackingField, bool  _allowsDirectInteraction_k__BackingField, bool  _implementsInvoked_k__BackingField, bool  _implementsScrolled_k__BackingField, bool  _implementsDismissed_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21225};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <childIds>k__BackingField, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<int32_t>  _childIds_k__BackingField;

/// @brief Field <label>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _label_k__BackingField;

/// @brief Field <value>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  _value_k__BackingField;

/// @brief Field <hint>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  _hint_k__BackingField;

/// @brief Field <frame>k__BackingField, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Rect  _frame_k__BackingField;

/// @brief Field <nodeId>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  _nodeId_k__BackingField;

/// @brief Field <parentId>k__BackingField, offset: 0x34, size: 0x4, def value: None
 int32_t  _parentId_k__BackingField;

/// @brief Field <role>k__BackingField, offset: 0x38, size: 0x1, def value: None
 ::UnityEngine::Accessibility::AccessibilityRole  _role_k__BackingField;

/// @brief Field <state>k__BackingField, offset: 0x39, size: 0x1, def value: None
 ::UnityEngine::Accessibility::AccessibilityState  _state_k__BackingField;

/// @brief Field <isActive>k__BackingField, offset: 0x3a, size: 0x1, def value: None
 bool  _isActive_k__BackingField;

/// @brief Field <allowsDirectInteraction>k__BackingField, offset: 0x3b, size: 0x1, def value: None
 bool  _allowsDirectInteraction_k__BackingField;

/// @brief Field <implementsInvoked>k__BackingField, offset: 0x3c, size: 0x1, def value: None
 bool  _implementsInvoked_k__BackingField;

/// @brief Field <implementsScrolled>k__BackingField, offset: 0x3d, size: 0x1, def value: None
 bool  _implementsScrolled_k__BackingField;

/// @brief Field <implementsDismissed>k__BackingField, offset: 0x3e, size: 0x1, def value: None
 bool  _implementsDismissed_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _childIds_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _label_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _value_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _hint_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _frame_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _nodeId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _parentId_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _role_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _state_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _isActive_k__BackingField) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _allowsDirectInteraction_k__BackingField) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _implementsInvoked_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _implementsScrolled_k__BackingField) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNodeData, _implementsDismissed_k__BackingField) == 0x3e, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityNodeData) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
