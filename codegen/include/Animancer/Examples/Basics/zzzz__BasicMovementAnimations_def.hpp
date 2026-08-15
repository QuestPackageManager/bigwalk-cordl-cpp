#pragma once
// IWYU pragma private; include "Animancer/Examples/Basics/BasicMovementAnimations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BasicMovementAnimations)
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer::Examples::Basics {
class BasicMovementAnimations;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Basics::BasicMovementAnimations*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Basics::BasicMovementAnimations*, "Animancer.Examples.Basics", "BasicMovementAnimations");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Basics {
// Is value type: false
// CS Name: Animancer.Examples.Basics.BasicMovementAnimations
class CORDL_TYPE BasicMovementAnimations : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Idle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Idle, put=__cordl_internal_set__Idle)) ::UnityW<::UnityEngine::AnimationClip>  _Idle;

/// @brief Field _Move, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Move, put=__cordl_internal_set__Move)) ::UnityW<::UnityEngine::AnimationClip>  _Move;

static inline ::Animancer::Examples::Basics::BasicMovementAnimations* New_ctor() ;

/// @brief Method Update, addr 0x1802f7180, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Idle() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Idle() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Move() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Move() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Idle(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__Move(::UnityW<::UnityEngine::AnimationClip>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BasicMovementAnimations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BasicMovementAnimations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BasicMovementAnimations(BasicMovementAnimations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BasicMovementAnimations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BasicMovementAnimations(BasicMovementAnimations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20030};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Idle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Idle;

/// @brief Field _Move, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Move;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Basics::BasicMovementAnimations, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::BasicMovementAnimations, ____Idle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Basics::BasicMovementAnimations, ____Move) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Basics::BasicMovementAnimations) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::Basics
