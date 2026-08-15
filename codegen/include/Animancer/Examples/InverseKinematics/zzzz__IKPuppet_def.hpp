#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/IKPuppet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Animancer/Examples/InverseKinematics/zzzz__IKPuppetTarget_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IKPuppet)
namespace Animancer::Examples::InverseKinematics {
class IKPuppetLookTarget;
}
namespace Animancer {
class AnimancerComponent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer::Examples::InverseKinematics {
class IKPuppet;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::InverseKinematics::IKPuppet*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::InverseKinematics::IKPuppet*, "Animancer.Examples.InverseKinematics", "IKPuppet");
// Dependencies Animancer.Examples.InverseKinematics.IKPuppetTarget, UnityEngine.MonoBehaviour
namespace Animancer::Examples::InverseKinematics {
// Is value type: false
// CS Name: Animancer.Examples.InverseKinematics.IKPuppet
class CORDL_TYPE IKPuppet : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _Animancer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Animancer, put=__cordl_internal_set__Animancer)) ::UnityW<::Animancer::AnimancerComponent>  _Animancer;

/// @brief Field _BodyTarget, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__BodyTarget, put=__cordl_internal_set__BodyTarget)) ::UnityW<::UnityEngine::Transform>  _BodyTarget;

/// @brief Field _IKTargets, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__IKTargets, put=__cordl_internal_set__IKTargets)) ::ArrayW<::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetTarget>>  _IKTargets;

/// @brief Field _LookTarget, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__LookTarget, put=__cordl_internal_set__LookTarget)) ::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget>  _LookTarget;

/// @brief Method Awake, addr 0x1802fd050, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::InverseKinematics::IKPuppet* New_ctor() ;

/// @brief Method OnAnimatorIK, addr 0x1802fd0a0, size 0x2a0, virtual false, abstract: false, final false
inline void OnAnimatorIK(int32_t  layerIndex) ;

constexpr ::UnityW<::Animancer::AnimancerComponent> const& __cordl_internal_get__Animancer() const;

constexpr ::UnityW<::Animancer::AnimancerComponent>& __cordl_internal_get__Animancer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__BodyTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__BodyTarget() ;

constexpr ::ArrayW<::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetTarget>> const& __cordl_internal_get__IKTargets() const;

constexpr ::ArrayW<::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetTarget>>& __cordl_internal_get__IKTargets() ;

constexpr ::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget> const& __cordl_internal_get__LookTarget() const;

constexpr ::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget>& __cordl_internal_get__LookTarget() ;

constexpr void __cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value) ;

constexpr void __cordl_internal_set__BodyTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__IKTargets(::ArrayW<::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetTarget>>  value) ;

constexpr void __cordl_internal_set__LookTarget(::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IKPuppet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IKPuppet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKPuppet(IKPuppet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKPuppet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKPuppet(IKPuppet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19981};

/// @brief Field _Animancer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::AnimancerComponent>  ____Animancer;

/// @brief Field _BodyTarget, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____BodyTarget;

/// @brief Field _LookTarget, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetLookTarget>  ____LookTarget;

/// @brief Field _IKTargets, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Animancer::Examples::InverseKinematics::IKPuppetTarget>>  ____IKTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppet, ____Animancer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppet, ____BodyTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppet, ____LookTarget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppet, ____IKTargets) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::InverseKinematics::IKPuppet) == 0x40, "Size mismatch!");

} // namespace end def Animancer::Examples::InverseKinematics
