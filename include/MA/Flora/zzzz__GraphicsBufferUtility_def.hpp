#pragma once
// IWYU pragma private; include "MA/Flora/GraphicsBufferUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBufferUtility)
namespace MA::Flora {
class Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate;
}
namespace MA::Flora {
class Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate;
}
namespace MA::Flora {
class Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
class GraphicsBufferUtility_Compute;
}
namespace MA::Flora {
class GraphicsBufferUtility_Delegates;
}
namespace MA::Flora {
class GraphicsBufferUtility_LocalNameID;
}
namespace MA::Flora {
class GraphicsBufferUtility_Profiling;
}
namespace MA::Flora {
struct GraphicsBufferUtility_StructuredBufferSize;
}
namespace MA::Flora {
class GraphicsBufferUtility___InteropDelegates;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ComputeCommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace MA::Flora {
struct GraphicsBufferUtility_StructuredBufferSize;
}
namespace MA::Flora {
class Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate;
}
namespace MA::Flora {
class Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate;
}
namespace MA::Flora {
class Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate;
}
namespace MA::Flora {
class GraphicsBufferUtility;
}
namespace MA::Flora {
class GraphicsBufferUtility_Compute;
}
namespace MA::Flora {
class GraphicsBufferUtility_Delegates;
}
namespace MA::Flora {
class GraphicsBufferUtility_LocalNameID;
}
namespace MA::Flora {
class GraphicsBufferUtility_Profiling;
}
namespace MA::Flora {
class GraphicsBufferUtility___InteropDelegates;
}
// Write type traits
MARK_VAL_T(::MA::Flora::GraphicsBufferUtility_StructuredBufferSize);
MARK_REF_T(::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*);
MARK_REF_T(::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*);
MARK_REF_T(::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*);
MARK_REF_T(::MA::Flora::GraphicsBufferUtility*);
MARK_REF_T(::MA::Flora::GraphicsBufferUtility_Compute*);
MARK_REF_T(::MA::Flora::GraphicsBufferUtility_Delegates*);
MARK_REF_T(::MA::Flora::GraphicsBufferUtility_LocalNameID*);
MARK_REF_T(::MA::Flora::GraphicsBufferUtility_Profiling*);
MARK_REF_T(::MA::Flora::GraphicsBufferUtility___InteropDelegates*);
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferUtility_StructuredBufferSize, "MA.Flora", "GraphicsBufferUtility/StructuredBufferSize");
DEFINE_IL2CPP_CLASS(::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*, "MA.Flora", "GraphicsBufferUtility/Delegates/CommandBufferSetDataBufferDataGbDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*, "MA.Flora", "GraphicsBufferUtility/Delegates/GetWrappedCommandBufferDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*, "MA.Flora", "GraphicsBufferUtility/Delegates/GraphicsBufferSetDataDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferUtility*, "MA.Flora", "GraphicsBufferUtility");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferUtility_Compute*, "MA.Flora", "GraphicsBufferUtility/Compute");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferUtility_Delegates*, "MA.Flora", "GraphicsBufferUtility/Delegates");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferUtility_LocalNameID*, "MA.Flora", "GraphicsBufferUtility/LocalNameID");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferUtility_Profiling*, "MA.Flora", "GraphicsBufferUtility/Profiling");
DEFINE_IL2CPP_CLASS(::MA::Flora::GraphicsBufferUtility___InteropDelegates*, "MA.Flora", "GraphicsBufferUtility/__InteropDelegates");
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferUtility/Profiling
class CORDL_TYPE GraphicsBufferUtility_Profiling : public ::System::Object {
public:
// Declarations
/// @brief Field MemcpyMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MemcpyMarker, put=setStaticF_MemcpyMarker)) ::Unity::Profiling::ProfilerMarker  MemcpyMarker;

/// @brief Field MemsetMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MemsetMarker, put=setStaticF_MemsetMarker)) ::Unity::Profiling::ProfilerMarker  MemsetMarker;

/// @brief Field ScatterMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScatterMarker, put=setStaticF_ScatterMarker)) ::Unity::Profiling::ProfilerMarker  ScatterMarker;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MemcpyMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_MemsetMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_ScatterMarker() ;

static inline void setStaticF_MemcpyMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_MemsetMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_ScatterMarker(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferUtility_Profiling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility_Profiling", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBufferUtility_Profiling(GraphicsBufferUtility_Profiling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility_Profiling", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBufferUtility_Profiling(GraphicsBufferUtility_Profiling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13337};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::GraphicsBufferUtility_Profiling) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferUtility/Compute
class CORDL_TYPE GraphicsBufferUtility_Compute : public ::System::Object {
public:
// Declarations
/// @brief Field CommandBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CommandBuffer, put=setStaticF_CommandBuffer)) ::UnityEngine::Rendering::CommandBuffer*  CommandBuffer;

/// @brief Field MemcpyKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MemcpyKernel, put=setStaticF_MemcpyKernel)) int32_t  MemcpyKernel;

/// @brief Field MemsetKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MemsetKernel, put=setStaticF_MemsetKernel)) int32_t  MemsetKernel;

/// @brief Field RawUInt4AlignedKeyword, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_RawUInt4AlignedKeyword, put=setStaticF_RawUInt4AlignedKeyword)) ::UnityEngine::Rendering::LocalKeyword  RawUInt4AlignedKeyword;

/// @brief Field RawUIntKeyword, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_RawUIntKeyword, put=setStaticF_RawUIntKeyword)) ::UnityEngine::Rendering::LocalKeyword  RawUIntKeyword;

/// @brief Field ScatterKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterKernel, put=setStaticF_ScatterKernel)) int32_t  ScatterKernel;

/// @brief Field Shader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Shader, put=setStaticF_Shader)) ::UnityW<::UnityEngine::ComputeShader>  Shader;

/// @brief Field StructuredUInt1Keyword, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_StructuredUInt1Keyword, put=setStaticF_StructuredUInt1Keyword)) ::UnityEngine::Rendering::LocalKeyword  StructuredUInt1Keyword;

/// @brief Field StructuredUInt2Keyword, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_StructuredUInt2Keyword, put=setStaticF_StructuredUInt2Keyword)) ::UnityEngine::Rendering::LocalKeyword  StructuredUInt2Keyword;

/// @brief Field StructuredUInt4Keyword, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_StructuredUInt4Keyword, put=setStaticF_StructuredUInt4Keyword)) ::UnityEngine::Rendering::LocalKeyword  StructuredUInt4Keyword;

/// @brief Field StructuredUInt8Keyword, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_StructuredUInt8Keyword, put=setStaticF_StructuredUInt8Keyword)) ::UnityEngine::Rendering::LocalKeyword  StructuredUInt8Keyword;

static inline ::UnityEngine::Rendering::CommandBuffer* getStaticF_CommandBuffer() ;

static inline int32_t getStaticF_MemcpyKernel() ;

static inline int32_t getStaticF_MemsetKernel() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_RawUInt4AlignedKeyword() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_RawUIntKeyword() ;

static inline int32_t getStaticF_ScatterKernel() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_Shader() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_StructuredUInt1Keyword() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_StructuredUInt2Keyword() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_StructuredUInt4Keyword() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_StructuredUInt8Keyword() ;

static inline void setStaticF_CommandBuffer(::UnityEngine::Rendering::CommandBuffer*  value) ;

static inline void setStaticF_MemcpyKernel(int32_t  value) ;

static inline void setStaticF_MemsetKernel(int32_t  value) ;

static inline void setStaticF_RawUInt4AlignedKeyword(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_RawUIntKeyword(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_ScatterKernel(int32_t  value) ;

static inline void setStaticF_Shader(::UnityW<::UnityEngine::ComputeShader>  value) ;

static inline void setStaticF_StructuredUInt1Keyword(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_StructuredUInt2Keyword(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_StructuredUInt4Keyword(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_StructuredUInt8Keyword(::UnityEngine::Rendering::LocalKeyword  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferUtility_Compute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility_Compute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBufferUtility_Compute(GraphicsBufferUtility_Compute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility_Compute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBufferUtility_Compute(GraphicsBufferUtility_Compute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13338};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::GraphicsBufferUtility_Compute) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferUtility/LocalNameID
class CORDL_TYPE GraphicsBufferUtility_LocalNameID : public ::System::Object {
public:
// Declarations
/// @brief Field DstByteBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DstByteBuffer, put=setStaticF_DstByteBuffer)) int32_t  DstByteBuffer;

/// @brief Field DstOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DstOffset, put=setStaticF_DstOffset)) int32_t  DstOffset;

/// @brief Field DstStructuredBuffer1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DstStructuredBuffer1, put=setStaticF_DstStructuredBuffer1)) int32_t  DstStructuredBuffer1;

/// @brief Field DstStructuredBuffer2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DstStructuredBuffer2, put=setStaticF_DstStructuredBuffer2)) int32_t  DstStructuredBuffer2;

/// @brief Field DstStructuredBuffer4, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DstStructuredBuffer4, put=setStaticF_DstStructuredBuffer4)) int32_t  DstStructuredBuffer4;

/// @brief Field DstStructuredBuffer8, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DstStructuredBuffer8, put=setStaticF_DstStructuredBuffer8)) int32_t  DstStructuredBuffer8;

/// @brief Field ScatterByteBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterByteBuffer, put=setStaticF_ScatterByteBuffer)) int32_t  ScatterByteBuffer;

/// @brief Field ScatterCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterCount, put=setStaticF_ScatterCount)) int32_t  ScatterCount;

/// @brief Field ScatterStructuredBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ScatterStructuredBuffer, put=setStaticF_ScatterStructuredBuffer)) int32_t  ScatterStructuredBuffer;

/// @brief Field Size, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Size, put=setStaticF_Size)) int32_t  Size;

/// @brief Field SrcByteBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SrcByteBuffer, put=setStaticF_SrcByteBuffer)) int32_t  SrcByteBuffer;

/// @brief Field SrcOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SrcOffset, put=setStaticF_SrcOffset)) int32_t  SrcOffset;

/// @brief Field SrcStructuredBuffer1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SrcStructuredBuffer1, put=setStaticF_SrcStructuredBuffer1)) int32_t  SrcStructuredBuffer1;

/// @brief Field SrcStructuredBuffer2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SrcStructuredBuffer2, put=setStaticF_SrcStructuredBuffer2)) int32_t  SrcStructuredBuffer2;

/// @brief Field SrcStructuredBuffer4, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SrcStructuredBuffer4, put=setStaticF_SrcStructuredBuffer4)) int32_t  SrcStructuredBuffer4;

/// @brief Field SrcStructuredBuffer8, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SrcStructuredBuffer8, put=setStaticF_SrcStructuredBuffer8)) int32_t  SrcStructuredBuffer8;

/// @brief Field UploadByteBuffer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UploadByteBuffer, put=setStaticF_UploadByteBuffer)) int32_t  UploadByteBuffer;

/// @brief Field UploadStructuredBuffer1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UploadStructuredBuffer1, put=setStaticF_UploadStructuredBuffer1)) int32_t  UploadStructuredBuffer1;

/// @brief Field UploadStructuredBuffer2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UploadStructuredBuffer2, put=setStaticF_UploadStructuredBuffer2)) int32_t  UploadStructuredBuffer2;

/// @brief Field UploadStructuredBuffer4, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UploadStructuredBuffer4, put=setStaticF_UploadStructuredBuffer4)) int32_t  UploadStructuredBuffer4;

/// @brief Field UploadStructuredBuffer8, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UploadStructuredBuffer8, put=setStaticF_UploadStructuredBuffer8)) int32_t  UploadStructuredBuffer8;

/// @brief Field Value, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Value, put=setStaticF_Value)) int32_t  Value;

static inline int32_t getStaticF_DstByteBuffer() ;

static inline int32_t getStaticF_DstOffset() ;

static inline int32_t getStaticF_DstStructuredBuffer1() ;

static inline int32_t getStaticF_DstStructuredBuffer2() ;

static inline int32_t getStaticF_DstStructuredBuffer4() ;

static inline int32_t getStaticF_DstStructuredBuffer8() ;

static inline int32_t getStaticF_ScatterByteBuffer() ;

static inline int32_t getStaticF_ScatterCount() ;

static inline int32_t getStaticF_ScatterStructuredBuffer() ;

static inline int32_t getStaticF_Size() ;

static inline int32_t getStaticF_SrcByteBuffer() ;

static inline int32_t getStaticF_SrcOffset() ;

static inline int32_t getStaticF_SrcStructuredBuffer1() ;

static inline int32_t getStaticF_SrcStructuredBuffer2() ;

static inline int32_t getStaticF_SrcStructuredBuffer4() ;

static inline int32_t getStaticF_SrcStructuredBuffer8() ;

static inline int32_t getStaticF_UploadByteBuffer() ;

static inline int32_t getStaticF_UploadStructuredBuffer1() ;

static inline int32_t getStaticF_UploadStructuredBuffer2() ;

static inline int32_t getStaticF_UploadStructuredBuffer4() ;

static inline int32_t getStaticF_UploadStructuredBuffer8() ;

static inline int32_t getStaticF_Value() ;

static inline void setStaticF_DstByteBuffer(int32_t  value) ;

static inline void setStaticF_DstOffset(int32_t  value) ;

static inline void setStaticF_DstStructuredBuffer1(int32_t  value) ;

static inline void setStaticF_DstStructuredBuffer2(int32_t  value) ;

static inline void setStaticF_DstStructuredBuffer4(int32_t  value) ;

static inline void setStaticF_DstStructuredBuffer8(int32_t  value) ;

static inline void setStaticF_ScatterByteBuffer(int32_t  value) ;

static inline void setStaticF_ScatterCount(int32_t  value) ;

static inline void setStaticF_ScatterStructuredBuffer(int32_t  value) ;

static inline void setStaticF_Size(int32_t  value) ;

static inline void setStaticF_SrcByteBuffer(int32_t  value) ;

static inline void setStaticF_SrcOffset(int32_t  value) ;

static inline void setStaticF_SrcStructuredBuffer1(int32_t  value) ;

static inline void setStaticF_SrcStructuredBuffer2(int32_t  value) ;

static inline void setStaticF_SrcStructuredBuffer4(int32_t  value) ;

static inline void setStaticF_SrcStructuredBuffer8(int32_t  value) ;

static inline void setStaticF_UploadByteBuffer(int32_t  value) ;

static inline void setStaticF_UploadStructuredBuffer1(int32_t  value) ;

static inline void setStaticF_UploadStructuredBuffer2(int32_t  value) ;

static inline void setStaticF_UploadStructuredBuffer4(int32_t  value) ;

static inline void setStaticF_UploadStructuredBuffer8(int32_t  value) ;

static inline void setStaticF_Value(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferUtility_LocalNameID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility_LocalNameID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBufferUtility_LocalNameID(GraphicsBufferUtility_LocalNameID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility_LocalNameID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBufferUtility_LocalNameID(GraphicsBufferUtility_LocalNameID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::GraphicsBufferUtility_LocalNameID) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferUtility/Delegates/GraphicsBufferSetDataDelegate
class CORDL_TYPE Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814fb9a0, size 0x240, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x181309030, size 0x1790, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

static inline ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1814fbbe0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate(Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate(Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13340};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferUtility/Delegates/CommandBufferSetDataBufferDataGbDelegate
class CORDL_TYPE Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1814f7010, size 0x580, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804a33d0, size 0x1f0, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

static inline ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1814f7590, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate(Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate(Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferUtility/Delegates/GetWrappedCommandBufferDelegate
class CORDL_TYPE Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::ComputeCommandBuffer*  cmd, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::CommandBuffer* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline ::UnityEngine::Rendering::CommandBuffer* Invoke(::UnityEngine::Rendering::ComputeCommandBuffer*  cmd) ;

static inline ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18139c770, size 0x7ce0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate(Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate(Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13342};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferUtility/Delegates
class CORDL_TYPE GraphicsBufferUtility_Delegates : public ::System::Object {
public:
// Declarations
using CommandBufferSetDataBufferDataGbDelegate = ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate;

using GetWrappedCommandBufferDelegate = ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate;

using GraphicsBufferSetDataDelegate = ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate;

/// @brief Field CmdSetDataBufferDataGb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CmdSetDataBufferDataGb, put=setStaticF_CmdSetDataBufferDataGb)) ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*  CmdSetDataBufferDataGb;

/// @brief Field GetWrappedCommandBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GetWrappedCommandBuffer, put=setStaticF_GetWrappedCommandBuffer)) ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*  GetWrappedCommandBuffer;

/// @brief Field GraphicsBufferSetData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GraphicsBufferSetData, put=setStaticF_GraphicsBufferSetData)) ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*  GraphicsBufferSetData;

static inline ::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate* getStaticF_CmdSetDataBufferDataGb() ;

static inline ::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate* getStaticF_GetWrappedCommandBuffer() ;

static inline ::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate* getStaticF_GraphicsBufferSetData() ;

static inline void setStaticF_CmdSetDataBufferDataGb(::MA::Flora::Delegates_GraphicsBufferUtility_CommandBufferSetDataBufferDataGbDelegate*  value) ;

static inline void setStaticF_GetWrappedCommandBuffer(::MA::Flora::Delegates_GraphicsBufferUtility_GetWrappedCommandBufferDelegate*  value) ;

static inline void setStaticF_GraphicsBufferSetData(::MA::Flora::Delegates_GraphicsBufferUtility_GraphicsBufferSetDataDelegate*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferUtility_Delegates() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility_Delegates", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBufferUtility_Delegates(GraphicsBufferUtility_Delegates && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility_Delegates", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBufferUtility_Delegates(GraphicsBufferUtility_Delegates const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13343};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::GraphicsBufferUtility_Delegates) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.GraphicsBufferUtility/StructuredBufferSize
struct CORDL_TYPE GraphicsBufferUtility_StructuredBufferSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphicsBufferUtility_StructuredBufferSize_Unwrapped
enum struct __GraphicsBufferUtility_StructuredBufferSize_Unwrapped : int32_t {
__E_Size1 = static_cast<int32_t>(0x0),
__E_Size2 = static_cast<int32_t>(0x1),
__E_Size4 = static_cast<int32_t>(0x2),
__E_Size8 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphicsBufferUtility_StructuredBufferSize_Unwrapped () const noexcept {
return static_cast<__GraphicsBufferUtility_StructuredBufferSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferUtility_StructuredBufferSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GraphicsBufferUtility_StructuredBufferSize(int32_t  value__) noexcept;

/// @brief Field Size1 value: I32(0)
static ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize const Size1;

/// @brief Field Size2 value: I32(1)
static ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize const Size2;

/// @brief Field Size4 value: I32(2)
static ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize const Size4;

/// @brief Field Size8 value: I32(3)
static ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize const Size8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13344};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::GraphicsBufferUtility_StructuredBufferSize, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::GraphicsBufferUtility_StructuredBufferSize) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferUtility/__InteropDelegates
class CORDL_TYPE GraphicsBufferUtility___InteropDelegates : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferUtility___InteropDelegates() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility___InteropDelegates", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBufferUtility___InteropDelegates(GraphicsBufferUtility___InteropDelegates && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility___InteropDelegates", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBufferUtility___InteropDelegates(GraphicsBufferUtility___InteropDelegates const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13345};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::GraphicsBufferUtility___InteropDelegates) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.GraphicsBufferUtility
class CORDL_TYPE GraphicsBufferUtility : public ::System::Object {
public:
// Declarations
using Compute = ::MA::Flora::GraphicsBufferUtility_Compute;

using Delegates = ::MA::Flora::GraphicsBufferUtility_Delegates;

using LocalNameID = ::MA::Flora::GraphicsBufferUtility_LocalNameID;

using Profiling = ::MA::Flora::GraphicsBufferUtility_Profiling;

using StructuredBufferSize = ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize;

using __InteropDelegates = ::MA::Flora::GraphicsBufferUtility___InteropDelegates;

/// @brief Method GetStructuredBufferElementSize, addr 0x1814fe130, size 0xc0, virtual false, abstract: false, final false
static inline ::MA::Flora::GraphicsBufferUtility_StructuredBufferSize GetStructuredBufferElementSize(int32_t  strideInBytes) ;

/// @brief Method GetWrappedCommandBuffer, addr 0x1814fe1f0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::CommandBuffer* GetWrappedCommandBuffer(::UnityEngine::Rendering::ComputeCommandBuffer*  cmd) ;

/// @brief Method Initialize, addr 0x1814fe500, size 0x3c0, virtual false, abstract: false, final false
static inline void Initialize(::MA::Flora::FloraRuntimeResources*  runtimeResources) ;

/// @brief Method InitializeOnLoad, addr 0x1814fe230, size 0x2d0, virtual false, abstract: false, final false
static inline void InitializeOnLoad() ;

/// @brief Method Memcpy, addr 0x1814fe8c0, size 0x4b0, virtual false, abstract: false, final false
static inline void Memcpy(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::UnityEngine::GraphicsBuffer*  srcBuffer, int32_t  srcOffset, int32_t  dstOffset, int32_t  count) ;

/// @brief Method Memcpy, addr 0x1814fed70, size 0xb0, virtual false, abstract: false, final false
static inline void Memcpy(::UnityEngine::GraphicsBuffer*  dstBuffer, ::UnityEngine::GraphicsBuffer*  srcBuffer, int32_t  srcOffset, int32_t  dstOffset, int32_t  count) ;

/// @brief Method Memset, addr 0x1814ff200, size 0xb0, virtual false, abstract: false, final false
static inline void Memset(::UnityEngine::GraphicsBuffer*  buffer, int32_t  value, int32_t  offset, int32_t  count) ;

/// @brief Method Memset, addr 0x1814fee20, size 0x3e0, virtual false, abstract: false, final false
static inline void Memset(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  value, int32_t  offset, int32_t  count) ;

/// @brief Method ResetInternal, addr 0x1814ff2b0, size 0x100, virtual false, abstract: false, final false
static inline void ResetInternal() ;

/// @brief Method ResetKeywords, addr 0x1814ff500, size 0x160, virtual false, abstract: false, final false
static inline void ResetKeywords() ;

/// @brief Method ResetKeywords, addr 0x1814ff3b0, size 0x150, virtual false, abstract: false, final false
static inline void ResetKeywords(::UnityEngine::Rendering::CommandBuffer*  cmd) ;

/// @brief Method ResizeIfNeeded, addr 0x1814ff660, size 0x170, virtual false, abstract: false, final false
static inline bool ResizeIfNeeded(::by_ref<::UnityEngine::GraphicsBuffer*>  buffer, int32_t  stride, int32_t  sizeInBytes, ::UnityEngine::GraphicsBuffer_Target  target, ::StringW  debugName) ;

/// @brief Method ResizeSOAIfNeeded, addr 0x1814ff7d0, size 0x1c0, virtual false, abstract: false, final false
static inline bool ResizeSOAIfNeeded(::by_ref<::UnityEngine::GraphicsBuffer*>  buffer, int32_t  stride, int32_t  sizeInBytes, int32_t  arrayCount, ::UnityEngine::GraphicsBuffer_Target  target, ::StringW  debugName) ;

/// @brief Method Scatter, addr 0x1814ff990, size 0x570, virtual false, abstract: false, final false
static inline void Scatter(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::UnityEngine::GraphicsBuffer*  valueBuffer, ::UnityEngine::GraphicsBuffer*  offsetBuffer, int32_t  count, int32_t  stride) ;

/// @brief Method Scatter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Scatter(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::Unity::Collections::NativeArray_1<T>  values, ::UnityEngine::GraphicsBuffer*  offsetBuffer) ;

/// @brief Method Scatter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Scatter(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  dstBuffer, ::Unity::Collections::NativeArray_1<T>  values, ::Unity::Collections::NativeArray_1<uint32_t>  offsets) ;

/// @brief Method SetBufferData, addr 0x1814c2590, size 0x100, virtual false, abstract: false, final false
static inline void SetBufferData(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, void*  ptr, int32_t  count, int32_t  stride) ;

/// @brief Method SetBufferData, addr 0x1814fff00, size 0x70, virtual false, abstract: false, final false
static inline void SetBufferData(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::GraphicsBuffer*  buffer, void*  ptr, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  stride) ;

/// @brief Method SetData, addr 0x1814fff70, size 0x60, virtual false, abstract: false, final false
static inline void SetData(::UnityEngine::GraphicsBuffer*  buffer, void*  ptr, int32_t  count, int32_t  stride) ;

/// @brief Method SetData, addr 0x1814fffd0, size 0x60, virtual false, abstract: false, final false
static inline void SetData(::UnityEngine::GraphicsBuffer*  buffer, void*  ptr, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  stride) ;

/// @brief Method _EarlyInitInterop, addr 0x181500030, size 0x90, virtual false, abstract: false, final false
static inline void _EarlyInitInterop() ;

/// @brief Method _LateInitInterop, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void _LateInitInterop() ;

/// @brief Method __InteropIsBurst, addr 0x181477870, size 0x10, virtual false, abstract: false, final false
static inline void __InteropIsBurst(::by_ref<bool>  status) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphicsBufferUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphicsBufferUtility(GraphicsBufferUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsBufferUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphicsBufferUtility(GraphicsBufferUtility const& ) = delete;

/// @brief Field ThreadGroupSize offset 0xffffffff size 0x4
static constexpr int32_t  ThreadGroupSize{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13346};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::GraphicsBufferUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
