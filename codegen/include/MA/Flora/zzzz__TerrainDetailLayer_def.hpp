#pragma once
// IWYU pragma private; include "MA/Flora/TerrainDetailLayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailPrototype_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__DetailInstanceTransform_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainDetailLayer)
namespace MA::Flora {
struct InstanceManager;
}
namespace MA::Flora {
template<typename T>
struct NativeDataReference_1;
}
namespace MA::Flora {
struct TerrainDetailLayer_BuildDetailInstancesJob;
}
namespace MA::Flora {
struct TerrainDetailLayer_PatchBuildResult;
}
namespace MA::Flora {
struct TerrainDetailPrototype;
}
namespace MA::Flora {
struct TerrainSnapshot;
}
namespace System {
class IDisposable;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct quaternion;
}
// Forward declare root types
namespace MA::Flora {
struct TerrainDetailLayer;
}
namespace MA::Flora {
struct TerrainDetailLayer_BuildDetailInstancesJob;
}
namespace MA::Flora {
struct TerrainDetailLayer_PatchBuildResult;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TerrainDetailLayer);
MARK_VAL_T(::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob);
MARK_VAL_T(::MA::Flora::TerrainDetailLayer_PatchBuildResult);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailLayer, "MA.Flora", "TerrainDetailLayer");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob, "MA.Flora", "TerrainDetailLayer/BuildDetailInstancesJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainDetailLayer_PatchBuildResult, "MA.Flora", "TerrainDetailLayer/PatchBuildResult");
// Dependencies MA.Flora.FloraLocalToWorld, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, UnityEngine.DetailInstanceTransform
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailLayer/BuildDetailInstancesJob
struct CORDL_TYPE TerrainDetailLayer_BuildDetailInstancesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x1814f6910, size 0x320, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Method FromToRotation, addr 0x1814f6c30, size 0x3e0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::quaternion FromToRotation(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailLayer_BuildDetailInstancesJob() ;

// Ctor Parameters [CppParam { name: "TerrainPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "AlignToGround", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "PrototypeScale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "DetailTransforms", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>", modifiers: "", def_value: None }, CppParam { name: "DetailNormals", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "InstanceLocalToWorld", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: None }]
constexpr TerrainDetailLayer_BuildDetailInstancesJob(::Unity::Mathematics::float3  TerrainPosition, float_t  AlignToGround, ::Unity::Mathematics::float3  PrototypeScale, ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>  DetailTransforms, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  DetailNormals, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  InstanceLocalToWorld) noexcept;

/// @brief Field BatchSize offset 0xffffffff size 0x4
static constexpr int32_t  BatchSize{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field TerrainPosition, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  TerrainPosition;

/// @brief Field AlignToGround, offset: 0xc, size: 0x4, def value: None
 float_t  AlignToGround;

/// @brief Field PrototypeScale, offset: 0x10, size: 0xc, def value: None
 ::Unity::Mathematics::float3  PrototypeScale;

/// @brief Field DetailTransforms, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::DetailInstanceTransform>  DetailTransforms;

/// @brief Field DetailNormals, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>  DetailNormals;

/// @brief Field InstanceLocalToWorld, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  InstanceLocalToWorld;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob, TerrainPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob, AlignToGround) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob, PrototypeScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob, DetailTransforms) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob, DetailNormals) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob, InstanceLocalToWorld) == 0x40, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob) == 0x50, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraLocalToWorld, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailLayer/PatchBuildResult
struct CORDL_TYPE TerrainDetailLayer_PatchBuildResult {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Method Dispose, addr 0x181500b70, size 0x60, virtual false, abstract: false, final false
inline void Dispose(::Unity::Jobs::JobHandle  inputDeps) ;

/// @brief Method get_IsCreated, addr 0x181458e50, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailLayer_PatchBuildResult() ;

// Ctor Parameters [CppParam { name: "PatchIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "RemoveCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "AddCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "UpdateCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: None }, CppParam { name: "BuildHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }]
constexpr TerrainDetailLayer_PatchBuildResult(int32_t  PatchIndex, int32_t  RemoveCount, int32_t  AddCount, int32_t  UpdateCount, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  LocalToWorlds, ::Unity::Jobs::JobHandle  BuildHandle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13375};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field PatchIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  PatchIndex;

/// @brief Field RemoveCount, offset: 0x4, size: 0x4, def value: None
 int32_t  RemoveCount;

/// @brief Field AddCount, offset: 0x8, size: 0x4, def value: None
 int32_t  AddCount;

/// @brief Field UpdateCount, offset: 0xc, size: 0x4, def value: None
 int32_t  UpdateCount;

/// @brief Field LocalToWorlds, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  LocalToWorlds;

/// @brief Field BuildHandle, offset: 0x20, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  BuildHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailLayer_PatchBuildResult, PatchIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_PatchBuildResult, RemoveCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_PatchBuildResult, AddCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_PatchBuildResult, UpdateCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_PatchBuildResult, LocalToWorlds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer_PatchBuildResult, BuildHandle) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailLayer_PatchBuildResult) == 0x30, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraInstanceHandle, MA.Flora.InstanceManager, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, MA.Flora.NativeDataReference`1<T>, MA.Flora.TerrainDetailPrototype
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainDetailLayer
struct CORDL_TYPE TerrainDetailLayer {
public:
// Declarations
using BuildDetailInstancesJob = ::MA::Flora::TerrainDetailLayer_BuildDetailInstancesJob;

using PatchBuildResult = ::MA::Flora::TerrainDetailLayer_PatchBuildResult;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method ClearDirty, addr 0x181503240, size 0x20, virtual false, abstract: false, final false
inline void ClearDirty(int32_t  patchIndex) ;

/// @brief Method ClearPatchInstances, addr 0x181503260, size 0x110, virtual false, abstract: false, final false
inline void ClearPatchInstances(int32_t  patchIndex) ;

/// @brief Method Dispose, addr 0x181503370, size 0x50, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method HasDirty, addr 0x1814680d0, size 0x20, virtual false, abstract: false, final false
inline bool HasDirty(int32_t  patchIndex) ;

/// @brief Method Reset, addr 0x1815033c0, size 0x300, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResizePatchesIfNeeded, addr 0x1815036c0, size 0x90, virtual false, abstract: false, final false
inline bool ResizePatchesIfNeeded(int32_t  patchesPerEdge) ;

/// @brief Method ScheduleBuildPatch, addr 0x181503750, size 0x8f0, virtual false, abstract: false, final false
inline ::MA::Flora::TerrainDetailLayer_PatchBuildResult ScheduleBuildPatch(::by_ref<::MA::Flora::TerrainSnapshot>  terrain, int32_t  patchIndex) ;

/// @brief Method SetDirty, addr 0x181504040, size 0x30, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetDirty, addr 0x181504070, size 0x20, virtual false, abstract: false, final false
inline void SetDirty(int32_t  patchIndex) ;

/// @brief Method SetEmpty, addr 0x181504090, size 0x40, virtual false, abstract: false, final false
inline void SetEmpty() ;

/// @brief Method SetPrototype, addr 0x1815040d0, size 0x1c0, virtual false, abstract: false, final false
inline bool SetPrototype(::MA::Flora::TerrainDetailPrototype  newPrototype) ;

/// @brief Method .ctor, addr 0x181504290, size 0x320, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  instanceManager, int32_t  layerIndex) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainDetailLayer() ;

// Ctor Parameters [CppParam { name: "InstanceData", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: None }, CppParam { name: "Prototype", ty: "::MA::Flora::TerrainDetailPrototype", modifiers: "", def_value: None }, CppParam { name: "LayerIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PatchCountPerEdge", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "PatchCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "InstancesPerPatch", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "PatchesDirty", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }]
constexpr TerrainDetailLayer(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  InstanceData, ::MA::Flora::TerrainDetailPrototype  Prototype, int32_t  LayerIndex, int32_t  PatchCountPerEdge, int32_t  PatchCount, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  InstancesPerPatch, ::MA::Flora::NativeBitSet  PatchesDirty) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13376};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field InstanceData, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  InstanceData;

/// @brief Field Prototype, offset: 0x8, size: 0x78, def value: None
 ::MA::Flora::TerrainDetailPrototype  Prototype;

/// @brief Field LayerIndex, offset: 0x80, size: 0x4, def value: None
 int32_t  LayerIndex;

/// @brief Field PatchCountPerEdge, offset: 0x84, size: 0x4, def value: None
 int32_t  PatchCountPerEdge;

/// @brief Field PatchCount, offset: 0x88, size: 0x4, def value: None
 int32_t  PatchCount;

/// @brief Field InstancesPerPatch, offset: 0x90, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  InstancesPerPatch;

/// @brief Field PatchesDirty, offset: 0xa0, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  PatchesDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainDetailLayer, InstanceData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer, Prototype) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer, LayerIndex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer, PatchCountPerEdge) == 0x84, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer, PatchCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer, InstancesPerPatch) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainDetailLayer, PatchesDirty) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainDetailLayer) == 0xa8, "Size mismatch!");

} // namespace end def MA::Flora
