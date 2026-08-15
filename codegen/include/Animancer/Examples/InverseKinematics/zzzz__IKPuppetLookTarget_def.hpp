#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/IKPuppetLookTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IKPuppetLookTarget)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Animancer::Examples::InverseKinematics {
class IKPuppetLookTarget;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::InverseKinematics::IKPuppetLookTarget*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::InverseKinematics::IKPuppetLookTarget*, "Animancer.Examples.InverseKinematics", "IKPuppetLookTarget");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::InverseKinematics {
// Is value type: false
// CS Name: Animancer.Examples.InverseKinematics.IKPuppetLookTarget
class CORDL_TYPE IKPuppetLookTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _BodyWeight, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__BodyWeight, put=__cordl_internal_set__BodyWeight)) float_t  _BodyWeight;

/// @brief Field _ClampWeight, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__ClampWeight, put=__cordl_internal_set__ClampWeight)) float_t  _ClampWeight;

/// @brief Field _EyesWeight, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__EyesWeight, put=__cordl_internal_set__EyesWeight)) float_t  _EyesWeight;

/// @brief Field _HeadWeight, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__HeadWeight, put=__cordl_internal_set__HeadWeight)) float_t  _HeadWeight;

/// @brief Field _Weight, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Weight, put=__cordl_internal_set__Weight)) float_t  _Weight;

static inline ::Animancer::Examples::InverseKinematics::IKPuppetLookTarget* New_ctor() ;

/// @brief Method UpdateAnimatorIK, addr 0x1802fce90, size 0xa0, virtual false, abstract: false, final false
inline void UpdateAnimatorIK(::UnityEngine::Animator*  animator) ;

constexpr float_t const& __cordl_internal_get__BodyWeight() const;

constexpr float_t& __cordl_internal_get__BodyWeight() ;

constexpr float_t const& __cordl_internal_get__ClampWeight() const;

constexpr float_t& __cordl_internal_get__ClampWeight() ;

constexpr float_t const& __cordl_internal_get__EyesWeight() const;

constexpr float_t& __cordl_internal_get__EyesWeight() ;

constexpr float_t const& __cordl_internal_get__HeadWeight() const;

constexpr float_t& __cordl_internal_get__HeadWeight() ;

constexpr float_t const& __cordl_internal_get__Weight() const;

constexpr float_t& __cordl_internal_get__Weight() ;

constexpr void __cordl_internal_set__BodyWeight(float_t  value) ;

constexpr void __cordl_internal_set__ClampWeight(float_t  value) ;

constexpr void __cordl_internal_set__EyesWeight(float_t  value) ;

constexpr void __cordl_internal_set__HeadWeight(float_t  value) ;

constexpr void __cordl_internal_set__Weight(float_t  value) ;

/// @brief Method .ctor, addr 0x1802fcf30, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IKPuppetLookTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IKPuppetLookTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IKPuppetLookTarget(IKPuppetLookTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IKPuppetLookTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IKPuppetLookTarget(IKPuppetLookTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19982};

/// @brief Field _Weight, offset: 0x20, size: 0x4, def value: None
 float_t  ____Weight;

/// @brief Field _BodyWeight, offset: 0x24, size: 0x4, def value: None
 float_t  ____BodyWeight;

/// @brief Field _HeadWeight, offset: 0x28, size: 0x4, def value: None
 float_t  ____HeadWeight;

/// @brief Field _EyesWeight, offset: 0x2c, size: 0x4, def value: None
 float_t  ____EyesWeight;

/// @brief Field _ClampWeight, offset: 0x30, size: 0x4, def value: None
 float_t  ____ClampWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppetLookTarget, ____Weight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppetLookTarget, ____BodyWeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppetLookTarget, ____HeadWeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppetLookTarget, ____EyesWeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::IKPuppetLookTarget, ____ClampWeight) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::InverseKinematics::IKPuppetLookTarget) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::InverseKinematics
