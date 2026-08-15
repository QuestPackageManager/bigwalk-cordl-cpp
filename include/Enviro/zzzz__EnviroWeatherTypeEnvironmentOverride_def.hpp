#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeEnvironmentOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroWeatherTypeEnvironmentOverride)
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeEnvironmentOverride;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeEnvironmentOverride*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeEnvironmentOverride*, "Enviro", "EnviroWeatherTypeEnvironmentOverride");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeEnvironmentOverride
class CORDL_TYPE EnviroWeatherTypeEnvironmentOverride : public ::System::Object {
public:
// Declarations
/// @brief Field snowTarget, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_snowTarget, put=__cordl_internal_set_snowTarget)) float_t  snowTarget;

/// @brief Field temperatureWeatherMod, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_temperatureWeatherMod, put=__cordl_internal_set_temperatureWeatherMod)) float_t  temperatureWeatherMod;

/// @brief Field wetnessTarget, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_wetnessTarget, put=__cordl_internal_set_wetnessTarget)) float_t  wetnessTarget;

/// @brief Field windDirectionX, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_windDirectionX, put=__cordl_internal_set_windDirectionX)) float_t  windDirectionX;

/// @brief Field windDirectionY, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_windDirectionY, put=__cordl_internal_set_windDirectionY)) float_t  windDirectionY;

/// @brief Field windSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_windSpeed, put=__cordl_internal_set_windSpeed)) float_t  windSpeed;

/// @brief Field windTurbulence, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_windTurbulence, put=__cordl_internal_set_windTurbulence)) float_t  windTurbulence;

static inline ::Enviro::EnviroWeatherTypeEnvironmentOverride* New_ctor() ;

constexpr float_t const& __cordl_internal_get_snowTarget() const;

constexpr float_t& __cordl_internal_get_snowTarget() ;

constexpr float_t const& __cordl_internal_get_temperatureWeatherMod() const;

constexpr float_t& __cordl_internal_get_temperatureWeatherMod() ;

constexpr float_t const& __cordl_internal_get_wetnessTarget() const;

constexpr float_t& __cordl_internal_get_wetnessTarget() ;

constexpr float_t const& __cordl_internal_get_windDirectionX() const;

constexpr float_t& __cordl_internal_get_windDirectionX() ;

constexpr float_t const& __cordl_internal_get_windDirectionY() const;

constexpr float_t& __cordl_internal_get_windDirectionY() ;

constexpr float_t const& __cordl_internal_get_windSpeed() const;

constexpr float_t& __cordl_internal_get_windSpeed() ;

constexpr float_t const& __cordl_internal_get_windTurbulence() const;

constexpr float_t& __cordl_internal_get_windTurbulence() ;

constexpr void __cordl_internal_set_snowTarget(float_t  value) ;

constexpr void __cordl_internal_set_temperatureWeatherMod(float_t  value) ;

constexpr void __cordl_internal_set_wetnessTarget(float_t  value) ;

constexpr void __cordl_internal_set_windDirectionX(float_t  value) ;

constexpr void __cordl_internal_set_windDirectionY(float_t  value) ;

constexpr void __cordl_internal_set_windSpeed(float_t  value) ;

constexpr void __cordl_internal_set_windTurbulence(float_t  value) ;

/// @brief Method .ctor, addr 0x180629a00, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeEnvironmentOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeEnvironmentOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeEnvironmentOverride(EnviroWeatherTypeEnvironmentOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeEnvironmentOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeEnvironmentOverride(EnviroWeatherTypeEnvironmentOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18519};

/// @brief Field temperatureWeatherMod, offset: 0x10, size: 0x4, def value: None
 float_t  ___temperatureWeatherMod;

/// @brief Field wetnessTarget, offset: 0x14, size: 0x4, def value: None
 float_t  ___wetnessTarget;

/// @brief Field snowTarget, offset: 0x18, size: 0x4, def value: None
 float_t  ___snowTarget;

/// @brief Field windDirectionX, offset: 0x1c, size: 0x4, def value: None
 float_t  ___windDirectionX;

/// @brief Field windDirectionY, offset: 0x20, size: 0x4, def value: None
 float_t  ___windDirectionY;

/// @brief Field windSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___windSpeed;

/// @brief Field windTurbulence, offset: 0x28, size: 0x4, def value: None
 float_t  ___windTurbulence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherTypeEnvironmentOverride, ___temperatureWeatherMod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeEnvironmentOverride, ___wetnessTarget) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeEnvironmentOverride, ___snowTarget) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeEnvironmentOverride, ___windDirectionX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeEnvironmentOverride, ___windDirectionY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeEnvironmentOverride, ___windSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeEnvironmentOverride, ___windTurbulence) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherTypeEnvironmentOverride) == 0x30, "Size mismatch!");

} // namespace end def Enviro
