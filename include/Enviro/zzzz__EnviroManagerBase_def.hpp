#pragma once
// IWYU pragma private; include "Enviro/EnviroManagerBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroManagerBase)
namespace Enviro {
class EnviroAudioModule;
}
namespace Enviro {
class EnviroAuroraModule;
}
namespace Enviro {
class EnviroConfiguration;
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
struct EnviroManagerBase_ModuleType;
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
struct EnviroManagerBase_ModuleType;
}
namespace Enviro {
class EnviroManagerBase;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroManagerBase_ModuleType);
MARK_REF_T(::Enviro::EnviroManagerBase*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManagerBase_ModuleType, "Enviro", "EnviroManagerBase/ModuleType");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroManagerBase*, "Enviro", "EnviroManagerBase");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroManagerBase/ModuleType
struct CORDL_TYPE EnviroManagerBase_ModuleType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroManagerBase_ModuleType_Unwrapped
enum struct __EnviroManagerBase_ModuleType_Unwrapped : int32_t {
__E_Time = static_cast<int32_t>(0x0),
__E_Lighting = static_cast<int32_t>(0x1),
__E_Reflections = static_cast<int32_t>(0x2),
__E_Sky = static_cast<int32_t>(0x3),
__E_Fog = static_cast<int32_t>(0x4),
__E_VolumetricClouds = static_cast<int32_t>(0x5),
__E_FlatClouds = static_cast<int32_t>(0x6),
__E_Weather = static_cast<int32_t>(0x7),
__E_Aurora = static_cast<int32_t>(0x8),
__E_Effects = static_cast<int32_t>(0x9),
__E_Lightning = static_cast<int32_t>(0xa),
__E_Environment = static_cast<int32_t>(0xb),
__E_Audio = static_cast<int32_t>(0xc),
__E_Quality = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroManagerBase_ModuleType_Unwrapped () const noexcept {
return static_cast<__EnviroManagerBase_ModuleType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroManagerBase_ModuleType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroManagerBase_ModuleType(int32_t  value__) noexcept;

/// @brief Field Audio value: I32(12)
static ::Enviro::EnviroManagerBase_ModuleType const Audio;

/// @brief Field Aurora value: I32(8)
static ::Enviro::EnviroManagerBase_ModuleType const Aurora;

/// @brief Field Effects value: I32(9)
static ::Enviro::EnviroManagerBase_ModuleType const Effects;

/// @brief Field Environment value: I32(11)
static ::Enviro::EnviroManagerBase_ModuleType const Environment;

/// @brief Field FlatClouds value: I32(6)
static ::Enviro::EnviroManagerBase_ModuleType const FlatClouds;

/// @brief Field Fog value: I32(4)
static ::Enviro::EnviroManagerBase_ModuleType const Fog;

/// @brief Field Lighting value: I32(1)
static ::Enviro::EnviroManagerBase_ModuleType const Lighting;

/// @brief Field Lightning value: I32(10)
static ::Enviro::EnviroManagerBase_ModuleType const Lightning;

/// @brief Field Quality value: I32(13)
static ::Enviro::EnviroManagerBase_ModuleType const Quality;

/// @brief Field Reflections value: I32(2)
static ::Enviro::EnviroManagerBase_ModuleType const Reflections;

/// @brief Field Sky value: I32(3)
static ::Enviro::EnviroManagerBase_ModuleType const Sky;

/// @brief Field Time value: I32(0)
static ::Enviro::EnviroManagerBase_ModuleType const Time;

/// @brief Field VolumetricClouds value: I32(5)
static ::Enviro::EnviroManagerBase_ModuleType const VolumetricClouds;

/// @brief Field Weather value: I32(7)
static ::Enviro::EnviroManagerBase_ModuleType const Weather;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18422};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroManagerBase_ModuleType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroManagerBase_ModuleType) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies UnityEngine.MonoBehaviour
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroManagerBase
class CORDL_TYPE EnviroManagerBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ModuleType = ::Enviro::EnviroManagerBase_ModuleType;

