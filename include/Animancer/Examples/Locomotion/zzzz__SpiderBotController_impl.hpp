#pragma once
// IWYU pragma private; include "Animancer/Examples/Locomotion/SpiderBotController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Animancer/Examples/Locomotion/zzzz__SpiderBotController_def.hpp"
#include "Animancer/Examples/FineControl/zzzz__SpiderBot_def.hpp"
#include "Animancer/zzzz__MixerState_1_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Locomotion::SpiderBotController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::SpiderBotController::*)()>(&::Animancer::Examples::Locomotion::SpiderBotController::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803018a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::SpiderBotController.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::SpiderBotController::*)()>(&::Animancer::Examples::Locomotion::SpiderBotController::Update)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x180301c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::SpiderBotController.GetMovementDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Animancer::Examples::Locomotion::SpiderBotController::*)()>(&::Animancer::Examples::Locomotion::SpiderBotController::GetMovementDirection)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x180301a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {"GetMovementDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::SpiderBotController.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::SpiderBotController::*)()>(&::Animancer::Examples::Locomotion::SpiderBotController::FixedUpdate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x180301990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::SpiderBotController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::SpiderBotController::*)()>(&::Animancer::Examples::Locomotion::SpiderBotController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180302160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::FineControl::SpiderBot>& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__SpiderBot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpiderBot;
}
constexpr ::UnityW<::Animancer::Examples::FineControl::SpiderBot> const& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__SpiderBot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SpiderBot;
}
constexpr void Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_set__SpiderBot(::UnityW<::Animancer::Examples::FineControl::SpiderBot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SpiderBot = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__Body()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Body;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__Body() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Body;
}
constexpr void Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_set__Body(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Body = value;
}
constexpr float_t& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__TurnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurnSpeed;
}
constexpr float_t const& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__TurnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TurnSpeed;
}
constexpr void Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_set__TurnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TurnSpeed = value;
}
constexpr float_t& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__MovementSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementSpeed;
}
constexpr float_t const& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__MovementSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementSpeed;
}
constexpr void Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_set__MovementSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementSpeed = value;
}
constexpr float_t& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__SprintMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SprintMultiplier;
}
constexpr float_t const& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__SprintMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SprintMultiplier;
}
constexpr void Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_set__SprintMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SprintMultiplier = value;
}
constexpr ::Animancer::MixerState_1<::UnityEngine::Vector2>*& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__MoveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoveState;
}
constexpr ::Animancer::MixerState_1<::UnityEngine::Vector2>* const& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__MoveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MoveState;
}
constexpr void Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_set__MoveState(::Animancer::MixerState_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MoveState = value;
}
constexpr ::UnityEngine::Vector3& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__MovementDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementDirection;
}
constexpr ::UnityEngine::Vector3 const& Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_get__MovementDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementDirection;
}
constexpr void Animancer::Examples::Locomotion::SpiderBotController::__cordl_internal_set__MovementDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementDirection = value;
}
inline void Animancer::Examples::Locomotion::SpiderBotController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Locomotion::SpiderBotController::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Animancer::Examples::Locomotion::SpiderBotController::GetMovementDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {"GetMovementDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Animancer::Examples::Locomotion::SpiderBotController::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Locomotion::SpiderBotController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::SpiderBotController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Locomotion::SpiderBotController* Animancer::Examples::Locomotion::SpiderBotController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Locomotion::SpiderBotController*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Locomotion::SpiderBotController::SpiderBotController()   {
}
