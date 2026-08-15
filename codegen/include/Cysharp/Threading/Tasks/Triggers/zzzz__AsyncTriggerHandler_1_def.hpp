#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Triggers/AsyncTriggerHandler_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncTriggerHandler_1)
namespace Cysharp::Threading::Tasks::Triggers {
template<typename T>
class AsyncTriggerBase_1;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncFixedUpdateHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncLateUpdateHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnAnimatorIKHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnAnimatorMoveHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnApplicationFocusHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnApplicationPauseHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnApplicationQuitHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnAudioFilterReadHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnBecameInvisibleHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnBecameVisibleHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnBeforeTransformParentChangedHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnBeginDragHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCancelHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCanvasGroupChangedHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionEnter2DHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionEnterHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionExit2DHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionExitHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionStay2DHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnCollisionStayHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnControllerColliderHitHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnDeselectHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnDisableHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnDragHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnDrawGizmosHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnDrawGizmosSelectedHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnDropHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnEnableHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnEndDragHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnGUIHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnInitializePotentialDragHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnJointBreak2DHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnJointBreakHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMouseDownHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMouseDragHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMouseEnterHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMouseExitHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMouseOverHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMouseUpAsButtonHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMouseUpHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnMoveHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleCollisionHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleSystemStoppedHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleTriggerHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnParticleUpdateJobScheduledHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPointerClickHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPointerDownHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPointerEnterHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPointerExitHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPointerUpHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPostRenderHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPreCullHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnPreRenderHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnRectTransformDimensionsChangeHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnRectTransformRemovedHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnRenderImageHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnRenderObjectHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnScrollHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnSelectHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnServerInitializedHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnSubmitHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTransformChildrenChangedHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTransformParentChangedHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerEnter2DHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerEnterHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerExit2DHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerExitHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerStay2DHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnTriggerStayHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnUpdateSelectedHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnValidateHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOnWillRenderObjectHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncOneShotTrigger;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncResetHandler;
}
namespace Cysharp::Threading::Tasks::Triggers {
class IAsyncUpdateHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITriggerHandler_1;
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
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::ParticleSystemJobs {
struct ParticleSystemJobData;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision2D;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class ControllerColliderHit;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Joint2D;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Triggers {
template<typename T>
class AsyncTriggerHandler_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerHandler_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerHandler_1, "Cysharp.Threading.Tasks.Triggers", "AsyncTriggerHandler`1");
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks::Triggers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<T>
class CORDL_TYPE AsyncTriggerHandler_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CancellationToken)) ::System::Threading::CancellationToken  CancellationToken;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_T__get_Next, put=Cysharp_Threading_Tasks_ITriggerHandler_T__set_Next)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Cysharp_Threading_Tasks_ITriggerHandler_T__Next;

 __declspec(property(get=Cysharp_Threading_Tasks_ITriggerHandler_T__get_Prev, put=Cysharp_Threading_Tasks_ITriggerHandler_T__set_Prev)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  Cysharp_Threading_Tasks_ITriggerHandler_T__Prev;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  _Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField, put=__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField)) ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  _Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;

/// @brief Field callOnce, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_callOnce, put=__cordl_internal_set_callOnce)) bool  callOnce;

/// @brief Field cancellationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationCallback, put=setStaticF_cancellationCallback)) ::System::Action_1<::System::Object*>*  cancellationCallback;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  core;

/// @brief Field isDisposed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDisposed, put=__cordl_internal_set_isDisposed)) bool  isDisposed;

/// @brief Field registration, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_registration, put=__cordl_internal_set_registration)) ::System::Threading::CancellationTokenRegistration  registration;

/// @brief Field trigger, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_trigger, put=__cordl_internal_set_trigger)) ::UnityW<T>  trigger;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncOneShotTrigger"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncOneShotTrigger*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler"
constexpr operator  ::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<T>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<T>*() noexcept;

/// @brief Method CancellationCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CancellationCallback(::System::Object*  state) ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.OnCanceled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_T__OnCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_T__OnCompleted() ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_T__OnError(::System::Exception*  ex) ;

