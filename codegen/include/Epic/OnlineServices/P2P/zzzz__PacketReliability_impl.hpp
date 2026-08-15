#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/PacketReliability.hpp"
#include "Epic/OnlineServices/P2P/zzzz__PacketReliability_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::PacketReliability::PacketReliability(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::PacketReliability::PacketReliability()   {
}
constexpr ::Epic::OnlineServices::P2P::PacketReliability  Epic::OnlineServices::P2P::PacketReliability::UnreliableUnordered{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::P2P::PacketReliability  Epic::OnlineServices::P2P::PacketReliability::ReliableUnordered{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::P2P::PacketReliability  Epic::OnlineServices::P2P::PacketReliability::ReliableOrdered{static_cast<int32_t>(0x2)};
