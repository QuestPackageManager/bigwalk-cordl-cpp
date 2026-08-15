#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnAudioBeforeSendCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioBeforeSendCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioBeforeSendCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioBeforeSendCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e7f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804e7ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal* Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal* Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeSendCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnAudioBeforeSendCallbackInternalImplementation::OnAudioBeforeSendCallbackInternalImplementation()   {
}
