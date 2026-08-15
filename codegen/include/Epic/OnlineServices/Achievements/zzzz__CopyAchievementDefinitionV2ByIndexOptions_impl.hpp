#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyAchievementDefinitionV2ByIndexOptions.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyAchievementDefinitionV2ByIndexOptions_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions.get_AchievementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions::*)()>(&::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions::get_AchievementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803474c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>(),
                        {"get_AchievementIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions.set_AchievementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions::set_AchievementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180379030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>(),
                        {"set_AchievementIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline uint32_t Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions::get_AchievementIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>(),
                        {"get_AchievementIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions::set_AchievementIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions>(),
                        {"set_AchievementIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_AchievementIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions::CopyAchievementDefinitionV2ByIndexOptions(uint32_t  _AchievementIndex_k__BackingField) noexcept  {
this->_AchievementIndex_k__BackingField = _AchievementIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::CopyAchievementDefinitionV2ByIndexOptions::CopyAchievementDefinitionV2ByIndexOptions()   {
}
