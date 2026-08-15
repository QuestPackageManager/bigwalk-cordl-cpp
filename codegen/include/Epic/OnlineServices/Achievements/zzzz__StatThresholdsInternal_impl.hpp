#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/StatThresholdsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__StatThresholdsInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__StatThresholds_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::StatThresholdsInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::StatThresholdsInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::StatThresholds>)>(&::Epic::OnlineServices::Achievements::StatThresholdsInternal::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180517910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholdsInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::StatThresholds>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::StatThresholdsInternal::Get(::by_ref<::Epic::OnlineServices::Achievements::StatThresholds>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::StatThresholdsInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::StatThresholds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>"
constexpr  Epic::OnlineServices::Achievements::StatThresholdsInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>* Epic::OnlineServices::Achievements::StatThresholdsInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__StatThresholds_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::StatThresholds>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Threshold", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::StatThresholdsInternal::StatThresholdsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Name, int32_t  m_Threshold) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Name = m_Name;
this->m_Threshold = m_Threshold;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::StatThresholdsInternal::StatThresholdsInternal()   {
}
