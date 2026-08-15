#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ReturnToSynchronizationContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ReturnToSynchronizationContext)
namespace Cysharp::Threading::Tasks {
struct ReturnToSynchronizationContext_Awaiter;
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
struct ReturnToSynchronizationContext;
}
namespace Cysharp::Threading::Tasks {
struct ReturnToSynchronizationContext_Awaiter;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext);
MARK_VAL_T(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext, "Cysharp.Threading.Tasks", "ReturnToSynchronizationContext");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter, "Cysharp.Threading.Tasks", "ReturnToSynchronizationContext/Awaiter");
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.ReturnToSynchronizationContext/Awaiter
struct CORDL_TYPE ReturnToSynchronizationContext_Awaiter {
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

/// @brief Method GetAwaiter, addr 0x180503ad0, size 0x20, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter GetAwaiter() ;

/// @brief Method GetResult, addr 0x18175b1d0, size 0x10, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0x181e5cef0, size 0x80, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e5cef0, size 0x80, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x181e5d390, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::SynchronizationContext*  synchronizationContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Threading::SendOrPostCallback* getStaticF_switchToCallback() ;

/// @brief Method get_IsCompleted, addr 0x181e5d480, size 0x40, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

static inline void setStaticF_switchToCallback(::System::Threading::SendOrPostCallback*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReturnToSynchronizationContext_Awaiter() ;

// Ctor Parameters [CppParam { name: "synchronizationContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None }, CppParam { name: "dontPostWhenSameContext", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr ReturnToSynchronizationContext_Awaiter(::System::Threading::SynchronizationContext*  synchronizationContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14422};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field synchronizationContext, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  synchronizationContext;

/// @brief Field dontPostWhenSameContext, offset: 0x8, size: 0x1, def value: None
 bool  dontPostWhenSameContext;

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter, synchronizationContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter, dontPostWhenSameContext) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter, cancellationToken) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.ReturnToSynchronizationContext
struct CORDL_TYPE ReturnToSynchronizationContext {
public:
// Declarations
using Awaiter = ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter;

/// @brief Method DisposeAsync, addr 0x181e62f00, size 0xf0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext_Awaiter DisposeAsync() ;

/// @brief Method .ctor, addr 0x181e5d390, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::SynchronizationContext*  syncContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken) ;

// Ctor Parameters []
// @brief default ctor
constexpr ReturnToSynchronizationContext() ;

// Ctor Parameters [CppParam { name: "syncContext", ty: "::System::Threading::SynchronizationContext*", modifiers: "", def_value: None }, CppParam { name: "dontPostWhenSameContext", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }]
constexpr ReturnToSynchronizationContext(::System::Threading::SynchronizationContext*  syncContext, bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14423};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field syncContext, offset: 0x0, size: 0x8, def value: None
 ::System::Threading::SynchronizationContext*  syncContext;

/// @brief Field dontPostWhenSameContext, offset: 0x8, size: 0x1, def value: None
 bool  dontPostWhenSameContext;

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext, syncContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext, dontPostWhenSameContext) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext, cancellationToken) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::ReturnToSynchronizationContext) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
