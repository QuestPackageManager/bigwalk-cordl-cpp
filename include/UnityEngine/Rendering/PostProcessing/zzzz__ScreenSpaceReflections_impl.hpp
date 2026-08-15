#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/ScreenSpaceReflections.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScreenSpaceReflections_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__IntParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScreenSpaceReflectionPresetParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ScreenSpaceReflectionResolutionParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181fbd7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::*)()>(&::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fbd840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPresetParameter*& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPresetParameter* const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_set_preset(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionPresetParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::IntParameter*& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_maximumIterationCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumIterationCount;
}
constexpr ::UnityEngine::Rendering::PostProcessing::IntParameter* const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_maximumIterationCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumIterationCount;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_set_maximumIterationCount(::UnityEngine::Rendering::PostProcessing::IntParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumIterationCount = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolutionParameter*& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolutionParameter* const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_set_resolution(::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflectionResolutionParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolution = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_thickness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickness;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_thickness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thickness;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_set_thickness(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thickness = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_maximumMarchDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumMarchDistance;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_maximumMarchDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maximumMarchDistance;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_set_maximumMarchDistance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maximumMarchDistance = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_distanceFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceFade;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_distanceFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceFade;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_set_distanceFade(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceFade = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_vignette()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignette;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_get_vignette() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vignette;
}
constexpr void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::__cordl_internal_set_vignette(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vignette = value;
}
inline bool UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections* UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::ScreenSpaceReflections::ScreenSpaceReflections()   {
}
