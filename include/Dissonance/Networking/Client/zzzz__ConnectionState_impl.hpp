#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/ConnectionState.hpp"
#include "Dissonance/Networking/Client/zzzz__ConnectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::Client::ConnectionState::ConnectionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::ConnectionState::ConnectionState()   {
}
constexpr ::Dissonance::Networking::Client::ConnectionState  Dissonance::Networking::Client::ConnectionState::None{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Networking::Client::ConnectionState  Dissonance::Networking::Client::ConnectionState::Negotiating{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Networking::Client::ConnectionState  Dissonance::Networking::Client::ConnectionState::Connected{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::Networking::Client::ConnectionState  Dissonance::Networking::Client::ConnectionState::Disconnected{static_cast<int32_t>(0x3)};
