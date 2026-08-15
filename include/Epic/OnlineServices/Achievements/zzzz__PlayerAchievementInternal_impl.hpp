#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/PlayerAchievementInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__PlayerAchievementInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__PlayerAchievement_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::PlayerAchievementInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::PlayerAchievementInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::PlayerAchievement>)>(&::Epic::OnlineServices::Achievements::PlayerAchievementInternal::Get)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x180532ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerAchievementInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::PlayerAchievement>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::PlayerAchievementInternal::Get(::by_ref<::Epic::OnlineServices::Achievements::PlayerAchievement>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::PlayerAchievementInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::PlayerAchievement>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>"
constexpr  Epic::OnlineServices::Achievements::PlayerAchievementInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>* Epic::OnlineServices::Achievements::PlayerAchievementInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__PlayerAchievement_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::PlayerAchievement>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Progress", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnlockTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatInfoCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StatInfo", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Description", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IconURL", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FlavorText", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::PlayerAchievementInternal::PlayerAchievementInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId, double_t  m_Progress, int64_t  m_UnlockTime, int32_t  m_StatInfoCount, ::System::IntPtr  m_StatInfo, ::System::IntPtr  m_DisplayName, ::System::IntPtr  m_Description, ::System::IntPtr  m_IconURL, ::System::IntPtr  m_FlavorText) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AchievementId = m_AchievementId;
this->m_Progress = m_Progress;
this->m_UnlockTime = m_UnlockTime;
this->m_StatInfoCount = m_StatInfoCount;
this->m_StatInfo = m_StatInfo;
this->m_DisplayName = m_DisplayName;
this->m_Description = m_Description;
this->m_IconURL = m_IconURL;
this->m_FlavorText = m_FlavorText;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::PlayerAchievementInternal::PlayerAchievementInternal()   {
}
