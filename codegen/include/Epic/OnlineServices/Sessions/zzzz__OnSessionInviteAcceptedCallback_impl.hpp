#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Sessions/OnSessionInviteAcceptedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__OnSessionInviteAcceptedCallback_def.hpp"
#include "Epic/OnlineServices/Sessions/zzzz__SessionInviteAcceptedCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo>)>(&::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804eb340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::*)(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::Invoke(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::Sessions::SessionInviteAcceptedCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback* Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback::OnSessionInviteAcceptedCallback()   {
}
