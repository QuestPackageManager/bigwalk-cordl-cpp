#pragma once
// IWYU pragma private; include "Steamworks/UserStatsReceived_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__UserStatsReceived_t_def.hpp"
constexpr uint64_t& Steamworks::UserStatsReceived_t::__cordl_internal_get_m_nGameID()  {
return this->___m_nGameID;
}
constexpr uint64_t const& Steamworks::UserStatsReceived_t::__cordl_internal_get_m_nGameID() const {
return this->___m_nGameID;
}
constexpr void Steamworks::UserStatsReceived_t::__cordl_internal_set_m_nGameID(uint64_t  value)  {
this->___m_nGameID = value;
}
constexpr ::Steamworks::EResult& Steamworks::UserStatsReceived_t::__cordl_internal_get_m_eResult()  {
return this->___m_eResult;
}
constexpr ::Steamworks::EResult const& Steamworks::UserStatsReceived_t::__cordl_internal_get_m_eResult() const {
return this->___m_eResult;
}
constexpr void Steamworks::UserStatsReceived_t::__cordl_internal_set_m_eResult(::Steamworks::EResult  value)  {
this->___m_eResult = value;
}
constexpr ::Steamworks::CSteamID& Steamworks::UserStatsReceived_t::__cordl_internal_get_m_steamIDUser()  {
return this->___m_steamIDUser;
}
constexpr ::Steamworks::CSteamID const& Steamworks::UserStatsReceived_t::__cordl_internal_get_m_steamIDUser() const {
return this->___m_steamIDUser;
}
constexpr void Steamworks::UserStatsReceived_t::__cordl_internal_set_m_steamIDUser(::Steamworks::CSteamID  value)  {
this->___m_steamIDUser = value;
}
// Ctor Parameters [CppParam { name: "m_nGameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::UserStatsReceived_t::UserStatsReceived_t(uint64_t  m_nGameID, ::Steamworks::EResult  m_eResult, ::Steamworks::CSteamID  m_steamIDUser) noexcept  {
this->m_nGameID = m_nGameID;
this->m_eResult = m_eResult;
this->m_steamIDUser = m_steamIDUser;
}
// Ctor Parameters []
constexpr ::Steamworks::UserStatsReceived_t::UserStatsReceived_t()   {
}
