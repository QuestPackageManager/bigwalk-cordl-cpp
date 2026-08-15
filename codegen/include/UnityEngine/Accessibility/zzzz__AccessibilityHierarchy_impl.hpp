#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityHierarchy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchy_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy.get_rootNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>* (::UnityEngine::Accessibility::AccessibilityHierarchy::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchy::get_rootNodes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"get_rootNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy.TryGetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityHierarchy::*)(int32_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>)>(&::UnityEngine::Accessibility::AccessibilityHierarchy::TryGetNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182212aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"TryGetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy.TryGetNodeAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityHierarchy::*)(float_t, float_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>)>(&::UnityEngine::Accessibility::AccessibilityHierarchy::TryGetNodeAt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182212a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"TryGetNodeAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy.RefreshNodeFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityHierarchy::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchy::RefreshNodeFrames)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1822128f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"RefreshNodeFrames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy.AllocateNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityHierarchy::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchy::AllocateNative)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1822127f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"AllocateNative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy.FreeNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityHierarchy::*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchy::FreeNative)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182212870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"FreeNative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchy._TryGetNodeAt_g__FindNodeContainingPoint_17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityNode* (*)(::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*, ::UnityEngine::Vector2)>(&::UnityEngine::Accessibility::AccessibilityHierarchy::_TryGetNodeAt_g__FindNodeContainingPoint_17_0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182212ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"<TryGetNodeAt>g__FindNodeContainingPoint|17_0", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>*& UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>* const& UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_set_nodes(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*& UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_get_m_RootNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RootNodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>* const& UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_get_m_RootNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RootNodes;
}
constexpr void UnityEngine::Accessibility::AccessibilityHierarchy::__cordl_internal_set_m_RootNodes(::System::Collections::Generic::List_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RootNodes = value;
}
inline void UnityEngine::Accessibility::AccessibilityHierarchy::setStaticF_usedNodeIds(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "usedNodeIds", ::UnityEngine::Accessibility::AccessibilityHierarchy*>(std::forward<::System::Collections::Generic::HashSet_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<int32_t>* UnityEngine::Accessibility::AccessibilityHierarchy::getStaticF_usedNodeIds()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<int32_t>*, "usedNodeIds", ::UnityEngine::Accessibility::AccessibilityHierarchy*>();
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>* UnityEngine::Accessibility::AccessibilityHierarchy::get_rootNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"get_rootNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityHierarchy::TryGetNode(int32_t  id, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"TryGetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, node);
}
inline bool UnityEngine::Accessibility::AccessibilityHierarchy::TryGetNodeAt(float_t  horizontalPosition, float_t  verticalPosition, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"TryGetNodeAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, horizontalPosition, verticalPosition, node);
}
inline void UnityEngine::Accessibility::AccessibilityHierarchy::RefreshNodeFrames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"RefreshNodeFrames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityHierarchy::AllocateNative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"AllocateNative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityHierarchy::FreeNative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"FreeNative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityNode* UnityEngine::Accessibility::AccessibilityHierarchy::_TryGetNodeAt_g__FindNodeContainingPoint_17_0(::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*  nodes, ::UnityEngine::Vector2  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>(),
                        {"<TryGetNodeAt>g__FindNodeContainingPoint|17_0", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityNode*>(nullptr, ___internal_method, nodes, pos);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy::AccessibilityHierarchy()   {
}
