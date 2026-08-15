#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAsyncExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAsyncExtensions)
namespace Cysharp::Threading::Tasks {
class AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncOperationConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
struct AsyncUnit;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncUnityEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
class AsyncUnityEventHandler;
}
namespace Cysharp::Threading::Tasks {
class IAsyncClickEventHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncEndEditEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncValueChangedEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
class ResourceRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1_Awaiter;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask_Awaiter;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_AssetBundleCreateRequestAwaiter;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_AssetBundleRequestAwaiter;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_AsyncOperationAwaiter;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AsyncOperationConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_JobHandlePromise;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_ResourceRequestAwaiter;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_ResourceRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions__WaitAsync_d__11;
}
namespace Cysharp::Threading::Tasks {
class UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
class ICriticalNotifyCompletion;
}
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
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
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class IProgress_1;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Dropdown;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class ScrollRect;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ResourceRequest;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncOperationConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class ResourceRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AsyncOperationConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_JobHandlePromise;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_ResourceRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_AssetBundleCreateRequestAwaiter;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_AssetBundleRequestAwaiter;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_AsyncOperationAwaiter;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_ResourceRequestAwaiter;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter;
}
namespace Cysharp::Threading::Tasks {
struct UnityAsyncExtensions__WaitAsync_d__11;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter);
MARK_VAL_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AsyncOperationConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/JobHandlePromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/ResourceRequestConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleCreateRequestAwaiter");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestAllAssetsAwaiter");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestAwaiter");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AsyncOperationAwaiter");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/ResourceRequestAwaiter");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/UnityWebRequestAsyncOperationAwaiter");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/<WaitAsync>d__11");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsAwaiter
struct CORDL_TYPE UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetAwaiter, addr 0x1804f6880, size 0x10, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter GetAwaiter() ;

/// @brief Method GetResult, addr 0x181e73730, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::Object>> GetResult() ;

/// @brief Method OnCompleted, addr 0x181e72ee0, size 0x20, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e72f00, size 0x90, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x181e72f90, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AssetBundleRequest*  asyncOperation) ;

/// @brief Method get_IsCompleted, addr 0x181e72fd0, size 0xf0, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter() ;

// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AssetBundleRequest*", modifiers: "", def_value: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: None }]
constexpr UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field asyncOperation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::AssetBundleRequest*  asyncOperation;

/// @brief Field continuationAction, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter, asyncOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter, continuationAction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c
class CORDL_TYPE AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Action_1<::System::Object*>*  __9__14_0;

static inline ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <Create>b__14_0, addr 0x181e82150, size 0x50, virtual false, abstract: false, final false
inline void _Create_b__14_0(::System::Object*  state) ;

/// @brief Method <.cctor>b__4_0, addr 0x181e823e0, size 0x40, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*  value) ;

static inline void setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c(AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c(AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14499};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::AssetBundleRequest*  asyncOperation;

/// @brief Field cancelImmediately, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_cancelImmediately, put=__cordl_internal_set_cancelImmediately)) bool  cancelImmediately;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field completed, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continuationAction, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuationAction, put=__cordl_internal_set_continuationAction)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

/// @brief Field core, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*() noexcept;

/// @brief Method Continuation, addr 0x181e737e0, size 0x70, virtual false, abstract: false, final false
inline void Continuation(::UnityEngine::AsyncOperation*  _) ;

/// @brief Method Create, addr 0x181e73850, size 0x2f0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* Create(::UnityEngine::AssetBundleRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x181e73b40, size 0x10, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x181e73b50, size 0x70, virtual true, abstract: false, final true
inline ::ArrayW<::UnityW<::UnityEngine::Object>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x180e57af0, size 0x50, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x181e73bc0, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0x180e57b40, size 0x9a0, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x181e73ca0, size 0x90, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x180d18070, size 0x19360, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::AssetBundleRequest* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::AssetBundleRequest*& __cordl_internal_get_asyncOperation() ;

constexpr bool const& __cordl_internal_get_cancelImmediately() const;

constexpr bool& __cordl_internal_get_cancelImmediately() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& __cordl_internal_get_continuationAction() const;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_continuationAction() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleRequest*  value) ;

