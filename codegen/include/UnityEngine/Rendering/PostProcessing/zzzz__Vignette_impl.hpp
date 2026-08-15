#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/Vignette.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Vignette_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__BoolParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__ColorParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Vector2Parameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__VignetteModeParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vignette.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::Vignette::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::Vignette::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fbeec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vignette*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vignette*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::Vignette._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::Vignette::*)()>(&::UnityEngine::Rendering::PostProcessing::Vignette::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x181fbef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vignette*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::VignetteModeParameter*& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::UnityEngine::Rendering::PostProcessing::VignetteModeParameter* const& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_set_mode(::UnityEngine::Rendering::PostProcessing::VignetteModeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter*& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Rendering::PostProcessing::ColorParameter* const& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_set_color(::UnityEngine::Rendering::PostProcessing::ColorParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Vector2Parameter*& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Vector2Parameter* const& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___center;
}
constexpr void UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_set_center(::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___center = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_smoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothness;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_smoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothness;
}
constexpr void UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_set_smoothness(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothness = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_roundness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundness;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_roundness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundness;
}
constexpr void UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_set_roundness(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundness = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter*& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_rounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rounded;
}
constexpr ::UnityEngine::Rendering::PostProcessing::BoolParameter* const& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_rounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rounded;
}
constexpr void UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_set_rounded(::UnityEngine::Rendering::PostProcessing::BoolParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rounded = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter*& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::Rendering::PostProcessing::TextureParameter* const& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_set_mask(::UnityEngine::Rendering::PostProcessing::TextureParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_opacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opacity;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_get_opacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opacity;
}
constexpr void UnityEngine::Rendering::PostProcessing::Vignette::__cordl_internal_set_opacity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___opacity = value;
}
inline bool UnityEngine::Rendering::PostProcessing::Vignette::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vignette*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::Vignette::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::Vignette*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::Vignette* UnityEngine::Rendering::PostProcessing::Vignette::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::Vignette*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::Vignette::Vignette()   {
}
