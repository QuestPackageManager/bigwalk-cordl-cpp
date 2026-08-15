#pragma once
// IWYU pragma private; include "MA/Flora/AnimatedCrossFadeData.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__AnimatedCrossFadeData_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
//  Writing Method size for method: ::MA::Flora::AnimatedCrossFadeData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AnimatedCrossFadeData::*)(::by_ref<::UnityEngine::Rendering::LODParameters>, float_t)>(&::MA::Flora::AnimatedCrossFadeData::Reset)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814af220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AnimatedCrossFadeData>(),
                        {"Reset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LODParameters>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AnimatedCrossFadeData.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::AnimatedCrossFadeData::*)(::by_ref<::UnityEngine::Rendering::LODParameters>, float_t)>(&::MA::Flora::AnimatedCrossFadeData::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814af2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AnimatedCrossFadeData>(),
                        {"Update", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LODParameters>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::AnimatedCrossFadeData.ComputeAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MA::Flora::AnimatedCrossFadeData::*)()>(&::MA::Flora::AnimatedCrossFadeData::ComputeAlpha)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1814af180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AnimatedCrossFadeData>(),
                        {"ComputeAlpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::AnimatedCrossFadeData::Reset(::by_ref<::UnityEngine::Rendering::LODParameters>  lodParameters, float_t  screenRelativeMetric)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AnimatedCrossFadeData>(),
                        {"Reset", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LODParameters>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lodParameters, screenRelativeMetric);
}
inline void MA::Flora::AnimatedCrossFadeData::Update(::by_ref<::UnityEngine::Rendering::LODParameters>  lodParameters, float_t  screenRelativeMetric)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AnimatedCrossFadeData>(),
                        {"Update", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::LODParameters>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lodParameters, screenRelativeMetric);
}
inline float_t MA::Flora::AnimatedCrossFadeData::ComputeAlpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::AnimatedCrossFadeData>(),
                        {"ComputeAlpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "ViewId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "LastUpdateFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "AnimatedLODCameraPosition0", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "AnimatedLODCameraScreenRelativeMetric0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "AnimatedLODCameraPosition1", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "AnimatedLODCameraScreenRelativeMetric1", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnimatedLODTime0", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnimatedLODTime1", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AnimatedLODDuration", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::AnimatedCrossFadeData::AnimatedCrossFadeData(::UnityEngine::EntityId  ViewId, int32_t  LastUpdateFrameIndex, ::Unity::Mathematics::float3  AnimatedLODCameraPosition0, float_t  AnimatedLODCameraScreenRelativeMetric0, ::Unity::Mathematics::float3  AnimatedLODCameraPosition1, float_t  AnimatedLODCameraScreenRelativeMetric1, double_t  m_AnimatedLODTime0, double_t  m_AnimatedLODTime1, double_t  m_AnimatedLODDuration) noexcept  {
this->ViewId = ViewId;
this->LastUpdateFrameIndex = LastUpdateFrameIndex;
this->AnimatedLODCameraPosition0 = AnimatedLODCameraPosition0;
this->AnimatedLODCameraScreenRelativeMetric0 = AnimatedLODCameraScreenRelativeMetric0;
this->AnimatedLODCameraPosition1 = AnimatedLODCameraPosition1;
this->AnimatedLODCameraScreenRelativeMetric1 = AnimatedLODCameraScreenRelativeMetric1;
this->m_AnimatedLODTime0 = m_AnimatedLODTime0;
this->m_AnimatedLODTime1 = m_AnimatedLODTime1;
this->m_AnimatedLODDuration = m_AnimatedLODDuration;
}
// Ctor Parameters []
constexpr ::MA::Flora::AnimatedCrossFadeData::AnimatedCrossFadeData()   {
}
