#pragma once
// IWYU pragma private; include "Enviro/EnviroConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnviroConfiguration)
namespace Enviro {
class EnviroAudioModule;
}
namespace Enviro {
class EnviroAuroraModule;
}
namespace Enviro {
class EnviroEffectsModule;
}
namespace Enviro {
class EnviroEnvironmentModule;
}
namespace Enviro {
class EnviroFlatCloudsModule;
}
namespace Enviro {
class EnviroFogModule;
}
namespace Enviro {
class EnviroLightingModule;
}
namespace Enviro {
class EnviroLightningModule;
}
namespace Enviro {
class EnviroQualityModule;
}
namespace Enviro {
class EnviroReflectionsModule;
}
namespace Enviro {
class EnviroSkyModule;
}
namespace Enviro {
class EnviroTimeModule;
}
namespace Enviro {
class EnviroVolumetricCloudsModule;
}
namespace Enviro {
class EnviroWeatherModule;
}
// Forward declare root types
namespace Enviro {
class EnviroConfiguration;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroConfiguration*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroConfiguration*, "Enviro", "EnviroConfiguration");
// Dependencies UnityEngine.ScriptableObject
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroConfiguration
class CORDL_TYPE EnviroConfiguration : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field Audio, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Audio, put=__cordl_internal_set_Audio)) ::UnityW<::Enviro::EnviroAudioModule>  Audio;

/// @brief Field Aurora, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Aurora, put=__cordl_internal_set_Aurora)) ::UnityW<::Enviro::EnviroAuroraModule>  Aurora;

/// @brief Field Effects, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Effects, put=__cordl_internal_set_Effects)) ::UnityW<::Enviro::EnviroEffectsModule>  Effects;

/// @brief Field Environment, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_Environment, put=__cordl_internal_set_Environment)) ::UnityW<::Enviro::EnviroEnvironmentModule>  Environment;

/// @brief Field Lightning, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Lightning, put=__cordl_internal_set_Lightning)) ::UnityW<::Enviro::EnviroLightningModule>  Lightning;

/// @brief Field Quality, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_Quality, put=__cordl_internal_set_Quality)) ::UnityW<::Enviro::EnviroQualityModule>  Quality;

/// @brief Field Sky, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sky, put=__cordl_internal_set_Sky)) ::UnityW<::Enviro::EnviroSkyModule>  Sky;

/// @brief Field Weather, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Weather, put=__cordl_internal_set_Weather)) ::UnityW<::Enviro::EnviroWeatherModule>  Weather;

/// @brief Field flatCloudModule, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_flatCloudModule, put=__cordl_internal_set_flatCloudModule)) ::UnityW<::Enviro::EnviroFlatCloudsModule>  flatCloudModule;

/// @brief Field fogModule, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_fogModule, put=__cordl_internal_set_fogModule)) ::UnityW<::Enviro::EnviroFogModule>  fogModule;

/// @brief Field lightingModule, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightingModule, put=__cordl_internal_set_lightingModule)) ::UnityW<::Enviro::EnviroLightingModule>  lightingModule;

/// @brief Field reflectionsModule, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_reflectionsModule, put=__cordl_internal_set_reflectionsModule)) ::UnityW<::Enviro::EnviroReflectionsModule>  reflectionsModule;

/// @brief Field timeModule, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeModule, put=__cordl_internal_set_timeModule)) ::UnityW<::Enviro::EnviroTimeModule>  timeModule;

/// @brief Field version, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::StringW  version;

/// @brief Field volumetricCloudModule, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumetricCloudModule, put=__cordl_internal_set_volumetricCloudModule)) ::UnityW<::Enviro::EnviroVolumetricCloudsModule>  volumetricCloudModule;

static inline ::Enviro::EnviroConfiguration* New_ctor() ;

constexpr ::UnityW<::Enviro::EnviroAudioModule> const& __cordl_internal_get_Audio() const;

constexpr ::UnityW<::Enviro::EnviroAudioModule>& __cordl_internal_get_Audio() ;

constexpr ::UnityW<::Enviro::EnviroAuroraModule> const& __cordl_internal_get_Aurora() const;

constexpr ::UnityW<::Enviro::EnviroAuroraModule>& __cordl_internal_get_Aurora() ;

constexpr ::UnityW<::Enviro::EnviroEffectsModule> const& __cordl_internal_get_Effects() const;

constexpr ::UnityW<::Enviro::EnviroEffectsModule>& __cordl_internal_get_Effects() ;

constexpr ::UnityW<::Enviro::EnviroEnvironmentModule> const& __cordl_internal_get_Environment() const;

constexpr ::UnityW<::Enviro::EnviroEnvironmentModule>& __cordl_internal_get_Environment() ;

constexpr ::UnityW<::Enviro::EnviroLightningModule> const& __cordl_internal_get_Lightning() const;

constexpr ::UnityW<::Enviro::EnviroLightningModule>& __cordl_internal_get_Lightning() ;

constexpr ::UnityW<::Enviro::EnviroQualityModule> const& __cordl_internal_get_Quality() const;

constexpr ::UnityW<::Enviro::EnviroQualityModule>& __cordl_internal_get_Quality() ;

constexpr ::UnityW<::Enviro::EnviroSkyModule> const& __cordl_internal_get_Sky() const;

