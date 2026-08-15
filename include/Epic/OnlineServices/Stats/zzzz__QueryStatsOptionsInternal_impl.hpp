#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/QueryStatsOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Stats/zzzz__QueryStatsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__QueryStatsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Stats::QueryStatsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::QueryStatsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>)>(&::Epic::OnlineServices::Stats::QueryStatsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1804dfea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::QueryStatsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::QueryStatsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::QueryStatsOptionsInternal::*)()>(&::Epic::OnlineServices::Stats::QueryStatsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804dfe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::QueryStatsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Stats::QueryStatsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::QueryStatsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::QueryStatsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Stats::QueryStatsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::QueryStatsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>"
constexpr  Epic::OnlineServices::Stats::QueryStatsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>* Epic::OnlineServices::Stats::QueryStatsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Stats__QueryStatsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::QueryStatsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Stats::QueryStatsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Stats::QueryStatsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatNames", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatNamesCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Stats::QueryStatsOptionsInternal::QueryStatsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, int64_t  m_StartTime, int64_t  m_EndTime, ::System::IntPtr  m_StatNames, uint32_t  m_StatNamesCount, ::System::IntPtr  m_TargetUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_StartTime = m_StartTime;
this->m_EndTime = m_EndTime;
this->m_StatNames = m_StatNames;
this->m_StatNamesCount = m_StatNamesCount;
this->m_TargetUserId = m_TargetUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Stats::QueryStatsOptionsInternal::QueryStatsOptionsInternal()   {
}
