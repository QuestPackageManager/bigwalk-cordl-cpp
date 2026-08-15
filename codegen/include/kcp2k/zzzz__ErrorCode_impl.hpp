#pragma once
// IWYU pragma private; include "kcp2k/ErrorCode.hpp"
#include "kcp2k/zzzz__ErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::kcp2k::ErrorCode::ErrorCode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::kcp2k::ErrorCode::ErrorCode()   {
}
constexpr ::kcp2k::ErrorCode  kcp2k::ErrorCode::DnsResolve{static_cast<uint8_t>(0x0u)};
constexpr ::kcp2k::ErrorCode  kcp2k::ErrorCode::Timeout{static_cast<uint8_t>(0x1u)};
constexpr ::kcp2k::ErrorCode  kcp2k::ErrorCode::Congestion{static_cast<uint8_t>(0x2u)};
constexpr ::kcp2k::ErrorCode  kcp2k::ErrorCode::InvalidReceive{static_cast<uint8_t>(0x3u)};
constexpr ::kcp2k::ErrorCode  kcp2k::ErrorCode::InvalidSend{static_cast<uint8_t>(0x4u)};
constexpr ::kcp2k::ErrorCode  kcp2k::ErrorCode::ConnectionClosed{static_cast<uint8_t>(0x5u)};
constexpr ::kcp2k::ErrorCode  kcp2k::ErrorCode::Unexpected{static_cast<uint8_t>(0x6u)};
