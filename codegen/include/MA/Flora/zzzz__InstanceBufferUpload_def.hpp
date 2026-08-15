#pragma once
// IWYU pragma private; include "MA/Flora/InstanceBufferUpload.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceBufferUpload)
namespace MA::Flora {
struct BufferCopyCommand;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
struct GraphicsMatrix;
}
namespace MA::Flora {
class InstanceBufferUpload_Compute;
}
namespace MA::Flora {
class InstanceBufferUpload_LocalNameID;
}
namespace MA::Flora {
class InstanceBufferUpload_Profiling;
}
namespace MA::Flora {
struct PackedChunkUploadHeader;
}
namespace MA::Flora {
struct SHUpdatePacket;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Mathematics {
struct uint2;
}
namespace Unity::Mathematics {
struct uint4;
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
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace MA::Flora {
class InstanceBufferUpload;
}
namespace MA::Flora {
class InstanceBufferUpload_Compute;
}
namespace MA::Flora {
class InstanceBufferUpload_LocalNameID;
}
namespace MA::Flora {
class InstanceBufferUpload_Profiling;
}
// Write type traits
MARK_REF_T(::MA::Flora::InstanceBufferUpload*);
MARK_REF_T(::MA::Flora::InstanceBufferUpload_Compute*);
MARK_REF_T(::MA::Flora::InstanceBufferUpload_LocalNameID*);
MARK_REF_T(::MA::Flora::InstanceBufferUpload_Profiling*);
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceBufferUpload*, "MA.Flora", "InstanceBufferUpload");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceBufferUpload_Compute*, "MA.Flora", "InstanceBufferUpload/Compute");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceBufferUpload_LocalNameID*, "MA.Flora", "InstanceBufferUpload/LocalNameID");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceBufferUpload_Profiling*, "MA.Flora", "InstanceBufferUpload/Profiling");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceBufferUpload/Compute
class CORDL_TYPE InstanceBufferUpload_Compute : public ::System::Object {
public:
// Declarations
/// @brief Field CopyComponentsKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CopyComponentsKernel, put=setStaticF_CopyComponentsKernel)) int32_t  CopyComponentsKernel;

/// @brief Field InstanceUploadShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InstanceUploadShader, put=setStaticF_InstanceUploadShader)) ::UnityW<::UnityEngine::ComputeShader>  InstanceUploadShader;

/// @brief Field ScatterInitDynamicTransformsKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterInitDynamicTransformsKernel, put=setStaticF_ScatterInitDynamicTransformsKernel)) int32_t  ScatterInitDynamicTransformsKernel;

/// @brief Field ScatterSHKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterSHKernel, put=setStaticF_ScatterSHKernel)) int32_t  ScatterSHKernel;

/// @brief Field ScatterStaticTransformsKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterStaticTransformsKernel, put=setStaticF_ScatterStaticTransformsKernel)) int32_t  ScatterStaticTransformsKernel;

/// @brief Field ScatterUint2Kernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterUint2Kernel, put=setStaticF_ScatterUint2Kernel)) int32_t  ScatterUint2Kernel;

/// @brief Field ScatterUint4Kernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterUint4Kernel, put=setStaticF_ScatterUint4Kernel)) int32_t  ScatterUint4Kernel;

/// @brief Field ScatterUintKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterUintKernel, put=setStaticF_ScatterUintKernel)) int32_t  ScatterUintKernel;

/// @brief Field ScatterUpdateDynamicTransformsKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterUpdateDynamicTransformsKernel, put=setStaticF_ScatterUpdateDynamicTransformsKernel)) int32_t  ScatterUpdateDynamicTransformsKernel;

/// @brief Field ScatterUpdatePrevTransformsKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterUpdatePrevTransformsKernel, put=setStaticF_ScatterUpdatePrevTransformsKernel)) int32_t  ScatterUpdatePrevTransformsKernel;

static inline int32_t getStaticF_CopyComponentsKernel() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_InstanceUploadShader() ;

static inline int32_t getStaticF_ScatterInitDynamicTransformsKernel() ;

static inline int32_t getStaticF_ScatterSHKernel() ;

static inline int32_t getStaticF_ScatterStaticTransformsKernel() ;

static inline int32_t getStaticF_ScatterUint2Kernel() ;

static inline int32_t getStaticF_ScatterUint4Kernel() ;

static inline int32_t getStaticF_ScatterUintKernel() ;

static inline int32_t getStaticF_ScatterUpdateDynamicTransformsKernel() ;

static inline int32_t getStaticF_ScatterUpdatePrevTransformsKernel() ;

static inline void setStaticF_CopyComponentsKernel(int32_t  value) ;

static inline void setStaticF_InstanceUploadShader(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_ScatterInitDynamicTransformsKernel(int32_t  value) ;

static inline void setStaticF_ScatterSHKernel(int32_t  value) ;

static inline void setStaticF_ScatterStaticTransformsKernel(int32_t  value) ;

static inline void setStaticF_ScatterUint2Kernel(int32_t  value) ;

static inline void setStaticF_ScatterUint4Kernel(int32_t  value) ;

static inline void setStaticF_ScatterUintKernel(int32_t  value) ;

static inline void setStaticF_ScatterUpdateDynamicTransformsKernel(int32_t  value) ;

static inline void setStaticF_ScatterUpdatePrevTransformsKernel(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceBufferUpload_Compute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceBufferUpload_Compute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceBufferUpload_Compute(InstanceBufferUpload_Compute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceBufferUpload_Compute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceBufferUpload_Compute(InstanceBufferUpload_Compute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12921};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceBufferUpload_Compute) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceBufferUpload/LocalNameID
class CORDL_TYPE InstanceBufferUpload_LocalNameID : public ::System::Object {
public:
// Declarations
/// @brief Field _BatchDomainAddresses, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BatchDomainAddresses, put=setStaticF__BatchDomainAddresses)) int32_t  _BatchDomainAddresses;

/// @brief Field _BatchTransformAddresses, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BatchTransformAddresses, put=setStaticF__BatchTransformAddresses)) int32_t  _BatchTransformAddresses;

/// @brief Field _ChunkUploadCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkUploadCount, put=setStaticF__ChunkUploadCount)) int32_t  _ChunkUploadCount;

/// @brief Field _ChunkUploadHeaders, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkUploadHeaders, put=setStaticF__ChunkUploadHeaders)) int32_t  _ChunkUploadHeaders;

/// @brief Field _CommandCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CommandCount, put=setStaticF__CommandCount)) int32_t  _CommandCount;

/// @brief Field _CopyCommands, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CopyCommands, put=setStaticF__CopyCommands)) int32_t  _CopyCommands;

/// @brief Field _DstBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DstBuffer, put=setStaticF__DstBuffer)) int32_t  _DstBuffer;

/// @brief Field _GraphicsMatrices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GraphicsMatrices, put=setStaticF__GraphicsMatrices)) int32_t  _GraphicsMatrices;

/// @brief Field _InstanceBufferRW, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InstanceBufferRW, put=setStaticF__InstanceBufferRW)) int32_t  _InstanceBufferRW;

/// @brief Field _Occlusion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Occlusion, put=setStaticF__Occlusion)) int32_t  _Occlusion;

/// @brief Field _SHPackets, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SHPackets, put=setStaticF__SHPackets)) int32_t  _SHPackets;

/// @brief Field _SrcBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SrcBuffer, put=setStaticF__SrcBuffer)) int32_t  _SrcBuffer;

/// @brief Field _ValuesUint1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ValuesUint1, put=setStaticF__ValuesUint1)) int32_t  _ValuesUint1;

/// @brief Field _ValuesUint2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ValuesUint2, put=setStaticF__ValuesUint2)) int32_t  _ValuesUint2;

/// @brief Field _ValuesUint4, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ValuesUint4, put=setStaticF__ValuesUint4)) int32_t  _ValuesUint4;

static inline int32_t getStaticF__BatchDomainAddresses() ;

static inline int32_t getStaticF__BatchTransformAddresses() ;

static inline int32_t getStaticF__ChunkUploadCount() ;

static inline int32_t getStaticF__ChunkUploadHeaders() ;

static inline int32_t getStaticF__CommandCount() ;

static inline int32_t getStaticF__CopyCommands() ;

static inline int32_t getStaticF__DstBuffer() ;

static inline int32_t getStaticF__GraphicsMatrices() ;

static inline int32_t getStaticF__InstanceBufferRW() ;

static inline int32_t getStaticF__Occlusion() ;

static inline int32_t getStaticF__SHPackets() ;

static inline int32_t getStaticF__SrcBuffer() ;

static inline int32_t getStaticF__ValuesUint1() ;

static inline int32_t getStaticF__ValuesUint2() ;

static inline int32_t getStaticF__ValuesUint4() ;

static inline void setStaticF__BatchDomainAddresses(int32_t  value) ;

static inline void setStaticF__BatchTransformAddresses(int32_t  value) ;

static inline void setStaticF__ChunkUploadCount(int32_t  value) ;

static inline void setStaticF__ChunkUploadHeaders(int32_t  value) ;

static inline void setStaticF__CommandCount(int32_t  value) ;

static inline void setStaticF__CopyCommands(int32_t  value) ;

static inline void setStaticF__DstBuffer(int32_t  value) ;

static inline void setStaticF__GraphicsMatrices(int32_t  value) ;

static inline void setStaticF__InstanceBufferRW(int32_t  value) ;

static inline void setStaticF__Occlusion(int32_t  value) ;

static inline void setStaticF__SHPackets(int32_t  value) ;

static inline void setStaticF__SrcBuffer(int32_t  value) ;

static inline void setStaticF__ValuesUint1(int32_t  value) ;

static inline void setStaticF__ValuesUint2(int32_t  value) ;

static inline void setStaticF__ValuesUint4(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceBufferUpload_LocalNameID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceBufferUpload_LocalNameID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceBufferUpload_LocalNameID(InstanceBufferUpload_LocalNameID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceBufferUpload_LocalNameID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceBufferUpload_LocalNameID(InstanceBufferUpload_LocalNameID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12922};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceBufferUpload_LocalNameID) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceBufferUpload/Profiling
class CORDL_TYPE InstanceBufferUpload_Profiling : public ::System::Object {
public:
// Declarations
/// @brief Field Copy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Copy, put=setStaticF_Copy)) ::Unity::Profiling::ProfilerMarker  Copy;

/// @brief Field ScatterInitDynamicTransforms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScatterInitDynamicTransforms, put=setStaticF_ScatterInitDynamicTransforms)) ::Unity::Profiling::ProfilerMarker  ScatterInitDynamicTransforms;

/// @brief Field ScatterSH, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScatterSH, put=setStaticF_ScatterSH)) ::Unity::Profiling::ProfilerMarker  ScatterSH;

/// @brief Field ScatterStaticTransforms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScatterStaticTransforms, put=setStaticF_ScatterStaticTransforms)) ::Unity::Profiling::ProfilerMarker  ScatterStaticTransforms;

/// @brief Field ScatterUint, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScatterUint, put=setStaticF_ScatterUint)) ::Unity::Profiling::ProfilerMarker  ScatterUint;

/// @brief Field ScatterUint2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScatterUint2, put=setStaticF_ScatterUint2)) ::Unity::Profiling::ProfilerMarker  ScatterUint2;

/// @brief Field ScatterUint4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScatterUint4, put=setStaticF_ScatterUint4)) ::Unity::Profiling::ProfilerMarker  ScatterUint4;

/// @brief Field ScatterUpdateDynamicTransforms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScatterUpdateDynamicTransforms, put=setStaticF_ScatterUpdateDynamicTransforms)) ::Unity::Profiling::ProfilerMarker  ScatterUpdateDynamicTransforms;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_Copy() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScatterInitDynamicTransforms() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScatterSH() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScatterStaticTransforms() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScatterUint() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScatterUint2() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScatterUint4() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScatterUpdateDynamicTransforms() ;

static inline void setStaticF_Copy(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ScatterInitDynamicTransforms(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ScatterSH(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ScatterStaticTransforms(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ScatterUint(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ScatterUint2(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ScatterUint4(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ScatterUpdateDynamicTransforms(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceBufferUpload_Profiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceBufferUpload_Profiling", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceBufferUpload_Profiling(InstanceBufferUpload_Profiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceBufferUpload_Profiling", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceBufferUpload_Profiling(InstanceBufferUpload_Profiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceBufferUpload_Profiling) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceBufferUpload
class CORDL_TYPE InstanceBufferUpload : public ::System::Object {
public:
// Declarations
using Compute = ::MA::Flora::InstanceBufferUpload_Compute;

using LocalNameID = ::MA::Flora::InstanceBufferUpload_LocalNameID;

using Profiling = ::MA::Flora::InstanceBufferUpload_Profiling;

/// @brief Method CopyComponents, addr 0x18145bae0, size 0x1b0, virtual false, abstract: false, final false
static inline void CopyComponents(::UnityEngine::GraphicsBuffer*  srcBuffer, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::BufferCopyCommand>  commands) ;

/// @brief Method Initialize, addr 0x18145bc90, size 0x250, virtual false, abstract: false, final false
static inline void Initialize(::MA::Flora::FloraRuntimeResources*  runtimeResources) ;

/// @brief Method ScatterInitDynamicTransforms, addr 0x18145bee0, size 0x270, virtual false, abstract: false, final false
static inline void ScatterInitDynamicTransforms(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  transformAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  matrices) ;

/// @brief Method ScatterSH, addr 0x18145c150, size 0x2e0, virtual false, abstract: false, final false
static inline void ScatterSH(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  batchAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::SHUpdatePacket>  shPackets, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  occlusion) ;

/// @brief Method ScatterStaticTransforms, addr 0x18145c430, size 0x260, virtual false, abstract: false, final false
static inline void ScatterStaticTransforms(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  transformAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  matrices) ;

/// @brief Method ScatterUint, addr 0x18145cb70, size 0x270, virtual false, abstract: false, final false
static inline void ScatterUint(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  batchAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<uint32_t>  values) ;

/// @brief Method ScatterUint2, addr 0x18145c690, size 0x270, virtual false, abstract: false, final false
static inline void ScatterUint2(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  batchAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint2>  values) ;

/// @brief Method ScatterUint4, addr 0x18145c900, size 0x270, virtual false, abstract: false, final false
static inline void ScatterUint4(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  batchAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::uint4>  values) ;

/// @brief Method ScatterUpdateDynamicTransforms, addr 0x18145cde0, size 0x270, virtual false, abstract: false, final false
static inline void ScatterUpdateDynamicTransforms(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  instanceBuffer, ::UnityEngine::GraphicsBuffer*  transformAddressBuffer, ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  chunkHeaders, ::Unity::Collections::NativeArray_1<::MA::Flora::GraphicsMatrix>  matrices) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceBufferUpload() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceBufferUpload", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceBufferUpload(InstanceBufferUpload && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceBufferUpload", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceBufferUpload(InstanceBufferUpload const& ) = delete;

/// @brief Field MaxThreadGroupsPerCopyDispatch offset 0xffffffff size 0x4
static constexpr int32_t  MaxThreadGroupsPerCopyDispatch{static_cast<int32_t>(0xffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12924};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::InstanceBufferUpload) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
