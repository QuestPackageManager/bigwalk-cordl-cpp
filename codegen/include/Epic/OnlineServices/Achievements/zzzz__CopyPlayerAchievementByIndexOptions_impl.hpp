#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/CopyPlayerAchievementByIndexOptions.hpp"
#include "Epic/OnlineServices/Achievements/zzzz__CopyPlayerAchievementByIndexOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__ProductUserId_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions.get_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::*)()>(&::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::get_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a88d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions.set_TargetUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::set_TargetUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180378fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions.get_AchievementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::*)()>(&::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::get_AchievementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"get_AchievementIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions.set_AchievementIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::*)(uint32_t)>(&::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::set_AchievementIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804bd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"set_AchievementIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::ProductUserId* (::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::*)()>(&::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::get_LocalUserId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::*)(::Epic::OnlineServices::ProductUserId*)>(&::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::set_LocalUserId)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::get_TargetUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"get_TargetUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::set_TargetUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"set_TargetUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::get_AchievementIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"get_AchievementIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::set_AchievementIndex(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"set_AchievementIndex", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Epic::OnlineServices::ProductUserId* Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::ProductUserId*>(*this, ___internal_method);
}
inline void Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::set_LocalUserId(::Epic::OnlineServices::ProductUserId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::Epic::OnlineServices::ProductUserId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_TargetUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_AchievementIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LocalUserId_k__BackingField", ty: "::Epic::OnlineServices::ProductUserId*", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::CopyPlayerAchievementByIndexOptions(::Epic::OnlineServices::ProductUserId*  _TargetUserId_k__BackingField, uint32_t  _AchievementIndex_k__BackingField, ::Epic::OnlineServices::ProductUserId*  _LocalUserId_k__BackingField) noexcept  {
this->_TargetUserId_k__BackingField = _TargetUserId_k__BackingField;
this->_AchievementIndex_k__BackingField = _AchievementIndex_k__BackingField;
this->_LocalUserId_k__BackingField = _LocalUserId_k__BackingField;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::Achievements::CopyPlayerAchievementByIndexOptions::CopyPlayerAchievementByIndexOptions()   {
}
