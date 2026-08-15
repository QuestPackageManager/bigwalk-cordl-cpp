#pragma once
// IWYU pragma private; include "Steamworks/LobbyChatUpdate_t.hpp"
#include "Steamworks/zzzz__LobbyChatUpdate_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDUserChanged", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDMakingChange", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_rgfChatMemberStateChange", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LobbyChatUpdate_t::LobbyChatUpdate_t(uint64_t  m_ulSteamIDLobby, uint64_t  m_ulSteamIDUserChanged, uint64_t  m_ulSteamIDMakingChange, uint32_t  m_rgfChatMemberStateChange) noexcept  {
this->m_ulSteamIDLobby = m_ulSteamIDLobby;
this->m_ulSteamIDUserChanged = m_ulSteamIDUserChanged;
this->m_ulSteamIDMakingChange = m_ulSteamIDMakingChange;
this->m_rgfChatMemberStateChange = m_rgfChatMemberStateChange;
}
// Ctor Parameters []
constexpr ::Steamworks::LobbyChatUpdate_t::LobbyChatUpdate_t()   {
}
