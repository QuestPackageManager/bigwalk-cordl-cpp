#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TriggerEvent_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AsyncTriggerBase_1)
namespace Cysharp::Threading::Tasks::Triggers {
template<typename T>
class AsyncTriggerBase_1_AsyncTriggerEnumerator;
}
namespace Cysharp::Threading::Tasks::Triggers {
template<typename T>
class AsyncTriggerBase_1_AwakeMonitor;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
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
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
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
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
template<typename T>
class AsyncTriggerBase_1;
}
namespace Cysharp::Threading::Tasks::Triggers {
template<typename T>
class AsyncTriggerBase_1_AsyncTriggerEnumerator;
}
namespace Cysharp::Threading::Tasks::Triggers {
template<typename T>
class AsyncTriggerBase_1_AwakeMonitor;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1, "Cysharp.Threading.Tasks.Triggers", "AsyncTriggerBase`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator, "Cysharp.Threading.Tasks.Triggers", "AsyncTriggerBase`1/AsyncTriggerEnumerator");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor, "Cysharp.Threading.Tasks.Triggers", "AsyncTriggerBase`1/AwakeMonitor");
// Dependencies Cysharp.Threading.Tasks.MoveNextSource, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks::Triggers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1/AsyncTriggerEnumerator<T>
class CORDL_TYPE AsyncTriggerBase_1_AsyncTriggerEnumerator : public ::Cysharp::Threading::Tasks::MoveNextSource {
public:
// Declarations
 __declspec(property(get=get_Current, put=set_Current)) T  Current;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_T__get_Next, put=Cysharp_Threading_Tasks_ITriggerHandler_T__set_Next)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Cysharp_Threading_Tasks_ITriggerHandler_T__Next;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_T__get_Prev, put=Cysharp_Threading_Tasks_ITriggerHandler_T__set_Prev)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Cysharp_Threading_Tasks_ITriggerHandler_T__Prev;

/// @brief Field <Current>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Current_k__BackingField, put=__cordl_internal_set__Current_k__BackingField)) T  _Current_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  _Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  _Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;

/// @brief Field called, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_called, put=__cordl_internal_set_called)) bool  called;

/// @brief Field cancellationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationCallback, put=setStaticF_cancellationCallback)) ::System::Action_1<::System::Object*>*  cancellationCallback;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field isDisposed, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field parent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<T>  parent;

/// @brief Field registration, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_registration, put=__cordl_internal_set_registration)) ::System::Threading::CancellationTokenRegistration  registration;

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

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>* New_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCanceled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted() ;

/// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnError(::System::Exception*  ex) ;

/// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnNext(T  value) ;

constexpr T const& __cordl_internal_get__Current_k__BackingField() const;

constexpr T& __cordl_internal_get__Current_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() ;

constexpr bool const& __cordl_internal_get_called() const;

constexpr bool& __cordl_internal_get_called() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr ::UnityW<T> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<T>& __cordl_internal_get_parent() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_registration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_registration() ;

constexpr void __cordl_internal_set__Current_k__BackingField(T  value) ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

constexpr void __cordl_internal_set_called(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<T>  value) ;

constexpr void __cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  parent, ::System::Threading::CancellationToken  cancellationToken) ;

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

/// @brief Method set_Current, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Current(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTriggerBase_1_AsyncTriggerEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerBase_1_AsyncTriggerEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTriggerBase_1_AsyncTriggerEnumerator(AsyncTriggerBase_1_AsyncTriggerEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerBase_1_AsyncTriggerEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTriggerBase_1_AsyncTriggerEnumerator(AsyncTriggerBase_1_AsyncTriggerEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14556};

/// @brief Field parent, offset: 0x38, size: 0x8, def value: None
 ::UnityW<T>  ___parent;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field registration, offset: 0x48, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___registration;

/// @brief Field called, offset: 0x60, size: 0x1, def value: None
 bool  ___called;

/// @brief Field isDisposed, offset: 0x61, size: 0x1, def value: None
 bool  ___isDisposed;

/// @brief Field <Current>k__BackingField, offset: 0x68, size: 0x8, def value: None
 T  ____Current_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  ____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  ____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Triggers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1/AwakeMonitor<T>
class CORDL_TYPE AsyncTriggerBase_1_AwakeMonitor : public ::System::Object {
public:
// Declarations
/// @brief Field trigger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_trigger, put=__cordl_internal_set_trigger)) ::UnityW<T>  trigger;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>* New_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  trigger) ;

constexpr ::UnityW<T> const& __cordl_internal_get_trigger() const;

constexpr ::UnityW<T>& __cordl_internal_get_trigger() ;

constexpr void __cordl_internal_set_trigger(::UnityW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  trigger) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTriggerBase_1_AwakeMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerBase_1_AwakeMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTriggerBase_1_AwakeMonitor(AsyncTriggerBase_1_AwakeMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerBase_1_AwakeMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTriggerBase_1_AwakeMonitor(AsyncTriggerBase_1_AwakeMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14557};

/// @brief Field trigger, offset: 0x10, size: 0x8, def value: None
 ::UnityW<T>  ___trigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
// Dependencies Cysharp.Threading.Tasks.TriggerEvent`1<T>, UnityEngine.MonoBehaviour
namespace Cysharp::Threading::Tasks::Triggers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T>
class CORDL_TYPE AsyncTriggerBase_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AsyncTriggerEnumerator = ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AsyncTriggerEnumerator<T>;

using AwakeMonitor = ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1_AwakeMonitor<T>;

/// @brief Field calledAwake, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_calledAwake, put=__cordl_internal_set_calledAwake)) bool  calledAwake;

/// @brief Field calledDestroy, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_calledDestroy, put=__cordl_internal_set_calledDestroy)) bool  calledDestroy;

/// @brief Field triggerEvent, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_triggerEvent, put=__cordl_internal_set_triggerEvent)) ::Cysharp::Threading::Tasks::TriggerEvent_1<T>  triggerEvent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept;

/// @brief Method AddHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddHandler(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  handler) ;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetAsyncEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RaiseEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RaiseEvent(T  value) ;

/// @brief Method RemoveHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveHandler(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  handler) ;

constexpr bool const& __cordl_internal_get_calledAwake() const;

constexpr bool& __cordl_internal_get_calledAwake() ;

constexpr bool const& __cordl_internal_get_calledDestroy() const;

constexpr bool& __cordl_internal_get_calledDestroy() ;

constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T> const& __cordl_internal_get_triggerEvent() const;

constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<T>& __cordl_internal_get_triggerEvent() ;

constexpr void __cordl_internal_set_calledAwake(bool  value) ;

constexpr void __cordl_internal_set_calledDestroy(bool  value) ;

constexpr void __cordl_internal_set_triggerEvent(::Cysharp::Threading::Tasks::TriggerEvent_1<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncTriggerBase_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTriggerBase_1(AsyncTriggerBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTriggerBase_1(AsyncTriggerBase_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14558};

/// @brief Field triggerEvent, offset: 0x20, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::TriggerEvent_1<T>  ___triggerEvent;

/// @brief Field calledAwake, offset: 0x38, size: 0x1, def value: None
 bool  ___calledAwake;

/// @brief Field calledDestroy, offset: 0x39, size: 0x1, def value: None
 bool  ___calledDestroy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
