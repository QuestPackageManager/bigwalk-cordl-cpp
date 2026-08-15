#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncReactiveProperty_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TriggerEvent_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncReactiveProperty_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1_Enumerator;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1_WaitAsyncSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1_WithoutCurrentEnumerable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncReactiveProperty_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IReadOnlyAsyncReactiveProperty_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITriggerHandler_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskAsyncDisposable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
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
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WaitAsyncSource_AsyncReactiveProperty_1___c;
}
namespace System::Threading::Tasks::Sources {
template<typename TResult>
class IValueTaskSource_1;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1_Enumerator;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1_WaitAsyncSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncReactiveProperty_1_WithoutCurrentEnumerable;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WaitAsyncSource_AsyncReactiveProperty_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_Enumerator);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WithoutCurrentEnumerable);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WaitAsyncSource_AsyncReactiveProperty_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1, "Cysharp.Threading.Tasks", "AsyncReactiveProperty`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_Enumerator, "Cysharp.Threading.Tasks", "AsyncReactiveProperty`1/Enumerator");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource, "Cysharp.Threading.Tasks", "AsyncReactiveProperty`1/WaitAsyncSource");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WithoutCurrentEnumerable, "Cysharp.Threading.Tasks", "AsyncReactiveProperty`1/WithoutCurrentEnumerable");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WaitAsyncSource_AsyncReactiveProperty_1___c, "Cysharp.Threading.Tasks", "AsyncReactiveProperty`1/WaitAsyncSource/<>c");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WaitAsyncSource/<>c<T>
class CORDL_TYPE WaitAsyncSource_AsyncReactiveProperty_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WaitAsyncSource_AsyncReactiveProperty_1___c<T>*  __9;

static inline ::Cysharp::Threading::Tasks::WaitAsyncSource_AsyncReactiveProperty_1___c<T>* New_ctor() ;

/// @brief Method <.cctor>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t __cctor_b__5_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WaitAsyncSource_AsyncReactiveProperty_1___c<T>* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WaitAsyncSource_AsyncReactiveProperty_1___c<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitAsyncSource_AsyncReactiveProperty_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitAsyncSource_AsyncReactiveProperty_1___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitAsyncSource_AsyncReactiveProperty_1___c(WaitAsyncSource_AsyncReactiveProperty_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitAsyncSource_AsyncReactiveProperty_1___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitAsyncSource_AsyncReactiveProperty_1___c(WaitAsyncSource_AsyncReactiveProperty_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14164};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WaitAsyncSource<T>
class CORDL_TYPE AsyncReactiveProperty_1_WaitAsyncSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WaitAsyncSource_AsyncReactiveProperty_1___c<T>;

 __declspec(property(get=Cysharp_Threading_Tasks_ITaskPoolNode_Cysharp_Threading_Tasks_AsyncReactiveProperty_T__WaitAsyncSource__get_NextNode)) ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*  Cysharp_Threading_Tasks_ITaskPoolNode_Cysharp_Threading_Tasks_AsyncReactiveProperty_T__WaitAsyncSource__NextNode;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_T__get_Next, put=Cysharp_Threading_Tasks_ITriggerHandler_T__set_Next)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Cysharp_Threading_Tasks_ITriggerHandler_T__Next;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_T__get_Prev, put=Cysharp_Threading_Tasks_ITriggerHandler_T__set_Prev)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Cysharp_Threading_Tasks_ITriggerHandler_T__Prev;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  _Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  _Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;

/// @brief Field cancellationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationCallback, put=setStaticF_cancellationCallback)) ::System::Action_1<::System::Object*>*  cancellationCallback;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field core, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*  nextNode;

/// @brief Field parent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  parent;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*>  pool;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept;

/// @brief Method CancellationCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CancellationCallback(::System::Object*  state) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Create(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.ITaskPoolNode<Cysharp.Threading.Tasks.AsyncReactiveProperty<T>.WaitAsyncSource>.get_NextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*> Cysharp_Threading_Tasks_ITaskPoolNode_Cysharp_Threading_Tasks_AsyncReactiveProperty_T__WaitAsyncSource__get_NextNode() ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Next, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp_Threading_Tasks_ITriggerHandler_T__get_Next() ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Prev, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp_Threading_Tasks_ITriggerHandler_T__get_Prev() ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Next, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_T__set_Next(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Prev, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_T__set_Prev(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>* New_ctor() ;

/// @brief Method OnCanceled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  ex) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(T  value) ;

/// @brief Method TryReturn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*& __cordl_internal_get_nextNode() ;

constexpr ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*  value) ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationCallback() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*> getStaticF_pool() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__AsyncReactiveProperty_1_WaitAsyncSource_T___() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* i___Cysharp__Threading__Tasks__ITriggerHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept;

static inline void setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncReactiveProperty_1_WaitAsyncSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncReactiveProperty_1_WaitAsyncSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncReactiveProperty_1_WaitAsyncSource(AsyncReactiveProperty_1_WaitAsyncSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReactiveProperty_1_WaitAsyncSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncReactiveProperty_1_WaitAsyncSource(AsyncReactiveProperty_1_WaitAsyncSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14165};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>*  ___nextNode;

/// @brief Field parent, offset: 0x18, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  ___parent;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x28, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field core, offset: 0x40, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  ___core;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  ____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  ____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AsyncReactiveProperty`1/WithoutCurrentEnumerable<T>
class CORDL_TYPE AsyncReactiveProperty_1_WithoutCurrentEnumerable : public ::System::Object {
public:
// Declarations
/// @brief Field parent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  parent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WithoutCurrentEnumerable<T>* New_ctor(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  parent) ;

constexpr ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  parent) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncReactiveProperty_1_WithoutCurrentEnumerable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncReactiveProperty_1_WithoutCurrentEnumerable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncReactiveProperty_1_WithoutCurrentEnumerable(AsyncReactiveProperty_1_WithoutCurrentEnumerable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReactiveProperty_1_WithoutCurrentEnumerable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncReactiveProperty_1_WithoutCurrentEnumerable(AsyncReactiveProperty_1_WithoutCurrentEnumerable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14166};

/// @brief Field parent, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  ___parent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AsyncReactiveProperty`1/Enumerator<T>
class CORDL_TYPE AsyncReactiveProperty_1_Enumerator : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current)) T  Current;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_T__get_Next, put=Cysharp_Threading_Tasks_ITriggerHandler_T__set_Next)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Cysharp_Threading_Tasks_ITriggerHandler_T__Next;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_T__get_Prev, put=Cysharp_Threading_Tasks_ITriggerHandler_T__set_Prev)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Cysharp_Threading_Tasks_ITriggerHandler_T__Prev;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  _Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  _Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;

