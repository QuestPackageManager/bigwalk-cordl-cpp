#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEUVMode.hpp"
#include "TheVisualEngine/zzzz__TVEUVMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVEUVMode::TVEUVMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEUVMode::TVEUVMode()   {
}
constexpr ::TheVisualEngine::TVEUVMode  TheVisualEngine::TVEUVMode::Tilling{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVEUVMode  TheVisualEngine::TVEUVMode::Scale{static_cast<int32_t>(0x1)};
