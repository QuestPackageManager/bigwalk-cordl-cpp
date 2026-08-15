#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineJobs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineJobs_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineJobs.EvaluatePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::NativeSpline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>)>(&::UnityEngine::Splines::SplineJobs::EvaluatePosition)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18217bbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineJobs*>(),
                        {"EvaluatePosition", {}, {::i2c::type_of<::UnityEngine::Splines::NativeSpline>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineJobs.EvaluatePositionTangentNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Splines::NativeSpline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>)>(&::UnityEngine::Splines::SplineJobs::EvaluatePositionTangentNormal)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18217bab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineJobs*>(),
                        {"EvaluatePositionTangentNormal", {}, {::i2c::type_of<::UnityEngine::Splines::NativeSpline>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline void UnityEngine::Splines::SplineJobs::EvaluatePosition(T  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineJobs*>(),
                    {"EvaluatePosition", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, positions);
}
inline void UnityEngine::Splines::SplineJobs::EvaluatePosition(::UnityEngine::Splines::NativeSpline  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineJobs*>(),
                        {"EvaluatePosition", {}, {::i2c::type_of<::UnityEngine::Splines::NativeSpline>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, positions);
}
template<typename T>
inline void UnityEngine::Splines::SplineJobs::EvaluatePositionTangentNormal(T  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  tangents, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  normals)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Splines::SplineJobs*>(),
                    {"EvaluatePositionTangentNormal", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, positions, tangents, normals);
}
inline void UnityEngine::Splines::SplineJobs::EvaluatePositionTangentNormal(::UnityEngine::Splines::NativeSpline  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  positions, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  tangents, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  normals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineJobs*>(),
                        {"EvaluatePositionTangentNormal", {}, {::i2c::type_of<::UnityEngine::Splines::NativeSpline>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, spline, positions, tangents, normals);
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineJobs::SplineJobs()   {
}