constexpr ::UnityW<::Enviro::EnviroSkyModule>& __cordl_internal_get_Sky() ;

constexpr ::UnityW<::Enviro::EnviroWeatherModule> const& __cordl_internal_get_Weather() const;

constexpr ::UnityW<::Enviro::EnviroWeatherModule>& __cordl_internal_get_Weather() ;

constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule> const& __cordl_internal_get_flatCloudModule() const;

constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule>& __cordl_internal_get_flatCloudModule() ;

constexpr ::UnityW<::Enviro::EnviroFogModule> const& __cordl_internal_get_fogModule() const;

constexpr ::UnityW<::Enviro::EnviroFogModule>& __cordl_internal_get_fogModule() ;

constexpr ::UnityW<::Enviro::EnviroLightingModule> const& __cordl_internal_get_lightingModule() const;

constexpr ::UnityW<::Enviro::EnviroLightingModule>& __cordl_internal_get_lightingModule() ;

constexpr ::UnityW<::Enviro::EnviroReflectionsModule> const& __cordl_internal_get_reflectionsModule() const;

constexpr ::UnityW<::Enviro::EnviroReflectionsModule>& __cordl_internal_get_reflectionsModule() ;

constexpr ::UnityW<::Enviro::EnviroTimeModule> const& __cordl_internal_get_timeModule() const;

constexpr ::UnityW<::Enviro::EnviroTimeModule>& __cordl_internal_get_timeModule() ;

constexpr ::StringW const& __cordl_internal_get_version() const;

constexpr ::StringW& __cordl_internal_get_version() ;

constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule> const& __cordl_internal_get_volumetricCloudModule() const;

constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule>& __cordl_internal_get_volumetricCloudModule() ;

constexpr void __cordl_internal_set_Audio(::UnityW<::Enviro::EnviroAudioModule>  value) ;

constexpr void __cordl_internal_set_Aurora(::UnityW<::Enviro::EnviroAuroraModule>  value) ;

constexpr void __cordl_internal_set_Effects(::UnityW<::Enviro::EnviroEffectsModule>  value) ;

constexpr void __cordl_internal_set_Environment(::UnityW<::Enviro::EnviroEnvironmentModule>  value) ;

constexpr void __cordl_internal_set_Lightning(::UnityW<::Enviro::EnviroLightningModule>  value) ;

constexpr void __cordl_internal_set_Quality(::UnityW<::Enviro::EnviroQualityModule>  value) ;

constexpr void __cordl_internal_set_Sky(::UnityW<::Enviro::EnviroSkyModule>  value) ;

constexpr void __cordl_internal_set_Weather(::UnityW<::Enviro::EnviroWeatherModule>  value) ;

constexpr void __cordl_internal_set_flatCloudModule(::UnityW<::Enviro::EnviroFlatCloudsModule>  value) ;

constexpr void __cordl_internal_set_fogModule(::UnityW<::Enviro::EnviroFogModule>  value) ;

constexpr void __cordl_internal_set_lightingModule(::UnityW<::Enviro::EnviroLightingModule>  value) ;

constexpr void __cordl_internal_set_reflectionsModule(::UnityW<::Enviro::EnviroReflectionsModule>  value) ;

constexpr void __cordl_internal_set_timeModule(::UnityW<::Enviro::EnviroTimeModule>  value) ;

constexpr void __cordl_internal_set_version(::StringW  value) ;

constexpr void __cordl_internal_set_volumetricCloudModule(::UnityW<::Enviro::EnviroVolumetricCloudsModule>  value) ;

/// @brief Method .ctor, addr 0x1805fe160, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroConfiguration", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroConfiguration(EnviroConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroConfiguration", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroConfiguration(EnviroConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18404};

/// @brief Field version, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___version;

/// @brief Field timeModule, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroTimeModule>  ___timeModule;

/// @brief Field lightingModule, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroLightingModule>  ___lightingModule;

/// @brief Field reflectionsModule, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionsModule>  ___reflectionsModule;

/// @brief Field Sky, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroSkyModule>  ___Sky;

/// @brief Field fogModule, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroFogModule>  ___fogModule;

/// @brief Field volumetricCloudModule, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroVolumetricCloudsModule>  ___volumetricCloudModule;

/// @brief Field flatCloudModule, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroFlatCloudsModule>  ___flatCloudModule;

/// @brief Field Weather, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroWeatherModule>  ___Weather;

/// @brief Field Aurora, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroAuroraModule>  ___Aurora;

/// @brief Field Audio, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroAudioModule>  ___Audio;

/// @brief Field Effects, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroEffectsModule>  ___Effects;

/// @brief Field Lightning, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroLightningModule>  ___Lightning;

/// @brief Field Quality, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroQualityModule>  ___Quality;

/// @brief Field Environment, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroEnvironmentModule>  ___Environment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroConfiguration, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___timeModule) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___lightingModule) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___reflectionsModule) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___Sky) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___fogModule) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___volumetricCloudModule) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___flatCloudModule) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___Weather) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___Aurora) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___Audio) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___Effects) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___Lightning) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___Quality) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroConfiguration, ___Environment) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroConfiguration) == 0x90, "Size mismatch!");

} // namespace end def Enviro
