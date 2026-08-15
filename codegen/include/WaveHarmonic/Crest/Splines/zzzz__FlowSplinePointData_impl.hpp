#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/FlowSplinePointData.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePointData_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__FlowSplinePointData_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::FlowSplinePointData.get_FlowVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Splines::FlowSplinePointData::*)()>(&::WaveHarmonic::Crest::Splines::FlowSplinePointData::get_FlowVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180356140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>(),
                        {"get_FlowVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::FlowSplinePointData.set_FlowVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::FlowSplinePointData::*)(float_t)>(&::WaveHarmonic::Crest::Splines::FlowSplinePointData::set_FlowVelocity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>(),
                        {"set_FlowVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::FlowSplinePointData.GetData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::WaveHarmonic::Crest::Splines::FlowSplinePointData::*)(::UnityEngine::Vector4)>(&::WaveHarmonic::Crest::Splines::FlowSplinePointData::GetData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::FlowSplinePointData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::FlowSplinePointData::*)()>(&::WaveHarmonic::Crest::Splines::FlowSplinePointData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18256e1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::Splines::FlowSplinePointData::__cordl_internal_get__FlowVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowVelocity;
}
constexpr float_t const& WaveHarmonic::Crest::Splines::FlowSplinePointData::__cordl_internal_get__FlowVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FlowVelocity;
}
constexpr void WaveHarmonic::Crest::Splines::FlowSplinePointData::__cordl_internal_set__FlowVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FlowVelocity = value;
}
inline float_t WaveHarmonic::Crest::Splines::FlowSplinePointData::get_FlowVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>(),
                        {"get_FlowVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::FlowSplinePointData::set_FlowVelocity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>(),
                        {"set_FlowVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 WaveHarmonic::Crest::Splines::FlowSplinePointData::GetData(::UnityEngine::Vector4  _)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, _);
}
inline void WaveHarmonic::Crest::Splines::FlowSplinePointData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::FlowSplinePointData* WaveHarmonic::Crest::Splines::FlowSplinePointData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::FlowSplinePointData*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::FlowSplinePointData::FlowSplinePointData()   {
}
