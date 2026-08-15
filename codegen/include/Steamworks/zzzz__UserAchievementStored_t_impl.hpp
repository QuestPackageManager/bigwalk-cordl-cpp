#pragma once
// IWYU pragma private; include "Steamworks/UserAchievementStored_t.hpp"
#include "Steamworks/zzzz__UserAchievementStored_t_def.hpp"
//  Writing Method size for method: ::Steamworks::UserAchievementStored_t.get_m_rgchAchievementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::UserAchievementStored_t::*)()>(&::Steamworks::UserAchievementStored_t::get_m_rgchAchievementName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054afb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UserAchievementStored_t>(),
                        {"get_m_rgchAchievementName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UserAchievementStored_t.set_m_rgchAchievementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::UserAchievementStored_t::*)(::StringW)>(&::Steamworks::UserAchievementStored_t::set_m_rgchAchievementName)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x18054f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UserAchievementStored_t>(),
                        {"set_m_rgchAchievementName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::UserAchievementStored_t::get_m_rgchAchievementName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UserAchievementStored_t>(),
                        {"get_m_rgchAchievementName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::UserAchievementStored_t::set_m_rgchAchievementName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UserAchievementStored_t>(),
                        {"set_m_rgchAchievementName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_nGameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bGroupAchievement", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchAchievementName_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nCurProgress", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nMaxProgress", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::UserAchievementStored_t::UserAchievementStored_t(uint64_t  m_nGameID, bool  m_bGroupAchievement, ::ArrayW<uint8_t>  m_rgchAchievementName_, uint32_t  m_nCurProgress, uint32_t  m_nMaxProgress) noexcept  {
this->m_nGameID = m_nGameID;
this->m_bGroupAchievement = m_bGroupAchievement;
this->m_rgchAchievementName_ = m_rgchAchievementName_;
this->m_nCurProgress = m_nCurProgress;
this->m_nMaxProgress = m_nMaxProgress;
}
// Ctor Parameters []
constexpr ::Steamworks::UserAchievementStored_t::UserAchievementStored_t()   {
}
