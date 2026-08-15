#pragma once
// IWYU pragma private; include "Dissonance/Networking/Server/ServerState.hpp"
#include "Dissonance/Networking/Server/zzzz__ServerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::Server::ServerState::ServerState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::Server::ServerState::ServerState()   {
}
constexpr ::Dissonance::Networking::Server::ServerState  Dissonance::Networking::Server::ServerState::Ok{static_cast<int32_t>(0x0)};
constexpr ::Dissonance::Networking::Server::ServerState  Dissonance::Networking::Server::ServerState::Error{static_cast<int32_t>(0x1)};
