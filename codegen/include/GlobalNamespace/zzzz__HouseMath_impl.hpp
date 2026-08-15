#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseMath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HouseMath_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HouseMath.SmoothDamp01
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, ::by_ref<float_t>, float_t, float_t, ::by_ref<bool>)>(&::GlobalNamespace::HouseMath::SmoothDamp01)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1803eb100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseMath*>(),
                        {"SmoothDamp01", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::HouseMath::SmoothDamp01(float_t  current, float_t  target, ::by_ref<float_t>  currentVelocity, float_t  smoothTime, float_t  snapThreshold, ::by_ref<bool>  changed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseMath*>(),
                        {"SmoothDamp01", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, current, target, currentVelocity, smoothTime, snapThreshold, changed);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseMath::HouseMath()   {
}
