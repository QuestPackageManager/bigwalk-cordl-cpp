#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MonitorType.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MonitorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::MonitorType::MonitorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MonitorType::MonitorType()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::MonitorType  UnityEngine::Rendering::PostProcessing::MonitorType::LightMeter{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::MonitorType  UnityEngine::Rendering::PostProcessing::MonitorType::Histogram{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::MonitorType  UnityEngine::Rendering::PostProcessing::MonitorType::Waveform{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Rendering::PostProcessing::MonitorType  UnityEngine::Rendering::PostProcessing::MonitorType::Vectorscope{static_cast<int32_t>(0x3)};
