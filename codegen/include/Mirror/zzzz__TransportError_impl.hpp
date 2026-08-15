#pragma once
// IWYU pragma private; include "Mirror/TransportError.hpp"
#include "Mirror/zzzz__TransportError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::TransportError::TransportError(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::TransportError::TransportError()   {
}
constexpr ::Mirror::TransportError  Mirror::TransportError::DnsResolve{static_cast<uint8_t>(0x0u)};
constexpr ::Mirror::TransportError  Mirror::TransportError::Refused{static_cast<uint8_t>(0x1u)};
constexpr ::Mirror::TransportError  Mirror::TransportError::Timeout{static_cast<uint8_t>(0x2u)};
constexpr ::Mirror::TransportError  Mirror::TransportError::Congestion{static_cast<uint8_t>(0x3u)};
constexpr ::Mirror::TransportError  Mirror::TransportError::InvalidReceive{static_cast<uint8_t>(0x4u)};
constexpr ::Mirror::TransportError  Mirror::TransportError::InvalidSend{static_cast<uint8_t>(0x5u)};
constexpr ::Mirror::TransportError  Mirror::TransportError::ConnectionClosed{static_cast<uint8_t>(0x6u)};
constexpr ::Mirror::TransportError  Mirror::TransportError::Unexpected{static_cast<uint8_t>(0x7u)};
