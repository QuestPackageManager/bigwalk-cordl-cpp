#pragma once
// IWYU pragma private; include "Mirror/SyncDirection.hpp"
#include "Mirror/zzzz__SyncDirection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SyncDirection::SyncDirection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::SyncDirection::SyncDirection()   {
}
constexpr ::Mirror::SyncDirection  Mirror::SyncDirection::ServerToClient{static_cast<int32_t>(0x0)};
constexpr ::Mirror::SyncDirection  Mirror::SyncDirection::ClientToServer{static_cast<int32_t>(0x1)};
