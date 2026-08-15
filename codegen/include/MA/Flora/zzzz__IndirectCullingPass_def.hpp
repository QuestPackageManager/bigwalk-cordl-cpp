#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectCullingPass)
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
struct IndirectCullingParams;
}
namespace MA::Flora {
struct IndirectCullingPass_ChunkCullingPass;
}
namespace MA::Flora {
struct IndirectCullingPass_InstanceCullingPass;
}
namespace MA::Flora {
class IndirectCullingPass_LocalNameID;
}
namespace MA::Flora {
struct IndirectCullingPass_ScatterDrawArgsPass;
}
namespace MA::Flora {
struct IndirectCullingPass_SceneViewPass;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::Rendering {
struct BatchCullingViewType;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace MA::Flora {
struct IndirectCullingPass_SceneViewPass;
}
namespace MA::Flora {
class IndirectCullingPass;
}
namespace MA::Flora {
class IndirectCullingPass_LocalNameID;
}
namespace MA::Flora {
struct IndirectCullingPass_ChunkCullingPass;
}
namespace MA::Flora {
struct IndirectCullingPass_InstanceCullingPass;
}
namespace MA::Flora {
struct IndirectCullingPass_ScatterDrawArgsPass;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectCullingPass_SceneViewPass);
MARK_REF_T(::MA::Flora::IndirectCullingPass*);
MARK_REF_T(::MA::Flora::IndirectCullingPass_LocalNameID*);
MARK_VAL_T(::MA::Flora::IndirectCullingPass_ChunkCullingPass);
MARK_VAL_T(::MA::Flora::IndirectCullingPass_InstanceCullingPass);
MARK_VAL_T(::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingPass_SceneViewPass, "MA.Flora", "IndirectCullingPass/SceneViewPass");
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingPass*, "MA.Flora", "IndirectCullingPass");
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingPass_LocalNameID*, "MA.Flora", "IndirectCullingPass/LocalNameID");
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingPass_ChunkCullingPass, "MA.Flora", "IndirectCullingPass/ChunkCullingPass");
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingPass_InstanceCullingPass, "MA.Flora", "IndirectCullingPass/InstanceCullingPass");
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass, "MA.Flora", "IndirectCullingPass/ScatterDrawArgsPass");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.IndirectCullingPass/LocalNameID
class CORDL_TYPE IndirectCullingPass_LocalNameID : public ::System::Object {
public:
// Declarations
/// @brief Field CullingViewShaderVariables, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CullingViewShaderVariables, put=setStaticF_CullingViewShaderVariables)) int32_t  CullingViewShaderVariables;

/// @brief Field _ArchetypeData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ArchetypeData, put=setStaticF__ArchetypeData)) int32_t  _ArchetypeData;

/// @brief Field _BatchCullingAddresses, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BatchCullingAddresses, put=setStaticF__BatchCullingAddresses)) int32_t  _BatchCullingAddresses;

/// @brief Field _BlockData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlockData, put=setStaticF__BlockData)) int32_t  _BlockData;

/// @brief Field _CullingChunkAttributes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkAttributes, put=setStaticF__CullingChunkAttributes)) int32_t  _CullingChunkAttributes;

/// @brief Field _CullingChunkBatches, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkBatches, put=setStaticF__CullingChunkBatches)) int32_t  _CullingChunkBatches;

/// @brief Field _CullingChunkCells, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkCells, put=setStaticF__CullingChunkCells)) int32_t  _CullingChunkCells;

/// @brief Field _CullingChunkFlagChannelCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkFlagChannelCount, put=setStaticF__CullingChunkFlagChannelCount)) int32_t  _CullingChunkFlagChannelCount;

/// @brief Field _CullingChunkFlags, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkFlags, put=setStaticF__CullingChunkFlags)) int32_t  _CullingChunkFlags;

/// @brief Field _CullingChunkInfos, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkInfos, put=setStaticF__CullingChunkInfos)) int32_t  _CullingChunkInfos;

/// @brief Field _CullingIndirectOffsets, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingIndirectOffsets, put=setStaticF__CullingIndirectOffsets)) int32_t  _CullingIndirectOffsets;

/// @brief Field _CullingWorkGroupArgs, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingWorkGroupArgs, put=setStaticF__CullingWorkGroupArgs)) int32_t  _CullingWorkGroupArgs;

/// @brief Field _CullingWorkGroupArgsRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingWorkGroupArgsRW, put=setStaticF__CullingWorkGroupArgsRW)) int32_t  _CullingWorkGroupArgsRW;

/// @brief Field _CullingWorkGroupCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingWorkGroupCount, put=setStaticF__CullingWorkGroupCount)) int32_t  _CullingWorkGroupCount;

/// @brief Field _CullingWorkGroupCounterRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingWorkGroupCounterRW, put=setStaticF__CullingWorkGroupCounterRW)) int32_t  _CullingWorkGroupCounterRW;

/// @brief Field _CullingWorkGroups, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingWorkGroups, put=setStaticF__CullingWorkGroups)) int32_t  _CullingWorkGroups;

/// @brief Field _CullingWorkGroupsRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingWorkGroupsRW, put=setStaticF__CullingWorkGroupsRW)) int32_t  _CullingWorkGroupsRW;

/// @brief Field _DebugCounterEnabled, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DebugCounterEnabled, put=setStaticF__DebugCounterEnabled)) int32_t  _DebugCounterEnabled;

/// @brief Field _DebugDispatchCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DebugDispatchCounter, put=setStaticF__DebugDispatchCounter)) int32_t  _DebugDispatchCounter;

/// @brief Field _DebugDrawVisibility, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DebugDrawVisibility, put=setStaticF__DebugDrawVisibility)) int32_t  _DebugDrawVisibility;

/// @brief Field _DebugErrorBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DebugErrorBuffer, put=setStaticF__DebugErrorBuffer)) int32_t  _DebugErrorBuffer;

/// @brief Field _DebugErrorCapacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DebugErrorCapacity, put=setStaticF__DebugErrorCapacity)) int32_t  _DebugErrorCapacity;

/// @brief Field _DebugErrorCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DebugErrorCount, put=setStaticF__DebugErrorCount)) int32_t  _DebugErrorCount;

/// @brief Field _DebugLODIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DebugLODIndex, put=setStaticF__DebugLODIndex)) int32_t  _DebugLODIndex;

/// @brief Field _DebugLODMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DebugLODMode, put=setStaticF__DebugLODMode)) int32_t  _DebugLODMode;

/// @brief Field _DebugShadingMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DebugShadingMode, put=setStaticF__DebugShadingMode)) int32_t  _DebugShadingMode;

/// @brief Field _DensityCullingEnabled, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DensityCullingEnabled, put=setStaticF__DensityCullingEnabled)) int32_t  _DensityCullingEnabled;

/// @brief Field _DrawArgsRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DrawArgsRW, put=setStaticF__DrawArgsRW)) int32_t  _DrawArgsRW;

/// @brief Field _DrawBinCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DrawBinCount, put=setStaticF__DrawBinCount)) int32_t  _DrawBinCount;

/// @brief Field _DrawBins, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DrawBins, put=setStaticF__DrawBins)) int32_t  _DrawBins;

/// @brief Field _DrawChunks, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DrawChunks, put=setStaticF__DrawChunks)) int32_t  _DrawChunks;

/// @brief Field _DrawCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DrawCount, put=setStaticF__DrawCount)) int32_t  _DrawCount;

/// @brief Field _DrawInfos, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DrawInfos, put=setStaticF__DrawInfos)) int32_t  _DrawInfos;

/// @brief Field _EditorViewPass, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EditorViewPass, put=setStaticF__EditorViewPass)) int32_t  _EditorViewPass;

/// @brief Field _IncludedChunkCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IncludedChunkCount, put=setStaticF__IncludedChunkCount)) int32_t  _IncludedChunkCount;

/// @brief Field _IncludedInstances, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IncludedInstances, put=setStaticF__IncludedInstances)) int32_t  _IncludedInstances;

/// @brief Field _InstanceMultiplierShift, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InstanceMultiplierShift, put=setStaticF__InstanceMultiplierShift)) int32_t  _InstanceMultiplierShift;

/// @brief Field _InstanceVisibilityRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InstanceVisibilityRW, put=setStaticF__InstanceVisibilityRW)) int32_t  _InstanceVisibilityRW;

/// @brief Field _MaxChunkCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaxChunkCount, put=setStaticF__MaxChunkCount)) int32_t  _MaxChunkCount;

/// @brief Field _MaxWorkGroupCountX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaxWorkGroupCountX, put=setStaticF__MaxWorkGroupCountX)) int32_t  _MaxWorkGroupCountX;

/// @brief Field _MaxWorkGroupCountY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaxWorkGroupCountY, put=setStaticF__MaxWorkGroupCountY)) int32_t  _MaxWorkGroupCountY;

/// @brief Field _TemplateData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TemplateData, put=setStaticF__TemplateData)) int32_t  _TemplateData;

/// @brief Field _TemplateDraws, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TemplateDraws, put=setStaticF__TemplateDraws)) int32_t  _TemplateDraws;

static inline int32_t getStaticF_CullingViewShaderVariables() ;

static inline int32_t getStaticF__ArchetypeData() ;

static inline int32_t getStaticF__BatchCullingAddresses() ;

static inline int32_t getStaticF__BlockData() ;

static inline int32_t getStaticF__CullingChunkAttributes() ;

static inline int32_t getStaticF__CullingChunkBatches() ;

static inline int32_t getStaticF__CullingChunkCells() ;

static inline int32_t getStaticF__CullingChunkFlagChannelCount() ;

static inline int32_t getStaticF__CullingChunkFlags() ;

static inline int32_t getStaticF__CullingChunkInfos() ;

static inline int32_t getStaticF__CullingIndirectOffsets() ;

static inline int32_t getStaticF__CullingWorkGroupArgs() ;

static inline int32_t getStaticF__CullingWorkGroupArgsRW() ;

static inline int32_t getStaticF__CullingWorkGroupCount() ;

static inline int32_t getStaticF__CullingWorkGroupCounterRW() ;

static inline int32_t getStaticF__CullingWorkGroups() ;

static inline int32_t getStaticF__CullingWorkGroupsRW() ;

static inline int32_t getStaticF__DebugCounterEnabled() ;

static inline int32_t getStaticF__DebugDispatchCounter() ;

static inline int32_t getStaticF__DebugDrawVisibility() ;

static inline int32_t getStaticF__DebugErrorBuffer() ;

static inline int32_t getStaticF__DebugErrorCapacity() ;

static inline int32_t getStaticF__DebugErrorCount() ;

static inline int32_t getStaticF__DebugLODIndex() ;

static inline int32_t getStaticF__DebugLODMode() ;

static inline int32_t getStaticF__DebugShadingMode() ;

static inline int32_t getStaticF__DensityCullingEnabled() ;

static inline int32_t getStaticF__DrawArgsRW() ;

static inline int32_t getStaticF__DrawBinCount() ;

static inline int32_t getStaticF__DrawBins() ;

static inline int32_t getStaticF__DrawChunks() ;

static inline int32_t getStaticF__DrawCount() ;

static inline int32_t getStaticF__DrawInfos() ;

static inline int32_t getStaticF__EditorViewPass() ;

static inline int32_t getStaticF__IncludedChunkCount() ;

static inline int32_t getStaticF__IncludedInstances() ;

static inline int32_t getStaticF__InstanceMultiplierShift() ;

static inline int32_t getStaticF__InstanceVisibilityRW() ;

static inline int32_t getStaticF__MaxChunkCount() ;

static inline int32_t getStaticF__MaxWorkGroupCountX() ;

static inline int32_t getStaticF__MaxWorkGroupCountY() ;

static inline int32_t getStaticF__TemplateData() ;

static inline int32_t getStaticF__TemplateDraws() ;

static inline void setStaticF_CullingViewShaderVariables(int32_t  value) ;

static inline void setStaticF__ArchetypeData(int32_t  value) ;

static inline void setStaticF__BatchCullingAddresses(int32_t  value) ;

static inline void setStaticF__BlockData(int32_t  value) ;

static inline void setStaticF__CullingChunkAttributes(int32_t  value) ;

static inline void setStaticF__CullingChunkBatches(int32_t  value) ;

static inline void setStaticF__CullingChunkCells(int32_t  value) ;

static inline void setStaticF__CullingChunkFlagChannelCount(int32_t  value) ;

static inline void setStaticF__CullingChunkFlags(int32_t  value) ;

static inline void setStaticF__CullingChunkInfos(int32_t  value) ;

static inline void setStaticF__CullingIndirectOffsets(int32_t  value) ;

static inline void setStaticF__CullingWorkGroupArgs(int32_t  value) ;

static inline void setStaticF__CullingWorkGroupArgsRW(int32_t  value) ;

static inline void setStaticF__CullingWorkGroupCount(int32_t  value) ;

static inline void setStaticF__CullingWorkGroupCounterRW(int32_t  value) ;

static inline void setStaticF__CullingWorkGroups(int32_t  value) ;

static inline void setStaticF__CullingWorkGroupsRW(int32_t  value) ;

static inline void setStaticF__DebugCounterEnabled(int32_t  value) ;

static inline void setStaticF__DebugDispatchCounter(int32_t  value) ;

static inline void setStaticF__DebugDrawVisibility(int32_t  value) ;

static inline void setStaticF__DebugErrorBuffer(int32_t  value) ;

static inline void setStaticF__DebugErrorCapacity(int32_t  value) ;

static inline void setStaticF__DebugErrorCount(int32_t  value) ;

static inline void setStaticF__DebugLODIndex(int32_t  value) ;

static inline void setStaticF__DebugLODMode(int32_t  value) ;

static inline void setStaticF__DebugShadingMode(int32_t  value) ;

static inline void setStaticF__DensityCullingEnabled(int32_t  value) ;

static inline void setStaticF__DrawArgsRW(int32_t  value) ;

static inline void setStaticF__DrawBinCount(int32_t  value) ;

static inline void setStaticF__DrawBins(int32_t  value) ;

static inline void setStaticF__DrawChunks(int32_t  value) ;

static inline void setStaticF__DrawCount(int32_t  value) ;

static inline void setStaticF__DrawInfos(int32_t  value) ;

static inline void setStaticF__EditorViewPass(int32_t  value) ;

static inline void setStaticF__IncludedChunkCount(int32_t  value) ;

static inline void setStaticF__IncludedInstances(int32_t  value) ;

static inline void setStaticF__InstanceMultiplierShift(int32_t  value) ;

static inline void setStaticF__InstanceVisibilityRW(int32_t  value) ;

static inline void setStaticF__MaxChunkCount(int32_t  value) ;

static inline void setStaticF__MaxWorkGroupCountX(int32_t  value) ;

static inline void setStaticF__MaxWorkGroupCountY(int32_t  value) ;

static inline void setStaticF__TemplateData(int32_t  value) ;

static inline void setStaticF__TemplateDraws(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingPass_LocalNameID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndirectCullingPass_LocalNameID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IndirectCullingPass_LocalNameID(IndirectCullingPass_LocalNameID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndirectCullingPass_LocalNameID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndirectCullingPass_LocalNameID(IndirectCullingPass_LocalNameID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::IndirectCullingPass_LocalNameID) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectCullingPass/SceneViewPass
struct CORDL_TYPE IndirectCullingPass_SceneViewPass {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IndirectCullingPass_SceneViewPass_Unwrapped
enum struct __IndirectCullingPass_SceneViewPass_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Picking = static_cast<int32_t>(0x1),
__E_SelectionOutline = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IndirectCullingPass_SceneViewPass_Unwrapped () const noexcept {
return static_cast<__IndirectCullingPass_SceneViewPass_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingPass_SceneViewPass() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IndirectCullingPass_SceneViewPass(int32_t  value__) noexcept;

/// @brief Field Normal value: I32(0)
static ::MA::Flora::IndirectCullingPass_SceneViewPass const Normal;

/// @brief Field Picking value: I32(1)
static ::MA::Flora::IndirectCullingPass_SceneViewPass const Picking;

/// @brief Field SelectionOutline value: I32(2)
static ::MA::Flora::IndirectCullingPass_SceneViewPass const SelectionOutline;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13198};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingPass_SceneViewPass, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingPass_SceneViewPass) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Rendering.LocalKeyword
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectCullingPass/ChunkCullingPass
struct CORDL_TYPE IndirectCullingPass_ChunkCullingPass {
public:
// Declarations
/// @brief Field Marker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Marker, put=setStaticF_Marker)) ::Unity::Profiling::ProfilerMarker  Marker;

/// @brief Method .ctor, addr 0x1814c2af0, size 0x220, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  cs) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_Marker() ;

static inline void setStaticF_Marker(::Unity::Profiling::ProfilerMarker  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingPass_ChunkCullingPass() ;

// Ctor Parameters [CppParam { name: "ComputeShader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "InitCullingWorkGroupArgsKernel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "InitCullingWorkGroupsKernel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "CullChunksKernel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SanitizeWorkGroupArgsKernel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "UseOcclusionKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }, CppParam { name: "ViewIsLightKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }, CppParam { name: "DebugOcclusion", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }, CppParam { name: "DebugEnabled", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }, CppParam { name: "ViewIsEditorKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }]
constexpr IndirectCullingPass_ChunkCullingPass(::UnityW<::UnityEngine::ComputeShader>  ComputeShader, int32_t  InitCullingWorkGroupArgsKernel, int32_t  InitCullingWorkGroupsKernel, int32_t  CullChunksKernel, int32_t  SanitizeWorkGroupArgsKernel, ::UnityEngine::Rendering::LocalKeyword  UseOcclusionKeyword, ::UnityEngine::Rendering::LocalKeyword  ViewIsLightKeyword, ::UnityEngine::Rendering::LocalKeyword  DebugOcclusion, ::UnityEngine::Rendering::LocalKeyword  DebugEnabled, ::UnityEngine::Rendering::LocalKeyword  ViewIsEditorKeyword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13199};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field ComputeShader, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ComputeShader;

/// @brief Field InitCullingWorkGroupArgsKernel, offset: 0x8, size: 0x4, def value: None
 int32_t  InitCullingWorkGroupArgsKernel;

/// @brief Field InitCullingWorkGroupsKernel, offset: 0xc, size: 0x4, def value: None
 int32_t  InitCullingWorkGroupsKernel;

/// @brief Field CullChunksKernel, offset: 0x10, size: 0x4, def value: None
 int32_t  CullChunksKernel;

/// @brief Field SanitizeWorkGroupArgsKernel, offset: 0x14, size: 0x4, def value: None
 int32_t  SanitizeWorkGroupArgsKernel;

/// @brief Field UseOcclusionKeyword, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  UseOcclusionKeyword;

/// @brief Field ViewIsLightKeyword, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ViewIsLightKeyword;

/// @brief Field DebugOcclusion, offset: 0x48, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  DebugOcclusion;

/// @brief Field DebugEnabled, offset: 0x60, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  DebugEnabled;

/// @brief Field ViewIsEditorKeyword, offset: 0x78, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ViewIsEditorKeyword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, ComputeShader) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, InitCullingWorkGroupArgsKernel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, InitCullingWorkGroupsKernel) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, CullChunksKernel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, SanitizeWorkGroupArgsKernel) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, UseOcclusionKeyword) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, ViewIsLightKeyword) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, DebugOcclusion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, DebugEnabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ChunkCullingPass, ViewIsEditorKeyword) == 0x78, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingPass_ChunkCullingPass) == 0x90, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Rendering.LocalKeyword
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectCullingPass/InstanceCullingPass
struct CORDL_TYPE IndirectCullingPass_InstanceCullingPass {
public:
// Declarations
/// @brief Field Marker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Marker, put=setStaticF_Marker)) ::Unity::Profiling::ProfilerMarker  Marker;

/// @brief Method .ctor, addr 0x1814cdbf0, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  cs) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_Marker() ;

static inline void setStaticF_Marker(::Unity::Profiling::ProfilerMarker  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingPass_InstanceCullingPass() ;

// Ctor Parameters [CppParam { name: "ComputeShader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "CullInstancesKernel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "UseOcclusionKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }, CppParam { name: "ViewIsLightKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }, CppParam { name: "DebugOcclusion", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }, CppParam { name: "DebugEnabled", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }, CppParam { name: "ViewIsEditorKeyword", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }]
constexpr IndirectCullingPass_InstanceCullingPass(::UnityW<::UnityEngine::ComputeShader>  ComputeShader, int32_t  CullInstancesKernel, ::UnityEngine::Rendering::LocalKeyword  UseOcclusionKeyword, ::UnityEngine::Rendering::LocalKeyword  ViewIsLightKeyword, ::UnityEngine::Rendering::LocalKeyword  DebugOcclusion, ::UnityEngine::Rendering::LocalKeyword  DebugEnabled, ::UnityEngine::Rendering::LocalKeyword  ViewIsEditorKeyword) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13200};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field ComputeShader, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ComputeShader;

/// @brief Field CullInstancesKernel, offset: 0x8, size: 0x4, def value: None
 int32_t  CullInstancesKernel;

/// @brief Field UseOcclusionKeyword, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  UseOcclusionKeyword;

/// @brief Field ViewIsLightKeyword, offset: 0x28, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ViewIsLightKeyword;

/// @brief Field DebugOcclusion, offset: 0x40, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  DebugOcclusion;

/// @brief Field DebugEnabled, offset: 0x58, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  DebugEnabled;

/// @brief Field ViewIsEditorKeyword, offset: 0x70, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ViewIsEditorKeyword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingPass_InstanceCullingPass, ComputeShader) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_InstanceCullingPass, CullInstancesKernel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_InstanceCullingPass, UseOcclusionKeyword) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_InstanceCullingPass, ViewIsLightKeyword) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_InstanceCullingPass, DebugOcclusion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_InstanceCullingPass, DebugEnabled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_InstanceCullingPass, ViewIsEditorKeyword) == 0x70, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingPass_InstanceCullingPass) == 0x88, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.Rendering.LocalKeyword
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectCullingPass/ScatterDrawArgsPass
struct CORDL_TYPE IndirectCullingPass_ScatterDrawArgsPass {
public:
// Declarations
/// @brief Field Marker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Marker, put=setStaticF_Marker)) ::Unity::Profiling::ProfilerMarker  Marker;

/// @brief Method .ctor, addr 0x1814d3e10, size 0xe0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  cs) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_Marker() ;

static inline void setStaticF_Marker(::Unity::Profiling::ProfilerMarker  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingPass_ScatterDrawArgsPass() ;

// Ctor Parameters [CppParam { name: "ComputeShader", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "ResetDrawArgsKernel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ScatterDrawArgsKernel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DebugEnabled", ty: "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }]
constexpr IndirectCullingPass_ScatterDrawArgsPass(::UnityW<::UnityEngine::ComputeShader>  ComputeShader, int32_t  ResetDrawArgsKernel, int32_t  ScatterDrawArgsKernel, ::UnityEngine::Rendering::LocalKeyword  DebugEnabled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field ComputeShader, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ComputeShader;

/// @brief Field ResetDrawArgsKernel, offset: 0x8, size: 0x4, def value: None
 int32_t  ResetDrawArgsKernel;

/// @brief Field ScatterDrawArgsKernel, offset: 0xc, size: 0x4, def value: None
 int32_t  ScatterDrawArgsKernel;

/// @brief Field DebugEnabled, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  DebugEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass, ComputeShader) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass, ResetDrawArgsKernel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass, ScatterDrawArgsKernel) == 0xc, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass, DebugEnabled) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.IndirectCullingPass::ChunkCullingPass, MA.Flora.IndirectCullingPass::InstanceCullingPass, MA.Flora.IndirectCullingPass::ScatterDrawArgsPass, System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.ComputeShader
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.IndirectCullingPass
class CORDL_TYPE IndirectCullingPass : public ::System::Object {
public:
// Declarations
using ChunkCullingPass = ::MA::Flora::IndirectCullingPass_ChunkCullingPass;

using InstanceCullingPass = ::MA::Flora::IndirectCullingPass_InstanceCullingPass;

using LocalNameID = ::MA::Flora::IndirectCullingPass_LocalNameID;

using ScatterDrawArgsPass = ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass;

using SceneViewPass = ::MA::Flora::IndirectCullingPass_SceneViewPass;

/// @brief Field CameraVisibilityMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CameraVisibilityMarker, put=setStaticF_CameraVisibilityMarker)) ::Unity::Profiling::ProfilerMarker  CameraVisibilityMarker;

/// @brief Field LightVisibilityMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LightVisibilityMarker, put=setStaticF_LightVisibilityMarker)) ::Unity::Profiling::ProfilerMarker  LightVisibilityMarker;

/// @brief Field PickingVisibilityMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PickingVisibilityMarker, put=setStaticF_PickingVisibilityMarker)) ::Unity::Profiling::ProfilerMarker  PickingVisibilityMarker;

/// @brief Field SelectionOutlineVisibilityMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SelectionOutlineVisibilityMarker, put=setStaticF_SelectionOutlineVisibilityMarker)) ::Unity::Profiling::ProfilerMarker  SelectionOutlineVisibilityMarker;

/// @brief Field ShadersWithOcclusion, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShadersWithOcclusion, put=__cordl_internal_set_ShadersWithOcclusion)) ::ArrayW<::UnityW<::UnityEngine::ComputeShader>>  ShadersWithOcclusion;

/// @brief Field UnknownVisibilityMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UnknownVisibilityMarker, put=setStaticF_UnknownVisibilityMarker)) ::Unity::Profiling::ProfilerMarker  UnknownVisibilityMarker;

/// @brief Field m_ChunkCullingPass, offset 0x10, size 0x90 
 __declspec(property(get=__cordl_internal_get_m_ChunkCullingPass, put=__cordl_internal_set_m_ChunkCullingPass)) ::MA::Flora::IndirectCullingPass_ChunkCullingPass  m_ChunkCullingPass;

/// @brief Field m_InstanceCullingPass, offset 0xa0, size 0x88 
 __declspec(property(get=__cordl_internal_get_m_InstanceCullingPass, put=__cordl_internal_set_m_InstanceCullingPass)) ::MA::Flora::IndirectCullingPass_InstanceCullingPass  m_InstanceCullingPass;

/// @brief Field m_ScatterDrawArgsPass, offset 0x128, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_ScatterDrawArgsPass, put=__cordl_internal_set_m_ScatterDrawArgsPass)) ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass  m_ScatterDrawArgsPass;

/// @brief Method ConfigureDebug, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void ConfigureDebug(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  kernel, ::by_ref<::MA::Flora::IndirectCullingParams>  input, ::UnityEngine::Rendering::LocalKeyword  enableDebugKeyword) ;

/// @brief Method ConfigureEditor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void ConfigureEditor(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  kernel, ::by_ref<::MA::Flora::IndirectCullingParams>  input, ::UnityEngine::Rendering::LocalKeyword  editorViewKeyword) ;

/// @brief Method ConfigureLightView, addr 0x1814cad10, size 0x40, virtual false, abstract: false, final false
static inline void ConfigureLightView(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  kernel, ::by_ref<::MA::Flora::IndirectCullingParams>  input, ::UnityEngine::Rendering::LocalKeyword  lightKeyword) ;

/// @brief Method ConfigureOcclusion, addr 0x1814cad50, size 0x1a0, virtual false, abstract: false, final false
static inline void ConfigureOcclusion(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, int32_t  kernel, ::by_ref<::MA::Flora::IndirectCullingParams>  input, ::UnityEngine::Rendering::LocalKeyword  occlusionKeyword, ::UnityEngine::Rendering::LocalKeyword  debugOcclusionKeyword) ;

/// @brief Method Dispatch, addr 0x1814cbce0, size 0xd0, virtual false, abstract: false, final false
inline void Dispatch(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::IndirectCullingParams>  input) ;

/// @brief Method DispatchCullChunks, addr 0x1814caef0, size 0x660, virtual false, abstract: false, final false
inline void DispatchCullChunks(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::IndirectCullingParams>  input) ;

/// @brief Method DispatchCullInstances, addr 0x1814cb550, size 0x4e0, virtual false, abstract: false, final false
inline void DispatchCullInstances(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::IndirectCullingParams>  input) ;

/// @brief Method DispatchScatterDrawArgs, addr 0x1814cba30, size 0x2b0, virtual false, abstract: false, final false
inline void DispatchScatterDrawArgs(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::IndirectCullingParams>  input) ;

/// @brief Method GetDispatchMarker, addr 0x1814cbdb0, size 0x40, virtual false, abstract: false, final false
static inline ::Unity::Profiling::ProfilerMarker GetDispatchMarker(::UnityEngine::Rendering::BatchCullingViewType  viewType) ;

static inline ::MA::Flora::IndirectCullingPass* New_ctor(::MA::Flora::FloraRuntimeResources*  runtimeResources) ;

/// @brief Method SetViewConstants, addr 0x1814cbdf0, size 0x50, virtual false, abstract: false, final false
static inline void SetViewConstants(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, ::by_ref<::MA::Flora::IndirectCullingParams>  input) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ComputeShader>> const& __cordl_internal_get_ShadersWithOcclusion() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ComputeShader>>& __cordl_internal_get_ShadersWithOcclusion() ;

constexpr ::MA::Flora::IndirectCullingPass_ChunkCullingPass const& __cordl_internal_get_m_ChunkCullingPass() const;

constexpr ::MA::Flora::IndirectCullingPass_ChunkCullingPass& __cordl_internal_get_m_ChunkCullingPass() ;

constexpr ::MA::Flora::IndirectCullingPass_InstanceCullingPass const& __cordl_internal_get_m_InstanceCullingPass() const;

constexpr ::MA::Flora::IndirectCullingPass_InstanceCullingPass& __cordl_internal_get_m_InstanceCullingPass() ;

constexpr ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass const& __cordl_internal_get_m_ScatterDrawArgsPass() const;

constexpr ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass& __cordl_internal_get_m_ScatterDrawArgsPass() ;

constexpr void __cordl_internal_set_ShadersWithOcclusion(::ArrayW<::UnityW<::UnityEngine::ComputeShader>>  value) ;

constexpr void __cordl_internal_set_m_ChunkCullingPass(::MA::Flora::IndirectCullingPass_ChunkCullingPass  value) ;

constexpr void __cordl_internal_set_m_InstanceCullingPass(::MA::Flora::IndirectCullingPass_InstanceCullingPass  value) ;

constexpr void __cordl_internal_set_m_ScatterDrawArgsPass(::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass  value) ;

/// @brief Method .ctor, addr 0x1814cbf40, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::FloraRuntimeResources*  runtimeResources) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_CameraVisibilityMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_LightVisibilityMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_PickingVisibilityMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_SelectionOutlineVisibilityMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UnknownVisibilityMarker() ;

static inline void setStaticF_CameraVisibilityMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_LightVisibilityMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_PickingVisibilityMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_SelectionOutlineVisibilityMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_UnknownVisibilityMarker(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingPass() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IndirectCullingPass", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IndirectCullingPass(IndirectCullingPass && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IndirectCullingPass", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IndirectCullingPass(IndirectCullingPass const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13202};

/// @brief Field m_ChunkCullingPass, offset: 0x10, size: 0x90, def value: None
 ::MA::Flora::IndirectCullingPass_ChunkCullingPass  ___m_ChunkCullingPass;

/// @brief Field m_InstanceCullingPass, offset: 0xa0, size: 0x88, def value: None
 ::MA::Flora::IndirectCullingPass_InstanceCullingPass  ___m_InstanceCullingPass;

/// @brief Field m_ScatterDrawArgsPass, offset: 0x128, size: 0x28, def value: None
 ::MA::Flora::IndirectCullingPass_ScatterDrawArgsPass  ___m_ScatterDrawArgsPass;

/// @brief Field ShadersWithOcclusion, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ComputeShader>>  ___ShadersWithOcclusion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingPass, ___m_ChunkCullingPass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass, ___m_InstanceCullingPass) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass, ___m_ScatterDrawArgsPass) == 0x128, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingPass, ___ShadersWithOcclusion) == 0x150, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingPass) == 0x158, "Size mismatch!");

} // namespace end def MA::Flora
