#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/ReportsInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/Reports/zzzz__ReportsInterface_def.hpp"
#include "Epic/OnlineServices/Reports/zzzz__OnSendPlayerBehaviorReportCompleteCallback_def.hpp"
#include "Epic/OnlineServices/Reports/zzzz__SendPlayerBehaviorReportOptions_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Reports::ReportsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::ReportsInterface::*)()>(&::Epic::OnlineServices::Reports::ReportsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::ReportsInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::ReportsInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::ReportsInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::Reports::ReportsInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::ReportsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::ReportsInterface.SendPlayerBehaviorReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::ReportsInterface::*)(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>, ::System::Object*, ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallback*)>(&::Epic::OnlineServices::Reports::ReportsInterface::SendPlayerBehaviorReport)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1804f1210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::ReportsInterface*>(),
                        {"SendPlayerBehaviorReport", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Reports::ReportsInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::ReportsInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::Reports::ReportsInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::ReportsInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline void Epic::OnlineServices::Reports::ReportsInterface::SendPlayerBehaviorReport(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::ReportsInterface*>(),
                        {"SendPlayerBehaviorReport", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::Reports::OnSendPlayerBehaviorReportCompleteCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Reports::ReportsInterface* Epic::OnlineServices::Reports::ReportsInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Reports::ReportsInterface*>());
}
inline ::Epic::OnlineServices::Reports::ReportsInterface* Epic::OnlineServices::Reports::ReportsInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::Reports::ReportsInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Reports::ReportsInterface::ReportsInterface()   {
}
