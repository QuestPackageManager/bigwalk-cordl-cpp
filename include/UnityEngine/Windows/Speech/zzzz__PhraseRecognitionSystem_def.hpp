#pragma once
// IWYU pragma private; include "UnityEngine/Windows/Speech/PhraseRecognitionSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PhraseRecognitionSystem)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Windows::Speech {
class PhraseRecognitionSystem_ErrorDelegate;
}
namespace UnityEngine::Windows::Speech {
class PhraseRecognitionSystem_StatusDelegate;
}
namespace UnityEngine::Windows::Speech {
struct SpeechError;
}
namespace UnityEngine::Windows::Speech {
struct SpeechSystemStatus;
}
// Forward declare root types
namespace UnityEngine::Windows::Speech {
class PhraseRecognitionSystem;
}
namespace UnityEngine::Windows::Speech {
class PhraseRecognitionSystem_ErrorDelegate;
}
namespace UnityEngine::Windows::Speech {
class PhraseRecognitionSystem_StatusDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Windows::Speech::PhraseRecognitionSystem*);
MARK_REF_T(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*);
MARK_REF_T(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::PhraseRecognitionSystem*, "UnityEngine.Windows.Speech", "PhraseRecognitionSystem");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*, "UnityEngine.Windows.Speech", "PhraseRecognitionSystem/ErrorDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*, "UnityEngine.Windows.Speech", "PhraseRecognitionSystem/StatusDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.PhraseRecognitionSystem/ErrorDelegate
class CORDL_TYPE PhraseRecognitionSystem_ErrorDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::Speech::SpeechError  errorCode) ;

static inline ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhraseRecognitionSystem_ErrorDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognitionSystem_ErrorDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhraseRecognitionSystem_ErrorDelegate(PhraseRecognitionSystem_ErrorDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognitionSystem_ErrorDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhraseRecognitionSystem_ErrorDelegate(PhraseRecognitionSystem_ErrorDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10795};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
// Dependencies System.MulticastDelegate
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.PhraseRecognitionSystem/StatusDelegate
class CORDL_TYPE PhraseRecognitionSystem_StatusDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Windows::Speech::SpeechSystemStatus  status) ;

static inline ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180539220, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhraseRecognitionSystem_StatusDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognitionSystem_StatusDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhraseRecognitionSystem_StatusDelegate(PhraseRecognitionSystem_StatusDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognitionSystem_StatusDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhraseRecognitionSystem_StatusDelegate(PhraseRecognitionSystem_StatusDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10796};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
// Dependencies System.Object
namespace UnityEngine::Windows::Speech {
// Is value type: false
// CS Name: UnityEngine.Windows.Speech.PhraseRecognitionSystem
class CORDL_TYPE PhraseRecognitionSystem : public ::System::Object {
public:
// Declarations
using ErrorDelegate = ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate;

using StatusDelegate = ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate;

/// @brief Field OnError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnError, put=setStaticF_OnError)) ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*  OnError;

/// @brief Field OnStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnStatusChanged, put=setStaticF_OnStatusChanged)) ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*  OnStatusChanged;

/// @brief Method PhraseRecognitionSystem_InvokeErrorEvent, addr 0x1822805f0, size 0x30, virtual false, abstract: false, final false
static inline void PhraseRecognitionSystem_InvokeErrorEvent(::UnityEngine::Windows::Speech::SpeechError  errorCode) ;

/// @brief Method PhraseRecognitionSystem_InvokeStatusChangedEvent, addr 0x182280620, size 0x30, virtual false, abstract: false, final false
static inline void PhraseRecognitionSystem_InvokeStatusChangedEvent(::UnityEngine::Windows::Speech::SpeechSystemStatus  status) ;

static inline ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate* getStaticF_OnError() ;

static inline ::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate* getStaticF_OnStatusChanged() ;

static inline void setStaticF_OnError(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate*  value) ;

static inline void setStaticF_OnStatusChanged(::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhraseRecognitionSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognitionSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PhraseRecognitionSystem(PhraseRecognitionSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhraseRecognitionSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhraseRecognitionSystem(PhraseRecognitionSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10797};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::Speech::PhraseRecognitionSystem) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Windows::Speech
