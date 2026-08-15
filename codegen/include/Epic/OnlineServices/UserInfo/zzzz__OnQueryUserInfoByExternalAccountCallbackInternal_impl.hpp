#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UserInfo/OnQueryUserInfoByExternalAccountCallbackInternal.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__OnQueryUserInfoByExternalAccountCallbackInternal_def.hpp"
#include "Epic/OnlineServices/UserInfo/zzzz__QueryUserInfoByExternalAccountCallbackInfoInternal_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804de110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::*)(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(),
                    {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::Invoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::BeginInvoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::EndInvoke(::by_ref<::Epic::OnlineServices::UserInfo::QueryUserInfoByExternalAccountCallbackInfoInternal>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal* Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UserInfo::OnQueryUserInfoByExternalAccountCallbackInternal::OnQueryUserInfoByExternalAccountCallbackInternal()   {
}