/// @brief Field Audio, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Audio, put=__cordl_internal_set_Audio)) ::UnityW<::Enviro::EnviroAudioModule>  Audio;

/// @brief Field Aurora, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Aurora, put=__cordl_internal_set_Aurora)) ::UnityW<::Enviro::EnviroAuroraModule>  Aurora;

/// @brief Field Effects, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_Effects, put=__cordl_internal_set_Effects)) ::UnityW<::Enviro::EnviroEffectsModule>  Effects;

/// @brief Field Environment, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_Environment, put=__cordl_internal_set_Environment)) ::UnityW<::Enviro::EnviroEnvironmentModule>  Environment;

/// @brief Field FlatClouds, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_FlatClouds, put=__cordl_internal_set_FlatClouds)) ::UnityW<::Enviro::EnviroFlatCloudsModule>  FlatClouds;

/// @brief Field Fog, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Fog, put=__cordl_internal_set_Fog)) ::UnityW<::Enviro::EnviroFogModule>  Fog;

/// @brief Field Lighting, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Lighting, put=__cordl_internal_set_Lighting)) ::UnityW<::Enviro::EnviroLightingModule>  Lighting;

/// @brief Field Lightning, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_Lightning, put=__cordl_internal_set_Lightning)) ::UnityW<::Enviro::EnviroLightningModule>  Lightning;

/// @brief Field Quality, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_Quality, put=__cordl_internal_set_Quality)) ::UnityW<::Enviro::EnviroQualityModule>  Quality;

/// @brief Field Reflections, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Reflections, put=__cordl_internal_set_Reflections)) ::UnityW<::Enviro::EnviroReflectionsModule>  Reflections;

/// @brief Field Sky, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Sky, put=__cordl_internal_set_Sky)) ::UnityW<::Enviro::EnviroSkyModule>  Sky;

/// @brief Field Time, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Time, put=__cordl_internal_set_Time)) ::UnityW<::Enviro::EnviroTimeModule>  Time;

/// @brief Field VolumetricClouds, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_VolumetricClouds, put=__cordl_internal_set_VolumetricClouds)) ::UnityW<::Enviro::EnviroVolumetricCloudsModule>  VolumetricClouds;

/// @brief Field Weather, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_Weather, put=__cordl_internal_set_Weather)) ::UnityW<::Enviro::EnviroWeatherModule>  Weather;

/// @brief Field configuration, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_configuration, put=__cordl_internal_set_configuration)) ::UnityW<::Enviro::EnviroConfiguration>  configuration;

 __declspec(property(get=get_defaultConfig)) ::StringW  defaultConfig;

/// @brief Field lastConfiguration, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastConfiguration, put=__cordl_internal_set_lastConfiguration)) ::UnityW<::Enviro::EnviroConfiguration>  lastConfiguration;

 __declspec(property(get=get_version)) ::StringW  version;

/// @brief Method AddModule, addr 0x1805ff770, size 0xe40, virtual false, abstract: false, final false
inline void AddModule(::Enviro::EnviroManagerBase_ModuleType  type) ;

/// @brief Method DisableAndRemoveModules, addr 0x1806005b0, size 0x3e0, virtual false, abstract: false, final false
inline void DisableAndRemoveModules() ;

/// @brief Method DisableModules, addr 0x180600990, size 0x2f0, virtual false, abstract: false, final false
inline void DisableModules() ;

/// @brief Method EnableModules, addr 0x180600c80, size 0x2f0, virtual false, abstract: false, final false
inline void EnableModules() ;

/// @brief Method LoadAllModules, addr 0x180600f70, size 0x240, virtual false, abstract: false, final false
inline void LoadAllModules() ;

/// @brief Method LoadConfiguration, addr 0x1806011b0, size 0x250, virtual false, abstract: false, final false
inline void LoadConfiguration() ;

static inline ::Enviro::EnviroManagerBase* New_ctor() ;

/// @brief Method RemoveModule, addr 0x180601400, size 0x890, virtual false, abstract: false, final false
inline void RemoveModule(::Enviro::EnviroManagerBase_ModuleType  type) ;

