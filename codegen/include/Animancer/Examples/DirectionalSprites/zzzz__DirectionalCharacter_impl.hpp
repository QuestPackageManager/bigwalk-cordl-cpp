#pragma once
// IWYU pragma private; include "Animancer/Examples/DirectionalSprites/DirectionalCharacter.hpp"
#include "UnityEngine/zzzz__ContactPoint2D_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Animancer/Examples/DirectionalSprites/zzzz__DirectionalCharacter_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__DirectionalAnimationSet_def.hpp"
#include "Animancer/zzzz__TimeSynchronizationGroup_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider2D_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::DirectionalSprites::DirectionalCharacter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::DirectionalSprites::DirectionalCharacter::*)()>(&::Animancer::Examples::DirectionalSprites::DirectionalCharacter::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802f9ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::DirectionalSprites::DirectionalCharacter.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::DirectionalSprites::DirectionalCharacter::*)()>(&::Animancer::Examples::DirectionalSprites::DirectionalCharacter::Update)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1802fa370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::DirectionalSprites::DirectionalCharacter.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::DirectionalSprites::DirectionalCharacter::*)(::Animancer::DirectionalAnimationSet*)>(&::Animancer::Examples::DirectionalSprites::DirectionalCharacter::Play)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802fa0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::DirectionalSprites::DirectionalCharacter.UpdateMovementState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::DirectionalSprites::DirectionalCharacter::*)()>(&::Animancer::Examples::DirectionalSprites::DirectionalCharacter::UpdateMovementState)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1802fa190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"UpdateMovementState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::DirectionalSprites::DirectionalCharacter.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::DirectionalSprites::DirectionalCharacter::*)()>(&::Animancer::Examples::DirectionalSprites::DirectionalCharacter::FixedUpdate)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802fa080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::DirectionalSprites::DirectionalCharacter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::DirectionalSprites::DirectionalCharacter::*)()>(&::Animancer::Examples::DirectionalSprites::DirectionalCharacter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fa520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::CapsuleCollider2D>& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Collider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider2D> const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Collider;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__Collider(::UnityW<::UnityEngine::CapsuleCollider2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Collider = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D>& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rigidbody;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__Rigidbody(::UnityW<::UnityEngine::Rigidbody2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rigidbody = value;
}
constexpr float_t& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__WalkSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WalkSpeed;
}
constexpr float_t const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__WalkSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WalkSpeed;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__WalkSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WalkSpeed = value;
}
constexpr float_t& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__RunSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunSpeed;
}
constexpr float_t const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__RunSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunSpeed;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__RunSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RunSpeed = value;
}
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Idle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Idle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__Idle(::UnityW<::Animancer::DirectionalAnimationSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Idle = value;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Walk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walk;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Walk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walk;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__Walk(::UnityW<::Animancer::DirectionalAnimationSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Walk = value;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Run()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Run;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Run() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Run;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__Run(::UnityW<::Animancer::DirectionalAnimationSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Run = value;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Push()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Push;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Push() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Push;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__Push(::UnityW<::Animancer::DirectionalAnimationSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Push = value;
}
constexpr ::UnityEngine::Vector2& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Facing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Facing;
}
constexpr ::UnityEngine::Vector2 const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Facing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Facing;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__Facing(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Facing = value;
}
constexpr ::UnityEngine::Vector2& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Movement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Movement;
}
constexpr ::UnityEngine::Vector2 const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__Movement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Movement;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__Movement(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Movement = value;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet>& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__CurrentAnimationSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentAnimationSet;
}
constexpr ::UnityW<::Animancer::DirectionalAnimationSet> const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__CurrentAnimationSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentAnimationSet;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__CurrentAnimationSet(::UnityW<::Animancer::DirectionalAnimationSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentAnimationSet = value;
}
constexpr ::Animancer::TimeSynchronizationGroup*& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__MovementSynchronization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementSynchronization;
}
constexpr ::Animancer::TimeSynchronizationGroup* const& Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_get__MovementSynchronization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementSynchronization;
}
constexpr void Animancer::Examples::DirectionalSprites::DirectionalCharacter::__cordl_internal_set__MovementSynchronization(::Animancer::TimeSynchronizationGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementSynchronization = value;
}
inline void Animancer::Examples::DirectionalSprites::DirectionalCharacter::setStaticF_Contacts(::ArrayW<::UnityEngine::ContactPoint2D>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::ContactPoint2D>, "Contacts", ::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(std::forward<::ArrayW<::UnityEngine::ContactPoint2D>>(value));
}
inline ::ArrayW<::UnityEngine::ContactPoint2D> Animancer::Examples::DirectionalSprites::DirectionalCharacter::getStaticF_Contacts()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::ContactPoint2D>, "Contacts", ::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>();
}
inline void Animancer::Examples::DirectionalSprites::DirectionalCharacter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::DirectionalSprites::DirectionalCharacter::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::DirectionalSprites::DirectionalCharacter::Play(::Animancer::DirectionalAnimationSet*  animations)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"Play", {}, {::i2c::type_of<::Animancer::DirectionalAnimationSet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animations);
}
inline void Animancer::Examples::DirectionalSprites::DirectionalCharacter::UpdateMovementState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"UpdateMovementState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::DirectionalSprites::DirectionalCharacter::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::DirectionalSprites::DirectionalCharacter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::DirectionalSprites::DirectionalCharacter* Animancer::Examples::DirectionalSprites::DirectionalCharacter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::DirectionalSprites::DirectionalCharacter*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::DirectionalSprites::DirectionalCharacter::DirectionalCharacter()   {
}
