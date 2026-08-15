#pragma once
// IWYU pragma private; include "Epic/OnlineServices/P2P/RelayControl.hpp"
#include "Epic/OnlineServices/P2P/zzzz__RelayControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Epic::OnlineServices::P2P::RelayControl::RelayControl(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::P2P::RelayControl::RelayControl()   {
}
constexpr ::Epic::OnlineServices::P2P::RelayControl  Epic::OnlineServices::P2P::RelayControl::NoRelays{static_cast<int32_t>(0x0)};
constexpr ::Epic::OnlineServices::P2P::RelayControl  Epic::OnlineServices::P2P::RelayControl::AllowRelays{static_cast<int32_t>(0x1)};
constexpr ::Epic::OnlineServices::P2P::RelayControl  Epic::OnlineServices::P2P::RelayControl::ForceRelays{static_cast<int32_t>(0x2)};
