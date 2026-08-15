#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationTokenExtensions)
namespace Cysharp::Threading::Tasks {
struct CancellationTokenAwaitable;
}
namespace Cysharp::Threading::Tasks {
struct CancellationTokenExtensions__ToCancellationTokenCore_d__6;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationTokenRegistration;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class CancellationTokenExtensions;
}
namespace Cysharp::Threading::Tasks {
struct CancellationTokenExtensions__ToCancellationTokenCore_d__6;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::CancellationTokenExtensions*);
MARK_VAL_T(::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CancellationTokenExtensions*, "Cysharp.Threading.Tasks", "CancellationTokenExtensions");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6, "Cysharp.Threading.Tasks", "CancellationTokenExtensions/<ToCancellationTokenCore>d__6");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CancellationTokenExtensions/<ToCancellationTokenCore>d__6
struct CORDL_TYPE CancellationTokenExtensions__ToCancellationTokenCore_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181e67930, size 0x250, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenExtensions__ToCancellationTokenCore_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: None }, CppParam { name: "cts", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::UniTask_Awaiter", modifiers: "", def_value: None }]
constexpr CancellationTokenExtensions__ToCancellationTokenCore_d__6(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationTokenSource*  cts, ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14178};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x10, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  task;

/// @brief Field cts, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  cts;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6, task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6, cts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6) == 0x38, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CancellationTokenExtensions
class CORDL_TYPE CancellationTokenExtensions : public ::System::Object {
public:
// Declarations
using _ToCancellationTokenCore_d__6 = ::Cysharp::Threading::Tasks::CancellationTokenExtensions__ToCancellationTokenCore_d__6;

/// @brief Field cancellationTokenCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationTokenCallback, put=setStaticF_cancellationTokenCallback)) ::System::Action_1<::System::Object*>*  cancellationTokenCallback;

/// @brief Field disposeCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_disposeCallback, put=setStaticF_disposeCallback)) ::System::Action_1<::System::Object*>*  disposeCallback;

/// @brief Method AddTo, addr 0x181e5d780, size 0x70, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationTokenRegistration AddTo(::System::IDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Callback, addr 0x181e5d7f0, size 0x90, virtual false, abstract: false, final false
static inline void Callback(::System::Object*  state) ;

/// @brief Method DisposeCallback, addr 0x181e5d880, size 0x80, virtual false, abstract: false, final false
static inline void DisposeCallback(::System::Object*  state) ;

/// @brief Method RegisterWithoutCaptureExecutionContext, addr 0x181e5d900, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken  cancellationToken, ::System::Action*  callback) ;

/// @brief Method RegisterWithoutCaptureExecutionContext, addr 0x181e5d9d0, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationTokenRegistration RegisterWithoutCaptureExecutionContext(::System::Threading::CancellationToken  cancellationToken, ::System::Action_1<::System::Object*>*  callback, ::System::Object*  state) ;

/// @brief Method ToCancellationToken, addr 0x181e5dce0, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken ToCancellationToken(::Cysharp::Threading::Tasks::UniTask  task) ;

/// @brief Method ToCancellationToken, addr 0x181e5db40, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Threading::CancellationToken ToCancellationToken(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationToken  linkToken) ;

/// @brief Method ToCancellationToken, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::CancellationToken ToCancellationToken(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// @brief Method ToCancellationToken, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::CancellationToken ToCancellationToken(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Threading::CancellationToken  linkToken) ;

/// @brief Method ToCancellationTokenCore, addr 0x181e5dab0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid ToCancellationTokenCore(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationTokenSource*  cts) ;

/// @brief Method ToUniTask, addr 0x181e5dd90, size 0x180, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::System::Threading::CancellationTokenRegistration> ToUniTask(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitUntilCanceled, addr 0x181e5df10, size 0x20, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::CancellationTokenAwaitable WaitUntilCanceled(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationTokenCallback() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_disposeCallback() ;

static inline void setStaticF_cancellationTokenCallback(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_disposeCallback(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CancellationTokenExtensions(CancellationTokenExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancellationTokenExtensions(CancellationTokenExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14179};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::CancellationTokenExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
