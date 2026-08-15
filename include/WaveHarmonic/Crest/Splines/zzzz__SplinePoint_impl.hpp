#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/SplinePoint.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__CustomBehaviour_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePoint_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::SplinePoint.get_RadiusMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::Splines::SplinePoint::*)()>(&::WaveHarmonic::Crest::Splines::SplinePoint::get_RadiusMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplinePoint*>(),
                        {"get_RadiusMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::SplinePoint.set_RadiusMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::SplinePoint::*)(float_t)>(&::WaveHarmonic::Crest::Splines::SplinePoint::set_RadiusMultiplier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f2c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplinePoint*>(),
                        {"set_RadiusMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::SplinePoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::Splines::SplinePoint::*)()>(&::WaveHarmonic::Crest::Splines::SplinePoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18256fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplinePoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& WaveHarmonic::Crest::Splines::SplinePoint::__cordl_internal_get__RadiusMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RadiusMultiplier;
}
constexpr float_t const& WaveHarmonic::Crest::Splines::SplinePoint::__cordl_internal_get__RadiusMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RadiusMultiplier;
}
constexpr void WaveHarmonic::Crest::Splines::SplinePoint::__cordl_internal_set__RadiusMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RadiusMultiplier = value;
}
constexpr ::UnityEngine::Vector3& WaveHarmonic::Crest::Splines::SplinePoint::__cordl_internal_get__LocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalPosition;
}
constexpr ::UnityEngine::Vector3 const& WaveHarmonic::Crest::Splines::SplinePoint::__cordl_internal_get__LocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalPosition;
}
constexpr void WaveHarmonic::Crest::Splines::SplinePoint::__cordl_internal_set__LocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalPosition = value;
}
inline float_t WaveHarmonic::Crest::Splines::SplinePoint::get_RadiusMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplinePoint*>(),
                        {"get_RadiusMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::Splines::SplinePoint::set_RadiusMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplinePoint*>(),
                        {"set_RadiusMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::Splines::SplinePoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplinePoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Splines::SplinePoint* WaveHarmonic::Crest::Splines::SplinePoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::Splines::SplinePoint*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::SplinePoint::SplinePoint()   {
}
