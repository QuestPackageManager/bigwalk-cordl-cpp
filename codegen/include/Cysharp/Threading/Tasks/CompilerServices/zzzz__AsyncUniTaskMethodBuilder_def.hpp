#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncUniTaskMethodBuilder)
namespace Cysharp::Threading::Tasks::CompilerServices {
class IStateMachineRunnerPromise;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
struct AsyncUniTaskMethodBuilder;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTaskMethodBuilder");
// Dependencies 
namespace Cysharp::Threading::Tasks::CompilerServices {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct CORDL_TYPE AsyncUniTaskMethodBuilder {
public:
// Declarations
 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask  Task;

/// @brief Method AwaitOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine) ;

/// @brief Method Create, addr 0x1802e1e90, size 0x10, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Create() ;

/// @brief Method SetException, addr 0x181e7bf80, size 0x80, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0x180378dc0, size 0x20, virtual false, abstract: false, final false
inline void SetResult() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TStateMachine>
inline void Start(::by_ref<TStateMachine>  stateMachine) ;

/// @brief Method get_Task, addr 0x180378de0, size 0x1f0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask get_Task() ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTaskMethodBuilder() ;

// Ctor Parameters [CppParam { name: "runnerPromise", ty: "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*", modifiers: "", def_value: None }, CppParam { name: "ex", ty: "::System::Exception*", modifiers: "", def_value: None }]
constexpr AsyncUniTaskMethodBuilder(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*  runnerPromise, ::System::Exception*  ex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14759};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field runnerPromise, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*  runnerPromise;

/// @brief Field ex, offset: 0x8, size: 0x8, def value: None
 ::System::Exception*  ex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder, runnerPromise) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder, ex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::CompilerServices
