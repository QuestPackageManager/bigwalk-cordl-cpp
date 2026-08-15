#pragma once
// IWYU pragma private; include "Enviro/EnviroReflections.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeTimeSlicingMode_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "Enviro/zzzz__EnviroReflections_def.hpp"
#include "Enviro/zzzz__EnviroReflections_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution::EnviroReflections_GlobalReflectionResolution(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution::EnviroReflections_GlobalReflectionResolution()   {
}
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution  Enviro::EnviroReflections_GlobalReflectionResolution::R16{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution  Enviro::EnviroReflections_GlobalReflectionResolution::R32{static_cast<int32_t>(0x1)};
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution  Enviro::EnviroReflections_GlobalReflectionResolution::R64{static_cast<int32_t>(0x2)};
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution  Enviro::EnviroReflections_GlobalReflectionResolution::R128{static_cast<int32_t>(0x3)};
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution  Enviro::EnviroReflections_GlobalReflectionResolution::R256{static_cast<int32_t>(0x4)};
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution  Enviro::EnviroReflections_GlobalReflectionResolution::R512{static_cast<int32_t>(0x5)};
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution  Enviro::EnviroReflections_GlobalReflectionResolution::R1024{static_cast<int32_t>(0x6)};
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution  Enviro::EnviroReflections_GlobalReflectionResolution::R2048{static_cast<int32_t>(0x7)};
//  Writing Method size for method: ::Enviro::EnviroReflections._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroReflections::*)()>(&::Enviro::EnviroReflections::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1806199c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroReflections*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroReflections::__cordl_internal_get_globalReflections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflections;
}
constexpr bool const& Enviro::EnviroReflections::__cordl_internal_get_globalReflections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflections;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflections(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflections = value;
}
constexpr bool& Enviro::EnviroReflections::__cordl_internal_get_customRendering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRendering;
}
constexpr bool const& Enviro::EnviroReflections::__cordl_internal_get_customRendering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRendering;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_customRendering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customRendering = value;
}
constexpr bool& Enviro::EnviroReflections::__cordl_internal_get_customRenderingTimeSlicing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRenderingTimeSlicing;
}
constexpr bool const& Enviro::EnviroReflections::__cordl_internal_get_customRenderingTimeSlicing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRenderingTimeSlicing;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_customRenderingTimeSlicing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customRenderingTimeSlicing = value;
}
constexpr ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionTimeSlicingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionTimeSlicingMode;
}
constexpr ::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode const& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionTimeSlicingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionTimeSlicingMode;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflectionTimeSlicingMode(::UnityEngine::Rendering::ReflectionProbeTimeSlicingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionTimeSlicingMode = value;
}
constexpr bool& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsUpdateOnGameTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsUpdateOnGameTime;
}
constexpr bool const& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsUpdateOnGameTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsUpdateOnGameTime;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflectionsUpdateOnGameTime(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionsUpdateOnGameTime = value;
}
constexpr bool& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsUpdateOnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsUpdateOnPosition;
}
constexpr bool const& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsUpdateOnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsUpdateOnPosition;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflectionsUpdateOnPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionsUpdateOnPosition = value;
}
constexpr float_t& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsIntensity;
}
constexpr float_t const& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsIntensity;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflectionsIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionsIntensity = value;
}
constexpr float_t& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsTimeTreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsTimeTreshold;
}
constexpr float_t const& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsTimeTreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsTimeTreshold;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflectionsTimeTreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionsTimeTreshold = value;
}
constexpr float_t& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsPositionTreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsPositionTreshold;
}
constexpr float_t const& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsPositionTreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsPositionTreshold;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflectionsPositionTreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionsPositionTreshold = value;
}
constexpr float_t& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsScale;
}
constexpr float_t const& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionsScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionsScale;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflectionsScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionsScale = value;
}
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionResolution;
}
constexpr ::Enviro::EnviroReflections_GlobalReflectionResolution const& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionResolution;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflectionResolution(::Enviro::EnviroReflections_GlobalReflectionResolution  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionResolution = value;
}
constexpr ::UnityEngine::LayerMask& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionLayers;
}
constexpr ::UnityEngine::LayerMask const& Enviro::EnviroReflections::__cordl_internal_get_globalReflectionLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalReflectionLayers;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_globalReflectionLayers(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalReflectionLayers = value;
}
constexpr bool& Enviro::EnviroReflections::__cordl_internal_get_updateDefaultEnvironmentReflections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDefaultEnvironmentReflections;
}
constexpr bool const& Enviro::EnviroReflections::__cordl_internal_get_updateDefaultEnvironmentReflections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateDefaultEnvironmentReflections;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_updateDefaultEnvironmentReflections(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateDefaultEnvironmentReflections = value;
}
constexpr ::UnityW<::UnityEngine::Cubemap>& Enviro::EnviroReflections::__cordl_internal_get_defaultSkyReflectionTex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSkyReflectionTex;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& Enviro::EnviroReflections::__cordl_internal_get_defaultSkyReflectionTex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultSkyReflectionTex;
}
constexpr void Enviro::EnviroReflections::__cordl_internal_set_defaultSkyReflectionTex(::UnityW<::UnityEngine::Cubemap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultSkyReflectionTex = value;
}
inline void Enviro::EnviroReflections::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroReflections*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroReflections* Enviro::EnviroReflections::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroReflections*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroReflections::EnviroReflections()   {
}
