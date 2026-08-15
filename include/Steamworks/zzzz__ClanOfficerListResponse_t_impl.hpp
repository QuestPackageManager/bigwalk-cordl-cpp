#pragma once
// IWYU pragma private; include "Steamworks/ClanOfficerListResponse_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__ClanOfficerListResponse_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDClan", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cOfficers", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bSuccess", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ClanOfficerListResponse_t::ClanOfficerListResponse_t(::Steamworks::CSteamID  m_steamIDClan, int32_t  m_cOfficers, uint8_t  m_bSuccess) noexcept  {
this->m_steamIDClan = m_steamIDClan;
this->m_cOfficers = m_cOfficers;
this->m_bSuccess = m_bSuccess;
}
// Ctor Parameters []
constexpr ::Steamworks::ClanOfficerListResponse_t::ClanOfficerListResponse_t()   {
}
