#pragma once
// IWYU pragma private; include "Enviro/EnviroQuality.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Enviro/zzzz__EnviroQuality_def.hpp"
#include "Enviro/zzzz__EnviroAuroraQualitySettings_def.hpp"
#include "Enviro/zzzz__EnviroEffectsQualitySettings_def.hpp"
#include "Enviro/zzzz__EnviroFlatCloudsQualitySettings_def.hpp"
#include "Enviro/zzzz__EnviroFogQualitySettings_def.hpp"
#include "Enviro/zzzz__EnviroSkyQualitySettings_def.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudsQualitySettings_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroQuality._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroQuality::*)()>(&::Enviro::EnviroQuality::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQuality*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Enviro::EnviroQuality::__cordl_internal_get_showEditor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr bool const& Enviro::EnviroQuality::__cordl_internal_get_showEditor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEditor;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_showEditor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEditor = value;
}
constexpr bool& Enviro::EnviroQuality::__cordl_internal_get_showSky()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSky;
}
constexpr bool const& Enviro::EnviroQuality::__cordl_internal_get_showSky() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showSky;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_showSky(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showSky = value;
}
constexpr bool& Enviro::EnviroQuality::__cordl_internal_get_showVolumeClouds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showVolumeClouds;
}
constexpr bool const& Enviro::EnviroQuality::__cordl_internal_get_showVolumeClouds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showVolumeClouds;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_showVolumeClouds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showVolumeClouds = value;
}
constexpr bool& Enviro::EnviroQuality::__cordl_internal_get_showFog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFog;
}
constexpr bool const& Enviro::EnviroQuality::__cordl_internal_get_showFog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFog;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_showFog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showFog = value;
}
constexpr bool& Enviro::EnviroQuality::__cordl_internal_get_showFlatClouds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFlatClouds;
}
constexpr bool const& Enviro::EnviroQuality::__cordl_internal_get_showFlatClouds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFlatClouds;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_showFlatClouds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showFlatClouds = value;
}
constexpr bool& Enviro::EnviroQuality::__cordl_internal_get_showEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEffects;
}
constexpr bool const& Enviro::EnviroQuality::__cordl_internal_get_showEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showEffects;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_showEffects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showEffects = value;
}
constexpr bool& Enviro::EnviroQuality::__cordl_internal_get_showAurora()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAurora;
}
constexpr bool const& Enviro::EnviroQuality::__cordl_internal_get_showAurora() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showAurora;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_showAurora(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showAurora = value;
}
constexpr ::Enviro::EnviroSkyQualitySettings*& Enviro::EnviroQuality::__cordl_internal_get_skyOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyOverride;
}
constexpr ::Enviro::EnviroSkyQualitySettings* const& Enviro::EnviroQuality::__cordl_internal_get_skyOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skyOverride;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_skyOverride(::Enviro::EnviroSkyQualitySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skyOverride = value;
}
constexpr ::Enviro::EnviroVolumetricCloudsQualitySettings*& Enviro::EnviroQuality::__cordl_internal_get_volumetricCloudsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudsOverride;
}
constexpr ::Enviro::EnviroVolumetricCloudsQualitySettings* const& Enviro::EnviroQuality::__cordl_internal_get_volumetricCloudsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudsOverride;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_volumetricCloudsOverride(::Enviro::EnviroVolumetricCloudsQualitySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricCloudsOverride = value;
}
constexpr ::Enviro::EnviroFogQualitySettings*& Enviro::EnviroQuality::__cordl_internal_get_fogOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogOverride;
}
constexpr ::Enviro::EnviroFogQualitySettings* const& Enviro::EnviroQuality::__cordl_internal_get_fogOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogOverride;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_fogOverride(::Enviro::EnviroFogQualitySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogOverride = value;
}
constexpr ::Enviro::EnviroFlatCloudsQualitySettings*& Enviro::EnviroQuality::__cordl_internal_get_flatCloudsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsOverride;
}
constexpr ::Enviro::EnviroFlatCloudsQualitySettings* const& Enviro::EnviroQuality::__cordl_internal_get_flatCloudsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudsOverride;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_flatCloudsOverride(::Enviro::EnviroFlatCloudsQualitySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudsOverride = value;
}
constexpr ::Enviro::EnviroAuroraQualitySettings*& Enviro::EnviroQuality::__cordl_internal_get_auroraOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraOverride;
}
constexpr ::Enviro::EnviroAuroraQualitySettings* const& Enviro::EnviroQuality::__cordl_internal_get_auroraOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___auroraOverride;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_auroraOverride(::Enviro::EnviroAuroraQualitySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___auroraOverride = value;
}
constexpr ::Enviro::EnviroEffectsQualitySettings*& Enviro::EnviroQuality::__cordl_internal_get_effectsOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsOverride;
}
constexpr ::Enviro::EnviroEffectsQualitySettings* const& Enviro::EnviroQuality::__cordl_internal_get_effectsOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___effectsOverride;
}
constexpr void Enviro::EnviroQuality::__cordl_internal_set_effectsOverride(::Enviro::EnviroEffectsQualitySettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___effectsOverride = value;
}
inline void Enviro::EnviroQuality::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroQuality*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroQuality* Enviro::EnviroQuality::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroQuality*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroQuality::EnviroQuality()   {
}
