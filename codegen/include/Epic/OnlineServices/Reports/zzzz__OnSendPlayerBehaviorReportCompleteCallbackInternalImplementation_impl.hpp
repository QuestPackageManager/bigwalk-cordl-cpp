#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/Reports/zzzz__OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/Reports/zzzz__OnSendPlayerBehaviorReportCompleteCallbackInternal_def.hpp"
#include "Epic/OnlineServices/Reports/zzzz__SendPlayerBehaviorReportCompleteCallbackInfoInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal* (*)()>(&::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804ead20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfoInternal>)>(&::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804eacc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal* Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal* Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportCompleteCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation::OnSendPlayerBehaviorReportCompleteCallbackInternalImplementation()   {
}
