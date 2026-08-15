#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BuiltinShaderMode.hpp"
#include "UnityEngine/Rendering/zzzz__BuiltinShaderMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BuiltinShaderMode::BuiltinShaderMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BuiltinShaderMode::BuiltinShaderMode()   {
}
constexpr ::UnityEngine::Rendering::BuiltinShaderMode  UnityEngine::Rendering::BuiltinShaderMode::Disabled{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::BuiltinShaderMode  UnityEngine::Rendering::BuiltinShaderMode::UseBuiltin{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::BuiltinShaderMode  UnityEngine::Rendering::BuiltinShaderMode::UseCustom{static_cast<int32_t>(0x2)};
