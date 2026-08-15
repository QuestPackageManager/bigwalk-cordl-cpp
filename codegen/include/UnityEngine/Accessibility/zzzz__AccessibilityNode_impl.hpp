#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityRole_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityState_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchy_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeData_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityRole_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityScrollDirection_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_children
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>* (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_children)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_children", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityNode* (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_parent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_parent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_label)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_label", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_value)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_hint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_hint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_hint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_frame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_frame)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x182215580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_frame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.set_frame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(::UnityEngine::Rect)>(&::UnityEngine::Accessibility::AccessibilityNode::set_frame)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1822156c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"set_frame", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_frameGetter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::UnityEngine::Rect>* (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_frameGetter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_frameGetter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180310fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_role
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityRole (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_role)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803115f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_role", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityState (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_state)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180458940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_isActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_isActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822156b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_isActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_allowsDirectInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_allowsDirectInteraction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182215570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_allowsDirectInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.CreateNativeNodeWithData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>)>(&::UnityEngine::Accessibility::AccessibilityNode::CreateNativeNodeWithData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182214ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"CreateNativeNodeWithData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.GetNodeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>)>(&::UnityEngine::Accessibility::AccessibilityNode::GetNodeData)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x182215130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"GetNodeData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.AllocateNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::AllocateNative)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x182214af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"AllocateNative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.FreeNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityNode::FreeNative)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x182214fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"FreeNative", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.IsInActiveHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::IsInActiveHierarchy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1822154c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"IsInActiveHierarchy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.NotifyFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityNode::NotifyFocusChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822154f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"NotifyFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeFocusChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822153f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeNodeInvoked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeNodeInvoked)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182215440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeNodeInvoked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeIncremented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeIncremented)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182215410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeIncremented", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeDecremented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeDecremented)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182215380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeDecremented", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeScrolled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)(::UnityEngine::Accessibility::AccessibilityScrollDirection)>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeScrolled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182215480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeScrolled", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityScrollDirection>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeDismissed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeDismissed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822153b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeDismissed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_focusChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusChanged;
}
constexpr ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_focusChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusChanged;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_focusChanged(::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusChanged = value;
}
constexpr ::System::Func_1<bool>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_invoked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invoked;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_invoked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___invoked;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_invoked(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___invoked = value;
}
constexpr ::System::Action*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_incremented()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incremented;
}
constexpr ::System::Action* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_incremented() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incremented;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_incremented(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incremented = value;
}
constexpr ::System::Action*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_decremented()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decremented;
}
constexpr ::System::Action* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_decremented() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decremented;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_decremented(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decremented = value;
}
constexpr ::System::Func_2<::UnityEngine::Accessibility::AccessibilityScrollDirection,bool>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_scrolled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrolled;
}
constexpr ::System::Func_2<::UnityEngine::Accessibility::AccessibilityScrollDirection,bool>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_scrolled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrolled;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_scrolled(::System::Func_2<::UnityEngine::Accessibility::AccessibilityScrollDirection,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrolled = value;
}
constexpr ::System::Func_1<bool>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_dismissed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dismissed;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_dismissed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dismissed;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_dismissed(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dismissed = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Hierarchy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hierarchy;
}
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Hierarchy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hierarchy;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Hierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Hierarchy = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_childList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_childList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childList;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_childList(::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___childList = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityNode*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get__parent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent_k__BackingField;
}
constexpr ::UnityEngine::Accessibility::AccessibilityNode* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get__parent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent_k__BackingField;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set__parent_k__BackingField(::UnityEngine::Accessibility::AccessibilityNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parent_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Label;
}
constexpr ::StringW const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Label;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Label(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Label = value;
}
constexpr ::StringW& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
constexpr ::StringW const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Value = value;
}
constexpr ::StringW& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Hint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hint;
}
constexpr ::StringW const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Hint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hint;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Hint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Hint = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Frame;
}
constexpr ::UnityEngine::Rect const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Frame;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Frame(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Frame = value;
}
constexpr ::System::Func_1<::UnityEngine::Rect>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_FrameGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameGetter;
}
constexpr ::System::Func_1<::UnityEngine::Rect>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_FrameGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameGetter;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_FrameGetter(::System::Func_1<::UnityEngine::Rect>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameGetter = value;
}
constexpr int32_t& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get__id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr int32_t const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get__id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set__id_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id_k__BackingField = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityRole& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Role()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Role;
}
constexpr ::UnityEngine::Accessibility::AccessibilityRole const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Role() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Role;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Role(::UnityEngine::Accessibility::AccessibilityRole  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Role = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityState& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::UnityEngine::Accessibility::AccessibilityState const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_State(::UnityEngine::Accessibility::AccessibilityState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr bool& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_IsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActive;
}
constexpr bool const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_IsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActive;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_IsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsActive = value;
}
constexpr bool& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_AllowsDirectInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowsDirectInteraction;
}
constexpr bool const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_AllowsDirectInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowsDirectInteraction;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_AllowsDirectInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowsDirectInteraction = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>* UnityEngine::Accessibility::AccessibilityNode::get_children()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_children", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityNode* UnityEngine::Accessibility::AccessibilityNode::get_parent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_parent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityNode*>(this, ___internal_method);
}
inline ::StringW UnityEngine::Accessibility::AccessibilityNode::get_label()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_label", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Accessibility::AccessibilityNode::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Accessibility::AccessibilityNode::get_hint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_hint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::Accessibility::AccessibilityNode::get_frame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_frame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::set_frame(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"set_frame", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Func_1<::UnityEngine::Rect>* UnityEngine::Accessibility::AccessibilityNode::get_frameGetter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_frameGetter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::Rect>*>(this, ___internal_method);
}
inline int32_t UnityEngine::Accessibility::AccessibilityNode::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityRole UnityEngine::Accessibility::AccessibilityNode::get_role()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_role", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityRole>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityState UnityEngine::Accessibility::AccessibilityNode::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityState>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::get_isActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_isActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::get_allowsDirectInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_allowsDirectInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::CreateNativeNodeWithData(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"CreateNativeNodeWithData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeData);
}
inline void UnityEngine::Accessibility::AccessibilityNode::GetNodeData(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"GetNodeData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeData);
}
inline void UnityEngine::Accessibility::AccessibilityNode::AllocateNative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"AllocateNative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::FreeNative(bool  freeChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"FreeNative", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, freeChildren);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::IsInActiveHierarchy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"IsInActiveHierarchy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::NotifyFocusChanged(bool  isNodeFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"NotifyFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isNodeFocused);
}
inline void UnityEngine::Accessibility::AccessibilityNode::InvokeFocusChanged(bool  isNodeFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isNodeFocused);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::InvokeNodeInvoked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeNodeInvoked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::InvokeIncremented()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeIncremented", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::InvokeDecremented()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeDecremented", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::InvokeScrolled(::UnityEngine::Accessibility::AccessibilityScrollDirection  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeScrolled", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityScrollDirection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, direction);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::InvokeDismissed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeDismissed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityNode::AccessibilityNode()   {
}
