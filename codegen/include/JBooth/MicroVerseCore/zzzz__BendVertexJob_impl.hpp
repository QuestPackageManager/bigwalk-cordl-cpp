#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/BendVertexJob.hpp"
#include "JBooth/MicroVerseCore/zzzz__BendRules_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__CacheSplineJob_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__BendVertexJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::BendVertexJob.ExtractRotationFromMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::JBooth::MicroVerseCore::BendVertexJob::*)(::UnityEngine::Matrix4x4)>(&::JBooth::MicroVerseCore::BendVertexJob::ExtractRotationFromMatrix)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x181419c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendVertexJob>(),
                        {"ExtractRotationFromMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::BendVertexJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::BendVertexJob::*)()>(&::JBooth::MicroVerseCore::BendVertexJob::Execute)> {
  constexpr static std::size_t size = 0x1350;
  constexpr static std::size_t addrs = 0x181418920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendVertexJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Matrix4x4 JBooth::MicroVerseCore::BendVertexJob::ExtractRotationFromMatrix(::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendVertexJob>(),
                        {"ExtractRotationFromMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(*this, ___internal_method, matrix);
}
inline void JBooth::MicroVerseCore::BendVertexJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BendVertexJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  JBooth::MicroVerseCore::BendVertexJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* JBooth::MicroVerseCore::BendVertexJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "localToWorld", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldToLocal", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "posQuats", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>", modifiers: "", def_value: Some("{}") }, CppParam { name: "start", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allowRoll", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMode", ty: "::JBooth::MicroVerseCore::BendRules_CullMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "globalScaleBegin", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}") }, CppParam { name: "globalScaleEnd", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}") }, CppParam { name: "localPos", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "normals", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tangents", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: Some("{}") }, CppParam { name: "bounds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::BendVertexJob::BendVertexJob(::UnityEngine::Matrix4x4  localToWorld, ::UnityEngine::Matrix4x4  worldToLocal, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats, float_t  start, float_t  range, float_t  meshLength, float_t  meshScale, int32_t  orientation, bool  allowRoll, ::JBooth::MicroVerseCore::BendRules_CullMode  cullingMode, ::Unity::Mathematics::float2  globalScaleBegin, ::Unity::Mathematics::float2  globalScaleEnd, ::Unity::Mathematics::float3  localPos, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  normals, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  tangents, ::Unity::Collections::NativeArray_1<::UnityEngine::Bounds>  bounds) noexcept  {
this->localToWorld = localToWorld;
this->worldToLocal = worldToLocal;
this->posQuats = posQuats;
this->start = start;
this->range = range;
this->meshLength = meshLength;
this->meshScale = meshScale;
this->orientation = orientation;
this->allowRoll = allowRoll;
this->cullingMode = cullingMode;
this->globalScaleBegin = globalScaleBegin;
this->globalScaleEnd = globalScaleEnd;
this->localPos = localPos;
this->positions = positions;
this->normals = normals;
this->tangents = tangents;
this->bounds = bounds;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BendVertexJob::BendVertexJob()   {
}
