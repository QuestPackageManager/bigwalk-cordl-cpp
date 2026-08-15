#pragma once
// IWYU pragma private; include "UnityEngine/QualitySettings.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__QualitySettings_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__ShadowProjection_def.hpp"
#include "UnityEngine/zzzz__ShadowQuality_def.hpp"
#include "UnityEngine/zzzz__ShadowmaskMode_def.hpp"
#include "UnityEngine/zzzz__TerrainQualityOverrides_def.hpp"
//  Writing Method size for method: ::UnityEngine::QualitySettings.OnActiveQualityLevelChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::UnityEngine::QualitySettings::OnActiveQualityLevelChanged)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18225a8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"OnActiveQualityLevelChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.SetQualityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::QualitySettings::SetQualityLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"SetQualityLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_pixelLightCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_pixelLightCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225aa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_pixelLightCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_pixelLightCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::QualitySettings::set_pixelLightCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_pixelLightCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_shadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ShadowQuality (*)()>(&::UnityEngine::QualitySettings::get_shadows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225aad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadows", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_shadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ShadowQuality)>(&::UnityEngine::QualitySettings::set_shadows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_shadows", {}, {::i2c::type_of<::UnityEngine::ShadowQuality>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_shadowProjection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ShadowProjection (*)()>(&::UnityEngine::QualitySettings::get_shadowProjection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225aab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadowProjection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_shadowCascades
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_shadowCascades)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225aa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadowCascades", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_shadowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::QualitySettings::get_shadowDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225aaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadowDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_shadowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::QualitySettings::set_shadowDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_shadowDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_shadowmaskMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ShadowmaskMode (*)()>(&::UnityEngine::QualitySettings::get_shadowmaskMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225aac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadowmaskMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_lodBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::QualitySettings::get_lodBias)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_lodBias", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_lodBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::QualitySettings::set_lodBias)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_lodBias", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_meshLodThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::QualitySettings::get_meshLodThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_meshLodThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_globalTextureMipmapLimit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_globalTextureMipmapLimit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_globalTextureMipmapLimit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_maximumLODLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_maximumLODLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_maximumLODLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_maximumLODLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::QualitySettings::set_maximumLODLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_maximumLODLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_enableLODCrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::QualitySettings::get_enableLODCrossFade)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_enableLODCrossFade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_enableLODCrossFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::QualitySettings::set_enableLODCrossFade)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_enableLODCrossFade", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_vSyncCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_vSyncCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_vSyncCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_vSyncCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::QualitySettings::set_vSyncCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18225aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_vSyncCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_antiAliasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_antiAliasing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_antiAliasing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_antiAliasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::QualitySettings::set_antiAliasing)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_antiAliasing", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_billboardsFaceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::QualitySettings::get_billboardsFaceCameraPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_billboardsFaceCameraPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_terrainQualityOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TerrainQualityOverrides (*)()>(&::UnityEngine::QualitySettings::get_terrainQualityOverrides)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225aaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_terrainQualityOverrides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_terrainQualityOverrides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainQualityOverrides)>(&::UnityEngine::QualitySettings::set_terrainQualityOverrides)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_terrainQualityOverrides", {}, {::i2c::type_of<::UnityEngine::TerrainQualityOverrides>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_terrainPixelError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::QualitySettings::get_terrainPixelError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225aae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_terrainPixelError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.set_terrainPixelError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::QualitySettings::set_terrainPixelError)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225ab80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_terrainPixelError", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_INTERNAL_renderPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (*)()>(&::UnityEngine::QualitySettings::get_INTERNAL_renderPipeline)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18225a950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_INTERNAL_renderPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_renderPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> (*)()>(&::UnityEngine::QualitySettings::get_renderPipeline)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18225aa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_renderPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.InternalGetRenderPipelineAssetAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (*)(int32_t)>(&::UnityEngine::QualitySettings::InternalGetRenderPipelineAssetAt)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18225a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"InternalGetRenderPipelineAssetAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.GetRenderPipelineAssetAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> (*)(int32_t)>(&::UnityEngine::QualitySettings::GetRenderPipelineAssetAt)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18225a7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"GetRenderPipelineAssetAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_maxQueuedFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::get_maxQueuedFrames)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_maxQueuedFrames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.GetQualityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::QualitySettings::GetQualityLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"GetQualityLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.SetQualityLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, bool)>(&::UnityEngine::QualitySettings::SetQualityLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"SetQualityLevel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_names
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::UnityEngine::QualitySettings::get_names)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225aa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_names", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_activeColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorSpace (*)()>(&::UnityEngine::QualitySettings::get_activeColorSpace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_activeColorSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.get_INTERNAL_renderPipeline_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::QualitySettings::get_INTERNAL_renderPipeline_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_INTERNAL_renderPipeline_Injected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::QualitySettings.InternalGetRenderPipelineAssetAt_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(int32_t)>(&::UnityEngine::QualitySettings::InternalGetRenderPipelineAssetAt_Injected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18225a8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"InternalGetRenderPipelineAssetAt_Injected", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::QualitySettings::setStaticF_activeQualityLevelChanged(::System::Action_2<int32_t,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<int32_t,int32_t>*, "activeQualityLevelChanged", ::UnityEngine::QualitySettings*>(std::forward<::System::Action_2<int32_t,int32_t>*>(value));
}
inline ::System::Action_2<int32_t,int32_t>* UnityEngine::QualitySettings::getStaticF_activeQualityLevelChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<int32_t,int32_t>*, "activeQualityLevelChanged", ::UnityEngine::QualitySettings*>();
}
inline void UnityEngine::QualitySettings::OnActiveQualityLevelChanged(int32_t  previousQualityLevel, int32_t  currentQualityLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"OnActiveQualityLevelChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, previousQualityLevel, currentQualityLevel);
}
inline void UnityEngine::QualitySettings::SetQualityLevel(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"SetQualityLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index);
}
inline int32_t UnityEngine::QualitySettings::get_pixelLightCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_pixelLightCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_pixelLightCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_pixelLightCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::ShadowQuality UnityEngine::QualitySettings::get_shadows()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadows", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ShadowQuality>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_shadows(::UnityEngine::ShadowQuality  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_shadows", {}, {::i2c::type_of<::UnityEngine::ShadowQuality>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::ShadowProjection UnityEngine::QualitySettings::get_shadowProjection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadowProjection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ShadowProjection>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::QualitySettings::get_shadowCascades()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadowCascades", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline float_t UnityEngine::QualitySettings::get_shadowDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadowDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_shadowDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_shadowDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::ShadowmaskMode UnityEngine::QualitySettings::get_shadowmaskMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_shadowmaskMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ShadowmaskMode>(nullptr, ___internal_method);
}
inline float_t UnityEngine::QualitySettings::get_lodBias()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_lodBias", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_lodBias(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_lodBias", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::QualitySettings::get_meshLodThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_meshLodThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::QualitySettings::get_globalTextureMipmapLimit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_globalTextureMipmapLimit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::QualitySettings::get_maximumLODLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_maximumLODLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_maximumLODLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_maximumLODLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::QualitySettings::get_enableLODCrossFade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_enableLODCrossFade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_enableLODCrossFade(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_enableLODCrossFade", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::QualitySettings::get_vSyncCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_vSyncCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_vSyncCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_vSyncCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::QualitySettings::get_antiAliasing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_antiAliasing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_antiAliasing(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_antiAliasing", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::QualitySettings::get_billboardsFaceCameraPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_billboardsFaceCameraPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::TerrainQualityOverrides UnityEngine::QualitySettings::get_terrainQualityOverrides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_terrainQualityOverrides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::TerrainQualityOverrides>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_terrainQualityOverrides(::UnityEngine::TerrainQualityOverrides  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_terrainQualityOverrides", {}, {::i2c::type_of<::UnityEngine::TerrainQualityOverrides>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::QualitySettings::get_terrainPixelError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_terrainPixelError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::set_terrainPixelError(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"set_terrainPixelError", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::QualitySettings::get_INTERNAL_renderPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_INTERNAL_renderPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> UnityEngine::QualitySettings::get_renderPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_renderPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::QualitySettings::InternalGetRenderPipelineAssetAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"InternalGetRenderPipelineAssetAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(nullptr, ___internal_method, index);
}
inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> UnityEngine::QualitySettings::GetRenderPipelineAssetAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"GetRenderPipelineAssetAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>(nullptr, ___internal_method, index);
}
inline int32_t UnityEngine::QualitySettings::get_maxQueuedFrames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_maxQueuedFrames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::QualitySettings::GetQualityLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"GetQualityLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::QualitySettings::SetQualityLevel(int32_t  index, bool  applyExpensiveChanges)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"SetQualityLevel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, applyExpensiveChanges);
}
inline ::ArrayW<::StringW> UnityEngine::QualitySettings::get_names()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_names", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline ::UnityEngine::ColorSpace UnityEngine::QualitySettings::get_activeColorSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_activeColorSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorSpace>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::QualitySettings::get_INTERNAL_renderPipeline_Injected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"get_INTERNAL_renderPipeline_Injected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr UnityEngine::QualitySettings::InternalGetRenderPipelineAssetAt_Injected(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::QualitySettings*>(),
                        {"InternalGetRenderPipelineAssetAt_Injected", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, index);
}
// Ctor Parameters []
constexpr ::UnityEngine::QualitySettings::QualitySettings()   {
}
