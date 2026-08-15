#pragma once
// IWYU pragma private; include "Enviro/EnviroAuroraModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
CORDL_MODULE_EXPORT(EnviroAuroraModule)
namespace Enviro {
class EnviroAurora;
}
// Forward declare root types
namespace Enviro {
class EnviroAuroraModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroAuroraModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroAuroraModule*, "Enviro", "EnviroAuroraModule");
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroAuroraModule
class CORDL_TYPE EnviroAuroraModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroAurora*  Settings;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroAuroraModule>  preset;

/// @brief Field showAuroraControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showAuroraControls, put=__cordl_internal_set_showAuroraControls)) bool  showAuroraControls;

/// @brief Method LoadModuleValues, addr 0x1805fdaf0, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroAuroraModule* New_ctor() ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x1805fdb60, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroAuroraModule*  _cordl_module) ;

/// @brief Method UpdateAuroraShader, addr 0x1805fdbb0, size 0x340, virtual false, abstract: false, final false
inline void UpdateAuroraShader() ;

/// @brief Method UpdateModule, addr 0x1805fdef0, size 0x60, virtual true, abstract: false, final false
inline void UpdateModule() ;

constexpr ::Enviro::EnviroAurora* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroAurora*& __cordl_internal_get_Settings() ;

constexpr ::UnityW<::Enviro::EnviroAuroraModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroAuroraModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showAuroraControls() const;

constexpr bool& __cordl_internal_get_showAuroraControls() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroAurora*  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroAuroraModule>  value) ;

constexpr void __cordl_internal_set_showAuroraControls(bool  value) ;

/// @brief Method .ctor, addr 0x1805fda20, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroAuroraModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroAuroraModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroAuroraModule(EnviroAuroraModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroAuroraModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroAuroraModule(EnviroAuroraModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18439};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroAurora*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroAuroraModule>  ___preset;

/// @brief Field showAuroraControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showAuroraControls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroAuroraModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAuroraModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroAuroraModule, ___showAuroraControls) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroAuroraModule) == 0x38, "Size mismatch!");

} // namespace end def Enviro
