#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/DictationRecognizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DictationRecognizer)
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
struct DictationCompletionCause;
}
namespace UnityEngine::Windows::Speech {
class DictationRecognizer_DictationCompletedDelegate;
}
namespace UnityEngine::Windows::Speech {
class DictationRecognizer_DictationErrorHandler;
}
namespace UnityEngine::Windows::Speech {
class DictationRecognizer_DictationHypothesisDelegate;
}
namespace UnityEngine::Windows::Speech {
class DictationRecognizer_DictationResultDelegate;
}
// Forward declare root types
namespace UnityEngine::Windows::Speech {
class DictationRecognizer;
}
namespace UnityEngine::Windows::Speech {
class DictationRecognizer_DictationCompletedDelegate;
}
namespace UnityEngine::Windows::Speech {
class DictationRecognizer_DictationErrorHandler;
}
namespace UnityEngine::Windows::Speech {
class DictationRecognizer_DictationHypothesisDelegate;
}
namespace UnityEngine::Windows::Speech {
class DictationRecognizer_DictationResultDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Windows::Speech::DictationRecognizer*);
MARK_REF_T(::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*);
MARK_REF_T(::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*);
MARK_REF_T(::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*);
MARK_REF_T(::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::DictationRecognizer*, "UnityEngine.Windows.Speech", "DictationRecognizer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*, "UnityEngine.Windows.Speech", "DictationRecognizer/DictationCompletedDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*, "UnityEngine.Windows.Speech", "DictationRecognizer/DictationErrorHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*, "UnityEngine.Windows.Speech", "DictationRecognizer/DictationHypothesisDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*, "UnityEngine.Windows.Speech", "DictationRecognizer/DictationResultDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.DictationRecognizer/DictationHypothesisDelegate
class CORDL_TYPE DictationRecognizer_DictationHypothesisDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::StringW  text) ;

static inline ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1804dc850, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictationRecognizer_DictationHypothesisDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer_DictationHypothesisDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DictationRecognizer_DictationHypothesisDelegate(DictationRecognizer_DictationHypothesisDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer_DictationHypothesisDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictationRecognizer_DictationHypothesisDelegate(DictationRecognizer_DictationHypothesisDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10800};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.DictationRecognizer/DictationResultDelegate
class CORDL_TYPE DictationRecognizer_DictationResultDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::StringW  text, ::UnityEngine::Windows::Speech::ConfidenceLevel  confidence) ;

static inline ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1810e6060, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictationRecognizer_DictationResultDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer_DictationResultDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DictationRecognizer_DictationResultDelegate(DictationRecognizer_DictationResultDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer_DictationResultDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictationRecognizer_DictationResultDelegate(DictationRecognizer_DictationResultDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10801};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.DictationRecognizer/DictationCompletedDelegate
class CORDL_TYPE DictationRecognizer_DictationCompletedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::Speech::DictationCompletionCause  cause) ;

static inline ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictationRecognizer_DictationCompletedDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer_DictationCompletedDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DictationRecognizer_DictationCompletedDelegate(DictationRecognizer_DictationCompletedDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer_DictationCompletedDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictationRecognizer_DictationCompletedDelegate(DictationRecognizer_DictationCompletedDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10802};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.DictationRecognizer/DictationErrorHandler
class CORDL_TYPE DictationRecognizer_DictationErrorHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::StringW  error, int32_t  hresult) ;

static inline ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1810e6060, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictationRecognizer_DictationErrorHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer_DictationErrorHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DictationRecognizer_DictationErrorHandler(DictationRecognizer_DictationErrorHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer_DictationErrorHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictationRecognizer_DictationErrorHandler(DictationRecognizer_DictationErrorHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10803};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.DictationRecognizer
class CORDL_TYPE DictationRecognizer : public ::System::Object {
public:
// Declarations
using DictationCompletedDelegate = ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate;

using DictationErrorHandler = ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler;

using DictationHypothesisDelegate = ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate;

using DictationResultDelegate = ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate;

/// @brief Field DictationComplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DictationComplete, put=__cordl_internal_set_DictationComplete)) ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*  DictationComplete;

/// @brief Field DictationError, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_DictationError, put=__cordl_internal_set_DictationError)) ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*  DictationError;

/// @brief Field DictationHypothesis, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DictationHypothesis, put=__cordl_internal_set_DictationHypothesis)) ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*  DictationHypothesis;

/// @brief Field DictationResult, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DictationResult, put=__cordl_internal_set_DictationResult)) ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*  DictationResult;

/// @brief Field m_Recognizer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Recognizer, put=__cordl_internal_set_m_Recognizer)) ::System::IntPtr  m_Recognizer;

/// @brief Method DictationRecognizer_InvokeCompletedEvent, addr 0x181acb8c0, size 0x20, virtual false, abstract: false, final false
inline void DictationRecognizer_InvokeCompletedEvent(::UnityEngine::Windows::Speech::DictationCompletionCause  cause) ;

/// @brief Method DictationRecognizer_InvokeErrorEvent, addr 0x180da0f90, size 0x1d80, virtual false, abstract: false, final false
inline void DictationRecognizer_InvokeErrorEvent(::StringW  error, int32_t  hresult) ;

/// @brief Method DictationRecognizer_InvokeHypothesisGeneratedEvent, addr 0x18227ed20, size 0x50, virtual false, abstract: false, final false
inline void DictationRecognizer_InvokeHypothesisGeneratedEvent(::System::IntPtr  keyword, int32_t  keywordLength) ;

/// @brief Method DictationRecognizer_InvokeResultGeneratedEvent, addr 0x18227ed70, size 0x50, virtual false, abstract: false, final false
inline void DictationRecognizer_InvokeResultGeneratedEvent(::System::IntPtr  keyword, int32_t  keywordLength, ::UnityEngine::Windows::Speech::ConfidenceLevel  minimumConfidence) ;

constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate* const& __cordl_internal_get_DictationComplete() const;

constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*& __cordl_internal_get_DictationComplete() ;

constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler* const& __cordl_internal_get_DictationError() const;

constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*& __cordl_internal_get_DictationError() ;

constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate* const& __cordl_internal_get_DictationHypothesis() const;

constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*& __cordl_internal_get_DictationHypothesis() ;

constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate* const& __cordl_internal_get_DictationResult() const;

constexpr ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*& __cordl_internal_get_DictationResult() ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Recognizer() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Recognizer() ;

constexpr void __cordl_internal_set_DictationComplete(::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*  value) ;

constexpr void __cordl_internal_set_DictationError(::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*  value) ;

constexpr void __cordl_internal_set_DictationHypothesis(::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*  value) ;

constexpr void __cordl_internal_set_DictationResult(::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*  value) ;

constexpr void __cordl_internal_set_m_Recognizer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DictationRecognizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DictationRecognizer(DictationRecognizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DictationRecognizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DictationRecognizer(DictationRecognizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10804};

/// @brief Field m_Recognizer, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Recognizer;

/// @brief Field DictationHypothesis, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate*  ___DictationHypothesis;

/// @brief Field DictationResult, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate*  ___DictationResult;

/// @brief Field DictationComplete, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate*  ___DictationComplete;

/// @brief Field DictationError, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Windows::Speech::DictationRecognizer_DictationErrorHandler*  ___DictationError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Windows::Speech::DictationRecognizer, ___m_Recognizer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::DictationRecognizer, ___DictationHypothesis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::DictationRecognizer, ___DictationResult) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::DictationRecognizer, ___DictationComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Windows::Speech::DictationRecognizer, ___DictationError) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Windows::Speech::DictationRecognizer) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
