#pragma once
// IWYU pragma private; include "Animancer/AnimancerLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimancerLayer)
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
struct FadeMode;
}
namespace Animancer {
template<typename T>
struct FastEnumerator_1;
}
namespace Animancer {
class IAnimationClipCollection;
}
namespace Animancer {
class IPlayableWrapper;
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
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AvatarMask;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer {
class AnimancerLayer;
}
// Write type traits
MARK_REF_T(::Animancer::AnimancerLayer*);
DEFINE_IL2CPP_CLASS(::Animancer::AnimancerLayer*, "Animancer", "AnimancerLayer");
// Dependencies Animancer.AnimancerNode
namespace Animancer {
// Is value type: false
// CS Name: Animancer.AnimancerLayer
class CORDL_TYPE AnimancerLayer : public ::Animancer::AnimancerNode {
public:
// Declarations
 __declspec(property(get=get_ApplyAnimatorIK, put=set_ApplyAnimatorIK)) bool  ApplyAnimatorIK;

 __declspec(property(get=get_ApplyFootIK, put=set_ApplyFootIK)) bool  ApplyFootIK;

 __declspec(property(get=get_AverageVelocity)) ::UnityEngine::Vector3  AverageVelocity;

 __declspec(property(get=get_ChildCount)) int32_t  ChildCount;

 __declspec(property(get=get_CommandCount, put=set_CommandCount)) int32_t  CommandCount;

 __declspec(property(get=get_CurrentState, put=set_CurrentState)) ::Animancer::AnimancerState*  CurrentState;

 __declspec(property(get=get_IsAdditive, put=set_IsAdditive)) bool  IsAdditive;

 __declspec(property(get=get_Item)) ::Animancer::AnimancerState*  Item[];

 __declspec(property(get=get_KeepChildrenConnected)) bool  KeepChildrenConnected;

 __declspec(property(get=get_Layer)) ::Animancer::AnimancerLayer*  Layer;

