#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BuiltinShaderType.hpp"
#include "UnityEngine/Rendering/zzzz__BuiltinShaderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::BuiltinShaderType::BuiltinShaderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::BuiltinShaderType::BuiltinShaderType()   {
}
constexpr ::UnityEngine::Rendering::BuiltinShaderType  UnityEngine::Rendering::BuiltinShaderType::DeferredShading{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::BuiltinShaderType  UnityEngine::Rendering::BuiltinShaderType::DeferredReflections{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::BuiltinShaderType  UnityEngine::Rendering::BuiltinShaderType::LegacyDeferredLighting{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::BuiltinShaderType  UnityEngine::Rendering::BuiltinShaderType::ScreenSpaceShadows{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::BuiltinShaderType  UnityEngine::Rendering::BuiltinShaderType::DepthNormals{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Rendering::BuiltinShaderType  UnityEngine::Rendering::BuiltinShaderType::MotionVectors{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Rendering::BuiltinShaderType  UnityEngine::Rendering::BuiltinShaderType::LightHalo{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Rendering::BuiltinShaderType  UnityEngine::Rendering::BuiltinShaderType::LensFlare{static_cast<int32_t>(0x7)};
