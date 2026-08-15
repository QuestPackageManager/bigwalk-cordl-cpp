#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/AuthenticationListener.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__AuthenticationListener_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__LogoutCallbackInfo_def.hpp"
#include "Epic/OnlineServices/Connect/zzzz__LoginCallbackInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__AuthenticationListener_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IAuthInterfaceEventListener_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IConnectInterfaceEventListener_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnAuthLogin_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnAuthLogout_def.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__IEOSOnConnectLogin_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Lazy_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind::AuthenticationListener_LoginChangeKind(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind::AuthenticationListener_LoginChangeKind()   {
}
constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind  PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind::Auth{static_cast<int32_t>(0x0)};
constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind  PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind::Connect{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::*)(::System::Object*, ::System::IntPtr)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805352b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::*)(bool, ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804f6ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::*)(bool, ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind, ::System::AsyncCallback*, ::System::Object*)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x180535190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::*)(::System::IAsyncResult*)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::EndInvoke)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803828a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(),
                    {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::Invoke(bool  authenticated, ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind  changeType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, authenticated, changeType);
}
inline ::System::IAsyncResult* PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::BeginInvoke(bool  authenticated, ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind  changeType, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, authenticated, changeType, callback, object);
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler* PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler::AuthenticationListener_AuthenticationChangedEventHandler()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::*)()>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c.__cctor_b__17_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::AuthenticationListener* (::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::*)()>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::__cctor_b__17_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180548e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*>(),
                        {"<.cctor>b__17_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::setStaticF___9(::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*  value)  {
::cordl_internals::setStaticField<::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*>(std::forward<::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*>(value));
}
inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c* PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*, "<>9", ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*>();
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener* PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::__cctor_b__17_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*>(),
                        {"<.cctor>b__17_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c* PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener___c::AuthenticationListener___c()   {
}
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener.add_AuthenticationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener::*)(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::add_AuthenticationChanged)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x180535610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"add_AuthenticationChanged", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener.remove_AuthenticationChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener::*)(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::remove_AuthenticationChanged)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x180535700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"remove_AuthenticationChanged", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayEveryWare::EpicOnlineServices::AuthenticationListener* (*)()>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::get_Instance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180535690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener::*)()>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805355a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener.get_IsAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayEveryWare::EpicOnlineServices::AuthenticationListener::*)()>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805356e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"get_IsAuthenticated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener.TriggerAuthenticationChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener::*)(bool, ::Epic::OnlineServices::Result, ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::TriggerAuthenticationChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x180535440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"TriggerAuthenticationChangedEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Epic::OnlineServices::Result>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener.OnAuthLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener::*)(::Epic::OnlineServices::Auth::LoginCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::OnAuthLogin)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805353d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"OnAuthLogin", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener.OnAuthLogout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener::*)(::Epic::OnlineServices::Auth::LogoutCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::OnAuthLogout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805353f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"OnAuthLogout", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LogoutCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener.OnConnectLogin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener::*)(::Epic::OnlineServices::Connect::LoginCallbackInfo)>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::OnConnectLogin)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180535410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"OnConnectLogin", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginCallbackInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::AuthenticationListener.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::AuthenticationListener::*)()>(&::PlayEveryWare::EpicOnlineServices::AuthenticationListener::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180535360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*& PlayEveryWare::EpicOnlineServices::AuthenticationListener::__cordl_internal_get_AuthenticationChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationChanged;
}
constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler* const& PlayEveryWare::EpicOnlineServices::AuthenticationListener::__cordl_internal_get_AuthenticationChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AuthenticationChanged;
}
constexpr void PlayEveryWare::EpicOnlineServices::AuthenticationListener::__cordl_internal_set_AuthenticationChanged(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AuthenticationChanged = value;
}
constexpr ::System::Nullable_1<bool>& PlayEveryWare::EpicOnlineServices::AuthenticationListener::__cordl_internal_get__isAuthenticated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAuthenticated;
}
constexpr ::System::Nullable_1<bool> const& PlayEveryWare::EpicOnlineServices::AuthenticationListener::__cordl_internal_get__isAuthenticated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isAuthenticated;
}
constexpr void PlayEveryWare::EpicOnlineServices::AuthenticationListener::__cordl_internal_set__isAuthenticated(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isAuthenticated = value;
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener::setStaticF_s_LazyInstance(::System::Lazy_1<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>*  value)  {
::cordl_internals::setStaticField<::System::Lazy_1<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>*, "s_LazyInstance", ::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(std::forward<::System::Lazy_1<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>*>(value));
}
inline ::System::Lazy_1<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>* PlayEveryWare::EpicOnlineServices::AuthenticationListener::getStaticF_s_LazyInstance()  {
return ::cordl_internals::getStaticField<::System::Lazy_1<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>*, "s_LazyInstance", ::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>();
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener::add_AuthenticationChanged(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"add_AuthenticationChanged", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener::remove_AuthenticationChanged(::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"remove_AuthenticationChanged", {}, {::i2c::type_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_AuthenticationChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener* PlayEveryWare::EpicOnlineServices::AuthenticationListener::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(nullptr, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool PlayEveryWare::EpicOnlineServices::AuthenticationListener::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"get_IsAuthenticated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener::TriggerAuthenticationChangedEvent(bool  attemptedState, ::Epic::OnlineServices::Result  attemptResult, ::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind  changeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"TriggerAuthenticationChangedEvent", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Epic::OnlineServices::Result>(), ::i2c::type_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener_LoginChangeKind>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attemptedState, attemptResult, changeType);
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener::OnAuthLogin(::Epic::OnlineServices::Auth::LoginCallbackInfo  loginCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"OnAuthLogin", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LoginCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginCallbackInfo);
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener::OnAuthLogout(::Epic::OnlineServices::Auth::LogoutCallbackInfo  logoutCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"OnAuthLogout", {}, {::i2c::type_of<::Epic::OnlineServices::Auth::LogoutCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logoutCallbackInfo);
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener::OnConnectLogin(::Epic::OnlineServices::Connect::LoginCallbackInfo  loginCallbackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"OnConnectLogin", {}, {::i2c::type_of<::Epic::OnlineServices::Connect::LoginCallbackInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loginCallbackInfo);
}
inline void PlayEveryWare::EpicOnlineServices::AuthenticationListener::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::AuthenticationListener* PlayEveryWare::EpicOnlineServices::AuthenticationListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::AuthenticationListener*>());
}
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener"
constexpr  PlayEveryWare::EpicOnlineServices::AuthenticationListener::operator ::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener"
constexpr ::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener* PlayEveryWare::EpicOnlineServices::AuthenticationListener::i___PlayEveryWare__EpicOnlineServices__IAuthInterfaceEventListener() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IAuthInterfaceEventListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin"
constexpr  PlayEveryWare::EpicOnlineServices::AuthenticationListener::operator ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin* PlayEveryWare::EpicOnlineServices::AuthenticationListener::i___PlayEveryWare__EpicOnlineServices__IEOSOnAuthLogin() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogin*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout"
constexpr  PlayEveryWare::EpicOnlineServices::AuthenticationListener::operator ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout* PlayEveryWare::EpicOnlineServices::AuthenticationListener::i___PlayEveryWare__EpicOnlineServices__IEOSOnAuthLogout() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnAuthLogout*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener"
constexpr  PlayEveryWare::EpicOnlineServices::AuthenticationListener::operator ::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener"
constexpr ::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener* PlayEveryWare::EpicOnlineServices::AuthenticationListener::i___PlayEveryWare__EpicOnlineServices__IConnectInterfaceEventListener() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IConnectInterfaceEventListener*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin"
constexpr  PlayEveryWare::EpicOnlineServices::AuthenticationListener::operator ::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin"
constexpr ::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin* PlayEveryWare::EpicOnlineServices::AuthenticationListener::i___PlayEveryWare__EpicOnlineServices__IEOSOnConnectLogin() noexcept {
return static_cast<::PlayEveryWare::EpicOnlineServices::IEOSOnConnectLogin*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  PlayEveryWare::EpicOnlineServices::AuthenticationListener::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* PlayEveryWare::EpicOnlineServices::AuthenticationListener::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::AuthenticationListener::AuthenticationListener()   {
}
