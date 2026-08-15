#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/FlowSplineLodInputData.hpp"
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__FlowSplineLodInputData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__FlowSplinePointData_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::FlowSplineLodInputData.get_FlowVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::get_FlowVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(),
                        {"get_FlowVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::FlowSplineLodInputData.set_FlowVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::*)(float_t)>(&::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::set_FlowVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18256e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(),
                        {"set_FlowVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::FlowSplineLodInputData.get_SplineShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::get_SplineShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18256e140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::FlowSplineLodInputData.get_DefaultCustomSplineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::get_DefaultCustomSplineData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::FlowSplineLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256e100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::Splines::FlowSplineLodInputData::__cordl_internal_get__FlowVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowVelocity;
}
constexpr float_t const& WaveHarmonic::Crest::Splines::FlowSplineLodInputData::__cordl_internal_get__FlowVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowVelocity;
}
constexpr void WaveHarmonic::Crest::Splines::FlowSplineLodInputData::__cordl_internal_set__FlowVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FlowVelocity = value;
}
inline float_t WaveHarmonic::Crest::Splines::FlowSplineLodInputData::get_FlowVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(),
                        {"get_FlowVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::FlowSplineLodInputData::set_FlowVelocity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(),
                        {"set_FlowVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> WaveHarmonic::Crest::Splines::FlowSplineLodInputData::get_SplineShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Splines::FlowSplineLodInputData::get_DefaultCustomSplineData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::FlowSplineLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::FlowSplineLodInputData* WaveHarmonic::Crest::Splines::FlowSplineLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::FlowSplineLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::FlowSplineLodInputData::FlowSplineLodInputData()   {
}
