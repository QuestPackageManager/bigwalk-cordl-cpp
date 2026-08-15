#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityManager_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityManager_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeData_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Notification::AccessibilityManager_Notification(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Notification::AccessibilityManager_Notification()   {
}
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Notification  UnityEngine::Accessibility::AccessibilityManager_Notification::None{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Notification  UnityEngine::Accessibility::AccessibilityManager_Notification::ScreenReaderStatusChanged{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Notification  UnityEngine::Accessibility::AccessibilityManager_Notification::ElementFocused{static_cast<uint8_t>(0x2u)};
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Notification  UnityEngine::Accessibility::AccessibilityManager_Notification::ElementUnfocused{static_cast<uint8_t>(0x3u)};
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Notification  UnityEngine::Accessibility::AccessibilityManager_Notification::FontScaleChanged{static_cast<uint8_t>(0x4u)};
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Notification  UnityEngine::Accessibility::AccessibilityManager_Notification::BoldTextStatusChanged{static_cast<uint8_t>(0x5u)};
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Notification  UnityEngine::Accessibility::AccessibilityManager_Notification::ClosedCaptioningStatusChanged{static_cast<uint8_t>(0x6u)};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.get_focusedNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityNode* (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_focusedNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_focusedNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.set_focusedNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)(::UnityEngine::Accessibility::AccessibilityNode*)>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_focusedNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_focusedNode", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.get_fontScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_fontScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_fontScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.set_fontScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)(float_t)>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_fontScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051eae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_fontScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.get_isBoldTextEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_isBoldTextEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e67e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_isBoldTextEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.set_isBoldTextEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_isBoldTextEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804e6800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_isBoldTextEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.get_isClosedCaptioningEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_isClosedCaptioningEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822124d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_isClosedCaptioningEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.set_isClosedCaptioningEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_isClosedCaptioningEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182212500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_isClosedCaptioningEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.get_isScreenReaderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_isScreenReaderEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822124e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_isScreenReaderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.set_isScreenReaderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_isScreenReaderEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182212510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_isScreenReaderEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.get_notification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityManager_Notification (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_notification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822124f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_notification", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext.set_notification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::*)(::UnityEngine::Accessibility::AccessibilityManager_Notification)>(&::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_notification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182212520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_notification", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityManager_Notification>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Accessibility::AccessibilityNode* UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_focusedNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_focusedNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityNode*>(*this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_focusedNode(::UnityEngine::Accessibility::AccessibilityNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_focusedNode", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_fontScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_fontScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_fontScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_fontScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_isBoldTextEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_isBoldTextEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_isBoldTextEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_isBoldTextEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_isClosedCaptioningEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_isClosedCaptioningEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_isClosedCaptioningEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_isClosedCaptioningEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_isScreenReaderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_isScreenReaderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_isScreenReaderEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_isScreenReaderEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Accessibility::AccessibilityManager_Notification UnityEngine::Accessibility::AccessibilityManager_NotificationContext::get_notification()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"get_notification", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityManager_Notification>(*this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_NotificationContext::set_notification(::UnityEngine::Accessibility::AccessibilityManager_Notification  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>(),
                        {"set_notification", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityManager_Notification>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_focusedNode_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityNode*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fontScale_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isBoldTextEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isClosedCaptioningEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isScreenReaderEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_notification_k__BackingField", ty: "::UnityEngine::Accessibility::AccessibilityManager_Notification", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::AccessibilityManager_NotificationContext(::UnityEngine::Accessibility::AccessibilityNode*  _focusedNode_k__BackingField, float_t  _fontScale_k__BackingField, bool  _isBoldTextEnabled_k__BackingField, bool  _isClosedCaptioningEnabled_k__BackingField, bool  _isScreenReaderEnabled_k__BackingField, ::UnityEngine::Accessibility::AccessibilityManager_Notification  _notification_k__BackingField) noexcept  {
this->_focusedNode_k__BackingField = _focusedNode_k__BackingField;
this->_fontScale_k__BackingField = _fontScale_k__BackingField;
this->_isBoldTextEnabled_k__BackingField = _isBoldTextEnabled_k__BackingField;
this->_isClosedCaptioningEnabled_k__BackingField = _isClosedCaptioningEnabled_k__BackingField;
this->_isScreenReaderEnabled_k__BackingField = _isScreenReaderEnabled_k__BackingField;
this->_notification_k__BackingField = _notification_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityManager_NotificationContext::AccessibilityManager_NotificationContext()   {
}
inline void UnityEngine::Accessibility::AccessibilityManager_Nested::setStaticF_s_Instance(::UnityEngine::Accessibility::AccessibilityManager*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Accessibility::AccessibilityManager*, "s_Instance", ::UnityEngine::Accessibility::AccessibilityManager_Nested*>(std::forward<::UnityEngine::Accessibility::AccessibilityManager*>(value));
}
inline ::UnityEngine::Accessibility::AccessibilityManager* UnityEngine::Accessibility::AccessibilityManager_Nested::getStaticF_s_Instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::Accessibility::AccessibilityManager*, "s_Instance", ::UnityEngine::Accessibility::AccessibilityManager_Nested*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityManager_Nested::AccessibilityManager_Nested()   {
}
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182213c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182215c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                    {::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock.InternalDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::InternalDispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182215c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {"InternalDispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::*)()>(&::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182215c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::__cordl_internal_get_m_Disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Disposed;
}
constexpr bool const& UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::__cordl_internal_get_m_Disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Disposed;
}
constexpr void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::__cordl_internal_set_m_Disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Disposed = value;
}
inline void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::InternalDispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {"InternalDispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock* UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityManager_ExclusiveLock::AccessibilityManager_ExclusiveLock()   {
}
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager::*)()>(&::UnityEngine::Accessibility::AccessibilityManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityManager* (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::get_instance)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182214000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.add_screenReaderStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::Accessibility::AccessibilityManager::add_screenReaderStatusChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182213f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"add_screenReaderStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.remove_screenReaderStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<bool>*)>(&::UnityEngine::Accessibility::AccessibilityManager::remove_screenReaderStatusChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182214150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"remove_screenReaderStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.add_nodeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*)>(&::UnityEngine::Accessibility::AccessibilityManager::add_nodeFocusChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182213e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"add_nodeFocusChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.remove_nodeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*)>(&::UnityEngine::Accessibility::AccessibilityManager::remove_nodeFocusChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x182214080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"remove_nodeFocusChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.get_isSupportedPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::get_isSupportedPlatform)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182214040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"get_isSupportedPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.IsScreenReaderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::IsScreenReaderEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182213c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"IsScreenReaderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.SendScreenChangedNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityManager::SendScreenChangedNotification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182213de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"SendScreenChangedNotification", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.SendLayoutChangedNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::Accessibility::AccessibilityManager::SendLayoutChangedNotification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182213dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"SendLayoutChangedNotification", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_Initialize)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x182213400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182213c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_Update_Impl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager::*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_Update_Impl)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x182213820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Update_Impl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_LateUpdate)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1822135a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_GetRootNodeIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_GetRootNodeIds)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x182213180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetRootNodeIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_GetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>)>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_GetNode)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x182213040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_GetNodeIdAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, float_t)>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_GetNodeIdAt)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182212fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNodeIdAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_GetFirstOrLastRootNodeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, ::by_ref<int32_t>)>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_GetFirstOrLastRootNodeId)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182212d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetFirstOrLastRootNodeId", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_GetFirstOrLastChildId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, bool, ::by_ref<int32_t>)>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_GetFirstOrLastChildId)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182212c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetFirstOrLastChildId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_GetNextOrPreviousSiblingId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, bool, ::by_ref<int32_t>)>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_GetNextOrPreviousSiblingId)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x182212df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNextOrPreviousSiblingId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_OnScreenReaderStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_OnScreenReaderStatusChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182213780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_OnScreenReaderStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Internal_OnWindowGeometryChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Internal_OnWindowGeometryChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1822137e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_OnWindowGeometryChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.QueueNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext)>(&::UnityEngine::Accessibility::AccessibilityManager::QueueNotification)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182213d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"QueueNotification", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.QueueNotification_Impl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityManager::*)(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext)>(&::UnityEngine::Accessibility::AccessibilityManager::QueueNotification_Impl)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182213c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"QueueNotification_Impl", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.GetExclusiveLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IDisposable* (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::GetExclusiveLock)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182212c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"GetExclusiveLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Lock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Lock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182213c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Lock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityManager.Unlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Accessibility::AccessibilityManager::Unlock)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182213df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Unlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Accessibility::AccessibilityManager::__cordl_internal_get_m_RefreshNodeFramesRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshNodeFramesRequested;
}
constexpr bool const& UnityEngine::Accessibility::AccessibilityManager::__cordl_internal_get_m_RefreshNodeFramesRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RefreshNodeFramesRequested;
}
constexpr void UnityEngine::Accessibility::AccessibilityManager::__cordl_internal_set_m_RefreshNodeFramesRequested(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RefreshNodeFramesRequested = value;
}
inline void UnityEngine::Accessibility::AccessibilityManager::setStaticF_screenReaderStatusChanged(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "screenReaderStatusChanged", ::UnityEngine::Accessibility::AccessibilityManager*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::Accessibility::AccessibilityManager::getStaticF_screenReaderStatusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "screenReaderStatusChanged", ::UnityEngine::Accessibility::AccessibilityManager*>();
}
inline void UnityEngine::Accessibility::AccessibilityManager::setStaticF_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*, "nodeFocusChanged", ::UnityEngine::Accessibility::AccessibilityManager*>(std::forward<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>* UnityEngine::Accessibility::AccessibilityManager::getStaticF_nodeFocusChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*, "nodeFocusChanged", ::UnityEngine::Accessibility::AccessibilityManager*>();
}
inline void UnityEngine::Accessibility::AccessibilityManager::setStaticF_asyncNotificationContexts(::System::Collections::Generic::Queue_1<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>*, "asyncNotificationContexts", ::UnityEngine::Accessibility::AccessibilityManager*>(std::forward<::System::Collections::Generic::Queue_1<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>* UnityEngine::Accessibility::AccessibilityManager::getStaticF_asyncNotificationContexts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>*, "asyncNotificationContexts", ::UnityEngine::Accessibility::AccessibilityManager*>();
}
inline void UnityEngine::Accessibility::AccessibilityManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityManager* UnityEngine::Accessibility::AccessibilityManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityManager*>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::add_screenReaderStatusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"add_screenReaderStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Accessibility::AccessibilityManager::remove_screenReaderStatusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"remove_screenReaderStatusChanged", {}, {::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Accessibility::AccessibilityManager::add_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"add_nodeFocusChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Accessibility::AccessibilityManager::remove_nodeFocusChanged(::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"remove_nodeFocusChanged", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::Accessibility::AccessibilityNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Accessibility::AccessibilityManager::get_isSupportedPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"get_isSupportedPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityManager::IsScreenReaderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"IsScreenReaderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::SendScreenChangedNotification(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"SendScreenChangedNotification", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeId);
}
inline void UnityEngine::Accessibility::AccessibilityManager::SendLayoutChangedNotification(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"SendLayoutChangedNotification", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, nodeId);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Internal_Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Internal_Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Internal_Update_Impl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_Update_Impl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Internal_LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<int32_t> UnityEngine::Accessibility::AccessibilityManager::Internal_GetRootNodeIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetRootNodeIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityManager::Internal_GetNode(int32_t  nodeId, ::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeId, nodeData);
}
inline int32_t UnityEngine::Accessibility::AccessibilityManager::Internal_GetNodeIdAt(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNodeIdAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, x, y);
}
inline bool UnityEngine::Accessibility::AccessibilityManager::Internal_GetFirstOrLastRootNodeId(bool  first, ::by_ref<int32_t>  managedRootId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetFirstOrLastRootNodeId", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, first, managedRootId);
}
inline bool UnityEngine::Accessibility::AccessibilityManager::Internal_GetFirstOrLastChildId(int32_t  nodeId, bool  first, ::by_ref<int32_t>  childId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetFirstOrLastChildId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeId, first, childId);
}
inline bool UnityEngine::Accessibility::AccessibilityManager::Internal_GetNextOrPreviousSiblingId(int32_t  nodeId, bool  next, ::by_ref<int32_t>  siblingId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_GetNextOrPreviousSiblingId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nodeId, next, siblingId);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Internal_OnScreenReaderStatusChanged(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_OnScreenReaderStatusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enabled);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Internal_OnWindowGeometryChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Internal_OnWindowGeometryChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::QueueNotification(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext  notification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"QueueNotification", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, notification);
}
inline void UnityEngine::Accessibility::AccessibilityManager::QueueNotification_Impl(::UnityEngine::Accessibility::AccessibilityManager_NotificationContext  notification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"QueueNotification_Impl", {}, {::i2c::type_of<::UnityEngine::Accessibility::AccessibilityManager_NotificationContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notification);
}
inline ::System::IDisposable* UnityEngine::Accessibility::AccessibilityManager::GetExclusiveLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"GetExclusiveLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Lock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Lock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityManager::Unlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                        {"Unlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline int32_t UnityEngine::Accessibility::AccessibilityManager::_Internal_GetNextOrPreviousSiblingId_g__IndexOf_30_0(T  elementToFind, ::System::Collections::Generic::IReadOnlyList_1<T>*  list)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityManager*>(),
                    {"<Internal_GetNextOrPreviousSiblingId>g__IndexOf|30_0", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, elementToFind, list);
}
inline ::UnityEngine::Accessibility::AccessibilityManager* UnityEngine::Accessibility::AccessibilityManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Accessibility::AccessibilityManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityManager::AccessibilityManager()   {
}
