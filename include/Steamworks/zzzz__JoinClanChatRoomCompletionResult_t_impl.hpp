#pragma once
// IWYU pragma private; include "Steamworks/JoinClanChatRoomCompletionResult_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__EChatRoomEnterResponse_impl.hpp"
#include "Steamworks/zzzz__JoinClanChatRoomCompletionResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDClanChat", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eChatRoomEnterResponse", ty: "::Steamworks::EChatRoomEnterResponse", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::JoinClanChatRoomCompletionResult_t::JoinClanChatRoomCompletionResult_t(::Steamworks::CSteamID  m_steamIDClanChat, ::Steamworks::EChatRoomEnterResponse  m_eChatRoomEnterResponse) noexcept  {
this->m_steamIDClanChat = m_steamIDClanChat;
this->m_eChatRoomEnterResponse = m_eChatRoomEnterResponse;
}
// Ctor Parameters []
constexpr ::Steamworks::JoinClanChatRoomCompletionResult_t::JoinClanChatRoomCompletionResult_t()   {
}
