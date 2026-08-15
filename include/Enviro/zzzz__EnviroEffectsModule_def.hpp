#pragma once
// IWYU pragma private; include "Enviro/EnviroEffectsModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroEffectsModule)
namespace Enviro {
class EnviroEffects;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace Enviro {
class EnviroEffectsModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroEffectsModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEffectsModule*, "Enviro", "EnviroEffectsModule");
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEffectsModule
class CORDL_TYPE EnviroEffectsModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroEffects*  Settings;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroEffectsModule>  preset;

/// @brief Field showEmissionControls, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEmissionControls, put=__cordl_internal_set_showEmissionControls)) bool  showEmissionControls;

/// @brief Field showSetupControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSetupControls, put=__cordl_internal_set_showSetupControls)) bool  showSetupControls;

/// @brief Method Cleanup, addr 0x18060c370, size 0x60, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method CreateEffects, addr 0x18060c3d0, size 0x6b0, virtual false, abstract: false, final false
inline void CreateEffects() ;

/// @brief Method Disable, addr 0x18060ca80, size 0x80, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x18060cb00, size 0x40, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method GetEmissionRate, addr 0x18060cb40, size 0x70, virtual false, abstract: false, final false
inline float_t GetEmissionRate(::UnityEngine::ParticleSystem*  system) ;

/// @brief Method LoadModuleValues, addr 0x18060cbb0, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroEffectsModule* New_ctor() ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x18060cc20, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroEffectsModule*  _cordl_module) ;

/// @brief Method SetEmissionRate, addr 0x18060cc70, size 0xb0, virtual false, abstract: false, final false
inline void SetEmissionRate(::UnityEngine::ParticleSystem*  sys, float_t  emissionRate) ;

/// @brief Method Setup, addr 0x18060cd20, size 0x10, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateEffects, addr 0x18060cd30, size 0x1d0, virtual false, abstract: false, final false
inline void UpdateEffects() ;

/// @brief Method UpdateModule, addr 0x18060cf00, size 0x10, virtual true, abstract: false, final false
inline void UpdateModule() ;

constexpr ::Enviro::EnviroEffects* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroEffects*& __cordl_internal_get_Settings() ;

constexpr ::UnityW<::Enviro::EnviroEffectsModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroEffectsModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showEmissionControls() const;

constexpr bool& __cordl_internal_get_showEmissionControls() ;

constexpr bool const& __cordl_internal_get_showSetupControls() const;

constexpr bool& __cordl_internal_get_showSetupControls() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroEffects*  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroEffectsModule>  value) ;

constexpr void __cordl_internal_set_showEmissionControls(bool  value) ;

constexpr void __cordl_internal_set_showSetupControls(bool  value) ;

/// @brief Method .ctor, addr 0x18060c360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEffectsModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectsModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEffectsModule(EnviroEffectsModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEffectsModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEffectsModule(EnviroEffectsModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18445};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroEffects*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroEffectsModule>  ___preset;

/// @brief Field showSetupControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showSetupControls;

/// @brief Field showEmissionControls, offset: 0x31, size: 0x1, def value: None
 bool  ___showEmissionControls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEffectsModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectsModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectsModule, ___showSetupControls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEffectsModule, ___showEmissionControls) == 0x31, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEffectsModule) == 0x38, "Size mismatch!");

} // namespace end def Enviro
