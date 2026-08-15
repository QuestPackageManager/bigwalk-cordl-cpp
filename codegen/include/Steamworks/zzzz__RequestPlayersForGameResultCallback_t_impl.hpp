#pragma once
// IWYU pragma private; include "Steamworks/RequestPlayersForGameResultCallback_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__PlayerAcceptState_t_impl.hpp"
#include "Steamworks/zzzz__RequestPlayersForGameResultCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ullSearchID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SteamIDPlayerFound", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SteamIDLobby", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ePlayerAcceptState", ty: "::Steamworks::PlayerAcceptState_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPlayerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nTotalPlayersFound", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nTotalPlayersAcceptedGame", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nSuggestedTeamIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ullUniqueGameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::RequestPlayersForGameResultCallback_t::RequestPlayersForGameResultCallback_t(::Steamworks::EResult  m_eResult, uint64_t  m_ullSearchID, ::Steamworks::CSteamID  m_SteamIDPlayerFound, ::Steamworks::CSteamID  m_SteamIDLobby, ::Steamworks::PlayerAcceptState_t  m_ePlayerAcceptState, int32_t  m_nPlayerIndex, int32_t  m_nTotalPlayersFound, int32_t  m_nTotalPlayersAcceptedGame, int32_t  m_nSuggestedTeamIndex, uint64_t  m_ullUniqueGameID) noexcept  {
this->m_eResult = m_eResult;
this->m_ullSearchID = m_ullSearchID;
this->m_SteamIDPlayerFound = m_SteamIDPlayerFound;
this->m_SteamIDLobby = m_SteamIDLobby;
this->m_ePlayerAcceptState = m_ePlayerAcceptState;
this->m_nPlayerIndex = m_nPlayerIndex;
this->m_nTotalPlayersFound = m_nTotalPlayersFound;
this->m_nTotalPlayersAcceptedGame = m_nTotalPlayersAcceptedGame;
this->m_nSuggestedTeamIndex = m_nSuggestedTeamIndex;
this->m_ullUniqueGameID = m_ullUniqueGameID;
}
// Ctor Parameters []
constexpr ::Steamworks::RequestPlayersForGameResultCallback_t::RequestPlayersForGameResultCallback_t()   {
}