/// @brief Method Cysharp.Threading.Tasks.ITriggerHandler<T>.OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_ITriggerHandler_T__OnNext(T  value) ;

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

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource<T>.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T Cysharp_Threading_Tasks_IUniTaskSource_T__GetResult(int16_t  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncFixedUpdateHandler.FixedUpdateAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncFixedUpdateHandler_FixedUpdateAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncLateUpdateHandler.LateUpdateAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncLateUpdateHandler_LateUpdateAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnAnimatorIKHandler.OnAnimatorIKAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorIKHandler_OnAnimatorIKAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnAnimatorMoveHandler.OnAnimatorMoveAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnAnimatorMoveHandler_OnAnimatorMoveAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnApplicationFocusHandler.OnApplicationFocusAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationFocusHandler_OnApplicationFocusAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnApplicationPauseHandler.OnApplicationPauseAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationPauseHandler_OnApplicationPauseAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnApplicationQuitHandler.OnApplicationQuitAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnApplicationQuitHandler_OnApplicationQuitAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnAudioFilterReadHandler.OnAudioFilterReadAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::ArrayW<float_t>,int32_t>> Cysharp_Threading_Tasks_Triggers_IAsyncOnAudioFilterReadHandler_OnAudioFilterReadAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnBecameInvisibleHandler.OnBecameInvisibleAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameInvisibleHandler_OnBecameInvisibleAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnBecameVisibleHandler.OnBecameVisibleAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnBecameVisibleHandler_OnBecameVisibleAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnBeforeTransformParentChangedHandler.OnBeforeTransformParentChangedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnBeforeTransformParentChangedHandler_OnBeforeTransformParentChangedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnBeginDragHandler.OnBeginDragAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnBeginDragHandler_OnBeginDragAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnCancelHandler.OnCancelAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnCancelHandler_OnCancelAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnCanvasGroupChangedHandler.OnCanvasGroupChangedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnCanvasGroupChangedHandler_OnCanvasGroupChangedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnCollisionEnter2DHandler.OnCollisionEnter2DAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionEnter2DHandler_OnCollisionEnter2DAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnCollisionEnterHandler.OnCollisionEnterAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionEnterHandler_OnCollisionEnterAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnCollisionExit2DHandler.OnCollisionExit2DAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionExit2DHandler_OnCollisionExit2DAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnCollisionExitHandler.OnCollisionExitAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionExitHandler_OnCollisionExitAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnCollisionStay2DHandler.OnCollisionStay2DAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision2D*> Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStay2DHandler_OnCollisionStay2DAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnCollisionStayHandler.OnCollisionStayAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Collision*> Cysharp_Threading_Tasks_Triggers_IAsyncOnCollisionStayHandler_OnCollisionStayAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnControllerColliderHitHandler.OnControllerColliderHitAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ControllerColliderHit*> Cysharp_Threading_Tasks_Triggers_IAsyncOnControllerColliderHitHandler_OnControllerColliderHitAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnDeselectHandler.OnDeselectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnDeselectHandler_OnDeselectAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnDisableHandler.OnDisableAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnDisableHandler_OnDisableAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnDragHandler.OnDragAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnDragHandler_OnDragAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnDrawGizmosHandler.OnDrawGizmosAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnDrawGizmosHandler_OnDrawGizmosAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnDrawGizmosSelectedHandler.OnDrawGizmosSelectedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnDrawGizmosSelectedHandler_OnDrawGizmosSelectedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnDropHandler.OnDropAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnDropHandler_OnDropAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnEnableHandler.OnEnableAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnEnableHandler_OnEnableAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnEndDragHandler.OnEndDragAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnEndDragHandler_OnEndDragAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnGUIHandler.OnGUIAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnGUIHandler_OnGUIAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnInitializePotentialDragHandler.OnInitializePotentialDragAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnInitializePotentialDragHandler_OnInitializePotentialDragAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnJointBreak2DHandler.OnJointBreak2DAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Joint2D>> Cysharp_Threading_Tasks_Triggers_IAsyncOnJointBreak2DHandler_OnJointBreak2DAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnJointBreakHandler.OnJointBreakAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp_Threading_Tasks_Triggers_IAsyncOnJointBreakHandler_OnJointBreakAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnMouseDownHandler.OnMouseDownAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnMouseDownHandler_OnMouseDownAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnMouseDragHandler.OnMouseDragAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnMouseDragHandler_OnMouseDragAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnMouseEnterHandler.OnMouseEnterAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnMouseEnterHandler_OnMouseEnterAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnMouseExitHandler.OnMouseExitAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnMouseExitHandler_OnMouseExitAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnMouseOverHandler.OnMouseOverAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnMouseOverHandler_OnMouseOverAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnMouseUpAsButtonHandler.OnMouseUpAsButtonAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnMouseUpAsButtonHandler_OnMouseUpAsButtonAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnMouseUpHandler.OnMouseUpAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnMouseUpHandler_OnMouseUpAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnMoveHandler.OnMoveAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::AxisEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnMoveHandler_OnMoveAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnParticleCollisionHandler.OnParticleCollisionAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::GameObject>> Cysharp_Threading_Tasks_Triggers_IAsyncOnParticleCollisionHandler_OnParticleCollisionAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnParticleSystemStoppedHandler.OnParticleSystemStoppedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnParticleSystemStoppedHandler_OnParticleSystemStoppedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnParticleTriggerHandler.OnParticleTriggerAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnParticleTriggerHandler_OnParticleTriggerAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnParticleUpdateJobScheduledHandler.OnParticleUpdateJobScheduledAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> Cysharp_Threading_Tasks_Triggers_IAsyncOnParticleUpdateJobScheduledHandler_OnParticleUpdateJobScheduledAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnPointerClickHandler.OnPointerClickAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnPointerClickHandler_OnPointerClickAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnPointerDownHandler.OnPointerDownAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnPointerDownHandler_OnPointerDownAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnPointerEnterHandler.OnPointerEnterAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnPointerEnterHandler_OnPointerEnterAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnPointerExitHandler.OnPointerExitAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnPointerExitHandler_OnPointerExitAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnPointerUpHandler.OnPointerUpAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnPointerUpHandler_OnPointerUpAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnPostRenderHandler.OnPostRenderAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnPostRenderHandler_OnPostRenderAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnPreCullHandler.OnPreCullAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnPreCullHandler_OnPreCullAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnPreRenderHandler.OnPreRenderAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnPreRenderHandler_OnPreRenderAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnRectTransformDimensionsChangeHandler.OnRectTransformDimensionsChangeAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnRectTransformDimensionsChangeHandler_OnRectTransformDimensionsChangeAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnRectTransformRemovedHandler.OnRectTransformRemovedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnRectTransformRemovedHandler_OnRectTransformRemovedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnRenderImageHandler.OnRenderImageAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityW<::UnityEngine::RenderTexture>,::UnityW<::UnityEngine::RenderTexture>>> Cysharp_Threading_Tasks_Triggers_IAsyncOnRenderImageHandler_OnRenderImageAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnRenderObjectHandler.OnRenderObjectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnRenderObjectHandler_OnRenderObjectAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnScrollHandler.OnScrollAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::PointerEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnScrollHandler_OnScrollAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnSelectHandler.OnSelectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnSelectHandler_OnSelectAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnServerInitializedHandler.OnServerInitializedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnServerInitializedHandler_OnServerInitializedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnSubmitHandler.OnSubmitAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnSubmitHandler_OnSubmitAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnTransformChildrenChangedHandler.OnTransformChildrenChangedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnTransformChildrenChangedHandler_OnTransformChildrenChangedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnTransformParentChangedHandler.OnTransformParentChangedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnTransformParentChangedHandler_OnTransformParentChangedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnTriggerEnter2DHandler.OnTriggerEnter2DAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider2D>> Cysharp_Threading_Tasks_Triggers_IAsyncOnTriggerEnter2DHandler_OnTriggerEnter2DAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnTriggerEnterHandler.OnTriggerEnterAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider>> Cysharp_Threading_Tasks_Triggers_IAsyncOnTriggerEnterHandler_OnTriggerEnterAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnTriggerExit2DHandler.OnTriggerExit2DAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider2D>> Cysharp_Threading_Tasks_Triggers_IAsyncOnTriggerExit2DHandler_OnTriggerExit2DAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnTriggerExitHandler.OnTriggerExitAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider>> Cysharp_Threading_Tasks_Triggers_IAsyncOnTriggerExitHandler_OnTriggerExitAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnTriggerStay2DHandler.OnTriggerStay2DAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider2D>> Cysharp_Threading_Tasks_Triggers_IAsyncOnTriggerStay2DHandler_OnTriggerStay2DAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnTriggerStayHandler.OnTriggerStayAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Collider>> Cysharp_Threading_Tasks_Triggers_IAsyncOnTriggerStayHandler_OnTriggerStayAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnUpdateSelectedHandler.OnUpdateSelectedAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::EventSystems::BaseEventData*> Cysharp_Threading_Tasks_Triggers_IAsyncOnUpdateSelectedHandler_OnUpdateSelectedAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnValidateHandler.OnValidateAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnValidateHandler_OnValidateAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOnWillRenderObjectHandler.OnWillRenderObjectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOnWillRenderObjectHandler_OnWillRenderObjectAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncOneShotTrigger.OneShotAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncOneShotTrigger_OneShotAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncResetHandler.ResetAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncResetHandler_ResetAsync() ;

/// @brief Method Cysharp.Threading.Tasks.Triggers.IAsyncUpdateHandler.UpdateAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_Triggers_IAsyncUpdateHandler_UpdateAsync() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerHandler_1<T>* New_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  trigger, bool  callOnce) ;

static inline ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerHandler_1<T>* New_ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  trigger, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce) ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField() ;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* const& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() const;

constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*& __cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField() ;

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

constexpr ::UnityW<T> const& __cordl_internal_get_trigger() const;

constexpr ::UnityW<T>& __cordl_internal_get_trigger() ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

constexpr void __cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  value) ;

constexpr void __cordl_internal_set_callOnce(bool  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value) ;

constexpr void __cordl_internal_set_isDisposed(bool  value) ;

constexpr void __cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value) ;

constexpr void __cordl_internal_set_trigger(::UnityW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  trigger, bool  callOnce) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>*  trigger, ::System::Threading::CancellationToken  cancellationToken, bool  callOnce) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationCallback() ;

/// @brief Method get_CancellationToken, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::CancellationToken get_CancellationToken() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITriggerHandler_1<T>"
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* i___Cysharp__Threading__Tasks__ITriggerHandler_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncFixedUpdateHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncFixedUpdateHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncLateUpdateHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncLateUpdateHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnAnimatorIKHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnAnimatorMoveHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationFocusHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnApplicationFocusHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationPauseHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnApplicationPauseHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnApplicationQuitHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnApplicationQuitHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnAudioFilterReadHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnAudioFilterReadHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnBecameInvisibleHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameVisibleHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnBecameVisibleHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeforeTransformParentChangedHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnBeforeTransformParentChangedHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnBeginDragHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnBeginDragHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCancelHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnCancelHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCanvasGroupChangedHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnCanvasGroupChangedHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnter2DHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnCollisionEnter2DHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionEnterHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnCollisionEnterHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExit2DHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnCollisionExit2DHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionExitHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnCollisionExitHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStay2DHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnCollisionStay2DHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnCollisionStayHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnCollisionStayHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnControllerColliderHitHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnControllerColliderHitHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDeselectHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnDeselectHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDisableHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnDisableHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDragHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnDragHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnDrawGizmosHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDrawGizmosSelectedHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnDrawGizmosSelectedHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnDropHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnDropHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnEnableHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnEnableHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnEndDragHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnEndDragHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnGUIHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnGUIHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnInitializePotentialDragHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnInitializePotentialDragHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnJointBreak2DHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreakHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnJointBreakHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDownHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnMouseDownHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseDragHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnMouseDragHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnMouseEnterHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseExitHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnMouseExitHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnMouseOverHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpAsButtonHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnMouseUpAsButtonHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseUpHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnMouseUpHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnMoveHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnMoveHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnParticleCollisionHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleSystemStoppedHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnParticleSystemStoppedHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnParticleTriggerHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnParticleUpdateJobScheduledHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerClickHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnPointerClickHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerDownHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnPointerDownHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerEnterHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnPointerEnterHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerExitHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnPointerExitHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPointerUpHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnPointerUpHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnPostRenderHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnPreCullHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnPreRenderHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformDimensionsChangeHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnRectTransformDimensionsChangeHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRectTransformRemovedHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnRectTransformRemovedHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnRenderImageHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnRenderObjectHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnScrollHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnScrollHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnSelectHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnSelectHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnServerInitializedHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnServerInitializedHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnSubmitHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnSubmitHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformChildrenChangedHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnTransformChildrenChangedHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTransformParentChangedHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnTransformParentChangedHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnter2DHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnTriggerEnter2DHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerEnterHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnTriggerEnterHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExit2DHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnTriggerExit2DHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerExitHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnTriggerExitHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStay2DHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnTriggerStay2DHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnTriggerStayHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnTriggerStayHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnUpdateSelectedHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnUpdateSelectedHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnValidateHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnValidateHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncOnWillRenderObjectHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncOneShotTrigger"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncOneShotTrigger* i___Cysharp__Threading__Tasks__Triggers__IAsyncOneShotTrigger() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncResetHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncResetHandler() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler"
constexpr ::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler* i___Cysharp__Threading__Tasks__Triggers__IAsyncUpdateHandler() noexcept;

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
constexpr AsyncTriggerHandler_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerHandler_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncTriggerHandler_1(AsyncTriggerHandler_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncTriggerHandler_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncTriggerHandler_1(AsyncTriggerHandler_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14560};

/// @brief Field trigger, offset: 0x10, size: 0x8, def value: None
 ::UnityW<T>  ___trigger;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field registration, offset: 0x20, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___registration;

/// @brief Field isDisposed, offset: 0x38, size: 0x1, def value: None
 bool  ___isDisposed;

/// @brief Field callOnce, offset: 0x39, size: 0x1, def value: None
 bool  ___callOnce;

/// @brief Field core, offset: 0x40, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  ___core;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  ____Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField;

/// @brief Field <Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::ITriggerHandler_1<T>*  ____Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks::Triggers
