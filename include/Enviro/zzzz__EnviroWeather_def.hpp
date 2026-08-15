#pragma once
// IWYU pragma private; include "Enviro/EnviroWeather.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroWeather)
namespace Enviro {
class EnviroWeatherType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Enviro {
class EnviroWeather;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeather*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeather*, "Enviro", "EnviroWeather");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeather
class CORDL_TYPE EnviroWeather : public ::System::Object {
public:
// Declarations
/// @brief Field audioTransitionSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioTransitionSpeed, put=__cordl_internal_set_audioTransitionSpeed)) float_t  audioTransitionSpeed;

/// @brief Field auroraTransitionSpeed, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_auroraTransitionSpeed, put=__cordl_internal_set_auroraTransitionSpeed)) float_t  auroraTransitionSpeed;

/// @brief Field cloudsTransitionSpeed, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudsTransitionSpeed, put=__cordl_internal_set_cloudsTransitionSpeed)) float_t  cloudsTransitionSpeed;

/// @brief Field effectsTransitionSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_effectsTransitionSpeed, put=__cordl_internal_set_effectsTransitionSpeed)) float_t  effectsTransitionSpeed;

/// @brief Field environmentTransitionSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_environmentTransitionSpeed, put=__cordl_internal_set_environmentTransitionSpeed)) float_t  environmentTransitionSpeed;

/// @brief Field fogTransitionSpeed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fogTransitionSpeed, put=__cordl_internal_set_fogTransitionSpeed)) float_t  fogTransitionSpeed;

/// @brief Field lightingTransitionSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightingTransitionSpeed, put=__cordl_internal_set_lightingTransitionSpeed)) float_t  lightingTransitionSpeed;

/// @brief Field skyTransitionSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_skyTransitionSpeed, put=__cordl_internal_set_skyTransitionSpeed)) float_t  skyTransitionSpeed;

/// @brief Field weatherTypes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherTypes, put=__cordl_internal_set_weatherTypes)) ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroWeatherType>>*  weatherTypes;

static inline ::Enviro::EnviroWeather* New_ctor() ;

constexpr float_t const& __cordl_internal_get_audioTransitionSpeed() const;

constexpr float_t& __cordl_internal_get_audioTransitionSpeed() ;

constexpr float_t const& __cordl_internal_get_auroraTransitionSpeed() const;

constexpr float_t& __cordl_internal_get_auroraTransitionSpeed() ;

constexpr float_t const& __cordl_internal_get_cloudsTransitionSpeed() const;

constexpr float_t& __cordl_internal_get_cloudsTransitionSpeed() ;

constexpr float_t const& __cordl_internal_get_effectsTransitionSpeed() const;

constexpr float_t& __cordl_internal_get_effectsTransitionSpeed() ;

constexpr float_t const& __cordl_internal_get_environmentTransitionSpeed() const;

constexpr float_t& __cordl_internal_get_environmentTransitionSpeed() ;

constexpr float_t const& __cordl_internal_get_fogTransitionSpeed() const;

constexpr float_t& __cordl_internal_get_fogTransitionSpeed() ;

constexpr float_t const& __cordl_internal_get_lightingTransitionSpeed() const;

constexpr float_t& __cordl_internal_get_lightingTransitionSpeed() ;

constexpr float_t const& __cordl_internal_get_skyTransitionSpeed() const;

constexpr float_t& __cordl_internal_get_skyTransitionSpeed() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroWeatherType>>* const& __cordl_internal_get_weatherTypes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroWeatherType>>*& __cordl_internal_get_weatherTypes() ;

constexpr void __cordl_internal_set_audioTransitionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_auroraTransitionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_cloudsTransitionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_effectsTransitionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_environmentTransitionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_fogTransitionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_lightingTransitionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_skyTransitionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_weatherTypes(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroWeatherType>>*  value) ;

/// @brief Method .ctor, addr 0x180629af0, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeather() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeather", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeather(EnviroWeather && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeather", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeather(EnviroWeather const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18506};

/// @brief Field weatherTypes, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroWeatherType>>*  ___weatherTypes;

/// @brief Field cloudsTransitionSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  ___cloudsTransitionSpeed;

/// @brief Field fogTransitionSpeed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___fogTransitionSpeed;

/// @brief Field lightingTransitionSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___lightingTransitionSpeed;

/// @brief Field skyTransitionSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___skyTransitionSpeed;

/// @brief Field effectsTransitionSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___effectsTransitionSpeed;

/// @brief Field auroraTransitionSpeed, offset: 0x2c, size: 0x4, def value: None
 float_t  ___auroraTransitionSpeed;

/// @brief Field environmentTransitionSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___environmentTransitionSpeed;

/// @brief Field audioTransitionSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ___audioTransitionSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeather, ___weatherTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeather, ___cloudsTransitionSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeather, ___fogTransitionSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeather, ___lightingTransitionSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeather, ___skyTransitionSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeather, ___effectsTransitionSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeather, ___auroraTransitionSpeed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeather, ___environmentTransitionSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeather, ___audioTransitionSpeed) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeather) == 0x38, "Size mismatch!");

} // namespace end def Enviro
