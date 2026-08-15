#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/LensDistortion.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__LensDistortion_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LensDistortion.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::LensDistortion::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::LensDistortion::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fb7720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LensDistortion*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LensDistortion*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::LensDistortion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::LensDistortion::*)()>(&::UnityEngine::Rendering::PostProcessing::LensDistortion::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x181fb77b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LensDistortion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensity;
}
constexpr void UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_set_intensity(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensity = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_intensityX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensityX;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_intensityX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensityX;
}
constexpr void UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_set_intensityX(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensityX = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_intensityY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensityY;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_intensityY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___intensityY;
}
constexpr void UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_set_intensityY(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___intensityY = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_centerX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerX;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_centerX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerX;
}
constexpr void UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_set_centerX(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerX = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_centerY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerY;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_centerY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerY;
}
constexpr void UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_set_centerY(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerY = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void UnityEngine::Rendering::PostProcessing::LensDistortion::__cordl_internal_set_scale(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
inline bool UnityEngine::Rendering::PostProcessing::LensDistortion::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LensDistortion*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::LensDistortion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::LensDistortion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::LensDistortion* UnityEngine::Rendering::PostProcessing::LensDistortion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::LensDistortion*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::LensDistortion::LensDistortion()   {
}
