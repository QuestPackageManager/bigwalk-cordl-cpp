#pragma once
// IWYU pragma private; include "Mirror/ConnectState.hpp"
#include "Mirror/zzzz__ConnectState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::ConnectState::ConnectState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::ConnectState::ConnectState()   {
}
constexpr ::Mirror::ConnectState  Mirror::ConnectState::None{static_cast<int32_t>(0x0)};
constexpr ::Mirror::ConnectState  Mirror::ConnectState::Connecting{static_cast<int32_t>(0x1)};
constexpr ::Mirror::ConnectState  Mirror::ConnectState::Connected{static_cast<int32_t>(0x2)};
constexpr ::Mirror::ConnectState  Mirror::ConnectState::Disconnecting{static_cast<int32_t>(0x3)};
constexpr ::Mirror::ConnectState  Mirror::ConnectState::Disconnected{static_cast<int32_t>(0x4)};
