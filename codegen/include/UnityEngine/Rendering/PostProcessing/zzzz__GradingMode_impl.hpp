#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/GradingMode.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__GradingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::GradingMode::GradingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::GradingMode::GradingMode()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::GradingMode  UnityEngine::Rendering::PostProcessing::GradingMode::LowDefinitionRange{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::GradingMode  UnityEngine::Rendering::PostProcessing::GradingMode::HighDefinitionRange{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::GradingMode  UnityEngine::Rendering::PostProcessing::GradingMode::External{static_cast<int32_t>(0x2)};
