#pragma once
// IWYU pragma private; include "Steamworks/SteamNetConnectionRealTimeStatus_t.hpp"
#include "Steamworks/zzzz__ESteamNetworkingConnectionState_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingMicroseconds_impl.hpp"
#include "Steamworks/zzzz__SteamNetConnectionRealTimeStatus_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_eState", ty: "::Steamworks::ESteamNetworkingConnectionState", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nPing", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flConnectionQualityLocal", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flConnectionQualityRemote", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flOutPacketsPerSec", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flOutBytesPerSec", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flInPacketsPerSec", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flInBytesPerSec", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nSendRateBytesPerSecond", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cbPendingUnreliable", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cbPendingReliable", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_cbSentUnackedReliable", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_usecQueueTime", ty: "::Steamworks::SteamNetworkingMicroseconds", modifiers: "", def_value: Some("{}") }, CppParam { name: "reserved", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::SteamNetConnectionRealTimeStatus_t::SteamNetConnectionRealTimeStatus_t(::Steamworks::ESteamNetworkingConnectionState  m_eState, int32_t  m_nPing, float_t  m_flConnectionQualityLocal, float_t  m_flConnectionQualityRemote, float_t  m_flOutPacketsPerSec, float_t  m_flOutBytesPerSec, float_t  m_flInPacketsPerSec, float_t  m_flInBytesPerSec, int32_t  m_nSendRateBytesPerSecond, int32_t  m_cbPendingUnreliable, int32_t  m_cbPendingReliable, int32_t  m_cbSentUnackedReliable, ::Steamworks::SteamNetworkingMicroseconds  m_usecQueueTime, ::ArrayW<uint32_t>  reserved) noexcept  {
this->m_eState = m_eState;
this->m_nPing = m_nPing;
this->m_flConnectionQualityLocal = m_flConnectionQualityLocal;
this->m_flConnectionQualityRemote = m_flConnectionQualityRemote;
this->m_flOutPacketsPerSec = m_flOutPacketsPerSec;
this->m_flOutBytesPerSec = m_flOutBytesPerSec;
this->m_flInPacketsPerSec = m_flInPacketsPerSec;
this->m_flInBytesPerSec = m_flInBytesPerSec;
this->m_nSendRateBytesPerSecond = m_nSendRateBytesPerSecond;
this->m_cbPendingUnreliable = m_cbPendingUnreliable;
this->m_cbPendingReliable = m_cbPendingReliable;
this->m_cbSentUnackedReliable = m_cbSentUnackedReliable;
this->m_usecQueueTime = m_usecQueueTime;
this->reserved = reserved;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetConnectionRealTimeStatus_t::SteamNetConnectionRealTimeStatus_t()   {
}