 __declspec(property(get=get_Parent)) ::Animancer::IPlayableWrapper*  Parent;

/// @brief Field States, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_States, put=__cordl_internal_set_States)) ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*  States;

/// @brief Field _ApplyAnimatorIK, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__ApplyAnimatorIK, put=__cordl_internal_set__ApplyAnimatorIK)) bool  _ApplyAnimatorIK;

/// @brief Field _ApplyFootIK, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get__ApplyFootIK, put=__cordl_internal_set__ApplyFootIK)) bool  _ApplyFootIK;

/// @brief Field <CommandCount>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__CommandCount_k__BackingField, put=__cordl_internal_set__CommandCount_k__BackingField)) int32_t  _CommandCount_k__BackingField;

/// @brief Field _CurrentState, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentState, put=__cordl_internal_set__CurrentState)) ::Animancer::AnimancerState*  _CurrentState;

/// @brief Field <MaxCloneCount>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaxCloneCount_k__BackingField, put=setStaticF__MaxCloneCount_k__BackingField)) int32_t  _MaxCloneCount_k__BackingField;

/// @brief Field <WeightlessThreshold>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightlessThreshold_k__BackingField, put=setStaticF__WeightlessThreshold_k__BackingField)) float_t  _WeightlessThreshold_k__BackingField;

/// @brief Convert operator to "::Animancer::IAnimationClipCollection"
constexpr operator  ::Animancer::IAnimationClipCollection*() noexcept;

/// @brief Method AddChild, addr 0x1802de810, size 0x170, virtual false, abstract: false, final false
inline void AddChild(::Animancer::AnimancerState*  state) ;

/// @brief Method AppendDetails, addr 0x1802de980, size 0x130, virtual true, abstract: false, final false
inline void AppendDetails(::System::Text::StringBuilder*  text, ::StringW  separator) ;

/// @brief Method CreateIfNew, addr 0x1802deab0, size 0x40, virtual false, abstract: false, final false
inline void CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1) ;

/// @brief Method CreateIfNew, addr 0x1802deaf0, size 0x60, virtual false, abstract: false, final false
inline void CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1, ::UnityEngine::AnimationClip*  clip2) ;

/// @brief Method CreateIfNew, addr 0x1802debd0, size 0x70, virtual false, abstract: false, final false
inline void CreateIfNew(::UnityEngine::AnimationClip*  clip0, ::UnityEngine::AnimationClip*  clip1, ::UnityEngine::AnimationClip*  clip2, ::UnityEngine::AnimationClip*  clip3) ;

/// @brief Method CreateIfNew, addr 0x1802deb50, size 0x80, virtual false, abstract: false, final false
inline void CreateIfNew(::ArrayW<::UnityEngine::AnimationClip*>  clips) ;

/// @brief Method CreatePlayable, addr 0x1802dec40, size 0x60, virtual true, abstract: false, final false
inline void CreatePlayable(::by_ref<::UnityEngine::Playables::Playable>  playable) ;

/// @brief Method CreateState, addr 0x1802ded10, size 0x90, virtual false, abstract: false, final false
inline ::Animancer::ClipState* CreateState(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method CreateState, addr 0x1802deca0, size 0x70, virtual false, abstract: false, final false
inline ::Animancer::ClipState* CreateState(::System::Object*  key, ::UnityEngine::AnimationClip*  clip) ;

/// @brief Method DestroyStates, addr 0x1802deda0, size 0xb0, virtual false, abstract: false, final false
inline void DestroyStates() ;

/// @brief Method EvaluateFadeMode, addr 0x1802dee50, size 0x1d0, virtual false, abstract: false, final false
inline void EvaluateFadeMode(::Animancer::FadeMode  mode, ::by_ref<::Animancer::AnimancerState*>  state, ::by_ref<float_t>  fadeDuration, ::by_ref<float_t>  layerFadeDuration) ;

/// @brief Method GatherAnimationClips, addr 0x1802df020, size 0x20, virtual true, abstract: false, final true
inline void GatherAnimationClips(::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

/// @brief Method GetChild, addr 0x1802df040, size 0x30, virtual true, abstract: false, final false
inline ::Animancer::AnimancerState* GetChild(int32_t  index) ;

/// @brief Method GetEnumerator, addr 0x1802df070, size 0x30, virtual true, abstract: false, final false
inline ::Animancer::FastEnumerator_1<::Animancer::AnimancerState*> GetEnumerator() ;

/// @brief Method GetOrCreateState, addr 0x1802df340, size 0x100, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* GetOrCreateState(::UnityEngine::AnimationClip*  clip, bool  allowSetClip) ;

/// @brief Method GetOrCreateState, addr 0x1802df0a0, size 0xe0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* GetOrCreateState(::System::Object*  key, ::UnityEngine::AnimationClip*  clip, bool  allowSetClip) ;

/// @brief Method GetOrCreateState, addr 0x1802df180, size 0x110, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* GetOrCreateState(::Animancer::AnimancerState*  state) ;

/// @brief Method GetOrCreateState, addr 0x1802df290, size 0xb0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* GetOrCreateState(::Animancer::ITransition*  transition) ;

/// @brief Method GetOrCreateWeightlessState, addr 0x1802df440, size 0x430, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* GetOrCreateWeightlessState(::Animancer::AnimancerState*  state) ;

/// @brief Method GetState, addr 0x1802df870, size 0x320, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* GetState(::by_ref<::System::Object*>  key) ;

/// @brief Method GetTotalWeight, addr 0x1802dfb90, size 0x50, virtual false, abstract: false, final false
inline float_t GetTotalWeight() ;

/// @brief Method IsAnyStatePlaying, addr 0x1802dfbe0, size 0x60, virtual false, abstract: false, final false
inline bool IsAnyStatePlaying() ;

/// @brief Method IsPlayingAndNotEnding, addr 0x1802dfc40, size 0x30, virtual true, abstract: false, final false
inline bool IsPlayingAndNotEnding() ;

/// @brief Method IsPlayingClip, addr 0x1802dfc70, size 0xc0, virtual false, abstract: false, final false
inline bool IsPlayingClip(::UnityEngine::AnimationClip*  clip) ;

static inline ::Animancer::AnimancerLayer* New_ctor(::Animancer::AnimancerPlayable*  root, int32_t  index) ;

/// @brief Method OnAddChild, addr 0x1802dfd30, size 0x10, virtual true, abstract: false, final false
inline void OnAddChild(::Animancer::AnimancerState*  state) ;

/// @brief Method OnRemoveChild, addr 0x1802dfd40, size 0x150, virtual true, abstract: false, final false
inline void OnRemoveChild(::Animancer::AnimancerState*  state) ;

/// @brief Method OnStartFade, addr 0x1802dfe90, size 0x80, virtual true, abstract: false, final false
inline void OnStartFade() ;

/// @brief Method Play, addr 0x1802dff10, size 0x30, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Play, addr 0x1802e00f0, size 0x50, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::UnityEngine::AnimationClip*  clip, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method Play, addr 0x1802dff40, size 0x1b0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::AnimancerState*  state) ;

/// @brief Method Play, addr 0x1802e0360, size 0x2c0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::AnimancerState*  state, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method Play, addr 0x1802e0240, size 0x120, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::ITransition*  transition) ;

/// @brief Method Play, addr 0x1802e0140, size 0x100, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* Play(::Animancer::ITransition*  transition, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

/// @brief Method SetMask, addr 0x1802e0620, size 0x40, virtual false, abstract: false, final false
inline void SetMask(::UnityEngine::AvatarMask*  mask) ;

/// @brief Method Stop, addr 0x1802e0660, size 0xd0, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method ToString, addr 0x1802e0730, size 0x30, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryPlay, addr 0x1802e0810, size 0x80, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* TryPlay(::System::Object*  key) ;

/// @brief Method TryPlay, addr 0x1802e0760, size 0xb0, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* TryPlay(::System::Object*  key, float_t  fadeDuration, ::Animancer::FadeMode  mode) ;

constexpr ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>* const& __cordl_internal_get_States() const;

constexpr ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*& __cordl_internal_get_States() ;

constexpr bool const& __cordl_internal_get__ApplyAnimatorIK() const;

constexpr bool& __cordl_internal_get__ApplyAnimatorIK() ;

constexpr bool const& __cordl_internal_get__ApplyFootIK() const;

constexpr bool& __cordl_internal_get__ApplyFootIK() ;

constexpr int32_t const& __cordl_internal_get__CommandCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CommandCount_k__BackingField() ;

constexpr ::Animancer::AnimancerState* const& __cordl_internal_get__CurrentState() const;

constexpr ::Animancer::AnimancerState*& __cordl_internal_get__CurrentState() ;

constexpr void __cordl_internal_set_States(::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*  value) ;

constexpr void __cordl_internal_set__ApplyAnimatorIK(bool  value) ;

constexpr void __cordl_internal_set__ApplyFootIK(bool  value) ;

constexpr void __cordl_internal_set__CommandCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__CurrentState(::Animancer::AnimancerState*  value) ;

/// @brief Method .ctor, addr 0x1802e08d0, size 0x100, virtual false, abstract: false, final false
inline void _ctor(::Animancer::AnimancerPlayable*  root, int32_t  index) ;

static inline int32_t getStaticF__MaxCloneCount_k__BackingField() ;

static inline float_t getStaticF__WeightlessThreshold_k__BackingField() ;

/// @brief Method get_ApplyAnimatorIK, addr 0x1802e09d0, size 0x10, virtual true, abstract: false, final false
inline bool get_ApplyAnimatorIK() ;

/// @brief Method get_ApplyFootIK, addr 0x1802e09e0, size 0x10, virtual true, abstract: false, final false
inline bool get_ApplyFootIK() ;

/// @brief Method get_AverageVelocity, addr 0x1802e09f0, size 0x110, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AverageVelocity() ;

/// @brief Method get_ChildCount, addr 0x1802e0b00, size 0x20, virtual true, abstract: false, final false
inline int32_t get_ChildCount() ;

/// @brief Method get_CommandCount, addr 0x1802e0b20, size 0x10, virtual false, abstract: false, final false
inline int32_t get_CommandCount() ;

/// @brief Method get_CurrentState, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* get_CurrentState() ;

/// @brief Method get_IsAdditive, addr 0x1802e0b40, size 0x40, virtual false, abstract: false, final false
inline bool get_IsAdditive() ;

/// @brief Method get_Item, addr 0x1802df040, size 0x30, virtual false, abstract: false, final false
inline ::Animancer::AnimancerState* get_Item(int32_t  index) ;

/// @brief Method get_KeepChildrenConnected, addr 0x1802e0b80, size 0x20, virtual true, abstract: false, final false
inline bool get_KeepChildrenConnected() ;

/// @brief Method get_Layer, addr 0x1802e0ba0, size 0x10, virtual true, abstract: false, final false
inline ::Animancer::AnimancerLayer* get_Layer() ;

/// @brief Method get_MaxCloneCount, addr 0x1802e0bb0, size 0x20, virtual false, abstract: false, final false
static inline int32_t get_MaxCloneCount() ;

/// @brief Method get_Parent, addr 0x1802d9810, size 0x10, virtual true, abstract: false, final false
inline ::Animancer::IPlayableWrapper* get_Parent() ;

/// @brief Method get_WeightlessThreshold, addr 0x1802e0bd0, size 0x20, virtual false, abstract: false, final false
static inline float_t get_WeightlessThreshold() ;

/// @brief Convert to "::Animancer::IAnimationClipCollection"
constexpr ::Animancer::IAnimationClipCollection* i___Animancer__IAnimationClipCollection() noexcept;

static inline void setStaticF__MaxCloneCount_k__BackingField(int32_t  value) ;

static inline void setStaticF__WeightlessThreshold_k__BackingField(float_t  value) ;

/// @brief Method set_ApplyAnimatorIK, addr 0x1802e0bf0, size 0x90, virtual true, abstract: false, final false
inline void set_ApplyAnimatorIK(bool  value) ;

/// @brief Method set_ApplyFootIK, addr 0x1802e0c80, size 0x90, virtual true, abstract: false, final false
inline void set_ApplyFootIK(bool  value) ;

/// @brief Method set_CommandCount, addr 0x1802e0d10, size 0x10, virtual false, abstract: false, final false
inline void set_CommandCount(int32_t  value) ;

/// @brief Method set_CurrentState, addr 0x1802e0d20, size 0x20, virtual false, abstract: false, final false
inline void set_CurrentState(::Animancer::AnimancerState*  value) ;

/// @brief Method set_IsAdditive, addr 0x1802e0d40, size 0x40, virtual false, abstract: false, final false
inline void set_IsAdditive(bool  value) ;

/// @brief Method set_MaxCloneCount, addr 0x1802e0d80, size 0x20, virtual false, abstract: false, final false
static inline void set_MaxCloneCount(int32_t  value) ;

/// @brief Method set_WeightlessThreshold, addr 0x1802e0da0, size 0x20, virtual false, abstract: false, final false
static inline void set_WeightlessThreshold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnimancerLayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnimancerLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AnimancerLayer(AnimancerLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnimancerLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnimancerLayer(AnimancerLayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18102};

/// @brief Field States, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Animancer::AnimancerState*>*  ___States;

/// @brief Field _CurrentState, offset: 0x50, size: 0x8, def value: None
 ::Animancer::AnimancerState*  ____CurrentState;

/// @brief Field <CommandCount>k__BackingField, offset: 0x58, size: 0x4, def value: None
 int32_t  ____CommandCount_k__BackingField;

/// @brief Field _ApplyAnimatorIK, offset: 0x5c, size: 0x1, def value: None
 bool  ____ApplyAnimatorIK;

/// @brief Field _ApplyFootIK, offset: 0x5d, size: 0x1, def value: None
 bool  ____ApplyFootIK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::AnimancerLayer, ___States) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerLayer, ____CurrentState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerLayer, ____CommandCount_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerLayer, ____ApplyAnimatorIK) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Animancer::AnimancerLayer, ____ApplyFootIK) == 0x5d, "Offset mismatch!");

static_assert(sizeof(::Animancer::AnimancerLayer) == 0x60, "Size mismatch!");

} // namespace end def Animancer
