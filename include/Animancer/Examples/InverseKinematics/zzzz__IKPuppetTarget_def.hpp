#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/IKPuppetTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKPuppetTarget)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Animancer::Examples::InverseKinematics {
class IKPuppetTarget;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::InverseKinematics::IKPuppetTarget*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::InverseKinematics::IKPuppetTarget*, "Animancer.Examples.InverseKinematics", "IKPuppetTarget");
// Dependencies UnityEngine.AvatarIKGoal, UnityEngine.MonoBehaviour
namespace Animancer::Examples::InverseKinematics {
// Is value type: false
// CS Name: Animancer.Examples.InverseKinematics.IKPuppetTarget
class CORDL_TYPE IKPuppetTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _PositionWeight, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__PositionWeight, put=__cordl_internal_set__PositionWeight)) float_t  _PositionWeight;

/// @brief Field _RotationWeight, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__RotationWeight, put=__cordl_internal_set__RotationWeight)) float_t  _RotationWeight;

/// @brief Field _Type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type, put=__cordl_internal_set__Type)) ::UnityEngine::AvatarIKGoal  _Type;

static inline ::Animancer::Examples::InverseKinematics::IKPuppetTarget* New_ctor() ;

/// @brief Method UpdateAnimatorIK, addr 0x1802fcf60, size 0xe0, virtual false, abstract: false, final false
inline void UpdateAnimatorIK(::UnityEngine::Animator*  animator) ;

constexpr float_t const& __cordl_internal_get__PositionWeight() const;

constexpr float_t& __cordl_internal_get__PositionWeight() ;

constexpr float_t const& __cordl_internal_get__RotationWeight() const;

constexpr float_t& __cordl_internal_get__RotationWeight() ;

constexpr ::UnityEngine::AvatarIKGoal const& __cordl_internal_get__Type() const;

constexpr ::UnityEngine::AvatarIKGoal& __cordl_internal_get__Type() ;

constexpr void __cordl_internal_set__PositionWeight(float_t  value) ;

constexpr void __cordl_internal_set__RotationWeight(float_t  value) ;

constexpr void __cordl_internal_set__Type(::UnityEngine::AvatarIKGoal  value) ;

/// @brief Method .ctor, addr 0x1802fd040, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IKPuppetTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IKPuppetTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKPuppetTarget(IKPuppetTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKPuppetTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKPuppetTarget(IKPuppetTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19983};

/// @brief Field _Type, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::AvatarIKGoal  ____Type;

/// @brief Field _PositionWeight, offset: 0x24, size: 0x4, def value: None
 float_t  ____PositionWeight;

/// @brief Field _RotationWeight, offset: 0x28, size: 0x4, def value: None
 float_t  ____RotationWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppetTarget, ____Type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppetTarget, ____PositionWeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppetTarget, ____RotationWeight) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::InverseKinematics::IKPuppetTarget) == 0x30, "Size mismatch!");

} // namespace end def Animancer::Examples::InverseKinematics
