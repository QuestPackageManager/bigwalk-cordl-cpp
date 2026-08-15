#pragma once
// IWYU pragma private; include "MA/Flora/DebugCullingGrid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__CullingGrid_def.hpp"
#include "MA/Flora/zzzz__DebugCullingGridShaderVariables_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugCullingGrid)
namespace MA::Flora {
class DebugCullingGrid_ContextHandle;
}
namespace MA::Flora {
struct DebugCullingGrid_ContextKey;
}
namespace MA::Flora {
struct DebugCullingGrid_DrawType;
}
namespace MA::Flora {
class DebugCullingGrid_LocalNameID;
}
namespace MA::Flora {
struct FloraDebugDisplayProperties;
}
namespace MA::Flora {
class FloraRuntimeResources;
}
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
struct NativeBitSet;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace MA::Flora {
struct DebugCullingGrid_DrawType;
}
namespace MA::Flora {
class DebugCullingGrid;
}
namespace MA::Flora {
class DebugCullingGrid_ContextHandle;
}
namespace MA::Flora {
class DebugCullingGrid_LocalNameID;
}
namespace MA::Flora {
struct DebugCullingGrid_ContextKey;
}
// Write type traits
MARK_VAL_T(::MA::Flora::DebugCullingGrid_DrawType);
MARK_REF_T(::MA::Flora::DebugCullingGrid*);
MARK_REF_T(::MA::Flora::DebugCullingGrid_ContextHandle*);
MARK_REF_T(::MA::Flora::DebugCullingGrid_LocalNameID*);
MARK_VAL_T(::MA::Flora::DebugCullingGrid_ContextKey);
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugCullingGrid_DrawType, "MA.Flora", "DebugCullingGrid/DrawType");
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugCullingGrid*, "MA.Flora", "DebugCullingGrid");
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugCullingGrid_ContextHandle*, "MA.Flora", "DebugCullingGrid/ContextHandle");
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugCullingGrid_LocalNameID*, "MA.Flora", "DebugCullingGrid/LocalNameID");
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugCullingGrid_ContextKey, "MA.Flora", "DebugCullingGrid/ContextKey");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DebugCullingGrid/DrawType
struct CORDL_TYPE DebugCullingGrid_DrawType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugCullingGrid_DrawType_Unwrapped
enum struct __DebugCullingGrid_DrawType_Unwrapped : int32_t {
__E_Blocks = static_cast<int32_t>(0x0),
__E_Cells = static_cast<int32_t>(0x1),
__E_Chunks = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugCullingGrid_DrawType_Unwrapped () const noexcept {
return static_cast<__DebugCullingGrid_DrawType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugCullingGrid_DrawType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DebugCullingGrid_DrawType(int32_t  value__) noexcept;

/// @brief Field Blocks value: I32(0)
static ::MA::Flora::DebugCullingGrid_DrawType const Blocks;

/// @brief Field Cells value: I32(1)
static ::MA::Flora::DebugCullingGrid_DrawType const Cells;

/// @brief Field Chunks value: I32(2)
static ::MA::Flora::DebugCullingGrid_DrawType const Chunks;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13248};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugCullingGrid_DrawType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugCullingGrid_DrawType) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.DebugCullingGrid::DrawType, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.DebugCullingGrid/ContextKey
struct CORDL_TYPE DebugCullingGrid_ContextKey {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>*() ;

/// @brief Method Equals, addr 0x1814c2df0, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1814c2e70, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::DebugCullingGrid_ContextKey  other) ;

/// @brief Method GetHashCode, addr 0x1814c2ea0, size 0x30, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>"
constexpr ::System::IEquatable_1<::MA::Flora::DebugCullingGrid_ContextKey>* i___System__IEquatable_1___MA__Flora__DebugCullingGrid_ContextKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr DebugCullingGrid_ContextKey() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::MA::Flora::DebugCullingGrid_DrawType", modifiers: "", def_value: None }, CppParam { name: "CameraId", ty: "::UnityEngine::EntityId", modifiers: "", def_value: None }]
constexpr DebugCullingGrid_ContextKey(::MA::Flora::DebugCullingGrid_DrawType  Type, ::UnityEngine::EntityId  CameraId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13249};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::MA::Flora::DebugCullingGrid_DrawType  Type;

/// @brief Field CameraId, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::EntityId  CameraId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextKey, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextKey, CameraId) == 0x4, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugCullingGrid_ContextKey) == 0x8, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.DebugCullingGrid::DrawType, MA.Flora.DebugCullingGridShaderVariables, System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugCullingGrid/ContextHandle
class CORDL_TYPE DebugCullingGrid_ContextHandle : public ::System::Object {
public:
// Declarations
/// @brief Field CameraId, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraId, put=__cordl_internal_set_CameraId)) ::UnityEngine::EntityId  CameraId;

/// @brief Field DebugShaderVariablesBuffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DebugShaderVariablesBuffer, put=__cordl_internal_set_DebugShaderVariablesBuffer)) ::UnityEngine::GraphicsBuffer*  DebugShaderVariablesBuffer;

/// @brief Field DebugShaderVariablesData, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_DebugShaderVariablesData, put=__cordl_internal_set_DebugShaderVariablesData)) ::Unity::Collections::NativeArray_1<::MA::Flora::DebugCullingGridShaderVariables>  DebugShaderVariablesData;

/// @brief Field LastUsedFrame, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_LastUsedFrame, put=__cordl_internal_set_LastUsedFrame)) int32_t  LastUsedFrame;

/// @brief Field LineCounterBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_LineCounterBuffer, put=__cordl_internal_set_LineCounterBuffer)) ::UnityEngine::GraphicsBuffer*  LineCounterBuffer;

/// @brief Field LineDrawArgsBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_LineDrawArgsBuffer, put=__cordl_internal_set_LineDrawArgsBuffer)) ::UnityEngine::GraphicsBuffer*  LineDrawArgsBuffer;

/// @brief Field LineMaterial, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_LineMaterial, put=__cordl_internal_set_LineMaterial)) ::UnityW<::UnityEngine::Material>  LineMaterial;

/// @brief Field LineVertexBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_LineVertexBuffer, put=__cordl_internal_set_LineVertexBuffer)) ::UnityEngine::GraphicsBuffer*  LineVertexBuffer;

/// @brief Field Type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::MA::Flora::DebugCullingGrid_DrawType  Type;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1814c2d10, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::MA::Flora::DebugCullingGrid_ContextHandle* New_ctor(::MA::Flora::FloraRuntimeResources*  resources) ;

constexpr ::UnityEngine::EntityId const& __cordl_internal_get_CameraId() const;

constexpr ::UnityEngine::EntityId& __cordl_internal_get_CameraId() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_DebugShaderVariablesBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_DebugShaderVariablesBuffer() ;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DebugCullingGridShaderVariables> const& __cordl_internal_get_DebugShaderVariablesData() const;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::DebugCullingGridShaderVariables>& __cordl_internal_get_DebugShaderVariablesData() ;

constexpr int32_t const& __cordl_internal_get_LastUsedFrame() const;

constexpr int32_t& __cordl_internal_get_LastUsedFrame() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_LineCounterBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_LineCounterBuffer() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_LineDrawArgsBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_LineDrawArgsBuffer() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_LineMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_LineMaterial() ;

constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_LineVertexBuffer() const;

constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_LineVertexBuffer() ;

constexpr ::MA::Flora::DebugCullingGrid_DrawType const& __cordl_internal_get_Type() const;

constexpr ::MA::Flora::DebugCullingGrid_DrawType& __cordl_internal_get_Type() ;

constexpr void __cordl_internal_set_CameraId(::UnityEngine::EntityId  value) ;

constexpr void __cordl_internal_set_DebugShaderVariablesBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_DebugShaderVariablesData(::Unity::Collections::NativeArray_1<::MA::Flora::DebugCullingGridShaderVariables>  value) ;

constexpr void __cordl_internal_set_LastUsedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_LineCounterBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_LineDrawArgsBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_LineMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_LineVertexBuffer(::UnityEngine::GraphicsBuffer*  value) ;

constexpr void __cordl_internal_set_Type(::MA::Flora::DebugCullingGrid_DrawType  value) ;

/// @brief Method .ctor, addr 0x1814c2d80, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::FloraRuntimeResources*  resources) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugCullingGrid_ContextHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugCullingGrid_ContextHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugCullingGrid_ContextHandle(DebugCullingGrid_ContextHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugCullingGrid_ContextHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugCullingGrid_ContextHandle(DebugCullingGrid_ContextHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13250};

/// @brief Field Type, offset: 0x10, size: 0x4, def value: None
 ::MA::Flora::DebugCullingGrid_DrawType  ___Type;

/// @brief Field CameraId, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::EntityId  ___CameraId;

/// @brief Field LastUsedFrame, offset: 0x18, size: 0x4, def value: None
 int32_t  ___LastUsedFrame;

/// @brief Field DebugShaderVariablesBuffer, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___DebugShaderVariablesBuffer;

/// @brief Field DebugShaderVariablesData, offset: 0x28, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::DebugCullingGridShaderVariables>  ___DebugShaderVariablesData;

/// @brief Field LineMaterial, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___LineMaterial;

/// @brief Field LineVertexBuffer, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___LineVertexBuffer;

/// @brief Field LineCounterBuffer, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___LineCounterBuffer;

/// @brief Field LineDrawArgsBuffer, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::GraphicsBuffer*  ___LineDrawArgsBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextHandle, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextHandle, ___CameraId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextHandle, ___LastUsedFrame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextHandle, ___DebugShaderVariablesBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextHandle, ___DebugShaderVariablesData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextHandle, ___LineMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextHandle, ___LineVertexBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextHandle, ___LineCounterBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid_ContextHandle, ___LineDrawArgsBuffer) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugCullingGrid_ContextHandle) == 0x58, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugCullingGrid/LocalNameID
class CORDL_TYPE DebugCullingGrid_LocalNameID : public ::System::Object {
public:
// Declarations
/// @brief Field DebugCullingGridShaderVariables, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DebugCullingGridShaderVariables, put=setStaticF_DebugCullingGridShaderVariables)) int32_t  DebugCullingGridShaderVariables;

/// @brief Field _BlockCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlockCount, put=setStaticF__BlockCount)) int32_t  _BlockCount;

/// @brief Field _BlockData, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlockData, put=setStaticF__BlockData)) int32_t  _BlockData;

/// @brief Field _BlockIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlockIndices, put=setStaticF__BlockIndices)) int32_t  _BlockIndices;

/// @brief Field _CellCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CellCount, put=setStaticF__CellCount)) int32_t  _CellCount;

/// @brief Field _CellIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CellIndices, put=setStaticF__CellIndices)) int32_t  _CellIndices;

/// @brief Field _CellInstanceCounts, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CellInstanceCounts, put=setStaticF__CellInstanceCounts)) int32_t  _CellInstanceCounts;

/// @brief Field _ChunkCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkCount, put=setStaticF__ChunkCount)) int32_t  _ChunkCount;

/// @brief Field _ChunkIndices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChunkIndices, put=setStaticF__ChunkIndices)) int32_t  _ChunkIndices;

/// @brief Field _CullingChunkAttributes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkAttributes, put=setStaticF__CullingChunkAttributes)) int32_t  _CullingChunkAttributes;

/// @brief Field _CullingChunkBatches, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkBatches, put=setStaticF__CullingChunkBatches)) int32_t  _CullingChunkBatches;

/// @brief Field _CullingChunkCells, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullingChunkCells, put=setStaticF__CullingChunkCells)) int32_t  _CullingChunkCells;

/// @brief Field _LineDrawArgs, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LineDrawArgs, put=setStaticF__LineDrawArgs)) int32_t  _LineDrawArgs;

/// @brief Field _LineVertexCounter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LineVertexCounter, put=setStaticF__LineVertexCounter)) int32_t  _LineVertexCounter;

/// @brief Field _LineVertices, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LineVertices, put=setStaticF__LineVertices)) int32_t  _LineVertices;

static inline int32_t getStaticF_DebugCullingGridShaderVariables() ;

static inline int32_t getStaticF__BlockCount() ;

static inline int32_t getStaticF__BlockData() ;

static inline int32_t getStaticF__BlockIndices() ;

static inline int32_t getStaticF__CellCount() ;

static inline int32_t getStaticF__CellIndices() ;

static inline int32_t getStaticF__CellInstanceCounts() ;

static inline int32_t getStaticF__ChunkCount() ;

static inline int32_t getStaticF__ChunkIndices() ;

static inline int32_t getStaticF__CullingChunkAttributes() ;

static inline int32_t getStaticF__CullingChunkBatches() ;

static inline int32_t getStaticF__CullingChunkCells() ;

static inline int32_t getStaticF__LineDrawArgs() ;

static inline int32_t getStaticF__LineVertexCounter() ;

static inline int32_t getStaticF__LineVertices() ;

static inline void setStaticF_DebugCullingGridShaderVariables(int32_t  value) ;

static inline void setStaticF__BlockCount(int32_t  value) ;

static inline void setStaticF__BlockData(int32_t  value) ;

static inline void setStaticF__BlockIndices(int32_t  value) ;

static inline void setStaticF__CellCount(int32_t  value) ;

static inline void setStaticF__CellIndices(int32_t  value) ;

static inline void setStaticF__CellInstanceCounts(int32_t  value) ;

static inline void setStaticF__ChunkCount(int32_t  value) ;

static inline void setStaticF__ChunkIndices(int32_t  value) ;

static inline void setStaticF__CullingChunkAttributes(int32_t  value) ;

static inline void setStaticF__CullingChunkBatches(int32_t  value) ;

static inline void setStaticF__CullingChunkCells(int32_t  value) ;

static inline void setStaticF__LineDrawArgs(int32_t  value) ;

static inline void setStaticF__LineVertexCounter(int32_t  value) ;

static inline void setStaticF__LineVertices(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugCullingGrid_LocalNameID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugCullingGrid_LocalNameID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugCullingGrid_LocalNameID(DebugCullingGrid_LocalNameID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugCullingGrid_LocalNameID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugCullingGrid_LocalNameID(DebugCullingGrid_LocalNameID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::DebugCullingGrid_LocalNameID) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.CullingGrid, MA.Flora.NativeDataReference`1<T>, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugCullingGrid
class CORDL_TYPE DebugCullingGrid : public ::System::Object {
public:
// Declarations
using ContextHandle = ::MA::Flora::DebugCullingGrid_ContextHandle;

using ContextKey = ::MA::Flora::DebugCullingGrid_ContextKey;

using DrawType = ::MA::Flora::DebugCullingGrid_DrawType;

using LocalNameID = ::MA::Flora::DebugCullingGrid_LocalNameID;

/// @brief Field m_BuildBlockLinesKernel, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BuildBlockLinesKernel, put=__cordl_internal_set_m_BuildBlockLinesKernel)) int32_t  m_BuildBlockLinesKernel;

/// @brief Field m_BuildCellLinesKernel, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BuildCellLinesKernel, put=__cordl_internal_set_m_BuildCellLinesKernel)) int32_t  m_BuildCellLinesKernel;

/// @brief Field m_BuildChunkLinesKernel, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BuildChunkLinesKernel, put=__cordl_internal_set_m_BuildChunkLinesKernel)) int32_t  m_BuildChunkLinesKernel;

/// @brief Field m_BuildDrawArgsKernel, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BuildDrawArgsKernel, put=__cordl_internal_set_m_BuildDrawArgsKernel)) int32_t  m_BuildDrawArgsKernel;

/// @brief Field m_Contexts, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Contexts, put=__cordl_internal_set_m_Contexts)) ::System::Collections::Generic::Dictionary_2<::MA::Flora::DebugCullingGrid_ContextKey,::MA::Flora::DebugCullingGrid_ContextHandle*>*  m_Contexts;

/// @brief Field m_CullingGrid, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CullingGrid, put=__cordl_internal_set_m_CullingGrid)) ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  m_CullingGrid;

/// @brief Field m_DebugCullingGridCS, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugCullingGridCS, put=__cordl_internal_set_m_DebugCullingGridCS)) ::UnityW<::UnityEngine::ComputeShader>  m_DebugCullingGridCS;

/// @brief Field m_FrameIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FrameIndex, put=__cordl_internal_set_m_FrameIndex)) int32_t  m_FrameIndex;

/// @brief Field m_Resources, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Resources, put=__cordl_internal_set_m_Resources)) ::MA::Flora::FloraRuntimeResources*  m_Resources;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BeginContextDraw, addr 0x1814c2ed0, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::CommandBuffer* BeginContextDraw(::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>  ctx, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>  debugSettings, int32_t  boxCount) ;

/// @brief Method Dispose, addr 0x1814c2ff0, size 0xe0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method DrawBlocks, addr 0x1814c30d0, size 0x5b0, virtual false, abstract: false, final false
inline void DrawBlocks(::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>  debugSettings) ;

/// @brief Method DrawCells, addr 0x1814c3680, size 0x5b0, virtual false, abstract: false, final false
inline void DrawCells(::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>  debugSettings) ;

/// @brief Method DrawChunks, addr 0x1814c3c30, size 0x750, virtual false, abstract: false, final false
inline void DrawChunks(::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::FloraDebugDisplayProperties>  debugSettings) ;

/// @brief Method EnsureLineBuffers, addr 0x1814c4380, size 0x170, virtual false, abstract: false, final false
static inline void EnsureLineBuffers(::MA::Flora::DebugCullingGrid_ContextHandle*  contextHandle, int32_t  maxLineCount) ;

/// @brief Method GetOrCreateContext, addr 0x1814c44f0, size 0x140, virtual false, abstract: false, final false
inline ::MA::Flora::DebugCullingGrid_ContextHandle* GetOrCreateContext(::MA::Flora::DebugCullingGrid_DrawType  type, ::UnityEngine::Camera*  camera) ;

static inline ::MA::Flora::DebugCullingGrid* New_ctor(::MA::Flora::InstanceContext  context, ::MA::Flora::FloraRuntimeResources*  resources) ;

/// @brief Method NextFrame, addr 0x1814c4630, size 0x2c0, virtual false, abstract: false, final false
inline void NextFrame() ;

/// @brief Method SubmitContextDraw, addr 0x1814c48f0, size 0x230, virtual false, abstract: false, final false
inline void SubmitContextDraw(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Camera*  camera, ::by_ref<::MA::Flora::DebugCullingGrid_ContextHandle*>  ctx) ;

/// @brief Method UpdateBitArrayBuffer, addr 0x1814c4b20, size 0x110, virtual false, abstract: false, final false
static inline void UpdateBitArrayBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, ::MA::Flora::NativeBitSet  bitset, ::by_ref<::UnityEngine::GraphicsBuffer*>  buffer) ;

/// @brief Method UpdateContextShaderVariables, addr 0x1814c4c30, size 0x2e0, virtual false, abstract: false, final false
inline void UpdateContextShaderVariables(::UnityEngine::Rendering::CommandBuffer*  cmd, ::MA::Flora::DebugCullingGrid_ContextHandle*  ctx, ::UnityEngine::Camera*  camera, float_t  maxDistance, bool  isHeatmap) ;

/// @brief Method UpdateDisplay, addr 0x1814c4f10, size 0x130, virtual false, abstract: false, final false
inline void UpdateDisplay(::UnityEngine::Camera*  camera) ;

constexpr int32_t const& __cordl_internal_get_m_BuildBlockLinesKernel() const;

constexpr int32_t& __cordl_internal_get_m_BuildBlockLinesKernel() ;

constexpr int32_t const& __cordl_internal_get_m_BuildCellLinesKernel() const;

constexpr int32_t& __cordl_internal_get_m_BuildCellLinesKernel() ;

constexpr int32_t const& __cordl_internal_get_m_BuildChunkLinesKernel() const;

constexpr int32_t& __cordl_internal_get_m_BuildChunkLinesKernel() ;

constexpr int32_t const& __cordl_internal_get_m_BuildDrawArgsKernel() const;

constexpr int32_t& __cordl_internal_get_m_BuildDrawArgsKernel() ;

constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::DebugCullingGrid_ContextKey,::MA::Flora::DebugCullingGrid_ContextHandle*>* const& __cordl_internal_get_m_Contexts() const;

constexpr ::System::Collections::Generic::Dictionary_2<::MA::Flora::DebugCullingGrid_ContextKey,::MA::Flora::DebugCullingGrid_ContextHandle*>*& __cordl_internal_get_m_Contexts() ;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid> const& __cordl_internal_get_m_CullingGrid() const;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>& __cordl_internal_get_m_CullingGrid() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_DebugCullingGridCS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_DebugCullingGridCS() ;

constexpr int32_t const& __cordl_internal_get_m_FrameIndex() const;

constexpr int32_t& __cordl_internal_get_m_FrameIndex() ;

constexpr ::MA::Flora::FloraRuntimeResources* const& __cordl_internal_get_m_Resources() const;

constexpr ::MA::Flora::FloraRuntimeResources*& __cordl_internal_get_m_Resources() ;

constexpr void __cordl_internal_set_m_BuildBlockLinesKernel(int32_t  value) ;

constexpr void __cordl_internal_set_m_BuildCellLinesKernel(int32_t  value) ;

constexpr void __cordl_internal_set_m_BuildChunkLinesKernel(int32_t  value) ;

constexpr void __cordl_internal_set_m_BuildDrawArgsKernel(int32_t  value) ;

constexpr void __cordl_internal_set_m_Contexts(::System::Collections::Generic::Dictionary_2<::MA::Flora::DebugCullingGrid_ContextKey,::MA::Flora::DebugCullingGrid_ContextHandle*>*  value) ;

constexpr void __cordl_internal_set_m_CullingGrid(::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  value) ;

constexpr void __cordl_internal_set_m_DebugCullingGridCS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set_m_FrameIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Resources(::MA::Flora::FloraRuntimeResources*  value) ;

/// @brief Method .ctor, addr 0x1814c5040, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::InstanceContext  context, ::MA::Flora::FloraRuntimeResources*  resources) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugCullingGrid() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugCullingGrid", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugCullingGrid(DebugCullingGrid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugCullingGrid", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugCullingGrid(DebugCullingGrid const& ) = delete;

/// @brief Field FramesUntilRelease offset 0xffffffff size 0x4
static constexpr int32_t  FramesUntilRelease{static_cast<int32_t>(0x12c)};

/// @brief Field VerticesPerBox offset 0xffffffff size 0x4
static constexpr int32_t  VerticesPerBox{static_cast<int32_t>(0x18)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13252};

/// @brief Field m_CullingGrid, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::CullingGrid>  ___m_CullingGrid;

/// @brief Field m_Resources, offset: 0x18, size: 0x8, def value: None
 ::MA::Flora::FloraRuntimeResources*  ___m_Resources;

/// @brief Field m_DebugCullingGridCS, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ___m_DebugCullingGridCS;

/// @brief Field m_BuildBlockLinesKernel, offset: 0x28, size: 0x4, def value: None
 int32_t  ___m_BuildBlockLinesKernel;

/// @brief Field m_BuildCellLinesKernel, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___m_BuildCellLinesKernel;

/// @brief Field m_BuildChunkLinesKernel, offset: 0x30, size: 0x4, def value: None
 int32_t  ___m_BuildChunkLinesKernel;

/// @brief Field m_BuildDrawArgsKernel, offset: 0x34, size: 0x4, def value: None
 int32_t  ___m_BuildDrawArgsKernel;

/// @brief Field m_FrameIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_FrameIndex;

/// @brief Field m_Contexts, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::MA::Flora::DebugCullingGrid_ContextKey,::MA::Flora::DebugCullingGrid_ContextHandle*>*  ___m_Contexts;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::DebugCullingGrid, ___m_CullingGrid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid, ___m_Resources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid, ___m_DebugCullingGridCS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid, ___m_BuildBlockLinesKernel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid, ___m_BuildCellLinesKernel) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid, ___m_BuildChunkLinesKernel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid, ___m_BuildDrawArgsKernel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid, ___m_FrameIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::DebugCullingGrid, ___m_Contexts) == 0x40, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::DebugCullingGrid) == 0x48, "Size mismatch!");

} // namespace end def MA::Flora
