#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/ScatteringSplineLodInputData.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__ScatteringSplineLodInputData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__ScatteringSplinePointData_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData.get_ScatteringColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::get_ScatteringColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(),
                        {"get_ScatteringColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData.set_ScatteringColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::*)(::UnityEngine::Color)>(&::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::set_ScatteringColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18200bc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(),
                        {"set_ScatteringColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData.get_SplineShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::get_SplineShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18256dd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData.get_DefaultCustomSplineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::get_DefaultCustomSplineData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18256e330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18256e2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::__cordl_internal_get__ScatteringColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatteringColor;
}
constexpr ::UnityEngine::Color const& WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::__cordl_internal_get__ScatteringColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScatteringColor;
}
constexpr void WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::__cordl_internal_set__ScatteringColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScatteringColor = value;
}
inline ::UnityEngine::Color WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::get_ScatteringColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(),
                        {"get_ScatteringColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::set_ScatteringColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(),
                        {"set_ScatteringColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::get_SplineShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::get_DefaultCustomSplineData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData* WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::ScatteringSplineLodInputData::ScatteringSplineLodInputData()   {
}
