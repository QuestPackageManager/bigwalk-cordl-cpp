#pragma once
// IWYU pragma private; include "Enviro/EnviroLightingModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroLightingModule)
namespace Enviro {
class EnviroLighting;
}
namespace UnityEngine::Rendering {
struct AmbientMode;
}
// Forward declare root types
namespace Enviro {
class EnviroLightingModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroLightingModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroLightingModule*, "Enviro", "EnviroLightingModule");
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroLightingModule
class CORDL_TYPE EnviroLightingModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroLighting*  Settings;

/// @brief Field currentFrame, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFrame, put=__cordl_internal_set_currentFrame)) int32_t  currentFrame;

/// @brief Field lastAmbientSkyboxUpdate, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAmbientSkyboxUpdate, put=__cordl_internal_set_lastAmbientSkyboxUpdate)) float_t  lastAmbientSkyboxUpdate;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroLightingModule>  preset;

/// @brief Field showAmbientLightingControls, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAmbientLightingControls, put=__cordl_internal_set_showAmbientLightingControls)) bool  showAmbientLightingControls;

/// @brief Field showDirectLightingControls, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_showDirectLightingControls, put=__cordl_internal_set_showDirectLightingControls)) bool  showDirectLightingControls;

/// @brief Field showReflectionControls, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_showReflectionControls, put=__cordl_internal_set_showReflectionControls)) bool  showReflectionControls;

/// @brief Method ApplyLightingChanges, addr 0x180613e10, size 0x20, virtual false, abstract: false, final false
inline void ApplyLightingChanges() ;

/// @brief Method Cleanup, addr 0x180613e30, size 0x100, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method Disable, addr 0x180613f30, size 0x40, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x180613f70, size 0x40, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method LoadModuleValues, addr 0x180613fb0, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroLightingModule* New_ctor() ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x180614020, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroLightingModule*  _cordl_module) ;

/// @brief Method Setup, addr 0x180614070, size 0x3f0, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method UpdateAmbient, addr 0x180614720, size 0x200, virtual false, abstract: false, final false
inline void UpdateAmbient(::UnityEngine::Rendering::AmbientMode  ambientMode, float_t  intensity) ;

/// @brief Method UpdateAmbientLighting, addr 0x180614460, size 0x2c0, virtual false, abstract: false, final false
inline void UpdateAmbientLighting(bool  forced) ;

/// @brief Method UpdateDirectLighting, addr 0x180614920, size 0x7d0, virtual false, abstract: false, final false
inline void UpdateDirectLighting() ;

/// @brief Method UpdateModule, addr 0x1806150f0, size 0x110, virtual true, abstract: false, final false
inline void UpdateModule() ;

constexpr ::Enviro::EnviroLighting* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroLighting*& __cordl_internal_get_Settings() ;

constexpr int32_t const& __cordl_internal_get_currentFrame() const;

constexpr int32_t& __cordl_internal_get_currentFrame() ;

constexpr float_t const& __cordl_internal_get_lastAmbientSkyboxUpdate() const;

constexpr float_t& __cordl_internal_get_lastAmbientSkyboxUpdate() ;

constexpr ::UnityW<::Enviro::EnviroLightingModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroLightingModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showAmbientLightingControls() const;

constexpr bool& __cordl_internal_get_showAmbientLightingControls() ;

constexpr bool const& __cordl_internal_get_showDirectLightingControls() const;

constexpr bool& __cordl_internal_get_showDirectLightingControls() ;

constexpr bool const& __cordl_internal_get_showReflectionControls() const;

constexpr bool& __cordl_internal_get_showReflectionControls() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroLighting*  value) ;

constexpr void __cordl_internal_set_currentFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastAmbientSkyboxUpdate(float_t  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroLightingModule>  value) ;

constexpr void __cordl_internal_set_showAmbientLightingControls(bool  value) ;

constexpr void __cordl_internal_set_showDirectLightingControls(bool  value) ;

constexpr void __cordl_internal_set_showReflectionControls(bool  value) ;

/// @brief Method .ctor, addr 0x18060c360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroLightingModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightingModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroLightingModule(EnviroLightingModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroLightingModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroLightingModule(EnviroLightingModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18462};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroLighting*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroLightingModule>  ___preset;

/// @brief Field currentFrame, offset: 0x30, size: 0x4, def value: None
 int32_t  ___currentFrame;

/// @brief Field lastAmbientSkyboxUpdate, offset: 0x34, size: 0x4, def value: None
 float_t  ___lastAmbientSkyboxUpdate;

/// @brief Field showDirectLightingControls, offset: 0x38, size: 0x1, def value: None
 bool  ___showDirectLightingControls;

/// @brief Field showAmbientLightingControls, offset: 0x39, size: 0x1, def value: None
 bool  ___showAmbientLightingControls;

/// @brief Field showReflectionControls, offset: 0x3a, size: 0x1, def value: None
 bool  ___showReflectionControls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroLightingModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightingModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightingModule, ___currentFrame) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightingModule, ___lastAmbientSkyboxUpdate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightingModule, ___showDirectLightingControls) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightingModule, ___showAmbientLightingControls) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroLightingModule, ___showReflectionControls) == 0x3a, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroLightingModule) == 0x40, "Size mismatch!");

} // namespace end def Enviro