/// @brief Field cancellationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationCallback, put=setStaticF_cancellationCallback)) ::System::Action_1<::System::Object*>*  cancellationCallback;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field firstCall, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstCall, put=__cordl_internal_set_firstCall)) bool  firstCall;

/// @brief Field isDisposed, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field parent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  parent;

/// @brief Field value, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) T  value;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept;

/// @brief Method CancellationCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CancellationCallback(::System::Object*  state) ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Next, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp_Threading_Tasks_ITriggerHandler_T__get_Next() ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.get_Prev, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* Cysharp_Threading_Tasks_ITriggerHandler_T__get_Prev() ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Next, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_T__set_Next(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.set_Prev, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_T__set_Prev(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

/// @brief Method DisposeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask DisposeAsync() ;

/// @brief Method MoveNextAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> MoveNextAsync() ;

static inline ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_Enumerator<T>* New_ctor(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken, bool  publishCurrentValue) ;

/// @brief Method OnCanceled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  ex) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(T  value) ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr bool const& __cordl_internal_get_firstCall() const;

constexpr bool& __cordl_internal_get_firstCall() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>* const& __cordl_internal_get_parent() const;

constexpr ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*& __cordl_internal_get_parent() ;

constexpr T const& __cordl_internal_get_value() const;

constexpr T& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_firstCall(bool  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_parent(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  value) ;

constexpr void __cordl_internal_set_value(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken, bool  publishCurrentValue) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationCallback() ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Current() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* i___Cysharp__Threading__Tasks__ITriggerHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept;

static inline void setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncReactiveProperty_1_Enumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncReactiveProperty_1_Enumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncReactiveProperty_1_Enumerator(AsyncReactiveProperty_1_Enumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReactiveProperty_1_Enumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncReactiveProperty_1_Enumerator(AsyncReactiveProperty_1_Enumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14167};

/// @brief Field parent, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  ___parent;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x48, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field value, offset: 0x60, size: 0x8, def value: None
 T  ___value;

/// @brief Field isDisposed, offset: 0x68, size: 0x1, def value: None
 bool  ___isDisposed;

/// @brief Field firstCall, offset: 0x69, size: 0x1, def value: None
 bool  ___firstCall;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  ____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  ____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TriggerEvent`1<T>, System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AsyncReactiveProperty`1<T>
class CORDL_TYPE AsyncReactiveProperty_1 : public ::System::Object {
public:
// Declarations
using Enumerator = ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_Enumerator<T>;

using WaitAsyncSource = ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WaitAsyncSource<T>;

using WithoutCurrentEnumerable = ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1_WithoutCurrentEnumerable<T>;

 __declspec(property(get=get_Value, put=set_Value)) T  Value;

/// @brief Field isValueType, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isValueType, put=setStaticF_isValueType)) bool  isValueType;

/// @brief Field latestValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_latestValue, put=__cordl_internal_set_latestValue)) T  latestValue;

/// @brief Field triggerEvent, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_triggerEvent, put=__cordl_internal_set_triggerEvent)) ::Cysharp::Threading::Tasks::TriggerEvent_1<T>  triggerEvent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>* New_ctor(T  value) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WaitAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<T> WaitAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithoutCurrent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* WithoutCurrent() ;

constexpr T const& __cordl_internal_get_latestValue() const;

constexpr T& __cordl_internal_get_latestValue() ;

constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T> const& __cordl_internal_get_triggerEvent() const;

constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T>& __cordl_internal_get_triggerEvent() ;

constexpr void __cordl_internal_set_latestValue(T  value) ;

constexpr void __cordl_internal_set_triggerEvent(::Cysharp::Threading::Tasks::TriggerEvent_1<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  value) ;

static inline bool getStaticF_isValueType() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T get_Value() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>"
constexpr ::Cysharp::Threading::Tasks::IAsyncReactiveProperty_1<T>* i___Cysharp__Threading__Tasks__IAsyncReactiveProperty_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>"
constexpr ::Cysharp::Threading::Tasks::IReadOnlyAsyncReactiveProperty_1<T>* i___Cysharp__Threading__Tasks__IReadOnlyAsyncReactiveProperty_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline T op_Implicit_T(::Cysharp::Threading::Tasks::AsyncReactiveProperty_1<T>*  value) ;

static inline void setStaticF_isValueType(bool  value) ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Value(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncReactiveProperty_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncReactiveProperty_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncReactiveProperty_1(AsyncReactiveProperty_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncReactiveProperty_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncReactiveProperty_1(AsyncReactiveProperty_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14168};

/// @brief Field triggerEvent, offset: 0x10, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::TriggerEvent_1<T>  ___triggerEvent;

/// @brief Field latestValue, offset: 0x28, size: 0x8, def value: None
 T  ___latestValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
