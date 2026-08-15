#pragma once
// IWYU pragma private; include "Enviro/EnviroZoneWeather.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroZoneWeather)
namespace Enviro {
class EnviroWeatherType;
}
// Forward declare root types
namespace Enviro {
class EnviroZoneWeather;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroZoneWeather*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroZoneWeather*, "Enviro", "EnviroZoneWeather");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroZoneWeather
class CORDL_TYPE EnviroZoneWeather : public ::System::Object {
public:
// Declarations
/// @brief Field probability, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_probability, put=__cordl_internal_set_probability)) float_t  probability;

/// @brief Field probabilityAutumn, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_probabilityAutumn, put=__cordl_internal_set_probabilityAutumn)) float_t  probabilityAutumn;

/// @brief Field probabilitySpring, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_probabilitySpring, put=__cordl_internal_set_probabilitySpring)) float_t  probabilitySpring;

/// @brief Field probabilitySummer, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_probabilitySummer, put=__cordl_internal_set_probabilitySummer)) float_t  probabilitySummer;

/// @brief Field probabilityWinter, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_probabilityWinter, put=__cordl_internal_set_probabilityWinter)) float_t  probabilityWinter;

/// @brief Field seasonalProbability, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_seasonalProbability, put=__cordl_internal_set_seasonalProbability)) bool  seasonalProbability;

/// @brief Field showEditor, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEditor, put=__cordl_internal_set_showEditor)) bool  showEditor;

/// @brief Field weatherType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherType, put=__cordl_internal_set_weatherType)) ::UnityW<::Enviro::EnviroWeatherType>  weatherType;

static inline ::Enviro::EnviroZoneWeather* New_ctor() ;

constexpr float_t const& __cordl_internal_get_probability() const;

constexpr float_t& __cordl_internal_get_probability() ;

constexpr float_t const& __cordl_internal_get_probabilityAutumn() const;

constexpr float_t& __cordl_internal_get_probabilityAutumn() ;

constexpr float_t const& __cordl_internal_get_probabilitySpring() const;

constexpr float_t& __cordl_internal_get_probabilitySpring() ;

constexpr float_t const& __cordl_internal_get_probabilitySummer() const;

constexpr float_t& __cordl_internal_get_probabilitySummer() ;

constexpr float_t const& __cordl_internal_get_probabilityWinter() const;

constexpr float_t& __cordl_internal_get_probabilityWinter() ;

constexpr bool const& __cordl_internal_get_seasonalProbability() const;

constexpr bool& __cordl_internal_get_seasonalProbability() ;

constexpr bool const& __cordl_internal_get_showEditor() const;

constexpr bool& __cordl_internal_get_showEditor() ;

constexpr ::UnityW<::Enviro::EnviroWeatherType> const& __cordl_internal_get_weatherType() const;

constexpr ::UnityW<::Enviro::EnviroWeatherType>& __cordl_internal_get_weatherType() ;

constexpr void __cordl_internal_set_probability(float_t  value) ;

constexpr void __cordl_internal_set_probabilityAutumn(float_t  value) ;

constexpr void __cordl_internal_set_probabilitySpring(float_t  value) ;

constexpr void __cordl_internal_set_probabilitySummer(float_t  value) ;

constexpr void __cordl_internal_set_probabilityWinter(float_t  value) ;

constexpr void __cordl_internal_set_seasonalProbability(bool  value) ;

constexpr void __cordl_internal_set_showEditor(bool  value) ;

constexpr void __cordl_internal_set_weatherType(::UnityW<::Enviro::EnviroWeatherType>  value) ;

/// @brief Method .ctor, addr 0x180629b70, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroZoneWeather() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroZoneWeather", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroZoneWeather(EnviroZoneWeather && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroZoneWeather", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroZoneWeather(EnviroZoneWeather const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18523};

/// @brief Field showEditor, offset: 0x10, size: 0x1, def value: None
 bool  ___showEditor;

/// @brief Field weatherType, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Enviro::EnviroWeatherType>  ___weatherType;

/// @brief Field probability, offset: 0x20, size: 0x4, def value: None
 float_t  ___probability;

/// @brief Field seasonalProbability, offset: 0x24, size: 0x1, def value: None
 bool  ___seasonalProbability;

/// @brief Field probabilitySpring, offset: 0x28, size: 0x4, def value: None
 float_t  ___probabilitySpring;

/// @brief Field probabilitySummer, offset: 0x2c, size: 0x4, def value: None
 float_t  ___probabilitySummer;

/// @brief Field probabilityAutumn, offset: 0x30, size: 0x4, def value: None
 float_t  ___probabilityAutumn;

/// @brief Field probabilityWinter, offset: 0x34, size: 0x4, def value: None
 float_t  ___probabilityWinter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroZoneWeather, ___showEditor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZoneWeather, ___weatherType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZoneWeather, ___probability) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZoneWeather, ___seasonalProbability) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZoneWeather, ___probabilitySpring) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZoneWeather, ___probabilitySummer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZoneWeather, ___probabilityAutumn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroZoneWeather, ___probabilityWinter) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroZoneWeather) == 0x38, "Size mismatch!");

} // namespace end def Enviro
