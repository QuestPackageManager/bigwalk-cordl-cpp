#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/TransformResetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TransformResetter)
// Forward declare root types
namespace Animancer::Examples::InverseKinematics {
class TransformResetter;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::InverseKinematics::TransformResetter*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::InverseKinematics::TransformResetter*, "Animancer.Examples.InverseKinematics", "TransformResetter");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Transform, UnityEngine.Vector3
namespace Animancer::Examples::InverseKinematics {
// Is value type: false
// CS Name: Animancer.Examples.InverseKinematics.TransformResetter
class CORDL_TYPE TransformResetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _StartingPositions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__StartingPositions, put=__cordl_internal_set__StartingPositions)) ::ArrayW<::UnityEngine::Vector3>  _StartingPositions;

/// @brief Field _StartingRotations, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__StartingRotations, put=__cordl_internal_set__StartingRotations)) ::ArrayW<::UnityEngine::Quaternion>  _StartingRotations;

/// @brief Field _Transforms, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Transforms, put=__cordl_internal_set__Transforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  _Transforms;

/// @brief Method Awake, addr 0x180302510, size 0x140, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Animancer::Examples::InverseKinematics::TransformResetter* New_ctor() ;

/// @brief Method ReturnToStartingValues, addr 0x180302650, size 0xf0, virtual false, abstract: false, final false
inline void ReturnToStartingValues() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__StartingPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__StartingPositions() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get__StartingRotations() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get__StartingRotations() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get__Transforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get__Transforms() ;

constexpr void __cordl_internal_set__StartingPositions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__StartingRotations(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set__Transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformResetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformResetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformResetter(TransformResetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformResetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformResetter(TransformResetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19985};

/// @brief Field _Transforms, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ____Transforms;

/// @brief Field _StartingPositions, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____StartingPositions;

/// @brief Field _StartingRotations, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ____StartingRotations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::InverseKinematics::TransformResetter, ____Transforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::TransformResetter, ____StartingPositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::TransformResetter, ____StartingRotations) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::InverseKinematics::TransformResetter) == 0x38, "Size mismatch!");

} // namespace end def Animancer::Examples::InverseKinematics
