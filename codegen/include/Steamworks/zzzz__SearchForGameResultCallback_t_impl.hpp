#pragma once
// IWYU pragma private; include "Steamworks/SearchForGameResultCallback_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SearchForGameResultCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ullSearchID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nCountPlayersInGame", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nCountAcceptedGame", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDHost", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bFinalCallback", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SearchForGameResultCallback_t::SearchForGameResultCallback_t(uint64_t  m_ullSearchID, ::Steamworks::EResult  m_eResult, int32_t  m_nCountPlayersInGame, int32_t  m_nCountAcceptedGame, ::Steamworks::CSteamID  m_steamIDHost, bool  m_bFinalCallback) noexcept  {
this->m_ullSearchID = m_ullSearchID;
this->m_eResult = m_eResult;
this->m_nCountPlayersInGame = m_nCountPlayersInGame;
this->m_nCountAcceptedGame = m_nCountAcceptedGame;
this->m_steamIDHost = m_steamIDHost;
this->m_bFinalCallback = m_bFinalCallback;
}
// Ctor Parameters []
constexpr ::Steamworks::SearchForGameResultCallback_t::SearchForGameResultCallback_t()   {
}
