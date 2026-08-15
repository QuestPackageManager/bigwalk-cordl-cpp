#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/AbsorptionSplineLodInputData.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__AbsorptionSplineLodInputData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__AbsorptionSplinePointData_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData.get_AbsorptionColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::get_AbsorptionColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                        {"get_AbsorptionColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData.set_AbsorptionColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::*)(::UnityEngine::Color)>(&::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::set_AbsorptionColor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18256dd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                        {"set_AbsorptionColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData.get_SplineShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::get_SplineShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18256dd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData.get_DefaultCustomSplineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::get_DefaultCustomSplineData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData.SetAbsorptionColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::SetAbsorptionColor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18256dc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                        {"SetAbsorptionColor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18256dbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18256dca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::__cordl_internal_get__AbsorptionColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AbsorptionColor;
}
constexpr ::UnityEngine::Color const& WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::__cordl_internal_get__AbsorptionColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AbsorptionColor;
}
constexpr void WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::__cordl_internal_set__AbsorptionColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AbsorptionColor = value;
}
constexpr ::UnityEngine::Vector4& WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::__cordl_internal_get__Absorption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Absorption;
}
constexpr ::UnityEngine::Vector4 const& WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::__cordl_internal_get__Absorption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Absorption;
}
constexpr void WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::__cordl_internal_set__Absorption(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Absorption = value;
}
inline ::UnityEngine::Color WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::get_AbsorptionColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                        {"get_AbsorptionColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::set_AbsorptionColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                        {"set_AbsorptionColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::get_SplineShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::get_DefaultCustomSplineData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::SetAbsorptionColor(::UnityEngine::Color  previous, ::UnityEngine::Color  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                        {"SetAbsorptionColor", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData* WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::AbsorptionSplineLodInputData::AbsorptionSplineLodInputData()   {
}
