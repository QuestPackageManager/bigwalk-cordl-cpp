#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/OnUpdateSendingCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnUpdateSendingCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnUpdateSendingCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__UpdateSendingCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ecf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ecdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal* Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal* Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateSendingCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCData::OnUpdateSendingCallbackInternalImplementation::OnUpdateSendingCallbackInternalImplementation()   {
}
