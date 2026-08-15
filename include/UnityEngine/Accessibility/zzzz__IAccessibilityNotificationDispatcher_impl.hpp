#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/IAccessibilityNotificationDispatcher.hpp"
#include "UnityEngine/Accessibility/zzzz__IAccessibilityNotificationDispatcher_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher.SendScreenChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher::*)(::UnityEngine::Accessibility::AccessibilityNode*)>(&::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher::SendScreenChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(),
                    {::i2c::class_of<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher.SendLayoutChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher::*)(::UnityEngine::Accessibility::AccessibilityNode*)>(&::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher::SendLayoutChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(),
                    {::i2c::class_of<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::IAccessibilityNotificationDispatcher::SendScreenChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToFocus);
}
inline void UnityEngine::Accessibility::IAccessibilityNotificationDispatcher::SendLayoutChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToFocus);
}
