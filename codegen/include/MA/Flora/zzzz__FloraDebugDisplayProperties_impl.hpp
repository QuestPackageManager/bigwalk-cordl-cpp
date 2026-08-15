#pragma once
// IWYU pragma private; include "MA/Flora/FloraDebugDisplayProperties.hpp"
#include "MA/Flora/zzzz__DebugInstanceDrawMode_impl.hpp"
#include "MA/Flora/zzzz__DebugLodMode_impl.hpp"
#include "MA/Flora/zzzz__DebugSpatialHashFlags_impl.hpp"
#include "MA/Flora/zzzz__DebugSpatialHashMode_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "MA/Flora/zzzz__FloraDebugDisplayProperties_def.hpp"
//  Writing Method size for method: ::MA::Flora::FloraDebugDisplayProperties.get_RenderSpatialHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraDebugDisplayProperties::*)()>(&::MA::Flora::FloraDebugDisplayProperties::get_RenderSpatialHash)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814c5d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplayProperties>(),
                        {"get_RenderSpatialHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraDebugDisplayProperties.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraDebugDisplayProperties::*)()>(&::MA::Flora::FloraDebugDisplayProperties::Reset)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814c5c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplayProperties>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::FloraDebugDisplayProperties::setStaticF_Default(::MA::Flora::FloraDebugDisplayProperties  value)  {
::cordl_internals::setStaticField<::MA::Flora::FloraDebugDisplayProperties, "Default", ::MA::Flora::FloraDebugDisplayProperties>(std::forward<::MA::Flora::FloraDebugDisplayProperties>(value));
}
inline ::MA::Flora::FloraDebugDisplayProperties MA::Flora::FloraDebugDisplayProperties::getStaticF_Default()  {
return ::cordl_internals::getStaticField<::MA::Flora::FloraDebugDisplayProperties, "Default", ::MA::Flora::FloraDebugDisplayProperties>();
}
inline bool MA::Flora::FloraDebugDisplayProperties::get_RenderSpatialHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplayProperties>(),
                        {"get_RenderSpatialHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::FloraDebugDisplayProperties::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraDebugDisplayProperties>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "InstanceDrawOpacity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "InstanceDrawMode", ty: "::MA::Flora::DebugInstanceDrawMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "FrozenCameraId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnableGPUChecks", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "LODMode", ty: "::MA::Flora::DebugLodMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "LODIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OcclusionTestOverlayEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "OcclusionTestOverlayOpacity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "OcclusionOverlayCountVisible", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "OcclusionOverrideTestToAlwaysPass", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "OccluderDepthOverlayEnabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "OcclusionDepthViewRange", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "SpatialHashMode", ty: "::MA::Flora::DebugSpatialHashMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "SpatialHashFlags", ty: "::MA::Flora::DebugSpatialHashFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "SpatialHashMaxDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnableCPUCullingStats", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnableGPUCullingStats", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraDebugDisplayProperties::FloraDebugDisplayProperties(float_t  InstanceDrawOpacity, ::MA::Flora::DebugInstanceDrawMode  InstanceDrawMode, ::UnityEngine::EntityId  FrozenCameraId, bool  EnableGPUChecks, ::MA::Flora::DebugLodMode  LODMode, int32_t  LODIndex, bool  OcclusionTestOverlayEnabled, float_t  OcclusionTestOverlayOpacity, bool  OcclusionOverlayCountVisible, bool  OcclusionOverrideTestToAlwaysPass, bool  OccluderDepthOverlayEnabled, ::UnityEngine::Vector2  OcclusionDepthViewRange, ::MA::Flora::DebugSpatialHashMode  SpatialHashMode, ::MA::Flora::DebugSpatialHashFlags  SpatialHashFlags, float_t  SpatialHashMaxDistance, bool  EnableCPUCullingStats, bool  EnableGPUCullingStats) noexcept  {
this->InstanceDrawOpacity = InstanceDrawOpacity;
this->InstanceDrawMode = InstanceDrawMode;
this->FrozenCameraId = FrozenCameraId;
this->EnableGPUChecks = EnableGPUChecks;
this->LODMode = LODMode;
this->LODIndex = LODIndex;
this->OcclusionTestOverlayEnabled = OcclusionTestOverlayEnabled;
this->OcclusionTestOverlayOpacity = OcclusionTestOverlayOpacity;
this->OcclusionOverlayCountVisible = OcclusionOverlayCountVisible;
this->OcclusionOverrideTestToAlwaysPass = OcclusionOverrideTestToAlwaysPass;
this->OccluderDepthOverlayEnabled = OccluderDepthOverlayEnabled;
this->OcclusionDepthViewRange = OcclusionDepthViewRange;
this->SpatialHashMode = SpatialHashMode;
this->SpatialHashFlags = SpatialHashFlags;
this->SpatialHashMaxDistance = SpatialHashMaxDistance;
this->EnableCPUCullingStats = EnableCPUCullingStats;
this->EnableGPUCullingStats = EnableGPUCullingStats;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraDebugDisplayProperties::FloraDebugDisplayProperties()   {
}
