#pragma once
// IWYU pragma private; include "Enviro/EnviroCloudLayerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnviroCloudLayerSettings)
// Forward declare root types
namespace Enviro {
class EnviroCloudLayerSettings;
}
// Write type traits
MARK_REF_T(::Enviro::EnviroCloudLayerSettings*);
DEFINE_IL2CPP_CLASS(::Enviro::EnviroCloudLayerSettings*, "Enviro", "EnviroCloudLayerSettings");
// Dependencies System.Object, UnityEngine.Vector2
namespace Enviro {
// Is value type: false
// CS Name: Enviro.EnviroCloudLayerSettings
class CORDL_TYPE EnviroCloudLayerSettings : public ::System::Object {
public:
// Declarations
/// @brief Field absorbtion, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_absorbtion, put=__cordl_internal_set_absorbtion)) float_t  absorbtion;

/// @brief Field ambientFloor, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_ambientFloor, put=__cordl_internal_set_ambientFloor)) float_t  ambientFloor;

/// @brief Field baseErosionIntensity, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseErosionIntensity, put=__cordl_internal_set_baseErosionIntensity)) float_t  baseErosionIntensity;

/// @brief Field baseNoiseMultiplier, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseNoiseMultiplier, put=__cordl_internal_set_baseNoiseMultiplier)) float_t  baseNoiseMultiplier;

/// @brief Field baseNoiseUV, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseNoiseUV, put=__cordl_internal_set_baseNoiseUV)) float_t  baseNoiseUV;

/// @brief Field baseNoiseUVMultiplier, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseNoiseUVMultiplier, put=__cordl_internal_set_baseNoiseUVMultiplier)) float_t  baseNoiseUVMultiplier;

/// @brief Field bottomCloudsHeight, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_bottomCloudsHeight, put=__cordl_internal_set_bottomCloudsHeight)) float_t  bottomCloudsHeight;

/// @brief Field bottomShape, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bottomShape, put=__cordl_internal_set_bottomShape)) float_t  bottomShape;

/// @brief Field cloudTypeShaping, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudTypeShaping, put=__cordl_internal_set_cloudTypeShaping)) float_t  cloudTypeShaping;

/// @brief Field cloudsTypeModifier, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudsTypeModifier, put=__cordl_internal_set_cloudsTypeModifier)) float_t  cloudsTypeModifier;

/// @brief Field cloudsWindDirectionXModifier, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudsWindDirectionXModifier, put=__cordl_internal_set_cloudsWindDirectionXModifier)) float_t  cloudsWindDirectionXModifier;

/// @brief Field cloudsWindDirectionYModifier, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_cloudsWindDirectionYModifier, put=__cordl_internal_set_cloudsWindDirectionYModifier)) float_t  cloudsWindDirectionYModifier;

/// @brief Field coverage, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_coverage, put=__cordl_internal_set_coverage)) float_t  coverage;

/// @brief Field curlIntensity, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_curlIntensity, put=__cordl_internal_set_curlIntensity)) float_t  curlIntensity;

/// @brief Field density, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_density, put=__cordl_internal_set_density)) float_t  density;

/// @brief Field densitySmoothness, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_densitySmoothness, put=__cordl_internal_set_densitySmoothness)) float_t  densitySmoothness;

/// @brief Field detailErosionIntensity, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailErosionIntensity, put=__cordl_internal_set_detailErosionIntensity)) float_t  detailErosionIntensity;

/// @brief Field detailNoiseMultiplier, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailNoiseMultiplier, put=__cordl_internal_set_detailNoiseMultiplier)) float_t  detailNoiseMultiplier;

/// @brief Field detailNoiseUV, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailNoiseUV, put=__cordl_internal_set_detailNoiseUV)) float_t  detailNoiseUV;

/// @brief Field detailNoiseUVMultiplier, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_detailNoiseUVMultiplier, put=__cordl_internal_set_detailNoiseUVMultiplier)) float_t  detailNoiseUVMultiplier;

/// @brief Field dilateCoverage, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dilateCoverage, put=__cordl_internal_set_dilateCoverage)) float_t  dilateCoverage;

/// @brief Field dilateType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_dilateType, put=__cordl_internal_set_dilateType)) float_t  dilateType;

/// @brief Field edgeHighlightStrength, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_edgeHighlightStrength, put=__cordl_internal_set_edgeHighlightStrength)) float_t  edgeHighlightStrength;

/// @brief Field exposure, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_exposure, put=__cordl_internal_set_exposure)) float_t  exposure;

/// @brief Field lightStepModifier, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightStepModifier, put=__cordl_internal_set_lightStepModifier)) float_t  lightStepModifier;

/// @brief Field lightningIntensity, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightningIntensity, put=__cordl_internal_set_lightningIntensity)) float_t  lightningIntensity;

/// @brief Field locationOffset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_locationOffset, put=__cordl_internal_set_locationOffset)) ::UnityEngine::Vector2  locationOffset;

/// @brief Field midShape, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_midShape, put=__cordl_internal_set_midShape)) float_t  midShape;

/// @brief Field multiScatterFalloff, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_multiScatterFalloff, put=__cordl_internal_set_multiScatterFalloff)) float_t  multiScatterFalloff;

/// @brief Field multiScatterStrength, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_multiScatterStrength, put=__cordl_internal_set_multiScatterStrength)) float_t  multiScatterStrength;

/// @brief Field rampShape, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rampShape, put=__cordl_internal_set_rampShape)) float_t  rampShape;

/// @brief Field scatteringIntensity, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_scatteringIntensity, put=__cordl_internal_set_scatteringIntensity)) float_t  scatteringIntensity;

/// @brief Field silverLiningIntensity, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_silverLiningIntensity, put=__cordl_internal_set_silverLiningIntensity)) float_t  silverLiningIntensity;

/// @brief Field silverLiningSpread, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_silverLiningSpread, put=__cordl_internal_set_silverLiningSpread)) float_t  silverLiningSpread;

/// @brief Field topCloudsHeight, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_topCloudsHeight, put=__cordl_internal_set_topCloudsHeight)) float_t  topCloudsHeight;

/// @brief Field topLayer, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_topLayer, put=__cordl_internal_set_topLayer)) float_t  topLayer;

/// @brief Field topShape, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_topShape, put=__cordl_internal_set_topShape)) float_t  topShape;

/// @brief Field windSpeedModifier, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_windSpeedModifier, put=__cordl_internal_set_windSpeedModifier)) float_t  windSpeedModifier;

/// @brief Field windUpwards, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_windUpwards, put=__cordl_internal_set_windUpwards)) float_t  windUpwards;

/// @brief Field worleyFreq1, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_worleyFreq1, put=__cordl_internal_set_worleyFreq1)) float_t  worleyFreq1;

/// @brief Field worleyFreq2, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_worleyFreq2, put=__cordl_internal_set_worleyFreq2)) float_t  worleyFreq2;

static inline ::Enviro::EnviroCloudLayerSettings* New_ctor() ;

constexpr float_t const& __cordl_internal_get_absorbtion() const;

constexpr float_t& __cordl_internal_get_absorbtion() ;

constexpr float_t const& __cordl_internal_get_ambientFloor() const;

constexpr float_t& __cordl_internal_get_ambientFloor() ;

constexpr float_t const& __cordl_internal_get_baseErosionIntensity() const;

constexpr float_t& __cordl_internal_get_baseErosionIntensity() ;

constexpr float_t const& __cordl_internal_get_baseNoiseMultiplier() const;

constexpr float_t& __cordl_internal_get_baseNoiseMultiplier() ;

constexpr float_t const& __cordl_internal_get_baseNoiseUV() const;

constexpr float_t& __cordl_internal_get_baseNoiseUV() ;

constexpr float_t const& __cordl_internal_get_baseNoiseUVMultiplier() const;

constexpr float_t& __cordl_internal_get_baseNoiseUVMultiplier() ;

constexpr float_t const& __cordl_internal_get_bottomCloudsHeight() const;

constexpr float_t& __cordl_internal_get_bottomCloudsHeight() ;

constexpr float_t const& __cordl_internal_get_bottomShape() const;

constexpr float_t& __cordl_internal_get_bottomShape() ;

constexpr float_t const& __cordl_internal_get_cloudTypeShaping() const;

constexpr float_t& __cordl_internal_get_cloudTypeShaping() ;

constexpr float_t const& __cordl_internal_get_cloudsTypeModifier() const;

constexpr float_t& __cordl_internal_get_cloudsTypeModifier() ;

constexpr float_t const& __cordl_internal_get_cloudsWindDirectionXModifier() const;

constexpr float_t& __cordl_internal_get_cloudsWindDirectionXModifier() ;

constexpr float_t const& __cordl_internal_get_cloudsWindDirectionYModifier() const;

constexpr float_t& __cordl_internal_get_cloudsWindDirectionYModifier() ;

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

constexpr float_t const& __cordl_internal_get_detailNoiseUV() const;

constexpr float_t& __cordl_internal_get_detailNoiseUV() ;

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

constexpr float_t const& __cordl_internal_get_lightStepModifier() const;

constexpr float_t& __cordl_internal_get_lightStepModifier() ;

constexpr float_t const& __cordl_internal_get_lightningIntensity() const;

constexpr float_t& __cordl_internal_get_lightningIntensity() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_locationOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_locationOffset() ;

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

constexpr float_t const& __cordl_internal_get_topCloudsHeight() const;

constexpr float_t& __cordl_internal_get_topCloudsHeight() ;

constexpr float_t const& __cordl_internal_get_topLayer() const;

constexpr float_t& __cordl_internal_get_topLayer() ;

constexpr float_t const& __cordl_internal_get_topShape() const;

constexpr float_t& __cordl_internal_get_topShape() ;

constexpr float_t const& __cordl_internal_get_windSpeedModifier() const;

constexpr float_t& __cordl_internal_get_windSpeedModifier() ;

constexpr float_t const& __cordl_internal_get_windUpwards() const;

constexpr float_t& __cordl_internal_get_windUpwards() ;

constexpr float_t const& __cordl_internal_get_worleyFreq1() const;

constexpr float_t& __cordl_internal_get_worleyFreq1() ;

constexpr float_t const& __cordl_internal_get_worleyFreq2() const;

constexpr float_t& __cordl_internal_get_worleyFreq2() ;

constexpr void __cordl_internal_set_absorbtion(float_t  value) ;

constexpr void __cordl_internal_set_ambientFloor(float_t  value) ;

constexpr void __cordl_internal_set_baseErosionIntensity(float_t  value) ;

constexpr void __cordl_internal_set_baseNoiseMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_baseNoiseUV(float_t  value) ;

constexpr void __cordl_internal_set_baseNoiseUVMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_bottomCloudsHeight(float_t  value) ;

constexpr void __cordl_internal_set_bottomShape(float_t  value) ;

constexpr void __cordl_internal_set_cloudTypeShaping(float_t  value) ;

constexpr void __cordl_internal_set_cloudsTypeModifier(float_t  value) ;

constexpr void __cordl_internal_set_cloudsWindDirectionXModifier(float_t  value) ;

constexpr void __cordl_internal_set_cloudsWindDirectionYModifier(float_t  value) ;

constexpr void __cordl_internal_set_coverage(float_t  value) ;

constexpr void __cordl_internal_set_curlIntensity(float_t  value) ;

constexpr void __cordl_internal_set_density(float_t  value) ;

constexpr void __cordl_internal_set_densitySmoothness(float_t  value) ;

constexpr void __cordl_internal_set_detailErosionIntensity(float_t  value) ;

constexpr void __cordl_internal_set_detailNoiseMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_detailNoiseUV(float_t  value) ;

constexpr void __cordl_internal_set_detailNoiseUVMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_dilateCoverage(float_t  value) ;

constexpr void __cordl_internal_set_dilateType(float_t  value) ;

constexpr void __cordl_internal_set_edgeHighlightStrength(float_t  value) ;

constexpr void __cordl_internal_set_exposure(float_t  value) ;

constexpr void __cordl_internal_set_lightStepModifier(float_t  value) ;

constexpr void __cordl_internal_set_lightningIntensity(float_t  value) ;

constexpr void __cordl_internal_set_locationOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_midShape(float_t  value) ;

constexpr void __cordl_internal_set_multiScatterFalloff(float_t  value) ;

constexpr void __cordl_internal_set_multiScatterStrength(float_t  value) ;

constexpr void __cordl_internal_set_rampShape(float_t  value) ;

constexpr void __cordl_internal_set_scatteringIntensity(float_t  value) ;

constexpr void __cordl_internal_set_silverLiningIntensity(float_t  value) ;

constexpr void __cordl_internal_set_silverLiningSpread(float_t  value) ;

constexpr void __cordl_internal_set_topCloudsHeight(float_t  value) ;

constexpr void __cordl_internal_set_topLayer(float_t  value) ;

constexpr void __cordl_internal_set_topShape(float_t  value) ;

constexpr void __cordl_internal_set_windSpeedModifier(float_t  value) ;

constexpr void __cordl_internal_set_windUpwards(float_t  value) ;

constexpr void __cordl_internal_set_worleyFreq1(float_t  value) ;

constexpr void __cordl_internal_set_worleyFreq2(float_t  value) ;

/// @brief Method .ctor, addr 0x18061bfb0, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviroCloudLayerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviroCloudLayerSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviroCloudLayerSettings(EnviroCloudLayerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviroCloudLayerSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviroCloudLayerSettings(EnviroCloudLayerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18503};

/// @brief Field cloudsWindDirectionXModifier, offset: 0x10, size: 0x4, def value: None
 float_t  ___cloudsWindDirectionXModifier;

/// @brief Field cloudsWindDirectionYModifier, offset: 0x14, size: 0x4, def value: None
 float_t  ___cloudsWindDirectionYModifier;

/// @brief Field windSpeedModifier, offset: 0x18, size: 0x4, def value: None
 float_t  ___windSpeedModifier;

/// @brief Field windUpwards, offset: 0x1c, size: 0x4, def value: None
 float_t  ___windUpwards;

/// @brief Field coverage, offset: 0x20, size: 0x4, def value: None
 float_t  ___coverage;

/// @brief Field worleyFreq2, offset: 0x24, size: 0x4, def value: None
 float_t  ___worleyFreq2;

/// @brief Field worleyFreq1, offset: 0x28, size: 0x4, def value: None
 float_t  ___worleyFreq1;

/// @brief Field dilateCoverage, offset: 0x2c, size: 0x4, def value: None
 float_t  ___dilateCoverage;

/// @brief Field dilateType, offset: 0x30, size: 0x4, def value: None
 float_t  ___dilateType;

/// @brief Field cloudsTypeModifier, offset: 0x34, size: 0x4, def value: None
 float_t  ___cloudsTypeModifier;

/// @brief Field locationOffset, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___locationOffset;

/// @brief Field bottomCloudsHeight, offset: 0x40, size: 0x4, def value: None
 float_t  ___bottomCloudsHeight;

/// @brief Field topCloudsHeight, offset: 0x44, size: 0x4, def value: None
 float_t  ___topCloudsHeight;

/// @brief Field density, offset: 0x48, size: 0x4, def value: None
 float_t  ___density;

/// @brief Field densitySmoothness, offset: 0x4c, size: 0x4, def value: None
 float_t  ___densitySmoothness;

/// @brief Field scatteringIntensity, offset: 0x50, size: 0x4, def value: None
 float_t  ___scatteringIntensity;

/// @brief Field edgeHighlightStrength, offset: 0x54, size: 0x4, def value: None
 float_t  ___edgeHighlightStrength;

/// @brief Field silverLiningSpread, offset: 0x58, size: 0x4, def value: None
 float_t  ___silverLiningSpread;

/// @brief Field silverLiningIntensity, offset: 0x5c, size: 0x4, def value: None
 float_t  ___silverLiningIntensity;

/// @brief Field lightningIntensity, offset: 0x60, size: 0x4, def value: None
 float_t  ___lightningIntensity;

/// @brief Field curlIntensity, offset: 0x64, size: 0x4, def value: None
 float_t  ___curlIntensity;

/// @brief Field lightStepModifier, offset: 0x68, size: 0x4, def value: None
 float_t  ___lightStepModifier;

/// @brief Field multiScatterStrength, offset: 0x6c, size: 0x4, def value: None
 float_t  ___multiScatterStrength;

/// @brief Field multiScatterFalloff, offset: 0x70, size: 0x4, def value: None
 float_t  ___multiScatterFalloff;

/// @brief Field ambientFloor, offset: 0x74, size: 0x4, def value: None
 float_t  ___ambientFloor;

/// @brief Field absorbtion, offset: 0x78, size: 0x4, def value: None
 float_t  ___absorbtion;

/// @brief Field exposure, offset: 0x7c, size: 0x4, def value: None
 float_t  ___exposure;

/// @brief Field baseNoiseUV, offset: 0x80, size: 0x4, def value: None
 float_t  ___baseNoiseUV;

/// @brief Field detailNoiseUV, offset: 0x84, size: 0x4, def value: None
 float_t  ___detailNoiseUV;

/// @brief Field baseNoiseUVMultiplier, offset: 0x88, size: 0x4, def value: None
 float_t  ___baseNoiseUVMultiplier;

/// @brief Field detailNoiseUVMultiplier, offset: 0x8c, size: 0x4, def value: None
 float_t  ___detailNoiseUVMultiplier;

/// @brief Field baseErosionIntensity, offset: 0x90, size: 0x4, def value: None
 float_t  ___baseErosionIntensity;

/// @brief Field baseNoiseMultiplier, offset: 0x94, size: 0x4, def value: None
 float_t  ___baseNoiseMultiplier;

/// @brief Field detailErosionIntensity, offset: 0x98, size: 0x4, def value: None
 float_t  ___detailErosionIntensity;

/// @brief Field detailNoiseMultiplier, offset: 0x9c, size: 0x4, def value: None
 float_t  ___detailNoiseMultiplier;

/// @brief Field bottomShape, offset: 0xa0, size: 0x4, def value: None
 float_t  ___bottomShape;

/// @brief Field midShape, offset: 0xa4, size: 0x4, def value: None
 float_t  ___midShape;

/// @brief Field topShape, offset: 0xa8, size: 0x4, def value: None
 float_t  ___topShape;

/// @brief Field topLayer, offset: 0xac, size: 0x4, def value: None
 float_t  ___topLayer;

/// @brief Field cloudTypeShaping, offset: 0xb0, size: 0x4, def value: None
 float_t  ___cloudTypeShaping;

/// @brief Field rampShape, offset: 0xb4, size: 0x4, def value: None
 float_t  ___rampShape;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___cloudsWindDirectionXModifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___cloudsWindDirectionYModifier) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___windSpeedModifier) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___windUpwards) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___coverage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___worleyFreq2) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___worleyFreq1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___dilateCoverage) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___dilateType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___cloudsTypeModifier) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___locationOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___bottomCloudsHeight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___topCloudsHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___density) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___densitySmoothness) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___scatteringIntensity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___edgeHighlightStrength) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___silverLiningSpread) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___silverLiningIntensity) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___lightningIntensity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___curlIntensity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___lightStepModifier) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___multiScatterStrength) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___multiScatterFalloff) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___ambientFloor) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___absorbtion) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___exposure) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___baseNoiseUV) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___detailNoiseUV) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___baseNoiseUVMultiplier) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___detailNoiseUVMultiplier) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___baseErosionIntensity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___baseNoiseMultiplier) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___detailErosionIntensity) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___detailNoiseMultiplier) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___bottomShape) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___midShape) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___topShape) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___topLayer) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___cloudTypeShaping) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Enviro::EnviroCloudLayerSettings, ___rampShape) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::Enviro::EnviroCloudLayerSettings) == 0xb8, "Size mismatch!");

} // namespace end def Enviro
