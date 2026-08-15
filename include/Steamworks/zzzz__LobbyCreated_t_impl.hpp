#pragma once
// IWYU pragma private; include "Steamworks/LobbyCreated_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__LobbyCreated_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LobbyCreated_t::LobbyCreated_t(::Steamworks::EResult  m_eResult, uint64_t  m_ulSteamIDLobby) noexcept  {
this->m_eResult = m_eResult;
this->m_ulSteamIDLobby = m_ulSteamIDLobby;
}
// Ctor Parameters []
constexpr ::Steamworks::LobbyCreated_t::LobbyCreated_t()   {
}
