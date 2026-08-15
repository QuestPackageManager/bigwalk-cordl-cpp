#pragma once
// IWYU pragma private; include "Animancer/Examples/Basics/BasicCharacterAnimations.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Basics/zzzz__BasicCharacterAnimations_def.hpp"
#include "Animancer/Examples/Basics/zzzz__BasicCharacterAnimations_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Animancer::Examples::Basics::BasicCharacterAnimations_State::BasicCharacterAnimations_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Basics::BasicCharacterAnimations_State::BasicCharacterAnimations_State()   {
}
constexpr ::Animancer::Examples::Basics::BasicCharacterAnimations_State  Animancer::Examples::Basics::BasicCharacterAnimations_State::NotActing{static_cast<int32_t>(0x0)};
constexpr ::Animancer::Examples::Basics::BasicCharacterAnimations_State  Animancer::Examples::Basics::BasicCharacterAnimations_State::Acting{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Animancer::Examples::Basics::BasicCharacterAnimations.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::BasicCharacterAnimations::*)()>(&::Animancer::Examples::Basics::BasicCharacterAnimations::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1802f6db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::BasicCharacterAnimations.OnActionEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::BasicCharacterAnimations::*)()>(&::Animancer::Examples::Basics::BasicCharacterAnimations::OnActionEnd)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f6e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"OnActionEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::BasicCharacterAnimations.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::BasicCharacterAnimations::*)()>(&::Animancer::Examples::Basics::BasicCharacterAnimations::Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1802f6f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::BasicCharacterAnimations.UpdateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::BasicCharacterAnimations::*)()>(&::Animancer::Examples::Basics::BasicCharacterAnimations::UpdateMovement)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f6ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"UpdateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::BasicCharacterAnimations.UpdateAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::BasicCharacterAnimations::*)()>(&::Animancer::Examples::Basics::BasicCharacterAnimations::UpdateAction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802f6ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"UpdateAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::BasicCharacterAnimations._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::BasicCharacterAnimations::*)()>(&::Animancer::Examples::Basics::BasicCharacterAnimations::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__Idle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__Idle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr void Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_set__Idle(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Idle = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr void Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_set__Move(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Move = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__Action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__Action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Action;
}
constexpr void Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_set__Action(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Action = value;
}
constexpr ::Animancer::Examples::Basics::BasicCharacterAnimations_State& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__CurrentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState;
}
constexpr ::Animancer::Examples::Basics::BasicCharacterAnimations_State const& Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_get__CurrentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState;
}
constexpr void Animancer::Examples::Basics::BasicCharacterAnimations::__cordl_internal_set__CurrentState(::Animancer::Examples::Basics::BasicCharacterAnimations_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentState = value;
}
inline void Animancer::Examples::Basics::BasicCharacterAnimations::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::BasicCharacterAnimations::OnActionEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"OnActionEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::BasicCharacterAnimations::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::BasicCharacterAnimations::UpdateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"UpdateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::BasicCharacterAnimations::UpdateAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {"UpdateAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::BasicCharacterAnimations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicCharacterAnimations*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Basics::BasicCharacterAnimations* Animancer::Examples::Basics::BasicCharacterAnimations::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Basics::BasicCharacterAnimations*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Basics::BasicCharacterAnimations::BasicCharacterAnimations()   {
}
