#pragma once
// IWYU pragma private; include "AmplifyImpostors/BoundsEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "AmplifyImpostors/zzzz__BoundsEx_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::AmplifyImpostors::BoundsEx.Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Bounds, ::UnityEngine::Matrix4x4)>(&::AmplifyImpostors::BoundsEx::Transform)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1802d9860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::BoundsEx*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Bounds AmplifyImpostors::BoundsEx::Transform(::UnityEngine::Bounds  bounds, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::AmplifyImpostors::BoundsEx*>(),
                        {"Transform", {}, {::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, bounds, matrix);
}
// Ctor Parameters []
constexpr ::AmplifyImpostors::BoundsEx::BoundsEx()   {
}
