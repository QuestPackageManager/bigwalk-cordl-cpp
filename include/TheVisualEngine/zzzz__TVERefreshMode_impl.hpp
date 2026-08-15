#pragma once
// IWYU pragma private; include "TheVisualEngine/TVERefreshMode.hpp"
#include "TheVisualEngine/zzzz__TVERefreshMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVERefreshMode::TVERefreshMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVERefreshMode::TVERefreshMode()   {
}
constexpr ::TheVisualEngine::TVERefreshMode  TheVisualEngine::TVERefreshMode::Realtime{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVERefreshMode  TheVisualEngine::TVERefreshMode::Selection{static_cast<int32_t>(0xa)};
