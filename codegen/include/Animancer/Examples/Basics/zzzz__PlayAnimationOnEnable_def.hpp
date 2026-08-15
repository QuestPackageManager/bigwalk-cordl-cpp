#pragma once
// IWYU pragma private; include "Animancer/Examples/Basics/PlayAnimationOnEnable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayAnimationOnEnable)
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer::Examples::Basics {
class PlayAnimationOnEnable;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Basics::PlayAnimationOnEnable*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Basics::PlayAnimationOnEnable*, "Animancer.Examples.Basics", "PlayAnimationOnEnable");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Basics {
// Is value type: false
// CS Name: Animancer.Examples.Basics.PlayAnimationOnEnable
class CORDL_TYPE PlayAnimationOnEnable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Animation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animation, put=__cordl_internal_set__Animation)) ::UnityW<::UnityEngine::AnimationClip>  _Animation;

static inline ::Animancer::Examples::Basics::PlayAnimationOnEnable* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fc530, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Animation() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Animation() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Animation(::UnityW<::UnityEngine::AnimationClip>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayAnimationOnEnable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayAnimationOnEnable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayAnimationOnEnable(PlayAnimationOnEnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayAnimationOnEnable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayAnimationOnEnable(PlayAnimationOnEnable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20029};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Animation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Animation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Basics::PlayAnimationOnEnable, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::PlayAnimationOnEnable, ____Animation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Basics::PlayAnimationOnEnable) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::Basics
