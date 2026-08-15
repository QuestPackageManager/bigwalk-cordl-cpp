#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AssistiveSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AssistiveSupport_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchy_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AssistiveSupport_def.hpp"
#include "UnityEngine/Accessibility/zzzz__IAccessibilityNotificationDispatcher_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher.SendScreenChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::*)(::UnityEngine::Accessibility::AccessibilityNode*)>(&::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::SendScreenChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182215d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {"SendScreenChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher.SendLayoutChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::*)(::UnityEngine::Accessibility::AccessibilityNode*)>(&::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::SendLayoutChanged)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182215d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {"SendLayoutChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::*)()>(&::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::SendScreenChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {"SendScreenChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToFocus);
}
inline void UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::SendLayoutChanged(::UnityEngine::Accessibility::AccessibilityNode*  nodeToFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {"SendLayoutChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeToFocus);
}
inline void UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher* UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher*>());
}
/// @brief Convert operator to "::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher"
constexpr  UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::operator ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*() noexcept {
return static_cast<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher"
constexpr ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::i___UnityEngine__Accessibility__IAccessibilityNotificationDispatcher() noexcept {
return static_cast<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AssistiveSupport_NotificationDispatcher::AssistiveSupport_NotificationDispatcher()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride::AssistiveSupport_ScreenReaderStatusOverride(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride::AssistiveSupport_ScreenReaderStatusOverride()   {
}
constexpr ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride  UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride::OSDriven{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride  UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride::ForceEnabled{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride  UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride::ForceDisabled{static_cast<uint8_t>(0x2u)};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.get_notificationDispatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* (*)()>(&::UnityEngine::Accessibility::AssistiveSupport::get_notificationDispatcher)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182215be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_notificationDispatcher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.get_activeHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityHierarchy* (*)()>(&::UnityEngine::Accessibility::AssistiveSupport::get_activeHierarchy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182212650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_activeHierarchy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.get_isScreenReaderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Accessibility::AssistiveSupport::get_isScreenReaderEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182215b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_isScreenReaderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.get_screenReaderStatusOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride (*)()>(&::UnityEngine::Accessibility::AssistiveSupport::get_screenReaderStatusOverride)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182215c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_screenReaderStatusOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AssistiveSupport::Initialize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x182213400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.ScreenReaderStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Accessibility::AssistiveSupport::ScreenReaderStatusChanged)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x182215920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"ScreenReaderStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AssistiveSupport.NodeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Accessibility::AccessibilityNode*)>(&::UnityEngine::Accessibility::AssistiveSupport::NodeFocusChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1822158c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"NodeFocusChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Accessibility::AssistiveSupport::setStaticF__notificationDispatcher_k__BackingField(::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*, "<notificationDispatcher>k__BackingField", ::UnityEngine::Accessibility::AssistiveSupport*>(std::forward<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(value));
}
inline ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* UnityEngine::Accessibility::AssistiveSupport::getStaticF__notificationDispatcher_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*, "<notificationDispatcher>k__BackingField", ::UnityEngine::Accessibility::AssistiveSupport*>();
}
inline void UnityEngine::Accessibility::AssistiveSupport::setStaticF_screenReaderStatusChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "screenReaderStatusChanged", ::UnityEngine::Accessibility::AssistiveSupport*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Accessibility::AssistiveSupport::getStaticF_screenReaderStatusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "screenReaderStatusChanged", ::UnityEngine::Accessibility::AssistiveSupport*>();
}
inline void UnityEngine::Accessibility::AssistiveSupport::setStaticF_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*, "nodeFocusChanged", ::UnityEngine::Accessibility::AssistiveSupport*>(std::forward<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>* UnityEngine::Accessibility::AssistiveSupport::getStaticF_nodeFocusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*, "nodeFocusChanged", ::UnityEngine::Accessibility::AssistiveSupport*>();
}
inline void UnityEngine::Accessibility::AssistiveSupport::setStaticF_s_ScreenReaderStatusOverride(::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride  value)  {
::cordl_internals::setStaticField<::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride, "s_ScreenReaderStatusOverride", ::UnityEngine::Accessibility::AssistiveSupport*>(std::forward<::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride>(value));
}
inline ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride UnityEngine::Accessibility::AssistiveSupport::getStaticF_s_ScreenReaderStatusOverride()  {
return ::cordl_internals::getStaticField<::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride, "s_ScreenReaderStatusOverride", ::UnityEngine::Accessibility::AssistiveSupport*>();
}
inline ::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher* UnityEngine::Accessibility::AssistiveSupport::get_notificationDispatcher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_notificationDispatcher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::IAccessibilityNotificationDispatcher*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityHierarchy* UnityEngine::Accessibility::AssistiveSupport::get_activeHierarchy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_activeHierarchy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityHierarchy*>(nullptr, ___internal_method);
}
inline bool UnityEngine::Accessibility::AssistiveSupport::get_isScreenReaderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_isScreenReaderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride UnityEngine::Accessibility::AssistiveSupport::get_screenReaderStatusOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"get_screenReaderStatusOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AssistiveSupport_ScreenReaderStatusOverride>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AssistiveSupport::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AssistiveSupport::ScreenReaderStatusChanged(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"ScreenReaderStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::Accessibility::AssistiveSupport::NodeFocusChanged(::UnityEngine::Accessibility::AccessibilityNode*  currentNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AssistiveSupport*>(),
                        {"NodeFocusChanged", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentNode);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AssistiveSupport::AssistiveSupport()   {
}
