#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/OnQueryJoinRoomTokenCompleteCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnQueryJoinRoomTokenCompleteCallback_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__QueryJoinRoomTokenCompleteCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>)>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fa740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::Invoke(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::EndInvoke(::by_ref<::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenCompleteCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback* Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::OnQueryJoinRoomTokenCompleteCallback::OnQueryJoinRoomTokenCompleteCallback()   {
}
