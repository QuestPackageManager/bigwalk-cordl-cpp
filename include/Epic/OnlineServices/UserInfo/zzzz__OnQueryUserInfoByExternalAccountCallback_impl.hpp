#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoByExternalAccountCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoByExternalAccountCallback_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoByExternalAccountCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo>)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804de170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::Invoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::EndInvoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback* Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallback::OnQueryUserInfoByExternalAccountCallback()   {
}
