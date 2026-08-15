#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEvent.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent::PostProcessEvent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent::PostProcessEvent()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  UnityEngine::Rendering::PostProcessing::PostProcessEvent::BeforeTransparent{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  UnityEngine::Rendering::PostProcessing::PostProcessEvent::BeforeStack{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEvent  UnityEngine::Rendering::PostProcessing::PostProcessEvent::AfterStack{static_cast<int32_t>(0x2)};
