#pragma once
// IWYU pragma private; include "Steamworks/UserAchievementIconFetched_t.hpp"
#include "Steamworks/zzzz__CGameID_impl.hpp"
#include "Steamworks/zzzz__UserAchievementIconFetched_t_def.hpp"
//  Writing Method size for method: ::Steamworks::UserAchievementIconFetched_t.get_m_rgchAchievementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::UserAchievementIconFetched_t::*)()>(&::Steamworks::UserAchievementIconFetched_t::get_m_rgchAchievementName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18054f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UserAchievementIconFetched_t>(),
                        {"get_m_rgchAchievementName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::UserAchievementIconFetched_t.set_m_rgchAchievementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::UserAchievementIconFetched_t::*)(::StringW)>(&::Steamworks::UserAchievementIconFetched_t::set_m_rgchAchievementName)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0x18054f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UserAchievementIconFetched_t>(),
                        {"set_m_rgchAchievementName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Steamworks::UserAchievementIconFetched_t::get_m_rgchAchievementName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UserAchievementIconFetched_t>(),
                        {"get_m_rgchAchievementName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Steamworks::UserAchievementIconFetched_t::set_m_rgchAchievementName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::UserAchievementIconFetched_t>(),
                        {"set_m_rgchAchievementName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_nGameID", ty: "::Steamworks::CGameID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgchAchievementName_", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bAchieved", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nIconHandle", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::UserAchievementIconFetched_t::UserAchievementIconFetched_t(::Steamworks::CGameID  m_nGameID, ::ArrayW<uint8_t>  m_rgchAchievementName_, bool  m_bAchieved, int32_t  m_nIconHandle) noexcept  {
this->m_nGameID = m_nGameID;
this->m_rgchAchievementName_ = m_rgchAchievementName_;
this->m_bAchieved = m_bAchieved;
this->m_nIconHandle = m_nIconHandle;
}
// Ctor Parameters []
constexpr ::Steamworks::UserAchievementIconFetched_t::UserAchievementIconFetched_t()   {
}
