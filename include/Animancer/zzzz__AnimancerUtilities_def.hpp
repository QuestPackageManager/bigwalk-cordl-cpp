#pragma once
// IWYU pragma private; include "Animancer/AnimancerUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimancerUtilities)
namespace Animancer {
class AnimancerNode;
}
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
class IAnimationClipCollection;
}
namespace Animancer {
class ITransitionDetailed;
}
namespace Animancer {
class ITransition;
}
namespace Animancer {
template<typename TParameter>
class MixerState_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class ArgumentException;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Animations {
struct AnimatorControllerPlayable;
}
namespace UnityEngine::Animations {
struct TransformStreamHandle;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimatorControllerParameter;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class IAnimationClipSource;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class AnimancerUtilities;
}
// Write type traits
MARK_REF_T(::Animancer::AnimancerUtilities*);
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerUtilities*, "Animancer", "AnimancerUtilities");
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerUtilities
class CORDL_TYPE AnimancerUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method AddAnimancerComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T AddAnimancerComponent(::UnityEngine::Animator*  animator) ;

/// @brief Method CalculateThresholdsFromAverageVelocityXZ, addr 0x1802e8150, size 0xb0, virtual false, abstract: false, final false
static inline void CalculateThresholdsFromAverageVelocityXZ(::Animancer::MixerState_1<::UnityEngine::Vector2>*  mixer) ;

/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Clone(T  original) ;

/// @brief Method ConvertToTransformStreamHandles, addr 0x1802e8200, size 0x150, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> ConvertToTransformStreamHandles(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Transform>>*  transforms, ::UnityEngine::Animator*  animator) ;

/// @brief Method CopyExactArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CopyExactArray(::ArrayW<T>  copyFrom, ::by_ref<::ArrayW<T>>  copyTo) ;

/// @brief Method CopyParameterValue, addr 0x1802e84d0, size 0x150, virtual false, abstract: false, final false
static inline void CopyParameterValue(::UnityEngine::Animations::AnimatorControllerPlayable  copyFrom, ::UnityEngine::Animations::AnimatorControllerPlayable  copyTo, ::UnityEngine::AnimatorControllerParameter*  parameter) ;

/// @brief Method CopyParameterValue, addr 0x1802e8350, size 0x180, virtual false, abstract: false, final false
static inline void CopyParameterValue(::UnityEngine::Animator*  copyFrom, ::UnityEngine::Animator*  copyTo, ::UnityEngine::AnimatorControllerParameter*  parameter) ;

/// @brief Method CreateNativeReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Collections::NativeArray_1<T> CreateNativeReference() ;

/// @brief Method CreateStateAndApply, addr 0x1802e8620, size 0x90, virtual false, abstract: false, final false
static inline ::Animancer::AnimancerState* CreateStateAndApply(::Animancer::ITransition*  transition, ::Animancer::AnimancerPlayable*  root) ;

/// @brief Method CreateUnsupportedArgumentException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::ArgumentException* CreateUnsupportedArgumentException(T  value) ;

/// @brief Method EditModePlay, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void EditModePlay(::UnityEngine::AnimationClip*  clip, ::UnityEngine::Component*  component) ;

/// @brief Method EditModeSampleAnimation, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void EditModeSampleAnimation(::UnityEngine::AnimationClip*  clip, ::UnityEngine::Component*  component, float_t  time) ;

