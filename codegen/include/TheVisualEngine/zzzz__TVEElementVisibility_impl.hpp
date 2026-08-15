#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEElementVisibility.hpp"
#include "TheVisualEngine/zzzz__TVEElementVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TheVisualEngine::TVEElementVisibility::TVEElementVisibility(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEElementVisibility::TVEElementVisibility()   {
}
constexpr ::TheVisualEngine::TVEElementVisibility  TheVisualEngine::TVEElementVisibility::UseGlobalSettings{static_cast<int32_t>(0xffffffff)};
constexpr ::TheVisualEngine::TVEElementVisibility  TheVisualEngine::TVEElementVisibility::AlwaysHidden{static_cast<int32_t>(0x0)};
constexpr ::TheVisualEngine::TVEElementVisibility  TheVisualEngine::TVEElementVisibility::AlwaysVisible{static_cast<int32_t>(0xa)};
constexpr ::TheVisualEngine::TVEElementVisibility  TheVisualEngine::TVEElementVisibility::HiddenAtRuntime{static_cast<int32_t>(0x14)};
