#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AmbientOcclusionMode.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AmbientOcclusionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode::AmbientOcclusionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode::AmbientOcclusionMode()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode  UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode::ScalableAmbientObscurance{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode  UnityEngine::Rendering::PostProcessing::AmbientOcclusionMode::MultiScaleVolumetricObscurance{static_cast<int32_t>(0x1)};
