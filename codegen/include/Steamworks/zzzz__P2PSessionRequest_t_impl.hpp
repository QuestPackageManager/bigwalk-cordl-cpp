#pragma once
// IWYU pragma private; include "Steamworks/P2PSessionRequest_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__P2PSessionRequest_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_steamIDRemote", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::P2PSessionRequest_t::P2PSessionRequest_t(::Steamworks::CSteamID  m_steamIDRemote) noexcept  {
this->m_steamIDRemote = m_steamIDRemote;
}
// Ctor Parameters []
constexpr ::Steamworks::P2PSessionRequest_t::P2PSessionRequest_t()   {
}
