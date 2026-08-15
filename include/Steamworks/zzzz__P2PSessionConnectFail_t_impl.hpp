#pragma once
// IWYU pragma private; include "Steamworks/P2PSessionConnectFail_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__P2PSessionConnectFail_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDRemote", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eP2PSessionError", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::P2PSessionConnectFail_t::P2PSessionConnectFail_t(::Steamworks::CSteamID  m_steamIDRemote, uint8_t  m_eP2PSessionError) noexcept  {
this->m_steamIDRemote = m_steamIDRemote;
this->m_eP2PSessionError = m_eP2PSessionError;
}
// Ctor Parameters []
constexpr ::Steamworks::P2PSessionConnectFail_t::P2PSessionConnectFail_t()   {
}
