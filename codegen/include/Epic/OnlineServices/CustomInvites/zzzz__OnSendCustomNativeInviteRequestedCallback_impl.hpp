#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnSendCustomNativeInviteRequestedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnSendCustomNativeInviteRequestedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__SendCustomNativeInviteRequestedCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18052a380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::*)(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::Invoke(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::SendCustomNativeInviteRequestedCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback* Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnSendCustomNativeInviteRequestedCallback::OnSendCustomNativeInviteRequestedCallback()   {
}
