#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveLevels/PlayerController.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Mirror/Examples/AdditiveLevels/zzzz__PlayerController_def.hpp"
#include "Mirror/Examples/AdditiveLevels/zzzz__PlayerController_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Mirror::Examples::AdditiveLevels::PlayerController_GroundState::PlayerController_GroundState(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Mirror::Examples::AdditiveLevels::PlayerController_GroundState::PlayerController_GroundState()   {
}
constexpr ::Mirror::Examples::AdditiveLevels::PlayerController_GroundState  Mirror::Examples::AdditiveLevels::PlayerController_GroundState::Jumping{static_cast<uint8_t>(0x0u)};
constexpr ::Mirror::Examples::AdditiveLevels::PlayerController_GroundState  Mirror::Examples::AdditiveLevels::PlayerController_GroundState::Falling{static_cast<uint8_t>(0x1u)};
constexpr ::Mirror::Examples::AdditiveLevels::PlayerController_GroundState  Mirror::Examples::AdditiveLevels::PlayerController_GroundState::Grounded{static_cast<uint8_t>(0x2u)};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PlayerController.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PlayerController::*)()>(&::Mirror::Examples::AdditiveLevels::PlayerController::OnValidate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18155f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PlayerController.OnStartAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PlayerController::*)()>(&::Mirror::Examples::AdditiveLevels::PlayerController::OnStartAuthority)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18155f210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PlayerController.OnStopAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PlayerController::*)()>(&::Mirror::Examples::AdditiveLevels::PlayerController::OnStopAuthority)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18155f250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                    {::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PlayerController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PlayerController::*)()>(&::Mirror::Examples::AdditiveLevels::PlayerController::Update)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x18155f350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PlayerController.HandleTurning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PlayerController::*)()>(&::Mirror::Examples::AdditiveLevels::PlayerController::HandleTurning)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x18155efe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"HandleTurning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PlayerController.HandleJumping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PlayerController::*)()>(&::Mirror::Examples::AdditiveLevels::PlayerController::HandleJumping)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18155ecb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"HandleJumping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PlayerController.HandleMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PlayerController::*)()>(&::Mirror::Examples::AdditiveLevels::PlayerController::HandleMove)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18155ee10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"HandleMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PlayerController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PlayerController::*)()>(&::Mirror::Examples::AdditiveLevels::PlayerController::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18155f720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::AdditiveLevels::PlayerController.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::AdditiveLevels::PlayerController::*)()>(&::Mirror::Examples::AdditiveLevels::PlayerController::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::CharacterController>& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_characterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterController;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_characterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___characterController;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_characterController(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___characterController = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_moveSpeedMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveSpeedMultiplier;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_moveSpeedMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveSpeedMultiplier;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_moveSpeedMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveSpeedMultiplier = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_maxTurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_maxTurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTurnSpeed;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_maxTurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTurnSpeed = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_turnDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnDelta;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_turnDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnDelta;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_turnDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnDelta = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_initialJumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialJumpSpeed;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_initialJumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialJumpSpeed;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_initialJumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialJumpSpeed = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_maxJumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJumpSpeed;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_maxJumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxJumpSpeed;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_maxJumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxJumpSpeed = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_jumpDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpDelta;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_jumpDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpDelta;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_jumpDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpDelta = value;
}
constexpr ::Mirror::Examples::AdditiveLevels::PlayerController_GroundState& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_groundState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundState;
}
constexpr ::Mirror::Examples::AdditiveLevels::PlayerController_GroundState const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_groundState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundState;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_groundState(::Mirror::Examples::AdditiveLevels::PlayerController_GroundState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundState = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_horizontal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontal;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_horizontal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___horizontal;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_horizontal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___horizontal = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_vertical()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertical;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_vertical() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertical;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_vertical(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertical = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_turnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_turnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_turnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSpeed = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_jumpSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSpeed;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_jumpSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpSpeed;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_jumpSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpSpeed = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_animVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animVelocity;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_animVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animVelocity;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_animVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animVelocity = value;
}
constexpr float_t& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_animRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animRotation;
}
constexpr float_t const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_animRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animRotation;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_animRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animRotation = value;
}
constexpr ::UnityEngine::Vector3Int& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3Int const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_velocity(::UnityEngine::Vector3Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::UnityEngine::Vector3& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr ::UnityEngine::Vector3 const& Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_get_direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___direction;
}
constexpr void Mirror::Examples::AdditiveLevels::PlayerController::__cordl_internal_set_direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___direction = value;
}
inline void Mirror::Examples::AdditiveLevels::PlayerController::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PlayerController::OnStartAuthority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PlayerController::OnStopAuthority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PlayerController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PlayerController::HandleTurning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"HandleTurning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PlayerController::HandleJumping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"HandleJumping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PlayerController::HandleMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"HandleMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PlayerController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::AdditiveLevels::PlayerController::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::AdditiveLevels::PlayerController*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::AdditiveLevels::PlayerController* Mirror::Examples::AdditiveLevels::PlayerController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::AdditiveLevels::PlayerController*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::AdditiveLevels::PlayerController::PlayerController()   {
}
