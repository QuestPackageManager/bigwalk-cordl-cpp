#pragma once
// IWYU pragma private; include "Animancer/AnimancerComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimancerComponent)
namespace Animancer {
struct AnimancerComponent_DisableAction;
}
namespace Animancer {
class AnimancerLayer;
}
namespace Animancer {
class AnimancerPlayable_LayerList;
}
namespace Animancer {
class AnimancerPlayable_StateDictionary;
}
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
struct FadeMode;
}
namespace Animancer {
class IAnimancerComponent;
}
namespace Animancer {
class IAnimationClipCollection;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class ITransition;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct AnimatorUpdateMode;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class IAnimationClipSource;
}
// Forward declare root types
namespace Animancer {
struct AnimancerComponent_DisableAction;
}
namespace Animancer {
class AnimancerComponent;
}
// Write type traits
MARK_VAL_T(::Animancer::AnimancerComponent_DisableAction);
MARK_REF_T(::Animancer::AnimancerComponent*);
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerComponent_DisableAction, "Animancer", "AnimancerComponent/DisableAction");
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerComponent*, "Animancer", "AnimancerComponent");
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.AnimancerComponent/DisableAction
struct CORDL_TYPE AnimancerComponent_DisableAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnimancerComponent_DisableAction_Unwrapped
enum struct __AnimancerComponent_DisableAction_Unwrapped : int32_t {
__E_Stop = static_cast<int32_t>(0x0),
__E_Pause = static_cast<int32_t>(0x1),
__E_Continue = static_cast<int32_t>(0x2),
__E_Reset = static_cast<int32_t>(0x3),
__E_Destroy = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimancerComponent_DisableAction_Unwrapped () const noexcept {
return static_cast<__AnimancerComponent_DisableAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnimancerComponent_DisableAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimancerComponent_DisableAction(int32_t  value__) noexcept;

/// @brief Field Continue value: I32(2)
static ::Animancer::AnimancerComponent_DisableAction const Continue;

/// @brief Field Destroy value: I32(4)
static ::Animancer::AnimancerComponent_DisableAction const Destroy;

/// @brief Field Pause value: I32(1)
static ::Animancer::AnimancerComponent_DisableAction const Pause;

/// @brief Field Reset value: I32(3)
static ::Animancer::AnimancerComponent_DisableAction const Reset;

/// @brief Field Stop value: I32(0)
static ::Animancer::AnimancerComponent_DisableAction const Stop;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18070};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerComponent_DisableAction, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerComponent_DisableAction) == 0x4, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.AnimancerComponent::DisableAction, UnityEngine.MonoBehaviour
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerComponent
class CORDL_TYPE AnimancerComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DisableAction = ::Animancer::AnimancerComponent_DisableAction;

 __declspec(property(get=get_ActionOnDisable)) ::Animancer::AnimancerComponent_DisableAction  ActionOnDisable;

 __declspec(property(get=Animancer_IAnimancerComponent_get_ResetOnDisable)) bool  Animancer_IAnimancerComponent_ResetOnDisable;

 __declspec(property(get=get_Animator, put=set_Animator)) ::UnityW<::UnityEngine::Animator>  Animator;

 __declspec(property(get=get_IsPlayableInitialized)) bool  IsPlayableInitialized;

 __declspec(property(get=get_Layers)) ::Animancer::AnimancerPlayable_LayerList*  Layers;

 __declspec(property(get=get_Playable)) ::Animancer::AnimancerPlayable*  Playable;

 __declspec(property(get=get_States)) ::Animancer::AnimancerPlayable_StateDictionary*  States;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

 __declspec(property(get=get_UpdateMode, put=set_UpdateMode)) ::UnityEngine::AnimatorUpdateMode  UpdateMode;

/// @brief Field _ActionOnDisable, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__ActionOnDisable, put=__cordl_internal_set__ActionOnDisable)) ::Animancer::AnimancerComponent_DisableAction  _ActionOnDisable;

/// @brief Field _Animator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animator, put=__cordl_internal_set__Animator)) ::UnityW<::UnityEngine::Animator>  _Animator;

