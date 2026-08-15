#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAwaitableExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAwaitableExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Cysharp::Threading::Tasks {
struct UnityAwaitableExtensions__AsUniTask_d__0;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UnityAwaitableExtensions__AsUniTask_d__1_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
template<typename T>
class Awaitable_1;
}
namespace UnityEngine {
class Awaitable;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UnityAwaitableExtensions;
}
namespace Cysharp::Threading::Tasks {
struct UnityAwaitableExtensions__AsUniTask_d__0;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UnityAwaitableExtensions__AsUniTask_d__1_1;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAwaitableExtensions*);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0);
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAwaitableExtensions*, "Cysharp.Threading.Tasks", "UnityAwaitableExtensions");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0, "Cysharp.Threading.Tasks", "UnityAwaitableExtensions/<AsUniTask>d__0");
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1, "Cysharp.Threading.Tasks", "UnityAwaitableExtensions/<AsUniTask>d__1`1");
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, UnityEngine.Awaitable::Awaiter
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAwaitableExtensions/<AsUniTask>d__0
struct CORDL_TYPE UnityAwaitableExtensions__AsUniTask_d__0 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181e80550, size 0x1a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAwaitableExtensions__AsUniTask_d__0() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "awaitable", ty: "::UnityEngine::Awaitable*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::UnityEngine::Awaitable_Awaiter", modifiers: "", def_value: None }]
constexpr UnityAwaitableExtensions__AsUniTask_d__0(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::UnityEngine::Awaitable*  awaitable, ::UnityEngine::Awaitable_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field awaitable, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Awaitable*  awaitable;

/// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Awaitable_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0, awaitable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0, __u__1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0) == 0x28, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, UnityEngine.Awaitable`1::Awaiter<T>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAwaitableExtensions/<AsUniTask>d__1`1<T>
struct CORDL_TYPE UnityAwaitableExtensions__AsUniTask_d__1_1 {
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
constexpr UnityAwaitableExtensions__AsUniTask_d__1_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "awaitable", ty: "::UnityEngine::Awaitable_1<T>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::UnityEngine::Awaitable_1_Awaiter<T>", modifiers: "", def_value: None }]
constexpr UnityAwaitableExtensions__AsUniTask_d__1_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder, ::UnityEngine::Awaitable_1<T>*  awaitable, ::UnityEngine::Awaitable_1_Awaiter<T>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14542};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T>  __t__builder;

/// @brief Field awaitable, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Awaitable_1<T>*  awaitable;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Awaitable_1_Awaiter<T>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAwaitableExtensions
class CORDL_TYPE UnityAwaitableExtensions : public ::System::Object {
public:
// Declarations
using _AsUniTask_d__0 = ::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__0;

template<typename T>
using _AsUniTask_d__1_1 = ::Cysharp::Threading::Tasks::UnityAwaitableExtensions__AsUniTask_d__1_1<T>;

/// @brief Method AsUniTask, addr 0x181e87000, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask AsUniTask(::UnityEngine::Awaitable*  awaitable) ;

/// @brief Method AsUniTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> AsUniTask(::UnityEngine::Awaitable_1<T>*  awaitable) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAwaitableExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAwaitableExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAwaitableExtensions(UnityAwaitableExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAwaitableExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAwaitableExtensions(UnityAwaitableExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14543};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAwaitableExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
