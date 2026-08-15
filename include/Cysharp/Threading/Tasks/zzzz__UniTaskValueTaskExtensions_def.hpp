#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskValueTaskExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskValueTaskExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTaskValueTaskExtensions__AsUniTask_d__2_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskValueTaskExtensions__AsUniTask_d__3;
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
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskValueTaskExtensions;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTaskValueTaskExtensions__AsUniTask_d__2_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskValueTaskExtensions__AsUniTask_d__3;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions*);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1);
MARK_VAL_T(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions*, "Cysharp.Threading.Tasks", "UniTaskValueTaskExtensions");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1, "Cysharp.Threading.Tasks", "UniTaskValueTaskExtensions/<AsUniTask>d__2`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3, "Cysharp.Threading.Tasks", "UniTaskValueTaskExtensions/<AsUniTask>d__3");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, System.Runtime.CompilerServices.ValueTaskAwaiter`1<TResult>, System.Threading.Tasks.ValueTask`1<TResult>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskValueTaskExtensions/<AsUniTask>d__2`1<T>
struct CORDL_TYPE UniTaskValueTaskExtensions__AsUniTask_d__2_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskValueTaskExtensions__AsUniTask_d__2_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::ValueTask_1<T>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter_1<T>", modifiers: "", def_value: None }]
constexpr UniTaskValueTaskExtensions__AsUniTask_d__2_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder, ::System::Threading::Tasks::ValueTask_1<T>  task, ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<T>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder;

/// @brief Field task, offset: 0x20, size: 0x18, def value: None
 ::System::Threading::Tasks::ValueTask_1<T>  task;

/// @brief Field <>u__1, offset: 0x38, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<T>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, System.Runtime.CompilerServices.ValueTaskAwaiter, System.Threading.Tasks.ValueTask
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskValueTaskExtensions/<AsUniTask>d__3
struct CORDL_TYPE UniTaskValueTaskExtensions__AsUniTask_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181e64150, size 0x290, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskValueTaskExtensions__AsUniTask_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::ValueTask", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None }]
constexpr UniTaskValueTaskExtensions__AsUniTask_d__3(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::ValueTask  task, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14273};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x18, size: 0x10, def value: None
 ::System::Threading::Tasks::ValueTask  task;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3, task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3) == 0x38, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskValueTaskExtensions
class CORDL_TYPE UniTaskValueTaskExtensions : public ::System::Object {
public:
// Declarations
template<typename T>
using _AsUniTask_d__2_1 = ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__2_1<T>;

using _AsUniTask_d__3 = ::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions__AsUniTask_d__3;

/// @brief Method AsUniTask, addr 0x181e6c690, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask AsUniTask(::System::Threading::Tasks::ValueTask  task) ;

/// @brief Method AsUniTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> AsUniTask(::System::Threading::Tasks::ValueTask_1<T>  task) ;

/// @brief Method AsValueTask, addr 0x181e6c720, size 0x70, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::ValueTask AsValueTask(::by_ref<::Cysharp::Threading::Tasks::UniTask>  task) ;

/// @brief Method AsValueTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::ValueTask_1<T> AsValueTask(::by_ref<::Cysharp::Threading::Tasks::UniTask_1<T>>  task) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskValueTaskExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskValueTaskExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskValueTaskExtensions(UniTaskValueTaskExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskValueTaskExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskValueTaskExtensions(UniTaskValueTaskExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14274};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskValueTaskExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
