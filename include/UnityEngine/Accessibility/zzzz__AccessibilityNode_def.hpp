#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityRole_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AccessibilityNode)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Accessibility {
class AccessibilityHierarchy;
}
namespace UnityEngine::Accessibility {
struct AccessibilityNodeData;
}
namespace UnityEngine::Accessibility {
struct AccessibilityRole;
}
namespace UnityEngine::Accessibility {
struct AccessibilityScrollDirection;
}
namespace UnityEngine::Accessibility {
struct AccessibilityState;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Accessibility {
class AccessibilityNode;
}
// Write type traits
MARK_REF_T(::UnityEngine::Accessibility::AccessibilityNode*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Accessibility::AccessibilityNode*, "UnityEngine.Accessibility", "AccessibilityNode");
// Dependencies System.Object, UnityEngine.Accessibility.AccessibilityRole, UnityEngine.Accessibility.AccessibilityState, UnityEngine.Rect
namespace UnityEngine::Accessibility {
// Is value type: false
// CS Name: UnityEngine.Accessibility.AccessibilityNode
class CORDL_TYPE AccessibilityNode : public ::System::Object {
public:
// Declarations
/// @brief Field <id>k__BackingField, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__id_k__BackingField, put=__cordl_internal_set__id_k__BackingField)) int32_t  _id_k__BackingField;

/// @brief Field <parent>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent_k__BackingField, put=__cordl_internal_set__parent_k__BackingField)) ::UnityEngine::Accessibility::AccessibilityNode*  _parent_k__BackingField;

 __declspec(property(get=get_allowsDirectInteraction)) bool  allowsDirectInteraction;

/// @brief Field childList, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_childList, put=__cordl_internal_set_childList)) ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*  childList;

