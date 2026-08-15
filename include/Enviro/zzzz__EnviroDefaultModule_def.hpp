#pragma once
// IWYU pragma private; include "Enviro/EnviroDefaultModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
CORDL_MODULE_EXPORT(EnviroDefaultModule)
namespace Enviro {
class EnviroDefault;
}
// Forward declare root types
namespace Enviro {
class EnviroDefaultModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroDefaultModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroDefaultModule*, "Enviro", "EnviroDefaultModule");
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroDefaultModule
class CORDL_TYPE EnviroDefaultModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroDefaultModule>  preset;

/// @brief Field settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::Enviro::EnviroDefault*  settings;

/// @brief Field showDefaultControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showDefaultControls, put=__cordl_internal_set_showDefaultControls)) bool  showDefaultControls;

/// @brief Method LoadModuleValues, addr 0x18060c2a0, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroDefaultModule* New_ctor() ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x18060c310, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroDefaultModule*  _cordl_module) ;

/// @brief Method UpdateModule, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void UpdateModule() ;

constexpr ::UnityW<::Enviro::EnviroDefaultModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroDefaultModule>& __cordl_internal_get_preset() ;

constexpr ::Enviro::EnviroDefault* const& __cordl_internal_get_settings() const;

constexpr ::Enviro::EnviroDefault*& __cordl_internal_get_settings() ;

constexpr bool const& __cordl_internal_get_showDefaultControls() const;

constexpr bool& __cordl_internal_get_showDefaultControls() ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroDefaultModule>  value) ;

constexpr void __cordl_internal_set_settings(::Enviro::EnviroDefault*  value) ;

constexpr void __cordl_internal_set_showDefaultControls(bool  value) ;

/// @brief Method .ctor, addr 0x18060c360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroDefaultModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroDefaultModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroDefaultModule(EnviroDefaultModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroDefaultModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroDefaultModule(EnviroDefaultModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18441};

/// @brief Field settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroDefault*  ___settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroDefaultModule>  ___preset;

/// @brief Field showDefaultControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showDefaultControls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroDefaultModule, ___settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroDefaultModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroDefaultModule, ___showDefaultControls) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroDefaultModule) == 0x38, "Size mismatch!");

} // namespace end def Enviro
