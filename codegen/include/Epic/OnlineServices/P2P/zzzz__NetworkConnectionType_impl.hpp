#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/NetworkConnectionType.hpp"
#include "Epic/OnlineServices/P2P/zzzz__NetworkConnectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::NetworkConnectionType::NetworkConnectionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::NetworkConnectionType::NetworkConnectionType()   {
}
constexpr ::Epic::OnlineServices::P2P::NetworkConnectionType  Epic::OnlineServices::P2P::NetworkConnectionType::NoConnection{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::P2P::NetworkConnectionType  Epic::OnlineServices::P2P::NetworkConnectionType::DirectConnection{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::P2P::NetworkConnectionType  Epic::OnlineServices::P2P::NetworkConnectionType::RelayedConnection{static_cast<int32_t>(0x2)};
