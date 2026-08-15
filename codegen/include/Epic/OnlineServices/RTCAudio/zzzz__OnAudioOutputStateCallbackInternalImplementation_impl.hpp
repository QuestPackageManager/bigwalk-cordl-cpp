#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnAudioOutputStateCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioOutputStateCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioOutputStateCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioOutputStateCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e8620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804e85c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternal* Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternal* Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioOutputStateCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnAudioOutputStateCallbackInternalImplementation::OnAudioOutputStateCallbackInternalImplementation()   {
}
