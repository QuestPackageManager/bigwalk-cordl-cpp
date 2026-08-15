#pragma once
// IWYU pragma private; include "Enviro/EnviroEnvironment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroEnvironment)
namespace Enviro {
struct EnviroEnvironment_Seasons;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Enviro {
struct EnviroEnvironment_Seasons;
}
namespace Enviro {
class EnviroEnvironment;
}
// Write type traits
MARK_VAL_T(::Enviro::EnviroEnvironment_Seasons);
MARK_REF_T(::Enviro::EnviroEnvironment*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEnvironment_Seasons, "Enviro", "EnviroEnvironment/Seasons");
DEFINE_IL2CPP_CLASS(::Enviro::EnviroEnvironment*, "Enviro", "EnviroEnvironment");
// Dependencies 
namespace Enviro {
// Is value type: true
// CS Name: Enviro.EnviroEnvironment/Seasons
struct CORDL_TYPE EnviroEnvironment_Seasons {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EnviroEnvironment_Seasons_Unwrapped
enum struct __EnviroEnvironment_Seasons_Unwrapped : int32_t {
__E_Spring = static_cast<int32_t>(0x0),
__E_Summer = static_cast<int32_t>(0x1),
__E_Autumn = static_cast<int32_t>(0x2),
__E_Winter = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EnviroEnvironment_Seasons_Unwrapped () const noexcept {
return static_cast<__EnviroEnvironment_Seasons_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EnviroEnvironment_Seasons() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EnviroEnvironment_Seasons(int32_t  value__) noexcept;

/// @brief Field Autumn value: I32(2)
static ::Enviro::EnviroEnvironment_Seasons const Autumn;

/// @brief Field Spring value: I32(0)
static ::Enviro::EnviroEnvironment_Seasons const Spring;

/// @brief Field Summer value: I32(1)
static ::Enviro::EnviroEnvironment_Seasons const Summer;

/// @brief Field Winter value: I32(3)
static ::Enviro::EnviroEnvironment_Seasons const Winter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18446};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEnvironment_Seasons, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEnvironment_Seasons) == 0x4, "Size mismatch!");

} // namespace end def Enviro
// Dependencies Enviro.EnviroEnvironment::Seasons, System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroEnvironment
class CORDL_TYPE EnviroEnvironment : public ::System::Object {
public:
// Declarations
using Seasons = ::Enviro::EnviroEnvironment_Seasons;

/// @brief Field autumnBaseTemperature, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_autumnBaseTemperature, put=__cordl_internal_set_autumnBaseTemperature)) ::UnityEngine::AnimationCurve*  autumnBaseTemperature;

/// @brief Field autumnEnd, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_autumnEnd, put=__cordl_internal_set_autumnEnd)) int32_t  autumnEnd;

/// @brief Field autumnStart, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_autumnStart, put=__cordl_internal_set_autumnStart)) int32_t  autumnStart;

/// @brief Field changeSeason, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_changeSeason, put=__cordl_internal_set_changeSeason)) bool  changeSeason;

/// @brief Field season, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_season, put=__cordl_internal_set_season)) ::Enviro::EnviroEnvironment_Seasons  season;

/// @brief Field snow, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_snow, put=__cordl_internal_set_snow)) float_t  snow;

/// @brief Field snowAccumulationSpeed, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_snowAccumulationSpeed, put=__cordl_internal_set_snowAccumulationSpeed)) float_t  snowAccumulationSpeed;

/// @brief Field snowMeltSpeed, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_snowMeltSpeed, put=__cordl_internal_set_snowMeltSpeed)) float_t  snowMeltSpeed;

/// @brief Field snowMeltingTresholdTemperature, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_snowMeltingTresholdTemperature, put=__cordl_internal_set_snowMeltingTresholdTemperature)) float_t  snowMeltingTresholdTemperature;

/// @brief Field snowTarget, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_snowTarget, put=__cordl_internal_set_snowTarget)) float_t  snowTarget;

/// @brief Field springBaseTemperature, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_springBaseTemperature, put=__cordl_internal_set_springBaseTemperature)) ::UnityEngine::AnimationCurve*  springBaseTemperature;

/// @brief Field springEnd, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_springEnd, put=__cordl_internal_set_springEnd)) int32_t  springEnd;

/// @brief Field springStart, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_springStart, put=__cordl_internal_set_springStart)) int32_t  springStart;

/// @brief Field summerBaseTemperature, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_summerBaseTemperature, put=__cordl_internal_set_summerBaseTemperature)) ::UnityEngine::AnimationCurve*  summerBaseTemperature;

/// @brief Field summerEnd, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_summerEnd, put=__cordl_internal_set_summerEnd)) int32_t  summerEnd;

/// @brief Field summerStart, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_summerStart, put=__cordl_internal_set_summerStart)) int32_t  summerStart;

/// @brief Field temperature, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_temperature, put=__cordl_internal_set_temperature)) float_t  temperature;

/// @brief Field temperatureChangingSpeed, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_temperatureChangingSpeed, put=__cordl_internal_set_temperatureChangingSpeed)) float_t  temperatureChangingSpeed;

/// @brief Field temperatureCustomMod, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_temperatureCustomMod, put=__cordl_internal_set_temperatureCustomMod)) float_t  temperatureCustomMod;

/// @brief Field temperatureWeatherMod, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_temperatureWeatherMod, put=__cordl_internal_set_temperatureWeatherMod)) float_t  temperatureWeatherMod;

/// @brief Field wetness, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_wetness, put=__cordl_internal_set_wetness)) float_t  wetness;

/// @brief Field wetnessAccumulationSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_wetnessAccumulationSpeed, put=__cordl_internal_set_wetnessAccumulationSpeed)) float_t  wetnessAccumulationSpeed;

/// @brief Field wetnessDrySpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_wetnessDrySpeed, put=__cordl_internal_set_wetnessDrySpeed)) float_t  wetnessDrySpeed;

/// @brief Field wetnessTarget, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_wetnessTarget, put=__cordl_internal_set_wetnessTarget)) float_t  wetnessTarget;

/// @brief Field windDirectionX, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_windDirectionX, put=__cordl_internal_set_windDirectionX)) float_t  windDirectionX;

/// @brief Field windDirectionY, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_windDirectionY, put=__cordl_internal_set_windDirectionY)) float_t  windDirectionY;

/// @brief Field windSpeed, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_windSpeed, put=__cordl_internal_set_windSpeed)) float_t  windSpeed;

/// @brief Field windTurbulence, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_windTurbulence, put=__cordl_internal_set_windTurbulence)) float_t  windTurbulence;

/// @brief Field winterBaseTemperature, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_winterBaseTemperature, put=__cordl_internal_set_winterBaseTemperature)) ::UnityEngine::AnimationCurve*  winterBaseTemperature;

/// @brief Field winterEnd, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_winterEnd, put=__cordl_internal_set_winterEnd)) int32_t  winterEnd;

/// @brief Field winterStart, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_winterStart, put=__cordl_internal_set_winterStart)) int32_t  winterStart;

static inline ::Enviro::EnviroEnvironment* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_autumnBaseTemperature() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_autumnBaseTemperature() ;

constexpr int32_t const& __cordl_internal_get_autumnEnd() const;

constexpr int32_t& __cordl_internal_get_autumnEnd() ;

constexpr int32_t const& __cordl_internal_get_autumnStart() const;

constexpr int32_t& __cordl_internal_get_autumnStart() ;

constexpr bool const& __cordl_internal_get_changeSeason() const;

constexpr bool& __cordl_internal_get_changeSeason() ;

constexpr ::Enviro::EnviroEnvironment_Seasons const& __cordl_internal_get_season() const;

constexpr ::Enviro::EnviroEnvironment_Seasons& __cordl_internal_get_season() ;

constexpr float_t const& __cordl_internal_get_snow() const;

constexpr float_t& __cordl_internal_get_snow() ;

constexpr float_t const& __cordl_internal_get_snowAccumulationSpeed() const;

constexpr float_t& __cordl_internal_get_snowAccumulationSpeed() ;

constexpr float_t const& __cordl_internal_get_snowMeltSpeed() const;

constexpr float_t& __cordl_internal_get_snowMeltSpeed() ;

constexpr float_t const& __cordl_internal_get_snowMeltingTresholdTemperature() const;

constexpr float_t& __cordl_internal_get_snowMeltingTresholdTemperature() ;

constexpr float_t const& __cordl_internal_get_snowTarget() const;

constexpr float_t& __cordl_internal_get_snowTarget() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_springBaseTemperature() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_springBaseTemperature() ;

constexpr int32_t const& __cordl_internal_get_springEnd() const;

constexpr int32_t& __cordl_internal_get_springEnd() ;

constexpr int32_t const& __cordl_internal_get_springStart() const;

constexpr int32_t& __cordl_internal_get_springStart() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_summerBaseTemperature() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_summerBaseTemperature() ;

constexpr int32_t const& __cordl_internal_get_summerEnd() const;

constexpr int32_t& __cordl_internal_get_summerEnd() ;

constexpr int32_t const& __cordl_internal_get_summerStart() const;

constexpr int32_t& __cordl_internal_get_summerStart() ;

constexpr float_t const& __cordl_internal_get_temperature() const;

constexpr float_t& __cordl_internal_get_temperature() ;

constexpr float_t const& __cordl_internal_get_temperatureChangingSpeed() const;

constexpr float_t& __cordl_internal_get_temperatureChangingSpeed() ;

constexpr float_t const& __cordl_internal_get_temperatureCustomMod() const;

constexpr float_t& __cordl_internal_get_temperatureCustomMod() ;

constexpr float_t const& __cordl_internal_get_temperatureWeatherMod() const;

constexpr float_t& __cordl_internal_get_temperatureWeatherMod() ;

constexpr float_t const& __cordl_internal_get_wetness() const;

constexpr float_t& __cordl_internal_get_wetness() ;

constexpr float_t const& __cordl_internal_get_wetnessAccumulationSpeed() const;

constexpr float_t& __cordl_internal_get_wetnessAccumulationSpeed() ;

constexpr float_t const& __cordl_internal_get_wetnessDrySpeed() const;

constexpr float_t& __cordl_internal_get_wetnessDrySpeed() ;

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

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_winterBaseTemperature() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_winterBaseTemperature() ;

constexpr int32_t const& __cordl_internal_get_winterEnd() const;

constexpr int32_t& __cordl_internal_get_winterEnd() ;

constexpr int32_t const& __cordl_internal_get_winterStart() const;

constexpr int32_t& __cordl_internal_get_winterStart() ;

constexpr void __cordl_internal_set_autumnBaseTemperature(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_autumnEnd(int32_t  value) ;

constexpr void __cordl_internal_set_autumnStart(int32_t  value) ;

constexpr void __cordl_internal_set_changeSeason(bool  value) ;

constexpr void __cordl_internal_set_season(::Enviro::EnviroEnvironment_Seasons  value) ;

constexpr void __cordl_internal_set_snow(float_t  value) ;

constexpr void __cordl_internal_set_snowAccumulationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_snowMeltSpeed(float_t  value) ;

constexpr void __cordl_internal_set_snowMeltingTresholdTemperature(float_t  value) ;

constexpr void __cordl_internal_set_snowTarget(float_t  value) ;

constexpr void __cordl_internal_set_springBaseTemperature(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_springEnd(int32_t  value) ;

constexpr void __cordl_internal_set_springStart(int32_t  value) ;

constexpr void __cordl_internal_set_summerBaseTemperature(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_summerEnd(int32_t  value) ;

constexpr void __cordl_internal_set_summerStart(int32_t  value) ;

constexpr void __cordl_internal_set_temperature(float_t  value) ;

constexpr void __cordl_internal_set_temperatureChangingSpeed(float_t  value) ;

constexpr void __cordl_internal_set_temperatureCustomMod(float_t  value) ;

constexpr void __cordl_internal_set_temperatureWeatherMod(float_t  value) ;

constexpr void __cordl_internal_set_wetness(float_t  value) ;

constexpr void __cordl_internal_set_wetnessAccumulationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_wetnessDrySpeed(float_t  value) ;

constexpr void __cordl_internal_set_wetnessTarget(float_t  value) ;

constexpr void __cordl_internal_set_windDirectionX(float_t  value) ;

constexpr void __cordl_internal_set_windDirectionY(float_t  value) ;

constexpr void __cordl_internal_set_windSpeed(float_t  value) ;

constexpr void __cordl_internal_set_windTurbulence(float_t  value) ;

constexpr void __cordl_internal_set_winterBaseTemperature(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_winterEnd(int32_t  value) ;

constexpr void __cordl_internal_set_winterStart(int32_t  value) ;

/// @brief Method .ctor, addr 0x18060dc10, size 0x140, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroEnvironment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroEnvironment", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroEnvironment(EnviroEnvironment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroEnvironment", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroEnvironment(EnviroEnvironment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18447};

/// @brief Field season, offset: 0x10, size: 0x4, def value: None
 ::Enviro::EnviroEnvironment_Seasons  ___season;

/// @brief Field changeSeason, offset: 0x14, size: 0x1, def value: None
 bool  ___changeSeason;

/// @brief Field springStart, offset: 0x18, size: 0x4, def value: None
 int32_t  ___springStart;

/// @brief Field springEnd, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___springEnd;

/// @brief Field summerStart, offset: 0x20, size: 0x4, def value: None
 int32_t  ___summerStart;

/// @brief Field summerEnd, offset: 0x24, size: 0x4, def value: None
 int32_t  ___summerEnd;

/// @brief Field autumnStart, offset: 0x28, size: 0x4, def value: None
 int32_t  ___autumnStart;

/// @brief Field autumnEnd, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___autumnEnd;

/// @brief Field winterStart, offset: 0x30, size: 0x4, def value: None
 int32_t  ___winterStart;

/// @brief Field winterEnd, offset: 0x34, size: 0x4, def value: None
 int32_t  ___winterEnd;

/// @brief Field springBaseTemperature, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___springBaseTemperature;

/// @brief Field summerBaseTemperature, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___summerBaseTemperature;

/// @brief Field autumnBaseTemperature, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___autumnBaseTemperature;

/// @brief Field winterBaseTemperature, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___winterBaseTemperature;

/// @brief Field temperature, offset: 0x58, size: 0x4, def value: None
 float_t  ___temperature;

/// @brief Field temperatureWeatherMod, offset: 0x5c, size: 0x4, def value: None
 float_t  ___temperatureWeatherMod;

/// @brief Field temperatureCustomMod, offset: 0x60, size: 0x4, def value: None
 float_t  ___temperatureCustomMod;

/// @brief Field temperatureChangingSpeed, offset: 0x64, size: 0x4, def value: None
 float_t  ___temperatureChangingSpeed;

/// @brief Field wetness, offset: 0x68, size: 0x4, def value: None
 float_t  ___wetness;

/// @brief Field wetnessTarget, offset: 0x6c, size: 0x4, def value: None
 float_t  ___wetnessTarget;

/// @brief Field snow, offset: 0x70, size: 0x4, def value: None
 float_t  ___snow;

/// @brief Field snowTarget, offset: 0x74, size: 0x4, def value: None
 float_t  ___snowTarget;

/// @brief Field wetnessAccumulationSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___wetnessAccumulationSpeed;

/// @brief Field wetnessDrySpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___wetnessDrySpeed;

/// @brief Field snowAccumulationSpeed, offset: 0x80, size: 0x4, def value: None
 float_t  ___snowAccumulationSpeed;

/// @brief Field snowMeltSpeed, offset: 0x84, size: 0x4, def value: None
 float_t  ___snowMeltSpeed;

/// @brief Field snowMeltingTresholdTemperature, offset: 0x88, size: 0x4, def value: None
 float_t  ___snowMeltingTresholdTemperature;

/// @brief Field windDirectionX, offset: 0x8c, size: 0x4, def value: None
 float_t  ___windDirectionX;

/// @brief Field windDirectionY, offset: 0x90, size: 0x4, def value: None
 float_t  ___windDirectionY;

/// @brief Field windSpeed, offset: 0x94, size: 0x4, def value: None
 float_t  ___windSpeed;

/// @brief Field windTurbulence, offset: 0x98, size: 0x4, def value: None
 float_t  ___windTurbulence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroEnvironment, ___season) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___changeSeason) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___springStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___springEnd) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___summerStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___summerEnd) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___autumnStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___autumnEnd) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___winterStart) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___winterEnd) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___springBaseTemperature) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___summerBaseTemperature) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___autumnBaseTemperature) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___winterBaseTemperature) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___temperature) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___temperatureWeatherMod) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___temperatureCustomMod) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___temperatureChangingSpeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___wetness) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___wetnessTarget) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___snow) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___snowTarget) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___wetnessAccumulationSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___wetnessDrySpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___snowAccumulationSpeed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___snowMeltSpeed) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___snowMeltingTresholdTemperature) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___windDirectionX) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___windDirectionY) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___windSpeed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroEnvironment, ___windTurbulence) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroEnvironment) == 0xa0, "Size mismatch!");

} // namespace end def Enviro
