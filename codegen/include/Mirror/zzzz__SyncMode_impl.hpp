#pragma once
// IWYU pragma private; include "Mirror/SyncMode.hpp"
#include "Mirror/zzzz__SyncMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SyncMode::SyncMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::SyncMode::SyncMode()   {
}
constexpr ::Mirror::SyncMode  Mirror::SyncMode::Observers{static_cast<int32_t>(0x0)};
constexpr ::Mirror::SyncMode  Mirror::SyncMode::Owner{static_cast<int32_t>(0x1)};
