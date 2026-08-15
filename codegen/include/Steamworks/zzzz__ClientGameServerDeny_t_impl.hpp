#pragma once
// IWYU pragma private; include "Steamworks/ClientGameServerDeny_t.hpp"
#include "Steamworks/zzzz__ClientGameServerDeny_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_uAppID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unGameServerIP", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_usGameServerPort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bSecure", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_uReason", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ClientGameServerDeny_t::ClientGameServerDeny_t(uint32_t  m_uAppID, uint32_t  m_unGameServerIP, uint16_t  m_usGameServerPort, uint16_t  m_bSecure, uint32_t  m_uReason) noexcept  {
this->m_uAppID = m_uAppID;
this->m_unGameServerIP = m_unGameServerIP;
this->m_usGameServerPort = m_usGameServerPort;
this->m_bSecure = m_bSecure;
this->m_uReason = m_uReason;
}
// Ctor Parameters []
constexpr ::Steamworks::ClientGameServerDeny_t::ClientGameServerDeny_t()   {
}
