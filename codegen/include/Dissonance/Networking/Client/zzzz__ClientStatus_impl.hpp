#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/ClientStatus.hpp"
#include "Dissonance/Networking/Client/zzzz__ClientStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::Client::ClientStatus::ClientStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Client::ClientStatus::ClientStatus()   {
}
constexpr ::Dissonance::Networking::Client::ClientStatus  Dissonance::Networking::Client::ClientStatus::Ok{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Networking::Client::ClientStatus  Dissonance::Networking::Client::ClientStatus::Error{static_cast<int32_t>(0x1)};
