#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncUniTaskVoidMethodBuilder)
namespace Cysharp::Threading::Tasks::CompilerServices {
class IStateMachineRunner;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
struct AsyncUniTaskVoidMethodBuilder;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTaskVoidMethodBuilder");
// Dependencies 
namespace Cysharp::Threading::Tasks::CompilerServices {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct CORDL_TYPE AsyncUniTaskVoidMethodBuilder {
public:
// Declarations
 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTaskVoid  Task;

/// @brief Method AwaitOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine) ;

/// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAwaiter,typename TStateMachine>
inline void AwaitUnsafeOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine) ;

/// @brief Method Create, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Create() ;

/// @brief Method SetException, addr 0x180347180, size 0x60, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0x1803471e0, size 0x220, virtual false, abstract: false, final false
inline void SetResult() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TStateMachine>
inline void Start(::by_ref<TStateMachine>  stateMachine) ;

/// @brief Method get_Task, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid get_Task() ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTaskVoidMethodBuilder() ;

// Ctor Parameters [CppParam { name: "runner", ty: "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*", modifiers: "", def_value: None }]
constexpr AsyncUniTaskVoidMethodBuilder(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*  runner) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14761};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field runner, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*  runner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder, runner) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder) == 0x8, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::CompilerServices
