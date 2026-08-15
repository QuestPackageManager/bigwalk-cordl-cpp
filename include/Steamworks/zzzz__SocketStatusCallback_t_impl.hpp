#pragma once
// IWYU pragma private; include "Steamworks/SocketStatusCallback_t.hpp"
#include "Steamworks/zzzz__CSteamID_impl.hpp"
#include "Steamworks/zzzz__SNetListenSocket_t_impl.hpp"
#include "Steamworks/zzzz__SNetSocket_t_impl.hpp"
#include "Steamworks/zzzz__SocketStatusCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hSocket", ty: "::Steamworks::SNetSocket_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_hListenSocket", ty: "::Steamworks::SNetListenSocket_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_steamIDRemote", ty: "::Steamworks::CSteamID", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eSNetSocketState", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SocketStatusCallback_t::SocketStatusCallback_t(::Steamworks::SNetSocket_t  m_hSocket, ::Steamworks::SNetListenSocket_t  m_hListenSocket, ::Steamworks::CSteamID  m_steamIDRemote, int32_t  m_eSNetSocketState) noexcept  {
this->m_hSocket = m_hSocket;
this->m_hListenSocket = m_hListenSocket;
this->m_steamIDRemote = m_steamIDRemote;
this->m_eSNetSocketState = m_eSNetSocketState;
}
// Ctor Parameters []
constexpr ::Steamworks::SocketStatusCallback_t::SocketStatusCallback_t()   {
}
