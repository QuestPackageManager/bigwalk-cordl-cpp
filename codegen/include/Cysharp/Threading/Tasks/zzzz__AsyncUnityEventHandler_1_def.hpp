#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncUnityEventHandler_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncUnityEventHandler_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncDeselectEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncEndEditEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncEndTextSelectionEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncSelectEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncSubmitEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncTextSelectionEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncValueChangedEventHandler_1;
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
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncUnityEventHandler_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1, "Cysharp.Threading.Tasks", "AsyncUnityEventHandler`1");
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<T>
class CORDL_TYPE AsyncUnityEventHandler_1 : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::UnityEngine::Events::UnityAction_1<T>*  action;

/// @brief Field callOnce, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_callOnce, put=__cordl_internal_set_callOnce)) bool  callOnce;

/// @brief Field cancellationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationCallback, put=setStaticF_cancellationCallback)) ::System::Action_1<::System::Object*>*  cancellationCallback;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x48, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  core;

/// @brief Field isDisposed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field registration, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_registration, put=__cordl_internal_set_registration)) ::System::Threading::CancellationTokenRegistration  registration;

/// @brief Field unityEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityEvent, put=__cordl_internal_set_unityEvent)) ::UnityEngine::Events::UnityEvent_1<T>*  unityEvent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept;

/// @brief Method CancellationCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CancellationCallback(::System::Object*  state) ;

/// @brief Method Cysharp.Threading.Tasks.IAsyncDeselectEventHandler<T>.OnDeselectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp_Threading_Tasks_IAsyncDeselectEventHandler_T__OnDeselectAsync() ;

/// @brief Method Cysharp.Threading.Tasks.IAsyncEndEditEventHandler<T>.OnEndEditAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp_Threading_Tasks_IAsyncEndEditEventHandler_T__OnEndEditAsync() ;

/// @brief Method Cysharp.Threading.Tasks.IAsyncEndTextSelectionEventHandler<T>.OnEndTextSelectionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp_Threading_Tasks_IAsyncEndTextSelectionEventHandler_T__OnEndTextSelectionAsync() ;

/// @brief Method Cysharp.Threading.Tasks.IAsyncSelectEventHandler<T>.OnSelectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp_Threading_Tasks_IAsyncSelectEventHandler_T__OnSelectAsync() ;

/// @brief Method Cysharp.Threading.Tasks.IAsyncSubmitEventHandler<T>.OnSubmitAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp_Threading_Tasks_IAsyncSubmitEventHandler_T__OnSubmitAsync() ;

/// @brief Method Cysharp.Threading.Tasks.IAsyncTextSelectionEventHandler<T>.OnTextSelectionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp_Threading_Tasks_IAsyncTextSelectionEventHandler_T__OnTextSelectionAsync() ;

/// @brief Method Cysharp.Threading.Tasks.IAsyncValueChangedEventHandler<T>.OnValueChangedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp_Threading_Tasks_IAsyncValueChangedEventHandler_T__OnValueChangedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource<T>.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T Cysharp_Threading_Tasks_IUniTaskSource_T__GetResult(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Invoke(T  result) ;

static inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>* New_ctor(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce) ;

/// @brief Method OnInvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<T> OnInvokeAsync() ;

constexpr ::UnityEngine::Events::UnityAction_1<T>* const& __cordl_internal_get_action() const;

constexpr ::UnityEngine::Events::UnityAction_1<T>*& __cordl_internal_get_action() ;

constexpr bool const& __cordl_internal_get_callOnce() const;

constexpr bool& __cordl_internal_get_callOnce() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& __cordl_internal_get_core() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_registration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_registration() ;

constexpr ::UnityEngine::Events::UnityEvent_1<T>* const& __cordl_internal_get_unityEvent() const;

constexpr ::UnityEngine::Events::UnityEvent_1<T>*& __cordl_internal_get_unityEvent() ;

constexpr void __cordl_internal_set_action(::UnityEngine::Events::UnityAction_1<T>*  value) ;

constexpr void __cordl_internal_set_callOnce(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationCallback() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::IAsyncDeselectEventHandler_1<T>* i___Cysharp__Threading__Tasks__IAsyncDeselectEventHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<T>* i___Cysharp__Threading__Tasks__IAsyncEndEditEventHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::IAsyncEndTextSelectionEventHandler_1<T>* i___Cysharp__Threading__Tasks__IAsyncEndTextSelectionEventHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::IAsyncSelectEventHandler_1<T>* i___Cysharp__Threading__Tasks__IAsyncSelectEventHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::IAsyncSubmitEventHandler_1<T>* i___Cysharp__Threading__Tasks__IAsyncSubmitEventHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::IAsyncTextSelectionEventHandler_1<T>* i___Cysharp__Threading__Tasks__IAsyncTextSelectionEventHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<T>* i___Cysharp__Threading__Tasks__IAsyncValueChangedEventHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_T_() noexcept;

static inline void setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncUnityEventHandler_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncUnityEventHandler_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncUnityEventHandler_1(AsyncUnityEventHandler_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncUnityEventHandler_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncUnityEventHandler_1(AsyncUnityEventHandler_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14536};

/// @brief Field action, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<T>*  ___action;

/// @brief Field unityEvent, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<T>*  ___unityEvent;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field registration, offset: 0x28, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___registration;

/// @brief Field isDisposed, offset: 0x40, size: 0x1, def value: None
 bool  ___isDisposed;

/// @brief Field callOnce, offset: 0x41, size: 0x1, def value: None
 bool  ___callOnce;

/// @brief Field core, offset: 0x48, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
