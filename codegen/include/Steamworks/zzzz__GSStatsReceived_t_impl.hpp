#pragma once
// IWYU pragma private; include "Steamworks/GSStatsReceived_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__GSStatsReceived_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDUser", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::GSStatsReceived_t::GSStatsReceived_t(::Steamworks::EResult  m_eResult, ::Steamworks::CSteamID  m_steamIDUser) noexcept  {
this->m_eResult = m_eResult;
this->m_steamIDUser = m_steamIDUser;
}
// Ctor Parameters []
constexpr ::Steamworks::GSStatsReceived_t::GSStatsReceived_t()   {
}
