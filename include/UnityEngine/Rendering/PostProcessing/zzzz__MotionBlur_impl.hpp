#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/MotionBlur.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__MotionBlur_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__IntParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MotionBlur.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::MotionBlur::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::MotionBlur::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181fb8320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlur*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlur*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::MotionBlur._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::MotionBlur::*)()>(&::UnityEngine::Rendering::PostProcessing::MotionBlur::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fb8390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlur*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::MotionBlur::__cordl_internal_get_shutterAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterAngle;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::MotionBlur::__cordl_internal_get_shutterAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shutterAngle;
}
constexpr void UnityEngine::Rendering::PostProcessing::MotionBlur::__cordl_internal_set_shutterAngle(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shutterAngle = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::IntParameter*& UnityEngine::Rendering::PostProcessing::MotionBlur::__cordl_internal_get_sampleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleCount;
}
constexpr ::UnityEngine::Rendering::PostProcessing::IntParameter* const& UnityEngine::Rendering::PostProcessing::MotionBlur::__cordl_internal_get_sampleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleCount;
}
constexpr void UnityEngine::Rendering::PostProcessing::MotionBlur::__cordl_internal_set_sampleCount(::UnityEngine::Rendering::PostProcessing::IntParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleCount = value;
}
inline bool UnityEngine::Rendering::PostProcessing::MotionBlur::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlur*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::MotionBlur::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::MotionBlur*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::MotionBlur* UnityEngine::Rendering::PostProcessing::MotionBlur::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::MotionBlur*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::MotionBlur::MotionBlur()   {
}
