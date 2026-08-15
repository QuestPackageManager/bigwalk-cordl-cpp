#pragma once
// IWYU pragma private; include "GlobalNamespace/TimerAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimerAnimation)
namespace Animancer {
class AnimancerComponent;
}
namespace GlobalNamespace {
class PeckEffectTimer;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class TimerAnimation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TimerAnimation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimerAnimation*, "", "TimerAnimation");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimerAnimation
class CORDL_TYPE TimerAnimation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animancerComponent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancerComponent, put=__cordl_internal_set_animancerComponent)) ::UnityW<::Animancer::AnimancerComponent>  animancerComponent;

/// @brief Field animationSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationSpeed, put=__cordl_internal_set_animationSpeed)) float_t  animationSpeed;

/// @brief Field clip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clip, put=__cordl_internal_set_clip)) ::UnityW<::UnityEngine::AnimationClip>  clip;

 __declspec(property(get=get_clipDuration)) float_t  clipDuration;

/// @brief Field initialized, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field logVerbose, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field timer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) ::UnityW<::GlobalNamespace::PeckEffectTimer>  timer;

/// @brief Method Awake, addr 0x180418790, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Initialize, addr 0x180418860, size 0x110, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::TimerAnimation* New_ctor() ;

/// @brief Method OnTimerChange, addr 0x180418970, size 0x280, virtual false, abstract: false, final false
inline void OnTimerChange() ;

/// @brief Method OnTimerStop, addr 0x180418bf0, size 0xb0, virtual false, abstract: false, final false
inline void OnTimerStop() ;

/// @brief Method Start, addr 0x180418ca0, size 0x10, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancerComponent() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancerComponent() ;

constexpr float_t const& __cordl_internal_get_animationSpeed() const;

constexpr float_t& __cordl_internal_get_animationSpeed() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_clip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_clip() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTimer> const& __cordl_internal_get_timer() const;

constexpr ::UnityW<::GlobalNamespace::PeckEffectTimer>& __cordl_internal_get_timer() ;

constexpr void __cordl_internal_set_animancerComponent(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set_animationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_clip(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_timer(::UnityW<::GlobalNamespace::PeckEffectTimer>  value) ;

/// @brief Method .ctor, addr 0x180418cb0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_clipDuration, addr 0x180418cc0, size 0x30, virtual false, abstract: false, final false
inline float_t get_clipDuration() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimerAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimerAnimation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TimerAnimation(TimerAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimerAnimation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimerAnimation(TimerAnimation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5129};

/// @brief Field timer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PeckEffectTimer>  ___timer;

/// @brief Field animancerComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancerComponent;

/// @brief Field clip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___clip;

/// @brief Field animationSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___animationSpeed;

/// @brief Field logVerbose, offset: 0x3c, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field initialized, offset: 0x3d, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimerAnimation, ___timer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerAnimation, ___animancerComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerAnimation, ___clip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerAnimation, ___animationSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerAnimation, ___logVerbose) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimerAnimation, ___initialized) == 0x3d, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimerAnimation) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
