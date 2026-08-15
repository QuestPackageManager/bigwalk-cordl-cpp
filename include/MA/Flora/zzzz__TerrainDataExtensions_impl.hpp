#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDataExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MA/Flora/zzzz__TerrainDataExtensions_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__DetailInstanceTransform_def.hpp"
#include "UnityEngine/zzzz__DetailPrototype_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
//  Writing Method size for method: ::MA::Flora::TerrainDataExtensions.RemoveTreePrototype
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, int32_t)>(&::MA::Flora::TerrainDataExtensions::RemoveTreePrototype)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815030a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"RemoveTreePrototype", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataExtensions.GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, ::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>)>(&::MA::Flora::TerrainDataExtensions::GetTreeInstances)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181502ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataExtensions.GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> (*)(::UnityEngine::TerrainData*, ::Unity::Collections::Allocator)>(&::MA::Flora::TerrainDataExtensions::GetTreeInstances)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181502f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataExtensions.SetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>, bool)>(&::MA::Flora::TerrainDataExtensions::SetTreeInstances)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815031e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataExtensions.ComputeDetailInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> (*)(::UnityEngine::TerrainData*, int32_t, int32_t, int32_t, float_t, ::Unity::Collections::Allocator, ::by_ref<::UnityEngine::Bounds>)>(&::MA::Flora::TerrainDataExtensions::ComputeDetailInstanceTransforms)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181502ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataExtensions.SetDetailLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TerrainData*, int32_t, int32_t, int32_t, int32_t, int32_t, ::Unity::Collections::NativeArray_1<int32_t>)>(&::MA::Flora::TerrainDataExtensions::SetDetailLayer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181503140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"SetDetailLayer", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataExtensions.RootGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::GameObject*)>(&::MA::Flora::TerrainDataExtensions::RootGameObject)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815030e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"RootGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainDataExtensions.PrototypeRootGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::UnityEngine::DetailPrototype*)>(&::MA::Flora::TerrainDataExtensions::PrototypeRootGameObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181503030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"PrototypeRootGameObject", {}, {::i2c::type_of<::UnityEngine::DetailPrototype*>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainDataExtensions::RemoveTreePrototype(::UnityEngine::TerrainData*  terrainData, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"RemoveTreePrototype", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, index);
}
inline void MA::Flora::TerrainDataExtensions::GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>  treeInstances)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::NativeList_1<::UnityEngine::TreeInstance>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, treeInstances);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> MA::Flora::TerrainDataExtensions::GetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(nullptr, ___internal_method, terrainData, allocator);
}
inline void MA::Flora::TerrainDataExtensions::SetTreeInstances(::UnityEngine::TerrainData*  terrainData, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, instances, snapToHeightmap);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> MA::Flora::TerrainDataExtensions::ComputeDetailInstanceTransforms(::UnityEngine::TerrainData*  terrainData, int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator, ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>(nullptr, ___internal_method, terrainData, patchX, patchY, layer, density, allocator, bounds);
}
inline void MA::Flora::TerrainDataExtensions::SetDetailLayer(::UnityEngine::TerrainData*  terrainData, int32_t  xBase, int32_t  yBase, int32_t  totalWidth, int32_t  totalHeight, int32_t  detailIndex, ::Unity::Collections::NativeArray_1<int32_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"SetDetailLayer", {}, {::i2c::type_of<::UnityEngine::TerrainData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrainData, xBase, yBase, totalWidth, totalHeight, detailIndex, data);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::TerrainDataExtensions::RootGameObject(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"RootGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, gameObject);
}
inline ::UnityW<::UnityEngine::GameObject> MA::Flora::TerrainDataExtensions::PrototypeRootGameObject(::UnityEngine::DetailPrototype*  detailPrototype)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainDataExtensions*>(),
                        {"PrototypeRootGameObject", {}, {::i2c::type_of<::UnityEngine::DetailPrototype*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, detailPrototype);
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainDataExtensions::TerrainDataExtensions()   {
}
