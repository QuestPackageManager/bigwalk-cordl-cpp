#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Bloom.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Bloom_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Bloom.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::Bloom::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::Bloom::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fb2250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Bloom*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Bloom*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Bloom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Bloom::*)()>(&::UnityEngine::Rendering::PostProcessing::Bloom::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181fb2270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Bloom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_threshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_threshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threshold;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_threshold(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threshold = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_softKnee()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___softKnee;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_softKnee() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___softKnee;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_softKnee(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___softKnee = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_clamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamp;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_clamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamp;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_clamp(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clamp = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_diffusion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffusion;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_diffusion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___diffusion;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_diffusion(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___diffusion = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_anamorphicRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicRatio;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_anamorphicRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anamorphicRatio;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_anamorphicRatio(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anamorphicRatio = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_color(::UnityEngine::Rendering::PostProcessing::ColorParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_fastMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastMode;
}
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_fastMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastMode;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_fastMode(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastMode = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_dirtTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtTexture;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_dirtTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtTexture;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_dirtTexture(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirtTexture = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_dirtIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtIntensity;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_get_dirtIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirtIntensity;
}
constexpr void UnityEngine::Rendering::PostProcessing::Bloom::__cordl_internal_set_dirtIntensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirtIntensity = value;
}
inline bool UnityEngine::Rendering::PostProcessing::Bloom::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Bloom*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::Bloom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Bloom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::Bloom* UnityEngine::Rendering::PostProcessing::Bloom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::Bloom*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::Bloom::Bloom()   {
}
