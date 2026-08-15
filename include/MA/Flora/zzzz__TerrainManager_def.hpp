#pragma once
// IWYU pragma private; include "MA/Flora/TerrainManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__InstanceContext_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "MA/Flora/zzzz__StreamingSphereManager_def.hpp"
#include "MA/Flora/zzzz__TerrainDetailManager_def.hpp"
#include "MA/Flora/zzzz__TerrainSnapshotRefresh_def.hpp"
#include "MA/Flora/zzzz__TerrainSnapshot_def.hpp"
#include "MA/Flora/zzzz__TerrainTreeManager_def.hpp"
#include "MA/Flora/zzzz__UnsafeBitSet_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__TerrainChangedFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainManager)
namespace MA::Flora {
template<typename T>
struct EntityObjectRef_1;
}
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
class TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall;
}
namespace MA::Flora {
class TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate;
}
namespace MA::Flora {
struct TerrainSnapshotRefresh;
}
namespace MA::Flora {
struct TerrainSystemSettings;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
struct TerrainChangedFlags;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace MA::Flora {
class TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall;
}
namespace MA::Flora {
class TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate;
}
namespace MA::Flora {
struct TerrainManager;
}
// Write type traits
MARK_REF_T(::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*);
MARK_REF_T(::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*);
MARK_VAL_T(::MA::Flora::TerrainManager);
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall*, "MA.Flora", "TerrainManager/ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate*, "MA.Flora", "TerrainManager/ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate");
DEFINE_IL2CPP_CLASS(::MA::Flora::TerrainManager, "MA.Flora", "TerrainManager");
// Dependencies System.MulticastDelegate
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainManager/ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate
class CORDL_TYPE TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180582750, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings) ;

