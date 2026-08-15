#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenSourceExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationTokenSourceExtensions)
namespace Cysharp::Threading::Tasks {
struct DelayType;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class CancellationTokenSourceExtensions;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions*, "Cysharp.Threading.Tasks", "CancellationTokenSourceExtensions");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CancellationTokenSourceExtensions
class CORDL_TYPE CancellationTokenSourceExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field CancelCancellationTokenSourceStateDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CancelCancellationTokenSourceStateDelegate, put=setStaticF_CancelCancellationTokenSourceStateDelegate)) ::System::Action_1<::System::Object*>*  CancelCancellationTokenSourceStateDelegate;

/// @brief Method CancelAfterSlim, addr 0x181e5dfe0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::IDisposable* CancelAfterSlim(::System::Threading::CancellationTokenSource*  cts, ::System::TimeSpan  delayTimeSpan, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming) ;

/// @brief Method CancelAfterSlim, addr 0x181e5e090, size 0xc0, virtual false, abstract: false, final false
static inline ::System::IDisposable* CancelAfterSlim(::System::Threading::CancellationTokenSource*  cts, int32_t  millisecondsDelay, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming) ;

/// @brief Method CancelCancellationTokenSourceState, addr 0x181e5e150, size 0x90, virtual false, abstract: false, final false
static inline void CancelCancellationTokenSourceState(::System::Object*  state) ;

/// @brief Method RegisterRaiseCancelOnDestroy, addr 0x181e5e270, size 0x90, virtual false, abstract: false, final false
static inline void RegisterRaiseCancelOnDestroy(::System::Threading::CancellationTokenSource*  cts, ::UnityEngine::Component*  component) ;

/// @brief Method RegisterRaiseCancelOnDestroy, addr 0x181e5e1e0, size 0x90, virtual false, abstract: false, final false
static inline void RegisterRaiseCancelOnDestroy(::System::Threading::CancellationTokenSource*  cts, ::UnityEngine::GameObject*  gameObject) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_CancelCancellationTokenSourceStateDelegate() ;

static inline void setStaticF_CancelCancellationTokenSourceStateDelegate(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenSourceExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSourceExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CancellationTokenSourceExtensions(CancellationTokenSourceExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenSourceExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancellationTokenSourceExtensions(CancellationTokenSourceExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14182};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::CancellationTokenSourceExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
