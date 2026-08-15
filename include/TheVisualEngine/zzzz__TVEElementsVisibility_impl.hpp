#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementsVisibility.hpp"
#include "TheVisualEngine/zzzz__TVEElementsVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVEElementsVisibility::TVEElementsVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElementsVisibility::TVEElementsVisibility()   {
}
constexpr ::TheVisualEngine::TVEElementsVisibility  TheVisualEngine::TVEElementsVisibility::AlwaysHidden{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVEElementsVisibility  TheVisualEngine::TVEElementsVisibility::AlwaysVisible{static_cast<int32_t>(0xa)};
constexpr ::TheVisualEngine::TVEElementsVisibility  TheVisualEngine::TVEElementsVisibility::HiddenAtRuntime{static_cast<int32_t>(0x14)};
