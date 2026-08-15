#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/Characters/ThirdPerson/ThirdPersonCharacter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThirdPersonCharacter)
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Rowlan::UnityStandardAssets::Characters::ThirdPerson {
class ThirdPersonCharacter;
}
// Write type traits
MARK_REF_T(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*);
DEFINE_IL2CPP_CLASS(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*, "Rowlan.UnityStandardAssets.Characters.ThirdPerson", "ThirdPersonCharacter");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Rowlan::UnityStandardAssets::Characters::ThirdPerson {
// Is value type: false
// CS Name: Rowlan.UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
class CORDL_TYPE ThirdPersonCharacter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_AnimSpeedMultiplier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AnimSpeedMultiplier, put=__cordl_internal_set_m_AnimSpeedMultiplier)) float_t  m_AnimSpeedMultiplier;

/// @brief Field m_Animator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Animator, put=__cordl_internal_set_m_Animator)) ::UnityW<::UnityEngine::Animator>  m_Animator;

/// @brief Field m_Capsule, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Capsule, put=__cordl_internal_set_m_Capsule)) ::UnityW<::UnityEngine::CapsuleCollider>  m_Capsule;

/// @brief Field m_CapsuleCenter, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CapsuleCenter, put=__cordl_internal_set_m_CapsuleCenter)) ::UnityEngine::Vector3  m_CapsuleCenter;

/// @brief Field m_CapsuleHeight, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CapsuleHeight, put=__cordl_internal_set_m_CapsuleHeight)) float_t  m_CapsuleHeight;

/// @brief Field m_Crouching, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Crouching, put=__cordl_internal_set_m_Crouching)) bool  m_Crouching;

/// @brief Field m_ForwardAmount, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ForwardAmount, put=__cordl_internal_set_m_ForwardAmount)) float_t  m_ForwardAmount;

/// @brief Field m_GravityMultiplier, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GravityMultiplier, put=__cordl_internal_set_m_GravityMultiplier)) float_t  m_GravityMultiplier;

/// @brief Field m_GroundCheckDistance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GroundCheckDistance, put=__cordl_internal_set_m_GroundCheckDistance)) float_t  m_GroundCheckDistance;

/// @brief Field m_GroundNormal, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_GroundNormal, put=__cordl_internal_set_m_GroundNormal)) ::UnityEngine::Vector3  m_GroundNormal;

/// @brief Field m_IsGrounded, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsGrounded, put=__cordl_internal_set_m_IsGrounded)) bool  m_IsGrounded;

/// @brief Field m_JumpPower, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_JumpPower, put=__cordl_internal_set_m_JumpPower)) float_t  m_JumpPower;

/// @brief Field m_MoveSpeedMultiplier, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveSpeedMultiplier, put=__cordl_internal_set_m_MoveSpeedMultiplier)) float_t  m_MoveSpeedMultiplier;

/// @brief Field m_MovingTurnSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MovingTurnSpeed, put=__cordl_internal_set_m_MovingTurnSpeed)) float_t  m_MovingTurnSpeed;

/// @brief Field m_OrigGroundCheckDistance, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_OrigGroundCheckDistance, put=__cordl_internal_set_m_OrigGroundCheckDistance)) float_t  m_OrigGroundCheckDistance;

/// @brief Field m_Rigidbody, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Rigidbody, put=__cordl_internal_set_m_Rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  m_Rigidbody;

/// @brief Field m_RunCycleLegOffset, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RunCycleLegOffset, put=__cordl_internal_set_m_RunCycleLegOffset)) float_t  m_RunCycleLegOffset;

/// @brief Field m_StationaryTurnSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_StationaryTurnSpeed, put=__cordl_internal_set_m_StationaryTurnSpeed)) float_t  m_StationaryTurnSpeed;

/// @brief Field m_TurnAmount, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TurnAmount, put=__cordl_internal_set_m_TurnAmount)) float_t  m_TurnAmount;

