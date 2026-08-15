#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToSynchronizationContextAwaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SwitchToSynchronizationContextAwaitable)
namespace Cysharp::Threading::Tasks {
struct SwitchToSynchronizationContextAwaitable_Awaiter;
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
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct SwitchToSynchronizationContextAwaitable;
}
namespace Cysharp::Threading::Tasks {
struct SwitchToSynchronizationContextAwaitable_Awaiter;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable);
MARK_VAL_T(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable, "Cysharp.Threading.Tasks", "SwitchToSynchronizationContextAwaitable");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter, "Cysharp.Threading.Tasks", "SwitchToSynchronizationContextAwaitable/Awaiter");
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.SwitchToSynchronizationContextAwaitable/Awaiter
struct CORDL_TYPE SwitchToSynchronizationContextAwaitable_Awaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Field switchToCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_switchToCallback, put=setStaticF_switchToCallback)) ::System::Threading::SendOrPostCallback*  switchToCallback;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method Callback, addr 0x181e5cd50, size 0x60, virtual false, abstract: false, final false
static inline void Callback(::System::Object*  state) ;

/// @brief Method GetResult, addr 0x181e5ce10, size 0x30, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0x181e5d0c0, size 0x80, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e5d0c0, size 0x80, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x180e981b0, size 0x310, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Threading::SendOrPostCallback* getStaticF_switchToCallback() ;

/// @brief Method get_IsCompleted, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

static inline void setStaticF_switchToCallback(::System::Threading::SendOrPostCallback*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SwitchToSynchronizationContextAwaitable_Awaiter() ;

// Ctor Parameters [CppParam { name: "synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr SwitchToSynchronizationContextAwaitable_Awaiter(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14420};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field synchronizationContext, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  synchronizationContext;

/// @brief Field cancellationToken, offset: 0x8, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter, synchronizationContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter, cancellationToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.SwitchToSynchronizationContextAwaitable
struct CORDL_TYPE SwitchToSynchronizationContextAwaitable {
public:
// Declarations
using Awaiter = ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter;

/// @brief Method GetAwaiter, addr 0x181e62ff0, size 0xa0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable_Awaiter GetAwaiter() ;

/// @brief Method .ctor, addr 0x180e981b0, size 0x310, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters []
// @brief default ctor
constexpr SwitchToSynchronizationContextAwaitable() ;

// Ctor Parameters [CppParam { name: "synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr SwitchToSynchronizationContextAwaitable(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14421};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field synchronizationContext, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  synchronizationContext;

/// @brief Field cancellationToken, offset: 0x8, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable, synchronizationContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable, cancellationToken) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
