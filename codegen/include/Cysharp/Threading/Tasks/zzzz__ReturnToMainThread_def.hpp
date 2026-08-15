#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ReturnToMainThread.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ReturnToMainThread)
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
struct ReturnToMainThread_Awaiter;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct ReturnToMainThread;
}
namespace Cysharp::Threading::Tasks {
struct ReturnToMainThread_Awaiter;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::ReturnToMainThread);
MARK_VAL_T(::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ReturnToMainThread, "Cysharp.Threading.Tasks", "ReturnToMainThread");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter, "Cysharp.Threading.Tasks", "ReturnToMainThread/Awaiter");
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.ReturnToMainThread/Awaiter
struct CORDL_TYPE ReturnToMainThread_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetAwaiter, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter GetAwaiter() ;

/// @brief Method GetResult, addr 0x181e5ce10, size 0x30, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0x181e5ce70, size 0x80, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e5ce70, size 0x80, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x181e5d350, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method get_IsCompleted, addr 0x181e5d4c0, size 0x70, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr ReturnToMainThread_Awaiter() ;

// Ctor Parameters [CppParam { name: "timing", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr ReturnToMainThread_Awaiter(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14414};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field timing, offset: 0x0, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing;

/// @brief Field cancellationToken, offset: 0x8, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter, timing) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter, cancellationToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.PlayerLoopTiming, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.ReturnToMainThread
struct CORDL_TYPE ReturnToMainThread {
public:
// Declarations
using Awaiter = ::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter;

/// @brief Method DisposeAsync, addr 0x181e62e70, size 0x90, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::ReturnToMainThread_Awaiter DisposeAsync() ;

/// @brief Method .ctor, addr 0x181e5d350, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReturnToMainThread() ;

// Ctor Parameters [CppParam { name: "playerLoopTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr ReturnToMainThread(::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14415};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field playerLoopTiming, offset: 0x0, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  playerLoopTiming;

/// @brief Field cancellationToken, offset: 0x8, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToMainThread, playerLoopTiming) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToMainThread, cancellationToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::ReturnToMainThread) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
