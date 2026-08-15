#pragma once
// IWYU pragma private; include "MA/Flora/TemplateUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__TemplateUtility_def.hpp"
#include "MA/Flora/zzzz__AxisAlignedBox_def.hpp"
#include "MA/Flora/zzzz__StaticLightingRenderMode_def.hpp"
#include "MA/Flora/zzzz__TemplateSourceInfo_def.hpp"
#include "MA/Flora/zzzz__TemplateUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LOD_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::MA::Flora::TemplateUtility_FrameCache.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::TemplateUtility_FrameCache::Clear)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814a73a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility_FrameCache*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TemplateUtility_FrameCache::setStaticF_LODCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityEngine::LOD>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityEngine::LOD>>*, "LODCache", ::MA::Flora::TemplateUtility_FrameCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityEngine::LOD>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityEngine::LOD>>* MA::Flora::TemplateUtility_FrameCache::getStaticF_LODCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityEngine::LOD>>*, "LODCache", ::MA::Flora::TemplateUtility_FrameCache*>();
}
inline void MA::Flora::TemplateUtility_FrameCache::setStaticF_FirstLODMeshRendererCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>*, "FirstLODMeshRendererCache", ::MA::Flora::TemplateUtility_FrameCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>* MA::Flora::TemplateUtility_FrameCache::getStaticF_FirstLODMeshRendererCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>*, "FirstLODMeshRendererCache", ::MA::Flora::TemplateUtility_FrameCache*>();
}
inline void MA::Flora::TemplateUtility_FrameCache::setStaticF_TemplateInfoCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::TemplateSourceInfo>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::TemplateSourceInfo>*, "TemplateInfoCache", ::MA::Flora::TemplateUtility_FrameCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::TemplateSourceInfo>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::TemplateSourceInfo>* MA::Flora::TemplateUtility_FrameCache::getStaticF_TemplateInfoCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::TemplateSourceInfo>*, "TemplateInfoCache", ::MA::Flora::TemplateUtility_FrameCache*>();
}
inline void MA::Flora::TemplateUtility_FrameCache::setStaticF_LocalBoundsCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*, "LocalBoundsCache", ::MA::Flora::TemplateUtility_FrameCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>* MA::Flora::TemplateUtility_FrameCache::getStaticF_LocalBoundsCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*, "LocalBoundsCache", ::MA::Flora::TemplateUtility_FrameCache*>();
}
inline void MA::Flora::TemplateUtility_FrameCache::setStaticF_WorldBoundsCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*, "WorldBoundsCache", ::MA::Flora::TemplateUtility_FrameCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>* MA::Flora::TemplateUtility_FrameCache::getStaticF_WorldBoundsCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::MA::Flora::AxisAlignedBox>*, "WorldBoundsCache", ::MA::Flora::TemplateUtility_FrameCache*>();
}
inline void MA::Flora::TemplateUtility_FrameCache::setStaticF_LowerBoundsCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::BoundingSphere>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::BoundingSphere>*, "LowerBoundsCache", ::MA::Flora::TemplateUtility_FrameCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::BoundingSphere>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::BoundingSphere>* MA::Flora::TemplateUtility_FrameCache::getStaticF_LowerBoundsCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::BoundingSphere>*, "LowerBoundsCache", ::MA::Flora::TemplateUtility_FrameCache*>();
}
inline void MA::Flora::TemplateUtility_FrameCache::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility_FrameCache*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateUtility_FrameCache::TemplateUtility_FrameCache()   {
}
//  Writing Method size for method: ::MA::Flora::TemplateUtility.NextFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::MA::Flora::TemplateUtility::NextFrame)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1814a73a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"NextFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.GetLODs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::LOD> (*)(::UnityEngine::GameObject*)>(&::MA::Flora::TemplateUtility::GetLODs)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x1814ac430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetLODs", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.GetMeshRenderersForFirstLOD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> (*)(::UnityEngine::GameObject*)>(&::MA::Flora::TemplateUtility::GetMeshRenderersForFirstLOD)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1814ac810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetMeshRenderersForFirstLOD", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.ComputeTemplateSourceInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::TemplateSourceInfo (*)(::UnityEngine::GameObject*)>(&::MA::Flora::TemplateUtility::ComputeTemplateSourceInfo)> {
  constexpr static std::size_t size = 0x1080;
  constexpr static std::size_t addrs = 0x1814ab3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"ComputeTemplateSourceInfo", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.TryGetInstanceRendererSupportError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*, ::by_ref<::StringW>)>(&::MA::Flora::TemplateUtility::TryGetInstanceRendererSupportError)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1814ad140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"TryGetInstanceRendererSupportError", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.ValidateStaticLightingConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::MA::Flora::TemplateSourceInfo>, ::MA::Flora::StaticLightingRenderMode, int32_t, ::UnityEngine::Vector4, ::by_ref<bool>, ::by_ref<::MA::Flora::StaticLightingRenderMode>, ::by_ref<bool>, ::by_ref<int32_t>, ::by_ref<::Unity::Mathematics::float4>)>(&::MA::Flora::TemplateUtility::ValidateStaticLightingConfiguration)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1814ad7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"ValidateStaticLightingConfiguration", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>(), ::i2c::type_of<::MA::Flora::StaticLightingRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::MA::Flora::StaticLightingRenderMode>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.GetRendererLocalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::AxisAlignedBox (*)(::UnityEngine::Renderer*)>(&::MA::Flora::TemplateUtility::GetRendererLocalBounds)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x1814aca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetRendererLocalBounds", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.GetTransformPositionInRootSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::MA::Flora::TemplateUtility::GetTransformPositionInRootSpace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1814acbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetTransformPositionInRootSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.GetTransformToRootSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::MA::Flora::TemplateUtility::GetTransformToRootSpace)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x1814acc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetTransformToRootSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.TryGetStableRendererLocalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Renderer*, ::by_ref<::MA::Flora::AxisAlignedBox>)>(&::MA::Flora::TemplateUtility::TryGetStableRendererLocalBounds)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x1814ad470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"TryGetStableRendererLocalBounds", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TemplateUtility.CalculateLowestBoundingSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::BoundingSphere (*)(::UnityEngine::GameObject*)>(&::MA::Flora::TemplateUtility::CalculateLowestBoundingSphere)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x1814aab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"CalculateLowestBoundingSphere", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TemplateUtility::setStaticF_MeshBuffer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*, "MeshBuffer", ::MA::Flora::TemplateUtility*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* MA::Flora::TemplateUtility::getStaticF_MeshBuffer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*, "MeshBuffer", ::MA::Flora::TemplateUtility*>();
}
inline void MA::Flora::TemplateUtility::setStaticF_MeshRendererBuffer(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*, "MeshRendererBuffer", ::MA::Flora::TemplateUtility*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* MA::Flora::TemplateUtility::getStaticF_MeshRendererBuffer()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*, "MeshRendererBuffer", ::MA::Flora::TemplateUtility*>();
}
inline void MA::Flora::TemplateUtility::NextFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"NextFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::LOD> MA::Flora::TemplateUtility::GetLODs(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetLODs", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::LOD>>(nullptr, ___internal_method, gameObject);
}
inline ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> MA::Flora::TemplateUtility::GetMeshRenderersForFirstLOD(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetMeshRenderersForFirstLOD", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>>(nullptr, ___internal_method, gameObject);
}
inline ::MA::Flora::TemplateSourceInfo MA::Flora::TemplateUtility::ComputeTemplateSourceInfo(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"ComputeTemplateSourceInfo", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::TemplateSourceInfo>(nullptr, ___internal_method, gameObject);
}
inline bool MA::Flora::TemplateUtility::TryGetInstanceRendererSupportError(::UnityEngine::GameObject*  gameObject, ::by_ref<::StringW>  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"TryGetInstanceRendererSupportError", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gameObject, error);
}
inline bool MA::Flora::TemplateUtility::ValidateStaticLightingConfiguration(::by_ref<::MA::Flora::TemplateSourceInfo>  renderInfo, ::MA::Flora::StaticLightingRenderMode  staticLightingMode, int32_t  rendererLightmapIndex, ::UnityEngine::Vector4  rendererLightmapScaleOffset, ::by_ref<bool>  hasStaticLightingMode, ::by_ref<::MA::Flora::StaticLightingRenderMode>  rootStaticLightingMode, ::by_ref<bool>  hasLightmapBinding, ::by_ref<int32_t>  rootLightmapIndex, ::by_ref<::Unity::Mathematics::float4>  rootLightmapScaleOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"ValidateStaticLightingConfiguration", {}, {::i2c::type_of<::by_ref<::MA::Flora::TemplateSourceInfo>>(), ::i2c::type_of<::MA::Flora::StaticLightingRenderMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<::MA::Flora::StaticLightingRenderMode>>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderInfo, staticLightingMode, rendererLightmapIndex, rendererLightmapScaleOffset, hasStaticLightingMode, rootStaticLightingMode, hasLightmapBinding, rootLightmapIndex, rootLightmapScaleOffset);
}
inline ::MA::Flora::AxisAlignedBox MA::Flora::TemplateUtility::GetRendererLocalBounds(::UnityEngine::Renderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetRendererLocalBounds", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::AxisAlignedBox>(nullptr, ___internal_method, renderer);
}
inline ::Unity::Mathematics::float3 MA::Flora::TemplateUtility::GetTransformPositionInRootSpace(::UnityEngine::Transform*  root, ::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetTransformPositionInRootSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, root, target);
}
inline ::UnityEngine::Matrix4x4 MA::Flora::TemplateUtility::GetTransformToRootSpace(::UnityEngine::Transform*  root, ::UnityEngine::Transform*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"GetTransformToRootSpace", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method, root, target);
}
inline bool MA::Flora::TemplateUtility::TryGetStableRendererLocalBounds(::UnityEngine::Renderer*  renderer, ::by_ref<::MA::Flora::AxisAlignedBox>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"TryGetStableRendererLocalBounds", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<::by_ref<::MA::Flora::AxisAlignedBox>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderer, bounds);
}
inline ::UnityEngine::BoundingSphere MA::Flora::TemplateUtility::CalculateLowestBoundingSphere(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TemplateUtility*>(),
                        {"CalculateLowestBoundingSphere", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::BoundingSphere>(nullptr, ___internal_method, gameObject);
}
// Ctor Parameters []
constexpr ::MA::Flora::TemplateUtility::TemplateUtility()   {
}
