#pragma once
// IWYU pragma private; include "Animancer/Examples/Locomotion/LinearMixerLocomotion.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Locomotion/zzzz__LinearMixerLocomotion_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__LinearMixerTransitionAsset_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Locomotion::LinearMixerLocomotion.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::LinearMixerLocomotion::*)()>(&::Animancer::Examples::Locomotion::LinearMixerLocomotion::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::LinearMixerLocomotion*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::LinearMixerLocomotion.get_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Animancer::Examples::Locomotion::LinearMixerLocomotion::*)()>(&::Animancer::Examples::Locomotion::LinearMixerLocomotion::get_Speed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1802fe330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::LinearMixerLocomotion*>(),
                        {"get_Speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::LinearMixerLocomotion.set_Speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::LinearMixerLocomotion::*)(float_t)>(&::Animancer::Examples::Locomotion::LinearMixerLocomotion::set_Speed)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1802fe370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::LinearMixerLocomotion*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Locomotion::LinearMixerLocomotion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Locomotion::LinearMixerLocomotion::*)()>(&::Animancer::Examples::Locomotion::LinearMixerLocomotion::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::LinearMixerLocomotion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Locomotion::LinearMixerLocomotion::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Locomotion::LinearMixerLocomotion::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Locomotion::LinearMixerLocomotion::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::Animancer::LinearMixerTransitionAsset_UnShared*& Animancer::Examples::Locomotion::LinearMixerLocomotion::__cordl_internal_get__Mixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mixer;
}
constexpr ::Animancer::LinearMixerTransitionAsset_UnShared* const& Animancer::Examples::Locomotion::LinearMixerLocomotion::__cordl_internal_get__Mixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Mixer;
}
constexpr void Animancer::Examples::Locomotion::LinearMixerLocomotion::__cordl_internal_set__Mixer(::Animancer::LinearMixerTransitionAsset_UnShared*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Mixer = value;
}
inline void Animancer::Examples::Locomotion::LinearMixerLocomotion::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::LinearMixerLocomotion*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Animancer::Examples::Locomotion::LinearMixerLocomotion::get_Speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::LinearMixerLocomotion*>(),
                        {"get_Speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Animancer::Examples::Locomotion::LinearMixerLocomotion::set_Speed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::LinearMixerLocomotion*>(),
                        {"set_Speed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Animancer::Examples::Locomotion::LinearMixerLocomotion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Locomotion::LinearMixerLocomotion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Locomotion::LinearMixerLocomotion* Animancer::Examples::Locomotion::LinearMixerLocomotion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Locomotion::LinearMixerLocomotion*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Locomotion::LinearMixerLocomotion::LinearMixerLocomotion()   {
}
