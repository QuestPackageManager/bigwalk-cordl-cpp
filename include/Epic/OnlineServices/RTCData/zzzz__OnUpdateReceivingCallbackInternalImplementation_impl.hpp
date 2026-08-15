#pragma once
// IWYU pragma private; include "Epic/OnlineServices/RTCData/OnUpdateReceivingCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnUpdateReceivingCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__OnUpdateReceivingCallbackInternal_def.hpp"
#include "Epic/OnlineServices/RTCData/zzzz__UpdateReceivingCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal* (*)()>(&::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ec730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfoInternal>)>(&::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1804ec6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal* Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal* Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::RTCData::UpdateReceivingCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::RTCData::OnUpdateReceivingCallbackInternalImplementation::OnUpdateReceivingCallbackInternalImplementation()   {
}
