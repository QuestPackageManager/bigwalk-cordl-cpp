#pragma once
// IWYU pragma private; include "Mirror/SimpleWeb/ClientState.hpp"
#include "Mirror/SimpleWeb/zzzz__ClientState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SimpleWeb::ClientState::ClientState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::SimpleWeb::ClientState::ClientState()   {
}
constexpr ::Mirror::SimpleWeb::ClientState  Mirror::SimpleWeb::ClientState::NotConnected{static_cast<int32_t>(0x0)};
constexpr ::Mirror::SimpleWeb::ClientState  Mirror::SimpleWeb::ClientState::Connecting{static_cast<int32_t>(0x1)};
constexpr ::Mirror::SimpleWeb::ClientState  Mirror::SimpleWeb::ClientState::Connected{static_cast<int32_t>(0x2)};
constexpr ::Mirror::SimpleWeb::ClientState  Mirror::SimpleWeb::ClientState::Disconnecting{static_cast<int32_t>(0x3)};
