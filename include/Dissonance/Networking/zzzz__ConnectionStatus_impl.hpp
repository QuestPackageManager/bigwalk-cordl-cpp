#pragma once
// IWYU pragma private; include "Dissonance/Networking/ConnectionStatus.hpp"
#include "Dissonance/Networking/zzzz__ConnectionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::ConnectionStatus::ConnectionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::ConnectionStatus::ConnectionStatus()   {
}
constexpr ::Dissonance::Networking::ConnectionStatus  Dissonance::Networking::ConnectionStatus::Disconnected{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Networking::ConnectionStatus  Dissonance::Networking::ConnectionStatus::Degraded{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Networking::ConnectionStatus  Dissonance::Networking::ConnectionStatus::Connected{static_cast<int32_t>(0x2)};
