#pragma once
// IWYU pragma private; include "Steamworks/SteamNetConnectionStatusChangedCallback_t.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConnectionState_impl.hpp"
#include "Steamworks/zzzz__HSteamNetConnection_impl.hpp"
#include "Steamworks/zzzz__SteamNetConnectionInfo_t_impl.hpp"
#include "Steamworks/zzzz__SteamNetConnectionStatusChangedCallback_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_hConn", ty: "::Steamworks::HSteamNetConnection", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_info", ty: "::Steamworks::SteamNetConnectionInfo_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_eOldState", ty: "::Steamworks::ESteamNetworkingConnectionState", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamNetConnectionStatusChangedCallback_t::SteamNetConnectionStatusChangedCallback_t(::Steamworks::HSteamNetConnection  m_hConn, ::Steamworks::SteamNetConnectionInfo_t  m_info, ::Steamworks::ESteamNetworkingConnectionState  m_eOldState) noexcept  {
this->m_hConn = m_hConn;
this->m_info = m_info;
this->m_eOldState = m_eOldState;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetConnectionStatusChangedCallback_t::SteamNetConnectionStatusChangedCallback_t()   {
}
