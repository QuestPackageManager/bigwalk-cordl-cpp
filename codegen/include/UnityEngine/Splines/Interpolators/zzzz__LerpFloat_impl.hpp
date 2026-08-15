#pragma once
// IWYU pragma private; include "UnityEngine/Splines/Interpolators/LerpFloat.hpp"
#include "UnityEngine/Splines/Interpolators/zzzz__LerpFloat_def.hpp"
#include "UnityEngine/Splines/zzzz__IInterpolator_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::Interpolators::LerpFloat.Interpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::Interpolators::LerpFloat::*)(float_t, float_t, float_t)>(&::UnityEngine::Splines::Interpolators::LerpFloat::Interpolate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18217b130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Interpolators::LerpFloat>(),
                        {"Interpolate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t UnityEngine::Splines::Interpolators::LerpFloat::Interpolate(float_t  a, float_t  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Interpolators::LerpFloat>(),
                        {"Interpolate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, a, b, t);
}
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<float_t>"
constexpr  UnityEngine::Splines::Interpolators::LerpFloat::operator ::UnityEngine::Splines::IInterpolator_1<float_t>*()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<float_t>"
constexpr ::UnityEngine::Splines::IInterpolator_1<float_t>* UnityEngine::Splines::Interpolators::LerpFloat::i___UnityEngine__Splines__IInterpolator_1_float_t_()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<float_t>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::Interpolators::LerpFloat::LerpFloat()   {
}
