#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectSpawnJob.hpp"
#include "JBooth/MicroVerseCore/zzzz__BendRules_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__CacheSplineJob_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float2_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectSpawnJob_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjectSpawnJob_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
// Ctor Parameters [CppParam { name: "start", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bendRule", ty: "::JBooth::MicroVerseCore::BendRules_Mode", modifiers: "", def_value: Some("{}") }, CppParam { name: "positionVariance", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotationVariance", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleVariance", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleUniform", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "chance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cullingMode", ty: "::JBooth::MicroVerseCore::BendRules_CullMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "quaternion", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry::ObjectSpawnJob_ObjEntry(float_t  start, float_t  range, float_t  meshLength, ::JBooth::MicroVerseCore::BendRules_Mode  bendRule, ::Unity::Mathematics::float3  positionVariance, ::Unity::Mathematics::float3  rotationVariance, ::Unity::Mathematics::float3  scaleVariance, bool  scaleUniform, float_t  chance, ::JBooth::MicroVerseCore::BendRules_CullMode  cullingMode, ::UnityEngine::Vector3  position, ::Unity::Mathematics::quaternion  quaternion, ::Unity::Mathematics::float3  scale) noexcept  {
this->start = start;
this->range = range;
this->meshLength = meshLength;
this->bendRule = bendRule;
this->positionVariance = positionVariance;
this->rotationVariance = rotationVariance;
this->scaleVariance = scaleVariance;
this->scaleUniform = scaleUniform;
this->chance = chance;
this->cullingMode = cullingMode;
this->position = position;
this->quaternion = quaternion;
this->scale = scale;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry::ObjectSpawnJob_ObjEntry()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectSpawnJob.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjectSpawnJob::*)()>(&::JBooth::MicroVerseCore::ObjectSpawnJob::Execute)> {
  constexpr static std::size_t size = 0x1320;
  constexpr static std::size_t addrs = 0x18141d270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectSpawnJob>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjectSpawnJob.EulerZXY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::quaternion)>(&::JBooth::MicroVerseCore::ObjectSpawnJob::EulerZXY)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181418020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectSpawnJob>(),
                        {"EulerZXY", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::ObjectSpawnJob::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectSpawnJob>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Mathematics::float3 JBooth::MicroVerseCore::ObjectSpawnJob::EulerZXY(::Unity::Mathematics::quaternion  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjectSpawnJob>(),
                        {"EulerZXY", {}, {::i2c::type_of<::Unity::Mathematics::quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, q);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  JBooth::MicroVerseCore::ObjectSpawnJob::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* JBooth::MicroVerseCore::ObjectSpawnJob::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "posQuats", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshLength", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "allowRoll", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "globalScaleBegin", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}") }, CppParam { name: "globalScaleEnd", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: Some("{}") }, CppParam { name: "entries", ty: "::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::ObjectSpawnJob::ObjectSpawnJob(::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::CacheSplineJob_PosQuat>  posQuats, float_t  meshLength, int32_t  orientation, bool  allowRoll, ::Unity::Mathematics::float2  globalScaleBegin, ::Unity::Mathematics::float2  globalScaleEnd, ::Unity::Collections::NativeArray_1<::JBooth::MicroVerseCore::ObjectSpawnJob_ObjEntry>  entries) noexcept  {
this->posQuats = posQuats;
this->meshLength = meshLength;
this->orientation = orientation;
this->allowRoll = allowRoll;
this->globalScaleBegin = globalScaleBegin;
this->globalScaleEnd = globalScaleEnd;
this->entries = entries;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjectSpawnJob::ObjectSpawnJob()   {
}
