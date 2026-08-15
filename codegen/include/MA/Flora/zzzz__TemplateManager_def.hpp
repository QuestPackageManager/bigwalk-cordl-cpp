#pragma once
// IWYU pragma private; include "MA/Flora/TemplateManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__ChunkIndex_def.hpp"
#include "MA/Flora/zzzz__CullingChunkIndex_def.hpp"
#include "MA/Flora/zzzz__DrawBatchIndex_def.hpp"
#include "MA/Flora/zzzz__DrawDescriptor_def.hpp"
#include "MA/Flora/zzzz__DrawManager_def.hpp"
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__InstanceBuffer_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__NativeBitSet_def.hpp"
#include "MA/Flora/zzzz__NativeBufferArray_1_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__RendererGroupIndex_def.hpp"
#include "MA/Flora/zzzz__RendererGroupKey_def.hpp"
#include "MA/Flora/zzzz__RendererGroupRecord_def.hpp"
#include "MA/Flora/zzzz__RendererStateIndex_def.hpp"
#include "MA/Flora/zzzz__RendererStateKey_def.hpp"
#include "MA/Flora/zzzz__RendererStateRecord_def.hpp"
#include "MA/Flora/zzzz__SourceRecordIndex_def.hpp"
#include "MA/Flora/zzzz__SourceRecord_def.hpp"
#include "MA/Flora/zzzz__TemplateData_def.hpp"
#include "MA/Flora/zzzz__TemplateIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateKey_def.hpp"
#include "MA/Flora/zzzz__TemplateLayoutIndex_def.hpp"
#include "MA/Flora/zzzz__TemplateLayoutKey_def.hpp"
#include "MA/Flora/zzzz__TemplateLayoutRecord_def.hpp"
#include "MA/Flora/zzzz__TemplateOptions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__BillboardRenderer_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemplateManager)
namespace MA::Flora {
struct BatchDomainIndex;
}
namespace MA::Flora {
struct ChunkIndex;
}
namespace MA::Flora {
struct CullingChunkIndex;
}
namespace MA::Flora {
struct DrawBatchIndex;
}
namespace MA::Flora {
struct DrawDescriptor;
}
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
struct GraphicsBufferRef;
}
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
struct NativeBitSet;
}
namespace MA::Flora {
template<typename T>
struct NativeBufferArray_1;
}
namespace MA::Flora {
template<typename T>
struct NativeBuffer_1;
}
namespace MA::Flora {
struct RendererGroupIndex;
}
namespace MA::Flora {
struct RendererGroupRecord;
}
namespace MA::Flora {
struct RendererStateIndex;
}
namespace MA::Flora {
struct RendererStateRecord;
}
namespace MA::Flora {
struct SourceRecordIndex;
}
namespace MA::Flora {
struct SourceTemplateBinding;
}
namespace MA::Flora {
struct TemplateCapabilityProfile;
}
namespace MA::Flora {
struct TemplateData;
}
namespace MA::Flora {
struct TemplateIndex;
}
namespace MA::Flora {
struct TemplateLayoutIndex;
}
namespace MA::Flora {
struct TemplateLayoutRecord;
}
namespace MA::Flora {
class TemplateManager___InteropDelegates;
}
namespace MA::Flora {
struct TemplateOptions;
}
namespace MA::Flora {
struct TemplateRenderType;
}
namespace MA::Flora {
struct TemplateSourceInfo;
}
namespace MA::Flora {
struct TemplateStateChangeMask;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeHashSet_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LOD;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace MA::Flora {
class TemplateManager___InteropDelegates;
}
namespace MA::Flora {
struct TemplateManager;
}
// Write type traits
MARK_REF_T(::MA::Flora::TemplateManager___InteropDelegates*);
MARK_VAL_T(::MA::Flora::TemplateManager);
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateManager___InteropDelegates*, "MA.Flora", "TemplateManager/__InteropDelegates");
DEFINE_IL2CPP_CLASS(::MA::Flora::TemplateManager, "MA.Flora", "TemplateManager");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TemplateManager/__InteropDelegates
class CORDL_TYPE TemplateManager___InteropDelegates : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr TemplateManager___InteropDelegates() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TemplateManager___InteropDelegates", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TemplateManager___InteropDelegates(TemplateManager___InteropDelegates && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TemplateManager___InteropDelegates", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TemplateManager___InteropDelegates(TemplateManager___InteropDelegates const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13051};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TemplateManager___InteropDelegates) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.ChunkIndex, MA.Flora.CullingChunkIndex, MA.Flora.DrawBatchIndex, MA.Flora.DrawDescriptor, MA.Flora.DrawManager, MA.Flora.FloraInstanceHandle, MA.Flora.GraphicsBufferRef, MA.Flora.InstanceBuffer, MA.Flora.InstanceManager, MA.Flora.NativeBitSet, MA.Flora.NativeBufferArray`1<T>, MA.Flora.NativeDataReference`1<T>, MA.Flora.RendererGroupIndex, MA.Flora.RendererGroupKey, MA.Flora.RendererGroupRecord, MA.Flora.RendererStateIndex, MA.Flora.RendererStateKey, MA.Flora.RendererStateRecord, MA.Flora.SourceRecord, MA.Flora.SourceRecordIndex, MA.Flora.TemplateData, MA.Flora.TemplateIndex, MA.Flora.TemplateKey, MA.Flora.TemplateLayoutIndex, MA.Flora.TemplateLayoutKey, MA.Flora.TemplateLayoutRecord, MA.Flora.TemplateOptions, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>, Unity.Collections.LowLevel.Unsafe.UnsafeParallelMultiHashMap`2<TKey, TValue>, Unity.Collections.NativeArray`1<T>, UnityEngine.BillboardRenderer, UnityEngine.EntityId, UnityEngine.MeshRenderer
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TemplateManager
struct CORDL_TYPE TemplateManager {
public:
// Declarations
using __InteropDelegates = ::MA::Flora::TemplateManager___InteropDelegates;

 __declspec(property(get=get_Allocated)) ::MA::Flora::NativeBitSet  Allocated;

 __declspec(property(get=get_CameraDrawIndices)) ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  CameraDrawIndices;

 __declspec(property(get=get_CameraDrawIndicesPerLod)) ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  CameraDrawIndicesPerLod;

 __declspec(property(get=get_CanInstancesHaveLightProbes)) bool  CanInstancesHaveLightProbes;

 __declspec(property(get=get_CanInstancesHaveMotionVectors)) bool  CanInstancesHaveMotionVectors;

 __declspec(property(get=get_CullingChunks)) ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  CullingChunks;

 __declspec(property(get=get_MaxCount)) int32_t  MaxCount;

 __declspec(property(get=get_MaxUsedLodCount)) int32_t  MaxUsedLodCount;

 __declspec(property(get=get_ShadowDrawIndices)) ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  ShadowDrawIndices;

 __declspec(property(get=get_ShadowDrawIndicesPerLod)) ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  ShadowDrawIndicesPerLod;

