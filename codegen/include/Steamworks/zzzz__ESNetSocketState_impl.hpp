#pragma once
// IWYU pragma private; include "Steamworks/ESNetSocketState.hpp"
#include "Steamworks/zzzz__ESNetSocketState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::ESNetSocketState::ESNetSocketState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Steamworks::ESNetSocketState::ESNetSocketState()   {
}
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateInvalid{static_cast<int32_t>(0x0)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateConnected{static_cast<int32_t>(0x1)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateInitiated{static_cast<int32_t>(0xa)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateLocalCandidatesFound{static_cast<int32_t>(0xb)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateReceivedRemoteCandidates{static_cast<int32_t>(0xc)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateChallengeHandshake{static_cast<int32_t>(0xf)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateDisconnecting{static_cast<int32_t>(0x15)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateLocalDisconnect{static_cast<int32_t>(0x16)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateTimeoutDuringConnect{static_cast<int32_t>(0x17)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateRemoteEndDisconnected{static_cast<int32_t>(0x18)};
constexpr ::Steamworks::ESNetSocketState  Steamworks::ESNetSocketState::k_ESNetSocketStateConnectionBroken{static_cast<int32_t>(0x19)};
