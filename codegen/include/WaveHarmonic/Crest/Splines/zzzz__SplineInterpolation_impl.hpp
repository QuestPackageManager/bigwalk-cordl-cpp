#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/SplineInterpolation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplineInterpolation_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePoint_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::SplineInterpolation.InterpolateLinearPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::Splines::SplineInterpolation::InterpolateLinearPosition)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18256f4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"InterpolateLinearPosition", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::SplineInterpolation.InterpolateCubicPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::System::Span_1<::UnityEngine::Vector3>, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::Splines::SplineInterpolation::InterpolateCubicPosition)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18256f260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"InterpolateCubicPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::SplineInterpolation.GenerateCubicSplineHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*, ::System::Span_1<::UnityEngine::Vector3>, bool)>(&::WaveHarmonic::Crest::Splines::SplineInterpolation::GenerateCubicSplineHull)> {
  constexpr static std::size_t size = 0xc00;
  constexpr static std::size_t addrs = 0x18256e660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"GenerateCubicSplineHull", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::SplineInterpolation.TangentAfter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*, int32_t, bool)>(&::WaveHarmonic::Crest::Splines::SplineInterpolation::TangentAfter)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18256f5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"TangentAfter", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::SplineInterpolation.TangentBefore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*, int32_t, bool)>(&::WaveHarmonic::Crest::Splines::SplineInterpolation::TangentBefore)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18256f5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"TangentBefore", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Splines::SplineInterpolation::InterpolateLinearPosition(::ArrayW<::UnityEngine::Vector3>  points, float_t  t, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"InterpolateLinearPosition", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, t, position);
}
inline void WaveHarmonic::Crest::Splines::SplineInterpolation::InterpolateCubicPosition(float_t  splinePointCount, ::System::Span_1<::UnityEngine::Vector3>  splinePointsAndTangents, float_t  t, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"InterpolateCubicPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, splinePointCount, splinePointsAndTangents, t, position);
}
inline bool WaveHarmonic::Crest::Splines::SplineInterpolation::GenerateCubicSplineHull(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  splinePoints, ::System::Span_1<::UnityEngine::Vector3>  splinePointsAndTangents, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"GenerateCubicSplineHull", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, splinePoints, splinePointsAndTangents, closed);
}
inline ::UnityEngine::Vector3 WaveHarmonic::Crest::Splines::SplineInterpolation::TangentAfter(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  splinePoints, int32_t  idx, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"TangentAfter", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, splinePoints, idx, closed);
}
inline ::UnityEngine::Vector3 WaveHarmonic::Crest::Splines::SplineInterpolation::TangentBefore(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  splinePoints, int32_t  idx, bool  closed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineInterpolation*>(),
                        {"TangentBefore", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, splinePoints, idx, closed);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::SplineInterpolation::SplineInterpolation()   {
}
