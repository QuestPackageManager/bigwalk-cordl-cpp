#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTask_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncUniTask_2)
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename TStateMachine,typename T>
class AsyncUniTask_2___c;
}
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename T>
class IStateMachineRunnerPromise_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Threading::Tasks::Sources {
template<typename TResult>
class IValueTaskSource_1;
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
template<typename TStateMachine,typename T>
class AsyncUniTask_2;
}
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename TStateMachine,typename T>
class AsyncUniTask_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTask`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTask`2/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::CompilerServices {
// cpp template
template<typename TStateMachine,typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask`2/<>c<TStateMachine,T>
class CORDL_TYPE AsyncUniTask_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*  __9;

static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>* New_ctor() ;

/// @brief Method <.cctor>b__12_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t __cctor_b__12_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine,T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTask_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTask_2___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncUniTask_2___c(AsyncUniTask_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTask_2___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncUniTask_2___c(AsyncUniTask_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object
namespace Cysharp::Threading::Tasks::CompilerServices {
// cpp template
template<typename TStateMachine,typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask`2<TStateMachine,T>
class CORDL_TYPE AsyncUniTask_2 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2___c<TStateMachine, T>;

 __declspec(property(get=get_MoveNext)) ::System::Action*  MoveNext;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*  NextNode;

 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask_1<T>  Task;

/// @brief Field <MoveNext>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__MoveNext_k__BackingField, put=__cordl_internal_set__MoveNext_k__BackingField)) ::System::Action*  _MoveNext_k__BackingField;

/// @brief Field core, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  core;

/// @brief Field nextNode, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>  pool;

/// @brief Field returnDelegate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnDelegate, put=__cordl_internal_set_returnDelegate)) ::System::Action*  returnDelegate;

/// @brief Field stateMachine, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateMachine, put=__cordl_internal_set_stateMachine)) TStateMachine  stateMachine;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Return() ;

/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetResult(T  result) ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SetStateMachine(::by_ref<TStateMachine>  stateMachine, ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>*>  runnerPromiseFieldRef) ;

/// @brief Method TryReturn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Action* const& __cordl_internal_get__MoveNext_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__MoveNext_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*& __cordl_internal_get_nextNode() ;

constexpr ::System::Action* const& __cordl_internal_get_returnDelegate() const;

constexpr ::System::Action*& __cordl_internal_get_returnDelegate() ;

constexpr TStateMachine const& __cordl_internal_get_stateMachine() const;

constexpr TStateMachine& __cordl_internal_get_stateMachine() ;

constexpr void __cordl_internal_set__MoveNext_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*  value) ;

constexpr void __cordl_internal_set_returnDelegate(::System::Action*  value) ;

constexpr void __cordl_internal_set_stateMachine(TStateMachine  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*> getStaticF_pool() ;

/// @brief Method get_MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Action* get_MoveNext() ;

/// @brief Method get_NextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*> get_NextNode() ;

/// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<T> get_Task() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>"
constexpr ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise_1<T>* i___Cysharp__Threading__Tasks__CompilerServices__IStateMachineRunnerPromise_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__CompilerServices__AsyncUniTask_2_TStateMachine_T___() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTask_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTask_2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncUniTask_2(AsyncUniTask_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTask_2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncUniTask_2(AsyncUniTask_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14772};

/// @brief Field returnDelegate, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___returnDelegate;

/// @brief Field <MoveNext>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ____MoveNext_k__BackingField;

/// @brief Field stateMachine, offset: 0x20, size: 0x8, def value: None
 TStateMachine  ___stateMachine;

/// @brief Field core, offset: 0x28, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  ___core;

/// @brief Field nextNode, offset: 0x50, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTask_2<TStateMachine,T>*  ___nextNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
