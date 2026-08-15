#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnAudioDevicesChangedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioDevicesChangedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioDevicesChangedCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioDevicesChangedCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e81a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e8140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal* Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal* Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioDevicesChangedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnAudioDevicesChangedCallbackInternalImplementation::OnAudioDevicesChangedCallbackInternalImplementation()   {
}
