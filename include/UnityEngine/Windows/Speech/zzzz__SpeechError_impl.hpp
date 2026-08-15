#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/SpeechError.hpp"
#include "UnityEngine/Windows/Speech/zzzz__SpeechError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::Speech::SpeechError::SpeechError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::SpeechError::SpeechError()   {
}
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::NoError{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::TopicLanguageNotSupported{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::GrammarLanguageMismatch{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::GrammarCompilationFailure{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::AudioQualityFailure{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::PauseLimitExceeded{static_cast<int32_t>(0x5)};
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::TimeoutExceeded{static_cast<int32_t>(0x6)};
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::NetworkFailure{static_cast<int32_t>(0x7)};
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::MicrophoneUnavailable{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Windows::Speech::SpeechError  UnityEngine::Windows::Speech::SpeechError::UnknownError{static_cast<int32_t>(0x9)};
