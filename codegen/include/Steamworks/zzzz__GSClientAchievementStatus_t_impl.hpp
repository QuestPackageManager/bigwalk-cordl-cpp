#pragma once
// IWYU pragma private; include "Steamworks/GSClientAchievementStatus_t.hpp"
#include "Steamworks/zzzz__GSClientAchievementStatus_t_def.hpp"
//  Writing Method size for method: ::Steamworks::GSClientAchievementStatus_t.get_m_pchAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::GSClientAchievementStatus_t::*)()>(&::Steamworks::GSClientAchievementStatus_t::get_m_pchAchievement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GSClientAchievementStatus_t>(),
                        {"get_m_pchAchievement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::GSClientAchievementStatus_t.set_m_pchAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::GSClientAchievementStatus_t::*)(::StringW)>(&::Steamworks::GSClientAchievementStatus_t::set_m_pchAchievement)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x18054f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GSClientAchievementStatus_t>(),
                        {"set_m_pchAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::GSClientAchievementStatus_t::get_m_pchAchievement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GSClientAchievementStatus_t>(),
                        {"get_m_pchAchievement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::GSClientAchievementStatus_t::set_m_pchAchievement(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::GSClientAchievementStatus_t>(),
                        {"set_m_pchAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_SteamID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pchAchievement_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bUnlocked", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GSClientAchievementStatus_t::GSClientAchievementStatus_t(uint64_t  m_SteamID, ::ArrayW<uint8_t>  m_pchAchievement_, bool  m_bUnlocked) noexcept  {
this->m_SteamID = m_SteamID;
this->m_pchAchievement_ = m_pchAchievement_;
this->m_bUnlocked = m_bUnlocked;
}
// Ctor Parameters []
constexpr ::Steamworks::GSClientAchievementStatus_t::GSClientAchievementStatus_t()   {
}
