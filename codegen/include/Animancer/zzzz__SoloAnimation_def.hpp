#pragma once
// IWYU pragma private; include "Animancer/SoloAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Animations/zzzz__AnimationClipPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SoloAnimation)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class IAnimationClipSource;
}
// Forward declare root types
namespace Animancer {
class SoloAnimation;
}
// Write type traits
MARK_REF_T(::Animancer::SoloAnimation*);
DEFINE_IL2CPP_CLASS(::Animancer::SoloAnimation*, "Animancer", "SoloAnimation");
// Dependencies UnityEngine.Animations.AnimationClipPlayable, UnityEngine.MonoBehaviour, UnityEngine.Playables.PlayableGraph
namespace Animancer {
// Is value type: false
// CS Name: Animancer.SoloAnimation
class CORDL_TYPE SoloAnimation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Animator, put=set_Animator)) ::UnityW<::UnityEngine::Animator>  Animator;

 __declspec(property(get=get_Clip, put=set_Clip)) ::UnityW<::UnityEngine::AnimationClip>  Clip;

 __declspec(property(get=get_FootIK, put=set_FootIK)) bool  FootIK;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_IsPlaying, put=set_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_NormalizedTime, put=set_NormalizedTime)) float_t  NormalizedTime;

 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

 __declspec(property(get=get_StopOnDisable, put=set_StopOnDisable)) bool  StopOnDisable;

 __declspec(property(get=get_Time, put=set_Time)) float_t  Time;

/// @brief Field _Animator, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animator, put=__cordl_internal_set__Animator)) ::UnityW<::UnityEngine::Animator>  _Animator;

/// @brief Field _Clip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Clip, put=__cordl_internal_set__Clip)) ::UnityW<::UnityEngine::AnimationClip>  _Clip;

/// @brief Field _FootIK, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__FootIK, put=__cordl_internal_set__FootIK)) bool  _FootIK;

/// @brief Field _Graph, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__Graph, put=__cordl_internal_set__Graph)) ::UnityEngine::Playables::PlayableGraph  _Graph;

/// @brief Field _IsPlaying, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPlaying, put=__cordl_internal_set__IsPlaying)) bool  _IsPlaying;

/// @brief Field _Playable, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__Playable, put=__cordl_internal_set__Playable)) ::UnityEngine::Animations::AnimationClipPlayable  _Playable;

/// @brief Field _Speed, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__Speed, put=__cordl_internal_set__Speed)) float_t  _Speed;

/// @brief Convert operator to "::UnityEngine::IAnimationClipSource"
constexpr operator  ::UnityEngine::IAnimationClipSource*() noexcept;

/// @brief Method GetAnimationClips, addr 0x180314d70, size 0x90, virtual true, abstract: false, final true
inline void GetAnimationClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AnimationClip>>*  clips) ;

