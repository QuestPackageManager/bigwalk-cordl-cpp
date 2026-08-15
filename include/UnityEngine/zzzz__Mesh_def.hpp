#pragma once
// IWYU pragma private; include "UnityEngine/Mesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mesh)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct CombineInstance;
}
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct MeshLodRange;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
struct Mesh_LodSelectionCurve;
}
namespace UnityEngine {
struct Mesh_MeshDataArray;
}
namespace UnityEngine {
struct Mesh_MeshData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Mesh_LodSelectionCurve;
}
namespace UnityEngine {
struct Mesh_MeshData;
}
namespace UnityEngine {
struct Mesh_MeshDataArray;
}
// Write type traits
MARK_REF_T(::UnityEngine::Mesh*);
MARK_VAL_T(::UnityEngine::Mesh_LodSelectionCurve);
MARK_VAL_T(::UnityEngine::Mesh_MeshData);
MARK_VAL_T(::UnityEngine::Mesh_MeshDataArray);
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh*, "UnityEngine", "Mesh");
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh_LodSelectionCurve, "UnityEngine", "Mesh/LodSelectionCurve");
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh_MeshData, "UnityEngine", "Mesh/MeshData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Mesh_MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mesh/LodSelectionCurve
struct CORDL_TYPE Mesh_LodSelectionCurve {
public:
// Declarations
 __declspec(property(get=get_lodBias)) float_t  lodBias;

 __declspec(property(get=get_lodSlope)) float_t  lodSlope;

/// @brief Method get_lodBias, addr 0x1802d56e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_lodBias() ;

/// @brief Method get_lodSlope, addr 0x1802d56c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_lodSlope() ;

// Ctor Parameters []
// @brief default ctor
constexpr Mesh_LodSelectionCurve() ;

// Ctor Parameters [CppParam { name: "m_LodSlope", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_LodBias", ty: "float_t", modifiers: "", def_value: None }]
constexpr Mesh_LodSelectionCurve(float_t  m_LodSlope, float_t  m_LodBias) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10576};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_LodSlope, offset: 0x0, size: 0x4, def value: None
 float_t  m_LodSlope;

/// @brief Field m_LodBias, offset: 0x4, size: 0x4, def value: None
 float_t  m_LodBias;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_LodSelectionCurve, m_LodSlope) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Mesh_LodSelectionCurve, m_LodBias) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Mesh_LodSelectionCurve) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.IntPtr
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mesh/MeshData
struct CORDL_TYPE Mesh_MeshData {
public:
// Declarations
 __declspec(property(get=get_subMeshCount, put=set_subMeshCount)) int32_t  subMeshCount;

 __declspec(property(get=get_vertexBufferCount)) int32_t  vertexBufferCount;

