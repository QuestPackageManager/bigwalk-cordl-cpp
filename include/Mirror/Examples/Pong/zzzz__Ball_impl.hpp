#pragma once
// IWYU pragma private; include "Mirror/Examples/Pong/Ball.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/Examples/Pong/zzzz__Ball_def.hpp"
#include "UnityEngine/zzzz__Collision2D_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Mirror::Examples::Pong::Ball.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Pong::Ball::*)()>(&::Mirror::Examples::Pong::Ball::OnStartServer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181553840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::Examples::Pong::Ball*>(),
                    {::i2c::class_of<::Mirror::Examples::Pong::Ball*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Pong::Ball.HitFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::Examples::Pong::Ball::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t)>(&::Mirror::Examples::Pong::Ball::HitFactor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181553640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::Ball*>(),
                        {"HitFactor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Pong::Ball.OnCollisionEnter2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Pong::Ball::*)(::UnityEngine::Collision2D*)>(&::Mirror::Examples::Pong::Ball::OnCollisionEnter2D)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x181553670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::Ball*>(),
                        {"OnCollisionEnter2D", {}, {::i2c::type_of<::UnityEngine::Collision2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Pong::Ball._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Pong::Ball::*)()>(&::Mirror::Examples::Pong::Ball::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1815538a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::Ball*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::Examples::Pong::Ball.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::Examples::Pong::Ball::*)()>(&::Mirror::Examples::Pong::Ball::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::Ball*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Mirror::Examples::Pong::Ball::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& Mirror::Examples::Pong::Ball::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void Mirror::Examples::Pong::Ball::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D>& Mirror::Examples::Pong::Ball::__cordl_internal_get_rigidbody2d()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody2d;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& Mirror::Examples::Pong::Ball::__cordl_internal_get_rigidbody2d() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbody2d;
}
constexpr void Mirror::Examples::Pong::Ball::__cordl_internal_set_rigidbody2d(::UnityW<::UnityEngine::Rigidbody2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbody2d = value;
}
inline void Mirror::Examples::Pong::Ball::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::Examples::Pong::Ball*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Mirror::Examples::Pong::Ball::HitFactor(::UnityEngine::Vector2  ballPos, ::UnityEngine::Vector2  racketPos, float_t  racketHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::Ball*>(),
                        {"HitFactor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, ballPos, racketPos, racketHeight);
}
inline void Mirror::Examples::Pong::Ball::OnCollisionEnter2D(::UnityEngine::Collision2D*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::Ball*>(),
                        {"OnCollisionEnter2D", {}, {::i2c::type_of<::UnityEngine::Collision2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void Mirror::Examples::Pong::Ball::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::Ball*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::Examples::Pong::Ball::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::Examples::Pong::Ball*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::Examples::Pong::Ball* Mirror::Examples::Pong::Ball::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::Examples::Pong::Ball*>());
}
// Ctor Parameters []
constexpr ::Mirror::Examples::Pong::Ball::Ball()   {
}
