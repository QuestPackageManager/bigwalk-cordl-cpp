#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/DepthOfField.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectSettings_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__DepthOfField_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__FloatParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__KernelSizeParameter_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DepthOfField.IsEnabledAndSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::DepthOfField::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::DepthOfField::IsEnabledAndSupported)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181fb69b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfField*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfField*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DepthOfField._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::DepthOfField::*)()>(&::UnityEngine::Rendering::PostProcessing::DepthOfField::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181fb69e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfField*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_get_focusDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusDistance;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_get_focusDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusDistance;
}
constexpr void UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_set_focusDistance(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusDistance = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_get_aperture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aperture;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_get_aperture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aperture;
}
constexpr void UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_set_aperture(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aperture = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter*& UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_get_focalLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focalLength;
}
constexpr ::UnityEngine::Rendering::PostProcessing::FloatParameter* const& UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_get_focalLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focalLength;
}
constexpr void UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_set_focalLength(::UnityEngine::Rendering::PostProcessing::FloatParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focalLength = value;
}
constexpr ::UnityEngine::Rendering::PostProcessing::KernelSizeParameter*& UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_get_kernelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kernelSize;
}
constexpr ::UnityEngine::Rendering::PostProcessing::KernelSizeParameter* const& UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_get_kernelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___kernelSize;
}
constexpr void UnityEngine::Rendering::PostProcessing::DepthOfField::__cordl_internal_set_kernelSize(::UnityEngine::Rendering::PostProcessing::KernelSizeParameter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___kernelSize = value;
}
inline bool UnityEngine::Rendering::PostProcessing::DepthOfField::IsEnabledAndSupported(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfField*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::DepthOfField::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DepthOfField*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::DepthOfField* UnityEngine::Rendering::PostProcessing::DepthOfField::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::DepthOfField*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::DepthOfField::DepthOfField()   {
}