/// @brief Method Gather, addr 0x1802e9040, size 0x150, virtual false, abstract: false, final false
static inline void Gather(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Gather, addr 0x1802e9190, size 0x180, virtual false, abstract: false, final false
static inline void Gather(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>*  gatherFrom) ;

/// @brief Method Gather, addr 0x1802e9310, size 0xe0, virtual false, abstract: false, final false
static inline void Gather(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*  gatherFrom) ;

/// @brief Method GatherFromAsset, addr 0x1802e86b0, size 0x140, virtual false, abstract: false, final false
static inline void GatherFromAsset(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::UnityEngine::Playables::PlayableAsset*  asset) ;

/// @brief Method GatherFromSource, addr 0x1802e87f0, size 0x170, virtual false, abstract: false, final false
static inline bool GatherFromSource(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Object*  source) ;

/// @brief Method GatherFromSource, addr 0x1802e8960, size 0x180, virtual false, abstract: false, final false
static inline void GatherFromSource(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Collections::IEnumerable*  source) ;

/// @brief Method GatherFromSource, addr 0x1802e8ae0, size 0x70, virtual false, abstract: false, final false
static inline void GatherFromSource(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::UnityEngine::IAnimationClipSource*  source) ;

/// @brief Method GatherFromTracks, addr 0x1802e8b50, size 0x4f0, virtual false, abstract: false, final false
static inline void GatherFromTracks(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips, ::System::Collections::IEnumerable*  tracks) ;

/// @brief Method GetComponentInParentOrChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetComponentInParentOrChildren(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method GetComponentInParentOrChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool GetComponentInParentOrChildren(::UnityEngine::GameObject*  gameObject, ::by_ref<T>  component) ;

/// @brief Method GetOrAddAnimancerComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetOrAddAnimancerComponent(::UnityEngine::Animator*  animator) ;

/// @brief Method GetParameterValue, addr 0x1802e9520, size 0x160, virtual false, abstract: false, final false
static inline ::System::Object* GetParameterValue(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorControllerParameter*  parameter) ;

/// @brief Method GetParameterValue, addr 0x1802e93f0, size 0x130, virtual false, abstract: false, final false
static inline ::System::Object* GetParameterValue(::UnityEngine::Animations::AnimatorControllerPlayable  playable, ::UnityEngine::AnimatorControllerParameter*  parameter) ;

/// @brief Method GetUnsupportedMessage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW GetUnsupportedMessage(T  value) ;

/// @brief Method GetWrappedObject, addr 0x1802e9680, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Object* GetWrappedObject(::System::Object*  wrapper) ;

/// @brief Method HasEvent, addr 0x1802e9890, size 0x90, virtual false, abstract: false, final false
static inline bool HasEvent(::UnityEngine::AnimationClip*  clip, ::StringW  functionName) ;

/// @brief Method HasEvent, addr 0x1802e9750, size 0x140, virtual false, abstract: false, final false
static inline bool HasEvent(::Animancer::IAnimationClipCollection*  source, ::StringW  functionName) ;

/// @brief Method IsFinite, addr 0x1802e9960, size 0x60, virtual false, abstract: false, final false
static inline bool IsFinite(::UnityEngine::Vector2  value) ;

/// @brief Method IsFinite, addr 0x1802e9920, size 0x40, virtual false, abstract: false, final false
static inline bool IsFinite(double_t  value) ;

/// @brief Method IsFinite, addr 0x1802e99c0, size 0x30, virtual false, abstract: false, final false
static inline bool IsFinite(float_t  value) ;

/// @brief Method IsNullOrEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool IsNullOrEmpty(::ArrayW<T>  array) ;

/// @brief Method IsValid, addr 0x1802e9a10, size 0x30, virtual false, abstract: false, final false
static inline bool IsValid(::Animancer::AnimancerNode*  node) ;

/// @brief Method IsValid, addr 0x1802e9a40, size 0x60, virtual false, abstract: false, final false
static inline bool IsValid(::Animancer::ITransition*  transition) ;

/// @brief Method IsValid, addr 0x1802e99f0, size 0x20, virtual false, abstract: false, final false
static inline bool IsValid(::Animancer::ITransitionDetailed*  transition) ;

/// @brief Method RemovePlayable, addr 0x1802e9aa0, size 0x1f0, virtual false, abstract: false, final false
static inline void RemovePlayable(::UnityEngine::Playables::Playable  playable, bool  destroy) ;

/// @brief Method Round, addr 0x1802e9cd0, size 0x30, virtual false, abstract: false, final false
static inline float_t Round(float_t  value) ;

/// @brief Method Round, addr 0x1802e9c90, size 0x40, virtual false, abstract: false, final false
static inline float_t Round(float_t  value, float_t  multiple) ;

/// @brief Method SetDirty, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void SetDirty(::UnityEngine::Object*  target) ;

/// @brief Method SetLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool SetLength(::by_ref<::ArrayW<T>>  array, int32_t  length) ;

/// @brief Method SetParameterValue, addr 0x1802e9d00, size 0x250, virtual false, abstract: false, final false
static inline void SetParameterValue(::UnityEngine::Animator*  animator, ::UnityEngine::AnimatorControllerParameter*  parameter, ::System::Object*  value) ;

/// @brief Method SetParameterValue, addr 0x1802e9f50, size 0x230, virtual false, abstract: false, final false
static inline void SetParameterValue(::UnityEngine::Animations::AnimatorControllerPlayable  playable, ::UnityEngine::AnimatorControllerParameter*  parameter, ::System::Object*  value) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Swap(::ArrayW<T>  array, int32_t  a, int32_t  b) ;

/// @brief Method ToStringOrNull, addr 0x1802ea180, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW ToStringOrNull(::System::Object*  obj) ;

/// @brief Method TryGetAverageAngularSpeed, addr 0x1802ea220, size 0xb0, virtual false, abstract: false, final false
static inline bool TryGetAverageAngularSpeed(::System::Object*  motion, ::by_ref<float_t>  averageAngularSpeed) ;

/// @brief Method TryGetAverageVelocity, addr 0x1802ea2d0, size 0x140, virtual false, abstract: false, final false
static inline bool TryGetAverageVelocity(::System::Object*  motion, ::by_ref<::UnityEngine::Vector3>  averageVelocity) ;

/// @brief Method TryGetFrameRate, addr 0x1802ea410, size 0x1f0, virtual false, abstract: false, final false
static inline bool TryGetFrameRate(::System::Object*  clipSource, ::by_ref<float_t>  frameRate) ;

/// @brief Method TryGetIsLooping, addr 0x1802ea600, size 0xa0, virtual false, abstract: false, final false
static inline bool TryGetIsLooping(::System::Object*  motionOrTransition, ::by_ref<bool>  isLooping) ;

/// @brief Method TryGetLength, addr 0x1802ea6a0, size 0xa0, virtual false, abstract: false, final false
static inline bool TryGetLength(::System::Object*  motionOrTransition, ::by_ref<float_t>  length) ;

/// @brief Method TryGetWrappedObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryGetWrappedObject(::System::Object*  wrapper, ::by_ref<T>  wrapped) ;

/// @brief Method Wrap, addr 0x1802ea780, size 0x240, virtual false, abstract: false, final false
static inline float_t Wrap(float_t  value, float_t  length) ;

/// @brief Method Wrap01, addr 0x1802ea740, size 0x40, virtual false, abstract: false, final false
static inline float_t Wrap01(float_t  value) ;

/// @brief Method Assert, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition, ::System::Object*  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerUtilities(AnimancerUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerUtilities(AnimancerUtilities const& ) = delete;

/// @brief Field IsAnimancerPro offset 0xffffffff size 0x1
static constexpr bool  IsAnimancerPro{true};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18111};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::AnimancerUtilities) == 0x10, "Size mismatch!");

} // namespace end def Animancer
