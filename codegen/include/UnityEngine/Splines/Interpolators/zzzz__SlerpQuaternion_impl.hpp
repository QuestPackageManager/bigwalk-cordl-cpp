#pragma once
// IWYU pragma private; include "UnityEngine/Splines/Interpolators/SlerpQuaternion.hpp"
#include "UnityEngine/Splines/Interpolators/zzzz__SlerpQuaternion_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Splines/zzzz__IInterpolator_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::Interpolators::SlerpQuaternion.Interpolate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::quaternion (::UnityEngine::Splines::Interpolators::SlerpQuaternion::*)(::Unity::Mathematics::quaternion, ::Unity::Mathematics::quaternion, float_t)>(&::UnityEngine::Splines::Interpolators::SlerpQuaternion::Interpolate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18217b670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Interpolators::SlerpQuaternion>(),
                        {"Interpolate", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::quaternion UnityEngine::Splines::Interpolators::SlerpQuaternion::Interpolate(::Unity::Mathematics::quaternion  a, ::Unity::Mathematics::quaternion  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::Interpolators::SlerpQuaternion>(),
                        {"Interpolate", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<::Unity::Mathematics::quaternion>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::quaternion>(*this, ___internal_method, a, b, t);
}
/// @brief Convert operator to "::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>"
constexpr  UnityEngine::Splines::Interpolators::SlerpQuaternion::operator ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>*()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>"
constexpr ::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>* UnityEngine::Splines::Interpolators::SlerpQuaternion::i___UnityEngine__Splines__IInterpolator_1___Unity__Mathematics__quaternion_()  {
return static_cast<::UnityEngine::Splines::IInterpolator_1<::Unity::Mathematics::quaternion>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::Interpolators::SlerpQuaternion::SlerpQuaternion()   {
}
