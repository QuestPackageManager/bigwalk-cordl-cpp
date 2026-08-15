#pragma once
// IWYU pragma private; include "Enviro/EnviroFogModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroFogModule_def.hpp"
#include "Enviro/zzzz__EnviroFogModule_def.hpp"
#include "Enviro/zzzz__EnviroFogSettings_def.hpp"
#include "Enviro/zzzz__EnviroURPRenderGraph_def.hpp"
#include "Enviro/zzzz__EnviroURPRenderPass_def.hpp"
#include "Enviro/zzzz__EnviroVolumetricFogLight_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroFogModule_PointLightParams::EnviroFogModule_PointLightParams(::UnityEngine::Vector3  pos, float_t  range, ::UnityEngine::Vector3  color, float_t  padding) noexcept  {
this->pos = pos;
this->range = range;
this->color = color;
this->padding = padding;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFogModule_PointLightParams::EnviroFogModule_PointLightParams()   {
}
// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "lightCosHalfAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "padding", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Enviro::EnviroFogModule_SpotLightParams::EnviroFogModule_SpotLightParams(::UnityEngine::Vector3  pos, float_t  range, ::UnityEngine::Vector3  color, ::UnityEngine::Vector3  lightDirection, float_t  lightCosHalfAngle, float_t  padding) noexcept  {
this->pos = pos;
this->range = range;
this->color = color;
this->lightDirection = lightDirection;
this->lightCosHalfAngle = lightCosHalfAngle;
this->padding = padding;
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFogModule_SpotLightParams::EnviroFogModule_SpotLightParams()   {
}
//  Writing Method size for method: ::Enviro::EnviroFogModule.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::Enable)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x18060f3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                    {::i2c::class_of<::Enviro::EnviroFogModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::Disable)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x18060f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                    {::i2c::class_of<::Enviro::EnviroFogModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::UpdateModule)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x180613340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                    {::i2c::class_of<::Enviro::EnviroFogModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.AddLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Enviro::EnviroFogModule::*)(::Enviro::EnviroVolumetricFogLight*)>(&::Enviro::EnviroFogModule::AddLight)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18060ebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"AddLight", {}, {::i2c::type_of<::Enviro::EnviroVolumetricFogLight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.RemoveLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::Enviro::EnviroVolumetricFogLight*)>(&::Enviro::EnviroFogModule::RemoveLight)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18060f660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RemoveLight", {}, {::i2c::type_of<::Enviro::EnviroVolumetricFogLight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.UpdateUnityFog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::UpdateUnityFog)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1806135a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"UpdateUnityFog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.UpdateFogShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::UnityEngine::Camera*)>(&::Enviro::EnviroFogModule::UpdateFogShader)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x180612ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"UpdateFogShader", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.RenderHeightFog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::UnityEngine::Camera*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&::Enviro::EnviroFogModule::RenderHeightFog)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18060fab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderHeightFog", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.RenderHeightFogURP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::Enviro::EnviroURPRenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::Enviro::EnviroFogModule::RenderHeightFogURP)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18060f6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderHeightFogURP", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.RenderHeightFogURP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::UnityEngine::Camera*, ::Enviro::EnviroURPRenderPass*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::Enviro::EnviroFogModule::RenderHeightFogURP)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18060f8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderHeightFogURP", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroURPRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.CleanupHeightFog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::CleanupHeightFog)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18060ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"CleanupHeightFog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.RenderVolumetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::UnityEngine::Camera*, ::UnityEngine::RenderTexture*)>(&::Enviro::EnviroFogModule::RenderVolumetrics)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x180611e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderVolumetrics", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.RenderVolumetricsURP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::UnityEngine::Camera*, ::Enviro::EnviroURPRenderPass*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*)>(&::Enviro::EnviroFogModule::RenderVolumetricsURP)> {
  constexpr static std::size_t size = 0x15b0;
  constexpr static std::size_t addrs = 0x18060fb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderVolumetricsURP", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroURPRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.RenderVolumetricsURP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::Enviro::EnviroURPRenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::Enviro::EnviroFogModule::RenderVolumetricsURP)> {
  constexpr static std::size_t size = 0xcd0;
  constexpr static std::size_t addrs = 0x180611130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderVolumetricsURP", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.UpdateVolumetricsShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::UnityEngine::Material*)>(&::Enviro::EnviroFogModule::UpdateVolumetricsShader)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x180613750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"UpdateVolumetricsShader", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.CreateVolumetricsBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::CreateVolumetricsBuffers)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x18060ee40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"CreateVolumetricsBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.CleanupVolumetrics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::CleanupVolumetrics)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18060ed80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"CleanupVolumetrics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.SetUpPointLightBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::SetUpPointLightBuffers)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x180612780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"SetUpPointLightBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.SetUpSpotLightBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::SetUpSpotLightBuffers)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x180612ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"SetUpSpotLightBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18060f5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)(::Enviro::EnviroFogModule*)>(&::Enviro::EnviroFogModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x180612730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroFogModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroFogModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroFogModule::*)()>(&::Enviro::EnviroFogModule::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180613bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroFogSettings*& Enviro::EnviroFogModule::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::Enviro::EnviroFogSettings* const& Enviro::EnviroFogModule::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_Settings(::Enviro::EnviroFogSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::UnityW<::Enviro::EnviroFogModule>& Enviro::EnviroFogModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroFogModule> const& Enviro::EnviroFogModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroFogModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr bool& Enviro::EnviroFogModule::__cordl_internal_get_showFogControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFogControls;
}
constexpr bool const& Enviro::EnviroFogModule::__cordl_internal_get_showFogControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showFogControls;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_showFogControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showFogControls = value;
}
constexpr bool& Enviro::EnviroFogModule::__cordl_internal_get_showVolumetricsControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showVolumetricsControls;
}
constexpr bool const& Enviro::EnviroFogModule::__cordl_internal_get_showVolumetricsControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showVolumetricsControls;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_showVolumetricsControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showVolumetricsControls = value;
}
constexpr bool& Enviro::EnviroFogModule::__cordl_internal_get_showUnityFogControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showUnityFogControls;
}
constexpr bool const& Enviro::EnviroFogModule::__cordl_internal_get_showUnityFogControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showUnityFogControls;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_showUnityFogControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showUnityFogControls = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroVolumetricFogLight>>*& Enviro::EnviroFogModule::__cordl_internal_get_fogLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogLights;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroVolumetricFogLight>>* const& Enviro::EnviroFogModule::__cordl_internal_get_fogLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogLights;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_fogLights(::System::Collections::Generic::List_1<::UnityW<::Enviro::EnviroVolumetricFogLight>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogLights = value;
}
constexpr ::UnityW<::UnityEngine::Light>& Enviro::EnviroFogModule::__cordl_internal_get_myLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& Enviro::EnviroFogModule::__cordl_internal_get_myLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myLight;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_myLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myLight = value;
}
constexpr float_t& Enviro::EnviroFogModule::__cordl_internal_get_customFogDensityModifer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customFogDensityModifer;
}
constexpr float_t const& Enviro::EnviroFogModule::__cordl_internal_get_customFogDensityModifer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customFogDensityModifer;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_customFogDensityModifer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customFogDensityModifer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroFogModule::__cordl_internal_get_fogMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroFogModule::__cordl_internal_get_fogMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fogMat;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_fogMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fogMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroFogModule::__cordl_internal_get_volumetricsMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricsMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroFogModule::__cordl_internal_get_volumetricsMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricsMat;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_volumetricsMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricsMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroFogModule::__cordl_internal_get_blurMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroFogModule::__cordl_internal_get_blurMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurMat;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_blurMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blurMat = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroFogModule::__cordl_internal_get_blurMat2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurMat2;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroFogModule::__cordl_internal_get_blurMat2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blurMat2;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_blurMat2(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blurMat2 = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Enviro::EnviroFogModule::__cordl_internal_get_volumetricsRenderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricsRenderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Enviro::EnviroFogModule::__cordl_internal_get_volumetricsRenderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricsRenderTexture;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_volumetricsRenderTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricsRenderTexture = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& Enviro::EnviroFogModule::__cordl_internal_get_volumetricsRenderTextureHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricsRenderTextureHandle;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& Enviro::EnviroFogModule::__cordl_internal_get_volumetricsRenderTextureHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricsRenderTextureHandle;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_volumetricsRenderTextureHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricsRenderTextureHandle = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& Enviro::EnviroFogModule::__cordl_internal_get_volumetricsRenderTextureRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricsRenderTextureRT;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& Enviro::EnviroFogModule::__cordl_internal_get_volumetricsRenderTextureRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumetricsRenderTextureRT;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_volumetricsRenderTextureRT(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumetricsRenderTextureRT = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroFogModule::__cordl_internal_get_blitThroughMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitThroughMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroFogModule::__cordl_internal_get_blitThroughMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blitThroughMat;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_blitThroughMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blitThroughMat = value;
}
constexpr ::ArrayW<::Enviro::EnviroFogModule_PointLightParams>& Enviro::EnviroFogModule::__cordl_internal_get_m_PointLightParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointLightParams;
}
constexpr ::ArrayW<::Enviro::EnviroFogModule_PointLightParams> const& Enviro::EnviroFogModule::__cordl_internal_get_m_PointLightParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointLightParams;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_m_PointLightParams(::ArrayW<::Enviro::EnviroFogModule_PointLightParams>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PointLightParams = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Enviro::EnviroFogModule::__cordl_internal_get_m_PointLightParamsCB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointLightParamsCB;
}
constexpr ::UnityEngine::ComputeBuffer* const& Enviro::EnviroFogModule::__cordl_internal_get_m_PointLightParamsCB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PointLightParamsCB;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_m_PointLightParamsCB(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PointLightParamsCB = value;
}
constexpr ::ArrayW<::Enviro::EnviroFogModule_SpotLightParams>& Enviro::EnviroFogModule::__cordl_internal_get_m_SpotLightParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SpotLightParams;
}
constexpr ::ArrayW<::Enviro::EnviroFogModule_SpotLightParams> const& Enviro::EnviroFogModule::__cordl_internal_get_m_SpotLightParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SpotLightParams;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_m_SpotLightParams(::ArrayW<::Enviro::EnviroFogModule_SpotLightParams>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SpotLightParams = value;
}
constexpr ::UnityEngine::ComputeBuffer*& Enviro::EnviroFogModule::__cordl_internal_get_m_SpotLightParamsCB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SpotLightParamsCB;
}
constexpr ::UnityEngine::ComputeBuffer* const& Enviro::EnviroFogModule::__cordl_internal_get_m_SpotLightParamsCB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SpotLightParamsCB;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_m_SpotLightParamsCB(::UnityEngine::ComputeBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SpotLightParamsCB = value;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricFogLight>& Enviro::EnviroFogModule::__cordl_internal_get_directionaLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionaLight;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricFogLight> const& Enviro::EnviroFogModule::__cordl_internal_get_directionaLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionaLight;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_directionaLight(::UnityW<::Enviro::EnviroVolumetricFogLight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directionaLight = value;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricFogLight>& Enviro::EnviroFogModule::__cordl_internal_get_additionalLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalLight;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricFogLight> const& Enviro::EnviroFogModule::__cordl_internal_get_additionalLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___additionalLight;
}
constexpr void Enviro::EnviroFogModule::__cordl_internal_set_additionalLight(::UnityW<::Enviro::EnviroVolumetricFogLight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___additionalLight = value;
}
inline void Enviro::EnviroFogModule::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroFogModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroFogModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroFogModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Enviro::EnviroFogModule::AddLight(::Enviro::EnviroVolumetricFogLight*  light)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"AddLight", {}, {::i2c::type_of<::Enviro::EnviroVolumetricFogLight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, light);
}
inline void Enviro::EnviroFogModule::RemoveLight(::Enviro::EnviroVolumetricFogLight*  light)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RemoveLight", {}, {::i2c::type_of<::Enviro::EnviroVolumetricFogLight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, light);
}
inline void Enviro::EnviroFogModule::UpdateUnityFog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"UpdateUnityFog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::UpdateFogShader(::UnityEngine::Camera*  cam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"UpdateFogShader", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam);
}
inline void Enviro::EnviroFogModule::RenderHeightFog(::UnityEngine::Camera*  cam, ::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderHeightFog", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, source, destination);
}
inline void Enviro::EnviroFogModule::RenderHeightFogURP(::Enviro::EnviroURPRenderGraph*  renderer, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderHeightFogURP", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderGraph, resourceData, cameraData, src, target);
}
inline void Enviro::EnviroFogModule::RenderHeightFogURP(::UnityEngine::Camera*  cam, ::Enviro::EnviroURPRenderPass*  pass, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderHeightFogURP", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroURPRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, pass, cmd, source, destination);
}
inline void Enviro::EnviroFogModule::CleanupHeightFog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"CleanupHeightFog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::RenderVolumetrics(::UnityEngine::Camera*  camera, ::UnityEngine::RenderTexture*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderVolumetrics", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, source);
}
inline void Enviro::EnviroFogModule::RenderVolumetricsURP(::UnityEngine::Camera*  camera, ::Enviro::EnviroURPRenderPass*  pass, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderVolumetricsURP", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroURPRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, camera, pass, cmd, source);
}
inline void Enviro::EnviroFogModule::RenderVolumetricsURP(::Enviro::EnviroURPRenderGraph*  renderer, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"RenderVolumetricsURP", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderGraph, resourceData, cameraData, src);
}
inline void Enviro::EnviroFogModule::UpdateVolumetricsShader(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"UpdateVolumetricsShader", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat);
}
inline void Enviro::EnviroFogModule::CreateVolumetricsBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"CreateVolumetricsBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::CleanupVolumetrics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"CleanupVolumetrics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::SetUpPointLightBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"SetUpPointLightBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::SetUpSpotLightBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"SetUpSpotLightBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroFogModule::SaveModuleValues(::Enviro::EnviroFogModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroFogModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroFogModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroFogModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroFogModule* Enviro::EnviroFogModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroFogModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroFogModule::EnviroFogModule()   {
}
