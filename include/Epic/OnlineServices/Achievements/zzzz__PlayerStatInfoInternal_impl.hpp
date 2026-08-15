#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/PlayerStatInfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__PlayerStatInfoInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__PlayerStatInfo_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::PlayerStatInfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::PlayerStatInfoInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::PlayerStatInfo>)>(&::Epic::OnlineServices::Achievements::PlayerStatInfoInternal::Get)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805331c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::PlayerStatInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::PlayerStatInfoInternal::Get(::by_ref<::Epic::OnlineServices::Achievements::PlayerStatInfo>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerStatInfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::PlayerStatInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>"
constexpr  Epic::OnlineServices::Achievements::PlayerStatInfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>* Epic::OnlineServices::Achievements::PlayerStatInfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__PlayerStatInfo_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerStatInfo>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentValue", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ThresholdValue", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::PlayerStatInfoInternal::PlayerStatInfoInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_Name, int32_t  m_CurrentValue, int32_t  m_ThresholdValue) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_Name = m_Name;
this->m_CurrentValue = m_CurrentValue;
this->m_ThresholdValue = m_ThresholdValue;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::PlayerStatInfoInternal::PlayerStatInfoInternal()   {
}