 __declspec(property(get=get_vertexCount)) int32_t  vertexCount;

/// @brief Method CopyAttributeInto, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CopyAttributeInto(::Unity::Collections::NativeArray_1<T>  buffer, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// @brief Method CopyAttributeIntoPtr, addr 0x1822563a0, size 0x10, virtual false, abstract: false, final false
static inline void CopyAttributeIntoPtr(::System::IntPtr  self, ::UnityEngine::Rendering::VertexAttribute  attr, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  dst) ;

/// @brief Method GetIndexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetIndexData() ;

/// @brief Method GetIndexDataPtr, addr 0x1822563b0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetIndexDataPtr(::System::IntPtr  self) ;

/// @brief Method GetIndexDataSize, addr 0x1822563c0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t GetIndexDataSize(::System::IntPtr  self) ;

/// @brief Method GetSubMesh, addr 0x182256430, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t  index) ;

/// @brief Method GetSubMesh, addr 0x1822563f0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(::System::IntPtr  self, int32_t  index) ;

/// @brief Method GetSubMeshCount, addr 0x1822563d0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetSubMeshCount(::System::IntPtr  self) ;

/// @brief Method GetSubMesh_Injected, addr 0x1822563e0, size 0x10, virtual false, abstract: false, final false
static inline void GetSubMesh_Injected(::System::IntPtr  self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  ret) ;

/// @brief Method GetVertexBufferCount, addr 0x1822564a0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetVertexBufferCount(::System::IntPtr  self) ;

/// @brief Method GetVertexCount, addr 0x1822564b0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetVertexCount(::System::IntPtr  self) ;

/// @brief Method GetVertexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetVertexData(int32_t  stream) ;

/// @brief Method GetVertexDataPtr, addr 0x1822564c0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetVertexDataPtr(::System::IntPtr  self, int32_t  stream) ;

/// @brief Method GetVertexDataSize, addr 0x1822564d0, size 0x10, virtual false, abstract: false, final false
static inline uint64_t GetVertexDataSize(::System::IntPtr  self, int32_t  stream) ;

/// @brief Method GetVertices, addr 0x1822564e0, size 0x60, virtual false, abstract: false, final false
inline void GetVertices(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  outVertices) ;

/// @brief Method HasVertexAttribute, addr 0x182256550, size 0x20, virtual false, abstract: false, final false
inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method HasVertexAttribute, addr 0x182256540, size 0x10, virtual false, abstract: false, final false
static inline bool HasVertexAttribute(::System::IntPtr  self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method SetIndexBufferParams, addr 0x182256580, size 0x20, virtual false, abstract: false, final false
inline void SetIndexBufferParams(int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  format) ;

/// @brief Method SetIndexBufferParamsImpl, addr 0x182256570, size 0x10, virtual false, abstract: false, final false
static inline void SetIndexBufferParamsImpl(::System::IntPtr  self, int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  indexFormat) ;

/// @brief Method SetSubMesh, addr 0x1822565d0, size 0x70, virtual false, abstract: false, final false
inline void SetSubMesh(int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshCount, addr 0x1822565a0, size 0x10, virtual false, abstract: false, final false
static inline void SetSubMeshCount(::System::IntPtr  self, int32_t  count) ;

/// @brief Method SetSubMeshImpl, addr 0x1822565c0, size 0x10, virtual false, abstract: false, final false
static inline void SetSubMeshImpl(::System::IntPtr  self, int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshImpl_Injected, addr 0x1822565b0, size 0x10, virtual false, abstract: false, final false
static inline void SetSubMeshImpl_Injected(::System::IntPtr  self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertexBufferParams, addr 0x1822566d0, size 0x90, virtual false, abstract: false, final false
inline void SetVertexBufferParams(int32_t  vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// @brief Method SetVertexBufferParamsFromArray, addr 0x182256650, size 0x80, virtual false, abstract: false, final false
static inline void SetVertexBufferParamsFromArray(::System::IntPtr  self, int32_t  vertexCount, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0x182256640, size 0x10, virtual false, abstract: false, final false
static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr  self, int32_t  vertexCount, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  attributes) ;

/// @brief Method get_subMeshCount, addr 0x182256760, size 0x20, virtual false, abstract: false, final false
inline int32_t get_subMeshCount() ;

/// @brief Method get_vertexBufferCount, addr 0x182256780, size 0x20, virtual false, abstract: false, final false
inline int32_t get_vertexBufferCount() ;

/// @brief Method get_vertexCount, addr 0x1822567a0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_vertexCount() ;

/// @brief Method set_subMeshCount, addr 0x1822567c0, size 0x20, virtual false, abstract: false, final false
inline void set_subMeshCount(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Mesh_MeshData() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None }]
constexpr Mesh_MeshData(::System::IntPtr  m_Ptr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10577};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_MeshData, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Mesh_MeshData) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Mesh/MeshDataArray
struct CORDL_TYPE Mesh_MeshDataArray {
public:
// Declarations
 __declspec(property(get=get_Item)) ::UnityEngine::Mesh_MeshData  Item[];

 __declspec(property(get=get_Length)) int32_t  Length;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AcquireMeshDataCopy, addr 0x182255b80, size 0x60, virtual false, abstract: false, final false
static inline void AcquireMeshDataCopy(::UnityEngine::Mesh*  mesh, ::System::IntPtr*  datas) ;

/// @brief Method AcquireMeshDataCopy_Injected, addr 0x182255b70, size 0x10, virtual false, abstract: false, final false
static inline void AcquireMeshDataCopy_Injected(::System::IntPtr  mesh, ::System::IntPtr*  datas) ;

/// @brief Method AcquireMeshDatasCopy, addr 0x182255bf0, size 0x50, virtual false, abstract: false, final false
static inline void AcquireMeshDatasCopy(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method AcquireMeshDatasCopy_Injected, addr 0x182255be0, size 0x10, virtual false, abstract: false, final false
static inline void AcquireMeshDatasCopy_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method AcquireReadOnlyMeshData, addr 0x182255c50, size 0x60, virtual false, abstract: false, final false
static inline void AcquireReadOnlyMeshData(::UnityEngine::Mesh*  mesh, ::System::IntPtr*  datas) ;

/// @brief Method AcquireReadOnlyMeshData_Injected, addr 0x182255c40, size 0x10, virtual false, abstract: false, final false
static inline void AcquireReadOnlyMeshData_Injected(::System::IntPtr  mesh, ::System::IntPtr*  datas) ;

/// @brief Method AcquireReadOnlyMeshDatas, addr 0x182255cc0, size 0x50, virtual false, abstract: false, final false
static inline void AcquireReadOnlyMeshDatas(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method AcquireReadOnlyMeshDatas_Injected, addr 0x182255cb0, size 0x10, virtual false, abstract: false, final false
static inline void AcquireReadOnlyMeshDatas_Injected(::ArrayW<::UnityEngine::Mesh*>  meshes, ::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method ApplyToMeshAndDispose, addr 0x182255d10, size 0x120, virtual false, abstract: false, final false
inline void ApplyToMeshAndDispose(::UnityEngine::Mesh*  mesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method ApplyToMeshImpl, addr 0x182255e40, size 0x70, virtual false, abstract: false, final false
static inline void ApplyToMeshImpl(::UnityEngine::Mesh*  mesh, ::System::IntPtr  data, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method ApplyToMeshImpl_Injected, addr 0x182255e30, size 0x10, virtual false, abstract: false, final false
static inline void ApplyToMeshImpl_Injected(::System::IntPtr  mesh, ::System::IntPtr  data, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method CreateNewMeshDatas, addr 0x182255eb0, size 0x10, virtual false, abstract: false, final false
static inline void CreateNewMeshDatas(::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method Dispose, addr 0x182255ec0, size 0x60, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method ReleaseMeshDatas, addr 0x182255f20, size 0x10, virtual false, abstract: false, final false
static inline void ReleaseMeshDatas(::System::IntPtr*  datas, int32_t  count) ;

/// @brief Method .ctor, addr 0x182255f30, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Mesh*  mesh, bool  checkReadWrite, bool  createAsCopy) ;

/// @brief Method .ctor, addr 0x182256180, size 0x220, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Mesh*>  meshes, int32_t  meshesCount, bool  checkReadWrite, bool  createAsCopy) ;

/// @brief Method .ctor, addr 0x1822560e0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  meshesCount) ;

/// @brief Method get_Item, addr 0x180bd4b40, size 0x160, virtual false, abstract: false, final false
inline ::UnityEngine::Mesh_MeshData get_Item(int32_t  index) ;

/// @brief Method get_Length, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr Mesh_MeshDataArray() ;

// Ctor Parameters [CppParam { name: "m_Ptrs", ty: "::System::IntPtr*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Mesh_MeshDataArray(::System::IntPtr*  m_Ptrs, int32_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Ptrs, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr*  m_Ptrs;

/// @brief Field m_Length, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Mesh_MeshDataArray, m_Ptrs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Mesh_MeshDataArray, m_Length) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Mesh_MeshDataArray) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Mesh
class CORDL_TYPE Mesh : public ::UnityEngine::Object {
public:
// Declarations
using LodSelectionCurve = ::UnityEngine::Mesh_LodSelectionCurve;

using MeshData = ::UnityEngine::Mesh_MeshData;

using MeshDataArray = ::UnityEngine::Mesh_MeshDataArray;

 __declspec(property(get=get_bounds, put=set_bounds)) ::UnityEngine::Bounds  bounds;

 __declspec(property(get=get_canAccess)) bool  canAccess;

 __declspec(property(get=get_colors, put=set_colors)) ::ArrayW<::UnityEngine::Color>  colors;

 __declspec(property(get=get_colors32, put=set_colors32)) ::ArrayW<::UnityEngine::Color32>  colors32;

 __declspec(property(get=get_indexBufferTarget, put=set_indexBufferTarget)) ::UnityEngine::GraphicsBuffer_Target  indexBufferTarget;

 __declspec(property(get=get_indexFormat, put=set_indexFormat)) ::UnityEngine::Rendering::IndexFormat  indexFormat;

 __declspec(property(get=get_isReadable)) bool  isReadable;

 __declspec(property(get=get_lodCount)) int32_t  lodCount;

 __declspec(property(get=get_lodSelectionCurve)) ::UnityEngine::Mesh_LodSelectionCurve  lodSelectionCurve;

 __declspec(property(get=get_normals, put=set_normals)) ::ArrayW<::UnityEngine::Vector3>  normals;

 __declspec(property(get=get_subMeshCount, put=set_subMeshCount)) int32_t  subMeshCount;

 __declspec(property(get=get_tangents, put=set_tangents)) ::ArrayW<::UnityEngine::Vector4>  tangents;

 __declspec(property(get=get_triangles, put=set_triangles)) ::ArrayW<int32_t>  triangles;

 __declspec(property(put=set_uv)) ::ArrayW<::UnityEngine::Vector2>  uv;

 __declspec(property(put=set_uv2)) ::ArrayW<::UnityEngine::Vector2>  uv2;

 __declspec(property(get=get_vertexBufferTarget, put=set_vertexBufferTarget)) ::UnityEngine::GraphicsBuffer_Target  vertexBufferTarget;

 __declspec(property(get=get_vertexCount)) int32_t  vertexCount;

 __declspec(property(get=get_vertices, put=set_vertices)) ::ArrayW<::UnityEngine::Vector3>  vertices;

/// @brief Method AcquireReadOnlyMeshData, addr 0x1822569a0, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::UnityEngine::Mesh*  mesh) ;

/// @brief Method AcquireReadOnlyMeshData, addr 0x1822569d0, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Mesh_MeshDataArray AcquireReadOnlyMeshData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  meshes) ;

/// @brief Method AllocateWritableMeshData, addr 0x182256a40, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Mesh_MeshDataArray AllocateWritableMeshData(int32_t  meshCount) ;

/// @brief Method ApplyAndDisposeWritableMeshData, addr 0x182256a60, size 0xd0, virtual false, abstract: false, final false
static inline void ApplyAndDisposeWritableMeshData(::UnityEngine::Mesh_MeshDataArray  data, ::UnityEngine::Mesh*  mesh, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method CheckCanAccessSubmesh, addr 0x182256b50, size 0xf0, virtual false, abstract: false, final false
inline bool CheckCanAccessSubmesh(int32_t  submesh, bool  errorAboutTriangles) ;

/// @brief Method CheckCanAccessSubmeshIndices, addr 0x182256b30, size 0x10, virtual false, abstract: false, final false
inline bool CheckCanAccessSubmeshIndices(int32_t  submesh) ;

/// @brief Method CheckCanAccessSubmeshTriangles, addr 0x182256b40, size 0x10, virtual false, abstract: false, final false
inline bool CheckCanAccessSubmeshTriangles(int32_t  submesh) ;

/// @brief Method CheckIndicesArrayRange, addr 0x182256c40, size 0x220, virtual false, abstract: false, final false
inline void CheckIndicesArrayRange(int32_t  valuesLength, int32_t  start, int32_t  length) ;

/// @brief Method Clear, addr 0x182256ea0, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearImpl, addr 0x182256e70, size 0x30, virtual false, abstract: false, final false
inline void ClearImpl(bool  keepVertexLayout) ;

/// @brief Method ClearImpl_Injected, addr 0x182256e60, size 0x10, virtual false, abstract: false, final false
static inline void ClearImpl_Injected(::System::IntPtr  _unity_self, bool  keepVertexLayout) ;

/// @brief Method CombineMeshes, addr 0x182256ee0, size 0xc0, virtual false, abstract: false, final false
inline void CombineMeshes(::ArrayW<::UnityEngine::CombineInstance>  combine, bool  mergeSubMeshes, bool  useMatrices, bool  hasLightmapData) ;

/// @brief Method CombineMeshesImpl, addr 0x182256ee0, size 0xc0, virtual false, abstract: false, final false
inline void CombineMeshesImpl(::ArrayW<::UnityEngine::CombineInstance>  combine, bool  mergeSubMeshes, bool  useMatrices, bool  hasLightmapData) ;

/// @brief Method CombineMeshesImpl_Injected, addr 0x182256ed0, size 0x10, virtual false, abstract: false, final false
static inline void CombineMeshesImpl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  combine, bool  mergeSubMeshes, bool  useMatrices, bool  hasLightmapData) ;

/// @brief Method DefaultDimensionForChannel, addr 0x182256fa0, size 0x60, virtual false, abstract: false, final false
static inline int32_t DefaultDimensionForChannel(::UnityEngine::Rendering::VertexAttribute  channel) ;

/// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute  channel) ;

/// @brief Method GetAllocArrayFromChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetAllocArrayFromChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// @brief Method GetAllocArrayFromChannelImpl, addr 0x182257010, size 0x50, virtual false, abstract: false, final false
inline ::System::Array* GetAllocArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// @brief Method GetAllocArrayFromChannelImpl_Injected, addr 0x182257000, size 0x10, virtual false, abstract: false, final false
static inline ::System::Array* GetAllocArrayFromChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// @brief Method GetArrayFromChannelImpl, addr 0x182257070, size 0x50, virtual false, abstract: false, final false
inline void GetArrayFromChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values) ;

/// @brief Method GetArrayFromChannelImpl_Injected, addr 0x182257060, size 0x10, virtual false, abstract: false, final false
static inline void GetArrayFromChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values) ;

/// @brief Method GetColors, addr 0x1822570c0, size 0x80, virtual false, abstract: false, final false
inline void GetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors) ;

/// @brief Method GetIndexBuffer, addr 0x1822571a0, size 0x90, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetIndexBuffer() ;

/// @brief Method GetIndexBufferImpl, addr 0x182257150, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetIndexBufferImpl() ;

/// @brief Method GetIndexBufferImpl_Injected, addr 0x182257140, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetIndexBufferImpl_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetIndexCount, addr 0x182257280, size 0x80, virtual false, abstract: false, final false
inline uint32_t GetIndexCount(int32_t  submesh) ;

/// @brief Method GetIndexCountImpl, addr 0x182257240, size 0x40, virtual false, abstract: false, final false
inline uint32_t GetIndexCountImpl(int32_t  submesh, int32_t  meshlod) ;

/// @brief Method GetIndexCountImpl_Injected, addr 0x182257230, size 0x10, virtual false, abstract: false, final false
static inline uint32_t GetIndexCountImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, int32_t  meshlod) ;

/// @brief Method GetIndices, addr 0x182257410, size 0xf0, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetIndices(int32_t  submesh) ;

/// @brief Method GetIndices, addr 0x182257500, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetIndices(int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex) ;

/// @brief Method GetIndicesImpl, addr 0x182257310, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetIndicesImpl(int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetIndicesImpl_Injected, addr 0x182257300, size 0x10, virtual false, abstract: false, final false
static inline void GetIndicesImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetListForChannel(::System::Collections::Generic::List_1<T>*  buffer, int32_t  capacity, ::UnityEngine::Rendering::VertexAttribute  channel, int32_t  dim) ;

/// @brief Method GetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetListForChannel(::System::Collections::Generic::List_1<T>*  buffer, int32_t  capacity, ::UnityEngine::Rendering::VertexAttribute  channel, int32_t  dim, ::UnityEngine::Rendering::VertexAttributeFormat  channelType) ;

/// @brief Method GetLod, addr 0x1822576a0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::MeshLodRange GetLod(int32_t  subMeshIndex, int32_t  levelIndex) ;

/// @brief Method GetLodCount, addr 0x182257610, size 0x30, virtual false, abstract: false, final false
inline int32_t GetLodCount() ;

/// @brief Method GetLodCount_Injected, addr 0x182257600, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetLodCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetLodSelectionCurve, addr 0x182257650, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Mesh_LodSelectionCurve GetLodSelectionCurve() ;

/// @brief Method GetLodSelectionCurve_Injected, addr 0x182257640, size 0x10, virtual false, abstract: false, final false
static inline void GetLodSelectionCurve_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Mesh_LodSelectionCurve>  ret) ;

/// @brief Method GetLod_Injected, addr 0x182257690, size 0x10, virtual false, abstract: false, final false
static inline void GetLod_Injected(::System::IntPtr  _unity_self, int32_t  subMeshIndex, int32_t  levelIndex, ::by_ref<::UnityEngine::MeshLodRange>  ret) ;

/// @brief Method GetSubMesh, addr 0x182257700, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t  index) ;

/// @brief Method GetSubMesh_Injected, addr 0x1822576f0, size 0x10, virtual false, abstract: false, final false
static inline void GetSubMesh_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  ret) ;

/// @brief Method GetTopology, addr 0x1822577a0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::MeshTopology GetTopology(int32_t  submesh) ;

/// @brief Method GetTopologyImpl, addr 0x182257760, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::MeshTopology GetTopologyImpl(int32_t  submesh) ;

/// @brief Method GetTopologyImpl_Injected, addr 0x182257750, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::MeshTopology GetTopologyImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh) ;

/// @brief Method GetTriangles, addr 0x182257a30, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetTriangles(int32_t  submesh, bool  applyBaseVertex) ;

/// @brief Method GetTriangles, addr 0x182257930, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetTriangles(int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex) ;

/// @brief Method GetTrianglesImpl, addr 0x182257830, size 0x100, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> GetTrianglesImpl(int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod) ;

/// @brief Method GetTrianglesImpl_Injected, addr 0x182257820, size 0x10, virtual false, abstract: false, final false
static inline void GetTrianglesImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, bool  applyBaseVertex, int32_t  meshlod, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method GetUVChannel, addr 0x182257b30, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t  uvIndex) ;

/// @brief Method GetUVs, addr 0x182257b80, size 0x20, virtual false, abstract: false, final false
inline void GetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  uvs) ;

/// @brief Method GetUVs, addr 0x182257b60, size 0x20, virtual false, abstract: false, final false
inline void GetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs) ;

/// @brief Method GetUVsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void GetUVsImpl(int32_t  uvIndex, ::System::Collections::Generic::List_1<T>*  uvs, int32_t  dim) ;

/// @brief Method GetVertexAttributeDimension, addr 0x182257bb0, size 0x40, virtual false, abstract: false, final false
inline int32_t GetVertexAttributeDimension(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeDimension_Injected, addr 0x182257ba0, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetVertexAttributeDimension_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeFormat, addr 0x182257c00, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeFormat_Injected, addr 0x182257bf0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeOffset, addr 0x182257c50, size 0x40, virtual false, abstract: false, final false
inline int32_t GetVertexAttributeOffset(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeOffset_Injected, addr 0x182257c40, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetVertexAttributeOffset_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeStream, addr 0x182257ca0, size 0x40, virtual false, abstract: false, final false
inline int32_t GetVertexAttributeStream(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexAttributeStream_Injected, addr 0x182257c90, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetVertexAttributeStream_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method GetVertexBuffer, addr 0x182257d90, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetVertexBuffer(int32_t  index) ;

/// @brief Method GetVertexBufferImpl, addr 0x182257cf0, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer* GetVertexBufferImpl(int32_t  index) ;

/// @brief Method GetVertexBufferImpl_Injected, addr 0x182257ce0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetVertexBufferImpl_Injected(::System::IntPtr  _unity_self, int32_t  index) ;

/// @brief Method GetVertexBufferStride, addr 0x182257d50, size 0x40, virtual false, abstract: false, final false
inline int32_t GetVertexBufferStride(int32_t  stream) ;

/// @brief Method GetVertexBufferStride_Injected, addr 0x182257d40, size 0x10, virtual false, abstract: false, final false
static inline int32_t GetVertexBufferStride_Injected(::System::IntPtr  _unity_self, int32_t  stream) ;

/// @brief Method HasVertexAttribute, addr 0x182257e40, size 0x40, virtual false, abstract: false, final false
inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method HasVertexAttribute_Injected, addr 0x182257e30, size 0x10, virtual false, abstract: false, final false
static inline bool HasVertexAttribute_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method Internal_Create, addr 0x182257e80, size 0x10, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Mesh*  mono) ;

/// @brief Method MarkDynamic, addr 0x182257ed0, size 0x60, virtual false, abstract: false, final false
inline void MarkDynamic() ;

/// @brief Method MarkDynamicImpl, addr 0x182257ea0, size 0x30, virtual false, abstract: false, final false
inline void MarkDynamicImpl() ;

/// @brief Method MarkDynamicImpl_Injected, addr 0x182257e90, size 0x10, virtual false, abstract: false, final false
static inline void MarkDynamicImpl_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::Mesh* New_ctor() ;

/// @brief Method PrintErrorCantAccessChannel, addr 0x182257f40, size 0x30, virtual false, abstract: false, final false
inline void PrintErrorCantAccessChannel(::UnityEngine::Rendering::VertexAttribute  ch) ;

/// @brief Method PrintErrorCantAccessChannel_Injected, addr 0x182257f30, size 0x10, virtual false, abstract: false, final false
static inline void PrintErrorCantAccessChannel_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  ch) ;

/// @brief Method PrintErrorCantAccessIndices, addr 0x182257f70, size 0x30, virtual false, abstract: false, final false
inline void PrintErrorCantAccessIndices() ;

/// @brief Method RecalculateBounds, addr 0x182257fe0, size 0x80, virtual false, abstract: false, final false
inline void RecalculateBounds() ;

/// @brief Method RecalculateBounds, addr 0x182258060, size 0x90, virtual false, abstract: false, final false
inline void RecalculateBounds(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateBoundsImpl, addr 0x182257fb0, size 0x30, virtual false, abstract: false, final false
inline void RecalculateBoundsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateBoundsImpl_Injected, addr 0x182257fa0, size 0x10, virtual false, abstract: false, final false
static inline void RecalculateBoundsImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateNormals, addr 0x182258130, size 0x80, virtual false, abstract: false, final false
inline void RecalculateNormals() ;

/// @brief Method RecalculateNormals, addr 0x1822581b0, size 0x90, virtual false, abstract: false, final false
inline void RecalculateNormals(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateNormalsImpl, addr 0x182258100, size 0x30, virtual false, abstract: false, final false
inline void RecalculateNormalsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateNormalsImpl_Injected, addr 0x1822580f0, size 0x10, virtual false, abstract: false, final false
static inline void RecalculateNormalsImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateTangents, addr 0x182258280, size 0x80, virtual false, abstract: false, final false
inline void RecalculateTangents() ;

/// @brief Method RecalculateTangents, addr 0x182258300, size 0x90, virtual false, abstract: false, final false
inline void RecalculateTangents(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateTangentsImpl, addr 0x182258250, size 0x30, virtual false, abstract: false, final false
inline void RecalculateTangentsImpl(::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method RecalculateTangentsImpl_Injected, addr 0x182258240, size 0x10, virtual false, abstract: false, final false
static inline void RecalculateTangentsImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::ArrayW<T>  values, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::ArrayW<T>  values, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannelImpl, addr 0x1822583a0, size 0x50, virtual false, abstract: false, final false
inline void SetArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetArrayForChannelImpl_Injected, addr 0x182258390, size 0x10, virtual false, abstract: false, final false
static inline void SetArrayForChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetColors, addr 0x182258470, size 0x60, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors) ;

/// @brief Method SetColors, addr 0x182258500, size 0x40, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors, int32_t  start, int32_t  length) ;

/// @brief Method SetColors, addr 0x1822583f0, size 0x50, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color32>*  inColors, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetColors, addr 0x182258540, size 0x50, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  inColors) ;

/// @brief Method SetColors, addr 0x182258440, size 0x30, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  inColors, int32_t  start, int32_t  length) ;

/// @brief Method SetColors, addr 0x1822584d0, size 0x30, virtual false, abstract: false, final false
inline void SetColors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  inColors, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetIndices, addr 0x1822587c0, size 0xd0, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x1822586e0, size 0xe0, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x182258890, size 0x20, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh) ;

/// @brief Method SetIndices, addr 0x182258e30, size 0x30, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds) ;

/// @brief Method SetIndices, addr 0x182258bb0, size 0xe0, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<int32_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x182258c90, size 0xd0, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<uint16_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x182258d60, size 0xd0, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<uint16_t>  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x182258600, size 0xe0, virtual false, abstract: false, final false
inline void SetIndices(::ArrayW<uint16_t>  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x1822589b0, size 0x100, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x182258ab0, size 0x100, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, int32_t  indicesStart, int32_t  indicesLength, ::UnityEngine::MeshTopology  topology, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndices, addr 0x1822588b0, size 0x100, virtual false, abstract: false, final false
inline void SetIndices(::System::Collections::Generic::List_1<int32_t>*  indices, ::UnityEngine::MeshTopology  topology, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetIndicesImpl, addr 0x1822585a0, size 0x60, virtual false, abstract: false, final false
inline void SetIndicesImpl(int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex, int32_t  meshlod) ;

/// @brief Method SetIndicesImpl_Injected, addr 0x182258590, size 0x10, virtual false, abstract: false, final false
static inline void SetIndicesImpl_Injected(::System::IntPtr  _unity_self, int32_t  submesh, ::UnityEngine::MeshTopology  topology, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  indices, int32_t  arrayStart, int32_t  arraySize, bool  calculateBounds, int32_t  baseVertex, int32_t  meshlod) ;

/// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Collections::Generic::List_1<T>*  values, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetListForChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetListForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::System::Collections::Generic::List_1<T>*  values, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNativeArrayForChannelImpl, addr 0x182258e70, size 0x50, virtual false, abstract: false, final false
inline void SetNativeArrayForChannelImpl(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNativeArrayForChannelImpl_Injected, addr 0x182258e60, size 0x10, virtual false, abstract: false, final false
static inline void SetNativeArrayForChannelImpl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  arraySize, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNormals, addr 0x182258f20, size 0x50, virtual false, abstract: false, final false
inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals) ;

/// @brief Method SetNormals, addr 0x182258ef0, size 0x30, virtual false, abstract: false, final false
inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals, int32_t  start, int32_t  length) ;

/// @brief Method SetNormals, addr 0x182258ec0, size 0x30, virtual false, abstract: false, final false
inline void SetNormals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inNormals, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals) ;

/// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals, int32_t  start, int32_t  length) ;

/// @brief Method SetNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetNormals(::Unity::Collections::NativeArray_1<T>  inNormals, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSizedArrayForChannel, addr 0x182258f70, size 0x2f0, virtual false, abstract: false, final false
inline void SetSizedArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::Array*  values, int32_t  valuesArrayLength, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSizedNativeArrayForChannel, addr 0x182259260, size 0x2f0, virtual false, abstract: false, final false
inline void SetSizedNativeArrayForChannel(::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  values, int32_t  valuesArrayLength, int32_t  valuesStart, int32_t  valuesCount, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetTangents, addr 0x182259550, size 0x50, virtual false, abstract: false, final false
inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents) ;

/// @brief Method SetTangents, addr 0x1822595d0, size 0x30, virtual false, abstract: false, final false
inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents, int32_t  start, int32_t  length) ;

/// @brief Method SetTangents, addr 0x1822595a0, size 0x30, virtual false, abstract: false, final false
inline void SetTangents(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  inTangents, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetTangents(::Unity::Collections::NativeArray_1<T>  inTangents) ;

/// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetTangents(::Unity::Collections::NativeArray_1<T>  inTangents, int32_t  start, int32_t  length) ;

/// @brief Method SetTangents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetTangents(::Unity::Collections::NativeArray_1<T>  inTangents, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetTriangles, addr 0x182259950, size 0xe0, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh) ;

/// @brief Method SetTriangles, addr 0x182259860, size 0xf0, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0x1822596c0, size 0xd0, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTriangles, addr 0x182259790, size 0xd0, virtual false, abstract: false, final false
inline void SetTriangles(::System::Collections::Generic::List_1<int32_t>*  triangles, int32_t  trianglesStart, int32_t  trianglesLength, int32_t  submesh, int32_t  meshLod, bool  calculateBounds, int32_t  baseVertex) ;

/// @brief Method SetTrianglesImpl, addr 0x182259600, size 0xc0, virtual false, abstract: false, final false
inline void SetTrianglesImpl(int32_t  submesh, ::UnityEngine::Rendering::IndexFormat  indicesFormat, ::System::Array*  triangles, int32_t  trianglesArrayLength, int32_t  start, int32_t  length, bool  calculateBounds, int32_t  baseVertex, int32_t  meshLod) ;

/// @brief Method SetUVs, addr 0x182259bb0, size 0x60, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2>  uvs) ;

/// @brief Method SetUVs, addr 0x182259b50, size 0x30, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2>  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x182259ab0, size 0x40, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector2>  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0x182259d10, size 0x60, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector4>  uvs) ;

/// @brief Method SetUVs, addr 0x182259ca0, size 0x30, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector4>  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x182259a70, size 0x40, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::ArrayW<::UnityEngine::Vector4>  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0x182259af0, size 0x60, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs) ;

/// @brief Method SetUVs, addr 0x182259c10, size 0x30, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x182259cd0, size 0x40, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0x182259c40, size 0x60, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs) ;

/// @brief Method SetUVs, addr 0x182259b80, size 0x30, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x182259a30, size 0x40, virtual false, abstract: false, final false
inline void SetUVs(int32_t  channel, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs) ;

/// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs, int32_t  start, int32_t  length) ;

/// @brief Method SetUVs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<T>  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUvsImpl, addr 0x182259d70, size 0x100, virtual false, abstract: false, final false
inline void SetUvsImpl(int32_t  uvIndex, int32_t  dim, ::System::Array*  uvs, int32_t  arrayStart, int32_t  arraySize, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetUvsImpl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetUvsImpl(int32_t  uvIndex, int32_t  dim, ::System::Collections::Generic::List_1<T>*  uvs, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertices, addr 0x182259ed0, size 0x70, virtual false, abstract: false, final false
inline void SetVertices(::ArrayW<::UnityEngine::Vector3>  inVertices) ;

/// @brief Method SetVertices, addr 0x18225a010, size 0x70, virtual false, abstract: false, final false
inline void SetVertices(::ArrayW<::UnityEngine::Vector3>  inVertices, int32_t  start, int32_t  length) ;

/// @brief Method SetVertices, addr 0x182259f40, size 0x80, virtual false, abstract: false, final false
inline void SetVertices(::ArrayW<::UnityEngine::Vector3>  inVertices, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertices, addr 0x182259fc0, size 0x50, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices) ;

/// @brief Method SetVertices, addr 0x182259ea0, size 0x30, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices, int32_t  start, int32_t  length) ;

/// @brief Method SetVertices, addr 0x182259e70, size 0x30, virtual false, abstract: false, final false
inline void SetVertices(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  inVertices, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices) ;

/// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices, int32_t  start, int32_t  length) ;

/// @brief Method SetVertices, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetVertices(::Unity::Collections::NativeArray_1<T>  inVertices, int32_t  start, int32_t  length, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method UploadMeshData, addr 0x18225a0c0, size 0x60, virtual false, abstract: false, final false
inline void UploadMeshData(bool  markNoLongerReadable) ;

/// @brief Method UploadMeshDataImpl, addr 0x18225a090, size 0x30, virtual false, abstract: false, final false
inline void UploadMeshDataImpl(bool  markNoLongerReadable) ;

/// @brief Method UploadMeshDataImpl_Injected, addr 0x18225a080, size 0x10, virtual false, abstract: false, final false
static inline void UploadMeshDataImpl_Injected(::System::IntPtr  _unity_self, bool  markNoLongerReadable) ;

/// @brief Method .ctor, addr 0x182257e80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bounds, addr 0x18225a130, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_bounds_Injected, addr 0x18225a120, size 0x10, virtual false, abstract: false, final false
static inline void get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret) ;

/// @brief Method get_canAccess, addr 0x18225a180, size 0x30, virtual false, abstract: false, final false
inline bool get_canAccess() ;

/// @brief Method get_canAccess_Injected, addr 0x18225a170, size 0x10, virtual false, abstract: false, final false
static inline bool get_canAccess_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_colors, addr 0x18225a1e0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color> get_colors() ;

/// @brief Method get_colors32, addr 0x18225a1b0, size 0x30, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32> get_colors32() ;

/// @brief Method get_indexBufferTarget, addr 0x18225a200, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget() ;

/// @brief Method get_indexBufferTarget_Injected, addr 0x18225a1f0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer_Target get_indexBufferTarget_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_indexFormat, addr 0x18225a240, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::IndexFormat get_indexFormat() ;

/// @brief Method get_indexFormat_Injected, addr 0x18225a230, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::IndexFormat get_indexFormat_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_isReadable, addr 0x18225a280, size 0x30, virtual false, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_isReadable_Injected, addr 0x18225a270, size 0x10, virtual false, abstract: false, final false
static inline bool get_isReadable_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_lodCount, addr 0x182257610, size 0x30, virtual false, abstract: false, final false
inline int32_t get_lodCount() ;

/// @brief Method get_lodSelectionCurve, addr 0x182257650, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Mesh_LodSelectionCurve get_lodSelectionCurve() ;

/// @brief Method get_normals, addr 0x18225a2b0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_normals() ;

/// @brief Method get_subMeshCount, addr 0x18225a2d0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_subMeshCount() ;

/// @brief Method get_subMeshCount_Injected, addr 0x18225a2c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_subMeshCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_tangents, addr 0x18225a300, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector4> get_tangents() ;

/// @brief Method get_triangles, addr 0x18225a310, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_triangles() ;

/// @brief Method get_vertexBufferTarget, addr 0x18225a3b0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget() ;

/// @brief Method get_vertexBufferTarget_Injected, addr 0x18225a3a0, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer_Target get_vertexBufferTarget_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vertexCount, addr 0x18225a3f0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_vertexCount() ;

/// @brief Method get_vertexCount_Injected, addr 0x18225a3e0, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_vertexCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_vertices, addr 0x18225a420, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_vertices() ;

/// @brief Method set_bounds, addr 0x18225a440, size 0x30, virtual false, abstract: false, final false
inline void set_bounds(::UnityEngine::Bounds  value) ;

/// @brief Method set_bounds_Injected, addr 0x18225a430, size 0x10, virtual false, abstract: false, final false
static inline void set_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  value) ;

/// @brief Method set_colors, addr 0x18225a4a0, size 0x30, virtual false, abstract: false, final false
inline void set_colors(::ArrayW<::UnityEngine::Color>  value) ;

/// @brief Method set_colors32, addr 0x18225a470, size 0x30, virtual false, abstract: false, final false
inline void set_colors32(::ArrayW<::UnityEngine::Color32>  value) ;

/// @brief Method set_indexBufferTarget, addr 0x18225a4e0, size 0x30, virtual false, abstract: false, final false
inline void set_indexBufferTarget(::UnityEngine::GraphicsBuffer_Target  value) ;

/// @brief Method set_indexBufferTarget_Injected, addr 0x18225a4d0, size 0x10, virtual false, abstract: false, final false
static inline void set_indexBufferTarget_Injected(::System::IntPtr  _unity_self, ::UnityEngine::GraphicsBuffer_Target  value) ;

/// @brief Method set_indexFormat, addr 0x18225a520, size 0x30, virtual false, abstract: false, final false
inline void set_indexFormat(::UnityEngine::Rendering::IndexFormat  value) ;

/// @brief Method set_indexFormat_Injected, addr 0x18225a510, size 0x10, virtual false, abstract: false, final false
static inline void set_indexFormat_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::IndexFormat  value) ;

/// @brief Method set_normals, addr 0x18225a550, size 0x30, virtual false, abstract: false, final false
inline void set_normals(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method set_subMeshCount, addr 0x18225a590, size 0x30, virtual false, abstract: false, final false
inline void set_subMeshCount(int32_t  value) ;

/// @brief Method set_subMeshCount_Injected, addr 0x18225a580, size 0x10, virtual false, abstract: false, final false
static inline void set_subMeshCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_tangents, addr 0x18225a5c0, size 0x30, virtual false, abstract: false, final false
inline void set_tangents(::ArrayW<::UnityEngine::Vector4>  value) ;

/// @brief Method set_triangles, addr 0x18225a5f0, size 0x110, virtual false, abstract: false, final false
inline void set_triangles(::ArrayW<int32_t>  value) ;

/// @brief Method set_uv, addr 0x18225a730, size 0x30, virtual false, abstract: false, final false
inline void set_uv(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_uv2, addr 0x18225a700, size 0x30, virtual false, abstract: false, final false
inline void set_uv2(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_vertexBufferTarget, addr 0x18225a770, size 0x30, virtual false, abstract: false, final false
inline void set_vertexBufferTarget(::UnityEngine::GraphicsBuffer_Target  value) ;

/// @brief Method set_vertexBufferTarget_Injected, addr 0x18225a760, size 0x10, virtual false, abstract: false, final false
static inline void set_vertexBufferTarget_Injected(::System::IntPtr  _unity_self, ::UnityEngine::GraphicsBuffer_Target  value) ;

/// @brief Method set_vertices, addr 0x18225a7a0, size 0x20, virtual false, abstract: false, final false
inline void set_vertices(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Mesh(Mesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mesh(Mesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10579};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Mesh) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
