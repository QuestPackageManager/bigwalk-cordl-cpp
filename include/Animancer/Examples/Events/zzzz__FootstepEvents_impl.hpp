#pragma once
// IWYU pragma private; include "Animancer/Examples/Events/FootstepEvents.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Events/zzzz__FootstepEvents_def.hpp"
#include "Animancer/zzzz__AnimancerComponent_def.hpp"
#include "Animancer/zzzz__ClipTransition_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Events::FootstepEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::FootstepEvents::*)()>(&::Animancer::Examples::Events::FootstepEvents::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1802fba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Events::FootstepEvents.PlaySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::FootstepEvents::*)(::UnityEngine::AudioSource*)>(&::Animancer::Examples::Events::FootstepEvents::PlaySound)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1802fbaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEvents*>(),
                        {"PlaySound", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Events::FootstepEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::FootstepEvents::*)()>(&::Animancer::Examples::Events::FootstepEvents::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::AnimancerComponent>& Animancer::Examples::Events::FootstepEvents::__cordl_internal_get__Animancer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr ::UnityW<::Animancer::AnimancerComponent> const& Animancer::Examples::Events::FootstepEvents::__cordl_internal_get__Animancer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Animancer;
}
constexpr void Animancer::Examples::Events::FootstepEvents::__cordl_internal_set__Animancer(::UnityW<::Animancer::AnimancerComponent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Animancer = value;
}
constexpr ::Animancer::ClipTransition*& Animancer::Examples::Events::FootstepEvents::__cordl_internal_get__Walk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walk;
}
constexpr ::Animancer::ClipTransition* const& Animancer::Examples::Events::FootstepEvents::__cordl_internal_get__Walk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Walk;
}
constexpr void Animancer::Examples::Events::FootstepEvents::__cordl_internal_set__Walk(::Animancer::ClipTransition*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Walk = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& Animancer::Examples::Events::FootstepEvents::__cordl_internal_get__Sounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sounds;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& Animancer::Examples::Events::FootstepEvents::__cordl_internal_get__Sounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sounds;
}
constexpr void Animancer::Examples::Events::FootstepEvents::__cordl_internal_set__Sounds(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Sounds = value;
}
inline void Animancer::Examples::Events::FootstepEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::Examples::Events::FootstepEvents::PlaySound(::UnityEngine::AudioSource*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEvents*>(),
                        {"PlaySound", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Animancer::Examples::Events::FootstepEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Events::FootstepEvents* Animancer::Examples::Events::FootstepEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Events::FootstepEvents*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Events::FootstepEvents::FootstepEvents()   {
}
