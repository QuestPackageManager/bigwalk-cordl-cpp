#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/HybridBasics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HybridBasics)
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers {
class HybridBasics;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::HybridBasics*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::HybridBasics*, "Animancer.Examples.AnimatorControllers", "HybridBasics");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::AnimatorControllers {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.HybridBasics
class CORDL_TYPE HybridBasics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field MoveParameterID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MoveParameterID, put=setStaticF_MoveParameterID)) int32_t  MoveParameterID;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _SeparateAnimation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__SeparateAnimation, put=__cordl_internal_set__SeparateAnimation)) ::UnityW<::UnityEngine::AnimationClip>  _SeparateAnimation;

/// @brief Method Awake, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FadeAnimatorController, addr 0x1802fc3e0, size 0x90, virtual false, abstract: false, final false
inline void FadeAnimatorController() ;

/// @brief Method FadeSeparateAnimation, addr 0x1802fc470, size 0x40, virtual false, abstract: false, final false
inline void FadeSeparateAnimation() ;

static inline ::Animancer::Examples::AnimatorControllers::HybridBasics* New_ctor() ;

/// @brief Method PlayAnimatorController, addr 0x1802fc4b0, size 0x80, virtual false, abstract: false, final false
inline void PlayAnimatorController() ;

/// @brief Method PlaySeparateAnimation, addr 0x1802fc530, size 0x30, virtual false, abstract: false, final false
inline void PlaySeparateAnimation() ;

/// @brief Method SetMove, addr 0x1802fc560, size 0xe0, virtual false, abstract: false, final false
inline void SetMove(bool  move) ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__SeparateAnimation() const;

constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__SeparateAnimation() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__SeparateAnimation(::UnityW<::UnityEngine::AnimationClip>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_MoveParameterID() ;

static inline void setStaticF_MoveParameterID(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HybridBasics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HybridBasics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HybridBasics(HybridBasics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HybridBasics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HybridBasics(HybridBasics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19962};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _SeparateAnimation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AnimationClip>  ____SeparateAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::HybridBasics, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::HybridBasics, ____SeparateAnimation) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::HybridBasics) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers
