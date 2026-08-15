#pragma once
// IWYU pragma private; include "kcp2k/KcpChannel.hpp"
#include "kcp2k/zzzz__KcpChannel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::kcp2k::KcpChannel::KcpChannel(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::kcp2k::KcpChannel::KcpChannel()   {
}
constexpr ::kcp2k::KcpChannel  kcp2k::KcpChannel::Reliable{static_cast<uint8_t>(0x1u)};
constexpr ::kcp2k::KcpChannel  kcp2k::KcpChannel::Unreliable{static_cast<uint8_t>(0x2u)};
