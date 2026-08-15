#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ColorBlindnessType.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorBlindnessType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType::ColorBlindnessType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType::ColorBlindnessType()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType  UnityEngine::Rendering::PostProcessing::ColorBlindnessType::Deuteranopia{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType  UnityEngine::Rendering::PostProcessing::ColorBlindnessType::Protanopia{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::ColorBlindnessType  UnityEngine::Rendering::PostProcessing::ColorBlindnessType::Tritanopia{static_cast<int32_t>(0x2)};
