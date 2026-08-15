#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/OnUpdateReceivingCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnUpdateReceivingCallback_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__UpdateReceivingCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::*)(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo>)>(&::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::*)(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804eca90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::*)(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::Invoke(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::EndInvoke(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback* Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallback::OnUpdateReceivingCallback()   {
}
