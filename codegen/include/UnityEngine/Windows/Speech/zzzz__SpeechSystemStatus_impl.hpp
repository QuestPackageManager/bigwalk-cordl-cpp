#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/SpeechSystemStatus.hpp"
#include "UnityEngine/Windows/Speech/zzzz__SpeechSystemStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::Speech::SpeechSystemStatus::SpeechSystemStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::SpeechSystemStatus::SpeechSystemStatus()   {
}
constexpr ::UnityEngine::Windows::Speech::SpeechSystemStatus  UnityEngine::Windows::Speech::SpeechSystemStatus::Stopped{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Windows::Speech::SpeechSystemStatus  UnityEngine::Windows::Speech::SpeechSystemStatus::Running{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Windows::Speech::SpeechSystemStatus  UnityEngine::Windows::Speech::SpeechSystemStatus::Failed{static_cast<int32_t>(0x2)};
