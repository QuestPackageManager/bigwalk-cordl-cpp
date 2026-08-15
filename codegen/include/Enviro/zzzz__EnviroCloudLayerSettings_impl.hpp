#pragma once
// IWYU pragma private; include "Enviro/EnviroCloudLayerSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Enviro/zzzz__EnviroCloudLayerSettings_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroCloudLayerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroCloudLayerSettings::*)()>(&::Enviro::EnviroCloudLayerSettings::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18061bfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroCloudLayerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_cloudsWindDirectionXModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsWindDirectionXModifier;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_cloudsWindDirectionXModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsWindDirectionXModifier;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_cloudsWindDirectionXModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsWindDirectionXModifier = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_cloudsWindDirectionYModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsWindDirectionYModifier;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_cloudsWindDirectionYModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsWindDirectionYModifier;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_cloudsWindDirectionYModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsWindDirectionYModifier = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_windSpeedModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSpeedModifier;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_windSpeedModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSpeedModifier;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_windSpeedModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windSpeedModifier = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_windUpwards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windUpwards;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_windUpwards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windUpwards;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_windUpwards(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windUpwards = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_coverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coverage;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_coverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coverage;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_coverage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coverage = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_worleyFreq2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worleyFreq2;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_worleyFreq2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worleyFreq2;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_worleyFreq2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worleyFreq2 = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_worleyFreq1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worleyFreq1;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_worleyFreq1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worleyFreq1;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_worleyFreq1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worleyFreq1 = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_dilateCoverage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dilateCoverage;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_dilateCoverage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dilateCoverage;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_dilateCoverage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dilateCoverage = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_dilateType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dilateType;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_dilateType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dilateType;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_dilateType(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dilateType = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_cloudsTypeModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsTypeModifier;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_cloudsTypeModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsTypeModifier;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_cloudsTypeModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsTypeModifier = value;
}
constexpr ::UnityEngine::Vector2& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_locationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationOffset;
}
constexpr ::UnityEngine::Vector2 const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_locationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationOffset;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_locationOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locationOffset = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_bottomCloudsHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomCloudsHeight;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_bottomCloudsHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomCloudsHeight;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_bottomCloudsHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomCloudsHeight = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_topCloudsHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topCloudsHeight;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_topCloudsHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topCloudsHeight;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_topCloudsHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topCloudsHeight = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_density()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_density() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_density(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___density = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_densitySmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___densitySmoothness;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_densitySmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___densitySmoothness;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_densitySmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___densitySmoothness = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_scatteringIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scatteringIntensity;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_scatteringIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scatteringIntensity;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_scatteringIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scatteringIntensity = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_edgeHighlightStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edgeHighlightStrength;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_edgeHighlightStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___edgeHighlightStrength;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_edgeHighlightStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___edgeHighlightStrength = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_silverLiningSpread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___silverLiningSpread;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_silverLiningSpread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___silverLiningSpread;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_silverLiningSpread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___silverLiningSpread = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_silverLiningIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___silverLiningIntensity;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_silverLiningIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___silverLiningIntensity;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_silverLiningIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___silverLiningIntensity = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_lightningIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningIntensity;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_lightningIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightningIntensity;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_lightningIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightningIntensity = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_curlIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curlIntensity;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_curlIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curlIntensity;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_curlIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curlIntensity = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_lightStepModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightStepModifier;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_lightStepModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightStepModifier;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_lightStepModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightStepModifier = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_multiScatterStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScatterStrength;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_multiScatterStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScatterStrength;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_multiScatterStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiScatterStrength = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_multiScatterFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScatterFalloff;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_multiScatterFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScatterFalloff;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_multiScatterFalloff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiScatterFalloff = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_ambientFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientFloor;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_ambientFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientFloor;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_ambientFloor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientFloor = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_absorbtion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absorbtion;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_absorbtion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absorbtion;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_absorbtion(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absorbtion = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_exposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exposure;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_exposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exposure;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_exposure(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exposure = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_baseNoiseUV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseNoiseUV;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_baseNoiseUV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseNoiseUV;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_baseNoiseUV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseNoiseUV = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_detailNoiseUV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoiseUV;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_detailNoiseUV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoiseUV;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_detailNoiseUV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailNoiseUV = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_baseNoiseUVMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseNoiseUVMultiplier;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_baseNoiseUVMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseNoiseUVMultiplier;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_baseNoiseUVMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseNoiseUVMultiplier = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_detailNoiseUVMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoiseUVMultiplier;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_detailNoiseUVMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoiseUVMultiplier;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_detailNoiseUVMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailNoiseUVMultiplier = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_baseErosionIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseErosionIntensity;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_baseErosionIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseErosionIntensity;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_baseErosionIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseErosionIntensity = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_baseNoiseMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseNoiseMultiplier;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_baseNoiseMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseNoiseMultiplier;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_baseNoiseMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseNoiseMultiplier = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_detailErosionIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailErosionIntensity;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_detailErosionIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailErosionIntensity;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_detailErosionIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailErosionIntensity = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_detailNoiseMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoiseMultiplier;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_detailNoiseMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailNoiseMultiplier;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_detailNoiseMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailNoiseMultiplier = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_bottomShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomShape;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_bottomShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottomShape;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_bottomShape(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottomShape = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_midShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___midShape;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_midShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___midShape;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_midShape(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___midShape = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_topShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topShape;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_topShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topShape;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_topShape(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topShape = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_topLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topLayer;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_topLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___topLayer;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_topLayer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___topLayer = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_cloudTypeShaping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudTypeShaping;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_cloudTypeShaping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudTypeShaping;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_cloudTypeShaping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudTypeShaping = value;
}
constexpr float_t& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_rampShape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rampShape;
}
constexpr float_t const& Enviro::EnviroCloudLayerSettings::__cordl_internal_get_rampShape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rampShape;
}
constexpr void Enviro::EnviroCloudLayerSettings::__cordl_internal_set_rampShape(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rampShape = value;
}
inline void Enviro::EnviroCloudLayerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroCloudLayerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroCloudLayerSettings* Enviro::EnviroCloudLayerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroCloudLayerSettings*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroCloudLayerSettings::EnviroCloudLayerSettings()   {
}
