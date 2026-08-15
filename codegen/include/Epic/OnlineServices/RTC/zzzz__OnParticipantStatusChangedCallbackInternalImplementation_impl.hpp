#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTC/OnParticipantStatusChangedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnParticipantStatusChangedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__OnParticipantStatusChangedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTC/zzzz__ParticipantStatusChangedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal* (*)()>(&::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804f9cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>)>(&::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804f9c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal* Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal* Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTC::ParticipantStatusChangedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTC::OnParticipantStatusChangedCallbackInternalImplementation::OnParticipantStatusChangedCallbackInternalImplementation()   {
}
