#pragma once
// IWYU pragma private; include "Enviro/EnviroQualityModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EnviroModule_def.hpp"
CORDL_MODULE_EXPORT(EnviroQualityModule)
namespace Enviro {
class EnviroQualities;
}
namespace Enviro {
class EnviroQuality;
}
// Forward declare root types
namespace Enviro {
class EnviroQualityModule;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroQualityModule*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroQualityModule*, "Enviro", "EnviroQualityModule");
// Dependencies EnviroModule
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroQualityModule
class CORDL_TYPE EnviroQualityModule : public ::GlobalNamespace::EnviroModule {
public:
// Declarations
/// @brief Field Settings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Enviro::EnviroQualities*  Settings;

/// @brief Field preset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_preset, put=__cordl_internal_set_preset)) ::UnityW<::Enviro::EnviroQualityModule>  preset;

/// @brief Field showQualityControls, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showQualityControls, put=__cordl_internal_set_showQualityControls)) bool  showQualityControls;

/// @brief Method CleanupQualityList, addr 0x180615c20, size 0xa0, virtual false, abstract: false, final false
inline void CleanupQualityList() ;

/// @brief Method CreateNewQuality, addr 0x180615cc0, size 0x90, virtual false, abstract: false, final false
inline void CreateNewQuality() ;

/// @brief Method Enable, addr 0x180615d50, size 0x110, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method LoadModuleValues, addr 0x180615e60, size 0x70, virtual false, abstract: false, final false
inline void LoadModuleValues() ;

static inline ::Enviro::EnviroQualityModule* New_ctor() ;

/// @brief Method RemoveQuality, addr 0x180615ed0, size 0x30, virtual false, abstract: false, final false
inline void RemoveQuality(::Enviro::EnviroQuality*  quality) ;

/// @brief Method SaveModuleValues, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void SaveModuleValues() ;

/// @brief Method SaveModuleValues, addr 0x180615f00, size 0x50, virtual false, abstract: false, final false
inline void SaveModuleValues(::Enviro::EnviroQualityModule*  _cordl_module) ;

/// @brief Method UpdateModule, addr 0x180615f50, size 0x860, virtual true, abstract: false, final false
inline void UpdateModule() ;

constexpr ::Enviro::EnviroQualities* const& __cordl_internal_get_Settings() const;

constexpr ::Enviro::EnviroQualities*& __cordl_internal_get_Settings() ;

constexpr ::UnityW<::Enviro::EnviroQualityModule> const& __cordl_internal_get_preset() const;

constexpr ::UnityW<::Enviro::EnviroQualityModule>& __cordl_internal_get_preset() ;

constexpr bool const& __cordl_internal_get_showQualityControls() const;

constexpr bool& __cordl_internal_get_showQualityControls() ;

constexpr void __cordl_internal_set_Settings(::Enviro::EnviroQualities*  value) ;

constexpr void __cordl_internal_set_preset(::UnityW<::Enviro::EnviroQualityModule>  value) ;

constexpr void __cordl_internal_set_showQualityControls(bool  value) ;

/// @brief Method .ctor, addr 0x1806167b0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroQualityModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroQualityModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroQualityModule(EnviroQualityModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroQualityModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroQualityModule(EnviroQualityModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18481};

/// @brief Field Settings, offset: 0x20, size: 0x8, def value: None
 ::Enviro::EnviroQualities*  ___Settings;

/// @brief Field preset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroQualityModule>  ___preset;

/// @brief Field showQualityControls, offset: 0x30, size: 0x1, def value: None
 bool  ___showQualityControls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroQualityModule, ___Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQualityModule, ___preset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroQualityModule, ___showQualityControls) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroQualityModule) == 0x38, "Size mismatch!");

} // namespace end def Enviro
