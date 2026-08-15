#pragma once
// IWYU pragma private; include "MA/Flora/InstanceRendererManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__FloraInstanceHandle_def.hpp"
#include "MA/Flora/zzzz__FloraLocalToWorld_def.hpp"
#include "MA/Flora/zzzz__InstanceManager_def.hpp"
#include "MA/Flora/zzzz__InstanceRendererIndex_def.hpp"
#include "MA/Flora/zzzz__NativeDataReference_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceRendererManager)
namespace MA::Flora {
struct FloraInstanceHandle;
}
namespace MA::Flora {
class FloraInstanceRenderer;
}
namespace MA::Flora {
struct InstanceContext;
}
namespace MA::Flora {
struct InstanceRendererIndex;
}
namespace MA::Flora {
struct InstanceRendererManager_GetInstanceHandles;
}
namespace MA::Flora {
struct InstanceRendererManager_RemoveInvalidHandles;
}
namespace MA::InternalBridge {
struct UnityTransformDispatchData;
}
namespace MA::InternalBridge {
struct UnityTypeDispatchData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine {
struct EntityId;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace MA::Flora {
class InstanceRendererManager;
}
namespace MA::Flora {
struct InstanceRendererManager_GetInstanceHandles;
}
namespace MA::Flora {
struct InstanceRendererManager_RemoveInvalidHandles;
}
// Write type traits
MARK_REF_T(::MA::Flora::InstanceRendererManager*);
MARK_VAL_T(::MA::Flora::InstanceRendererManager_GetInstanceHandles);
MARK_VAL_T(::MA::Flora::InstanceRendererManager_RemoveInvalidHandles);
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRendererManager*, "MA.Flora", "InstanceRendererManager");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRendererManager_GetInstanceHandles, "MA.Flora", "InstanceRendererManager/GetInstanceHandles");
DEFINE_IL2CPP_CLASS(::MA::Flora::InstanceRendererManager_RemoveInvalidHandles, "MA.Flora", "InstanceRendererManager/RemoveInvalidHandles");
// Dependencies MA.Flora.FloraInstanceHandle, MA.Flora.FloraLocalToWorld, MA.Flora.InstanceRendererIndex, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.EntityId, UnityEngine.Matrix4x4
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRendererManager/GetInstanceHandles
struct CORDL_TYPE InstanceRendererManager_GetInstanceHandles {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr operator  ::Unity::Jobs::IJobParallelFor*() ;

/// @brief Method Execute, addr 0x18147f350, size 0xe0, virtual true, abstract: false, final true
inline void Execute(int32_t  index) ;

/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceRendererManager_GetInstanceHandles() ;

// Ctor Parameters [CppParam { name: "ChangedIds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>", modifiers: "", def_value: None }, CppParam { name: "LocalToWorldMatrices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>", modifiers: "", def_value: None }, CppParam { name: "RendererIndexHash", ty: "::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>", modifiers: "", def_value: None }, CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "OutHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "OutLocalToWorlds", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>", modifiers: "", def_value: None }]
constexpr InstanceRendererManager_GetInstanceHandles(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  ChangedIds, ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  LocalToWorldMatrices, ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>  RendererIndexHash, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  OutHandles, ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  OutLocalToWorlds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13048};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field ChangedIds, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  ChangedIds;

/// @brief Field LocalToWorldMatrices, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4>  LocalToWorldMatrices;

/// @brief Field RendererIndexHash, offset: 0x20, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>  RendererIndexHash;

/// @brief Field InstanceHandles, offset: 0x30, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles;

/// @brief Field OutHandles, offset: 0x40, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  OutHandles;

/// @brief Field OutLocalToWorlds, offset: 0x50, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraLocalToWorld>  OutLocalToWorlds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceRendererManager_GetInstanceHandles, ChangedIds) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager_GetInstanceHandles, LocalToWorldMatrices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager_GetInstanceHandles, RendererIndexHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager_GetInstanceHandles, InstanceHandles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager_GetInstanceHandles, OutHandles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager_GetInstanceHandles, OutLocalToWorlds) == 0x50, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceRendererManager_GetInstanceHandles) == 0x60, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraInstanceHandle, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.InstanceRendererManager/RemoveInvalidHandles
struct CORDL_TYPE InstanceRendererManager_RemoveInvalidHandles {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x181486040, size 0x70, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceRendererManager_RemoveInvalidHandles() ;

// Ctor Parameters [CppParam { name: "InstanceHandles", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>", modifiers: "", def_value: None }, CppParam { name: "NewLength", ty: "int32_t*", modifiers: "", def_value: None }]
constexpr InstanceRendererManager_RemoveInvalidHandles(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles, int32_t*  NewLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13049};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field InstanceHandles, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  InstanceHandles;

/// @brief Field NewLength, offset: 0x10, size: 0x8, def value: None
 int32_t*  NewLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceRendererManager_RemoveInvalidHandles, InstanceHandles) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager_RemoveInvalidHandles, NewLength) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceRendererManager_RemoveInvalidHandles) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies MA.Flora.FloraInstanceHandle, MA.Flora.InstanceManager, MA.Flora.InstanceRendererIndex, MA.Flora.NativeDataReference`1<T>, System.Object, Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.EntityId
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.InstanceRendererManager
class CORDL_TYPE InstanceRendererManager : public ::System::Object {
public:
// Declarations
using GetInstanceHandles = ::MA::Flora::InstanceRendererManager_GetInstanceHandles;

using RemoveInvalidHandles = ::MA::Flora::InstanceRendererManager_RemoveInvalidHandles;

/// @brief Field m_EntityIds, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_EntityIds, put=__cordl_internal_set_m_EntityIds)) ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  m_EntityIds;

/// @brief Field m_FreeRendererIndices, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_FreeRendererIndices, put=__cordl_internal_set_m_FreeRendererIndices)) ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceRendererIndex>  m_FreeRendererIndices;

/// @brief Field m_InstanceManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InstanceManager, put=__cordl_internal_set_m_InstanceManager)) ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  m_InstanceManager;

/// @brief Field m_Instances, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_Instances, put=__cordl_internal_set_m_Instances)) ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  m_Instances;

/// @brief Field m_NextIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NextIndex, put=__cordl_internal_set_m_NextIndex)) int32_t  m_NextIndex;

/// @brief Field m_RendererIndexHash, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_RendererIndexHash, put=__cordl_internal_set_m_RendererIndexHash)) ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>  m_RendererIndexHash;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Destroy, addr 0x1814835c0, size 0x190, virtual false, abstract: false, final false
inline void Destroy(::MA::Flora::FloraInstanceRenderer*  instanceRenderer) ;

/// @brief Method Dispose, addr 0x181483750, size 0x40, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EntityIdAsIndex, addr 0x181483790, size 0x40, virtual false, abstract: false, final false
static inline int32_t EntityIdAsIndex(::UnityEngine::EntityId  entityId) ;

/// @brief Method GetGameObject, addr 0x1814837d0, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetGameObject(::MA::Flora::InstanceRendererIndex  instanceRendererIndex) ;

/// @brief Method GetInstanceRendererObjects, addr 0x181483830, size 0x270, virtual false, abstract: false, final false
inline void GetInstanceRendererObjects(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  instances, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  sources) ;

/// @brief Method GetRenderSourceObjects, addr 0x181483aa0, size 0x180, virtual false, abstract: false, final false
inline void GetRenderSourceObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  sources) ;

static inline ::MA::Flora::InstanceRendererManager* New_ctor(::MA::Flora::InstanceContext  instanceContext) ;

/// @brief Method OnRendererChanged, addr 0x181483c20, size 0x1c0, virtual false, abstract: false, final false
inline void OnRendererChanged(::MA::InternalBridge::UnityTypeDispatchData  rendererChangedData) ;

/// @brief Method OnTransformDataChanged, addr 0x181483de0, size 0x340, virtual false, abstract: false, final false
inline void OnTransformDataChanged(::by_ref<::MA::InternalBridge::UnityTransformDispatchData>  rendererTransformData) ;

/// @brief Method Register, addr 0x181484120, size 0x310, virtual false, abstract: false, final false
inline bool Register(::MA::Flora::FloraInstanceRenderer*  instanceRenderer) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId> const& __cordl_internal_get_m_EntityIds() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>& __cordl_internal_get_m_EntityIds() ;

constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceRendererIndex> const& __cordl_internal_get_m_FreeRendererIndices() const;

constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceRendererIndex>& __cordl_internal_get_m_FreeRendererIndices() ;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager> const& __cordl_internal_get_m_InstanceManager() const;

constexpr ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>& __cordl_internal_get_m_InstanceManager() ;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle> const& __cordl_internal_get_m_Instances() const;

constexpr ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>& __cordl_internal_get_m_Instances() ;

constexpr int32_t const& __cordl_internal_get_m_NextIndex() const;

constexpr int32_t& __cordl_internal_get_m_NextIndex() ;

constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex> const& __cordl_internal_get_m_RendererIndexHash() const;

constexpr ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>& __cordl_internal_get_m_RendererIndexHash() ;

constexpr void __cordl_internal_set_m_EntityIds(::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  value) ;

constexpr void __cordl_internal_set_m_FreeRendererIndices(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceRendererIndex>  value) ;

constexpr void __cordl_internal_set_m_InstanceManager(::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  value) ;

constexpr void __cordl_internal_set_m_Instances(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  value) ;

constexpr void __cordl_internal_set_m_NextIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_RendererIndexHash(::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>  value) ;

/// @brief Method .ctor, addr 0x181484430, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::MA::Flora::InstanceContext  instanceContext) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstanceRendererManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstanceRendererManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceRendererManager(InstanceRendererManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceRendererManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceRendererManager(InstanceRendererManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13050};

/// @brief Field m_InstanceManager, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::NativeDataReference_1<::MA::Flora::InstanceManager>  ___m_InstanceManager;

/// @brief Field m_NextIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_NextIndex;

/// @brief Field m_FreeRendererIndices, offset: 0x20, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::MA::Flora::InstanceRendererIndex>  ___m_FreeRendererIndices;

/// @brief Field m_RendererIndexHash, offset: 0x38, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<::UnityEngine::EntityId,::MA::Flora::InstanceRendererIndex>  ___m_RendererIndexHash;

/// @brief Field m_Instances, offset: 0x48, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceHandle>  ___m_Instances;

/// @brief Field m_EntityIds, offset: 0x58, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::EntityId>  ___m_EntityIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::InstanceRendererManager, ___m_InstanceManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager, ___m_NextIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager, ___m_FreeRendererIndices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager, ___m_RendererIndexHash) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager, ___m_Instances) == 0x48, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::InstanceRendererManager, ___m_EntityIds) == 0x58, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::InstanceRendererManager) == 0x68, "Size mismatch!");

} // namespace end def MA::Flora
