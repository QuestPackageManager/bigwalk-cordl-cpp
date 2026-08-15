#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/DefinitionV2Internal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__DefinitionV2Internal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__DefinitionV2_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::DefinitionV2Internal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::DefinitionV2Internal::*)(::by_ref<::Epic::OnlineServices::Achievements::DefinitionV2>)>(&::Epic::OnlineServices::Achievements::DefinitionV2Internal::Get)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x18052e420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::DefinitionV2Internal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::DefinitionV2>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::DefinitionV2Internal::Get(::by_ref<::Epic::OnlineServices::Achievements::DefinitionV2>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::DefinitionV2Internal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::DefinitionV2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>"
constexpr  Epic::OnlineServices::Achievements::DefinitionV2Internal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>* Epic::OnlineServices::Achievements::DefinitionV2Internal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__DefinitionV2_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::DefinitionV2>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnlockedDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnlockedDescription", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LockedDisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LockedDescription", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FlavorText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnlockedIconURL", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LockedIconURL", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsHidden", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatThresholdsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatThresholds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::DefinitionV2Internal::DefinitionV2Internal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId, ::System::IntPtr  m_UnlockedDisplayName, ::System::IntPtr  m_UnlockedDescription, ::System::IntPtr  m_LockedDisplayName, ::System::IntPtr  m_LockedDescription, ::System::IntPtr  m_FlavorText, ::System::IntPtr  m_UnlockedIconURL, ::System::IntPtr  m_LockedIconURL, int32_t  m_IsHidden, uint32_t  m_StatThresholdsCount, ::System::IntPtr  m_StatThresholds) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AchievementId = m_AchievementId;
this->m_UnlockedDisplayName = m_UnlockedDisplayName;
this->m_UnlockedDescription = m_UnlockedDescription;
this->m_LockedDisplayName = m_LockedDisplayName;
this->m_LockedDescription = m_LockedDescription;
this->m_FlavorText = m_FlavorText;
this->m_UnlockedIconURL = m_UnlockedIconURL;
this->m_LockedIconURL = m_LockedIconURL;
this->m_IsHidden = m_IsHidden;
this->m_StatThresholdsCount = m_StatThresholdsCount;
this->m_StatThresholds = m_StatThresholds;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::DefinitionV2Internal::DefinitionV2Internal()   {
}
