#pragma once
// IWYU pragma private; include "MA/Flora/FloraSceneSettings.hpp"
#include "MA/Flora/zzzz__FloraCullingPipeline_impl.hpp"
#include "MA/Flora/zzzz__FloraDetailStreamingMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MA/Flora/zzzz__FloraSceneSettings_def.hpp"
#include "MA/Flora/zzzz__FloraDensitySettings_def.hpp"
#include "MA/Flora/zzzz__FloraDetailStreamingMode_def.hpp"
#include "MA/Flora/zzzz__FloraRenderSettings_def.hpp"
#include "MA/Flora/zzzz__FloraSceneSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeProfile_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraSceneSettings_Version::FloraSceneSettings_Version(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSceneSettings_Version::FloraSceneSettings_Version()   {
}
constexpr ::MA::Flora::FloraSceneSettings_Version  MA::Flora::FloraSceneSettings_Version::Initial{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraSceneSettings_Version  MA::Flora::FloraSceneSettings_Version::AddedDetailStreamingControls{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::MA::Flora::FloraSceneSettings> (*)()>(&::MA::Flora::FloraSceneSettings::get_Instance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814e7da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MA::Flora::FloraSceneSettings*)>(&::MA::Flora::FloraSceneSettings::set_Instance)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814e7dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"set_Instance", {}, {::i2c::type_of<::MA::Flora::FloraSceneSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.GetOrCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::MA::Flora::FloraSceneSettings> (*)()>(&::MA::Flora::FloraSceneSettings::GetOrCreate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814e78b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"GetOrCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.GetGlobalRenderSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::MA::Flora::FloraRenderSettings> (::MA::Flora::FloraSceneSettings::*)()>(&::MA::Flora::FloraSceneSettings::GetGlobalRenderSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814e78a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"GetGlobalRenderSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.GetGlobalDensitySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::MA::Flora::FloraDensitySettings> (::MA::Flora::FloraSceneSettings::*)()>(&::MA::Flora::FloraSceneSettings::GetGlobalDensitySettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814e7890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"GetGlobalDensitySettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.DecodeResponsiveness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::MA::Flora::FloraSceneSettings::DecodeResponsiveness)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1814e7750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"DecodeResponsiveness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.DeriveDetailStreamingControlsFromLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, ::by_ref<::MA::Flora::FloraDetailStreamingMode>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::MA::Flora::FloraSceneSettings::DeriveDetailStreamingControlsFromLegacy)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814e77a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"DeriveDetailStreamingControlsFromLegacy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDetailStreamingMode>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.MigrateSettingsIfNeeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraSceneSettings::*)()>(&::MA::Flora::FloraSceneSettings::MigrateSettingsIfNeeded)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814e79a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"MigrateSettingsIfNeeded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSceneSettings::*)()>(&::MA::Flora::FloraSceneSettings::OnEnable)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1814e7b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSceneSettings::*)()>(&::MA::Flora::FloraSceneSettings::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814e7ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraSceneSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraSceneSettings::*)()>(&::MA::Flora::FloraSceneSettings::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814e7d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_EnableRendering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRendering;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_EnableRendering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableRendering;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_EnableRendering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableRendering = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowDensityCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowDensityCulling;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowDensityCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowDensityCulling;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AllowDensityCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowDensityCulling = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowGPUOcclusionCulling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowGPUOcclusionCulling;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowGPUOcclusionCulling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowGPUOcclusionCulling;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AllowGPUOcclusionCulling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowGPUOcclusionCulling = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerObjectMotionVectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerObjectMotionVectors;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerObjectMotionVectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerObjectMotionVectors;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AllowPerObjectMotionVectors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowPerObjectMotionVectors = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowLegacyLightProbes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowLegacyLightProbes;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowLegacyLightProbes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowLegacyLightProbes;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AllowLegacyLightProbes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowLegacyLightProbes = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowAdditionalLightShadows()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowAdditionalLightShadows;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowAdditionalLightShadows() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowAdditionalLightShadows;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AllowAdditionalLightShadows(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowAdditionalLightShadows = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_EnableTerrainFoliage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableTerrainFoliage;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_EnableTerrainFoliage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnableTerrainFoliage;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_EnableTerrainFoliage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnableTerrainFoliage = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AutoRegisterTerrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoRegisterTerrains;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AutoRegisterTerrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoRegisterTerrains;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AutoRegisterTerrains(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoRegisterTerrains = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerTreeMotionVectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerTreeMotionVectors;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerTreeMotionVectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerTreeMotionVectors;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AllowPerTreeMotionVectors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowPerTreeMotionVectors = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerTreeLightProbes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerTreeLightProbes;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerTreeLightProbes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerTreeLightProbes;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AllowPerTreeLightProbes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowPerTreeLightProbes = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerDetailMotionVectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerDetailMotionVectors;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerDetailMotionVectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerDetailMotionVectors;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AllowPerDetailMotionVectors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowPerDetailMotionVectors = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerDetailLightProbes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerDetailLightProbes;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_AllowPerDetailLightProbes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllowPerDetailLightProbes;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_AllowPerDetailLightProbes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllowPerDetailLightProbes = value;
}
constexpr ::MA::Flora::FloraDetailStreamingMode& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailStreamingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailStreamingMode;
}
constexpr ::MA::Flora::FloraDetailStreamingMode const& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailStreamingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailStreamingMode;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_DetailStreamingMode(::MA::Flora::FloraDetailStreamingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetailStreamingMode = value;
}
constexpr float_t& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailStreamingResponsiveness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailStreamingResponsiveness;
}
constexpr float_t const& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailStreamingResponsiveness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailStreamingResponsiveness;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_DetailStreamingResponsiveness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetailStreamingResponsiveness = value;
}
constexpr int32_t& MA::Flora::FloraSceneSettings::__cordl_internal_get_CustomDetailPatchLayerBudgetPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomDetailPatchLayerBudgetPerFrame;
}
constexpr int32_t const& MA::Flora::FloraSceneSettings::__cordl_internal_get_CustomDetailPatchLayerBudgetPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomDetailPatchLayerBudgetPerFrame;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_CustomDetailPatchLayerBudgetPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomDetailPatchLayerBudgetPerFrame = value;
}
constexpr int32_t& MA::Flora::FloraSceneSettings::__cordl_internal_get_CustomDetailStructuralInstanceBudgetPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomDetailStructuralInstanceBudgetPerFrame;
}
constexpr int32_t const& MA::Flora::FloraSceneSettings::__cordl_internal_get_CustomDetailStructuralInstanceBudgetPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomDetailStructuralInstanceBudgetPerFrame;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_CustomDetailStructuralInstanceBudgetPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomDetailStructuralInstanceBudgetPerFrame = value;
}
constexpr float_t& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailUnloadHysteresisSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailUnloadHysteresisSeconds;
}
constexpr float_t const& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailUnloadHysteresisSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailUnloadHysteresisSeconds;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_DetailUnloadHysteresisSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetailUnloadHysteresisSeconds = value;
}
constexpr int32_t& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailUnloadDelayFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailUnloadDelayFrames;
}
constexpr int32_t const& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailUnloadDelayFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailUnloadDelayFrames;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_DetailUnloadDelayFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetailUnloadDelayFrames = value;
}
constexpr int32_t& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailUnloadBudgetPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailUnloadBudgetPerFrame;
}
constexpr int32_t const& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailUnloadBudgetPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailUnloadBudgetPerFrame;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_DetailUnloadBudgetPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetailUnloadBudgetPerFrame = value;
}
constexpr int32_t& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailLoadBudgetPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailLoadBudgetPerFrame;
}
constexpr int32_t const& MA::Flora::FloraSceneSettings::__cordl_internal_get_DetailLoadBudgetPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DetailLoadBudgetPerFrame;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_DetailLoadBudgetPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DetailLoadBudgetPerFrame = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_OverrideCullingPipeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideCullingPipeline;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_OverrideCullingPipeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideCullingPipeline;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_OverrideCullingPipeline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideCullingPipeline = value;
}
constexpr ::MA::Flora::FloraCullingPipeline& MA::Flora::FloraSceneSettings::__cordl_internal_get_CullingPipelineOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CullingPipelineOverride;
}
constexpr ::MA::Flora::FloraCullingPipeline const& MA::Flora::FloraSceneSettings::__cordl_internal_get_CullingPipelineOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CullingPipelineOverride;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_CullingPipelineOverride(::MA::Flora::FloraCullingPipeline  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CullingPipelineOverride = value;
}
constexpr ::UnityW<::UnityEngine::Light>& MA::Flora::FloraSceneSettings::__cordl_internal_get_MainLightOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MainLightOverride;
}
constexpr ::UnityW<::UnityEngine::Light> const& MA::Flora::FloraSceneSettings::__cordl_internal_get_MainLightOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MainLightOverride;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_MainLightOverride(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MainLightOverride = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_OverrideTerrainTreeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideTerrainTreeDistance;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_OverrideTerrainTreeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideTerrainTreeDistance;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_OverrideTerrainTreeDistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideTerrainTreeDistance = value;
}
constexpr float_t& MA::Flora::FloraSceneSettings::__cordl_internal_get_TerrainTreeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainTreeDistance;
}
constexpr float_t const& MA::Flora::FloraSceneSettings::__cordl_internal_get_TerrainTreeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainTreeDistance;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_TerrainTreeDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TerrainTreeDistance = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_OverrideTerrainDetailDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideTerrainDetailDistance;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_OverrideTerrainDetailDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideTerrainDetailDistance;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_OverrideTerrainDetailDistance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideTerrainDetailDistance = value;
}
constexpr float_t& MA::Flora::FloraSceneSettings::__cordl_internal_get_TerrainDetailDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainDetailDistance;
}
constexpr float_t const& MA::Flora::FloraSceneSettings::__cordl_internal_get_TerrainDetailDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TerrainDetailDistance;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_TerrainDetailDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TerrainDetailDistance = value;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& MA::Flora::FloraSceneSettings::__cordl_internal_get_m_VolumeProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VolumeProfile;
}
constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& MA::Flora::FloraSceneSettings::__cordl_internal_get_m_VolumeProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VolumeProfile;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_m_VolumeProfile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VolumeProfile = value;
}
constexpr bool& MA::Flora::FloraSceneSettings::__cordl_internal_get_m_NewlyCreated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NewlyCreated;
}
constexpr bool const& MA::Flora::FloraSceneSettings::__cordl_internal_get_m_NewlyCreated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NewlyCreated;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_m_NewlyCreated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NewlyCreated = value;
}
constexpr ::MA::Flora::FloraSceneSettings_Version& MA::Flora::FloraSceneSettings::__cordl_internal_get_m_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr ::MA::Flora::FloraSceneSettings_Version const& MA::Flora::FloraSceneSettings::__cordl_internal_get_m_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr void MA::Flora::FloraSceneSettings::__cordl_internal_set_m_Version(::MA::Flora::FloraSceneSettings_Version  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Version = value;
}
inline void MA::Flora::FloraSceneSettings::setStaticF__Instance_k__BackingField(::UnityW<::MA::Flora::FloraSceneSettings>  value)  {
::cordl_internals::setStaticField<::UnityW<::MA::Flora::FloraSceneSettings>, "<Instance>k__BackingField", ::MA::Flora::FloraSceneSettings*>(std::forward<::UnityW<::MA::Flora::FloraSceneSettings>>(value));
}
inline ::UnityW<::MA::Flora::FloraSceneSettings> MA::Flora::FloraSceneSettings::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::MA::Flora::FloraSceneSettings>, "<Instance>k__BackingField", ::MA::Flora::FloraSceneSettings*>();
}
inline ::UnityW<::MA::Flora::FloraSceneSettings> MA::Flora::FloraSceneSettings::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::MA::Flora::FloraSceneSettings>>(nullptr, ___internal_method);
}
inline void MA::Flora::FloraSceneSettings::set_Instance(::MA::Flora::FloraSceneSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"set_Instance", {}, {::i2c::type_of<::MA::Flora::FloraSceneSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::MA::Flora::FloraSceneSettings> MA::Flora::FloraSceneSettings::GetOrCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"GetOrCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::MA::Flora::FloraSceneSettings>>(nullptr, ___internal_method);
}
inline ::UnityW<::MA::Flora::FloraRenderSettings> MA::Flora::FloraSceneSettings::GetGlobalRenderSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"GetGlobalRenderSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::MA::Flora::FloraRenderSettings>>(this, ___internal_method);
}
inline ::UnityW<::MA::Flora::FloraDensitySettings> MA::Flora::FloraSceneSettings::GetGlobalDensitySettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"GetGlobalDensitySettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::MA::Flora::FloraDensitySettings>>(this, ___internal_method);
}
template<typename T>
inline T MA::Flora::FloraSceneSettings::GetGlobalVolumeSettings()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                    {"GetGlobalVolumeSettings", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline float_t MA::Flora::FloraSceneSettings::DecodeResponsiveness(float_t  normalizedBudget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"DecodeResponsiveness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, normalizedBudget);
}
inline void MA::Flora::FloraSceneSettings::DeriveDetailStreamingControlsFromLegacy(int32_t  legacyLoadBudgetPerFrame, int32_t  legacyUnloadBudgetPerFrame, int32_t  legacyUnloadDelayFrames, ::by_ref<::MA::Flora::FloraDetailStreamingMode>  mode, ::by_ref<float_t>  responsiveness, ::by_ref<float_t>  hysteresisSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"DeriveDetailStreamingControlsFromLegacy", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::MA::Flora::FloraDetailStreamingMode>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, legacyLoadBudgetPerFrame, legacyUnloadBudgetPerFrame, legacyUnloadDelayFrames, mode, responsiveness, hysteresisSeconds);
}
inline bool MA::Flora::FloraSceneSettings::MigrateSettingsIfNeeded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"MigrateSettingsIfNeeded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void MA::Flora::FloraSceneSettings::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSceneSettings::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MA::Flora::FloraSceneSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraSceneSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraSceneSettings* MA::Flora::FloraSceneSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraSceneSettings*>());
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraSceneSettings::FloraSceneSettings()   {
}
