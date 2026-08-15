#pragma once
// IWYU pragma private; include "Steamworks/P2PSessionState_t.hpp"
#include "Steamworks/zzzz__P2PSessionState_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_bConnectionActive", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bConnecting", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eP2PSessionError", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_bUsingRelay", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nBytesQueuedForSend", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPacketsQueuedForSend", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nRemoteIP", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nRemotePort", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::P2PSessionState_t::P2PSessionState_t(uint8_t  m_bConnectionActive, uint8_t  m_bConnecting, uint8_t  m_eP2PSessionError, uint8_t  m_bUsingRelay, int32_t  m_nBytesQueuedForSend, int32_t  m_nPacketsQueuedForSend, uint32_t  m_nRemoteIP, uint16_t  m_nRemotePort) noexcept  {
this->m_bConnectionActive = m_bConnectionActive;
this->m_bConnecting = m_bConnecting;
this->m_eP2PSessionError = m_eP2PSessionError;
this->m_bUsingRelay = m_bUsingRelay;
this->m_nBytesQueuedForSend = m_nBytesQueuedForSend;
this->m_nPacketsQueuedForSend = m_nPacketsQueuedForSend;
this->m_nRemoteIP = m_nRemoteIP;
this->m_nRemotePort = m_nRemotePort;
}
// Ctor Parameters []
constexpr ::Steamworks::P2PSessionState_t::P2PSessionState_t()   {
}
