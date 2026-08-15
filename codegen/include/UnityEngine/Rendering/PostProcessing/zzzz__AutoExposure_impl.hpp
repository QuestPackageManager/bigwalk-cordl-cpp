#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/AutoExposure.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__AutoExposure_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__EyeAdaptationParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__Vector2Parameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AutoExposure.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::AutoExposure::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::AutoExposure::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181fb14b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposure*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposure*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::AutoExposure._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::AutoExposure::*)()>(&::UnityEngine::Rendering::PostProcessing::AutoExposure::_ctor)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181fb1540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposure*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::Vector2Parameter*& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_filtering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filtering;
}
constexpr ::UnityEngine::Rendering::PostProcessing::Vector2Parameter* const& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_filtering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filtering;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_set_filtering(::UnityEngine::Rendering::PostProcessing::Vector2Parameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filtering = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_minLuminance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLuminance;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_minLuminance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minLuminance;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_set_minLuminance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minLuminance = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_maxLuminance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLuminance;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_maxLuminance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxLuminance;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_set_maxLuminance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxLuminance = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_keyValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyValue;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_keyValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keyValue;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_set_keyValue(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keyValue = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::EyeAdaptationParameter*& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_eyeAdaptation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptation;
}
constexpr ::UnityEngine::Rendering::PostProcessing::EyeAdaptationParameter* const& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_eyeAdaptation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeAdaptation;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_set_eyeAdaptation(::UnityEngine::Rendering::PostProcessing::EyeAdaptationParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeAdaptation = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_speedUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedUp;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_speedUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedUp;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_set_speedUp(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedUp = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_speedDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedDown;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_get_speedDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedDown;
}
constexpr void UnityEngine::Rendering::PostProcessing::AutoExposure::__cordl_internal_set_speedDown(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedDown = value;
}
inline bool UnityEngine::Rendering::PostProcessing::AutoExposure::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposure*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::AutoExposure::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::AutoExposure*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::AutoExposure* UnityEngine::Rendering::PostProcessing::AutoExposure::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::AutoExposure*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::AutoExposure::AutoExposure()   {
}
