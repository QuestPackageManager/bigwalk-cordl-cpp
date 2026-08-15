#pragma once
// IWYU pragma private; include "MA/Flora/TerrainSnapshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__TerrainDetailPrototype_def.hpp"
#include "MA/Flora/zzzz__TerrainTreePrototype_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainSnapshot)
namespace MA::Flora {
struct TerrainSnapshotRefresh;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct DetailInstanceTransform;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
struct TreeInstance;
}
// Forward declare root types
namespace MA::Flora {
struct TerrainSnapshot;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TerrainSnapshot);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainSnapshot, "MA.Flora", "TerrainSnapshot");
// Dependencies MA.Flora.TerrainDetailPrototype, MA.Flora.TerrainTreePrototype, System.IntPtr, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, UnityEngine.Bounds, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainSnapshot
struct CORDL_TYPE TerrainSnapshot {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method ComputeDetailInstanceTransforms, addr 0x181510850, size 0xc0, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform> ComputeDetailInstanceTransforms(int32_t  patchX, int32_t  patchY, int32_t  layer, float_t  density, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Dispose, addr 0x181510910, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetInterpolatedNormal, addr 0x181510950, size 0x90, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 GetInterpolatedNormal(float_t  x, float_t  y) ;

/// @brief Method GetTreeInstances, addr 0x1815109e0, size 0x60, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance> GetTreeInstances(::Unity::Collections::Allocator  allocator) ;

/// @brief Method Refresh, addr 0x181511010, size 0x1c0, virtual false, abstract: false, final false
inline void Refresh(::UnityEngine::Terrain*  terrain, ::Unity::Collections::Allocator  allocator, ::MA::Flora::TerrainSnapshotRefresh  refreshMask) ;

/// @brief Method RefreshDynamicData, addr 0x181510a40, size 0x230, virtual false, abstract: false, final false
inline void RefreshDynamicData(::UnityEngine::Terrain*  terrain) ;

/// @brief Method RefreshPrototypes, addr 0x181510c70, size 0x3a0, virtual false, abstract: false, final false
inline void RefreshPrototypes(::UnityEngine::Terrain*  terrain, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method SetTreeInstances, addr 0x1815111d0, size 0x40, virtual false, abstract: false, final false
inline void SetTreeInstances(::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  instances, bool  snapToTerrain) ;

/// @brief Method .ctor, addr 0x181511210, size 0x610, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Terrain*  terrain, ::Unity::Collections::Allocator  allocator) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainSnapshot() ;

// Ctor Parameters [CppParam { name: "IsCreated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "Entity", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }, CppParam { name: "TerrainPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "TerrainDataPtr", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }, CppParam { name: "TreePrototypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>", modifiers: "", def_value: None }, CppParam { name: "WithinTreeDistance", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "TreeDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DetailPrototypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>", modifiers: "", def_value: None }, CppParam { name: "WithinDetailsRange", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "DetailDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DetailDensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "DetailPatchCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainSnapshot(bool  IsCreated, ::UnityEngine::EntityId  Entity, ::System::IntPtr  TerrainPtr, ::System::IntPtr  TerrainDataPtr, ::Unity::Mathematics::float3  Position, ::Unity::Mathematics::float3  Size, ::UnityEngine::Bounds  Bounds, ::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>  TreePrototypes, bool  WithinTreeDistance, float_t  TreeDistance, ::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>  DetailPrototypes, bool  WithinDetailsRange, float_t  DetailDistance, float_t  DetailDensity, int32_t  DetailPatchCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13386};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field IsCreated, offset: 0x0, size: 0x1, def value: None
 bool  IsCreated;

/// @brief Field Entity, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::EntityId  Entity;

/// @brief Field TerrainPtr, offset: 0x8, size: 0x8, def value: None
 ::System::IntPtr  TerrainPtr;

/// @brief Field TerrainDataPtr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  TerrainDataPtr;

/// @brief Field Position, offset: 0x18, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Position;

/// @brief Field Size, offset: 0x24, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Size;

/// @brief Field Bounds, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::Bounds  Bounds;

/// @brief Field TreePrototypes, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>  TreePrototypes;

/// @brief Field WithinTreeDistance, offset: 0x58, size: 0x1, def value: None
 bool  WithinTreeDistance;

/// @brief Field TreeDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  TreeDistance;

/// @brief Field DetailPrototypes, offset: 0x60, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::TerrainDetailPrototype>  DetailPrototypes;

/// @brief Field WithinDetailsRange, offset: 0x70, size: 0x1, def value: None
 bool  WithinDetailsRange;

/// @brief Field DetailDistance, offset: 0x74, size: 0x4, def value: None
 float_t  DetailDistance;

/// @brief Field DetailDensity, offset: 0x78, size: 0x4, def value: None
 float_t  DetailDensity;

/// @brief Field DetailPatchCount, offset: 0x7c, size: 0x4, def value: None
 int32_t  DetailPatchCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainSnapshot, IsCreated) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, Entity) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, TerrainPtr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, TerrainDataPtr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, Position) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, Size) == 0x24, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, Bounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, TreePrototypes) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, WithinTreeDistance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, TreeDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, DetailPrototypes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, WithinDetailsRange) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, DetailDistance) == 0x74, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, DetailDensity) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainSnapshot, DetailPatchCount) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainSnapshot) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
