#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/NATType.hpp"
#include "Epic/OnlineServices/P2P/zzzz__NATType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::NATType::NATType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::NATType::NATType()   {
}
constexpr ::Epic::OnlineServices::P2P::NATType  Epic::OnlineServices::P2P::NATType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::P2P::NATType  Epic::OnlineServices::P2P::NATType::Open{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::P2P::NATType  Epic::OnlineServices::P2P::NATType::Moderate{static_cast<int32_t>(0x2)};
constexpr ::Epic::OnlineServices::P2P::NATType  Epic::OnlineServices::P2P::NATType::Strict{static_cast<int32_t>(0x3)};
