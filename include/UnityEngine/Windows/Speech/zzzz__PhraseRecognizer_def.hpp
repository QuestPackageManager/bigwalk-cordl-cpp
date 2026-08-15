#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/PhraseRecognizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhraseRecognizer)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Windows::Speech {
struct ConfidenceLevel;
}
namespace UnityEngine::Windows::Speech {
struct PhraseRecognizedEventArgs;
}
namespace UnityEngine::Windows::Speech {
class PhraseRecognizer_PhraseRecognizedDelegate;
}
namespace UnityEngine::Windows::Speech {
struct SemanticMeaning;
}
// Forward declare root types
namespace UnityEngine::Windows::Speech {
class PhraseRecognizer;
}
namespace UnityEngine::Windows::Speech {
class PhraseRecognizer_PhraseRecognizedDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Windows::Speech::PhraseRecognizer*);
MARK_REF_T(::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::PhraseRecognizer*, "UnityEngine.Windows.Speech", "PhraseRecognizer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*, "UnityEngine.Windows.Speech", "PhraseRecognizer/PhraseRecognizedDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate
class CORDL_TYPE PhraseRecognizer_PhraseRecognizedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x180ccbce0, size 0x7d0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs  args) ;

static inline ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181284e10, size 0x4d0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhraseRecognizer_PhraseRecognizedDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognizer_PhraseRecognizedDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhraseRecognizer_PhraseRecognizedDelegate(PhraseRecognizer_PhraseRecognizedDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognizer_PhraseRecognizedDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhraseRecognizer_PhraseRecognizedDelegate(PhraseRecognizer_PhraseRecognizedDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10798};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.PhraseRecognizer
class CORDL_TYPE PhraseRecognizer : public ::System::Object {
public:
// Declarations
using PhraseRecognizedDelegate = ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate;

/// @brief Field OnPhraseRecognized, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPhraseRecognized, put=__cordl_internal_set_OnPhraseRecognized)) ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*  OnPhraseRecognized;

/// @brief Field m_Recognizer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Recognizer, put=__cordl_internal_set_m_Recognizer)) ::System::IntPtr  m_Recognizer;

/// @brief Method InvokePhraseRecognizedEvent, addr 0x1822806f0, size 0x120, virtual false, abstract: false, final false
inline void InvokePhraseRecognizedEvent(::System::IntPtr  rawText, int32_t  rawTextLength, ::UnityEngine::Windows::Speech::ConfidenceLevel  confidence, ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning>  semanticMeanings, int64_t  phraseStartFileTime, int64_t  phraseDurationTicks) ;

/// @brief Method MarshalSemanticMeaning, addr 0x182280810, size 0x1b0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Windows::Speech::SemanticMeaning> MarshalSemanticMeaning(::System::IntPtr  keys, ::System::IntPtr  values, ::System::IntPtr  valueSizes, int32_t  valueCount) ;

constexpr ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate* const& __cordl_internal_get_OnPhraseRecognized() const;

constexpr ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*& __cordl_internal_get_OnPhraseRecognized() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Recognizer() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Recognizer() ;

constexpr void __cordl_internal_set_OnPhraseRecognized(::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*  value) ;

constexpr void __cordl_internal_set_m_Recognizer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhraseRecognizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhraseRecognizer(PhraseRecognizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhraseRecognizer(PhraseRecognizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10799};

/// @brief Field m_Recognizer, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Recognizer;

/// @brief Field OnPhraseRecognized, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate*  ___OnPhraseRecognized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::Speech::PhraseRecognizer, ___m_Recognizer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::PhraseRecognizer, ___OnPhraseRecognized) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::Speech::PhraseRecognizer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
