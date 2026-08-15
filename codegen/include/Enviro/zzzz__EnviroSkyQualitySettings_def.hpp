#pragma once
// IWYU pragma private; include "Enviro/EnviroSkyQualitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Enviro/zzzz__EnviroSky_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnviroSkyQualitySettings)
// Forward declare root types
namespace Enviro {
class EnviroSkyQualitySettings;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroSkyQualitySettings*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroSkyQualitySettings*, "Enviro", "EnviroSkyQualitySettings");
// Dependencies Enviro.EnviroSky::SkyMode, System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroSkyQualitySettings
class CORDL_TYPE EnviroSkyQualitySettings : public ::System::Object {
public:
// Declarations
/// @brief Field skyMode, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyMode, put=__cordl_internal_set_skyMode)) ::Enviro::EnviroSky_SkyMode  skyMode;

static inline ::Enviro::EnviroSkyQualitySettings* New_ctor() ;

constexpr ::Enviro::EnviroSky_SkyMode const& __cordl_internal_get_skyMode() const;

constexpr ::Enviro::EnviroSky_SkyMode& __cordl_internal_get_skyMode() ;

constexpr void __cordl_internal_set_skyMode(::Enviro::EnviroSky_SkyMode  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroSkyQualitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroSkyQualitySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroSkyQualitySettings(EnviroSkyQualitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroSkyQualitySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroSkyQualitySettings(EnviroSkyQualitySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18472};

/// @brief Field skyMode, offset: 0x10, size: 0x4, def value: None
 ::Enviro::EnviroSky_SkyMode  ___skyMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroSkyQualitySettings, ___skyMode) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroSkyQualitySettings) == 0x18, "Size mismatch!");

} // namespace end def Enviro
