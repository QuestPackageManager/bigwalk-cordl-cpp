#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncUniTaskMethodBuilder_1)
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename T>
class IStateMachineRunnerPromise_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename T>
struct AsyncUniTaskMethodBuilder_1;
}
// Write type traits
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1);
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTaskMethodBuilder`1");
// Dependencies 
namespace Cysharp::Threading::Tasks::CompilerServices {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
struct CORDL_TYPE AsyncUniTaskMethodBuilder_1 {
public:
// Declarations
 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask_1<T>  Task;

/// @brief Method AwaitOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T> Create() ;

/// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetResult(T  result) ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TStateMachine>
inline void Start(::by_ref<TStateMachine>  stateMachine) ;

/// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> get_Task() ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTaskMethodBuilder_1() ;

// Ctor Parameters [CppParam { name: "runnerPromise", ty: "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*", modifiers: "", def_value: None }, CppParam { name: "ex", ty: "::System::Exception*", modifiers: "", def_value: None }, CppParam { name: "result", ty: "T", modifiers: "", def_value: None }]
constexpr AsyncUniTaskMethodBuilder_1(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*  runnerPromise, ::System::Exception*  ex, T  result) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14760};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field runnerPromise, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*  runnerPromise;

/// @brief Field ex, offset: 0x8, size: 0x8, def value: None
 ::System::Exception*  ex;

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 T  result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
