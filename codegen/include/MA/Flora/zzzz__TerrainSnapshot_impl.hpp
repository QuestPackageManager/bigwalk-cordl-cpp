#pragma once
// IWYU pragma private; include "MA/Flora/TerrainSnapshot.hpp"
#include "MA/Flora/zzzz__TerrainDetailPrototype_impl.hpp"
#include "MA/Flora/zzzz__TerrainTreePrototype_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__EntityId_impl.hpp"
#include "MA/Flora/zzzz__TerrainSnapshot_def.hpp"
#include "MA/Flora/zzzz__TerrainSnapshotRefresh_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__DetailInstanceTransform_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
//  Writing Method size for method: ::MA::Flora::TerrainSnapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainSnapshot::*)(::UnityEngine::Terrain*, ::Unity::Collections::Allocator)>(&::MA::Flora::TerrainSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x181511210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainSnapshot.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainSnapshot::*)(::UnityEngine::Terrain*, ::Unity::Collections::Allocator, ::MA::Flora::TerrainSnapshotRefresh)>(&::MA::Flora::TerrainSnapshot::Refresh)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181511010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"Refresh", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::MA::Flora::TerrainSnapshotRefresh>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainSnapshot.RefreshDynamicData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainSnapshot::*)(::UnityEngine::Terrain*)>(&::MA::Flora::TerrainSnapshot::RefreshDynamicData)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x181510a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"RefreshDynamicData", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainSnapshot.RefreshPrototypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainSnapshot::*)(::UnityEngine::Terrain*, ::Unity::Collections::Allocator)>(&::MA::Flora::TerrainSnapshot::RefreshPrototypes)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x181510c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"RefreshPrototypes", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainSnapshot.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainSnapshot::*)()>(&::MA::Flora::TerrainSnapshot::Dispose)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181510910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainSnapshot.GetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> (::MA::Flora::TerrainSnapshot::*)(::Unity::Collections::Allocator)>(&::MA::Flora::TerrainSnapshot::GetTreeInstances)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1815109e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainSnapshot.SetTreeInstances
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::TerrainSnapshot::*)(::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>, bool)>(&::MA::Flora::TerrainSnapshot::SetTreeInstances)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815111d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainSnapshot.ComputeDetailInstanceTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> (::MA::Flora::TerrainSnapshot::*)(int32_t, int32_t, int32_t, float_t, ::Unity::Collections::Allocator)>(&::MA::Flora::TerrainSnapshot::ComputeDetailInstanceTransforms)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181510850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::TerrainSnapshot.GetInterpolatedNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (::MA::Flora::TerrainSnapshot::*)(float_t, float_t)>(&::MA::Flora::TerrainSnapshot::GetInterpolatedNormal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181510950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"GetInterpolatedNormal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void MA::Flora::TerrainSnapshot::_ctor(::UnityEngine::Terrain*  terrain, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain, allocator);
}
inline void MA::Flora::TerrainSnapshot::Refresh(::UnityEngine::Terrain*  terrain, ::Unity::Collections::Allocator  allocator, ::MA::Flora::TerrainSnapshotRefresh  refreshMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"Refresh", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::MA::Flora::TerrainSnapshotRefresh>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain, allocator, refreshMask);
}
inline void MA::Flora::TerrainSnapshot::RefreshDynamicData(::UnityEngine::Terrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"RefreshDynamicData", {}, {::i2c::type_of<::UnityEngine::Terrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain);
}
inline void MA::Flora::TerrainSnapshot::RefreshPrototypes(::UnityEngine::Terrain*  terrain, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"RefreshPrototypes", {}, {::i2c::type_of<::UnityEngine::Terrain*>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, terrain, allocator);
}
inline void MA::Flora::TerrainSnapshot::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> MA::Flora::TerrainSnapshot::GetTreeInstances(::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"GetTreeInstances", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(*this, ___internal_method, allocator);
}
inline void MA::Flora::TerrainSnapshot::SetTreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToTerrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"SetTreeInstances", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, instances, snapToTerrain);
}
inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> MA::Flora::TerrainSnapshot::ComputeDetailInstanceTransforms(int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"ComputeDetailInstanceTransforms", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>>(*this, ___internal_method, patchX, patchY, layer, density, allocator);
}
inline ::Unity::Mathematics::float3 MA::Flora::TerrainSnapshot::GetInterpolatedNormal(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::TerrainSnapshot>(),
                        {"GetInterpolatedNormal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(*this, ___internal_method, x, y);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  MA::Flora::TerrainSnapshot::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* MA::Flora::TerrainSnapshot::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "IsCreated", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "Entity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: Some("{}") }, CppParam { name: "TerrainPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "TerrainDataPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Size", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: Some("{}") }, CppParam { name: "Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}") }, CppParam { name: "TreePrototypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>", modifiers: "", def_value: Some("{}") }, CppParam { name: "WithinTreeDistance", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "TreeDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailPrototypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>", modifiers: "", def_value: Some("{}") }, CppParam { name: "WithinDetailsRange", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailDensity", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "DetailPatchCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::TerrainSnapshot::TerrainSnapshot(bool  IsCreated, ::UnityEngine::EntityId  Entity, ::System::IntPtr  TerrainPtr, ::System::IntPtr  TerrainDataPtr, ::Unity::Mathematics::float3  Position, ::Unity::Mathematics::float3  Size, ::UnityEngine::Bounds  Bounds, ::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>  TreePrototypes, bool  WithinTreeDistance, float_t  TreeDistance, ::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>  DetailPrototypes, bool  WithinDetailsRange, float_t  DetailDistance, float_t  DetailDensity, int32_t  DetailPatchCount) noexcept  {
this->IsCreated = IsCreated;
this->Entity = Entity;
this->TerrainPtr = TerrainPtr;
this->TerrainDataPtr = TerrainDataPtr;
this->Position = Position;
this->Size = Size;
this->Bounds = Bounds;
this->TreePrototypes = TreePrototypes;
this->WithinTreeDistance = WithinTreeDistance;
this->TreeDistance = TreeDistance;
this->DetailPrototypes = DetailPrototypes;
this->WithinDetailsRange = WithinDetailsRange;
this->DetailDistance = DetailDistance;
this->DetailDensity = DetailDensity;
this->DetailPatchCount = DetailPatchCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::TerrainSnapshot::TerrainSnapshot()   {
}
