#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncLazy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncLazy)
namespace Cysharp::Threading::Tasks {
class UniTaskCompletionSource;
}
namespace Cysharp::Threading::Tasks {
struct UniTask_Awaiter;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class AsyncLazy;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::AsyncLazy*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AsyncLazy*, "Cysharp.Threading.Tasks", "AsyncLazy");
// Dependencies Cysharp.Threading.Tasks.UniTask::Awaiter, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AsyncLazy
class CORDL_TYPE AsyncLazy : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask  Task;

/// @brief Field awaiter, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::Cysharp::Threading::Tasks::UniTask_Awaiter  awaiter;

/// @brief Field completionSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_completionSource, put=__cordl_internal_set_completionSource)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  completionSource;

/// @brief Field continuation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_continuation, put=setStaticF_continuation)) ::System::Action_1<::System::Object*>*  continuation;

/// @brief Field initialized, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field syncLock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncLock, put=__cordl_internal_set_syncLock)) ::System::Object*  syncLock;

/// @brief Field taskFactory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskFactory, put=__cordl_internal_set_taskFactory)) ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  taskFactory;

/// @brief Method EnsureInitialized, addr 0x181e5c140, size 0x20, virtual false, abstract: false, final false
inline void EnsureInitialized() ;

/// @brief Method EnsureInitializedCore, addr 0x181e5bfa0, size 0x1a0, virtual false, abstract: false, final false
inline void EnsureInitializedCore() ;

/// @brief Method GetAwaiter, addr 0x181e5c160, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter() ;

static inline ::Cysharp::Threading::Tasks::AsyncLazy* New_ctor(::Cysharp::Threading::Tasks::UniTask  task) ;

static inline ::Cysharp::Threading::Tasks::AsyncLazy* New_ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  taskFactory) ;

/// @brief Method SetCompletionSource, addr 0x181e5c1d0, size 0x80, virtual false, abstract: false, final false
inline void SetCompletionSource(::by_ref<::Cysharp::Threading::Tasks::UniTask_Awaiter>  awaiter) ;

/// @brief Method SetCompletionSource, addr 0x181e5c250, size 0x160, virtual false, abstract: false, final false
static inline void SetCompletionSource(::System::Object*  state) ;

constexpr ::Cysharp::Threading::Tasks::UniTask_Awaiter const& __cordl_internal_get_awaiter() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_Awaiter& __cordl_internal_get_awaiter() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource* const& __cordl_internal_get_completionSource() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource*& __cordl_internal_get_completionSource() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::System::Object* const& __cordl_internal_get_syncLock() const;

constexpr ::System::Object*& __cordl_internal_get_syncLock() ;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* const& __cordl_internal_get_taskFactory() const;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*& __cordl_internal_get_taskFactory() ;

constexpr void __cordl_internal_set_awaiter(::Cysharp::Threading::Tasks::UniTask_Awaiter  value) ;

constexpr void __cordl_internal_set_completionSource(::Cysharp::Threading::Tasks::UniTaskCompletionSource*  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_syncLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_taskFactory(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  value) ;

/// @brief Method .ctor, addr 0x181e5c410, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask  task) ;

/// @brief Method .ctor, addr 0x181e5c530, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  taskFactory) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_continuation() ;

/// @brief Method get_Task, addr 0x181e5c590, size 0x60, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask get_Task() ;

static inline void setStaticF_continuation(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncLazy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncLazy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncLazy(AsyncLazy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncLazy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncLazy(AsyncLazy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14160};

/// @brief Field taskFactory, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  ___taskFactory;

/// @brief Field completionSource, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource*  ___completionSource;

/// @brief Field awaiter, offset: 0x20, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask_Awaiter  ___awaiter;

/// @brief Field syncLock, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ___syncLock;

/// @brief Field initialized, offset: 0x38, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncLazy, ___taskFactory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncLazy, ___completionSource) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncLazy, ___awaiter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncLazy, ___syncLock) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncLazy, ___initialized) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::AsyncLazy) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
