#pragma once
// IWYU pragma private; include "Animancer/Examples/FineControl/NamedAnimations.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/FineControl/zzzz__NamedAnimations_def.hpp"
#include "Animancer/zzzz__NamedAnimancerComponent_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::FineControl::NamedAnimations.PlayIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::NamedAnimations::*)()>(&::Animancer::Examples::FineControl::NamedAnimations::PlayIdle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ff650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {"PlayIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::NamedAnimations.PlayWalk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::NamedAnimations::*)()>(&::Animancer::Examples::FineControl::NamedAnimations::PlayWalk)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802ff6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {"PlayWalk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::NamedAnimations.InitializeWalkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::NamedAnimations::*)()>(&::Animancer::Examples::FineControl::NamedAnimations::InitializeWalkState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1802ff5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {"InitializeWalkState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::NamedAnimations.PlayRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::NamedAnimations::*)()>(&::Animancer::Examples::FineControl::NamedAnimations::PlayRun)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802ff680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {"PlayRun", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::FineControl::NamedAnimations._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::FineControl::NamedAnimations::*)()>(&::Animancer::Examples::FineControl::NamedAnimations::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::NamedAnimancerComponent>& Animancer::Examples::FineControl::NamedAnimations::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::NamedAnimancerComponent> const& Animancer::Examples::FineControl::NamedAnimations::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::FineControl::NamedAnimations::__cordl_internal_set__Animancer(::UnityW<::Animancer::NamedAnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::Examples::FineControl::NamedAnimations::__cordl_internal_get__Walk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walk;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::Examples::FineControl::NamedAnimations::__cordl_internal_get__Walk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walk;
}
constexpr void Animancer::Examples::FineControl::NamedAnimations::__cordl_internal_set__Walk(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Walk = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& Animancer::Examples::FineControl::NamedAnimations::__cordl_internal_get__Run()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Run;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& Animancer::Examples::FineControl::NamedAnimations::__cordl_internal_get__Run() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Run;
}
constexpr void Animancer::Examples::FineControl::NamedAnimations::__cordl_internal_set__Run(::UnityW<::UnityEngine::AnimationClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Run = value;
}
inline void Animancer::Examples::FineControl::NamedAnimations::PlayIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {"PlayIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::NamedAnimations::PlayWalk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {"PlayWalk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::NamedAnimations::InitializeWalkState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {"InitializeWalkState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::NamedAnimations::PlayRun()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {"PlayRun", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::FineControl::NamedAnimations::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::FineControl::NamedAnimations*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::FineControl::NamedAnimations* Animancer::Examples::FineControl::NamedAnimations::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::FineControl::NamedAnimations*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::FineControl::NamedAnimations::NamedAnimations()   {
}
