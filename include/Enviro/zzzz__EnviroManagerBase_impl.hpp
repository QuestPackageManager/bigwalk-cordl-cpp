#pragma once
// IWYU pragma private; include "Enviro/EnviroManagerBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Enviro/zzzz__EnviroManagerBase_def.hpp"
#include "Enviro/zzzz__EnviroAudioModule_def.hpp"
#include "Enviro/zzzz__EnviroAuroraModule_def.hpp"
#include "Enviro/zzzz__EnviroConfiguration_def.hpp"
#include "Enviro/zzzz__EnviroEffectsModule_def.hpp"
#include "Enviro/zzzz__EnviroEnvironmentModule_def.hpp"
#include "Enviro/zzzz__EnviroFlatCloudsModule_def.hpp"
#include "Enviro/zzzz__EnviroFogModule_def.hpp"
#include "Enviro/zzzz__EnviroLightingModule_def.hpp"
#include "Enviro/zzzz__EnviroLightningModule_def.hpp"
#include "Enviro/zzzz__EnviroManagerBase_def.hpp"
#include "Enviro/zzzz__EnviroQualityModule_def.hpp"
#include "Enviro/zzzz__EnviroReflectionsModule_def.hpp"
#include "Enviro/zzzz__EnviroSkyModule_def.hpp"
#include "Enviro/zzzz__EnviroTimeModule_def.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudsModule_def.hpp"
#include "Enviro/zzzz__EnviroWeatherModule_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroManagerBase_ModuleType::EnviroManagerBase_ModuleType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManagerBase_ModuleType::EnviroManagerBase_ModuleType()   {
}
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Time{static_cast<int32_t>(0x0)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Lighting{static_cast<int32_t>(0x1)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Reflections{static_cast<int32_t>(0x2)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Sky{static_cast<int32_t>(0x3)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Fog{static_cast<int32_t>(0x4)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::VolumetricClouds{static_cast<int32_t>(0x5)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::FlatClouds{static_cast<int32_t>(0x6)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Weather{static_cast<int32_t>(0x7)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Aurora{static_cast<int32_t>(0x8)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Effects{static_cast<int32_t>(0x9)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Lightning{static_cast<int32_t>(0xa)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Environment{static_cast<int32_t>(0xb)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Audio{static_cast<int32_t>(0xc)};
constexpr ::Enviro::EnviroManagerBase_ModuleType  Enviro::EnviroManagerBase_ModuleType::Quality{static_cast<int32_t>(0xd)};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::get_version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180602860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.get_defaultConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::get_defaultConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180602850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"get_defaultConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.EnableModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::EnableModules)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x180600c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"EnableModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.DisableModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::DisableModules)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x180600990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"DisableModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.DisableAndRemoveModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::DisableAndRemoveModules)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1806005b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"DisableAndRemoveModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.StartModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::StartModules)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x180602170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"StartModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.UpdateModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::UpdateModules)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x180602560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"UpdateModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.SaveAllModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::SaveAllModules)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x180601c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"SaveAllModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.LoadAllModules
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::LoadAllModules)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x180600f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"LoadAllModules", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.LoadConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::LoadConfiguration)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1806011b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"LoadConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.AddModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)(::Enviro::EnviroManagerBase_ModuleType)>(&::Enviro::EnviroManagerBase::AddModule)> {
  constexpr static std::size_t size = 0xe40;
  constexpr static std::size_t addrs = 0x1805ff770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"AddModule", {}, {::i2c::type_of<::Enviro::EnviroManagerBase_ModuleType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.RemoveModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)(::Enviro::EnviroManagerBase_ModuleType)>(&::Enviro::EnviroManagerBase::RemoveModule)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x180601400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"RemoveModule", {}, {::i2c::type_of<::Enviro::EnviroManagerBase_ModuleType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase.UpdateConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)(::StringW)>(&::Enviro::EnviroManagerBase::UpdateConfiguration)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180602470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"UpdateConfiguration", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroManagerBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroManagerBase::*)()>(&::Enviro::EnviroManagerBase::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Enviro::EnviroConfiguration>& Enviro::EnviroManagerBase::__cordl_internal_get_configuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configuration;
}
constexpr ::UnityW<::Enviro::EnviroConfiguration> const& Enviro::EnviroManagerBase::__cordl_internal_get_configuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___configuration;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_configuration(::UnityW<::Enviro::EnviroConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___configuration = value;
}
constexpr ::UnityW<::Enviro::EnviroConfiguration>& Enviro::EnviroManagerBase::__cordl_internal_get_lastConfiguration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastConfiguration;
}
constexpr ::UnityW<::Enviro::EnviroConfiguration> const& Enviro::EnviroManagerBase::__cordl_internal_get_lastConfiguration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastConfiguration;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_lastConfiguration(::UnityW<::Enviro::EnviroConfiguration>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastConfiguration = value;
}
constexpr ::UnityW<::Enviro::EnviroTimeModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Time;
}
constexpr ::UnityW<::Enviro::EnviroTimeModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Time;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Time(::UnityW<::Enviro::EnviroTimeModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Time = value;
}
constexpr ::UnityW<::Enviro::EnviroLightingModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Lighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lighting;
}
constexpr ::UnityW<::Enviro::EnviroLightingModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Lighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lighting;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Lighting(::UnityW<::Enviro::EnviroLightingModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lighting = value;
}
constexpr ::UnityW<::Enviro::EnviroReflectionsModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Reflections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reflections;
}
constexpr ::UnityW<::Enviro::EnviroReflectionsModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Reflections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Reflections;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Reflections(::UnityW<::Enviro::EnviroReflectionsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Reflections = value;
}
constexpr ::UnityW<::Enviro::EnviroSkyModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Sky()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sky;
}
constexpr ::UnityW<::Enviro::EnviroSkyModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Sky() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sky;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Sky(::UnityW<::Enviro::EnviroSkyModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sky = value;
}
constexpr ::UnityW<::Enviro::EnviroFogModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Fog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Fog;
}
constexpr ::UnityW<::Enviro::EnviroFogModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Fog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Fog;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Fog(::UnityW<::Enviro::EnviroFogModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Fog = value;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule>& Enviro::EnviroManagerBase::__cordl_internal_get_VolumetricClouds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumetricClouds;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_VolumetricClouds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VolumetricClouds;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_VolumetricClouds(::UnityW<::Enviro::EnviroVolumetricCloudsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VolumetricClouds = value;
}
constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule>& Enviro::EnviroManagerBase::__cordl_internal_get_FlatClouds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlatClouds;
}
constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_FlatClouds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FlatClouds;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_FlatClouds(::UnityW<::Enviro::EnviroFlatCloudsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FlatClouds = value;
}
constexpr ::UnityW<::Enviro::EnviroWeatherModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Weather()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weather;
}
constexpr ::UnityW<::Enviro::EnviroWeatherModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Weather() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weather;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Weather(::UnityW<::Enviro::EnviroWeatherModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weather = value;
}
constexpr ::UnityW<::Enviro::EnviroAuroraModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Aurora()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Aurora;
}
constexpr ::UnityW<::Enviro::EnviroAuroraModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Aurora() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Aurora;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Aurora(::UnityW<::Enviro::EnviroAuroraModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Aurora = value;
}
constexpr ::UnityW<::Enviro::EnviroAudioModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Audio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Audio;
}
constexpr ::UnityW<::Enviro::EnviroAudioModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Audio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Audio;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Audio(::UnityW<::Enviro::EnviroAudioModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Audio = value;
}
constexpr ::UnityW<::Enviro::EnviroEffectsModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Effects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effects;
}
constexpr ::UnityW<::Enviro::EnviroEffectsModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Effects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Effects;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Effects(::UnityW<::Enviro::EnviroEffectsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Effects = value;
}
constexpr ::UnityW<::Enviro::EnviroLightningModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Lightning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lightning;
}
constexpr ::UnityW<::Enviro::EnviroLightningModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Lightning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lightning;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Lightning(::UnityW<::Enviro::EnviroLightningModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lightning = value;
}
constexpr ::UnityW<::Enviro::EnviroQualityModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quality;
}
constexpr ::UnityW<::Enviro::EnviroQualityModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quality;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Quality(::UnityW<::Enviro::EnviroQualityModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Quality = value;
}
constexpr ::UnityW<::Enviro::EnviroEnvironmentModule>& Enviro::EnviroManagerBase::__cordl_internal_get_Environment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Environment;
}
constexpr ::UnityW<::Enviro::EnviroEnvironmentModule> const& Enviro::EnviroManagerBase::__cordl_internal_get_Environment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Environment;
}
constexpr void Enviro::EnviroManagerBase::__cordl_internal_set_Environment(::UnityW<::Enviro::EnviroEnvironmentModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Environment = value;
}
inline ::StringW Enviro::EnviroManagerBase::get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Enviro::EnviroManagerBase::get_defaultConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"get_defaultConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Enviro::EnviroManagerBase::EnableModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"EnableModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManagerBase::DisableModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"DisableModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManagerBase::DisableAndRemoveModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"DisableAndRemoveModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManagerBase::StartModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"StartModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManagerBase::UpdateModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"UpdateModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManagerBase::SaveAllModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"SaveAllModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManagerBase::LoadAllModules()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"LoadAllModules", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManagerBase::LoadConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"LoadConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroManagerBase::AddModule(::Enviro::EnviroManagerBase_ModuleType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"AddModule", {}, {::i2c::type_of<::Enviro::EnviroManagerBase_ModuleType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Enviro::EnviroManagerBase::RemoveModule(::Enviro::EnviroManagerBase_ModuleType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"RemoveModule", {}, {::i2c::type_of<::Enviro::EnviroManagerBase_ModuleType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Enviro::EnviroManagerBase::UpdateConfiguration(::StringW  fromVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {"UpdateConfiguration", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromVersion);
}
inline void Enviro::EnviroManagerBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroManagerBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroManagerBase* Enviro::EnviroManagerBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroManagerBase*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroManagerBase::EnviroManagerBase()   {
}
