#pragma once
// IWYU pragma private; include "HorizonBasedAmbientOcclusion/Universal/HBAORendererFeature.hpp"
#include "HorizonBasedAmbientOcclusion/Universal/zzzz__HBAO_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/XR/zzzz__XRSettings_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "HorizonBasedAmbientOcclusion/Universal/zzzz__HBAORendererFeature_def.hpp"
#include "HorizonBasedAmbientOcclusion/Universal/zzzz__HBAORendererFeature_def.hpp"
#include "HorizonBasedAmbientOcclusion/Universal/zzzz__HBAO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__BufferedRTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandleSystem_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTextureReadWrite_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_Material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_Material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_Material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::Material*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_Material)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_TargetDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_TargetDescriptor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fdae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_TargetDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_TargetDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_TargetDescriptor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_TargetDescriptor", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_AOTextureDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_AOTextureDescriptor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fda70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_AOTextureDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_AOTextureDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_AOTextureDescriptor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_AOTextureDescriptor", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_CameraDepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_CameraDepthTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_CameraDepthTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_CameraDepthTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_CameraDepthTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_CameraDepthTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_SourceTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_SourceTexture)> {
  constexpr static std::size_t size = 0x2d20;
  constexpr static std::size_t addrs = 0x180eb4ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_SourceTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_SourceTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_SourceTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_SourceTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_AOTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_AOTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_AOTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_AOTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_AOTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_AOTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_TempTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_TempTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_TempTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_TempTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_TempTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_TempTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_DestinationTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderGraphModule::TextureHandle (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_DestinationTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803717d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_DestinationTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_DestinationTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_DestinationTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_DestinationTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_HistoryBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_HistoryBuffers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_HistoryBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_HistoryBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_HistoryBuffers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_HistoryBuffers", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_TemporalFilterRenderTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_TemporalFilterRenderTargets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_TemporalFilterRenderTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_TemporalFilterRenderTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_TemporalFilterRenderTargets)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_TemporalFilterRenderTargets", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_FullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_FullscreenTriangle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_FullscreenTriangle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_FullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::Mesh*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_FullscreenTriangle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180352c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_FullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_MaterialProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_MaterialProperties)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_MaterialProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_MaterialProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(::UnityEngine::MaterialPropertyBlock*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_MaterialProperties)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_MaterialProperties", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_UseLitAO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_UseLitAO)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_UseLitAO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_UseLitAO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_UseLitAO)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_UseLitAO", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_UseColorBleeding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_UseColorBleeding)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_UseColorBleeding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_UseColorBleeding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_UseColorBleeding)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_UseColorBleeding", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_UseBlur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_UseBlur)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_UseBlur", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_UseBlur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_UseBlur)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdc50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_UseBlur", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_UseTemporalFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_UseTemporalFilter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_UseTemporalFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_UseTemporalFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_UseTemporalFilter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_UseTemporalFilter", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_DirectLightingStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_DirectLightingStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_DirectLightingStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_DirectLightingStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_DirectLightingStrength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_DirectLightingStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_ShowDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_ShowDebug)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813efe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_ShowDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_ShowDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_ShowDebug)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f0030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_ShowDebug", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_ShowViewNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_ShowViewNormals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_ShowViewNormals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_ShowViewNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_ShowViewNormals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_ShowViewNormals", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.get_RenderingInSceneView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_RenderingInSceneView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_RenderingInSceneView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData.set_RenderingInSceneView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_RenderingInSceneView)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fdbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_RenderingInSceneView", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__Material_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Material> const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__Material_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Material_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__Material_k__BackingField(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Material_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__TargetDescriptor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetDescriptor_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__TargetDescriptor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetDescriptor_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__TargetDescriptor_k__BackingField(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TargetDescriptor_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__AOTextureDescriptor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AOTextureDescriptor_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__AOTextureDescriptor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AOTextureDescriptor_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__AOTextureDescriptor_k__BackingField(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AOTextureDescriptor_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__CameraDepthTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraDepthTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__CameraDepthTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CameraDepthTexture_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__CameraDepthTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CameraDepthTexture_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__SourceTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SourceTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__SourceTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SourceTexture_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__SourceTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SourceTexture_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__AOTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AOTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__AOTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AOTexture_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__AOTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AOTexture_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__TempTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TempTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__TempTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TempTexture_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__TempTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TempTexture_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__DestinationTexture_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DestinationTexture_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__DestinationTexture_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DestinationTexture_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__DestinationTexture_k__BackingField(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DestinationTexture_k__BackingField = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__HistoryBuffers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HistoryBuffers_k__BackingField;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__HistoryBuffers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HistoryBuffers_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__HistoryBuffers_k__BackingField(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HistoryBuffers_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__TemporalFilterRenderTargets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TemporalFilterRenderTargets_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__TemporalFilterRenderTargets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TemporalFilterRenderTargets_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__TemporalFilterRenderTargets_k__BackingField(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TemporalFilterRenderTargets_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__FullscreenTriangle_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FullscreenTriangle_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__FullscreenTriangle_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FullscreenTriangle_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__FullscreenTriangle_k__BackingField(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FullscreenTriangle_k__BackingField = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__MaterialProperties_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaterialProperties_k__BackingField;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__MaterialProperties_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaterialProperties_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__MaterialProperties_k__BackingField(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaterialProperties_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__UseLitAO_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseLitAO_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__UseLitAO_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseLitAO_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__UseLitAO_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseLitAO_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__UseColorBleeding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseColorBleeding_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__UseColorBleeding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseColorBleeding_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__UseColorBleeding_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseColorBleeding_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__UseBlur_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseBlur_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__UseBlur_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseBlur_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__UseBlur_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseBlur_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__UseTemporalFilter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseTemporalFilter_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__UseTemporalFilter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UseTemporalFilter_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__UseTemporalFilter_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UseTemporalFilter_k__BackingField = value;
}
constexpr float_t& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__DirectLightingStrength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectLightingStrength_k__BackingField;
}
constexpr float_t const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__DirectLightingStrength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DirectLightingStrength_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__DirectLightingStrength_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DirectLightingStrength_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__ShowDebug_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowDebug_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__ShowDebug_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowDebug_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__ShowDebug_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowDebug_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__ShowViewNormals_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowViewNormals_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__ShowViewNormals_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowViewNormals_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__ShowViewNormals_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowViewNormals_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__RenderingInSceneView_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderingInSceneView_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_get__RenderingInSceneView_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RenderingInSceneView_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::__cordl_internal_set__RenderingInSceneView_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RenderingInSceneView_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Material> HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_Material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_Material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_Material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_Material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_TargetDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_TargetDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_TargetDescriptor(::UnityEngine::RenderTextureDescriptor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_TargetDescriptor", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_AOTextureDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_AOTextureDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_AOTextureDescriptor(::UnityEngine::RenderTextureDescriptor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_AOTextureDescriptor", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_CameraDepthTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_CameraDepthTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_CameraDepthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_CameraDepthTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_SourceTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_SourceTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_SourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_SourceTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_AOTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_AOTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_AOTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_AOTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_TempTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_TempTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_TempTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_TempTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_DestinationTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_DestinationTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_DestinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_DestinationTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_HistoryBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_HistoryBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_HistoryBuffers(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_HistoryBuffers", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_TemporalFilterRenderTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_TemporalFilterRenderTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_TemporalFilterRenderTargets(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_TemporalFilterRenderTargets", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_FullscreenTriangle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_FullscreenTriangle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_FullscreenTriangle(::UnityEngine::Mesh*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_FullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::MaterialPropertyBlock* HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_MaterialProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_MaterialProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_MaterialProperties(::UnityEngine::MaterialPropertyBlock*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_MaterialProperties", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_UseLitAO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_UseLitAO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_UseLitAO(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_UseLitAO", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_UseColorBleeding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_UseColorBleeding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_UseColorBleeding(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_UseColorBleeding", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_UseBlur()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_UseBlur", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_UseBlur(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_UseBlur", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_UseTemporalFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_UseTemporalFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_UseTemporalFilter(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_UseTemporalFilter", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_DirectLightingStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_DirectLightingStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_DirectLightingStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_DirectLightingStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_ShowDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_ShowDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_ShowDebug(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_ShowDebug", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_ShowViewNormals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_ShowViewNormals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_ShowViewNormals(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_ShowViewNormals", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::get_RenderingInSceneView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"get_RenderingInSceneView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::set_RenderingInSceneView(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {"set_RenderingInSceneView", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData* HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData::HBAORenderPass_HBAORendererFeature_PassData()   {
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_Pass::HBAORenderPass_HBAORendererFeature_Pass()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetOrthographicProjectionKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetOrthographicProjectionKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetOrthographicProjectionKeyword", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetQualityKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetQualityKeyword)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fde10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetQualityKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetNoiseKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetNoiseKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetNoiseKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetDeinterleavingKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetDeinterleavingKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetDeinterleavingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetDebugKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetDebugKeyword)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1813fdcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetDebugKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetMultibounceKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetMultibounceKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetMultibounceKeyword", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetOffscreenSamplesContributionKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetOffscreenSamplesContributionKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetOffscreenSamplesContributionKeyword", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetPerPixelNormalsKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetPerPixelNormalsKeyword)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fdde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetPerPixelNormalsKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetBlurRadiusKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetBlurRadiusKeyword)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813f0130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetBlurRadiusKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetVarianceClippingKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetVarianceClippingKeyword)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fde50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetVarianceClippingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetColorBleedingKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(bool, bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetColorBleedingKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetColorBleedingKeyword", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties.GetModeKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetModeKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetModeKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_mainTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "mainTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_mainTex()  {
return ::cordl_internals::getStaticField<int32_t, "mainTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_inputTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "inputTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_inputTex()  {
return ::cordl_internals::getStaticField<int32_t, "inputTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_hbaoTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "hbaoTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_hbaoTex()  {
return ::cordl_internals::getStaticField<int32_t, "hbaoTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_tempTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "tempTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_tempTex()  {
return ::cordl_internals::getStaticField<int32_t, "tempTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_tempTex2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "tempTex2", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_tempTex2()  {
return ::cordl_internals::getStaticField<int32_t, "tempTex2", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_noiseTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "noiseTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_noiseTex()  {
return ::cordl_internals::getStaticField<int32_t, "noiseTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_depthTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "depthTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_depthTex()  {
return ::cordl_internals::getStaticField<int32_t, "depthTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_normalsTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "normalsTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_normalsTex()  {
return ::cordl_internals::getStaticField<int32_t, "normalsTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_ssaoTex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ssaoTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_ssaoTex()  {
return ::cordl_internals::getStaticField<int32_t, "ssaoTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_depthSliceTex(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "depthSliceTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_depthSliceTex()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "depthSliceTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_normalsSliceTex(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "normalsSliceTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_normalsSliceTex()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "normalsSliceTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_aoSliceTex(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "aoSliceTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_aoSliceTex()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "aoSliceTex", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_deinterleaveOffset(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "deinterleaveOffset", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_deinterleaveOffset()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "deinterleaveOffset", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_atlasOffset(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "atlasOffset", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_atlasOffset()  {
return ::cordl_internals::getStaticField<int32_t, "atlasOffset", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_jitter(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "jitter", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_jitter()  {
return ::cordl_internals::getStaticField<int32_t, "jitter", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_uvTransform(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "uvTransform", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_uvTransform()  {
return ::cordl_internals::getStaticField<int32_t, "uvTransform", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_inputTexelSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "inputTexelSize", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_inputTexelSize()  {
return ::cordl_internals::getStaticField<int32_t, "inputTexelSize", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_aoTexelSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "aoTexelSize", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_aoTexelSize()  {
return ::cordl_internals::getStaticField<int32_t, "aoTexelSize", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_deinterleavedAOTexelSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "deinterleavedAOTexelSize", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_deinterleavedAOTexelSize()  {
return ::cordl_internals::getStaticField<int32_t, "deinterleavedAOTexelSize", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_reinterleavedAOTexelSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "reinterleavedAOTexelSize", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_reinterleavedAOTexelSize()  {
return ::cordl_internals::getStaticField<int32_t, "reinterleavedAOTexelSize", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_uvToView(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "uvToView", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_uvToView()  {
return ::cordl_internals::getStaticField<int32_t, "uvToView", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_targetScale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "targetScale", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_targetScale()  {
return ::cordl_internals::getStaticField<int32_t, "targetScale", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_radius(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "radius", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_radius()  {
return ::cordl_internals::getStaticField<int32_t, "radius", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_maxRadiusPixels(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxRadiusPixels", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_maxRadiusPixels()  {
return ::cordl_internals::getStaticField<int32_t, "maxRadiusPixels", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_negInvRadius2(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "negInvRadius2", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_negInvRadius2()  {
return ::cordl_internals::getStaticField<int32_t, "negInvRadius2", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_angleBias(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "angleBias", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_angleBias()  {
return ::cordl_internals::getStaticField<int32_t, "angleBias", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_aoMultiplier(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "aoMultiplier", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_aoMultiplier()  {
return ::cordl_internals::getStaticField<int32_t, "aoMultiplier", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_intensity(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "intensity", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_intensity()  {
return ::cordl_internals::getStaticField<int32_t, "intensity", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_multiBounceInfluence(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "multiBounceInfluence", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_multiBounceInfluence()  {
return ::cordl_internals::getStaticField<int32_t, "multiBounceInfluence", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_offscreenSamplesContrib(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "offscreenSamplesContrib", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_offscreenSamplesContrib()  {
return ::cordl_internals::getStaticField<int32_t, "offscreenSamplesContrib", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_maxDistance(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxDistance", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_maxDistance()  {
return ::cordl_internals::getStaticField<int32_t, "maxDistance", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_distanceFalloff(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "distanceFalloff", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_distanceFalloff()  {
return ::cordl_internals::getStaticField<int32_t, "distanceFalloff", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_baseColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "baseColor", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_baseColor()  {
return ::cordl_internals::getStaticField<int32_t, "baseColor", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_colorBleedSaturation(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "colorBleedSaturation", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_colorBleedSaturation()  {
return ::cordl_internals::getStaticField<int32_t, "colorBleedSaturation", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_albedoMultiplier(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "albedoMultiplier", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_albedoMultiplier()  {
return ::cordl_internals::getStaticField<int32_t, "albedoMultiplier", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_colorBleedBrightnessMask(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "colorBleedBrightnessMask", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_colorBleedBrightnessMask()  {
return ::cordl_internals::getStaticField<int32_t, "colorBleedBrightnessMask", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_colorBleedBrightnessMaskRange(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "colorBleedBrightnessMaskRange", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_colorBleedBrightnessMaskRange()  {
return ::cordl_internals::getStaticField<int32_t, "colorBleedBrightnessMaskRange", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_blurDeltaUV(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "blurDeltaUV", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_blurDeltaUV()  {
return ::cordl_internals::getStaticField<int32_t, "blurDeltaUV", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_blurSharpness(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "blurSharpness", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_blurSharpness()  {
return ::cordl_internals::getStaticField<int32_t, "blurSharpness", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_temporalParams(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "temporalParams", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_temporalParams()  {
return ::cordl_internals::getStaticField<int32_t, "temporalParams", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_historyBufferRTHandleScale(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "historyBufferRTHandleScale", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_historyBufferRTHandleScale()  {
return ::cordl_internals::getStaticField<int32_t, "historyBufferRTHandleScale", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_cameraDepthTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "cameraDepthTexture", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_cameraDepthTexture()  {
return ::cordl_internals::getStaticField<int32_t, "cameraDepthTexture", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_screenSpaceOcclusionTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "screenSpaceOcclusionTexture", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_screenSpaceOcclusionTexture()  {
return ::cordl_internals::getStaticField<int32_t, "screenSpaceOcclusionTexture", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_screenSpaceOcclusionParam(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "screenSpaceOcclusionParam", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<int32_t>(value));
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_screenSpaceOcclusionParam()  {
return ::cordl_internals::getStaticField<int32_t, "screenSpaceOcclusionParam", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::setStaticF_screenSpaceOcclusionKeyword(::UnityEngine::Rendering::GlobalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::GlobalKeyword, "screenSpaceOcclusionKeyword", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(std::forward<::UnityEngine::Rendering::GlobalKeyword>(value));
}
inline ::UnityEngine::Rendering::GlobalKeyword HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::getStaticF_screenSpaceOcclusionKeyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::GlobalKeyword, "screenSpaceOcclusionKeyword", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>();
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetOrthographicProjectionKeyword(bool  orthographic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetOrthographicProjectionKeyword", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, orthographic);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetQualityKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetQualityKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Quality>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, quality);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetNoiseKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType  noiseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetNoiseKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, noiseType);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetDeinterleavingKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving  deinterleaving)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetDeinterleavingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Deinterleaving>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, deinterleaving);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetDebugKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode  debugMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetDebugKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_DebugMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, debugMode);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetMultibounceKeyword(bool  useMultiBounce, bool  litAoModeEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetMultibounceKeyword", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, useMultiBounce, litAoModeEnabled);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetOffscreenSamplesContributionKeyword(float_t  offscreenSamplesContribution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetOffscreenSamplesContributionKeyword", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, offscreenSamplesContribution);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetPerPixelNormalsKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals  perPixelNormals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetPerPixelNormalsKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_PerPixelNormals>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, perPixelNormals);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetBlurRadiusKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType  blurType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetBlurRadiusKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_BlurType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, blurType);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetVarianceClippingKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping  varianceClipping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetVarianceClippingKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_VarianceClipping>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, varianceClipping);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetColorBleedingKeyword(bool  colorBleedingEnabled, bool  litAoModeEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetColorBleedingKeyword", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, colorBleedingEnabled, litAoModeEnabled);
}
inline ::StringW HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::GetModeKeyword(::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties*>(),
                        {"GetModeKeyword", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAO_Mode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, mode);
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_ShaderProperties::HBAORenderPass_HBAORendererFeature_ShaderProperties()   {
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_MersenneTwister::setStaticF_Numbers(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "Numbers", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_MersenneTwister*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_MersenneTwister::getStaticF_Numbers()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "Numbers", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_MersenneTwister*>();
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_MersenneTwister::HBAORenderPass_HBAORendererFeature_MersenneTwister()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers.get_camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::get_camera)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"get_camera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers.set_camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::*)(::UnityEngine::Camera*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::set_camera)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"set_camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers.get_historyRTSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BufferedRTHandleSystem* (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::get_historyRTSystem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"get_historyRTSystem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers.set_historyRTSystem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::*)(::UnityEngine::Rendering::BufferedRTHandleSystem*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::set_historyRTSystem)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"set_historyRTSystem", {}, {::i2c::type_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers.get_frameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::get_frameCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"get_frameCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers.set_frameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::set_frameCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"set_frameCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers.get_lastRenderedFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::get_lastRenderedFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"get_lastRenderedFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers.set_lastRenderedFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::*)(int32_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::set_lastRenderedFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"set_lastRenderedFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_get__camera_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Camera> const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_get__camera_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_set__camera_k__BackingField(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____camera_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem*& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_get__historyRTSystem_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyRTSystem_k__BackingField;
}
constexpr ::UnityEngine::Rendering::BufferedRTHandleSystem* const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_get__historyRTSystem_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____historyRTSystem_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_set__historyRTSystem_k__BackingField(::UnityEngine::Rendering::BufferedRTHandleSystem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____historyRTSystem_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_get__frameCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameCount_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_get__frameCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameCount_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_set__frameCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameCount_k__BackingField = value;
}
constexpr int32_t& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_get__lastRenderedFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRenderedFrame_k__BackingField;
}
constexpr int32_t const& HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_get__lastRenderedFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRenderedFrame_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::__cordl_internal_set__lastRenderedFrame_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRenderedFrame_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::Camera> HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::get_camera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"get_camera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::set_camera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"set_camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::BufferedRTHandleSystem* HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::get_historyRTSystem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"get_historyRTSystem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BufferedRTHandleSystem*>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::set_historyRTSystem(::UnityEngine::Rendering::BufferedRTHandleSystem*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"set_historyRTSystem", {}, {::i2c::type_of<::UnityEngine::Rendering::BufferedRTHandleSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::get_frameCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"get_frameCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::set_frameCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"set_frameCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::get_lastRenderedFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"get_lastRenderedFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::set_lastRenderedFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {"set_lastRenderedFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType::HBAORenderPass_HBAORendererFeature_HistoryBufferType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType::HBAORenderPass_HBAORendererFeature_HistoryBufferType()   {
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType  HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType::AmbientOcclusion{static_cast<int32_t>(0x0)};
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType  HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_HistoryBufferType::ColorBleeding{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c._RecordRenderGraph_b__113_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::*)(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::_RecordRenderGraph_b__113_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fe620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>(),
                        {"<RecordRenderGraph>b__113_0", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::setStaticF___9(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*  value)  {
::cordl_internals::setStaticField<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*, "<>9", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>(std::forward<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>(value));
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c* HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*, "<>9", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::setStaticF___9__113_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__113_0", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::getStaticF___9__113_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__113_0", ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::_RecordRenderGraph_b__113_0(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>(),
                        {"<RecordRenderGraph>b__113_0", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c* HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature___c::HBAORenderPass_HBAORendererFeature___c()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Material*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_material)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_source)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_source", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_source)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fbfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_source", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_cameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::CameraData (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_cameraData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_cameraData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_cameraData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::Universal::CameraData)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_cameraData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fbe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_cameraData", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::CameraData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_sourceDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_sourceDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_sourceDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_sourceDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_sourceDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_sourceDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_aoDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_aoDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fb8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_aoDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_aoDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_aoDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_aoDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_deinterleavedDepthDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_deinterleavedDepthDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fb930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_deinterleavedDepthDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_deinterleavedDepthDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_deinterleavedDepthDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbe70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_deinterleavedDepthDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_deinterleavedNormalsDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_deinterleavedNormalsDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fb960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_deinterleavedNormalsDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_deinterleavedNormalsDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_deinterleavedNormalsDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_deinterleavedNormalsDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_deinterleavedAoDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_deinterleavedAoDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fb900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_deinterleavedAoDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_deinterleavedAoDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_deinterleavedAoDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_deinterleavedAoDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_reinterleavedAoDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_reinterleavedAoDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_reinterleavedAoDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_reinterleavedAoDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_reinterleavedAoDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_reinterleavedAoDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_ssaoDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_ssaoDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_ssaoDesc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_ssaoDesc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_ssaoDesc)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1813fbfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_ssaoDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_colorFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_colorFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fb8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_colorFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_colorFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureFormat)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_colorFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_colorFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_ssaoFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_ssaoFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_ssaoFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_ssaoFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureFormat)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_ssaoFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fc000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_ssaoFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_graphicsColorFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_graphicsColorFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_graphicsColorFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_graphicsColorFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_graphicsColorFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_graphicsColorFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_graphicsDepthFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_graphicsDepthFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_graphicsDepthFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_graphicsDepthFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_graphicsDepthFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_graphicsDepthFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_graphicsNormalsFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_graphicsNormalsFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_graphicsNormalsFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_graphicsNormalsFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_graphicsNormalsFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_graphicsNormalsFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_depthFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_depthFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fb990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_depthFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_depthFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureFormat)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_depthFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_depthFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_normalsFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_normalsFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_normalsFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_normalsFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureFormat)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_normalsFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_normalsFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_motionVectorsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_motionVectorsSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_motionVectorsSupported", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_motionVectorsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_motionVectorsSupported)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbf10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_motionVectorsSupported", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_noiseTex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_noiseTex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813fbcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_noiseTex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.set_noiseTex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Texture2D*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_noiseTex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fbf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_noiseTex", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_isLinearColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_isLinearColorSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813efe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_isLinearColorSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_renderingInSceneView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_renderingInSceneView)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fbd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_renderingInSceneView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_fullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_fullscreenTriangle)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x1813fb9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_fullscreenTriangle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.get_materialPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_materialPropertyBlock)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1813fbc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_materialPropertyBlock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.FillSupportedRenderTextureFormats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::FillSupportedRenderTextureFormats)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1813f6190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"FillSupportedRenderTextureFormats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Shader*, ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::Rendering::Universal::RenderingData)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Setup)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x1813f7db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.OnCameraSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::OnCameraSetup)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1813f6b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                    {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Configure)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1813f2f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                    {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Execute)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x1813f5490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                    {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x11a0;
  constexpr static std::size_t addrs = 0x1813f6b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                    {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.ExecutePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::ExecutePass)> {
  constexpr static std::size_t size = 0x1040;
  constexpr static std::size_t addrs = 0x1813f4450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"ExecutePass", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.FrameCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::FrameCleanup)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1813f62a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                    {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Cleanup)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1813f2a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.FetchVolumeComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::FetchVolumeComponent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1813f6130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"FetchVolumeComponent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.FetchRenderParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::RenderTextureDescriptor)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::FetchRenderParameters)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x1813f5ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"FetchRenderParameters", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.HistoryBufferAllocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::RTHandleSystem*, int32_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::HistoryBufferAllocator)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1813f69c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"HistoryBufferAllocator", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandleSystem*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.AllocCameraHistoryBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::AllocCameraHistoryBuffers)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1813f1030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"AllocCameraHistoryBuffers", {}, {::i2c::type_of<::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.AllocCameraHistoryBuffersRG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::AllocCameraHistoryBuffersRG)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1813f0e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"AllocCameraHistoryBuffersRG", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.ReleaseCameraHistoryBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::ReleaseCameraHistoryBuffers)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1813f7d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"ReleaseCameraHistoryBuffers", {}, {::i2c::type_of<::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.GetCurrentCameraHistoryBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::GetCurrentCameraHistoryBuffers)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1813f6650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"GetCurrentCameraHistoryBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.GetCurrentCameraHistoryBuffersRG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::GetCurrentCameraHistoryBuffersRG)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1813f63e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"GetCurrentCameraHistoryBuffersRG", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.CopySource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::CopySource)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1813f3070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"CopySource", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.AO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::AO)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1813f0af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"AO", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.DeinterleavedAO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::DeinterleavedAO)> {
  constexpr static std::size_t size = 0xea0;
  constexpr static std::size_t addrs = 0x1813f35b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"DeinterleavedAO", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.Blur
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Blur)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x1813f2220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"Blur", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.TemporalFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::CommandBuffer*, ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::TemporalFilter)> {
  constexpr static std::size_t size = 0x900;
  constexpr static std::size_t addrs = 0x1813f7f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"TemporalFilter", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.Composite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Composite)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1813f2bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"Composite", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.UpdateMaterialProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::UpdateMaterialProperties)> {
  constexpr static std::size_t size = 0x10f0;
  constexpr static std::size_t addrs = 0x1813f9920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"UpdateMaterialProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.UpdateMaterialPropertiesRG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::UpdateMaterialPropertiesRG)> {
  constexpr static std::size_t size = 0x1030;
  constexpr static std::size_t addrs = 0x1813f88f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"UpdateMaterialPropertiesRG", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.UpdateShaderKeywords
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::UpdateShaderKeywords)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x1813fb040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"UpdateShaderKeywords", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.UpdateShaderKeywordsRG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::UpdateShaderKeywordsRG)> {
  constexpr static std::size_t size = 0x630;
  constexpr static std::size_t addrs = 0x1813faa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"UpdateShaderKeywordsRG", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.CheckParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::CheckParameters)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x1813f27c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"CheckParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.GetStereoCompatibleDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureDescriptor (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(int32_t, int32_t, ::UnityEngine::RenderTextureFormat, int32_t, ::UnityEngine::RenderTextureReadWrite)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::GetStereoCompatibleDescriptor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1813f6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"GetStereoCompatibleDescriptor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::UnityEngine::Mesh*, int32_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1813f1bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::UnityEngine::Mesh*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x1813f1750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rect, ::UnityEngine::Material*, ::UnityEngine::Mesh*, int32_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1813f20a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rect, ::UnityEngine::Material*, ::UnityEngine::Mesh*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1813f1590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Material*, ::UnityEngine::Mesh*, int32_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1813f18f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Material*, ::UnityEngine::Mesh*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1813f1d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rect, ::UnityEngine::Material*, ::UnityEngine::Mesh*, int32_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1813f1a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rect, ::UnityEngine::Material*, ::UnityEngine::Mesh*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1813f1ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangleWithClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::UnityEngine::Color, ::UnityEngine::Mesh*, int32_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangleWithClear)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1813f1240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangleWithClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.BlitFullscreenTriangleWithClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::UnityEngine::Color, ::UnityEngine::Mesh*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangleWithClear)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1813f13c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangleWithClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.AdjustBrightnessMaskToGammaSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Vector2)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::AdjustBrightnessMaskToGammaSpace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1813f0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"AdjustBrightnessMaskToGammaSpace", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.ToGammaSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(float_t)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::ToGammaSpace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813f88e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"ToGammaSpace", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.ToGammaSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)(::UnityEngine::Vector2)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::ToGammaSpace)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1813f8890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"ToGammaSpace", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass.CreateNoiseTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::CreateNoiseTexture)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1813f3270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"CreateNoiseTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1813fb770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HorizonBasedAmbientOcclusion::Universal::HBAO>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_hbao()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hbao;
}
constexpr ::UnityW<::HorizonBasedAmbientOcclusion::Universal::HBAO> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_hbao() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hbao;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_hbao(::UnityW<::HorizonBasedAmbientOcclusion::Universal::HBAO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hbao = value;
}
constexpr ::UnityW<::UnityEngine::Material>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__material_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Material> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__material_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__material_k__BackingField(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__source_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source_k__BackingField;
}
constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__source_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::CameraData& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__cameraData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraData_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::CameraData const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__cameraData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraData_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__cameraData_k__BackingField(::UnityEngine::Rendering::Universal::CameraData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraData_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__sourceDesc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceDesc_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__sourceDesc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceDesc_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__sourceDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceDesc_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__aoDesc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoDesc_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__aoDesc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____aoDesc_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__aoDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____aoDesc_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__deinterleavedDepthDesc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedDepthDesc_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__deinterleavedDepthDesc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedDepthDesc_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__deinterleavedDepthDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deinterleavedDepthDesc_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__deinterleavedNormalsDesc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedNormalsDesc_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__deinterleavedNormalsDesc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedNormalsDesc_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__deinterleavedNormalsDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deinterleavedNormalsDesc_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__deinterleavedAoDesc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedAoDesc_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__deinterleavedAoDesc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deinterleavedAoDesc_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__deinterleavedAoDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deinterleavedAoDesc_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__reinterleavedAoDesc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reinterleavedAoDesc_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__reinterleavedAoDesc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reinterleavedAoDesc_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__reinterleavedAoDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reinterleavedAoDesc_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureDescriptor& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__ssaoDesc_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ssaoDesc_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureDescriptor const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__ssaoDesc_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ssaoDesc_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__ssaoDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ssaoDesc_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureFormat& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__colorFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorFormat_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureFormat const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__colorFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colorFormat_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__colorFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colorFormat_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureFormat& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__ssaoFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ssaoFormat_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureFormat const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__ssaoFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ssaoFormat_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__ssaoFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ssaoFormat_k__BackingField = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__graphicsColorFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphicsColorFormat_k__BackingField;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__graphicsColorFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphicsColorFormat_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__graphicsColorFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____graphicsColorFormat_k__BackingField = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__graphicsDepthFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphicsDepthFormat_k__BackingField;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__graphicsDepthFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphicsDepthFormat_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__graphicsDepthFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____graphicsDepthFormat_k__BackingField = value;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__graphicsNormalsFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphicsNormalsFormat_k__BackingField;
}
constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__graphicsNormalsFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____graphicsNormalsFormat_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__graphicsNormalsFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____graphicsNormalsFormat_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureFormat& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__depthFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthFormat_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureFormat const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__depthFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____depthFormat_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__depthFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____depthFormat_k__BackingField = value;
}
constexpr ::UnityEngine::RenderTextureFormat& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__normalsFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalsFormat_k__BackingField;
}
constexpr ::UnityEngine::RenderTextureFormat const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__normalsFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalsFormat_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__normalsFormat_k__BackingField(::UnityEngine::RenderTextureFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalsFormat_k__BackingField = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__motionVectorsSupported_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motionVectorsSupported_k__BackingField;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__motionVectorsSupported_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motionVectorsSupported_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__motionVectorsSupported_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____motionVectorsSupported_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__noiseTex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noiseTex_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get__noiseTex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____noiseTex_k__BackingField;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set__noiseTex_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____noiseTex_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_FullscreenTriangle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FullscreenTriangle;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_FullscreenTriangle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FullscreenTriangle;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_FullscreenTriangle(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FullscreenTriangle = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_MaterialPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaterialPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_MaterialPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaterialPropertyBlock;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_MaterialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaterialPropertyBlock = value;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_PreviousResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousResolution;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_PreviousResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousResolution;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_PreviousResolution(::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_Resolution>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousResolution = value;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_PreviousNoiseType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousNoiseType;
}
constexpr ::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_PreviousNoiseType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousNoiseType;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_PreviousNoiseType(::System::Nullable_1<::HorizonBasedAmbientOcclusion::Universal::HBAO_NoiseType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousNoiseType = value;
}
constexpr bool& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_PreviousColorBleedingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousColorBleedingEnabled;
}
constexpr bool const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_PreviousColorBleedingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousColorBleedingEnabled;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_PreviousColorBleedingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousColorBleedingEnabled = value;
}
constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_PrevStereoRenderingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevStereoRenderingMode;
}
constexpr ::UnityEngine::XR::XRSettings_StereoRenderingMode const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_PrevStereoRenderingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevStereoRenderingMode;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_PrevStereoRenderingMode(::UnityEngine::XR::XRSettings_StereoRenderingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevStereoRenderingMode = value;
}
constexpr ::ArrayW<::StringW>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_ShaderKeywords()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShaderKeywords;
}
constexpr ::ArrayW<::StringW> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_ShaderKeywords() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShaderKeywords;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_ShaderKeywords(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShaderKeywords = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_RtsDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RtsDepth;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_RtsDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RtsDepth;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_RtsDepth(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RtsDepth = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_RtsNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RtsNormals;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_RtsNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RtsNormals;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_RtsNormals(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RtsNormals = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_RtsTemporalFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RtsTemporalFilter;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_RtsTemporalFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RtsTemporalFilter;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_RtsTemporalFilter(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RtsTemporalFilter = value;
}
constexpr ::System::Collections::Generic::List_1<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>*& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_CameraHistoryBuffers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraHistoryBuffers;
}
constexpr ::System::Collections::Generic::List_1<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>* const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_CameraHistoryBuffers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraHistoryBuffers;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_CameraHistoryBuffers(::System::Collections::Generic::List_1<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraHistoryBuffers = value;
}
constexpr ::ArrayW<::UnityEngine::Vector4>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_UVToViewPerEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UVToViewPerEye;
}
constexpr ::ArrayW<::UnityEngine::Vector4> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_UVToViewPerEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UVToViewPerEye;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_UVToViewPerEye(::ArrayW<::UnityEngine::Vector4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UVToViewPerEye = value;
}
constexpr ::ArrayW<float_t>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_RadiusPerEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RadiusPerEye;
}
constexpr ::ArrayW<float_t> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_RadiusPerEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RadiusPerEye;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_RadiusPerEye(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RadiusPerEye = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_ProfilingSampler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProfilingSampler;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_get_m_ProfilingSampler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ProfilingSampler;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::__cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ProfilingSampler = value;
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::setStaticF_s_jitter(::ArrayW<::UnityEngine::Vector2>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "s_jitter", ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::getStaticF_s_jitter()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "s_jitter", ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::setStaticF_s_temporalRotations(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "s_temporalRotations", ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::getStaticF_s_temporalRotations()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_temporalRotations", ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>();
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::setStaticF_s_temporalOffsets(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "s_temporalOffsets", ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::getStaticF_s_temporalOffsets()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_temporalOffsets", ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>();
}
inline ::UnityW<::UnityEngine::Material> HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_source()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_source", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_source(::UnityEngine::Rendering::RenderTargetIdentifier  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_source", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::CameraData HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_cameraData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_cameraData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::CameraData>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_cameraData(::UnityEngine::Rendering::Universal::CameraData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_cameraData", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::CameraData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_sourceDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_sourceDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_sourceDesc(::UnityEngine::RenderTextureDescriptor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_sourceDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_aoDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_aoDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_aoDesc(::UnityEngine::RenderTextureDescriptor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_aoDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_deinterleavedDepthDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_deinterleavedDepthDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_deinterleavedDepthDesc(::UnityEngine::RenderTextureDescriptor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_deinterleavedDepthDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_deinterleavedNormalsDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_deinterleavedNormalsDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_deinterleavedNormalsDesc(::UnityEngine::RenderTextureDescriptor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_deinterleavedNormalsDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_deinterleavedAoDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_deinterleavedAoDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_deinterleavedAoDesc(::UnityEngine::RenderTextureDescriptor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_deinterleavedAoDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_reinterleavedAoDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_reinterleavedAoDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_reinterleavedAoDesc(::UnityEngine::RenderTextureDescriptor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_reinterleavedAoDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_ssaoDesc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_ssaoDesc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_ssaoDesc(::UnityEngine::RenderTextureDescriptor  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_ssaoDesc", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureFormat HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_colorFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_colorFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_colorFormat(::UnityEngine::RenderTextureFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_colorFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureFormat HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_ssaoFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_ssaoFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_ssaoFormat(::UnityEngine::RenderTextureFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_ssaoFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_graphicsColorFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_graphicsColorFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_graphicsColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_graphicsColorFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_graphicsDepthFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_graphicsDepthFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_graphicsDepthFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_graphicsDepthFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_graphicsNormalsFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_graphicsNormalsFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_graphicsNormalsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_graphicsNormalsFormat", {}, {::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureFormat HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_depthFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_depthFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_depthFormat(::UnityEngine::RenderTextureFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_depthFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureFormat HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_normalsFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_normalsFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_normalsFormat(::UnityEngine::RenderTextureFormat  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_normalsFormat", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_motionVectorsSupported()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_motionVectorsSupported", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_motionVectorsSupported(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_motionVectorsSupported", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_noiseTex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_noiseTex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::set_noiseTex(::UnityEngine::Texture2D*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"set_noiseTex", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_isLinearColorSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_isLinearColorSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_renderingInSceneView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_renderingInSceneView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_fullscreenTriangle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_fullscreenTriangle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline ::UnityEngine::MaterialPropertyBlock* HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::get_materialPropertyBlock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"get_materialPropertyBlock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::FillSupportedRenderTextureFormats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"FillSupportedRenderTextureFormats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Setup(::UnityEngine::Shader*  shader, ::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::UnityEngine::Rendering::Universal::RenderingData  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderingData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shader, renderer, renderingData);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::OnCameraSetup(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderingData);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Configure(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTextureDescriptor  cameraTextureDescriptor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::ExecutePass(::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  rgContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"ExecutePass", {}, {::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, rgContext);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::FrameCleanup(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::FetchVolumeComponent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"FetchVolumeComponent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::FetchRenderParameters(::UnityEngine::RenderTextureDescriptor  cameraTextureDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"FetchRenderParameters", {}, {::i2c::type_of<::UnityEngine::RenderTextureDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraTextureDesc);
}
inline ::UnityEngine::Rendering::RTHandle* HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::HistoryBufferAllocator(::UnityEngine::Rendering::RTHandleSystem*  rtHandleSystem, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"HistoryBufferAllocator", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandleSystem*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, rtHandleSystem, frameIndex);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::AllocCameraHistoryBuffers(::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>  buffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"AllocCameraHistoryBuffers", {}, {::i2c::type_of<::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffers);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::AllocCameraHistoryBuffersRG(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>  buffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"AllocCameraHistoryBuffersRG", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, buffers);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::ReleaseCameraHistoryBuffers(::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>  buffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"ReleaseCameraHistoryBuffers", {}, {::i2c::type_of<::by_ref<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffers);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::GetCurrentCameraHistoryBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"GetCurrentCameraHistoryBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers* HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::GetCurrentCameraHistoryBuffersRG(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"GetCurrentCameraHistoryBuffersRG", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>(this, ___internal_method, cameraData);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::CopySource(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"CopySource", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::AO(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"AO", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::DeinterleavedAO(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"DeinterleavedAO", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Blur(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"Blur", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::TemporalFilter(::UnityEngine::Rendering::CommandBuffer*  cmd, ::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*  buffers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"TemporalFilter", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::HorizonBasedAmbientOcclusion::Universal::HBAORenderPass_HBAORendererFeature_CameraHistoryBuffers*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, buffers);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::Composite(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"Composite", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::UpdateMaterialProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"UpdateMaterialProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::UpdateMaterialPropertiesRG(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"UpdateMaterialPropertiesRG", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::UpdateShaderKeywords()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"UpdateShaderKeywords", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::UpdateShaderKeywordsRG(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"UpdateShaderKeywordsRG", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::CheckParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"CheckParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::RenderTextureDescriptor HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::GetStereoCompatibleDescriptor(int32_t  width, int32_t  height, ::UnityEngine::RenderTextureFormat  format, int32_t  depthBufferBits, ::UnityEngine::RenderTextureReadWrite  readWrite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"GetStereoCompatibleDescriptor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureReadWrite>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureDescriptor>(this, ___internal_method, width, height, format, depthBufferBits, readWrite);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, material, fullscreenTriangle, passIndex);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, material, fullscreenTriangle, passIndex, properties);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rect  viewportRect, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, viewportRect, material, fullscreenTriangle, passIndex);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rect  viewportRect, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, viewportRect, material, fullscreenTriangle, passIndex, properties);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destinations, material, fullscreenTriangle, passIndex);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destinations, material, fullscreenTriangle, passIndex, properties);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Rect  viewportRect, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destinations, viewportRect, material, fullscreenTriangle, passIndex);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  destinations, ::UnityEngine::Rect  viewportRect, ::UnityEngine::Material*  material, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destinations, viewportRect, material, fullscreenTriangle, passIndex, properties);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangleWithClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Color  clearColor, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangleWithClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, material, clearColor, fullscreenTriangle, passIndex);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::BlitFullscreenTriangleWithClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, ::UnityEngine::Color  clearColor, ::UnityEngine::Mesh*  fullscreenTriangle, int32_t  passIndex, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"BlitFullscreenTriangleWithClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, material, clearColor, fullscreenTriangle, passIndex, properties);
}
inline ::UnityEngine::Vector2 HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::AdjustBrightnessMaskToGammaSpace(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"AdjustBrightnessMaskToGammaSpace", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, v);
}
inline float_t HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::ToGammaSpace(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"ToGammaSpace", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, v);
}
inline ::UnityEngine::Vector2 HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::ToGammaSpace(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"ToGammaSpace", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, v);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::CreateNoiseTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {"CreateNoiseTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass* HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass::HBAORendererFeature_HBAORenderPass()   {
}
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fc3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::Create)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1813fc0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(),
                    {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::*)(bool)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1813fc3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(),
                    {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature.AddRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::AddRenderPasses)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1813fc010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(),
                    {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::*)()>(&::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180324470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Shader>& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::__cordl_internal_get_shader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::__cordl_internal_get_shader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shader;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::__cordl_internal_set_shader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shader = value;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::__cordl_internal_get_m_HBAORenderPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HBAORenderPass;
}
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass* const& HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::__cordl_internal_get_m_HBAORenderPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HBAORenderPass;
}
constexpr void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::__cordl_internal_set_m_HBAORenderPass(::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature_HBAORenderPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HBAORenderPass = value;
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::Create()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer*  renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer, renderingData);
}
inline void HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature* HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature*>());
}
// Ctor Parameters []
constexpr ::HorizonBasedAmbientOcclusion::Universal::HBAORendererFeature::HBAORendererFeature()   {
}
