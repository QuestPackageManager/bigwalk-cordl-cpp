#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyUnlockedAchievementByAchievementIdOptions.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyUnlockedAchievementByAchievementIdOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
#include "Epic/OnlineServices/zzzz__Utf8String_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::*)()>(&::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::get_UserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::set_UserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>(),
                        {"set_UserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions.get_AchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Utf8String* (::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::*)()>(&::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::get_AchievementId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803ed930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>(),
                        {"get_AchievementId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions.set_AchievementId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::*)(::Epic::OnlineServices::Utf8String*)>(&::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::set_AchievementId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>(),
                        {"set_AchievementId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::set_UserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>(),
                        {"set_UserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::Utf8String* Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::get_AchievementId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>(),
                        {"get_AchievementId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Utf8String*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::set_AchievementId(::Epic::OnlineServices::Utf8String*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions>(),
                        {"set_AchievementId", {}, {::i2c::type_of<::Epic::OnlineServices::Utf8String*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AchievementId_k__BackingField", ty: "::Epic::OnlineServices::Utf8String*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::CopyUnlockedAchievementByAchievementIdOptions(::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField, ::Epic::OnlineServices::Utf8String*  _AchievementId_k__BackingField) noexcept  {
this->_UserId_k__BackingField = _UserId_k__BackingField;
this->_AchievementId_k__BackingField = _AchievementId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::CopyUnlockedAchievementByAchievementIdOptions::CopyUnlockedAchievementByAchievementIdOptions()   {
}
