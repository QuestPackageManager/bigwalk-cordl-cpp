#pragma once
// IWYU pragma private; include "Enviro/EnviroEnvironmentModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroEnvironmentModule)
namespace Enviro {
struct EnviroEnvironment_Seasons;
}
namespace Enviro {
class EnviroEnvironment;
}
// Forward declare root types
namespace Enviro {
class EnviroEnvironmentModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroEnvironmentModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEnvironmentModule*, "Enviro", "EnviroEnvironmentModule");
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEnvironmentModule
class CORDL_TYPE EnviroEnvironmentModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroEnvironment*  Settings;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroEnvironmentModule>  preset;

/// @brief Field showSeasonControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSeasonControls, put=__cordl_internal_set_showSeasonControls)) bool  showSeasonControls;

/// @brief Field showTemperatureControls, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_showTemperatureControls, put=__cordl_internal_set_showTemperatureControls)) bool  showTemperatureControls;

/// @brief Field showWeatherStateControls, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_showWeatherStateControls, put=__cordl_internal_set_showWeatherStateControls)) bool  showWeatherStateControls;

/// @brief Field showWindControls, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_showWindControls, put=__cordl_internal_set_showWindControls)) bool  showWindControls;

/// @brief Method ChangeSeason, addr 0x18060cf70, size 0x60, virtual false, abstract: false, final false
inline void ChangeSeason(::Enviro::EnviroEnvironment_Seasons  season) ;

/// @brief Method CreateWindZone, addr 0x18060cfd0, size 0x130, virtual false, abstract: false, final false
inline void CreateWindZone() ;

/// @brief Method Disable, addr 0x18060d100, size 0x90, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x18060d190, size 0x150, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method LoadModuleValues, addr 0x18060d2e0, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroEnvironmentModule* New_ctor() ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x18060d350, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroEnvironmentModule*  _cordl_module) ;

/// @brief Method UpdateModule, addr 0x18060d3a0, size 0x220, virtual true, abstract: false, final false
inline void UpdateModule() ;

/// @brief Method UpdateSeason, addr 0x18060d5c0, size 0x190, virtual false, abstract: false, final false
inline void UpdateSeason() ;

/// @brief Method UpdateTemperature, addr 0x18060d750, size 0x130, virtual false, abstract: false, final false
inline void UpdateTemperature(float_t  timeOfDay) ;

/// @brief Method UpdateWeatherState, addr 0x18060d880, size 0x220, virtual false, abstract: false, final false
inline void UpdateWeatherState() ;

/// @brief Method UpdateWindZone, addr 0x18060daa0, size 0x170, virtual false, abstract: false, final false
inline void UpdateWindZone() ;

constexpr ::Enviro::EnviroEnvironment* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroEnvironment*& __cordl_internal_get_Settings() ;

constexpr ::UnityW<::Enviro::EnviroEnvironmentModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroEnvironmentModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showSeasonControls() const;

constexpr bool& __cordl_internal_get_showSeasonControls() ;

constexpr bool const& __cordl_internal_get_showTemperatureControls() const;

constexpr bool& __cordl_internal_get_showTemperatureControls() ;

constexpr bool const& __cordl_internal_get_showWeatherStateControls() const;

constexpr bool& __cordl_internal_get_showWeatherStateControls() ;

constexpr bool const& __cordl_internal_get_showWindControls() const;

constexpr bool& __cordl_internal_get_showWindControls() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroEnvironment*  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroEnvironmentModule>  value) ;

constexpr void __cordl_internal_set_showSeasonControls(bool  value) ;

constexpr void __cordl_internal_set_showTemperatureControls(bool  value) ;

constexpr void __cordl_internal_set_showWeatherStateControls(bool  value) ;

constexpr void __cordl_internal_set_showWindControls(bool  value) ;

/// @brief Method .ctor, addr 0x18060c360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEnvironmentModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEnvironmentModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEnvironmentModule(EnviroEnvironmentModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEnvironmentModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEnvironmentModule(EnviroEnvironmentModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18448};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroEnvironment*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroEnvironmentModule>  ___preset;

/// @brief Field showSeasonControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showSeasonControls;

/// @brief Field showTemperatureControls, offset: 0x31, size: 0x1, def value: None
 bool  ___showTemperatureControls;

/// @brief Field showWeatherStateControls, offset: 0x32, size: 0x1, def value: None
 bool  ___showWeatherStateControls;

/// @brief Field showWindControls, offset: 0x33, size: 0x1, def value: None
 bool  ___showWindControls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEnvironmentModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironmentModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironmentModule, ___showSeasonControls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironmentModule, ___showTemperatureControls) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironmentModule, ___showWeatherStateControls) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironmentModule, ___showWindControls) == 0x33, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEnvironmentModule) == 0x38, "Size mismatch!");

} // namespace end def Enviro
