#pragma once
// IWYU pragma private; include "MA/Flora/CullingGridCompute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CullingGridCompute)
namespace MA::Flora {
class CullingGridCompute_Compute;
}
namespace MA::Flora {
class CullingGridCompute_LocalNameID;
}
namespace MA::Flora {
class CullingGridCompute_Profiling;
}
namespace MA::Flora {
struct CullingGridCompute_UpdateChunkAttributesParams;
}
namespace MA::Flora {
struct CullingGridCompute_UpdateChunkFlagsParams;
}
namespace MA::Flora {
struct CullingGridCompute_UpdateChunkInfoParams;
}
namespace MA::Flora {
struct CullingGridCompute_UpdateIndirectPagesParams;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace MA::Flora {
class CullingGridCompute;
}
namespace MA::Flora {
class CullingGridCompute_Compute;
}
namespace MA::Flora {
class CullingGridCompute_LocalNameID;
}
namespace MA::Flora {
class CullingGridCompute_Profiling;
}
namespace MA::Flora {
struct CullingGridCompute_UpdateChunkAttributesParams;
}
namespace MA::Flora {
struct CullingGridCompute_UpdateChunkFlagsParams;
}
namespace MA::Flora {
struct CullingGridCompute_UpdateChunkInfoParams;
}
namespace MA::Flora {
struct CullingGridCompute_UpdateIndirectPagesParams;
}
// Write type traits
MARK_REF_T(::MA::Flora::CullingGridCompute*);
MARK_REF_T(::MA::Flora::CullingGridCompute_Compute*);
MARK_REF_T(::MA::Flora::CullingGridCompute_LocalNameID*);
MARK_REF_T(::MA::Flora::CullingGridCompute_Profiling*);
MARK_VAL_T(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams);
MARK_VAL_T(::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams);
MARK_VAL_T(::MA::Flora::CullingGridCompute_UpdateChunkInfoParams);
MARK_VAL_T(::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams);
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGridCompute*, "MA.Flora", "CullingGridCompute");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGridCompute_Compute*, "MA.Flora", "CullingGridCompute/Compute");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGridCompute_LocalNameID*, "MA.Flora", "CullingGridCompute/LocalNameID");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGridCompute_Profiling*, "MA.Flora", "CullingGridCompute/Profiling");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, "MA.Flora", "CullingGridCompute/UpdateChunkAttributesParams");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams, "MA.Flora", "CullingGridCompute/UpdateChunkFlagsParams");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGridCompute_UpdateChunkInfoParams, "MA.Flora", "CullingGridCompute/UpdateChunkInfoParams");
DEFINE_IL2CPP_CLASS(::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams, "MA.Flora", "CullingGridCompute/UpdateIndirectPagesParams");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingGridCompute/Compute
class CORDL_TYPE CullingGridCompute_Compute : public ::System::Object {
public:
// Declarations
/// @brief Field CullingGridCS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CullingGridCS, put=setStaticF_CullingGridCS)) ::UnityW<::UnityEngine::ComputeShader>  CullingGridCS;

/// @brief Field UpdateChunkAttributesKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UpdateChunkAttributesKernel, put=setStaticF_UpdateChunkAttributesKernel)) int32_t  UpdateChunkAttributesKernel;

/// @brief Field UpdateChunkFlagsKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UpdateChunkFlagsKernel, put=setStaticF_UpdateChunkFlagsKernel)) int32_t  UpdateChunkFlagsKernel;

/// @brief Field UpdateChunkInfosKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UpdateChunkInfosKernel, put=setStaticF_UpdateChunkInfosKernel)) int32_t  UpdateChunkInfosKernel;

/// @brief Field UpdateIndirectPagesKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UpdateIndirectPagesKernel, put=setStaticF_UpdateIndirectPagesKernel)) int32_t  UpdateIndirectPagesKernel;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_CullingGridCS() ;

static inline int32_t getStaticF_UpdateChunkAttributesKernel() ;

static inline int32_t getStaticF_UpdateChunkFlagsKernel() ;

static inline int32_t getStaticF_UpdateChunkInfosKernel() ;

static inline int32_t getStaticF_UpdateIndirectPagesKernel() ;

static inline void setStaticF_CullingGridCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_UpdateChunkAttributesKernel(int32_t  value) ;

static inline void setStaticF_UpdateChunkFlagsKernel(int32_t  value) ;

static inline void setStaticF_UpdateChunkInfosKernel(int32_t  value) ;

static inline void setStaticF_UpdateIndirectPagesKernel(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingGridCompute_Compute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingGridCompute_Compute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingGridCompute_Compute(CullingGridCompute_Compute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingGridCompute_Compute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingGridCompute_Compute(CullingGridCompute_Compute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13129};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::CullingGridCompute_Compute) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingGridCompute/LocalNameID
class CORDL_TYPE CullingGridCompute_LocalNameID : public ::System::Object {
public:
// Declarations
/// @brief Field _ArchetypeData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ArchetypeData, put=setStaticF__ArchetypeData)) int32_t  _ArchetypeData;

/// @brief Field _AttributeCellChunkIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AttributeCellChunkIndices, put=setStaticF__AttributeCellChunkIndices)) int32_t  _AttributeCellChunkIndices;

/// @brief Field _BatchCullingAddresses, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BatchCullingAddresses, put=setStaticF__BatchCullingAddresses)) int32_t  _BatchCullingAddresses;

/// @brief Field _BlockData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlockData, put=setStaticF__BlockData)) int32_t  _BlockData;

/// @brief Field _ChunkAttributeUpdateCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkAttributeUpdateCount, put=setStaticF__ChunkAttributeUpdateCount)) int32_t  _ChunkAttributeUpdateCount;

/// @brief Field _ChunkFlagIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkFlagIndices, put=setStaticF__ChunkFlagIndices)) int32_t  _ChunkFlagIndices;

/// @brief Field _ChunkFlagUpdates, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkFlagUpdates, put=setStaticF__ChunkFlagUpdates)) int32_t  _ChunkFlagUpdates;

/// @brief Field _ChunkFlagsRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkFlagsRW, put=setStaticF__ChunkFlagsRW)) int32_t  _ChunkFlagsRW;

/// @brief Field _ChunkFlagsUpdateCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkFlagsUpdateCount, put=setStaticF__ChunkFlagsUpdateCount)) int32_t  _ChunkFlagsUpdateCount;

/// @brief Field _ChunkPacketCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkPacketCount, put=setStaticF__ChunkPacketCount)) int32_t  _ChunkPacketCount;

/// @brief Field _ChunkPackets, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkPackets, put=setStaticF__ChunkPackets)) int32_t  _ChunkPackets;

/// @brief Field _CullingChunkAttributes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkAttributes, put=setStaticF__CullingChunkAttributes)) int32_t  _CullingChunkAttributes;

/// @brief Field _CullingChunkAttributesRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkAttributesRW, put=setStaticF__CullingChunkAttributesRW)) int32_t  _CullingChunkAttributesRW;

/// @brief Field _CullingChunkBatches, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkBatches, put=setStaticF__CullingChunkBatches)) int32_t  _CullingChunkBatches;

/// @brief Field _CullingChunkBatchesRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkBatchesRW, put=setStaticF__CullingChunkBatchesRW)) int32_t  _CullingChunkBatchesRW;

/// @brief Field _CullingChunkCells, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkCells, put=setStaticF__CullingChunkCells)) int32_t  _CullingChunkCells;

/// @brief Field _CullingChunkCellsRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkCellsRW, put=setStaticF__CullingChunkCellsRW)) int32_t  _CullingChunkCellsRW;

/// @brief Field _CullingChunkFlagChannelCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkFlagChannelCount, put=setStaticF__CullingChunkFlagChannelCount)) int32_t  _CullingChunkFlagChannelCount;

/// @brief Field _CullingChunkInfos, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkInfos, put=setStaticF__CullingChunkInfos)) int32_t  _CullingChunkInfos;

/// @brief Field _CullingChunkInfosRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkInfosRW, put=setStaticF__CullingChunkInfosRW)) int32_t  _CullingChunkInfosRW;

/// @brief Field _CullingIndirectOffsets, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingIndirectOffsets, put=setStaticF__CullingIndirectOffsets)) int32_t  _CullingIndirectOffsets;

/// @brief Field _IndirectInstanceOffsetsRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndirectInstanceOffsetsRW, put=setStaticF__IndirectInstanceOffsetsRW)) int32_t  _IndirectInstanceOffsetsRW;

/// @brief Field _IndirectOffsetUpdates, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndirectOffsetUpdates, put=setStaticF__IndirectOffsetUpdates)) int32_t  _IndirectOffsetUpdates;

/// @brief Field _IndirectPageUpdateCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndirectPageUpdateCount, put=setStaticF__IndirectPageUpdateCount)) int32_t  _IndirectPageUpdateCount;

/// @brief Field _IndirectPageUpdates, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndirectPageUpdates, put=setStaticF__IndirectPageUpdates)) int32_t  _IndirectPageUpdates;

/// @brief Field _TemplateData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TemplateData, put=setStaticF__TemplateData)) int32_t  _TemplateData;

static inline int32_t getStaticF__ArchetypeData() ;

static inline int32_t getStaticF__AttributeCellChunkIndices() ;

static inline int32_t getStaticF__BatchCullingAddresses() ;

static inline int32_t getStaticF__BlockData() ;

static inline int32_t getStaticF__ChunkAttributeUpdateCount() ;

static inline int32_t getStaticF__ChunkFlagIndices() ;

static inline int32_t getStaticF__ChunkFlagUpdates() ;

static inline int32_t getStaticF__ChunkFlagsRW() ;

static inline int32_t getStaticF__ChunkFlagsUpdateCount() ;

static inline int32_t getStaticF__ChunkPacketCount() ;

static inline int32_t getStaticF__ChunkPackets() ;

static inline int32_t getStaticF__CullingChunkAttributes() ;

static inline int32_t getStaticF__CullingChunkAttributesRW() ;

static inline int32_t getStaticF__CullingChunkBatches() ;

static inline int32_t getStaticF__CullingChunkBatchesRW() ;

static inline int32_t getStaticF__CullingChunkCells() ;

static inline int32_t getStaticF__CullingChunkCellsRW() ;

static inline int32_t getStaticF__CullingChunkFlagChannelCount() ;

static inline int32_t getStaticF__CullingChunkInfos() ;

static inline int32_t getStaticF__CullingChunkInfosRW() ;

static inline int32_t getStaticF__CullingIndirectOffsets() ;

static inline int32_t getStaticF__IndirectInstanceOffsetsRW() ;

static inline int32_t getStaticF__IndirectOffsetUpdates() ;

static inline int32_t getStaticF__IndirectPageUpdateCount() ;

static inline int32_t getStaticF__IndirectPageUpdates() ;

static inline int32_t getStaticF__TemplateData() ;

static inline void setStaticF__ArchetypeData(int32_t  value) ;

static inline void setStaticF__AttributeCellChunkIndices(int32_t  value) ;

static inline void setStaticF__BatchCullingAddresses(int32_t  value) ;

static inline void setStaticF__BlockData(int32_t  value) ;

static inline void setStaticF__ChunkAttributeUpdateCount(int32_t  value) ;

static inline void setStaticF__ChunkFlagIndices(int32_t  value) ;

static inline void setStaticF__ChunkFlagUpdates(int32_t  value) ;

static inline void setStaticF__ChunkFlagsRW(int32_t  value) ;

static inline void setStaticF__ChunkFlagsUpdateCount(int32_t  value) ;

static inline void setStaticF__ChunkPacketCount(int32_t  value) ;

static inline void setStaticF__ChunkPackets(int32_t  value) ;

static inline void setStaticF__CullingChunkAttributes(int32_t  value) ;

static inline void setStaticF__CullingChunkAttributesRW(int32_t  value) ;

static inline void setStaticF__CullingChunkBatches(int32_t  value) ;

static inline void setStaticF__CullingChunkBatchesRW(int32_t  value) ;

static inline void setStaticF__CullingChunkCells(int32_t  value) ;

static inline void setStaticF__CullingChunkCellsRW(int32_t  value) ;

static inline void setStaticF__CullingChunkFlagChannelCount(int32_t  value) ;

static inline void setStaticF__CullingChunkInfos(int32_t  value) ;

static inline void setStaticF__CullingChunkInfosRW(int32_t  value) ;

static inline void setStaticF__CullingIndirectOffsets(int32_t  value) ;

static inline void setStaticF__IndirectInstanceOffsetsRW(int32_t  value) ;

static inline void setStaticF__IndirectOffsetUpdates(int32_t  value) ;

static inline void setStaticF__IndirectPageUpdateCount(int32_t  value) ;

static inline void setStaticF__IndirectPageUpdates(int32_t  value) ;

static inline void setStaticF__TemplateData(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingGridCompute_LocalNameID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingGridCompute_LocalNameID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingGridCompute_LocalNameID(CullingGridCompute_LocalNameID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingGridCompute_LocalNameID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingGridCompute_LocalNameID(CullingGridCompute_LocalNameID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13130};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::CullingGridCompute_LocalNameID) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingGridCompute/Profiling
class CORDL_TYPE CullingGridCompute_Profiling : public ::System::Object {
public:
// Declarations
/// @brief Field ScatterIndirectPages, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScatterIndirectPages, put=setStaticF_ScatterIndirectPages)) ::Unity::Profiling::ProfilerMarker  ScatterIndirectPages;

/// @brief Field UpdateChunkAttributes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateChunkAttributes, put=setStaticF_UpdateChunkAttributes)) ::Unity::Profiling::ProfilerMarker  UpdateChunkAttributes;

/// @brief Field UpdateChunks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateChunks, put=setStaticF_UpdateChunks)) ::Unity::Profiling::ProfilerMarker  UpdateChunks;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScatterIndirectPages() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UpdateChunkAttributes() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UpdateChunks() ;

static inline void setStaticF_ScatterIndirectPages(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_UpdateChunkAttributes(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_UpdateChunks(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingGridCompute_Profiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingGridCompute_Profiling", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingGridCompute_Profiling(CullingGridCompute_Profiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingGridCompute_Profiling", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingGridCompute_Profiling(CullingGridCompute_Profiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13131};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::CullingGridCompute_Profiling) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGridCompute/UpdateChunkInfoParams
struct CORDL_TYPE CullingGridCompute_UpdateChunkInfoParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CullingGridCompute_UpdateChunkInfoParams() ;

// Ctor Parameters [CppParam { name: "PacketCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ChunkPacketBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ChunkCellBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ChunkInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ChunkBatchBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }]
constexpr CullingGridCompute_UpdateChunkInfoParams(int32_t  PacketCount, ::UnityEngine::GraphicsBuffer*  ChunkPacketBuffer, ::UnityEngine::GraphicsBuffer*  ChunkCellBuffer, ::UnityEngine::GraphicsBuffer*  ChunkInfoBuffer, ::UnityEngine::GraphicsBuffer*  ChunkBatchBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13132};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field PacketCount, offset: 0x0, size: 0x4, def value: None
 int32_t  PacketCount;

/// @brief Field ChunkPacketBuffer, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkPacketBuffer;

/// @brief Field ChunkCellBuffer, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkCellBuffer;

/// @brief Field ChunkInfoBuffer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkInfoBuffer;

/// @brief Field ChunkBatchBuffer, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkBatchBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkInfoParams, PacketCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkInfoParams, ChunkPacketBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkInfoParams, ChunkCellBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkInfoParams, ChunkInfoBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkInfoParams, ChunkBatchBuffer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGridCompute_UpdateChunkInfoParams) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGridCompute/UpdateChunkFlagsParams
struct CORDL_TYPE CullingGridCompute_UpdateChunkFlagsParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CullingGridCompute_UpdateChunkFlagsParams() ;

// Ctor Parameters [CppParam { name: "UpdateCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ChannelCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ChunkFlagUpdateBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ChunkFlagIndexBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ChunkFlagBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }]
constexpr CullingGridCompute_UpdateChunkFlagsParams(int32_t  UpdateCount, int32_t  ChannelCount, ::UnityEngine::GraphicsBuffer*  ChunkFlagUpdateBuffer, ::UnityEngine::GraphicsBuffer*  ChunkFlagIndexBuffer, ::UnityEngine::GraphicsBuffer*  ChunkFlagBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13133};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field UpdateCount, offset: 0x0, size: 0x4, def value: None
 int32_t  UpdateCount;

/// @brief Field ChannelCount, offset: 0x4, size: 0x4, def value: None
 int32_t  ChannelCount;

/// @brief Field ChunkFlagUpdateBuffer, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkFlagUpdateBuffer;

/// @brief Field ChunkFlagIndexBuffer, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkFlagIndexBuffer;

/// @brief Field ChunkFlagBuffer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkFlagBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams, UpdateCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams, ChannelCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams, ChunkFlagUpdateBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams, ChunkFlagIndexBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams, ChunkFlagBuffer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGridCompute/UpdateIndirectPagesParams
struct CORDL_TYPE CullingGridCompute_UpdateIndirectPagesParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CullingGridCompute_UpdateIndirectPagesParams() ;

// Ctor Parameters [CppParam { name: "IndirectPageUpdateCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "IndirectPageUpdateBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "IndirectOffsetUpdateBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "IndirectOffsetBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }]
constexpr CullingGridCompute_UpdateIndirectPagesParams(int32_t  IndirectPageUpdateCount, ::UnityEngine::GraphicsBuffer*  IndirectPageUpdateBuffer, ::UnityEngine::GraphicsBuffer*  IndirectOffsetUpdateBuffer, ::UnityEngine::GraphicsBuffer*  IndirectOffsetBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13134};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field IndirectPageUpdateCount, offset: 0x0, size: 0x4, def value: None
 int32_t  IndirectPageUpdateCount;

/// @brief Field IndirectPageUpdateBuffer, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  IndirectPageUpdateBuffer;

/// @brief Field IndirectOffsetUpdateBuffer, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  IndirectOffsetUpdateBuffer;

/// @brief Field IndirectOffsetBuffer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  IndirectOffsetBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams, IndirectPageUpdateCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams, IndirectPageUpdateBuffer) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams, IndirectOffsetUpdateBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams, IndirectOffsetBuffer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams) == 0x20, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.int2
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.CullingGridCompute/UpdateChunkAttributesParams
struct CORDL_TYPE CullingGridCompute_UpdateChunkAttributesParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CullingGridCompute_UpdateChunkAttributesParams() ;

// Ctor Parameters [CppParam { name: "AttributeUpdateCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "CellChunkIndices", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>", modifiers: "", def_value: None }, CppParam { name: "InstanceBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "BatchDomainAddressBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ArchetypeDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "TemplateDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "BlockDataBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ChunkBatchBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ChunkInfoBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "ChunkAttributeBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }, CppParam { name: "IndirectOffsetBuffer", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None }]
constexpr CullingGridCompute_UpdateChunkAttributesParams(int32_t  AttributeUpdateCount, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>  CellChunkIndices, ::UnityEngine::GraphicsBuffer*  InstanceBuffer, ::UnityEngine::GraphicsBuffer*  BatchDomainAddressBuffer, ::UnityEngine::GraphicsBuffer*  ArchetypeDataBuffer, ::UnityEngine::GraphicsBuffer*  TemplateDataBuffer, ::UnityEngine::GraphicsBuffer*  BlockDataBuffer, ::UnityEngine::GraphicsBuffer*  ChunkBatchBuffer, ::UnityEngine::GraphicsBuffer*  ChunkInfoBuffer, ::UnityEngine::GraphicsBuffer*  ChunkAttributeBuffer, ::UnityEngine::GraphicsBuffer*  IndirectOffsetBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13135};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field AttributeUpdateCount, offset: 0x0, size: 0x4, def value: None
 int32_t  AttributeUpdateCount;

/// @brief Field CellChunkIndices, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::Unity::Mathematics::int2>  CellChunkIndices;

/// @brief Field InstanceBuffer, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  InstanceBuffer;

/// @brief Field BatchDomainAddressBuffer, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  BatchDomainAddressBuffer;

/// @brief Field ArchetypeDataBuffer, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ArchetypeDataBuffer;

/// @brief Field TemplateDataBuffer, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  TemplateDataBuffer;

/// @brief Field BlockDataBuffer, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  BlockDataBuffer;

/// @brief Field ChunkBatchBuffer, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkBatchBuffer;

/// @brief Field ChunkInfoBuffer, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkInfoBuffer;

/// @brief Field ChunkAttributeBuffer, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ChunkAttributeBuffer;

/// @brief Field IndirectOffsetBuffer, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  IndirectOffsetBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, AttributeUpdateCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, CellChunkIndices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, InstanceBuffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, BatchDomainAddressBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, ArchetypeDataBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, TemplateDataBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, BlockDataBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, ChunkBatchBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, ChunkInfoBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, ChunkAttributeBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams, IndirectOffsetBuffer) == 0x58, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.CullingGridCompute
class CORDL_TYPE CullingGridCompute : public ::System::Object {
public:
// Declarations
using Compute = ::MA::Flora::CullingGridCompute_Compute;

using LocalNameID = ::MA::Flora::CullingGridCompute_LocalNameID;

using Profiling = ::MA::Flora::CullingGridCompute_Profiling;

using UpdateChunkAttributesParams = ::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams;

using UpdateChunkFlagsParams = ::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams;

using UpdateChunkInfoParams = ::MA::Flora::CullingGridCompute_UpdateChunkInfoParams;

using UpdateIndirectPagesParams = ::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams;

/// @brief Method DispatchScatterIndirectPages, addr 0x1814b1630, size 0x1b0, virtual false, abstract: false, final false
static inline void DispatchScatterIndirectPages(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::CullingGridCompute_UpdateIndirectPagesParams>  input) ;

/// @brief Method DispatchUpdateChunkAttributes, addr 0x1814b17e0, size 0x320, virtual false, abstract: false, final false
static inline void DispatchUpdateChunkAttributes(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkAttributesParams>  input) ;

/// @brief Method DispatchUpdateChunkFlags, addr 0x1814b1b00, size 0x1e0, virtual false, abstract: false, final false
static inline void DispatchUpdateChunkFlags(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkFlagsParams>  input) ;

/// @brief Method DispatchUpdateChunkInfo, addr 0x1814b1ce0, size 0x1e0, virtual false, abstract: false, final false
static inline void DispatchUpdateChunkInfo(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::MA::Flora::CullingGridCompute_UpdateChunkInfoParams>  input) ;

/// @brief Method Initialize, addr 0x1814b1ec0, size 0x120, virtual false, abstract: false, final false
static inline void Initialize(::MA::Flora::FloraRuntimeResources*  resources) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CullingGridCompute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CullingGridCompute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CullingGridCompute(CullingGridCompute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CullingGridCompute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CullingGridCompute(CullingGridCompute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13136};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::CullingGridCompute) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
