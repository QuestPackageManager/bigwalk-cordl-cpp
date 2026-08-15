#pragma once
// IWYU pragma private; include "Epic/OnlineServices/UI/OnShowReportPlayerCallbackInternalImplementation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowReportPlayerCallbackInternalImplementation_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowReportPlayerCallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/UI/zzzz__OnShowReportPlayerCallbackInternal_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation.get_Delegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal* (*)()>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation::get_Delegate)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804df630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation.EntryPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfoInternal>)>(&::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation::EntryPoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1804df5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfoInternal>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation::setStaticF_s_Delegate(::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal*  value)  {
::cordl_internals::setStaticField<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation*>(std::forward<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal*>(value));
}
inline ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal* Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation::getStaticF_s_Delegate()  {
return ::cordl_internals::getStaticField<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal*, "s_Delegate", ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation*>();
}
inline ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal* Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation::get_Delegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation*>(),
                        {"get_Delegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternal*>(nullptr, ___internal_method);
}
inline void Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation::EntryPoint(::by_ref<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfoInternal>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation*>(),
                        {"EntryPoint", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInfoInternal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::UI::OnShowReportPlayerCallbackInternalImplementation::OnShowReportPlayerCallbackInternalImplementation()   {
}
