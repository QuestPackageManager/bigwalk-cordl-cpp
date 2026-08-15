#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEBool.hpp"
#include "TheVisualEngine/zzzz__TVEBool_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVEBool::TVEBool(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEBool::TVEBool()   {
}
constexpr ::TheVisualEngine::TVEBool  TheVisualEngine::TVEBool::Off{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVEBool  TheVisualEngine::TVEBool::On{static_cast<int32_t>(0x1)};
