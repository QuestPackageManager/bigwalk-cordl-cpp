#pragma once
// IWYU pragma private; include "Animancer/Examples/Locomotion/LinearBlendTreeLocomotion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LinearBlendTreeLocomotion)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class Float1ControllerTransitionAsset_UnShared;
}
// Forward declare root types
namespace Animancer::Examples::Locomotion {
class LinearBlendTreeLocomotion;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Locomotion::LinearBlendTreeLocomotion*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Locomotion::LinearBlendTreeLocomotion*, "Animancer.Examples.Locomotion", "LinearBlendTreeLocomotion");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Locomotion {
// Is value type: false
// CS Name: Animancer.Examples.Locomotion.LinearBlendTreeLocomotion
class CORDL_TYPE LinearBlendTreeLocomotion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Controller, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Controller, put=__cordl_internal_set__Controller)) ::Animancer::Float1ControllerTransitionAsset_UnShared*  _Controller;

static inline ::Animancer::Examples::Locomotion::LinearBlendTreeLocomotion* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fba70, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::Animancer::Float1ControllerTransitionAsset_UnShared* const& __cordl_internal_get__Controller() const;

constexpr ::Animancer::Float1ControllerTransitionAsset_UnShared*& __cordl_internal_get__Controller() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Controller(::Animancer::Float1ControllerTransitionAsset_UnShared*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Speed, addr 0x1802fe2a0, size 0x40, virtual false, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Method set_Speed, addr 0x1802fe2e0, size 0x50, virtual false, abstract: false, final false
inline void set_Speed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearBlendTreeLocomotion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearBlendTreeLocomotion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearBlendTreeLocomotion(LinearBlendTreeLocomotion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearBlendTreeLocomotion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearBlendTreeLocomotion(LinearBlendTreeLocomotion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20018};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Controller, offset: 0x28, size: 0x8, def value: None
 ::Animancer::Float1ControllerTransitionAsset_UnShared*  ____Controller;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Locomotion::LinearBlendTreeLocomotion, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::LinearBlendTreeLocomotion, ____Controller) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Locomotion::LinearBlendTreeLocomotion) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::Locomotion
