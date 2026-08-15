#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullingBatcherBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCullingBatcherBurst)
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
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2;
}
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
namespace UnityEngine::Rendering {
struct BatchMeshID;
}
namespace UnityEngine::Rendering {
struct DrawBatch;
}
namespace UnityEngine::Rendering {
struct DrawInstance;
}
namespace UnityEngine::Rendering {
struct DrawKey;
}
namespace UnityEngine::Rendering {
struct DrawRange;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
struct GPUDrivenRendererGroupData;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct RangeKey;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst/CreateDrawBatches_0000018C$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst/CreateDrawBatches_0000018C$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst/RemoveDrawInstanceIndices_00000188$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate*, "UnityEngine.Rendering", "InstanceCullingBatcherBurst/RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst/RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate
class CORDL_TYPE InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1820abb90, size 0x150, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  drawInstanceIndices, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181309030, size 0x1790, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  drawInstanceIndices, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

static inline ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1820abce0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate(InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate(InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst/RemoveDrawInstanceIndices_00000188$BurstDirectCall
class CORDL_TYPE InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1820ab7d0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1820ab6a0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1820ab8f0, size 0x2a0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  drawInstanceIndices, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall(InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall(InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17750};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst/CreateDrawBatches_0000018C$PostfixBurstDelegate
class CORDL_TYPE InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18209f4b0, size 0x320, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>>  batchMeshHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDataHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_12) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1812c0a00, size 0x76e0, virtual true, abstract: false, final false
inline void Invoke(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>>  batchMeshHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDataHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances) ;

static inline ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x18209f7d0, size 0x210, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate(InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate(InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17751};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst/CreateDrawBatches_0000018C$BurstDirectCall
class CORDL_TYPE InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18209f0e0, size 0x100, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18209efd0, size 0x110, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18209f1e0, size 0x2d0, virtual false, abstract: false, final false
static inline void Invoke(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>>  batchMeshHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDataHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall(InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall(InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherBurst
class CORDL_TYPE InstanceCullingBatcherBurst : public ::System::Object {
public:
// Declarations
using CreateDrawBatches_0000018C$BurstDirectCall = ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$BurstDirectCall;

using CreateDrawBatches_0000018C$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceCullingBatcherBurst_CreateDrawBatches_0000018C$PostfixBurstDelegate;

using RemoveDrawInstanceIndices_00000188$BurstDirectCall = ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$BurstDirectCall;

using RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate = ::UnityEngine::Rendering::InstanceCullingBatcherBurst_RemoveDrawInstanceIndices_00000188$PostfixBurstDelegate;

/// @brief Method CreateDrawBatches, addr 0x1820a2400, size 0x70, virtual false, abstract: false, final false
static inline void CreateDrawBatches(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>>  batchMeshHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDataHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances) ;

/// @brief Method CreateDrawBatches$BurstManaged, addr 0x1820a2250, size 0x1b0, virtual false, abstract: false, final false
static inline void CreateDrawBatches$BurstManaged(bool  implicitInstanceIndices, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>>  instances, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>>  batchMeshHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDataHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances) ;

/// @brief Method EditDrawBatch, addr 0x1820a2470, size 0x180, virtual false, abstract: false, final false
static inline ::by_ref<::UnityEngine::Rendering::DrawBatch> EditDrawBatch(::by_ref<::UnityEngine::Rendering::DrawKey>  key, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  subMeshDescriptor, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>  batchHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>  drawBatches) ;

/// @brief Method EditDrawRange, addr 0x1820a25f0, size 0x100, virtual false, abstract: false, final false
static inline ::by_ref<::UnityEngine::Rendering::DrawRange> EditDrawRange(::by_ref<::UnityEngine::Rendering::RangeKey>  key, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>  rangeHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>  drawRanges) ;

/// @brief Method ProcessRenderer, addr 0x1820a26f0, size 0xa10, virtual false, abstract: false, final false
static inline void ProcessRenderer(int32_t  i, bool  implicitInstanceIndices, ::by_ref<::UnityEngine::Rendering::GPUDrivenRendererGroupData>  rendererData, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMeshID>  batchMeshHash, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>  packedMaterialDataHash, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>  batchMaterialHash, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::InstanceHandle>  instances, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>  drawInstances, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>  rangeHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>  drawRanges, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>  batchHash, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>  drawBatches) ;

/// @brief Method RemoveDrawBatch, addr 0x1820a3100, size 0x200, virtual false, abstract: false, final false
static inline void RemoveDrawBatch(::by_ref<::UnityEngine::Rendering::DrawKey>  key, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

/// @brief Method RemoveDrawInstanceIndices, addr 0x1820a3480, size 0x10, virtual false, abstract: false, final false
static inline void RemoveDrawInstanceIndices(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  drawInstanceIndices, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

/// @brief Method RemoveDrawInstanceIndices$BurstManaged, addr 0x1820a3300, size 0x180, virtual false, abstract: false, final false
static inline void RemoveDrawInstanceIndices$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<int32_t>>  drawInstanceIndices, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawInstance>>  drawInstances, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::DrawKey,int32_t>>  batchHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawBatch>>  drawBatches) ;

/// @brief Method RemoveDrawRange, addr 0x1820a3490, size 0xe0, virtual false, abstract: false, final false
static inline void RemoveDrawRange(::by_ref<::UnityEngine::Rendering::RangeKey>  key, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::Rendering::RangeKey,int32_t>>  rangeHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::DrawRange>>  drawRanges) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullingBatcherBurst() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceCullingBatcherBurst(InstanceCullingBatcherBurst && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceCullingBatcherBurst", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceCullingBatcherBurst(InstanceCullingBatcherBurst const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::InstanceCullingBatcherBurst) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
