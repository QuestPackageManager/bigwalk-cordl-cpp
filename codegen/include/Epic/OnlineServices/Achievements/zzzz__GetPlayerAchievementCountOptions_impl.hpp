#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/GetPlayerAchievementCountOptions.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__GetPlayerAchievementCountOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions::*)()>(&::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions::get_UserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions.set_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions::set_UserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions>(),
                        {"set_UserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions::set_UserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions>(),
                        {"set_UserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_UserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions::GetPlayerAchievementCountOptions(::Epic::OnlineServices::ProductUserId*  _UserId_k__BackingField) noexcept  {
this->_UserId_k__BackingField = _UserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::GetPlayerAchievementCountOptions::GetPlayerAchievementCountOptions()   {
}
