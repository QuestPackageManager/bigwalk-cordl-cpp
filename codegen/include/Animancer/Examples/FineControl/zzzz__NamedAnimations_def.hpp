#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/NamedAnimations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NamedAnimations)
namespace Animancer {
class NamedAnimancerComponent;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer::Examples::FineControl {
class NamedAnimations;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::FineControl::NamedAnimations*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::FineControl::NamedAnimations*, "Animancer.Examples.FineControl", "NamedAnimations");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::FineControl {
// Is value type: false
// CS Name: Animancer.Examples.FineControl.NamedAnimations
class CORDL_TYPE NamedAnimations : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::NamedAnimancerComponent>  _Animancer;

/// @brief Field _Run, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Run, put=__cordl_internal_set__Run)) ::UnityW<::UnityEngine::AnimationClip>  _Run;

/// @brief Field _Walk, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Walk, put=__cordl_internal_set__Walk)) ::UnityW<::UnityEngine::AnimationClip>  _Walk;

/// @brief Method InitializeWalkState, addr 0x1802ff5c0, size 0x90, virtual false, abstract: false, final false
inline void InitializeWalkState() ;

static inline ::Animancer::Examples::FineControl::NamedAnimations* New_ctor() ;

/// @brief Method PlayIdle, addr 0x1802ff650, size 0x30, virtual false, abstract: false, final false
inline void PlayIdle() ;

/// @brief Method PlayRun, addr 0x1802ff680, size 0x30, virtual false, abstract: false, final false
inline void PlayRun() ;

/// @brief Method PlayWalk, addr 0x1802ff6b0, size 0x60, virtual false, abstract: false, final false
inline void PlayWalk() ;

constexpr ::UnityW<::Animancer::NamedAnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::NamedAnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Run() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Run() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__Walk() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__Walk() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::NamedAnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Run(::UnityW<::UnityEngine::AnimationClip>  value) ;

constexpr void __cordl_internal_set__Walk(::UnityW<::UnityEngine::AnimationClip>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NamedAnimations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NamedAnimations", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NamedAnimations(NamedAnimations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NamedAnimations", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NamedAnimations(NamedAnimations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20022};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::NamedAnimancerComponent>  ____Animancer;

/// @brief Field _Walk, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Walk;

/// @brief Field _Run, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____Run;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::FineControl::NamedAnimations, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::NamedAnimations, ____Walk) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::FineControl::NamedAnimations, ____Run) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::FineControl::NamedAnimations) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::FineControl
