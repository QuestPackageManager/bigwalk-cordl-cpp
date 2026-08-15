#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnUpdateParticipantVolumeCallback.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnUpdateParticipantVolumeCallback_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__UpdateParticipantVolumeCallbackInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::*)(::System::Object*, ::System::IntPtr)>(&::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804dc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>)>(&::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::Invoke)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1803e3a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>, ::System::AsyncCallback*, ::System::Object*)>(&::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804ec5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::*)(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>, ::System::IAsyncResult*)>(&::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::EndInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804dc830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(),
                    {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::Invoke(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::System::IAsyncResult* Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::BeginInvoke(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>  data, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, data, callback, object);
}
inline void Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::EndInvoke(::by_ref<::Epic::OnlineServices::RTCAudio::UpdateParticipantVolumeCallbackInfo>  data, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, result);
}
inline ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback* Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnUpdateParticipantVolumeCallback::OnUpdateParticipantVolumeCallback()   {
}