/// @brief Field _Playable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Playable, put=__cordl_internal_set__Playable)) ::Animancer::AnimancerPlayable*  _Playable;

/// @brief Convert operator to "::Animancer::IAnimancerComponent"
constexpr operator  ::Animancer::IAnimancerComponent*() noexcept;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::UnityEngine::IAnimationClipSource"
constexpr operator  ::UnityEngine::IAnimationClipSource*() noexcept;

/// @brief Method Animancer.IAnimancerComponent.get_ResetOnDisable, addr 0x1802dc4c0, size 0x10, virtual true, abstract: false, final true
inline bool Animancer_IAnimancerComponent_get_ResetOnDisable() ;

/// @brief Method Animancer.IAnimancerComponent.get_enabled, addr 0x1802dc4d0, size 0x10, virtual true, abstract: false, final true
inline bool Animancer_IAnimancerComponent_get_enabled() ;

/// @brief Method Animancer.IAnimancerComponent.get_gameObject, addr 0x1802dc4e0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> Animancer_IAnimancerComponent_get_gameObject() ;

/// @brief Method Evaluate, addr 0x1802dc4f0, size 0x30, virtual false, abstract: false, final false
inline void Evaluate() ;

/// @brief Method Evaluate, addr 0x1802dc520, size 0x40, virtual false, abstract: false, final false
inline void Evaluate(float_t  deltaTime) ;

