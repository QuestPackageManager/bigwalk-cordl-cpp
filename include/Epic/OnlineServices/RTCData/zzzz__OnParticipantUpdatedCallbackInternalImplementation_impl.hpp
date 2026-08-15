#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/OnParticipantUpdatedCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnParticipantUpdatedCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnParticipantUpdatedCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__ParticipantUpdatedCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e9790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804e9590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternal* Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternal* Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::ParticipantUpdatedCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCData::OnParticipantUpdatedCallbackInternalImplementation::OnParticipantUpdatedCallbackInternalImplementation()   {
}
