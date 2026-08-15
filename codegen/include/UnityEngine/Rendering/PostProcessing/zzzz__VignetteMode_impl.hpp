#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/VignetteMode.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__VignetteMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::VignetteMode::VignetteMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::VignetteMode::VignetteMode()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::VignetteMode  UnityEngine::Rendering::PostProcessing::VignetteMode::Classic{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::VignetteMode  UnityEngine::Rendering::PostProcessing::VignetteMode::Masked{static_cast<int32_t>(0x1)};