constexpr void __cordl_internal_set_cancelImmediately(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x181e73de0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x1802f4a60, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___ArrayW___UnityW___UnityEngine__Object___() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* i___System__Threading__Tasks__Sources__IValueTaskSource_1___ArrayW___UnityW___UnityEngine__Object___() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource(UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource(UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14500};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AssetBundleRequest*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field cancelImmediately, offset: 0x48, size: 0x1, def value: None
 bool  ___cancelImmediately;

/// @brief Field completed, offset: 0x49, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field core, offset: 0x50, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  ___core;

/// @brief Field continuationAction, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  ___continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___cancellationTokenRegistration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___cancelImmediately) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___completed) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___core) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___continuationAction) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource) == 0x80, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c
class CORDL_TYPE AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Action_1<::System::Object*>*  __9__11_0;

static inline ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <Create>b__11_0, addr 0x181e81f10, size 0x50, virtual false, abstract: false, final false
inline void _Create_b__11_0(::System::Object*  state) ;

/// @brief Method <.cctor>b__4_0, addr 0x181e823a0, size 0x40, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*  value) ;

static inline void setStaticF___9__11_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c(AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c(AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14501};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration, UnityEngine.Rendering.AsyncGPUReadbackRequest
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation;

/// @brief Field cancelImmediately, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_cancelImmediately, put=__cordl_internal_set_cancelImmediately)) bool  cancelImmediately;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field core, offset 0x50, size 0x30 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>  pool;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*() noexcept;

/// @brief Method Create, addr 0x181e76730, size 0x250, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* Create(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x181e76980, size 0x20, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x181e769a0, size 0x160, virtual true, abstract: false, final true
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x181e76b00, size 0x90, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x181e76b90, size 0xc0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0x181e76c50, size 0xf0, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x181e76d40, size 0x70, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x180e584e0, size 0x6cd0, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& __cordl_internal_get_asyncOperation() ;

constexpr bool const& __cordl_internal_get_cancelImmediately() const;

constexpr bool& __cordl_internal_get_cancelImmediately() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value) ;

constexpr void __cordl_internal_set_cancelImmediately(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x1802f4a60, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityEngine__Rendering__AsyncGPUReadbackRequest_() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityEngine__Rendering__AsyncGPUReadbackRequest_() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource(UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource(UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14502};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  ___asyncOperation;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field cancelImmediately, offset: 0x48, size: 0x1, def value: None
 bool  ___cancelImmediately;

/// @brief Field core, offset: 0x50, size: 0x30, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___cancellationTokenRegistration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___cancelImmediately) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___core) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource) == 0x80, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, Unity.Jobs.JobHandle
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/JobHandlePromise
class CORDL_TYPE UnityAsyncExtensions_JobHandlePromise : public ::System::Object {
public:
// Declarations
/// @brief Field core, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field jobHandle, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_jobHandle, put=__cordl_internal_set_jobHandle)) ::Unity::Jobs::JobHandle  jobHandle;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method Create, addr 0x181e7e9e0, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* Create(::Unity::Jobs::JobHandle  jobHandle, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0x181e7ea20, size 0x10, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x181e60db0, size 0x10, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x181e7ea30, size 0x110, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0x181e60e40, size 0x20, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0x180ed13f0, size 0x250, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_jobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_jobHandle() ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_JobHandlePromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_JobHandlePromise", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_JobHandlePromise(UnityAsyncExtensions_JobHandlePromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_JobHandlePromise", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_JobHandlePromise(UnityAsyncExtensions_JobHandlePromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14503};

/// @brief Field jobHandle, offset: 0x10, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___jobHandle;

/// @brief Field core, offset: 0x20, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise, ___jobHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise, ___core) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationAwaiter
struct CORDL_TYPE UnityAsyncExtensions_AsyncOperationAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x181e78450, size 0x100, virtual false, abstract: false, final false
inline void GetResult() ;

/// @brief Method OnCompleted, addr 0x181e72ee0, size 0x20, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e72f00, size 0x90, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x181e72f90, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AsyncOperation*  asyncOperation) ;

/// @brief Method get_IsCompleted, addr 0x181e72fd0, size 0xf0, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AsyncOperationAwaiter() ;

// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: None }]
constexpr UnityAsyncExtensions_AsyncOperationAwaiter(::UnityEngine::AsyncOperation*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14504};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field asyncOperation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::AsyncOperation*  asyncOperation;

/// @brief Field continuationAction, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter, asyncOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter, continuationAction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c
class CORDL_TYPE AsyncOperationConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Action_1<::System::Object*>*  __9__14_0;

static inline ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <Create>b__14_0, addr 0x181e82000, size 0x50, virtual false, abstract: false, final false
inline void _Create_b__14_0(::System::Object*  state) ;

/// @brief Method <.cctor>b__4_0, addr 0x181e82260, size 0x40, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*  value) ;

static inline void setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperationConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationConfiguredSource_UnityAsyncExtensions___c(AsyncOperationConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationConfiguredSource_UnityAsyncExtensions___c(AsyncOperationConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14505};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AsyncOperationConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::AsyncOperation*  asyncOperation;

/// @brief Field cancelImmediately, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_cancelImmediately, put=__cordl_internal_set_cancelImmediately)) bool  cancelImmediately;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field completed, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continuationAction, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuationAction, put=__cordl_internal_set_continuationAction)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

/// @brief Field core, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Method Continuation, addr 0x181e78550, size 0x70, virtual false, abstract: false, final false
inline void Continuation(::UnityEngine::AsyncOperation*  _) ;

/// @brief Method Create, addr 0x181e785c0, size 0x2e0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::UnityEngine::AsyncOperation*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0x181e788a0, size 0x60, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x180e57af0, size 0x50, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x181e78900, size 0xd0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0x180e57b40, size 0x9a0, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x181e789d0, size 0xb0, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x180d18070, size 0x19360, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get_asyncOperation() ;

constexpr bool const& __cordl_internal_get_cancelImmediately() const;

constexpr bool& __cordl_internal_get_cancelImmediately() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& __cordl_internal_get_continuationAction() const;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_continuationAction() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::AsyncOperation*  value) ;

constexpr void __cordl_internal_set_cancelImmediately(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x181e78b30, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x1802f4a60, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AsyncOperationConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AsyncOperationConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AsyncOperationConfiguredSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AsyncOperationConfiguredSource(UnityAsyncExtensions_AsyncOperationConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AsyncOperationConfiguredSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AsyncOperationConfiguredSource(UnityAsyncExtensions_AsyncOperationConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14506};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AsyncOperation*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field cancelImmediately, offset: 0x48, size: 0x1, def value: None
 bool  ___cancelImmediately;

/// @brief Field completed, offset: 0x49, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field core, offset: 0x50, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

/// @brief Field continuationAction, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  ___continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___cancellationTokenRegistration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___cancelImmediately) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___completed) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___core) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___continuationAction) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource) == 0x80, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestAwaiter
struct CORDL_TYPE UnityAsyncExtensions_ResourceRequestAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x181e73e30, size 0xb0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> GetResult() ;

/// @brief Method OnCompleted, addr 0x181e72ee0, size 0x20, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e72f00, size 0x90, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x181e72f90, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ResourceRequest*  asyncOperation) ;

/// @brief Method get_IsCompleted, addr 0x181e72fd0, size 0xf0, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_ResourceRequestAwaiter() ;

// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::ResourceRequest*", modifiers: "", def_value: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: None }]
constexpr UnityAsyncExtensions_ResourceRequestAwaiter(::UnityEngine::ResourceRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14507};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field asyncOperation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::ResourceRequest*  asyncOperation;

/// @brief Field continuationAction, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter, asyncOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter, continuationAction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c
class CORDL_TYPE ResourceRequestConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Action_1<::System::Object*>*  __9__14_0;

static inline ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <Create>b__14_0, addr 0x181e82100, size 0x50, virtual false, abstract: false, final false
inline void _Create_b__14_0(::System::Object*  state) ;

/// @brief Method <.cctor>b__4_0, addr 0x181e82320, size 0x40, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*  value) ;

static inline void setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResourceRequestConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResourceRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResourceRequestConfiguredSource_UnityAsyncExtensions___c(ResourceRequestConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResourceRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResourceRequestConfiguredSource_UnityAsyncExtensions___c(ResourceRequestConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14508};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_ResourceRequestConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::ResourceRequest*  asyncOperation;

/// @brief Field cancelImmediately, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_cancelImmediately, put=__cordl_internal_set_cancelImmediately)) bool  cancelImmediately;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field completed, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continuationAction, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuationAction, put=__cordl_internal_set_continuationAction)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

/// @brief Field core, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept;

/// @brief Method Continuation, addr 0x181e73ee0, size 0x70, virtual false, abstract: false, final false
inline void Continuation(::UnityEngine::AsyncOperation*  _) ;

/// @brief Method Create, addr 0x181e7f9c0, size 0x2f0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Create(::UnityEngine::ResourceRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x181e7fcb0, size 0x10, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x181e7fcc0, size 0x70, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x180e57af0, size 0x50, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x181e742c0, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0x180e57b40, size 0x9a0, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x181e7fd30, size 0xb0, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x180d18070, size 0x19360, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::ResourceRequest* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::ResourceRequest*& __cordl_internal_get_asyncOperation() ;

constexpr bool const& __cordl_internal_get_cancelImmediately() const;

constexpr bool& __cordl_internal_get_cancelImmediately() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& __cordl_internal_get_continuationAction() const;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_continuationAction() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::ResourceRequest*  value) ;

constexpr void __cordl_internal_set_cancelImmediately(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x181e7fe90, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x1802f4a60, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_ResourceRequestConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__Object__() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>* i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityW___UnityEngine__Object__() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_ResourceRequestConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_ResourceRequestConfiguredSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_ResourceRequestConfiguredSource(UnityAsyncExtensions_ResourceRequestConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_ResourceRequestConfiguredSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_ResourceRequestConfiguredSource(UnityAsyncExtensions_ResourceRequestConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14509};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::ResourceRequest*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field cancelImmediately, offset: 0x48, size: 0x1, def value: None
 bool  ___cancelImmediately;

/// @brief Field completed, offset: 0x49, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field core, offset: 0x50, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  ___core;

/// @brief Field continuationAction, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  ___continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___cancellationTokenRegistration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___cancelImmediately) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___completed) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___core) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___continuationAction) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource) == 0x80, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAwaiter
struct CORDL_TYPE UnityAsyncExtensions_AssetBundleRequestAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x181e73e30, size 0xb0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> GetResult() ;

/// @brief Method OnCompleted, addr 0x181e72ee0, size 0x20, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e72f00, size 0x90, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x181e72f90, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AssetBundleRequest*  asyncOperation) ;

/// @brief Method get_IsCompleted, addr 0x181e72fd0, size 0xf0, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleRequestAwaiter() ;

// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AssetBundleRequest*", modifiers: "", def_value: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: None }]
constexpr UnityAsyncExtensions_AssetBundleRequestAwaiter(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field asyncOperation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::AssetBundleRequest*  asyncOperation;

/// @brief Field continuationAction, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter, asyncOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter, continuationAction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c
class CORDL_TYPE AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Action_1<::System::Object*>*  __9__14_0;

static inline ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <Create>b__14_0, addr 0x181e82050, size 0x50, virtual false, abstract: false, final false
inline void _Create_b__14_0(::System::Object*  state) ;

/// @brief Method <.cctor>b__4_0, addr 0x181e82220, size 0x40, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*  value) ;

static inline void setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c(AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c(AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14511};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AssetBundleRequestConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::AssetBundleRequest*  asyncOperation;

/// @brief Field cancelImmediately, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_cancelImmediately, put=__cordl_internal_set_cancelImmediately)) bool  cancelImmediately;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field completed, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continuationAction, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuationAction, put=__cordl_internal_set_continuationAction)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

/// @brief Field core, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept;

/// @brief Method Continuation, addr 0x181e73ee0, size 0x70, virtual false, abstract: false, final false
inline void Continuation(::UnityEngine::AsyncOperation*  _) ;

/// @brief Method Create, addr 0x181e73f50, size 0x2f0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Create(::UnityEngine::AssetBundleRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x181e74240, size 0x10, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x181e74250, size 0x70, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x180e57af0, size 0x50, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x181e742c0, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0x180e57b40, size 0x9a0, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x181e743a0, size 0xb0, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x180d18070, size 0x19360, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::AssetBundleRequest* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::AssetBundleRequest*& __cordl_internal_get_asyncOperation() ;

constexpr bool const& __cordl_internal_get_cancelImmediately() const;

constexpr bool& __cordl_internal_get_cancelImmediately() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& __cordl_internal_get_continuationAction() const;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_continuationAction() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleRequest*  value) ;

constexpr void __cordl_internal_set_cancelImmediately(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x181e74500, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x1802f4a60, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleRequestConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__Object__() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::Object>>* i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityW___UnityEngine__Object__() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleRequestConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleRequestConfiguredSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AssetBundleRequestConfiguredSource(UnityAsyncExtensions_AssetBundleRequestConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleRequestConfiguredSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AssetBundleRequestConfiguredSource(UnityAsyncExtensions_AssetBundleRequestConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14512};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AssetBundleRequest*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field cancelImmediately, offset: 0x48, size: 0x1, def value: None
 bool  ___cancelImmediately;

/// @brief Field completed, offset: 0x49, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field core, offset: 0x50, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  ___core;

/// @brief Field continuationAction, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  ___continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___cancellationTokenRegistration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___cancelImmediately) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___completed) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___core) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___continuationAction) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource) == 0x80, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestAwaiter
struct CORDL_TYPE UnityAsyncExtensions_AssetBundleCreateRequestAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x181e72e60, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AssetBundle> GetResult() ;

/// @brief Method OnCompleted, addr 0x181e72ee0, size 0x20, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e72f00, size 0x90, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x181e72f90, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::AssetBundleCreateRequest*  asyncOperation) ;

/// @brief Method get_IsCompleted, addr 0x181e72fd0, size 0xf0, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleCreateRequestAwaiter() ;

// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AssetBundleCreateRequest*", modifiers: "", def_value: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: None }]
constexpr UnityAsyncExtensions_AssetBundleCreateRequestAwaiter(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14513};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field asyncOperation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::AssetBundleCreateRequest*  asyncOperation;

/// @brief Field continuationAction, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter, asyncOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter, continuationAction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c
class CORDL_TYPE AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Action_1<::System::Object*>*  __9__14_0;

static inline ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <Create>b__14_0, addr 0x181e81fb0, size 0x50, virtual false, abstract: false, final false
inline void _Create_b__14_0(::System::Object*  state) ;

/// @brief Method <.cctor>b__4_0, addr 0x181e82360, size 0x40, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*  value) ;

static inline void setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c(AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c(AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14514};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::AssetBundleCreateRequest*  asyncOperation;

/// @brief Field cancelImmediately, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_cancelImmediately, put=__cordl_internal_set_cancelImmediately)) bool  cancelImmediately;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field completed, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continuationAction, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuationAction, put=__cordl_internal_set_continuationAction)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

/// @brief Field core, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*() noexcept;

/// @brief Method Continuation, addr 0x181e730c0, size 0x70, virtual false, abstract: false, final false
inline void Continuation(::UnityEngine::AsyncOperation*  _) ;

/// @brief Method Create, addr 0x181e73130, size 0x2f0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* Create(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x181e73420, size 0x10, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x181e73430, size 0x70, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::AssetBundle> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x180e57af0, size 0x50, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x181e734a0, size 0xe0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0x180e57b40, size 0x9a0, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x181e73580, size 0xb0, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x180d18070, size 0x19360, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::AssetBundleCreateRequest* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::AssetBundleCreateRequest*& __cordl_internal_get_asyncOperation() ;

constexpr bool const& __cordl_internal_get_cancelImmediately() const;

constexpr bool& __cordl_internal_get_cancelImmediately() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& __cordl_internal_get_continuationAction() const;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_continuationAction() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleCreateRequest*  value) ;

constexpr void __cordl_internal_set_cancelImmediately(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x181e736e0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x1802f4a60, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__AssetBundle__() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityW___UnityEngine__AssetBundle__() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource(UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource(UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14515};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AssetBundleCreateRequest*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field cancelImmediately, offset: 0x48, size: 0x1, def value: None
 bool  ___cancelImmediately;

/// @brief Field completed, offset: 0x49, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field core, offset: 0x50, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>  ___core;

/// @brief Field continuationAction, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  ___continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___cancellationTokenRegistration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___cancelImmediately) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___completed) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___core) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___continuationAction) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource) == 0x80, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationAwaiter
struct CORDL_TYPE UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter {
public:
// Declarations
 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() ;

/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr operator  ::System::Runtime::CompilerServices::INotifyCompletion*() ;

/// @brief Method GetResult, addr 0x181e88150, size 0x170, virtual false, abstract: false, final false
inline ::UnityEngine::Networking::UnityWebRequest* GetResult() ;

/// @brief Method OnCompleted, addr 0x181e72ee0, size 0x20, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action*  continuation) ;

/// @brief Method UnsafeOnCompleted, addr 0x181e72f00, size 0x90, virtual true, abstract: false, final true
inline void UnsafeOnCompleted(::System::Action*  continuation) ;

/// @brief Method .ctor, addr 0x181e72f90, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation) ;

/// @brief Method get_IsCompleted, addr 0x181e72fd0, size 0xf0, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() ;

/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* i___System__Runtime__CompilerServices__INotifyCompletion() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter() ;

// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::Networking::UnityWebRequestAsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: None }]
constexpr UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14516};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field asyncOperation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation;

/// @brief Field continuationAction, offset: 0x8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter, asyncOperation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter, continuationAction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c
class CORDL_TYPE UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Action_1<::System::Object*>*  __9__14_0;

static inline ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <Create>b__14_0, addr 0x181e820a0, size 0x60, virtual false, abstract: false, final false
inline void _Create_b__14_0(::System::Object*  state) ;

/// @brief Method <.cctor>b__4_0, addr 0x181e822e0, size 0x40, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*  value) ;

static inline void setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c(UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c(UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14517};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation;

/// @brief Field cancelImmediately, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_cancelImmediately, put=__cordl_internal_set_cancelImmediately)) bool  cancelImmediately;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field cancellationTokenRegistration, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_cancellationTokenRegistration, put=__cordl_internal_set_cancellationTokenRegistration)) ::System::Threading::CancellationTokenRegistration  cancellationTokenRegistration;

/// @brief Field completed, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continuationAction, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuationAction, put=__cordl_internal_set_continuationAction)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction;

/// @brief Field core, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*() noexcept;

/// @brief Method Continuation, addr 0x181e882c0, size 0xf0, virtual false, abstract: false, final false
inline void Continuation(::UnityEngine::AsyncOperation*  _) ;

/// @brief Method Create, addr 0x181e883b0, size 0x2f0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* Create(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x181e886a0, size 0x10, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x181e886b0, size 0x70, virtual true, abstract: false, final true
inline ::UnityEngine::Networking::UnityWebRequest* GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x180e57af0, size 0x50, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x181e88720, size 0x190, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0x180e57b40, size 0x9a0, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x181e888b0, size 0xb0, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x180d18070, size 0x19360, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_asyncOperation() ;

constexpr bool const& __cordl_internal_get_cancelImmediately() const;

constexpr bool& __cordl_internal_get_cancelImmediately() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_cancellationTokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_cancellationTokenRegistration() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& __cordl_internal_get_continuationAction() const;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_continuationAction() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value) ;

constexpr void __cordl_internal_set_cancelImmediately(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x181e88a10, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x1802f4a60, size 0x10, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityEngine__Networking__UnityWebRequest__() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* i___System__Threading__Tasks__Sources__IValueTaskSource_1___UnityEngine__Networking__UnityWebRequest__() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource(UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource(UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14518};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field cancellationTokenRegistration, offset: 0x30, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___cancellationTokenRegistration;

/// @brief Field cancelImmediately, offset: 0x48, size: 0x1, def value: None
 bool  ___cancelImmediately;

/// @brief Field completed, offset: 0x49, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field core, offset: 0x50, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>  ___core;

/// @brief Field continuationAction, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  ___continuationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___cancellationTokenRegistration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___cancelImmediately) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___completed) == 0x49, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___core) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___continuationAction) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource) == 0x80, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.PlayerLoopTiming, Cysharp.Threading.Tasks.YieldAwaitable::Awaiter, System.Threading.CancellationToken, Unity.Jobs.JobHandle
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/<WaitAsync>d__11
struct CORDL_TYPE UnityAsyncExtensions__WaitAsync_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x181e835b0, size 0x1a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// @brief Method SetStateMachine, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions__WaitAsync_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "waitTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: None }, CppParam { name: "jobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter", modifiers: "", def_value: None }]
constexpr UnityAsyncExtensions__WaitAsync_d__11(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming, ::Unity::Jobs::JobHandle  jobHandle, ::System::Threading::CancellationToken  cancellationToken, ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14519};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field waitTiming, offset: 0x18, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming;

/// @brief Field jobHandle, offset: 0x20, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  jobHandle;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x38, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11, waitTiming) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11, jobHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions
class CORDL_TYPE UnityAsyncExtensions : public ::System::Object {
public:
// Declarations
using AssetBundleCreateRequestAwaiter = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter;

using AssetBundleCreateRequestConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource;

using AssetBundleRequestAllAssetsAwaiter = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter;

using AssetBundleRequestAllAssetsConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource;

using AssetBundleRequestAwaiter = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter;

using AssetBundleRequestConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource;

using AsyncGPUReadbackRequestAwaiterConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource;

using AsyncOperationAwaiter = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationAwaiter;

using AsyncOperationConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource;

using JobHandlePromise = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise;

using ResourceRequestAwaiter = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter;

using ResourceRequestConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource;

using UnityWebRequestAsyncOperationAwaiter = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter;

using UnityWebRequestAsyncOperationConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource;

using _WaitAsync_d__11 = ::Cysharp::Threading::Tasks::UnityAsyncExtensions__WaitAsync_d__11;

/// @brief Method AwaitForAllAssets, addr 0x181e84890, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method AwaitForAllAssets, addr 0x181e84720, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method AwaitForAllAssets, addr 0x181e84760, size 0x130, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method AwaitForAllAssets, addr 0x181e848d0, size 0x50, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation) ;

/// @brief Method GetAsyncClickEventHandler, addr 0x181e84990, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* GetAsyncClickEventHandler(::UnityEngine::UI::Button*  button) ;

/// @brief Method GetAsyncClickEventHandler, addr 0x181e84920, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* GetAsyncClickEventHandler(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncEndEditEventHandler, addr 0x181e84a00, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* GetAsyncEndEditEventHandler(::UnityEngine::UI::InputField*  inputField) ;

/// @brief Method GetAsyncEndEditEventHandler, addr 0x181e84a80, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* GetAsyncEndEditEventHandler(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncEventHandler, addr 0x181e84af0, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler* GetAsyncEventHandler(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncEventHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>* GetAsyncEventHandler(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84b50, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::InputField*  inputField) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84e40, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84f20, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::ScrollRect*  scrollRect) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84f90, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84bd0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Toggle*  toggle) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e85070, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84c50, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Scrollbar*  scrollbar) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e85000, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84d50, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Slider*  slider) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84dd0, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84cd0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Dropdown*  dropdown) ;

/// @brief Method GetAsyncValueChangedEventHandler, addr 0x181e84eb0, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetAwaiter, addr 0x181e851b0, size 0x1d0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest> GetAwaiter(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation) ;

/// @brief Method GetAwaiter, addr 0x181e850e0, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter(::Unity::Jobs::JobHandle  jobHandle) ;

/// @brief Method GetAwaiter, addr 0x181e848d0, size 0x50, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter GetAwaiter(::UnityEngine::AssetBundleCreateRequest*  asyncOperation) ;

/// @brief Method GetAwaiter, addr 0x181e848d0, size 0x50, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAwaiter GetAwaiter(::UnityEngine::AssetBundleRequest*  asyncOperation) ;

/// @brief Method GetAwaiter, addr 0x181e848d0, size 0x50, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestAwaiter GetAwaiter(::UnityEngine::ResourceRequest*  asyncOperation) ;

/// @brief Method GetAwaiter, addr 0x181e848d0, size 0x50, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation) ;

/// @brief Method OnClickAsAsyncEnumerable, addr 0x181e85380, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* OnClickAsAsyncEnumerable(::UnityEngine::UI::Button*  button) ;

/// @brief Method OnClickAsAsyncEnumerable, addr 0x181e85400, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* OnClickAsAsyncEnumerable(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnClickAsync, addr 0x181e85470, size 0xc0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask OnClickAsync(::UnityEngine::UI::Button*  button) ;

/// @brief Method OnClickAsync, addr 0x181e85530, size 0xc0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask OnClickAsync(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnEndEditAsAsyncEnumerable, addr 0x181e85650, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnEndEditAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField) ;

/// @brief Method OnEndEditAsAsyncEnumerable, addr 0x181e855f0, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnEndEditAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnEndEditAsync, addr 0x181e85740, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnEndEditAsync(::UnityEngine::UI::InputField*  inputField) ;

/// @brief Method OnEndEditAsync, addr 0x181e856c0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnEndEditAsync(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnInvokeAsAsyncEnumerable, addr 0x181e857d0, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* OnInvokeAsAsyncEnumerable(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnInvokeAsAsyncEnumerable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* OnInvokeAsAsyncEnumerable(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnInvokeAsync, addr 0x181e85830, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask OnInvokeAsync(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnInvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> OnInvokeAsync(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85ba0, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85a80, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85940, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::ScrollRect*  scrollRect) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85ae0, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85d40, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Toggle*  toggle) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85c10, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85cd0, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Scrollbar*  scrollbar) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e859b0, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e858d0, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Slider*  slider) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85b40, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85a10, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Dropdown*  dropdown) ;

/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0x181e85c70, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsync, addr 0x181e861e0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnValueChangedAsync(::UnityEngine::UI::InputField*  inputField) ;

/// @brief Method OnValueChangedAsync, addr 0x181e86050, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnValueChangedAsync(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsync, addr 0x181e860d0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> OnValueChangedAsync(::UnityEngine::UI::ScrollRect*  scrollRect) ;

/// @brief Method OnValueChangedAsync, addr 0x181e85f50, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> OnValueChangedAsync(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsync, addr 0x181e85db0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> OnValueChangedAsync(::UnityEngine::UI::Toggle*  toggle) ;

/// @brief Method OnValueChangedAsync, addr 0x181e85fd0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> OnValueChangedAsync(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsync, addr 0x181e86270, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnValueChangedAsync(::UnityEngine::UI::Scrollbar*  scrollbar) ;

/// @brief Method OnValueChangedAsync, addr 0x181e86390, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnValueChangedAsync(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsync, addr 0x181e86300, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnValueChangedAsync(::UnityEngine::UI::Slider*  slider) ;

/// @brief Method OnValueChangedAsync, addr 0x181e85e40, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnValueChangedAsync(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnValueChangedAsync, addr 0x181e85ec0, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> OnValueChangedAsync(::UnityEngine::UI::Dropdown*  dropdown) ;

/// @brief Method OnValueChangedAsync, addr 0x181e86160, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> OnValueChangedAsync(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method StartAsyncCoroutine, addr 0x181e86410, size 0x60, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask StartAsyncCoroutine(::UnityEngine::MonoBehaviour*  monoBehaviour, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  asyncCoroutine) ;

/// @brief Method ToUniTask, addr 0x181e86850, size 0x160, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask ToUniTask(::UnityEngine::AsyncOperation*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method ToUniTask, addr 0x181e869b0, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask ToUniTask(::Unity::Jobs::JobHandle  jobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming) ;

/// @brief Method ToUniTask, addr 0x181e86470, size 0x180, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> ToUniTask(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method ToUniTask, addr 0x181e86b60, size 0xf0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> ToUniTask(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method ToUniTask, addr 0x181e86a30, size 0x130, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> ToUniTask(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method ToUniTask, addr 0x181e86720, size 0x130, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> ToUniTask(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method ToUniTask, addr 0x181e865f0, size 0x130, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> ToUniTask(::UnityEngine::ResourceRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method WaitAsync, addr 0x181e86c50, size 0xb0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WaitAsync(::Unity::Jobs::JobHandle  jobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithCancellation, addr 0x181e86e00, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WithCancellation(::UnityEngine::AsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithCancellation, addr 0x181e86ec0, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WithCancellation(::UnityEngine::AsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method WithCancellation, addr 0x181e86e40, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> WithCancellation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithCancellation, addr 0x181e86e80, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> WithCancellation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method WithCancellation, addr 0x181e86d40, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> WithCancellation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithCancellation, addr 0x181e86d00, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> WithCancellation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method WithCancellation, addr 0x181e86f00, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> WithCancellation(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithCancellation, addr 0x181e86f80, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> WithCancellation(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method WithCancellation, addr 0x181e86fc0, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> WithCancellation(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithCancellation, addr 0x181e86f40, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> WithCancellation(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

/// @brief Method WithCancellation, addr 0x181e86dc0, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> WithCancellation(::UnityEngine::ResourceRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WithCancellation, addr 0x181e86d80, size 0x40, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> WithCancellation(::UnityEngine::ResourceRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken, bool  cancelImmediately) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions(UnityAsyncExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions(UnityAsyncExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14520};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
