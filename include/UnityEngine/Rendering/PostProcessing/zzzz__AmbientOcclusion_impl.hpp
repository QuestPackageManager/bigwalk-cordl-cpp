#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AmbientOcclusion.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AmbientOcclusion_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AmbientOcclusionModeParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AmbientOcclusionQualityParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusion.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::AmbientOcclusion::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusion::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181fb08b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AmbientOcclusion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AmbientOcclusion::*)()>(&::UnityEngine::Rendering::PostProcessing::AmbientOcclusion::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181fb0a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_mode(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionModeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_color(::UnityEngine::Rendering::PostProcessing::ColorParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_ambientOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientOnly;
}
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_ambientOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientOnly;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_ambientOnly(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientOnly = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_noiseFilterTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseFilterTolerance;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_noiseFilterTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseFilterTolerance;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_noiseFilterTolerance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseFilterTolerance = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_blurTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurTolerance;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_blurTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurTolerance;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_blurTolerance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blurTolerance = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_upsampleTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upsampleTolerance;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_upsampleTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upsampleTolerance;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_upsampleTolerance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upsampleTolerance = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_thicknessModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thicknessModifier;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_thicknessModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thicknessModifier;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_thicknessModifier(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thicknessModifier = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_zBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zBias;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_zBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zBias;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_zBias(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zBias = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_directLightingStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directLightingStrength;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_directLightingStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directLightingStrength;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_directLightingStrength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directLightingStrength = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_radius(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQualityParameter*& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQualityParameter* const& UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_get_quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::__cordl_internal_set_quality(::UnityEngine::Rendering::PostProcessing::AmbientOcclusionQualityParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quality = value;
}
inline bool UnityEngine::Rendering::PostProcessing::AmbientOcclusion::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::AmbientOcclusion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::AmbientOcclusion* UnityEngine::Rendering::PostProcessing::AmbientOcclusion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::AmbientOcclusion*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::AmbientOcclusion::AmbientOcclusion()   {
}
