#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncLazy_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AsyncLazy_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskCompletionSource_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1_Awaiter;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
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
template<typename T>
class AsyncLazy_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AsyncLazy_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AsyncLazy_1, "Cysharp.Threading.Tasks", "AsyncLazy`1");
// Dependencies Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AsyncLazy`1<T>
class CORDL_TYPE AsyncLazy_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask_1<T>  Task;

/// @brief Field awaiter, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>  awaiter;

/// @brief Field completionSource, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_completionSource, put=__cordl_internal_set_completionSource)) ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  completionSource;

/// @brief Field continuation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_continuation, put=setStaticF_continuation)) ::System::Action_1<::System::Object*>*  continuation;

/// @brief Field initialized, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field syncLock, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncLock, put=__cordl_internal_set_syncLock)) ::System::Object*  syncLock;

/// @brief Field taskFactory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_taskFactory, put=__cordl_internal_set_taskFactory)) ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  taskFactory;

/// @brief Method EnsureInitialized, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void EnsureInitialized() ;

/// @brief Method EnsureInitializedCore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void EnsureInitializedCore() ;

/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> GetAwaiter() ;

static inline ::Cysharp::Threading::Tasks::AsyncLazy_1<T>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

static inline ::Cysharp::Threading::Tasks::AsyncLazy_1<T>* New_ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  taskFactory) ;

/// @brief Method SetCompletionSource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCompletionSource(::by_ref<::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>>  awaiter) ;

/// @brief Method SetCompletionSource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void SetCompletionSource(::System::Object*  state) ;

constexpr ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T> const& __cordl_internal_get_awaiter() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>& __cordl_internal_get_awaiter() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* const& __cordl_internal_get_completionSource() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*& __cordl_internal_get_completionSource() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr ::System::Object* const& __cordl_internal_get_syncLock() const;

constexpr ::System::Object*& __cordl_internal_get_syncLock() ;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>* const& __cordl_internal_get_taskFactory() const;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*& __cordl_internal_get_taskFactory() ;

constexpr void __cordl_internal_set_awaiter(::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>  value) ;

constexpr void __cordl_internal_set_completionSource(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_syncLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_taskFactory(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  taskFactory) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_continuation() ;

/// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> get_Task() ;

static inline void setStaticF_continuation(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncLazy_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncLazy_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncLazy_1(AsyncLazy_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncLazy_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncLazy_1(AsyncLazy_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14161};

/// @brief Field taskFactory, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  ___taskFactory;

/// @brief Field completionSource, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  ___completionSource;

/// @brief Field awaiter, offset: 0x20, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<T>  ___awaiter;

/// @brief Field syncLock, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___syncLock;

/// @brief Field initialized, offset: 0x40, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
