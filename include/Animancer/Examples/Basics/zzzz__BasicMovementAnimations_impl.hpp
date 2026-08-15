#pragma once
// IWYU pragma private; include "Animancer/Examples/Basics/BasicMovementAnimations.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Basics/zzzz__BasicMovementAnimations_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Basics::BasicMovementAnimations.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::BasicMovementAnimations::*)()>(&::Animancer::Examples::Basics::BasicMovementAnimations::Update)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802f7180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicMovementAnimations*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Basics::BasicMovementAnimations._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Basics::BasicMovementAnimations::*)()>(&::Animancer::Examples::Basics::BasicMovementAnimations::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicMovementAnimations*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Basics::BasicMovementAnimations::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Basics::BasicMovementAnimations::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Basics::BasicMovementAnimations::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::Examples::Basics::BasicMovementAnimations::__cordl_internal_get__Idle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::Examples::Basics::BasicMovementAnimations::__cordl_internal_get__Idle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Idle;
}
constexpr void Animancer::Examples::Basics::BasicMovementAnimations::__cordl_internal_set__Idle(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Idle = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::Examples::Basics::BasicMovementAnimations::__cordl_internal_get__Move()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::Examples::Basics::BasicMovementAnimations::__cordl_internal_get__Move() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Move;
}
constexpr void Animancer::Examples::Basics::BasicMovementAnimations::__cordl_internal_set__Move(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Move = value;
}
inline void Animancer::Examples::Basics::BasicMovementAnimations::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicMovementAnimations*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Basics::BasicMovementAnimations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Basics::BasicMovementAnimations*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Basics::BasicMovementAnimations* Animancer::Examples::Basics::BasicMovementAnimations::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Basics::BasicMovementAnimations*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Basics::BasicMovementAnimations::BasicMovementAnimations()   {
}
