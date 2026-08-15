#pragma once
// IWYU pragma private; include "MA/Flora/FloraRuntimeResources.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "MA/Flora/zzzz__FloraRuntimeResources_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineResources_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::FloraRuntimeResources_Version::FloraRuntimeResources_Version(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRuntimeResources_Version::FloraRuntimeResources_Version()   {
}
constexpr ::MA::Flora::FloraRuntimeResources_Version  MA::Flora::FloraRuntimeResources_Version::Initial{static_cast<int32_t>(0x0)};
constexpr ::MA::Flora::FloraRuntimeResources_Version  MA::Flora::FloraRuntimeResources_Version::Count{static_cast<int32_t>(0x1)};
constexpr ::MA::Flora::FloraRuntimeResources_Version  MA::Flora::FloraRuntimeResources_Version::Latest{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_GraphicsBufferUtilityCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_GraphicsBufferUtilityCS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ecc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_GraphicsBufferUtilityCS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_GraphicsBufferUtilityCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::FloraRuntimeResources::set_GraphicsBufferUtilityCS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_GraphicsBufferUtilityCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_InstanceBufferUploadCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_InstanceBufferUploadCS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_InstanceBufferUploadCS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_InstanceBufferUploadCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::FloraRuntimeResources::set_InstanceBufferUploadCS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_InstanceBufferUploadCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_CullingGridCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_CullingGridCS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_CullingGridCS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_CullingGridCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::FloraRuntimeResources::set_CullingGridCS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_CullingGridCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_IndirectCullingChunksCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_IndirectCullingChunksCS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_IndirectCullingChunksCS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_IndirectCullingChunksCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::FloraRuntimeResources::set_IndirectCullingChunksCS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f85b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_IndirectCullingChunksCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_IndirectCullingInstancesCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_IndirectCullingInstancesCS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_IndirectCullingInstancesCS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_IndirectCullingInstancesCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::FloraRuntimeResources::set_IndirectCullingInstancesCS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_IndirectCullingInstancesCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_IndirectCullingDrawsCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_IndirectCullingDrawsCS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_IndirectCullingDrawsCS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_IndirectCullingDrawsCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::FloraRuntimeResources::set_IndirectCullingDrawsCS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f85e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_IndirectCullingDrawsCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_OccluderDepthPyramidKernelsCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_OccluderDepthPyramidKernelsCS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e58c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_OccluderDepthPyramidKernelsCS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_OccluderDepthPyramidKernelsCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::FloraRuntimeResources::set_OccluderDepthPyramidKernelsCS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_OccluderDepthPyramidKernelsCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_DebugOcclusionCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_DebugOcclusionCS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugOcclusionCS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_DebugOcclusionCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::FloraRuntimeResources::set_DebugOcclusionCS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugOcclusionCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_DebugOccluderShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_DebugOccluderShader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugOccluderShader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_DebugOccluderShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::Shader*)>(&::MA::Flora::FloraRuntimeResources::set_DebugOccluderShader)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f84f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugOccluderShader", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_DebugOcclusionTestShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_DebugOcclusionTestShader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugOcclusionTestShader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_DebugOcclusionTestShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::Shader*)>(&::MA::Flora::FloraRuntimeResources::set_DebugOcclusionTestShader)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugOcclusionTestShader", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_TerrainGrassPlaceholderPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_TerrainGrassPlaceholderPrefab)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_TerrainGrassPlaceholderPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_TerrainGrassPlaceholderPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::GameObject*)>(&::MA::Flora::FloraRuntimeResources::set_TerrainGrassPlaceholderPrefab)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f86d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_TerrainGrassPlaceholderPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_TerrainGrassMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_TerrainGrassMaterial)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_TerrainGrassMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_TerrainGrassMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::Material*)>(&::MA::Flora::FloraRuntimeResources::set_TerrainGrassMaterial)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f86a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_TerrainGrassMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_DebugCullingGridCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ComputeShader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_DebugCullingGridCS)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugCullingGridCS", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_DebugCullingGridCS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::ComputeShader*)>(&::MA::Flora::FloraRuntimeResources::set_DebugCullingGridCS)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f8490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugCullingGridCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.get_DebugLineShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Shader> (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::get_DebugLineShader)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802ec4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugLineShader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources.set_DebugLineShader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)(::UnityEngine::Shader*)>(&::MA::Flora::FloraRuntimeResources::set_DebugLineShader)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814f84c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugLineShader", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::FloraRuntimeResources._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::FloraRuntimeResources::*)()>(&::MA::Flora::FloraRuntimeResources::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::MA::Flora::FloraRuntimeResources_Version& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr ::MA::Flora::FloraRuntimeResources_Version const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Version;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_Version(::MA::Flora::FloraRuntimeResources_Version  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Version = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_GraphicsBufferUtilityCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GraphicsBufferUtilityCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_GraphicsBufferUtilityCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GraphicsBufferUtilityCS;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_GraphicsBufferUtilityCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GraphicsBufferUtilityCS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_InstanceBufferUploadCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceBufferUploadCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_InstanceBufferUploadCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstanceBufferUploadCS;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_InstanceBufferUploadCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InstanceBufferUploadCS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_CullingGridCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingGridCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_CullingGridCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CullingGridCS;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_CullingGridCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CullingGridCS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_IndirectCullingChunksCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndirectCullingChunksCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_IndirectCullingChunksCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndirectCullingChunksCS;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_IndirectCullingChunksCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IndirectCullingChunksCS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_IndirectCullingInstancesCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndirectCullingInstancesCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_IndirectCullingInstancesCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndirectCullingInstancesCS;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_IndirectCullingInstancesCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IndirectCullingInstancesCS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_IndirectCullingDrawsCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndirectCullingDrawsCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_IndirectCullingDrawsCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndirectCullingDrawsCS;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_IndirectCullingDrawsCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IndirectCullingDrawsCS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_OccluderDepthPyramidKernelsCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OccluderDepthPyramidKernelsCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_OccluderDepthPyramidKernelsCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OccluderDepthPyramidKernelsCS;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_OccluderDepthPyramidKernelsCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OccluderDepthPyramidKernelsCS = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_OcclusionCullingDebugCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionCullingDebugCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_OcclusionCullingDebugCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OcclusionCullingDebugCS;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_OcclusionCullingDebugCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OcclusionCullingDebugCS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_DebugOccluderShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugOccluderShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_DebugOccluderShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugOccluderShader;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_DebugOccluderShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebugOccluderShader = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_DebugOcclusionTestShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugOcclusionTestShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_DebugOcclusionTestShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugOcclusionTestShader;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_DebugOcclusionTestShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebugOcclusionTestShader = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_TerrainGrassPlaceholderPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TerrainGrassPlaceholderPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_TerrainGrassPlaceholderPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TerrainGrassPlaceholderPrefab;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_TerrainGrassPlaceholderPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TerrainGrassPlaceholderPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Material>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_TerrainGrassMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TerrainGrassMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_TerrainGrassMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TerrainGrassMaterial;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_TerrainGrassMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TerrainGrassMaterial = value;
}
constexpr ::UnityW<::UnityEngine::ComputeShader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_DebugCullingGridCS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugCullingGridCS;
}
constexpr ::UnityW<::UnityEngine::ComputeShader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_DebugCullingGridCS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugCullingGridCS;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_DebugCullingGridCS(::UnityW<::UnityEngine::ComputeShader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebugCullingGridCS = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_DebugLineShader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugLineShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& MA::Flora::FloraRuntimeResources::__cordl_internal_get_m_DebugLineShader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DebugLineShader;
}
constexpr void MA::Flora::FloraRuntimeResources::__cordl_internal_set_m_DebugLineShader(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DebugLineShader = value;
}
inline bool MA::Flora::FloraRuntimeResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t MA::Flora::FloraRuntimeResources::UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::FloraRuntimeResources::get_GraphicsBufferUtilityCS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_GraphicsBufferUtilityCS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_GraphicsBufferUtilityCS(::UnityEngine::ComputeShader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_GraphicsBufferUtilityCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::FloraRuntimeResources::get_InstanceBufferUploadCS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_InstanceBufferUploadCS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_InstanceBufferUploadCS(::UnityEngine::ComputeShader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_InstanceBufferUploadCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::FloraRuntimeResources::get_CullingGridCS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_CullingGridCS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_CullingGridCS(::UnityEngine::ComputeShader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_CullingGridCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::FloraRuntimeResources::get_IndirectCullingChunksCS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_IndirectCullingChunksCS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_IndirectCullingChunksCS(::UnityEngine::ComputeShader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_IndirectCullingChunksCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::FloraRuntimeResources::get_IndirectCullingInstancesCS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_IndirectCullingInstancesCS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_IndirectCullingInstancesCS(::UnityEngine::ComputeShader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_IndirectCullingInstancesCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::FloraRuntimeResources::get_IndirectCullingDrawsCS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_IndirectCullingDrawsCS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_IndirectCullingDrawsCS(::UnityEngine::ComputeShader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_IndirectCullingDrawsCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::FloraRuntimeResources::get_OccluderDepthPyramidKernelsCS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_OccluderDepthPyramidKernelsCS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_OccluderDepthPyramidKernelsCS(::UnityEngine::ComputeShader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_OccluderDepthPyramidKernelsCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::FloraRuntimeResources::get_DebugOcclusionCS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugOcclusionCS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_DebugOcclusionCS(::UnityEngine::ComputeShader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugOcclusionCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> MA::Flora::FloraRuntimeResources::get_DebugOccluderShader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugOccluderShader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_DebugOccluderShader(::UnityEngine::Shader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugOccluderShader", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> MA::Flora::FloraRuntimeResources::get_DebugOcclusionTestShader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugOcclusionTestShader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_DebugOcclusionTestShader(::UnityEngine::Shader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugOcclusionTestShader", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::FloraRuntimeResources::get_TerrainGrassPlaceholderPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_TerrainGrassPlaceholderPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_TerrainGrassPlaceholderPrefab(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_TerrainGrassPlaceholderPrefab", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> MA::Flora::FloraRuntimeResources::get_TerrainGrassMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_TerrainGrassMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_TerrainGrassMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_TerrainGrassMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::ComputeShader> MA::Flora::FloraRuntimeResources::get_DebugCullingGridCS()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugCullingGridCS", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ComputeShader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_DebugCullingGridCS(::UnityEngine::ComputeShader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugCullingGridCS", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Shader> MA::Flora::FloraRuntimeResources::get_DebugLineShader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"get_DebugLineShader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>>(this, ___internal_method);
}
inline void MA::Flora::FloraRuntimeResources::set_DebugLineShader(::UnityEngine::Shader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {"set_DebugLineShader", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void MA::Flora::FloraRuntimeResources::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::FloraRuntimeResources*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MA::Flora::FloraRuntimeResources* MA::Flora::FloraRuntimeResources::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MA::Flora::FloraRuntimeResources*>());
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr  MA::Flora::FloraRuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
constexpr ::UnityEngine::Rendering::IRenderPipelineResources* MA::Flora::FloraRuntimeResources::i___UnityEngine__Rendering__IRenderPipelineResources() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineResources*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr  MA::Flora::FloraRuntimeResources::operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* MA::Flora::FloraRuntimeResources::i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept {
return static_cast<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::MA::Flora::FloraRuntimeResources::FloraRuntimeResources()   {
}
