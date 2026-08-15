#pragma once
// IWYU pragma private; include "Epic/OnlineServices/CustomInvites/OnRequestToJoinResponseReceivedCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__OnRequestToJoinResponseReceivedCallback_def.hpp"
#include "Epic/OnlineServices/CustomInvites/zzzz__RequestToJoinResponseReceivedCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180529ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::*)(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::Invoke(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::EndInvoke(::by_ref<::Epic::OnlineServices::CustomInvites::RequestToJoinResponseReceivedCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback* Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::CustomInvites::OnRequestToJoinResponseReceivedCallback::OnRequestToJoinResponseReceivedCallback()   {
}