static inline ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x1805827c0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate(TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate(TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13388};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate) == 0x80, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.IntPtr, System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.TerrainManager/ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall
class CORDL_TYPE TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall : public ::System::Object {
public:
// Declarations
/// @brief Field Pointer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pointer, put=setStaticF_Pointer)) ::System::IntPtr  Pointer;

/// @brief Method GetFunctionPointer, addr 0x18150cf50, size 0x120, virtual false, abstract: false, final false
static inline ::System::IntPtr GetFunctionPointer() ;

/// @brief Method GetFunctionPointerDiscard, addr 0x18150ce20, size 0x130, virtual false, abstract: false, final false
static inline void GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method Invoke, addr 0x18150d070, size 0x160, virtual false, abstract: false, final false
static inline void Invoke(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings) ;

static inline ::System::IntPtr getStaticF_Pointer() ;

static inline void setStaticF_Pointer(::System::IntPtr  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall(TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall(TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.InstanceContext, MA.Flora.NativeDataReference`1<T>, MA.Flora.StreamingSphereManager, MA.Flora.TerrainDetailManager, MA.Flora.TerrainSnapshot, MA.Flora.TerrainSnapshotRefresh, MA.Flora.TerrainTreeManager, MA.Flora.UnsafeBitSet, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>, Unity.Jobs.JobHandle, Unity.Profiling.ProfilerMarker, UnityEngine.EntityId, UnityEngine.TerrainChangedFlags
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.TerrainManager
struct CORDL_TYPE TerrainManager {
public:
// Declarations
using ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall = ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$BurstDirectCall;

using ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate = ::MA::Flora::TerrainManager_ScheduleUpdatesWithBurst_00000BE9$PostfixBurstDelegate;

 __declspec(property(get=get_Self)) ::MA::Flora::TerrainManager*  Self;

/// @brief Field UpdateTerrainManagerMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UpdateTerrainManagerMarker, put=setStaticF_UpdateTerrainManagerMarker)) ::Unity::Profiling::ProfilerMarker  UpdateTerrainManagerMarker;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Clear, addr 0x18150e8c0, size 0x3f0, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dispose, addr 0x18150ecb0, size 0x3f0, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetSnapshotRefreshMask, addr 0x18150f0a0, size 0x20, virtual false, abstract: false, final false
static inline ::MA::Flora::TerrainSnapshotRefresh GetSnapshotRefreshMask(::UnityEngine::TerrainChangedFlags  changedFlags) ;

/// @brief Method GetTreeInstanceHandle, addr 0x18150f0c0, size 0xa0, virtual false, abstract: false, final false
inline ::MA::Flora::FloraInstanceHandle GetTreeInstanceHandle(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>  terrain, int32_t  treeIndex) ;

/// @brief Method GetTreeInstanceHandles, addr 0x18150f160, size 0x140, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> GetTreeInstanceHandles(::MA::Flora::EntityObjectRef_1<::UnityW<::UnityEngine::Terrain>>  terrain, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method Initialize, addr 0x18150f2a0, size 0x370, virtual false, abstract: false, final false
inline void Initialize(::MA::Flora::InstanceContext  instanceContext) ;

/// @brief Method MarkTerrainSnapshotDirty, addr 0x18150f610, size 0x60, virtual false, abstract: false, final false
inline void MarkTerrainSnapshotDirty(int32_t  terrainIndex, ::MA::Flora::TerrainSnapshotRefresh  refreshMask) ;

/// @brief Method Register, addr 0x18150f670, size 0x4d0, virtual false, abstract: false, final false
inline void Register(::UnityEngine::Terrain*  terrain) ;

/// @brief Method ScheduleUpdatesWithBurst, addr 0x18150d070, size 0x160, virtual false, abstract: false, final false
static inline void ScheduleUpdatesWithBurst(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings) ;

/// @brief Method ScheduleUpdatesWithBurst$BurstManaged, addr 0x18150fb40, size 0x10, virtual false, abstract: false, final false
static inline void ScheduleUpdatesWithBurst$BurstManaged(::MA::Flora::TerrainManager*  terrainSystem, ::MA::Flora::TerrainSystemSettings*  settings) ;

/// @brief Method SetDirty, addr 0x18150fb50, size 0x150, virtual false, abstract: false, final false
inline void SetDirty(::UnityEngine::EntityId  terrainInstanceId, ::UnityEngine::TerrainChangedFlags  changedFlags) ;

/// @brief Method SetHeightmapDirty, addr 0x18150fca0, size 0x20, virtual false, abstract: false, final false
inline void SetHeightmapDirty(::UnityEngine::EntityId  terrainInstanceId) ;

/// @brief Method SetSettingsDirty, addr 0x18150fcc0, size 0x120, virtual false, abstract: false, final false
inline void SetSettingsDirty(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  terrainInstanceIds) ;

/// @brief Method SetTransformDirty, addr 0x18150fde0, size 0x20, virtual false, abstract: false, final false
inline void SetTransformDirty(::UnityEngine::EntityId  terrainInstanceId) ;

/// @brief Method Unregister, addr 0x18150fe00, size 0x230, virtual false, abstract: false, final false
inline void Unregister(::UnityEngine::EntityId  entityId) ;

/// @brief Method Update, addr 0x1815105c0, size 0x250, virtual false, abstract: false, final false
inline void Update(::MA::Flora::TerrainSystemSettings  settings) ;

/// @brief Method UpdateInternal, addr 0x181510030, size 0x590, virtual false, abstract: false, final false
inline void UpdateInternal(::by_ref<::MA::Flora::TerrainSystemSettings>  settings) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_UpdateTerrainManagerMarker() ;

/// @brief Method get_Self, addr 0x1802e0ba0, size 0x10, virtual false, abstract: false, final false
inline ::MA::Flora::TerrainManager* get_Self() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_UpdateTerrainManagerMarker(::Unity::Profiling::ProfilerMarker  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TerrainManager() ;

// Ctor Parameters [CppParam { name: "m_NativeContext", ty: "::MA::Flora::InstanceContext", modifiers: "", def_value: None }, CppParam { name: "m_AllocatedIndices", ty: "::MA::Flora::UnsafeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_DirtyTerrainIndices", ty: "::MA::Flora::UnsafeBitSet", modifiers: "", def_value: None }, CppParam { name: "m_TerrainRefreshMasks", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshotRefresh>", modifiers: "", def_value: None }, CppParam { name: "m_FreeIndices", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_TerrainEntityIdToIndexMap", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,int32_t>", modifiers: "", def_value: None }, CppParam { name: "m_TerrainEntityIds", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "m_TerrainSnapshots", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshot>", modifiers: "", def_value: None }, CppParam { name: "m_TreeManagers", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainTreeManager>", modifiers: "", def_value: None }, CppParam { name: "m_DetailManagers", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailManager>", modifiers: "", def_value: None }, CppParam { name: "m_TerrainUpdateHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "m_StreamingManager", ty: "::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>", modifiers: "", def_value: None }, CppParam { name: "m_NextDetailTerrainIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainManager(::MA::Flora::InstanceContext  m_NativeContext, ::MA::Flora::UnsafeBitSet  m_AllocatedIndices, ::MA::Flora::UnsafeBitSet  m_DirtyTerrainIndices, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshotRefresh>  m_TerrainRefreshMasks, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  m_FreeIndices, ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,int32_t>  m_TerrainEntityIdToIndexMap, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId>  m_TerrainEntityIds, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshot>  m_TerrainSnapshots, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainTreeManager>  m_TreeManagers, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailManager>  m_DetailManagers, ::Unity::Jobs::JobHandle  m_TerrainUpdateHandle, ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  m_StreamingManager, int32_t  m_NextDetailTerrainIndex) noexcept;

/// @brief Field AllChangedFlags value: I32(268435455)
static ::UnityEngine::TerrainChangedFlags const AllChangedFlags;

/// @brief Field AllHeightmapFlags value: I32(229)
static ::UnityEngine::TerrainChangedFlags const AllHeightmapFlags;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13390};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x170};

/// @brief Field m_NativeContext, offset: 0x0, size: 0x70, def value: None
 ::MA::Flora::InstanceContext  m_NativeContext;

/// @brief Field m_AllocatedIndices, offset: 0x70, size: 0x20, def value: None
 ::MA::Flora::UnsafeBitSet  m_AllocatedIndices;

/// @brief Field m_DirtyTerrainIndices, offset: 0x90, size: 0x20, def value: None
 ::MA::Flora::UnsafeBitSet  m_DirtyTerrainIndices;

/// @brief Field m_TerrainRefreshMasks, offset: 0xb0, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshotRefresh>  m_TerrainRefreshMasks;

/// @brief Field m_FreeIndices, offset: 0xc8, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<int32_t>  m_FreeIndices;

/// @brief Field m_TerrainEntityIdToIndexMap, offset: 0xe0, size: 0x10, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<::UnityEngine::EntityId,int32_t>  m_TerrainEntityIdToIndexMap;

/// @brief Field m_TerrainEntityIds, offset: 0xf0, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::UnityEngine::EntityId>  m_TerrainEntityIds;

/// @brief Field m_TerrainSnapshots, offset: 0x108, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainSnapshot>  m_TerrainSnapshots;

/// @brief Field m_TreeManagers, offset: 0x120, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainTreeManager>  m_TreeManagers;

/// @brief Field m_DetailManagers, offset: 0x138, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::TerrainDetailManager>  m_DetailManagers;

/// @brief Field m_TerrainUpdateHandle, offset: 0x150, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  m_TerrainUpdateHandle;

/// @brief Field m_StreamingManager, offset: 0x160, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::StreamingSphereManager>  m_StreamingManager;

/// @brief Field m_NextDetailTerrainIndex, offset: 0x168, size: 0x4, def value: None
 int32_t  m_NextDetailTerrainIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::TerrainManager, m_NativeContext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_AllocatedIndices) == 0x70, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_DirtyTerrainIndices) == 0x90, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_TerrainRefreshMasks) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_FreeIndices) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_TerrainEntityIdToIndexMap) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_TerrainEntityIds) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_TerrainSnapshots) == 0x108, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_TreeManagers) == 0x120, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_DetailManagers) == 0x138, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_TerrainUpdateHandle) == 0x150, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_StreamingManager) == 0x160, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::TerrainManager, m_NextDetailTerrainIndex) == 0x168, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::TerrainManager) == 0x170, "Size mismatch!");

} // namespace end def MA::Flora
