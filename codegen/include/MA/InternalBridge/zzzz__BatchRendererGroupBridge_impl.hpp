#pragma once
// IWYU pragma private; include "MA/InternalBridge/BatchRendererGroupBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/InternalBridge/zzzz__BatchRendererGroupBridge_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchRendererGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingSplit_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
//  Writing Method size for method: ::MA::InternalBridge::BatchRendererGroupBridge.OcclusionTestAABB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::UnityEngine::Bounds)>(&::MA::InternalBridge::BatchRendererGroupBridge::OcclusionTestAABB)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181ecbd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"OcclusionTestAABB", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::BatchRendererGroupBridge.GetOcclusionBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Rendering::BatchCullingContext>)>(&::MA::InternalBridge::BatchRendererGroupBridge::GetOcclusionBuffer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180322760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"GetOcclusionBuffer", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::BatchRendererGroupBridge.RegisterMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID>)>(&::MA::InternalBridge::BatchRendererGroupBridge::RegisterMeshes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ecbf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"RegisterMeshes", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::BatchRendererGroupBridge.RegisterMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMaterialID>)>(&::MA::InternalBridge::BatchRendererGroupBridge::RegisterMaterials)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181ecbe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"RegisterMaterials", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMaterialID>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::BatchRendererGroupBridge.RegisterMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchMeshID (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::EntityId)>(&::MA::InternalBridge::BatchRendererGroupBridge::RegisterMesh)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ecbe90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"RegisterMesh", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::BatchRendererGroupBridge.RegisterMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchMaterialID (*)(::UnityEngine::Rendering::BatchRendererGroup*, ::UnityEngine::EntityId)>(&::MA::InternalBridge::BatchRendererGroupBridge::RegisterMaterial)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181ecbd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"RegisterMaterial", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::InternalBridge::BatchRendererGroupBridge.CreateCustomBatchCullingContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::BatchCullingContext (*)(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>, ::UnityEngine::Rendering::LODParameters, ::UnityEngine::Matrix4x4, ::UnityEngine::Rendering::BatchCullingViewType, ::UnityEngine::Rendering::BatchCullingProjectionType, ::UnityEngine::Rendering::BatchCullingFlags, uint64_t, uint32_t, uint64_t, int32_t, int32_t)>(&::MA::InternalBridge::BatchRendererGroupBridge::CreateCustomBatchCullingContext)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181ecbc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"CreateCustomBatchCullingContext", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>>(), ::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingProjectionType>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingFlags>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::InternalBridge::BatchRendererGroupBridge::OcclusionTestAABB(::System::IntPtr  occlusionBuffer, ::UnityEngine::Bounds  aabb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"OcclusionTestAABB", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, occlusionBuffer, aabb);
}
inline ::System::IntPtr MA::InternalBridge::BatchRendererGroupBridge::GetOcclusionBuffer(::by_ref<::UnityEngine::Rendering::BatchCullingContext>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"GetOcclusionBuffer", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::BatchCullingContext>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, context);
}
inline void MA::InternalBridge::BatchRendererGroupBridge::RegisterMeshes(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  meshIds, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID>  batchMeshIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"RegisterMeshes", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMeshID>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batchRendererGroup, meshIds, batchMeshIds);
}
inline void MA::InternalBridge::BatchRendererGroupBridge::RegisterMaterials(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materialIds, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMaterialID>  batchMaterialIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"RegisterMaterials", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::BatchMaterialID>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, batchRendererGroup, materialIds, batchMaterialIds);
}
inline ::UnityEngine::Rendering::BatchMeshID MA::InternalBridge::BatchRendererGroupBridge::RegisterMesh(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::UnityEngine::EntityId  meshID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"RegisterMesh", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchMeshID>(nullptr, ___internal_method, batchRendererGroup, meshID);
}
inline ::UnityEngine::Rendering::BatchMaterialID MA::InternalBridge::BatchRendererGroupBridge::RegisterMaterial(::UnityEngine::Rendering::BatchRendererGroup*  batchRendererGroup, ::UnityEngine::EntityId  materialID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"RegisterMaterial", {}, {::i2c::type_of<::UnityEngine::Rendering::BatchRendererGroup*>(), ::i2c::type_of<::UnityEngine::EntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchMaterialID>(nullptr, ___internal_method, batchRendererGroup, materialID);
}
inline ::UnityEngine::Rendering::BatchCullingContext MA::InternalBridge::BatchRendererGroupBridge::CreateCustomBatchCullingContext(::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  inCullingPlanes, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>  inCullingSplits, ::UnityEngine::Rendering::LODParameters  inLodParameters, ::UnityEngine::Matrix4x4  inLocalToWorldMatrix, ::UnityEngine::Rendering::BatchCullingViewType  inViewType, ::UnityEngine::Rendering::BatchCullingProjectionType  inProjectionType, ::UnityEngine::Rendering::BatchCullingFlags  inBatchCullingFlags, uint64_t  inViewID, uint32_t  inCullingLayerMask, uint64_t  inSceneCullingMask, int32_t  inReceiverPlaneOffset, int32_t  inReceiverPlaneCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::InternalBridge::BatchRendererGroupBridge*>(),
                        {"CreateCustomBatchCullingContext", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Plane>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::CullingSplit>>(), ::i2c::type_of<::UnityEngine::Rendering::LODParameters>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingViewType>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingProjectionType>(), ::i2c::type_of<::UnityEngine::Rendering::BatchCullingFlags>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::BatchCullingContext>(nullptr, ___internal_method, inCullingPlanes, inCullingSplits, inLodParameters, inLocalToWorldMatrix, inViewType, inProjectionType, inBatchCullingFlags, inViewID, inCullingLayerMask, inSceneCullingMask, inReceiverPlaneOffset, inReceiverPlaneCount);
}
// Ctor Parameters []
constexpr ::MA::InternalBridge::BatchRendererGroupBridge::BatchRendererGroupBridge()   {
}
