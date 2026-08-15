#pragma once
// IWYU pragma private; include "Steamworks/SteamNetConnectionRealTimeLaneStatus_t.hpp"
#include "Steamworks/zzzz__SteamNetworkingMicroseconds_impl.hpp"
#include "Steamworks/zzzz__SteamNetConnectionRealTimeLaneStatus_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_cbPendingUnreliable", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cbPendingReliable", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cbSentUnackedReliable", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_reservePad1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_usecQueueTime", ty: "::Steamworks::SteamNetworkingMicroseconds", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamNetConnectionRealTimeLaneStatus_t::SteamNetConnectionRealTimeLaneStatus_t(int32_t  m_cbPendingUnreliable, int32_t  m_cbPendingReliable, int32_t  m_cbSentUnackedReliable, int32_t  _reservePad1, ::Steamworks::SteamNetworkingMicroseconds  m_usecQueueTime, ::ArrayW<uint32_t>  reserved) noexcept  {
this->m_cbPendingUnreliable = m_cbPendingUnreliable;
this->m_cbPendingReliable = m_cbPendingReliable;
this->m_cbSentUnackedReliable = m_cbSentUnackedReliable;
this->_reservePad1 = _reservePad1;
this->m_usecQueueTime = m_usecQueueTime;
this->reserved = reserved;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetConnectionRealTimeLaneStatus_t::SteamNetConnectionRealTimeLaneStatus_t()   {
}
