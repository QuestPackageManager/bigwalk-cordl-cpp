#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/PhraseRecognizedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__ConfidenceLevel_def.hpp"
#include "UnityEngine/Windows/Speech/zzzz__SemanticMeaning_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PhraseRecognizedEventArgs)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine::Windows::Speech {
struct ConfidenceLevel;
}
namespace UnityEngine::Windows::Speech {
struct SemanticMeaning;
}
// Forward declare root types
namespace UnityEngine::Windows::Speech {
struct PhraseRecognizedEventArgs;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs, "UnityEngine.Windows.Speech", "PhraseRecognizedEventArgs");
// Dependencies System.DateTime, System.TimeSpan, UnityEngine.Windows.Speech.ConfidenceLevel, UnityEngine.Windows.Speech.SemanticMeaning
namespace UnityEngine::Windows::Speech {
// Is value type: true
// CS Name: UnityEngine.Windows.Speech.PhraseRecognizedEventArgs
struct CORDL_TYPE PhraseRecognizedEventArgs {
public:
// Declarations
/// @brief Method .ctor, addr 0x182280650, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::StringW  text, ::UnityEngine::Windows::Speech::ConfidenceLevel  confidence, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>  semanticMeanings, ::System::DateTime  phraseStartTime, ::System::TimeSpan  phraseDuration) ;

// Ctor Parameters []
// @brief default ctor
constexpr PhraseRecognizedEventArgs() ;

// Ctor Parameters [CppParam { name: "confidence", ty: "::UnityEngine::Windows::Speech::ConfidenceLevel", modifiers: "", def_value: None }, CppParam { name: "semanticMeanings", ty: "::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "phraseStartTime", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "phraseDuration", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
constexpr PhraseRecognizedEventArgs(::UnityEngine::Windows::Speech::ConfidenceLevel  confidence, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>  semanticMeanings, ::StringW  text, ::System::DateTime  phraseStartTime, ::System::TimeSpan  phraseDuration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10810};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field confidence, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::Windows::Speech::ConfidenceLevel  confidence;

/// @brief Field semanticMeanings, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>  semanticMeanings;

/// @brief Field text, offset: 0x10, size: 0x8, def value: None
 ::StringW  text;

/// @brief Field phraseStartTime, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  phraseStartTime;

/// @brief Field phraseDuration, offset: 0x20, size: 0x8, def value: None
 ::System::TimeSpan  phraseDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs, confidence) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs, semanticMeanings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs, text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs, phraseStartTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs, phraseDuration) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
