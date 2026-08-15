#pragma once
// IWYU pragma private; include "kcp2k/KcpState.hpp"
#include "kcp2k/zzzz__KcpState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::kcp2k::KcpState::KcpState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::kcp2k::KcpState::KcpState()   {
}
constexpr ::kcp2k::KcpState  kcp2k::KcpState::Connected{static_cast<int32_t>(0x0)};
constexpr ::kcp2k::KcpState  kcp2k::KcpState::Authenticated{static_cast<int32_t>(0x1)};
constexpr ::kcp2k::KcpState  kcp2k::KcpState::Disconnected{static_cast<int32_t>(0x2)};
