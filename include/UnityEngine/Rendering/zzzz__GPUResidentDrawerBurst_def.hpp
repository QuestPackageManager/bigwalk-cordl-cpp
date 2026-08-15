#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GPUResidentDrawerBurst)
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
struct NativeArray_1_ReadOnly;
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
namespace Unity::Collections {
template<typename TKey,typename TValue>
struct NativeParallelHashMap_2_ReadOnly;
}
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
namespace UnityEngine::Rendering {
struct GPUDrivenPackedMaterialData;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct SmallEntityIdArray;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst*, "UnityEngine.Rendering", "GPUResidentDrawerBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall*, "UnityEngine.Rendering", "GPUResidentDrawerBurst/ClassifyMaterials_000000EA$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate*, "UnityEngine.Rendering", "GPUResidentDrawerBurst/ClassifyMaterials_000000EA$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall*, "UnityEngine.Rendering", "GPUResidentDrawerBurst/FindUnsupportedRenderers_000000EB$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate*, "UnityEngine.Rendering", "GPUResidentDrawerBurst/FindUnsupportedRenderers_000000EB$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall*, "UnityEngine.Rendering", "GPUResidentDrawerBurst/GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate*, "UnityEngine.Rendering", "GPUResidentDrawerBurst/GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/ClassifyMaterials_000000EA$PostfixBurstDelegate
class CORDL_TYPE GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x182089920, size 0xd0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181308320, size 0xd10, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas) ;

static inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814bdbc0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate(GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate(GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17683};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/ClassifyMaterials_000000EA$BurstDirectCall
class CORDL_TYPE GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x182089660, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x182089530, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x182089780, size 0x1a0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall(GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall(GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17684};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/FindUnsupportedRenderers_000000EB$PostfixBurstDelegate
class CORDL_TYPE GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18208e8a0, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  unsupportedMaterials, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>  materialIDArrays, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroups, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedRenderers, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  unsupportedMaterials, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>  materialIDArrays, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroups, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedRenderers) ;

static inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814be840, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate(GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate(GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/FindUnsupportedRenderers_000000EB$BurstDirectCall
class CORDL_TYPE GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18208e520, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18208e3f0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18208e640, size 0x260, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  unsupportedMaterials, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>  materialIDArrays, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroups, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedRenderers) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall(GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall(GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17686};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate
class CORDL_TYPE GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1820940a0, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDatas, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialHash, ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>  filteredMaterials, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDatas, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialHash, ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>  filteredMaterials) ;

static inline ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1814be840, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate(GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate(GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17687};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst/GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall
class CORDL_TYPE GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x182093db0, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x182093c80, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x182093ed0, size 0x1d0, virtual false, abstract: false, final false
static inline void Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDatas, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialHash, ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>  filteredMaterials) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall(GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall(GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17688};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerBurst
class CORDL_TYPE GPUResidentDrawerBurst : public ::System::Object {
public:
// Declarations
using ClassifyMaterials_000000EA$BurstDirectCall = ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$BurstDirectCall;

using ClassifyMaterials_000000EA$PostfixBurstDelegate = ::UnityEngine::Rendering::GPUResidentDrawerBurst_ClassifyMaterials_000000EA$PostfixBurstDelegate;

using FindUnsupportedRenderers_000000EB$BurstDirectCall = ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$BurstDirectCall;

using FindUnsupportedRenderers_000000EB$PostfixBurstDelegate = ::UnityEngine::Rendering::GPUResidentDrawerBurst_FindUnsupportedRenderers_000000EB$PostfixBurstDelegate;

using GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall = ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$BurstDirectCall;

using GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate = ::UnityEngine::Rendering::GPUResidentDrawerBurst_GetMaterialsWithChangedPackedMaterial_000000EC$PostfixBurstDelegate;

/// @brief Method ClassifyMaterials, addr 0x182089780, size 0x1a0, virtual false, abstract: false, final false
static inline void ClassifyMaterials(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas) ;

/// @brief Method ClassifyMaterials$BurstManaged, addr 0x1820884a0, size 0x210, virtual false, abstract: false, final false
static inline void ClassifyMaterials$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::BatchMaterialID>>  batchMaterialHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  supportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedMaterialIDs, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  supportedPackedMaterialDatas) ;

/// @brief Method FindUnsupportedRenderers, addr 0x182090050, size 0x10, virtual false, abstract: false, final false
static inline void FindUnsupportedRenderers(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  unsupportedMaterials, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>  materialIDArrays, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroups, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedRenderers) ;

/// @brief Method FindUnsupportedRenderers$BurstManaged, addr 0x18208ff20, size 0x130, virtual false, abstract: false, final false
static inline void FindUnsupportedRenderers$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  unsupportedMaterials, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::Rendering::SmallEntityIdArray>>  materialIDArrays, ::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::EntityId>>  rendererGroups, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::EntityId>>  unsupportedRenderers) ;

/// @brief Method GetMaterialsWithChangedPackedMaterial, addr 0x182090120, size 0x10, virtual false, abstract: false, final false
static inline void GetMaterialsWithChangedPackedMaterial(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDatas, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialHash, ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>  filteredMaterials) ;

/// @brief Method GetMaterialsWithChangedPackedMaterial$BurstManaged, addr 0x182090060, size 0xc0, virtual false, abstract: false, final false
static inline void GetMaterialsWithChangedPackedMaterial$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  materialIDs, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialDatas, ::by_ref<::Unity::Collections::NativeParallelHashMap_2_ReadOnly<::UnityEngine::EntityId,::UnityEngine::Rendering::GPUDrivenPackedMaterialData>>  packedMaterialHash, ::by_ref<::Unity::Collections::NativeHashSet_1<::UnityEngine::EntityId>>  filteredMaterials) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GPUResidentDrawerBurst() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GPUResidentDrawerBurst(GPUResidentDrawerBurst && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerBurst", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GPUResidentDrawerBurst(GPUResidentDrawerBurst const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17689};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::GPUResidentDrawerBurst) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