/// @brief Method ApplyExtraTurnRotation, addr 0x181abfe20, size 0xe0, virtual false, abstract: false, final false
inline void ApplyExtraTurnRotation() ;

/// @brief Method CheckGroundStatus, addr 0x181abff00, size 0x150, virtual false, abstract: false, final false
inline void CheckGroundStatus() ;

/// @brief Method HandleAirborneMovement, addr 0x181ac0050, size 0xf0, virtual false, abstract: false, final false
inline void HandleAirborneMovement() ;

/// @brief Method HandleGroundedMovement, addr 0x181ac0140, size 0x140, virtual false, abstract: false, final false
inline void HandleGroundedMovement(bool  crouch, bool  jump) ;

/// @brief Method Move, addr 0x181ac0280, size 0x750, virtual false, abstract: false, final false
inline void Move(::UnityEngine::Vector3  move, bool  crouch, bool  jump) ;

static inline ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter* New_ctor() ;

/// @brief Method OnAnimatorMove, addr 0x181ac09d0, size 0xf0, virtual false, abstract: false, final false
inline void OnAnimatorMove() ;

/// @brief Method PreventStandingInLowHeadroom, addr 0x181ac0ac0, size 0x180, virtual false, abstract: false, final false
inline void PreventStandingInLowHeadroom() ;

/// @brief Method ScaleCapsuleForCrouching, addr 0x181ac0c40, size 0x280, virtual false, abstract: false, final false
inline void ScaleCapsuleForCrouching(bool  crouch) ;

/// @brief Method Start, addr 0x181ac0ec0, size 0xe0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateAnimator, addr 0x181ac0fa0, size 0x280, virtual false, abstract: false, final false
inline void UpdateAnimator(::UnityEngine::Vector3  move) ;

constexpr float_t const& __cordl_internal_get_m_AnimSpeedMultiplier() const;

constexpr float_t& __cordl_internal_get_m_AnimSpeedMultiplier() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_m_Animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_m_Animator() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_m_Capsule() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_m_Capsule() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CapsuleCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CapsuleCenter() ;

constexpr float_t const& __cordl_internal_get_m_CapsuleHeight() const;

constexpr float_t& __cordl_internal_get_m_CapsuleHeight() ;

constexpr bool const& __cordl_internal_get_m_Crouching() const;

constexpr bool& __cordl_internal_get_m_Crouching() ;

constexpr float_t const& __cordl_internal_get_m_ForwardAmount() const;

constexpr float_t& __cordl_internal_get_m_ForwardAmount() ;

constexpr float_t const& __cordl_internal_get_m_GravityMultiplier() const;

constexpr float_t& __cordl_internal_get_m_GravityMultiplier() ;

constexpr float_t const& __cordl_internal_get_m_GroundCheckDistance() const;

constexpr float_t& __cordl_internal_get_m_GroundCheckDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_GroundNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_GroundNormal() ;

constexpr bool const& __cordl_internal_get_m_IsGrounded() const;

constexpr bool& __cordl_internal_get_m_IsGrounded() ;

constexpr float_t const& __cordl_internal_get_m_JumpPower() const;

constexpr float_t& __cordl_internal_get_m_JumpPower() ;

constexpr float_t const& __cordl_internal_get_m_MoveSpeedMultiplier() const;

constexpr float_t& __cordl_internal_get_m_MoveSpeedMultiplier() ;

constexpr float_t const& __cordl_internal_get_m_MovingTurnSpeed() const;

constexpr float_t& __cordl_internal_get_m_MovingTurnSpeed() ;

constexpr float_t const& __cordl_internal_get_m_OrigGroundCheckDistance() const;

constexpr float_t& __cordl_internal_get_m_OrigGroundCheckDistance() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_Rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_Rigidbody() ;

constexpr float_t const& __cordl_internal_get_m_RunCycleLegOffset() const;

