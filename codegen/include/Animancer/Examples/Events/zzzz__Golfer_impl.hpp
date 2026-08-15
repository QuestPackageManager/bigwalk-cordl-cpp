#pragma once
// IWYU pragma private; include "Animancer/Examples/Events/Golfer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Animancer/Examples/Events/zzzz__Golfer_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Events::Golfer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::Golfer::*)()>(&::Animancer::Examples::Events::Golfer::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1802fbfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Events::Golfer.ResetBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::Golfer::*)()>(&::Animancer::Examples::Events::Golfer::ResetBall)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802fc180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"ResetBall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Events::Golfer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::Golfer::*)()>(&::Animancer::Examples::Events::Golfer::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1802fc1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Events::Golfer.HitBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::Golfer::*)()>(&::Animancer::Examples::Events::Golfer::HitBall)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802fc130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"HitBall", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Events::Golfer.EndSwing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::Golfer::*)()>(&::Animancer::Examples::Events::Golfer::EndSwing)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802fc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"EndSwing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Events::Golfer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::Golfer::*)()>(&::Animancer::Examples::Events::Golfer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fc290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Events::Golfer::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Events::Golfer::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Events::Golfer::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Events::Golfer::__cordl_internal_get__Ready()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ready;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Events::Golfer::__cordl_internal_get__Ready() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ready;
}
constexpr void Animancer::Examples::Events::Golfer::__cordl_internal_set__Ready(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Ready = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Events::Golfer::__cordl_internal_get__Swing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Swing;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Events::Golfer::__cordl_internal_get__Swing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Swing;
}
constexpr void Animancer::Examples::Events::Golfer::__cordl_internal_set__Swing(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Swing = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Animancer::Examples::Events::Golfer::__cordl_internal_get__Ball()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ball;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Animancer::Examples::Events::Golfer::__cordl_internal_get__Ball() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Ball;
}
constexpr void Animancer::Examples::Events::Golfer::__cordl_internal_set__Ball(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Ball = value;
}
constexpr ::UnityEngine::Vector3& Animancer::Examples::Events::Golfer::__cordl_internal_get__HitVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HitVelocity;
}
constexpr ::UnityEngine::Vector3 const& Animancer::Examples::Events::Golfer::__cordl_internal_get__HitVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HitVelocity;
}
constexpr void Animancer::Examples::Events::Golfer::__cordl_internal_set__HitVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HitVelocity = value;
}
constexpr float_t& Animancer::Examples::Events::Golfer::__cordl_internal_get__BallReturnHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BallReturnHeight;
}
constexpr float_t const& Animancer::Examples::Events::Golfer::__cordl_internal_get__BallReturnHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BallReturnHeight;
}
constexpr void Animancer::Examples::Events::Golfer::__cordl_internal_set__BallReturnHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BallReturnHeight = value;
}
constexpr ::UnityEngine::Vector3& Animancer::Examples::Events::Golfer::__cordl_internal_get__BallStartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BallStartPosition;
}
constexpr ::UnityEngine::Vector3 const& Animancer::Examples::Events::Golfer::__cordl_internal_get__BallStartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BallStartPosition;
}
constexpr void Animancer::Examples::Events::Golfer::__cordl_internal_set__BallStartPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BallStartPosition = value;
}
inline void Animancer::Examples::Events::Golfer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Events::Golfer::ResetBall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"ResetBall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Events::Golfer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Events::Golfer::HitBall()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"HitBall", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Events::Golfer::EndSwing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {"EndSwing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Events::Golfer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::Golfer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Events::Golfer* Animancer::Examples::Events::Golfer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Events::Golfer*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Events::Golfer::Golfer()   {
}
