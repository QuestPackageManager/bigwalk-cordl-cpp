#pragma once
// IWYU pragma private; include "Animancer/Examples/AnimatorControllers/GameKit/CharacterMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CharacterMovement)
namespace Animancer::Examples::AnimatorControllers::GameKit {
class Character;
}
namespace UnityEngine {
class CharacterController;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Animancer::Examples::AnimatorControllers::GameKit {
class CharacterMovement;
}
// Write type traits
MARK_REF_T(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement*);
DEFINE_IL2CPP_CLASS(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement*, "Animancer.Examples.AnimatorControllers.GameKit", "CharacterMovement");
// Dependencies UnityEngine.MonoBehaviour
namespace Animancer::Examples::AnimatorControllers::GameKit {
// Is value type: false
// CS Name: Animancer.Examples.AnimatorControllers.GameKit.CharacterMovement
class CORDL_TYPE CharacterMovement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Acceleration)) float_t  Acceleration;

 __declspec(property(get=get_CurrentTurnSpeed)) float_t  CurrentTurnSpeed;

 __declspec(property(get=get_Deceleration)) float_t  Deceleration;

 __declspec(property(get=get_Gravity)) float_t  Gravity;

 __declspec(property(get=get_GroundMaterial, put=set_GroundMaterial)) ::UnityW<::UnityEngine::Material>  GroundMaterial;

 __declspec(property(get=get_IsGrounded, put=set_IsGrounded)) bool  IsGrounded;

 __declspec(property(get=get_MaxSpeed)) float_t  MaxSpeed;

 __declspec(property(get=get_MaxTurnSpeed)) float_t  MaxTurnSpeed;

 __declspec(property(get=get_MinTurnSpeed)) float_t  MinTurnSpeed;

 __declspec(property(get=get_StickingGravityProportion)) float_t  StickingGravityProportion;

/// @brief Field _Acceleration, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__Acceleration, put=__cordl_internal_set__Acceleration)) float_t  _Acceleration;

/// @brief Field _Character, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Character, put=__cordl_internal_set__Character)) ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  _Character;

/// @brief Field _CharacterController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__CharacterController, put=__cordl_internal_set__CharacterController)) ::UnityW<::UnityEngine::CharacterController>  _CharacterController;

/// @brief Field _Deceleration, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Deceleration, put=__cordl_internal_set__Deceleration)) float_t  _Deceleration;

/// @brief Field _FullMovementControl, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__FullMovementControl, put=__cordl_internal_set__FullMovementControl)) bool  _FullMovementControl;

/// @brief Field _Gravity, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__Gravity, put=__cordl_internal_set__Gravity)) float_t  _Gravity;

/// @brief Field <GroundMaterial>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__GroundMaterial_k__BackingField, put=__cordl_internal_set__GroundMaterial_k__BackingField)) ::UnityW<::UnityEngine::Material>  _GroundMaterial_k__BackingField;

/// @brief Field <IsGrounded>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsGrounded_k__BackingField, put=__cordl_internal_set__IsGrounded_k__BackingField)) bool  _IsGrounded_k__BackingField;

/// @brief Field _MaxSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxSpeed, put=__cordl_internal_set__MaxSpeed)) float_t  _MaxSpeed;

/// @brief Field _MaxTurnSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxTurnSpeed, put=__cordl_internal_set__MaxTurnSpeed)) float_t  _MaxTurnSpeed;

/// @brief Field _MinTurnSpeed, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinTurnSpeed, put=__cordl_internal_set__MinTurnSpeed)) float_t  _MinTurnSpeed;

/// @brief Field _StickingGravityProportion, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__StickingGravityProportion, put=__cordl_internal_set__StickingGravityProportion)) float_t  _StickingGravityProportion;

/// @brief Method CheckGround, addr 0x1802f71f0, size 0x2c0, virtual false, abstract: false, final false
inline void CheckGround(::by_ref<::UnityEngine::Vector3>  movement) ;

/// @brief Method GetRootMotion, addr 0x1802f74b0, size 0x200, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetRootMotion() ;

/// @brief Method GetTurnAngles, addr 0x1802f76b0, size 0xe0, virtual false, abstract: false, final false
inline bool GetTurnAngles(::UnityEngine::Vector3  direction, ::by_ref<float_t>  currentAngle, ::by_ref<float_t>  targetAngle) ;

/// @brief Method MeleeAttackEnd, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MeleeAttackEnd() ;

/// @brief Method MeleeAttackStart, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MeleeAttackStart(int32_t  throwing) ;

static inline ::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0x1802f7790, size 0x370, virtual false, abstract: false, final false
inline void OnAnimatorMove() ;

/// @brief Method TurnTowards, addr 0x1802f7b00, size 0xa0, virtual false, abstract: false, final false
inline void TurnTowards(float_t  currentAngle, float_t  targetAngle, float_t  speed) ;

/// @brief Method TurnTowards, addr 0x1802f7ba0, size 0x140, virtual false, abstract: false, final false
inline void TurnTowards(::UnityEngine::Vector3  direction, float_t  speed) ;

/// @brief Method UpdateGravity, addr 0x1802f7ce0, size 0x130, virtual false, abstract: false, final false
inline void UpdateGravity(::by_ref<::UnityEngine::Vector3>  movement) ;

/// @brief Method UpdateSpeedControl, addr 0x1802f7e10, size 0x180, virtual false, abstract: false, final false
inline void UpdateSpeedControl() ;