/// @brief Method SaveAllModules, addr 0x180601c90, size 0x4e0, virtual false, abstract: false, final false
inline void SaveAllModules() ;

/// @brief Method StartModules, addr 0x180602170, size 0x300, virtual false, abstract: false, final false
inline void StartModules() ;

/// @brief Method UpdateConfiguration, addr 0x180602470, size 0xf0, virtual false, abstract: false, final false
inline void UpdateConfiguration(::StringW  fromVersion) ;

/// @brief Method UpdateModules, addr 0x180602560, size 0x2f0, virtual false, abstract: false, final false
inline void UpdateModules() ;

constexpr ::UnityW<::Enviro::EnviroAudioModule> const& __cordl_internal_get_Audio() const;

constexpr ::UnityW<::Enviro::EnviroAudioModule>& __cordl_internal_get_Audio() ;

constexpr ::UnityW<::Enviro::EnviroAuroraModule> const& __cordl_internal_get_Aurora() const;

constexpr ::UnityW<::Enviro::EnviroAuroraModule>& __cordl_internal_get_Aurora() ;

constexpr ::UnityW<::Enviro::EnviroEffectsModule> const& __cordl_internal_get_Effects() const;

constexpr ::UnityW<::Enviro::EnviroEffectsModule>& __cordl_internal_get_Effects() ;

constexpr ::UnityW<::Enviro::EnviroEnvironmentModule> const& __cordl_internal_get_Environment() const;

constexpr ::UnityW<::Enviro::EnviroEnvironmentModule>& __cordl_internal_get_Environment() ;

constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule> const& __cordl_internal_get_FlatClouds() const;

constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule>& __cordl_internal_get_FlatClouds() ;

constexpr ::UnityW<::Enviro::EnviroFogModule> const& __cordl_internal_get_Fog() const;

constexpr ::UnityW<::Enviro::EnviroFogModule>& __cordl_internal_get_Fog() ;

constexpr ::UnityW<::Enviro::EnviroLightingModule> const& __cordl_internal_get_Lighting() const;

constexpr ::UnityW<::Enviro::EnviroLightingModule>& __cordl_internal_get_Lighting() ;

constexpr ::UnityW<::Enviro::EnviroLightningModule> const& __cordl_internal_get_Lightning() const;

constexpr ::UnityW<::Enviro::EnviroLightningModule>& __cordl_internal_get_Lightning() ;

constexpr ::UnityW<::Enviro::EnviroQualityModule> const& __cordl_internal_get_Quality() const;

constexpr ::UnityW<::Enviro::EnviroQualityModule>& __cordl_internal_get_Quality() ;

constexpr ::UnityW<::Enviro::EnviroReflectionsModule> const& __cordl_internal_get_Reflections() const;

constexpr ::UnityW<::Enviro::EnviroReflectionsModule>& __cordl_internal_get_Reflections() ;

constexpr ::UnityW<::Enviro::EnviroSkyModule> const& __cordl_internal_get_Sky() const;

constexpr ::UnityW<::Enviro::EnviroSkyModule>& __cordl_internal_get_Sky() ;

constexpr ::UnityW<::Enviro::EnviroTimeModule> const& __cordl_internal_get_Time() const;

constexpr ::UnityW<::Enviro::EnviroTimeModule>& __cordl_internal_get_Time() ;

constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule> const& __cordl_internal_get_VolumetricClouds() const;

constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule>& __cordl_internal_get_VolumetricClouds() ;

constexpr ::UnityW<::Enviro::EnviroWeatherModule> const& __cordl_internal_get_Weather() const;

constexpr ::UnityW<::Enviro::EnviroWeatherModule>& __cordl_internal_get_Weather() ;

constexpr ::UnityW<::Enviro::EnviroConfiguration> const& __cordl_internal_get_configuration() const;

constexpr ::UnityW<::Enviro::EnviroConfiguration>& __cordl_internal_get_configuration() ;

