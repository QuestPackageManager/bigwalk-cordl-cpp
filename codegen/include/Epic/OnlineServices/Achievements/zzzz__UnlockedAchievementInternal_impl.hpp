#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/UnlockedAchievementInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__UnlockedAchievementInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__UnlockedAchievement_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::UnlockedAchievementInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::UnlockedAchievementInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::UnlockedAchievement>)>(&::Epic::OnlineServices::Achievements::UnlockedAchievementInternal::Get)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180534550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievementInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::UnlockedAchievement>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::UnlockedAchievementInternal::Get(::by_ref<::Epic::OnlineServices::Achievements::UnlockedAchievement>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievementInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::UnlockedAchievement>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>"
constexpr  Epic::OnlineServices::Achievements::UnlockedAchievementInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>* Epic::OnlineServices::Achievements::UnlockedAchievementInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__UnlockedAchievement_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::UnlockedAchievement>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnlockTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::UnlockedAchievementInternal::UnlockedAchievementInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_AchievementId, int64_t  m_UnlockTime) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_AchievementId = m_AchievementId;
this->m_UnlockTime = m_UnlockTime;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::UnlockedAchievementInternal::UnlockedAchievementInternal()   {
}
