#pragma once
// IWYU pragma private; include "Animancer/ManualMixerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ManualMixerState)
namespace Animancer {
class AnimancerPlayable;
}
namespace Animancer {
class AnimancerState;
}
namespace Animancer {
class ClipState;
}
namespace Animancer {
template<typename T>
struct FastEnumerator_1;
}
namespace Animancer {
template<typename T>
class ICopyable_1;
}
namespace Animancer {
class IHasKey;
}
namespace Animancer {
class IPlayableWrapper;
}
namespace Animancer {
class IPolymorphic;
}
namespace Animancer {
template<typename TState>
class ITransition_1;
}
namespace Animancer {
class ITransition;
}
namespace Animancer {
class ManualMixerState_ITransition2D;
}
namespace Animancer {
class ManualMixerState_ITransition;
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
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace UnityEngine::Animations {
struct AnimationScriptPlayable;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct AnimatorControllerParameterType;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class ManualMixerState;
}
namespace Animancer {
class ManualMixerState_ITransition;
}
namespace Animancer {
class ManualMixerState_ITransition2D;
}
// Write type traits
MARK_REF_T(::Animancer::ManualMixerState*);
MARK_REF_T(::Animancer::ManualMixerState_ITransition*);
MARK_REF_T(::Animancer::ManualMixerState_ITransition2D*);
DEFINE_IL2CPP_CLASS(::Animancer::ManualMixerState*, "Animancer", "ManualMixerState");
DEFINE_IL2CPP_CLASS(::Animancer::ManualMixerState_ITransition*, "Animancer", "ManualMixerState/ITransition");
DEFINE_IL2CPP_CLASS(::Animancer::ManualMixerState_ITransition2D*, "Animancer", "ManualMixerState/ITransition2D");
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ManualMixerState/ITransition
class CORDL_TYPE ManualMixerState_ITransition {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::ManualMixerState*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::ManualMixerState*>*() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::ManualMixerState*>"
constexpr ::Animancer::ITransition_1<::Animancer::ManualMixerState*>* i___Animancer__ITransition_1___Animancer__ManualMixerState__() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerState_ITransition", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManualMixerState_ITransition(ManualMixerState_ITransition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18152};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies 
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ManualMixerState/ITransition2D
class CORDL_TYPE ManualMixerState_ITransition2D {
public:
// Declarations
/// @brief Convert operator to "::Animancer::IHasKey"
constexpr operator  ::Animancer::IHasKey*() noexcept;

/// @brief Convert operator to "::Animancer::IPolymorphic"
constexpr operator  ::Animancer::IPolymorphic*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition"
constexpr operator  ::Animancer::ITransition*() noexcept;

/// @brief Convert operator to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr operator  ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>*() noexcept;

/// @brief Convert to "::Animancer::IHasKey"
constexpr ::Animancer::IHasKey* i___Animancer__IHasKey() noexcept;

/// @brief Convert to "::Animancer::IPolymorphic"
constexpr ::Animancer::IPolymorphic* i___Animancer__IPolymorphic() noexcept;

/// @brief Convert to "::Animancer::ITransition"
constexpr ::Animancer::ITransition* i___Animancer__ITransition() noexcept;

/// @brief Convert to "::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>"
constexpr ::Animancer::ITransition_1<::Animancer::MixerState_1<::UnityEngine::Vector2>*>* i___Animancer__ITransition_1___Animancer__MixerState_1___UnityEngine__Vector2___() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerState_ITransition2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManualMixerState_ITransition2D(ManualMixerState_ITransition2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18153};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Animancer
// Dependencies Animancer.AnimancerState
namespace Animancer {
// Is value type: false
// CS Name: Animancer.ManualMixerState
class CORDL_TYPE ManualMixerState : public ::Animancer::AnimancerState {
public:
// Declarations
using ITransition = ::Animancer::ManualMixerState_ITransition;

using ITransition2D = ::Animancer::ManualMixerState_ITransition2D;

 __declspec(property(get=get_ApplyAnimatorIK, put=set_ApplyAnimatorIK)) bool  ApplyAnimatorIK;

 __declspec(property(get=get_ApplyFootIK, put=set_ApplyFootIK)) bool  ApplyFootIK;

 __declspec(property(get=get_AverageVelocity)) ::UnityEngine::Vector3  AverageVelocity;

 __declspec(property(get=get_ChildCapacity, put=set_ChildCapacity)) int32_t  ChildCapacity;

 __declspec(property(get=get_ChildCount)) int32_t  ChildCount;

