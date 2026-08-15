#pragma once
// IWYU pragma private; include "Animancer/Examples/Events/FootstepEventsAnimation.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Animancer/Examples/Events/zzzz__FootstepEventsAnimation_def.hpp"
#include "Animancer/Examples/Events/zzzz__FootstepEvents_def.hpp"
//  Writing Method size for method: ::Animancer::Examples::Events::FootstepEventsAnimation.Footstep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::FootstepEventsAnimation::*)(int32_t)>(&::Animancer::Examples::Events::FootstepEventsAnimation::Footstep)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1802fba00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEventsAnimation*>(),
                        {"Footstep", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::Examples::Events::FootstepEventsAnimation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::Examples::Events::FootstepEventsAnimation::*)()>(&::Animancer::Examples::Events::FootstepEventsAnimation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEventsAnimation*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Animancer::Examples::Events::FootstepEvents>& Animancer::Examples::Events::FootstepEventsAnimation::__cordl_internal_get__FootstepEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FootstepEvents;
}
constexpr ::UnityW<::Animancer::Examples::Events::FootstepEvents> const& Animancer::Examples::Events::FootstepEventsAnimation::__cordl_internal_get__FootstepEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FootstepEvents;
}
constexpr void Animancer::Examples::Events::FootstepEventsAnimation::__cordl_internal_set__FootstepEvents(::UnityW<::Animancer::Examples::Events::FootstepEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FootstepEvents = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& Animancer::Examples::Events::FootstepEventsAnimation::__cordl_internal_get__FootSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FootSources;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& Animancer::Examples::Events::FootstepEventsAnimation::__cordl_internal_get__FootSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FootSources;
}
constexpr void Animancer::Examples::Events::FootstepEventsAnimation::__cordl_internal_set__FootSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FootSources = value;
}
inline void Animancer::Examples::Events::FootstepEventsAnimation::Footstep(int32_t  foot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEventsAnimation*>(),
                        {"Footstep", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foot);
}
inline void Animancer::Examples::Events::FootstepEventsAnimation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::Examples::Events::FootstepEventsAnimation*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::Examples::Events::FootstepEventsAnimation* Animancer::Examples::Events::FootstepEventsAnimation::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::Examples::Events::FootstepEventsAnimation*>());
}
// Ctor Parameters []
constexpr ::Animancer::Examples::Events::FootstepEventsAnimation::FootstepEventsAnimation()   {
}
