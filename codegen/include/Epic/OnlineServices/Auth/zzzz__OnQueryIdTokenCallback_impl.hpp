#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Auth/OnQueryIdTokenCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Auth/zzzz__OnQueryIdTokenCallback_def.hpp"
#include "Epic/OnlineServices/Auth/zzzz__QueryIdTokenCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::OnQueryIdTokenCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Auth::OnQueryIdTokenCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::OnQueryIdTokenCallback::*)(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo>)>(&::Epic::OnlineServices::Auth::OnQueryIdTokenCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Auth::OnQueryIdTokenCallback::*)(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Auth::OnQueryIdTokenCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805293f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Auth::OnQueryIdTokenCallback::*)(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Auth::OnQueryIdTokenCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Auth::OnQueryIdTokenCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Auth::OnQueryIdTokenCallback::Invoke(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Auth::OnQueryIdTokenCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Auth::OnQueryIdTokenCallback::EndInvoke(::by_ref<::Epic::OnlineServices::Auth::QueryIdTokenCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback* Epic::OnlineServices::Auth::OnQueryIdTokenCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Auth::OnQueryIdTokenCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Auth::OnQueryIdTokenCallback::OnQueryIdTokenCallback()   {
}
