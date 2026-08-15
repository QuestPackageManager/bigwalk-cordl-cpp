#pragma once
// IWYU pragma private; include "Enviro/EnviroVolumetricCloudsModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudsModule_def.hpp"
#include "Enviro/zzzz__EnviroCloudGlobalSettings_def.hpp"
#include "Enviro/zzzz__EnviroCloudLayerSettings_def.hpp"
#include "Enviro/zzzz__EnviroQuality_def.hpp"
#include "Enviro/zzzz__EnviroURPRenderGraph_def.hpp"
#include "Enviro/zzzz__EnviroURPRenderPass_def.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudRenderer_def.hpp"
#include "Enviro/zzzz__EnviroVolumetricCloudsQuality_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalResourceData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::UpdateModule)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1806256f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                    {::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.CreateBlackArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::CreateBlackArray)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18061fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"CreateBlackArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.IsURPCompabilityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::IsURPCompabilityMode)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180620110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"IsURPCompabilityMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::Enable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180620100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                    {::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::Disable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1806200a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                    {::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.RenderCloudsShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::Enviro::EnviroVolumetricCloudRenderer*)>(&::Enviro::EnviroVolumetricCloudsModule::RenderCloudsShadows)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x180620440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderCloudsShadows", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.RenderCloudsShadowsURP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::Enviro::EnviroURPRenderPass*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::Enviro::EnviroVolumetricCloudRenderer*)>(&::Enviro::EnviroVolumetricCloudsModule::RenderCloudsShadowsURP)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1806201e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderCloudsShadowsURP", {}, {::i2c::type_of<::Enviro::EnviroURPRenderPass*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.RenderVolumetricClouds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::UnityEngine::Camera*, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*, ::Enviro::EnviroVolumetricCloudRenderer*, ::Enviro::EnviroQuality*)>(&::Enviro::EnviroVolumetricCloudsModule::RenderVolumetricClouds)> {
  constexpr static std::size_t size = 0xb00;
  constexpr static std::size_t addrs = 0x180622950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderVolumetricClouds", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.RenderVolumetricCloudsURP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::Enviro::EnviroURPRenderGraph*, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::UniversalResourceData*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Enviro::EnviroVolumetricCloudRenderer*, ::Enviro::EnviroQuality*)>(&::Enviro::EnviroVolumetricCloudsModule::RenderVolumetricCloudsURP)> {
  constexpr static std::size_t size = 0x13c0;
  constexpr static std::size_t addrs = 0x180620590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderVolumetricCloudsURP", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.RenderVolumetricCloudsURP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::UnityEngine::Rendering::Universal::RenderingData, ::Enviro::EnviroURPRenderPass*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::Enviro::EnviroVolumetricCloudRenderer*, ::Enviro::EnviroQuality*)>(&::Enviro::EnviroVolumetricCloudsModule::RenderVolumetricCloudsURP)> {
  constexpr static std::size_t size = 0x1000;
  constexpr static std::size_t addrs = 0x180621950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderVolumetricCloudsURP", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingData>(), ::i2c::type_of<::Enviro::EnviroURPRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.SetRaymarchShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::UnityEngine::Camera*, ::Enviro::EnviroVolumetricCloudRenderer*, ::Enviro::EnviroQuality*)>(&::Enviro::EnviroVolumetricCloudsModule::SetRaymarchShader)> {
  constexpr static std::size_t size = 0x1220;
  constexpr static std::size_t addrs = 0x180623eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetRaymarchShader", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.SetReprojectShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::UnityEngine::Camera*, ::Enviro::EnviroVolumetricCloudRenderer*, ::Enviro::EnviroQuality*)>(&::Enviro::EnviroVolumetricCloudsModule::SetReprojectShader)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x1806250d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetReprojectShader", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.SetBlendShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::UnityEngine::Camera*, ::Enviro::EnviroVolumetricCloudRenderer*)>(&::Enviro::EnviroVolumetricCloudsModule::SetBlendShader)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x180623830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetBlendShader", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.SetDepthBlending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::UnityEngine::Material*)>(&::Enviro::EnviroVolumetricCloudsModule::SetDepthBlending)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180623e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetDepthBlending", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.SetToURP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::UnityEngine::Material*)>(&::Enviro::EnviroVolumetricCloudsModule::SetToURP)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1806256c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetToURP", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.CreateRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Enviro::EnviroVolumetricCloudsModule::*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::FilterMode, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc)>(&::Enviro::EnviroVolumetricCloudsModule::CreateRenderTexture)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18061ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"CreateRenderTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.CreateRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Enviro::EnviroVolumetricCloudsModule::*)(::by_ref<::UnityEngine::RenderTexture*>, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::UnityEngine::FilterMode, ::UnityEngine::RenderTextureDescriptor)>(&::Enviro::EnviroVolumetricCloudsModule::CreateRenderTexture)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18061fce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"CreateRenderTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.RenderWeatherMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::RenderWeatherMap)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x180623450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderWeatherMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.UpdateWind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::UpdateWind)> {
  constexpr static std::size_t size = 0x6a0;
  constexpr static std::size_t addrs = 0x180625770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"UpdateWind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180620140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)(::Enviro::EnviroVolumetricCloudsModule*)>(&::Enviro::EnviroVolumetricCloudsModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1806237b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroVolumetricCloudsModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroVolumetricCloudsModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroVolumetricCloudsModule::*)()>(&::Enviro::EnviroVolumetricCloudsModule::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180625e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroCloudLayerSettings*& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_settingsVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsVolume;
}
constexpr ::Enviro::EnviroCloudLayerSettings* const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_settingsVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsVolume;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_settingsVolume(::Enviro::EnviroCloudLayerSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsVolume = value;
}
constexpr ::Enviro::EnviroCloudGlobalSettings*& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_settingsGlobal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsGlobal;
}
constexpr ::Enviro::EnviroCloudGlobalSettings* const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_settingsGlobal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsGlobal;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_settingsGlobal(::Enviro::EnviroCloudGlobalSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsGlobal = value;
}
constexpr ::Enviro::EnviroVolumetricCloudsQuality*& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_settingsQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsQuality;
}
constexpr ::Enviro::EnviroVolumetricCloudsQuality* const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_settingsQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settingsQuality;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_settingsQuality(::Enviro::EnviroVolumetricCloudsQuality*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settingsQuality = value;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule>& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroVolumetricCloudsModule> const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroVolumetricCloudsModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showGlobalControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGlobalControls;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showGlobalControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGlobalControls;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_showGlobalControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showGlobalControls = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showVolumeSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showVolumeSettings;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showVolumeSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showVolumeSettings;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_showVolumeSettings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showVolumeSettings = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showCoverageControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showCoverageControls;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showCoverageControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showCoverageControls;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_showCoverageControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showCoverageControls = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showLightingControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLightingControls;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showLightingControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLightingControls;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_showLightingControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showLightingControls = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showDensityControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showDensityControls;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showDensityControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showDensityControls;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_showDensityControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showDensityControls = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showTextureControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTextureControls;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showTextureControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTextureControls;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_showTextureControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showTextureControls = value;
}
constexpr bool& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showWindControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWindControls;
}
constexpr bool const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_showWindControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showWindControls;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_showWindControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showWindControls = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudAnimLayer1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAnimLayer1;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudAnimLayer1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAnimLayer1;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_cloudAnimLayer1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudAnimLayer1 = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudAnimLayer2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAnimLayer2;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudAnimLayer2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAnimLayer2;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_cloudAnimLayer2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudAnimLayer2 = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudAnimNonScaledLayer1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAnimNonScaledLayer1;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudAnimNonScaledLayer1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAnimNonScaledLayer1;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_cloudAnimNonScaledLayer1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudAnimNonScaledLayer1 = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudAnimNonScaledLayer2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAnimNonScaledLayer2;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudAnimNonScaledLayer2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudAnimNonScaledLayer2;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_cloudAnimNonScaledLayer2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudAnimNonScaledLayer2 = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_weatherMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherMap;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_weatherMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherMap;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_weatherMap(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherMap = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_weatherMapMat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherMapMat;
}
constexpr ::UnityW<::UnityEngine::Material> const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_weatherMapMat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherMapMat;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_weatherMapMat(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherMapMat = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_weatherMapCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherMapCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_weatherMapCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherMapCS;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_weatherMapCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherMapCS = value;
}
constexpr ::UnityW<::UnityEngine::Light>& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_dirLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_dirLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dirLight;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_dirLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dirLight = value;
}
constexpr ::UnityEngine::Vector3& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_lastOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOffset;
}
constexpr ::UnityEngine::Vector3 const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_lastOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastOffset;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_lastOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastOffset = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_blackArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blackArray;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_blackArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blackArray;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_blackArray(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blackArray = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudsDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsDescriptor;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureDesc const& Enviro::EnviroVolumetricCloudsModule::__cordl_internal_get_cloudsDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsDescriptor;
}
constexpr void Enviro::EnviroVolumetricCloudsModule::__cordl_internal_set_cloudsDescriptor(::UnityEngine::Rendering::RenderGraphModule::TextureDesc  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsDescriptor = value;
}
inline void Enviro::EnviroVolumetricCloudsModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricCloudsModule::CreateBlackArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"CreateBlackArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Enviro::EnviroVolumetricCloudsModule::IsURPCompabilityMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"IsURPCompabilityMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricCloudsModule::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricCloudsModule::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricCloudsModule::RenderCloudsShadows(::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  destination, ::Enviro::EnviroVolumetricCloudRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderCloudsShadows", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, destination, renderer);
}
inline void Enviro::EnviroVolumetricCloudsModule::RenderCloudsShadowsURP(::Enviro::EnviroURPRenderPass*  pass, ::UnityEngine::Camera*  cam, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::Enviro::EnviroVolumetricCloudRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderCloudsShadowsURP", {}, {::i2c::type_of<::Enviro::EnviroURPRenderPass*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pass, cam, cmd, source, destination, renderer);
}
inline void Enviro::EnviroVolumetricCloudsModule::RenderVolumetricClouds(::UnityEngine::Camera*  cam, ::UnityEngine::RenderTexture*  source, ::UnityEngine::RenderTexture*  destination, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderVolumetricClouds", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, source, destination, renderer, quality);
}
inline void Enviro::EnviroVolumetricCloudsModule::RenderVolumetricCloudsURP(::Enviro::EnviroURPRenderGraph*  pass, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData*  resourceData, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  src, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  target, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderVolumetricCloudsURP", {}, {::i2c::type_of<::Enviro::EnviroURPRenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalResourceData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pass, renderGraph, resourceData, cameraData, src, target, renderer, quality);
}
inline void Enviro::EnviroVolumetricCloudsModule::RenderVolumetricCloudsURP(::UnityEngine::Rendering::Universal::RenderingData  renderingData, ::Enviro::EnviroURPRenderPass*  pass, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderVolumetricCloudsURP", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingData>(), ::i2c::type_of<::Enviro::EnviroURPRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderingData, pass, cmd, source, destination, renderer, quality);
}
inline void Enviro::EnviroVolumetricCloudsModule::SetRaymarchShader(::UnityEngine::Camera*  cam, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetRaymarchShader", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, renderer, quality);
}
inline void Enviro::EnviroVolumetricCloudsModule::SetReprojectShader(::UnityEngine::Camera*  cam, ::Enviro::EnviroVolumetricCloudRenderer*  renderer, ::Enviro::EnviroQuality*  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetReprojectShader", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>(), ::i2c::type_of<::Enviro::EnviroQuality*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, renderer, quality);
}
inline void Enviro::EnviroVolumetricCloudsModule::SetBlendShader(::UnityEngine::Camera*  cam, ::Enviro::EnviroVolumetricCloudRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetBlendShader", {}, {::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::Enviro::EnviroVolumetricCloudRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cam, renderer);
}
inline void Enviro::EnviroVolumetricCloudsModule::SetDepthBlending(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetDepthBlending", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat);
}
inline void Enviro::EnviroVolumetricCloudsModule::SetToURP(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SetToURP", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat);
}
inline bool Enviro::EnviroVolumetricCloudsModule::CreateRenderTexture(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>  texture, ::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc  dsc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"CreateRenderTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texture, renderGraph, width, height, format, filterMode, dsc);
}
inline bool Enviro::EnviroVolumetricCloudsModule::CreateRenderTexture(::by_ref<::UnityEngine::RenderTexture*>  texture, int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::FilterMode  filterMode, ::UnityEngine::RenderTextureDescriptor  dsc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"CreateRenderTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderTexture*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::UnityEngine::FilterMode>(), ::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texture, width, height, format, filterMode, dsc);
}
inline ::UnityW<::UnityEngine::RenderTexture> Enviro::EnviroVolumetricCloudsModule::RenderWeatherMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"RenderWeatherMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricCloudsModule::UpdateWind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"UpdateWind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricCloudsModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricCloudsModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroVolumetricCloudsModule::SaveModuleValues(::Enviro::EnviroVolumetricCloudsModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroVolumetricCloudsModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroVolumetricCloudsModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroVolumetricCloudsModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroVolumetricCloudsModule* Enviro::EnviroVolumetricCloudsModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroVolumetricCloudsModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroVolumetricCloudsModule::EnviroVolumetricCloudsModule()   {
}
