#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementType.hpp"
#include "TheVisualEngine/zzzz__TVEElementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVEElementType::TVEElementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElementType::TVEElementType()   {
}
constexpr ::TheVisualEngine::TVEElementType  TheVisualEngine::TVEElementType::None{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVEElementType  TheVisualEngine::TVEElementType::Coat{static_cast<int32_t>(0xa)};
constexpr ::TheVisualEngine::TVEElementType  TheVisualEngine::TVEElementType::Paint{static_cast<int32_t>(0x14)};
constexpr ::TheVisualEngine::TVEElementType  TheVisualEngine::TVEElementType::Atmo{static_cast<int32_t>(0x1e)};
constexpr ::TheVisualEngine::TVEElementType  TheVisualEngine::TVEElementType::Glow{static_cast<int32_t>(0x28)};
constexpr ::TheVisualEngine::TVEElementType  TheVisualEngine::TVEElementType::Form{static_cast<int32_t>(0x32)};
constexpr ::TheVisualEngine::TVEElementType  TheVisualEngine::TVEElementType::Flow{static_cast<int32_t>(0x3c)};
