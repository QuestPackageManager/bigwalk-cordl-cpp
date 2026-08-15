#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/IngestStatOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Stats/zzzz__IngestStatOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__IngestStatOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Stats::IngestStatOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::IngestStatOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>)>(&::Epic::OnlineServices::Stats::IngestStatOptionsInternal::Set)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1804dbf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestStatOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::IngestStatOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::IngestStatOptionsInternal::*)()>(&::Epic::OnlineServices::Stats::IngestStatOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804dbea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestStatOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Stats::IngestStatOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestStatOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::IngestStatOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Stats::IngestStatOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestStatOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>"
constexpr  Epic::OnlineServices::Stats::IngestStatOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>* Epic::OnlineServices::Stats::IngestStatOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Stats__IngestStatOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestStatOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Stats::IngestStatOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Stats::IngestStatOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LocalUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Stats", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TargetUserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Stats::IngestStatOptionsInternal::IngestStatOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_LocalUserId, ::System::IntPtr  m_Stats, uint32_t  m_StatsCount, ::System::IntPtr  m_TargetUserId) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_LocalUserId = m_LocalUserId;
this->m_Stats = m_Stats;
this->m_StatsCount = m_StatsCount;
this->m_TargetUserId = m_TargetUserId;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Stats::IngestStatOptionsInternal::IngestStatOptionsInternal()   {
}