 __declspec(property(get=get_ChildStates, put=set_ChildStates)) ::ArrayW<::Animancer::AnimancerState*>  ChildStates;

 __declspec(property(get=get_Clip)) ::UnityW<::UnityEngine::AnimationClip>  Clip;

 __declspec(property(get=get_IsLooping)) bool  IsLooping;

 __declspec(property(get=get_KeepChildrenConnected)) bool  KeepChildrenConnected;

 __declspec(property(get=get_Length)) float_t  Length;

 __declspec(property(get=get_ParameterCount)) int32_t  ParameterCount;

 __declspec(property(get=get_RawTime, put=set_RawTime)) double_t  RawTime;

 __declspec(property(get=get_SynchronizedChildCount)) int32_t  SynchronizedChildCount;

 __declspec(property(get=get_SynchronizedChildren, put=set_SynchronizedChildren)) ::ArrayW<::Animancer::AnimancerState*>  SynchronizedChildren;

 __declspec(property(get=get_WeightsAreDirty, put=set_WeightsAreDirty)) bool  WeightsAreDirty;

/// @brief Field _ApplyAnimatorIK, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get__ApplyAnimatorIK, put=__cordl_internal_set__ApplyAnimatorIK)) bool  _ApplyAnimatorIK;

/// @brief Field _ApplyFootIK, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__ApplyFootIK, put=__cordl_internal_set__ApplyFootIK)) bool  _ApplyFootIK;

/// @brief Field _ChildCount, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__ChildCount, put=__cordl_internal_set__ChildCount)) int32_t  _ChildCount;

/// @brief Field <ChildStates>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__ChildStates_k__BackingField, put=__cordl_internal_set__ChildStates_k__BackingField)) ::ArrayW<::Animancer::AnimancerState*>  _ChildStates_k__BackingField;

/// @brief Field <DefaultChildCapacity>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DefaultChildCapacity_k__BackingField, put=setStaticF__DefaultChildCapacity_k__BackingField)) int32_t  _DefaultChildCapacity_k__BackingField;

/// @brief Field <MinimumSynchronizeChildrenWeight>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MinimumSynchronizeChildrenWeight_k__BackingField, put=setStaticF__MinimumSynchronizeChildrenWeight_k__BackingField)) float_t  _MinimumSynchronizeChildrenWeight_k__BackingField;

/// @brief Field <SynchronizeNewChildren>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__SynchronizeNewChildren_k__BackingField, put=setStaticF__SynchronizeNewChildren_k__BackingField)) bool  _SynchronizeNewChildren_k__BackingField;

/// @brief Field _SynchronizedChildren, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__SynchronizedChildren, put=__cordl_internal_set__SynchronizedChildren)) ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*  _SynchronizedChildren;

/// @brief Field <WeightsAreDirty>k__BackingField, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__WeightsAreDirty_k__BackingField, put=__cordl_internal_set__WeightsAreDirty_k__BackingField)) bool  _WeightsAreDirty_k__BackingField;

/// @brief Convert operator to "::Animancer::ICopyable_1<::Animancer::ManualMixerState*>"
constexpr operator  ::Animancer::ICopyable_1<::Animancer::ManualMixerState*>*() noexcept;

/// @brief Method Add, addr 0x18030e310, size 0x1d0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Add(::System::Object*  child) ;

/// @brief Method Add, addr 0x18030e4e0, size 0x60, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Add(::Animancer::ITransition*  transition) ;

/// @brief Method Add, addr 0x18030e290, size 0x80, virtual false, abstract: false, final false
inline ::Animancer::ClipState* Add(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Add, addr 0x18030e540, size 0x50, virtual false, abstract: false, final false
inline void Add(::Animancer::AnimancerState*  state) ;

/// @brief Method AddRange, addr 0x18030df90, size 0x150, virtual false, abstract: false, final false
inline void AddRange(::System::Collections::Generic::IList_1<::System::Object*>*  children) ;

/// @brief Method AddRange, addr 0x18030e0e0, size 0x10, virtual false, abstract: false, final false
inline void AddRange(::ArrayW<::Animancer::ITransition*>  clips) ;

/// @brief Method AddRange, addr 0x18030df90, size 0x150, virtual false, abstract: false, final false
inline void AddRange(::ArrayW<::System::Object*>  clips) ;

/// @brief Method AddRange, addr 0x18030e280, size 0x10, virtual false, abstract: false, final false
inline void AddRange(::ArrayW<::UnityEngine::AnimationClip*>  clips) ;

/// @brief Method AddRange, addr 0x18030dde0, size 0x1b0, virtual false, abstract: false, final false
inline void AddRange(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method AddRange, addr 0x18030e0f0, size 0x190, virtual false, abstract: false, final false
inline void AddRange(::System::Collections::Generic::IList_1<::Animancer::ITransition*>*  transitions) ;

/// @brief Method Animancer.ICopyable<Animancer.ManualMixerState>.CopyFrom, addr 0x18030e590, size 0x1e0, virtual true, abstract: false, final true
inline void Animancer_ICopyable_Animancer_ManualMixerState__CopyFrom(::Animancer::ManualMixerState*  copyFrom) ;

/// @brief Method AppendDetails, addr 0x18030e770, size 0x140, virtual true, abstract: false, final false
inline void AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator) ;

/// @brief Method ApplySynchronizeChildren, addr 0x18030e8b0, size 0x380, virtual false, abstract: false, final false
inline void ApplySynchronizeChildren(::by_ref<bool>  needsMoreUpdates) ;

/// @brief Method CalculateRealEffectiveSpeed, addr 0x18030ec30, size 0x190, virtual false, abstract: false, final false
inline float_t CalculateRealEffectiveSpeed() ;

/// @brief Method CalculateTotalWeight, addr 0x18030edc0, size 0x40, virtual false, abstract: false, final false
static inline float_t CalculateTotalWeight(::ArrayW<::Animancer::AnimancerState*>  states, int32_t  count) ;

/// @brief Method Clone, addr 0x18030ee00, size 0xc0, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* Clone(::Animancer::AnimancerPlayable*  root) ;

/// @brief Method CreatePlayable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::Animations::AnimationScriptPlayable CreatePlayable(::Animancer::AnimancerPlayable*  root, T  job, bool  processInputs) ;

/// @brief Method CreatePlayable, addr 0x18030eec0, size 0xa0, virtual true, abstract: false, final false
inline void CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable) ;

/// @brief Method CreatePlayable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable, T  job, bool  processInputs) ;

/// @brief Method Destroy, addr 0x18030f000, size 0x20, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method DestroyChildren, addr 0x18030ef60, size 0xa0, virtual false, abstract: false, final false
inline void DestroyChildren() ;

/// @brief Method DisableRemainingStates, addr 0x18030f020, size 0x80, virtual false, abstract: false, final false
inline void DisableRemainingStates(int32_t  previousIndex) ;

/// @brief Method DontSynchronize, addr 0x18030f2c0, size 0x90, virtual false, abstract: false, final false
inline void DontSynchronize(::Animancer::AnimancerState*  state) ;

/// @brief Method DontSynchronizeChildren, addr 0x18030f0a0, size 0x220, virtual false, abstract: false, final false
inline void DontSynchronizeChildren() ;

/// @brief Method EnsureRemainingChildCapacity, addr 0x18030f350, size 0x60, virtual false, abstract: false, final false
inline void EnsureRemainingChildCapacity(int32_t  minimumCapacity) ;

/// @brief Method ForceRecalculateWeights, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ForceRecalculateWeights() ;

/// @brief Method GatherAnimationClips, addr 0x18030f3b0, size 0x20, virtual true, abstract: false, final false
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetChild, addr 0x18030f3d0, size 0x30, virtual true, abstract: false, final true
inline ::Animancer::AnimancerState* GetChild(int32_t  index) ;

/// @brief Method GetDisplayKey, addr 0x18030f400, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetDisplayKey(::Animancer::AnimancerState*  state) ;

/// @brief Method GetEnumerator, addr 0x18030f440, size 0x40, virtual true, abstract: false, final true
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerState*> GetEnumerator() ;

/// @brief Method GetJobData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetJobData() ;

/// @brief Method GetParameterName, addr 0x18030f480, size 0x10, virtual true, abstract: false, final false
inline ::StringW GetParameterName(int32_t  index) ;

/// @brief Method GetParameterType, addr 0x18030f480, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::AnimatorControllerParameterType GetParameterType(int32_t  index) ;

/// @brief Method GetParameterValue, addr 0x18030f480, size 0x10, virtual true, abstract: false, final false
inline ::System::Object* GetParameterValue(int32_t  index) ;

/// @brief Method GetParentMixer, addr 0x18030f510, size 0xa0, virtual false, abstract: false, final false
inline ::Animancer::ManualMixerState* GetParentMixer() ;

/// @brief Method GetParentMixer, addr 0x18030f490, size 0x80, virtual false, abstract: false, final false
static inline ::Animancer::ManualMixerState* GetParentMixer(::Animancer::IPlayableWrapper*  node) ;

/// @brief Method GetSynchronizedTimeDetails, addr 0x18030f5b0, size 0x180, virtual false, abstract: false, final false
inline bool GetSynchronizedTimeDetails(::by_ref<float_t>  totalWeight, ::by_ref<float_t>  normalizedTime, ::by_ref<float_t>  length) ;

/// @brief Method GetTimeDetails, addr 0x18030f730, size 0x160, virtual false, abstract: false, final false
inline void GetTimeDetails(::by_ref<float_t>  totalWeight, ::by_ref<float_t>  normalizedTime, ::by_ref<float_t>  length) ;

/// @brief Method IndexOf, addr 0x18030f890, size 0x30, virtual false, abstract: false, final false
inline int32_t IndexOf(::Animancer::AnimancerState*  child) ;

/// @brief Method InitializeSynchronizedChildren, addr 0x18030f8c0, size 0xd0, virtual false, abstract: false, final false
inline void InitializeSynchronizedChildren(::ArrayW<bool>  synchronizeChildren) ;

/// @brief Method IsChildOf, addr 0x18030f990, size 0xc0, virtual false, abstract: false, final false
static inline bool IsChildOf(::Animancer::IPlayableWrapper*  child, ::Animancer::IPlayableWrapper*  parent) ;

/// @brief Method IsSynchronized, addr 0x18030fa50, size 0x50, virtual false, abstract: false, final false
inline bool IsSynchronized(::Animancer::AnimancerState*  state) ;

/// @brief Method MoveTime, addr 0x18030faa0, size 0xa0, virtual true, abstract: false, final false
inline void MoveTime(double_t  time, bool  normalized) ;

static inline ::Animancer::ManualMixerState* New_ctor() ;

/// @brief Method NormalizeDurations, addr 0x18030fb40, size 0xf0, virtual false, abstract: false, final false
inline void NormalizeDurations() ;

/// @brief Method NormalizeWeights, addr 0x18030fc30, size 0x90, virtual false, abstract: false, final false
inline void NormalizeWeights(float_t  totalWeight) ;

/// @brief Method OnAddChild, addr 0x18030fcc0, size 0xd0, virtual true, abstract: false, final false
inline void OnAddChild(::Animancer::AnimancerState*  state) ;

/// @brief Method OnChildCapacityChanged, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnChildCapacityChanged() ;

/// @brief Method OnRemoveChild, addr 0x18030fd90, size 0x250, virtual true, abstract: false, final false
inline void OnRemoveChild(::Animancer::AnimancerState*  state) ;

/// @brief Method OnSetIsPlaying, addr 0x18030ffe0, size 0x80, virtual true, abstract: false, final false
inline void OnSetIsPlaying() ;

/// @brief Method RecalculateWeights, addr 0x180310060, size 0x30, virtual false, abstract: false, final false
inline bool RecalculateWeights() ;

/// @brief Method Remove, addr 0x180310090, size 0x50, virtual false, abstract: false, final false
inline void Remove(::Animancer::AnimancerState*  child, bool  destroy) ;

/// @brief Method Remove, addr 0x1803100e0, size 0x60, virtual false, abstract: false, final false
inline void Remove(int32_t  index, bool  destroy) ;

/// @brief Method Set, addr 0x1803104d0, size 0x230, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Set(int32_t  index, ::System::Object*  child, bool  destroyPrevious) ;

/// @brief Method Set, addr 0x180310270, size 0x70, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Set(int32_t  index, ::Animancer::ITransition*  transition, bool  destroyPrevious) ;

/// @brief Method Set, addr 0x1803101e0, size 0x90, virtual false, abstract: false, final false
inline ::Animancer::ClipState* Set(int32_t  index, ::UnityEngine::AnimationClip*  clip, bool  destroyPrevious) ;

/// @brief Method Set, addr 0x1803102e0, size 0x1f0, virtual false, abstract: false, final false
inline void Set(int32_t  index, ::Animancer::AnimancerState*  child, bool  destroyPrevious) ;

/// @brief Method SetChildrenTime, addr 0x180310140, size 0xa0, virtual false, abstract: false, final false
inline void SetChildrenTime(float_t  value, bool  normalized) ;

/// @brief Method SetJobData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetJobData(T  value) ;

/// @brief Method SetParameterValue, addr 0x18030f480, size 0x10, virtual true, abstract: false, final false
inline void SetParameterValue(int32_t  index, ::System::Object*  value) ;

/// @brief Method Synchronize, addr 0x1803108d0, size 0x40, virtual false, abstract: false, final false
inline void Synchronize(::Animancer::AnimancerState*  state) ;

/// @brief Method SynchronizeDirect, addr 0x180310700, size 0x1d0, virtual false, abstract: false, final false
inline void SynchronizeDirect(::Animancer::AnimancerState*  state) ;

/// @brief Method ToString, addr 0x180310910, size 0x3d0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Update, addr 0x180310ce0, size 0xb0, virtual true, abstract: false, final false
inline void Update(::by_ref<bool>  needsMoreUpdates) ;

constexpr bool const& __cordl_internal_get__ApplyAnimatorIK() const;

constexpr bool& __cordl_internal_get__ApplyAnimatorIK() ;

constexpr bool const& __cordl_internal_get__ApplyFootIK() const;

constexpr bool& __cordl_internal_get__ApplyFootIK() ;

constexpr int32_t const& __cordl_internal_get__ChildCount() const;

constexpr int32_t& __cordl_internal_get__ChildCount() ;

constexpr ::ArrayW<::Animancer::AnimancerState*> const& __cordl_internal_get__ChildStates_k__BackingField() const;

constexpr ::ArrayW<::Animancer::AnimancerState*>& __cordl_internal_get__ChildStates_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>* const& __cordl_internal_get__SynchronizedChildren() const;

constexpr ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*& __cordl_internal_get__SynchronizedChildren() ;

constexpr bool const& __cordl_internal_get__WeightsAreDirty_k__BackingField() const;

constexpr bool& __cordl_internal_get__WeightsAreDirty_k__BackingField() ;

constexpr void __cordl_internal_set__ApplyAnimatorIK(bool  value) ;

constexpr void __cordl_internal_set__ApplyFootIK(bool  value) ;

constexpr void __cordl_internal_set__ChildCount(int32_t  value) ;

constexpr void __cordl_internal_set__ChildStates_k__BackingField(::ArrayW<::Animancer::AnimancerState*>  value) ;

constexpr void __cordl_internal_set__SynchronizedChildren(::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*  value) ;

constexpr void __cordl_internal_set__WeightsAreDirty_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x180310de0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__DefaultChildCapacity_k__BackingField() ;

static inline float_t getStaticF__MinimumSynchronizeChildrenWeight_k__BackingField() ;

static inline bool getStaticF__SynchronizeNewChildren_k__BackingField() ;

/// @brief Method get_ApplyAnimatorIK, addr 0x180310e70, size 0x10, virtual true, abstract: false, final false
inline bool get_ApplyAnimatorIK() ;

/// @brief Method get_ApplyFootIK, addr 0x180310e80, size 0x10, virtual true, abstract: false, final false
inline bool get_ApplyFootIK() ;

/// @brief Method get_AverageVelocity, addr 0x180310e90, size 0x120, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_AverageVelocity() ;

/// @brief Method get_ChildCapacity, addr 0x180310fb0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_ChildCapacity() ;

/// @brief Method get_ChildCount, addr 0x180310fd0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_ChildCount() ;

/// @brief Method get_ChildStates, addr 0x1802ec4c0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::Animancer::AnimancerState*> get_ChildStates() ;

/// @brief Method get_Clip, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_Clip() ;

/// @brief Method get_DefaultChildCapacity, addr 0x180310fe0, size 0x20, virtual false, abstract: false, final false
static inline int32_t get_DefaultChildCapacity() ;

/// @brief Method get_IsLooping, addr 0x180311000, size 0x90, virtual true, abstract: false, final false
inline bool get_IsLooping() ;

/// @brief Method get_KeepChildrenConnected, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_KeepChildrenConnected() ;

/// @brief Method get_Length, addr 0x180311090, size 0x1e0, virtual true, abstract: false, final false
inline float_t get_Length() ;

/// @brief Method get_MinimumSynchronizeChildrenWeight, addr 0x180311270, size 0x20, virtual false, abstract: false, final false
static inline float_t get_MinimumSynchronizeChildrenWeight() ;

/// @brief Method get_ParameterCount, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline int32_t get_ParameterCount() ;

/// @brief Method get_RawTime, addr 0x180311290, size 0x290, virtual true, abstract: false, final false
inline double_t get_RawTime() ;

/// @brief Method get_SynchronizeNewChildren, addr 0x180311520, size 0x20, virtual false, abstract: false, final false
static inline bool get_SynchronizeNewChildren() ;

/// @brief Method get_SynchronizedChildCount, addr 0x180311540, size 0x20, virtual false, abstract: false, final false
inline int32_t get_SynchronizedChildCount() ;

/// @brief Method get_SynchronizedChildren, addr 0x180311560, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<::Animancer::AnimancerState*> get_SynchronizedChildren() ;

/// @brief Method get_WeightsAreDirty, addr 0x1803115f0, size 0x10, virtual false, abstract: false, final false
inline bool get_WeightsAreDirty() ;

/// @brief Convert to "::Animancer::ICopyable_1<::Animancer::ManualMixerState*>"
constexpr ::Animancer::ICopyable_1<::Animancer::ManualMixerState*>* i___Animancer__ICopyable_1___Animancer__ManualMixerState__() noexcept;

static inline void setStaticF__DefaultChildCapacity_k__BackingField(int32_t  value) ;

static inline void setStaticF__MinimumSynchronizeChildrenWeight_k__BackingField(float_t  value) ;

static inline void setStaticF__SynchronizeNewChildren_k__BackingField(bool  value) ;

/// @brief Method set_ApplyAnimatorIK, addr 0x180311600, size 0x10, virtual true, abstract: false, final false
inline void set_ApplyAnimatorIK(bool  value) ;

/// @brief Method set_ApplyFootIK, addr 0x180311610, size 0x10, virtual true, abstract: false, final false
inline void set_ApplyFootIK(bool  value) ;

/// @brief Method set_ChildCapacity, addr 0x180311620, size 0x180, virtual false, abstract: false, final false
inline void set_ChildCapacity(int32_t  value) ;

/// @brief Method set_ChildStates, addr 0x1803117a0, size 0x10, virtual false, abstract: false, final false
inline void set_ChildStates(::ArrayW<::Animancer::AnimancerState*>  value) ;

/// @brief Method set_DefaultChildCapacity, addr 0x1803117b0, size 0x20, virtual false, abstract: false, final false
static inline void set_DefaultChildCapacity(int32_t  value) ;

/// @brief Method set_MinimumSynchronizeChildrenWeight, addr 0x1803117d0, size 0x20, virtual false, abstract: false, final false
static inline void set_MinimumSynchronizeChildrenWeight(float_t  value) ;

/// @brief Method set_RawTime, addr 0x1803117f0, size 0x110, virtual true, abstract: false, final false
inline void set_RawTime(double_t  value) ;

/// @brief Method set_SynchronizeNewChildren, addr 0x180311900, size 0x20, virtual false, abstract: false, final false
static inline void set_SynchronizeNewChildren(bool  value) ;

/// @brief Method set_SynchronizedChildren, addr 0x180311920, size 0xf0, virtual false, abstract: false, final false
inline void set_SynchronizedChildren(::ArrayW<::Animancer::AnimancerState*>  value) ;

/// @brief Method set_WeightsAreDirty, addr 0x180311a10, size 0x10, virtual false, abstract: false, final false
inline void set_WeightsAreDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ManualMixerState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ManualMixerState(ManualMixerState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ManualMixerState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ManualMixerState(ManualMixerState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18154};

/// @brief Field <ChildStates>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::Animancer::AnimancerState*>  ____ChildStates_k__BackingField;

/// @brief Field _ChildCount, offset: 0x88, size: 0x4, def value: None
 int32_t  ____ChildCount;

/// @brief Field <WeightsAreDirty>k__BackingField, offset: 0x8c, size: 0x1, def value: None
 bool  ____WeightsAreDirty_k__BackingField;

/// @brief Field _SynchronizedChildren, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*  ____SynchronizedChildren;

/// @brief Field _ApplyAnimatorIK, offset: 0x98, size: 0x1, def value: None
 bool  ____ApplyAnimatorIK;

/// @brief Field _ApplyFootIK, offset: 0x99, size: 0x1, def value: None
 bool  ____ApplyFootIK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::ManualMixerState, ____ChildStates_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Animancer::ManualMixerState, ____ChildCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Animancer::ManualMixerState, ____WeightsAreDirty_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Animancer::ManualMixerState, ____SynchronizedChildren) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Animancer::ManualMixerState, ____ApplyAnimatorIK) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Animancer::ManualMixerState, ____ApplyFootIK) == 0x99, "Offset mismatch!");

static_assert(sizeof(::Animancer::ManualMixerState) == 0xa0, "Size mismatch!");

} // namespace end def Animancer
