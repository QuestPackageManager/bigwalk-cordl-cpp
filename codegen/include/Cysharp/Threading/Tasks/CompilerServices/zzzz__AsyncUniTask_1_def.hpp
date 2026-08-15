#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTask_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncUniTask_1)
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename TStateMachine>
class AsyncUniTask_1___c;
}
namespace Cysharp::Threading::Tasks::CompilerServices {
class IStateMachineRunnerPromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename TStateMachine>
class AsyncUniTask_1;
}
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename TStateMachine>
class AsyncUniTask_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTask`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTask`1/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::CompilerServices {
// cpp template
template<typename TStateMachine>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask`1/<>c<TStateMachine>
class CORDL_TYPE AsyncUniTask_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*  __9;

static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>* New_ctor() ;

/// @brief Method <.cctor>b__12_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t __cctor_b__12_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTask_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTask_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncUniTask_1___c(AsyncUniTask_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTask_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncUniTask_1___c(AsyncUniTask_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14769};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object
namespace Cysharp::Threading::Tasks::CompilerServices {
// cpp template
template<typename TStateMachine>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask`1<TStateMachine>
class CORDL_TYPE AsyncUniTask_1 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1___c<TStateMachine>;

 __declspec(property(get=get_MoveNext)) ::System::Action*  MoveNext;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*  NextNode;

 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask  Task;

/// @brief Field <MoveNext>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__MoveNext_k__BackingField, put=__cordl_internal_set__MoveNext_k__BackingField)) ::System::Action*  _MoveNext_k__BackingField;

/// @brief Field core, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field nextNode, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>  pool;

/// @brief Field returnDelegate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnDelegate, put=__cordl_internal_set_returnDelegate)) ::System::Action*  returnDelegate;

/// @brief Field stateMachine, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateMachine, put=__cordl_internal_set_stateMachine)) TStateMachine  stateMachine;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise"
constexpr operator  ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Return() ;

/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetResult() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SetStateMachine(::by_ref<TStateMachine>  stateMachine, ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*>  runnerPromiseFieldRef) ;

/// @brief Method TryReturn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Action* const& __cordl_internal_get__MoveNext_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__MoveNext_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*& __cordl_internal_get_nextNode() ;

constexpr ::System::Action* const& __cordl_internal_get_returnDelegate() const;

constexpr ::System::Action*& __cordl_internal_get_returnDelegate() ;

constexpr TStateMachine const& __cordl_internal_get_stateMachine() const;

constexpr TStateMachine& __cordl_internal_get_stateMachine() ;

constexpr void __cordl_internal_set__MoveNext_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*  value) ;

constexpr void __cordl_internal_set_returnDelegate(::System::Action*  value) ;

constexpr void __cordl_internal_set_stateMachine(TStateMachine  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*> getStaticF_pool() ;

/// @brief Method get_MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Action* get_MoveNext() ;

/// @brief Method get_NextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*> get_NextNode() ;

/// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask get_Task() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise"
constexpr ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise* i___Cysharp__Threading__Tasks__CompilerServices__IStateMachineRunnerPromise() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__CompilerServices__AsyncUniTask_1_TStateMachine___() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTask_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTask_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncUniTask_1(AsyncUniTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTask_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncUniTask_1(AsyncUniTask_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14770};

/// @brief Field returnDelegate, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___returnDelegate;

/// @brief Field <MoveNext>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ____MoveNext_k__BackingField;

/// @brief Field stateMachine, offset: 0x20, size: 0x8, def value: None
 TStateMachine  ___stateMachine;

/// @brief Field core, offset: 0x28, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

/// @brief Field nextNode, offset: 0x50, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_1<TStateMachine>*  ___nextNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
