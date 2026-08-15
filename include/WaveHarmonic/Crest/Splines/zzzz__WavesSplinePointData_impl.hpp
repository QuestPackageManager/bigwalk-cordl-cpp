#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/WavesSplinePointData.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePointData_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__WavesSplinePointData_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::WavesSplinePointData.get_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Splines::WavesSplinePointData::*)()>(&::WaveHarmonic::Crest::Splines::WavesSplinePointData::get_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>(),
                        {"get_Weight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::WavesSplinePointData.set_Weight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::WavesSplinePointData::*)(float_t)>(&::WaveHarmonic::Crest::Splines::WavesSplinePointData::set_Weight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::WavesSplinePointData.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::Splines::WavesSplinePointData::*)(::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::Splines::WavesSplinePointData::GetData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::WavesSplinePointData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::WavesSplinePointData::*)()>(&::WaveHarmonic::Crest::Splines::WavesSplinePointData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256e290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::Splines::WavesSplinePointData::__cordl_internal_get__Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr float_t const& WaveHarmonic::Crest::Splines::WavesSplinePointData::__cordl_internal_get__Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Weight;
}
constexpr void WaveHarmonic::Crest::Splines::WavesSplinePointData::__cordl_internal_set__Weight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Weight = value;
}
inline float_t WaveHarmonic::Crest::Splines::WavesSplinePointData::get_Weight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>(),
                        {"get_Weight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::WavesSplinePointData::set_Weight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>(),
                        {"set_Weight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Splines::WavesSplinePointData::GetData(::UnityEngine::Vector4  _)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, _);
}
inline void WaveHarmonic::Crest::Splines::WavesSplinePointData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::WavesSplinePointData* WaveHarmonic::Crest::Splines::WavesSplinePointData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::WavesSplinePointData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::WavesSplinePointData::WavesSplinePointData()   {
}
