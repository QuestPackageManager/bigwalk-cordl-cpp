#pragma once
// IWYU pragma private; include "UnityEngine/Splines/Interpolators/LerpColor.hpp"
#include "UnityEngine/Splines/Interpolators/zzzz__LerpColor_def.hpp"
#include "UnityEngine/Splines/zzzz__IInterpolator_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::Interpolators::LerpColor.Interpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::Splines::Interpolators::LerpColor::*)(::UnityEngine::Color, ::UnityEngine::Color, float_t)>(&::UnityEngine::Splines::Interpolators::LerpColor::Interpolate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18217ae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Interpolators::LerpColor>(),
                        {"Interpolate", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Color UnityEngine::Splines::Interpolators::LerpColor::Interpolate(::UnityEngine::Color  a, ::UnityEngine::Color  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Interpolators::LerpColor>(),
                        {"Interpolate", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method, a, b, t);
}
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>"
constexpr  UnityEngine::Splines::Interpolators::LerpColor::operator ::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>*()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>"
constexpr ::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>* UnityEngine::Splines::Interpolators::LerpColor::i___UnityEngine__Splines__IInterpolator_1___UnityEngine__Color_()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::UnityEngine::Color>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::Interpolators::LerpColor::LerpColor()   {
}
