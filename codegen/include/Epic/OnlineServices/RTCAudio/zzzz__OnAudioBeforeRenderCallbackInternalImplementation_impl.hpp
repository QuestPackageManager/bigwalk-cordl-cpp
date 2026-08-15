#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAudio/OnAudioBeforeRenderCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioBeforeRenderCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__AudioBeforeRenderCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/RTCAudio/zzzz__OnAudioBeforeRenderCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e7d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804e7ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternal* Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternal* Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAudio::AudioBeforeRenderCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAudio::OnAudioBeforeRenderCallbackInternalImplementation::OnAudioBeforeRenderCallbackInternalImplementation()   {
}
