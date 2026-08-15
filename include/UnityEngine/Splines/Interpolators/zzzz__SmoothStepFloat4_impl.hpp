#pragma once
// IWYU pragma private; include "UnityEngine/Splines/Interpolators/SmoothStepFloat4.hpp"
#include "UnityEngine/Splines/Interpolators/zzzz__SmoothStepFloat4_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/Splines/zzzz__IInterpolator_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::Interpolators::SmoothStepFloat4.Interpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (::UnityEngine::Splines::Interpolators::SmoothStepFloat4::*)(::Unity::Mathematics::float4, ::Unity::Mathematics::float4, float_t)>(&::UnityEngine::Splines::Interpolators::SmoothStepFloat4::Interpolate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18217b960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Interpolators::SmoothStepFloat4>(),
                        {"Interpolate", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float4 UnityEngine::Splines::Interpolators::SmoothStepFloat4::Interpolate(::Unity::Mathematics::float4  a, ::Unity::Mathematics::float4  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Interpolators::SmoothStepFloat4>(),
                        {"Interpolate", {}, {::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<::Unity::Mathematics::float4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(*this, ___internal_method, a, b, t);
}
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>"
constexpr  UnityEngine::Splines::Interpolators::SmoothStepFloat4::operator ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>*()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>"
constexpr ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>* UnityEngine::Splines::Interpolators::SmoothStepFloat4::i___UnityEngine__Splines__IInterpolator_1___Unity__Mathematics__float4_()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::float4>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::Interpolators::SmoothStepFloat4::SmoothStepFloat4()   {
}
