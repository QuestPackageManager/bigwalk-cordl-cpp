#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleAnimation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SimpleAnimation)
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleAnimation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SimpleAnimation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleAnimation*, "", "SimpleAnimation");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleAnimation
class CORDL_TYPE SimpleAnimation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_animancer, put=__cordl_internal_set_animancer)) ::UnityW<::Animancer::AnimancerComponent>  animancer;

/// @brief Field clip, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_clip, put=__cordl_internal_set_clip)) ::UnityW<::UnityEngine::AnimationClip>  clip;

static inline ::GlobalNamespace::SimpleAnimation* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fc530, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get_animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get_animancer() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get_clip() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get_clip() ;

constexpr void __cordl_internal_set_animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set_clip(::UnityW<::UnityEngine::AnimationClip>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleAnimation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleAnimation(SimpleAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleAnimation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleAnimation(SimpleAnimation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5241};

/// @brief Field animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ___animancer;

/// @brief Field clip, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ___clip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleAnimation, ___animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleAnimation, ___clip) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleAnimation) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
