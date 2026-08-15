#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TextureParameterDefault.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureParameterDefault_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault::TextureParameterDefault(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault::TextureParameterDefault()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault  UnityEngine::Rendering::PostProcessing::TextureParameterDefault::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault  UnityEngine::Rendering::PostProcessing::TextureParameterDefault::Black{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault  UnityEngine::Rendering::PostProcessing::TextureParameterDefault::White{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault  UnityEngine::Rendering::PostProcessing::TextureParameterDefault::Transparent{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameterDefault  UnityEngine::Rendering::PostProcessing::TextureParameterDefault::Lut2D{static_cast<int32_t>(0x4)};
