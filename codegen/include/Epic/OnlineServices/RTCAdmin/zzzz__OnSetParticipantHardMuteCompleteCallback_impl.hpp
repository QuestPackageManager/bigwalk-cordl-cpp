#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/OnSetParticipantHardMuteCompleteCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnSetParticipantHardMuteCompleteCallback_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__SetParticipantHardMuteCompleteCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo>)>(&::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fb4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::*)(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::Invoke(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::EndInvoke(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback* Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallback::OnSetParticipantHardMuteCompleteCallback()   {
}
