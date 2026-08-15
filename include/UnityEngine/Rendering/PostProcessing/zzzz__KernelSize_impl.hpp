#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/KernelSize.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__KernelSize_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::KernelSize::KernelSize(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::KernelSize::KernelSize()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::KernelSize  UnityEngine::Rendering::PostProcessing::KernelSize::Small{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::KernelSize  UnityEngine::Rendering::PostProcessing::KernelSize::Medium{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::KernelSize  UnityEngine::Rendering::PostProcessing::KernelSize::Large{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::KernelSize  UnityEngine::Rendering::PostProcessing::KernelSize::VeryLarge{static_cast<int32_t>(0x3)};