constexpr ::UnityW<::Enviro::EnviroConfiguration> const& __cordl_internal_get_lastConfiguration() const;

constexpr ::UnityW<::Enviro::EnviroConfiguration>& __cordl_internal_get_lastConfiguration() ;

constexpr void __cordl_internal_set_Audio(::UnityW<::Enviro::EnviroAudioModule>  value) ;

constexpr void __cordl_internal_set_Aurora(::UnityW<::Enviro::EnviroAuroraModule>  value) ;

constexpr void __cordl_internal_set_Effects(::UnityW<::Enviro::EnviroEffectsModule>  value) ;

constexpr void __cordl_internal_set_Environment(::UnityW<::Enviro::EnviroEnvironmentModule>  value) ;

constexpr void __cordl_internal_set_FlatClouds(::UnityW<::Enviro::EnviroFlatCloudsModule>  value) ;

constexpr void __cordl_internal_set_Fog(::UnityW<::Enviro::EnviroFogModule>  value) ;

constexpr void __cordl_internal_set_Lighting(::UnityW<::Enviro::EnviroLightingModule>  value) ;

constexpr void __cordl_internal_set_Lightning(::UnityW<::Enviro::EnviroLightningModule>  value) ;

constexpr void __cordl_internal_set_Quality(::UnityW<::Enviro::EnviroQualityModule>  value) ;

constexpr void __cordl_internal_set_Reflections(::UnityW<::Enviro::EnviroReflectionsModule>  value) ;

constexpr void __cordl_internal_set_Sky(::UnityW<::Enviro::EnviroSkyModule>  value) ;

constexpr void __cordl_internal_set_Time(::UnityW<::Enviro::EnviroTimeModule>  value) ;

constexpr void __cordl_internal_set_VolumetricClouds(::UnityW<::Enviro::EnviroVolumetricCloudsModule>  value) ;

constexpr void __cordl_internal_set_Weather(::UnityW<::Enviro::EnviroWeatherModule>  value) ;

constexpr void __cordl_internal_set_configuration(::UnityW<::Enviro::EnviroConfiguration>  value) ;

constexpr void __cordl_internal_set_lastConfiguration(::UnityW<::Enviro::EnviroConfiguration>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_defaultConfig, addr 0x180602850, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_defaultConfig() ;

/// @brief Method get_version, addr 0x180602860, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroManagerBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroManagerBase", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroManagerBase(EnviroManagerBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroManagerBase", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroManagerBase(EnviroManagerBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18423};

/// @brief Field configuration, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroConfiguration>  ___configuration;

/// @brief Field lastConfiguration, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroConfiguration>  ___lastConfiguration;

/// @brief Field Time, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroTimeModule>  ___Time;

/// @brief Field Lighting, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroLightingModule>  ___Lighting;

/// @brief Field Reflections, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroReflectionsModule>  ___Reflections;

/// @brief Field Sky, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroSkyModule>  ___Sky;

/// @brief Field Fog, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroFogModule>  ___Fog;

/// @brief Field VolumetricClouds, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroVolumetricCloudsModule>  ___VolumetricClouds;

/// @brief Field FlatClouds, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroFlatCloudsModule>  ___FlatClouds;

/// @brief Field Weather, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroWeatherModule>  ___Weather;

/// @brief Field Aurora, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroAuroraModule>  ___Aurora;

/// @brief Field Audio, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroAudioModule>  ___Audio;

/// @brief Field Effects, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroEffectsModule>  ___Effects;

/// @brief Field Lightning, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroLightningModule>  ___Lightning;

/// @brief Field Quality, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroQualityModule>  ___Quality;

/// @brief Field Environment, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroEnvironmentModule>  ___Environment;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroManagerBase, ___configuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___lastConfiguration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Time) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Lighting) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Reflections) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Sky) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Fog) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___VolumetricClouds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___FlatClouds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Weather) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Aurora) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Audio) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Effects) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Lightning) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Quality) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroManagerBase, ___Environment) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroManagerBase) == 0xa0, "Size mismatch!");

} // namespace end def Enviro
