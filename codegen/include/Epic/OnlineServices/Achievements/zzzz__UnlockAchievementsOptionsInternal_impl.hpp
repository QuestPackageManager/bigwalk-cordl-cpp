#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/UnlockAchievementsOptionsInternal.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__UnlockAchievementsOptionsInternal_def.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__UnlockAchievementsOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ISettable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::*)(::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>)>(&::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::Set)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18051d1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::*)()>(&::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::Dispose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804e6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::Set(::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal>(),
                        {"Set", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>"
constexpr  Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::operator ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>*()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>"
constexpr ::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>* Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::i___Epic__OnlineServices__ISettable_1___Epic__OnlineServices__Achievements__UnlockAchievementsOptions_()  {
return static_cast<::Epic::OnlineServices::ISettable_1<::Epic::OnlineServices::Achievements::UnlockAchievementsOptions>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ApiVersion", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_UserId", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementIds", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AchievementsCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::UnlockAchievementsOptionsInternal(int32_t  m_ApiVersion, ::System::IntPtr  m_UserId, ::System::IntPtr  m_AchievementIds, uint32_t  m_AchievementsCount) noexcept  {
this->m_ApiVersion = m_ApiVersion;
this->m_UserId = m_UserId;
this->m_AchievementIds = m_AchievementIds;
this->m_AchievementsCount = m_AchievementsCount;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::UnlockAchievementsOptionsInternal::UnlockAchievementsOptionsInternal()   {
}
