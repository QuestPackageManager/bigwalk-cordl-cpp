#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/IngestDataInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Stats/zzzz__IngestDataInternal_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__IngestData_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Stats::IngestDataInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::IngestDataInternal::*)(::by_ref<::Epic::OnlineServices::Stats::IngestData>)>(&::Epic::OnlineServices::Stats::IngestDataInternal::Set)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1804dbca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestDataInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::IngestData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Stats::IngestDataInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::IngestDataInternal::*)()>(&::Epic::OnlineServices::Stats::IngestDataInternal::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804d7300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestDataInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Stats::IngestDataInternal::Set(::by_ref<::Epic::OnlineServices::Stats::IngestData>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestDataInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::IngestData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Stats::IngestDataInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::IngestDataInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestData>"
constexpr  Epic::OnlineServices::Stats::IngestDataInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestData>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestData>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestData>* Epic::OnlineServices::Stats::IngestDataInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Stats__IngestData_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Stats::IngestData>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Stats::IngestDataInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Stats::IngestDataInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IngestAmount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Stats::IngestDataInternal::IngestDataInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_StatName, int32_t  m_IngestAmount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_StatName = m_StatName;
this->m_IngestAmount = m_IngestAmount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Stats::IngestDataInternal::IngestDataInternal()   {
}
