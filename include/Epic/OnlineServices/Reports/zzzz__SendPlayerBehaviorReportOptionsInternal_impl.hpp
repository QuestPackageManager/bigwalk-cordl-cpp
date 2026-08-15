#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Reports/SendPlayerBehaviorReportOptionsInternal.hpp"
#include "Epic/OnlineServices/Reports/zzzz__PlayerReportsCategory_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Reports/zzzz__SendPlayerBehaviorReportOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Reports/zzzz__SendPlayerBehaviorReportOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>)>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1804f1cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::*)()>(&::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804f1c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>"
constexpr  Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>* Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Reports__SendPlayerBehaviorReportOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReporterUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ReportedUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Category", ty: "::Epic::OnlineServices::Reports::PlayerReportsCategory", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Message", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Context", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::SendPlayerBehaviorReportOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_ReporterUserId, ::System::IntPtr  m_ReportedUserId, ::Epic::OnlineServices::Reports::PlayerReportsCategory  m_Category, ::System::IntPtr  m_Message, ::System::IntPtr  m_Context) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_ReporterUserId = m_ReporterUserId;
this->m_ReportedUserId = m_ReportedUserId;
this->m_Category = m_Category;
this->m_Message = m_Message;
this->m_Context = m_Context;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Reports::SendPlayerBehaviorReportOptionsInternal::SendPlayerBehaviorReportOptionsInternal()   {
}
