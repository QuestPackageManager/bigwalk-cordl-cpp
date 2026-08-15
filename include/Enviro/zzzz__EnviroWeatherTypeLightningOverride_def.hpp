#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeLightningOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroWeatherTypeLightningOverride)
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeLightningOverride;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeLightningOverride*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeLightningOverride*, "Enviro", "EnviroWeatherTypeLightningOverride");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeLightningOverride
class CORDL_TYPE EnviroWeatherTypeLightningOverride : public ::System::Object {
public:
// Declarations
/// @brief Field lightningStorm, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_lightningStorm, put=__cordl_internal_set_lightningStorm)) bool  lightningStorm;

/// @brief Field randomLightningDelay, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomLightningDelay, put=__cordl_internal_set_randomLightningDelay)) float_t  randomLightningDelay;

static inline ::Enviro::EnviroWeatherTypeLightningOverride* New_ctor() ;

constexpr bool const& __cordl_internal_get_lightningStorm() const;

constexpr bool& __cordl_internal_get_lightningStorm() ;

constexpr float_t const& __cordl_internal_get_randomLightningDelay() const;

constexpr float_t& __cordl_internal_get_randomLightningDelay() ;

constexpr void __cordl_internal_set_lightningStorm(bool  value) ;

constexpr void __cordl_internal_set_randomLightningDelay(float_t  value) ;

/// @brief Method .ctor, addr 0x1804b96d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeLightningOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeLightningOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeLightningOverride(EnviroWeatherTypeLightningOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeLightningOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeLightningOverride(EnviroWeatherTypeLightningOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18520};

/// @brief Field lightningStorm, offset: 0x10, size: 0x1, def value: None
 bool  ___lightningStorm;

/// @brief Field randomLightningDelay, offset: 0x14, size: 0x4, def value: None
 float_t  ___randomLightningDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherTypeLightningOverride, ___lightningStorm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeLightningOverride, ___randomLightningDelay) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherTypeLightningOverride) == 0x18, "Size mismatch!");

} // namespace end def Enviro
