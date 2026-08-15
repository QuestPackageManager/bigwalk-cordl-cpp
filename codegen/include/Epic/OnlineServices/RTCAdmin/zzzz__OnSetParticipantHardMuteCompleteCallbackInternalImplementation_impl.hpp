#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCAdmin/OnSetParticipantHardMuteCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnSetParticipantHardMuteCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__OnSetParticipantHardMuteCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCAdmin/zzzz__SetParticipantHardMuteCompleteCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804fb350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804fb2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal* Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal* Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCAdmin::SetParticipantHardMuteCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCAdmin::OnSetParticipantHardMuteCompleteCallbackInternalImplementation::OnSetParticipantHardMuteCompleteCallbackInternalImplementation()   {
}
