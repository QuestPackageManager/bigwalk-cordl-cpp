#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjSpawnJobLinear.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__quaternion_impl.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__ObjSpawnJobLinear_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjSpawnJobLinear.Evaluate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjSpawnJobLinear::*)(float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::JBooth::MicroVerseCore::ObjSpawnJobLinear::Evaluate)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181408a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjSpawnJobLinear>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjSpawnJobLinear.GetPointAtLinearDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjSpawnJobLinear::*)(float_t, float_t, ::by_ref<float_t>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::JBooth::MicroVerseCore::ObjSpawnJobLinear::GetPointAtLinearDistance)> {
  constexpr static std::size_t size = 0xf50;
  constexpr static std::size_t addrs = 0x181408df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjSpawnJobLinear>(),
                        {"GetPointAtLinearDistance", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::ObjSpawnJobLinear.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::ObjSpawnJobLinear::*)()>(&::JBooth::MicroVerseCore::ObjSpawnJobLinear::Execute)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181408cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjSpawnJobLinear>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void JBooth::MicroVerseCore::ObjSpawnJobLinear::Evaluate(float_t  t, ::by_ref<::Unity::Mathematics::float3>  pos, ::by_ref<::Unity::Mathematics::quaternion>  quat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjSpawnJobLinear>(),
                        {"Evaluate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, t, pos, quat);
}
inline void JBooth::MicroVerseCore::ObjSpawnJobLinear::GetPointAtLinearDistance(float_t  fromT, float_t  relativeDistance, ::by_ref<float_t>  resultPointT, ::by_ref<::Unity::Mathematics::float3>  position, ::by_ref<::Unity::Mathematics::quaternion>  quat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjSpawnJobLinear>(),
                        {"GetPointAtLinearDistance", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fromT, relativeDistance, resultPointT, position, quat);
}
inline void JBooth::MicroVerseCore::ObjSpawnJobLinear::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::ObjSpawnJobLinear>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  JBooth::MicroVerseCore::ObjSpawnJobLinear::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* JBooth::MicroVerseCore::ObjSpawnJobLinear::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "linearDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "beginOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spline", ty: "::UnityEngine::Splines::NativeSpline", modifiers: "", def_value: Some("{}") }, CppParam { name: "offset", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "positions", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>", modifiers: "", def_value: Some("{}") }, CppParam { name: "quaternions", ty: "::Unity::Collections::NativeList_1<::Unity::Mathematics::quaternion>", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::ObjSpawnJobLinear::ObjSpawnJobLinear(float_t  linearDistance, float_t  beginOffset, ::UnityEngine::Splines::NativeSpline  spline, ::Unity::Mathematics::float3  offset, ::Unity::Collections::NativeList_1<::Unity::Mathematics::float3>  positions, ::Unity::Collections::NativeList_1<::Unity::Mathematics::quaternion>  quaternions) noexcept  {
this->linearDistance = linearDistance;
this->beginOffset = beginOffset;
this->spline = spline;
this->offset = offset;
this->positions = positions;
this->quaternions = quaternions;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::ObjSpawnJobLinear::ObjSpawnJobLinear()   {
}
