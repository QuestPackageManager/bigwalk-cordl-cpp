#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/ConnectionClosedReason.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ConnectionClosedReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason::ConnectionClosedReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason::ConnectionClosedReason()   {
}
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::ClosedByLocalUser{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::ClosedByPeer{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::TimedOut{static_cast<int32_t>(0x3)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::TooManyConnections{static_cast<int32_t>(0x4)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::InvalidMessage{static_cast<int32_t>(0x5)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::InvalidData{static_cast<int32_t>(0x6)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::ConnectionFailed{static_cast<int32_t>(0x7)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::ConnectionClosed{static_cast<int32_t>(0x8)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::NegotiationFailed{static_cast<int32_t>(0x9)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::UnexpectedError{static_cast<int32_t>(0xa)};
constexpr ::Epic::OnlineServices::P2P::ConnectionClosedReason  Epic::OnlineServices::P2P::ConnectionClosedReason::ConnectionIgnored{static_cast<int32_t>(0xb)};
