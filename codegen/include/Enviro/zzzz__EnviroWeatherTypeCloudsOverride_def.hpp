#pragma once
// IWYU pragma private; include "Enviro/EnviroWeatherTypeCloudsOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroWeatherTypeCloudsOverride)
// Forward declare root types
namespace Enviro {
class EnviroWeatherTypeCloudsOverride;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroWeatherTypeCloudsOverride*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroWeatherTypeCloudsOverride*, "Enviro", "EnviroWeatherTypeCloudsOverride");
// Dependencies System.Object
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroWeatherTypeCloudsOverride
class CORDL_TYPE EnviroWeatherTypeCloudsOverride : public ::System::Object {
public:
// Declarations
/// @brief Field ambientFloor, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientFloor, put=__cordl_internal_set_ambientFloor)) float_t  ambientFloor;

/// @brief Field ambientLightIntensity, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientLightIntensity, put=__cordl_internal_set_ambientLightIntensity)) float_t  ambientLightIntensity;

/// @brief Field baseErosionIntensity, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseErosionIntensity, put=__cordl_internal_set_baseErosionIntensity)) float_t  baseErosionIntensity;

/// @brief Field baseNoiseMultiplier, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseNoiseMultiplier, put=__cordl_internal_set_baseNoiseMultiplier)) float_t  baseNoiseMultiplier;

/// @brief Field baseNoiseUVMultiplier, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseNoiseUVMultiplier, put=__cordl_internal_set_baseNoiseUVMultiplier)) float_t  baseNoiseUVMultiplier;

/// @brief Field bottomShape, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bottomShape, put=__cordl_internal_set_bottomShape)) float_t  bottomShape;

/// @brief Field cloudTypeShaping, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudTypeShaping, put=__cordl_internal_set_cloudTypeShaping)) float_t  cloudTypeShaping;

/// @brief Field coverage, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_coverage, put=__cordl_internal_set_coverage)) float_t  coverage;

/// @brief Field curlIntensity, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_curlIntensity, put=__cordl_internal_set_curlIntensity)) float_t  curlIntensity;

/// @brief Field density, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_density, put=__cordl_internal_set_density)) float_t  density;

/// @brief Field densitySmoothness, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_densitySmoothness, put=__cordl_internal_set_densitySmoothness)) float_t  densitySmoothness;

/// @brief Field detailErosionIntensity, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailErosionIntensity, put=__cordl_internal_set_detailErosionIntensity)) float_t  detailErosionIntensity;

/// @brief Field detailNoiseMultiplier, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailNoiseMultiplier, put=__cordl_internal_set_detailNoiseMultiplier)) float_t  detailNoiseMultiplier;

/// @brief Field detailNoiseUVMultiplier, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailNoiseUVMultiplier, put=__cordl_internal_set_detailNoiseUVMultiplier)) float_t  detailNoiseUVMultiplier;

/// @brief Field dilateCoverage, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_dilateCoverage, put=__cordl_internal_set_dilateCoverage)) float_t  dilateCoverage;

/// @brief Field dilateType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dilateType, put=__cordl_internal_set_dilateType)) float_t  dilateType;

/// @brief Field edgeHighlightStrength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_edgeHighlightStrength, put=__cordl_internal_set_edgeHighlightStrength)) float_t  edgeHighlightStrength;

/// @brief Field exposure, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_exposure, put=__cordl_internal_set_exposure)) float_t  exposure;

/// @brief Field lightningIntensity, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightningIntensity, put=__cordl_internal_set_lightningIntensity)) float_t  lightningIntensity;

/// @brief Field ligthAbsorbtion, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ligthAbsorbtion, put=__cordl_internal_set_ligthAbsorbtion)) float_t  ligthAbsorbtion;

/// @brief Field midShape, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_midShape, put=__cordl_internal_set_midShape)) float_t  midShape;

/// @brief Field multiScatterFalloff, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_multiScatterFalloff, put=__cordl_internal_set_multiScatterFalloff)) float_t  multiScatterFalloff;

/// @brief Field multiScatterStrength, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_multiScatterStrength, put=__cordl_internal_set_multiScatterStrength)) float_t  multiScatterStrength;

/// @brief Field rampShape, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rampShape, put=__cordl_internal_set_rampShape)) float_t  rampShape;

/// @brief Field scatteringIntensity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_scatteringIntensity, put=__cordl_internal_set_scatteringIntensity)) float_t  scatteringIntensity;

/// @brief Field silverLiningIntensity, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_silverLiningIntensity, put=__cordl_internal_set_silverLiningIntensity)) float_t  silverLiningIntensity;

/// @brief Field silverLiningSpread, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_silverLiningSpread, put=__cordl_internal_set_silverLiningSpread)) float_t  silverLiningSpread;

/// @brief Field topLayer, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_topLayer, put=__cordl_internal_set_topLayer)) float_t  topLayer;

/// @brief Field topShape, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_topShape, put=__cordl_internal_set_topShape)) float_t  topShape;

/// @brief Field typeModifier, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_typeModifier, put=__cordl_internal_set_typeModifier)) float_t  typeModifier;

static inline ::Enviro::EnviroWeatherTypeCloudsOverride* New_ctor() ;

constexpr float_t const& __cordl_internal_get_ambientFloor() const;

constexpr float_t& __cordl_internal_get_ambientFloor() ;

constexpr float_t const& __cordl_internal_get_ambientLightIntensity() const;

constexpr float_t& __cordl_internal_get_ambientLightIntensity() ;

constexpr float_t const& __cordl_internal_get_baseErosionIntensity() const;

constexpr float_t& __cordl_internal_get_baseErosionIntensity() ;

constexpr float_t const& __cordl_internal_get_baseNoiseMultiplier() const;

constexpr float_t& __cordl_internal_get_baseNoiseMultiplier() ;

constexpr float_t const& __cordl_internal_get_baseNoiseUVMultiplier() const;

constexpr float_t& __cordl_internal_get_baseNoiseUVMultiplier() ;

constexpr float_t const& __cordl_internal_get_bottomShape() const;

constexpr float_t& __cordl_internal_get_bottomShape() ;

constexpr float_t const& __cordl_internal_get_cloudTypeShaping() const;

constexpr float_t& __cordl_internal_get_cloudTypeShaping() ;

constexpr float_t const& __cordl_internal_get_coverage() const;

constexpr float_t& __cordl_internal_get_coverage() ;

constexpr float_t const& __cordl_internal_get_curlIntensity() const;

constexpr float_t& __cordl_internal_get_curlIntensity() ;

constexpr float_t const& __cordl_internal_get_density() const;

constexpr float_t& __cordl_internal_get_density() ;

constexpr float_t const& __cordl_internal_get_densitySmoothness() const;

constexpr float_t& __cordl_internal_get_densitySmoothness() ;

constexpr float_t const& __cordl_internal_get_detailErosionIntensity() const;

constexpr float_t& __cordl_internal_get_detailErosionIntensity() ;

constexpr float_t const& __cordl_internal_get_detailNoiseMultiplier() const;

constexpr float_t& __cordl_internal_get_detailNoiseMultiplier() ;

constexpr float_t const& __cordl_internal_get_detailNoiseUVMultiplier() const;

constexpr float_t& __cordl_internal_get_detailNoiseUVMultiplier() ;

constexpr float_t const& __cordl_internal_get_dilateCoverage() const;

constexpr float_t& __cordl_internal_get_dilateCoverage() ;

constexpr float_t const& __cordl_internal_get_dilateType() const;

constexpr float_t& __cordl_internal_get_dilateType() ;

constexpr float_t const& __cordl_internal_get_edgeHighlightStrength() const;

constexpr float_t& __cordl_internal_get_edgeHighlightStrength() ;

constexpr float_t const& __cordl_internal_get_exposure() const;

constexpr float_t& __cordl_internal_get_exposure() ;

constexpr float_t const& __cordl_internal_get_lightningIntensity() const;

constexpr float_t& __cordl_internal_get_lightningIntensity() ;

constexpr float_t const& __cordl_internal_get_ligthAbsorbtion() const;

constexpr float_t& __cordl_internal_get_ligthAbsorbtion() ;

constexpr float_t const& __cordl_internal_get_midShape() const;

constexpr float_t& __cordl_internal_get_midShape() ;

constexpr float_t const& __cordl_internal_get_multiScatterFalloff() const;

constexpr float_t& __cordl_internal_get_multiScatterFalloff() ;

constexpr float_t const& __cordl_internal_get_multiScatterStrength() const;

constexpr float_t& __cordl_internal_get_multiScatterStrength() ;

constexpr float_t const& __cordl_internal_get_rampShape() const;

constexpr float_t& __cordl_internal_get_rampShape() ;

constexpr float_t const& __cordl_internal_get_scatteringIntensity() const;

constexpr float_t& __cordl_internal_get_scatteringIntensity() ;

constexpr float_t const& __cordl_internal_get_silverLiningIntensity() const;

constexpr float_t& __cordl_internal_get_silverLiningIntensity() ;

constexpr float_t const& __cordl_internal_get_silverLiningSpread() const;

constexpr float_t& __cordl_internal_get_silverLiningSpread() ;

constexpr float_t const& __cordl_internal_get_topLayer() const;

constexpr float_t& __cordl_internal_get_topLayer() ;

constexpr float_t const& __cordl_internal_get_topShape() const;

constexpr float_t& __cordl_internal_get_topShape() ;

constexpr float_t const& __cordl_internal_get_typeModifier() const;

constexpr float_t& __cordl_internal_get_typeModifier() ;

constexpr void __cordl_internal_set_ambientFloor(float_t  value) ;

constexpr void __cordl_internal_set_ambientLightIntensity(float_t  value) ;

constexpr void __cordl_internal_set_baseErosionIntensity(float_t  value) ;

constexpr void __cordl_internal_set_baseNoiseMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_baseNoiseUVMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_bottomShape(float_t  value) ;

constexpr void __cordl_internal_set_cloudTypeShaping(float_t  value) ;

constexpr void __cordl_internal_set_coverage(float_t  value) ;

constexpr void __cordl_internal_set_curlIntensity(float_t  value) ;

constexpr void __cordl_internal_set_density(float_t  value) ;

constexpr void __cordl_internal_set_densitySmoothness(float_t  value) ;

constexpr void __cordl_internal_set_detailErosionIntensity(float_t  value) ;

constexpr void __cordl_internal_set_detailNoiseMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_detailNoiseUVMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_dilateCoverage(float_t  value) ;

constexpr void __cordl_internal_set_dilateType(float_t  value) ;

constexpr void __cordl_internal_set_edgeHighlightStrength(float_t  value) ;

constexpr void __cordl_internal_set_exposure(float_t  value) ;

constexpr void __cordl_internal_set_lightningIntensity(float_t  value) ;

constexpr void __cordl_internal_set_ligthAbsorbtion(float_t  value) ;

constexpr void __cordl_internal_set_midShape(float_t  value) ;

constexpr void __cordl_internal_set_multiScatterFalloff(float_t  value) ;

constexpr void __cordl_internal_set_multiScatterStrength(float_t  value) ;

constexpr void __cordl_internal_set_rampShape(float_t  value) ;

constexpr void __cordl_internal_set_scatteringIntensity(float_t  value) ;

constexpr void __cordl_internal_set_silverLiningIntensity(float_t  value) ;

constexpr void __cordl_internal_set_silverLiningSpread(float_t  value) ;

constexpr void __cordl_internal_set_topLayer(float_t  value) ;

constexpr void __cordl_internal_set_topShape(float_t  value) ;

constexpr void __cordl_internal_set_typeModifier(float_t  value) ;

/// @brief Method .ctor, addr 0x180629750, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroWeatherTypeCloudsOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeCloudsOverride", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroWeatherTypeCloudsOverride(EnviroWeatherTypeCloudsOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroWeatherTypeCloudsOverride", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroWeatherTypeCloudsOverride(EnviroWeatherTypeCloudsOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18509};

/// @brief Field ambientLightIntensity, offset: 0x10, size: 0x4, def value: None
 float_t  ___ambientLightIntensity;

/// @brief Field coverage, offset: 0x14, size: 0x4, def value: None
 float_t  ___coverage;

/// @brief Field dilateCoverage, offset: 0x18, size: 0x4, def value: None
 float_t  ___dilateCoverage;

/// @brief Field dilateType, offset: 0x1c, size: 0x4, def value: None
 float_t  ___dilateType;

/// @brief Field typeModifier, offset: 0x20, size: 0x4, def value: None
 float_t  ___typeModifier;

/// @brief Field cloudTypeShaping, offset: 0x24, size: 0x4, def value: None
 float_t  ___cloudTypeShaping;

/// @brief Field scatteringIntensity, offset: 0x28, size: 0x4, def value: None
 float_t  ___scatteringIntensity;

/// @brief Field multiScatterStrength, offset: 0x2c, size: 0x4, def value: None
 float_t  ___multiScatterStrength;

/// @brief Field multiScatterFalloff, offset: 0x30, size: 0x4, def value: None
 float_t  ___multiScatterFalloff;

/// @brief Field ambientFloor, offset: 0x34, size: 0x4, def value: None
 float_t  ___ambientFloor;

/// @brief Field lightningIntensity, offset: 0x38, size: 0x4, def value: None
 float_t  ___lightningIntensity;

/// @brief Field exposure, offset: 0x3c, size: 0x4, def value: None
 float_t  ___exposure;

/// @brief Field silverLiningSpread, offset: 0x40, size: 0x4, def value: None
 float_t  ___silverLiningSpread;

/// @brief Field silverLiningIntensity, offset: 0x44, size: 0x4, def value: None
 float_t  ___silverLiningIntensity;

/// @brief Field edgeHighlightStrength, offset: 0x48, size: 0x4, def value: None
 float_t  ___edgeHighlightStrength;

/// @brief Field ligthAbsorbtion, offset: 0x4c, size: 0x4, def value: None
 float_t  ___ligthAbsorbtion;

/// @brief Field density, offset: 0x50, size: 0x4, def value: None
 float_t  ___density;

/// @brief Field densitySmoothness, offset: 0x54, size: 0x4, def value: None
 float_t  ___densitySmoothness;

/// @brief Field baseErosionIntensity, offset: 0x58, size: 0x4, def value: None
 float_t  ___baseErosionIntensity;

/// @brief Field baseNoiseMultiplier, offset: 0x5c, size: 0x4, def value: None
 float_t  ___baseNoiseMultiplier;

/// @brief Field detailErosionIntensity, offset: 0x60, size: 0x4, def value: None
 float_t  ___detailErosionIntensity;

/// @brief Field detailNoiseMultiplier, offset: 0x64, size: 0x4, def value: None
 float_t  ___detailNoiseMultiplier;

/// @brief Field curlIntensity, offset: 0x68, size: 0x4, def value: None
 float_t  ___curlIntensity;

/// @brief Field bottomShape, offset: 0x6c, size: 0x4, def value: None
 float_t  ___bottomShape;

/// @brief Field midShape, offset: 0x70, size: 0x4, def value: None
 float_t  ___midShape;

/// @brief Field topShape, offset: 0x74, size: 0x4, def value: None
 float_t  ___topShape;

/// @brief Field topLayer, offset: 0x78, size: 0x4, def value: None
 float_t  ___topLayer;

/// @brief Field rampShape, offset: 0x7c, size: 0x4, def value: None
 float_t  ___rampShape;

/// @brief Field baseNoiseUVMultiplier, offset: 0x80, size: 0x4, def value: None
 float_t  ___baseNoiseUVMultiplier;

/// @brief Field detailNoiseUVMultiplier, offset: 0x84, size: 0x4, def value: None
 float_t  ___detailNoiseUVMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___ambientLightIntensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___coverage) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___dilateCoverage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___dilateType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___typeModifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___cloudTypeShaping) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___scatteringIntensity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___multiScatterStrength) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___multiScatterFalloff) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___ambientFloor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___lightningIntensity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___exposure) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___silverLiningSpread) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___silverLiningIntensity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___edgeHighlightStrength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___ligthAbsorbtion) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___density) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___densitySmoothness) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___baseErosionIntensity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___baseNoiseMultiplier) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___detailErosionIntensity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___detailNoiseMultiplier) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___curlIntensity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___bottomShape) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___midShape) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___topShape) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___topLayer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___rampShape) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___baseNoiseUVMultiplier) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroWeatherTypeCloudsOverride, ___detailNoiseUVMultiplier) == 0x84, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroWeatherTypeCloudsOverride) == 0x88, "Size mismatch!");

} // namespace end def Enviro
