#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackV2InfoInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackV2InfoInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__OnAchievementsUnlockedCallbackV2Info_def.hpp"
#include "Epic/OnlineServices/zzzz__ICallbackInfoInternal_def.hpp"
#include "Epic/OnlineServices/zzzz__IGettable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal.get_ClientDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::*)()>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::get_ClientDataPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>)>(&::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::Get)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18052ede0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::get_ClientDataPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>(),
                        {"get_ClientDataPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::Get(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>(),
                        {"Get", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr  Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::operator ::Epic::OnlineServices::ICallbackInfoInternal*()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ICallbackInfoInternal"
constexpr ::Epic::OnlineServices::ICallbackInfoInternal* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::i___Epic__OnlineServices__ICallbackInfoInternal()  {
return static_cast<::Epic::OnlineServices::ICallbackInfoInternal*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>"
constexpr  Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::operator ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>*()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>"
constexpr ::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>* Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::i___Epic__OnlineServices__IGettable_1___Epic__OnlineServices__Achievements__OnAchievementsUnlockedCallbackV2Info_()  {
return static_cast<::Epic::OnlineServices::IGettable_1<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Info>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ClientData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UnlockTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::OnAchievementsUnlockedCallbackV2InfoInternal(::System::IntPtr  m_ClientData, ::System::IntPtr  m_UserId, ::System::IntPtr  m_AchievementId, int64_t  m_UnlockTime) noexcept  {
this->m_ClientData = m_ClientData;
this->m_UserId = m_UserId;
this->m_AchievementId = m_AchievementId;
this->m_UnlockTime = m_UnlockTime;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal::OnAchievementsUnlockedCallbackV2InfoInternal()   {
}
