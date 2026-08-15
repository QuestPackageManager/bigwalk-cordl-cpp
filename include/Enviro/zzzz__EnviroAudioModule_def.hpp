#pragma once
// IWYU pragma private; include "Enviro/EnviroAudioModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroAudioModule)
namespace Enviro {
class EnviroAudioClip;
}
namespace Enviro {
class EnviroAudio;
}
// Forward declare root types
namespace Enviro {
class EnviroAudioModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroAudioModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroAudioModule*, "Enviro", "EnviroAudioModule");
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroAudioModule
class CORDL_TYPE EnviroAudioModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroAudio*  Settings;

/// @brief Field ambientVolumeModifier, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientVolumeModifier, put=__cordl_internal_set_ambientVolumeModifier)) float_t  ambientVolumeModifier;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroAudioModule>  preset;

/// @brief Field showAmbientSetupControls, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAmbientSetupControls, put=__cordl_internal_set_showAmbientSetupControls)) bool  showAmbientSetupControls;

/// @brief Field showAudioControls, offset 0x3f, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAudioControls, put=__cordl_internal_set_showAudioControls)) bool  showAudioControls;

/// @brief Field showThunderSetupControls, offset 0x3e, size 0x1 
 __declspec(property(get=__cordl_internal_get_showThunderSetupControls, put=__cordl_internal_set_showThunderSetupControls)) bool  showThunderSetupControls;

/// @brief Field showWeatherSetupControls, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_showWeatherSetupControls, put=__cordl_internal_set_showWeatherSetupControls)) bool  showWeatherSetupControls;

/// @brief Field thunderVolumeModifier, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_thunderVolumeModifier, put=__cordl_internal_set_thunderVolumeModifier)) float_t  thunderVolumeModifier;

/// @brief Field weatherVolumeModifier, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_weatherVolumeModifier, put=__cordl_internal_set_weatherVolumeModifier)) float_t  weatherVolumeModifier;

/// @brief Method Cleanup, addr 0x1805fc4a0, size 0xb0, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method CreateAudio, addr 0x1805fc550, size 0xd40, virtual false, abstract: false, final false
inline void CreateAudio() ;

/// @brief Method Disable, addr 0x1805fd290, size 0xc0, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x1805fd350, size 0x40, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method LoadModuleValues, addr 0x1805fd390, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroAudioModule* New_ctor() ;

/// @brief Method PlayRandomThunderSFX, addr 0x1805fd400, size 0x130, virtual false, abstract: false, final false
inline void PlayRandomThunderSFX() ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x1805fd530, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroAudioModule*  _cordl_module) ;

/// @brief Method Setup, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateAudio, addr 0x1805fd580, size 0x120, virtual false, abstract: false, final false
inline void UpdateAudio() ;

/// @brief Method UpdateEnviroAudioClip, addr 0x1805fd6a0, size 0x250, virtual false, abstract: false, final false
inline void UpdateEnviroAudioClip(::Enviro::EnviroAudioClip*  clip, float_t  masterVolume) ;

/// @brief Method UpdateModule, addr 0x1805fd8f0, size 0x130, virtual true, abstract: false, final false
inline void UpdateModule() ;

constexpr ::Enviro::EnviroAudio* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroAudio*& __cordl_internal_get_Settings() ;

constexpr float_t const& __cordl_internal_get_ambientVolumeModifier() const;

constexpr float_t& __cordl_internal_get_ambientVolumeModifier() ;

constexpr ::UnityW<::Enviro::EnviroAudioModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroAudioModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showAmbientSetupControls() const;

constexpr bool& __cordl_internal_get_showAmbientSetupControls() ;

constexpr bool const& __cordl_internal_get_showAudioControls() const;

constexpr bool& __cordl_internal_get_showAudioControls() ;

constexpr bool const& __cordl_internal_get_showThunderSetupControls() const;

constexpr bool& __cordl_internal_get_showThunderSetupControls() ;

constexpr bool const& __cordl_internal_get_showWeatherSetupControls() const;

constexpr bool& __cordl_internal_get_showWeatherSetupControls() ;

constexpr float_t const& __cordl_internal_get_thunderVolumeModifier() const;

constexpr float_t& __cordl_internal_get_thunderVolumeModifier() ;

constexpr float_t const& __cordl_internal_get_weatherVolumeModifier() const;

constexpr float_t& __cordl_internal_get_weatherVolumeModifier() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroAudio*  value) ;

constexpr void __cordl_internal_set_ambientVolumeModifier(float_t  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroAudioModule>  value) ;

constexpr void __cordl_internal_set_showAmbientSetupControls(bool  value) ;

constexpr void __cordl_internal_set_showAudioControls(bool  value) ;

constexpr void __cordl_internal_set_showThunderSetupControls(bool  value) ;

constexpr void __cordl_internal_set_showWeatherSetupControls(bool  value) ;

constexpr void __cordl_internal_set_thunderVolumeModifier(float_t  value) ;

constexpr void __cordl_internal_set_weatherVolumeModifier(float_t  value) ;

/// @brief Method .ctor, addr 0x1805fda20, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroAudioModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroAudioModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroAudioModule(EnviroAudioModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroAudioModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroAudioModule(EnviroAudioModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18437};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroAudio*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroAudioModule>  ___preset;

/// @brief Field ambientVolumeModifier, offset: 0x30, size: 0x4, def value: None
 float_t  ___ambientVolumeModifier;

/// @brief Field weatherVolumeModifier, offset: 0x34, size: 0x4, def value: None
 float_t  ___weatherVolumeModifier;

/// @brief Field thunderVolumeModifier, offset: 0x38, size: 0x4, def value: None
 float_t  ___thunderVolumeModifier;

/// @brief Field showAmbientSetupControls, offset: 0x3c, size: 0x1, def value: None
 bool  ___showAmbientSetupControls;

/// @brief Field showWeatherSetupControls, offset: 0x3d, size: 0x1, def value: None
 bool  ___showWeatherSetupControls;

/// @brief Field showThunderSetupControls, offset: 0x3e, size: 0x1, def value: None
 bool  ___showThunderSetupControls;

/// @brief Field showAudioControls, offset: 0x3f, size: 0x1, def value: None
 bool  ___showAudioControls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroAudioModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioModule, ___ambientVolumeModifier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioModule, ___weatherVolumeModifier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioModule, ___thunderVolumeModifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioModule, ___showAmbientSetupControls) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioModule, ___showWeatherSetupControls) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioModule, ___showThunderSetupControls) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAudioModule, ___showAudioControls) == 0x3f, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroAudioModule) == 0x40, "Size mismatch!");

} // namespace end def Enviro
