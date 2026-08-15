#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/DictationCompletionCause.hpp"
#include "UnityEngine/Windows/Speech/zzzz__DictationCompletionCause_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause::DictationCompletionCause(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause::DictationCompletionCause()   {
}
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause  UnityEngine::Windows::Speech::DictationCompletionCause::Complete{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause  UnityEngine::Windows::Speech::DictationCompletionCause::AudioQualityFailure{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause  UnityEngine::Windows::Speech::DictationCompletionCause::Canceled{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause  UnityEngine::Windows::Speech::DictationCompletionCause::TimeoutExceeded{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause  UnityEngine::Windows::Speech::DictationCompletionCause::PauseLimitExceeded{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause  UnityEngine::Windows::Speech::DictationCompletionCause::NetworkFailure{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause  UnityEngine::Windows::Speech::DictationCompletionCause::MicrophoneUnavailable{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Windows::Speech::DictationCompletionCause  UnityEngine::Windows::Speech::DictationCompletionCause::UnknownError{static_cast<int32_t>(0x7)};
