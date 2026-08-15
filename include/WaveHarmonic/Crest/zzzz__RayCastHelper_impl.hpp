#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/RayCastHelper.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__SampleHelper_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__RayCastHelper_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::RayCastHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::RayCastHelper::*)(float_t, float_t)>(&::WaveHarmonic::Crest::RayCastHelper::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18257c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayCastHelper*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RayCastHelper.ComputeQueryCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::RayCastHelper::ComputeQueryCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18257c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayCastHelper*>(),
                        {"ComputeQueryCount", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::RayCastHelper.RayCast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::RayCastHelper::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>, ::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::RayCastHelper::RayCast)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18257c240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayCastHelper*>(),
                        {"RayCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::RayCastHelper::__cordl_internal_get__RayStepSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RayStepSize;
}
constexpr float_t const& WaveHarmonic::Crest::RayCastHelper::__cordl_internal_get__RayStepSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RayStepSize;
}
constexpr void WaveHarmonic::Crest::RayCastHelper::__cordl_internal_set__RayStepSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RayStepSize = value;
}
constexpr float_t& WaveHarmonic::Crest::RayCastHelper::__cordl_internal_get__MinimumLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinimumLength;
}
constexpr float_t const& WaveHarmonic::Crest::RayCastHelper::__cordl_internal_get__MinimumLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinimumLength;
}
constexpr void WaveHarmonic::Crest::RayCastHelper::__cordl_internal_set__MinimumLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinimumLength = value;
}
inline void WaveHarmonic::Crest::RayCastHelper::_ctor(float_t  rayLength, float_t  rayStepSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayCastHelper*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rayLength, rayStepSize);
}
inline int32_t WaveHarmonic::Crest::RayCastHelper::ComputeQueryCount(float_t  rayLength, ::by_ref<float_t>  rayStepSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayCastHelper*>(),
                        {"ComputeQueryCount", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, rayLength, rayStepSize);
}
inline bool WaveHarmonic::Crest::RayCastHelper::RayCast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<float_t>  distance, ::WaveHarmonic::Crest::CollisionLayer  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::RayCastHelper*>(),
                        {"RayCast", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, direction, distance, layer);
}
inline ::WaveHarmonic::Crest::RayCastHelper* WaveHarmonic::Crest::RayCastHelper::New_ctor(float_t  rayLength, float_t  rayStepSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::RayCastHelper*>(rayLength, rayStepSize));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::RayCastHelper::RayCastHelper()   {
}
