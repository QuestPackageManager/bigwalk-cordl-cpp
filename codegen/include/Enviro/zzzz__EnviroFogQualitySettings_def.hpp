#pragma once
// IWYU pragma private; include "Enviro/EnviroFogQualitySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Enviro/zzzz__EnviroFogSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroFogQualitySettings)
// Forward declare root types
namespace Enviro {
class EnviroFogQualitySettings;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroFogQualitySettings*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroFogQualitySettings*, "Enviro", "EnviroFogQualitySettings");
// Dependencies Enviro.EnviroFogSettings::FogQualityMode, Enviro.EnviroFogSettings::Quality, System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroFogQualitySettings
class CORDL_TYPE EnviroFogQualitySettings : public ::System::Object {
public:
// Declarations
/// @brief Field fog, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_fog, put=__cordl_internal_set_fog)) bool  fog;

/// @brief Field fogQualityMode, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogQualityMode, put=__cordl_internal_set_fogQualityMode)) ::Enviro::EnviroFogSettings_FogQualityMode  fogQualityMode;

/// @brief Field quality, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_quality, put=__cordl_internal_set_quality)) ::Enviro::EnviroFogSettings_Quality  quality;

/// @brief Field steps, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_steps, put=__cordl_internal_set_steps)) int32_t  steps;

/// @brief Field unityFog, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_unityFog, put=__cordl_internal_set_unityFog)) bool  unityFog;

/// @brief Field volumetrics, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_volumetrics, put=__cordl_internal_set_volumetrics)) bool  volumetrics;

static inline ::Enviro::EnviroFogQualitySettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_fog() const;

constexpr bool& __cordl_internal_get_fog() ;

constexpr ::Enviro::EnviroFogSettings_FogQualityMode const& __cordl_internal_get_fogQualityMode() const;

constexpr ::Enviro::EnviroFogSettings_FogQualityMode& __cordl_internal_get_fogQualityMode() ;

constexpr ::Enviro::EnviroFogSettings_Quality const& __cordl_internal_get_quality() const;

constexpr ::Enviro::EnviroFogSettings_Quality& __cordl_internal_get_quality() ;

constexpr int32_t const& __cordl_internal_get_steps() const;

constexpr int32_t& __cordl_internal_get_steps() ;

constexpr bool const& __cordl_internal_get_unityFog() const;

constexpr bool& __cordl_internal_get_unityFog() ;

constexpr bool const& __cordl_internal_get_volumetrics() const;

constexpr bool& __cordl_internal_get_volumetrics() ;

constexpr void __cordl_internal_set_fog(bool  value) ;

constexpr void __cordl_internal_set_fogQualityMode(::Enviro::EnviroFogSettings_FogQualityMode  value) ;

constexpr void __cordl_internal_set_quality(::Enviro::EnviroFogSettings_Quality  value) ;

constexpr void __cordl_internal_set_steps(int32_t  value) ;

constexpr void __cordl_internal_set_unityFog(bool  value) ;

constexpr void __cordl_internal_set_volumetrics(bool  value) ;

/// @brief Method .ctor, addr 0x180613c50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroFogQualitySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroFogQualitySettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroFogQualitySettings(EnviroFogQualitySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroFogQualitySettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroFogQualitySettings(EnviroFogQualitySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18477};

/// @brief Field fog, offset: 0x10, size: 0x1, def value: None
 bool  ___fog;

/// @brief Field fogQualityMode, offset: 0x14, size: 0x4, def value: None
 ::Enviro::EnviroFogSettings_FogQualityMode  ___fogQualityMode;

/// @brief Field volumetrics, offset: 0x18, size: 0x1, def value: None
 bool  ___volumetrics;

/// @brief Field unityFog, offset: 0x19, size: 0x1, def value: None
 bool  ___unityFog;

/// @brief Field quality, offset: 0x1c, size: 0x4, def value: None
 ::Enviro::EnviroFogSettings_Quality  ___quality;

/// @brief Field steps, offset: 0x20, size: 0x4, def value: None
 int32_t  ___steps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroFogQualitySettings, ___fog) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogQualitySettings, ___fogQualityMode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogQualitySettings, ___volumetrics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogQualitySettings, ___unityFog) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogQualitySettings, ___quality) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroFogQualitySettings, ___steps) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroFogQualitySettings) == 0x28, "Size mismatch!");

} // namespace end def Enviro
