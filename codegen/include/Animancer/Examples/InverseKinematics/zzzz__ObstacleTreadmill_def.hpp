#pragma once
// IWYU pragma private; include "Animancer/Examples/InverseKinematics/ObstacleTreadmill.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObstacleTreadmill)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Animancer::Examples::InverseKinematics {
class ObstacleTreadmill;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::InverseKinematics::ObstacleTreadmill*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::InverseKinematics::ObstacleTreadmill*, "Animancer.Examples.InverseKinematics", "ObstacleTreadmill");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::InverseKinematics {
// Is value type: false
// CS Name: Animancer.Examples.InverseKinematics.ObstacleTreadmill
class CORDL_TYPE ObstacleTreadmill : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Obstacles, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Obstacles, put=__cordl_internal_set_Obstacles)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  Obstacles;

 __declspec(property(get=get_Slope, put=set_Slope)) float_t  Slope;

/// @brief Field _BaseScale, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__BaseScale, put=__cordl_internal_set__BaseScale)) float_t  _BaseScale;

/// @brief Field _Ground, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Ground, put=__cordl_internal_set__Ground)) ::UnityW<::UnityEngine::Transform>  _Ground;

/// @brief Field _Length, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__Length, put=__cordl_internal_set__Length)) float_t  _Length;

/// @brief Field _ObstacleMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ObstacleMaterial, put=__cordl_internal_set__ObstacleMaterial)) ::UnityW<::UnityEngine::Material>  _ObstacleMaterial;

/// @brief Field _RotationVariance, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__RotationVariance, put=__cordl_internal_set__RotationVariance)) float_t  _RotationVariance;

/// @brief Field _ScaleVariance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ScaleVariance, put=__cordl_internal_set__ScaleVariance)) float_t  _ScaleVariance;

/// @brief Field _SpawnCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__SpawnCount, put=__cordl_internal_set__SpawnCount)) float_t  _SpawnCount;

/// @brief Field _Target, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Target, put=__cordl_internal_set__Target)) ::UnityW<::UnityEngine::Transform>  _Target;

/// @brief Method Awake, addr 0x1802ff720, size 0x130, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x1802ff850, size 0x160, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::Animancer::Examples::InverseKinematics::ObstacleTreadmill* New_ctor() ;

/// @brief Method ScrambleObjects, addr 0x1802ff9b0, size 0x1a0, virtual false, abstract: false, final false
inline void ScrambleObjects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_Obstacles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_Obstacles() ;

constexpr float_t const& __cordl_internal_get__BaseScale() const;

constexpr float_t& __cordl_internal_get__BaseScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Ground() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Ground() ;

constexpr float_t const& __cordl_internal_get__Length() const;

constexpr float_t& __cordl_internal_get__Length() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__ObstacleMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__ObstacleMaterial() ;

constexpr float_t const& __cordl_internal_get__RotationVariance() const;

constexpr float_t& __cordl_internal_get__RotationVariance() ;

constexpr float_t const& __cordl_internal_get__ScaleVariance() const;

constexpr float_t& __cordl_internal_get__ScaleVariance() ;

constexpr float_t const& __cordl_internal_get__SpawnCount() const;

constexpr float_t& __cordl_internal_get__SpawnCount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__Target() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__Target() ;

constexpr void __cordl_internal_set_Obstacles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set__BaseScale(float_t  value) ;

constexpr void __cordl_internal_set__Ground(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__Length(float_t  value) ;

constexpr void __cordl_internal_set__ObstacleMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__RotationVariance(float_t  value) ;

constexpr void __cordl_internal_set__ScaleVariance(float_t  value) ;

constexpr void __cordl_internal_set__SpawnCount(float_t  value) ;

constexpr void __cordl_internal_set__Target(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x1802ffb50, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Slope, addr 0x1802ffbc0, size 0x30, virtual false, abstract: false, final false
inline float_t get_Slope() ;

/// @brief Method set_Slope, addr 0x1802ffbf0, size 0x40, virtual false, abstract: false, final false
inline void set_Slope(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleTreadmill() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObstacleTreadmill", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleTreadmill(ObstacleTreadmill && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleTreadmill", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleTreadmill(ObstacleTreadmill const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19986};

/// @brief Field _SpawnCount, offset: 0x20, size: 0x4, def value: None
 float_t  ____SpawnCount;

/// @brief Field _ObstacleMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____ObstacleMaterial;

/// @brief Field _Length, offset: 0x30, size: 0x4, def value: None
 float_t  ____Length;

/// @brief Field _RotationVariance, offset: 0x34, size: 0x4, def value: None
 float_t  ____RotationVariance;

/// @brief Field _BaseScale, offset: 0x38, size: 0x4, def value: None
 float_t  ____BaseScale;

/// @brief Field _ScaleVariance, offset: 0x3c, size: 0x4, def value: None
 float_t  ____ScaleVariance;

/// @brief Field _Target, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Target;

/// @brief Field Obstacles, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___Obstacles;

/// @brief Field _Ground, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____Ground;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill, ____SpawnCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill, ____ObstacleMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill, ____Length) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill, ____RotationVariance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill, ____BaseScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill, ____ScaleVariance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill, ____Target) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill, ___Obstacles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill, ____Ground) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::InverseKinematics::ObstacleTreadmill) == 0x58, "Size mismatch!");

} // namespace end def Animancer::Examples::InverseKinematics
