#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/UnlockedAchievement.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__UnlockedAchievement_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::UnlockedAchievement.get_AchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Achievements::UnlockedAchievement::*)()>(&::Epic::OnlineServices::Achievements::UnlockedAchievement::get_AchievementId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievement>(),
                        {"get_AchievementId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::UnlockedAchievement.set_AchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::UnlockedAchievement::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Achievements::UnlockedAchievement::set_AchievementId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievement>(),
                        {"set_AchievementId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::UnlockedAchievement.get_UnlockTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Epic::OnlineServices::Achievements::UnlockedAchievement::*)()>(&::Epic::OnlineServices::Achievements::UnlockedAchievement::get_UnlockTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bda90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievement>(),
                        {"get_UnlockTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::UnlockedAchievement.set_UnlockTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::UnlockedAchievement::*)(::System::Nullable_1<::System::DateTimeOffset>)>(&::Epic::OnlineServices::Achievements::UnlockedAchievement::set_UnlockTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1804bdad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievement>(),
                        {"set_UnlockTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Achievements::UnlockedAchievement::get_AchievementId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievement>(),
                        {"get_AchievementId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::UnlockedAchievement::set_AchievementId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievement>(),
                        {"set_AchievementId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Epic::OnlineServices::Achievements::UnlockedAchievement::get_UnlockTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievement>(),
                        {"get_UnlockTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::UnlockedAchievement::set_UnlockTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::UnlockedAchievement>(),
                        {"set_UnlockTime", {}, {::i2c::type_of<::System::Nullable_1<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AchievementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_UnlockTime_k__BackingField", ty: "::System::Nullable_1<::System::DateTimeOffset>", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::UnlockedAchievement::UnlockedAchievement(::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField, ::System::Nullable_1<::System::DateTimeOffset>  _UnlockTime_k__BackingField) noexcept  {
this->_AchievementId_k__BackingField = _AchievementId_k__BackingField;
this->_UnlockTime_k__BackingField = _UnlockTime_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::UnlockedAchievement::UnlockedAchievement()   {
}
