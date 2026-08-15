#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/AnalyticsSessionInfo.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsSessionInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsSessionInfo_def.hpp"
#include "UnityEngine/Analytics/zzzz__AnalyticsSessionState_def.hpp"
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182548e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::*)(::UnityEngine::Analytics::AnalyticsSessionState, int64_t, int64_t, bool)>(&::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::Invoke)> {
  constexpr static std::size_t size = 0xb300;
  constexpr static std::size_t addrs = 0x180e16e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>(),
                    {::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::Invoke(::UnityEngine::Analytics::AnalyticsSessionState  sessionState, int64_t  sessionId, int64_t  sessionElapsedTime, bool  sessionChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionState, sessionId, sessionElapsedTime, sessionChanged);
}
inline ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged* UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged::AnalyticsSessionInfo_SessionStateChanged()   {
}
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::*)(::StringW)>(&::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>(),
                    {::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::Invoke(::StringW  token)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged* UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged::AnalyticsSessionInfo_IdentityTokenChanged()   {
}
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo.CallSessionStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Analytics::AnalyticsSessionState, int64_t, int64_t, bool)>(&::UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182548bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo*>(),
                        {"CallSessionStateChanged", {}, {::i2c::type_of<::UnityEngine::Analytics::AnalyticsSessionState>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Analytics::AnalyticsSessionInfo.CallIdentityTokenChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Analytics::AnalyticsSessionInfo::CallIdentityTokenChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182548b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo*>(),
                        {"CallIdentityTokenChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Analytics::AnalyticsSessionInfo::setStaticF_sessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*, "sessionStateChanged", ::UnityEngine::Analytics::AnalyticsSessionInfo*>(std::forward<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*>(value));
}
inline ::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged* UnityEngine::Analytics::AnalyticsSessionInfo::getStaticF_sessionStateChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Analytics::AnalyticsSessionInfo_SessionStateChanged*, "sessionStateChanged", ::UnityEngine::Analytics::AnalyticsSessionInfo*>();
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo::setStaticF_identityTokenChanged(::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*, "identityTokenChanged", ::UnityEngine::Analytics::AnalyticsSessionInfo*>(std::forward<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*>(value));
}
inline ::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged* UnityEngine::Analytics::AnalyticsSessionInfo::getStaticF_identityTokenChanged()  {
return ::cordl_internals::getStaticField<::UnityEngine::Analytics::AnalyticsSessionInfo_IdentityTokenChanged*, "identityTokenChanged", ::UnityEngine::Analytics::AnalyticsSessionInfo*>();
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo::CallSessionStateChanged(::UnityEngine::Analytics::AnalyticsSessionState  sessionState, int64_t  sessionId, int64_t  sessionElapsedTime, bool  sessionChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo*>(),
                        {"CallSessionStateChanged", {}, {::i2c::type_of<::UnityEngine::Analytics::AnalyticsSessionState>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sessionState, sessionId, sessionElapsedTime, sessionChanged);
}
inline void UnityEngine::Analytics::AnalyticsSessionInfo::CallIdentityTokenChanged(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Analytics::AnalyticsSessionInfo*>(),
                        {"CallIdentityTokenChanged", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, token);
}
// Ctor Parameters []
constexpr ::UnityEngine::Analytics::AnalyticsSessionInfo::AnalyticsSessionInfo()   {
}
