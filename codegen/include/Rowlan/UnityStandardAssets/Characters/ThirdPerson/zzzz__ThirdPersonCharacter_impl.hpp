#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/Characters/ThirdPerson/ThirdPersonCharacter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Rowlan/UnityStandardAssets/Characters/ThirdPerson/zzzz__ThirdPersonCharacter_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181ac0ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)(::UnityEngine::Vector3, bool, bool)>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::Move)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x181ac0280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.ScaleCapsuleForCrouching
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)(bool)>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::ScaleCapsuleForCrouching)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181ac0c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"ScaleCapsuleForCrouching", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.PreventStandingInLowHeadroom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::PreventStandingInLowHeadroom)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181ac0ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"PreventStandingInLowHeadroom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.UpdateAnimator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)(::UnityEngine::Vector3)>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::UpdateAnimator)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181ac0fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"UpdateAnimator", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.HandleAirborneMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::HandleAirborneMovement)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ac0050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"HandleAirborneMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.HandleGroundedMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)(bool, bool)>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::HandleGroundedMovement)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181ac0140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"HandleGroundedMovement", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.ApplyExtraTurnRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::ApplyExtraTurnRotation)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181abfe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"ApplyExtraTurnRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.OnAnimatorMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::OnAnimatorMove)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181ac09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"OnAnimatorMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter.CheckGroundStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::CheckGroundStatus)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181abff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"CheckGroundStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::*)()>(&::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181ac1220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_MovingTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovingTurnSpeed;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_MovingTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovingTurnSpeed;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_MovingTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MovingTurnSpeed = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_StationaryTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StationaryTurnSpeed;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_StationaryTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StationaryTurnSpeed;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_StationaryTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StationaryTurnSpeed = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_JumpPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpPower;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_JumpPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpPower;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_JumpPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JumpPower = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_GravityMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityMultiplier;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_GravityMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityMultiplier;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_GravityMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityMultiplier = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_RunCycleLegOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RunCycleLegOffset;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_RunCycleLegOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RunCycleLegOffset;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_RunCycleLegOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RunCycleLegOffset = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_MoveSpeedMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveSpeedMultiplier;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_MoveSpeedMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveSpeedMultiplier;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_MoveSpeedMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MoveSpeedMultiplier = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_AnimSpeedMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimSpeedMultiplier;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_AnimSpeedMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimSpeedMultiplier;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_AnimSpeedMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnimSpeedMultiplier = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_GroundCheckDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroundCheckDistance;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_GroundCheckDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroundCheckDistance;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_GroundCheckDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroundCheckDistance = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_Rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_Rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigidbody;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_Rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Rigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_Animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_Animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Animator;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_Animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Animator = value;
}
constexpr bool& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_IsGrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsGrounded;
}
constexpr bool const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_IsGrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsGrounded;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_IsGrounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsGrounded = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_OrigGroundCheckDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OrigGroundCheckDistance;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_OrigGroundCheckDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OrigGroundCheckDistance;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_OrigGroundCheckDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OrigGroundCheckDistance = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_TurnAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnAmount;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_TurnAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TurnAmount;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_TurnAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TurnAmount = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_ForwardAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForwardAmount;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_ForwardAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForwardAmount;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_ForwardAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ForwardAmount = value;
}
constexpr ::UnityEngine::Vector3& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_GroundNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroundNormal;
}
constexpr ::UnityEngine::Vector3 const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_GroundNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroundNormal;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_GroundNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroundNormal = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_CapsuleHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CapsuleHeight;
}
constexpr float_t const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_CapsuleHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CapsuleHeight;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_CapsuleHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CapsuleHeight = value;
}
constexpr ::UnityEngine::Vector3& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_CapsuleCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CapsuleCenter;
}
constexpr ::UnityEngine::Vector3 const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_CapsuleCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CapsuleCenter;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_CapsuleCenter(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CapsuleCenter = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_Capsule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Capsule;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_Capsule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Capsule;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_Capsule(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Capsule = value;
}
constexpr bool& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_Crouching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Crouching;
}
constexpr bool const& Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_get_m_Crouching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Crouching;
}
constexpr void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::__cordl_internal_set_m_Crouching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Crouching = value;
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::Move(::UnityEngine::Vector3  move, bool  crouch, bool  jump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, move, crouch, jump);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::ScaleCapsuleForCrouching(bool  crouch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"ScaleCapsuleForCrouching", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crouch);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::PreventStandingInLowHeadroom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"PreventStandingInLowHeadroom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::UpdateAnimator(::UnityEngine::Vector3  move)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"UpdateAnimator", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, move);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::HandleAirborneMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"HandleAirborneMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::HandleGroundedMovement(bool  crouch, bool  jump)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"HandleGroundedMovement", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, crouch, jump);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::ApplyExtraTurnRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"ApplyExtraTurnRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::OnAnimatorMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"OnAnimatorMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::CheckGroundStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {"CheckGroundStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter* Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter*>());
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::Characters::ThirdPerson::ThirdPersonCharacter::ThirdPersonCharacter()   {
}