constexpr float_t const& __cordl_internal_get__Acceleration() const;

constexpr float_t& __cordl_internal_get__Acceleration() ;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character> const& __cordl_internal_get__Character() const;

constexpr ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>& __cordl_internal_get__Character() ;

constexpr ::UnityW<::UnityEngine::CharacterController> const& __cordl_internal_get__CharacterController() const;

constexpr ::UnityW<::UnityEngine::CharacterController>& __cordl_internal_get__CharacterController() ;

constexpr float_t const& __cordl_internal_get__Deceleration() const;

constexpr float_t& __cordl_internal_get__Deceleration() ;

constexpr bool const& __cordl_internal_get__FullMovementControl() const;

constexpr bool& __cordl_internal_get__FullMovementControl() ;

constexpr float_t const& __cordl_internal_get__Gravity() const;

constexpr float_t& __cordl_internal_get__Gravity() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__GroundMaterial_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__GroundMaterial_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsGrounded_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsGrounded_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxSpeed() const;

constexpr float_t& __cordl_internal_get__MaxSpeed() ;

constexpr float_t const& __cordl_internal_get__MaxTurnSpeed() const;

constexpr float_t& __cordl_internal_get__MaxTurnSpeed() ;

constexpr float_t const& __cordl_internal_get__MinTurnSpeed() const;

constexpr float_t& __cordl_internal_get__MinTurnSpeed() ;

constexpr float_t const& __cordl_internal_get__StickingGravityProportion() const;

constexpr float_t& __cordl_internal_get__StickingGravityProportion() ;

constexpr void __cordl_internal_set__Acceleration(float_t  value) ;

constexpr void __cordl_internal_set__Character(::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  value) ;

constexpr void __cordl_internal_set__CharacterController(::UnityW<::UnityEngine::CharacterController>  value) ;

constexpr void __cordl_internal_set__Deceleration(float_t  value) ;

constexpr void __cordl_internal_set__FullMovementControl(bool  value) ;

constexpr void __cordl_internal_set__Gravity(float_t  value) ;

constexpr void __cordl_internal_set__GroundMaterial_k__BackingField(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__IsGrounded_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set__MaxTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set__MinTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set__StickingGravityProportion(float_t  value) ;

/// @brief Method .ctor, addr 0x1802f7f90, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Acceleration, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Acceleration() ;

/// @brief Method get_CurrentTurnSpeed, addr 0x1802f7fe0, size 0x70, virtual false, abstract: false, final false
inline float_t get_CurrentTurnSpeed() ;

/// @brief Method get_Deceleration, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_Deceleration() ;

/// @brief Method get_Gravity, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t get_Gravity() ;

/// @brief Method get_GroundMaterial, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_GroundMaterial() ;

/// @brief Method get_IsGrounded, addr 0x1802f8060, size 0x10, virtual false, abstract: false, final false
inline bool get_IsGrounded() ;

/// @brief Method get_MaxSpeed, addr 0x1802e2da0, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxSpeed() ;

/// @brief Method get_MaxTurnSpeed, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t get_MaxTurnSpeed() ;

/// @brief Method get_MinTurnSpeed, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_MinTurnSpeed() ;

/// @brief Method get_StickingGravityProportion, addr 0x1802f8070, size 0x10, virtual false, abstract: false, final false
inline float_t get_StickingGravityProportion() ;

/// @brief Method set_GroundMaterial, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_GroundMaterial(::UnityEngine::Material*  value) ;

/// @brief Method set_IsGrounded, addr 0x1802f8090, size 0x10, virtual false, abstract: false, final false
inline void set_IsGrounded(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharacterMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharacterMovement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharacterMovement(CharacterMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharacterMovement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharacterMovement(CharacterMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19967};

/// @brief Field _Character, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Animancer::Examples::AnimatorControllers::GameKit::Character>  ____Character;

/// @brief Field _CharacterController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CharacterController>  ____CharacterController;

/// @brief Field _FullMovementControl, offset: 0x30, size: 0x1, def value: None
 bool  ____FullMovementControl;

/// @brief Field _MaxSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ____MaxSpeed;

/// @brief Field _Acceleration, offset: 0x38, size: 0x4, def value: None
 float_t  ____Acceleration;

/// @brief Field _Deceleration, offset: 0x3c, size: 0x4, def value: None
 float_t  ____Deceleration;

/// @brief Field _MinTurnSpeed, offset: 0x40, size: 0x4, def value: None
 float_t  ____MinTurnSpeed;

/// @brief Field _MaxTurnSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ____MaxTurnSpeed;

/// @brief Field _Gravity, offset: 0x48, size: 0x4, def value: None
 float_t  ____Gravity;

/// @brief Field _StickingGravityProportion, offset: 0x4c, size: 0x4, def value: None
 float_t  ____StickingGravityProportion;

/// @brief Field <IsGrounded>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____IsGrounded_k__BackingField;

/// @brief Field <GroundMaterial>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____GroundMaterial_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____Character) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____CharacterController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____FullMovementControl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____MaxSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____Acceleration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____Deceleration) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____MinTurnSpeed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____MaxTurnSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____Gravity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____StickingGravityProportion) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____IsGrounded_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement, ____GroundMaterial_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Animancer::Examples::AnimatorControllers::GameKit::CharacterMovement) == 0x60, "Size mismatch!");

} // namespace end def Animancer::Examples::AnimatorControllers::GameKit
