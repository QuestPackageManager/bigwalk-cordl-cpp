#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingFakeIPResult_t.hpp"
#include "Steamworks/zzzz__EResult_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingFakeIPResult_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eResult", ty: "::Steamworks::EResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_identity", ty: "::Steamworks::SteamNetworkingIdentity", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unIP", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_unPorts", ty: "::ArrayW<uint16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamNetworkingFakeIPResult_t::SteamNetworkingFakeIPResult_t(::Steamworks::EResult  m_eResult, ::Steamworks::SteamNetworkingIdentity  m_identity, uint32_t  m_unIP, ::ArrayW<uint16_t>  m_unPorts) noexcept  {
this->m_eResult = m_eResult;
this->m_identity = m_identity;
this->m_unIP = m_unIP;
this->m_unPorts = m_unPorts;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetworkingFakeIPResult_t::SteamNetworkingFakeIPResult_t()   {
}
