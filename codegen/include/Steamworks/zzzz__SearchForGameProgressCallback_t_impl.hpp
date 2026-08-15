#pragma once
// IWYU pragma private; include "Steamworks/SearchForGameProgressCallback_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SearchForGameProgressCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ullSearchID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_lobbyID", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDEndedSearch", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nSecondsRemainingEstimate", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cPlayersSearching", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SearchForGameProgressCallback_t::SearchForGameProgressCallback_t(uint64_t  m_ullSearchID, ::Steamworks::EResult  m_eResult, ::Steamworks::CSteamID  m_lobbyID, ::Steamworks::CSteamID  m_steamIDEndedSearch, int32_t  m_nSecondsRemainingEstimate, int32_t  m_cPlayersSearching) noexcept  {
this->m_ullSearchID = m_ullSearchID;
this->m_eResult = m_eResult;
this->m_lobbyID = m_lobbyID;
this->m_steamIDEndedSearch = m_steamIDEndedSearch;
this->m_nSecondsRemainingEstimate = m_nSecondsRemainingEstimate;
this->m_cPlayersSearching = m_cPlayersSearching;
}
// Ctor Parameters []
constexpr ::Steamworks::SearchForGameProgressCallback_t::SearchForGameProgressCallback_t()   {
}
