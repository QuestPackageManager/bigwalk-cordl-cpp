#pragma once
// IWYU pragma private; include "kcp2k/KcpHeader.hpp"
#include "kcp2k/zzzz__KcpHeader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::kcp2k::KcpHeader::KcpHeader(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::kcp2k::KcpHeader::KcpHeader()   {
}
constexpr ::kcp2k::KcpHeader  kcp2k::KcpHeader::Handshake{static_cast<uint8_t>(0x1u)};
constexpr ::kcp2k::KcpHeader  kcp2k::KcpHeader::Ping{static_cast<uint8_t>(0x2u)};
constexpr ::kcp2k::KcpHeader  kcp2k::KcpHeader::Data{static_cast<uint8_t>(0x3u)};
constexpr ::kcp2k::KcpHeader  kcp2k::KcpHeader::Disconnect{static_cast<uint8_t>(0x4u)};
