#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/PhraseRecognizedEventArgs.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "UnityEngine/Windows/Speech/zzzz__ConfidenceLevel_impl.hpp"
#include "UnityEngine/Windows/Speech/zzzz__SemanticMeaning_impl.hpp"
#include "UnityEngine/Windows/Speech/zzzz__PhraseRecognizedEventArgs_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__ConfidenceLevel_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__SemanticMeaning_def.hpp"
//  Writing Method size for method: ::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs::*)(::StringW, ::UnityEngine::Windows::Speech::ConfidenceLevel, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>, ::System::DateTime, ::System::TimeSpan)>(&::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182280650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Windows::Speech::ConfidenceLevel>(), ::i2c::type_of<::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Windows::Speech::PhraseRecognizedEventArgs::_ctor(::StringW  text, ::UnityEngine::Windows::Speech::ConfidenceLevel  confidence, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>  semanticMeanings, ::System::DateTime  phraseStartTime, ::System::TimeSpan  phraseDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Windows::Speech::ConfidenceLevel>(), ::i2c::type_of<::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, text, confidence, semanticMeanings, phraseStartTime, phraseDuration);
}
// Ctor Parameters [CppParam { name: "confidence", ty: "::UnityEngine::Windows::Speech::ConfidenceLevel", modifiers: "", def_value: Some("{}") }, CppParam { name: "semanticMeanings", ty: "::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "phraseStartTime", ty: "::System::DateTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "phraseDuration", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs::PhraseRecognizedEventArgs(::UnityEngine::Windows::Speech::ConfidenceLevel  confidence, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>  semanticMeanings, ::StringW  text, ::System::DateTime  phraseStartTime, ::System::TimeSpan  phraseDuration) noexcept  {
this->confidence = confidence;
this->semanticMeanings = semanticMeanings;
this->text = text;
this->phraseStartTime = phraseStartTime;
this->phraseDuration = phraseDuration;
}
// Ctor Parameters []
constexpr ::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs::PhraseRecognizedEventArgs()   {
}
