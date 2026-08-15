#pragma once
// IWYU pragma private; include "Mirror/SceneOperation.hpp"
#include "Mirror/zzzz__SceneOperation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::SceneOperation::SceneOperation(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::SceneOperation::SceneOperation()   {
}
constexpr ::Mirror::SceneOperation  Mirror::SceneOperation::Normal{static_cast<uint8_t>(0x0u)};
constexpr ::Mirror::SceneOperation  Mirror::SceneOperation::LoadAdditive{static_cast<uint8_t>(0x1u)};
constexpr ::Mirror::SceneOperation  Mirror::SceneOperation::UnloadAdditive{static_cast<uint8_t>(0x2u)};
