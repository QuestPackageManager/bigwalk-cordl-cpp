#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNodeDataTests.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeData_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeDataTests_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeData_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeDataTests.Internal_GetNodeDataFromManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>)>(&::UnityEngine::Accessibility::AccessibilityNodeDataTests::Internal_GetNodeDataFromManaged)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182214220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeDataTests*>(),
                        {"Internal_GetNodeDataFromManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNodeDataTests.Internal_GetNodeDataToManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>)>(&::UnityEngine::Accessibility::AccessibilityNodeDataTests::Internal_GetNodeDataToManaged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182214390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeDataTests*>(),
                        {"Internal_GetNodeDataToManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::AccessibilityNodeDataTests::setStaticF_nodeDataFromNative(::UnityEngine::Accessibility::AccessibilityNodeData  value)  {
::cordl_internals::setStaticField<::UnityEngine::Accessibility::AccessibilityNodeData, "nodeDataFromNative", ::UnityEngine::Accessibility::AccessibilityNodeDataTests*>(std::forward<::UnityEngine::Accessibility::AccessibilityNodeData>(value));
}
inline ::UnityEngine::Accessibility::AccessibilityNodeData UnityEngine::Accessibility::AccessibilityNodeDataTests::getStaticF_nodeDataFromNative()  {
return ::cordl_internals::getStaticField<::UnityEngine::Accessibility::AccessibilityNodeData, "nodeDataFromNative", ::UnityEngine::Accessibility::AccessibilityNodeDataTests*>();
}
inline void UnityEngine::Accessibility::AccessibilityNodeDataTests::Internal_GetNodeDataFromManaged(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeDataTests*>(),
                        {"Internal_GetNodeDataFromManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeData);
}
inline void UnityEngine::Accessibility::AccessibilityNodeDataTests::Internal_GetNodeDataToManaged(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNodeDataTests*>(),
                        {"Internal_GetNodeDataToManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeData);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityNodeDataTests::AccessibilityNodeDataTests()   {
}