/// @brief Method GatherAnimationClips, addr 0x1802dc560, size 0x60, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetAnimationClips, addr 0x1802dc5c0, size 0xc0, virtual true, abstract: false, final true
inline void GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetKey, addr 0x1802dc680, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* GetKey(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method InitializePlayable, addr 0x1802dc690, size 0x100, virtual false, abstract: false, final false
inline void InitializePlayable() ;

/// @brief Method InitializePlayable, addr 0x1802dc790, size 0xb0, virtual false, abstract: false, final false
inline void InitializePlayable(::Animancer::AnimancerPlayable*  playable) ;

/// @brief Method IsPlaying, addr 0x1802dca90, size 0xf0, virtual false, abstract: false, final false
inline bool IsPlaying() ;

/// @brief Method IsPlaying, addr 0x1802dcc30, size 0xc0, virtual false, abstract: false, final false
inline bool IsPlaying(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method IsPlaying, addr 0x1802dc9c0, size 0xd0, virtual false, abstract: false, final false
inline bool IsPlaying(::Animancer::IHasKey*  hasKey) ;

/// @brief Method IsPlaying, addr 0x1802dcb80, size 0xb0, virtual false, abstract: false, final false
inline bool IsPlaying(::System::Object*  key) ;

/// @brief Method IsPlayingClip, addr 0x1802dc840, size 0x180, virtual false, abstract: false, final false
inline bool IsPlayingClip(::UnityEngine::AnimationClip*  clip) ;

static inline ::Animancer::AnimancerComponent* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1802dccf0, size 0x70, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1802dcd60, size 0x110, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1802dce70, size 0x60, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInitializePlayable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnInitializePlayable() ;

/// @brief Method Play, addr 0x1802dcfc0, size 0xd0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Play, addr 0x1802dd090, size 0xa0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip*  clip, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method Play, addr 0x1802dd190, size 0xa0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::AnimancerState*  state) ;

/// @brief Method Play, addr 0x1802dced0, size 0x60, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::AnimancerState*  state, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method Play, addr 0x1802dcf30, size 0x90, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::ITransition*  transition) ;

/// @brief Method Play, addr 0x1802dd130, size 0x60, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::ITransition*  transition, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method Stop, addr 0x1802dd230, size 0xa0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Stop(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Stop, addr 0x1802dd360, size 0xc0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Stop(::Animancer::IHasKey*  hasKey) ;

/// @brief Method Stop, addr 0x1802dd2d0, size 0x90, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Stop(::System::Object*  key) ;

/// @brief Method Stop, addr 0x1802dd420, size 0xb0, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x1802dd4d0, size 0x50, virtual true, abstract: false, final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method TryGetAnimator, addr 0x1802dd530, size 0x40, virtual false, abstract: false, final false
inline bool TryGetAnimator() ;

/// @brief Method TryPlay, addr 0x1802dd570, size 0x120, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* TryPlay(::System::Object*  key) ;

/// @brief Method TryPlay, addr 0x1802dd690, size 0x130, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* TryPlay(::System::Object*  key, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

constexpr ::Animancer::AnimancerComponent_DisableAction const& __cordl_internal_get__ActionOnDisable() const;

constexpr ::Animancer::AnimancerComponent_DisableAction& __cordl_internal_get__ActionOnDisable() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__Animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__Animator() ;

constexpr ::Animancer::AnimancerPlayable* const& __cordl_internal_get__Playable() const;

constexpr ::Animancer::AnimancerPlayable*& __cordl_internal_get__Playable() ;

constexpr void __cordl_internal_set__ActionOnDisable(::Animancer::AnimancerComponent_DisableAction  value) ;

constexpr void __cordl_internal_set__Animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__Playable(::Animancer::AnimancerPlayable*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActionOnDisable, addr 0x1802dd7d0, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::Animancer::AnimancerComponent_DisableAction> get_ActionOnDisable() ;

/// @brief Method get_Animator, addr 0x1802d97e0, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Animator> get_Animator() ;

/// @brief Method get_IsPlayableInitialized, addr 0x1802dd7e0, size 0x20, virtual true, abstract: false, final true
inline bool get_IsPlayableInitialized() ;

/// @brief Method get_Layers, addr 0x1802dd800, size 0x20, virtual false, abstract: false, final false
inline ::Animancer::AnimancerPlayable_LayerList* get_Layers() ;

/// @brief Method get_Playable, addr 0x1802dd820, size 0x100, virtual true, abstract: false, final true
inline ::Animancer::AnimancerPlayable* get_Playable() ;

/// @brief Method get_States, addr 0x1802dd920, size 0x20, virtual false, abstract: false, final false
inline ::Animancer::AnimancerPlayable_StateDictionary* get_States() ;

/// @brief Method get_UpdateMode, addr 0x1802dd940, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::AnimatorUpdateMode get_UpdateMode() ;

/// @brief Convert to "::Animancer::IAnimancerComponent"
constexpr ::Animancer::IAnimancerComponent* i___Animancer__IAnimancerComponent() noexcept;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::UnityEngine::IAnimationClipSource"
constexpr ::UnityEngine::IAnimationClipSource* i___UnityEngine__IAnimationClipSource() noexcept;

/// @brief Method op_Implicit, addr 0x1802dd980, size 0x50, virtual false, abstract: false, final false
static inline ::Animancer::AnimancerLayer* op_Implicit___Animancer__AnimancerLayer_(::Animancer::AnimancerComponent*  animancer) ;

/// @brief Method op_Implicit, addr 0x1802dd960, size 0x20, virtual false, abstract: false, final false
static inline ::Animancer::AnimancerPlayable* op_Implicit___Animancer__AnimancerPlayable_(::Animancer::AnimancerComponent*  animancer) ;

/// @brief Method set_Animator, addr 0x1802dd9d0, size 0x150, virtual true, abstract: false, final true
inline void set_Animator(::UnityEngine::Animator*  value) ;

/// @brief Method set_UpdateMode, addr 0x1802ddb20, size 0x70, virtual true, abstract: false, final true
inline void set_UpdateMode(::UnityEngine::AnimatorUpdateMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerComponent(AnimancerComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerComponent(AnimancerComponent const& ) = delete;

/// @brief Field DefaultExecutionOrder offset 0xffffffff size 0x4
static constexpr int32_t  DefaultExecutionOrder{static_cast<int32_t>(0xffffec78)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18071};

/// @brief Field _Animator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____Animator;

/// @brief Field _Playable, offset: 0x28, size: 0x8, def value: None
 ::Animancer::AnimancerPlayable*  ____Playable;

/// @brief Field _ActionOnDisable, offset: 0x30, size: 0x4, def value: None
 ::Animancer::AnimancerComponent_DisableAction  ____ActionOnDisable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerComponent, ____Animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerComponent, ____Playable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerComponent, ____ActionOnDisable) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerComponent) == 0x38, "Size mismatch!");

} // namespace end def Animancer
