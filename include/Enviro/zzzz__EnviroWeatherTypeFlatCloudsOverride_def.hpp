#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeFlatCloudsOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EnviroWeatherTypeFlatCloudsOverride)
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeFlatCloudsOverride;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeFlatCloudsOverride*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeFlatCloudsOverride*, "Enviro", "EnviroWeatherTypeFlatCloudsOverride");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeFlatCloudsOverride
class CORDL_TYPE EnviroWeatherTypeFlatCloudsOverride : public ::System::Object {
public:
// Declarations
/// @brief Field cirrusCloudsAlpha, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_cirrusCloudsAlpha, put=__cordl_internal_set_cirrusCloudsAlpha)) float_t  cirrusCloudsAlpha;

/// @brief Field cirrusCloudsColorPower, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_cirrusCloudsColorPower, put=__cordl_internal_set_cirrusCloudsColorPower)) float_t  cirrusCloudsColorPower;

/// @brief Field cirrusCloudsCoverage, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_cirrusCloudsCoverage, put=__cordl_internal_set_cirrusCloudsCoverage)) float_t  cirrusCloudsCoverage;

/// @brief Field flatCloudsAmbientIntensity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsAmbientIntensity, put=__cordl_internal_set_flatCloudsAmbientIntensity)) float_t  flatCloudsAmbientIntensity;

/// @brief Field flatCloudsCoverage, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsCoverage, put=__cordl_internal_set_flatCloudsCoverage)) float_t  flatCloudsCoverage;

/// @brief Field flatCloudsDensity, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsDensity, put=__cordl_internal_set_flatCloudsDensity)) float_t  flatCloudsDensity;

/// @brief Field flatCloudsLightIntensity, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsLightIntensity, put=__cordl_internal_set_flatCloudsLightIntensity)) float_t  flatCloudsLightIntensity;

/// @brief Field flatCloudsShadowIntensity, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsShadowIntensity, put=__cordl_internal_set_flatCloudsShadowIntensity)) float_t  flatCloudsShadowIntensity;

/// @brief Field flatCloudsShadowSteps, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_flatCloudsShadowSteps, put=__cordl_internal_set_flatCloudsShadowSteps)) int32_t  flatCloudsShadowSteps;

static inline ::Enviro::EnviroWeatherTypeFlatCloudsOverride* New_ctor() ;

constexpr float_t const& __cordl_internal_get_cirrusCloudsAlpha() const;

constexpr float_t& __cordl_internal_get_cirrusCloudsAlpha() ;

constexpr float_t const& __cordl_internal_get_cirrusCloudsColorPower() const;

constexpr float_t& __cordl_internal_get_cirrusCloudsColorPower() ;

constexpr float_t const& __cordl_internal_get_cirrusCloudsCoverage() const;

constexpr float_t& __cordl_internal_get_cirrusCloudsCoverage() ;

constexpr float_t const& __cordl_internal_get_flatCloudsAmbientIntensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsAmbientIntensity() ;

constexpr float_t const& __cordl_internal_get_flatCloudsCoverage() const;

constexpr float_t& __cordl_internal_get_flatCloudsCoverage() ;

constexpr float_t const& __cordl_internal_get_flatCloudsDensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsDensity() ;

constexpr float_t const& __cordl_internal_get_flatCloudsLightIntensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsLightIntensity() ;

constexpr float_t const& __cordl_internal_get_flatCloudsShadowIntensity() const;

constexpr float_t& __cordl_internal_get_flatCloudsShadowIntensity() ;

constexpr int32_t const& __cordl_internal_get_flatCloudsShadowSteps() const;

constexpr int32_t& __cordl_internal_get_flatCloudsShadowSteps() ;

constexpr void __cordl_internal_set_cirrusCloudsAlpha(float_t  value) ;

constexpr void __cordl_internal_set_cirrusCloudsColorPower(float_t  value) ;

constexpr void __cordl_internal_set_cirrusCloudsCoverage(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsAmbientIntensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsCoverage(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsDensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsLightIntensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsShadowIntensity(float_t  value) ;

constexpr void __cordl_internal_set_flatCloudsShadowSteps(int32_t  value) ;

/// @brief Method .ctor, addr 0x180629a20, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeFlatCloudsOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeFlatCloudsOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeFlatCloudsOverride(EnviroWeatherTypeFlatCloudsOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeFlatCloudsOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeFlatCloudsOverride(EnviroWeatherTypeFlatCloudsOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18510};

/// @brief Field cirrusCloudsAlpha, offset: 0x10, size: 0x4, def value: None
 float_t  ___cirrusCloudsAlpha;

/// @brief Field cirrusCloudsCoverage, offset: 0x14, size: 0x4, def value: None
 float_t  ___cirrusCloudsCoverage;

/// @brief Field cirrusCloudsColorPower, offset: 0x18, size: 0x4, def value: None
 float_t  ___cirrusCloudsColorPower;

/// @brief Field flatCloudsCoverage, offset: 0x1c, size: 0x4, def value: None
 float_t  ___flatCloudsCoverage;

/// @brief Field flatCloudsDensity, offset: 0x20, size: 0x4, def value: None
 float_t  ___flatCloudsDensity;

/// @brief Field flatCloudsLightIntensity, offset: 0x24, size: 0x4, def value: None
 float_t  ___flatCloudsLightIntensity;

/// @brief Field flatCloudsAmbientIntensity, offset: 0x28, size: 0x4, def value: None
 float_t  ___flatCloudsAmbientIntensity;

/// @brief Field flatCloudsShadowIntensity, offset: 0x2c, size: 0x4, def value: None
 float_t  ___flatCloudsShadowIntensity;

/// @brief Field flatCloudsShadowSteps, offset: 0x30, size: 0x4, def value: None
 int32_t  ___flatCloudsShadowSteps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherTypeFlatCloudsOverride, ___cirrusCloudsAlpha) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFlatCloudsOverride, ___cirrusCloudsCoverage) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFlatCloudsOverride, ___cirrusCloudsColorPower) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFlatCloudsOverride, ___flatCloudsCoverage) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFlatCloudsOverride, ___flatCloudsDensity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFlatCloudsOverride, ___flatCloudsLightIntensity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFlatCloudsOverride, ___flatCloudsAmbientIntensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFlatCloudsOverride, ___flatCloudsShadowIntensity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeFlatCloudsOverride, ___flatCloudsShadowSteps) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherTypeFlatCloudsOverride) == 0x38, "Size mismatch!");

} // namespace end def Enviro
