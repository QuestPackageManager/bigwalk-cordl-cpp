#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoCallback_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo>)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804de3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::Invoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::EndInvoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback* Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::OnQueryUserInfoCallback::OnQueryUserInfoCallback()   {
}