constexpr float_t& __cordl_internal_get_m_RunCycleLegOffset() ;

constexpr float_t const& __cordl_internal_get_m_StationaryTurnSpeed() const;

constexpr float_t& __cordl_internal_get_m_StationaryTurnSpeed() ;

constexpr float_t const& __cordl_internal_get_m_TurnAmount() const;

constexpr float_t& __cordl_internal_get_m_TurnAmount() ;

constexpr void __cordl_internal_set_m_AnimSpeedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_Animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_m_Capsule(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_m_CapsuleCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_CapsuleHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_Crouching(bool  value) ;

constexpr void __cordl_internal_set_m_ForwardAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_GravityMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_GroundCheckDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_GroundNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_IsGrounded(bool  value) ;

constexpr void __cordl_internal_set_m_JumpPower(float_t  value) ;

constexpr void __cordl_internal_set_m_MoveSpeedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_MovingTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_OrigGroundCheckDistance(float_t  value) ;

constexpr void __cordl_internal_set_m_Rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_m_RunCycleLegOffset(float_t  value) ;

constexpr void __cordl_internal_set_m_StationaryTurnSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_TurnAmount(float_t  value) ;

/// @brief Method .ctor, addr 0x181ac1220, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThirdPersonCharacter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThirdPersonCharacter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ThirdPersonCharacter(ThirdPersonCharacter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThirdPersonCharacter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThirdPersonCharacter(ThirdPersonCharacter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20349};

/// @brief Field k_Half offset 0xffffffff size 0x4
static constexpr float_t  k_Half{static_cast<float_t>(0.5f)};

/// @brief Field m_MovingTurnSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_MovingTurnSpeed;

/// @brief Field m_StationaryTurnSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_StationaryTurnSpeed;

/// @brief Field m_JumpPower, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_JumpPower;

/// @brief Field m_GravityMultiplier, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_GravityMultiplier;

/// @brief Field m_RunCycleLegOffset, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_RunCycleLegOffset;

/// @brief Field m_MoveSpeedMultiplier, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_MoveSpeedMultiplier;

/// @brief Field m_AnimSpeedMultiplier, offset: 0x38, size: 0x4, def value: None
 float_t  ___m_AnimSpeedMultiplier;

/// @brief Field m_GroundCheckDistance, offset: 0x3c, size: 0x4, def value: None
 float_t  ___m_GroundCheckDistance;

/// @brief Field m_Rigidbody, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___m_Rigidbody;

/// @brief Field m_Animator, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___m_Animator;

/// @brief Field m_IsGrounded, offset: 0x50, size: 0x1, def value: None
 bool  ___m_IsGrounded;

/// @brief Field m_OrigGroundCheckDistance, offset: 0x54, size: 0x4, def value: None
 float_t  ___m_OrigGroundCheckDistance;

/// @brief Field m_TurnAmount, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_TurnAmount;

/// @brief Field m_ForwardAmount, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_ForwardAmount;

/// @brief Field m_GroundNormal, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_GroundNormal;

/// @brief Field m_CapsuleHeight, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_CapsuleHeight;

/// @brief Field m_CapsuleCenter, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CapsuleCenter;

/// @brief Field m_Capsule, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___m_Capsule;

/// @brief Field m_Crouching, offset: 0x88, size: 0x1, def value: None
 bool  ___m_Crouching;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_MovingTurnSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_StationaryTurnSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_JumpPower) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_GravityMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_RunCycleLegOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_MoveSpeedMultiplier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_AnimSpeedMultiplier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_GroundCheckDistance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_Rigidbody) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_Animator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_IsGrounded) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_OrigGroundCheckDistance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_TurnAmount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_ForwardAmount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_GroundNormal) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_CapsuleHeight) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_CapsuleCenter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_Capsule) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter, ___m_Crouching) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter) == 0x90, "Size mismatch!");

} // namespace end def Rowlan::UnityStandardAssets::Characters::ThirdPerson
