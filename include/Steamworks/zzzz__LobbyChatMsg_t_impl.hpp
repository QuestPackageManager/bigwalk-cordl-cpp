#pragma once
// IWYU pragma private; include "Steamworks/LobbyChatMsg_t.hpp"
#include "Steamworks/zzzz__LobbyChatMsg_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_ulSteamIDLobby", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ulSteamIDUser", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eChatEntryType", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_iChatID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::LobbyChatMsg_t::LobbyChatMsg_t(uint64_t  m_ulSteamIDLobby, uint64_t  m_ulSteamIDUser, uint8_t  m_eChatEntryType, uint32_t  m_iChatID) noexcept  {
this->m_ulSteamIDLobby = m_ulSteamIDLobby;
this->m_ulSteamIDUser = m_ulSteamIDUser;
this->m_eChatEntryType = m_eChatEntryType;
this->m_iChatID = m_iChatID;
}
// Ctor Parameters []
constexpr ::Steamworks::LobbyChatMsg_t::LobbyChatMsg_t()   {
}
