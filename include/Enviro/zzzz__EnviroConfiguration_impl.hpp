#pragma once
// IWYU pragma private; include "Enviro/EnviroConfiguration.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Enviro/zzzz__EnviroConfiguration_def.hpp"
#include "Enviro/zzzz__EnviroAudioModule_def.hpp"
#include "Enviro/zzzz__EnviroAuroraModule_def.hpp"
#include "Enviro/zzzz__EnviroEffectsModule_def.hpp"
#include "Enviro/zzzz__EnviroEnvironmentModule_def.hpp"
#include "Enviro/zzzz__EnviroFlatCloudsModule_def.hpp"
#include "Enviro/zzzz__EnviroFogModule_def.hpp"
#include "Enviro/zzzz__EnviroLightingModule_def.hpp"
#include "Enviro/zzzz__EnviroLightningModule_def.hpp"
#include "Enviro/zzzz__EnviroQualityModule_def.hpp"
#include "Enviro/zzzz__EnviroReflectionsModule_def.hpp"
#include "Enviro/zzzz__EnviroSkyModule_def.hpp"
#include "Enviro/zzzz__EnviroTimeModule_def.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudsModule_def.hpp"
#include "Enviro/zzzz__EnviroWeatherModule_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroConfiguration._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroConfiguration::*)()>(&::Enviro::EnviroConfiguration::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805fe160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Enviro::EnviroConfiguration::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr ::StringW const& Enviro::EnviroConfiguration::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_version(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::UnityW<::Enviro::EnviroTimeModule>& Enviro::EnviroConfiguration::__cordl_internal_get_timeModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeModule;
}
constexpr ::UnityW<::Enviro::EnviroTimeModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_timeModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeModule;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_timeModule(::UnityW<::Enviro::EnviroTimeModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeModule = value;
}
constexpr ::UnityW<::Enviro::EnviroLightingModule>& Enviro::EnviroConfiguration::__cordl_internal_get_lightingModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingModule;
}
constexpr ::UnityW<::Enviro::EnviroLightingModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_lightingModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightingModule;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_lightingModule(::UnityW<::Enviro::EnviroLightingModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightingModule = value;
}
constexpr ::UnityW<::Enviro::EnviroReflectionsModule>& Enviro::EnviroConfiguration::__cordl_internal_get_reflectionsModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectionsModule;
}
constexpr ::UnityW<::Enviro::EnviroReflectionsModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_reflectionsModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectionsModule;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_reflectionsModule(::UnityW<::Enviro::EnviroReflectionsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reflectionsModule = value;
}
constexpr ::UnityW<::Enviro::EnviroSkyModule>& Enviro::EnviroConfiguration::__cordl_internal_get_Sky()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sky;
}
constexpr ::UnityW<::Enviro::EnviroSkyModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_Sky() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sky;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_Sky(::UnityW<::Enviro::EnviroSkyModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sky = value;
}
constexpr ::UnityW<::Enviro::EnviroFogModule>& Enviro::EnviroConfiguration::__cordl_internal_get_fogModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogModule;
}
constexpr ::UnityW<::Enviro::EnviroFogModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_fogModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogModule;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_fogModule(::UnityW<::Enviro::EnviroFogModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogModule = value;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule>& Enviro::EnviroConfiguration::__cordl_internal_get_volumetricCloudModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudModule;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_volumetricCloudModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricCloudModule;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_volumetricCloudModule(::UnityW<::Enviro::EnviroVolumetricCloudsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricCloudModule = value;
}
constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule>& Enviro::EnviroConfiguration::__cordl_internal_get_flatCloudModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudModule;
}
constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_flatCloudModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flatCloudModule;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_flatCloudModule(::UnityW<::Enviro::EnviroFlatCloudsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flatCloudModule = value;
}
constexpr ::UnityW<::Enviro::EnviroWeatherModule>& Enviro::EnviroConfiguration::__cordl_internal_get_Weather()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weather;
}
constexpr ::UnityW<::Enviro::EnviroWeatherModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_Weather() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weather;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_Weather(::UnityW<::Enviro::EnviroWeatherModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weather = value;
}
constexpr ::UnityW<::Enviro::EnviroAuroraModule>& Enviro::EnviroConfiguration::__cordl_internal_get_Aurora()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Aurora;
}
constexpr ::UnityW<::Enviro::EnviroAuroraModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_Aurora() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Aurora;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_Aurora(::UnityW<::Enviro::EnviroAuroraModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Aurora = value;
}
constexpr ::UnityW<::Enviro::EnviroAudioModule>& Enviro::EnviroConfiguration::__cordl_internal_get_Audio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Audio;
}
constexpr ::UnityW<::Enviro::EnviroAudioModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_Audio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Audio;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_Audio(::UnityW<::Enviro::EnviroAudioModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Audio = value;
}
constexpr ::UnityW<::Enviro::EnviroEffectsModule>& Enviro::EnviroConfiguration::__cordl_internal_get_Effects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effects;
}
constexpr ::UnityW<::Enviro::EnviroEffectsModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_Effects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effects;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_Effects(::UnityW<::Enviro::EnviroEffectsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Effects = value;
}
constexpr ::UnityW<::Enviro::EnviroLightningModule>& Enviro::EnviroConfiguration::__cordl_internal_get_Lightning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lightning;
}
constexpr ::UnityW<::Enviro::EnviroLightningModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_Lightning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lightning;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_Lightning(::UnityW<::Enviro::EnviroLightningModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lightning = value;
}
constexpr ::UnityW<::Enviro::EnviroQualityModule>& Enviro::EnviroConfiguration::__cordl_internal_get_Quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quality;
}
constexpr ::UnityW<::Enviro::EnviroQualityModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_Quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quality;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_Quality(::UnityW<::Enviro::EnviroQualityModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Quality = value;
}
constexpr ::UnityW<::Enviro::EnviroEnvironmentModule>& Enviro::EnviroConfiguration::__cordl_internal_get_Environment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Environment;
}
constexpr ::UnityW<::Enviro::EnviroEnvironmentModule> const& Enviro::EnviroConfiguration::__cordl_internal_get_Environment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Environment;
}
constexpr void Enviro::EnviroConfiguration::__cordl_internal_set_Environment(::UnityW<::Enviro::EnviroEnvironmentModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Environment = value;
}
inline void Enviro::EnviroConfiguration::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroConfiguration*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroConfiguration* Enviro::EnviroConfiguration::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroConfiguration*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroConfiguration::EnviroConfiguration()   {
}
