#pragma once
// IWYU pragma private; include "Enviro/EnviroSkyModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroSkyModule)
namespace Enviro {
class EnviroSky;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Enviro {
class EnviroSkyModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroSkyModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroSkyModule*, "Enviro", "EnviroSkyModule");
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroSkyModule
class CORDL_TYPE EnviroSkyModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroSky*  Settings;

/// @brief Field mySkyboxMat, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mySkyboxMat, put=__cordl_internal_set_mySkyboxMat)) ::UnityW<::UnityEngine::Material>  mySkyboxMat;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroSkyModule>  preset;

/// @brief Field showSkyControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSkyControls, put=__cordl_internal_set_showSkyControls)) bool  showSkyControls;

/// @brief Field showSkyMoonControls, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSkyMoonControls, put=__cordl_internal_set_showSkyMoonControls)) bool  showSkyMoonControls;

/// @brief Field showSkyStarsControls, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSkyStarsControls, put=__cordl_internal_set_showSkyStarsControls)) bool  showSkyStarsControls;

/// @brief Field showSkySunControls, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSkySunControls, put=__cordl_internal_set_showSkySunControls)) bool  showSkySunControls;

/// @brief Field starsTwinkling, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_starsTwinkling, put=__cordl_internal_set_starsTwinkling)) float_t  starsTwinkling;

/// @brief Method Disable, addr 0x18061c0d0, size 0x40, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x18061c110, size 0x40, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method LoadModuleValues, addr 0x18061c150, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroSkyModule* New_ctor() ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x18061c1c0, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroSkyModule*  _cordl_module) ;

/// @brief Method SetupSkybox, addr 0x18061c210, size 0x80, virtual false, abstract: false, final false
inline void SetupSkybox() ;

/// @brief Method UpdateModule, addr 0x18061c290, size 0xf0, virtual true, abstract: false, final false
inline void UpdateModule() ;

/// @brief Method UpdateMoonPhase, addr 0x18061c380, size 0x300, virtual false, abstract: false, final false
inline void UpdateMoonPhase() ;

/// @brief Method UpdateSkybox, addr 0x18061c680, size 0xc50, virtual false, abstract: false, final false
inline void UpdateSkybox(::UnityEngine::Material*  mat) ;

constexpr ::Enviro::EnviroSky* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroSky*& __cordl_internal_get_Settings() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_mySkyboxMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_mySkyboxMat() ;

constexpr ::UnityW<::Enviro::EnviroSkyModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroSkyModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showSkyControls() const;

constexpr bool& __cordl_internal_get_showSkyControls() ;

constexpr bool const& __cordl_internal_get_showSkyMoonControls() const;

constexpr bool& __cordl_internal_get_showSkyMoonControls() ;

constexpr bool const& __cordl_internal_get_showSkyStarsControls() const;

constexpr bool& __cordl_internal_get_showSkyStarsControls() ;

constexpr bool const& __cordl_internal_get_showSkySunControls() const;

constexpr bool& __cordl_internal_get_showSkySunControls() ;

constexpr float_t const& __cordl_internal_get_starsTwinkling() const;

constexpr float_t& __cordl_internal_get_starsTwinkling() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroSky*  value) ;

constexpr void __cordl_internal_set_mySkyboxMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroSkyModule>  value) ;

constexpr void __cordl_internal_set_showSkyControls(bool  value) ;

constexpr void __cordl_internal_set_showSkyMoonControls(bool  value) ;

constexpr void __cordl_internal_set_showSkyStarsControls(bool  value) ;

constexpr void __cordl_internal_set_showSkySunControls(bool  value) ;

constexpr void __cordl_internal_set_starsTwinkling(float_t  value) ;

/// @brief Method .ctor, addr 0x18060c360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroSkyModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroSkyModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroSkyModule(EnviroSkyModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroSkyModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroSkyModule(EnviroSkyModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18497};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroSky*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroSkyModule>  ___preset;

/// @brief Field showSkyControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showSkyControls;

/// @brief Field showSkySunControls, offset: 0x31, size: 0x1, def value: None
 bool  ___showSkySunControls;

/// @brief Field showSkyMoonControls, offset: 0x32, size: 0x1, def value: None
 bool  ___showSkyMoonControls;

/// @brief Field showSkyStarsControls, offset: 0x33, size: 0x1, def value: None
 bool  ___showSkyStarsControls;

/// @brief Field mySkyboxMat, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___mySkyboxMat;

/// @brief Field starsTwinkling, offset: 0x40, size: 0x4, def value: None
 float_t  ___starsTwinkling;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroSkyModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSkyModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSkyModule, ___showSkyControls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSkyModule, ___showSkySunControls) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSkyModule, ___showSkyMoonControls) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSkyModule, ___showSkyStarsControls) == 0x33, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSkyModule, ___mySkyboxMat) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroSkyModule, ___starsTwinkling) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroSkyModule) == 0x48, "Size mismatch!");

} // namespace end def Enviro
