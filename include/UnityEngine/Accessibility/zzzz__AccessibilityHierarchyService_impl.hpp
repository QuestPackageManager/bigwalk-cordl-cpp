#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityHierarchyService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchyService_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchy_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.get_activeHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityHierarchy* (*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::get_activeHierarchy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182212650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"get_activeHierarchy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.set_activeHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Accessibility::AccessibilityHierarchy*)>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::set_activeHierarchy)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x182212670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"set_activeHierarchy", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.GetRootNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>* (*)()>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::GetRootNodes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182212530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"GetRootNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.TryGetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>)>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::TryGetNode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1822125e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"TryGetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityHierarchyService.TryGetNodeAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>)>(&::UnityEngine::Accessibility::AccessibilityHierarchyService::TryGetNodeAt)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182212550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"TryGetNodeAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::AccessibilityHierarchyService::setStaticF_s_ActiveHierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Accessibility::AccessibilityHierarchy*, "s_ActiveHierarchy", ::UnityEngine::Accessibility::AccessibilityHierarchyService*>(std::forward<::UnityEngine::Accessibility::AccessibilityHierarchy*>(value));
}
inline ::UnityEngine::Accessibility::AccessibilityHierarchy* UnityEngine::Accessibility::AccessibilityHierarchyService::getStaticF_s_ActiveHierarchy()  {
return ::cordl_internals::getStaticField<::UnityEngine::Accessibility::AccessibilityHierarchy*, "s_ActiveHierarchy", ::UnityEngine::Accessibility::AccessibilityHierarchyService*>();
}
inline ::UnityEngine::Accessibility::AccessibilityHierarchy* UnityEngine::Accessibility::AccessibilityHierarchyService::get_activeHierarchy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"get_activeHierarchy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityHierarchy*>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityHierarchyService::set_activeHierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"set_activeHierarchy", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityHierarchy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>* UnityEngine::Accessibility::AccessibilityHierarchyService::GetRootNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"GetRootNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(nullptr, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityHierarchyService::TryGetNode(int32_t  id, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"TryGetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id, node);
}
inline bool UnityEngine::Accessibility::AccessibilityHierarchyService::TryGetNodeAt(float_t  x, float_t  y, ::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityHierarchyService*>(),
                        {"TryGetNodeAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNode*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y, node);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchyService::AccessibilityHierarchyService()   {
}
