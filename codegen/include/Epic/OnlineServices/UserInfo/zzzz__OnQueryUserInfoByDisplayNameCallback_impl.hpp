#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoByDisplayNameCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoByDisplayNameCallback_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoByDisplayNameCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ddf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::Invoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::EndInvoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByDisplayNameCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback* Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByDisplayNameCallback::OnQueryUserInfoByDisplayNameCallback()   {
}
