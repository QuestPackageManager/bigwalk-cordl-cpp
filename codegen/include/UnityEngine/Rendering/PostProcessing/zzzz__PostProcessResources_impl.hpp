#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessResources_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessResources_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders* (::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fcfde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_bloom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloom;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_bloom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bloom;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_bloom(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bloom = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_copy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copy;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_copy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copy;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_copy(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copy = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_copyStd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyStd;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_copyStd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyStd;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_copyStd(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyStd = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_copyStdFromTexArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyStdFromTexArray;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_copyStdFromTexArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyStdFromTexArray;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_copyStdFromTexArray(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyStdFromTexArray = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_copyStdFromDoubleWide()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyStdFromDoubleWide;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_copyStdFromDoubleWide() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyStdFromDoubleWide;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_copyStdFromDoubleWide(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyStdFromDoubleWide = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_discardAlpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___discardAlpha;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_discardAlpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___discardAlpha;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_discardAlpha(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___discardAlpha = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_depthOfField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfField;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_depthOfField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthOfField;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_depthOfField(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthOfField = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_finalPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalPass;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_finalPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalPass;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_finalPass(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalPass = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_grainBaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grainBaker;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_grainBaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grainBaker;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_grainBaker(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grainBaker = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_motionBlur()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionBlur;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_motionBlur() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___motionBlur;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_motionBlur(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___motionBlur = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_temporalAntialiasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporalAntialiasing;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_temporalAntialiasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___temporalAntialiasing;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_temporalAntialiasing(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___temporalAntialiasing = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_subpixelMorphologicalAntialiasing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subpixelMorphologicalAntialiasing;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_subpixelMorphologicalAntialiasing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subpixelMorphologicalAntialiasing;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subpixelMorphologicalAntialiasing = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_texture2dLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture2dLerp;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_texture2dLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture2dLerp;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_texture2dLerp(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture2dLerp = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_uber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uber;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_uber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uber;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_uber(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uber = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_lut2DBaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lut2DBaker;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_lut2DBaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lut2DBaker;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_lut2DBaker(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lut2DBaker = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_lightMeter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMeter;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_lightMeter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightMeter;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_lightMeter(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightMeter = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_gammaHistogram()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gammaHistogram;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_gammaHistogram() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gammaHistogram;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_gammaHistogram(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gammaHistogram = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_waveform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveform;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_waveform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveform;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_waveform(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waveform = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_vectorscope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorscope;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_vectorscope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorscope;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_vectorscope(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vectorscope = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_debugOverlays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugOverlays;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_debugOverlays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugOverlays;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_debugOverlays(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugOverlays = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_deferredFog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deferredFog;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_deferredFog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deferredFog;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_deferredFog(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deferredFog = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_scalableAO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scalableAO;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_scalableAO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scalableAO;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_scalableAO(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scalableAO = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_multiScaleAO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAO;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_multiScaleAO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAO;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_multiScaleAO(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiScaleAO = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_screenSpaceReflections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceReflections;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_get_screenSpaceReflections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screenSpaceReflections;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::__cordl_internal_set_screenSpaceReflections(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screenSpaceReflections = value;
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders* UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders* UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders::PostProcessResources_Shaders()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders* (::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::Clone)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181fbf720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_autoExposure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoExposure;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_autoExposure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoExposure;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_autoExposure(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoExposure = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_exposureHistogram()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exposureHistogram;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_exposureHistogram() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exposureHistogram;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_exposureHistogram(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exposureHistogram = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_lut3DBaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lut3DBaker;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_lut3DBaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lut3DBaker;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_lut3DBaker(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lut3DBaker = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_texture3dLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture3dLerp;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_texture3dLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture3dLerp;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_texture3dLerp(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture3dLerp = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_gammaHistogram()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gammaHistogram;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_gammaHistogram() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gammaHistogram;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_gammaHistogram(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gammaHistogram = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_waveform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveform;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_waveform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waveform;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_waveform(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waveform = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_vectorscope()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorscope;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_vectorscope() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorscope;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_vectorscope(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vectorscope = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_multiScaleAODownsample1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAODownsample1;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_multiScaleAODownsample1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAODownsample1;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_multiScaleAODownsample1(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiScaleAODownsample1 = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_multiScaleAODownsample2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAODownsample2;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_multiScaleAODownsample2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAODownsample2;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_multiScaleAODownsample2(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiScaleAODownsample2 = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_multiScaleAORender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAORender;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_multiScaleAORender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAORender;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_multiScaleAORender(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiScaleAORender = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_multiScaleAOUpsample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAOUpsample;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_multiScaleAOUpsample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiScaleAOUpsample;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_multiScaleAOUpsample(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiScaleAOUpsample = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_gaussianDownsample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gaussianDownsample;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_get_gaussianDownsample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gaussianDownsample;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::__cordl_internal_set_gaussianDownsample(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gaussianDownsample = value;
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders* UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders* UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders::PostProcessResources_ComputeShaders()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::__cordl_internal_get_area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::__cordl_internal_get_area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::__cordl_internal_set_area(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___area = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::__cordl_internal_get_search()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::__cordl_internal_get_search() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___search;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::__cordl_internal_set_search(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___search = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts* UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts::PostProcessResources_SMAALuts()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::PostProcessResources._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::PostProcessResources::*)()>(&::UnityEngine::Rendering::PostProcessing::PostProcessResources::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_blueNoise64()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueNoise64;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_blueNoise64() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueNoise64;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_set_blueNoise64(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueNoise64 = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_blueNoise256()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueNoise256;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_blueNoise256() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blueNoise256;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_set_blueNoise256(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blueNoise256 = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_smaaLuts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smaaLuts;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts* const& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_smaaLuts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smaaLuts;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_set_smaaLuts(::UnityEngine::Rendering::PostProcessing::PostProcessResources_SMAALuts*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smaaLuts = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_shaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaders;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders* const& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_shaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shaders;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_set_shaders(::UnityEngine::Rendering::PostProcessing::PostProcessResources_Shaders*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shaders = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_computeShaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computeShaders;
}
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders* const& UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_get_computeShaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computeShaders;
}
constexpr void UnityEngine::Rendering::PostProcessing::PostProcessResources::__cordl_internal_set_computeShaders(::UnityEngine::Rendering::PostProcessing::PostProcessResources_ComputeShaders*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computeShaders = value;
}
inline void UnityEngine::Rendering::PostProcessing::PostProcessResources::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::PostProcessResources* UnityEngine::Rendering::PostProcessing::PostProcessResources::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::PostProcessResources*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessResources::PostProcessResources()   {
}
