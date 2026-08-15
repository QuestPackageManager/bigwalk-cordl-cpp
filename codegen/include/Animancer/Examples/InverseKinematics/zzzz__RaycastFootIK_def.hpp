#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/RaycastFootIK.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastFootIK)
namespace Animancer {
class AnimancerComponent;
}
namespace Animancer {
class AnimatedFloat;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer::Examples::InverseKinematics {
class RaycastFootIK;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::InverseKinematics::RaycastFootIK*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::InverseKinematics::RaycastFootIK*, "Animancer.Examples.InverseKinematics", "RaycastFootIK");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::InverseKinematics {
// Is value type: false
// CS Name: Animancer.Examples.InverseKinematics.RaycastFootIK
class CORDL_TYPE RaycastFootIK : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ApplyAnimatorIK, put=set_ApplyAnimatorIK)) bool  ApplyAnimatorIK;

/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _FootWeights, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__FootWeights, put=__cordl_internal_set__FootWeights)) ::Animancer::AnimatedFloat*  _FootWeights;

/// @brief Field _LeftFoot, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__LeftFoot, put=__cordl_internal_set__LeftFoot)) ::UnityW<::UnityEngine::Transform>  _LeftFoot;

/// @brief Field _RaycastEndY, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__RaycastEndY, put=__cordl_internal_set__RaycastEndY)) float_t  _RaycastEndY;

/// @brief Field _RaycastOriginY, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__RaycastOriginY, put=__cordl_internal_set__RaycastOriginY)) float_t  _RaycastOriginY;

/// @brief Field _RightFoot, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__RightFoot, put=__cordl_internal_set__RightFoot)) ::UnityW<::UnityEngine::Transform>  _RightFoot;

/// @brief Method Awake, addr 0x1803002e0, size 0x160, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::InverseKinematics::RaycastFootIK* New_ctor() ;

/// @brief Method OnAnimatorIK, addr 0x180300440, size 0xe0, virtual false, abstract: false, final false
inline void OnAnimatorIK(int32_t  layerIndex) ;

/// @brief Method UpdateFootIK, addr 0x180300520, size 0x540, virtual false, abstract: false, final false
inline void UpdateFootIK(::UnityEngine::Transform*  footTransform, ::UnityEngine::AvatarIKGoal  goal, float_t  weight, float_t  footBottomHeight) ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::Animancer::AnimatedFloat* const& __cordl_internal_get__FootWeights() const;

constexpr ::Animancer::AnimatedFloat*& __cordl_internal_get__FootWeights() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__LeftFoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__LeftFoot() ;

constexpr float_t const& __cordl_internal_get__RaycastEndY() const;

constexpr float_t& __cordl_internal_get__RaycastEndY() ;

constexpr float_t const& __cordl_internal_get__RaycastOriginY() const;

constexpr float_t& __cordl_internal_get__RaycastOriginY() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__RightFoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__RightFoot() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__FootWeights(::Animancer::AnimatedFloat*  value) ;

constexpr void __cordl_internal_set__LeftFoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__RaycastEndY(float_t  value) ;

constexpr void __cordl_internal_set__RaycastOriginY(float_t  value) ;

constexpr void __cordl_internal_set__RightFoot(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x180300a60, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ApplyAnimatorIK, addr 0x180300a80, size 0x50, virtual false, abstract: false, final false
inline bool get_ApplyAnimatorIK() ;

/// @brief Method set_ApplyAnimatorIK, addr 0x180300ad0, size 0x60, virtual false, abstract: false, final false
inline void set_ApplyAnimatorIK(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaycastFootIK() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaycastFootIK", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RaycastFootIK(RaycastFootIK && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaycastFootIK", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaycastFootIK(RaycastFootIK const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19987};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _RaycastOriginY, offset: 0x28, size: 0x4, def value: None
 float_t  ____RaycastOriginY;

/// @brief Field _RaycastEndY, offset: 0x2c, size: 0x4, def value: None
 float_t  ____RaycastEndY;

/// @brief Field _LeftFoot, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____LeftFoot;

/// @brief Field _RightFoot, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____RightFoot;

/// @brief Field _FootWeights, offset: 0x40, size: 0x8, def value: None
 ::Animancer::AnimatedFloat*  ____FootWeights;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::InverseKinematics::RaycastFootIK, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::RaycastFootIK, ____RaycastOriginY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::RaycastFootIK, ____RaycastEndY) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::RaycastFootIK, ____LeftFoot) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::RaycastFootIK, ____RightFoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::RaycastFootIK, ____FootWeights) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::InverseKinematics::RaycastFootIK) == 0x48, "Size mismatch!");

} // namespace end def Animancer::Examples::InverseKinematics
