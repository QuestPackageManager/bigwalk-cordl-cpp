#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/SplineMeshUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplineMeshUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplinePoint_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__Spline_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::Splines::SplineMeshUtility.ResolveOverlaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Span_1<::UnityEngine::Vector3>, ::System::Span_1<::UnityEngine::Vector3>)>(&::WaveHarmonic::Crest::Splines::SplineMeshUtility::ResolveOverlaps)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18256fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineMeshUtility*>(),
                        {"ResolveOverlaps", {}, {::i2c::type_of<::System::Span_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void WaveHarmonic::Crest::Splines::SplineMeshUtility::setStaticF_s_SplinePoints(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*, "s_SplinePoints", ::WaveHarmonic::Crest::Splines::SplineMeshUtility*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>* WaveHarmonic::Crest::Splines::SplineMeshUtility::getStaticF_s_SplinePoints()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*, "s_SplinePoints", ::WaveHarmonic::Crest::Splines::SplineMeshUtility*>();
}
template<typename T>
inline bool WaveHarmonic::Crest::Splines::SplineMeshUtility::GenerateMeshFromSpline(::WaveHarmonic::Crest::Splines::Spline*  spline, ::UnityEngine::Transform*  transform, int32_t  subdivisions, float_t  radius, ::UnityEngine::Vector4  customDataDefault, ::by_ref<::UnityEngine::Mesh*>  mesh, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  verts)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineMeshUtility*>(),
                    {"GenerateMeshFromSpline", {::i2c::class_of<T>()}, {::i2c::type_of<::WaveHarmonic::Crest::Splines::Spline*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::by_ref<::UnityEngine::Mesh*>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, spline, transform, subdivisions, radius, customDataDefault, mesh, verts);
}
inline void WaveHarmonic::Crest::Splines::SplineMeshUtility::ResolveOverlaps(::System::Span_1<::UnityEngine::Vector3>  points, ::System::Span_1<::UnityEngine::Vector3>  pointsOnSpline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::Splines::SplineMeshUtility*>(),
                        {"ResolveOverlaps", {}, {::i2c::type_of<::System::Span_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Span_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, points, pointsOnSpline);
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::Splines::SplineMeshUtility::SplineMeshUtility()   {
}
