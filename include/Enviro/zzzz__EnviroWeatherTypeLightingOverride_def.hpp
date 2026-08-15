#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeLightingOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroWeatherTypeLightingOverride)
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeLightingOverride;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeLightingOverride*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeLightingOverride*, "Enviro", "EnviroWeatherTypeLightingOverride");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeLightingOverride
class CORDL_TYPE EnviroWeatherTypeLightingOverride : public ::System::Object {
public:
// Declarations
/// @brief Field ambientIntensityModifier, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientIntensityModifier, put=__cordl_internal_set_ambientIntensityModifier)) float_t  ambientIntensityModifier;

/// @brief Field directLightIntensityModifier, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_directLightIntensityModifier, put=__cordl_internal_set_directLightIntensityModifier)) float_t  directLightIntensityModifier;

/// @brief Field shadowIntensity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_shadowIntensity, put=__cordl_internal_set_shadowIntensity)) float_t  shadowIntensity;

static inline ::Enviro::EnviroWeatherTypeLightingOverride* New_ctor() ;

constexpr float_t const& __cordl_internal_get_ambientIntensityModifier() const;

constexpr float_t& __cordl_internal_get_ambientIntensityModifier() ;

constexpr float_t const& __cordl_internal_get_directLightIntensityModifier() const;

constexpr float_t& __cordl_internal_get_directLightIntensityModifier() ;

constexpr float_t const& __cordl_internal_get_shadowIntensity() const;

constexpr float_t& __cordl_internal_get_shadowIntensity() ;

constexpr void __cordl_internal_set_ambientIntensityModifier(float_t  value) ;

constexpr void __cordl_internal_set_directLightIntensityModifier(float_t  value) ;

constexpr void __cordl_internal_set_shadowIntensity(float_t  value) ;

/// @brief Method .ctor, addr 0x1804b96b0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeLightingOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeLightingOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeLightingOverride(EnviroWeatherTypeLightingOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeLightingOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeLightingOverride(EnviroWeatherTypeLightingOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18511};

/// @brief Field directLightIntensityModifier, offset: 0x10, size: 0x4, def value: None
 float_t  ___directLightIntensityModifier;

/// @brief Field ambientIntensityModifier, offset: 0x14, size: 0x4, def value: None
 float_t  ___ambientIntensityModifier;

/// @brief Field shadowIntensity, offset: 0x18, size: 0x4, def value: None
 float_t  ___shadowIntensity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherTypeLightingOverride, ___directLightIntensityModifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeLightingOverride, ___ambientIntensityModifier) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeLightingOverride, ___shadowIntensity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherTypeLightingOverride) == 0x20, "Size mismatch!");

} // namespace end def Enviro
