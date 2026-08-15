#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/SubpixelMorphologicalAntialiasing.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__SubpixelMorphologicalAntialiasing_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessRenderContext_def.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__SubpixelMorphologicalAntialiasing_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass::SubpixelMorphologicalAntialiasing_Pass(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass::SubpixelMorphologicalAntialiasing_Pass()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass  UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass::EdgeDetection{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass  UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass::BlendWeights{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass  UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Pass::NeighborhoodBlending{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality::SubpixelMorphologicalAntialiasing_Quality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality::SubpixelMorphologicalAntialiasing_Quality()   {
}
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality  UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality::Low{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality  UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality::Medium{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality  UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality::High{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing.IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::IsSupported)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181fbd9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*>(),
                        {"IsSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::*)(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*)>(&::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::Render)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x181fbd9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::*)()>(&::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181fbdde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality& UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::__cordl_internal_get_quality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality const& UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::__cordl_internal_get_quality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___quality;
}
constexpr void UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::__cordl_internal_set_quality(::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing_Quality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___quality = value;
}
inline bool UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::IsSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*>(),
                        {"IsSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::Render(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*>(),
                        {"Render", {}, {::i2c::type_of<::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing* UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::SubpixelMorphologicalAntialiasing::SubpixelMorphologicalAntialiasing()   {
}
