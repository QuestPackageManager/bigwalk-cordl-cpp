#pragma once
// IWYU pragma private; include "UnityEngine/Graphics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Graphics_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsTier_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__OpenGLESVersion_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Internal_DrawTextureArguments_def.hpp"
#include "UnityEngine/zzzz__LightProbeProxyVolume_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderInstancedDataLayout_def.hpp"
#include "UnityEngine/zzzz__RenderParams_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_GetMaxDrawMeshInstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Graphics::Internal_GetMaxDrawMeshInstanceCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822501c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_GetMaxDrawMeshInstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.get_activeTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GraphicsTier (*)()>(&::UnityEngine::Graphics::get_activeTier)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182250a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_activeTier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.GetPreserveFramebufferAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Graphics::GetPreserveFramebufferAlpha)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetPreserveFramebufferAlpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.get_preserveFramebufferAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Graphics::get_preserveFramebufferAlpha)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_preserveFramebufferAlpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.GetMinOpenGLESVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OpenGLESVersion (*)()>(&::UnityEngine::Graphics::GetMinOpenGLESVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224fe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetMinOpenGLESVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.get_minOpenGLESVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OpenGLESVersion (*)()>(&::UnityEngine::Graphics::get_minOpenGLESVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224fe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_minOpenGLESVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetNullRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Graphics::Internal_SetNullRT)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822503c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetNullRT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetRTSimple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::Internal_SetRTSimple)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822503e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetRTSimple", {}, {::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetMRTSimple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::RenderBuffer>, ::UnityEngine::RenderBuffer, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::Internal_SetMRTSimple)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182250310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetMRTSimple", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.ClearRandomWriteTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Graphics::ClearRandomWriteTargets)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224f020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ClearRandomWriteTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Full
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::Texture*)>(&::UnityEngine::Graphics::CopyTexture_Full)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18224f040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Full", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Slice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, int32_t, ::UnityEngine::Texture*, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Slice)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18224f0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Region)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18224f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Region", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Internal_DrawTextureArguments>)>(&::UnityEngine::Graphics::Internal_DrawTexture)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822501b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::Internal_DrawTextureArguments>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_RenderMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderParams, ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4*)>(&::UnityEngine::Graphics::Internal_RenderMesh)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822501e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMesh", {}, {::i2c::type_of<::UnityEngine::RenderParams>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_RenderPrimitivesIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderParams, ::UnityEngine::MeshTopology, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Graphics::Internal_RenderPrimitivesIndirect)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x182250280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderPrimitivesIndirect", {}, {::i2c::type_of<::UnityEngine::RenderParams>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::Internal_DrawMesh)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1822500d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMeshInstanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::Internal_DrawMeshInstanced)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18224ff20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawProceduralNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MeshTopology, int32_t, int32_t)>(&::UnityEngine::Graphics::Internal_DrawProceduralNow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224f890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawProceduralNow", {}, {::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_BlitMaterial5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, int32_t, bool)>(&::UnityEngine::Graphics::Internal_BlitMaterial5)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18224fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_BlitMaterial5", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*)>(&::UnityEngine::Graphics::Blit2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18224ed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit2", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Graphics::Blit4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18224ed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit4", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.ExecuteCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Graphics::ExecuteCommandBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18224fde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ExecuteCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTargetImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::SetRenderTargetImpl)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182250870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTargetImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::SetRenderTargetImpl)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822507d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTargetImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::RenderBuffer>, ::UnityEngine::RenderBuffer, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::SetRenderTargetImpl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182250720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::SetRenderTarget)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822507d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::RenderBuffer>, ::UnityEngine::RenderBuffer)>(&::UnityEngine::Graphics::SetRenderTarget)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1822508d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::Texture*)>(&::UnityEngine::Graphics::CopyTexture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18224f040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, int32_t, ::UnityEngine::Texture*, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18224f0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18224f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawTextureImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Color, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Graphics::DrawTextureImpl)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18224f8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTextureImpl", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Graphics::DrawTexture)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18224fcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Graphics::DrawTexture)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18224f9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Graphics::DrawTexture)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18224fbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.RenderMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderParams>, ::UnityEngine::Mesh*, int32_t, ::UnityEngine::Matrix4x4, ::System::Nullable_1<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Graphics::RenderMesh)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x182250400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"RenderMesh", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.RenderPrimitivesIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderParams>, ::UnityEngine::MeshTopology, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Graphics::RenderPrimitivesIndirect)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182250600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"RenderPrimitivesIndirect", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::DrawMesh)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18224f720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshInstanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::DrawMeshInstanced)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x18224f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawProceduralNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MeshTopology, int32_t, int32_t)>(&::UnityEngine::Graphics::DrawProceduralNow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224f890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawProceduralNow", {}, {::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*)>(&::UnityEngine::Graphics::Blit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18224ed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Graphics::Blit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18224eef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Graphics::Blit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18224edb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Material*)>(&::UnityEngine::Graphics::Blit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18224ee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Graphics::Blit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18224efa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::Material*)>(&::UnityEngine::Graphics::Blit)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18224ef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*)>(&::UnityEngine::Graphics::DrawMesh)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18224f500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Graphics::DrawMesh)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18224f650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshInstanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::UnityEngine::Camera*)>(&::UnityEngine::Graphics::DrawMeshInstanced)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18224f0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Material*)>(&::UnityEngine::Graphics::DrawTexture)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18224fac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::Graphics::SetRenderTarget)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182250970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, int32_t)>(&::UnityEngine::Graphics::SetRenderTarget)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822509a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, int32_t, ::UnityEngine::CubemapFace)>(&::UnityEngine::Graphics::SetRenderTarget)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1822508b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetRTSimple_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderBuffer>, ::by_ref<::UnityEngine::RenderBuffer>, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::Internal_SetRTSimple_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822503d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetRTSimple_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetMRTSimple_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::RenderBuffer>, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::Internal_SetMRTSimple_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182250300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetMRTSimple_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Full_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Graphics::CopyTexture_Full_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224f030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Full_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Slice_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Slice_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224f0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Region_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Region_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224f070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Region_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_RenderMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderParams>, ::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Matrix4x4>, ::UnityEngine::Matrix4x4*)>(&::UnityEngine::Graphics::Internal_RenderMesh_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822501d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMesh_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Matrix4x4*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_RenderPrimitivesIndirect_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderParams>, ::UnityEngine::MeshTopology, ::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Graphics::Internal_RenderPrimitivesIndirect_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182250270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderPrimitivesIndirect_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Matrix4x4>, ::System::IntPtr, int32_t, ::System::IntPtr, ::System::IntPtr, ::UnityEngine::Rendering::ShadowCastingMode, bool, ::System::IntPtr, ::UnityEngine::Rendering::LightProbeUsage, ::System::IntPtr)>(&::UnityEngine::Graphics::Internal_DrawMesh_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1822500c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMeshInstanced_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::System::IntPtr, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::System::IntPtr, ::UnityEngine::Rendering::LightProbeUsage, ::System::IntPtr)>(&::UnityEngine::Graphics::Internal_DrawMeshInstanced_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224ff10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstanced_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_BlitMaterial5_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, int32_t, bool)>(&::UnityEngine::Graphics::Internal_BlitMaterial5_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_BlitMaterial5_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit2_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Graphics::Blit2_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224ed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit2_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit4_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Graphics::Blit4_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit4_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.ExecuteCommandBuffer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Graphics::ExecuteCommandBuffer_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18224fdd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ExecuteCommandBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Graphics::setStaticF_kMaxDrawMeshInstanceCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kMaxDrawMeshInstanceCount", ::UnityEngine::Graphics*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Graphics::getStaticF_kMaxDrawMeshInstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "kMaxDrawMeshInstanceCount", ::UnityEngine::Graphics*>();
}
inline void UnityEngine::Graphics::setStaticF_s_RenderInstancedDataLayouts(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*, "s_RenderInstancedDataLayouts", ::UnityEngine::Graphics*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>* UnityEngine::Graphics::getStaticF_s_RenderInstancedDataLayouts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*, "s_RenderInstancedDataLayouts", ::UnityEngine::Graphics*>();
}
inline int32_t UnityEngine::Graphics::Internal_GetMaxDrawMeshInstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_GetMaxDrawMeshInstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::GraphicsTier UnityEngine::Graphics::get_activeTier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_activeTier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GraphicsTier>(nullptr, ___internal_method);
}
inline bool UnityEngine::Graphics::GetPreserveFramebufferAlpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetPreserveFramebufferAlpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Graphics::get_preserveFramebufferAlpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_preserveFramebufferAlpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Graphics::GetMinOpenGLESVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetMinOpenGLESVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OpenGLESVersion>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Graphics::get_minOpenGLESVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_minOpenGLESVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OpenGLESVersion>(nullptr, ___internal_method);
}
inline void UnityEngine::Graphics::Internal_SetNullRT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetNullRT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Graphics::Internal_SetRTSimple(::UnityEngine::RenderBuffer  color, ::UnityEngine::RenderBuffer  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetRTSimple", {}, {::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color, depth, mip, face, depthSlice);
}
inline void UnityEngine::Graphics::Internal_SetMRTSimple(::ArrayW<::UnityEngine::RenderBuffer>  color, ::UnityEngine::RenderBuffer  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetMRTSimple", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color, depth, mip, face, depthSlice);
}
inline void UnityEngine::Graphics::ClearRandomWriteTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ClearRandomWriteTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Graphics::CopyTexture_Full(::UnityEngine::Texture*  src, ::UnityEngine::Texture*  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Full", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst);
}
inline void UnityEngine::Graphics::CopyTexture_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, dst, dstElement, dstMip);
}
inline void UnityEngine::Graphics::CopyTexture_Region(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Region", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
}
inline void UnityEngine::Graphics::Internal_DrawTexture(::by_ref<::UnityEngine::Internal_DrawTextureArguments>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::Internal_DrawTextureArguments>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args);
}
inline void UnityEngine::Graphics::Internal_RenderMesh(::UnityEngine::RenderParams  rparams, ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Matrix4x4  objectToWorld, ::UnityEngine::Matrix4x4*  prevObjectToWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMesh", {}, {::i2c::type_of<::UnityEngine::RenderParams>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Matrix4x4*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, mesh, submeshIndex, objectToWorld, prevObjectToWorld);
}
inline void UnityEngine::Graphics::Internal_RenderPrimitivesIndirect(::UnityEngine::RenderParams  rparams, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  argsBuffer, int32_t  commandCount, int32_t  startCommand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderPrimitivesIndirect", {}, {::i2c::type_of<::UnityEngine::RenderParams>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, topology, argsBuffer, commandCount, startCommand);
}
inline void UnityEngine::Graphics::Internal_DrawMesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, matrix, material, layer, camera, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Internal_DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Internal_DrawProceduralNow(::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawProceduralNow", {}, {::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, topology, vertexCount, instanceCount);
}
inline void UnityEngine::Graphics::Internal_BlitMaterial5(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Material*  mat, int32_t  pass, bool  setRT)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_BlitMaterial5", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, mat, pass, setRT);
}
inline void UnityEngine::Graphics::Blit2(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit2", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest);
}
inline void UnityEngine::Graphics::Blit4(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit4", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, scale, offset);
}
inline void UnityEngine::Graphics::ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ExecuteCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void UnityEngine::Graphics::SetRenderTargetImpl(::UnityEngine::RenderBuffer  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorBuffer, depthBuffer, mipLevel, face, depthSlice);
}
inline void UnityEngine::Graphics::SetRenderTargetImpl(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt, mipLevel, face, depthSlice);
}
inline void UnityEngine::Graphics::SetRenderTargetImpl(::ArrayW<::UnityEngine::RenderBuffer>  colorBuffers, ::UnityEngine::RenderBuffer  depthBuffer, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorBuffers, depthBuffer, mipLevel, face, depthSlice);
}
inline void UnityEngine::Graphics::SetRenderTarget(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt, mipLevel, face, depthSlice);
}
inline void UnityEngine::Graphics::SetRenderTarget(::ArrayW<::UnityEngine::RenderBuffer>  colorBuffers, ::UnityEngine::RenderBuffer  depthBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorBuffers, depthBuffer);
}
inline void UnityEngine::Graphics::CopyTexture(::UnityEngine::Texture*  src, ::UnityEngine::Texture*  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst);
}
inline void UnityEngine::Graphics::CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, dst, dstElement, dstMip);
}
inline void UnityEngine::Graphics::CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
}
inline void UnityEngine::Graphics::DrawTextureImpl(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Color  color, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTextureImpl", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, color, mat, pass);
}
inline void UnityEngine::Graphics::DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, mat, pass);
}
inline void UnityEngine::Graphics::DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, texture, leftBorder, rightBorder, topBorder, bottomBorder, mat, pass);
}
inline void UnityEngine::Graphics::DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, texture, mat, pass);
}
inline void UnityEngine::Graphics::RenderMesh(::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Matrix4x4  objectToWorld, ::System::Nullable_1<::UnityEngine::Matrix4x4>  prevObjectToWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"RenderMesh", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, mesh, submeshIndex, objectToWorld, prevObjectToWorld);
}
inline void UnityEngine::Graphics::RenderPrimitivesIndirect(::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  argsBuffer, int32_t  commandCount, int32_t  startCommand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"RenderPrimitivesIndirect", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, topology, argsBuffer, commandCount, startCommand);
}
inline void UnityEngine::Graphics::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, matrix, material, layer, camera, submeshIndex, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::DrawProceduralNow(::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawProceduralNow", {}, {::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, topology, vertexCount, instanceCount);
}
inline void UnityEngine::Graphics::Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest);
}
inline void UnityEngine::Graphics::Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, scale, offset);
}
inline void UnityEngine::Graphics::Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, mat, pass);
}
inline void UnityEngine::Graphics::Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, mat);
}
inline void UnityEngine::Graphics::Blit(::UnityEngine::Texture*  source, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, mat, pass);
}
inline void UnityEngine::Graphics::Blit(::UnityEngine::Texture*  source, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, mat);
}
inline void UnityEngine::Graphics::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, position, rotation, material, layer, camera);
}
inline void UnityEngine::Graphics::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, matrix, material, layer, camera, submeshIndex, properties);
}
inline void UnityEngine::Graphics::DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera);
}
inline void UnityEngine::Graphics::DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, texture, mat);
}
inline void UnityEngine::Graphics::SetRenderTarget(::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt);
}
inline void UnityEngine::Graphics::SetRenderTarget(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt, mipLevel);
}
inline void UnityEngine::Graphics::SetRenderTarget(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt, mipLevel, face);
}
inline void UnityEngine::Graphics::Internal_SetRTSimple_Injected(::by_ref<::UnityEngine::RenderBuffer>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetRTSimple_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color, depth, mip, face, depthSlice);
}
inline void UnityEngine::Graphics::Internal_SetMRTSimple_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetMRTSimple_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color, depth, mip, face, depthSlice);
}
inline void UnityEngine::Graphics::CopyTexture_Full_Injected(::System::IntPtr  src, ::System::IntPtr  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Full_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst);
}
inline void UnityEngine::Graphics::CopyTexture_Slice_Injected(::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, ::System::IntPtr  dst, int32_t  dstElement, int32_t  dstMip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, dst, dstElement, dstMip);
}
inline void UnityEngine::Graphics::CopyTexture_Region_Injected(::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::System::IntPtr  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Region_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
}
inline void UnityEngine::Graphics::Internal_RenderMesh_Injected(::by_ref<::UnityEngine::RenderParams>  rparams, ::System::IntPtr  mesh, int32_t  submeshIndex, ::by_ref<::UnityEngine::Matrix4x4>  objectToWorld, ::UnityEngine::Matrix4x4*  prevObjectToWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMesh_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::UnityEngine::Matrix4x4*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, mesh, submeshIndex, objectToWorld, prevObjectToWorld);
}
inline void UnityEngine::Graphics::Internal_RenderPrimitivesIndirect_Injected(::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  argsBuffer, int32_t  commandCount, int32_t  startCommand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderPrimitivesIndirect_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, topology, argsBuffer, commandCount, startCommand);
}
inline void UnityEngine::Graphics::Internal_DrawMesh_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  layer, ::System::IntPtr  camera, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::System::IntPtr  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, matrix, material, layer, camera, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Internal_DrawMeshInstanced_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  matrices, int32_t  count, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::System::IntPtr  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstanced_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Internal_BlitMaterial5_Injected(::System::IntPtr  source, ::System::IntPtr  dest, ::System::IntPtr  mat, int32_t  pass, bool  setRT)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_BlitMaterial5_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, mat, pass, setRT);
}
inline void UnityEngine::Graphics::Blit2_Injected(::System::IntPtr  source, ::System::IntPtr  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit2_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest);
}
inline void UnityEngine::Graphics::Blit4_Injected(::System::IntPtr  source, ::System::IntPtr  dest, ::by_ref<::UnityEngine::Vector2>  scale, ::by_ref<::UnityEngine::Vector2>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit4_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, scale, offset);
}
inline void UnityEngine::Graphics::ExecuteCommandBuffer_Injected(::System::IntPtr  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ExecuteCommandBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters []
constexpr ::UnityEngine::Graphics::Graphics()   {
}
