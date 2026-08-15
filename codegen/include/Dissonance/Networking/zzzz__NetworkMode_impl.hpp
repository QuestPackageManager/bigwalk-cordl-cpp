#pragma once
// IWYU pragma private; include "Dissonance/Networking/NetworkMode.hpp"
#include "Dissonance/Networking/zzzz__NetworkMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::NetworkMode::NetworkMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::NetworkMode::NetworkMode()   {
}
constexpr ::Dissonance::Networking::NetworkMode  Dissonance::Networking::NetworkMode::None{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Networking::NetworkMode  Dissonance::Networking::NetworkMode::Host{static_cast<int32_t>(0x1)};
constexpr ::Dissonance::Networking::NetworkMode  Dissonance::Networking::NetworkMode::Client{static_cast<int32_t>(0x2)};
constexpr ::Dissonance::Networking::NetworkMode  Dissonance::Networking::NetworkMode::DedicatedServer{static_cast<int32_t>(0x3)};
