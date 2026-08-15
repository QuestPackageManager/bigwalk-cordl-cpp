#pragma once
// IWYU pragma private; include "UnityEngine/Splines/MathUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__MathUtility_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::MathUtility.MultiplyVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float3)>(&::UnityEngine::Splines::MathUtility::MultiplyVector)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x182167320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::MathUtility*>(),
                        {"MultiplyVector", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::MathUtility.All
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Mathematics::float4x4, ::Unity::Mathematics::float4x4)>(&::UnityEngine::Splines::MathUtility::All)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182167220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::MathUtility*>(),
                        {"All", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float3 UnityEngine::Splines::MathUtility::MultiplyVector(::Unity::Mathematics::float4x4  matrix, ::Unity::Mathematics::float3  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::MathUtility*>(),
                        {"MultiplyVector", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, matrix, vector);
}
inline bool UnityEngine::Splines::MathUtility::All(::Unity::Mathematics::float4x4  matrixA, ::Unity::Mathematics::float4x4  matrixB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::MathUtility*>(),
                        {"All", {}, {::i2c::type_of<::Unity::Mathematics::float4x4>(), ::i2c::type_of<::Unity::Mathematics::float4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, matrixA, matrixB);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::MathUtility::MathUtility()   {
}
