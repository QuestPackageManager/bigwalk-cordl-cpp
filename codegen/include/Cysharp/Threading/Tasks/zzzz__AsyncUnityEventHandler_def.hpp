#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncUnityEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncUnityEventHandler)
namespace Cysharp::Threading::Tasks {
class IAsyncClickEventHandler;
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
class UnityAction;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class AsyncUnityEventHandler;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::AsyncUnityEventHandler*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AsyncUnityEventHandler*, "Cysharp.Threading.Tasks", "AsyncUnityEventHandler");
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AsyncUnityEventHandler
class CORDL_TYPE AsyncUnityEventHandler : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::UnityEngine::Events::UnityAction*  action;

/// @brief Field callOnce, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_callOnce, put=__cordl_internal_set_callOnce)) bool  callOnce;

/// @brief Field cancellationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationCallback, put=setStaticF_cancellationCallback)) ::System::Action_1<::System::Object*>*  cancellationCallback;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x48, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field isDisposed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field registration, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get_registration, put=__cordl_internal_set_registration)) ::System::Threading::CancellationTokenRegistration  registration;

/// @brief Field unityEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityEvent, put=__cordl_internal_set_unityEvent)) ::UnityEngine::Events::UnityEvent*  unityEvent;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IAsyncClickEventHandler"
constexpr operator  ::Cysharp::Threading::Tasks::IAsyncClickEventHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method CancellationCallback, addr 0x181e7c000, size 0xd0, virtual false, abstract: false, final false
static inline void CancellationCallback(::System::Object*  state) ;

/// @brief Method Cysharp.Threading.Tasks.IAsyncClickEventHandler.OnClickAsync, addr 0x181e7c0d0, size 0x70, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_IAsyncClickEventHandler_OnClickAsync() ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x181e7c140, size 0x60, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetStatus, addr 0x180ec9750, size 0x90, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.OnCompleted, addr 0x180ec97e0, size 0x7e0, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.UnsafeGetStatus, addr 0x180dea850, size 0x2cc0, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus() ;

/// @brief Method Dispose, addr 0x181e7c1a0, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Invoke, addr 0x180ec9fc0, size 0x5870, virtual false, abstract: false, final false
inline void Invoke() ;

static inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler* New_ctor(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce) ;

/// @brief Method OnInvokeAsync, addr 0x181e7c0d0, size 0x70, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask OnInvokeAsync() ;

constexpr ::UnityEngine::Events::UnityAction* const& __cordl_internal_get_action() const;

constexpr ::UnityEngine::Events::UnityAction*& __cordl_internal_get_action() ;

constexpr bool const& __cordl_internal_get_callOnce() const;

constexpr bool& __cordl_internal_get_callOnce() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr bool const& __cordl_internal_get_isDisposed() const;

constexpr bool& __cordl_internal_get_isDisposed() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_registration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_registration() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_unityEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_unityEvent() ;

constexpr void __cordl_internal_set_action(::UnityEngine::Events::UnityAction*  value) ;

constexpr void __cordl_internal_set_callOnce(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_unityEvent(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x181e7c250, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationCallback() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IAsyncClickEventHandler"
constexpr ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* i___Cysharp__Threading__Tasks__IAsyncClickEventHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

static inline void setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncUnityEventHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncUnityEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncUnityEventHandler(AsyncUnityEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncUnityEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncUnityEventHandler(AsyncUnityEventHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14535};

/// @brief Field action, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction*  ___action;

/// @brief Field unityEvent, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___unityEvent;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field registration, offset: 0x28, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___registration;

/// @brief Field isDisposed, offset: 0x40, size: 0x1, def value: None
 bool  ___isDisposed;

/// @brief Field callOnce, offset: 0x41, size: 0x1, def value: None
 bool  ___callOnce;

/// @brief Field core, offset: 0x48, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncUnityEventHandler, ___action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncUnityEventHandler, ___unityEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncUnityEventHandler, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncUnityEventHandler, ___registration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncUnityEventHandler, ___isDisposed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncUnityEventHandler, ___callOnce) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AsyncUnityEventHandler, ___core) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::AsyncUnityEventHandler) == 0x70, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
