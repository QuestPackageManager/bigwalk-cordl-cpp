#pragma once
// IWYU pragma private; include "Enviro/GeneralObjects.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Enviro/zzzz__GeneralObjects_def.hpp"
#include "Enviro/zzzz__EnviroReflectionProbe_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__WindZone_def.hpp"
//  Writing Method size for method: ::Enviro::GeneralObjects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::GeneralObjects::*)()>(&::Enviro::GeneralObjects::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::GeneralObjects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::GeneralObjects::__cordl_internal_get_sun()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sun;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::GeneralObjects::__cordl_internal_get_sun() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sun;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_sun(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sun = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::GeneralObjects::__cordl_internal_get_moon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::GeneralObjects::__cordl_internal_get_moon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moon;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_moon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moon = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::GeneralObjects::__cordl_internal_get_stars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stars;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::GeneralObjects::__cordl_internal_get_stars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stars;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_stars(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stars = value;
}
constexpr ::UnityW<::UnityEngine::Light>& Enviro::GeneralObjects::__cordl_internal_get_directionalLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionalLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& Enviro::GeneralObjects::__cordl_internal_get_directionalLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionalLight;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_directionalLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directionalLight = value;
}
constexpr ::UnityW<::UnityEngine::Light>& Enviro::GeneralObjects::__cordl_internal_get_additionalDirectionalLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalDirectionalLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& Enviro::GeneralObjects::__cordl_internal_get_additionalDirectionalLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalDirectionalLight;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_additionalDirectionalLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___additionalDirectionalLight = value;
}
constexpr ::UnityW<::Enviro::EnviroReflectionProbe>& Enviro::GeneralObjects::__cordl_internal_get_globalReflectionProbe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionProbe;
}
constexpr ::UnityW<::Enviro::EnviroReflectionProbe> const& Enviro::GeneralObjects::__cordl_internal_get_globalReflectionProbe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionProbe;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_globalReflectionProbe(::UnityW<::Enviro::EnviroReflectionProbe>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionProbe = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::GeneralObjects::__cordl_internal_get_effects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effects;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::GeneralObjects::__cordl_internal_get_effects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effects;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_effects(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effects = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::GeneralObjects::__cordl_internal_get_audio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audio;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::GeneralObjects::__cordl_internal_get_audio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audio;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_audio(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audio = value;
}
constexpr ::UnityW<::UnityEngine::WindZone>& Enviro::GeneralObjects::__cordl_internal_get_windZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windZone;
}
constexpr ::UnityW<::UnityEngine::WindZone> const& Enviro::GeneralObjects::__cordl_internal_get_windZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windZone;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_windZone(::UnityW<::UnityEngine::WindZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windZone = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Enviro::GeneralObjects::__cordl_internal_get_worldAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldAnchor;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Enviro::GeneralObjects::__cordl_internal_get_worldAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldAnchor;
}
constexpr void Enviro::GeneralObjects::__cordl_internal_set_worldAnchor(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldAnchor = value;
}
inline void Enviro::GeneralObjects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::GeneralObjects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::GeneralObjects* Enviro::GeneralObjects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::GeneralObjects*>());
}
// Ctor Parameters []
constexpr ::Enviro::GeneralObjects::GeneralObjects()   {
}
