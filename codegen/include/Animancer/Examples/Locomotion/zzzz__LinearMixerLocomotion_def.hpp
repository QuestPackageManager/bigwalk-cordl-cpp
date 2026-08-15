#pragma once
// IWYU pragma private; include "Animancer/Examples/Locomotion/LinearMixerLocomotion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LinearMixerLocomotion)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class LinearMixerTransitionAsset_UnShared;
}
// Forward declare root types
namespace Animancer::Examples::Locomotion {
class LinearMixerLocomotion;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::Locomotion::LinearMixerLocomotion*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::Locomotion::LinearMixerLocomotion*, "Animancer.Examples.Locomotion", "LinearMixerLocomotion");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::Locomotion {
// Is value type: false
// CS Name: Animancer.Examples.Locomotion.LinearMixerLocomotion
class CORDL_TYPE LinearMixerLocomotion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Speed, put=set_Speed)) float_t  Speed;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _Mixer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mixer, put=__cordl_internal_set__Mixer)) ::Animancer::LinearMixerTransitionAsset_UnShared*  _Mixer;

static inline ::Animancer::Examples::Locomotion::LinearMixerLocomotion* New_ctor() ;

/// @brief Method OnEnable, addr 0x1802fba70, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::Animancer::LinearMixerTransitionAsset_UnShared* const& __cordl_internal_get__Mixer() const;

constexpr ::Animancer::LinearMixerTransitionAsset_UnShared*& __cordl_internal_get__Mixer() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__Mixer(::Animancer::LinearMixerTransitionAsset_UnShared*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Speed, addr 0x1802fe330, size 0x40, virtual false, abstract: false, final false
inline float_t get_Speed() ;

/// @brief Method set_Speed, addr 0x1802fe370, size 0x50, virtual false, abstract: false, final false
inline void set_Speed(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LinearMixerLocomotion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerLocomotion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinearMixerLocomotion(LinearMixerLocomotion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinearMixerLocomotion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinearMixerLocomotion(LinearMixerLocomotion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20019};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _Mixer, offset: 0x28, size: 0x8, def value: None
 ::Animancer::LinearMixerTransitionAsset_UnShared*  ____Mixer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::Locomotion::LinearMixerLocomotion, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::Locomotion::LinearMixerLocomotion, ____Mixer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::Locomotion::LinearMixerLocomotion) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::Locomotion
