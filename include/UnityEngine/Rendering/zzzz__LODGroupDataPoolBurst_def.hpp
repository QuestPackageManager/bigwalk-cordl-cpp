#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LODGroupDataPoolBurst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LODGroupDataPoolBurst)
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
struct GPUInstanceIndex;
}
namespace UnityEngine::Rendering {
struct LODGroupCullingData;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
struct LODGroupData;
}
namespace UnityEngine {
struct EntityId;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall;
}
namespace UnityEngine::Rendering {
class LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*);
MARK_REF_T(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst*, "UnityEngine.Rendering", "LODGroupDataPoolBurst");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall*, "UnityEngine.Rendering", "LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate*, "UnityEngine.Rendering", "LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall*, "UnityEngine.Rendering", "LODGroupDataPoolBurst/FreeLODGroupData_000002F2$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate*, "UnityEngine.Rendering", "LODGroupDataPoolBurst/FreeLODGroupData_000002F2$PostfixBurstDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/FreeLODGroupData_000002F2$PostfixBurstDelegate
class CORDL_TYPE LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1820ae570, size 0x150, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  destroyedLODGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5) ;

/// @brief Method EndInvoke, addr 0x180dae9a0, size 0x21b0, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1805522b0, size 0xe0, virtual true, abstract: false, final false
inline int32_t Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  destroyedLODGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles) ;

static inline ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1820ae6c0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate(LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate(LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17844};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/FreeLODGroupData_000002F2$BurstDirectCall
class CORDL_TYPE LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1820ae240, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1820ae110, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1820ae360, size 0x210, virtual false, abstract: false, final false
static inline int32_t Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  destroyedLODGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall(LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall(LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17845};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate
class CORDL_TYPE LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1820ad7e0, size 0x1c0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  lodGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>  lodGroupCullingData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupInstances, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7) ;

/// @brief Method EndInvoke, addr 0x180dae9a0, size 0x21b0, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x181309030, size 0x1790, virtual true, abstract: false, final false
inline int32_t Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  lodGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>  lodGroupCullingData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupInstances) ;

static inline ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1820ad9a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17846};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst/AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall
class CORDL_TYPE LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x1820ad420, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x1820ad2f0, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1820ad540, size 0x2a0, virtual false, abstract: false, final false
static inline int32_t Invoke(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  lodGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>  lodGroupCullingData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupInstances) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall(LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17847};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.LODGroupDataPoolBurst
class CORDL_TYPE LODGroupDataPoolBurst : public ::System::Object {
public:
// Declarations
using AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall = ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$BurstDirectCall;

using AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate = ::UnityEngine::Rendering::LODGroupDataPoolBurst_AllocateOrGetLODGroupDataInstances_000002F3$PostfixBurstDelegate;

using FreeLODGroupData_000002F2$BurstDirectCall = ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$BurstDirectCall;

using FreeLODGroupData_000002F2$PostfixBurstDelegate = ::UnityEngine::Rendering::LODGroupDataPoolBurst_FreeLODGroupData_000002F2$PostfixBurstDelegate;

/// @brief Method AllocateOrGetLODGroupDataInstances, addr 0x1820b13f0, size 0x10, virtual false, abstract: false, final false
static inline int32_t AllocateOrGetLODGroupDataInstances(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  lodGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>  lodGroupCullingData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupInstances) ;

/// @brief Method AllocateOrGetLODGroupDataInstances$BurstManaged, addr 0x1820b1290, size 0x160, virtual false, abstract: false, final false
static inline int32_t AllocateOrGetLODGroupDataInstances$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  lodGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupCullingData>>  lodGroupCullingData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupInstances) ;

/// @brief Method FreeLODGroupData, addr 0x1820b1500, size 0x10, virtual false, abstract: false, final false
static inline int32_t FreeLODGroupData(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  destroyedLODGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles) ;

/// @brief Method FreeLODGroupData$BurstManaged, addr 0x1820b1400, size 0x100, virtual false, abstract: false, final false
static inline int32_t FreeLODGroupData$BurstManaged(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>>  destroyedLODGroupsID, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::LODGroupData>>  lodGroupsData, ::by_ref<::Unity::Collections::NativeParallelHashMap_2<int32_t,::UnityEngine::Rendering::GPUInstanceIndex>>  lodGroupDataHash, ::by_ref<::Unity::Collections::NativeList_1<::UnityEngine::Rendering::GPUInstanceIndex>>  freeLODGroupDataHandles) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LODGroupDataPoolBurst() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LODGroupDataPoolBurst(LODGroupDataPoolBurst && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LODGroupDataPoolBurst", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LODGroupDataPoolBurst(LODGroupDataPoolBurst const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17848};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::LODGroupDataPoolBurst) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
