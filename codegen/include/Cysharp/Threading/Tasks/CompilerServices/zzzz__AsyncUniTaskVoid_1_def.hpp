#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoid_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncUniTaskVoid_1)
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename TStateMachine>
class AsyncUniTaskVoid_1___c;
}
namespace Cysharp::Threading::Tasks::CompilerServices {
class IStateMachineRunner;
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
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename TStateMachine>
class AsyncUniTaskVoid_1;
}
namespace Cysharp::Threading::Tasks::CompilerServices {
template<typename TStateMachine>
class AsyncUniTaskVoid_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTaskVoid`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1___c, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTaskVoid`1/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::CompilerServices {
// cpp template
template<typename TStateMachine>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoid`1/<>c<TStateMachine>
class CORDL_TYPE AsyncUniTaskVoid_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1___c<TStateMachine>*  __9;

static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1___c<TStateMachine>* New_ctor() ;

/// @brief Method <.cctor>b__10_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t __cctor_b__10_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1___c<TStateMachine>* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1___c<TStateMachine>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTaskVoid_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTaskVoid_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncUniTaskVoid_1___c(AsyncUniTaskVoid_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTaskVoid_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncUniTaskVoid_1___c(AsyncUniTaskVoid_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14767};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, System.Object
namespace Cysharp::Threading::Tasks::CompilerServices {
// cpp template
template<typename TStateMachine>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoid`1<TStateMachine>
class CORDL_TYPE AsyncUniTaskVoid_1 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1___c<TStateMachine>;

 __declspec(property(get=get_MoveNext)) ::System::Action*  MoveNext;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*  NextNode;

 __declspec(property(get=get_ReturnAction)) ::System::Action*  ReturnAction;

/// @brief Field <MoveNext>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__MoveNext_k__BackingField, put=__cordl_internal_set__MoveNext_k__BackingField)) ::System::Action*  _MoveNext_k__BackingField;

/// @brief Field <ReturnAction>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ReturnAction_k__BackingField, put=__cordl_internal_set__ReturnAction_k__BackingField)) ::System::Action*  _ReturnAction_k__BackingField;

/// @brief Field nextNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*>  pool;

/// @brief Field stateMachine, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateMachine, put=__cordl_internal_set_stateMachine)) TStateMachine  stateMachine;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner"
constexpr operator  ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus() ;

static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>* New_ctor() ;

/// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Return() ;

/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SetStateMachine(::by_ref<TStateMachine>  stateMachine, ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*>  runnerFieldRef) ;

constexpr ::System::Action* const& __cordl_internal_get__MoveNext_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__MoveNext_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__ReturnAction_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__ReturnAction_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*& __cordl_internal_get_nextNode() ;

constexpr TStateMachine const& __cordl_internal_get_stateMachine() const;

constexpr TStateMachine& __cordl_internal_get_stateMachine() ;

constexpr void __cordl_internal_set__MoveNext_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__ReturnAction_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*  value) ;

constexpr void __cordl_internal_set_stateMachine(TStateMachine  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*> getStaticF_pool() ;

/// @brief Method get_MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Action* get_MoveNext() ;

/// @brief Method get_NextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*> get_NextNode() ;

/// @brief Method get_ReturnAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Action* get_ReturnAction() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner"
constexpr ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner* i___Cysharp__Threading__Tasks__CompilerServices__IStateMachineRunner() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__CompilerServices__AsyncUniTaskVoid_1_TStateMachine___() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTaskVoid_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTaskVoid_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncUniTaskVoid_1(AsyncUniTaskVoid_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncUniTaskVoid_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncUniTaskVoid_1(AsyncUniTaskVoid_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14768};

/// @brief Field <ReturnAction>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ____ReturnAction_k__BackingField;

/// @brief Field stateMachine, offset: 0x18, size: 0x8, def value: None
 TStateMachine  ___stateMachine;

/// @brief Field <MoveNext>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ____MoveNext_k__BackingField;

/// @brief Field nextNode, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoid_1<TStateMachine>*  ___nextNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::CompilerServices