 __declspec(property(get=get_children)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>*  children;

/// @brief Field decremented, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_decremented, put=__cordl_internal_set_decremented)) ::System::Action*  decremented;

/// @brief Field dismissed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dismissed, put=__cordl_internal_set_dismissed)) ::System::Func_1<bool>*  dismissed;

/// @brief Field focusChanged, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_focusChanged, put=__cordl_internal_set_focusChanged)) ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*  focusChanged;

 __declspec(property(get=get_frame, put=set_frame)) ::UnityEngine::Rect  frame;

 __declspec(property(get=get_frameGetter)) ::System::Func_1<::UnityEngine::Rect>*  frameGetter;

 __declspec(property(get=get_hint)) ::StringW  hint;

 __declspec(property(get=get_id)) int32_t  id;

/// @brief Field incremented, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_incremented, put=__cordl_internal_set_incremented)) ::System::Action*  incremented;

/// @brief Field invoked, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_invoked, put=__cordl_internal_set_invoked)) ::System::Func_1<bool>*  invoked;

 __declspec(property(get=get_isActive)) bool  isActive;

 __declspec(property(get=get_label)) ::StringW  label;

/// @brief Field m_AllowsDirectInteraction, offset 0x8f, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowsDirectInteraction, put=__cordl_internal_set_m_AllowsDirectInteraction)) bool  m_AllowsDirectInteraction;

/// @brief Field m_Frame, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Frame, put=__cordl_internal_set_m_Frame)) ::UnityEngine::Rect  m_Frame;

/// @brief Field m_FrameGetter, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FrameGetter, put=__cordl_internal_set_m_FrameGetter)) ::System::Func_1<::UnityEngine::Rect>*  m_FrameGetter;

/// @brief Field m_Hierarchy, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hierarchy, put=__cordl_internal_set_m_Hierarchy)) ::UnityEngine::Accessibility::AccessibilityHierarchy*  m_Hierarchy;

/// @brief Field m_Hint, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Hint, put=__cordl_internal_set_m_Hint)) ::StringW  m_Hint;

/// @brief Field m_IsActive, offset 0x8e, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsActive, put=__cordl_internal_set_m_IsActive)) bool  m_IsActive;

/// @brief Field m_Label, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Label, put=__cordl_internal_set_m_Label)) ::StringW  m_Label;

/// @brief Field m_Role, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Role, put=__cordl_internal_set_m_Role)) ::UnityEngine::Accessibility::AccessibilityRole  m_Role;

/// @brief Field m_State, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::UnityEngine::Accessibility::AccessibilityState  m_State;

/// @brief Field m_Value, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Value, put=__cordl_internal_set_m_Value)) ::StringW  m_Value;

 __declspec(property(get=get_parent)) ::UnityEngine::Accessibility::AccessibilityNode*  parent;

 __declspec(property(get=get_role)) ::UnityEngine::Accessibility::AccessibilityRole  role;

/// @brief Field scrolled, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_scrolled, put=__cordl_internal_set_scrolled)) ::System::Func_2<::UnityEngine::Accessibility::AccessibilityScrollDirection,bool>*  scrolled;

 __declspec(property(get=get_state)) ::UnityEngine::Accessibility::AccessibilityState  state;

 __declspec(property(get=get_value)) ::StringW  value;

/// @brief Method AllocateNative, addr 0x182214af0, size 0x3f0, virtual false, abstract: false, final false
inline void AllocateNative() ;

/// @brief Method CreateNativeNodeWithData, addr 0x182214ee0, size 0xd0, virtual false, abstract: false, final false
inline void CreateNativeNodeWithData(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData) ;

/// @brief Method FreeNative, addr 0x182214fb0, size 0x180, virtual false, abstract: false, final false
inline void FreeNative(bool  freeChildren) ;

/// @brief Method GetNodeData, addr 0x182215130, size 0x250, virtual false, abstract: false, final false
inline void GetNodeData(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData) ;

/// @brief Method InvokeDecremented, addr 0x182215380, size 0x30, virtual false, abstract: false, final false
inline bool InvokeDecremented() ;

/// @brief Method InvokeDismissed, addr 0x1822153b0, size 0x40, virtual false, abstract: false, final false
inline bool InvokeDismissed() ;

/// @brief Method InvokeFocusChanged, addr 0x1822153f0, size 0x20, virtual false, abstract: false, final false
inline void InvokeFocusChanged(bool  isNodeFocused) ;

/// @brief Method InvokeIncremented, addr 0x182215410, size 0x30, virtual false, abstract: false, final false
inline bool InvokeIncremented() ;

/// @brief Method InvokeNodeInvoked, addr 0x182215440, size 0x40, virtual false, abstract: false, final false
inline bool InvokeNodeInvoked() ;

/// @brief Method InvokeScrolled, addr 0x182215480, size 0x40, virtual false, abstract: false, final false
inline bool InvokeScrolled(::UnityEngine::Accessibility::AccessibilityScrollDirection  direction) ;

/// @brief Method IsInActiveHierarchy, addr 0x1822154c0, size 0x30, virtual false, abstract: false, final false
inline bool IsInActiveHierarchy() ;

/// @brief Method NotifyFocusChanged, addr 0x1822154f0, size 0x80, virtual false, abstract: false, final false
inline void NotifyFocusChanged(bool  isNodeFocused) ;

constexpr int32_t const& __cordl_internal_get__id_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__id_k__BackingField() ;

constexpr ::UnityEngine::Accessibility::AccessibilityNode* const& __cordl_internal_get__parent_k__BackingField() const;

constexpr ::UnityEngine::Accessibility::AccessibilityNode*& __cordl_internal_get__parent_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>* const& __cordl_internal_get_childList() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*& __cordl_internal_get_childList() ;

constexpr ::System::Action* const& __cordl_internal_get_decremented() const;

constexpr ::System::Action*& __cordl_internal_get_decremented() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_dismissed() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_dismissed() ;

constexpr ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>* const& __cordl_internal_get_focusChanged() const;

constexpr ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*& __cordl_internal_get_focusChanged() ;

constexpr ::System::Action* const& __cordl_internal_get_incremented() const;

constexpr ::System::Action*& __cordl_internal_get_incremented() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_invoked() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_invoked() ;

constexpr bool const& __cordl_internal_get_m_AllowsDirectInteraction() const;

constexpr bool& __cordl_internal_get_m_AllowsDirectInteraction() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_Frame() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_m_Frame() ;

constexpr ::System::Func_1<::UnityEngine::Rect>* const& __cordl_internal_get_m_FrameGetter() const;

constexpr ::System::Func_1<::UnityEngine::Rect>*& __cordl_internal_get_m_FrameGetter() ;

constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy* const& __cordl_internal_get_m_Hierarchy() const;

constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy*& __cordl_internal_get_m_Hierarchy() ;

constexpr ::StringW const& __cordl_internal_get_m_Hint() const;

constexpr ::StringW& __cordl_internal_get_m_Hint() ;

constexpr bool const& __cordl_internal_get_m_IsActive() const;

constexpr bool& __cordl_internal_get_m_IsActive() ;

constexpr ::StringW const& __cordl_internal_get_m_Label() const;

constexpr ::StringW& __cordl_internal_get_m_Label() ;

constexpr ::UnityEngine::Accessibility::AccessibilityRole const& __cordl_internal_get_m_Role() const;

constexpr ::UnityEngine::Accessibility::AccessibilityRole& __cordl_internal_get_m_Role() ;

constexpr ::UnityEngine::Accessibility::AccessibilityState const& __cordl_internal_get_m_State() const;

constexpr ::UnityEngine::Accessibility::AccessibilityState& __cordl_internal_get_m_State() ;

constexpr ::StringW const& __cordl_internal_get_m_Value() const;

constexpr ::StringW& __cordl_internal_get_m_Value() ;

constexpr ::System::Func_2<::UnityEngine::Accessibility::AccessibilityScrollDirection,bool>* const& __cordl_internal_get_scrolled() const;

constexpr ::System::Func_2<::UnityEngine::Accessibility::AccessibilityScrollDirection,bool>*& __cordl_internal_get_scrolled() ;

constexpr void __cordl_internal_set__id_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__parent_k__BackingField(::UnityEngine::Accessibility::AccessibilityNode*  value) ;

constexpr void __cordl_internal_set_childList(::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value) ;

constexpr void __cordl_internal_set_decremented(::System::Action*  value) ;

constexpr void __cordl_internal_set_dismissed(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_focusChanged(::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*  value) ;

constexpr void __cordl_internal_set_incremented(::System::Action*  value) ;

constexpr void __cordl_internal_set_invoked(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set_m_AllowsDirectInteraction(bool  value) ;

constexpr void __cordl_internal_set_m_Frame(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_m_FrameGetter(::System::Func_1<::UnityEngine::Rect>*  value) ;

constexpr void __cordl_internal_set_m_Hierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value) ;

constexpr void __cordl_internal_set_m_Hint(::StringW  value) ;

constexpr void __cordl_internal_set_m_IsActive(bool  value) ;

constexpr void __cordl_internal_set_m_Label(::StringW  value) ;

constexpr void __cordl_internal_set_m_Role(::UnityEngine::Accessibility::AccessibilityRole  value) ;

constexpr void __cordl_internal_set_m_State(::UnityEngine::Accessibility::AccessibilityState  value) ;

constexpr void __cordl_internal_set_m_Value(::StringW  value) ;

constexpr void __cordl_internal_set_scrolled(::System::Func_2<::UnityEngine::Accessibility::AccessibilityScrollDirection,bool>*  value) ;

/// @brief Method get_allowsDirectInteraction, addr 0x182215570, size 0x10, virtual false, abstract: false, final false
inline bool get_allowsDirectInteraction() ;

/// @brief Method get_children, addr 0x1802e58c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>* get_children() ;

/// @brief Method get_frame, addr 0x182215580, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_frame() ;

/// @brief Method get_frameGetter, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Func_1<::UnityEngine::Rect>* get_frameGetter() ;

/// @brief Method get_hint, addr 0x1802e5710, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_hint() ;

/// @brief Method get_id, addr 0x180310fd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_id() ;

/// @brief Method get_isActive, addr 0x1822156b0, size 0x10, virtual false, abstract: false, final false
inline bool get_isActive() ;

/// @brief Method get_label, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_label() ;

/// @brief Method get_parent, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityNode* get_parent() ;

/// @brief Method get_role, addr 0x1803115f0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityRole get_role() ;

/// @brief Method get_state, addr 0x180458940, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Accessibility::AccessibilityState get_state() ;

/// @brief Method get_value, addr 0x1803a74d0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_value() ;

/// @brief Method set_frame, addr 0x1822156c0, size 0x50, virtual false, abstract: false, final false
inline void set_frame(::UnityEngine::Rect  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AccessibilityNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AccessibilityNode(AccessibilityNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AccessibilityNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AccessibilityNode(AccessibilityNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21234};

/// @brief Field focusChanged, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*  ___focusChanged;

/// @brief Field invoked, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___invoked;

/// @brief Field incremented, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___incremented;

/// @brief Field decremented, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___decremented;

/// @brief Field scrolled, offset: 0x30, size: 0x8, def value: None
 ::System::Func_2<::UnityEngine::Accessibility::AccessibilityScrollDirection,bool>*  ___scrolled;

/// @brief Field dismissed, offset: 0x38, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___dismissed;

/// @brief Field m_Hierarchy, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityHierarchy*  ___m_Hierarchy;

/// @brief Field childList, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*  ___childList;

/// @brief Field <parent>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Accessibility::AccessibilityNode*  ____parent_k__BackingField;

/// @brief Field m_Label, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___m_Label;

/// @brief Field m_Value, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___m_Value;

/// @brief Field m_Hint, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___m_Hint;

/// @brief Field m_Frame, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Rect  ___m_Frame;

/// @brief Field m_FrameGetter, offset: 0x80, size: 0x8, def value: None
 ::System::Func_1<::UnityEngine::Rect>*  ___m_FrameGetter;

/// @brief Field <id>k__BackingField, offset: 0x88, size: 0x4, def value: None
 int32_t  ____id_k__BackingField;

/// @brief Field m_Role, offset: 0x8c, size: 0x1, def value: None
 ::UnityEngine::Accessibility::AccessibilityRole  ___m_Role;

/// @brief Field m_State, offset: 0x8d, size: 0x1, def value: None
 ::UnityEngine::Accessibility::AccessibilityState  ___m_State;

/// @brief Field m_IsActive, offset: 0x8e, size: 0x1, def value: None
 bool  ___m_IsActive;

/// @brief Field m_AllowsDirectInteraction, offset: 0x8f, size: 0x1, def value: None
 bool  ___m_AllowsDirectInteraction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___focusChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___invoked) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___incremented) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___decremented) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___scrolled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___dismissed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Hierarchy) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___childList) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ____parent_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Label) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Value) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Hint) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Frame) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_FrameGetter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ____id_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_Role) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_State) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_IsActive) == 0x8e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Accessibility::AccessibilityNode, ___m_AllowsDirectInteraction) == 0x8f, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Accessibility::AccessibilityNode) == 0x90, "Size mismatch!");

} // namespace end def UnityEngine::Accessibility
