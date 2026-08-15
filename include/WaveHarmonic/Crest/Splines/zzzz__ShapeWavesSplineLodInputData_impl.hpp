#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/ShapeWavesSplineLodInputData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Splines/Internal/zzzz__SplineLodInputData_1_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__ShapeWavesSplineLodInputData_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__ShapeWavesSplineLodInputData_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__WavesSplinePointData_def.hpp"
inline void WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData_ShaderIDs::setStaticF_s_FeatherWaveStart(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_FeatherWaveStart", ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData_ShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData_ShaderIDs::getStaticF_s_FeatherWaveStart()  {
return ::cordl_internals::getStaticField<int32_t, "s_FeatherWaveStart", ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData_ShaderIDs*>();
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData_ShaderIDs::ShapeWavesSplineLodInputData_ShaderIDs()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData.get_FeatherWaveStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::get_FeatherWaveStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {"get_FeatherWaveStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData.set_FeatherWaveStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::*)(float_t)>(&::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::set_FeatherWaveStart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180eb78a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {"set_FeatherWaveStart", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData.get_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::get_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {"get_Weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData.set_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::*)(float_t)>(&::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::set_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18256e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData.get_SplineShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::get_SplineShader)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18256e5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData.get_DefaultCustomSplineData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::get_DefaultCustomSplineData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::OnUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18256e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::*)()>(&::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::__cordl_internal_get__Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr float_t const& WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::__cordl_internal_get__Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr void WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::__cordl_internal_set__Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Weight = value;
}
constexpr float_t& WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::__cordl_internal_get__FeatherWaveStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FeatherWaveStart;
}
constexpr float_t const& WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::__cordl_internal_get__FeatherWaveStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FeatherWaveStart;
}
constexpr void WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::__cordl_internal_set__FeatherWaveStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FeatherWaveStart = value;
}
inline float_t WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::get_FeatherWaveStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {"get_FeatherWaveStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::set_FeatherWaveStart(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {"set_FeatherWaveStart", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::get_Weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {"get_Weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::set_Weight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::get_SplineShader()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::get_DefaultCustomSplineData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::OnUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData* WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::ShapeWavesSplineLodInputData::ShapeWavesSplineLodInputData()   {
}
