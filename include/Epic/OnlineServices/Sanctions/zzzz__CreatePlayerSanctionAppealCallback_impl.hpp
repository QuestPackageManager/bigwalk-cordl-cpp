#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sanctions/CreatePlayerSanctionAppealCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealCallback_def.hpp"
#include "Epic/OnlineServices/Sanctions/zzzz__CreatePlayerSanctionAppealCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::*)(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfo>)>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::*)(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e75d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::*)(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::Invoke(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::EndInvoke(::by_ref<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback* Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sanctions::CreatePlayerSanctionAppealCallback::CreatePlayerSanctionAppealCallback()   {
}