 __declspec(property(get=get_TemplateDataBuffer)) ::MA::Flora::GraphicsBufferRef  TemplateDataBuffer;

/// @brief Field s_BillboardRenderers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_BillboardRenderers, put=setStaticF_s_BillboardRenderers)) ::ArrayW<::UnityW<::UnityEngine::BillboardRenderer>>  s_BillboardRenderers;

/// @brief Field s_MeshLodRenderers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_MeshLodRenderers, put=setStaticF_s_MeshLodRenderers)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  s_MeshLodRenderers;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddChunk, addr 0x181488a30, size 0xf0, virtual false, abstract: false, final false
inline bool AddChunk(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method AddCullingChunk, addr 0x181488b20, size 0x170, virtual false, abstract: false, final false
inline void AddCullingChunk(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::CullingChunkIndex  chunk, ::Unity::Collections::NativeArray_1<int32_t>  chunkIndexInTemplateList) ;

/// @brief Method AddInstancesToSourceRecord, addr 0x181488c90, size 0x1a0, virtual false, abstract: false, final false
inline void AddInstancesToSourceRecord(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::FloraInstanceHandle*  instances, int32_t  count) ;

/// @brief Method AddSourceRecordComponent, addr 0x181488e30, size 0x170, virtual false, abstract: false, final false
inline void AddSourceRecordComponent(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::EntityId  componentId, bool  isRenderer) ;

/// @brief Method AddTemplateDrawOwnership, addr 0x181488fa0, size 0x1b0, virtual false, abstract: false, final false
inline void AddTemplateDrawOwnership(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  drawIndices) ;

/// @brief Method AppendUniqueDrawIndices, addr 0x1814891f0, size 0xd0, virtual false, abstract: false, final false
inline void AppendUniqueDrawIndices(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  destination, ::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  source, ::MA::Flora::NativeBitSet  seen) ;

/// @brief Method AppendUniqueDrawIndices, addr 0x181489150, size 0xa0, virtual false, abstract: false, final false
inline void AppendUniqueDrawIndices(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  destination, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  source, ::MA::Flora::NativeBitSet  seen) ;

/// @brief Method AppendUniqueEntityIds, addr 0x1814892c0, size 0xd0, virtual false, abstract: false, final false
inline void AppendUniqueEntityIds(::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>  destination, ::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>  source, ::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>  seen) ;

/// @brief Method AppendUniqueEntityIds, addr 0x181489390, size 0xb0, virtual false, abstract: false, final false
inline void AppendUniqueEntityIds(::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>  destination, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>  source, ::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>  seen) ;

/// @brief Method BindHandleToState, addr 0x181489440, size 0x140, virtual false, abstract: false, final false
inline void BindHandleToState(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  source, ::MA::Flora::TemplateLayoutIndex  newLayout) ;

/// @brief Method BindSourceRecordToTemplate, addr 0x181489580, size 0x220, virtual false, abstract: false, final false
inline void BindSourceRecordToTemplate(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method BuildRendererGroupRecord, addr 0x1814897a0, size 0xd0, virtual false, abstract: false, final false
inline ::MA::Flora::RendererGroupRecord BuildRendererGroupRecord(int32_t  lodIndex, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  rendererStates) ;

/// @brief Method BuildRendererGroupSignature, addr 0x181489870, size 0x40, virtual false, abstract: false, final false
static inline uint64_t BuildRendererGroupSignature(::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  rendererGroups) ;

/// @brief Method BuildRendererStateRecord, addr 0x1814898b0, size 0x2a0, virtual false, abstract: false, final false
inline ::MA::Flora::RendererStateRecord BuildRendererStateRecord(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  representativeRenderSource, ::MA::Flora::TemplateRenderType  sourceType, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  detailBillboardMaterial, ::MA::Flora::TemplateOptions  templateOptions, ::MA::Flora::TemplateCapabilityProfile  capabilityProfile, int32_t  lodIndex, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  drawDescriptors) ;

/// @brief Method BuildTemplateBufferData, addr 0x181489b50, size 0x3d0, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateData BuildTemplateBufferData(::by_ref<::MA::Flora::TemplateLayoutRecord>  layoutRecord, ::by_ref<::MA::Flora::TemplateSourceInfo>  templateSourceInfo) ;

/// @brief Method BuildTemplateCapabilityProfile, addr 0x181489f20, size 0x150, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateCapabilityProfile BuildTemplateCapabilityProfile(::by_ref<::MA::Flora::TemplateSourceInfo>  templateSourceInfo, ::MA::Flora::TemplateOptions  templateOptions) ;

/// @brief Method BuildTemplateLayoutRecord, addr 0x18148a070, size 0xac0, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateLayoutRecord BuildTemplateLayoutRecord(::UnityEngine::EntityId  grassMaterialId, ::MA::Flora::TemplateCapabilityProfile  capabilityProfile, ::by_ref<::MA::Flora::TemplateSourceInfo>  templateSourceInfo, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  rendererGroups) ;

/// @brief Method ClearSourceRecordMappings, addr 0x18148ab30, size 0x190, virtual false, abstract: false, final false
inline void ClearSourceRecordMappings(::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method ClearTemplateProjection, addr 0x18148acc0, size 0x310, virtual false, abstract: false, final false
inline void ClearTemplateProjection(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method CollectAffectedSourceRecords, addr 0x18148afd0, size 0x320, virtual false, abstract: false, final false
inline void CollectAffectedSourceRecords(::MA::Flora::RendererStateIndex  rendererState, ::Unity::Collections::NativeHashSet_1<::MA::Flora::SourceRecordIndex>  uniqueSourceRecords) ;

/// @brief Method CollectSourceRenderers, addr 0x18148b2f0, size 0x100, virtual false, abstract: false, final false
static inline void CollectSourceRenderers(::UnityEngine::GameObject*  source, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers) ;

/// @brief Method CompileRendererDrawDescriptors, addr 0x18148b3f0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t CompileRendererDrawDescriptors(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  representativeRenderSource, ::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  detailBillboardMaterial, ::MA::Flora::TemplateOptions  templateOptions, ::MA::Flora::BatchDomainIndex  batchDomainIndex, int32_t  lodIndex, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  drawDescriptors) ;

/// @brief Method ComputeStateChangeMask, addr 0x18148b5e0, size 0x6c0, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateStateChangeMask ComputeStateChangeMask(::MA::Flora::TemplateLayoutIndex  oldLayout, ::MA::Flora::TemplateLayoutIndex  newLayout) ;

/// @brief Method CopyUniqueDrawIndices, addr 0x18148bca0, size 0x140, virtual false, abstract: false, final false
inline void CopyUniqueDrawIndices(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  destination, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  source) ;

/// @brief Method CopyUniqueEntityIds, addr 0x18148bde0, size 0x120, virtual false, abstract: false, final false
inline void CopyUniqueEntityIds(::MA::Flora::NativeBuffer_1<::UnityEngine::EntityId>  destination, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>  source) ;

/// @brief Method CreateRendererGroup, addr 0x18148bf00, size 0xd70, virtual false, abstract: false, final false
inline ::MA::Flora::RendererGroupIndex CreateRendererGroup(::by_ref<::MA::Flora::RendererGroupRecord>  groupRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  rendererStates) ;

/// @brief Method CreateRendererState, addr 0x18148cc70, size 0x950, virtual false, abstract: false, final false
inline ::MA::Flora::RendererStateIndex CreateRendererState(::by_ref<::MA::Flora::RendererStateRecord>  stateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  drawDescriptors) ;

/// @brief Method CreateTemplateLayout, addr 0x18148d5c0, size 0xa40, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateLayoutIndex CreateTemplateLayout(::by_ref<::MA::Flora::TemplateLayoutRecord>  layoutRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  rendererGroups) ;

/// @brief Method DestroyComponents, addr 0x18148e000, size 0x180, virtual false, abstract: false, final false
inline void DestroyComponents(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sourceComponents) ;

/// @brief Method DestroyInstancesForSourceRecord, addr 0x18148e180, size 0x170, virtual false, abstract: false, final false
inline void DestroyInstancesForSourceRecord(::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method DestroyRendererGroup, addr 0x18148e2f0, size 0x430, virtual false, abstract: false, final false
inline void DestroyRendererGroup(::MA::Flora::RendererGroupIndex  rendererGroup) ;

/// @brief Method DestroyRendererState, addr 0x18148e720, size 0x4e0, virtual false, abstract: false, final false
inline void DestroyRendererState(::MA::Flora::RendererStateIndex  rendererState) ;

/// @brief Method DestroyTemplate, addr 0x18148f100, size 0x290, virtual false, abstract: false, final false
inline void DestroyTemplate(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method DestroyTemplateLayout, addr 0x18148ec00, size 0x500, virtual false, abstract: false, final false
inline void DestroyTemplateLayout(::MA::Flora::TemplateLayoutIndex  templateLayout) ;

/// @brief Method DestroyTemplatesForSourceRecord, addr 0x18148f390, size 0x1f0, virtual false, abstract: false, final false
inline void DestroyTemplatesForSourceRecord(::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method Dispose, addr 0x18148f580, size 0x370, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DrawDescriptorBufferEqualsList, addr 0x18148f8f0, size 0x150, virtual false, abstract: false, final false
static inline bool DrawDescriptorBufferEqualsList(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawDescriptor>  existing, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  candidate) ;

/// @brief Method EnsureDrawTrackingCapacity, addr 0x18148fa40, size 0x70, virtual false, abstract: false, final false
inline void EnsureDrawTrackingCapacity(int32_t  minCapacity) ;

/// @brief Method EnsureRendererGroupCapacity, addr 0x18148fab0, size 0xe0, virtual false, abstract: false, final false
inline void EnsureRendererGroupCapacity(int32_t  minCapacity) ;

/// @brief Method EnsureRendererGroupLookupCapacity, addr 0x18148fb90, size 0xa0, virtual false, abstract: false, final false
inline void EnsureRendererGroupLookupCapacity(int32_t  additionalEntries) ;

/// @brief Method EnsureRendererStateCapacity, addr 0x18148fc30, size 0xe0, virtual false, abstract: false, final false
inline void EnsureRendererStateCapacity(int32_t  minCapacity) ;

/// @brief Method EnsureRendererStateLookupCapacity, addr 0x18148fd10, size 0xd0, virtual false, abstract: false, final false
inline void EnsureRendererStateLookupCapacity(int32_t  additionalEntries) ;

/// @brief Method EnsureSourceRecordCapacity, addr 0x18148fde0, size 0xc0, virtual false, abstract: false, final false
inline void EnsureSourceRecordCapacity(int32_t  minCapacity) ;

/// @brief Method EnsureTemplateCapacity, addr 0x18148fea0, size 0x1a0, virtual false, abstract: false, final false
inline void EnsureTemplateCapacity(int32_t  minCapacity) ;

/// @brief Method EnsureTemplateLayoutCapacity, addr 0x181490040, size 0xe0, virtual false, abstract: false, final false
inline void EnsureTemplateLayoutCapacity(int32_t  minCapacity) ;

/// @brief Method EnsureTemplateLayoutLookupCapacity, addr 0x181490120, size 0xa0, virtual false, abstract: false, final false
inline void EnsureTemplateLayoutLookupCapacity(int32_t  additionalEntries) ;

/// @brief Method Exists, addr 0x1814901c0, size 0x20, virtual false, abstract: false, final false
inline bool Exists(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method FindEquivalentRendererGroup, addr 0x1814901e0, size 0xf0, virtual false, abstract: false, final false
inline ::MA::Flora::RendererGroupIndex FindEquivalentRendererGroup(::by_ref<::MA::Flora::RendererGroupRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  candidateStates) ;

/// @brief Method FindEquivalentRendererState, addr 0x1814902d0, size 0xf0, virtual false, abstract: false, final false
inline ::MA::Flora::RendererStateIndex FindEquivalentRendererState(::by_ref<::MA::Flora::RendererStateRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  candidateDescriptors) ;

/// @brief Method FindEquivalentTemplateLayout, addr 0x1814903c0, size 0x190, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateLayoutIndex FindEquivalentTemplateLayout(::by_ref<::MA::Flora::TemplateLayoutRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  candidateGroups) ;

/// @brief Method GetEntityIdCapacity, addr 0x181490550, size 0xf0, virtual false, abstract: false, final false
inline int32_t GetEntityIdCapacity(::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  rendererStates, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  sourceBuffers) ;

/// @brief Method GetIdentitySource, addr 0x1814906b0, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetIdentitySource(::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method GetIdentitySourceId, addr 0x181490640, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::EntityId GetIdentitySourceId(::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method GetMaxDrawIndex, addr 0x1814909a0, size 0x80, virtual false, abstract: false, final false
static inline int32_t GetMaxDrawIndex(::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  drawIndices, int32_t  maxDrawIndex) ;

/// @brief Method GetMaxDrawIndex, addr 0x181490a20, size 0x30, virtual false, abstract: false, final false
static inline int32_t GetMaxDrawIndex(::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  drawIndices) ;

/// @brief Method GetMaxDrawIndex, addr 0x181490730, size 0x270, virtual false, abstract: false, final false
inline int32_t GetMaxDrawIndex(::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  rendererGroups) ;

/// @brief Method GetMaxDrawIndex, addr 0x181490a50, size 0x270, virtual false, abstract: false, final false
inline int32_t GetMaxDrawIndex(::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  rendererStates) ;

/// @brief Method GetOrCreateSourceRecord, addr 0x181490cc0, size 0x200, virtual false, abstract: false, final false
inline ::MA::Flora::SourceRecordIndex GetOrCreateSourceRecord(::UnityEngine::GameObject*  identitySource, ::UnityEngine::GameObject*  renderSource) ;

/// @brief Method GetRenderSource, addr 0x181490f30, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetRenderSource(::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method GetRenderSourceId, addr 0x181490ec0, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::EntityId GetRenderSourceId(::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method GetRenderersForLod, addr 0x181490fa0, size 0x130, virtual false, abstract: false, final false
static inline void GetRenderersForLod(::UnityEngine::GameObject*  source, ::ArrayW<::UnityEngine::LOD>  lods, ::MA::Flora::TemplateRenderType  type, int32_t  lodIndex, ::by_ref<::ArrayW<::UnityEngine::Renderer*>>  renderers) ;

/// @brief Method GetTemplateRepresentativeRenderSource, addr 0x181491130, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetTemplateRepresentativeRenderSource(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method GetTemplateRepresentativeRenderSourceId, addr 0x1814910d0, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::EntityId GetTemplateRepresentativeRenderSourceId(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method HasSourceRecordTemplateBinding, addr 0x1814911a0, size 0xe0, virtual false, abstract: false, final false
inline bool HasSourceRecordTemplateBinding(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method HashCombine, addr 0x181491280, size 0x20, virtual false, abstract: false, final false
static inline uint64_t HashCombine(uint64_t  hash, float_t  value) ;

/// @brief Method HashCombine, addr 0x1814912a0, size 0x20, virtual false, abstract: false, final false
static inline uint64_t HashCombine(uint64_t  hash, int32_t  value) ;

/// @brief Method HashCombine, addr 0x1814912a0, size 0x20, virtual false, abstract: false, final false
static inline uint64_t HashCombine(uint64_t  hash, uint32_t  value) ;

/// @brief Method Initialize, addr 0x1814912c0, size 0xfd0, virtual false, abstract: false, final false
inline void Initialize(::MA::Flora::InstanceContext  instanceContext) ;

/// @brief Method InvalidateSourcesForAssetChanges, addr 0x181492290, size 0x4b0, virtual false, abstract: false, final false
inline void InvalidateSourcesForAssetChanges(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  assetIds, bool  invalidateMaterials, bool  removeLookupEntries) ;

/// @brief Method IsRendererGroupEquivalent, addr 0x181492740, size 0x130, virtual false, abstract: false, final false
inline bool IsRendererGroupEquivalent(::MA::Flora::RendererGroupIndex  rendererGroup, ::by_ref<::MA::Flora::RendererGroupRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  candidateStates) ;

/// @brief Method IsRendererStateEquivalent, addr 0x181492870, size 0x240, virtual false, abstract: false, final false
inline bool IsRendererStateEquivalent(::MA::Flora::RendererStateIndex  rendererState, ::by_ref<::MA::Flora::RendererStateRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  candidateDescriptors) ;

/// @brief Method IsTemplateLayoutEquivalent, addr 0x181492ab0, size 0x2a0, virtual false, abstract: false, final false
inline bool IsTemplateLayoutEquivalent(::MA::Flora::TemplateLayoutIndex  templateLayout, ::by_ref<::MA::Flora::TemplateLayoutRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  candidateGroups) ;

/// @brief Method MarkTemplateDataDirty, addr 0x181492d50, size 0x20, virtual false, abstract: false, final false
inline void MarkTemplateDataDirty(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method MarkTemplateDrawsDirty, addr 0x181492d70, size 0xe0, virtual false, abstract: false, final false
inline void MarkTemplateDrawsDirty(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method MaterializeDrawDescriptors, addr 0x181492e50, size 0x190, virtual false, abstract: false, final false
inline void MaterializeDrawDescriptors(::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  drawDescriptors, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  registeredDraws, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  cameraDraws, ::Unity::Collections::NativeList_1<::MA::Flora::DrawBatchIndex>  shadowDraws, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>  materialIds, ::Unity::Collections::NativeList_1<::UnityEngine::EntityId>  meshIds) ;

/// @brief Method MaterialsChanged, addr 0x181492fe0, size 0x50, virtual false, abstract: false, final false
inline void MaterialsChanged(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materialInstanceIds) ;

/// @brief Method MaterialsDestroyed, addr 0x181493030, size 0x50, virtual false, abstract: false, final false
inline void MaterialsDestroyed(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  materialInstanceIds) ;

/// @brief Method MeshesChanged, addr 0x181493080, size 0x50, virtual false, abstract: false, final false
inline void MeshesChanged(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  meshInstanceIds) ;

/// @brief Method MeshesDestroyed, addr 0x1814930d0, size 0x50, virtual false, abstract: false, final false
inline void MeshesDestroyed(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  meshInstanceIds) ;

/// @brief Method MoveSourceRecordInstancesToTemplate, addr 0x181493120, size 0x350, virtual false, abstract: false, final false
inline void MoveSourceRecordInstancesToTemplate(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  oldTemplate, ::MA::Flora::TemplateIndex  newTemplate, int32_t  lightmapIndex, ::Unity::Mathematics::float4  lightmapScaleOffset) ;

/// @brief Method ProjectLayoutToHandle, addr 0x181493470, size 0xcb0, virtual false, abstract: false, final false
inline void ProjectLayoutToHandle(::MA::Flora::TemplateIndex  _cordl_template, ::UnityEngine::GameObject*  source, ::MA::Flora::TemplateLayoutIndex  templateLayout) ;

/// @brief Method RebuildDirtyDrawChunks, addr 0x181494120, size 0x300, virtual false, abstract: false, final false
inline void RebuildDirtyDrawChunks() ;

/// @brief Method RebuildDrawBatches, addr 0x181494420, size 0x160, virtual false, abstract: false, final false
inline void RebuildDrawBatches() ;

/// @brief Method RefreshSourceRecord, addr 0x181494580, size 0x4d0, virtual false, abstract: false, final false
inline void RefreshSourceRecord(::UnityEngine::GameObject*  source, ::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method RefreshTemplateRepresentativeRenderSource, addr 0x181494a50, size 0x120, virtual false, abstract: false, final false
inline void RefreshTemplateRepresentativeRenderSource(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method RegisterSource, addr 0x181494d70, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateIndex RegisterSource(::UnityEngine::GameObject*  identitySource, ::UnityEngine::GameObject*  renderSource, ::MA::Flora::TemplateOptions  options, ::UnityEngine::Material*  grassMaterial) ;

/// @brief Method RegisterSource, addr 0x181494d30, size 0x40, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateIndex RegisterSource(::UnityEngine::GameObject*  source, ::MA::Flora::TemplateOptions  options, ::UnityEngine::Material*  grassMaterial) ;

/// @brief Method RegisterSourceBinding, addr 0x181494b70, size 0x1c0, virtual false, abstract: false, final false
inline ::MA::Flora::SourceTemplateBinding RegisterSourceBinding(::UnityEngine::GameObject*  identitySource, ::UnityEngine::GameObject*  renderSource, ::MA::Flora::TemplateOptions  options, ::UnityEngine::Material*  grassMaterial) ;

/// @brief Method ReleaseRendererGroup, addr 0x181494db0, size 0xb0, virtual false, abstract: false, final false
inline void ReleaseRendererGroup(::MA::Flora::RendererGroupIndex  rendererGroup) ;

/// @brief Method ReleaseRendererState, addr 0x181494e60, size 0xc0, virtual false, abstract: false, final false
inline void ReleaseRendererState(::MA::Flora::RendererStateIndex  rendererState) ;

/// @brief Method ReleaseTemplateLayout, addr 0x181494f20, size 0x1e0, virtual false, abstract: false, final false
inline void ReleaseTemplateLayout(::MA::Flora::TemplateLayoutIndex  templateLayout) ;

/// @brief Method RemoveChunk, addr 0x181495100, size 0x130, virtual false, abstract: false, final false
inline bool RemoveChunk(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::ChunkIndex  chunk) ;

/// @brief Method RemoveCullingChunk, addr 0x181495230, size 0x120, virtual false, abstract: false, final false
inline void RemoveCullingChunk(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::CullingChunkIndex  chunk, ::Unity::Collections::NativeArray_1<int32_t>  chunkIndexInTemplateList) ;

/// @brief Method RemoveInstancesFromSourceRecords, addr 0x181495350, size 0x270, virtual false, abstract: false, final false
inline void RemoveInstancesFromSourceRecords(::MA::Flora::FloraInstanceHandle*  instances, int32_t  count) ;

/// @brief Method RemoveSourceComponent, addr 0x1814955c0, size 0x300, virtual false, abstract: false, final false
inline void RemoveSourceComponent(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::EntityId  componentId) ;

/// @brief Method RemoveTemplateDrawOwnership, addr 0x1814958c0, size 0x190, virtual false, abstract: false, final false
inline void RemoveTemplateDrawOwnership(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::NativeBuffer_1<::MA::Flora::DrawBatchIndex>  drawIndices) ;

/// @brief Method ResetTemplateData, addr 0x181495a50, size 0xd0, virtual false, abstract: false, final false
inline void ResetTemplateData(::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method ResolveRendererGroup, addr 0x181495b20, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::RendererGroupIndex ResolveRendererGroup(::by_ref<::MA::Flora::RendererGroupRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererStateIndex>  candidateStates) ;

/// @brief Method ResolveRendererState, addr 0x181495ba0, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::RendererStateIndex ResolveRendererState(::by_ref<::MA::Flora::RendererStateRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::DrawDescriptor>  candidateDescriptors) ;

/// @brief Method ResolveSourceTemplate, addr 0x181495c20, size 0x320, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateIndex ResolveSourceTemplate(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::GameObject*  renderSource, ::MA::Flora::TemplateOptions  options, ::UnityEngine::Material*  grassMaterial) ;

/// @brief Method ResolveTemplateLayout, addr 0x181496830, size 0x80, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateLayoutIndex ResolveTemplateLayout(::by_ref<::MA::Flora::TemplateLayoutRecord>  candidateRecord, ::Unity::Collections::NativeList_1<::MA::Flora::RendererGroupIndex>  candidateGroups) ;

/// @brief Method ResolveTemplateLayoutForSource, addr 0x181495f40, size 0x8f0, virtual false, abstract: false, final false
inline ::MA::Flora::TemplateLayoutIndex ResolveTemplateLayoutForSource(::UnityEngine::GameObject*  source, ::MA::Flora::TemplateOptions  templateOptions, ::UnityEngine::EntityId  grassMaterialId, ::by_ref<::MA::Flora::TemplateSourceInfo>  templateSourceInfo) ;

/// @brief Method RetainRendererGroup, addr 0x1814968b0, size 0x60, virtual false, abstract: false, final false
inline void RetainRendererGroup(::MA::Flora::RendererGroupIndex  rendererGroup) ;

/// @brief Method RetainRendererState, addr 0x181496910, size 0x80, virtual false, abstract: false, final false
inline void RetainRendererState(::MA::Flora::RendererStateIndex  rendererState) ;

/// @brief Method RetainTemplateLayout, addr 0x181496990, size 0x180, virtual false, abstract: false, final false
inline void RetainTemplateLayout(::MA::Flora::TemplateLayoutIndex  templateLayout) ;

/// @brief Method SetTemplateRepresentativeRenderSource, addr 0x181496b10, size 0x100, virtual false, abstract: false, final false
inline void SetTemplateRepresentativeRenderSource(::MA::Flora::TemplateIndex  _cordl_template, ::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method TemplateDataEquals, addr 0x181496c10, size 0xf0, virtual false, abstract: false, final false
static inline bool TemplateDataEquals(::by_ref<::MA::Flora::TemplateData>  a, ::by_ref<::MA::Flora::TemplateData>  b) ;

/// @brief Method TryDestroySourceRecordIfUnused, addr 0x181496d00, size 0x2a0, virtual false, abstract: false, final false
inline void TryDestroySourceRecordIfUnused(::MA::Flora::SourceRecordIndex  sourceRecord) ;

/// @brief Method TryGetSourceRecordTemplateVariant, addr 0x181496fa0, size 0x170, virtual false, abstract: false, final false
inline bool TryGetSourceRecordTemplateVariant(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::EntityId  grassMaterialId, ::MA::Flora::TemplateOptions  options, ::by_ref<::MA::Flora::TemplateIndex>  _cordl_template) ;

/// @brief Method UnbindHandleFromState, addr 0x181497110, size 0x130, virtual false, abstract: false, final false
inline void UnbindHandleFromState(::MA::Flora::TemplateIndex  _cordl_template, bool  notifyStateChange) ;

/// @brief Method UnbindSourceRecordFromTemplate, addr 0x181497240, size 0x350, virtual false, abstract: false, final false
inline void UnbindSourceRecordFromTemplate(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  _cordl_template) ;

/// @brief Method UpdateComponents, addr 0x181497590, size 0xb0, virtual false, abstract: false, final false
inline void UpdateComponents(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  sourceComponents) ;

/// @brief Method UpdateSource, addr 0x181497aa0, size 0x3f0, virtual false, abstract: false, final false
inline void UpdateSource(::UnityEngine::GameObject*  source) ;

/// @brief Method UpdateSource, addr 0x181497a60, size 0x40, virtual false, abstract: false, final false
inline void UpdateSource(::UnityEngine::EntityId  sourceId) ;

/// @brief Method UpdateSourceRecordIdentity, addr 0x181497640, size 0xf0, virtual false, abstract: false, final false
inline void UpdateSourceRecordIdentity(::MA::Flora::SourceRecordIndex  sourceRecord, ::UnityEngine::EntityId  newIdentitySourceId) ;

/// @brief Method UpdateSourceRecordInstancesLightmapData, addr 0x181497730, size 0x330, virtual false, abstract: false, final false
inline void UpdateSourceRecordInstancesLightmapData(::MA::Flora::SourceRecordIndex  sourceRecord, ::MA::Flora::TemplateIndex  _cordl_template, int32_t  lightmapIndex, ::Unity::Mathematics::float4  lightmapScaleOffset) ;

/// @brief Method UploadDirtyTemplateData, addr 0x181497e90, size 0x180, virtual false, abstract: false, final false
inline void UploadDirtyTemplateData() ;

/// @brief Method _EarlyInitInterop, addr 0x181498010, size 0x50, virtual false, abstract: false, final false
static inline void _EarlyInitInterop() ;

/// @brief Method _LateInitInterop, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _LateInitInterop() ;

/// @brief Method __InteropIsBurst, addr 0x181477870, size 0x10, virtual false, abstract: false, final false
static inline void __InteropIsBurst(::by_ref<bool>  status) ;

static inline ::ArrayW<::UnityW<::UnityEngine::BillboardRenderer>> getStaticF_s_BillboardRenderers() ;

static inline ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> getStaticF_s_MeshLodRenderers() ;

/// @brief Method get_Allocated, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBitSet get_Allocated() ;

/// @brief Method get_CameraDrawIndices, addr 0x18147a370, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> get_CameraDrawIndices() ;

/// @brief Method get_CameraDrawIndicesPerLod, addr 0x18147a360, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> get_CameraDrawIndicesPerLod() ;

/// @brief Method get_CanInstancesHaveLightProbes, addr 0x181498140, size 0x40, virtual false, abstract: false, final false
inline bool get_CanInstancesHaveLightProbes() ;

/// @brief Method get_CanInstancesHaveMotionVectors, addr 0x181498180, size 0x70, virtual false, abstract: false, final false
inline bool get_CanInstancesHaveMotionVectors() ;

/// @brief Method get_CullingChunks, addr 0x181465e60, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex> get_CullingChunks() ;

/// @brief Method get_MaxCount, addr 0x1814981f0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_MaxCount() ;

/// @brief Method get_MaxUsedLodCount, addr 0x181498220, size 0x880, virtual false, abstract: false, final false
inline int32_t get_MaxUsedLodCount() ;

/// @brief Method get_ShadowDrawIndices, addr 0x18147a390, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> get_ShadowDrawIndices() ;

/// @brief Method get_ShadowDrawIndicesPerLod, addr 0x18147a380, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex> get_ShadowDrawIndicesPerLod() ;

/// @brief Method get_TemplateDataBuffer, addr 0x18147a3a0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::GraphicsBufferRef get_TemplateDataBuffer() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_s_BillboardRenderers(::ArrayW<::UnityW<::UnityEngine::BillboardRenderer>>  value) ;

static inline void setStaticF_s_MeshLodRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TemplateManager() ;

// Ctor Parameters [CppParam { name: "m_InstanceManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>", modifiers: "", def_value: None }, CppParam { name: "m_InstanceBuffer", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>", modifiers: "", def_value: None }, CppParam { name: "m_DrawManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>", modifiers: "", def_value: None }, CppParam { name: "m_NextTemplateId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TemplateFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateIndex>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_TemplatesAreGrass", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_TemplateByKey", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::TemplateKey,::MA::Flora::TemplateIndex>", modifiers: "", def_value: None }, CppParam { name: "m_NextSourceRecordId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SourceRecordFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SourceRecordIndex>", modifiers: "", def_value: None }, CppParam { name: "m_SourceRecordAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_SourceRecordBySource", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>", modifiers: "", def_value: None }, CppParam { name: "m_SourceRecordByComponent", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>", modifiers: "", def_value: None }, CppParam { name: "m_SourceRecords", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::SourceRecord>", modifiers: "", def_value: None }, CppParam { name: "m_SourceRecordComponentIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_SourceRecordRendererIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_SourceRecordTemplates", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>", modifiers: "", def_value: None }, CppParam { name: "m_SourceRecordInstances", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "m_NextRendererStateId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererStateIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateByKey", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateKey,::MA::Flora::RendererStateIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateRecords", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::RendererStateRecord>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateDrawDescriptors", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawDescriptor>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateRegisteredDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateCameraDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateShadowDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateMaterialInstanceIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStateMeshInstanceIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStatesByMaterial", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererStatesByMesh", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>", modifiers: "", def_value: None }, CppParam { name: "m_NextRendererGroupId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererGroupIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupByKey", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupKey,::MA::Flora::RendererGroupIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupsByState", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateIndex,::MA::Flora::RendererGroupIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupRecords", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::RendererGroupRecord>", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupStates", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererStateIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupRegisteredDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupCameraDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupShadowDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupMaterialInstanceIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_RendererGroupMeshInstanceIds", ty: "::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_NextTemplateLayoutId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutFreeList", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateLayoutIndex>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutAllocated", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutByKey", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::TemplateLayoutKey,::MA::Flora::TemplateLayoutIndex>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutsByGroup", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupIndex,::MA::Flora::TemplateLayoutIndex>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutBindings", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutIndex>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutRecords", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutRecord>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutGroups", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererGroupIndex>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutRegisteredDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutCameraDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateLayoutShadowDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_GrassMaterialIds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateOptions", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TemplateOptions>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateRepresentativeRenderSourceIds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateSourceRecords", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::SourceRecordIndex>", modifiers: "", def_value: None }, CppParam { name: "m_RegisteredDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_Chunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_CullingChunks", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>", modifiers: "", def_value: None }, CppParam { name: "m_CameraDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_CameraDrawIndicesPerLod", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ShadowDrawIndices", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_ShadowDrawIndicesPerLod", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>", modifiers: "", def_value: None }, CppParam { name: "m_MaxDrawBatchIndices", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MaxUsedLodCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_TemplateDataArray", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::TemplateData>", modifiers: "", def_value: None }, CppParam { name: "m_TemplateDataBuffer", ty: "::MA::Flora::GraphicsBufferRef", modifiers: "", def_value: None }, CppParam { name: "m_DirtyTemplateData", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_DrawTemplates", ty: "::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>", modifiers: "", def_value: None }, CppParam { name: "m_DirtyDrawChunks", ty: "::MA::Flora::NativeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_TemplateDataNeedsUpload", ty: "bool", modifiers: "", def_value: None }]
constexpr TemplateManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager, ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer, ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>  m_DrawManager, int32_t  m_NextTemplateId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateIndex>  m_TemplateFreeList, ::MA::Flora::NativeBitSet  m_TemplateAllocated, ::MA::Flora::NativeBitSet  m_TemplatesAreGrass, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::TemplateKey,::MA::Flora::TemplateIndex>  m_TemplateByKey, int32_t  m_NextSourceRecordId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SourceRecordIndex>  m_SourceRecordFreeList, ::MA::Flora::NativeBitSet  m_SourceRecordAllocated, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>  m_SourceRecordBySource, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>  m_SourceRecordByComponent, ::Unity::Collections::NativeArray_1<::MA::Flora::SourceRecord>  m_SourceRecords, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_SourceRecordComponentIds, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_SourceRecordRendererIds, ::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>  m_SourceRecordTemplates, ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  m_SourceRecordInstances, int32_t  m_NextRendererStateId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererStateIndex>  m_RendererStateFreeList, ::MA::Flora::NativeBitSet  m_RendererStateAllocated, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateKey,::MA::Flora::RendererStateIndex>  m_RendererStateByKey, ::Unity::Collections::NativeArray_1<::MA::Flora::RendererStateRecord>  m_RendererStateRecords, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawDescriptor>  m_RendererStateDrawDescriptors, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererStateRegisteredDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererStateCameraDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererStateShadowDrawIndices, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererStateMaterialInstanceIds, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererStateMeshInstanceIds, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>  m_RendererStatesByMaterial, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>  m_RendererStatesByMesh, int32_t  m_NextRendererGroupId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererGroupIndex>  m_RendererGroupFreeList, ::MA::Flora::NativeBitSet  m_RendererGroupAllocated, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupKey,::MA::Flora::RendererGroupIndex>  m_RendererGroupByKey, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateIndex,::MA::Flora::RendererGroupIndex>  m_RendererGroupsByState, ::Unity::Collections::NativeArray_1<::MA::Flora::RendererGroupRecord>  m_RendererGroupRecords, ::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererStateIndex>  m_RendererGroupStates, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererGroupRegisteredDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererGroupCameraDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererGroupShadowDrawIndices, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererGroupMaterialInstanceIds, ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererGroupMeshInstanceIds, int32_t  m_NextTemplateLayoutId, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutFreeList, ::MA::Flora::NativeBitSet  m_TemplateLayoutAllocated, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::TemplateLayoutKey,::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutByKey, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupIndex,::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutsByGroup, ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutBindings, ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutRecord>  m_TemplateLayoutRecords, ::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererGroupIndex>  m_TemplateLayoutGroups, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_TemplateLayoutRegisteredDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_TemplateLayoutCameraDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_TemplateLayoutShadowDrawIndices, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  m_GrassMaterialIds, ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateOptions>  m_TemplateOptions, ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  m_TemplateRepresentativeRenderSourceIds, ::MA::Flora::NativeBufferArray_1<::MA::Flora::SourceRecordIndex>  m_TemplateSourceRecords, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RegisteredDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>  m_Chunks, ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_CullingChunks, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_CameraDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_CameraDrawIndicesPerLod, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_ShadowDrawIndices, ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_ShadowDrawIndicesPerLod, int32_t  m_MaxDrawBatchIndices, int32_t  m_MaxUsedLodCount, ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateData>  m_TemplateDataArray, ::MA::Flora::GraphicsBufferRef  m_TemplateDataBuffer, ::MA::Flora::NativeBitSet  m_DirtyTemplateData, ::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>  m_DrawTemplates, ::MA::Flora::NativeBitSet  m_DirtyDrawChunks, bool  m_TemplateDataNeedsUpload) noexcept;

/// @brief Field FnvOffsetBasis64 offset 0xffffffff size 0x8
static constexpr uint64_t  FnvOffsetBasis64{static_cast<uint64_t>(0xcbf29ce484222325u)};

/// @brief Field FnvPrime64 offset 0xffffffff size 0x8
static constexpr uint64_t  FnvPrime64{static_cast<uint64_t>(0x100000001b3u)};

/// @brief Field InitialCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialCapacity{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x410};

/// @brief Field m_InstanceManager, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager;

/// @brief Field m_InstanceBuffer, offset: 0x8, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceBuffer>  m_InstanceBuffer;

/// @brief Field m_DrawManager, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::DrawManager>  m_DrawManager;

/// @brief Field m_NextTemplateId, offset: 0x18, size: 0x4, def value: None
 int32_t  m_NextTemplateId;

/// @brief Field m_TemplateFreeList, offset: 0x20, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateIndex>  m_TemplateFreeList;

/// @brief Field m_TemplateAllocated, offset: 0x38, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_TemplateAllocated;

/// @brief Field m_TemplatesAreGrass, offset: 0x40, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_TemplatesAreGrass;

/// @brief Field m_TemplateByKey, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::MA::Flora::TemplateKey,::MA::Flora::TemplateIndex>  m_TemplateByKey;

/// @brief Field m_NextSourceRecordId, offset: 0x58, size: 0x4, def value: None
 int32_t  m_NextSourceRecordId;

/// @brief Field m_SourceRecordFreeList, offset: 0x60, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::SourceRecordIndex>  m_SourceRecordFreeList;

/// @brief Field m_SourceRecordAllocated, offset: 0x78, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_SourceRecordAllocated;

/// @brief Field m_SourceRecordBySource, offset: 0x80, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>  m_SourceRecordBySource;

/// @brief Field m_SourceRecordByComponent, offset: 0x90, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::SourceRecordIndex>  m_SourceRecordByComponent;

/// @brief Field m_SourceRecords, offset: 0xa0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::SourceRecord>  m_SourceRecords;

/// @brief Field m_SourceRecordComponentIds, offset: 0xb0, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_SourceRecordComponentIds;

/// @brief Field m_SourceRecordRendererIds, offset: 0xc0, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_SourceRecordRendererIds;

/// @brief Field m_SourceRecordTemplates, offset: 0xd0, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>  m_SourceRecordTemplates;

/// @brief Field m_SourceRecordInstances, offset: 0xe0, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::FloraInstanceHandle>  m_SourceRecordInstances;

/// @brief Field m_NextRendererStateId, offset: 0xf0, size: 0x4, def value: None
 int32_t  m_NextRendererStateId;

/// @brief Field m_RendererStateFreeList, offset: 0xf8, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererStateIndex>  m_RendererStateFreeList;

/// @brief Field m_RendererStateAllocated, offset: 0x110, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_RendererStateAllocated;

/// @brief Field m_RendererStateByKey, offset: 0x118, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateKey,::MA::Flora::RendererStateIndex>  m_RendererStateByKey;

/// @brief Field m_RendererStateRecords, offset: 0x128, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::RendererStateRecord>  m_RendererStateRecords;

/// @brief Field m_RendererStateDrawDescriptors, offset: 0x138, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawDescriptor>  m_RendererStateDrawDescriptors;

/// @brief Field m_RendererStateRegisteredDrawIndices, offset: 0x148, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererStateRegisteredDrawIndices;

/// @brief Field m_RendererStateCameraDrawIndices, offset: 0x158, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererStateCameraDrawIndices;

/// @brief Field m_RendererStateShadowDrawIndices, offset: 0x168, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererStateShadowDrawIndices;

/// @brief Field m_RendererStateMaterialInstanceIds, offset: 0x178, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererStateMaterialInstanceIds;

/// @brief Field m_RendererStateMeshInstanceIds, offset: 0x188, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererStateMeshInstanceIds;

/// @brief Field m_RendererStatesByMaterial, offset: 0x198, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>  m_RendererStatesByMaterial;

/// @brief Field m_RendererStatesByMesh, offset: 0x1a8, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::UnityEngine::EntityId,::MA::Flora::RendererStateIndex>  m_RendererStatesByMesh;

/// @brief Field m_NextRendererGroupId, offset: 0x1b8, size: 0x4, def value: None
 int32_t  m_NextRendererGroupId;

/// @brief Field m_RendererGroupFreeList, offset: 0x1c0, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::RendererGroupIndex>  m_RendererGroupFreeList;

/// @brief Field m_RendererGroupAllocated, offset: 0x1d8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_RendererGroupAllocated;

/// @brief Field m_RendererGroupByKey, offset: 0x1e0, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupKey,::MA::Flora::RendererGroupIndex>  m_RendererGroupByKey;

/// @brief Field m_RendererGroupsByState, offset: 0x1f0, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererStateIndex,::MA::Flora::RendererGroupIndex>  m_RendererGroupsByState;

/// @brief Field m_RendererGroupRecords, offset: 0x200, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::RendererGroupRecord>  m_RendererGroupRecords;

/// @brief Field m_RendererGroupStates, offset: 0x210, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererStateIndex>  m_RendererGroupStates;

/// @brief Field m_RendererGroupRegisteredDrawIndices, offset: 0x220, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererGroupRegisteredDrawIndices;

/// @brief Field m_RendererGroupCameraDrawIndices, offset: 0x230, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererGroupCameraDrawIndices;

/// @brief Field m_RendererGroupShadowDrawIndices, offset: 0x240, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RendererGroupShadowDrawIndices;

/// @brief Field m_RendererGroupMaterialInstanceIds, offset: 0x250, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererGroupMaterialInstanceIds;

/// @brief Field m_RendererGroupMeshInstanceIds, offset: 0x260, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::UnityEngine::EntityId>  m_RendererGroupMeshInstanceIds;

/// @brief Field m_NextTemplateLayoutId, offset: 0x270, size: 0x4, def value: None
 int32_t  m_NextTemplateLayoutId;

/// @brief Field m_TemplateLayoutFreeList, offset: 0x278, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutFreeList;

/// @brief Field m_TemplateLayoutAllocated, offset: 0x290, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_TemplateLayoutAllocated;

/// @brief Field m_TemplateLayoutByKey, offset: 0x298, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::TemplateLayoutKey,::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutByKey;

/// @brief Field m_TemplateLayoutsByGroup, offset: 0x2a8, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<::MA::Flora::RendererGroupIndex,::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutsByGroup;

/// @brief Field m_TemplateLayoutBindings, offset: 0x2b8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutIndex>  m_TemplateLayoutBindings;

/// @brief Field m_TemplateLayoutRecords, offset: 0x2c8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateLayoutRecord>  m_TemplateLayoutRecords;

/// @brief Field m_TemplateLayoutGroups, offset: 0x2d8, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::RendererGroupIndex>  m_TemplateLayoutGroups;

/// @brief Field m_TemplateLayoutRegisteredDrawIndices, offset: 0x2e8, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_TemplateLayoutRegisteredDrawIndices;

/// @brief Field m_TemplateLayoutCameraDrawIndices, offset: 0x2f8, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_TemplateLayoutCameraDrawIndices;

/// @brief Field m_TemplateLayoutShadowDrawIndices, offset: 0x308, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_TemplateLayoutShadowDrawIndices;

/// @brief Field m_GrassMaterialIds, offset: 0x318, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  m_GrassMaterialIds;

/// @brief Field m_TemplateOptions, offset: 0x328, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateOptions>  m_TemplateOptions;

/// @brief Field m_TemplateRepresentativeRenderSourceIds, offset: 0x338, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  m_TemplateRepresentativeRenderSourceIds;

/// @brief Field m_TemplateSourceRecords, offset: 0x348, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::SourceRecordIndex>  m_TemplateSourceRecords;

/// @brief Field m_RegisteredDrawIndices, offset: 0x358, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_RegisteredDrawIndices;

/// @brief Field m_Chunks, offset: 0x368, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::ChunkIndex>  m_Chunks;

/// @brief Field m_CullingChunks, offset: 0x378, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::CullingChunkIndex>  m_CullingChunks;

/// @brief Field m_CameraDrawIndices, offset: 0x388, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_CameraDrawIndices;

/// @brief Field m_CameraDrawIndicesPerLod, offset: 0x398, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_CameraDrawIndicesPerLod;

/// @brief Field m_ShadowDrawIndices, offset: 0x3a8, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_ShadowDrawIndices;

/// @brief Field m_ShadowDrawIndicesPerLod, offset: 0x3b8, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::DrawBatchIndex>  m_ShadowDrawIndicesPerLod;

/// @brief Field m_MaxDrawBatchIndices, offset: 0x3c8, size: 0x4, def value: None
 int32_t  m_MaxDrawBatchIndices;

/// @brief Field m_MaxUsedLodCount, offset: 0x3cc, size: 0x4, def value: None
 int32_t  m_MaxUsedLodCount;

/// @brief Field m_TemplateDataArray, offset: 0x3d0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::TemplateData>  m_TemplateDataArray;

/// @brief Field m_TemplateDataBuffer, offset: 0x3e0, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  m_TemplateDataBuffer;

/// @brief Field m_DirtyTemplateData, offset: 0x3e8, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_DirtyTemplateData;

/// @brief Field m_DrawTemplates, offset: 0x3f0, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArray_1<::MA::Flora::TemplateIndex>  m_DrawTemplates;

/// @brief Field m_DirtyDrawChunks, offset: 0x400, size: 0x8, def value: None
 ::MA::Flora::NativeBitSet  m_DirtyDrawChunks;

/// @brief Field m_TemplateDataNeedsUpload, offset: 0x408, size: 0x1, def value: None
 bool  m_TemplateDataNeedsUpload;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TemplateManager, m_InstanceManager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_InstanceBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_DrawManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_NextTemplateId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateFreeList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateAllocated) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplatesAreGrass) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateByKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_NextSourceRecordId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_SourceRecordFreeList) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_SourceRecordAllocated) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_SourceRecordBySource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_SourceRecordByComponent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_SourceRecords) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_SourceRecordComponentIds) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_SourceRecordRendererIds) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_SourceRecordTemplates) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_SourceRecordInstances) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_NextRendererStateId) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateFreeList) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateAllocated) == 0x110, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateByKey) == 0x118, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateRecords) == 0x128, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateDrawDescriptors) == 0x138, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateRegisteredDrawIndices) == 0x148, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateCameraDrawIndices) == 0x158, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateShadowDrawIndices) == 0x168, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateMaterialInstanceIds) == 0x178, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStateMeshInstanceIds) == 0x188, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStatesByMaterial) == 0x198, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererStatesByMesh) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_NextRendererGroupId) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupFreeList) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupAllocated) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupByKey) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupsByState) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupRecords) == 0x200, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupStates) == 0x210, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupRegisteredDrawIndices) == 0x220, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupCameraDrawIndices) == 0x230, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupShadowDrawIndices) == 0x240, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupMaterialInstanceIds) == 0x250, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RendererGroupMeshInstanceIds) == 0x260, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_NextTemplateLayoutId) == 0x270, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutFreeList) == 0x278, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutAllocated) == 0x290, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutByKey) == 0x298, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutsByGroup) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutBindings) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutRecords) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutGroups) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutRegisteredDrawIndices) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutCameraDrawIndices) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateLayoutShadowDrawIndices) == 0x308, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_GrassMaterialIds) == 0x318, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateOptions) == 0x328, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateRepresentativeRenderSourceIds) == 0x338, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateSourceRecords) == 0x348, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_RegisteredDrawIndices) == 0x358, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_Chunks) == 0x368, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_CullingChunks) == 0x378, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_CameraDrawIndices) == 0x388, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_CameraDrawIndicesPerLod) == 0x398, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_ShadowDrawIndices) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_ShadowDrawIndicesPerLod) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_MaxDrawBatchIndices) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_MaxUsedLodCount) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateDataArray) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateDataBuffer) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_DirtyTemplateData) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_DrawTemplates) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_DirtyDrawChunks) == 0x400, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TemplateManager, m_TemplateDataNeedsUpload) == 0x408, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TemplateManager) == 0x410, "Size mismatch!");

} // namespace end def MA::Flora
