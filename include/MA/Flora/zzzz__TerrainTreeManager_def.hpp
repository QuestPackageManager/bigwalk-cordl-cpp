#pragma once
// IWYU pragma private; include "MA/Flora/TerrainTreeManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__TerrainTreePrototype_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainTreeManager)
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
template<typename T>
struct NativeBuffer_1;
}
namespace MA::Flora {
struct TerrainSnapshot;
}
namespace MA::Flora {
struct TerrainTreeManager_BuildTreeIndicesJob;
}
namespace MA::Flora {
struct TerrainTreeManager_BuildTreeTransformsJob;
}
namespace MA::Flora {
struct TerrainTreePrototype;
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
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine {
struct TerrainChangedFlags;
}
// Forward declare root types
namespace MA::Flora {
struct TerrainTreeManager;
}
namespace MA::Flora {
struct TerrainTreeManager_BuildTreeIndicesJob;
}
namespace MA::Flora {
struct TerrainTreeManager_BuildTreeTransformsJob;
}
// Write type traits
MARK_VAL_T(::MA::Flora::TerrainTreeManager);
MARK_VAL_T(::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob);
MARK_VAL_T(::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainTreeManager, "MA.Flora", "TerrainTreeManager");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob, "MA.Flora", "TerrainTreeManager/BuildTreeIndicesJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob, "MA.Flora", "TerrainTreeManager/BuildTreeTransformsJob");
// Dependencies MA.Flora.NativeBufferArray`1<T>, Unity.Collections.NativeArray`1<T>, UnityEngine.TreeInstance
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainTreeManager/BuildTreeIndicesJob
struct CORDL_TYPE TerrainTreeManager_BuildTreeIndicesJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x18150a560, size 0xf0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainTreeManager_BuildTreeIndicesJob() ;

// Ctor Parameters [CppParam { name: "LayerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TreeInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>", modifiers: "", def_value: None }, CppParam { name: "TreeIndicesByLayer", ty: "::MA::Flora::NativeBufferArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr TerrainTreeManager_BuildTreeIndicesJob(int32_t  LayerCount, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  TreeInstances, ::MA::Flora::NativeBufferArray_1<int32_t>  TreeIndicesByLayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13392};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field LayerCount, offset: 0x0, size: 0x4, def value: None
 int32_t  LayerCount;

/// @brief Field TreeInstances, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  TreeInstances;

/// @brief Field TreeIndicesByLayer, offset: 0x18, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<int32_t>  TreeIndicesByLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob, LayerCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob, TreeInstances) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob, TreeIndicesByLayer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraLocalToWorld, MA.Flora.NativeBufferArray`1<T>, MA.Flora.TerrainTreePrototype, Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, UnityEngine.TreeInstance
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainTreeManager/BuildTreeTransformsJob
struct CORDL_TYPE TerrainTreeManager_BuildTreeTransformsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18150a650, size 0x490, virtual true, abstract: false, final true
inline void Execute(int32_t  layerIndex) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainTreeManager_BuildTreeTransformsJob() ;

// Ctor Parameters [CppParam { name: "Position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "TreePrototypes", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>", modifiers: "", def_value: None }, CppParam { name: "TreeInstances", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>", modifiers: "", def_value: None }, CppParam { name: "TreeIndicesByLayer", ty: "::MA::Flora::NativeBufferArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "TransformsByLayer", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: None }]
constexpr TerrainTreeManager_BuildTreeTransformsJob(::Unity::Mathematics::float3  Position, ::Unity::Mathematics::float3  Size, ::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>  TreePrototypes, ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  TreeInstances, ::MA::Flora::NativeBufferArray_1<int32_t>  TreeIndicesByLayer, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>  TransformsByLayer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13393};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field Position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Position;

/// @brief Field Size, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  Size;

/// @brief Field TreePrototypes, offset: 0x18, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::TerrainTreePrototype>  TreePrototypes;

/// @brief Field TreeInstances, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::TreeInstance>  TreeInstances;

/// @brief Field TreeIndicesByLayer, offset: 0x38, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<int32_t>  TreeIndicesByLayer;

/// @brief Field TransformsByLayer, offset: 0x48, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>  TransformsByLayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob, Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob, Size) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob, TreePrototypes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob, TreeInstances) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob, TreeIndicesByLayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob, TransformsByLayer) == 0x48, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob) == 0x58, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraInstanceHandle, MA.Flora.FloraLocalToWorld, MA.Flora.InstanceManager, MA.Flora.NativeBufferArray`1<T>, MA.Flora.NativeDataReference`1<T>, MA.Flora.TerrainTreePrototype, Unity.Collections.NativeList`1<T>, Unity.Profiling.ProfilerMarker
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainTreeManager
struct CORDL_TYPE TerrainTreeManager {
public:
// Declarations
using BuildTreeIndicesJob = ::MA::Flora::TerrainTreeManager_BuildTreeIndicesJob;

using BuildTreeTransformsJob = ::MA::Flora::TerrainTreeManager_BuildTreeTransformsJob;

/// @brief Field UpdateMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateMarker, put=setStaticF_UpdateMarker)) ::Unity::Profiling::ProfilerMarker  UpdateMarker;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Clear, addr 0x181511b10, size 0x80, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearLayer, addr 0x181511820, size 0x2f0, virtual false, abstract: false, final false
inline void ClearLayer(int32_t  layer) ;

/// @brief Method Dispose, addr 0x181511b90, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetTreeInstanceHandle, addr 0x181511bf0, size 0x30, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle GetTreeInstanceHandle(int32_t  treeIndex) ;

/// @brief Method GetTreeInstanceHandles, addr 0x181511c20, size 0x80, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> GetTreeInstanceHandles(::Unity::Collections::Allocator  allocator) ;

/// @brief Method InvalidateTreeInstanceMappings, addr 0x181511ca0, size 0xc0, virtual false, abstract: false, final false
inline void InvalidateTreeInstanceMappings(::MA::Flora::NativeBuffer_1<int32_t>  treeIndices) ;

/// @brief Method SetDirty, addr 0x181511d60, size 0x20, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetDirty, addr 0x181511d80, size 0x20, virtual false, abstract: false, final false
inline void SetDirty(::UnityEngine::TerrainChangedFlags  flags) ;

/// @brief Method SetEmpty, addr 0x181511da0, size 0x30, virtual false, abstract: false, final false
inline void SetEmpty() ;

/// @brief Method Update, addr 0x181512340, size 0x810, virtual false, abstract: false, final false
inline void Update(::by_ref<::MA::Flora::TerrainSnapshot>  terrain) ;

/// @brief Method UpdatePrototypeLayer, addr 0x181511dd0, size 0x570, virtual false, abstract: false, final false
inline void UpdatePrototypeLayer(::by_ref<::MA::Flora::TerrainSnapshot>  terrain, ::by_ref<::MA::Flora::TerrainTreePrototype>  treePrototype, int32_t  layerIndex) ;

/// @brief Method .ctor, addr 0x181512b90, size 0x220, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::InstanceContext  instanceContext) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UpdateMarker() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_UpdateMarker(::Unity::Profiling::ProfilerMarker  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainTreeManager() ;

// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: None }, CppParam { name: "m_TreeInstances", ty: "::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "m_TreePrototypes", ty: "::Unity::Collections::NativeList_1<::MA::Flora::TerrainTreePrototype>", modifiers: "", def_value: None }, CppParam { name: "m_InstancesByLayer", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "m_LocalToWorldByLayer", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: None }, CppParam { name: "m_TreeIndicesByLayer", ty: "::MA::Flora::NativeBufferArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_TreesChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_Hidden", ty: "bool", modifiers: "", def_value: None }]
constexpr TerrainTreeManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  m_TreeInstances, ::Unity::Collections::NativeList_1<::MA::Flora::TerrainTreePrototype>  m_TreePrototypes, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  m_InstancesByLayer, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>  m_LocalToWorldByLayer, ::MA::Flora::NativeBufferArray_1<int32_t>  m_TreeIndicesByLayer, bool  m_TreesChanged, bool  m_Hidden) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13394};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field m_InstanceManager, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager;

/// @brief Field m_TreeInstances, offset: 0x8, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceHandle>  m_TreeInstances;

/// @brief Field m_TreePrototypes, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::TerrainTreePrototype>  m_TreePrototypes;

/// @brief Field m_InstancesByLayer, offset: 0x18, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  m_InstancesByLayer;

/// @brief Field m_LocalToWorldByLayer, offset: 0x28, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraLocalToWorld>  m_LocalToWorldByLayer;

/// @brief Field m_TreeIndicesByLayer, offset: 0x38, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<int32_t>  m_TreeIndicesByLayer;

/// @brief Field m_TreesChanged, offset: 0x48, size: 0x1, def value: None
 bool  m_TreesChanged;

/// @brief Field m_Hidden, offset: 0x49, size: 0x1, def value: None
 bool  m_Hidden;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainTreeManager, m_InstanceManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager, m_TreeInstances) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager, m_TreePrototypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager, m_InstancesByLayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager, m_LocalToWorldByLayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager, m_TreeIndicesByLayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager, m_TreesChanged) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainTreeManager, m_Hidden) == 0x49, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainTreeManager) == 0x50, "Size mismatch!");

} // namespace end def MA::Flora
