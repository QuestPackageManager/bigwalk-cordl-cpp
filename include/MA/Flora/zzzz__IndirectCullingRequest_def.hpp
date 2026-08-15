#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__ConstantBufferRef_1_def.hpp"
#include "MA/Flora/zzzz__CullingViewShaderVariables_def.hpp"
#include "MA/Flora/zzzz__DrawBinConfig_def.hpp"
#include "MA/Flora/zzzz__FrustumPlaneCuller_def.hpp"
#include "MA/Flora/zzzz__GraphicsBufferRef_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingOutput_def.hpp"
#include "MA/Flora/zzzz__IndirectCullingRequestState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchCullingViewType_def.hpp"
#include "UnityEngine/Rendering/zzzz__BatchPackedCullingViewID_def.hpp"
#include "UnityEngine/Rendering/zzzz__LODParameters_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectCullingRequest)
namespace MA::Flora {
struct AnimatedCrossFadeData;
}
namespace MA::Flora {
struct GPUCullingStats;
}
namespace MA::Flora {
struct IndirectCullingOutput;
}
namespace MA::Flora {
struct IndirectCullingRequestHandles;
}
namespace MA::Flora {
struct IndirectCullingRequestParameters;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
struct BatchCullingOutput;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class VolumeStack;
}
// Forward declare root types
namespace MA::Flora {
class IndirectCullingRequest;
}
// Write type traits
MARK_REF_T(::MA::Flora::IndirectCullingRequest*);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingRequest*, "MA.Flora", "IndirectCullingRequest");
// Dependencies MA.Flora.ConstantBufferRef`1<T>, MA.Flora.CullingViewShaderVariables, MA.Flora.DrawBinConfig, MA.Flora.FrustumPlaneCuller::SplitInfo, MA.Flora.GraphicsBufferRef, MA.Flora.IndirectCullingOutput, MA.Flora.IndirectCullingRequestState, System.Object, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Jobs.JobHandle, UnityEngine.Plane, UnityEngine.Rendering.BatchCullingViewType, UnityEngine.Rendering.BatchPackedCullingViewID, UnityEngine.Rendering.LODParameters
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.IndirectCullingRequest
class CORDL_TYPE IndirectCullingRequest : public ::System::Object {
public:
// Declarations
/// @brief Field BinConfig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_BinConfig, put=__cordl_internal_set_BinConfig)) ::MA::Flora::DrawBinConfig  BinConfig;

/// @brief Field CullingHandle, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_CullingHandle, put=__cordl_internal_set_CullingHandle)) ::Unity::Jobs::JobHandle  CullingHandle;

/// @brief Field CullingOutput, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_CullingOutput, put=__cordl_internal_set_CullingOutput)) ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  CullingOutput;

/// @brief Field DrawArgsBuffer, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_DrawArgsBuffer, put=__cordl_internal_set_DrawArgsBuffer)) ::MA::Flora::GraphicsBufferRef  DrawArgsBuffer;

/// @brief Field DrawBinBuffer, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_DrawBinBuffer, put=__cordl_internal_set_DrawBinBuffer)) ::MA::Flora::GraphicsBufferRef  DrawBinBuffer;

/// @brief Field DrawChunkBuffer, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_DrawChunkBuffer, put=__cordl_internal_set_DrawChunkBuffer)) ::MA::Flora::GraphicsBufferRef  DrawChunkBuffer;

/// @brief Field DrawInfoBuffer, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_DrawInfoBuffer, put=__cordl_internal_set_DrawInfoBuffer)) ::MA::Flora::GraphicsBufferRef  DrawInfoBuffer;

/// @brief Field DrawTemplateBuffer, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_DrawTemplateBuffer, put=__cordl_internal_set_DrawTemplateBuffer)) ::MA::Flora::GraphicsBufferRef  DrawTemplateBuffer;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_IsScheduled)) bool  IsScheduled;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field LODParameters, offset 0x28, size 0x1c 
 __declspec(property(get=__cordl_internal_get_LODParameters, put=__cordl_internal_set_LODParameters)) ::UnityEngine::Rendering::LODParameters  LODParameters;

/// @brief Field LastUsedFrameIndex, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastUsedFrameIndex, put=__cordl_internal_set_LastUsedFrameIndex)) int32_t  LastUsedFrameIndex;

/// @brief Field MeshLodSelectionConstant, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MeshLodSelectionConstant, put=__cordl_internal_set_MeshLodSelectionConstant)) float_t  MeshLodSelectionConstant;

/// @brief Field Planes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_Planes, put=__cordl_internal_set_Planes)) ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  Planes;

/// @brief Field RequestID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_RequestID, put=__cordl_internal_set_RequestID)) int32_t  RequestID;

/// @brief Field ScreenRelativeMetric, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_ScreenRelativeMetric, put=__cordl_internal_set_ScreenRelativeMetric)) float_t  ScreenRelativeMetric;

/// @brief Field ShaderVariables, offset 0x88, size 0x18 
 __declspec(property(get=__cordl_internal_get_ShaderVariables, put=__cordl_internal_set_ShaderVariables)) ::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>  ShaderVariables;

/// @brief Field SplitCount, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_SplitCount, put=__cordl_internal_set_SplitCount)) int32_t  SplitCount;

/// @brief Field SplitInfos, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_SplitInfos, put=__cordl_internal_set_SplitInfos)) ::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  SplitInfos;

/// @brief Field State, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_State, put=__cordl_internal_set_State)) ::MA::Flora::IndirectCullingRequestState  State;

/// @brief Field ViewID, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ViewID, put=__cordl_internal_set_ViewID)) ::UnityEngine::Rendering::BatchPackedCullingViewID  ViewID;

/// @brief Field ViewType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ViewType, put=__cordl_internal_set_ViewType)) ::UnityEngine::Rendering::BatchCullingViewType  ViewType;

/// @brief Field VisibilityBuffer, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_VisibilityBuffer, put=__cordl_internal_set_VisibilityBuffer)) ::MA::Flora::GraphicsBufferRef  VisibilityBuffer;

/// @brief Field WorkGroupArgsBuffer, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_WorkGroupArgsBuffer, put=__cordl_internal_set_WorkGroupArgsBuffer)) ::MA::Flora::GraphicsBufferRef  WorkGroupArgsBuffer;

/// @brief Field WorkGroupCounterBuffer, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_WorkGroupCounterBuffer, put=__cordl_internal_set_WorkGroupCounterBuffer)) ::MA::Flora::GraphicsBufferRef  WorkGroupCounterBuffer;

/// @brief Field WorkGroupDataBuffer, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_WorkGroupDataBuffer, put=__cordl_internal_set_WorkGroupDataBuffer)) ::MA::Flora::GraphicsBufferRef  WorkGroupDataBuffer;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CompleteAndUpdate, addr 0x1814cc560, size 0x250, virtual false, abstract: false, final false
inline bool CompleteAndUpdate(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::VolumeStack*  volumeStack, ::by_ref<::MA::Flora::AnimatedCrossFadeData>  animatedCrossFadeData, ::by_ref<::MA::Flora::IndirectCullingOutput>  indirectCullingOutput) ;

/// @brief Method Dispose, addr 0x1814cc7b0, size 0x170, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method HasDebugDispatchCounters, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool HasDebugDispatchCounters() ;

/// @brief Method ImportBuffers, addr 0x1814cc920, size 0xa0, virtual false, abstract: false, final false
inline ::MA::Flora::IndirectCullingRequestHandles ImportBuffers(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph) ;

/// @brief Method Initialize, addr 0x1814cc9c0, size 0x1f0, virtual false, abstract: false, final false
inline void Initialize(::by_ref<::MA::Flora::IndirectCullingRequestParameters>  parameters) ;

static inline ::MA::Flora::IndirectCullingRequest* New_ctor(int32_t  requestID) ;

/// @brief Method OnPostDispatchCulling, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void OnPostDispatchCulling(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method Release, addr 0x1814ccbb0, size 0x120, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method RequestDebugDispatchCounters, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void RequestDebugDispatchCounters(::UnityEngine::Rendering::CommandBuffer*  cmd, ::System::Action_1<::MA::Flora::GPUCullingStats>*  onComplete) ;

/// @brief Method Schedule, addr 0x1814cccd0, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Jobs::JobHandle Schedule(::by_ref<::UnityEngine::Rendering::BatchCullingOutput>  batchCullingOutput, ::Unity::Jobs::JobHandle  dependency) ;

/// @brief Method UpdateVariablesData, addr 0x1814ccd00, size 0xb60, virtual false, abstract: false, final false
inline void UpdateVariablesData(::UnityEngine::Rendering::VolumeStack*  volumeStack, ::by_ref<::MA::Flora::AnimatedCrossFadeData>  animatedCrossFadeData) ;

constexpr ::MA::Flora::DrawBinConfig const& __cordl_internal_get_BinConfig() const;

constexpr ::MA::Flora::DrawBinConfig& __cordl_internal_get_BinConfig() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_CullingHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_CullingHandle() ;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput> const& __cordl_internal_get_CullingOutput() const;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>& __cordl_internal_get_CullingOutput() ;

constexpr ::MA::Flora::GraphicsBufferRef const& __cordl_internal_get_DrawArgsBuffer() const;

constexpr ::MA::Flora::GraphicsBufferRef& __cordl_internal_get_DrawArgsBuffer() ;

constexpr ::MA::Flora::GraphicsBufferRef const& __cordl_internal_get_DrawBinBuffer() const;

constexpr ::MA::Flora::GraphicsBufferRef& __cordl_internal_get_DrawBinBuffer() ;

constexpr ::MA::Flora::GraphicsBufferRef const& __cordl_internal_get_DrawChunkBuffer() const;

constexpr ::MA::Flora::GraphicsBufferRef& __cordl_internal_get_DrawChunkBuffer() ;

constexpr ::MA::Flora::GraphicsBufferRef const& __cordl_internal_get_DrawInfoBuffer() const;

constexpr ::MA::Flora::GraphicsBufferRef& __cordl_internal_get_DrawInfoBuffer() ;

constexpr ::MA::Flora::GraphicsBufferRef const& __cordl_internal_get_DrawTemplateBuffer() const;

constexpr ::MA::Flora::GraphicsBufferRef& __cordl_internal_get_DrawTemplateBuffer() ;

constexpr ::UnityEngine::Rendering::LODParameters const& __cordl_internal_get_LODParameters() const;

constexpr ::UnityEngine::Rendering::LODParameters& __cordl_internal_get_LODParameters() ;

constexpr int32_t const& __cordl_internal_get_LastUsedFrameIndex() const;

constexpr int32_t& __cordl_internal_get_LastUsedFrameIndex() ;

constexpr float_t const& __cordl_internal_get_MeshLodSelectionConstant() const;

constexpr float_t& __cordl_internal_get_MeshLodSelectionConstant() ;

constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Plane> const& __cordl_internal_get_Planes() const;

constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Plane>& __cordl_internal_get_Planes() ;

constexpr int32_t const& __cordl_internal_get_RequestID() const;

constexpr int32_t& __cordl_internal_get_RequestID() ;

constexpr float_t const& __cordl_internal_get_ScreenRelativeMetric() const;

constexpr float_t& __cordl_internal_get_ScreenRelativeMetric() ;

constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables> const& __cordl_internal_get_ShaderVariables() const;

constexpr ::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>& __cordl_internal_get_ShaderVariables() ;

constexpr int32_t const& __cordl_internal_get_SplitCount() const;

constexpr int32_t& __cordl_internal_get_SplitCount() ;

constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo> const& __cordl_internal_get_SplitInfos() const;

constexpr ::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>& __cordl_internal_get_SplitInfos() ;

constexpr ::MA::Flora::IndirectCullingRequestState const& __cordl_internal_get_State() const;

constexpr ::MA::Flora::IndirectCullingRequestState& __cordl_internal_get_State() ;

constexpr ::UnityEngine::Rendering::BatchPackedCullingViewID const& __cordl_internal_get_ViewID() const;

constexpr ::UnityEngine::Rendering::BatchPackedCullingViewID& __cordl_internal_get_ViewID() ;

constexpr ::UnityEngine::Rendering::BatchCullingViewType const& __cordl_internal_get_ViewType() const;

constexpr ::UnityEngine::Rendering::BatchCullingViewType& __cordl_internal_get_ViewType() ;

constexpr ::MA::Flora::GraphicsBufferRef const& __cordl_internal_get_VisibilityBuffer() const;

constexpr ::MA::Flora::GraphicsBufferRef& __cordl_internal_get_VisibilityBuffer() ;

constexpr ::MA::Flora::GraphicsBufferRef const& __cordl_internal_get_WorkGroupArgsBuffer() const;

constexpr ::MA::Flora::GraphicsBufferRef& __cordl_internal_get_WorkGroupArgsBuffer() ;

constexpr ::MA::Flora::GraphicsBufferRef const& __cordl_internal_get_WorkGroupCounterBuffer() const;

constexpr ::MA::Flora::GraphicsBufferRef& __cordl_internal_get_WorkGroupCounterBuffer() ;

constexpr ::MA::Flora::GraphicsBufferRef const& __cordl_internal_get_WorkGroupDataBuffer() const;

constexpr ::MA::Flora::GraphicsBufferRef& __cordl_internal_get_WorkGroupDataBuffer() ;

constexpr void __cordl_internal_set_BinConfig(::MA::Flora::DrawBinConfig  value) ;

constexpr void __cordl_internal_set_CullingHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_CullingOutput(::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  value) ;

constexpr void __cordl_internal_set_DrawArgsBuffer(::MA::Flora::GraphicsBufferRef  value) ;

constexpr void __cordl_internal_set_DrawBinBuffer(::MA::Flora::GraphicsBufferRef  value) ;

constexpr void __cordl_internal_set_DrawChunkBuffer(::MA::Flora::GraphicsBufferRef  value) ;

constexpr void __cordl_internal_set_DrawInfoBuffer(::MA::Flora::GraphicsBufferRef  value) ;

constexpr void __cordl_internal_set_DrawTemplateBuffer(::MA::Flora::GraphicsBufferRef  value) ;

constexpr void __cordl_internal_set_LODParameters(::UnityEngine::Rendering::LODParameters  value) ;

constexpr void __cordl_internal_set_LastUsedFrameIndex(int32_t  value) ;

constexpr void __cordl_internal_set_MeshLodSelectionConstant(float_t  value) ;

constexpr void __cordl_internal_set_Planes(::Unity::Collections::NativeList_1<::UnityEngine::Plane>  value) ;

constexpr void __cordl_internal_set_RequestID(int32_t  value) ;

constexpr void __cordl_internal_set_ScreenRelativeMetric(float_t  value) ;

constexpr void __cordl_internal_set_ShaderVariables(::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>  value) ;

constexpr void __cordl_internal_set_SplitCount(int32_t  value) ;

constexpr void __cordl_internal_set_SplitInfos(::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  value) ;

constexpr void __cordl_internal_set_State(::MA::Flora::IndirectCullingRequestState  value) ;

constexpr void __cordl_internal_set_ViewID(::UnityEngine::Rendering::BatchPackedCullingViewID  value) ;

constexpr void __cordl_internal_set_ViewType(::UnityEngine::Rendering::BatchCullingViewType  value) ;

constexpr void __cordl_internal_set_VisibilityBuffer(::MA::Flora::GraphicsBufferRef  value) ;

constexpr void __cordl_internal_set_WorkGroupArgsBuffer(::MA::Flora::GraphicsBufferRef  value) ;

constexpr void __cordl_internal_set_WorkGroupCounterBuffer(::MA::Flora::GraphicsBufferRef  value) ;

constexpr void __cordl_internal_set_WorkGroupDataBuffer(::MA::Flora::GraphicsBufferRef  value) ;

/// @brief Method .ctor, addr 0x1814cd860, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(int32_t  requestID) ;

/// @brief Method get_IsCompleted, addr 0x1814cdb30, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_IsCreated, addr 0x1814cdb40, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Method get_IsScheduled, addr 0x1814cdb50, size 0x10, virtual false, abstract: false, final false
inline bool get_IsScheduled() ;

/// @brief Method get_IsValid, addr 0x1814cdb60, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndirectCullingRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IndirectCullingRequest(IndirectCullingRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndirectCullingRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndirectCullingRequest(IndirectCullingRequest const& ) = delete;

/// @brief Field CullingWorkGroupStride offset 0xffffffff size 0x4
static constexpr int32_t  CullingWorkGroupStride{static_cast<int32_t>(0x20)};

/// @brief Field DebugMaxErrorRecords offset 0xffffffff size 0x4
static constexpr int32_t  DebugMaxErrorRecords{static_cast<int32_t>(0x400)};

/// @brief Field InitialChunkCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialChunkCapacity{static_cast<int32_t>(0x40)};

/// @brief Field InitialDrawBinCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialDrawBinCapacity{static_cast<int32_t>(0x40)};

/// @brief Field InitialDrawInfoCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialDrawInfoCapacity{static_cast<int32_t>(0x100)};

/// @brief Field InitialTemplateCapacity offset 0xffffffff size 0x4
static constexpr int32_t  InitialTemplateCapacity{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13206};

/// @brief Field RequestID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___RequestID;

/// @brief Field LastUsedFrameIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  ___LastUsedFrameIndex;

/// @brief Field State, offset: 0x18, size: 0x4, def value: None
 ::MA::Flora::IndirectCullingRequestState  ___State;

/// @brief Field ViewType, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::Rendering::BatchCullingViewType  ___ViewType;

/// @brief Field ViewID, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::BatchPackedCullingViewID  ___ViewID;

/// @brief Field LODParameters, offset: 0x28, size: 0x1c, def value: None
 ::UnityEngine::Rendering::LODParameters  ___LODParameters;

/// @brief Field SplitCount, offset: 0x44, size: 0x4, def value: None
 int32_t  ___SplitCount;

/// @brief Field ScreenRelativeMetric, offset: 0x48, size: 0x4, def value: None
 float_t  ___ScreenRelativeMetric;

/// @brief Field MeshLodSelectionConstant, offset: 0x4c, size: 0x4, def value: None
 float_t  ___MeshLodSelectionConstant;

/// @brief Field CullingHandle, offset: 0x50, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___CullingHandle;

/// @brief Field BinConfig, offset: 0x60, size: 0x8, def value: None
 ::MA::Flora::DrawBinConfig  ___BinConfig;

/// @brief Field CullingOutput, offset: 0x68, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::IndirectCullingOutput>  ___CullingOutput;

/// @brief Field Planes, offset: 0x78, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  ___Planes;

/// @brief Field SplitInfos, offset: 0x80, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::MA::Flora::FrustumPlaneCuller_SplitInfo>  ___SplitInfos;

/// @brief Field ShaderVariables, offset: 0x88, size: 0x18, def value: None
 ::MA::Flora::ConstantBufferRef_1<::MA::Flora::CullingViewShaderVariables>  ___ShaderVariables;

/// @brief Field DrawChunkBuffer, offset: 0xa0, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  ___DrawChunkBuffer;

/// @brief Field DrawTemplateBuffer, offset: 0xa4, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  ___DrawTemplateBuffer;

/// @brief Field DrawBinBuffer, offset: 0xa8, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  ___DrawBinBuffer;

/// @brief Field DrawInfoBuffer, offset: 0xac, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  ___DrawInfoBuffer;

/// @brief Field DrawArgsBuffer, offset: 0xb0, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  ___DrawArgsBuffer;

/// @brief Field WorkGroupDataBuffer, offset: 0xb4, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  ___WorkGroupDataBuffer;

/// @brief Field WorkGroupArgsBuffer, offset: 0xb8, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  ___WorkGroupArgsBuffer;

/// @brief Field WorkGroupCounterBuffer, offset: 0xbc, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  ___WorkGroupCounterBuffer;

/// @brief Field VisibilityBuffer, offset: 0xc0, size: 0x4, def value: None
 ::MA::Flora::GraphicsBufferRef  ___VisibilityBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___RequestID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___LastUsedFrameIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___State) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___ViewType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___ViewID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___LODParameters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___SplitCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___ScreenRelativeMetric) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___MeshLodSelectionConstant) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___CullingHandle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___BinConfig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___CullingOutput) == 0x68, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___Planes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___SplitInfos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___ShaderVariables) == 0x88, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___DrawChunkBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___DrawTemplateBuffer) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___DrawBinBuffer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___DrawInfoBuffer) == 0xac, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___DrawArgsBuffer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___WorkGroupDataBuffer) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___WorkGroupArgsBuffer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___WorkGroupCounterBuffer) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingRequest, ___VisibilityBuffer) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingRequest) == 0xc8, "Size mismatch!");

} // namespace end def MA::Flora
