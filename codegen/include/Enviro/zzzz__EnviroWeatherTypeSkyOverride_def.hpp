#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeSkyOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroWeatherTypeSkyOverride)
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeSkyOverride;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeSkyOverride*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeSkyOverride*, "Enviro", "EnviroWeatherTypeSkyOverride");
// Dependencies System.Object, UnityEngine.Color
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeSkyOverride
class CORDL_TYPE EnviroWeatherTypeSkyOverride : public ::System::Object {
public:
// Declarations
/// @brief Field intensity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_intensity, put=__cordl_internal_set_intensity)) float_t  intensity;

/// @brief Field mieScatteringMultiplier, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_mieScatteringMultiplier, put=__cordl_internal_set_mieScatteringMultiplier)) float_t  mieScatteringMultiplier;

/// @brief Field skyColorExponent, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyColorExponent, put=__cordl_internal_set_skyColorExponent)) float_t  skyColorExponent;

/// @brief Field skyColorTint, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_skyColorTint, put=__cordl_internal_set_skyColorTint)) ::UnityEngine::Color  skyColorTint;

static inline ::Enviro::EnviroWeatherTypeSkyOverride* New_ctor() ;

constexpr float_t const& __cordl_internal_get_intensity() const;

constexpr float_t& __cordl_internal_get_intensity() ;

constexpr float_t const& __cordl_internal_get_mieScatteringMultiplier() const;

constexpr float_t& __cordl_internal_get_mieScatteringMultiplier() ;

constexpr float_t const& __cordl_internal_get_skyColorExponent() const;

constexpr float_t& __cordl_internal_get_skyColorExponent() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_skyColorTint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_skyColorTint() ;

constexpr void __cordl_internal_set_intensity(float_t  value) ;

constexpr void __cordl_internal_set_mieScatteringMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_skyColorExponent(float_t  value) ;

constexpr void __cordl_internal_set_skyColorTint(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x180629ac0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeSkyOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeSkyOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeSkyOverride(EnviroWeatherTypeSkyOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeSkyOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeSkyOverride(EnviroWeatherTypeSkyOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18512};

/// @brief Field intensity, offset: 0x10, size: 0x4, def value: None
 float_t  ___intensity;

/// @brief Field mieScatteringMultiplier, offset: 0x14, size: 0x4, def value: None
 float_t  ___mieScatteringMultiplier;

/// @brief Field skyColorExponent, offset: 0x18, size: 0x4, def value: None
 float_t  ___skyColorExponent;

/// @brief Field skyColorTint, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Color  ___skyColorTint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherTypeSkyOverride, ___intensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeSkyOverride, ___mieScatteringMultiplier) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeSkyOverride, ___skyColorExponent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeSkyOverride, ___skyColorTint) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherTypeSkyOverride) == 0x30, "Size mismatch!");

} // namespace end def Enviro
