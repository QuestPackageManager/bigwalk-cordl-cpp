#pragma once
// IWYU pragma private; include "Enviro/EnviroFlatCloudsModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(EnviroFlatCloudsModule)
namespace Enviro {
class EnviroFlatClouds;
}
// Forward declare root types
namespace Enviro {
class EnviroFlatCloudsModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroFlatCloudsModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFlatCloudsModule*, "Enviro", "EnviroFlatCloudsModule");
// Dependencies EnviroModule, UnityEngine.Vector2
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroFlatCloudsModule
class CORDL_TYPE EnviroFlatCloudsModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field cirrusAnim, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_cirrusAnim, put=__cordl_internal_set_cirrusAnim)) ::UnityEngine::Vector2  cirrusAnim;

/// @brief Field cloudFlatBaseAnim, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_cloudFlatBaseAnim, put=__cordl_internal_set_cloudFlatBaseAnim)) ::UnityEngine::Vector2  cloudFlatBaseAnim;

/// @brief Field cloudFlatDetailAnim, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_cloudFlatDetailAnim, put=__cordl_internal_set_cloudFlatDetailAnim)) ::UnityEngine::Vector2  cloudFlatDetailAnim;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroFlatCloudsModule>  preset;

/// @brief Field settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::Enviro::EnviroFlatClouds*  settings;

/// @brief Field show2DCloudsControls, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_show2DCloudsControls, put=__cordl_internal_set_show2DCloudsControls)) bool  show2DCloudsControls;

/// @brief Field showCirrusCloudsControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showCirrusCloudsControls, put=__cordl_internal_set_showCirrusCloudsControls)) bool  showCirrusCloudsControls;

/// @brief Method LoadModuleValues, addr 0x18060deb0, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroFlatCloudsModule* New_ctor() ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x18060df20, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroFlatCloudsModule*  _cordl_module) ;

/// @brief Method UpdateModule, addr 0x18060df70, size 0x510, virtual true, abstract: false, final false
inline void UpdateModule() ;

/// @brief Method UpdateWind, addr 0x18060e480, size 0x6f0, virtual false, abstract: false, final false
inline void UpdateWind() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_cirrusAnim() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_cirrusAnim() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_cloudFlatBaseAnim() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_cloudFlatBaseAnim() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_cloudFlatDetailAnim() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_cloudFlatDetailAnim() ;

constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroFlatCloudsModule>& __cordl_internal_get_preset() ;

constexpr ::Enviro::EnviroFlatClouds* const& __cordl_internal_get_settings() const;

constexpr ::Enviro::EnviroFlatClouds*& __cordl_internal_get_settings() ;

constexpr bool const& __cordl_internal_get_show2DCloudsControls() const;

constexpr bool& __cordl_internal_get_show2DCloudsControls() ;

constexpr bool const& __cordl_internal_get_showCirrusCloudsControls() const;

constexpr bool& __cordl_internal_get_showCirrusCloudsControls() ;

constexpr void __cordl_internal_set_cirrusAnim(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_cloudFlatBaseAnim(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_cloudFlatDetailAnim(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroFlatCloudsModule>  value) ;

constexpr void __cordl_internal_set_settings(::Enviro::EnviroFlatClouds*  value) ;

constexpr void __cordl_internal_set_show2DCloudsControls(bool  value) ;

constexpr void __cordl_internal_set_showCirrusCloudsControls(bool  value) ;

/// @brief Method .ctor, addr 0x18060c360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroFlatCloudsModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroFlatCloudsModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroFlatCloudsModule(EnviroFlatCloudsModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroFlatCloudsModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroFlatCloudsModule(EnviroFlatCloudsModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18452};

/// @brief Field settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroFlatClouds*  ___settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroFlatCloudsModule>  ___preset;

/// @brief Field showCirrusCloudsControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showCirrusCloudsControls;

/// @brief Field show2DCloudsControls, offset: 0x31, size: 0x1, def value: None
 bool  ___show2DCloudsControls;

/// @brief Field cloudFlatBaseAnim, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___cloudFlatBaseAnim;

/// @brief Field cloudFlatDetailAnim, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___cloudFlatDetailAnim;

/// @brief Field cirrusAnim, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___cirrusAnim;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFlatCloudsModule, ___settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatCloudsModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatCloudsModule, ___showCirrusCloudsControls) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatCloudsModule, ___show2DCloudsControls) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatCloudsModule, ___cloudFlatBaseAnim) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatCloudsModule, ___cloudFlatDetailAnim) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFlatCloudsModule, ___cirrusAnim) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFlatCloudsModule) == 0x50, "Size mismatch!");

} // namespace end def Enviro
