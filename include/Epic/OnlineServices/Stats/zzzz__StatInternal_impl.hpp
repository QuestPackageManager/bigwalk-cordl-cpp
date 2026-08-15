#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Stats/StatInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Stats/zzzz__StatInternal_def.hpp"
#include "Epic/OnlineServices/Stats/zzzz__Stat_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Stats::StatInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Stats::StatInternal::*)(::by_ref<::Epic::OnlineServices::Stats::Stat>)>(&::Epic::OnlineServices::Stats::StatInternal::Get)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804e0e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::Stat>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Stats::StatInternal::Get(::by_ref<::Epic::OnlineServices::Stats::Stat>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Stats::StatInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Stats::Stat>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>"
constexpr  Epic::OnlineServices::Stats::StatInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>* Epic::OnlineServices::Stats::StatInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Stats__Stat_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Stats::Stat>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StartTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EndTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Stats::StatInternal::StatInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Name, int64_t  m_StartTime, int64_t  m_EndTime, int32_t  m_Value) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Name = m_Name;
this->m_StartTime = m_StartTime;
this->m_EndTime = m_EndTime;
this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Stats::StatInternal::StatInternal()   {
}
