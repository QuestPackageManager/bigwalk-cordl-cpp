#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/CacheSplineJob.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__CacheSplineJob_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__CacheSplineJob_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
// Ctor Parameters [CppParam { name: "pos", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "quat", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::CacheSplineJob_PosQuat::CacheSplineJob_PosQuat(::Unity::Mathematics::float3  pos, ::Unity::Mathematics::quaternion  quat, ::Unity::Mathematics::float2  scale) noexcept  {
this->pos = pos;
this->quat = quat;
this->scale = scale;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::CacheSplineJob_PosQuat::CacheSplineJob_PosQuat()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::CacheSplineJob.FindShapeValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float2 (::JBooth::MicroVerseCore::CacheSplineJob::*)(float_t)>(&::JBooth::MicroVerseCore::CacheSplineJob::FindShapeValue)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181406100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CacheSplineJob>(),
                        {"FindShapeValue", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::CacheSplineJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::CacheSplineJob::*)(int32_t)>(&::JBooth::MicroVerseCore::CacheSplineJob::Execute)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x181405dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CacheSplineJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float2 JBooth::MicroVerseCore::CacheSplineJob::FindShapeValue(float_t  normalized_t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CacheSplineJob>(),
                        {"FindShapeValue", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float2>(*this, ___internal_method, normalized_t);
}
inline void JBooth::MicroVerseCore::CacheSplineJob::Execute(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::CacheSplineJob>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr  JBooth::MicroVerseCore::CacheSplineJob::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* JBooth::MicroVerseCore::CacheSplineJob::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "spline", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: Some("{}") }, CppParam { name: "shapeData", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sampleCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::CacheSplineJob::CacheSplineJob(::UnityEngine::Splines::NativeSpline  spline, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  shapeData, int32_t  sampleCount, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  data) noexcept  {
this->spline = spline;
this->shapeData = shapeData;
this->sampleCount = sampleCount;
this->data = data;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::CacheSplineJob::CacheSplineJob()   {
}
