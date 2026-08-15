#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/ConnectionEstablishedType.hpp"
#include "Epic/OnlineServices/P2P/zzzz__ConnectionEstablishedType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::ConnectionEstablishedType::ConnectionEstablishedType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::ConnectionEstablishedType::ConnectionEstablishedType()   {
}
constexpr ::Epic::OnlineServices::P2P::ConnectionEstablishedType  Epic::OnlineServices::P2P::ConnectionEstablishedType::NewConnection{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::P2P::ConnectionEstablishedType  Epic::OnlineServices::P2P::ConnectionEstablishedType::Reconnection{static_cast<int32_t>(0x1)};