static inline ::Animancer::SoloAnimation* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180314e00, size 0x30, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x180314e30, size 0x90, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x180314ec0, size 0x40, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x180314f00, size 0x110, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0x180315010, size 0x110, virtual false, abstract: false, final false
inline void Play(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method Update, addr 0x180315120, size 0xb0, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__Animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__Animator() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Clip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Clip() ;

constexpr bool const& __cordl_internal_get__FootIK() const;

constexpr bool& __cordl_internal_get__FootIK() ;

constexpr ::UnityEngine::Playables::PlayableGraph const& __cordl_internal_get__Graph() const;

constexpr ::UnityEngine::Playables::PlayableGraph& __cordl_internal_get__Graph() ;

constexpr bool const& __cordl_internal_get__IsPlaying() const;

constexpr bool& __cordl_internal_get__IsPlaying() ;

constexpr ::UnityEngine::Animations::AnimationClipPlayable const& __cordl_internal_get__Playable() const;

constexpr ::UnityEngine::Animations::AnimationClipPlayable& __cordl_internal_get__Playable() ;

constexpr float_t const& __cordl_internal_get__Speed() const;

constexpr float_t& __cordl_internal_get__Speed() ;

constexpr void __cordl_internal_set__Animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set__Clip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__FootIK(bool  value) ;

constexpr void __cordl_internal_set__Graph(::UnityEngine::Playables::PlayableGraph  value) ;

constexpr void __cordl_internal_set__IsPlaying(bool  value) ;

constexpr void __cordl_internal_set__Playable(::UnityEngine::Animations::AnimationClipPlayable  value) ;

constexpr void __cordl_internal_set__Speed(float_t  value) ;

/// @brief Method .ctor, addr 0x1803151d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Animator, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Animator> get_Animator() ;

/// @brief Method get_Clip, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AnimationClip> get_Clip() ;

/// @brief Method get_FootIK, addr 0x1803151e0, size 0x10, virtual false, abstract: false, final false
inline bool get_FootIK() ;

/// @brief Method get_IsInitialized, addr 0x1803151f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_IsPlaying, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_NormalizedTime, addr 0x180315200, size 0x60, virtual false, abstract: false, final false
inline float_t get_NormalizedTime() ;

/// @brief Method get_Speed, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Method get_StopOnDisable, addr 0x180315270, size 0x30, virtual false, abstract: false, final false
inline bool get_StopOnDisable() ;

/// @brief Method get_Time, addr 0x1803152a0, size 0x30, virtual false, abstract: false, final false
inline float_t get_Time() ;

/// @brief Convert to "::UnityEngine::IAnimationClipSource"
constexpr ::UnityEngine::IAnimationClipSource* i___UnityEngine__IAnimationClipSource() noexcept;

/// @brief Method set_Animator, addr 0x1803152d0, size 0x40, virtual false, abstract: false, final false
inline void set_Animator(::UnityEngine::Animator*  value) ;

/// @brief Method set_Clip, addr 0x180315310, size 0x40, virtual false, abstract: false, final false
inline void set_Clip(::UnityEngine::AnimationClip*  value) ;

/// @brief Method set_FootIK, addr 0x180315350, size 0x10, virtual false, abstract: false, final false
inline void set_FootIK(bool  value) ;

/// @brief Method set_IsPlaying, addr 0x180315360, size 0x60, virtual false, abstract: false, final false
inline void set_IsPlaying(bool  value) ;

/// @brief Method set_NormalizedTime, addr 0x1803153c0, size 0x50, virtual false, abstract: false, final false
inline void set_NormalizedTime(float_t  value) ;

/// @brief Method set_Speed, addr 0x180315410, size 0xa0, virtual false, abstract: false, final false
inline void set_Speed(float_t  value) ;

/// @brief Method set_StopOnDisable, addr 0x1803154b0, size 0x30, virtual false, abstract: false, final false
inline void set_StopOnDisable(bool  value) ;

/// @brief Method set_Time, addr 0x1803154e0, size 0x90, virtual false, abstract: false, final false
inline void set_Time(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoloAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoloAnimation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SoloAnimation(SoloAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoloAnimation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoloAnimation(SoloAnimation const& ) = delete;

/// @brief Field DefaultExecutionOrder offset 0xffffffff size 0x4
static constexpr int32_t  DefaultExecutionOrder{static_cast<int32_t>(0xffffec78)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18117};

/// @brief Field _Animator, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ____Animator;

/// @brief Field _Clip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Clip;

/// @brief Field _Graph, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableGraph  ____Graph;

/// @brief Field _Playable, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Animations::AnimationClipPlayable  ____Playable;

/// @brief Field _IsPlaying, offset: 0x50, size: 0x1, def value: None
 bool  ____IsPlaying;

/// @brief Field _Speed, offset: 0x54, size: 0x4, def value: None
 float_t  ____Speed;

/// @brief Field _FootIK, offset: 0x58, size: 0x1, def value: None
 bool  ____FootIK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::SoloAnimation, ____Animator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::SoloAnimation, ____Clip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::SoloAnimation, ____Graph) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::SoloAnimation, ____Playable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::SoloAnimation, ____IsPlaying) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Animancer::SoloAnimation, ____Speed) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Animancer::SoloAnimation, ____FootIK) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Animancer::SoloAnimation) == 0x60, "Size mismatch!");

} // namespace end def Animancer
