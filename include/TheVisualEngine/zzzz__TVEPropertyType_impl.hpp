#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEPropertyType.hpp"
#include "TheVisualEngine/zzzz__TVEPropertyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVEPropertyType::TVEPropertyType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEPropertyType::TVEPropertyType()   {
}
constexpr ::TheVisualEngine::TVEPropertyType  TheVisualEngine::TVEPropertyType::Texture{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVEPropertyType  TheVisualEngine::TVEPropertyType::Vector{static_cast<int32_t>(0x1)};
constexpr ::TheVisualEngine::TVEPropertyType  TheVisualEngine::TVEPropertyType::Value{static_cast<int32_t>(0x2)};
